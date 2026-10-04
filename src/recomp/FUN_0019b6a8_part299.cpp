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


void FUN_0019b6a8_part299(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22cec8u: goto label_22cec8;
        case 0x22ceccu: goto label_22cecc;
        case 0x22ced0u: goto label_22ced0;
        case 0x22ced4u: goto label_22ced4;
        case 0x22ced8u: goto label_22ced8;
        case 0x22cedcu: goto label_22cedc;
        case 0x22cee0u: goto label_22cee0;
        case 0x22cee4u: goto label_22cee4;
        case 0x22cee8u: goto label_22cee8;
        case 0x22ceecu: goto label_22ceec;
        case 0x22cef0u: goto label_22cef0;
        case 0x22cef4u: goto label_22cef4;
        case 0x22cef8u: goto label_22cef8;
        case 0x22cefcu: goto label_22cefc;
        case 0x22cf00u: goto label_22cf00;
        case 0x22cf04u: goto label_22cf04;
        case 0x22cf08u: goto label_22cf08;
        case 0x22cf0cu: goto label_22cf0c;
        case 0x22cf10u: goto label_22cf10;
        case 0x22cf14u: goto label_22cf14;
        case 0x22cf18u: goto label_22cf18;
        case 0x22cf1cu: goto label_22cf1c;
        case 0x22cf20u: goto label_22cf20;
        case 0x22cf24u: goto label_22cf24;
        case 0x22cf28u: goto label_22cf28;
        case 0x22cf2cu: goto label_22cf2c;
        case 0x22cf30u: goto label_22cf30;
        case 0x22cf34u: goto label_22cf34;
        case 0x22cf38u: goto label_22cf38;
        case 0x22cf3cu: goto label_22cf3c;
        case 0x22cf40u: goto label_22cf40;
        case 0x22cf44u: goto label_22cf44;
        case 0x22cf48u: goto label_22cf48;
        case 0x22cf4cu: goto label_22cf4c;
        case 0x22cf50u: goto label_22cf50;
        case 0x22cf54u: goto label_22cf54;
        case 0x22cf58u: goto label_22cf58;
        case 0x22cf5cu: goto label_22cf5c;
        case 0x22cf60u: goto label_22cf60;
        case 0x22cf64u: goto label_22cf64;
        case 0x22cf68u: goto label_22cf68;
        case 0x22cf6cu: goto label_22cf6c;
        case 0x22cf70u: goto label_22cf70;
        case 0x22cf74u: goto label_22cf74;
        case 0x22cf78u: goto label_22cf78;
        case 0x22cf7cu: goto label_22cf7c;
        case 0x22cf80u: goto label_22cf80;
        case 0x22cf84u: goto label_22cf84;
        case 0x22cf88u: goto label_22cf88;
        case 0x22cf8cu: goto label_22cf8c;
        case 0x22cf90u: goto label_22cf90;
        case 0x22cf94u: goto label_22cf94;
        case 0x22cf98u: goto label_22cf98;
        case 0x22cf9cu: goto label_22cf9c;
        case 0x22cfa0u: goto label_22cfa0;
        case 0x22cfa4u: goto label_22cfa4;
        case 0x22cfa8u: goto label_22cfa8;
        case 0x22cfacu: goto label_22cfac;
        case 0x22cfb0u: goto label_22cfb0;
        case 0x22cfb4u: goto label_22cfb4;
        case 0x22cfb8u: goto label_22cfb8;
        case 0x22cfbcu: goto label_22cfbc;
        case 0x22cfc0u: goto label_22cfc0;
        case 0x22cfc4u: goto label_22cfc4;
        case 0x22cfc8u: goto label_22cfc8;
        case 0x22cfccu: goto label_22cfcc;
        case 0x22cfd0u: goto label_22cfd0;
        case 0x22cfd4u: goto label_22cfd4;
        case 0x22cfd8u: goto label_22cfd8;
        case 0x22cfdcu: goto label_22cfdc;
        case 0x22cfe0u: goto label_22cfe0;
        case 0x22cfe4u: goto label_22cfe4;
        case 0x22cfe8u: goto label_22cfe8;
        case 0x22cfecu: goto label_22cfec;
        case 0x22cff0u: goto label_22cff0;
        case 0x22cff4u: goto label_22cff4;
        case 0x22cff8u: goto label_22cff8;
        case 0x22cffcu: goto label_22cffc;
        case 0x22d000u: goto label_22d000;
        case 0x22d004u: goto label_22d004;
        case 0x22d008u: goto label_22d008;
        case 0x22d00cu: goto label_22d00c;
        case 0x22d010u: goto label_22d010;
        case 0x22d014u: goto label_22d014;
        case 0x22d018u: goto label_22d018;
        case 0x22d01cu: goto label_22d01c;
        case 0x22d020u: goto label_22d020;
        case 0x22d024u: goto label_22d024;
        case 0x22d028u: goto label_22d028;
        case 0x22d02cu: goto label_22d02c;
        case 0x22d030u: goto label_22d030;
        case 0x22d034u: goto label_22d034;
        case 0x22d038u: goto label_22d038;
        case 0x22d03cu: goto label_22d03c;
        case 0x22d040u: goto label_22d040;
        case 0x22d044u: goto label_22d044;
        case 0x22d048u: goto label_22d048;
        case 0x22d04cu: goto label_22d04c;
        case 0x22d050u: goto label_22d050;
        case 0x22d054u: goto label_22d054;
        case 0x22d058u: goto label_22d058;
        case 0x22d05cu: goto label_22d05c;
        case 0x22d060u: goto label_22d060;
        case 0x22d064u: goto label_22d064;
        case 0x22d068u: goto label_22d068;
        case 0x22d06cu: goto label_22d06c;
        case 0x22d070u: goto label_22d070;
        case 0x22d074u: goto label_22d074;
        case 0x22d078u: goto label_22d078;
        case 0x22d07cu: goto label_22d07c;
        case 0x22d080u: goto label_22d080;
        case 0x22d084u: goto label_22d084;
        case 0x22d088u: goto label_22d088;
        case 0x22d08cu: goto label_22d08c;
        case 0x22d090u: goto label_22d090;
        case 0x22d094u: goto label_22d094;
        case 0x22d098u: goto label_22d098;
        case 0x22d09cu: goto label_22d09c;
        case 0x22d0a0u: goto label_22d0a0;
        case 0x22d0a4u: goto label_22d0a4;
        case 0x22d0a8u: goto label_22d0a8;
        case 0x22d0acu: goto label_22d0ac;
        case 0x22d0b0u: goto label_22d0b0;
        case 0x22d0b4u: goto label_22d0b4;
        case 0x22d0b8u: goto label_22d0b8;
        case 0x22d0bcu: goto label_22d0bc;
        case 0x22d0c0u: goto label_22d0c0;
        case 0x22d0c4u: goto label_22d0c4;
        case 0x22d0c8u: goto label_22d0c8;
        case 0x22d0ccu: goto label_22d0cc;
        case 0x22d0d0u: goto label_22d0d0;
        case 0x22d0d4u: goto label_22d0d4;
        case 0x22d0d8u: goto label_22d0d8;
        case 0x22d0dcu: goto label_22d0dc;
        case 0x22d0e0u: goto label_22d0e0;
        case 0x22d0e4u: goto label_22d0e4;
        case 0x22d0e8u: goto label_22d0e8;
        case 0x22d0ecu: goto label_22d0ec;
        case 0x22d0f0u: goto label_22d0f0;
        case 0x22d0f4u: goto label_22d0f4;
        case 0x22d0f8u: goto label_22d0f8;
        case 0x22d0fcu: goto label_22d0fc;
        case 0x22d100u: goto label_22d100;
        case 0x22d104u: goto label_22d104;
        case 0x22d108u: goto label_22d108;
        case 0x22d10cu: goto label_22d10c;
        case 0x22d110u: goto label_22d110;
        case 0x22d114u: goto label_22d114;
        case 0x22d118u: goto label_22d118;
        case 0x22d11cu: goto label_22d11c;
        case 0x22d120u: goto label_22d120;
        case 0x22d124u: goto label_22d124;
        case 0x22d128u: goto label_22d128;
        case 0x22d12cu: goto label_22d12c;
        case 0x22d130u: goto label_22d130;
        case 0x22d134u: goto label_22d134;
        case 0x22d138u: goto label_22d138;
        case 0x22d13cu: goto label_22d13c;
        case 0x22d140u: goto label_22d140;
        case 0x22d144u: goto label_22d144;
        case 0x22d148u: goto label_22d148;
        case 0x22d14cu: goto label_22d14c;
        case 0x22d150u: goto label_22d150;
        case 0x22d154u: goto label_22d154;
        case 0x22d158u: goto label_22d158;
        case 0x22d15cu: goto label_22d15c;
        case 0x22d160u: goto label_22d160;
        case 0x22d164u: goto label_22d164;
        case 0x22d168u: goto label_22d168;
        case 0x22d16cu: goto label_22d16c;
        case 0x22d170u: goto label_22d170;
        case 0x22d174u: goto label_22d174;
        case 0x22d178u: goto label_22d178;
        case 0x22d17cu: goto label_22d17c;
        case 0x22d180u: goto label_22d180;
        case 0x22d184u: goto label_22d184;
        case 0x22d188u: goto label_22d188;
        case 0x22d18cu: goto label_22d18c;
        case 0x22d190u: goto label_22d190;
        case 0x22d194u: goto label_22d194;
        case 0x22d198u: goto label_22d198;
        case 0x22d19cu: goto label_22d19c;
        case 0x22d1a0u: goto label_22d1a0;
        case 0x22d1a4u: goto label_22d1a4;
        case 0x22d1a8u: goto label_22d1a8;
        case 0x22d1acu: goto label_22d1ac;
        case 0x22d1b0u: goto label_22d1b0;
        case 0x22d1b4u: goto label_22d1b4;
        case 0x22d1b8u: goto label_22d1b8;
        case 0x22d1bcu: goto label_22d1bc;
        case 0x22d1c0u: goto label_22d1c0;
        case 0x22d1c4u: goto label_22d1c4;
        case 0x22d1c8u: goto label_22d1c8;
        case 0x22d1ccu: goto label_22d1cc;
        case 0x22d1d0u: goto label_22d1d0;
        case 0x22d1d4u: goto label_22d1d4;
        case 0x22d1d8u: goto label_22d1d8;
        case 0x22d1dcu: goto label_22d1dc;
        case 0x22d1e0u: goto label_22d1e0;
        case 0x22d1e4u: goto label_22d1e4;
        case 0x22d1e8u: goto label_22d1e8;
        case 0x22d1ecu: goto label_22d1ec;
        case 0x22d1f0u: goto label_22d1f0;
        case 0x22d1f4u: goto label_22d1f4;
        case 0x22d1f8u: goto label_22d1f8;
        case 0x22d1fcu: goto label_22d1fc;
        case 0x22d200u: goto label_22d200;
        case 0x22d204u: goto label_22d204;
        case 0x22d208u: goto label_22d208;
        case 0x22d20cu: goto label_22d20c;
        case 0x22d210u: goto label_22d210;
        case 0x22d214u: goto label_22d214;
        case 0x22d218u: goto label_22d218;
        case 0x22d21cu: goto label_22d21c;
        case 0x22d220u: goto label_22d220;
        case 0x22d224u: goto label_22d224;
        case 0x22d228u: goto label_22d228;
        case 0x22d22cu: goto label_22d22c;
        case 0x22d230u: goto label_22d230;
        case 0x22d234u: goto label_22d234;
        case 0x22d238u: goto label_22d238;
        case 0x22d23cu: goto label_22d23c;
        case 0x22d240u: goto label_22d240;
        case 0x22d244u: goto label_22d244;
        case 0x22d248u: goto label_22d248;
        case 0x22d24cu: goto label_22d24c;
        case 0x22d250u: goto label_22d250;
        case 0x22d254u: goto label_22d254;
        case 0x22d258u: goto label_22d258;
        case 0x22d25cu: goto label_22d25c;
        case 0x22d260u: goto label_22d260;
        case 0x22d264u: goto label_22d264;
        case 0x22d268u: goto label_22d268;
        case 0x22d26cu: goto label_22d26c;
        case 0x22d270u: goto label_22d270;
        case 0x22d274u: goto label_22d274;
        case 0x22d278u: goto label_22d278;
        case 0x22d27cu: goto label_22d27c;
        case 0x22d280u: goto label_22d280;
        case 0x22d284u: goto label_22d284;
        case 0x22d288u: goto label_22d288;
        case 0x22d28cu: goto label_22d28c;
        case 0x22d290u: goto label_22d290;
        case 0x22d294u: goto label_22d294;
        case 0x22d298u: goto label_22d298;
        case 0x22d29cu: goto label_22d29c;
        case 0x22d2a0u: goto label_22d2a0;
        case 0x22d2a4u: goto label_22d2a4;
        case 0x22d2a8u: goto label_22d2a8;
        case 0x22d2acu: goto label_22d2ac;
        case 0x22d2b0u: goto label_22d2b0;
        case 0x22d2b4u: goto label_22d2b4;
        case 0x22d2b8u: goto label_22d2b8;
        case 0x22d2bcu: goto label_22d2bc;
        case 0x22d2c0u: goto label_22d2c0;
        case 0x22d2c4u: goto label_22d2c4;
        case 0x22d2c8u: goto label_22d2c8;
        case 0x22d2ccu: goto label_22d2cc;
        case 0x22d2d0u: goto label_22d2d0;
        case 0x22d2d4u: goto label_22d2d4;
        case 0x22d2d8u: goto label_22d2d8;
        case 0x22d2dcu: goto label_22d2dc;
        case 0x22d2e0u: goto label_22d2e0;
        case 0x22d2e4u: goto label_22d2e4;
        case 0x22d2e8u: goto label_22d2e8;
        case 0x22d2ecu: goto label_22d2ec;
        case 0x22d2f0u: goto label_22d2f0;
        case 0x22d2f4u: goto label_22d2f4;
        case 0x22d2f8u: goto label_22d2f8;
        case 0x22d2fcu: goto label_22d2fc;
        case 0x22d300u: goto label_22d300;
        case 0x22d304u: goto label_22d304;
        case 0x22d308u: goto label_22d308;
        case 0x22d30cu: goto label_22d30c;
        case 0x22d310u: goto label_22d310;
        case 0x22d314u: goto label_22d314;
        case 0x22d318u: goto label_22d318;
        case 0x22d31cu: goto label_22d31c;
        case 0x22d320u: goto label_22d320;
        case 0x22d324u: goto label_22d324;
        case 0x22d328u: goto label_22d328;
        case 0x22d32cu: goto label_22d32c;
        case 0x22d330u: goto label_22d330;
        case 0x22d334u: goto label_22d334;
        case 0x22d338u: goto label_22d338;
        case 0x22d33cu: goto label_22d33c;
        case 0x22d340u: goto label_22d340;
        case 0x22d344u: goto label_22d344;
        case 0x22d348u: goto label_22d348;
        case 0x22d34cu: goto label_22d34c;
        case 0x22d350u: goto label_22d350;
        case 0x22d354u: goto label_22d354;
        case 0x22d358u: goto label_22d358;
        case 0x22d35cu: goto label_22d35c;
        case 0x22d360u: goto label_22d360;
        case 0x22d364u: goto label_22d364;
        case 0x22d368u: goto label_22d368;
        case 0x22d36cu: goto label_22d36c;
        case 0x22d370u: goto label_22d370;
        case 0x22d374u: goto label_22d374;
        case 0x22d378u: goto label_22d378;
        case 0x22d37cu: goto label_22d37c;
        case 0x22d380u: goto label_22d380;
        case 0x22d384u: goto label_22d384;
        case 0x22d388u: goto label_22d388;
        case 0x22d38cu: goto label_22d38c;
        case 0x22d390u: goto label_22d390;
        case 0x22d394u: goto label_22d394;
        case 0x22d398u: goto label_22d398;
        case 0x22d39cu: goto label_22d39c;
        case 0x22d3a0u: goto label_22d3a0;
        case 0x22d3a4u: goto label_22d3a4;
        case 0x22d3a8u: goto label_22d3a8;
        case 0x22d3acu: goto label_22d3ac;
        case 0x22d3b0u: goto label_22d3b0;
        case 0x22d3b4u: goto label_22d3b4;
        case 0x22d3b8u: goto label_22d3b8;
        case 0x22d3bcu: goto label_22d3bc;
        case 0x22d3c0u: goto label_22d3c0;
        case 0x22d3c4u: goto label_22d3c4;
        case 0x22d3c8u: goto label_22d3c8;
        case 0x22d3ccu: goto label_22d3cc;
        case 0x22d3d0u: goto label_22d3d0;
        case 0x22d3d4u: goto label_22d3d4;
        case 0x22d3d8u: goto label_22d3d8;
        case 0x22d3dcu: goto label_22d3dc;
        case 0x22d3e0u: goto label_22d3e0;
        case 0x22d3e4u: goto label_22d3e4;
        case 0x22d3e8u: goto label_22d3e8;
        case 0x22d3ecu: goto label_22d3ec;
        case 0x22d3f0u: goto label_22d3f0;
        case 0x22d3f4u: goto label_22d3f4;
        case 0x22d3f8u: goto label_22d3f8;
        case 0x22d3fcu: goto label_22d3fc;
        case 0x22d400u: goto label_22d400;
        case 0x22d404u: goto label_22d404;
        case 0x22d408u: goto label_22d408;
        case 0x22d40cu: goto label_22d40c;
        case 0x22d410u: goto label_22d410;
        case 0x22d414u: goto label_22d414;
        case 0x22d418u: goto label_22d418;
        case 0x22d41cu: goto label_22d41c;
        case 0x22d420u: goto label_22d420;
        case 0x22d424u: goto label_22d424;
        case 0x22d428u: goto label_22d428;
        case 0x22d42cu: goto label_22d42c;
        case 0x22d430u: goto label_22d430;
        case 0x22d434u: goto label_22d434;
        case 0x22d438u: goto label_22d438;
        case 0x22d43cu: goto label_22d43c;
        case 0x22d440u: goto label_22d440;
        case 0x22d444u: goto label_22d444;
        case 0x22d448u: goto label_22d448;
        case 0x22d44cu: goto label_22d44c;
        case 0x22d450u: goto label_22d450;
        case 0x22d454u: goto label_22d454;
        case 0x22d458u: goto label_22d458;
        case 0x22d45cu: goto label_22d45c;
        case 0x22d460u: goto label_22d460;
        case 0x22d464u: goto label_22d464;
        case 0x22d468u: goto label_22d468;
        case 0x22d46cu: goto label_22d46c;
        case 0x22d470u: goto label_22d470;
        case 0x22d474u: goto label_22d474;
        case 0x22d478u: goto label_22d478;
        case 0x22d47cu: goto label_22d47c;
        case 0x22d480u: goto label_22d480;
        case 0x22d484u: goto label_22d484;
        case 0x22d488u: goto label_22d488;
        case 0x22d48cu: goto label_22d48c;
        case 0x22d490u: goto label_22d490;
        case 0x22d494u: goto label_22d494;
        case 0x22d498u: goto label_22d498;
        case 0x22d49cu: goto label_22d49c;
        case 0x22d4a0u: goto label_22d4a0;
        case 0x22d4a4u: goto label_22d4a4;
        case 0x22d4a8u: goto label_22d4a8;
        case 0x22d4acu: goto label_22d4ac;
        case 0x22d4b0u: goto label_22d4b0;
        case 0x22d4b4u: goto label_22d4b4;
        case 0x22d4b8u: goto label_22d4b8;
        case 0x22d4bcu: goto label_22d4bc;
        case 0x22d4c0u: goto label_22d4c0;
        case 0x22d4c4u: goto label_22d4c4;
        case 0x22d4c8u: goto label_22d4c8;
        case 0x22d4ccu: goto label_22d4cc;
        case 0x22d4d0u: goto label_22d4d0;
        case 0x22d4d4u: goto label_22d4d4;
        case 0x22d4d8u: goto label_22d4d8;
        case 0x22d4dcu: goto label_22d4dc;
        case 0x22d4e0u: goto label_22d4e0;
        case 0x22d4e4u: goto label_22d4e4;
        case 0x22d4e8u: goto label_22d4e8;
        case 0x22d4ecu: goto label_22d4ec;
        case 0x22d4f0u: goto label_22d4f0;
        case 0x22d4f4u: goto label_22d4f4;
        case 0x22d4f8u: goto label_22d4f8;
        case 0x22d4fcu: goto label_22d4fc;
        case 0x22d500u: goto label_22d500;
        case 0x22d504u: goto label_22d504;
        case 0x22d508u: goto label_22d508;
        case 0x22d50cu: goto label_22d50c;
        case 0x22d510u: goto label_22d510;
        case 0x22d514u: goto label_22d514;
        case 0x22d518u: goto label_22d518;
        case 0x22d51cu: goto label_22d51c;
        case 0x22d520u: goto label_22d520;
        case 0x22d524u: goto label_22d524;
        case 0x22d528u: goto label_22d528;
        case 0x22d52cu: goto label_22d52c;
        case 0x22d530u: goto label_22d530;
        case 0x22d534u: goto label_22d534;
        case 0x22d538u: goto label_22d538;
        case 0x22d53cu: goto label_22d53c;
        case 0x22d540u: goto label_22d540;
        case 0x22d544u: goto label_22d544;
        case 0x22d548u: goto label_22d548;
        case 0x22d54cu: goto label_22d54c;
        case 0x22d550u: goto label_22d550;
        case 0x22d554u: goto label_22d554;
        case 0x22d558u: goto label_22d558;
        case 0x22d55cu: goto label_22d55c;
        case 0x22d560u: goto label_22d560;
        case 0x22d564u: goto label_22d564;
        case 0x22d568u: goto label_22d568;
        case 0x22d56cu: goto label_22d56c;
        case 0x22d570u: goto label_22d570;
        case 0x22d574u: goto label_22d574;
        case 0x22d578u: goto label_22d578;
        case 0x22d57cu: goto label_22d57c;
        case 0x22d580u: goto label_22d580;
        case 0x22d584u: goto label_22d584;
        case 0x22d588u: goto label_22d588;
        case 0x22d58cu: goto label_22d58c;
        case 0x22d590u: goto label_22d590;
        case 0x22d594u: goto label_22d594;
        case 0x22d598u: goto label_22d598;
        case 0x22d59cu: goto label_22d59c;
        case 0x22d5a0u: goto label_22d5a0;
        case 0x22d5a4u: goto label_22d5a4;
        case 0x22d5a8u: goto label_22d5a8;
        case 0x22d5acu: goto label_22d5ac;
        case 0x22d5b0u: goto label_22d5b0;
        case 0x22d5b4u: goto label_22d5b4;
        case 0x22d5b8u: goto label_22d5b8;
        case 0x22d5bcu: goto label_22d5bc;
        case 0x22d5c0u: goto label_22d5c0;
        case 0x22d5c4u: goto label_22d5c4;
        case 0x22d5c8u: goto label_22d5c8;
        case 0x22d5ccu: goto label_22d5cc;
        case 0x22d5d0u: goto label_22d5d0;
        case 0x22d5d4u: goto label_22d5d4;
        case 0x22d5d8u: goto label_22d5d8;
        case 0x22d5dcu: goto label_22d5dc;
        case 0x22d5e0u: goto label_22d5e0;
        case 0x22d5e4u: goto label_22d5e4;
        case 0x22d5e8u: goto label_22d5e8;
        case 0x22d5ecu: goto label_22d5ec;
        case 0x22d5f0u: goto label_22d5f0;
        case 0x22d5f4u: goto label_22d5f4;
        case 0x22d5f8u: goto label_22d5f8;
        case 0x22d5fcu: goto label_22d5fc;
        case 0x22d600u: goto label_22d600;
        case 0x22d604u: goto label_22d604;
        case 0x22d608u: goto label_22d608;
        case 0x22d60cu: goto label_22d60c;
        case 0x22d610u: goto label_22d610;
        case 0x22d614u: goto label_22d614;
        case 0x22d618u: goto label_22d618;
        case 0x22d61cu: goto label_22d61c;
        case 0x22d620u: goto label_22d620;
        case 0x22d624u: goto label_22d624;
        case 0x22d628u: goto label_22d628;
        case 0x22d62cu: goto label_22d62c;
        case 0x22d630u: goto label_22d630;
        case 0x22d634u: goto label_22d634;
        case 0x22d638u: goto label_22d638;
        case 0x22d63cu: goto label_22d63c;
        case 0x22d640u: goto label_22d640;
        case 0x22d644u: goto label_22d644;
        case 0x22d648u: goto label_22d648;
        case 0x22d64cu: goto label_22d64c;
        case 0x22d650u: goto label_22d650;
        case 0x22d654u: goto label_22d654;
        case 0x22d658u: goto label_22d658;
        case 0x22d65cu: goto label_22d65c;
        case 0x22d660u: goto label_22d660;
        case 0x22d664u: goto label_22d664;
        case 0x22d668u: goto label_22d668;
        case 0x22d66cu: goto label_22d66c;
        case 0x22d670u: goto label_22d670;
        case 0x22d674u: goto label_22d674;
        case 0x22d678u: goto label_22d678;
        case 0x22d67cu: goto label_22d67c;
        case 0x22d680u: goto label_22d680;
        case 0x22d684u: goto label_22d684;
        case 0x22d688u: goto label_22d688;
        case 0x22d68cu: goto label_22d68c;
        case 0x22d690u: goto label_22d690;
        case 0x22d694u: goto label_22d694;
        default: return;
    }

