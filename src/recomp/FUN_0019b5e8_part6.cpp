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


void FUN_0019b5e8_part6(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19dcf8u: goto label_19dcf8;
        case 0x19dcfcu: goto label_19dcfc;
        case 0x19dd00u: goto label_19dd00;
        case 0x19dd04u: goto label_19dd04;
        case 0x19dd08u: goto label_19dd08;
        case 0x19dd0cu: goto label_19dd0c;
        case 0x19dd10u: goto label_19dd10;
        case 0x19dd14u: goto label_19dd14;
        case 0x19dd18u: goto label_19dd18;
        case 0x19dd1cu: goto label_19dd1c;
        case 0x19dd20u: goto label_19dd20;
        case 0x19dd24u: goto label_19dd24;
        case 0x19dd28u: goto label_19dd28;
        case 0x19dd2cu: goto label_19dd2c;
        case 0x19dd30u: goto label_19dd30;
        case 0x19dd34u: goto label_19dd34;
        case 0x19dd38u: goto label_19dd38;
        case 0x19dd3cu: goto label_19dd3c;
        case 0x19dd40u: goto label_19dd40;
        case 0x19dd44u: goto label_19dd44;
        case 0x19dd48u: goto label_19dd48;
        case 0x19dd4cu: goto label_19dd4c;
        case 0x19dd50u: goto label_19dd50;
        case 0x19dd54u: goto label_19dd54;
        case 0x19dd58u: goto label_19dd58;
        case 0x19dd5cu: goto label_19dd5c;
        case 0x19dd60u: goto label_19dd60;
        case 0x19dd64u: goto label_19dd64;
        case 0x19dd68u: goto label_19dd68;
        case 0x19dd6cu: goto label_19dd6c;
        case 0x19dd70u: goto label_19dd70;
        case 0x19dd74u: goto label_19dd74;
        case 0x19dd78u: goto label_19dd78;
        case 0x19dd7cu: goto label_19dd7c;
        case 0x19dd80u: goto label_19dd80;
        case 0x19dd84u: goto label_19dd84;
        case 0x19dd88u: goto label_19dd88;
        case 0x19dd8cu: goto label_19dd8c;
        case 0x19dd90u: goto label_19dd90;
        case 0x19dd94u: goto label_19dd94;
        case 0x19dd98u: goto label_19dd98;
        case 0x19dd9cu: goto label_19dd9c;
        case 0x19dda0u: goto label_19dda0;
        case 0x19dda4u: goto label_19dda4;
        case 0x19dda8u: goto label_19dda8;
        case 0x19ddacu: goto label_19ddac;
        case 0x19ddb0u: goto label_19ddb0;
        case 0x19ddb4u: goto label_19ddb4;
        case 0x19ddb8u: goto label_19ddb8;
        case 0x19ddbcu: goto label_19ddbc;
        case 0x19ddc0u: goto label_19ddc0;
        case 0x19ddc4u: goto label_19ddc4;
        case 0x19ddc8u: goto label_19ddc8;
        case 0x19ddccu: goto label_19ddcc;
        case 0x19ddd0u: goto label_19ddd0;
        case 0x19ddd4u: goto label_19ddd4;
        case 0x19ddd8u: goto label_19ddd8;
        case 0x19dddcu: goto label_19dddc;
        case 0x19dde0u: goto label_19dde0;
        case 0x19dde4u: goto label_19dde4;
        case 0x19dde8u: goto label_19dde8;
        case 0x19ddecu: goto label_19ddec;
        case 0x19ddf0u: goto label_19ddf0;
        case 0x19ddf4u: goto label_19ddf4;
        case 0x19ddf8u: goto label_19ddf8;
        case 0x19ddfcu: goto label_19ddfc;
        case 0x19de00u: goto label_19de00;
        case 0x19de04u: goto label_19de04;
        case 0x19de08u: goto label_19de08;
        case 0x19de0cu: goto label_19de0c;
        case 0x19de10u: goto label_19de10;
        case 0x19de14u: goto label_19de14;
        case 0x19de18u: goto label_19de18;
        case 0x19de1cu: goto label_19de1c;
        case 0x19de20u: goto label_19de20;
        case 0x19de24u: goto label_19de24;
        case 0x19de28u: goto label_19de28;
        case 0x19de2cu: goto label_19de2c;
        case 0x19de30u: goto label_19de30;
        case 0x19de34u: goto label_19de34;
        case 0x19de38u: goto label_19de38;
        case 0x19de3cu: goto label_19de3c;
        case 0x19de40u: goto label_19de40;
        case 0x19de44u: goto label_19de44;
        case 0x19de48u: goto label_19de48;
        case 0x19de4cu: goto label_19de4c;
        case 0x19de50u: goto label_19de50;
        case 0x19de54u: goto label_19de54;
        case 0x19de58u: goto label_19de58;
        case 0x19de5cu: goto label_19de5c;
        case 0x19de60u: goto label_19de60;
        case 0x19de64u: goto label_19de64;
        case 0x19de68u: goto label_19de68;
        case 0x19de6cu: goto label_19de6c;
        case 0x19de70u: goto label_19de70;
        case 0x19de74u: goto label_19de74;
        case 0x19de78u: goto label_19de78;
        case 0x19de7cu: goto label_19de7c;
        case 0x19de80u: goto label_19de80;
        case 0x19de84u: goto label_19de84;
        case 0x19de88u: goto label_19de88;
        case 0x19de8cu: goto label_19de8c;
        case 0x19de90u: goto label_19de90;
        case 0x19de94u: goto label_19de94;
        case 0x19de98u: goto label_19de98;
        case 0x19de9cu: goto label_19de9c;
        case 0x19dea0u: goto label_19dea0;
        case 0x19dea4u: goto label_19dea4;
        case 0x19dea8u: goto label_19dea8;
        case 0x19deacu: goto label_19deac;
        case 0x19deb0u: goto label_19deb0;
        case 0x19deb4u: goto label_19deb4;
        case 0x19deb8u: goto label_19deb8;
        case 0x19debcu: goto label_19debc;
        case 0x19dec0u: goto label_19dec0;
        case 0x19dec4u: goto label_19dec4;
        case 0x19dec8u: goto label_19dec8;
        case 0x19deccu: goto label_19decc;
        case 0x19ded0u: goto label_19ded0;
        case 0x19ded4u: goto label_19ded4;
        case 0x19ded8u: goto label_19ded8;
        case 0x19dedcu: goto label_19dedc;
        case 0x19dee0u: goto label_19dee0;
        case 0x19dee4u: goto label_19dee4;
        case 0x19dee8u: goto label_19dee8;
        case 0x19deecu: goto label_19deec;
        case 0x19def0u: goto label_19def0;
        case 0x19def4u: goto label_19def4;
        case 0x19def8u: goto label_19def8;
        case 0x19defcu: goto label_19defc;
        case 0x19df00u: goto label_19df00;
        case 0x19df04u: goto label_19df04;
        case 0x19df08u: goto label_19df08;
        case 0x19df0cu: goto label_19df0c;
        case 0x19df10u: goto label_19df10;
        case 0x19df14u: goto label_19df14;
        case 0x19df18u: goto label_19df18;
        case 0x19df1cu: goto label_19df1c;
        case 0x19df20u: goto label_19df20;
        case 0x19df24u: goto label_19df24;
        case 0x19df28u: goto label_19df28;
        case 0x19df2cu: goto label_19df2c;
        case 0x19df30u: goto label_19df30;
        case 0x19df34u: goto label_19df34;
        case 0x19df38u: goto label_19df38;
        case 0x19df3cu: goto label_19df3c;
        case 0x19df40u: goto label_19df40;
        case 0x19df44u: goto label_19df44;
        case 0x19df48u: goto label_19df48;
        case 0x19df4cu: goto label_19df4c;
        case 0x19df50u: goto label_19df50;
        case 0x19df54u: goto label_19df54;
        case 0x19df58u: goto label_19df58;
        case 0x19df5cu: goto label_19df5c;
        case 0x19df60u: goto label_19df60;
        case 0x19df64u: goto label_19df64;
        case 0x19df68u: goto label_19df68;
        case 0x19df6cu: goto label_19df6c;
        case 0x19df70u: goto label_19df70;
        case 0x19df74u: goto label_19df74;
        case 0x19df78u: goto label_19df78;
        case 0x19df7cu: goto label_19df7c;
        case 0x19df80u: goto label_19df80;
        case 0x19df84u: goto label_19df84;
        case 0x19df88u: goto label_19df88;
        case 0x19df8cu: goto label_19df8c;
        case 0x19df90u: goto label_19df90;
        case 0x19df94u: goto label_19df94;
        case 0x19df98u: goto label_19df98;
        case 0x19df9cu: goto label_19df9c;
        case 0x19dfa0u: goto label_19dfa0;
        case 0x19dfa4u: goto label_19dfa4;
        case 0x19dfa8u: goto label_19dfa8;
        case 0x19dfacu: goto label_19dfac;
        case 0x19dfb0u: goto label_19dfb0;
        case 0x19dfb4u: goto label_19dfb4;
        case 0x19dfb8u: goto label_19dfb8;
        case 0x19dfbcu: goto label_19dfbc;
        case 0x19dfc0u: goto label_19dfc0;
        case 0x19dfc4u: goto label_19dfc4;
        case 0x19dfc8u: goto label_19dfc8;
        case 0x19dfccu: goto label_19dfcc;
        case 0x19dfd0u: goto label_19dfd0;
        case 0x19dfd4u: goto label_19dfd4;
        case 0x19dfd8u: goto label_19dfd8;
        case 0x19dfdcu: goto label_19dfdc;
        case 0x19dfe0u: goto label_19dfe0;
        case 0x19dfe4u: goto label_19dfe4;
        case 0x19dfe8u: goto label_19dfe8;
        case 0x19dfecu: goto label_19dfec;
        case 0x19dff0u: goto label_19dff0;
        case 0x19dff4u: goto label_19dff4;
        case 0x19dff8u: goto label_19dff8;
        case 0x19dffcu: goto label_19dffc;
        case 0x19e000u: goto label_19e000;
        case 0x19e004u: goto label_19e004;
        case 0x19e008u: goto label_19e008;
        case 0x19e00cu: goto label_19e00c;
        case 0x19e010u: goto label_19e010;
        case 0x19e014u: goto label_19e014;
        case 0x19e018u: goto label_19e018;
        case 0x19e01cu: goto label_19e01c;
        case 0x19e020u: goto label_19e020;
        case 0x19e024u: goto label_19e024;
        case 0x19e028u: goto label_19e028;
        case 0x19e02cu: goto label_19e02c;
        case 0x19e030u: goto label_19e030;
        case 0x19e034u: goto label_19e034;
        case 0x19e038u: goto label_19e038;
        case 0x19e03cu: goto label_19e03c;
        case 0x19e040u: goto label_19e040;
        case 0x19e044u: goto label_19e044;
        case 0x19e048u: goto label_19e048;
        case 0x19e04cu: goto label_19e04c;
        case 0x19e050u: goto label_19e050;
        case 0x19e054u: goto label_19e054;
        case 0x19e058u: goto label_19e058;
        case 0x19e05cu: goto label_19e05c;
        case 0x19e060u: goto label_19e060;
        case 0x19e064u: goto label_19e064;
        case 0x19e068u: goto label_19e068;
        case 0x19e06cu: goto label_19e06c;
        case 0x19e070u: goto label_19e070;
        case 0x19e074u: goto label_19e074;
        case 0x19e078u: goto label_19e078;
        case 0x19e07cu: goto label_19e07c;
        case 0x19e080u: goto label_19e080;
        case 0x19e084u: goto label_19e084;
        case 0x19e088u: goto label_19e088;
        case 0x19e08cu: goto label_19e08c;
        case 0x19e090u: goto label_19e090;
        case 0x19e094u: goto label_19e094;
        case 0x19e098u: goto label_19e098;
        case 0x19e09cu: goto label_19e09c;
        case 0x19e0a0u: goto label_19e0a0;
        case 0x19e0a4u: goto label_19e0a4;
        case 0x19e0a8u: goto label_19e0a8;
        case 0x19e0acu: goto label_19e0ac;
        case 0x19e0b0u: goto label_19e0b0;
        case 0x19e0b4u: goto label_19e0b4;
        case 0x19e0b8u: goto label_19e0b8;
        case 0x19e0bcu: goto label_19e0bc;
        case 0x19e0c0u: goto label_19e0c0;
        case 0x19e0c4u: goto label_19e0c4;
        case 0x19e0c8u: goto label_19e0c8;
        case 0x19e0ccu: goto label_19e0cc;
        case 0x19e0d0u: goto label_19e0d0;
        case 0x19e0d4u: goto label_19e0d4;
        case 0x19e0d8u: goto label_19e0d8;
        case 0x19e0dcu: goto label_19e0dc;
        case 0x19e0e0u: goto label_19e0e0;
        case 0x19e0e4u: goto label_19e0e4;
        case 0x19e0e8u: goto label_19e0e8;
        case 0x19e0ecu: goto label_19e0ec;
        case 0x19e0f0u: goto label_19e0f0;
        case 0x19e0f4u: goto label_19e0f4;
        case 0x19e0f8u: goto label_19e0f8;
        case 0x19e0fcu: goto label_19e0fc;
        case 0x19e100u: goto label_19e100;
        case 0x19e104u: goto label_19e104;
        case 0x19e108u: goto label_19e108;
        case 0x19e10cu: goto label_19e10c;
        case 0x19e110u: goto label_19e110;
        case 0x19e114u: goto label_19e114;
        case 0x19e118u: goto label_19e118;
        case 0x19e11cu: goto label_19e11c;
        case 0x19e120u: goto label_19e120;
        case 0x19e124u: goto label_19e124;
        case 0x19e128u: goto label_19e128;
        case 0x19e12cu: goto label_19e12c;
        case 0x19e130u: goto label_19e130;
        case 0x19e134u: goto label_19e134;
        case 0x19e138u: goto label_19e138;
        case 0x19e13cu: goto label_19e13c;
        case 0x19e140u: goto label_19e140;
        case 0x19e144u: goto label_19e144;
        case 0x19e148u: goto label_19e148;
        case 0x19e14cu: goto label_19e14c;
        case 0x19e150u: goto label_19e150;
        case 0x19e154u: goto label_19e154;
        case 0x19e158u: goto label_19e158;
        case 0x19e15cu: goto label_19e15c;
        case 0x19e160u: goto label_19e160;
        case 0x19e164u: goto label_19e164;
        case 0x19e168u: goto label_19e168;
        case 0x19e16cu: goto label_19e16c;
        case 0x19e170u: goto label_19e170;
        case 0x19e174u: goto label_19e174;
        case 0x19e178u: goto label_19e178;
        case 0x19e17cu: goto label_19e17c;
        case 0x19e180u: goto label_19e180;
        case 0x19e184u: goto label_19e184;
        case 0x19e188u: goto label_19e188;
        case 0x19e18cu: goto label_19e18c;
        case 0x19e190u: goto label_19e190;
        case 0x19e194u: goto label_19e194;
        case 0x19e198u: goto label_19e198;
        case 0x19e19cu: goto label_19e19c;
        case 0x19e1a0u: goto label_19e1a0;
        case 0x19e1a4u: goto label_19e1a4;
        case 0x19e1a8u: goto label_19e1a8;
        case 0x19e1acu: goto label_19e1ac;
        case 0x19e1b0u: goto label_19e1b0;
        case 0x19e1b4u: goto label_19e1b4;
        case 0x19e1b8u: goto label_19e1b8;
        case 0x19e1bcu: goto label_19e1bc;
        case 0x19e1c0u: goto label_19e1c0;
        case 0x19e1c4u: goto label_19e1c4;
        case 0x19e1c8u: goto label_19e1c8;
        case 0x19e1ccu: goto label_19e1cc;
        case 0x19e1d0u: goto label_19e1d0;
        case 0x19e1d4u: goto label_19e1d4;
        case 0x19e1d8u: goto label_19e1d8;
        case 0x19e1dcu: goto label_19e1dc;
        case 0x19e1e0u: goto label_19e1e0;
        case 0x19e1e4u: goto label_19e1e4;
        case 0x19e1e8u: goto label_19e1e8;
        case 0x19e1ecu: goto label_19e1ec;
        case 0x19e1f0u: goto label_19e1f0;
        case 0x19e1f4u: goto label_19e1f4;
        case 0x19e1f8u: goto label_19e1f8;
        case 0x19e1fcu: goto label_19e1fc;
        case 0x19e200u: goto label_19e200;
        case 0x19e204u: goto label_19e204;
        case 0x19e208u: goto label_19e208;
        case 0x19e20cu: goto label_19e20c;
        case 0x19e210u: goto label_19e210;
        case 0x19e214u: goto label_19e214;
        case 0x19e218u: goto label_19e218;
        case 0x19e21cu: goto label_19e21c;
        case 0x19e220u: goto label_19e220;
        case 0x19e224u: goto label_19e224;
        case 0x19e228u: goto label_19e228;
        case 0x19e22cu: goto label_19e22c;
        case 0x19e230u: goto label_19e230;
        case 0x19e234u: goto label_19e234;
        case 0x19e238u: goto label_19e238;
        case 0x19e23cu: goto label_19e23c;
        case 0x19e240u: goto label_19e240;
        case 0x19e244u: goto label_19e244;
        case 0x19e248u: goto label_19e248;
        case 0x19e24cu: goto label_19e24c;
        case 0x19e250u: goto label_19e250;
        case 0x19e254u: goto label_19e254;
        case 0x19e258u: goto label_19e258;
        case 0x19e25cu: goto label_19e25c;
        case 0x19e260u: goto label_19e260;
        case 0x19e264u: goto label_19e264;
        case 0x19e268u: goto label_19e268;
        case 0x19e26cu: goto label_19e26c;
        case 0x19e270u: goto label_19e270;
        case 0x19e274u: goto label_19e274;
        case 0x19e278u: goto label_19e278;
        case 0x19e27cu: goto label_19e27c;
        case 0x19e280u: goto label_19e280;
        case 0x19e284u: goto label_19e284;
        case 0x19e288u: goto label_19e288;
        case 0x19e28cu: goto label_19e28c;
        case 0x19e290u: goto label_19e290;
        case 0x19e294u: goto label_19e294;
        case 0x19e298u: goto label_19e298;
        case 0x19e29cu: goto label_19e29c;
        case 0x19e2a0u: goto label_19e2a0;
        case 0x19e2a4u: goto label_19e2a4;
        case 0x19e2a8u: goto label_19e2a8;
        case 0x19e2acu: goto label_19e2ac;
        case 0x19e2b0u: goto label_19e2b0;
        case 0x19e2b4u: goto label_19e2b4;
        case 0x19e2b8u: goto label_19e2b8;
        case 0x19e2bcu: goto label_19e2bc;
        case 0x19e2c0u: goto label_19e2c0;
        case 0x19e2c4u: goto label_19e2c4;
        case 0x19e2c8u: goto label_19e2c8;
        case 0x19e2ccu: goto label_19e2cc;
        case 0x19e2d0u: goto label_19e2d0;
        case 0x19e2d4u: goto label_19e2d4;
        case 0x19e2d8u: goto label_19e2d8;
        case 0x19e2dcu: goto label_19e2dc;
        case 0x19e2e0u: goto label_19e2e0;
        case 0x19e2e4u: goto label_19e2e4;
        case 0x19e2e8u: goto label_19e2e8;
        case 0x19e2ecu: goto label_19e2ec;
        case 0x19e2f0u: goto label_19e2f0;
        case 0x19e2f4u: goto label_19e2f4;
        case 0x19e2f8u: goto label_19e2f8;
        case 0x19e2fcu: goto label_19e2fc;
        case 0x19e300u: goto label_19e300;
        case 0x19e304u: goto label_19e304;
        case 0x19e308u: goto label_19e308;
        case 0x19e30cu: goto label_19e30c;
        case 0x19e310u: goto label_19e310;
        case 0x19e314u: goto label_19e314;
        case 0x19e318u: goto label_19e318;
        case 0x19e31cu: goto label_19e31c;
        case 0x19e320u: goto label_19e320;
        case 0x19e324u: goto label_19e324;
        case 0x19e328u: goto label_19e328;
        case 0x19e32cu: goto label_19e32c;
        case 0x19e330u: goto label_19e330;
        case 0x19e334u: goto label_19e334;
        case 0x19e338u: goto label_19e338;
        case 0x19e33cu: goto label_19e33c;
        case 0x19e340u: goto label_19e340;
        case 0x19e344u: goto label_19e344;
        case 0x19e348u: goto label_19e348;
        case 0x19e34cu: goto label_19e34c;
        case 0x19e350u: goto label_19e350;
        case 0x19e354u: goto label_19e354;
        case 0x19e358u: goto label_19e358;
        case 0x19e35cu: goto label_19e35c;
        case 0x19e360u: goto label_19e360;
        case 0x19e364u: goto label_19e364;
        case 0x19e368u: goto label_19e368;
        case 0x19e36cu: goto label_19e36c;
        case 0x19e370u: goto label_19e370;
        case 0x19e374u: goto label_19e374;
        case 0x19e378u: goto label_19e378;
        case 0x19e37cu: goto label_19e37c;
        case 0x19e380u: goto label_19e380;
        case 0x19e384u: goto label_19e384;
        case 0x19e388u: goto label_19e388;
        case 0x19e38cu: goto label_19e38c;
        case 0x19e390u: goto label_19e390;
        case 0x19e394u: goto label_19e394;
        case 0x19e398u: goto label_19e398;
        case 0x19e39cu: goto label_19e39c;
        case 0x19e3a0u: goto label_19e3a0;
        case 0x19e3a4u: goto label_19e3a4;
        case 0x19e3a8u: goto label_19e3a8;
        case 0x19e3acu: goto label_19e3ac;
        case 0x19e3b0u: goto label_19e3b0;
        case 0x19e3b4u: goto label_19e3b4;
        case 0x19e3b8u: goto label_19e3b8;
        case 0x19e3bcu: goto label_19e3bc;
        case 0x19e3c0u: goto label_19e3c0;
        case 0x19e3c4u: goto label_19e3c4;
        case 0x19e3c8u: goto label_19e3c8;
        case 0x19e3ccu: goto label_19e3cc;
        case 0x19e3d0u: goto label_19e3d0;
        case 0x19e3d4u: goto label_19e3d4;
        case 0x19e3d8u: goto label_19e3d8;
        case 0x19e3dcu: goto label_19e3dc;
        case 0x19e3e0u: goto label_19e3e0;
        case 0x19e3e4u: goto label_19e3e4;
        case 0x19e3e8u: goto label_19e3e8;
        case 0x19e3ecu: goto label_19e3ec;
        case 0x19e3f0u: goto label_19e3f0;
        case 0x19e3f4u: goto label_19e3f4;
        case 0x19e3f8u: goto label_19e3f8;
        case 0x19e3fcu: goto label_19e3fc;
        case 0x19e400u: goto label_19e400;
        case 0x19e404u: goto label_19e404;
        case 0x19e408u: goto label_19e408;
        case 0x19e40cu: goto label_19e40c;
        case 0x19e410u: goto label_19e410;
        case 0x19e414u: goto label_19e414;
        case 0x19e418u: goto label_19e418;
        case 0x19e41cu: goto label_19e41c;
        case 0x19e420u: goto label_19e420;
        case 0x19e424u: goto label_19e424;
        case 0x19e428u: goto label_19e428;
        case 0x19e42cu: goto label_19e42c;
        case 0x19e430u: goto label_19e430;
        case 0x19e434u: goto label_19e434;
        case 0x19e438u: goto label_19e438;
        case 0x19e43cu: goto label_19e43c;
        case 0x19e440u: goto label_19e440;
        case 0x19e444u: goto label_19e444;
        case 0x19e448u: goto label_19e448;
        case 0x19e44cu: goto label_19e44c;
        case 0x19e450u: goto label_19e450;
        case 0x19e454u: goto label_19e454;
        case 0x19e458u: goto label_19e458;
        case 0x19e45cu: goto label_19e45c;
        case 0x19e460u: goto label_19e460;
        case 0x19e464u: goto label_19e464;
        case 0x19e468u: goto label_19e468;
        case 0x19e46cu: goto label_19e46c;
        case 0x19e470u: goto label_19e470;
        case 0x19e474u: goto label_19e474;
        case 0x19e478u: goto label_19e478;
        case 0x19e47cu: goto label_19e47c;
        case 0x19e480u: goto label_19e480;
        case 0x19e484u: goto label_19e484;
        case 0x19e488u: goto label_19e488;
        case 0x19e48cu: goto label_19e48c;
        case 0x19e490u: goto label_19e490;
        case 0x19e494u: goto label_19e494;
        case 0x19e498u: goto label_19e498;
        case 0x19e49cu: goto label_19e49c;
        case 0x19e4a0u: goto label_19e4a0;
        case 0x19e4a4u: goto label_19e4a4;
        case 0x19e4a8u: goto label_19e4a8;
        case 0x19e4acu: goto label_19e4ac;
        case 0x19e4b0u: goto label_19e4b0;
        case 0x19e4b4u: goto label_19e4b4;
        case 0x19e4b8u: goto label_19e4b8;
        case 0x19e4bcu: goto label_19e4bc;
        case 0x19e4c0u: goto label_19e4c0;
        case 0x19e4c4u: goto label_19e4c4;
        default: return;
    }

