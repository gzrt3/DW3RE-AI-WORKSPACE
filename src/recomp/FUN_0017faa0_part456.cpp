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


void FUN_0017faa0_part456(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25dd50u: goto label_25dd50;
        case 0x25dd54u: goto label_25dd54;
        case 0x25dd58u: goto label_25dd58;
        case 0x25dd5cu: goto label_25dd5c;
        case 0x25dd60u: goto label_25dd60;
        case 0x25dd64u: goto label_25dd64;
        case 0x25dd68u: goto label_25dd68;
        case 0x25dd6cu: goto label_25dd6c;
        case 0x25dd70u: goto label_25dd70;
        case 0x25dd74u: goto label_25dd74;
        case 0x25dd78u: goto label_25dd78;
        case 0x25dd7cu: goto label_25dd7c;
        case 0x25dd80u: goto label_25dd80;
        case 0x25dd84u: goto label_25dd84;
        case 0x25dd88u: goto label_25dd88;
        case 0x25dd8cu: goto label_25dd8c;
        case 0x25dd90u: goto label_25dd90;
        case 0x25dd94u: goto label_25dd94;
        case 0x25dd98u: goto label_25dd98;
        case 0x25dd9cu: goto label_25dd9c;
        case 0x25dda0u: goto label_25dda0;
        case 0x25dda4u: goto label_25dda4;
        case 0x25dda8u: goto label_25dda8;
        case 0x25ddacu: goto label_25ddac;
        case 0x25ddb0u: goto label_25ddb0;
        case 0x25ddb4u: goto label_25ddb4;
        case 0x25ddb8u: goto label_25ddb8;
        case 0x25ddbcu: goto label_25ddbc;
        case 0x25ddc0u: goto label_25ddc0;
        case 0x25ddc4u: goto label_25ddc4;
        case 0x25ddc8u: goto label_25ddc8;
        case 0x25ddccu: goto label_25ddcc;
        case 0x25ddd0u: goto label_25ddd0;
        case 0x25ddd4u: goto label_25ddd4;
        case 0x25ddd8u: goto label_25ddd8;
        case 0x25dddcu: goto label_25dddc;
        case 0x25dde0u: goto label_25dde0;
        case 0x25dde4u: goto label_25dde4;
        case 0x25dde8u: goto label_25dde8;
        case 0x25ddecu: goto label_25ddec;
        case 0x25ddf0u: goto label_25ddf0;
        case 0x25ddf4u: goto label_25ddf4;
        case 0x25ddf8u: goto label_25ddf8;
        case 0x25ddfcu: goto label_25ddfc;
        case 0x25de00u: goto label_25de00;
        case 0x25de04u: goto label_25de04;
        case 0x25de08u: goto label_25de08;
        case 0x25de0cu: goto label_25de0c;
        case 0x25de10u: goto label_25de10;
        case 0x25de14u: goto label_25de14;
        case 0x25de18u: goto label_25de18;
        case 0x25de1cu: goto label_25de1c;
        case 0x25de20u: goto label_25de20;
        case 0x25de24u: goto label_25de24;
        case 0x25de28u: goto label_25de28;
        case 0x25de2cu: goto label_25de2c;
        case 0x25de30u: goto label_25de30;
        case 0x25de34u: goto label_25de34;
        case 0x25de38u: goto label_25de38;
        case 0x25de3cu: goto label_25de3c;
        case 0x25de40u: goto label_25de40;
        case 0x25de44u: goto label_25de44;
        case 0x25de48u: goto label_25de48;
        case 0x25de4cu: goto label_25de4c;
        case 0x25de50u: goto label_25de50;
        case 0x25de54u: goto label_25de54;
        case 0x25de58u: goto label_25de58;
        case 0x25de5cu: goto label_25de5c;
        case 0x25de60u: goto label_25de60;
        case 0x25de64u: goto label_25de64;
        case 0x25de68u: goto label_25de68;
        case 0x25de6cu: goto label_25de6c;
        case 0x25de70u: goto label_25de70;
        case 0x25de74u: goto label_25de74;
        case 0x25de78u: goto label_25de78;
        case 0x25de7cu: goto label_25de7c;
        case 0x25de80u: goto label_25de80;
        case 0x25de84u: goto label_25de84;
        case 0x25de88u: goto label_25de88;
        case 0x25de8cu: goto label_25de8c;
        case 0x25de90u: goto label_25de90;
        case 0x25de94u: goto label_25de94;
        case 0x25de98u: goto label_25de98;
        case 0x25de9cu: goto label_25de9c;
        case 0x25dea0u: goto label_25dea0;
        case 0x25dea4u: goto label_25dea4;
        case 0x25dea8u: goto label_25dea8;
        case 0x25deacu: goto label_25deac;
        case 0x25deb0u: goto label_25deb0;
        case 0x25deb4u: goto label_25deb4;
        case 0x25deb8u: goto label_25deb8;
        case 0x25debcu: goto label_25debc;
        case 0x25dec0u: goto label_25dec0;
        case 0x25dec4u: goto label_25dec4;
        case 0x25dec8u: goto label_25dec8;
        case 0x25deccu: goto label_25decc;
        case 0x25ded0u: goto label_25ded0;
        case 0x25ded4u: goto label_25ded4;
        case 0x25ded8u: goto label_25ded8;
        case 0x25dedcu: goto label_25dedc;
        case 0x25dee0u: goto label_25dee0;
        case 0x25dee4u: goto label_25dee4;
        case 0x25dee8u: goto label_25dee8;
        case 0x25deecu: goto label_25deec;
        case 0x25def0u: goto label_25def0;
        case 0x25def4u: goto label_25def4;
        case 0x25def8u: goto label_25def8;
        case 0x25defcu: goto label_25defc;
        case 0x25df00u: goto label_25df00;
        case 0x25df04u: goto label_25df04;
        case 0x25df08u: goto label_25df08;
        case 0x25df0cu: goto label_25df0c;
        case 0x25df10u: goto label_25df10;
        case 0x25df14u: goto label_25df14;
        case 0x25df18u: goto label_25df18;
        case 0x25df1cu: goto label_25df1c;
        case 0x25df20u: goto label_25df20;
        case 0x25df24u: goto label_25df24;
        case 0x25df28u: goto label_25df28;
        case 0x25df2cu: goto label_25df2c;
        case 0x25df30u: goto label_25df30;
        case 0x25df34u: goto label_25df34;
        case 0x25df38u: goto label_25df38;
        case 0x25df3cu: goto label_25df3c;
        case 0x25df40u: goto label_25df40;
        case 0x25df44u: goto label_25df44;
        case 0x25df48u: goto label_25df48;
        case 0x25df4cu: goto label_25df4c;
        case 0x25df50u: goto label_25df50;
        case 0x25df54u: goto label_25df54;
        case 0x25df58u: goto label_25df58;
        case 0x25df5cu: goto label_25df5c;
        case 0x25df60u: goto label_25df60;
        case 0x25df64u: goto label_25df64;
        case 0x25df68u: goto label_25df68;
        case 0x25df6cu: goto label_25df6c;
        case 0x25df70u: goto label_25df70;
        case 0x25df74u: goto label_25df74;
        case 0x25df78u: goto label_25df78;
        case 0x25df7cu: goto label_25df7c;
        case 0x25df80u: goto label_25df80;
        case 0x25df84u: goto label_25df84;
        case 0x25df88u: goto label_25df88;
        case 0x25df8cu: goto label_25df8c;
        case 0x25df90u: goto label_25df90;
        case 0x25df94u: goto label_25df94;
        case 0x25df98u: goto label_25df98;
        case 0x25df9cu: goto label_25df9c;
        case 0x25dfa0u: goto label_25dfa0;
        case 0x25dfa4u: goto label_25dfa4;
        case 0x25dfa8u: goto label_25dfa8;
        case 0x25dfacu: goto label_25dfac;
        case 0x25dfb0u: goto label_25dfb0;
        case 0x25dfb4u: goto label_25dfb4;
        case 0x25dfb8u: goto label_25dfb8;
        case 0x25dfbcu: goto label_25dfbc;
        case 0x25dfc0u: goto label_25dfc0;
        case 0x25dfc4u: goto label_25dfc4;
        case 0x25dfc8u: goto label_25dfc8;
        case 0x25dfccu: goto label_25dfcc;
        case 0x25dfd0u: goto label_25dfd0;
        case 0x25dfd4u: goto label_25dfd4;
        case 0x25dfd8u: goto label_25dfd8;
        case 0x25dfdcu: goto label_25dfdc;
        case 0x25dfe0u: goto label_25dfe0;
        case 0x25dfe4u: goto label_25dfe4;
        case 0x25dfe8u: goto label_25dfe8;
        case 0x25dfecu: goto label_25dfec;
        case 0x25dff0u: goto label_25dff0;
        case 0x25dff4u: goto label_25dff4;
        case 0x25dff8u: goto label_25dff8;
        case 0x25dffcu: goto label_25dffc;
        case 0x25e000u: goto label_25e000;
        case 0x25e004u: goto label_25e004;
        case 0x25e008u: goto label_25e008;
        case 0x25e00cu: goto label_25e00c;
        case 0x25e010u: goto label_25e010;
        case 0x25e014u: goto label_25e014;
        case 0x25e018u: goto label_25e018;
        case 0x25e01cu: goto label_25e01c;
        case 0x25e020u: goto label_25e020;
        case 0x25e024u: goto label_25e024;
        case 0x25e028u: goto label_25e028;
        case 0x25e02cu: goto label_25e02c;
        case 0x25e030u: goto label_25e030;
        case 0x25e034u: goto label_25e034;
        case 0x25e038u: goto label_25e038;
        case 0x25e03cu: goto label_25e03c;
        case 0x25e040u: goto label_25e040;
        case 0x25e044u: goto label_25e044;
        case 0x25e048u: goto label_25e048;
        case 0x25e04cu: goto label_25e04c;
        case 0x25e050u: goto label_25e050;
        case 0x25e054u: goto label_25e054;
        case 0x25e058u: goto label_25e058;
        case 0x25e05cu: goto label_25e05c;
        case 0x25e060u: goto label_25e060;
        case 0x25e064u: goto label_25e064;
        case 0x25e068u: goto label_25e068;
        case 0x25e06cu: goto label_25e06c;
        case 0x25e070u: goto label_25e070;
        case 0x25e074u: goto label_25e074;
        case 0x25e078u: goto label_25e078;
        case 0x25e07cu: goto label_25e07c;
        case 0x25e080u: goto label_25e080;
        case 0x25e084u: goto label_25e084;
        case 0x25e088u: goto label_25e088;
        case 0x25e08cu: goto label_25e08c;
        case 0x25e090u: goto label_25e090;
        case 0x25e094u: goto label_25e094;
        case 0x25e098u: goto label_25e098;
        case 0x25e09cu: goto label_25e09c;
        case 0x25e0a0u: goto label_25e0a0;
        case 0x25e0a4u: goto label_25e0a4;
        case 0x25e0a8u: goto label_25e0a8;
        case 0x25e0acu: goto label_25e0ac;
        case 0x25e0b0u: goto label_25e0b0;
        case 0x25e0b4u: goto label_25e0b4;
        case 0x25e0b8u: goto label_25e0b8;
        case 0x25e0bcu: goto label_25e0bc;
        case 0x25e0c0u: goto label_25e0c0;
        case 0x25e0c4u: goto label_25e0c4;
        case 0x25e0c8u: goto label_25e0c8;
        case 0x25e0ccu: goto label_25e0cc;
        case 0x25e0d0u: goto label_25e0d0;
        case 0x25e0d4u: goto label_25e0d4;
        case 0x25e0d8u: goto label_25e0d8;
        case 0x25e0dcu: goto label_25e0dc;
        case 0x25e0e0u: goto label_25e0e0;
        case 0x25e0e4u: goto label_25e0e4;
        case 0x25e0e8u: goto label_25e0e8;
        case 0x25e0ecu: goto label_25e0ec;
        case 0x25e0f0u: goto label_25e0f0;
        case 0x25e0f4u: goto label_25e0f4;
        case 0x25e0f8u: goto label_25e0f8;
        case 0x25e0fcu: goto label_25e0fc;
        case 0x25e100u: goto label_25e100;
        case 0x25e104u: goto label_25e104;
        case 0x25e108u: goto label_25e108;
        case 0x25e10cu: goto label_25e10c;
        case 0x25e110u: goto label_25e110;
        case 0x25e114u: goto label_25e114;
        case 0x25e118u: goto label_25e118;
        case 0x25e11cu: goto label_25e11c;
        case 0x25e120u: goto label_25e120;
        case 0x25e124u: goto label_25e124;
        case 0x25e128u: goto label_25e128;
        case 0x25e12cu: goto label_25e12c;
        case 0x25e130u: goto label_25e130;
        case 0x25e134u: goto label_25e134;
        case 0x25e138u: goto label_25e138;
        case 0x25e13cu: goto label_25e13c;
        case 0x25e140u: goto label_25e140;
        case 0x25e144u: goto label_25e144;
        case 0x25e148u: goto label_25e148;
        case 0x25e14cu: goto label_25e14c;
        case 0x25e150u: goto label_25e150;
        case 0x25e154u: goto label_25e154;
        case 0x25e158u: goto label_25e158;
        case 0x25e15cu: goto label_25e15c;
        case 0x25e160u: goto label_25e160;
        case 0x25e164u: goto label_25e164;
        case 0x25e168u: goto label_25e168;
        case 0x25e16cu: goto label_25e16c;
        case 0x25e170u: goto label_25e170;
        case 0x25e174u: goto label_25e174;
        case 0x25e178u: goto label_25e178;
        case 0x25e17cu: goto label_25e17c;
        case 0x25e180u: goto label_25e180;
        case 0x25e184u: goto label_25e184;
        case 0x25e188u: goto label_25e188;
        case 0x25e18cu: goto label_25e18c;
        case 0x25e190u: goto label_25e190;
        case 0x25e194u: goto label_25e194;
        case 0x25e198u: goto label_25e198;
        case 0x25e19cu: goto label_25e19c;
        case 0x25e1a0u: goto label_25e1a0;
        case 0x25e1a4u: goto label_25e1a4;
        case 0x25e1a8u: goto label_25e1a8;
        case 0x25e1acu: goto label_25e1ac;
        case 0x25e1b0u: goto label_25e1b0;
        case 0x25e1b4u: goto label_25e1b4;
        case 0x25e1b8u: goto label_25e1b8;
        case 0x25e1bcu: goto label_25e1bc;
        case 0x25e1c0u: goto label_25e1c0;
        case 0x25e1c4u: goto label_25e1c4;
        case 0x25e1c8u: goto label_25e1c8;
        case 0x25e1ccu: goto label_25e1cc;
        case 0x25e1d0u: goto label_25e1d0;
        case 0x25e1d4u: goto label_25e1d4;
        case 0x25e1d8u: goto label_25e1d8;
        case 0x25e1dcu: goto label_25e1dc;
        case 0x25e1e0u: goto label_25e1e0;
        case 0x25e1e4u: goto label_25e1e4;
        case 0x25e1e8u: goto label_25e1e8;
        case 0x25e1ecu: goto label_25e1ec;
        case 0x25e1f0u: goto label_25e1f0;
        case 0x25e1f4u: goto label_25e1f4;
        case 0x25e1f8u: goto label_25e1f8;
        case 0x25e1fcu: goto label_25e1fc;
        case 0x25e200u: goto label_25e200;
        case 0x25e204u: goto label_25e204;
        case 0x25e208u: goto label_25e208;
        case 0x25e20cu: goto label_25e20c;
        case 0x25e210u: goto label_25e210;
        case 0x25e214u: goto label_25e214;
        case 0x25e218u: goto label_25e218;
        case 0x25e21cu: goto label_25e21c;
        case 0x25e220u: goto label_25e220;
        case 0x25e224u: goto label_25e224;
        case 0x25e228u: goto label_25e228;
        case 0x25e22cu: goto label_25e22c;
        case 0x25e230u: goto label_25e230;
        case 0x25e234u: goto label_25e234;
        case 0x25e238u: goto label_25e238;
        case 0x25e23cu: goto label_25e23c;
        case 0x25e240u: goto label_25e240;
        case 0x25e244u: goto label_25e244;
        case 0x25e248u: goto label_25e248;
        case 0x25e24cu: goto label_25e24c;
        case 0x25e250u: goto label_25e250;
        case 0x25e254u: goto label_25e254;
        case 0x25e258u: goto label_25e258;
        case 0x25e25cu: goto label_25e25c;
        case 0x25e260u: goto label_25e260;
        case 0x25e264u: goto label_25e264;
        case 0x25e268u: goto label_25e268;
        case 0x25e26cu: goto label_25e26c;
        case 0x25e270u: goto label_25e270;
        case 0x25e274u: goto label_25e274;
        case 0x25e278u: goto label_25e278;
        case 0x25e27cu: goto label_25e27c;
        case 0x25e280u: goto label_25e280;
        case 0x25e284u: goto label_25e284;
        case 0x25e288u: goto label_25e288;
        case 0x25e28cu: goto label_25e28c;
        case 0x25e290u: goto label_25e290;
        case 0x25e294u: goto label_25e294;
        case 0x25e298u: goto label_25e298;
        case 0x25e29cu: goto label_25e29c;
        case 0x25e2a0u: goto label_25e2a0;
        case 0x25e2a4u: goto label_25e2a4;
        case 0x25e2a8u: goto label_25e2a8;
        case 0x25e2acu: goto label_25e2ac;
        case 0x25e2b0u: goto label_25e2b0;
        case 0x25e2b4u: goto label_25e2b4;
        case 0x25e2b8u: goto label_25e2b8;
        case 0x25e2bcu: goto label_25e2bc;
        case 0x25e2c0u: goto label_25e2c0;
        case 0x25e2c4u: goto label_25e2c4;
        case 0x25e2c8u: goto label_25e2c8;
        case 0x25e2ccu: goto label_25e2cc;
        case 0x25e2d0u: goto label_25e2d0;
        case 0x25e2d4u: goto label_25e2d4;
        case 0x25e2d8u: goto label_25e2d8;
        case 0x25e2dcu: goto label_25e2dc;
        case 0x25e2e0u: goto label_25e2e0;
        case 0x25e2e4u: goto label_25e2e4;
        case 0x25e2e8u: goto label_25e2e8;
        case 0x25e2ecu: goto label_25e2ec;
        case 0x25e2f0u: goto label_25e2f0;
        case 0x25e2f4u: goto label_25e2f4;
        case 0x25e2f8u: goto label_25e2f8;
        case 0x25e2fcu: goto label_25e2fc;
        case 0x25e300u: goto label_25e300;
        case 0x25e304u: goto label_25e304;
        case 0x25e308u: goto label_25e308;
        case 0x25e30cu: goto label_25e30c;
        case 0x25e310u: goto label_25e310;
        case 0x25e314u: goto label_25e314;
        case 0x25e318u: goto label_25e318;
        case 0x25e31cu: goto label_25e31c;
        case 0x25e320u: goto label_25e320;
        case 0x25e324u: goto label_25e324;
        case 0x25e328u: goto label_25e328;
        case 0x25e32cu: goto label_25e32c;
        case 0x25e330u: goto label_25e330;
        case 0x25e334u: goto label_25e334;
        case 0x25e338u: goto label_25e338;
        case 0x25e33cu: goto label_25e33c;
        case 0x25e340u: goto label_25e340;
        case 0x25e344u: goto label_25e344;
        case 0x25e348u: goto label_25e348;
        case 0x25e34cu: goto label_25e34c;
        case 0x25e350u: goto label_25e350;
        case 0x25e354u: goto label_25e354;
        case 0x25e358u: goto label_25e358;
        case 0x25e35cu: goto label_25e35c;
        case 0x25e360u: goto label_25e360;
        case 0x25e364u: goto label_25e364;
        case 0x25e368u: goto label_25e368;
        case 0x25e36cu: goto label_25e36c;
        case 0x25e370u: goto label_25e370;
        case 0x25e374u: goto label_25e374;
        case 0x25e378u: goto label_25e378;
        case 0x25e37cu: goto label_25e37c;
        case 0x25e380u: goto label_25e380;
        case 0x25e384u: goto label_25e384;
        case 0x25e388u: goto label_25e388;
        case 0x25e38cu: goto label_25e38c;
        case 0x25e390u: goto label_25e390;
        case 0x25e394u: goto label_25e394;
        case 0x25e398u: goto label_25e398;
        case 0x25e39cu: goto label_25e39c;
        case 0x25e3a0u: goto label_25e3a0;
        case 0x25e3a4u: goto label_25e3a4;
        case 0x25e3a8u: goto label_25e3a8;
        case 0x25e3acu: goto label_25e3ac;
        case 0x25e3b0u: goto label_25e3b0;
        case 0x25e3b4u: goto label_25e3b4;
        case 0x25e3b8u: goto label_25e3b8;
        case 0x25e3bcu: goto label_25e3bc;
        case 0x25e3c0u: goto label_25e3c0;
        case 0x25e3c4u: goto label_25e3c4;
        case 0x25e3c8u: goto label_25e3c8;
        case 0x25e3ccu: goto label_25e3cc;
        case 0x25e3d0u: goto label_25e3d0;
        case 0x25e3d4u: goto label_25e3d4;
        case 0x25e3d8u: goto label_25e3d8;
        case 0x25e3dcu: goto label_25e3dc;
        case 0x25e3e0u: goto label_25e3e0;
        case 0x25e3e4u: goto label_25e3e4;
        case 0x25e3e8u: goto label_25e3e8;
        case 0x25e3ecu: goto label_25e3ec;
        case 0x25e3f0u: goto label_25e3f0;
        case 0x25e3f4u: goto label_25e3f4;
        case 0x25e3f8u: goto label_25e3f8;
        case 0x25e3fcu: goto label_25e3fc;
        case 0x25e400u: goto label_25e400;
        case 0x25e404u: goto label_25e404;
        case 0x25e408u: goto label_25e408;
        case 0x25e40cu: goto label_25e40c;
        case 0x25e410u: goto label_25e410;
        case 0x25e414u: goto label_25e414;
        case 0x25e418u: goto label_25e418;
        case 0x25e41cu: goto label_25e41c;
        case 0x25e420u: goto label_25e420;
        case 0x25e424u: goto label_25e424;
        case 0x25e428u: goto label_25e428;
        case 0x25e42cu: goto label_25e42c;
        case 0x25e430u: goto label_25e430;
        case 0x25e434u: goto label_25e434;
        case 0x25e438u: goto label_25e438;
        case 0x25e43cu: goto label_25e43c;
        case 0x25e440u: goto label_25e440;
        case 0x25e444u: goto label_25e444;
        case 0x25e448u: goto label_25e448;
        case 0x25e44cu: goto label_25e44c;
        case 0x25e450u: goto label_25e450;
        case 0x25e454u: goto label_25e454;
        case 0x25e458u: goto label_25e458;
        case 0x25e45cu: goto label_25e45c;
        case 0x25e460u: goto label_25e460;
        case 0x25e464u: goto label_25e464;
        case 0x25e468u: goto label_25e468;
        case 0x25e46cu: goto label_25e46c;
        case 0x25e470u: goto label_25e470;
        case 0x25e474u: goto label_25e474;
        case 0x25e478u: goto label_25e478;
        case 0x25e47cu: goto label_25e47c;
        case 0x25e480u: goto label_25e480;
        case 0x25e484u: goto label_25e484;
        case 0x25e488u: goto label_25e488;
        case 0x25e48cu: goto label_25e48c;
        case 0x25e490u: goto label_25e490;
        case 0x25e494u: goto label_25e494;
        case 0x25e498u: goto label_25e498;
        case 0x25e49cu: goto label_25e49c;
        case 0x25e4a0u: goto label_25e4a0;
        case 0x25e4a4u: goto label_25e4a4;
        case 0x25e4a8u: goto label_25e4a8;
        case 0x25e4acu: goto label_25e4ac;
        case 0x25e4b0u: goto label_25e4b0;
        case 0x25e4b4u: goto label_25e4b4;
        case 0x25e4b8u: goto label_25e4b8;
        case 0x25e4bcu: goto label_25e4bc;
        case 0x25e4c0u: goto label_25e4c0;
        case 0x25e4c4u: goto label_25e4c4;
        case 0x25e4c8u: goto label_25e4c8;
        case 0x25e4ccu: goto label_25e4cc;
        case 0x25e4d0u: goto label_25e4d0;
        case 0x25e4d4u: goto label_25e4d4;
        case 0x25e4d8u: goto label_25e4d8;
        case 0x25e4dcu: goto label_25e4dc;
        case 0x25e4e0u: goto label_25e4e0;
        case 0x25e4e4u: goto label_25e4e4;
        case 0x25e4e8u: goto label_25e4e8;
        case 0x25e4ecu: goto label_25e4ec;
        case 0x25e4f0u: goto label_25e4f0;
        case 0x25e4f4u: goto label_25e4f4;
        case 0x25e4f8u: goto label_25e4f8;
        case 0x25e4fcu: goto label_25e4fc;
        case 0x25e500u: goto label_25e500;
        case 0x25e504u: goto label_25e504;
        case 0x25e508u: goto label_25e508;
        case 0x25e50cu: goto label_25e50c;
        case 0x25e510u: goto label_25e510;
        case 0x25e514u: goto label_25e514;
        case 0x25e518u: goto label_25e518;
        case 0x25e51cu: goto label_25e51c;
        default: return;
    }