label_22cec8:
    // 0x22cec8: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x22cec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_22cecc:
    // 0x22cecc: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x22ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
label_22ced0:
    // 0x22ced0: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x22ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22ced4:
    // 0x22ced4: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x22ced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_22ced8:
    // 0x22ced8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22ced8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22cedc:
    // 0x22cedc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22cee0:
    // 0x22cee0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22cee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22cee4:
    // 0x22cee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cee8:
    // 0x22cee8: 0x0  nop
    ctx->pc = 0x22cee8u;
    // NOP
label_22ceec:
    // 0x22ceec: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22ceecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_22cef0:
    // 0x22cef0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22cef0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22cef4:
    // 0x22cef4: 0x0  nop
    ctx->pc = 0x22cef4u;
    // NOP
label_22cef8:
    // 0x22cef8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22cefc:
    if (ctx->pc == 0x22CEFCu) {
        ctx->pc = 0x22CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEF8u;
        // 0x22cefc: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF00u;
        goto label_22cf00;
    }
    ctx->pc = 0x22CEF8u;
    {
        const bool branch_taken_0x22cef8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEF8u;
        // 0x22cefc: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cef8) {
            ctx->pc = 0x22CF14u;
            goto label_22cf14;
        }
    }
    ctx->pc = 0x22CF00u;