label_19dcf8:
    // 0x19dcf8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19dcf8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19dcfc:
    // 0x19dcfc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19dd00:
    // 0x19dd00: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x19dd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_19dd04:
    // 0x19dd04: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x19dd04u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
label_19dd08:
    // 0x19dd08: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x19dd08u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19dd0c:
    // 0x19dd0c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x19dd0cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19dd10:
    // 0x19dd10: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x19dd10u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19dd14:
    // 0x19dd14: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x19dd14u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
label_19dd18:
    // 0x19dd18: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x19dd18u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19dd1c:
    // 0x19dd1c: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x19dd1cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_19dd20:
    // 0x19dd20: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x19dd20u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
label_19dd24:
    // 0x19dd24: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x19dd24u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19dd28:
    // 0x19dd28: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x19dd28u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
label_19dd2c:
    // 0x19dd2c: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x19dd2cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
label_19dd30:
    // 0x19dd30: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x19dd30u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19dd34:
    // 0x19dd34: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x19dd34u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
label_19dd38:
    // 0x19dd38: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
label_19dd3c:
    if (ctx->pc == 0x19DD3Cu) {
        ctx->pc = 0x19DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD38u;
        // 0x19dd3c: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD40u;
        goto label_19dd40;
    }
    ctx->pc = 0x19DD38u;
    {
        const bool branch_taken_0x19dd38 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD38u;
        // 0x19dd3c: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd38) {
            ctx->pc = 0x19DCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x19dce0; return; }
        }
    }
    ctx->pc = 0x19DD40u;