label_25dd50:
    // 0x25dd50: 0x7c28  .word       0x00007C28                   # mfsa        $t7 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25dd50u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_25dd54:
    // 0x25dd54: 0xad50  .word       0x0000AD50                   # mfhi        $s5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dd54u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25dd58:
    // 0x25dd58: 0x0  nop
    ctx->pc = 0x25dd58u;
    // NOP
label_25dd5c:
    // 0x25dd5c: 0x0  nop
    ctx->pc = 0x25dd5cu;
    // NOP
label_25dd60:
    // 0x25dd60: 0x7c3e  dsrl32      $t7, $zero, 16
    ctx->pc = 0x25dd60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> (32 + 16));
label_25dd64:
    // 0x25dd64: 0x9a00  sll         $s3, $zero, 8
    ctx->pc = 0x25dd64u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25dd68:
    // 0x25dd68: 0x0  nop
    ctx->pc = 0x25dd68u;
    // NOP
label_25dd6c:
    // 0x25dd6c: 0x0  nop
    ctx->pc = 0x25dd6cu;
    // NOP
label_25dd70:
    // 0x25dd70: 0x7c52  .word       0x00007C52                   # mflo        $t7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dd70u;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_25dd74:
    // 0x25dd74: 0xade0  .word       0x0000ADE0                   # add         $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dd74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25dd78:
    // 0x25dd78: 0x0  nop
    ctx->pc = 0x25dd78u;
    // NOP
