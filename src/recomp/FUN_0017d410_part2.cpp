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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part2(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17dbe0u: goto label_17dbe0;
        case 0x17dbe4u: goto label_17dbe4;
        case 0x17dbe8u: goto label_17dbe8;
        case 0x17dbecu: goto label_17dbec;
        case 0x17dbf0u: goto label_17dbf0;
        case 0x17dbf4u: goto label_17dbf4;
        case 0x17dbf8u: goto label_17dbf8;
        case 0x17dbfcu: goto label_17dbfc;
        case 0x17dc00u: goto label_17dc00;
        case 0x17dc04u: goto label_17dc04;
        case 0x17dc08u: goto label_17dc08;
        case 0x17dc0cu: goto label_17dc0c;
        case 0x17dc10u: goto label_17dc10;
        case 0x17dc14u: goto label_17dc14;
        case 0x17dc18u: goto label_17dc18;
        case 0x17dc1cu: goto label_17dc1c;
        case 0x17dc20u: goto label_17dc20;
        case 0x17dc24u: goto label_17dc24;
        case 0x17dc28u: goto label_17dc28;
        case 0x17dc2cu: goto label_17dc2c;
        case 0x17dc30u: goto label_17dc30;
        case 0x17dc34u: goto label_17dc34;
        case 0x17dc38u: goto label_17dc38;
        case 0x17dc3cu: goto label_17dc3c;
        case 0x17dc40u: goto label_17dc40;
        case 0x17dc44u: goto label_17dc44;
        case 0x17dc48u: goto label_17dc48;
        case 0x17dc4cu: goto label_17dc4c;
        case 0x17dc50u: goto label_17dc50;
        case 0x17dc54u: goto label_17dc54;
        case 0x17dc58u: goto label_17dc58;
        case 0x17dc5cu: goto label_17dc5c;
        case 0x17dc60u: goto label_17dc60;
        case 0x17dc64u: goto label_17dc64;
        case 0x17dc68u: goto label_17dc68;
        case 0x17dc6cu: goto label_17dc6c;
        case 0x17dc70u: goto label_17dc70;
        case 0x17dc74u: goto label_17dc74;
        case 0x17dc78u: goto label_17dc78;
        case 0x17dc7cu: goto label_17dc7c;
        case 0x17dc80u: goto label_17dc80;
        case 0x17dc84u: goto label_17dc84;
        case 0x17dc88u: goto label_17dc88;
        case 0x17dc8cu: goto label_17dc8c;
        case 0x17dc90u: goto label_17dc90;
        case 0x17dc94u: goto label_17dc94;
        case 0x17dc98u: goto label_17dc98;
        case 0x17dc9cu: goto label_17dc9c;
        case 0x17dca0u: goto label_17dca0;
        case 0x17dca4u: goto label_17dca4;
        case 0x17dca8u: goto label_17dca8;
        case 0x17dcacu: goto label_17dcac;
        case 0x17dcb0u: goto label_17dcb0;
        case 0x17dcb4u: goto label_17dcb4;
        case 0x17dcb8u: goto label_17dcb8;
        case 0x17dcbcu: goto label_17dcbc;
        case 0x17dcc0u: goto label_17dcc0;
        case 0x17dcc4u: goto label_17dcc4;
        case 0x17dcc8u: goto label_17dcc8;
        case 0x17dcccu: goto label_17dccc;
        case 0x17dcd0u: goto label_17dcd0;
        case 0x17dcd4u: goto label_17dcd4;
        case 0x17dcd8u: goto label_17dcd8;
        case 0x17dcdcu: goto label_17dcdc;
        case 0x17dce0u: goto label_17dce0;
        case 0x17dce4u: goto label_17dce4;
        case 0x17dce8u: goto label_17dce8;
        case 0x17dcecu: goto label_17dcec;
        case 0x17dcf0u: goto label_17dcf0;
        case 0x17dcf4u: goto label_17dcf4;
        case 0x17dcf8u: goto label_17dcf8;
        case 0x17dcfcu: goto label_17dcfc;
        case 0x17dd00u: goto label_17dd00;
        case 0x17dd04u: goto label_17dd04;
        case 0x17dd08u: goto label_17dd08;
        case 0x17dd0cu: goto label_17dd0c;
        case 0x17dd10u: goto label_17dd10;
        case 0x17dd14u: goto label_17dd14;
        case 0x17dd18u: goto label_17dd18;
        case 0x17dd1cu: goto label_17dd1c;
        case 0x17dd20u: goto label_17dd20;
        case 0x17dd24u: goto label_17dd24;
        case 0x17dd28u: goto label_17dd28;
        case 0x17dd2cu: goto label_17dd2c;
        case 0x17dd30u: goto label_17dd30;
        case 0x17dd34u: goto label_17dd34;
        case 0x17dd38u: goto label_17dd38;
        case 0x17dd3cu: goto label_17dd3c;
        case 0x17dd40u: goto label_17dd40;
        case 0x17dd44u: goto label_17dd44;
        case 0x17dd48u: goto label_17dd48;
        case 0x17dd4cu: goto label_17dd4c;
        case 0x17dd50u: goto label_17dd50;
        case 0x17dd54u: goto label_17dd54;
        case 0x17dd58u: goto label_17dd58;
        case 0x17dd5cu: goto label_17dd5c;
        case 0x17dd60u: goto label_17dd60;
        case 0x17dd64u: goto label_17dd64;
        case 0x17dd68u: goto label_17dd68;
        case 0x17dd6cu: goto label_17dd6c;
        case 0x17dd70u: goto label_17dd70;
        case 0x17dd74u: goto label_17dd74;
        case 0x17dd78u: goto label_17dd78;
        case 0x17dd7cu: goto label_17dd7c;
        case 0x17dd80u: goto label_17dd80;
        case 0x17dd84u: goto label_17dd84;
        case 0x17dd88u: goto label_17dd88;
        case 0x17dd8cu: goto label_17dd8c;
        case 0x17dd90u: goto label_17dd90;
        case 0x17dd94u: goto label_17dd94;
        case 0x17dd98u: goto label_17dd98;
        case 0x17dd9cu: goto label_17dd9c;
        case 0x17dda0u: goto label_17dda0;
        case 0x17dda4u: goto label_17dda4;
        case 0x17dda8u: goto label_17dda8;
        case 0x17ddacu: goto label_17ddac;
        case 0x17ddb0u: goto label_17ddb0;
        case 0x17ddb4u: goto label_17ddb4;
        case 0x17ddb8u: goto label_17ddb8;
        case 0x17ddbcu: goto label_17ddbc;
        case 0x17ddc0u: goto label_17ddc0;
        case 0x17ddc4u: goto label_17ddc4;
        case 0x17ddc8u: goto label_17ddc8;
        case 0x17ddccu: goto label_17ddcc;
        case 0x17ddd0u: goto label_17ddd0;
        case 0x17ddd4u: goto label_17ddd4;
        case 0x17ddd8u: goto label_17ddd8;
        case 0x17dddcu: goto label_17dddc;
        case 0x17dde0u: goto label_17dde0;
        case 0x17dde4u: goto label_17dde4;
        case 0x17dde8u: goto label_17dde8;
        case 0x17ddecu: goto label_17ddec;
        case 0x17ddf0u: goto label_17ddf0;
        case 0x17ddf4u: goto label_17ddf4;
        case 0x17ddf8u: goto label_17ddf8;
        case 0x17ddfcu: goto label_17ddfc;
        case 0x17de00u: goto label_17de00;
        case 0x17de04u: goto label_17de04;
        case 0x17de08u: goto label_17de08;
        case 0x17de0cu: goto label_17de0c;
        case 0x17de10u: goto label_17de10;
        case 0x17de14u: goto label_17de14;
        case 0x17de18u: goto label_17de18;
        case 0x17de1cu: goto label_17de1c;
        case 0x17de20u: goto label_17de20;
        case 0x17de24u: goto label_17de24;
        case 0x17de28u: goto label_17de28;
        case 0x17de2cu: goto label_17de2c;
        case 0x17de30u: goto label_17de30;
        case 0x17de34u: goto label_17de34;
        case 0x17de38u: goto label_17de38;
        case 0x17de3cu: goto label_17de3c;
        case 0x17de40u: goto label_17de40;
        case 0x17de44u: goto label_17de44;
        case 0x17de48u: goto label_17de48;
        case 0x17de4cu: goto label_17de4c;
        case 0x17de50u: goto label_17de50;
        case 0x17de54u: goto label_17de54;
        case 0x17de58u: goto label_17de58;
        case 0x17de5cu: goto label_17de5c;
        case 0x17de60u: goto label_17de60;
        case 0x17de64u: goto label_17de64;
        case 0x17de68u: goto label_17de68;
        case 0x17de6cu: goto label_17de6c;
        case 0x17de70u: goto label_17de70;
        case 0x17de74u: goto label_17de74;
        case 0x17de78u: goto label_17de78;
        case 0x17de7cu: goto label_17de7c;
        case 0x17de80u: goto label_17de80;
        case 0x17de84u: goto label_17de84;
        case 0x17de88u: goto label_17de88;
        case 0x17de8cu: goto label_17de8c;
        case 0x17de90u: goto label_17de90;
        case 0x17de94u: goto label_17de94;
        case 0x17de98u: goto label_17de98;
        case 0x17de9cu: goto label_17de9c;
        case 0x17dea0u: goto label_17dea0;
        case 0x17dea4u: goto label_17dea4;
        case 0x17dea8u: goto label_17dea8;
        case 0x17deacu: goto label_17deac;
        case 0x17deb0u: goto label_17deb0;
        case 0x17deb4u: goto label_17deb4;
        case 0x17deb8u: goto label_17deb8;
        case 0x17debcu: goto label_17debc;
        case 0x17dec0u: goto label_17dec0;
        case 0x17dec4u: goto label_17dec4;
        case 0x17dec8u: goto label_17dec8;
        case 0x17deccu: goto label_17decc;
        case 0x17ded0u: goto label_17ded0;
        case 0x17ded4u: goto label_17ded4;
        case 0x17ded8u: goto label_17ded8;
        case 0x17dedcu: goto label_17dedc;
        case 0x17dee0u: goto label_17dee0;
        case 0x17dee4u: goto label_17dee4;
        case 0x17dee8u: goto label_17dee8;
        case 0x17deecu: goto label_17deec;
        case 0x17def0u: goto label_17def0;
        case 0x17def4u: goto label_17def4;
        case 0x17def8u: goto label_17def8;
        case 0x17defcu: goto label_17defc;
        case 0x17df00u: goto label_17df00;
        case 0x17df04u: goto label_17df04;
        case 0x17df08u: goto label_17df08;
        case 0x17df0cu: goto label_17df0c;
        case 0x17df10u: goto label_17df10;
        case 0x17df14u: goto label_17df14;
        case 0x17df18u: goto label_17df18;
        case 0x17df1cu: goto label_17df1c;
        case 0x17df20u: goto label_17df20;
        case 0x17df24u: goto label_17df24;
        case 0x17df28u: goto label_17df28;
        case 0x17df2cu: goto label_17df2c;
        case 0x17df30u: goto label_17df30;
        case 0x17df34u: goto label_17df34;
        case 0x17df38u: goto label_17df38;
        case 0x17df3cu: goto label_17df3c;
        case 0x17df40u: goto label_17df40;
        case 0x17df44u: goto label_17df44;
        case 0x17df48u: goto label_17df48;
        case 0x17df4cu: goto label_17df4c;
        case 0x17df50u: goto label_17df50;
        case 0x17df54u: goto label_17df54;
        case 0x17df58u: goto label_17df58;
        case 0x17df5cu: goto label_17df5c;
        case 0x17df60u: goto label_17df60;
        case 0x17df64u: goto label_17df64;
        case 0x17df68u: goto label_17df68;
        case 0x17df6cu: goto label_17df6c;
        case 0x17df70u: goto label_17df70;
        case 0x17df74u: goto label_17df74;
        case 0x17df78u: goto label_17df78;
        case 0x17df7cu: goto label_17df7c;
        case 0x17df80u: goto label_17df80;
        case 0x17df84u: goto label_17df84;
        case 0x17df88u: goto label_17df88;
        case 0x17df8cu: goto label_17df8c;
        case 0x17df90u: goto label_17df90;
        case 0x17df94u: goto label_17df94;
        case 0x17df98u: goto label_17df98;
        case 0x17df9cu: goto label_17df9c;
        case 0x17dfa0u: goto label_17dfa0;
        case 0x17dfa4u: goto label_17dfa4;
        case 0x17dfa8u: goto label_17dfa8;
        case 0x17dfacu: goto label_17dfac;
        case 0x17dfb0u: goto label_17dfb0;
        case 0x17dfb4u: goto label_17dfb4;
        case 0x17dfb8u: goto label_17dfb8;
        case 0x17dfbcu: goto label_17dfbc;
        case 0x17dfc0u: goto label_17dfc0;
        case 0x17dfc4u: goto label_17dfc4;
        case 0x17dfc8u: goto label_17dfc8;
        case 0x17dfccu: goto label_17dfcc;
        case 0x17dfd0u: goto label_17dfd0;
        case 0x17dfd4u: goto label_17dfd4;
        case 0x17dfd8u: goto label_17dfd8;
        case 0x17dfdcu: goto label_17dfdc;
        case 0x17dfe0u: goto label_17dfe0;
        case 0x17dfe4u: goto label_17dfe4;
        case 0x17dfe8u: goto label_17dfe8;
        case 0x17dfecu: goto label_17dfec;
        case 0x17dff0u: goto label_17dff0;
        case 0x17dff4u: goto label_17dff4;
        case 0x17dff8u: goto label_17dff8;
        case 0x17dffcu: goto label_17dffc;
        case 0x17e000u: goto label_17e000;
        case 0x17e004u: goto label_17e004;
        case 0x17e008u: goto label_17e008;
        case 0x17e00cu: goto label_17e00c;
        case 0x17e010u: goto label_17e010;
        case 0x17e014u: goto label_17e014;
        case 0x17e018u: goto label_17e018;
        case 0x17e01cu: goto label_17e01c;
        case 0x17e020u: goto label_17e020;
        case 0x17e024u: goto label_17e024;
        case 0x17e028u: goto label_17e028;
        case 0x17e02cu: goto label_17e02c;
        case 0x17e030u: goto label_17e030;
        case 0x17e034u: goto label_17e034;
        case 0x17e038u: goto label_17e038;
        case 0x17e03cu: goto label_17e03c;
        case 0x17e040u: goto label_17e040;
        case 0x17e044u: goto label_17e044;
        case 0x17e048u: goto label_17e048;
        case 0x17e04cu: goto label_17e04c;
        case 0x17e050u: goto label_17e050;
        case 0x17e054u: goto label_17e054;
        case 0x17e058u: goto label_17e058;
        case 0x17e05cu: goto label_17e05c;
        case 0x17e060u: goto label_17e060;
        case 0x17e064u: goto label_17e064;
        case 0x17e068u: goto label_17e068;
        case 0x17e06cu: goto label_17e06c;
        case 0x17e070u: goto label_17e070;
        case 0x17e074u: goto label_17e074;
        case 0x17e078u: goto label_17e078;
        case 0x17e07cu: goto label_17e07c;
        case 0x17e080u: goto label_17e080;
        case 0x17e084u: goto label_17e084;
        case 0x17e088u: goto label_17e088;
        case 0x17e08cu: goto label_17e08c;
        case 0x17e090u: goto label_17e090;
        case 0x17e094u: goto label_17e094;
        case 0x17e098u: goto label_17e098;
        case 0x17e09cu: goto label_17e09c;
        case 0x17e0a0u: goto label_17e0a0;
        case 0x17e0a4u: goto label_17e0a4;
        case 0x17e0a8u: goto label_17e0a8;
        case 0x17e0acu: goto label_17e0ac;
        case 0x17e0b0u: goto label_17e0b0;
        case 0x17e0b4u: goto label_17e0b4;
        case 0x17e0b8u: goto label_17e0b8;
        case 0x17e0bcu: goto label_17e0bc;
        case 0x17e0c0u: goto label_17e0c0;
        case 0x17e0c4u: goto label_17e0c4;
        case 0x17e0c8u: goto label_17e0c8;
        case 0x17e0ccu: goto label_17e0cc;
        case 0x17e0d0u: goto label_17e0d0;
        case 0x17e0d4u: goto label_17e0d4;
        case 0x17e0d8u: goto label_17e0d8;
        case 0x17e0dcu: goto label_17e0dc;
        case 0x17e0e0u: goto label_17e0e0;
        case 0x17e0e4u: goto label_17e0e4;
        case 0x17e0e8u: goto label_17e0e8;
        case 0x17e0ecu: goto label_17e0ec;
        case 0x17e0f0u: goto label_17e0f0;
        case 0x17e0f4u: goto label_17e0f4;
        case 0x17e0f8u: goto label_17e0f8;
        case 0x17e0fcu: goto label_17e0fc;
        case 0x17e100u: goto label_17e100;
        case 0x17e104u: goto label_17e104;
        case 0x17e108u: goto label_17e108;
        case 0x17e10cu: goto label_17e10c;
        case 0x17e110u: goto label_17e110;
        case 0x17e114u: goto label_17e114;
        case 0x17e118u: goto label_17e118;
        case 0x17e11cu: goto label_17e11c;
        case 0x17e120u: goto label_17e120;
        case 0x17e124u: goto label_17e124;
        case 0x17e128u: goto label_17e128;
        case 0x17e12cu: goto label_17e12c;
        case 0x17e130u: goto label_17e130;
        case 0x17e134u: goto label_17e134;
        case 0x17e138u: goto label_17e138;
        case 0x17e13cu: goto label_17e13c;
        case 0x17e140u: goto label_17e140;
        case 0x17e144u: goto label_17e144;
        case 0x17e148u: goto label_17e148;
        case 0x17e14cu: goto label_17e14c;
        case 0x17e150u: goto label_17e150;
        case 0x17e154u: goto label_17e154;
        case 0x17e158u: goto label_17e158;
        case 0x17e15cu: goto label_17e15c;
        case 0x17e160u: goto label_17e160;
        case 0x17e164u: goto label_17e164;
        case 0x17e168u: goto label_17e168;
        case 0x17e16cu: goto label_17e16c;
        case 0x17e170u: goto label_17e170;
        case 0x17e174u: goto label_17e174;
        case 0x17e178u: goto label_17e178;
        case 0x17e17cu: goto label_17e17c;
        case 0x17e180u: goto label_17e180;
        case 0x17e184u: goto label_17e184;
        case 0x17e188u: goto label_17e188;
        case 0x17e18cu: goto label_17e18c;
        case 0x17e190u: goto label_17e190;
        case 0x17e194u: goto label_17e194;
        case 0x17e198u: goto label_17e198;
        case 0x17e19cu: goto label_17e19c;
        case 0x17e1a0u: goto label_17e1a0;
        case 0x17e1a4u: goto label_17e1a4;
        case 0x17e1a8u: goto label_17e1a8;
        case 0x17e1acu: goto label_17e1ac;
        case 0x17e1b0u: goto label_17e1b0;
        case 0x17e1b4u: goto label_17e1b4;
        case 0x17e1b8u: goto label_17e1b8;
        case 0x17e1bcu: goto label_17e1bc;
        case 0x17e1c0u: goto label_17e1c0;
        case 0x17e1c4u: goto label_17e1c4;
        case 0x17e1c8u: goto label_17e1c8;
        case 0x17e1ccu: goto label_17e1cc;
        case 0x17e1d0u: goto label_17e1d0;
        case 0x17e1d4u: goto label_17e1d4;
        case 0x17e1d8u: goto label_17e1d8;
        case 0x17e1dcu: goto label_17e1dc;
        case 0x17e1e0u: goto label_17e1e0;
        case 0x17e1e4u: goto label_17e1e4;
        case 0x17e1e8u: goto label_17e1e8;
        case 0x17e1ecu: goto label_17e1ec;
        case 0x17e1f0u: goto label_17e1f0;
        case 0x17e1f4u: goto label_17e1f4;
        case 0x17e1f8u: goto label_17e1f8;
        case 0x17e1fcu: goto label_17e1fc;
        case 0x17e200u: goto label_17e200;
        case 0x17e204u: goto label_17e204;
        case 0x17e208u: goto label_17e208;
        case 0x17e20cu: goto label_17e20c;
        case 0x17e210u: goto label_17e210;
        case 0x17e214u: goto label_17e214;
        case 0x17e218u: goto label_17e218;
        case 0x17e21cu: goto label_17e21c;
        case 0x17e220u: goto label_17e220;
        case 0x17e224u: goto label_17e224;
        case 0x17e228u: goto label_17e228;
        case 0x17e22cu: goto label_17e22c;
        case 0x17e230u: goto label_17e230;
        case 0x17e234u: goto label_17e234;
        case 0x17e238u: goto label_17e238;
        case 0x17e23cu: goto label_17e23c;
        case 0x17e240u: goto label_17e240;
        case 0x17e244u: goto label_17e244;
        case 0x17e248u: goto label_17e248;
        case 0x17e24cu: goto label_17e24c;
        case 0x17e250u: goto label_17e250;
        case 0x17e254u: goto label_17e254;
        case 0x17e258u: goto label_17e258;
        case 0x17e25cu: goto label_17e25c;
        case 0x17e260u: goto label_17e260;
        case 0x17e264u: goto label_17e264;
        case 0x17e268u: goto label_17e268;
        case 0x17e26cu: goto label_17e26c;
        case 0x17e270u: goto label_17e270;
        case 0x17e274u: goto label_17e274;
        case 0x17e278u: goto label_17e278;
        case 0x17e27cu: goto label_17e27c;
        case 0x17e280u: goto label_17e280;
        case 0x17e284u: goto label_17e284;
        case 0x17e288u: goto label_17e288;
        case 0x17e28cu: goto label_17e28c;
        case 0x17e290u: goto label_17e290;
        case 0x17e294u: goto label_17e294;
        case 0x17e298u: goto label_17e298;
        case 0x17e29cu: goto label_17e29c;
        case 0x17e2a0u: goto label_17e2a0;
        case 0x17e2a4u: goto label_17e2a4;
        case 0x17e2a8u: goto label_17e2a8;
        case 0x17e2acu: goto label_17e2ac;
        case 0x17e2b0u: goto label_17e2b0;
        case 0x17e2b4u: goto label_17e2b4;
        case 0x17e2b8u: goto label_17e2b8;
        case 0x17e2bcu: goto label_17e2bc;
        case 0x17e2c0u: goto label_17e2c0;
        case 0x17e2c4u: goto label_17e2c4;
        case 0x17e2c8u: goto label_17e2c8;
        case 0x17e2ccu: goto label_17e2cc;
        case 0x17e2d0u: goto label_17e2d0;
        case 0x17e2d4u: goto label_17e2d4;
        case 0x17e2d8u: goto label_17e2d8;
        case 0x17e2dcu: goto label_17e2dc;
        case 0x17e2e0u: goto label_17e2e0;
        case 0x17e2e4u: goto label_17e2e4;
        case 0x17e2e8u: goto label_17e2e8;
        case 0x17e2ecu: goto label_17e2ec;
        case 0x17e2f0u: goto label_17e2f0;
        case 0x17e2f4u: goto label_17e2f4;
        case 0x17e2f8u: goto label_17e2f8;
        case 0x17e2fcu: goto label_17e2fc;
        case 0x17e300u: goto label_17e300;
        case 0x17e304u: goto label_17e304;
        case 0x17e308u: goto label_17e308;
        case 0x17e30cu: goto label_17e30c;
        case 0x17e310u: goto label_17e310;
        case 0x17e314u: goto label_17e314;
        case 0x17e318u: goto label_17e318;
        case 0x17e31cu: goto label_17e31c;
        case 0x17e320u: goto label_17e320;
        case 0x17e324u: goto label_17e324;
        case 0x17e328u: goto label_17e328;
        case 0x17e32cu: goto label_17e32c;
        case 0x17e330u: goto label_17e330;
        case 0x17e334u: goto label_17e334;
        case 0x17e338u: goto label_17e338;
        case 0x17e33cu: goto label_17e33c;
        case 0x17e340u: goto label_17e340;
        case 0x17e344u: goto label_17e344;
        case 0x17e348u: goto label_17e348;
        case 0x17e34cu: goto label_17e34c;
        case 0x17e350u: goto label_17e350;
        case 0x17e354u: goto label_17e354;
        case 0x17e358u: goto label_17e358;
        case 0x17e35cu: goto label_17e35c;
        case 0x17e360u: goto label_17e360;
        case 0x17e364u: goto label_17e364;
        case 0x17e368u: goto label_17e368;
        case 0x17e36cu: goto label_17e36c;
        case 0x17e370u: goto label_17e370;
        case 0x17e374u: goto label_17e374;
        case 0x17e378u: goto label_17e378;
        case 0x17e37cu: goto label_17e37c;
        case 0x17e380u: goto label_17e380;
        case 0x17e384u: goto label_17e384;
        case 0x17e388u: goto label_17e388;
        case 0x17e38cu: goto label_17e38c;
        case 0x17e390u: goto label_17e390;
        case 0x17e394u: goto label_17e394;
        case 0x17e398u: goto label_17e398;
        case 0x17e39cu: goto label_17e39c;
        case 0x17e3a0u: goto label_17e3a0;
        case 0x17e3a4u: goto label_17e3a4;
        case 0x17e3a8u: goto label_17e3a8;
        case 0x17e3acu: goto label_17e3ac;
        default: return;
    }