label_19dd40:
    // 0x19dd40: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x19dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
label_19dd44:
    // 0x19dd44: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x19dd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
label_19dd48:
    // 0x19dd48: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19dd48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19dd4c:
    // 0x19dd4c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x19dd4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
label_19dd50:
    // 0x19dd50: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
label_19dd54:
    if (ctx->pc == 0x19DD54u) {
        ctx->pc = 0x19DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD50u;
        // 0x19dd54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD58u;
        goto label_19dd58;
    }
    ctx->pc = 0x19DD50u;
    {
        const bool branch_taken_0x19dd50 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD50u;
        // 0x19dd54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd50) {
            ctx->pc = 0x19DCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x19dce0; return; }
        }
    }
    ctx->pc = 0x19DD58u;
label_19dd58:
    // 0x19dd58: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19dd5c:
    // 0x19dd5c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19dd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19dd60:
    // 0x19dd60: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19dd60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19dd64:
    // 0x19dd64: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x19dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_19dd68:
    // 0x19dd68: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x19dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_19dd6c:
    // 0x19dd6c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x19dd6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
label_19dd70:
    // 0x19dd70: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
label_19dd74:
    if (ctx->pc == 0x19DD74u) {
        ctx->pc = 0x19DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD70u;
        // 0x19dd74: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD78u;
        goto label_19dd78;
    }
    ctx->pc = 0x19DD70u;
    {
        const bool branch_taken_0x19dd70 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD70u;
        // 0x19dd74: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd70) {
            ctx->pc = 0x19DCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x19dcd8; return; }
        }
    }
    ctx->pc = 0x19DD78u;
label_19dd78:
    // 0x19dd78: 0x3e00008  jr          $ra
label_19dd7c:
    if (ctx->pc == 0x19DD7Cu) {
        ctx->pc = 0x19DD80u;
        goto label_19dd80;
    }
    ctx->pc = 0x19DD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DD80u;
label_19dd80:
    // 0x19dd80: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19dd80u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19dd84:
    // 0x19dd84: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19dd84u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19dd88:
    // 0x19dd88: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x19dd88u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
label_19dd8c:
    // 0x19dd8c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19dd90:
    // 0x19dd90: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19dd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19dd94:
    // 0x19dd94: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19dd94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19dd98:
    // 0x19dd98: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19dd98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19dd9c:
    // 0x19dd9c: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19dd9cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19dda0:
    // 0x19dda0: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x19dda0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19dda4:
    // 0x19dda4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x19dda4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dda8:
    // 0x19dda8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x19dda8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19ddac:
    // 0x19ddac: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x19ddacu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19ddb0:
    // 0x19ddb0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19ddb0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19ddb4:
    // 0x19ddb4: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x19ddb4u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19ddb8:
    // 0x19ddb8: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x19ddb8u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
label_19ddbc:
    // 0x19ddbc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x19ddbcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19ddc0:
    // 0x19ddc0: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x19ddc0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19ddc4:
    // 0x19ddc4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x19ddc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ddc8:
    // 0x19ddc8: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x19ddc8u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
label_19ddcc:
    // 0x19ddcc: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x19ddccu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
label_19ddd0:
    // 0x19ddd0: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x19ddd0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
label_19ddd4:
    // 0x19ddd4: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x19ddd4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
label_19ddd8:
    // 0x19ddd8: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x19ddd8u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
label_19dddc:
    // 0x19dddc: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