label_25dd7c:
    // 0x25dd7c: 0x0  nop
    ctx->pc = 0x25dd7cu;
    // NOP
label_25dd80:
    // 0x25dd80: 0x7c68  .word       0x00007C68                   # mfsa        $t7 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25dd80u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_25dd84:
    // 0x25dd84: 0xa240  sll         $s4, $zero, 9
    ctx->pc = 0x25dd84u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25dd88:
    // 0x25dd88: 0x0  nop
    ctx->pc = 0x25dd88u;
    // NOP
label_25dd8c:
    // 0x25dd8c: 0x0  nop
    ctx->pc = 0x25dd8cu;
    // NOP
label_25dd90:
    // 0x25dd90: 0x7c7d  .word       0x00007C7D                   # INVALID     $zero, $zero, 0x7C7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dd90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25DD90 raw=0x00007C7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25dd94:
    // 0x25dd94: 0xabf0  tge         $zero, $zero, 687
    ctx->pc = 0x25dd94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25dd98:
    // 0x25dd98: 0x0  nop
    ctx->pc = 0x25dd98u;
    // NOP
label_25dd9c:
    // 0x25dd9c: 0x0  nop
    ctx->pc = 0x25dd9cu;
    // NOP
label_25dda0:
    // 0x25dda0: 0x7c93  .word       0x00007C93                   # mtlo        $zero # 00007C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dda0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25dda4:
    // 0x25dda4: 0x95a0  .word       0x000095A0                   # add         $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dda4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25dda8:
    // 0x25dda8: 0x0  nop
    ctx->pc = 0x25dda8u;
    // NOP
label_25ddac:
    // 0x25ddac: 0x0  nop
    ctx->pc = 0x25ddacu;
    // NOP
label_25ddb0:
    // 0x25ddb0: 0x7ca6  .word       0x00007CA6                   # xor         $t7, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ddb0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25ddb4:
    // 0x25ddb4: 0xa290  .word       0x0000A290                   # mfhi        $s4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ddb4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25ddb8:
    // 0x25ddb8: 0x0  nop
    ctx->pc = 0x25ddb8u;
    // NOP
label_25ddbc:
    // 0x25ddbc: 0x0  nop
    ctx->pc = 0x25ddbcu;
    // NOP
label_25ddc0:
    // 0x25ddc0: 0x7cbb  dsra        $t7, $zero, 18
    ctx->pc = 0x25ddc0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 18);
label_25ddc4:
    // 0x25ddc4: 0x9e20  .word       0x00009E20                   # add         $s3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ddc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_25ddc8:
    // 0x25ddc8: 0x0  nop
    ctx->pc = 0x25ddc8u;
    // NOP
label_25ddcc:
    // 0x25ddcc: 0x0  nop
    ctx->pc = 0x25ddccu;
    // NOP
label_25ddd0:
    // 0x25ddd0: 0x7ccf  .word       0x00007CCF                   # sync.p # 00007800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ddd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25ddd4:
    // 0x25ddd4: 0x93c0  sll         $s2, $zero, 15
    ctx->pc = 0x25ddd4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25ddd8:
    // 0x25ddd8: 0x0  nop
    ctx->pc = 0x25ddd8u;
    // NOP
label_25dddc:
    // 0x25dddc: 0x0  nop
    ctx->pc = 0x25dddcu;
    // NOP
label_25dde0:
    // 0x25dde0: 0x7ce2  .word       0x00007CE2                   # neg         $t7, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dde0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_25dde4:
    // 0x25dde4: 0xb150  .word       0x0000B150                   # mfhi        $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dde4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_25dde8:
    // 0x25dde8: 0x0  nop
    ctx->pc = 0x25dde8u;
    // NOP
label_25ddec:
    // 0x25ddec: 0x0  nop
    ctx->pc = 0x25ddecu;
    // NOP
label_25ddf0:
    // 0x25ddf0: 0x7cf9  .word       0x00007CF9                   # INVALID     $zero, $zero, 0x7CF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ddf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25DDF0 raw=0x00007CF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ddf4:
    // 0x25ddf4: 0xb5e0  .word       0x0000B5E0                   # add         $s6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ddf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_25ddf8:
    // 0x25ddf8: 0x0  nop
    ctx->pc = 0x25ddf8u;
    // NOP
label_25ddfc:
    // 0x25ddfc: 0x0  nop
    ctx->pc = 0x25ddfcu;
    // NOP
label_25de00:
    // 0x25de00: 0x7d10  .word       0x00007D10                   # mfhi        $t7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de00u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25de04:
    // 0x25de04: 0xa0c0  sll         $s4, $zero, 3
    ctx->pc = 0x25de04u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25de08:
    // 0x25de08: 0x0  nop
    ctx->pc = 0x25de08u;
    // NOP
label_25de0c:
    // 0x25de0c: 0x0  nop
    ctx->pc = 0x25de0cu;
    // NOP
label_25de10:
    // 0x25de10: 0x7d25  .word       0x00007D25                   # move        $t7, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25de14:
    // 0x25de14: 0xad50  .word       0x0000AD50                   # mfhi        $s5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de14u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25de18:
    // 0x25de18: 0x0  nop
    ctx->pc = 0x25de18u;
    // NOP
label_25de1c:
    // 0x25de1c: 0x0  nop
    ctx->pc = 0x25de1cu;
    // NOP
label_25de20:
    // 0x25de20: 0x7d3b  dsra        $t7, $zero, 20
    ctx->pc = 0x25de20u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 20);