label_17dbe0:
    // 0x17dbe0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17dbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17dbe4:
    // 0x17dbe4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17dbe4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17dbe8:
    // 0x17dbe8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17dbe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17dbec:
    // 0x17dbec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17dbecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17dbf0:
    // 0x17dbf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17dbf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17dbf4:
    // 0x17dbf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17dbf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17dbf8:
    // 0x17dbf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dbf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17dbfc:
    // 0x17dbfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17dbfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17dc00:
    // 0x17dc00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17dc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17dc04:
    // 0x17dc04: 0x3e00008  jr          $ra
label_17dc08:
    if (ctx->pc == 0x17DC08u) {
        ctx->pc = 0x17DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC04u;
        // 0x17dc08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC0Cu;
        goto label_17dc0c;
    }
    ctx->pc = 0x17DC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC04u;
        // 0x17dc08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DC0Cu;
label_17dc0c:
    // 0x17dc0c: 0x0  nop
    ctx->pc = 0x17dc0cu;
    // NOP
label_17dc10:
    // 0x17dc10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_17dc14:
    // 0x17dc14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_17dc18:
    // 0x17dc18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17dc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17dc1c:
    // 0x17dc1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17dc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17dc20:
    // 0x17dc20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_17dc24:
    // 0x17dc24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17dc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17dc28:
    // 0x17dc28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17dc2c:
    // 0x17dc2c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17dc2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17dc30:
    // 0x17dc30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17dc34:
    // 0x17dc34: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x17dc34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17dc38:
    // 0x17dc38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17dc3c:
    // 0x17dc3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17dc40:
    // 0x17dc40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17dc44:
    // 0x17dc44: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_17dc48:
    if (ctx->pc == 0x17DC48u) {
        ctx->pc = 0x17DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC44u;
        // 0x17dc48: 0xafa600cc  sw          $a2, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC4Cu;
        goto label_17dc4c;
    }
    ctx->pc = 0x17DC44u;
    {
        const bool branch_taken_0x17dc44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC44u;
        // 0x17dc48: 0xafa600cc  sw          $a2, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc44) {
            ctx->pc = 0x17DC54u;
            goto label_17dc54;
        }
    }
    ctx->pc = 0x17DC4Cu;