label_19dde0:
    if (ctx->pc == 0x19DDE0u) {
        ctx->pc = 0x19DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDDCu;
        // 0x19dde0: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DDE4u;
        goto label_19dde4;
    }
    ctx->pc = 0x19DDDCu;
    {
        const bool branch_taken_0x19dddc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDDCu;
        // 0x19dde0: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dddc) {
            ctx->pc = 0x19DE80u;
            goto label_19de80;
        }
    }
    ctx->pc = 0x19DDE4u;
label_19dde4:
    // 0x19dde4: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x19dde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
label_19dde8:
    // 0x19dde8: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x19dde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
label_19ddec:
    // 0x19ddec: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x19ddecu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19ddf0:
    // 0x19ddf0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x19ddf0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19ddf4:
    // 0x19ddf4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19ddf4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19ddf8:
    // 0x19ddf8: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x19ddf8u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
label_19ddfc:
    // 0x19ddfc: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x19ddfcu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
label_19de00:
    // 0x19de00: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x19de00u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19de04:
    // 0x19de04: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19de04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19de08:
    // 0x19de08: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x19de08u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19de0c:
    // 0x19de0c: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x19de0cu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
label_19de10:
    // 0x19de10: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x19de10u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
label_19de14:
    // 0x19de14: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x19de14u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_19de18:
    // 0x19de18: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x19de18u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_19de1c:
    // 0x19de1c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x19de1cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
label_19de20:
    // 0x19de20: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x19de20u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
label_19de24:
    // 0x19de24: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x19de24u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
label_19de28:
    // 0x19de28: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x19de28u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
label_19de2c:
    // 0x19de2c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x19de2cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19de30:
    // 0x19de30: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x19de30u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
label_19de34:
    // 0x19de34: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x19de34u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
label_19de38:
    // 0x19de38: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x19de38u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
label_19de3c:
    // 0x19de3c: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x19de3cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
label_19de40:
    // 0x19de40: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x19de40u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
label_19de44:
    // 0x19de44: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x19de44u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_19de48:
    // 0x19de48: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x19de48u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
label_19de4c:
    // 0x19de4c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x19de4cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
label_19de50:
    // 0x19de50: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x19de50u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
label_19de54:
    // 0x19de54: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19de54u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19de58:
    // 0x19de58: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19de58u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19de5c:
    // 0x19de5c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x19de5cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
label_19de60:
    // 0x19de60: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x19de60u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19de64:
    // 0x19de64: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x19de64u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
label_19de68:
    // 0x19de68: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x19de68u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19de6c:
    // 0x19de6c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x19de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
label_19de70:
    // 0x19de70: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x19de70u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
label_19de74:
    // 0x19de74: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x19de74u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
label_19de78:
    // 0x19de78: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
label_19de7c:
    if (ctx->pc == 0x19DE7Cu) {
        ctx->pc = 0x19DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE78u;
        // 0x19de7c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE80u;
        goto label_19de80;
    }
    ctx->pc = 0x19DE78u;
    {
        const bool branch_taken_0x19de78 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE78u;
        // 0x19de7c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de78) {
            ctx->pc = 0x19DDE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dde4;
        }
    }
    ctx->pc = 0x19DE80u;
label_19de80:
    // 0x19de80: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x19de80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_19de84:
    // 0x19de84: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x19de84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_19de88:
    // 0x19de88: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19de88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19de8c:
    // 0x19de8c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x19de8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
label_19de90:
    // 0x19de90: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
label_19de94:
    if (ctx->pc == 0x19DE94u) {
        ctx->pc = 0x19DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE90u;
        // 0x19de94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE98u;
        goto label_19de98;
    }
    ctx->pc = 0x19DE90u;
    {
        const bool branch_taken_0x19de90 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE90u;
        // 0x19de94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de90) {
            ctx->pc = 0x19DDE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dde4;
        }
    }
    ctx->pc = 0x19DE98u;
label_19de98:
    // 0x19de98: 0x3e00008  jr          $ra
label_19de9c:
    if (ctx->pc == 0x19DE9Cu) {
        ctx->pc = 0x19DEA0u;
        goto label_19dea0;
    }
    ctx->pc = 0x19DE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DEA0u;
label_19dea0:
    // 0x19dea0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19dea0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19dea4:
    // 0x19dea4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19dea4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19dea8:
    // 0x19dea8: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x19dea8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
label_19deac:
    // 0x19deac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19deacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19deb0:
    // 0x19deb0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19deb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19deb4:
    // 0x19deb4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19deb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19deb8:
    // 0x19deb8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19deb8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19debc:
    // 0x19debc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x19debcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19dec0:
    // 0x19dec0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x19dec0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dec4:
    // 0x19dec4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19dec4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dec8:
    // 0x19dec8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19dec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19decc:
    // 0x19decc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x19deccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_19ded0:
    // 0x19ded0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x19ded0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_19ded4:
    // 0x19ded4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x19ded4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19ded8:
    // 0x19ded8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19ded8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19dedc:
    // 0x19dedc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x19dedcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19dee0:
    // 0x19dee0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x19dee0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_19dee4:
    // 0x19dee4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x19dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_19dee8:
    // 0x19dee8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x19dee8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
label_19deec:
    // 0x19deec: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x19deecu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
label_19def0:
    // 0x19def0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x19def0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19def4:
    // 0x19def4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x19def4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19def8:
    // 0x19def8: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
label_19defc:
    if (ctx->pc == 0x19DEFCu) {
        ctx->pc = 0x19DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEF8u;
        // 0x19defc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF00u;
        goto label_19df00;
    }
    ctx->pc = 0x19DEF8u;
    {
        const bool branch_taken_0x19def8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEF8u;
        // 0x19defc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19def8) {
            ctx->pc = 0x19DF6Cu;
            goto label_19df6c;
        }
    }
    ctx->pc = 0x19DF00u;
label_19df00:
    // 0x19df00: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x19df00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_19df04:
    // 0x19df04: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x19df04u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_19df08:
    // 0x19df08: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x19df08u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_19df0c:
    // 0x19df0c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x19df0cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19df10:
    // 0x19df10: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19df10u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19df14:
    // 0x19df14: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x19df14u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19df18:
    // 0x19df18: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x19df18u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_19df1c:
    // 0x19df1c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19df1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19df20:
    // 0x19df20: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x19df20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_19df24:
    // 0x19df24: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x19df24u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
label_19df28:
    // 0x19df28: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x19df28u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19df2c:
    // 0x19df2c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x19df2cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19df30:
    // 0x19df30: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x19df30u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19df34:
    // 0x19df34: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x19df34u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
label_19df38:
    // 0x19df38: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x19df38u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19df3c:
    // 0x19df3c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x19df3cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
label_19df40:
    // 0x19df40: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x19df40u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
label_19df44:
    // 0x19df44: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x19df44u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_19df48:
    // 0x19df48: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x19df48u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
label_19df4c:
    // 0x19df4c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x19df4cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19df50:
    // 0x19df50: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x19df50u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
label_19df54:
    // 0x19df54: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x19df54u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
label_19df58:
    // 0x19df58: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x19df58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_19df5c:
    // 0x19df5c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x19df5cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19df60:
    // 0x19df60: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x19df60u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
label_19df64:
    // 0x19df64: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
label_19df68:
    if (ctx->pc == 0x19DF68u) {
        ctx->pc = 0x19DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF64u;
        // 0x19df68: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF6Cu;
        goto label_19df6c;
    }
    ctx->pc = 0x19DF64u;
    {
        const bool branch_taken_0x19df64 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF64u;
        // 0x19df68: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df64) {
            ctx->pc = 0x19DF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19df00;
        }
    }
    ctx->pc = 0x19DF6Cu;
label_19df6c:
    // 0x19df6c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x19df6cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
label_19df70:
    // 0x19df70: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x19df70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
label_19df74:
    // 0x19df74: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19df74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19df78:
    // 0x19df78: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x19df78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
label_19df7c:
    // 0x19df7c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x19df7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
label_19df80:
    // 0x19df80: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
label_19df84:
    if (ctx->pc == 0x19DF84u) {
        ctx->pc = 0x19DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF80u;
        // 0x19df84: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF88u;
        goto label_19df88;
    }
    ctx->pc = 0x19DF80u;
    {
        const bool branch_taken_0x19df80 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF80u;
        // 0x19df84: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df80) {
            ctx->pc = 0x19DF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19df00;
        }
    }
    ctx->pc = 0x19DF88u;
label_19df88:
    // 0x19df88: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19df88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19df8c:
    // 0x19df8c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19df8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19df90:
    // 0x19df90: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19df90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19df94:
    // 0x19df94: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x19df94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_19df98:
    // 0x19df98: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x19df98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_19df9c:
    // 0x19df9c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x19df9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
label_19dfa0:
    // 0x19dfa0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x19dfa0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_19dfa4:
    // 0x19dfa4: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
label_19dfa8:
    if (ctx->pc == 0x19DFA8u) {
        ctx->pc = 0x19DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA4u;
        // 0x19dfa8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFACu;
        goto label_19dfac;
    }
    ctx->pc = 0x19DFA4u;
    {
        const bool branch_taken_0x19dfa4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA4u;
        // 0x19dfa8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfa4) {
            ctx->pc = 0x19DEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dec8;
        }
    }
    ctx->pc = 0x19DFACu;
label_19dfac:
    // 0x19dfac: 0x3e00008  jr          $ra
label_19dfb0:
    if (ctx->pc == 0x19DFB0u) {
        ctx->pc = 0x19DFB4u;
        goto label_19dfb4;
    }
    ctx->pc = 0x19DFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DFB4u;
label_19dfb4:
    // 0x19dfb4: 0x0  nop
    ctx->pc = 0x19dfb4u;
    // NOP
label_19dfb8:
    // 0x19dfb8: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x19dfb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_19dfbc:
    // 0x19dfbc: 0x3c0a001a  lui         $t2, 0x1A
    ctx->pc = 0x19dfbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)26 << 16));
label_19dfc0:
    // 0x19dfc0: 0x254ae060  addiu       $t2, $t2, -0x1FA0
    ctx->pc = 0x19dfc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959200));