label_25de24:
    // 0x25de24: 0x96c0  sll         $s2, $zero, 27
    ctx->pc = 0x25de24u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25de28:
    // 0x25de28: 0x0  nop
    ctx->pc = 0x25de28u;
    // NOP
label_25de2c:
    // 0x25de2c: 0x0  nop
    ctx->pc = 0x25de2cu;
    // NOP
label_25de30:
    // 0x25de30: 0x7d4e  .word       0x00007D4E                   # INVALID     $zero, $zero, 0x7D4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25DE30 raw=0x00007D4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25de34:
    // 0x25de34: 0x9c90  .word       0x00009C90                   # mfhi        $s3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de34u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_25de38:
    // 0x25de38: 0x0  nop
    ctx->pc = 0x25de38u;
    // NOP
label_25de3c:
    // 0x25de3c: 0x0  nop
    ctx->pc = 0x25de3cu;
    // NOP
label_25de40:
    // 0x25de40: 0x7d62  .word       0x00007D62                   # neg         $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_25de44:
    // 0x25de44: 0xa510  .word       0x0000A510                   # mfhi        $s4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de44u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25de48:
    // 0x25de48: 0x0  nop
    ctx->pc = 0x25de48u;
    // NOP
label_25de4c:
    // 0x25de4c: 0x0  nop
    ctx->pc = 0x25de4cu;
    // NOP
label_25de50:
    // 0x25de50: 0x7d77  .word       0x00007D77                   # INVALID     $zero, $zero, 0x7D77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25DE50 raw=0x00007D77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25de54:
    // 0x25de54: 0xa1d0  .word       0x0000A1D0                   # mfhi        $s4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de54u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25de58:
    // 0x25de58: 0x0  nop
    ctx->pc = 0x25de58u;
    // NOP
label_25de5c:
    // 0x25de5c: 0x0  nop
    ctx->pc = 0x25de5cu;
    // NOP
label_25de60:
    // 0x25de60: 0x7d8c  syscall     502
    ctx->pc = 0x25de60u;
    ctx->pc = 0x25DE64u;
runtime->handleSyscall(rdram, ctx, 0x1F6u);
label_25de64:
    // 0x25de64: 0xa610  .word       0x0000A610                   # mfhi        $s4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de64u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25de68:
    // 0x25de68: 0x0  nop
    ctx->pc = 0x25de68u;
    // NOP
label_25de6c:
    // 0x25de6c: 0x0  nop
    ctx->pc = 0x25de6cu;
    // NOP
label_25de70:
    // 0x25de70: 0x7da1  .word       0x00007DA1                   # addu        $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25de74:
    // 0x25de74: 0xac10  .word       0x0000AC10                   # mfhi        $s5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de74u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25de78:
    // 0x25de78: 0x0  nop
    ctx->pc = 0x25de78u;
    // NOP
label_25de7c:
    // 0x25de7c: 0x0  nop
    ctx->pc = 0x25de7cu;
    // NOP
label_25de80:
    // 0x25de80: 0x7db7  .word       0x00007DB7                   # INVALID     $zero, $zero, 0x7DB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25DE80 raw=0x00007DB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25de84:
    // 0x25de84: 0x9ec0  sll         $s3, $zero, 27
    ctx->pc = 0x25de84u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25de88:
    // 0x25de88: 0x0  nop
    ctx->pc = 0x25de88u;
    // NOP
label_25de8c:
    // 0x25de8c: 0x0  nop
    ctx->pc = 0x25de8cu;
    // NOP
label_25de90:
    // 0x25de90: 0x7dcb  .word       0x00007DCB                   # movn        $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de90u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_25de94:
    // 0x25de94: 0x4f20  .word       0x00004F20                   # add         $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25de94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25de98:
    // 0x25de98: 0x0  nop
    ctx->pc = 0x25de98u;
    // NOP
label_25de9c:
    // 0x25de9c: 0x0  nop
    ctx->pc = 0x25de9cu;
    // NOP
label_25dea0:
    // 0x25dea0: 0x7dd5  .word       0x00007DD5                   # INVALID     $zero, $zero, 0x7DD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25DEA0 raw=0x00007DD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25dea4:
    // 0x25dea4: 0xab10  .word       0x0000AB10                   # mfhi        $s5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dea4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25dea8:
    // 0x25dea8: 0x0  nop
    ctx->pc = 0x25dea8u;
    // NOP
label_25deac:
    // 0x25deac: 0x0  nop
    ctx->pc = 0x25deacu;
    // NOP
label_25deb0:
    // 0x25deb0: 0x7deb  .word       0x00007DEB                   # sltu        $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25deb0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25deb4:
    // 0x25deb4: 0xa960  .word       0x0000A960                   # add         $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25deb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25deb8:
    // 0x25deb8: 0x0  nop
    ctx->pc = 0x25deb8u;
    // NOP
label_25debc:
    // 0x25debc: 0x0  nop
    ctx->pc = 0x25debcu;
    // NOP
label_25dec0:
    // 0x25dec0: 0x7e01  .word       0x00007E01                   # INVALID     $zero, $zero, 0x7E01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25DEC0 raw=0x00007E01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25dec4:
    // 0x25dec4: 0xac40  sll         $s5, $zero, 17
    ctx->pc = 0x25dec4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_25dec8:
    // 0x25dec8: 0x0  nop
    ctx->pc = 0x25dec8u;
    // NOP
label_25decc:
    // 0x25decc: 0x0  nop
    ctx->pc = 0x25deccu;
    // NOP
label_25ded0:
    // 0x25ded0: 0x7e17  .word       0x00007E17                   # dsrav       $t7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ded0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25ded4:
    // 0x25ded4: 0x9f40  sll         $s3, $zero, 29
    ctx->pc = 0x25ded4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_25ded8:
    // 0x25ded8: 0x0  nop
    ctx->pc = 0x25ded8u;
    // NOP
label_25dedc:
    // 0x25dedc: 0x0  nop
    ctx->pc = 0x25dedcu;
    // NOP
label_25dee0:
    // 0x25dee0: 0x7e2b  .word       0x00007E2B                   # sltu        $t7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dee0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25dee4:
    // 0x25dee4: 0x9d80  sll         $s3, $zero, 22
    ctx->pc = 0x25dee4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25dee8:
    // 0x25dee8: 0x0  nop
    ctx->pc = 0x25dee8u;
    // NOP
label_25deec:
    // 0x25deec: 0x0  nop
    ctx->pc = 0x25deecu;
    // NOP
label_25def0:
    // 0x25def0: 0x7e3f  dsra32      $t7, $zero, 24
    ctx->pc = 0x25def0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 24));
label_25def4:
    // 0x25def4: 0xbf70  tge         $zero, $zero, 765
    ctx->pc = 0x25def4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25def8:
    // 0x25def8: 0x0  nop
    ctx->pc = 0x25def8u;
    // NOP
label_25defc:
    // 0x25defc: 0x0  nop
    ctx->pc = 0x25defcu;
    // NOP
label_25df00:
    // 0x25df00: 0x7e57  .word       0x00007E57                   # dsrav       $t7, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df00u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25df04:
    // 0x25df04: 0xe5e0  .word       0x0000E5E0                   # add         $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25df08:
    // 0x25df08: 0x0  nop
    ctx->pc = 0x25df08u;
    // NOP
label_25df0c:
    // 0x25df0c: 0x0  nop
    ctx->pc = 0x25df0cu;
    // NOP
label_25df10:
    // 0x25df10: 0x7e74  teq         $zero, $zero, 505
    ctx->pc = 0x25df10u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25df14:
    // 0x25df14: 0x31e0  .word       0x000031E0                   # add         $a2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25df18:
    // 0x25df18: 0x0  nop
    ctx->pc = 0x25df18u;
    // NOP
label_25df1c:
    // 0x25df1c: 0x0  nop
    ctx->pc = 0x25df1cu;
    // NOP
label_25df20:
    // 0x25df20: 0x7e7b  dsra        $t7, $zero, 25
    ctx->pc = 0x25df20u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 25);
label_25df24:
    // 0x25df24: 0xb790  .word       0x0000B790                   # mfhi        $s6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df24u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_25df28:
    // 0x25df28: 0x0  nop
    ctx->pc = 0x25df28u;
    // NOP
label_25df2c:
    // 0x25df2c: 0x0  nop
    ctx->pc = 0x25df2cu;
    // NOP
label_25df30:
    // 0x25df30: 0x7e92  .word       0x00007E92                   # mflo        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df30u;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_25df34:
    // 0x25df34: 0x3c60  .word       0x00003C60                   # add         $a3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25df38:
    // 0x25df38: 0x0  nop
    ctx->pc = 0x25df38u;
    // NOP
label_25df3c:
    // 0x25df3c: 0x0  nop
    ctx->pc = 0x25df3cu;
    // NOP
label_25df40:
    // 0x25df40: 0x7e9a  .word       0x00007E9A                   # div         $t7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df40u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25df44:
    // 0x25df44: 0x7ec0  sll         $t7, $zero, 27
    ctx->pc = 0x25df44u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25df48:
    // 0x25df48: 0x0  nop
    ctx->pc = 0x25df48u;
    // NOP
label_25df4c:
    // 0x25df4c: 0x0  nop
    ctx->pc = 0x25df4cu;
    // NOP
label_25df50:
    // 0x25df50: 0x7eaa  .word       0x00007EAA                   # slt         $t7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df50u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25df54:
    // 0x25df54: 0xc590  .word       0x0000C590                   # mfhi        $t8 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df54u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25df58:
    // 0x25df58: 0x0  nop
    ctx->pc = 0x25df58u;
    // NOP
label_25df5c:
    // 0x25df5c: 0x0  nop
    ctx->pc = 0x25df5cu;
    // NOP
label_25df60:
    // 0x25df60: 0x7ec3  sra         $t7, $zero, 27
    ctx->pc = 0x25df60u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), 27));
label_25df64:
    // 0x25df64: 0xca90  .word       0x0000CA90                   # mfhi        $t9 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df64u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25df68:
    // 0x25df68: 0x0  nop
    ctx->pc = 0x25df68u;
    // NOP
label_25df6c:
    // 0x25df6c: 0x0  nop
    ctx->pc = 0x25df6cu;
    // NOP
label_25df70:
    // 0x25df70: 0x7edd  .word       0x00007EDD                   # dmultu      $zero, $zero # 00007EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25DF70 raw=0x00007EDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25df74:
    // 0x25df74: 0xa760  .word       0x0000A760                   # add         $s4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25df78:
    // 0x25df78: 0x0  nop
    ctx->pc = 0x25df78u;
    // NOP
label_25df7c:
    // 0x25df7c: 0x0  nop
    ctx->pc = 0x25df7cu;
    // NOP
label_25df80:
    // 0x25df80: 0x7ef2  tlt         $zero, $zero, 507
    ctx->pc = 0x25df80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25df84:
    // 0x25df84: 0xd4e0  .word       0x0000D4E0                   # add         $k0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25df84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_25df88:
    // 0x25df88: 0x0  nop
    ctx->pc = 0x25df88u;
    // NOP