label_22cf00:
    // 0x22cf00: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22cf04:
    // 0x22cf04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22cf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22cf08:
    // 0x22cf08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cf08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cf0c:
    // 0x22cf0c: 0x1000000d  b           . + 4 + (0xD << 2)
label_22cf10:
    if (ctx->pc == 0x22CF10u) {
        ctx->pc = 0x22CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF0Cu;
        // 0x22cf10: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF14u;
        goto label_22cf14;
    }
    ctx->pc = 0x22CF0Cu;
    {
        const bool branch_taken_0x22cf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF0Cu;
        // 0x22cf10: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf0c) {
            ctx->pc = 0x22CF44u;
            goto label_22cf44;
        }
    }
    ctx->pc = 0x22CF14u;
label_22cf14:
    // 0x22cf14: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_22cf18:
    // 0x22cf18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22cf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22cf1c:
    // 0x22cf1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cf1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cf20:
    // 0x22cf20: 0x0  nop
    ctx->pc = 0x22cf20u;
    // NOP
label_22cf24:
    // 0x22cf24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22cf24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22cf28:
    // 0x22cf28: 0x0  nop
    ctx->pc = 0x22cf28u;
    // NOP
label_22cf2c:
    // 0x22cf2c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22cf30:
    if (ctx->pc == 0x22CF30u) {
        ctx->pc = 0x22CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF2Cu;
        // 0x22cf30: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF34u;
        goto label_22cf34;
    }
    ctx->pc = 0x22CF2Cu;
    {
        const bool branch_taken_0x22cf2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF2Cu;
        // 0x22cf30: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf2c) {
            ctx->pc = 0x22CF44u;
            goto label_22cf44;
        }
    }
    ctx->pc = 0x22CF34u;
label_22cf34:
    // 0x22cf34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22cf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22cf38:
    // 0x22cf38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cf38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cf3c:
    // 0x22cf3c: 0x10000001  b           . + 4 + (0x1 << 2)
label_22cf40:
    if (ctx->pc == 0x22CF40u) {
        ctx->pc = 0x22CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF3Cu;
        // 0x22cf40: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF44u;
        goto label_22cf44;
    }
    ctx->pc = 0x22CF3Cu;
    {
        const bool branch_taken_0x22cf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF3Cu;
        // 0x22cf40: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf3c) {
            ctx->pc = 0x22CF44u;
            goto label_22cf44;
        }
    }
    ctx->pc = 0x22CF44u;
label_22cf44:
    // 0x22cf44: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x22cf44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_22cf48:
    // 0x22cf48: 0xc6540054  lwc1        $f20, 0x54($s2)
    ctx->pc = 0x22cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22cf4c:
    // 0x22cf4c: 0xc066e44  jal         func_19B910
label_22cf50:
    if (ctx->pc == 0x22CF50u) {
        ctx->pc = 0x22CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF4Cu;
        // 0x22cf50: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF54u;
        goto label_22cf54;
    }
    ctx->pc = 0x22CF4Cu;
    SET_GPR_U32(ctx, 31, 0x22CF54u);
    ctx->pc = 0x22CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF4Cu;
    // 0x22cf50: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x22CF54u;
label_22cf54:
    // 0x22cf54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22cf58:
    // 0x22cf58: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x22cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22cf5c:
    // 0x22cf5c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x22cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_22cf60:
    // 0x22cf60: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22cf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22cf64:
    // 0x22cf64: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x22cf64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_22cf68:
    // 0x22cf68: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x22cf68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_22cf6c:
    // 0x22cf6c: 0xc064f38  jal         func_193CE0
label_22cf70:
    if (ctx->pc == 0x22CF70u) {
        ctx->pc = 0x22CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF6Cu;
        // 0x22cf70: 0xe7b40088  swc1        $f20, 0x88($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF74u;
        goto label_22cf74;
    }
    ctx->pc = 0x22CF6Cu;
    SET_GPR_U32(ctx, 31, 0x22CF74u);
    ctx->pc = 0x22CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF6Cu;
    // 0x22cf70: 0xe7b40088  swc1        $f20, 0x88($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x193CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CE0u, 0x22CF6Cu, 0x22CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF74u;
label_22cf74:
    // 0x22cf74: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x22cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22cf78:
    // 0x22cf78: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x22cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22cf7c:
    // 0x22cf7c: 0xc066e96  jal         func_19BA58
label_22cf80:
    if (ctx->pc == 0x22CF80u) {
        ctx->pc = 0x22CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF7Cu;
        // 0x22cf80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF84u;
        goto label_22cf84;
    }
    ctx->pc = 0x22CF7Cu;
    SET_GPR_U32(ctx, 31, 0x22CF84u);
    ctx->pc = 0x22CF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF7Cu;
    // 0x22cf80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x22CF84u;
label_22cf84:
    // 0x22cf84: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x22cf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22cf88:
    // 0x22cf88: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x22cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22cf8c:
    // 0x22cf8c: 0xc066e6c  jal         func_19B9B0
label_22cf90:
    if (ctx->pc == 0x22CF90u) {
        ctx->pc = 0x22CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF8Cu;
        // 0x22cf90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CF94u;
        goto label_22cf94;
    }
    ctx->pc = 0x22CF8Cu;
    SET_GPR_U32(ctx, 31, 0x22CF94u);
    ctx->pc = 0x22CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF8Cu;
    // 0x22cf90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x22CF94u;
label_22cf94:
    // 0x22cf94: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x22cf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22cf98:
    // 0x22cf98: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x22cf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22cf9c:
    // 0x22cf9c: 0xc066ec0  jal         func_19BB00
label_22cfa0:
    if (ctx->pc == 0x22CFA0u) {
        ctx->pc = 0x22CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF9Cu;
        // 0x22cfa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFA4u;
        goto label_22cfa4;
    }
    ctx->pc = 0x22CF9Cu;
    SET_GPR_U32(ctx, 31, 0x22CFA4u);
    ctx->pc = 0x22CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF9Cu;
    // 0x22cfa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x22CFA4u;