label_17dc4c:
    // 0x17dc4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_17dc50:
    if (ctx->pc == 0x17DC50u) {
        ctx->pc = 0x17DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC4Cu;
        // 0x17dc50: 0x241e00c0  addiu       $fp, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC54u;
        goto label_17dc54;
    }
    ctx->pc = 0x17DC4Cu;
    {
        const bool branch_taken_0x17dc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC4Cu;
        // 0x17dc50: 0x241e00c0  addiu       $fp, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc4c) {
            ctx->pc = 0x17DC58u;
            goto label_17dc58;
        }
    }
    ctx->pc = 0x17DC54u;
label_17dc54:
    // 0x17dc54: 0x241e0300  addiu       $fp, $zero, 0x300
    ctx->pc = 0x17dc54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_17dc58:
    // 0x17dc58: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_17dc5c:
    // 0x17dc5c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x17dc5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17dc60:
    // 0x17dc60: 0x2839004  sllv        $s2, $v1, $s4
    ctx->pc = 0x17dc60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_17dc64:
    // 0x17dc64: 0x8f838458  lw          $v1, -0x7BA8($gp)
    ctx->pc = 0x17dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935640)));
label_17dc68:
    // 0x17dc68: 0x10000195  b           . + 4 + (0x195 << 2)
label_17dc6c:
    if (ctx->pc == 0x17DC6Cu) {
        ctx->pc = 0x17DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC68u;
        // 0x17dc6c: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC70u;
        goto label_17dc70;
    }
    ctx->pc = 0x17DC68u;
    {
        const bool branch_taken_0x17dc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC68u;
        // 0x17dc6c: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc68) {
            ctx->pc = 0x17E2C0u;
            goto label_17e2c0;
        }
    }
    ctx->pc = 0x17DC70u;
label_17dc70:
    // 0x17dc70: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x17dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_17dc74:
    // 0x17dc74: 0x10800190  beqz        $a0, . + 4 + (0x190 << 2)
label_17dc78:
    if (ctx->pc == 0x17DC78u) {
        ctx->pc = 0x17DC7Cu;
        goto label_17dc7c;
    }
    ctx->pc = 0x17DC74u;
    {
        const bool branch_taken_0x17dc74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc74) {
            ctx->pc = 0x17E2B8u;
            goto label_17e2b8;
        }
    }
    ctx->pc = 0x17DC7Cu;
label_17dc7c:
    // 0x17dc7c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_17dc80:
    // 0x17dc80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17dc84:
    // 0x17dc84: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x17dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17dc88:
    // 0x17dc88: 0x1080018b  beqz        $a0, . + 4 + (0x18B << 2)
label_17dc8c:
    if (ctx->pc == 0x17DC8Cu) {
        ctx->pc = 0x17DC90u;
        goto label_17dc90;
    }
    ctx->pc = 0x17DC88u;
    {
        const bool branch_taken_0x17dc88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc88) {
            ctx->pc = 0x17E2B8u;
            goto label_17e2b8;
        }
    }
    ctx->pc = 0x17DC90u;
label_17dc90:
    // 0x17dc90: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_17dc94:
    // 0x17dc94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17dc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17dc98:
    // 0x17dc98: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x17dc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17dc9c:
    // 0x17dc9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17dca0:
    // 0x17dca0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x17dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_17dca4:
    // 0x17dca4: 0x10000180  b           . + 4 + (0x180 << 2)
label_17dca8:
    if (ctx->pc == 0x17DCA8u) {
        ctx->pc = 0x17DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCA4u;
        // 0x17dca8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCACu;
        goto label_17dcac;
    }
    ctx->pc = 0x17DCA4u;
    {
        const bool branch_taken_0x17dca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCA4u;
        // 0x17dca8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dca4) {
            ctx->pc = 0x17E2A8u;
            goto label_17e2a8;
        }
    }
    ctx->pc = 0x17DCACu;
label_17dcac:
    // 0x17dcac: 0x0  nop
    ctx->pc = 0x17dcacu;
    // NOP
label_17dcb0:
    // 0x17dcb0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x17dcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17dcb4:
    // 0x17dcb4: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x17dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_17dcb8:
    // 0x17dcb8: 0x8f858794  lw          $a1, -0x786C($gp)
    ctx->pc = 0x17dcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
label_17dcbc:
    // 0x17dcbc: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x17dcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_17dcc0:
    // 0x17dcc0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x17dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_17dcc4:
    // 0x17dcc4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x17dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_17dcc8:
    // 0x17dcc8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x17dcc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17dccc:
    // 0x17dccc: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x17dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dcd0:
    // 0x17dcd0: 0x9e1824  and         $v1, $a0, $fp
    ctx->pc = 0x17dcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
label_17dcd4:
    // 0x17dcd4: 0x10a30172  beq         $a1, $v1, . + 4 + (0x172 << 2)