label_25df8c:
    // 0x25df8c: 0x0  nop
    ctx->pc = 0x25df8cu;
    // NOP
label_25df90:
    // 0x25df90: 0x7f0d  break       0, 508
    ctx->pc = 0x25df90u;
    runtime->handleBreak(rdram, ctx);
label_25df94:
    // 0x25df94: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25df94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25df98:
    // 0x25df98: 0x0  nop
    ctx->pc = 0x25df98u;
    // NOP
label_25df9c:
    // 0x25df9c: 0x0  nop
    ctx->pc = 0x25df9cu;
    // NOP
label_25dfa0:
    // 0x25dfa0: 0x7f1e  .word       0x00007F1E                   # ddiv        $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dfa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25DFA0 raw=0x00007F1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25dfa4:
    // 0x25dfa4: 0xc3c0  sll         $t8, $zero, 15
    ctx->pc = 0x25dfa4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25dfa8:
    // 0x25dfa8: 0x0  nop
    ctx->pc = 0x25dfa8u;
    // NOP
label_25dfac:
    // 0x25dfac: 0x0  nop
    ctx->pc = 0x25dfacu;
    // NOP
label_25dfb0:
    // 0x25dfb0: 0x7f37  .word       0x00007F37                   # INVALID     $zero, $zero, 0x7F37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dfb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25DFB0 raw=0x00007F37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25dfb4:
    // 0x25dfb4: 0xc920  .word       0x0000C920                   # add         $t9, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dfb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25dfb8:
    // 0x25dfb8: 0x0  nop
    ctx->pc = 0x25dfb8u;
    // NOP
label_25dfbc:
    // 0x25dfbc: 0x0  nop
    ctx->pc = 0x25dfbcu;
    // NOP
label_25dfc0:
    // 0x25dfc0: 0x7f51  .word       0x00007F51                   # mthi        $zero # 00007F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dfc0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25dfc4:
    // 0x25dfc4: 0xf790  .word       0x0000F790                   # mfhi        $fp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dfc4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_25dfc8:
    // 0x25dfc8: 0x0  nop
    ctx->pc = 0x25dfc8u;
    // NOP
label_25dfcc:
    // 0x25dfcc: 0x0  nop
    ctx->pc = 0x25dfccu;
    // NOP
label_25dfd0:
    // 0x25dfd0: 0x7f70  tge         $zero, $zero, 509
    ctx->pc = 0x25dfd0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25dfd4:
    // 0x25dfd4: 0xb400  sll         $s6, $zero, 16
    ctx->pc = 0x25dfd4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25dfd8:
    // 0x25dfd8: 0x0  nop
    ctx->pc = 0x25dfd8u;
    // NOP
label_25dfdc:
    // 0x25dfdc: 0x0  nop
    ctx->pc = 0x25dfdcu;
    // NOP
label_25dfe0:
    // 0x25dfe0: 0x7f87  .word       0x00007F87                   # srav        $t7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dfe0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25dfe4:
    // 0x25dfe4: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dfe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25dfe8:
    // 0x25dfe8: 0x0  nop
    ctx->pc = 0x25dfe8u;
    // NOP
label_25dfec:
    // 0x25dfec: 0x0  nop
    ctx->pc = 0x25dfecu;
    // NOP
label_25dff0:
    // 0x25dff0: 0x7f9c  .word       0x00007F9C                   # dmult       $zero, $zero # 00007F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dff0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25DFF0 raw=0x00007F9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25dff4:
    // 0x25dff4: 0xae50  .word       0x0000AE50                   # mfhi        $s5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dff4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25dff8:
    // 0x25dff8: 0x0  nop
    ctx->pc = 0x25dff8u;
    // NOP
label_25dffc:
    // 0x25dffc: 0x0  nop
    ctx->pc = 0x25dffcu;
    // NOP
label_25e000:
    // 0x25e000: 0x7fb2  tlt         $zero, $zero, 510
    ctx->pc = 0x25e000u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e004:
    // 0x25e004: 0x98f0  tge         $zero, $zero, 611
    ctx->pc = 0x25e004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e008:
    // 0x25e008: 0x0  nop
    ctx->pc = 0x25e008u;
    // NOP
label_25e00c:
    // 0x25e00c: 0x0  nop
    ctx->pc = 0x25e00cu;
    // NOP
label_25e010:
    // 0x25e010: 0x7fc6  .word       0x00007FC6                   # srlv        $t7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e010u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25e014:
    // 0x25e014: 0xcd30  tge         $zero, $zero, 820
    ctx->pc = 0x25e014u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e018:
    // 0x25e018: 0x0  nop
    ctx->pc = 0x25e018u;
    // NOP
label_25e01c:
    // 0x25e01c: 0x0  nop
    ctx->pc = 0x25e01cu;
    // NOP
label_25e020:
    // 0x25e020: 0x7fe0  .word       0x00007FE0                   # add         $t7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e020u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25e024:
    // 0x25e024: 0xb780  sll         $s6, $zero, 30
    ctx->pc = 0x25e024u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25e028:
    // 0x25e028: 0x0  nop
    ctx->pc = 0x25e028u;
    // NOP
label_25e02c:
    // 0x25e02c: 0x0  nop
    ctx->pc = 0x25e02cu;
    // NOP
label_25e030:
    // 0x25e030: 0x7ff7  .word       0x00007FF7                   # INVALID     $zero, $zero, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e030u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25E030 raw=0x00007FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e034:
    // 0x25e034: 0xb6f0  tge         $zero, $zero, 731
    ctx->pc = 0x25e034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e038:
    // 0x25e038: 0x0  nop
    ctx->pc = 0x25e038u;
    // NOP
label_25e03c:
    // 0x25e03c: 0x0  nop
    ctx->pc = 0x25e03cu;
    // NOP
label_25e040:
    // 0x25e040: 0x800e  .word       0x0000800E                   # INVALID     $zero, $zero, -0x7FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25E040 raw=0x0000800E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e044:
    // 0x25e044: 0xa9e0  .word       0x0000A9E0                   # add         $s5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e044u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25e048:
    // 0x25e048: 0x0  nop
    ctx->pc = 0x25e048u;
    // NOP
label_25e04c:
    // 0x25e04c: 0x0  nop
    ctx->pc = 0x25e04cu;
    // NOP
label_25e050:
    // 0x25e050: 0x8024  and         $s0, $zero, $zero
    ctx->pc = 0x25e050u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25e054:
    // 0x25e054: 0xae60  .word       0x0000AE60                   # add         $s5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25e058:
    // 0x25e058: 0x0  nop
    ctx->pc = 0x25e058u;
    // NOP
label_25e05c:
    // 0x25e05c: 0x0  nop
    ctx->pc = 0x25e05cu;
    // NOP
label_25e060:
    // 0x25e060: 0x803a  dsrl        $s0, $zero, 0
    ctx->pc = 0x25e060u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 0);
label_25e064:
    // 0x25e064: 0xa120  .word       0x0000A120                   # add         $s4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25e068:
    // 0x25e068: 0x0  nop
    ctx->pc = 0x25e068u;
    // NOP
label_25e06c:
    // 0x25e06c: 0x0  nop
    ctx->pc = 0x25e06cu;
    // NOP
label_25e070:
    // 0x25e070: 0x804f  .word       0x0000804F                   # sync # 00008000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e070u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25e074:
    // 0x25e074: 0xa390  .word       0x0000A390                   # mfhi        $s4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e074u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25e078:
    // 0x25e078: 0x0  nop
    ctx->pc = 0x25e078u;
    // NOP
label_25e07c:
    // 0x25e07c: 0x0  nop
    ctx->pc = 0x25e07cu;
    // NOP
label_25e080:
    // 0x25e080: 0x8064  .word       0x00008064                   # and         $s0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e080u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25e084:
    // 0x25e084: 0x5600  sll         $t2, $zero, 24
    ctx->pc = 0x25e084u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25e088:
    // 0x25e088: 0x0  nop
    ctx->pc = 0x25e088u;
    // NOP
label_25e08c:
    // 0x25e08c: 0x0  nop
    ctx->pc = 0x25e08cu;
    // NOP
label_25e090:
    // 0x25e090: 0x806f  .word       0x0000806F                   # dsubu       $s0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e090u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25e094:
    // 0x25e094: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e094u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25e098:
    // 0x25e098: 0x0  nop
    ctx->pc = 0x25e098u;
    // NOP
label_25e09c:
    // 0x25e09c: 0x0  nop
    ctx->pc = 0x25e09cu;
    // NOP
label_25e0a0:
    // 0x25e0a0: 0x808b  .word       0x0000808B                   # movn        $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e0a0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_25e0a4:
    // 0x25e0a4: 0xd6c0  sll         $k0, $zero, 27
    ctx->pc = 0x25e0a4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25e0a8:
    // 0x25e0a8: 0x0  nop
    ctx->pc = 0x25e0a8u;
    // NOP
label_25e0ac:
    // 0x25e0ac: 0x0  nop
    ctx->pc = 0x25e0acu;
    // NOP
label_25e0b0:
    // 0x25e0b0: 0x80a6  .word       0x000080A6                   # xor         $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e0b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25e0b4:
    // 0x25e0b4: 0xeb00  sll         $sp, $zero, 12
    ctx->pc = 0x25e0b4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25e0b8:
    // 0x25e0b8: 0x0  nop
    ctx->pc = 0x25e0b8u;
    // NOP
label_25e0bc:
    // 0x25e0bc: 0x0  nop
    ctx->pc = 0x25e0bcu;
    // NOP
label_25e0c0:
    // 0x25e0c0: 0x80c4  .word       0x000080C4                   # sllv        $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25e0c4:
    // 0x25e0c4: 0xb8e0  .word       0x0000B8E0                   # add         $s7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e0c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25e0c8:
    // 0x25e0c8: 0x0  nop
    ctx->pc = 0x25e0c8u;
    // NOP
label_25e0cc:
    // 0x25e0cc: 0x0  nop
    ctx->pc = 0x25e0ccu;
    // NOP
label_25e0d0:
    // 0x25e0d0: 0x80dc  .word       0x000080DC                   # dmult       $zero, $zero # 000080C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e0d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25E0D0 raw=0x000080DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e0d4:
    // 0x25e0d4: 0xb580  sll         $s6, $zero, 22
    ctx->pc = 0x25e0d4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25e0d8:
    // 0x25e0d8: 0x0  nop
    ctx->pc = 0x25e0d8u;
    // NOP
label_25e0dc:
    // 0x25e0dc: 0x0  nop
    ctx->pc = 0x25e0dcu;
    // NOP
label_25e0e0:
    // 0x25e0e0: 0x80f3  tltu        $zero, $zero, 515
    ctx->pc = 0x25e0e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e0e4:
    // 0x25e0e4: 0x3220  .word       0x00003220                   # add         $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e0e8:
    // 0x25e0e8: 0x0  nop
    ctx->pc = 0x25e0e8u;
    // NOP