label_22cfa4:
    // 0x22cfa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22cfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22cfa8:
    // 0x22cfa8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22cfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22cfac:
    // 0x22cfac: 0xc066e1a  jal         func_19B868
label_22cfb0:
    if (ctx->pc == 0x22CFB0u) {
        ctx->pc = 0x22CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFACu;
        // 0x22cfb0: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFB4u;
        goto label_22cfb4;
    }
    ctx->pc = 0x22CFACu;
    SET_GPR_U32(ctx, 31, 0x22CFB4u);
    ctx->pc = 0x22CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CFACu;
    // 0x22cfb0: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x22CFB4u;
label_22cfb4:
    // 0x22cfb4: 0xc05ff64  jal         func_17FD90
label_22cfb8:
    if (ctx->pc == 0x22CFB8u) {
        ctx->pc = 0x22CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFB4u;
        // 0x22cfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFBCu;
        goto label_22cfbc;
    }
    ctx->pc = 0x22CFB4u;
    SET_GPR_U32(ctx, 31, 0x22CFBCu);
    ctx->pc = 0x22CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CFB4u;
    // 0x22cfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FD90u, 0x22CFB4u, 0x22CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CFBCu;
label_22cfbc:
    // 0x22cfbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22cfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22cfc0:
    // 0x22cfc0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x22cfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_22cfc4:
    // 0x22cfc4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x22cfc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22cfc8:
    // 0x22cfc8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x22cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_22cfcc:
    // 0x22cfcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22cfccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22cfd0:
    // 0x22cfd0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x22cfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_22cfd4:
    // 0x22cfd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22cfd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22cfd8:
    // 0x22cfd8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x22cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22cfdc:
    // 0x22cfdc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22cfe0:
    // 0x22cfe0: 0x3e00008  jr          $ra
label_22cfe4:
    if (ctx->pc == 0x22CFE4u) {
        ctx->pc = 0x22CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFE0u;
        // 0x22cfe4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CFE8u;
        goto label_22cfe8;
    }
    ctx->pc = 0x22CFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CFE0u;
        // 0x22cfe4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CFE8u;
label_22cfe8:
    // 0x22cfe8: 0x0  nop
    ctx->pc = 0x22cfe8u;
    // NOP
label_22cfec:
    // 0x22cfec: 0x0  nop
    ctx->pc = 0x22cfecu;
    // NOP
label_22cff0:
    // 0x22cff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22cff4:
    // 0x22cff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22cff8:
    // 0x22cff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22cffc:
    // 0x22cffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22cffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d000:
    // 0x22d000: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22d000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d004:
    // 0x22d004: 0xc08b414  jal         func_22D050
label_22d008:
    if (ctx->pc == 0x22D008u) {
        ctx->pc = 0x22D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D004u;
        // 0x22d008: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D00Cu;
        goto label_22d00c;
    }
    ctx->pc = 0x22D004u;
    SET_GPR_U32(ctx, 31, 0x22D00Cu);
    ctx->pc = 0x22D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D004u;
    // 0x22d008: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D050u;
    goto label_22d050;
    ctx->pc = 0x22D00Cu;
label_22d00c:
    // 0x22d00c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x22d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_22d010:
    // 0x22d010: 0xc08b414  jal         func_22D050
label_22d014:
    if (ctx->pc == 0x22D014u) {
        ctx->pc = 0x22D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D010u;
        // 0x22d014: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D018u;
        goto label_22d018;
    }
    ctx->pc = 0x22D010u;
    SET_GPR_U32(ctx, 31, 0x22D018u);
    ctx->pc = 0x22D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D010u;
    // 0x22d014: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D050u;
    goto label_22d050;
    ctx->pc = 0x22D018u;
label_22d018:
    // 0x22d018: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22d018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22d01c:
    // 0x22d01c: 0xc08b414  jal         func_22D050
label_22d020:
    if (ctx->pc == 0x22D020u) {
        ctx->pc = 0x22D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D01Cu;
        // 0x22d020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D024u;
        goto label_22d024;
    }
    ctx->pc = 0x22D01Cu;
    SET_GPR_U32(ctx, 31, 0x22D024u);
    ctx->pc = 0x22D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D01Cu;
    // 0x22d020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D050u;
    goto label_22d050;
    ctx->pc = 0x22D024u;
label_22d024:
    // 0x22d024: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x22d024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_22d028:
    // 0x22d028: 0xc08b414  jal         func_22D050
label_22d02c:
    if (ctx->pc == 0x22D02Cu) {
        ctx->pc = 0x22D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D028u;
        // 0x22d02c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D030u;
        goto label_22d030;
    }
    ctx->pc = 0x22D028u;
    SET_GPR_U32(ctx, 31, 0x22D030u);
    ctx->pc = 0x22D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D028u;
    // 0x22d02c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D050u;
    goto label_22d050;
    ctx->pc = 0x22D030u;
label_22d030:
    // 0x22d030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d034:
    // 0x22d034: 0xc08b414  jal         func_22D050
label_22d038:
    if (ctx->pc == 0x22D038u) {
        ctx->pc = 0x22D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D034u;
        // 0x22d038: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D03Cu;
        goto label_22d03c;
    }
    ctx->pc = 0x22D034u;
    SET_GPR_U32(ctx, 31, 0x22D03Cu);
    ctx->pc = 0x22D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D034u;
    // 0x22d038: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D050u;
    goto label_22d050;
    ctx->pc = 0x22D03Cu;
label_22d03c:
    // 0x22d03c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22d040:
    // 0x22d040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22d044:
    // 0x22d044: 0x3e00008  jr          $ra
label_22d048:
    if (ctx->pc == 0x22D048u) {
        ctx->pc = 0x22D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D044u;
        // 0x22d048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D04Cu;
        goto label_22d04c;
    }
    ctx->pc = 0x22D044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D044u;
        // 0x22d048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D04Cu;
label_22d04c:
    // 0x22d04c: 0x0  nop
    ctx->pc = 0x22d04cu;
    // NOP
label_22d050:
    // 0x22d050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22d054:
    // 0x22d054: 0x308a00ff  andi        $t2, $a0, 0xFF
    ctx->pc = 0x22d054u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22d058:
    // 0x22d058: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22d058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22d05c:
    // 0x22d05c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22d05cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d060:
    // 0x22d060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22d064:
    // 0x22d064: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x22d064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_22d068:
    // 0x22d068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22d06c:
    // 0x22d06c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22d06cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d070:
    // 0x22d070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22d074:
    // 0x22d074: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22d074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d078:
    // 0x22d078: 0x8f8b85d0  lw          $t3, -0x7A30($gp)
    ctx->pc = 0x22d078u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22d07c:
    // 0x22d07c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22d07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d080:
    // 0x22d080: 0x24070084  addiu       $a3, $zero, 0x84
    ctx->pc = 0x22d080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_22d084:
    // 0x22d084: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x22d084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_22d088:
    // 0x22d088: 0x1000001f  b           . + 4 + (0x1F << 2)
label_22d08c:
    if (ctx->pc == 0x22D08Cu) {
        ctx->pc = 0x22D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D088u;
        // 0x22d08c: 0x24090086  addiu       $t1, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D090u;
        goto label_22d090;
    }
    ctx->pc = 0x22D088u;
    {
        const bool branch_taken_0x22d088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D088u;
        // 0x22d08c: 0x24090086  addiu       $t1, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d088) {
            ctx->pc = 0x22D108u;
            goto label_22d108;
        }
    }
    ctx->pc = 0x22D090u;
label_22d090:
    // 0x22d090: 0x91640096  lbu         $a0, 0x96($t3)
    ctx->pc = 0x22d090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 150)));
label_22d094:
    // 0x22d094: 0x148a0019  bne         $a0, $t2, . + 4 + (0x19 << 2)
label_22d098:
    if (ctx->pc == 0x22D098u) {
        ctx->pc = 0x22D09Cu;
        goto label_22d09c;
    }
    ctx->pc = 0x22D094u;
    {
        const bool branch_taken_0x22d094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        if (branch_taken_0x22d094) {
            ctx->pc = 0x22D0FCu;
            goto label_22d0fc;
        }
    }
    ctx->pc = 0x22D09Cu;
label_22d09c:
    // 0x22d09c: 0x9164009d  lbu         $a0, 0x9D($t3)
    ctx->pc = 0x22d09cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 157)));
label_22d0a0:
    // 0x22d0a0: 0x1089000f  beq         $a0, $t1, . + 4 + (0xF << 2)
label_22d0a4:
    if (ctx->pc == 0x22D0A4u) {
        ctx->pc = 0x22D0A8u;
        goto label_22d0a8;
    }
    ctx->pc = 0x22D0A0u;
    {
        const bool branch_taken_0x22d0a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x22d0a0) {
            ctx->pc = 0x22D0E0u;
            goto label_22d0e0;
        }
    }
    ctx->pc = 0x22D0A8u;
label_22d0a8:
    // 0x22d0a8: 0x1088000b  beq         $a0, $t0, . + 4 + (0xB << 2)
label_22d0ac:
    if (ctx->pc == 0x22D0ACu) {
        ctx->pc = 0x22D0B0u;
        goto label_22d0b0;
    }
    ctx->pc = 0x22D0A8u;
    {
        const bool branch_taken_0x22d0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x22d0a8) {
            ctx->pc = 0x22D0D8u;
            goto label_22d0d8;
        }
    }
    ctx->pc = 0x22D0B0u;
label_22d0b0:
    // 0x22d0b0: 0x10870007  beq         $a0, $a3, . + 4 + (0x7 << 2)
label_22d0b4:
    if (ctx->pc == 0x22D0B4u) {
        ctx->pc = 0x22D0B8u;
        goto label_22d0b8;
    }
    ctx->pc = 0x22D0B0u;
    {
        const bool branch_taken_0x22d0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x22d0b0) {
            ctx->pc = 0x22D0D0u;
            goto label_22d0d0;
        }
    }
    ctx->pc = 0x22D0B8u;
label_22d0b8:
    // 0x22d0b8: 0x10860003  beq         $a0, $a2, . + 4 + (0x3 << 2)
label_22d0bc:
    if (ctx->pc == 0x22D0BCu) {
        ctx->pc = 0x22D0C0u;
        goto label_22d0c0;
    }
    ctx->pc = 0x22D0B8u;
    {
        const bool branch_taken_0x22d0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x22d0b8) {
            ctx->pc = 0x22D0C8u;
            goto label_22d0c8;
        }
    }
    ctx->pc = 0x22D0C0u;
label_22d0c0:
    // 0x22d0c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_22d0c4:
    if (ctx->pc == 0x22D0C4u) {
        ctx->pc = 0x22D0C8u;
        goto label_22d0c8;
    }
    ctx->pc = 0x22D0C0u;
    {
        const bool branch_taken_0x22d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d0c0) {
            ctx->pc = 0x22D0E4u;
            goto label_22d0e4;
        }
    }
    ctx->pc = 0x22D0C8u;