label_17dcd8:
    if (ctx->pc == 0x17DCD8u) {
        ctx->pc = 0x17DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCD4u;
        // 0x17dcd8: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCDCu;
        goto label_17dcdc;
    }
    ctx->pc = 0x17DCD4u;
    {
        const bool branch_taken_0x17dcd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x17DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCD4u;
        // 0x17dcd8: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dcd4) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17DCDCu;
label_17dcdc:
    // 0x17dcdc: 0x14600170  bnez        $v1, . + 4 + (0x170 << 2)
label_17dce0:
    if (ctx->pc == 0x17DCE0u) {
        ctx->pc = 0x17DCE4u;
        goto label_17dce4;
    }
    ctx->pc = 0x17DCDCu;
    {
        const bool branch_taken_0x17dcdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dcdc) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17DCE4u;
label_17dce4:
    // 0x17dce4: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x17dce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_17dce8:
    // 0x17dce8: 0x1460016d  bnez        $v1, . + 4 + (0x16D << 2)
label_17dcec:
    if (ctx->pc == 0x17DCECu) {
        ctx->pc = 0x17DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCE8u;
        // 0x17dcec: 0x3c01827  not         $v1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 30) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCF0u;
        goto label_17dcf0;
    }
    ctx->pc = 0x17DCE8u;
    {
        const bool branch_taken_0x17dce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCE8u;
        // 0x17dcec: 0x3c01827  not         $v1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 30) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dce8) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17DCF0u;
label_17dcf0:
    // 0x17dcf0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17dcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_17dcf4:
    // 0x17dcf4: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17dcf8:
    // 0x17dcf8: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x17dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dcfc:
    // 0x17dcfc: 0x8f838794  lw          $v1, -0x786C($gp)
    ctx->pc = 0x17dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
label_17dd00:
    // 0x17dd00: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17dd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17dd04:
    // 0x17dd04: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17dd08:
    // 0x17dd08: 0x8e650090  lw          $a1, 0x90($s3)
    ctx->pc = 0x17dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dd0c:
    // 0x17dd0c: 0xb21824  and         $v1, $a1, $s2
    ctx->pc = 0x17dd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
label_17dd10:
    // 0x17dd10: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_17dd14:
    if (ctx->pc == 0x17DD14u) {
        ctx->pc = 0x17DD18u;
        goto label_17dd18;
    }
    ctx->pc = 0x17DD10u;
    {
        const bool branch_taken_0x17dd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd10) {
            ctx->pc = 0x17DDF8u;
            goto label_17ddf8;
        }
    }
    ctx->pc = 0x17DD18u;
label_17dd18:
    // 0x17dd18: 0xc6610098  lwc1        $f1, 0x98($s3)
    ctx->pc = 0x17dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17dd1c:
    // 0x17dd1c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x17dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
label_17dd20:
    // 0x17dd20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17dd20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17dd24:
    // 0x17dd24: 0x0  nop
    ctx->pc = 0x17dd24u;
    // NOP
label_17dd28:
    // 0x17dd28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17dd28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17dd2c:
    // 0x17dd2c: 0x0  nop
    ctx->pc = 0x17dd2cu;
    // NOP
label_17dd30:
    // 0x17dd30: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_17dd34:
    if (ctx->pc == 0x17DD34u) {
        ctx->pc = 0x17DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD30u;
        // 0x17dd34: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD38u;
        goto label_17dd38;
    }
    ctx->pc = 0x17DD30u;
    {
        const bool branch_taken_0x17dd30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD30u;
        // 0x17dd34: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd30) {
            ctx->pc = 0x17DD4Cu;
            goto label_17dd4c;
        }
    }
    ctx->pc = 0x17DD38u;
label_17dd38:
    // 0x17dd38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17dd38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17dd3c:
    // 0x17dd3c: 0x0  nop
    ctx->pc = 0x17dd3cu;
    // NOP
label_17dd40:
    // 0x17dd40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17dd40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17dd44:
    // 0x17dd44: 0x10000003  b           . + 4 + (0x3 << 2)
label_17dd48:
    if (ctx->pc == 0x17DD48u) {
        ctx->pc = 0x17DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD44u;
        // 0x17dd48: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD4Cu;
        goto label_17dd4c;
    }
    ctx->pc = 0x17DD44u;
    {
        const bool branch_taken_0x17dd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD44u;
        // 0x17dd48: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd44) {
            ctx->pc = 0x17DD54u;
            goto label_17dd54;
        }
    }
    ctx->pc = 0x17DD4Cu;
label_17dd4c:
    // 0x17dd4c: 0x0  nop
    ctx->pc = 0x17dd4cu;
    // NOP
label_17dd50:
    // 0x17dd50: 0xe6600098  swc1        $f0, 0x98($s3)
    ctx->pc = 0x17dd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
label_17dd54:
    // 0x17dd54: 0x0  nop
    ctx->pc = 0x17dd54u;
    // NOP
label_17dd58:
    // 0x17dd58: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17dd5c:
    // 0x17dd5c: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x17dd5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_17dd60:
    // 0x17dd60: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
label_17dd64:
    if (ctx->pc == 0x17DD64u) {
        ctx->pc = 0x17DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD60u;
        // 0x17dd64: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD68u;
        goto label_17dd68;
    }
    ctx->pc = 0x17DD60u;
    {
        const bool branch_taken_0x17dd60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD60u;
        // 0x17dd64: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd60) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DD68u;
label_17dd68:
    // 0x17dd68: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17dd6c:
    // 0x17dd6c: 0x246391c0  addiu       $v1, $v1, -0x6E40
    ctx->pc = 0x17dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939072));
label_17dd70:
    // 0x17dd70: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17dd74:
    // 0x17dd74: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x17dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_17dd78:
    // 0x17dd78: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_17dd7c:
    // 0x17dd7c: 0x8e650090  lw          $a1, 0x90($s3)
    ctx->pc = 0x17dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dd80:
    // 0x17dd80: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17dd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17dd84:
    // 0x17dd84: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_17dd88:
    if (ctx->pc == 0x17DD88u) {
        ctx->pc = 0x17DD8Cu;
        goto label_17dd8c;
    }
    ctx->pc = 0x17DD84u;
    {
        const bool branch_taken_0x17dd84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd84) {
            ctx->pc = 0x17DDB4u;
            goto label_17ddb4;
        }
    }
    ctx->pc = 0x17DD8Cu;
label_17dd8c:
    // 0x17dd8c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x17dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_17dd90:
    // 0x17dd90: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17dd94:
    // 0x17dd94: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x17dd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_17dd98:
    // 0x17dd98: 0x246391c4  addiu       $v1, $v1, -0x6E3C
    ctx->pc = 0x17dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939076));
label_17dd9c:
    // 0x17dd9c: 0xae640090  sw          $a0, 0x90($s3)
    ctx->pc = 0x17dd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 4));
label_17dda0:
    // 0x17dda0: 0x8f848798  lw          $a0, -0x7868($gp)
    ctx->pc = 0x17dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17dda4:
    // 0x17dda4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17dda8:
    // 0x17dda8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17ddac:
    // 0x17ddac: 0x1000000d  b           . + 4 + (0xD << 2)
label_17ddb0:
    if (ctx->pc == 0x17DDB0u) {
        ctx->pc = 0x17DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDACu;
        // 0x17ddb0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DDB4u;
        goto label_17ddb4;
    }
    ctx->pc = 0x17DDACu;
    {
        const bool branch_taken_0x17ddac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDACu;
        // 0x17ddb0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ddac) {
            ctx->pc = 0x17DDE4u;
            goto label_17dde4;
        }
    }
    ctx->pc = 0x17DDB4u;
label_17ddb4:
    // 0x17ddb4: 0x0  nop
    ctx->pc = 0x17ddb4u;
    // NOP
label_17ddb8:
    // 0x17ddb8: 0x8f858798  lw          $a1, -0x7868($gp)
    ctx->pc = 0x17ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17ddbc:
    // 0x17ddbc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17ddc0:
    // 0x17ddc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17ddc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ddc4:
    // 0x17ddc4: 0x248491c4  addiu       $a0, $a0, -0x6E3C
    ctx->pc = 0x17ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939076));
label_17ddc8:
    // 0x17ddc8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_17ddcc:
    // 0x17ddcc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17ddccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17ddd0:
    // 0x17ddd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17ddd4:
    // 0x17ddd4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x17ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_17ddd8:
    // 0x17ddd8: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x17ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dddc:
    // 0x17dddc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17dddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17dde0:
    // 0x17dde0: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17dde4:
    // 0x17dde4: 0x0  nop
    ctx->pc = 0x17dde4u;
    // NOP
label_17dde8:
    // 0x17dde8: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17ddec:
    // 0x17ddec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17ddf0:
    // 0x17ddf0: 0x10000058  b           . + 4 + (0x58 << 2)
label_17ddf4:
    if (ctx->pc == 0x17DDF4u) {
        ctx->pc = 0x17DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDF0u;
        // 0x17ddf4: 0xaf838798  sw          $v1, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DDF8u;
        goto label_17ddf8;
    }
    ctx->pc = 0x17DDF0u;
    {
        const bool branch_taken_0x17ddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDF0u;
        // 0x17ddf4: 0xaf838798  sw          $v1, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ddf0) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DDF8u;
label_17ddf8:
    // 0x17ddf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ddfc:
    // 0x17ddfc: 0x742023  subu        $a0, $v1, $s4
    ctx->pc = 0x17ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_17de00:
    // 0x17de00: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x17de00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
label_17de04:
    // 0x17de04: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x17de04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_17de08:
    // 0x17de08: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17de08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17de0c:
    // 0x17de0c: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_17de10:
    if (ctx->pc == 0x17DE10u) {
        ctx->pc = 0x17DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE0Cu;
        // 0x17de10: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DE14u;
        goto label_17de14;
    }
    ctx->pc = 0x17DE0Cu;
    {
        const bool branch_taken_0x17de0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE0Cu;
        // 0x17de10: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de0c) {
            ctx->pc = 0x17DF40u;
            goto label_17df40;
        }
    }
    ctx->pc = 0x17DE14u;
label_17de14:
    // 0x17de14: 0x2831804  sllv        $v1, $v1, $s4
    ctx->pc = 0x17de14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_17de18:
    // 0x17de18: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17de18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17de1c:
    // 0x17de1c: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
label_17de20:
    if (ctx->pc == 0x17DE20u) {
        ctx->pc = 0x17DE24u;
        goto label_17de24;
    }
    ctx->pc = 0x17DE1Cu;
    {
        const bool branch_taken_0x17de1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17de1c) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DE24u;
label_17de24:
    // 0x17de24: 0xc6610098  lwc1        $f1, 0x98($s3)
    ctx->pc = 0x17de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17de28:
    // 0x17de28: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x17de28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_17de2c:
    // 0x17de2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17de2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17de30:
    // 0x17de30: 0x0  nop
    ctx->pc = 0x17de30u;
    // NOP
label_17de34:
    // 0x17de34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17de34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17de38:
    // 0x17de38: 0x0  nop
    ctx->pc = 0x17de38u;
    // NOP
label_17de3c:
    // 0x17de3c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_17de40:
    if (ctx->pc == 0x17DE40u) {
        ctx->pc = 0x17DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE3Cu;
        // 0x17de40: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DE44u;
        goto label_17de44;
    }
    ctx->pc = 0x17DE3Cu;
    {
        const bool branch_taken_0x17de3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE3Cu;
        // 0x17de40: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de3c) {
            ctx->pc = 0x17DE54u;
            goto label_17de54;
        }
    }
    ctx->pc = 0x17DE44u;
label_17de44:
    // 0x17de44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17de44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17de48:
    // 0x17de48: 0x0  nop
    ctx->pc = 0x17de48u;
    // NOP
label_17de4c:
    // 0x17de4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17de4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17de50:
    // 0x17de50: 0xe6600098  swc1        $f0, 0x98($s3)
    ctx->pc = 0x17de50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
label_17de54:
    // 0x17de54: 0x0  nop
    ctx->pc = 0x17de54u;
    // NOP