label_25e0ec:
    // 0x25e0ec: 0x0  nop
    ctx->pc = 0x25e0ecu;
    // NOP
label_25e0f0:
    // 0x25e0f0: 0x80fa  dsrl        $s0, $zero, 3
    ctx->pc = 0x25e0f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 3);
label_25e0f4:
    // 0x25e0f4: 0x9c60  .word       0x00009C60                   # add         $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e0f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_25e0f8:
    // 0x25e0f8: 0x0  nop
    ctx->pc = 0x25e0f8u;
    // NOP
label_25e0fc:
    // 0x25e0fc: 0x0  nop
    ctx->pc = 0x25e0fcu;
    // NOP
label_25e100:
    // 0x25e100: 0x810e  .word       0x0000810E                   # INVALID     $zero, $zero, -0x7EF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25E100 raw=0x0000810E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e104:
    // 0x25e104: 0xbec0  sll         $s7, $zero, 27
    ctx->pc = 0x25e104u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25e108:
    // 0x25e108: 0x0  nop
    ctx->pc = 0x25e108u;
    // NOP
label_25e10c:
    // 0x25e10c: 0x0  nop
    ctx->pc = 0x25e10cu;
    // NOP
label_25e110:
    // 0x25e110: 0x8126  .word       0x00008126                   # xor         $s0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e110u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25e114:
    // 0x25e114: 0xc690  .word       0x0000C690                   # mfhi        $t8 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e114u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25e118:
    // 0x25e118: 0x0  nop
    ctx->pc = 0x25e118u;
    // NOP
label_25e11c:
    // 0x25e11c: 0x0  nop
    ctx->pc = 0x25e11cu;
    // NOP
label_25e120:
    // 0x25e120: 0x813f  dsra32      $s0, $zero, 4
    ctx->pc = 0x25e120u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 4));
label_25e124:
    // 0x25e124: 0xb7c0  sll         $s6, $zero, 31
    ctx->pc = 0x25e124u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25e128:
    // 0x25e128: 0x0  nop
    ctx->pc = 0x25e128u;
    // NOP
label_25e12c:
    // 0x25e12c: 0x0  nop
    ctx->pc = 0x25e12cu;
    // NOP
label_25e130:
    // 0x25e130: 0x8156  .word       0x00008156                   # dsrlv       $s0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e130u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e134:
    // 0x25e134: 0xbbe0  .word       0x0000BBE0                   # add         $s7, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25e138:
    // 0x25e138: 0x0  nop
    ctx->pc = 0x25e138u;
    // NOP
label_25e13c:
    // 0x25e13c: 0x0  nop
    ctx->pc = 0x25e13cu;
    // NOP
label_25e140:
    // 0x25e140: 0x816e  .word       0x0000816E                   # dsub        $s0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e140u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e144:
    // 0x25e144: 0x8140  sll         $s0, $zero, 5
    ctx->pc = 0x25e144u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_25e148:
    // 0x25e148: 0x0  nop
    ctx->pc = 0x25e148u;
    // NOP
label_25e14c:
    // 0x25e14c: 0x0  nop
    ctx->pc = 0x25e14cu;
    // NOP
label_25e150:
    // 0x25e150: 0x817f  dsra32      $s0, $zero, 5
    ctx->pc = 0x25e150u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 5));
label_25e154:
    // 0x25e154: 0xb900  sll         $s7, $zero, 4
    ctx->pc = 0x25e154u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25e158:
    // 0x25e158: 0x0  nop
    ctx->pc = 0x25e158u;
    // NOP
label_25e15c:
    // 0x25e15c: 0x0  nop
    ctx->pc = 0x25e15cu;
    // NOP
label_25e160:
    // 0x25e160: 0x8197  .word       0x00008197                   # dsrav       $s0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e160u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e164:
    // 0x25e164: 0xdb80  sll         $k1, $zero, 14
    ctx->pc = 0x25e164u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_25e168:
    // 0x25e168: 0x0  nop
    ctx->pc = 0x25e168u;
    // NOP
label_25e16c:
    // 0x25e16c: 0x0  nop
    ctx->pc = 0x25e16cu;
    // NOP
label_25e170:
    // 0x25e170: 0x81b3  tltu        $zero, $zero, 518
    ctx->pc = 0x25e170u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e174:
    // 0x25e174: 0xd6a0  .word       0x0000D6A0                   # add         $k0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e174u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_25e178:
    // 0x25e178: 0x0  nop
    ctx->pc = 0x25e178u;
    // NOP
label_25e17c:
    // 0x25e17c: 0x0  nop
    ctx->pc = 0x25e17cu;
    // NOP
label_25e180:
    // 0x25e180: 0x81ce  .word       0x000081CE                   # INVALID     $zero, $zero, -0x7E32 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25E180 raw=0x000081CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e184:
    // 0x25e184: 0x85e0  .word       0x000085E0                   # add         $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25e188:
    // 0x25e188: 0x0  nop
    ctx->pc = 0x25e188u;
    // NOP
label_25e18c:
    // 0x25e18c: 0x0  nop
    ctx->pc = 0x25e18cu;
    // NOP
label_25e190:
    // 0x25e190: 0x81df  .word       0x000081DF                   # ddivu       $s0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25E190 raw=0x000081DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e194:
    // 0x25e194: 0x74c0  sll         $t6, $zero, 19
    ctx->pc = 0x25e194u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25e198:
    // 0x25e198: 0x0  nop
    ctx->pc = 0x25e198u;
    // NOP
label_25e19c:
    // 0x25e19c: 0x0  nop
    ctx->pc = 0x25e19cu;
    // NOP
label_25e1a0:
    // 0x25e1a0: 0x81ee  .word       0x000081EE                   # dsub        $s0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e1a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e1a4:
    // 0x25e1a4: 0x3a70  tge         $zero, $zero, 233
    ctx->pc = 0x25e1a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e1a8:
    // 0x25e1a8: 0x0  nop
    ctx->pc = 0x25e1a8u;
    // NOP
label_25e1ac:
    // 0x25e1ac: 0x0  nop
    ctx->pc = 0x25e1acu;
    // NOP
label_25e1b0:
    // 0x25e1b0: 0x81f6  tne         $zero, $zero, 519
    ctx->pc = 0x25e1b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e1b4:
    // 0x25e1b4: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x25e1b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25e1b8:
    // 0x25e1b8: 0x0  nop
    ctx->pc = 0x25e1b8u;
    // NOP
label_25e1bc:
    // 0x25e1bc: 0x0  nop
    ctx->pc = 0x25e1bcu;
    // NOP
label_25e1c0:
    // 0x25e1c0: 0x8203  sra         $s0, $zero, 8
    ctx->pc = 0x25e1c0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 8));
label_25e1c4:
    // 0x25e1c4: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e1c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25e1c8:
    // 0x25e1c8: 0x0  nop
    ctx->pc = 0x25e1c8u;
    // NOP
label_25e1cc:
    // 0x25e1cc: 0x0  nop
    ctx->pc = 0x25e1ccu;
    // NOP
label_25e1d0:
    // 0x25e1d0: 0x820c  syscall     520
    ctx->pc = 0x25e1d0u;
    ctx->pc = 0x25E1D4u;
runtime->handleSyscall(rdram, ctx, 0x208u);
label_25e1d4:
    // 0x25e1d4: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x25e1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e1d8:
    // 0x25e1d8: 0x0  nop
    ctx->pc = 0x25e1d8u;
    // NOP
label_25e1dc:
    // 0x25e1dc: 0x0  nop
    ctx->pc = 0x25e1dcu;
    // NOP
label_25e1e0:
    // 0x25e1e0: 0x821a  .word       0x0000821A                   # div         $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e1e0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25e1e4:
    // 0x25e1e4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e1e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25e1e8:
    // 0x25e1e8: 0x0  nop
    ctx->pc = 0x25e1e8u;
    // NOP
label_25e1ec:
    // 0x25e1ec: 0x0  nop
    ctx->pc = 0x25e1ecu;
    // NOP
label_25e1f0:
    // 0x25e1f0: 0x8227  .word       0x00008227                   # not         $s0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e1f0u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25e1f4:
    // 0x25e1f4: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x25e1f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25e1f8:
    // 0x25e1f8: 0x0  nop
    ctx->pc = 0x25e1f8u;
    // NOP
label_25e1fc:
    // 0x25e1fc: 0x0  nop
    ctx->pc = 0x25e1fcu;
    // NOP
label_25e200:
    // 0x25e200: 0x8231  tgeu        $zero, $zero, 520
    ctx->pc = 0x25e200u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e204:
    // 0x25e204: 0x6df0  tge         $zero, $zero, 439
    ctx->pc = 0x25e204u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e208:
    // 0x25e208: 0x0  nop
    ctx->pc = 0x25e208u;
    // NOP
label_25e20c:
    // 0x25e20c: 0x0  nop
    ctx->pc = 0x25e20cu;
    // NOP
label_25e210:
    // 0x25e210: 0x823f  dsra32      $s0, $zero, 8
    ctx->pc = 0x25e210u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 8));
label_25e214:
    // 0x25e214: 0x43f0  tge         $zero, $zero, 271
    ctx->pc = 0x25e214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e218:
    // 0x25e218: 0x0  nop
    ctx->pc = 0x25e218u;
    // NOP
label_25e21c:
    // 0x25e21c: 0x0  nop
    ctx->pc = 0x25e21cu;
    // NOP
label_25e220:
    // 0x25e220: 0x8248  .word       0x00008248                   # jr          $zero # 00008240 <InstrIdType: CPU_SPECIAL>
label_25e224:
    if (ctx->pc == 0x25E224u) {
        ctx->pc = 0x25E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E220u;
        // 0x25e224: 0x8020  add         $s0, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E228u;
        goto label_25e228;
    }
    ctx->pc = 0x25E220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E220u;
        // 0x25e224: 0x8020  add         $s0, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E220u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25E228u;
label_25e228:
    // 0x25e228: 0x0  nop
    ctx->pc = 0x25e228u;
    // NOP
label_25e22c:
    // 0x25e22c: 0x0  nop
    ctx->pc = 0x25e22cu;
    // NOP
label_25e230:
    // 0x25e230: 0x8259  .word       0x00008259                   # multu       $zero, $zero # 00008240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e230u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_25e234:
    // 0x25e234: 0x6b90  .word       0x00006B90                   # mfhi        $t5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e234u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25e238:
    // 0x25e238: 0x0  nop
    ctx->pc = 0x25e238u;
    // NOP
label_25e23c:
    // 0x25e23c: 0x0  nop
    ctx->pc = 0x25e23cu;
    // NOP