label_19dfc4:
    // 0x19dfc4: 0x794b0000  lq          $t3, 0x0($t2)
    ctx->pc = 0x19dfc4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_19dfc8:
    // 0x19dfc8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x19dfc8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19dfcc:
    // 0x19dfcc: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x19dfccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_19dfd0:
    // 0x19dfd0: 0x78cd0000  lq          $t5, 0x0($a2)
    ctx->pc = 0x19dfd0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19dfd4:
    // 0x19dfd4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x19dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_19dfd8:
    // 0x19dfd8: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x19dfd8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_19dfdc:
    // 0x19dfdc: 0x710d4108  paddh       $t0, $t0, $t5
    ctx->pc = 0x19dfdcu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
label_19dfe0:
    // 0x19dfe0: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x19dfe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_19dfe4:
    // 0x19dfe4: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x19dfe4u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
label_19dfe8:
    // 0x19dfe8: 0x71224908  paddh       $t1, $t1, $v0
    ctx->pc = 0x19dfe8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
label_19dfec:
    // 0x19dfec: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x19dfecu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_19dff0:
    // 0x19dff0: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x19dff0u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
label_19dff4:
    // 0x19dff4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x19dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_19dff8:
    // 0x19dff8: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x19dff8u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_19dffc:
    // 0x19dffc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x19dffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_19e000:
    // 0x19e000: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x19e000u;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19e004:
    // 0x19e004: 0x1580fff0  bnez        $t4, . + 4 + (-0x10 << 2)
label_19e008:
    if (ctx->pc == 0x19E008u) {
        ctx->pc = 0x19E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E004u;
        // 0x19e008: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E00Cu;
        goto label_19e00c;
    }
    ctx->pc = 0x19E004u;
    {
        const bool branch_taken_0x19e004 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E004u;
        // 0x19e008: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e004) {
            ctx->pc = 0x19DFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dfc8;
        }
    }
    ctx->pc = 0x19E00Cu;
label_19e00c:
    // 0x19e00c: 0x3e00008  jr          $ra
label_19e010:
    if (ctx->pc == 0x19E010u) {
        ctx->pc = 0x19E014u;
        goto label_19e014;
    }
    ctx->pc = 0x19E00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E014u;
label_19e014:
    // 0x19e014: 0x0  nop
    ctx->pc = 0x19e014u;
    // NOP
label_19e018:
    // 0x19e018: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x19e018u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_19e01c:
    // 0x19e01c: 0x3c0a001a  lui         $t2, 0x1A
    ctx->pc = 0x19e01cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)26 << 16));
label_19e020:
    // 0x19e020: 0x254ae060  addiu       $t2, $t2, -0x1FA0
    ctx->pc = 0x19e020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959200));
label_19e024:
    // 0x19e024: 0x794b0000  lq          $t3, 0x0($t2)
    ctx->pc = 0x19e024u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_19e028:
    // 0x19e028: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x19e028u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19e02c:
    // 0x19e02c: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x19e02cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_19e030:
    // 0x19e030: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x19e030u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
label_19e034:
    // 0x19e034: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x19e034u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_19e038:
    // 0x19e038: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x19e038u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_19e03c:
    // 0x19e03c: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x19e03cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
label_19e040:
    // 0x19e040: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x19e040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_19e044:
    // 0x19e044: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x19e044u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_19e048:
    // 0x19e048: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x19e048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_19e04c:
    // 0x19e04c: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x19e04cu;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19e050:
    // 0x19e050: 0x1580fff5  bnez        $t4, . + 4 + (-0xB << 2)
label_19e054:
    if (ctx->pc == 0x19E054u) {
        ctx->pc = 0x19E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E050u;
        // 0x19e054: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E058u;
        goto label_19e058;
    }
    ctx->pc = 0x19E050u;
    {
        const bool branch_taken_0x19e050 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E050u;
        // 0x19e054: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e050) {
            ctx->pc = 0x19E028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e028;
        }
    }
    ctx->pc = 0x19E058u;
label_19e058:
    // 0x19e058: 0x0  nop
    ctx->pc = 0x19e058u;
    // NOP
label_19e05c:
    // 0x19e05c: 0x0  nop
    ctx->pc = 0x19e05cu;
    // NOP
label_19e060:
    // 0x19e060: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x19e060u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
label_19e064:
    // 0x19e064: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x19e064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
label_19e068:
    // 0x19e068: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x19e068u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
label_19e06c:
    // 0x19e06c: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x19e06cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
label_19e070:
    // 0x19e070: 0x3e00008  jr          $ra
label_19e074:
    if (ctx->pc == 0x19E074u) {
        ctx->pc = 0x19E078u;
        goto label_19e078;
    }
    ctx->pc = 0x19E070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E078u;
label_19e078:
    // 0x19e078: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x19e078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_19e07c:
    // 0x19e07c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x19e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
label_19e080:
    // 0x19e080: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x19e080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
label_19e084:
    // 0x19e084: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19e084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19e088:
    // 0x19e088: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19e08c:
    // 0x19e08c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x19e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
label_19e090:
    // 0x19e090: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19e090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19e094:
    // 0x19e094: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x19e094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_19e098:
    // 0x19e098: 0x3e00008  jr          $ra
label_19e09c:
    if (ctx->pc == 0x19E09Cu) {
        ctx->pc = 0x19E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E098u;
        // 0x19e09c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0A0u;
        goto label_19e0a0;
    }
    ctx->pc = 0x19E098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E098u;
        // 0x19e09c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E0A0u;
label_19e0a0:
    // 0x19e0a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_19e0a4:
    // 0x19e0a4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x19e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_19e0a8:
    // 0x19e0a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19e0a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e0ac:
    // 0x19e0ac: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x19e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_19e0b0:
    // 0x19e0b0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x19e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_19e0b4:
    // 0x19e0b4: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x19e0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_19e0b8:
    // 0x19e0b8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x19e0b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e0bc:
    // 0x19e0bc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x19e0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_19e0c0:
    // 0x19e0c0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x19e0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_19e0c4:
    // 0x19e0c4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x19e0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_19e0c8:
    // 0x19e0c8: 0xc067ca0  jal         func_19F280
label_19e0cc:
    if (ctx->pc == 0x19E0CCu) {
        ctx->pc = 0x19E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0C8u;
        // 0x19e0cc: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0D0u;
        goto label_19e0d0;
    }
    ctx->pc = 0x19E0C8u;
    SET_GPR_U32(ctx, 31, 0x19E0D0u);
    ctx->pc = 0x19E0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E0C8u;
    // 0x19e0cc: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x19E0D0u;
label_19e0d0:
    // 0x19e0d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19e0d4:
    // 0x19e0d4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x19e0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
label_19e0d8:
    // 0x19e0d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19e0dc:
    // 0x19e0dc: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_19e0e0:
    if (ctx->pc == 0x19E0E0u) {
        ctx->pc = 0x19E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0DCu;
        // 0x19e0e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0E4u;
        goto label_19e0e4;
    }
    ctx->pc = 0x19E0DCu;
    {
        const bool branch_taken_0x19e0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0DCu;
        // 0x19e0e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e0dc) {
            ctx->pc = 0x19E164u;
            goto label_19e164;
        }
    }
    ctx->pc = 0x19E0E4u;
label_19e0e4:
    // 0x19e0e4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_19e0e8:
    // 0x19e0e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19e0ec:
    // 0x19e0ec: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x19e0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_19e0f0:
    // 0x19e0f0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_19e0f4:
    if (ctx->pc == 0x19E0F4u) {
        ctx->pc = 0x19E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0F0u;
        // 0x19e0f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0F8u;
        goto label_19e0f8;
    }
    ctx->pc = 0x19E0F0u;
    {
        const bool branch_taken_0x19e0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0F0u;
        // 0x19e0f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e0f0) {
            ctx->pc = 0x19E168u;
            goto label_19e168;
        }
    }
    ctx->pc = 0x19E0F8u;
label_19e0f8:
    // 0x19e0f8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x19e0f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
label_19e0fc:
    // 0x19e0fc: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x19e0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
label_19e100:
    // 0x19e100: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x19e100u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
label_19e104:
    // 0x19e104: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x19e104u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
label_19e108:
    // 0x19e108: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x19e108u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
label_19e10c:
    // 0x19e10c: 0x3652b400  ori         $s2, $s2, 0xB400
    ctx->pc = 0x19e10cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)46080);
label_19e110:
    // 0x19e110: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x19e110u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e114:
    // 0x19e114: 0x3631b020  ori         $s1, $s1, 0xB020
    ctx->pc = 0x19e114u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)45088);
label_19e118:
    // 0x19e118: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x19e118u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_19e11c:
    // 0x19e11c: 0x0  nop
    ctx->pc = 0x19e11cu;
    // NOP
label_19e120:
    // 0x19e120: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x19e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19e124:
    // 0x19e124: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_19e128:
    if (ctx->pc == 0x19E128u) {
        ctx->pc = 0x19E12Cu;
        goto label_19e12c;
    }
    ctx->pc = 0x19E124u;
    {
        const bool branch_taken_0x19e124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e124) {
            ctx->pc = 0x19E148u;
            goto label_19e148;
        }
    }
    ctx->pc = 0x19E12Cu;
label_19e12c:
    // 0x19e12c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19e130:
    // 0x19e130: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19e130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19e134:
    // 0x19e134: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19e138:
    if (ctx->pc == 0x19E138u) {
        ctx->pc = 0x19E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E134u;
        // 0x19e138: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E13Cu;
        goto label_19e13c;
    }
    ctx->pc = 0x19E134u;
    {
        const bool branch_taken_0x19e134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E134u;
        // 0x19e138: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e134) {
            ctx->pc = 0x19E148u;
            goto label_19e148;
        }
    }
    ctx->pc = 0x19E13Cu;
label_19e13c:
    // 0x19e13c: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x19e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
label_19e140:
    // 0x19e140: 0xc068b12  jal         func_1A2C48
label_19e144:
    if (ctx->pc == 0x19E144u) {
        ctx->pc = 0x19E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E140u;
        // 0x19e144: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E148u;
        goto label_19e148;
    }
    ctx->pc = 0x19E140u;
    SET_GPR_U32(ctx, 31, 0x19E148u);
    ctx->pc = 0x19E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E140u;
    // 0x19e144: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x19E148u;