label_17de58:
    // 0x17de58: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x17de58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_17de5c:
    // 0x17de5c: 0xc6610098  lwc1        $f1, 0x98($s3)
    ctx->pc = 0x17de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17de60:
    // 0x17de60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17de60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17de64:
    // 0x17de64: 0x0  nop
    ctx->pc = 0x17de64u;
    // NOP
label_17de68:
    // 0x17de68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17de68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17de6c:
    // 0x17de6c: 0x0  nop
    ctx->pc = 0x17de6cu;
    // NOP
label_17de70:
    // 0x17de70: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_17de74:
    if (ctx->pc == 0x17DE74u) {
        ctx->pc = 0x17DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE70u;
        // 0x17de74: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DE78u;
        goto label_17de78;
    }
    ctx->pc = 0x17DE70u;
    {
        const bool branch_taken_0x17de70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE70u;
        // 0x17de74: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de70) {
            ctx->pc = 0x17DE94u;
            goto label_17de94;
        }
    }
    ctx->pc = 0x17DE78u;
label_17de78:
    // 0x17de78: 0x2832004  sllv        $a0, $v1, $s4
    ctx->pc = 0x17de78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_17de7c:
    // 0x17de7c: 0xe6600098  swc1        $f0, 0x98($s3)
    ctx->pc = 0x17de7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
label_17de80:
    // 0x17de80: 0x802027  not         $a0, $a0
    ctx->pc = 0x17de80u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_17de84:
    // 0x17de84: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17de84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17de88:
    // 0x17de88: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17de88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_17de8c:
    // 0x17de8c: 0x10000031  b           . + 4 + (0x31 << 2)
label_17de90:
    if (ctx->pc == 0x17DE90u) {
        ctx->pc = 0x17DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE8Cu;
        // 0x17de90: 0xae630090  sw          $v1, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DE94u;
        goto label_17de94;
    }
    ctx->pc = 0x17DE8Cu;
    {
        const bool branch_taken_0x17de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE8Cu;
        // 0x17de90: 0xae630090  sw          $v1, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de8c) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DE94u;
label_17de94:
    // 0x17de94: 0x0  nop
    ctx->pc = 0x17de94u;
    // NOP
label_17de98:
    // 0x17de98: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17de98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17de9c:
    // 0x17de9c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x17de9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_17dea0:
    // 0x17dea0: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17dea4:
    // 0x17dea4: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17dea8:
    // 0x17dea8: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x17dea8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_17deac:
    // 0x17deac: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_17deb0:
    if (ctx->pc == 0x17DEB0u) {
        ctx->pc = 0x17DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEACu;
        // 0x17deb0: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DEB4u;
        goto label_17deb4;
    }
    ctx->pc = 0x17DEACu;
    {
        const bool branch_taken_0x17deac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEACu;
        // 0x17deb0: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17deac) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DEB4u;
label_17deb4:
    // 0x17deb4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17deb8:
    // 0x17deb8: 0x246391c0  addiu       $v1, $v1, -0x6E40
    ctx->pc = 0x17deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939072));
label_17debc:
    // 0x17debc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17debcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17dec0:
    // 0x17dec0: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x17dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_17dec4:
    // 0x17dec4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_17dec8:
    // 0x17dec8: 0x8e650090  lw          $a1, 0x90($s3)
    ctx->pc = 0x17dec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17decc:
    // 0x17decc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17deccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17ded0:
    // 0x17ded0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_17ded4:
    if (ctx->pc == 0x17DED4u) {
        ctx->pc = 0x17DED8u;
        goto label_17ded8;
    }
    ctx->pc = 0x17DED0u;
    {
        const bool branch_taken_0x17ded0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ded0) {
            ctx->pc = 0x17DF00u;
            goto label_17df00;
        }
    }
    ctx->pc = 0x17DED8u;
label_17ded8:
    // 0x17ded8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x17ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_17dedc:
    // 0x17dedc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17dee0:
    // 0x17dee0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x17dee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_17dee4:
    // 0x17dee4: 0x246391c4  addiu       $v1, $v1, -0x6E3C
    ctx->pc = 0x17dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939076));
label_17dee8:
    // 0x17dee8: 0xae640090  sw          $a0, 0x90($s3)
    ctx->pc = 0x17dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 4));
label_17deec:
    // 0x17deec: 0x8f848798  lw          $a0, -0x7868($gp)
    ctx->pc = 0x17deecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17def0:
    // 0x17def0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17def0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17def4:
    // 0x17def4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17def4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17def8:
    // 0x17def8: 0x1000000c  b           . + 4 + (0xC << 2)
label_17defc:
    if (ctx->pc == 0x17DEFCu) {
        ctx->pc = 0x17DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEF8u;
        // 0x17defc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF00u;
        goto label_17df00;
    }
    ctx->pc = 0x17DEF8u;
    {
        const bool branch_taken_0x17def8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEF8u;
        // 0x17defc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17def8) {
            ctx->pc = 0x17DF2Cu;
            goto label_17df2c;
        }
    }
    ctx->pc = 0x17DF00u;
label_17df00:
    // 0x17df00: 0x8f858798  lw          $a1, -0x7868($gp)
    ctx->pc = 0x17df00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17df04:
    // 0x17df04: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17df04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17df08:
    // 0x17df08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17df08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17df0c:
    // 0x17df0c: 0x248491c4  addiu       $a0, $a0, -0x6E3C
    ctx->pc = 0x17df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939076));
label_17df10:
    // 0x17df10: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17df10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_17df14:
    // 0x17df14: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17df14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17df18:
    // 0x17df18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17df1c:
    // 0x17df1c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x17df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_17df20:
    // 0x17df20: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x17df20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17df24:
    // 0x17df24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17df24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17df28:
    // 0x17df28: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17df28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17df2c:
    // 0x17df2c: 0x0  nop
    ctx->pc = 0x17df2cu;
    // NOP
label_17df30:
    // 0x17df30: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17df30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17df34:
    // 0x17df34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17df34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17df38:
    // 0x17df38: 0x10000006  b           . + 4 + (0x6 << 2)
label_17df3c:
    if (ctx->pc == 0x17DF3Cu) {
        ctx->pc = 0x17DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF38u;
        // 0x17df3c: 0xaf838798  sw          $v1, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF40u;
        goto label_17df40;
    }
    ctx->pc = 0x17DF38u;
    {
        const bool branch_taken_0x17df38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF38u;
        // 0x17df3c: 0xaf838798  sw          $v1, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df38) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DF40u;
label_17df40:
    // 0x17df40: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x17df40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_17df44:
    // 0x17df44: 0x2831804  sllv        $v1, $v1, $s4
    ctx->pc = 0x17df44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_17df48:
    // 0x17df48: 0x601827  not         $v1, $v1
    ctx->pc = 0x17df48u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_17df4c:
    // 0x17df4c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17df4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17df50:
    // 0x17df50: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17df50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17df54:
    // 0x17df54: 0x0  nop
    ctx->pc = 0x17df54u;
    // NOP
label_17df58:
    // 0x17df58: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17df58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17df5c:
    // 0x17df5c: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x17df5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_17df60:
    // 0x17df60: 0x146000cf  bnez        $v1, . + 4 + (0xCF << 2)
label_17df64:
    if (ctx->pc == 0x17DF64u) {
        ctx->pc = 0x17DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF60u;
        // 0x17df64: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF68u;
        goto label_17df68;
    }
    ctx->pc = 0x17DF60u;
    {
        const bool branch_taken_0x17df60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF60u;
        // 0x17df64: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df60) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17DF68u;
label_17df68:
    // 0x17df68: 0xc05fc40  jal         func_17F100
label_17df6c:
    if (ctx->pc == 0x17DF6Cu) {
        ctx->pc = 0x17DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF68u;
        // 0x17df6c: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF70u;
        goto label_17df70;
    }
    ctx->pc = 0x17DF68u;
    SET_GPR_U32(ctx, 31, 0x17DF70u);
    ctx->pc = 0x17DF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF68u;
    // 0x17df6c: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F100u;
    { ctx->pc = 0x17f100; return; }
    ctx->pc = 0x17DF70u;
label_17df70:
    // 0x17df70: 0xc05fb88  jal         func_17EE20
label_17df74:
    if (ctx->pc == 0x17DF74u) {
        ctx->pc = 0x17DF78u;
        goto label_17df78;
    }
    ctx->pc = 0x17DF70u;
    SET_GPR_U32(ctx, 31, 0x17DF78u);
    ctx->pc = 0x17EE20u;
    { ctx->pc = 0x17ee20; return; }
    ctx->pc = 0x17DF78u;
label_17df78:
    // 0x17df78: 0xc05fb50  jal         func_17ED40
label_17df7c:
    if (ctx->pc == 0x17DF7Cu) {
        ctx->pc = 0x17DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF78u;
        // 0x17df7c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF80u;
        goto label_17df80;
    }
    ctx->pc = 0x17DF78u;
    SET_GPR_U32(ctx, 31, 0x17DF80u);
    ctx->pc = 0x17DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF78u;
    // 0x17df7c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ED40u;
    { ctx->pc = 0x17ed40; return; }
    ctx->pc = 0x17DF80u;
label_17df80:
    // 0x17df80: 0x8e660090  lw          $a2, 0x90($s3)
    ctx->pc = 0x17df80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17df84:
    // 0x17df84: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17df84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17df88:
    // 0x17df88: 0xc05fbc0  jal         func_17EF00
label_17df8c:
    if (ctx->pc == 0x17DF8Cu) {
        ctx->pc = 0x17DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF88u;
        // 0x17df8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF90u;
        goto label_17df90;
    }
    ctx->pc = 0x17DF88u;
    SET_GPR_U32(ctx, 31, 0x17DF90u);
    ctx->pc = 0x17DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF88u;
    // 0x17df8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF00u;
    { ctx->pc = 0x17ef00; return; }
    ctx->pc = 0x17DF90u;
label_17df90:
    // 0x17df90: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
label_17df94:
    if (ctx->pc == 0x17DF94u) {
        ctx->pc = 0x17DF98u;
        goto label_17df98;
    }
    ctx->pc = 0x17DF90u;
    {
        const bool branch_taken_0x17df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df90) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17DF98u;
label_17df98:
    // 0x17df98: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17df98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17df9c:
    // 0x17df9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17df9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17dfa0:
    // 0x17dfa0: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17dfa4:
    // 0x17dfa4: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dfa8:
    // 0x17dfa8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x17dfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_17dfac:
    // 0x17dfac: 0x146000bc  bnez        $v1, . + 4 + (0xBC << 2)
label_17dfb0:
    if (ctx->pc == 0x17DFB0u) {
        ctx->pc = 0x17DFB4u;
        goto label_17dfb4;
    }
    ctx->pc = 0x17DFACu;
    {
        const bool branch_taken_0x17dfac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dfac) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17DFB4u;
label_17dfb4:
    // 0x17dfb4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17dfb8:
    // 0x17dfb8: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x17dfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_17dfbc:
    // 0x17dfbc: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x17dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_17dfc0:
    // 0x17dfc0: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17dfc4:
    // 0x17dfc4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_17dfc8:
    // 0x17dfc8: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17dfcc:
    // 0x17dfcc: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_17dfd0:
    if (ctx->pc == 0x17DFD0u) {
        ctx->pc = 0x17DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFCCu;
        // 0x17dfd0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DFD4u;
        goto label_17dfd4;
    }
    ctx->pc = 0x17DFCCu;
    {
        const bool branch_taken_0x17dfcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFCCu;
        // 0x17dfd0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfcc) {
            ctx->pc = 0x17E0F4u;
            goto label_17e0f4;
        }
    }
    ctx->pc = 0x17DFD4u;
label_17dfd4:
    // 0x17dfd4: 0x8f848778  lw          $a0, -0x7888($gp)
    ctx->pc = 0x17dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17dfd8:
    // 0x17dfd8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17dfdc:
    // 0x17dfdc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17dfe0:
    // 0x17dfe0: 0x8f838778  lw          $v1, -0x7888($gp)
    ctx->pc = 0x17dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17dfe4:
    // 0x17dfe4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_17dfe8:
    if (ctx->pc == 0x17DFE8u) {
        ctx->pc = 0x17DFECu;
        goto label_17dfec;
    }
    ctx->pc = 0x17DFE4u;
    {
        const bool branch_taken_0x17dfe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dfe4) {
            ctx->pc = 0x17DFFCu;
            goto label_17dffc;
        }
    }
    ctx->pc = 0x17DFECu;