label_22d0c8:
    // 0x22d0c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_22d0cc:
    if (ctx->pc == 0x22D0CCu) {
        ctx->pc = 0x22D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0C8u;
        // 0x22d0cc: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D0D0u;
        goto label_22d0d0;
    }
    ctx->pc = 0x22D0C8u;
    {
        const bool branch_taken_0x22d0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0C8u;
        // 0x22d0cc: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0c8) {
            ctx->pc = 0x22D0E4u;
            goto label_22d0e4;
        }
    }
    ctx->pc = 0x22D0D0u;
label_22d0d0:
    // 0x22d0d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_22d0d4:
    if (ctx->pc == 0x22D0D4u) {
        ctx->pc = 0x22D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D0u;
        // 0x22d0d4: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D0D8u;
        goto label_22d0d8;
    }
    ctx->pc = 0x22D0D0u;
    {
        const bool branch_taken_0x22d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D0u;
        // 0x22d0d4: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0d0) {
            ctx->pc = 0x22D0E4u;
            goto label_22d0e4;
        }
    }
    ctx->pc = 0x22D0D8u;
label_22d0d8:
    // 0x22d0d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_22d0dc:
    if (ctx->pc == 0x22D0DCu) {
        ctx->pc = 0x22D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D8u;
        // 0x22d0dc: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D0E0u;
        goto label_22d0e0;
    }
    ctx->pc = 0x22D0D8u;
    {
        const bool branch_taken_0x22d0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D8u;
        // 0x22d0dc: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0d8) {
            ctx->pc = 0x22D0E4u;
            goto label_22d0e4;
        }
    }
    ctx->pc = 0x22D0E0u;
label_22d0e0:
    // 0x22d0e0: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x22d0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_22d0e4:
    // 0x22d0e4: 0x0  nop
    ctx->pc = 0x22d0e4u;
    // NOP
label_22d0e8:
    // 0x22d0e8: 0x702024  and         $a0, $v1, $s0
    ctx->pc = 0x22d0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_22d0ec:
    // 0x22d0ec: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x22d0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_22d0f0:
    // 0x22d0f0: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x22d0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_22d0f4:
    // 0x22d0f4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_22d0f8:
    if (ctx->pc == 0x22D0F8u) {
        ctx->pc = 0x22D0FCu;
        goto label_22d0fc;
    }
    ctx->pc = 0x22D0F4u;
    {
        const bool branch_taken_0x22d0f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d0f4) {
            ctx->pc = 0x22D110u;
            goto label_22d110;
        }
    }
    ctx->pc = 0x22D0FCu;
label_22d0fc:
    // 0x22d0fc: 0x0  nop
    ctx->pc = 0x22d0fcu;
    // NOP
label_22d100:
    // 0x22d100: 0x8d6b0084  lw          $t3, 0x84($t3)
    ctx->pc = 0x22d100u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
label_22d104:
    // 0x22d104: 0x0  nop
    ctx->pc = 0x22d104u;
    // NOP
label_22d108:
    // 0x22d108: 0x1560ffe1  bnez        $t3, . + 4 + (-0x1F << 2)
label_22d10c:
    if (ctx->pc == 0x22D10Cu) {
        ctx->pc = 0x22D110u;
        goto label_22d110;
    }
    ctx->pc = 0x22D108u;
    {
        const bool branch_taken_0x22d108 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d108) {
            ctx->pc = 0x22D090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d090;
        }
    }
    ctx->pc = 0x22D110u;
label_22d110:
    // 0x22d110: 0x702024  and         $a0, $v1, $s0
    ctx->pc = 0x22d110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_22d114:
    // 0x22d114: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x22d114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_22d118:
    // 0x22d118: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x22d118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_22d11c:
    // 0x22d11c: 0x10800068  beqz        $a0, . + 4 + (0x68 << 2)
label_22d120:
    if (ctx->pc == 0x22D120u) {
        ctx->pc = 0x22D124u;
        goto label_22d124;
    }
    ctx->pc = 0x22D11Cu;
    {
        const bool branch_taken_0x22d11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d11c) {
            ctx->pc = 0x22D2C0u;
            goto label_22d2c0;
        }
    }
    ctx->pc = 0x22D124u;
label_22d124:
    // 0x22d124: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_22d128:
    if (ctx->pc == 0x22D128u) {
        ctx->pc = 0x22D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D124u;
        // 0x22d128: 0x3c02c1c8  lui         $v0, 0xC1C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49608 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D12Cu;
        goto label_22d12c;
    }
    ctx->pc = 0x22D124u;
    {
        const bool branch_taken_0x22d124 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D124u;
        // 0x22d128: 0x3c02c1c8  lui         $v0, 0xC1C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d124) {
            ctx->pc = 0x22D13Cu;
            goto label_22d13c;
        }
    }
    ctx->pc = 0x22D12Cu;
label_22d12c:
    // 0x22d12c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x22d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_22d130:
    // 0x22d130: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d134:
    // 0x22d134: 0x10000003  b           . + 4 + (0x3 << 2)
label_22d138:
    if (ctx->pc == 0x22D138u) {
        ctx->pc = 0x22D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D134u;
        // 0x22d138: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D13Cu;
        goto label_22d13c;
    }
    ctx->pc = 0x22D134u;
    {
        const bool branch_taken_0x22d134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D134u;
        // 0x22d138: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d134) {
            ctx->pc = 0x22D144u;
            goto label_22d144;
        }
    }
    ctx->pc = 0x22D13Cu;
label_22d13c:
    // 0x22d13c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d140:
    // 0x22d140: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d144:
    // 0x22d144: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x22d144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_22d148:
    // 0x22d148: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d14c:
    // 0x22d14c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x22d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_22d150:
    // 0x22d150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d154:
    // 0x22d154: 0x0  nop
    ctx->pc = 0x22d154u;
    // NOP
label_22d158:
    // 0x22d158: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22d158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22d15c:
    // 0x22d15c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d160:
    // 0x22d160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d164:
    // 0x22d164: 0x0  nop
    ctx->pc = 0x22d164u;
    // NOP
label_22d168:
    // 0x22d168: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d168u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d16c:
    // 0x22d16c: 0x0  nop
    ctx->pc = 0x22d16cu;
    // NOP
label_22d170:
    // 0x22d170: 0x0  nop
    ctx->pc = 0x22d170u;
    // NOP
label_22d174:
    // 0x22d174: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_22d178:
    if (ctx->pc == 0x22D178u) {
        ctx->pc = 0x22D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D174u;
        // 0x22d178: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D17Cu;
        goto label_22d17c;
    }
    ctx->pc = 0x22D174u;
    {
        const bool branch_taken_0x22d174 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D174u;
        // 0x22d178: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d174) {
            ctx->pc = 0x22D18Cu;
            goto label_22d18c;
        }
    }
    ctx->pc = 0x22D17Cu;
label_22d17c:
    // 0x22d17c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x22d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_22d180:
    // 0x22d180: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d184:
    // 0x22d184: 0x10000004  b           . + 4 + (0x4 << 2)
label_22d188:
    if (ctx->pc == 0x22D188u) {
        ctx->pc = 0x22D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D184u;
        // 0x22d188: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D18Cu;
        goto label_22d18c;
    }
    ctx->pc = 0x22D184u;
    {
        const bool branch_taken_0x22d184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D184u;
        // 0x22d188: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d184) {
            ctx->pc = 0x22D198u;
            goto label_22d198;
        }
    }
    ctx->pc = 0x22D18Cu;
label_22d18c:
    // 0x22d18c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_22d190:
    // 0x22d190: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d194:
    // 0x22d194: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d198:
    // 0x22d198: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x22d198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_22d19c:
    // 0x22d19c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d1a0:
    // 0x22d1a0: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x22d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_22d1a4:
    // 0x22d1a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d1a8:
    // 0x22d1a8: 0x3c04c3bc  lui         $a0, 0xC3BC
    ctx->pc = 0x22d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50108 << 16));
label_22d1ac:
    // 0x22d1ac: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x22d1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_22d1b0:
    // 0x22d1b0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x22d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_22d1b4:
    // 0x22d1b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22d1b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22d1b8:
    // 0x22d1b8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d1bc:
    // 0x22d1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d1c0:
    // 0x22d1c0: 0x0  nop
    ctx->pc = 0x22d1c0u;
    // NOP
label_22d1c4:
    // 0x22d1c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d1c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d1c8:
    // 0x22d1c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22d1cc:
    // 0x22d1cc: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x22d1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_22d1d0:
    // 0x22d1d0: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x22d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_22d1d4:
    // 0x22d1d4: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x22d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_22d1d8:
    // 0x22d1d8: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x22d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_22d1dc:
    // 0x22d1dc: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x22d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_22d1e0:
    // 0x22d1e0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_22d1e4:
    // 0x22d1e4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x22d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_22d1e8:
    // 0x22d1e8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x22d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_22d1ec:
    // 0x22d1ec: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x22d1ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_22d1f0:
    // 0x22d1f0: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x22d1f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_22d1f4:
    // 0x22d1f4: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22d1f4u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22d1f8:
    // 0x22d1f8: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22d1f8u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22d1fc:
    // 0x22d1fc: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x22d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22d200:
    // 0x22d200: 0xfa110010  sqc2        $vf17, 0x10($s0)
    ctx->pc = 0x22d200u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22d204:
    // 0x22d204: 0xfa120020  sqc2        $vf18, 0x20($s0)
    ctx->pc = 0x22d204u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22d208:
    // 0x22d208: 0xfa130030  sqc2        $vf19, 0x30($s0)
    ctx->pc = 0x22d208u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22d20c:
    // 0x22d20c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x22d20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22d210:
    // 0x22d210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d214:
    // 0x22d214: 0xc066d86  jal         func_19B618
label_22d218:
    if (ctx->pc == 0x22D218u) {
        ctx->pc = 0x22D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D214u;
        // 0x22d218: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D21Cu;
        goto label_22d21c;
    }
    ctx->pc = 0x22D214u;
    SET_GPR_U32(ctx, 31, 0x22D21Cu);
    ctx->pc = 0x22D218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D214u;
    // 0x22d218: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x22D214u, 0x22D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D21Cu;
label_22d21c:
    // 0x22d21c: 0x3c02c3c1  lui         $v0, 0xC3C1
    ctx->pc = 0x22d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50113 << 16));
label_22d220:
    // 0x22d220: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x22d220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_22d224:
    // 0x22d224: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22d224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_22d228:
    // 0x22d228: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x22d228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_22d22c:
    // 0x22d22c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_22d230:
    // 0x22d230: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x22d230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_22d234:
    // 0x22d234: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22d238:
    // 0x22d238: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22d238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_22d23c:
    // 0x22d23c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x22d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_22d240:
    // 0x22d240: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22d240u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22d244:
    // 0x22d244: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d244u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d248:
    // 0x22d248: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22d248u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22d24c:
    // 0x22d24c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22d24cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22d250:
    // 0x22d250: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x22d250u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22d254:
    // 0x22d254: 0xfa310010  sqc2        $vf17, 0x10($s1)
    ctx->pc = 0x22d254u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22d258:
    // 0x22d258: 0xfa320020  sqc2        $vf18, 0x20($s1)
    ctx->pc = 0x22d258u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22d25c:
    // 0x22d25c: 0xfa330030  sqc2        $vf19, 0x30($s1)
    ctx->pc = 0x22d25cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22d260:
    // 0x22d260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d264:
    // 0x22d264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d268:
    // 0x22d268: 0xc066d86  jal         func_19B618