label_25e240:
    // 0x25e240: 0x8267  .word       0x00008267                   # not         $s0, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e240u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25e244:
    // 0x25e244: 0x25c0  sll         $a0, $zero, 23
    ctx->pc = 0x25e244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25e248:
    // 0x25e248: 0x0  nop
    ctx->pc = 0x25e248u;
    // NOP
label_25e24c:
    // 0x25e24c: 0x0  nop
    ctx->pc = 0x25e24cu;
    // NOP
label_25e250:
    // 0x25e250: 0x826c  .word       0x0000826C                   # dadd        $s0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e254:
    // 0x25e254: 0x38a0  .word       0x000038A0                   # add         $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25e258:
    // 0x25e258: 0x0  nop
    ctx->pc = 0x25e258u;
    // NOP
label_25e25c:
    // 0x25e25c: 0x0  nop
    ctx->pc = 0x25e25cu;
    // NOP
label_25e260:
    // 0x25e260: 0x8274  teq         $zero, $zero, 521
    ctx->pc = 0x25e260u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e264:
    // 0x25e264: 0x7bf0  tge         $zero, $zero, 495
    ctx->pc = 0x25e264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e268:
    // 0x25e268: 0x0  nop
    ctx->pc = 0x25e268u;
    // NOP
label_25e26c:
    // 0x25e26c: 0x0  nop
    ctx->pc = 0x25e26cu;
    // NOP
label_25e270:
    // 0x25e270: 0x8284  .word       0x00008284                   # sllv        $s0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e270u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25e274:
    // 0x25e274: 0x5470  tge         $zero, $zero, 337
    ctx->pc = 0x25e274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e278:
    // 0x25e278: 0x0  nop
    ctx->pc = 0x25e278u;
    // NOP
label_25e27c:
    // 0x25e27c: 0x0  nop
    ctx->pc = 0x25e27cu;
    // NOP
label_25e280:
    // 0x25e280: 0x828f  .word       0x0000828F                   # sync # 00008000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e280u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25e284:
    // 0x25e284: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e284u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25e288:
    // 0x25e288: 0x0  nop
    ctx->pc = 0x25e288u;
    // NOP
label_25e28c:
    // 0x25e28c: 0x0  nop
    ctx->pc = 0x25e28cu;
    // NOP
label_25e290:
    // 0x25e290: 0x829f  .word       0x0000829F                   # ddivu       $s0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e290u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25E290 raw=0x0000829F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e294:
    // 0x25e294: 0x8fa0  .word       0x00008FA0                   # add         $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25e298:
    // 0x25e298: 0x0  nop
    ctx->pc = 0x25e298u;
    // NOP
label_25e29c:
    // 0x25e29c: 0x0  nop
    ctx->pc = 0x25e29cu;
    // NOP
label_25e2a0:
    // 0x25e2a0: 0x82b1  tgeu        $zero, $zero, 522
    ctx->pc = 0x25e2a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e2a4:
    // 0x25e2a4: 0x8f80  sll         $s1, $zero, 30
    ctx->pc = 0x25e2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25e2a8:
    // 0x25e2a8: 0x0  nop
    ctx->pc = 0x25e2a8u;
    // NOP
label_25e2ac:
    // 0x25e2ac: 0x0  nop
    ctx->pc = 0x25e2acu;
    // NOP
label_25e2b0:
    // 0x25e2b0: 0x82c3  sra         $s0, $zero, 11
    ctx->pc = 0x25e2b0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 11));
label_25e2b4:
    // 0x25e2b4: 0x7a20  .word       0x00007A20                   # add         $t7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e2b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25e2b8:
    // 0x25e2b8: 0x0  nop
    ctx->pc = 0x25e2b8u;
    // NOP
label_25e2bc:
    // 0x25e2bc: 0x0  nop
    ctx->pc = 0x25e2bcu;
    // NOP
label_25e2c0:
    // 0x25e2c0: 0x82d3  .word       0x000082D3                   # mtlo        $zero # 000082C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e2c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25e2c4:
    // 0x25e2c4: 0xd970  tge         $zero, $zero, 869
    ctx->pc = 0x25e2c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e2c8:
    // 0x25e2c8: 0x0  nop
    ctx->pc = 0x25e2c8u;
    // NOP
label_25e2cc:
    // 0x25e2cc: 0x0  nop
    ctx->pc = 0x25e2ccu;
    // NOP
label_25e2d0:
    // 0x25e2d0: 0x82ef  .word       0x000082EF                   # dsubu       $s0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e2d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25e2d4:
    // 0x25e2d4: 0x43f0  tge         $zero, $zero, 271
    ctx->pc = 0x25e2d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e2d8:
    // 0x25e2d8: 0x0  nop
    ctx->pc = 0x25e2d8u;
    // NOP
label_25e2dc:
    // 0x25e2dc: 0x0  nop
    ctx->pc = 0x25e2dcu;
    // NOP
label_25e2e0:
    // 0x25e2e0: 0x82f8  dsll        $s0, $zero, 11
    ctx->pc = 0x25e2e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 11);
label_25e2e4:
    // 0x25e2e4: 0x6ff0  tge         $zero, $zero, 447
    ctx->pc = 0x25e2e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e2e8:
    // 0x25e2e8: 0x0  nop
    ctx->pc = 0x25e2e8u;
    // NOP
label_25e2ec:
    // 0x25e2ec: 0x0  nop
    ctx->pc = 0x25e2ecu;
    // NOP
label_25e2f0:
    // 0x25e2f0: 0x8306  .word       0x00008306                   # srlv        $s0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25e2f4:
    // 0x25e2f4: 0x7ac0  sll         $t7, $zero, 11
    ctx->pc = 0x25e2f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25e2f8:
    // 0x25e2f8: 0x0  nop
    ctx->pc = 0x25e2f8u;
    // NOP
label_25e2fc:
    // 0x25e2fc: 0x0  nop
    ctx->pc = 0x25e2fcu;
    // NOP
label_25e300:
    // 0x25e300: 0x8316  .word       0x00008316                   # dsrlv       $s0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e300u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e304:
    // 0x25e304: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e304u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25e308:
    // 0x25e308: 0x0  nop
    ctx->pc = 0x25e308u;
    // NOP
label_25e30c:
    // 0x25e30c: 0x0  nop
    ctx->pc = 0x25e30cu;
    // NOP
label_25e310:
    // 0x25e310: 0x8327  .word       0x00008327                   # not         $s0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e310u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25e314:
    // 0x25e314: 0x4a40  sll         $t1, $zero, 9
    ctx->pc = 0x25e314u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25e318:
    // 0x25e318: 0x0  nop
    ctx->pc = 0x25e318u;
    // NOP
label_25e31c:
    // 0x25e31c: 0x0  nop
    ctx->pc = 0x25e31cu;
    // NOP
label_25e320:
    // 0x25e320: 0x8331  tgeu        $zero, $zero, 524
    ctx->pc = 0x25e320u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e324:
    // 0x25e324: 0x8450  .word       0x00008450                   # mfhi        $s0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e324u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25e328:
    // 0x25e328: 0x0  nop
    ctx->pc = 0x25e328u;
    // NOP
label_25e32c:
    // 0x25e32c: 0x0  nop
    ctx->pc = 0x25e32cu;
    // NOP
label_25e330:
    // 0x25e330: 0x8342  srl         $s0, $zero, 13
    ctx->pc = 0x25e330u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_25e334:
    // 0x25e334: 0x9330  tge         $zero, $zero, 588
    ctx->pc = 0x25e334u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e338:
    // 0x25e338: 0x0  nop
    ctx->pc = 0x25e338u;
    // NOP
label_25e33c:
    // 0x25e33c: 0x0  nop
    ctx->pc = 0x25e33cu;
    // NOP
label_25e340:
    // 0x25e340: 0x8355  .word       0x00008355                   # INVALID     $zero, $zero, -0x7CAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25E340 raw=0x00008355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e344:
    // 0x25e344: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25e348:
    // 0x25e348: 0x0  nop
    ctx->pc = 0x25e348u;
    // NOP
label_25e34c:
    // 0x25e34c: 0x0  nop
    ctx->pc = 0x25e34cu;
    // NOP
label_25e350:
    // 0x25e350: 0x8365  .word       0x00008365                   # move        $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e350u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25e354:
    // 0x25e354: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25e358:
    // 0x25e358: 0x0  nop
    ctx->pc = 0x25e358u;
    // NOP
label_25e35c:
    // 0x25e35c: 0x0  nop
    ctx->pc = 0x25e35cu;
    // NOP
label_25e360:
    // 0x25e360: 0x8374  teq         $zero, $zero, 525
    ctx->pc = 0x25e360u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e364:
    // 0x25e364: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x25e364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e368:
    // 0x25e368: 0x0  nop
    ctx->pc = 0x25e368u;
    // NOP
label_25e36c:
    // 0x25e36c: 0x0  nop
    ctx->pc = 0x25e36cu;
    // NOP
label_25e370:
    // 0x25e370: 0x837e  dsrl32      $s0, $zero, 13
    ctx->pc = 0x25e370u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (32 + 13));
label_25e374:
    // 0x25e374: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x25e374u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25e378:
    // 0x25e378: 0x0  nop
    ctx->pc = 0x25e378u;
    // NOP
label_25e37c:
    // 0x25e37c: 0x0  nop
    ctx->pc = 0x25e37cu;
    // NOP
label_25e380:
    // 0x25e380: 0x838a  .word       0x0000838A                   # movz        $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e380u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_25e384:
    // 0x25e384: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x25e384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e388:
    // 0x25e388: 0x0  nop
    ctx->pc = 0x25e388u;
    // NOP
label_25e38c:
    // 0x25e38c: 0x0  nop
    ctx->pc = 0x25e38cu;
    // NOP
label_25e390:
    // 0x25e390: 0x839a  .word       0x0000839A                   # div         $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e390u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25e394:
    // 0x25e394: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x25e394u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25e398:
    // 0x25e398: 0x0  nop
    ctx->pc = 0x25e398u;
    // NOP
label_25e39c:
    // 0x25e39c: 0x0  nop
    ctx->pc = 0x25e39cu;
    // NOP
label_25e3a0:
    // 0x25e3a0: 0x83aa  .word       0x000083AA                   # slt         $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3a0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25e3a4:
    // 0x25e3a4: 0xa7a0  .word       0x0000A7A0                   # add         $s4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25e3a8:
    // 0x25e3a8: 0x0  nop
    ctx->pc = 0x25e3a8u;
    // NOP
label_25e3ac:
    // 0x25e3ac: 0x0  nop
    ctx->pc = 0x25e3acu;
    // NOP
label_25e3b0:
    // 0x25e3b0: 0x83bf  dsra32      $s0, $zero, 14
    ctx->pc = 0x25e3b0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 14));
label_25e3b4:
    // 0x25e3b4: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x25e3b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e3b8:
    // 0x25e3b8: 0x0  nop
    ctx->pc = 0x25e3b8u;
    // NOP
label_25e3bc:
    // 0x25e3bc: 0x0  nop
    ctx->pc = 0x25e3bcu;
    // NOP