label_19e148:
    // 0x19e148: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19e14c:
    // 0x19e14c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19e150:
    if (ctx->pc == 0x19E150u) {
        ctx->pc = 0x19E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E14Cu;
        // 0x19e150: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E154u;
        goto label_19e154;
    }
    ctx->pc = 0x19E14Cu;
    {
        const bool branch_taken_0x19e14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E14Cu;
        // 0x19e150: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e14c) {
            ctx->pc = 0x19E168u;
            goto label_19e168;
        }
    }
    ctx->pc = 0x19E154u;
label_19e154:
    // 0x19e154: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19e158:
    // 0x19e158: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x19e158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_19e15c:
    // 0x19e15c: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
label_19e160:
    if (ctx->pc == 0x19E160u) {
        ctx->pc = 0x19E164u;
        goto label_19e164;
    }
    ctx->pc = 0x19E15Cu;
    {
        const bool branch_taken_0x19e15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e15c) {
            ctx->pc = 0x19E120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e120;
        }
    }
    ctx->pc = 0x19E164u;
label_19e164:
    // 0x19e164: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19e164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19e168:
    // 0x19e168: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19e168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_19e16c:
    // 0x19e16c: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x19e16cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
label_19e170:
    // 0x19e170: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x19e170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
label_19e174:
    // 0x19e174: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19e178:
    // 0x19e178: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x19e178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_19e17c:
    // 0x19e17c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19e17cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_19e180:
    // 0x19e180: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
label_19e184:
    if (ctx->pc == 0x19E184u) {
        ctx->pc = 0x19E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E180u;
        // 0x19e184: 0xae630838  sw          $v1, 0x838($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E188u;
        goto label_19e188;
    }
    ctx->pc = 0x19E180u;
    {
        const bool branch_taken_0x19e180 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E180u;
        // 0x19e184: 0xae630838  sw          $v1, 0x838($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e180) {
            ctx->pc = 0x19E1A4u;
            goto label_19e1a4;
        }
    }
    ctx->pc = 0x19E188u;
label_19e188:
    // 0x19e188: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x19e188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_19e18c:
    // 0x19e18c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_19e190:
    if (ctx->pc == 0x19E190u) {
        ctx->pc = 0x19E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E18Cu;
        // 0x19e190: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E194u;
        goto label_19e194;
    }
    ctx->pc = 0x19E18Cu;
    {
        const bool branch_taken_0x19e18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E18Cu;
        // 0x19e190: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e18c) {
            ctx->pc = 0x19E19Cu;
            goto label_19e19c;
        }
    }
    ctx->pc = 0x19E194u;
label_19e194:
    // 0x19e194: 0x10000004  b           . + 4 + (0x4 << 2)
label_19e198:
    if (ctx->pc == 0x19E198u) {
        ctx->pc = 0x19E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E194u;
        // 0x19e198: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E19Cu;
        goto label_19e19c;
    }
    ctx->pc = 0x19E194u;
    {
        const bool branch_taken_0x19e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E194u;
        // 0x19e198: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e194) {
            ctx->pc = 0x19E1A8u;
            goto label_19e1a8;
        }
    }
    ctx->pc = 0x19E19Cu;
label_19e19c:
    // 0x19e19c: 0x10000002  b           . + 4 + (0x2 << 2)
label_19e1a0:
    if (ctx->pc == 0x19E1A0u) {
        ctx->pc = 0x19E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E19Cu;
        // 0x19e1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1A4u;
        goto label_19e1a4;
    }
    ctx->pc = 0x19E19Cu;
    {
        const bool branch_taken_0x19e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E19Cu;
        // 0x19e1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e19c) {
            ctx->pc = 0x19E1A8u;
            goto label_19e1a8;
        }
    }
    ctx->pc = 0x19E1A4u;
label_19e1a4:
    // 0x19e1a4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x19e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19e1a8:
    // 0x19e1a8: 0xae62083c  sw          $v0, 0x83C($s3)
    ctx->pc = 0x19e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2108), GPR_U32(ctx, 2));
label_19e1ac:
    // 0x19e1ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19e1b0:
    // 0x19e1b0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_19e1b4:
    // 0x19e1b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19e1b8:
    // 0x19e1b8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x19e1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_19e1bc:
    // 0x19e1bc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_19e1c0:
    if (ctx->pc == 0x19E1C0u) {
        ctx->pc = 0x19E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1BCu;
        // 0x19e1c0: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1C4u;
        goto label_19e1c4;
    }
    ctx->pc = 0x19E1BCu;
    {
        const bool branch_taken_0x19e1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1BCu;
        // 0x19e1c0: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1bc) {
            ctx->pc = 0x19E264u;
            goto label_19e264;
        }
    }
    ctx->pc = 0x19E1C4u;
label_19e1c4:
    // 0x19e1c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19e1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19e1c8:
    // 0x19e1c8: 0x24a5a048  addiu       $a1, $a1, -0x5FB8
    ctx->pc = 0x19e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942792));
label_19e1cc:
    // 0x19e1cc: 0xc068d2c  jal         func_1A34B0
label_19e1d0:
    if (ctx->pc == 0x19E1D0u) {
        ctx->pc = 0x19E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1CCu;
        // 0x19e1d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1D4u;
        goto label_19e1d4;
    }
    ctx->pc = 0x19E1CCu;
    SET_GPR_U32(ctx, 31, 0x19E1D4u);
    ctx->pc = 0x19E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1CCu;
    // 0x19e1d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x19E1D4u;
label_19e1d4:
    // 0x19e1d4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x19e1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19e1d8:
    // 0x19e1d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19e1dc:
    // 0x19e1dc: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x19e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
label_19e1e0:
    // 0x19e1e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e1e4:
    // 0x19e1e4: 0xc068b12  jal         func_1A2C48
label_19e1e8:
    if (ctx->pc == 0x19E1E8u) {
        ctx->pc = 0x19E1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1E4u;
        // 0x19e1e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1ECu;
        goto label_19e1ec;
    }
    ctx->pc = 0x19E1E4u;
    SET_GPR_U32(ctx, 31, 0x19E1ECu);
    ctx->pc = 0x19E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1E4u;
    // 0x19e1e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x19E1ECu;
label_19e1ec:
    // 0x19e1ec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_19e1f0:
    // 0x19e1f0: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x19e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
label_19e1f4:
    // 0x19e1f4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19e1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_19e1f8:
    // 0x19e1f8: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x19e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 3));
label_19e1fc:
    // 0x19e1fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e200:
    // 0x19e200: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x19e200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_19e204:
    // 0x19e204: 0xc068b12  jal         func_1A2C48
label_19e208:
    if (ctx->pc == 0x19E208u) {
        ctx->pc = 0x19E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E204u;
        // 0x19e208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E20Cu;
        goto label_19e20c;
    }
    ctx->pc = 0x19E204u;
    SET_GPR_U32(ctx, 31, 0x19E20Cu);
    ctx->pc = 0x19E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E204u;
    // 0x19e208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x19E20Cu;
label_19e20c:
    // 0x19e20c: 0xc06b518  jal         func_1AD460
label_19e210:
    if (ctx->pc == 0x19E210u) {
        ctx->pc = 0x19E214u;
        goto label_19e214;
    }
    ctx->pc = 0x19E20Cu;
    SET_GPR_U32(ctx, 31, 0x19E214u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x19E214u;
label_19e214:
    // 0x19e214: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x19e214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_19e218:
    // 0x19e218: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x19e218u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_19e21c:
    // 0x19e21c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x19e21cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
label_19e220:
    // 0x19e220: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19e220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_19e224:
    // 0x19e224: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19e228:
    // 0x19e228: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x19e228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
label_19e22c:
    // 0x19e22c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19e230:
    // 0x19e230: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x19e230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
label_19e234:
    // 0x19e234: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x19e234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_19e238:
    // 0x19e238: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x19e238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
label_19e23c:
    // 0x19e23c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_19e240:
    // 0x19e240: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x19e240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_19e244:
    // 0x19e244: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19e244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_19e248:
    // 0x19e248: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19e24c:
    // 0x19e24c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19e24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19e250:
    // 0x19e250: 0xc06b52a  jal         func_1AD4A8
label_19e254:
    if (ctx->pc == 0x19E254u) {
        ctx->pc = 0x19E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E250u;
        // 0x19e254: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E258u;
        goto label_19e258;
    }
    ctx->pc = 0x19E250u;
    SET_GPR_U32(ctx, 31, 0x19E258u);
    ctx->pc = 0x19E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E250u;
    // 0x19e254: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x19E258u;
label_19e258:
    // 0x19e258: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19e258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19e25c:
    // 0x19e25c: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x19e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
label_19e260:
    // 0x19e260: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19e260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_19e264:
    // 0x19e264: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x19e264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19e268:
    // 0x19e268: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x19e268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_19e26c:
    // 0x19e26c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x19e26cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19e270:
    // 0x19e270: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x19e270u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19e274:
    // 0x19e274: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x19e274u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19e278:
    // 0x19e278: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x19e278u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19e27c:
    // 0x19e27c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x19e27cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19e280:
    // 0x19e280: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x19e280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19e284:
    // 0x19e284: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x19e284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19e288:
    // 0x19e288: 0x3e00008  jr          $ra
label_19e28c:
    if (ctx->pc == 0x19E28Cu) {
        ctx->pc = 0x19E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E288u;
        // 0x19e28c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E290u;
        goto label_19e290;
    }
    ctx->pc = 0x19E288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E288u;
        // 0x19e28c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E290u;
label_19e290:
    // 0x19e290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19e294:
    // 0x19e294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19e298:
    // 0x19e298: 0xc067cf6  jal         func_19F3D8
label_19e29c:
    if (ctx->pc == 0x19E29Cu) {
        ctx->pc = 0x19E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E298u;
        // 0x19e29c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2A0u;
        goto label_19e2a0;
    }
    ctx->pc = 0x19E298u;
    SET_GPR_U32(ctx, 31, 0x19E2A0u);
    ctx->pc = 0x19E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E298u;
    // 0x19e29c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    { ctx->pc = 0x19f3d8; return; }
    ctx->pc = 0x19E2A0u;
label_19e2a0:
    // 0x19e2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e2a4:
    // 0x19e2a4: 0x3e00008  jr          $ra
label_19e2a8:
    if (ctx->pc == 0x19E2A8u) {
        ctx->pc = 0x19E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2A4u;
        // 0x19e2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2ACu;
        goto label_19e2ac;
    }
    ctx->pc = 0x19E2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2A4u;
        // 0x19e2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E2ACu;
label_19e2ac:
    // 0x19e2ac: 0x0  nop
    ctx->pc = 0x19e2acu;
    // NOP
label_19e2b0:
    // 0x19e2b0: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x19e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_19e2b4:
    // 0x19e2b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e2b8:
    // 0x19e2b8: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
label_19e2bc:
    if (ctx->pc == 0x19E2BCu) {
        ctx->pc = 0x19E2C0u;
        goto label_19e2c0;
    }
    ctx->pc = 0x19E2B8u;
    {
        const bool branch_taken_0x19e2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e2b8) {
            ctx->pc = 0x19E3D0u;
            goto label_19e3d0;
        }
    }
    ctx->pc = 0x19E2C0u;