label_22d26c:
    if (ctx->pc == 0x22D26Cu) {
        ctx->pc = 0x22D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D268u;
        // 0x22d26c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D270u;
        goto label_22d270;
    }
    ctx->pc = 0x22D268u;
    SET_GPR_U32(ctx, 31, 0x22D270u);
    ctx->pc = 0x22D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D268u;
    // 0x22d26c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x22D268u, 0x22D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D270u;
label_22d270:
    // 0x22d270: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x22d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_22d274:
    // 0x22d274: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x22d274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_22d278:
    // 0x22d278: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x22d278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_22d27c:
    // 0x22d27c: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x22d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_22d280:
    // 0x22d280: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22d284:
    // 0x22d284: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x22d284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_22d288:
    // 0x22d288: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22d288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_22d28c:
    // 0x22d28c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x22d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_22d290:
    // 0x22d290: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22d290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22d294:
    // 0x22d294: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d294u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d298:
    // 0x22d298: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22d298u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22d29c:
    // 0x22d29c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22d29cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22d2a0:
    // 0x22d2a0: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x22d2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22d2a4:
    // 0x22d2a4: 0xfa510010  sqc2        $vf17, 0x10($s2)
    ctx->pc = 0x22d2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22d2a8:
    // 0x22d2a8: 0xfa520020  sqc2        $vf18, 0x20($s2)
    ctx->pc = 0x22d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22d2ac:
    // 0x22d2ac: 0xfa530030  sqc2        $vf19, 0x30($s2)
    ctx->pc = 0x22d2acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22d2b0:
    // 0x22d2b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d2b4:
    // 0x22d2b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d2b8:
    // 0x22d2b8: 0xc066d86  jal         func_19B618
label_22d2bc:
    if (ctx->pc == 0x22D2BCu) {
        ctx->pc = 0x22D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2B8u;
        // 0x22d2bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2C0u;
        goto label_22d2c0;
    }
    ctx->pc = 0x22D2B8u;
    SET_GPR_U32(ctx, 31, 0x22D2C0u);
    ctx->pc = 0x22D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2B8u;
    // 0x22d2bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x22D2B8u, 0x22D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2C0u;
label_22d2c0:
    // 0x22d2c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22d2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22d2c4:
    // 0x22d2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d2c8:
    // 0x22d2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d2cc:
    // 0x22d2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22d2d0:
    // 0x22d2d0: 0x3e00008  jr          $ra
label_22d2d4:
    if (ctx->pc == 0x22D2D4u) {
        ctx->pc = 0x22D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2D0u;
        // 0x22d2d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2D8u;
        goto label_22d2d8;
    }
    ctx->pc = 0x22D2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2D0u;
        // 0x22d2d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D2D8u;
label_22d2d8:
    // 0x22d2d8: 0x0  nop
    ctx->pc = 0x22d2d8u;
    // NOP
label_22d2dc:
    // 0x22d2dc: 0x0  nop
    ctx->pc = 0x22d2dcu;
    // NOP
label_22d2e0:
    // 0x22d2e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22d2e4:
    // 0x22d2e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22d2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22d2e8:
    // 0x22d2e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22d2ec:
    // 0x22d2ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22d2f0:
    // 0x22d2f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22d2f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d2f4:
    // 0x22d2f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22d2f8:
    // 0x22d2f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22d2f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d2fc:
    // 0x22d2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22d300:
    // 0x22d300: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22d300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d304:
    // 0x22d304: 0x8f8985d0  lw          $t1, -0x7A30($gp)
    ctx->pc = 0x22d304u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22d308:
    // 0x22d308: 0x11200026  beqz        $t1, . + 4 + (0x26 << 2)
label_22d30c:
    if (ctx->pc == 0x22D30Cu) {
        ctx->pc = 0x22D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D308u;
        // 0x22d30c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D310u;
        goto label_22d310;
    }
    ctx->pc = 0x22D308u;
    {
        const bool branch_taken_0x22d308 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D308u;
        // 0x22d30c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d308) {
            ctx->pc = 0x22D3A4u;
            goto label_22d3a4;
        }
    }
    ctx->pc = 0x22D310u;
label_22d310:
    // 0x22d310: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x22d310u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22d314:
    // 0x22d314: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x22d314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_22d318:
    // 0x22d318: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x22d318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_22d31c:
    // 0x22d31c: 0x24060085  addiu       $a2, $zero, 0x85
    ctx->pc = 0x22d31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_22d320:
    // 0x22d320: 0x24070086  addiu       $a3, $zero, 0x86
    ctx->pc = 0x22d320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_22d324:
    // 0x22d324: 0x91230096  lbu         $v1, 0x96($t1)
    ctx->pc = 0x22d324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 150)));
label_22d328:
    // 0x22d328: 0x1468001a  bne         $v1, $t0, . + 4 + (0x1A << 2)
label_22d32c:
    if (ctx->pc == 0x22D32Cu) {
        ctx->pc = 0x22D330u;
        goto label_22d330;
    }
    ctx->pc = 0x22D328u;
    {
        const bool branch_taken_0x22d328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x22d328) {
            ctx->pc = 0x22D394u;
            goto label_22d394;
        }
    }
    ctx->pc = 0x22D330u;
label_22d330:
    // 0x22d330: 0x9123009d  lbu         $v1, 0x9D($t1)
    ctx->pc = 0x22d330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 157)));
label_22d334:
    // 0x22d334: 0x10670010  beq         $v1, $a3, . + 4 + (0x10 << 2)
label_22d338:
    if (ctx->pc == 0x22D338u) {
        ctx->pc = 0x22D33Cu;
        goto label_22d33c;
    }
    ctx->pc = 0x22D334u;
    {
        const bool branch_taken_0x22d334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x22d334) {
            ctx->pc = 0x22D378u;
            goto label_22d378;
        }
    }
    ctx->pc = 0x22D33Cu;
label_22d33c:
    // 0x22d33c: 0x1066000c  beq         $v1, $a2, . + 4 + (0xC << 2)
label_22d340:
    if (ctx->pc == 0x22D340u) {
        ctx->pc = 0x22D344u;
        goto label_22d344;
    }
    ctx->pc = 0x22D33Cu;
    {
        const bool branch_taken_0x22d33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x22d33c) {
            ctx->pc = 0x22D370u;
            goto label_22d370;
        }
    }
    ctx->pc = 0x22D344u;
label_22d344:
    // 0x22d344: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
label_22d348:
    if (ctx->pc == 0x22D348u) {
        ctx->pc = 0x22D34Cu;
        goto label_22d34c;
    }
    ctx->pc = 0x22D344u;
    {
        const bool branch_taken_0x22d344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x22d344) {
            ctx->pc = 0x22D368u;
            goto label_22d368;
        }
    }
    ctx->pc = 0x22D34Cu;
label_22d34c:
    // 0x22d34c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_22d350:
    if (ctx->pc == 0x22D350u) {
        ctx->pc = 0x22D354u;
        goto label_22d354;
    }
    ctx->pc = 0x22D34Cu;
    {
        const bool branch_taken_0x22d34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x22d34c) {
            ctx->pc = 0x22D35Cu;
            goto label_22d35c;
        }
    }
    ctx->pc = 0x22D354u;
label_22d354:
    // 0x22d354: 0x10000009  b           . + 4 + (0x9 << 2)
label_22d358:
    if (ctx->pc == 0x22D358u) {
        ctx->pc = 0x22D35Cu;
        goto label_22d35c;
    }
    ctx->pc = 0x22D354u;
    {
        const bool branch_taken_0x22d354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d354) {
            ctx->pc = 0x22D37Cu;
            goto label_22d37c;
        }
    }
    ctx->pc = 0x22D35Cu;
label_22d35c:
    // 0x22d35c: 0x0  nop
    ctx->pc = 0x22d35cu;
    // NOP
label_22d360:
    // 0x22d360: 0x10000006  b           . + 4 + (0x6 << 2)
label_22d364:
    if (ctx->pc == 0x22D364u) {
        ctx->pc = 0x22D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D360u;
        // 0x22d364: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D368u;
        goto label_22d368;
    }
    ctx->pc = 0x22D360u;
    {
        const bool branch_taken_0x22d360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D360u;
        // 0x22d364: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d360) {
            ctx->pc = 0x22D37Cu;
            goto label_22d37c;
        }
    }
    ctx->pc = 0x22D368u;
label_22d368:
    // 0x22d368: 0x10000004  b           . + 4 + (0x4 << 2)
label_22d36c:
    if (ctx->pc == 0x22D36Cu) {
        ctx->pc = 0x22D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D368u;
        // 0x22d36c: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D370u;
        goto label_22d370;
    }
    ctx->pc = 0x22D368u;
    {
        const bool branch_taken_0x22d368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D368u;
        // 0x22d36c: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d368) {
            ctx->pc = 0x22D37Cu;
            goto label_22d37c;
        }
    }
    ctx->pc = 0x22D370u;
label_22d370:
    // 0x22d370: 0x10000002  b           . + 4 + (0x2 << 2)
label_22d374:
    if (ctx->pc == 0x22D374u) {
        ctx->pc = 0x22D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D370u;
        // 0x22d374: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D378u;
        goto label_22d378;
    }
    ctx->pc = 0x22D370u;
    {
        const bool branch_taken_0x22d370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D370u;
        // 0x22d374: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d370) {
            ctx->pc = 0x22D37Cu;
            goto label_22d37c;
        }
    }
    ctx->pc = 0x22D378u;
label_22d378:
    // 0x22d378: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x22d378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_22d37c:
    // 0x22d37c: 0x0  nop
    ctx->pc = 0x22d37cu;
    // NOP
label_22d380:
    // 0x22d380: 0x2321824  and         $v1, $s1, $s2
    ctx->pc = 0x22d380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 18));
label_22d384:
    // 0x22d384: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x22d384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
label_22d388:
    // 0x22d388: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x22d388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_22d38c:
    // 0x22d38c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_22d390:
    if (ctx->pc == 0x22D390u) {
        ctx->pc = 0x22D394u;
        goto label_22d394;
    }
    ctx->pc = 0x22D38Cu;
    {
        const bool branch_taken_0x22d38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d38c) {
            ctx->pc = 0x22D3A4u;
            goto label_22d3a4;
        }
    }
    ctx->pc = 0x22D394u;
label_22d394:
    // 0x22d394: 0x0  nop
    ctx->pc = 0x22d394u;
    // NOP
label_22d398:
    // 0x22d398: 0x8d290084  lw          $t1, 0x84($t1)
    ctx->pc = 0x22d398u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 132)));