label_17dfec:
    // 0x17dfec: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17dff0:
    // 0x17dff0: 0xaf838778  sw          $v1, -0x7888($gp)
    ctx->pc = 0x17dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
label_17dff4:
    // 0x17dff4: 0x10000086  b           . + 4 + (0x86 << 2)
label_17dff8:
    if (ctx->pc == 0x17DFF8u) {
        ctx->pc = 0x17DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFF4u;
        // 0x17dff8: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DFFCu;
        goto label_17dffc;
    }
    ctx->pc = 0x17DFF4u;
    {
        const bool branch_taken_0x17dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFF4u;
        // 0x17dff8: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dff4) {
            ctx->pc = 0x17E210u;
            goto label_17e210;
        }
    }
    ctx->pc = 0x17DFFCu;
label_17dffc:
    // 0x17dffc: 0x0  nop
    ctx->pc = 0x17dffcu;
    // NOP
label_17e000:
    // 0x17e000: 0x8f84878c  lw          $a0, -0x7874($gp)
    ctx->pc = 0x17e000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936460)));
label_17e004:
    // 0x17e004: 0x9663008c  lhu         $v1, 0x8C($s3)
    ctx->pc = 0x17e004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e008:
    // 0x17e008: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x17e008u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_17e00c:
    // 0x17e00c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_17e010:
    if (ctx->pc == 0x17E010u) {
        ctx->pc = 0x17E014u;
        goto label_17e014;
    }
    ctx->pc = 0x17E00Cu;
    {
        const bool branch_taken_0x17e00c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e00c) {
            ctx->pc = 0x17E01Cu;
            goto label_17e01c;
        }
    }
    ctx->pc = 0x17E014u;
label_17e014:
    // 0x17e014: 0x10000004  b           . + 4 + (0x4 << 2)
label_17e018:
    if (ctx->pc == 0x17E018u) {
        ctx->pc = 0x17E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E014u;
        // 0x17e018: 0x8f838784  lw          $v1, -0x787C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E01Cu;
        goto label_17e01c;
    }
    ctx->pc = 0x17E014u;
    {
        const bool branch_taken_0x17e014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E014u;
        // 0x17e018: 0x8f838784  lw          $v1, -0x787C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e014) {
            ctx->pc = 0x17E028u;
            goto label_17e028;
        }
    }
    ctx->pc = 0x17E01Cu;
label_17e01c:
    // 0x17e01c: 0x0  nop
    ctx->pc = 0x17e01cu;
    // NOP
label_17e020:
    // 0x17e020: 0x8f838774  lw          $v1, -0x788C($gp)
    ctx->pc = 0x17e020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17e024:
    // 0x17e024: 0x0  nop
    ctx->pc = 0x17e024u;
    // NOP
label_17e028:
    // 0x17e028: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_17e02c:
    if (ctx->pc == 0x17E02Cu) {
        ctx->pc = 0x17E030u;
        goto label_17e030;
    }
    ctx->pc = 0x17E028u;
    {
        const bool branch_taken_0x17e028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e028) {
            ctx->pc = 0x17E050u;
            goto label_17e050;
        }
    }
    ctx->pc = 0x17E030u;
label_17e030:
    // 0x17e030: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x17e030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17e034:
    // 0x17e034: 0x9664008c  lhu         $a0, 0x8C($s3)
    ctx->pc = 0x17e034u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e038:
    // 0x17e038: 0x94a5008c  lhu         $a1, 0x8C($a1)
    ctx->pc = 0x17e038u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 140)));
label_17e03c:
    // 0x17e03c: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x17e03cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_17e040:
    // 0x17e040: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17e044:
    if (ctx->pc == 0x17E044u) {
        ctx->pc = 0x17E048u;
        goto label_17e048;
    }
    ctx->pc = 0x17E040u;
    {
        const bool branch_taken_0x17e040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e040) {
            ctx->pc = 0x17E050u;
            goto label_17e050;
        }
    }
    ctx->pc = 0x17E048u;
label_17e048:
    // 0x17e048: 0x1000fff7  b           . + 4 + (-0x9 << 2)
label_17e04c:
    if (ctx->pc == 0x17E04Cu) {
        ctx->pc = 0x17E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E048u;
        // 0x17e04c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E050u;
        goto label_17e050;
    }
    ctx->pc = 0x17E048u;
    {
        const bool branch_taken_0x17e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E048u;
        // 0x17e04c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e048) {
            ctx->pc = 0x17E028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e028;
        }
    }
    ctx->pc = 0x17E050u;
label_17e050:
    // 0x17e050: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x17e050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17e054:
    // 0x17e054: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
label_17e058:
    if (ctx->pc == 0x17E058u) {
        ctx->pc = 0x17E05Cu;
        goto label_17e05c;
    }
    ctx->pc = 0x17E054u;
    {
        const bool branch_taken_0x17e054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17e054) {
            ctx->pc = 0x17E084u;
            goto label_17e084;
        }
    }
    ctx->pc = 0x17E05Cu;
label_17e05c:
    // 0x17e05c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e060:
    // 0x17e060: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17e060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17e064:
    // 0x17e064: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e068:
    // 0x17e068: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x17e068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_17e06c:
    // 0x17e06c: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e070:
    // 0x17e070: 0x8f838774  lw          $v1, -0x788C($gp)
    ctx->pc = 0x17e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17e074:
    // 0x17e074: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e078:
    // 0x17e078: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e07c:
    // 0x17e07c: 0x10000018  b           . + 4 + (0x18 << 2)
label_17e080:
    if (ctx->pc == 0x17E080u) {
        ctx->pc = 0x17E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E07Cu;
        // 0x17e080: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E084u;
        goto label_17e084;
    }
    ctx->pc = 0x17E07Cu;
    {
        const bool branch_taken_0x17e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E07Cu;
        // 0x17e080: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e07c) {
            ctx->pc = 0x17E0E0u;
            goto label_17e0e0;
        }
    }
    ctx->pc = 0x17E084u;
label_17e084:
    // 0x17e084: 0x0  nop
    ctx->pc = 0x17e084u;
    // NOP
label_17e088:
    // 0x17e088: 0x8f848778  lw          $a0, -0x7888($gp)
    ctx->pc = 0x17e088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17e08c:
    // 0x17e08c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_17e090:
    if (ctx->pc == 0x17E090u) {
        ctx->pc = 0x17E094u;
        goto label_17e094;
    }
    ctx->pc = 0x17E08Cu;
    {
        const bool branch_taken_0x17e08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e08c) {
            ctx->pc = 0x17E09Cu;
            goto label_17e09c;
        }
    }
    ctx->pc = 0x17E094u;
label_17e094:
    // 0x17e094: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_17e098:
    if (ctx->pc == 0x17E098u) {
        ctx->pc = 0x17E09Cu;
        goto label_17e09c;
    }
    ctx->pc = 0x17E094u;
    {
        const bool branch_taken_0x17e094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e094) {
            ctx->pc = 0x17E0B8u;
            goto label_17e0b8;
        }
    }
    ctx->pc = 0x17E09Cu;
label_17e09c:
    // 0x17e09c: 0x0  nop
    ctx->pc = 0x17e09cu;
    // NOP
label_17e0a0:
    // 0x17e0a0: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0a4:
    // 0x17e0a4: 0x8f838778  lw          $v1, -0x7888($gp)
    ctx->pc = 0x17e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17e0a8:
    // 0x17e0a8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17e0ac:
    // 0x17e0ac: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0b0:
    // 0x17e0b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_17e0b4:
    if (ctx->pc == 0x17E0B4u) {
        ctx->pc = 0x17E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0B0u;
        // 0x17e0b4: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E0B8u;
        goto label_17e0b8;
    }
    ctx->pc = 0x17E0B0u;
    {
        const bool branch_taken_0x17e0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0B0u;
        // 0x17e0b4: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0b0) {
            ctx->pc = 0x17E0E0u;
            goto label_17e0e0;
        }
    }
    ctx->pc = 0x17E0B8u;
label_17e0b8:
    // 0x17e0b8: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0bc:
    // 0x17e0bc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x17e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_17e0c0:
    // 0x17e0c0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x17e0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17e0c4:
    // 0x17e0c4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0c8:
    // 0x17e0c8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e0cc:
    // 0x17e0cc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0d0:
    // 0x17e0d0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_17e0d4:
    if (ctx->pc == 0x17E0D4u) {
        ctx->pc = 0x17E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0D0u;
        // 0x17e0d4: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E0D8u;
        goto label_17e0d8;
    }
    ctx->pc = 0x17E0D0u;
    {
        const bool branch_taken_0x17e0d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0D0u;
        // 0x17e0d4: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0d0) {
            ctx->pc = 0x17E0E0u;
            goto label_17e0e0;
        }
    }
    ctx->pc = 0x17E0D8u;
label_17e0d8:
    // 0x17e0d8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0dc:
    // 0x17e0dc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x17e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_17e0e0:
    // 0x17e0e0: 0x9664008c  lhu         $a0, 0x8C($s3)
    ctx->pc = 0x17e0e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e0e4:
    // 0x17e0e4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0e8:
    // 0x17e0e8: 0xaf84878c  sw          $a0, -0x7874($gp)
    ctx->pc = 0x17e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 4));
label_17e0ec:
    // 0x17e0ec: 0x10000048  b           . + 4 + (0x48 << 2)
label_17e0f0:
    if (ctx->pc == 0x17E0F0u) {
        ctx->pc = 0x17E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0ECu;
        // 0x17e0f0: 0xaf838784  sw          $v1, -0x787C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E0F4u;
        goto label_17e0f4;
    }
    ctx->pc = 0x17E0ECu;
    {
        const bool branch_taken_0x17e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0ECu;
        // 0x17e0f0: 0xaf838784  sw          $v1, -0x787C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0ec) {
            ctx->pc = 0x17E210u;
            goto label_17e210;
        }
    }
    ctx->pc = 0x17E0F4u;
label_17e0f4:
    // 0x17e0f4: 0x0  nop
    ctx->pc = 0x17e0f4u;
    // NOP