label_19e2c0:
    // 0x19e2c0: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x19e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
label_19e2c4:
    // 0x19e2c4: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_19e2c8:
    if (ctx->pc == 0x19E2C8u) {
        ctx->pc = 0x19E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2C4u;
        // 0x19e2c8: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2CCu;
        goto label_19e2cc;
    }
    ctx->pc = 0x19E2C4u;
    {
        const bool branch_taken_0x19e2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e2c4) {
            ctx->pc = 0x19E2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E2C4u;
            // 0x19e2c8: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E358u;
            goto label_19e358;
        }
    }
    ctx->pc = 0x19E2CCu;
label_19e2cc:
    // 0x19e2cc: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
label_19e2d0:
    if (ctx->pc == 0x19E2D0u) {
        ctx->pc = 0x19E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2CCu;
        // 0x19e2d0: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2D4u;
        goto label_19e2d4;
    }
    ctx->pc = 0x19E2CCu;
    {
        const bool branch_taken_0x19e2cc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x19E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2CCu;
        // 0x19e2d0: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2cc) {
            ctx->pc = 0x19E2E0u;
            goto label_19e2e0;
        }
    }
    ctx->pc = 0x19E2D4u;
label_19e2d4:
    // 0x19e2d4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x19e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19e2d8:
    // 0x19e2d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_19e2dc:
    if (ctx->pc == 0x19E2DCu) {
        ctx->pc = 0x19E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2D8u;
        // 0x19e2dc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2E0u;
        goto label_19e2e0;
    }
    ctx->pc = 0x19E2D8u;
    {
        const bool branch_taken_0x19e2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2D8u;
        // 0x19e2dc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2d8) {
            ctx->pc = 0x19E2E4u;
            goto label_19e2e4;
        }
    }
    ctx->pc = 0x19E2E0u;
label_19e2e0:
    // 0x19e2e0: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x19e2e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_19e2e4:
    // 0x19e2e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19e2e8:
    // 0x19e2e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_19e2ec:
    // 0x19e2ec: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
label_19e2f0:
    if (ctx->pc == 0x19E2F0u) {
        ctx->pc = 0x19E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2ECu;
        // 0x19e2f0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2F4u;
        goto label_19e2f4;
    }
    ctx->pc = 0x19E2ECu;
    {
        const bool branch_taken_0x19e2ec = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x19E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2ECu;
        // 0x19e2f0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2ec) {
            ctx->pc = 0x19E300u;
            goto label_19e300;
        }
    }
    ctx->pc = 0x19E2F4u;
label_19e2f4:
    // 0x19e2f4: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x19e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19e2f8:
    // 0x19e2f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_19e2fc:
    if (ctx->pc == 0x19E2FCu) {
        ctx->pc = 0x19E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2F8u;
        // 0x19e2fc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E300u;
        goto label_19e300;
    }
    ctx->pc = 0x19E2F8u;
    {
        const bool branch_taken_0x19e2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2F8u;
        // 0x19e2fc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2f8) {
            ctx->pc = 0x19E304u;
            goto label_19e304;
        }
    }
    ctx->pc = 0x19E300u;
label_19e300:
    // 0x19e300: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x19e300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_19e304:
    // 0x19e304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19e308:
    // 0x19e308: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19e308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19e30c:
    // 0x19e30c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19e30cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_19e310:
    // 0x19e310: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x19e310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_19e314:
    // 0x19e314: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x19e314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_19e318:
    // 0x19e318: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
label_19e31c:
    if (ctx->pc == 0x19E31Cu) {
        ctx->pc = 0x19E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E318u;
        // 0x19e31c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E320u;
        goto label_19e320;
    }
    ctx->pc = 0x19E318u;
    {
        const bool branch_taken_0x19e318 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x19E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E318u;
        // 0x19e31c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e318) {
            ctx->pc = 0x19E324u;
            goto label_19e324;
        }
    }
    ctx->pc = 0x19E320u;
label_19e320:
    // 0x19e320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19e320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19e324:
    // 0x19e324: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19e324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19e328:
    // 0x19e328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19e32c:
    // 0x19e32c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x19e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_19e330:
    // 0x19e330: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x19e330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_19e334:
    // 0x19e334: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19e334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_19e338:
    // 0x19e338: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
label_19e33c:
    if (ctx->pc == 0x19E33Cu) {
        ctx->pc = 0x19E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E338u;
        // 0x19e33c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E340u;
        goto label_19e340;
    }
    ctx->pc = 0x19E338u;
    {
        const bool branch_taken_0x19e338 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x19E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E338u;
        // 0x19e33c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e338) {
            ctx->pc = 0x19E344u;
            goto label_19e344;
        }
    }
    ctx->pc = 0x19E340u;
label_19e340:
    // 0x19e340: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19e344:
    // 0x19e344: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19e344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19e348:
    // 0x19e348: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x19e348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_19e34c:
    // 0x19e34c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19e350:
    // 0x19e350: 0x3e00008  jr          $ra
label_19e354:
    if (ctx->pc == 0x19E354u) {
        ctx->pc = 0x19E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E350u;
        // 0x19e354: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E358u;
        goto label_19e358;
    }
    ctx->pc = 0x19E350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E350u;
        // 0x19e354: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E358u;
label_19e358:
    // 0x19e358: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x19e358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19e35c:
    // 0x19e35c: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
label_19e360:
    if (ctx->pc == 0x19E360u) {
        ctx->pc = 0x19E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E35Cu;
        // 0x19e360: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E364u;
        goto label_19e364;
    }
    ctx->pc = 0x19E35Cu;
    {
        const bool branch_taken_0x19e35c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x19E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E35Cu;
        // 0x19e360: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e35c) {
            ctx->pc = 0x19E368u;
            goto label_19e368;
        }
    }
    ctx->pc = 0x19E364u;
label_19e364:
    // 0x19e364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19e364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19e368:
    // 0x19e368: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19e368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19e36c:
    // 0x19e36c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19e370:
    // 0x19e370: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19e370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_19e374:
    // 0x19e374: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x19e374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_19e378:
    // 0x19e378: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_19e37c:
    // 0x19e37c: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
label_19e380:
    if (ctx->pc == 0x19E380u) {
        ctx->pc = 0x19E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E37Cu;
        // 0x19e380: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E384u;
        goto label_19e384;
    }
    ctx->pc = 0x19E37Cu;
    {
        const bool branch_taken_0x19e37c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x19E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E37Cu;
        // 0x19e380: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e37c) {
            ctx->pc = 0x19E388u;
            goto label_19e388;
        }
    }
    ctx->pc = 0x19E384u;
label_19e384:
    // 0x19e384: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19e384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19e388:
    // 0x19e388: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19e388u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19e38c:
    // 0x19e38c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19e390:
    // 0x19e390: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19e390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19e394:
    // 0x19e394: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19e394u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_19e398:
    // 0x19e398: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
label_19e39c:
    if (ctx->pc == 0x19E39Cu) {
        ctx->pc = 0x19E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E398u;
        // 0x19e39c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3A0u;
        goto label_19e3a0;
    }
    ctx->pc = 0x19E398u;
    {
        const bool branch_taken_0x19e398 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x19E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E398u;
        // 0x19e39c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e398) {
            ctx->pc = 0x19E3ACu;
            goto label_19e3ac;
        }
    }
    ctx->pc = 0x19E3A0u;
label_19e3a0:
    // 0x19e3a0: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x19e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19e3a4:
    // 0x19e3a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_19e3a8:
    if (ctx->pc == 0x19E3A8u) {
        ctx->pc = 0x19E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3A4u;
        // 0x19e3a8: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3ACu;
        goto label_19e3ac;
    }
    ctx->pc = 0x19E3A4u;
    {
        const bool branch_taken_0x19e3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3A4u;
        // 0x19e3a8: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3a4) {
            ctx->pc = 0x19E3B0u;
            goto label_19e3b0;
        }
    }
    ctx->pc = 0x19E3ACu;
label_19e3ac:
    // 0x19e3ac: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x19e3acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_19e3b0:
    // 0x19e3b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19e3b4:
    // 0x19e3b4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x19e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_19e3b8:
    // 0x19e3b8: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
label_19e3bc:
    if (ctx->pc == 0x19E3BCu) {
        ctx->pc = 0x19E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3B8u;
        // 0x19e3bc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3C0u;
        goto label_19e3c0;
    }
    ctx->pc = 0x19E3B8u;
    {
        const bool branch_taken_0x19e3b8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x19E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3B8u;
        // 0x19e3bc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3b8) {
            ctx->pc = 0x19E3C8u;
            goto label_19e3c8;
        }
    }
    ctx->pc = 0x19E3C0u;
label_19e3c0:
    // 0x19e3c0: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_19e3c4:
    if (ctx->pc == 0x19E3C4u) {
        ctx->pc = 0x19E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3C0u;
        // 0x19e3c4: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3C8u;
        goto label_19e3c8;
    }
    ctx->pc = 0x19E3C0u;
    {
        const bool branch_taken_0x19e3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3C0u;
        // 0x19e3c4: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3c0) {
            ctx->pc = 0x19E344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e344;
        }
    }
    ctx->pc = 0x19E3C8u;
label_19e3c8:
    // 0x19e3c8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_19e3cc:
    if (ctx->pc == 0x19E3CCu) {
        ctx->pc = 0x19E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3C8u;
        // 0x19e3cc: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3D0u;
        goto label_19e3d0;
    }
    ctx->pc = 0x19E3C8u;
    {
        const bool branch_taken_0x19e3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3C8u;
        // 0x19e3cc: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3c8) {
            ctx->pc = 0x19E348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e348;
        }
    }
    ctx->pc = 0x19E3D0u;