label_22d39c:
    // 0x22d39c: 0x1520ffe1  bnez        $t1, . + 4 + (-0x1F << 2)
label_22d3a0:
    if (ctx->pc == 0x22D3A0u) {
        ctx->pc = 0x22D3A4u;
        goto label_22d3a4;
    }
    ctx->pc = 0x22D39Cu;
    {
        const bool branch_taken_0x22d39c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d39c) {
            ctx->pc = 0x22D324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d324;
        }
    }
    ctx->pc = 0x22D3A4u;
label_22d3a4:
    // 0x22d3a4: 0x0  nop
    ctx->pc = 0x22d3a4u;
    // NOP
label_22d3a8:
    // 0x22d3a8: 0x2321824  and         $v1, $s1, $s2
    ctx->pc = 0x22d3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 18));
label_22d3ac:
    // 0x22d3ac: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x22d3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
label_22d3b0:
    // 0x22d3b0: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x22d3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_22d3b4:
    // 0x22d3b4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_22d3b8:
    if (ctx->pc == 0x22D3B8u) {
        ctx->pc = 0x22D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3B4u;
        // 0x22d3b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3BCu;
        goto label_22d3bc;
    }
    ctx->pc = 0x22D3B4u;
    {
        const bool branch_taken_0x22d3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3B4u;
        // 0x22d3b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3b4) {
            ctx->pc = 0x22D3ECu;
            goto label_22d3ec;
        }
    }
    ctx->pc = 0x22D3BCu;
label_22d3bc:
    // 0x22d3bc: 0xc0590dc  jal         func_164370
label_22d3c0:
    if (ctx->pc == 0x22D3C0u) {
        ctx->pc = 0x22D3C4u;
        goto label_22d3c4;
    }
    ctx->pc = 0x22D3BCu;
    SET_GPR_U32(ctx, 31, 0x22D3C4u);
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22D3BCu, 0x22D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3C4u;
label_22d3c4:
    // 0x22d3c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22d3c8:
    if (ctx->pc == 0x22D3C8u) {
        ctx->pc = 0x22D3CCu;
        goto label_22d3cc;
    }
    ctx->pc = 0x22D3C4u;
    {
        const bool branch_taken_0x22d3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d3c4) {
            ctx->pc = 0x22D3ECu;
            goto label_22d3ec;
        }
    }
    ctx->pc = 0x22D3CCu;
label_22d3cc:
    // 0x22d3cc: 0xac510050  sw          $s1, 0x50($v0)
    ctx->pc = 0x22d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 17));
label_22d3d0:
    // 0x22d3d0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_22d3d4:
    // 0x22d3d4: 0xac520054  sw          $s2, 0x54($v0)
    ctx->pc = 0x22d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 18));
label_22d3d8:
    // 0x22d3d8: 0x2463d410  addiu       $v1, $v1, -0x2BF0
    ctx->pc = 0x22d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956048));
label_22d3dc:
    // 0x22d3dc: 0xac530058  sw          $s3, 0x58($v0)
    ctx->pc = 0x22d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 19));
label_22d3e0:
    // 0x22d3e0: 0xac50005c  sw          $s0, 0x5C($v0)
    ctx->pc = 0x22d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 16));
label_22d3e4:
    // 0x22d3e4: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x22d3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
label_22d3e8:
    // 0x22d3e8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x22d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_22d3ec:
    // 0x22d3ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22d3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22d3f0:
    // 0x22d3f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22d3f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22d3f4:
    // 0x22d3f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d3f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d3f8:
    // 0x22d3f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d3fc:
    // 0x22d3fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22d400:
    // 0x22d400: 0x3e00008  jr          $ra
label_22d404:
    if (ctx->pc == 0x22D404u) {
        ctx->pc = 0x22D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D400u;
        // 0x22d404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D408u;
        goto label_22d408;
    }
    ctx->pc = 0x22D400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D400u;
        // 0x22d404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D408u;
label_22d408:
    // 0x22d408: 0x0  nop
    ctx->pc = 0x22d408u;
    // NOP
label_22d40c:
    // 0x22d40c: 0x0  nop
    ctx->pc = 0x22d40cu;
    // NOP
label_22d410:
    // 0x22d410: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22d414:
    // 0x22d414: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22d414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22d418:
    // 0x22d418: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22d41c:
    // 0x22d41c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d420:
    // 0x22d420: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22d424:
    // 0x22d424: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22d428:
    // 0x22d428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22d42c:
    // 0x22d42c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22d430:
    // 0x22d430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22d434:
    // 0x22d434: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x22d434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22d438:
    // 0x22d438: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22d43c:
    if (ctx->pc == 0x22D43Cu) {
        ctx->pc = 0x22D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D438u;
        // 0x22d43c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D440u;
        goto label_22d440;
    }
    ctx->pc = 0x22D438u;
    {
        const bool branch_taken_0x22d438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D438u;
        // 0x22d43c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d438) {
            ctx->pc = 0x22D448u;
            goto label_22d448;
        }
    }
    ctx->pc = 0x22D440u;
label_22d440:
    // 0x22d440: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_22d444:
    if (ctx->pc == 0x22D444u) {
        ctx->pc = 0x22D448u;
        goto label_22d448;
    }
    ctx->pc = 0x22D440u;
    {
        const bool branch_taken_0x22d440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d440) {
            ctx->pc = 0x22D458u;
            goto label_22d458;
        }
    }
    ctx->pc = 0x22D448u;
label_22d448:
    // 0x22d448: 0xc0591f4  jal         func_1647D0
label_22d44c:
    if (ctx->pc == 0x22D44Cu) {
        ctx->pc = 0x22D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D448u;
        // 0x22d44c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D450u;
        goto label_22d450;
    }
    ctx->pc = 0x22D448u;
    SET_GPR_U32(ctx, 31, 0x22D450u);
    ctx->pc = 0x22D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D448u;
    // 0x22d44c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22D448u, 0x22D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D450u;
label_22d450:
    // 0x22d450: 0x1000013b  b           . + 4 + (0x13B << 2)
label_22d454:
    if (ctx->pc == 0x22D454u) {
        ctx->pc = 0x22D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D450u;
        // 0x22d454: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D458u;
        goto label_22d458;
    }
    ctx->pc = 0x22D450u;
    {
        const bool branch_taken_0x22d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D450u;
        // 0x22d454: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d450) {
            ctx->pc = 0x22D940u;
            { ctx->pc = 0x22d940; return; }
        }
    }
    ctx->pc = 0x22D458u;
label_22d458:
    // 0x22d458: 0x96900012  lhu         $s0, 0x12($s4)
    ctx->pc = 0x22d458u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_22d45c:
    // 0x22d45c: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x22d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_22d460:
    // 0x22d460: 0x8e910054  lw          $s1, 0x54($s4)
    ctx->pc = 0x22d460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_22d464:
    // 0x22d464: 0x8e920058  lw          $s2, 0x58($s4)
    ctx->pc = 0x22d464u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_22d468:
    // 0x22d468: 0x8e93005c  lw          $s3, 0x5C($s4)
    ctx->pc = 0x22d468u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_22d46c:
    // 0x22d46c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x22d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22d470:
    // 0x22d470: 0x2a010033  slti        $at, $s0, 0x33
    ctx->pc = 0x22d470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)51) ? 1 : 0);
label_22d474:
    // 0x22d474: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_22d478:
    if (ctx->pc == 0x22D478u) {
        ctx->pc = 0x22D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D474u;
        // 0x22d478: 0xa6820012  sh          $v0, 0x12($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D47Cu;
        goto label_22d47c;
    }
    ctx->pc = 0x22D474u;
    {
        const bool branch_taken_0x22d474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D474u;
        // 0x22d478: 0xa6820012  sh          $v0, 0x12($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d474) {
            ctx->pc = 0x22D4D8u;
            goto label_22d4d8;
        }
    }
    ctx->pc = 0x22D47Cu;
label_22d47c:
    // 0x22d47c: 0x2102018  mult        $a0, $s0, $s0
    ctx->pc = 0x22d47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_22d480:
    // 0x22d480: 0x3c023d44  lui         $v0, 0x3D44
    ctx->pc = 0x22d480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15684 << 16));
label_22d484:
    // 0x22d484: 0x34429ba5  ori         $v0, $v0, 0x9BA5
    ctx->pc = 0x22d484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39845);
label_22d488:
    // 0x22d488: 0x3c03c1c8  lui         $v1, 0xC1C8
    ctx->pc = 0x22d488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49608 << 16));
label_22d48c:
    // 0x22d48c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d490:
    // 0x22d490: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22d490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d494:
    // 0x22d494: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x22d494u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22d498:
    // 0x22d498: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d49c:
    // 0x22d49c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x22d49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d4a0:
    // 0x22d4a0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22d4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_22d4a4:
    // 0x22d4a4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d4a8:
    // 0x22d4a8: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x22d4a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_22d4ac:
    // 0x22d4ac: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x22d4acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_22d4b0:
    // 0x22d4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d4b4:
    // 0x22d4b4: 0x0  nop
    ctx->pc = 0x22d4b4u;
    // NOP
label_22d4b8:
    // 0x22d4b8: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x22d4b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_22d4bc:
    // 0x22d4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d4c0:
    // 0x22d4c0: 0x0  nop
    ctx->pc = 0x22d4c0u;
    // NOP
label_22d4c4:
    // 0x22d4c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d4c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d4c8:
    // 0x22d4c8: 0x0  nop
    ctx->pc = 0x22d4c8u;
    // NOP
label_22d4cc:
    // 0x22d4cc: 0x0  nop
    ctx->pc = 0x22d4ccu;
    // NOP
label_22d4d0:
    // 0x22d4d0: 0x10000032  b           . + 4 + (0x32 << 2)
label_22d4d4:
    if (ctx->pc == 0x22D4D4u) {
        ctx->pc = 0x22D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4D0u;
        // 0x22d4d4: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4D8u;
        goto label_22d4d8;
    }
    ctx->pc = 0x22D4D0u;
    {
        const bool branch_taken_0x22d4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4D0u;
        // 0x22d4d4: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4d0) {
            ctx->pc = 0x22D59Cu;
            goto label_22d59c;
        }
    }
    ctx->pc = 0x22D4D8u;
label_22d4d8:
    // 0x22d4d8: 0x2a01003d  slti        $at, $s0, 0x3D
    ctx->pc = 0x22d4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)61) ? 1 : 0);
label_22d4dc:
    // 0x22d4dc: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_22d4e0:
    if (ctx->pc == 0x22D4E0u) {
        ctx->pc = 0x22D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4DCu;
        // 0x22d4e0: 0x2a010051  slti        $at, $s0, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4E4u;
        goto label_22d4e4;
    }
    ctx->pc = 0x22D4DCu;
    {
        const bool branch_taken_0x22d4dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4DCu;
        // 0x22d4e0: 0x2a010051  slti        $at, $s0, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4dc) {
            ctx->pc = 0x22D544u;
            goto label_22d544;
        }
    }
    ctx->pc = 0x22D4E4u;