label_25e3c0:
    // 0x25e3c0: 0x83ca  .word       0x000083CA                   # movz        $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3c0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_25e3c4:
    // 0x25e3c4: 0x8bb0  tge         $zero, $zero, 558
    ctx->pc = 0x25e3c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e3c8:
    // 0x25e3c8: 0x0  nop
    ctx->pc = 0x25e3c8u;
    // NOP
label_25e3cc:
    // 0x25e3cc: 0x0  nop
    ctx->pc = 0x25e3ccu;
    // NOP
label_25e3d0:
    // 0x25e3d0: 0x83dc  .word       0x000083DC                   # dmult       $zero, $zero # 000083C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25E3D0 raw=0x000083DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e3d4:
    // 0x25e3d4: 0x6ba0  .word       0x00006BA0                   # add         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25e3d8:
    // 0x25e3d8: 0x0  nop
    ctx->pc = 0x25e3d8u;
    // NOP
label_25e3dc:
    // 0x25e3dc: 0x0  nop
    ctx->pc = 0x25e3dcu;
    // NOP
label_25e3e0:
    // 0x25e3e0: 0x83ea  .word       0x000083EA                   # slt         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3e0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25e3e4:
    // 0x25e3e4: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3e4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25e3e8:
    // 0x25e3e8: 0x0  nop
    ctx->pc = 0x25e3e8u;
    // NOP
label_25e3ec:
    // 0x25e3ec: 0x0  nop
    ctx->pc = 0x25e3ecu;
    // NOP
label_25e3f0:
    // 0x25e3f0: 0x83fc  dsll32      $s0, $zero, 15
    ctx->pc = 0x25e3f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (32 + 15));
label_25e3f4:
    // 0x25e3f4: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x25e3f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e3f8:
    // 0x25e3f8: 0x0  nop
    ctx->pc = 0x25e3f8u;
    // NOP
label_25e3fc:
    // 0x25e3fc: 0x0  nop
    ctx->pc = 0x25e3fcu;
    // NOP
label_25e400:
    // 0x25e400: 0x8410  .word       0x00008410                   # mfhi        $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e400u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25e404:
    // 0x25e404: 0x7280  sll         $t6, $zero, 10
    ctx->pc = 0x25e404u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25e408:
    // 0x25e408: 0x0  nop
    ctx->pc = 0x25e408u;
    // NOP
label_25e40c:
    // 0x25e40c: 0x0  nop
    ctx->pc = 0x25e40cu;
    // NOP
label_25e410:
    // 0x25e410: 0x841f  .word       0x0000841F                   # ddivu       $s0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25E410 raw=0x0000841F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e414:
    // 0x25e414: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25e418:
    // 0x25e418: 0x0  nop
    ctx->pc = 0x25e418u;
    // NOP
label_25e41c:
    // 0x25e41c: 0x0  nop
    ctx->pc = 0x25e41cu;
    // NOP
label_25e420:
    // 0x25e420: 0x842b  .word       0x0000842B                   # sltu        $s0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e420u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25e424:
    // 0x25e424: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x25e424u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25e428:
    // 0x25e428: 0x0  nop
    ctx->pc = 0x25e428u;
    // NOP
label_25e42c:
    // 0x25e42c: 0x0  nop
    ctx->pc = 0x25e42cu;
    // NOP
label_25e430:
    // 0x25e430: 0x8437  .word       0x00008437                   # INVALID     $zero, $zero, -0x7BC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25E430 raw=0x00008437"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e434:
    // 0x25e434: 0x5ea0  .word       0x00005EA0                   # add         $t3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25e438:
    // 0x25e438: 0x0  nop
    ctx->pc = 0x25e438u;
    // NOP
label_25e43c:
    // 0x25e43c: 0x0  nop
    ctx->pc = 0x25e43cu;
    // NOP
label_25e440:
    // 0x25e440: 0x8443  sra         $s0, $zero, 17
    ctx->pc = 0x25e440u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 17));
label_25e444:
    // 0x25e444: 0x6a90  .word       0x00006A90                   # mfhi        $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e444u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25e448:
    // 0x25e448: 0x0  nop
    ctx->pc = 0x25e448u;
    // NOP
label_25e44c:
    // 0x25e44c: 0x0  nop
    ctx->pc = 0x25e44cu;
    // NOP
label_25e450:
    // 0x25e450: 0x8451  .word       0x00008451                   # mthi        $zero # 00008440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e450u;
    ctx->hi = GPR_U64(ctx, 0);
label_25e454:
    // 0x25e454: 0x7c40  sll         $t7, $zero, 17
    ctx->pc = 0x25e454u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_25e458:
    // 0x25e458: 0x0  nop
    ctx->pc = 0x25e458u;
    // NOP
label_25e45c:
    // 0x25e45c: 0x0  nop
    ctx->pc = 0x25e45cu;
    // NOP
label_25e460:
    // 0x25e460: 0x8461  .word       0x00008461                   # addu        $s0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25e464:
    // 0x25e464: 0xa840  sll         $s5, $zero, 1
    ctx->pc = 0x25e464u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25e468:
    // 0x25e468: 0x0  nop
    ctx->pc = 0x25e468u;
    // NOP
label_25e46c:
    // 0x25e46c: 0x0  nop
    ctx->pc = 0x25e46cu;
    // NOP
label_25e470:
    // 0x25e470: 0x8477  .word       0x00008477                   # INVALID     $zero, $zero, -0x7B89 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25E470 raw=0x00008477"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e474:
    // 0x25e474: 0x6fb0  tge         $zero, $zero, 446
    ctx->pc = 0x25e474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e478:
    // 0x25e478: 0x0  nop
    ctx->pc = 0x25e478u;
    // NOP
label_25e47c:
    // 0x25e47c: 0x0  nop
    ctx->pc = 0x25e47cu;
    // NOP
label_25e480:
    // 0x25e480: 0x8485  .word       0x00008485                   # INVALID     $zero, $zero, -0x7B7B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25E480 raw=0x00008485"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e484:
    // 0x25e484: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e484u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25e488:
    // 0x25e488: 0x0  nop
    ctx->pc = 0x25e488u;
    // NOP
label_25e48c:
    // 0x25e48c: 0x0  nop
    ctx->pc = 0x25e48cu;
    // NOP
label_25e490:
    // 0x25e490: 0x8492  .word       0x00008492                   # mflo        $s0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e490u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_25e494:
    // 0x25e494: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x25e494u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25e498:
    // 0x25e498: 0x0  nop
    ctx->pc = 0x25e498u;
    // NOP
label_25e49c:
    // 0x25e49c: 0x0  nop
    ctx->pc = 0x25e49cu;
    // NOP
label_25e4a0:
    // 0x25e4a0: 0x849d  .word       0x0000849D                   # dmultu      $zero, $zero # 00008480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25E4A0 raw=0x0000849D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e4a4:
    // 0x25e4a4: 0x59a0  .word       0x000059A0                   # add         $t3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25e4a8:
    // 0x25e4a8: 0x0  nop
    ctx->pc = 0x25e4a8u;
    // NOP
label_25e4ac:
    // 0x25e4ac: 0x0  nop
    ctx->pc = 0x25e4acu;
    // NOP
label_25e4b0:
    // 0x25e4b0: 0x84a9  .word       0x000084A9                   # mtsa        $zero # 00008480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25e4b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25e4b4:
    // 0x25e4b4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25e4b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25e4b8:
    // 0x25e4b8: 0x0  nop
    ctx->pc = 0x25e4b8u;
    // NOP
label_25e4bc:
    // 0x25e4bc: 0x0  nop
    ctx->pc = 0x25e4bcu;
    // NOP
label_25e4c0:
    // 0x25e4c0: 0x84ba  dsrl        $s0, $zero, 18
    ctx->pc = 0x25e4c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 18);
label_25e4c4:
    // 0x25e4c4: 0x6c20  .word       0x00006C20                   # add         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25e4c8:
    // 0x25e4c8: 0x0  nop
    ctx->pc = 0x25e4c8u;
    // NOP
label_25e4cc:
    // 0x25e4cc: 0x0  nop
    ctx->pc = 0x25e4ccu;
    // NOP
label_25e4d0:
    // 0x25e4d0: 0x84c8  .word       0x000084C8                   # jr          $zero # 000084C0 <InstrIdType: CPU_SPECIAL>
label_25e4d4:
    if (ctx->pc == 0x25E4D4u) {
        ctx->pc = 0x25E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4D0u;
        // 0x25e4d4: 0x6230  tge         $zero, $zero, 392 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E4D8u;
        goto label_25e4d8;
    }
    ctx->pc = 0x25E4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4D0u;
        // 0x25e4d4: 0x6230  tge         $zero, $zero, 392 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E4D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25E4D8u;
label_25e4d8:
    // 0x25e4d8: 0x0  nop
    ctx->pc = 0x25e4d8u;
    // NOP
label_25e4dc:
    // 0x25e4dc: 0x0  nop
    ctx->pc = 0x25e4dcu;
    // NOP
label_25e4e0:
    // 0x25e4e0: 0x84d5  .word       0x000084D5                   # INVALID     $zero, $zero, -0x7B2B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25E4E0 raw=0x000084D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e4e4:
    // 0x25e4e4: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x25e4e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25e4e8:
    // 0x25e4e8: 0x0  nop
    ctx->pc = 0x25e4e8u;
    // NOP
label_25e4ec:
    // 0x25e4ec: 0x0  nop
    ctx->pc = 0x25e4ecu;
    // NOP
label_25e4f0:
    // 0x25e4f0: 0x84e0  .word       0x000084E0                   # add         $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25e4f4:
    // 0x25e4f4: 0x5e90  .word       0x00005E90                   # mfhi        $t3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4f4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25e4f8:
    // 0x25e4f8: 0x0  nop
    ctx->pc = 0x25e4f8u;
    // NOP
label_25e4fc:
    // 0x25e4fc: 0x0  nop
    ctx->pc = 0x25e4fcu;
    // NOP
label_25e500:
    // 0x25e500: 0x84ec  .word       0x000084EC                   # dadd        $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e500u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e504:
    // 0x25e504: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x25e504u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25e508:
    // 0x25e508: 0x0  nop
    ctx->pc = 0x25e508u;
    // NOP
label_25e50c:
    // 0x25e50c: 0x0  nop
    ctx->pc = 0x25e50cu;
    // NOP
label_25e510:
    // 0x25e510: 0x84f7  .word       0x000084F7                   # INVALID     $zero, $zero, -0x7B09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25E510 raw=0x000084F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e514:
    // 0x25e514: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25e518:
    // 0x25e518: 0x0  nop
    ctx->pc = 0x25e518u;
    // NOP
label_25e51c:
    // 0x25e51c: 0x0  nop
    ctx->pc = 0x25e51cu;
    // NOP
    ctx->pc = 0x25e520u;
    return;
}