label_17e0f8:
    // 0x17e0f8: 0x8f84877c  lw          $a0, -0x7884($gp)
    ctx->pc = 0x17e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17e0fc:
    // 0x17e0fc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e100:
    // 0x17e100: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e104:
    // 0x17e104: 0x8f83877c  lw          $v1, -0x7884($gp)
    ctx->pc = 0x17e104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17e108:
    // 0x17e108: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_17e10c:
    if (ctx->pc == 0x17E10Cu) {
        ctx->pc = 0x17E110u;
        goto label_17e110;
    }
    ctx->pc = 0x17E108u;
    {
        const bool branch_taken_0x17e108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e108) {
            ctx->pc = 0x17E120u;
            goto label_17e120;
        }
    }
    ctx->pc = 0x17E110u;
label_17e110:
    // 0x17e110: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e114:
    // 0x17e114: 0xaf83877c  sw          $v1, -0x7884($gp)
    ctx->pc = 0x17e114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
label_17e118:
    // 0x17e118: 0x1000003d  b           . + 4 + (0x3D << 2)
label_17e11c:
    if (ctx->pc == 0x17E11Cu) {
        ctx->pc = 0x17E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E118u;
        // 0x17e11c: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E120u;
        goto label_17e120;
    }
    ctx->pc = 0x17E118u;
    {
        const bool branch_taken_0x17e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E118u;
        // 0x17e11c: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e118) {
            ctx->pc = 0x17E210u;
            goto label_17e210;
        }
    }
    ctx->pc = 0x17E120u;
label_17e120:
    // 0x17e120: 0x8f848790  lw          $a0, -0x7870($gp)
    ctx->pc = 0x17e120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936464)));
label_17e124:
    // 0x17e124: 0x9663008c  lhu         $v1, 0x8C($s3)
    ctx->pc = 0x17e124u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e128:
    // 0x17e128: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x17e128u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_17e12c:
    // 0x17e12c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_17e130:
    if (ctx->pc == 0x17E130u) {
        ctx->pc = 0x17E134u;
        goto label_17e134;
    }
    ctx->pc = 0x17E12Cu;
    {
        const bool branch_taken_0x17e12c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e12c) {
            ctx->pc = 0x17E13Cu;
            goto label_17e13c;
        }
    }
    ctx->pc = 0x17E134u;
label_17e134:
    // 0x17e134: 0x10000004  b           . + 4 + (0x4 << 2)
label_17e138:
    if (ctx->pc == 0x17E138u) {
        ctx->pc = 0x17E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E134u;
        // 0x17e138: 0x8f838788  lw          $v1, -0x7878($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E13Cu;
        goto label_17e13c;
    }
    ctx->pc = 0x17E134u;
    {
        const bool branch_taken_0x17e134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E134u;
        // 0x17e138: 0x8f838788  lw          $v1, -0x7878($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e134) {
            ctx->pc = 0x17E148u;
            goto label_17e148;
        }
    }
    ctx->pc = 0x17E13Cu;
label_17e13c:
    // 0x17e13c: 0x0  nop
    ctx->pc = 0x17e13cu;
    // NOP
label_17e140:
    // 0x17e140: 0x8f838770  lw          $v1, -0x7890($gp)
    ctx->pc = 0x17e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_17e144:
    // 0x17e144: 0x0  nop
    ctx->pc = 0x17e144u;
    // NOP
label_17e148:
    // 0x17e148: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_17e14c:
    if (ctx->pc == 0x17E14Cu) {
        ctx->pc = 0x17E150u;
        goto label_17e150;
    }
    ctx->pc = 0x17E148u;
    {
        const bool branch_taken_0x17e148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e148) {
            ctx->pc = 0x17E170u;
            goto label_17e170;
        }
    }
    ctx->pc = 0x17E150u;
label_17e150:
    // 0x17e150: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x17e150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17e154:
    // 0x17e154: 0x9664008c  lhu         $a0, 0x8C($s3)
    ctx->pc = 0x17e154u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e158:
    // 0x17e158: 0x94a5008c  lhu         $a1, 0x8C($a1)
    ctx->pc = 0x17e158u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 140)));
label_17e15c:
    // 0x17e15c: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x17e15cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_17e160:
    // 0x17e160: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17e164:
    if (ctx->pc == 0x17E164u) {
        ctx->pc = 0x17E168u;
        goto label_17e168;
    }
    ctx->pc = 0x17E160u;
    {
        const bool branch_taken_0x17e160 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e160) {
            ctx->pc = 0x17E170u;
            goto label_17e170;
        }
    }
    ctx->pc = 0x17E168u;
label_17e168:
    // 0x17e168: 0x1000fff7  b           . + 4 + (-0x9 << 2)
label_17e16c:
    if (ctx->pc == 0x17E16Cu) {
        ctx->pc = 0x17E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E168u;
        // 0x17e16c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E170u;
        goto label_17e170;
    }
    ctx->pc = 0x17E168u;
    {
        const bool branch_taken_0x17e168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E168u;
        // 0x17e16c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e168) {
            ctx->pc = 0x17E148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e148;
        }
    }
    ctx->pc = 0x17E170u;
label_17e170:
    // 0x17e170: 0x8f848770  lw          $a0, -0x7890($gp)
    ctx->pc = 0x17e170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_17e174:
    // 0x17e174: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
label_17e178:
    if (ctx->pc == 0x17E178u) {
        ctx->pc = 0x17E17Cu;
        goto label_17e17c;
    }
    ctx->pc = 0x17E174u;
    {
        const bool branch_taken_0x17e174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17e174) {
            ctx->pc = 0x17E1A4u;
            goto label_17e1a4;
        }
    }
    ctx->pc = 0x17E17Cu;
label_17e17c:
    // 0x17e17c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e180:
    // 0x17e180: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17e180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17e184:
    // 0x17e184: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e188:
    // 0x17e188: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x17e188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_17e18c:
    // 0x17e18c: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e190:
    // 0x17e190: 0x8f838770  lw          $v1, -0x7890($gp)
    ctx->pc = 0x17e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_17e194:
    // 0x17e194: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e198:
    // 0x17e198: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e19c:
    // 0x17e19c: 0x10000018  b           . + 4 + (0x18 << 2)
label_17e1a0:
    if (ctx->pc == 0x17E1A0u) {
        ctx->pc = 0x17E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E19Cu;
        // 0x17e1a0: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E1A4u;
        goto label_17e1a4;
    }
    ctx->pc = 0x17E19Cu;
    {
        const bool branch_taken_0x17e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E19Cu;
        // 0x17e1a0: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e19c) {
            ctx->pc = 0x17E200u;
            goto label_17e200;
        }
    }
    ctx->pc = 0x17E1A4u;
label_17e1a4:
    // 0x17e1a4: 0x0  nop
    ctx->pc = 0x17e1a4u;
    // NOP
label_17e1a8:
    // 0x17e1a8: 0x8f84877c  lw          $a0, -0x7884($gp)
    ctx->pc = 0x17e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17e1ac:
    // 0x17e1ac: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_17e1b0:
    if (ctx->pc == 0x17E1B0u) {
        ctx->pc = 0x17E1B4u;
        goto label_17e1b4;
    }
    ctx->pc = 0x17E1ACu;
    {
        const bool branch_taken_0x17e1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e1ac) {
            ctx->pc = 0x17E1BCu;
            goto label_17e1bc;
        }
    }
    ctx->pc = 0x17E1B4u;
label_17e1b4:
    // 0x17e1b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_17e1b8:
    if (ctx->pc == 0x17E1B8u) {
        ctx->pc = 0x17E1BCu;
        goto label_17e1bc;
    }
    ctx->pc = 0x17E1B4u;
    {
        const bool branch_taken_0x17e1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e1b4) {
            ctx->pc = 0x17E1D8u;
            goto label_17e1d8;
        }
    }
    ctx->pc = 0x17E1BCu;
label_17e1bc:
    // 0x17e1bc: 0x0  nop
    ctx->pc = 0x17e1bcu;
    // NOP
label_17e1c0:
    // 0x17e1c0: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e1c4:
    // 0x17e1c4: 0x8f83877c  lw          $v1, -0x7884($gp)
    ctx->pc = 0x17e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17e1c8:
    // 0x17e1c8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17e1cc:
    // 0x17e1cc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e1d0:
    // 0x17e1d0: 0x1000000b  b           . + 4 + (0xB << 2)
label_17e1d4:
    if (ctx->pc == 0x17E1D4u) {
        ctx->pc = 0x17E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1D0u;
        // 0x17e1d4: 0xaf83877c  sw          $v1, -0x7884($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E1D8u;
        goto label_17e1d8;
    }
    ctx->pc = 0x17E1D0u;
    {
        const bool branch_taken_0x17e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1D0u;
        // 0x17e1d4: 0xaf83877c  sw          $v1, -0x7884($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1d0) {
            ctx->pc = 0x17E200u;
            goto label_17e200;
        }
    }
    ctx->pc = 0x17E1D8u;
label_17e1d8:
    // 0x17e1d8: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e1dc:
    // 0x17e1dc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x17e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_17e1e0:
    // 0x17e1e0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x17e1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17e1e4:
    // 0x17e1e4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e1e8:
    // 0x17e1e8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e1ec:
    // 0x17e1ec: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e1f0:
    // 0x17e1f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_17e1f4:
    if (ctx->pc == 0x17E1F4u) {
        ctx->pc = 0x17E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1F0u;
        // 0x17e1f4: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E1F8u;
        goto label_17e1f8;
    }
    ctx->pc = 0x17E1F0u;
    {
        const bool branch_taken_0x17e1f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1F0u;
        // 0x17e1f4: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1f0) {
            ctx->pc = 0x17E200u;
            goto label_17e200;
        }
    }
    ctx->pc = 0x17E1F8u;
label_17e1f8:
    // 0x17e1f8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e1fc:
    // 0x17e1fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x17e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_17e200:
    // 0x17e200: 0x9664008c  lhu         $a0, 0x8C($s3)
    ctx->pc = 0x17e200u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e204:
    // 0x17e204: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e208:
    // 0x17e208: 0xaf848790  sw          $a0, -0x7870($gp)
    ctx->pc = 0x17e208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 4));
label_17e20c:
    // 0x17e20c: 0xaf838788  sw          $v1, -0x7878($gp)
    ctx->pc = 0x17e20cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 3));
label_17e210:
    // 0x17e210: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e214:
    // 0x17e214: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17e214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17e218:
    // 0x17e218: 0x34213fb1  ori         $at, $at, 0x3FB1
    ctx->pc = 0x17e218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16305);
label_17e21c:
    // 0x17e21c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_17e220:
    // 0x17e220: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x17e220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_17e224:
    // 0x17e224: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e228:
    // 0x17e228: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x17e228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_17e22c:
    // 0x17e22c: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
label_17e230:
    if (ctx->pc == 0x17E230u) {
        ctx->pc = 0x17E234u;
        goto label_17e234;
    }
    ctx->pc = 0x17E22Cu;
    {
        const bool branch_taken_0x17e22c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e22c) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17E234u;
label_17e234:
    // 0x17e234: 0x8f848770  lw          $a0, -0x7890($gp)
    ctx->pc = 0x17e234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_17e238:
    // 0x17e238: 0x8f858774  lw          $a1, -0x788C($gp)
    ctx->pc = 0x17e238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17e23c:
    // 0x17e23c: 0xc05e75c  jal         func_179D70