label_22d4e4:
    // 0x22d4e4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x22d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_22d4e8:
    // 0x22d4e8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x22d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_22d4ec:
    // 0x22d4ec: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x22d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22d4f0:
    // 0x22d4f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22d4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22d4f4:
    // 0x22d4f4: 0x632018  mult        $a0, $v1, $v1
    ctx->pc = 0x22d4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_22d4f8:
    // 0x22d4f8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x22d4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22d4fc:
    // 0x22d4fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d500:
    // 0x22d500: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x22d500u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_22d504:
    // 0x22d504: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x22d504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
label_22d508:
    // 0x22d508: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d50c:
    // 0x22d50c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x22d50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_22d510:
    // 0x22d510: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x22d510u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_22d514:
    // 0x22d514: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22d514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d518:
    // 0x22d518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d51c:
    // 0x22d51c: 0x460310c0  add.s       $f3, $f2, $f3
    ctx->pc = 0x22d51cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_22d520:
    // 0x22d520: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d524:
    // 0x22d524: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x22d524u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_22d528:
    // 0x22d528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d52c:
    // 0x22d52c: 0x0  nop
    ctx->pc = 0x22d52cu;
    // NOP
label_22d530:
    // 0x22d530: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d530u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d534:
    // 0x22d534: 0x0  nop
    ctx->pc = 0x22d534u;
    // NOP
label_22d538:
    // 0x22d538: 0x0  nop
    ctx->pc = 0x22d538u;
    // NOP
label_22d53c:
    // 0x22d53c: 0x10000017  b           . + 4 + (0x17 << 2)
label_22d540:
    if (ctx->pc == 0x22D540u) {
        ctx->pc = 0x22D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D53Cu;
        // 0x22d540: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D544u;
        goto label_22d544;
    }
    ctx->pc = 0x22D53Cu;
    {
        const bool branch_taken_0x22d53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D53Cu;
        // 0x22d540: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d53c) {
            ctx->pc = 0x22D59Cu;
            goto label_22d59c;
        }
    }
    ctx->pc = 0x22D544u;
label_22d544:
    // 0x22d544: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_22d548:
    if (ctx->pc == 0x22D548u) {
        ctx->pc = 0x22D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D544u;
        // 0x22d548: 0x2603ffc4  addiu       $v1, $s0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D54Cu;
        goto label_22d54c;
    }
    ctx->pc = 0x22D544u;
    {
        const bool branch_taken_0x22d544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D544u;
        // 0x22d548: 0x2603ffc4  addiu       $v1, $s0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d544) {
            ctx->pc = 0x22D59Cu;
            goto label_22d59c;
        }
    }
    ctx->pc = 0x22D54Cu;
label_22d54c:
    // 0x22d54c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x22d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_22d550:
    // 0x22d550: 0x632018  mult        $a0, $v1, $v1
    ctx->pc = 0x22d550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_22d554:
    // 0x22d554: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22d554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22d558:
    // 0x22d558: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d55c:
    // 0x22d55c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x22d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_22d560:
    // 0x22d560: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x22d560u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22d564:
    // 0x22d564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d568:
    // 0x22d568: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22d568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_22d56c:
    // 0x22d56c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d570:
    // 0x22d570: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x22d570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d574:
    // 0x22d574: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d578:
    // 0x22d578: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x22d578u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_22d57c:
    // 0x22d57c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x22d57cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_22d580:
    // 0x22d580: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d584:
    // 0x22d584: 0x0  nop
    ctx->pc = 0x22d584u;
    // NOP
label_22d588:
    // 0x22d588: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x22d588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_22d58c:
    // 0x22d58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d590:
    // 0x22d590: 0x0  nop
    ctx->pc = 0x22d590u;
    // NOP
label_22d594:
    // 0x22d594: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d594u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d598:
    // 0x22d598: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x22d598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_22d59c:
    // 0x22d59c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x22d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_22d5a0:
    // 0x22d5a0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d5a4:
    // 0x22d5a4: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x22d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_22d5a8:
    // 0x22d5a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d5ac:
    // 0x22d5ac: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x22d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d5b0:
    // 0x22d5b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d5b4:
    // 0x22d5b4: 0x0  nop
    ctx->pc = 0x22d5b4u;
    // NOP
label_22d5b8:
    // 0x22d5b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d5b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d5bc:
    // 0x22d5bc: 0x0  nop
    ctx->pc = 0x22d5bcu;
    // NOP
label_22d5c0:
    // 0x22d5c0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22d5c4:
    if (ctx->pc == 0x22D5C4u) {
        ctx->pc = 0x22D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5C0u;
        // 0x22d5c4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5C8u;
        goto label_22d5c8;
    }
    ctx->pc = 0x22D5C0u;
    {
        const bool branch_taken_0x22d5c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5C0u;
        // 0x22d5c4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5c0) {
            ctx->pc = 0x22D5DCu;
            goto label_22d5dc;
        }
    }
    ctx->pc = 0x22D5C8u;
label_22d5c8:
    // 0x22d5c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22d5cc:
    // 0x22d5cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d5d0:
    // 0x22d5d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d5d4:
    // 0x22d5d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_22d5d8:
    if (ctx->pc == 0x22D5D8u) {
        ctx->pc = 0x22D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5D4u;
        // 0x22d5d8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5DCu;
        goto label_22d5dc;
    }
    ctx->pc = 0x22D5D4u;
    {
        const bool branch_taken_0x22d5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5D4u;
        // 0x22d5d8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5d4) {
            ctx->pc = 0x22D60Cu;
            goto label_22d60c;
        }
    }
    ctx->pc = 0x22D5DCu;
label_22d5dc:
    // 0x22d5dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d5e0:
    // 0x22d5e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d5e4:
    // 0x22d5e4: 0x0  nop
    ctx->pc = 0x22d5e4u;
    // NOP
label_22d5e8:
    // 0x22d5e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d5e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d5ec:
    // 0x22d5ec: 0x0  nop
    ctx->pc = 0x22d5ecu;
    // NOP
label_22d5f0:
    // 0x22d5f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_22d5f4:
    if (ctx->pc == 0x22D5F4u) {
        ctx->pc = 0x22D5F8u;
        goto label_22d5f8;
    }
    ctx->pc = 0x22D5F0u;
    {
        const bool branch_taken_0x22d5f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d5f0) {
            ctx->pc = 0x22D60Cu;
            goto label_22d60c;
        }
    }
    ctx->pc = 0x22D5F8u;
label_22d5f8:
    // 0x22d5f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22d5fc:
    // 0x22d5fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d600:
    // 0x22d600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d604:
    // 0x22d604: 0x10000001  b           . + 4 + (0x1 << 2)
label_22d608:
    if (ctx->pc == 0x22D608u) {
        ctx->pc = 0x22D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D604u;
        // 0x22d608: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D60Cu;
        goto label_22d60c;
    }
    ctx->pc = 0x22D604u;
    {
        const bool branch_taken_0x22d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D604u;
        // 0x22d608: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d604) {
            ctx->pc = 0x22D60Cu;
            goto label_22d60c;
        }
    }
    ctx->pc = 0x22D60Cu;
label_22d60c:
    // 0x22d60c: 0x2a010033  slti        $at, $s0, 0x33
    ctx->pc = 0x22d60cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)51) ? 1 : 0);
label_22d610:
    // 0x22d610: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_22d614:
    if (ctx->pc == 0x22D614u) {
        ctx->pc = 0x22D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D610u;
        // 0x22d614: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D618u;
        goto label_22d618;
    }
    ctx->pc = 0x22D610u;
    {
        const bool branch_taken_0x22d610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D610u;
        // 0x22d614: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d610) {
            ctx->pc = 0x22D674u;
            goto label_22d674;
        }
    }
    ctx->pc = 0x22D618u;
label_22d618:
    // 0x22d618: 0x2102018  mult        $a0, $s0, $s0
    ctx->pc = 0x22d618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_22d61c:
    // 0x22d61c: 0x3c02bc03  lui         $v0, 0xBC03
    ctx->pc = 0x22d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48131 << 16));
label_22d620:
    // 0x22d620: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x22d620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_22d624:
    // 0x22d624: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x22d624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_22d628:
    // 0x22d628: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d62c:
    // 0x22d62c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22d62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d630:
    // 0x22d630: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x22d630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22d634:
    // 0x22d634: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d638:
    // 0x22d638: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x22d638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d63c:
    // 0x22d63c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22d63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_22d640:
    // 0x22d640: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d644:
    // 0x22d644: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x22d644u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_22d648:
    // 0x22d648: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x22d648u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_22d64c:
    // 0x22d64c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d64cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d650:
    // 0x22d650: 0x0  nop
    ctx->pc = 0x22d650u;
    // NOP
label_22d654:
    // 0x22d654: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x22d654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_22d658:
    // 0x22d658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d65c:
    // 0x22d65c: 0x0  nop
    ctx->pc = 0x22d65cu;
    // NOP
label_22d660:
    // 0x22d660: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d660u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d664:
    // 0x22d664: 0x0  nop
    ctx->pc = 0x22d664u;
    // NOP
label_22d668:
    // 0x22d668: 0x0  nop
    ctx->pc = 0x22d668u;
    // NOP
label_22d66c:
    // 0x22d66c: 0x10000029  b           . + 4 + (0x29 << 2)
label_22d670:
    if (ctx->pc == 0x22D670u) {
        ctx->pc = 0x22D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D66Cu;
        // 0x22d670: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D674u;
        goto label_22d674;
    }
    ctx->pc = 0x22D66Cu;
    {
        const bool branch_taken_0x22d66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D66Cu;
        // 0x22d670: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d66c) {
            ctx->pc = 0x22D714u;
            { ctx->pc = 0x22d714; return; }
        }
    }
    ctx->pc = 0x22D674u;
label_22d674:
    // 0x22d674: 0x2a010038  slti        $at, $s0, 0x38
    ctx->pc = 0x22d674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
label_22d678:
    // 0x22d678: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_22d67c:
    if (ctx->pc == 0x22D67Cu) {
        ctx->pc = 0x22D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D678u;
        // 0x22d67c: 0x2a010038  slti        $at, $s0, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D680u;
        goto label_22d680;
    }
    ctx->pc = 0x22D678u;
    {
        const bool branch_taken_0x22d678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D678u;
        // 0x22d67c: 0x2a010038  slti        $at, $s0, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d678) {
            ctx->pc = 0x22D6CCu;
            { ctx->pc = 0x22d6cc; return; }
        }
    }
    ctx->pc = 0x22D680u;
label_22d680:
    // 0x22d680: 0x2602ffce  addiu       $v0, $s0, -0x32
    ctx->pc = 0x22d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967246));
label_22d684:
    // 0x22d684: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x22d684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_22d688:
    // 0x22d688: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d68c:
    // 0x22d68c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d68cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d690:
    // 0x22d690: 0x0  nop
    ctx->pc = 0x22d690u;
    // NOP
label_22d694:
    // 0x22d694: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22d694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    ctx->pc = 0x22d698u;
    return;
}