label_19e3d0:
    // 0x19e3d0: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
label_19e3d4:
    if (ctx->pc == 0x19E3D4u) {
        ctx->pc = 0x19E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3D0u;
        // 0x19e3d4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3D8u;
        goto label_19e3d8;
    }
    ctx->pc = 0x19E3D0u;
    {
        const bool branch_taken_0x19e3d0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x19E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3D0u;
        // 0x19e3d4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3d0) {
            ctx->pc = 0x19E3E4u;
            goto label_19e3e4;
        }
    }
    ctx->pc = 0x19E3D8u;
label_19e3d8:
    // 0x19e3d8: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x19e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19e3dc:
    // 0x19e3dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_19e3e0:
    if (ctx->pc == 0x19E3E0u) {
        ctx->pc = 0x19E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3DCu;
        // 0x19e3e0: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3E4u;
        goto label_19e3e4;
    }
    ctx->pc = 0x19E3DCu;
    {
        const bool branch_taken_0x19e3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3DCu;
        // 0x19e3e0: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3dc) {
            ctx->pc = 0x19E3E8u;
            goto label_19e3e8;
        }
    }
    ctx->pc = 0x19E3E4u;
label_19e3e4:
    // 0x19e3e4: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x19e3e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_19e3e8:
    // 0x19e3e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19e3ec:
    // 0x19e3ec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x19e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_19e3f0:
    // 0x19e3f0: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
label_19e3f4:
    if (ctx->pc == 0x19E3F4u) {
        ctx->pc = 0x19E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3F0u;
        // 0x19e3f4: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3F8u;
        goto label_19e3f8;
    }
    ctx->pc = 0x19E3F0u;
    {
        const bool branch_taken_0x19e3f0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x19E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3F0u;
        // 0x19e3f4: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3f0) {
            ctx->pc = 0x19E404u;
            goto label_19e404;
        }
    }
    ctx->pc = 0x19E3F8u;
label_19e3f8:
    // 0x19e3f8: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x19e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19e3fc:
    // 0x19e3fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_19e400:
    if (ctx->pc == 0x19E400u) {
        ctx->pc = 0x19E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3FCu;
        // 0x19e400: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E404u;
        goto label_19e404;
    }
    ctx->pc = 0x19E3FCu;
    {
        const bool branch_taken_0x19e3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3FCu;
        // 0x19e400: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3fc) {
            ctx->pc = 0x19E408u;
            goto label_19e408;
        }
    }
    ctx->pc = 0x19E404u;
label_19e404:
    // 0x19e404: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x19e404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_19e408:
    // 0x19e408: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x19e408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_19e40c:
    // 0x19e40c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x19e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_19e410:
    // 0x19e410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e414:
    // 0x19e414: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x19e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_19e418:
    // 0x19e418: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_19e41c:
    if (ctx->pc == 0x19E41Cu) {
        ctx->pc = 0x19E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E418u;
        // 0x19e41c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E420u;
        goto label_19e420;
    }
    ctx->pc = 0x19E418u;
    {
        const bool branch_taken_0x19e418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E418u;
        // 0x19e41c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e418) {
            ctx->pc = 0x19E42Cu;
            goto label_19e42c;
        }
    }
    ctx->pc = 0x19E420u;
label_19e420:
    // 0x19e420: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x19e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_19e424:
    // 0x19e424: 0x3e00008  jr          $ra
label_19e428:
    if (ctx->pc == 0x19E428u) {
        ctx->pc = 0x19E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E424u;
        // 0x19e428: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E42Cu;
        goto label_19e42c;
    }
    ctx->pc = 0x19E424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E424u;
        // 0x19e428: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E42Cu;
label_19e42c:
    // 0x19e42c: 0x3e00008  jr          $ra
label_19e430:
    if (ctx->pc == 0x19E430u) {
        ctx->pc = 0x19E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E42Cu;
        // 0x19e430: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E434u;
        goto label_19e434;
    }
    ctx->pc = 0x19E42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E42Cu;
        // 0x19e430: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E434u;
label_19e434:
    // 0x19e434: 0x0  nop
    ctx->pc = 0x19e434u;
    // NOP
label_19e438:
    // 0x19e438: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19e438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_19e43c:
    // 0x19e43c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x19e43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_19e440:
    // 0x19e440: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x19e440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_19e444:
    // 0x19e444: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x19e444u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e448:
    // 0x19e448: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x19e448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_19e44c:
    // 0x19e44c: 0x24160022  addiu       $s6, $zero, 0x22
    ctx->pc = 0x19e44cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_19e450:
    // 0x19e450: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19e450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19e454:
    // 0x19e454: 0x24150023  addiu       $s5, $zero, 0x23
    ctx->pc = 0x19e454u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_19e458:
    // 0x19e458: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19e458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19e45c:
    // 0x19e45c: 0x3c14002d  lui         $s4, 0x2D
    ctx->pc = 0x19e45cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)45 << 16));
label_19e460:
    // 0x19e460: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19e460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19e464:
    // 0x19e464: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x19e464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_19e468:
    // 0x19e468: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19e468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19e46c:
    // 0x19e46c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19e46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e470:
    // 0x19e470: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19e470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_19e474:
    // 0x19e474: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19e474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e478:
    // 0x19e478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19e47c:
    // 0x19e47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e480:
    // 0x19e480: 0xc067cf6  jal         func_19F3D8
label_19e484:
    if (ctx->pc == 0x19E484u) {
        ctx->pc = 0x19E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E480u;
        // 0x19e484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E488u;
        goto label_19e488;
    }
    ctx->pc = 0x19E480u;
    SET_GPR_U32(ctx, 31, 0x19E488u);
    ctx->pc = 0x19E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E480u;
    // 0x19e484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    { ctx->pc = 0x19f3d8; return; }
    ctx->pc = 0x19E488u;
label_19e488:
    // 0x19e488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e48c:
    // 0x19e48c: 0x12160017  beq         $s0, $s6, . + 4 + (0x17 << 2)
label_19e490:
    if (ctx->pc == 0x19E490u) {
        ctx->pc = 0x19E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E48Cu;
        // 0x19e490: 0x2e020023  sltiu       $v0, $s0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E494u;
        goto label_19e494;
    }
    ctx->pc = 0x19E48Cu;
    {
        const bool branch_taken_0x19e48c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x19E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E48Cu;
        // 0x19e490: 0x2e020023  sltiu       $v0, $s0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e48c) {
            ctx->pc = 0x19E4ECu;
            { ctx->pc = 0x19e4ec; return; }
        }
    }
    ctx->pc = 0x19E494u;
label_19e494:
    // 0x19e494: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19e498:
    if (ctx->pc == 0x19E498u) {
        ctx->pc = 0x19E49Cu;
        goto label_19e49c;
    }
    ctx->pc = 0x19E494u;
    {
        const bool branch_taken_0x19e494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e494) {
            ctx->pc = 0x19E4ACu;
            goto label_19e4ac;
        }
    }
    ctx->pc = 0x19E49Cu;
label_19e49c:
    // 0x19e49c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_19e4a0:
    if (ctx->pc == 0x19E4A0u) {
        ctx->pc = 0x19E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E49Cu;
        // 0x19e4a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4A4u;
        goto label_19e4a4;
    }
    ctx->pc = 0x19E49Cu;
    {
        const bool branch_taken_0x19e49c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E49Cu;
        // 0x19e4a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e49c) {
            ctx->pc = 0x19E4C0u;
            goto label_19e4c0;
        }
    }
    ctx->pc = 0x19E4A4u;
label_19e4a4:
    // 0x19e4a4: 0x10000019  b           . + 4 + (0x19 << 2)
label_19e4a8:
    if (ctx->pc == 0x19E4A8u) {
        ctx->pc = 0x19E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4A4u;
        // 0x19e4a8: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4ACu;
        goto label_19e4ac;
    }
    ctx->pc = 0x19E4A4u;
    {
        const bool branch_taken_0x19e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4A4u;
        // 0x19e4a8: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4a4) {
            ctx->pc = 0x19E50Cu;
            { ctx->pc = 0x19e50c; return; }
        }
    }
    ctx->pc = 0x19E4ACu;
label_19e4ac:
    // 0x19e4ac: 0x56150017  bnel        $s0, $s5, . + 4 + (0x17 << 2)
label_19e4b0:
    if (ctx->pc == 0x19E4B0u) {
        ctx->pc = 0x19E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4ACu;
        // 0x19e4b0: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4B4u;
        goto label_19e4b4;
    }
    ctx->pc = 0x19E4ACu;
    {
        const bool branch_taken_0x19e4ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x19e4ac) {
            ctx->pc = 0x19E4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E4ACu;
            // 0x19e4b0: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E50Cu;
            { ctx->pc = 0x19e50c; return; }
        }
    }
    ctx->pc = 0x19E4B4u;
label_19e4b4:
    // 0x19e4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e4b8:
    // 0x19e4b8: 0x10000015  b           . + 4 + (0x15 << 2)
label_19e4bc:
    if (ctx->pc == 0x19E4BCu) {
        ctx->pc = 0x19E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4B8u;
        // 0x19e4bc: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4C0u;
        goto label_19e4c0;
    }
    ctx->pc = 0x19E4B8u;
    {
        const bool branch_taken_0x19e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4B8u;
        // 0x19e4bc: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4b8) {
            ctx->pc = 0x19E510u;
            { ctx->pc = 0x19e510; return; }
        }
    }
    ctx->pc = 0x19E4C0u;
label_19e4c0:
    // 0x19e4c0: 0xc067d54  jal         func_19F550
label_19e4c4:
    if (ctx->pc == 0x19E4C4u) {
        ctx->pc = 0x19E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4C0u;
        // 0x19e4c4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4C8u;
        { ctx->pc = 0x19e4c8; return; }
    }
    ctx->pc = 0x19E4C0u;
    SET_GPR_U32(ctx, 31, 0x19E4C8u);
    ctx->pc = 0x19E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4C0u;
    // 0x19e4c4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    { ctx->pc = 0x19f550; return; }
    ctx->pc = 0x19E4C8u;
    ctx->pc = 0x19e4c8u;
    return;
}