label_17e240:
    if (ctx->pc == 0x17E240u) {
        ctx->pc = 0x17E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E23Cu;
        // 0x17e240: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E244u;
        goto label_17e244;
    }
    ctx->pc = 0x17E23Cu;
    SET_GPR_U32(ctx, 31, 0x17E244u);
    ctx->pc = 0x17E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E23Cu;
    // 0x17e240: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D70u, 0x17E23Cu, 0x17E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E244u;
label_17e244:
    // 0x17e244: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17e244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_17e248:
    // 0x17e248: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17e248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17e24c:
    // 0x17e24c: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x17e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_17e250:
    // 0x17e250: 0x24849400  addiu       $a0, $a0, -0x6C00
    ctx->pc = 0x17e250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939648));
label_17e254:
    // 0x17e254: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17e254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17e258:
    // 0x17e258: 0xaf80877c  sw          $zero, -0x7884($gp)
    ctx->pc = 0x17e258u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 0));
label_17e25c:
    // 0x17e25c: 0xaf808778  sw          $zero, -0x7888($gp)
    ctx->pc = 0x17e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 0));
label_17e260:
    // 0x17e260: 0x246393c0  addiu       $v1, $v1, -0x6C40
    ctx->pc = 0x17e260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939584));
label_17e264:
    // 0x17e264: 0xaf808770  sw          $zero, -0x7890($gp)
    ctx->pc = 0x17e264u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 0));
label_17e268:
    // 0x17e268: 0xaf808774  sw          $zero, -0x788C($gp)
    ctx->pc = 0x17e268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 0));
label_17e26c:
    // 0x17e26c: 0xaf808790  sw          $zero, -0x7870($gp)
    ctx->pc = 0x17e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 0));
label_17e270:
    // 0x17e270: 0xaf80878c  sw          $zero, -0x7874($gp)
    ctx->pc = 0x17e270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 0));
label_17e274:
    // 0x17e274: 0xaf808788  sw          $zero, -0x7878($gp)
    ctx->pc = 0x17e274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 0));
label_17e278:
    // 0x17e278: 0xaf808784  sw          $zero, -0x787C($gp)
    ctx->pc = 0x17e278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 0));
label_17e27c:
    // 0x17e27c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x17e27cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17e280:
    // 0x17e280: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x17e280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_17e284:
    // 0x17e284: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x17e284u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_17e288:
    // 0x17e288: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x17e288u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_17e28c:
    // 0x17e28c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x17e28cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17e290:
    // 0x17e290: 0xd8660010  lqc2        $vf6, 0x10($v1)
    ctx->pc = 0x17e290u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17e294:
    // 0x17e294: 0xd8670020  lqc2        $vf7, 0x20($v1)
    ctx->pc = 0x17e294u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17e298:
    // 0x17e298: 0xd8680030  lqc2        $vf8, 0x30($v1)
    ctx->pc = 0x17e298u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17e29c:
    // 0x17e29c: 0x0  nop
    ctx->pc = 0x17e29cu;
    // NOP
label_17e2a0:
    // 0x17e2a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17e2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17e2a4:
    // 0x17e2a4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17e2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_17e2a8:
    // 0x17e2a8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x17e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_17e2ac:
    // 0x17e2ac: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x17e2acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17e2b0:
    // 0x17e2b0: 0x1460fe7e  bnez        $v1, . + 4 + (-0x182 << 2)
label_17e2b4:
    if (ctx->pc == 0x17E2B4u) {
        ctx->pc = 0x17E2B8u;
        goto label_17e2b8;
    }
    ctx->pc = 0x17E2B0u;
    {
        const bool branch_taken_0x17e2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e2b0) {
            ctx->pc = 0x17DCACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dcac;
        }
    }
    ctx->pc = 0x17E2B8u;
label_17e2b8:
    // 0x17e2b8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x17e2b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_17e2bc:
    // 0x17e2bc: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x17e2bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_17e2c0:
    // 0x17e2c0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x17e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_17e2c4:
    // 0x17e2c4: 0x76082a  slt         $at, $v1, $s6
    ctx->pc = 0x17e2c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_17e2c8:
    // 0x17e2c8: 0x1020fe69  beqz        $at, . + 4 + (-0x197 << 2)
label_17e2cc:
    if (ctx->pc == 0x17E2CCu) {
        ctx->pc = 0x17E2D0u;
        goto label_17e2d0;
    }
    ctx->pc = 0x17E2C8u;
    {
        const bool branch_taken_0x17e2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e2c8) {
            ctx->pc = 0x17DC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dc70;
        }
    }
    ctx->pc = 0x17E2D0u;
label_17e2d0:
    // 0x17e2d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17e2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17e2d4:
    // 0x17e2d4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17e2d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17e2d8:
    // 0x17e2d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17e2d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17e2dc:
    // 0x17e2dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17e2dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17e2e0:
    // 0x17e2e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17e2e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17e2e4:
    // 0x17e2e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17e2e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17e2e8:
    // 0x17e2e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e2e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17e2ec:
    // 0x17e2ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e2ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17e2f0:
    // 0x17e2f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17e2f4:
    // 0x17e2f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17e2f8:
    // 0x17e2f8: 0x3e00008  jr          $ra
label_17e2fc:
    if (ctx->pc == 0x17E2FCu) {
        ctx->pc = 0x17E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2F8u;
        // 0x17e2fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E300u;
        goto label_17e300;
    }
    ctx->pc = 0x17E2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2F8u;
        // 0x17e2fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E300u;
label_17e300:
    // 0x17e300: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17e300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_17e304:
    // 0x17e304: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17e304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_17e308:
    // 0x17e308: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17e30c:
    // 0x17e30c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17e310:
    // 0x17e310: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x17e310u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_17e314:
    // 0x17e314: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17e314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_17e318:
    // 0x17e318: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17e318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17e31c:
    // 0x17e31c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17e31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17e320:
    // 0x17e320: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17e324:
    // 0x17e324: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17e324u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17e328:
    // 0x17e328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17e32c:
    // 0x17e32c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17e330:
    // 0x17e330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17e334:
    // 0x17e334: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_17e338:
    if (ctx->pc == 0x17E338u) {
        ctx->pc = 0x17E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E334u;
        // 0x17e338: 0xafa600bc  sw          $a2, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E33Cu;
        goto label_17e33c;
    }
    ctx->pc = 0x17E334u;
    {
        const bool branch_taken_0x17e334 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E334u;
        // 0x17e338: 0xafa600bc  sw          $a2, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e334) {
            ctx->pc = 0x17E344u;
            goto label_17e344;
        }
    }
    ctx->pc = 0x17E33Cu;
label_17e33c:
    // 0x17e33c: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e340:
    if (ctx->pc == 0x17E340u) {
        ctx->pc = 0x17E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E33Cu;
        // 0x17e340: 0x241600c0  addiu       $s6, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E344u;
        goto label_17e344;
    }
    ctx->pc = 0x17E33Cu;
    {
        const bool branch_taken_0x17e33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E33Cu;
        // 0x17e340: 0x241600c0  addiu       $s6, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e33c) {
            ctx->pc = 0x17E348u;
            goto label_17e348;
        }
    }
    ctx->pc = 0x17E344u;
label_17e344:
    // 0x17e344: 0x24160300  addiu       $s6, $zero, 0x300
    ctx->pc = 0x17e344u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_17e348:
    // 0x17e348: 0x8f838458  lw          $v1, -0x7BA8($gp)
    ctx->pc = 0x17e348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935640)));
label_17e34c:
    // 0x17e34c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17e34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17e350:
    // 0x17e350: 0x1000008b  b           . + 4 + (0x8B << 2)
label_17e354:
    if (ctx->pc == 0x17E354u) {
        ctx->pc = 0x17E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E350u;
        // 0x17e354: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E358u;
        goto label_17e358;
    }
    ctx->pc = 0x17E350u;
    {
        const bool branch_taken_0x17e350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E350u;
        // 0x17e354: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e350) {
            ctx->pc = 0x17E580u;
            { ctx->pc = 0x17e580; return; }
        }
    }
    ctx->pc = 0x17E358u;
label_17e358:
    // 0x17e358: 0x0  nop
    ctx->pc = 0x17e358u;
    // NOP
label_17e35c:
    // 0x17e35c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x17e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17e360:
    // 0x17e360: 0x10800084  beqz        $a0, . + 4 + (0x84 << 2)
label_17e364:
    if (ctx->pc == 0x17E364u) {
        ctx->pc = 0x17E368u;
        goto label_17e368;
    }
    ctx->pc = 0x17E360u;
    {
        const bool branch_taken_0x17e360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e360) {
            ctx->pc = 0x17E574u;
            { ctx->pc = 0x17e574; return; }
        }
    }
    ctx->pc = 0x17E368u;
label_17e368:
    // 0x17e368: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17e368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_17e36c:
    // 0x17e36c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17e370:
    // 0x17e370: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x17e370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_17e374:
    // 0x17e374: 0x1080007f  beqz        $a0, . + 4 + (0x7F << 2)
label_17e378:
    if (ctx->pc == 0x17E378u) {
        ctx->pc = 0x17E37Cu;
        goto label_17e37c;
    }
    ctx->pc = 0x17E374u;
    {
        const bool branch_taken_0x17e374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e374) {
            ctx->pc = 0x17E574u;
            { ctx->pc = 0x17e574; return; }
        }
    }
    ctx->pc = 0x17E37Cu;
label_17e37c:
    // 0x17e37c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_17e380:
    // 0x17e380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17e384:
    // 0x17e384: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17e384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17e388:
    // 0x17e388: 0x1080007a  beqz        $a0, . + 4 + (0x7A << 2)
label_17e38c:
    if (ctx->pc == 0x17E38Cu) {
        ctx->pc = 0x17E390u;
        goto label_17e390;
    }
    ctx->pc = 0x17E388u;
    {
        const bool branch_taken_0x17e388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e388) {
            ctx->pc = 0x17E574u;
            { ctx->pc = 0x17e574; return; }
        }
    }
    ctx->pc = 0x17E390u;
label_17e390:
    // 0x17e390: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17e390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_17e394:
    // 0x17e394: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17e394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e398:
    // 0x17e398: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x17e398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17e39c:
    // 0x17e39c: 0x8e370000  lw          $s7, 0x0($s1)
    ctx->pc = 0x17e39cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17e3a0:
    // 0x17e3a0: 0x10000071  b           . + 4 + (0x71 << 2)
label_17e3a4:
    if (ctx->pc == 0x17E3A4u) {
        ctx->pc = 0x17E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3A0u;
        // 0x17e3a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E3A8u;
        goto label_17e3a8;
    }
    ctx->pc = 0x17E3A0u;
    {
        const bool branch_taken_0x17e3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3A0u;
        // 0x17e3a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3a0) {
            ctx->pc = 0x17E568u;
            { ctx->pc = 0x17e568; return; }
        }
    }
    ctx->pc = 0x17E3A8u;
label_17e3a8:
    // 0x17e3a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x17e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17e3ac:
    // 0x17e3ac: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->pc = 0x17e3b0u;
    return;
}
