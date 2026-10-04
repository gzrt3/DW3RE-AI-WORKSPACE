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


void FUN_0014eba0_part32(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15ddd0u: goto label_15ddd0;
        case 0x15ddd4u: goto label_15ddd4;
        case 0x15ddd8u: goto label_15ddd8;
        case 0x15dddcu: goto label_15dddc;
        case 0x15dde0u: goto label_15dde0;
        case 0x15dde4u: goto label_15dde4;
        case 0x15dde8u: goto label_15dde8;
        case 0x15ddecu: goto label_15ddec;
        case 0x15ddf0u: goto label_15ddf0;
        case 0x15ddf4u: goto label_15ddf4;
        case 0x15ddf8u: goto label_15ddf8;
        case 0x15ddfcu: goto label_15ddfc;
        case 0x15de00u: goto label_15de00;
        case 0x15de04u: goto label_15de04;
        case 0x15de08u: goto label_15de08;
        case 0x15de0cu: goto label_15de0c;
        case 0x15de10u: goto label_15de10;
        case 0x15de14u: goto label_15de14;
        case 0x15de18u: goto label_15de18;
        case 0x15de1cu: goto label_15de1c;
        case 0x15de20u: goto label_15de20;
        case 0x15de24u: goto label_15de24;
        case 0x15de28u: goto label_15de28;
        case 0x15de2cu: goto label_15de2c;
        case 0x15de30u: goto label_15de30;
        case 0x15de34u: goto label_15de34;
        case 0x15de38u: goto label_15de38;
        case 0x15de3cu: goto label_15de3c;
        case 0x15de40u: goto label_15de40;
        case 0x15de44u: goto label_15de44;
        case 0x15de48u: goto label_15de48;
        case 0x15de4cu: goto label_15de4c;
        case 0x15de50u: goto label_15de50;
        case 0x15de54u: goto label_15de54;
        case 0x15de58u: goto label_15de58;
        case 0x15de5cu: goto label_15de5c;
        case 0x15de60u: goto label_15de60;
        case 0x15de64u: goto label_15de64;
        case 0x15de68u: goto label_15de68;
        case 0x15de6cu: goto label_15de6c;
        case 0x15de70u: goto label_15de70;
        case 0x15de74u: goto label_15de74;
        case 0x15de78u: goto label_15de78;
        case 0x15de7cu: goto label_15de7c;
        case 0x15de80u: goto label_15de80;
        case 0x15de84u: goto label_15de84;
        case 0x15de88u: goto label_15de88;
        case 0x15de8cu: goto label_15de8c;
        case 0x15de90u: goto label_15de90;
        case 0x15de94u: goto label_15de94;
        case 0x15de98u: goto label_15de98;
        case 0x15de9cu: goto label_15de9c;
        case 0x15dea0u: goto label_15dea0;
        case 0x15dea4u: goto label_15dea4;
        case 0x15dea8u: goto label_15dea8;
        case 0x15deacu: goto label_15deac;
        case 0x15deb0u: goto label_15deb0;
        case 0x15deb4u: goto label_15deb4;
        case 0x15deb8u: goto label_15deb8;
        case 0x15debcu: goto label_15debc;
        case 0x15dec0u: goto label_15dec0;
        case 0x15dec4u: goto label_15dec4;
        case 0x15dec8u: goto label_15dec8;
        case 0x15deccu: goto label_15decc;
        case 0x15ded0u: goto label_15ded0;
        case 0x15ded4u: goto label_15ded4;
        case 0x15ded8u: goto label_15ded8;
        case 0x15dedcu: goto label_15dedc;
        case 0x15dee0u: goto label_15dee0;
        case 0x15dee4u: goto label_15dee4;
        case 0x15dee8u: goto label_15dee8;
        case 0x15deecu: goto label_15deec;
        case 0x15def0u: goto label_15def0;
        case 0x15def4u: goto label_15def4;
        case 0x15def8u: goto label_15def8;
        case 0x15defcu: goto label_15defc;
        case 0x15df00u: goto label_15df00;
        case 0x15df04u: goto label_15df04;
        case 0x15df08u: goto label_15df08;
        case 0x15df0cu: goto label_15df0c;
        case 0x15df10u: goto label_15df10;
        case 0x15df14u: goto label_15df14;
        case 0x15df18u: goto label_15df18;
        case 0x15df1cu: goto label_15df1c;
        case 0x15df20u: goto label_15df20;
        case 0x15df24u: goto label_15df24;
        case 0x15df28u: goto label_15df28;
        case 0x15df2cu: goto label_15df2c;
        case 0x15df30u: goto label_15df30;
        case 0x15df34u: goto label_15df34;
        case 0x15df38u: goto label_15df38;
        case 0x15df3cu: goto label_15df3c;
        case 0x15df40u: goto label_15df40;
        case 0x15df44u: goto label_15df44;
        case 0x15df48u: goto label_15df48;
        case 0x15df4cu: goto label_15df4c;
        case 0x15df50u: goto label_15df50;
        case 0x15df54u: goto label_15df54;
        case 0x15df58u: goto label_15df58;
        case 0x15df5cu: goto label_15df5c;
        case 0x15df60u: goto label_15df60;
        case 0x15df64u: goto label_15df64;
        case 0x15df68u: goto label_15df68;
        case 0x15df6cu: goto label_15df6c;
        case 0x15df70u: goto label_15df70;
        case 0x15df74u: goto label_15df74;
        case 0x15df78u: goto label_15df78;
        case 0x15df7cu: goto label_15df7c;
        case 0x15df80u: goto label_15df80;
        case 0x15df84u: goto label_15df84;
        case 0x15df88u: goto label_15df88;
        case 0x15df8cu: goto label_15df8c;
        case 0x15df90u: goto label_15df90;
        case 0x15df94u: goto label_15df94;
        case 0x15df98u: goto label_15df98;
        case 0x15df9cu: goto label_15df9c;
        case 0x15dfa0u: goto label_15dfa0;
        case 0x15dfa4u: goto label_15dfa4;
        case 0x15dfa8u: goto label_15dfa8;
        case 0x15dfacu: goto label_15dfac;
        case 0x15dfb0u: goto label_15dfb0;
        case 0x15dfb4u: goto label_15dfb4;
        case 0x15dfb8u: goto label_15dfb8;
        case 0x15dfbcu: goto label_15dfbc;
        case 0x15dfc0u: goto label_15dfc0;
        case 0x15dfc4u: goto label_15dfc4;
        case 0x15dfc8u: goto label_15dfc8;
        case 0x15dfccu: goto label_15dfcc;
        case 0x15dfd0u: goto label_15dfd0;
        case 0x15dfd4u: goto label_15dfd4;
        case 0x15dfd8u: goto label_15dfd8;
        case 0x15dfdcu: goto label_15dfdc;
        case 0x15dfe0u: goto label_15dfe0;
        case 0x15dfe4u: goto label_15dfe4;
        case 0x15dfe8u: goto label_15dfe8;
        case 0x15dfecu: goto label_15dfec;
        case 0x15dff0u: goto label_15dff0;
        case 0x15dff4u: goto label_15dff4;
        case 0x15dff8u: goto label_15dff8;
        case 0x15dffcu: goto label_15dffc;
        case 0x15e000u: goto label_15e000;
        case 0x15e004u: goto label_15e004;
        case 0x15e008u: goto label_15e008;
        case 0x15e00cu: goto label_15e00c;
        case 0x15e010u: goto label_15e010;
        case 0x15e014u: goto label_15e014;
        case 0x15e018u: goto label_15e018;
        case 0x15e01cu: goto label_15e01c;
        case 0x15e020u: goto label_15e020;
        case 0x15e024u: goto label_15e024;
        case 0x15e028u: goto label_15e028;
        case 0x15e02cu: goto label_15e02c;
        case 0x15e030u: goto label_15e030;
        case 0x15e034u: goto label_15e034;
        case 0x15e038u: goto label_15e038;
        case 0x15e03cu: goto label_15e03c;
        case 0x15e040u: goto label_15e040;
        case 0x15e044u: goto label_15e044;
        case 0x15e048u: goto label_15e048;
        case 0x15e04cu: goto label_15e04c;
        case 0x15e050u: goto label_15e050;
        case 0x15e054u: goto label_15e054;
        case 0x15e058u: goto label_15e058;
        case 0x15e05cu: goto label_15e05c;
        case 0x15e060u: goto label_15e060;
        case 0x15e064u: goto label_15e064;
        case 0x15e068u: goto label_15e068;
        case 0x15e06cu: goto label_15e06c;
        case 0x15e070u: goto label_15e070;
        case 0x15e074u: goto label_15e074;
        case 0x15e078u: goto label_15e078;
        case 0x15e07cu: goto label_15e07c;
        case 0x15e080u: goto label_15e080;
        case 0x15e084u: goto label_15e084;
        case 0x15e088u: goto label_15e088;
        case 0x15e08cu: goto label_15e08c;
        case 0x15e090u: goto label_15e090;
        case 0x15e094u: goto label_15e094;
        case 0x15e098u: goto label_15e098;
        case 0x15e09cu: goto label_15e09c;
        case 0x15e0a0u: goto label_15e0a0;
        case 0x15e0a4u: goto label_15e0a4;
        case 0x15e0a8u: goto label_15e0a8;
        case 0x15e0acu: goto label_15e0ac;
        case 0x15e0b0u: goto label_15e0b0;
        case 0x15e0b4u: goto label_15e0b4;
        case 0x15e0b8u: goto label_15e0b8;
        case 0x15e0bcu: goto label_15e0bc;
        case 0x15e0c0u: goto label_15e0c0;
        case 0x15e0c4u: goto label_15e0c4;
        case 0x15e0c8u: goto label_15e0c8;
        case 0x15e0ccu: goto label_15e0cc;
        case 0x15e0d0u: goto label_15e0d0;
        case 0x15e0d4u: goto label_15e0d4;
        case 0x15e0d8u: goto label_15e0d8;
        case 0x15e0dcu: goto label_15e0dc;
        case 0x15e0e0u: goto label_15e0e0;
        case 0x15e0e4u: goto label_15e0e4;
        case 0x15e0e8u: goto label_15e0e8;
        case 0x15e0ecu: goto label_15e0ec;
        case 0x15e0f0u: goto label_15e0f0;
        case 0x15e0f4u: goto label_15e0f4;
        case 0x15e0f8u: goto label_15e0f8;
        case 0x15e0fcu: goto label_15e0fc;
        case 0x15e100u: goto label_15e100;
        case 0x15e104u: goto label_15e104;
        case 0x15e108u: goto label_15e108;
        case 0x15e10cu: goto label_15e10c;
        case 0x15e110u: goto label_15e110;
        case 0x15e114u: goto label_15e114;
        case 0x15e118u: goto label_15e118;
        case 0x15e11cu: goto label_15e11c;
        case 0x15e120u: goto label_15e120;
        case 0x15e124u: goto label_15e124;
        case 0x15e128u: goto label_15e128;
        case 0x15e12cu: goto label_15e12c;
        case 0x15e130u: goto label_15e130;
        case 0x15e134u: goto label_15e134;
        case 0x15e138u: goto label_15e138;
        case 0x15e13cu: goto label_15e13c;
        case 0x15e140u: goto label_15e140;
        case 0x15e144u: goto label_15e144;
        case 0x15e148u: goto label_15e148;
        case 0x15e14cu: goto label_15e14c;
        case 0x15e150u: goto label_15e150;
        case 0x15e154u: goto label_15e154;
        case 0x15e158u: goto label_15e158;
        case 0x15e15cu: goto label_15e15c;
        case 0x15e160u: goto label_15e160;
        case 0x15e164u: goto label_15e164;
        case 0x15e168u: goto label_15e168;
        case 0x15e16cu: goto label_15e16c;
        case 0x15e170u: goto label_15e170;
        case 0x15e174u: goto label_15e174;
        case 0x15e178u: goto label_15e178;
        case 0x15e17cu: goto label_15e17c;
        case 0x15e180u: goto label_15e180;
        case 0x15e184u: goto label_15e184;
        case 0x15e188u: goto label_15e188;
        case 0x15e18cu: goto label_15e18c;
        case 0x15e190u: goto label_15e190;
        case 0x15e194u: goto label_15e194;
        case 0x15e198u: goto label_15e198;
        case 0x15e19cu: goto label_15e19c;
        case 0x15e1a0u: goto label_15e1a0;
        case 0x15e1a4u: goto label_15e1a4;
        case 0x15e1a8u: goto label_15e1a8;
        case 0x15e1acu: goto label_15e1ac;
        case 0x15e1b0u: goto label_15e1b0;
        case 0x15e1b4u: goto label_15e1b4;
        case 0x15e1b8u: goto label_15e1b8;
        case 0x15e1bcu: goto label_15e1bc;
        case 0x15e1c0u: goto label_15e1c0;
        case 0x15e1c4u: goto label_15e1c4;
        case 0x15e1c8u: goto label_15e1c8;
        case 0x15e1ccu: goto label_15e1cc;
        case 0x15e1d0u: goto label_15e1d0;
        case 0x15e1d4u: goto label_15e1d4;
        case 0x15e1d8u: goto label_15e1d8;
        case 0x15e1dcu: goto label_15e1dc;
        case 0x15e1e0u: goto label_15e1e0;
        case 0x15e1e4u: goto label_15e1e4;
        case 0x15e1e8u: goto label_15e1e8;
        case 0x15e1ecu: goto label_15e1ec;
        case 0x15e1f0u: goto label_15e1f0;
        case 0x15e1f4u: goto label_15e1f4;
        case 0x15e1f8u: goto label_15e1f8;
        case 0x15e1fcu: goto label_15e1fc;
        case 0x15e200u: goto label_15e200;
        case 0x15e204u: goto label_15e204;
        case 0x15e208u: goto label_15e208;
        case 0x15e20cu: goto label_15e20c;
        case 0x15e210u: goto label_15e210;
        case 0x15e214u: goto label_15e214;
        case 0x15e218u: goto label_15e218;
        case 0x15e21cu: goto label_15e21c;
        case 0x15e220u: goto label_15e220;
        case 0x15e224u: goto label_15e224;
        case 0x15e228u: goto label_15e228;
        case 0x15e22cu: goto label_15e22c;
        case 0x15e230u: goto label_15e230;
        case 0x15e234u: goto label_15e234;
        case 0x15e238u: goto label_15e238;
        case 0x15e23cu: goto label_15e23c;
        case 0x15e240u: goto label_15e240;
        case 0x15e244u: goto label_15e244;
        case 0x15e248u: goto label_15e248;
        case 0x15e24cu: goto label_15e24c;
        case 0x15e250u: goto label_15e250;
        case 0x15e254u: goto label_15e254;
        case 0x15e258u: goto label_15e258;
        case 0x15e25cu: goto label_15e25c;
        case 0x15e260u: goto label_15e260;
        case 0x15e264u: goto label_15e264;
        case 0x15e268u: goto label_15e268;
        case 0x15e26cu: goto label_15e26c;
        case 0x15e270u: goto label_15e270;
        case 0x15e274u: goto label_15e274;
        case 0x15e278u: goto label_15e278;
        case 0x15e27cu: goto label_15e27c;
        case 0x15e280u: goto label_15e280;
        case 0x15e284u: goto label_15e284;
        case 0x15e288u: goto label_15e288;
        case 0x15e28cu: goto label_15e28c;
        case 0x15e290u: goto label_15e290;
        case 0x15e294u: goto label_15e294;
        case 0x15e298u: goto label_15e298;
        case 0x15e29cu: goto label_15e29c;
        case 0x15e2a0u: goto label_15e2a0;
        case 0x15e2a4u: goto label_15e2a4;
        case 0x15e2a8u: goto label_15e2a8;
        case 0x15e2acu: goto label_15e2ac;
        case 0x15e2b0u: goto label_15e2b0;
        case 0x15e2b4u: goto label_15e2b4;
        case 0x15e2b8u: goto label_15e2b8;
        case 0x15e2bcu: goto label_15e2bc;
        case 0x15e2c0u: goto label_15e2c0;
        case 0x15e2c4u: goto label_15e2c4;
        case 0x15e2c8u: goto label_15e2c8;
        case 0x15e2ccu: goto label_15e2cc;
        case 0x15e2d0u: goto label_15e2d0;
        case 0x15e2d4u: goto label_15e2d4;
        case 0x15e2d8u: goto label_15e2d8;
        case 0x15e2dcu: goto label_15e2dc;
        case 0x15e2e0u: goto label_15e2e0;
        case 0x15e2e4u: goto label_15e2e4;
        case 0x15e2e8u: goto label_15e2e8;
        case 0x15e2ecu: goto label_15e2ec;
        case 0x15e2f0u: goto label_15e2f0;
        case 0x15e2f4u: goto label_15e2f4;
        case 0x15e2f8u: goto label_15e2f8;
        case 0x15e2fcu: goto label_15e2fc;
        case 0x15e300u: goto label_15e300;
        case 0x15e304u: goto label_15e304;
        case 0x15e308u: goto label_15e308;
        case 0x15e30cu: goto label_15e30c;
        case 0x15e310u: goto label_15e310;
        case 0x15e314u: goto label_15e314;
        case 0x15e318u: goto label_15e318;
        case 0x15e31cu: goto label_15e31c;
        case 0x15e320u: goto label_15e320;
        case 0x15e324u: goto label_15e324;
        case 0x15e328u: goto label_15e328;
        case 0x15e32cu: goto label_15e32c;
        case 0x15e330u: goto label_15e330;
        case 0x15e334u: goto label_15e334;
        case 0x15e338u: goto label_15e338;
        case 0x15e33cu: goto label_15e33c;
        case 0x15e340u: goto label_15e340;
        case 0x15e344u: goto label_15e344;
        case 0x15e348u: goto label_15e348;
        case 0x15e34cu: goto label_15e34c;
        case 0x15e350u: goto label_15e350;
        case 0x15e354u: goto label_15e354;
        case 0x15e358u: goto label_15e358;
        case 0x15e35cu: goto label_15e35c;
        case 0x15e360u: goto label_15e360;
        case 0x15e364u: goto label_15e364;
        case 0x15e368u: goto label_15e368;
        case 0x15e36cu: goto label_15e36c;
        case 0x15e370u: goto label_15e370;
        case 0x15e374u: goto label_15e374;
        case 0x15e378u: goto label_15e378;
        case 0x15e37cu: goto label_15e37c;
        case 0x15e380u: goto label_15e380;
        case 0x15e384u: goto label_15e384;
        case 0x15e388u: goto label_15e388;
        case 0x15e38cu: goto label_15e38c;
        case 0x15e390u: goto label_15e390;
        case 0x15e394u: goto label_15e394;
        case 0x15e398u: goto label_15e398;
        case 0x15e39cu: goto label_15e39c;
        case 0x15e3a0u: goto label_15e3a0;
        case 0x15e3a4u: goto label_15e3a4;
        case 0x15e3a8u: goto label_15e3a8;
        case 0x15e3acu: goto label_15e3ac;
        case 0x15e3b0u: goto label_15e3b0;
        case 0x15e3b4u: goto label_15e3b4;
        case 0x15e3b8u: goto label_15e3b8;
        case 0x15e3bcu: goto label_15e3bc;
        case 0x15e3c0u: goto label_15e3c0;
        case 0x15e3c4u: goto label_15e3c4;
        case 0x15e3c8u: goto label_15e3c8;
        case 0x15e3ccu: goto label_15e3cc;
        case 0x15e3d0u: goto label_15e3d0;
        case 0x15e3d4u: goto label_15e3d4;
        case 0x15e3d8u: goto label_15e3d8;
        case 0x15e3dcu: goto label_15e3dc;
        case 0x15e3e0u: goto label_15e3e0;
        case 0x15e3e4u: goto label_15e3e4;
        case 0x15e3e8u: goto label_15e3e8;
        case 0x15e3ecu: goto label_15e3ec;
        case 0x15e3f0u: goto label_15e3f0;
        case 0x15e3f4u: goto label_15e3f4;
        case 0x15e3f8u: goto label_15e3f8;
        case 0x15e3fcu: goto label_15e3fc;
        case 0x15e400u: goto label_15e400;
        case 0x15e404u: goto label_15e404;
        case 0x15e408u: goto label_15e408;
        case 0x15e40cu: goto label_15e40c;
        case 0x15e410u: goto label_15e410;
        case 0x15e414u: goto label_15e414;
        case 0x15e418u: goto label_15e418;
        case 0x15e41cu: goto label_15e41c;
        case 0x15e420u: goto label_15e420;
        case 0x15e424u: goto label_15e424;
        case 0x15e428u: goto label_15e428;
        case 0x15e42cu: goto label_15e42c;
        case 0x15e430u: goto label_15e430;
        case 0x15e434u: goto label_15e434;
        case 0x15e438u: goto label_15e438;
        case 0x15e43cu: goto label_15e43c;
        case 0x15e440u: goto label_15e440;
        case 0x15e444u: goto label_15e444;
        case 0x15e448u: goto label_15e448;
        case 0x15e44cu: goto label_15e44c;
        case 0x15e450u: goto label_15e450;
        case 0x15e454u: goto label_15e454;
        case 0x15e458u: goto label_15e458;
        case 0x15e45cu: goto label_15e45c;
        case 0x15e460u: goto label_15e460;
        case 0x15e464u: goto label_15e464;
        case 0x15e468u: goto label_15e468;
        case 0x15e46cu: goto label_15e46c;
        case 0x15e470u: goto label_15e470;
        case 0x15e474u: goto label_15e474;
        case 0x15e478u: goto label_15e478;
        case 0x15e47cu: goto label_15e47c;
        case 0x15e480u: goto label_15e480;
        case 0x15e484u: goto label_15e484;
        case 0x15e488u: goto label_15e488;
        case 0x15e48cu: goto label_15e48c;
        case 0x15e490u: goto label_15e490;
        case 0x15e494u: goto label_15e494;
        case 0x15e498u: goto label_15e498;
        case 0x15e49cu: goto label_15e49c;
        case 0x15e4a0u: goto label_15e4a0;
        case 0x15e4a4u: goto label_15e4a4;
        case 0x15e4a8u: goto label_15e4a8;
        case 0x15e4acu: goto label_15e4ac;
        case 0x15e4b0u: goto label_15e4b0;
        case 0x15e4b4u: goto label_15e4b4;
        case 0x15e4b8u: goto label_15e4b8;
        case 0x15e4bcu: goto label_15e4bc;
        case 0x15e4c0u: goto label_15e4c0;
        case 0x15e4c4u: goto label_15e4c4;
        case 0x15e4c8u: goto label_15e4c8;
        case 0x15e4ccu: goto label_15e4cc;
        case 0x15e4d0u: goto label_15e4d0;
        case 0x15e4d4u: goto label_15e4d4;
        case 0x15e4d8u: goto label_15e4d8;
        case 0x15e4dcu: goto label_15e4dc;
        case 0x15e4e0u: goto label_15e4e0;
        case 0x15e4e4u: goto label_15e4e4;
        case 0x15e4e8u: goto label_15e4e8;
        case 0x15e4ecu: goto label_15e4ec;
        case 0x15e4f0u: goto label_15e4f0;
        case 0x15e4f4u: goto label_15e4f4;
        case 0x15e4f8u: goto label_15e4f8;
        case 0x15e4fcu: goto label_15e4fc;
        case 0x15e500u: goto label_15e500;
        case 0x15e504u: goto label_15e504;
        case 0x15e508u: goto label_15e508;
        case 0x15e50cu: goto label_15e50c;
        case 0x15e510u: goto label_15e510;
        case 0x15e514u: goto label_15e514;
        case 0x15e518u: goto label_15e518;
        case 0x15e51cu: goto label_15e51c;
        case 0x15e520u: goto label_15e520;
        case 0x15e524u: goto label_15e524;
        case 0x15e528u: goto label_15e528;
        case 0x15e52cu: goto label_15e52c;
        case 0x15e530u: goto label_15e530;
        case 0x15e534u: goto label_15e534;
        case 0x15e538u: goto label_15e538;
        case 0x15e53cu: goto label_15e53c;
        case 0x15e540u: goto label_15e540;
        case 0x15e544u: goto label_15e544;
        case 0x15e548u: goto label_15e548;
        case 0x15e54cu: goto label_15e54c;
        case 0x15e550u: goto label_15e550;
        case 0x15e554u: goto label_15e554;
        case 0x15e558u: goto label_15e558;
        case 0x15e55cu: goto label_15e55c;
        case 0x15e560u: goto label_15e560;
        case 0x15e564u: goto label_15e564;
        case 0x15e568u: goto label_15e568;
        case 0x15e56cu: goto label_15e56c;
        case 0x15e570u: goto label_15e570;
        case 0x15e574u: goto label_15e574;
        case 0x15e578u: goto label_15e578;
        case 0x15e57cu: goto label_15e57c;
        case 0x15e580u: goto label_15e580;
        case 0x15e584u: goto label_15e584;
        case 0x15e588u: goto label_15e588;
        case 0x15e58cu: goto label_15e58c;
        case 0x15e590u: goto label_15e590;
        case 0x15e594u: goto label_15e594;
        case 0x15e598u: goto label_15e598;
        case 0x15e59cu: goto label_15e59c;
        default: return;
    }

label_15ddd0:
    // 0x15ddd0: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x15ddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
label_15ddd4:
    // 0x15ddd4: 0xc066d5c  jal         func_19B570
label_15ddd8:
    if (ctx->pc == 0x15DDD8u) {
        ctx->pc = 0x15DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDD4u;
        // 0x15ddd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DDDCu;
        goto label_15dddc;
    }
    ctx->pc = 0x15DDD4u;
    SET_GPR_U32(ctx, 31, 0x15DDDCu);
    ctx->pc = 0x15DDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDD4u;
    // 0x15ddd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15DDDCu;
label_15dddc:
    // 0x15dddc: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x15dddcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_15dde0:
    // 0x15dde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dde4:
    // 0x15dde4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15dde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15dde8:
    // 0x15dde8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15dde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ddec:
    // 0x15ddec: 0xffa20080  sd          $v0, 0x80($sp)
    ctx->pc = 0x15ddecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
label_15ddf0:
    // 0x15ddf0: 0xc066d5c  jal         func_19B570
label_15ddf4:
    if (ctx->pc == 0x15DDF4u) {
        ctx->pc = 0x15DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDF0u;
        // 0x15ddf4: 0xfec00000  sd          $zero, 0x0($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DDF8u;
        goto label_15ddf8;
    }
    ctx->pc = 0x15DDF0u;
    SET_GPR_U32(ctx, 31, 0x15DDF8u);
    ctx->pc = 0x15DDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDF0u;
    // 0x15ddf4: 0xfec00000  sd          $zero, 0x0($s6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15DDF8u;
label_15ddf8:
    // 0x15ddf8: 0xc066cfe  jal         func_19B3F8
label_15ddfc:
    if (ctx->pc == 0x15DDFCu) {
        ctx->pc = 0x15DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDF8u;
        // 0x15ddfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE00u;
        goto label_15de00;
    }
    ctx->pc = 0x15DDF8u;
    SET_GPR_U32(ctx, 31, 0x15DE00u);
    ctx->pc = 0x15DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDF8u;
    // 0x15ddfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3F8u;
    { ctx->pc = 0x19b3f8; return; }
    ctx->pc = 0x15DE00u;
label_15de00:
    // 0x15de00: 0xc066c46  jal         func_19B118
label_15de04:
    if (ctx->pc == 0x15DE04u) {
        ctx->pc = 0x15DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE00u;
        // 0x15de04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE08u;
        goto label_15de08;
    }
    ctx->pc = 0x15DE00u;
    SET_GPR_U32(ctx, 31, 0x15DE08u);
    ctx->pc = 0x15DE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE00u;
    // 0x15de04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x15DE08u;
label_15de08:
    // 0x15de08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15de08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15de0c:
    // 0x15de0c: 0xc066c5c  jal         func_19B170
label_15de10:
    if (ctx->pc == 0x15DE10u) {
        ctx->pc = 0x15DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE0Cu;
        // 0x15de10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE14u;
        goto label_15de14;
    }
    ctx->pc = 0x15DE0Cu;
    SET_GPR_U32(ctx, 31, 0x15DE14u);
    ctx->pc = 0x15DE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE0Cu;
    // 0x15de10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x15DE14u;
label_15de14:
    // 0x15de14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15de14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15de18:
    // 0x15de18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15de18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15de1c:
    // 0x15de1c: 0xc066d10  jal         func_19B440
label_15de20:
    if (ctx->pc == 0x15DE20u) {
        ctx->pc = 0x15DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE1Cu;
        // 0x15de20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE24u;
        goto label_15de24;
    }
    ctx->pc = 0x15DE1Cu;
    SET_GPR_U32(ctx, 31, 0x15DE24u);
    ctx->pc = 0x15DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE1Cu;
    // 0x15de20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15DE24u;
label_15de24:
    // 0x15de24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15de24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15de28:
    // 0x15de28: 0xc066d30  jal         func_19B4C0
label_15de2c:
    if (ctx->pc == 0x15DE2Cu) {
        ctx->pc = 0x15DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE28u;
        // 0x15de2c: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE30u;
        goto label_15de30;
    }
    ctx->pc = 0x15DE28u;
    SET_GPR_U32(ctx, 31, 0x15DE30u);
    ctx->pc = 0x15DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE28u;
    // 0x15de2c: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x15DE30u;
label_15de30:
    // 0x15de30: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x15de30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15de34:
    // 0x15de34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15de34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15de38:
    // 0x15de38: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x15de38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_15de3c:
    // 0x15de3c: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x15de3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_15de40:
    // 0x15de40: 0xc066cae  jal         func_19B2B8
label_15de44:
    if (ctx->pc == 0x15DE44u) {
        ctx->pc = 0x15DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE40u;
        // 0x15de44: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE48u;
        goto label_15de48;
    }
    ctx->pc = 0x15DE40u;
    SET_GPR_U32(ctx, 31, 0x15DE48u);
    ctx->pc = 0x15DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE40u;
    // 0x15de44: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B2B8u;
    { ctx->pc = 0x19b2b8; return; }
    ctx->pc = 0x15DE48u;
label_15de48:
    // 0x15de48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15de48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15de4c:
    // 0x15de4c: 0xc066d46  jal         func_19B518
label_15de50:
    if (ctx->pc == 0x15DE50u) {
        ctx->pc = 0x15DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE4Cu;
        // 0x15de50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE54u;
        goto label_15de54;
    }
    ctx->pc = 0x15DE4Cu;
    SET_GPR_U32(ctx, 31, 0x15DE54u);
    ctx->pc = 0x15DE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE4Cu;
    // 0x15de50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15DE54u;
label_15de54:
    // 0x15de54: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x15de54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_15de58:
    // 0x15de58: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x15de58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_15de5c:
    // 0x15de5c: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x15de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
label_15de60:
    // 0x15de60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15de60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15de64:
    // 0x15de64: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15de64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_15de68:
    // 0x15de68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15de68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15de6c:
    // 0x15de6c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x15de6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_15de70:
    // 0x15de70: 0xc066d46  jal         func_19B518
label_15de74:
    if (ctx->pc == 0x15DE74u) {
        ctx->pc = 0x15DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE70u;
        // 0x15de74: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE78u;
        goto label_15de78;
    }
    ctx->pc = 0x15DE70u;
    SET_GPR_U32(ctx, 31, 0x15DE78u);
    ctx->pc = 0x15DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE70u;
    // 0x15de74: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15DE78u;
label_15de78:
    // 0x15de78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15de78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15de7c:
    // 0x15de7c: 0xc066d46  jal         func_19B518
label_15de80:
    if (ctx->pc == 0x15DE80u) {
        ctx->pc = 0x15DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE7Cu;
        // 0x15de80: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE84u;
        goto label_15de84;
    }
    ctx->pc = 0x15DE7Cu;
    SET_GPR_U32(ctx, 31, 0x15DE84u);
    ctx->pc = 0x15DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE7Cu;
    // 0x15de80: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15DE84u;
label_15de84:
    // 0x15de84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15de84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15de88:
    // 0x15de88: 0xc066d46  jal         func_19B518
label_15de8c:
    if (ctx->pc == 0x15DE8Cu) {
        ctx->pc = 0x15DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE88u;
        // 0x15de8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE90u;
        goto label_15de90;
    }
    ctx->pc = 0x15DE88u;
    SET_GPR_U32(ctx, 31, 0x15DE90u);
    ctx->pc = 0x15DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE88u;
    // 0x15de8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15DE90u;
label_15de90:
    // 0x15de90: 0xc066cd2  jal         func_19B348
label_15de94:
    if (ctx->pc == 0x15DE94u) {
        ctx->pc = 0x15DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE90u;
        // 0x15de94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DE98u;
        goto label_15de98;
    }
    ctx->pc = 0x15DE90u;
    SET_GPR_U32(ctx, 31, 0x15DE98u);
    ctx->pc = 0x15DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE90u;
    // 0x15de94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B348u;
    { ctx->pc = 0x19b348; return; }
    ctx->pc = 0x15DE98u;
label_15de98:
    // 0x15de98: 0xc066c46  jal         func_19B118
label_15de9c:
    if (ctx->pc == 0x15DE9Cu) {
        ctx->pc = 0x15DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE98u;
        // 0x15de9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEA0u;
        goto label_15dea0;
    }
    ctx->pc = 0x15DE98u;
    SET_GPR_U32(ctx, 31, 0x15DEA0u);
    ctx->pc = 0x15DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE98u;
    // 0x15de9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x15DEA0u;
label_15dea0:
    // 0x15dea0: 0x8e9000c0  lw          $s0, 0xC0($s4)
    ctx->pc = 0x15dea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_15dea4:
    // 0x15dea4: 0x1000000e  b           . + 4 + (0xE << 2)
label_15dea8:
    if (ctx->pc == 0x15DEA8u) {
        ctx->pc = 0x15DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEA4u;
        // 0x15dea8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DEACu;
        goto label_15deac;
    }
    ctx->pc = 0x15DEA4u;
    {
        const bool branch_taken_0x15dea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEA4u;
        // 0x15dea8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dea4) {
            ctx->pc = 0x15DEE0u;
            goto label_15dee0;
        }
    }
    ctx->pc = 0x15DEACu;
label_15deac:
    // 0x15deac: 0x0  nop
    ctx->pc = 0x15deacu;
    // NOP
label_15deb0:
    // 0x15deb0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15deb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15deb4:
    // 0x15deb4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15deb8:
    if (ctx->pc == 0x15DEB8u) {
        ctx->pc = 0x15DEBCu;
        goto label_15debc;
    }
    ctx->pc = 0x15DEB4u;
    {
        const bool branch_taken_0x15deb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15deb4) {
            ctx->pc = 0x15DED4u;
            goto label_15ded4;
        }
    }
    ctx->pc = 0x15DEBCu;
label_15debc:
    // 0x15debc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x15debcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15dec0:
    // 0x15dec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dec4:
    // 0x15dec4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15dec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dec8:
    // 0x15dec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15dec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15decc:
    // 0x15decc: 0xc066c72  jal         func_19B1C8
label_15ded0:
    if (ctx->pc == 0x15DED0u) {
        ctx->pc = 0x15DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DECCu;
        // 0x15ded0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DED4u;
        goto label_15ded4;
    }
    ctx->pc = 0x15DECCu;
    SET_GPR_U32(ctx, 31, 0x15DED4u);
    ctx->pc = 0x15DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DECCu;
    // 0x15ded0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15DED4u;
label_15ded4:
    // 0x15ded4: 0x0  nop
    ctx->pc = 0x15ded4u;
    // NOP
label_15ded8:
    // 0x15ded8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15ded8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15dedc:
    // 0x15dedc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15dedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15dee0:
    // 0x15dee0: 0x828300be  lb          $v1, 0xBE($s4)
    ctx->pc = 0x15dee0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 190)));
label_15dee4:
    // 0x15dee4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x15dee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15dee8:
    // 0x15dee8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_15deec:
    if (ctx->pc == 0x15DEECu) {
        ctx->pc = 0x15DEF0u;
        goto label_15def0;
    }
    ctx->pc = 0x15DEE8u;
    {
        const bool branch_taken_0x15dee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dee8) {
            ctx->pc = 0x15DEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15deac;
        }
    }
    ctx->pc = 0x15DEF0u;
label_15def0:
    // 0x15def0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15def0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_15def4:
    // 0x15def4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15def4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15def8:
    // 0x15def8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15def8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15defc:
    // 0x15defc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15defcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15df00:
    // 0x15df00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15df00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15df04:
    // 0x15df04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15df04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15df08:
    // 0x15df08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15df08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15df0c:
    // 0x15df0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15df0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15df10:
    // 0x15df10: 0x3e00008  jr          $ra
label_15df14:
    if (ctx->pc == 0x15DF14u) {
        ctx->pc = 0x15DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF10u;
        // 0x15df14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF18u;
        goto label_15df18;
    }
    ctx->pc = 0x15DF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF10u;
        // 0x15df14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DF18u;
label_15df18:
    // 0x15df18: 0x0  nop
    ctx->pc = 0x15df18u;
    // NOP
label_15df1c:
    // 0x15df1c: 0x0  nop
    ctx->pc = 0x15df1cu;
    // NOP
label_15df20:
    // 0x15df20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_15df24:
    // 0x15df24: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15df24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_15df28:
    // 0x15df28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15df28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_15df2c:
    // 0x15df2c: 0x34423ffc  ori         $v0, $v0, 0x3FFC
    ctx->pc = 0x15df2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_15df30:
    // 0x15df30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15df30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15df34:
    // 0x15df34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15df34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15df38:
    // 0x15df38: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x15df38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15df3c:
    // 0x15df3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15df3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15df40:
    // 0x15df40: 0x62c80  sll         $a1, $a2, 18
    ctx->pc = 0x15df40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 18));
label_15df44:
    // 0x15df44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15df44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15df48:
    // 0x15df48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15df4c:
    // 0x15df4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15df4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15df50:
    // 0x15df50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15df54:
    // 0x15df54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15df54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15df58:
    // 0x15df58: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x15df58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15df5c:
    // 0x15df5c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x15df5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15df60:
    // 0x15df60: 0x26270018  addiu       $a3, $s1, 0x18
    ctx->pc = 0x15df60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_15df64:
    // 0x15df64: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x15df64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
label_15df68:
    // 0x15df68: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x15df68u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_15df6c:
    // 0x15df6c: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x15df6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_15df70:
    // 0x15df70: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x15df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_15df74:
    // 0x15df74: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x15df74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_15df78:
    // 0x15df78: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x15df78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_15df7c:
    // 0x15df7c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x15df7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15df80:
    // 0x15df80: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x15df80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_15df84:
    // 0x15df84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15df88:
    // 0x15df88: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x15df88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_15df8c:
    // 0x15df8c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x15df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_15df90:
    // 0x15df90: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x15df90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_15df94:
    // 0x15df94: 0xfe420020  sd          $v0, 0x20($s2)
    ctx->pc = 0x15df94u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 2));
label_15df98:
    // 0x15df98: 0xae4600e8  sw          $a2, 0xE8($s2)
    ctx->pc = 0x15df98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 6));
label_15df9c:
    // 0x15df9c: 0x8482002c  lh          $v0, 0x2C($a0)
    ctx->pc = 0x15df9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
label_15dfa0:
    // 0x15dfa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15dfa4:
    // 0x15dfa4: 0xa482002c  sh          $v0, 0x2C($a0)
    ctx->pc = 0x15dfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
label_15dfa8:
    // 0x15dfa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15dfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_15dfac:
    // 0x15dfac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15dfacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15dfb0:
    // 0x15dfb0: 0x28420e10  slti        $v0, $v0, 0xE10
    ctx->pc = 0x15dfb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3600) ? 1 : 0);
label_15dfb4:
    // 0x15dfb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_15dfb8:
    if (ctx->pc == 0x15DFB8u) {
        ctx->pc = 0x15DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFB4u;
        // 0x15dfb8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DFBCu;
        goto label_15dfbc;
    }
    ctx->pc = 0x15DFB4u;
    {
        const bool branch_taken_0x15dfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFB4u;
        // 0x15dfb8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfb4) {
            ctx->pc = 0x15DFC4u;
            goto label_15dfc4;
        }
    }
    ctx->pc = 0x15DFBCu;
label_15dfbc:
    // 0x15dfbc: 0x24020708  addiu       $v0, $zero, 0x708
    ctx->pc = 0x15dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
label_15dfc0:
    // 0x15dfc0: 0xa622002c  sh          $v0, 0x2C($s1)
    ctx->pc = 0x15dfc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
label_15dfc4:
    // 0x15dfc4: 0x8224002a  lb          $a0, 0x2A($s1)
    ctx->pc = 0x15dfc4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_15dfc8:
    // 0x15dfc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15dfcc:
    // 0x15dfcc: 0x1482001b  bne         $a0, $v0, . + 4 + (0x1B << 2)
label_15dfd0:
    if (ctx->pc == 0x15DFD0u) {
        ctx->pc = 0x15DFD4u;
        goto label_15dfd4;
    }
    ctx->pc = 0x15DFCCu;
    {
        const bool branch_taken_0x15dfcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x15dfcc) {
            ctx->pc = 0x15E03Cu;
            goto label_15e03c;
        }
    }
    ctx->pc = 0x15DFD4u;
label_15dfd4:
    // 0x15dfd4: 0x82260029  lb          $a2, 0x29($s1)
    ctx->pc = 0x15dfd4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
label_15dfd8:
    // 0x15dfd8: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x15dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_15dfdc:
    // 0x15dfdc: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x15dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15dfe0:
    // 0x15dfe0: 0x246303c4  addiu       $v1, $v1, 0x3C4
    ctx->pc = 0x15dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 964));
label_15dfe4:
    // 0x15dfe4: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x15dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_15dfe8:
    // 0x15dfe8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x15dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_15dfec:
    // 0x15dfec: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15dfecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15dff0:
    // 0x15dff0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_15dff4:
    // 0x15dff4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15dff8:
    // 0x15dff8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15dffc:
    // 0x15dffc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15e000:
    // 0x15e000: 0x246301b0  addiu       $v1, $v1, 0x1B0
    ctx->pc = 0x15e000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
label_15e004:
    // 0x15e004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15e008:
    // 0x15e008: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_15e00c:
    if (ctx->pc == 0x15E00Cu) {
        ctx->pc = 0x15E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E008u;
        // 0x15e00c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E010u;
        goto label_15e010;
    }
    ctx->pc = 0x15E008u;
    {
        const bool branch_taken_0x15e008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E008u;
        // 0x15e00c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e008) {
            ctx->pc = 0x15E028u;
            goto label_15e028;
        }
    }
    ctx->pc = 0x15E010u;
label_15e010:
    // 0x15e010: 0xc4602138  lwc1        $f0, 0x2138($v1)
    ctx->pc = 0x15e010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15e014:
    // 0x15e014: 0xc6212138  lwc1        $f1, 0x2138($s1)
    ctx->pc = 0x15e014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15e018:
    // 0x15e018: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15e018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15e01c:
    // 0x15e01c: 0x0  nop
    ctx->pc = 0x15e01cu;
    // NOP
label_15e020:
    // 0x15e020: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_15e024:
    if (ctx->pc == 0x15E024u) {
        ctx->pc = 0x15E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E020u;
        // 0x15e024: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E028u;
        goto label_15e028;
    }
    ctx->pc = 0x15E020u;
    {
        const bool branch_taken_0x15e020 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E020u;
        // 0x15e024: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e020) {
            ctx->pc = 0x15E034u;
            goto label_15e034;
        }
    }
    ctx->pc = 0x15E028u;
label_15e028:
    // 0x15e028: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15e02c:
    // 0x15e02c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_15e030:
    if (ctx->pc == 0x15E030u) {
        ctx->pc = 0x15E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E02Cu;
        // 0x15e030: 0xae4200ec  sw          $v0, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E034u;
        goto label_15e034;
    }
    ctx->pc = 0x15E02Cu;
    {
        const bool branch_taken_0x15e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E02Cu;
        // 0x15e030: 0xae4200ec  sw          $v0, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e02c) {
            ctx->pc = 0x15E0ECu;
            goto label_15e0ec;
        }
    }
    ctx->pc = 0x15E034u;
label_15e034:
    // 0x15e034: 0x1000002d  b           . + 4 + (0x2D << 2)
label_15e038:
    if (ctx->pc == 0x15E038u) {
        ctx->pc = 0x15E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E034u;
        // 0x15e038: 0xae4200ec  sw          $v0, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E03Cu;
        goto label_15e03c;
    }
    ctx->pc = 0x15E034u;
    {
        const bool branch_taken_0x15e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E034u;
        // 0x15e038: 0xae4200ec  sw          $v0, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e034) {
            ctx->pc = 0x15E0ECu;
            goto label_15e0ec;
        }
    }
    ctx->pc = 0x15E03Cu;
label_15e03c:
    // 0x15e03c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15e040:
    // 0x15e040: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x15e040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_15e044:
    // 0x15e044: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15e048:
    if (ctx->pc == 0x15E048u) {
        ctx->pc = 0x15E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E044u;
        // 0x15e048: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E04Cu;
        goto label_15e04c;
    }
    ctx->pc = 0x15E044u;
    {
        const bool branch_taken_0x15e044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E044u;
        // 0x15e048: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e044) {
            ctx->pc = 0x15E054u;
            goto label_15e054;
        }
    }
    ctx->pc = 0x15E04Cu;
label_15e04c:
    // 0x15e04c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_15e050:
    if (ctx->pc == 0x15E050u) {
        ctx->pc = 0x15E054u;
        goto label_15e054;
    }
    ctx->pc = 0x15E04Cu;
    {
        const bool branch_taken_0x15e04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e04c) {
            ctx->pc = 0x15E0ECu;
            goto label_15e0ec;
        }
    }
    ctx->pc = 0x15E054u;
label_15e054:
    // 0x15e054: 0x14800025  bnez        $a0, . + 4 + (0x25 << 2)
label_15e058:
    if (ctx->pc == 0x15E058u) {
        ctx->pc = 0x15E05Cu;
        goto label_15e05c;
    }
    ctx->pc = 0x15E054u;
    {
        const bool branch_taken_0x15e054 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e054) {
            ctx->pc = 0x15E0ECu;
            goto label_15e0ec;
        }
    }
    ctx->pc = 0x15E05Cu;
label_15e05c:
    // 0x15e05c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x15e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_15e060:
    // 0x15e060: 0x90620232  lbu         $v0, 0x232($v1)
    ctx->pc = 0x15e060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 562)));
label_15e064:
    // 0x15e064: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_15e068:
    if (ctx->pc == 0x15E068u) {
        ctx->pc = 0x15E06Cu;
        goto label_15e06c;
    }
    ctx->pc = 0x15E064u;
    {
        const bool branch_taken_0x15e064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e064) {
            ctx->pc = 0x15E09Cu;
            goto label_15e09c;
        }
    }
    ctx->pc = 0x15E06Cu;
label_15e06c:
    // 0x15e06c: 0x9062023a  lbu         $v0, 0x23A($v1)
    ctx->pc = 0x15e06cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 570)));
label_15e070:
    // 0x15e070: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_15e074:
    if (ctx->pc == 0x15E074u) {
        ctx->pc = 0x15E078u;
        goto label_15e078;
    }
    ctx->pc = 0x15E070u;
    {
        const bool branch_taken_0x15e070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e070) {
            ctx->pc = 0x15E09Cu;
            goto label_15e09c;
        }
    }
    ctx->pc = 0x15E078u;
label_15e078:
    // 0x15e078: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x15e078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_15e07c:
    // 0x15e07c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x15e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_15e080:
    // 0x15e080: 0x8463003c  lh          $v1, 0x3C($v1)
    ctx->pc = 0x15e080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
label_15e084:
    // 0x15e084: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_15e088:
    if (ctx->pc == 0x15E088u) {
        ctx->pc = 0x15E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E084u;
        // 0x15e088: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E08Cu;
        goto label_15e08c;
    }
    ctx->pc = 0x15E084u;
    {
        const bool branch_taken_0x15e084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E084u;
        // 0x15e088: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e084) {
            ctx->pc = 0x15E094u;
            goto label_15e094;
        }
    }
    ctx->pc = 0x15E08Cu;
label_15e08c:
    // 0x15e08c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15e090:
    if (ctx->pc == 0x15E090u) {
        ctx->pc = 0x15E094u;
        goto label_15e094;
    }
    ctx->pc = 0x15E08Cu;
    {
        const bool branch_taken_0x15e08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15e08c) {
            ctx->pc = 0x15E09Cu;
            goto label_15e09c;
        }
    }
    ctx->pc = 0x15E094u;
label_15e094:
    // 0x15e094: 0x10000002  b           . + 4 + (0x2 << 2)
label_15e098:
    if (ctx->pc == 0x15E098u) {
        ctx->pc = 0x15E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E094u;
        // 0x15e098: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E09Cu;
        goto label_15e09c;
    }
    ctx->pc = 0x15E094u;
    {
        const bool branch_taken_0x15e094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E094u;
        // 0x15e098: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e094) {
            ctx->pc = 0x15E0A0u;
            goto label_15e0a0;
        }
    }
    ctx->pc = 0x15E09Cu;
label_15e09c:
    // 0x15e09c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x15e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15e0a0:
    // 0x15e0a0: 0x8e4200ec  lw          $v0, 0xEC($s2)
    ctx->pc = 0x15e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_15e0a4:
    // 0x15e0a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15e0a8:
    // 0x15e0a8: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
label_15e0ac:
    if (ctx->pc == 0x15E0ACu) {
        ctx->pc = 0x15E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0A8u;
        // 0x15e0ac: 0x2861fffa  slti        $at, $v1, -0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967290) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E0B0u;
        goto label_15e0b0;
    }
    ctx->pc = 0x15E0A8u;
    {
        const bool branch_taken_0x15e0a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0A8u;
        // 0x15e0ac: 0x2861fffa  slti        $at, $v1, -0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0a8) {
            ctx->pc = 0x15E0CCu;
            goto label_15e0cc;
        }
    }
    ctx->pc = 0x15E0B0u;
label_15e0b0:
    // 0x15e0b0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_15e0b4:
    if (ctx->pc == 0x15E0B4u) {
        ctx->pc = 0x15E0B8u;
        goto label_15e0b8;
    }
    ctx->pc = 0x15E0B0u;
    {
        const bool branch_taken_0x15e0b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e0b0) {
            ctx->pc = 0x15E0BCu;
            goto label_15e0bc;
        }
    }
    ctx->pc = 0x15E0B8u;
label_15e0b8:
    // 0x15e0b8: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x15e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_15e0bc:
    // 0x15e0bc: 0x8e4200ec  lw          $v0, 0xEC($s2)
    ctx->pc = 0x15e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_15e0c0:
    // 0x15e0c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15e0c4:
    // 0x15e0c4: 0x10000009  b           . + 4 + (0x9 << 2)
label_15e0c8:
    if (ctx->pc == 0x15E0C8u) {
        ctx->pc = 0x15E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0C4u;
        // 0x15e0c8: 0xae4200ec  sw          $v0, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E0CCu;
        goto label_15e0cc;
    }
    ctx->pc = 0x15E0C4u;
    {
        const bool branch_taken_0x15e0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0C4u;
        // 0x15e0c8: 0xae4200ec  sw          $v0, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0c4) {
            ctx->pc = 0x15E0ECu;
            goto label_15e0ec;
        }
    }
    ctx->pc = 0x15E0CCu;
label_15e0cc:
    // 0x15e0cc: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_15e0d0:
    if (ctx->pc == 0x15E0D0u) {
        ctx->pc = 0x15E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0CCu;
        // 0x15e0d0: 0x28610009  slti        $at, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E0D4u;
        goto label_15e0d4;
    }
    ctx->pc = 0x15E0CCu;
    {
        const bool branch_taken_0x15e0cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x15E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0CCu;
        // 0x15e0d0: 0x28610009  slti        $at, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0cc) {
            ctx->pc = 0x15E0ECu;
            goto label_15e0ec;
        }
    }
    ctx->pc = 0x15E0D4u;
label_15e0d4:
    // 0x15e0d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_15e0d8:
    if (ctx->pc == 0x15E0D8u) {
        ctx->pc = 0x15E0DCu;
        goto label_15e0dc;
    }
    ctx->pc = 0x15E0D4u;
    {
        const bool branch_taken_0x15e0d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e0d4) {
            ctx->pc = 0x15E0E0u;
            goto label_15e0e0;
        }
    }
    ctx->pc = 0x15E0DCu;
label_15e0dc:
    // 0x15e0dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15e0e0:
    // 0x15e0e0: 0x8e4200ec  lw          $v0, 0xEC($s2)
    ctx->pc = 0x15e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_15e0e4:
    // 0x15e0e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15e0e8:
    // 0x15e0e8: 0xae4200ec  sw          $v0, 0xEC($s2)
    ctx->pc = 0x15e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
label_15e0ec:
    // 0x15e0ec: 0x8e4200ec  lw          $v0, 0xEC($s2)
    ctx->pc = 0x15e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_15e0f0:
    // 0x15e0f0: 0x2c410080  sltiu       $at, $v0, 0x80
    ctx->pc = 0x15e0f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_15e0f4:
    // 0x15e0f4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_15e0f8:
    if (ctx->pc == 0x15E0F8u) {
        ctx->pc = 0x15E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0F4u;
        // 0x15e0f8: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E0FCu;
        goto label_15e0fc;
    }
    ctx->pc = 0x15E0F4u;
    {
        const bool branch_taken_0x15e0f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0F4u;
        // 0x15e0f8: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0f4) {
            ctx->pc = 0x15E10Cu;
            goto label_15e10c;
        }
    }
    ctx->pc = 0x15E0FCu;
label_15e0fc:
    // 0x15e0fc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x15e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_15e100:
    // 0x15e100: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x15e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_15e104:
    // 0x15e104: 0x10000003  b           . + 4 + (0x3 << 2)
label_15e108:
    if (ctx->pc == 0x15E108u) {
        ctx->pc = 0x15E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E104u;
        // 0x15e108: 0xfe420040  sd          $v0, 0x40($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E10Cu;
        goto label_15e10c;
    }
    ctx->pc = 0x15E104u;
    {
        const bool branch_taken_0x15e104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E104u;
        // 0x15e108: 0xfe420040  sd          $v0, 0x40($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e104) {
            ctx->pc = 0x15E114u;
            goto label_15e114;
        }
    }
    ctx->pc = 0x15E10Cu;
label_15e10c:
    // 0x15e10c: 0x344217fb  ori         $v0, $v0, 0x17FB
    ctx->pc = 0x15e10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6139);
label_15e110:
    // 0x15e110: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x15e110u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
label_15e114:
    // 0x15e114: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15e114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15e118:
    // 0x15e118: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x15e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15e11c:
    // 0x15e11c: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x15e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15e120:
    // 0x15e120: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x15e120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_15e124:
    // 0x15e124: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x15e124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_15e128:
    // 0x15e128: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x15e128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_15e12c:
    // 0x15e12c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x15e12cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_15e130:
    // 0x15e130: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15e134:
    // 0x15e134: 0x3993c  dsll32      $s3, $v1, 4
    ctx->pc = 0x15e134u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 4));
label_15e138:
    // 0x15e138: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_15e13c:
    if (ctx->pc == 0x15E13Cu) {
        ctx->pc = 0x15E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E138u;
        // 0x15e13c: 0x13993e  dsrl32      $s3, $s3, 4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E140u;
        goto label_15e140;
    }
    ctx->pc = 0x15E138u;
    {
        const bool branch_taken_0x15e138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E138u;
        // 0x15e13c: 0x13993e  dsrl32      $s3, $s3, 4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e138) {
            ctx->pc = 0x15E154u;
            goto label_15e154;
        }
    }
    ctx->pc = 0x15E140u;
label_15e140:
    // 0x15e140: 0x82270029  lb          $a3, 0x29($s1)
    ctx->pc = 0x15e140u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
label_15e144:
    // 0x15e144: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x15e144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15e148:
    // 0x15e148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e14c:
    // 0x15e14c: 0xc05530c  jal         func_154C30
label_15e150:
    if (ctx->pc == 0x15E150u) {
        ctx->pc = 0x15E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E14Cu;
        // 0x15e150: 0x26260038  addiu       $a2, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E154u;
        goto label_15e154;
    }
    ctx->pc = 0x15E14Cu;
    SET_GPR_U32(ctx, 31, 0x15E154u);
    ctx->pc = 0x15E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E14Cu;
    // 0x15e150: 0x26260038  addiu       $a2, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154C30u;
    { ctx->pc = 0x154c30; return; }
    ctx->pc = 0x15E154u;
label_15e154:
    // 0x15e154: 0xc0554d4  jal         func_155350
label_15e158:
    if (ctx->pc == 0x15E158u) {
        ctx->pc = 0x15E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E154u;
        // 0x15e158: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E15Cu;
        goto label_15e15c;
    }
    ctx->pc = 0x15E154u;
    SET_GPR_U32(ctx, 31, 0x15E15Cu);
    ctx->pc = 0x15E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E154u;
    // 0x15e158: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155350u;
    { ctx->pc = 0x155350; return; }
    ctx->pc = 0x15E15Cu;
label_15e15c:
    // 0x15e15c: 0x8222002a  lb          $v0, 0x2A($s1)
    ctx->pc = 0x15e15cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_15e160:
    // 0x15e160: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_15e164:
    if (ctx->pc == 0x15E164u) {
        ctx->pc = 0x15E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E160u;
        // 0x15e164: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E168u;
        goto label_15e168;
    }
    ctx->pc = 0x15E160u;
    {
        const bool branch_taken_0x15e160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E160u;
        // 0x15e164: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e160) {
            ctx->pc = 0x15E208u;
            goto label_15e208;
        }
    }
    ctx->pc = 0x15E168u;
label_15e168:
    // 0x15e168: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x15e168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_15e16c:
    // 0x15e16c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15e16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15e170:
    // 0x15e170: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x15e170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15e174:
    // 0x15e174: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15e174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15e178:
    // 0x15e178: 0x0  nop
    ctx->pc = 0x15e178u;
    // NOP
label_15e17c:
    // 0x15e17c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_15e180:
    if (ctx->pc == 0x15E180u) {
        ctx->pc = 0x15E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E17Cu;
        // 0x15e180: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E184u;
        goto label_15e184;
    }
    ctx->pc = 0x15E17Cu;
    {
        const bool branch_taken_0x15e17c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E17Cu;
        // 0x15e180: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e17c) {
            ctx->pc = 0x15E194u;
            goto label_15e194;
        }
    }
    ctx->pc = 0x15E184u;
label_15e184:
    // 0x15e184: 0xc0554dc  jal         func_155370
label_15e188:
    if (ctx->pc == 0x15E188u) {
        ctx->pc = 0x15E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E184u;
        // 0x15e188: 0x248455e0  addiu       $a0, $a0, 0x55E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E18Cu;
        goto label_15e18c;
    }
    ctx->pc = 0x15E184u;
    SET_GPR_U32(ctx, 31, 0x15E18Cu);
    ctx->pc = 0x15E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E184u;
    // 0x15e188: 0x248455e0  addiu       $a0, $a0, 0x55E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155370u;
    { ctx->pc = 0x155370; return; }
    ctx->pc = 0x15E18Cu;
label_15e18c:
    // 0x15e18c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_15e190:
    if (ctx->pc == 0x15E190u) {
        ctx->pc = 0x15E194u;
        goto label_15e194;
    }
    ctx->pc = 0x15E18Cu;
    {
        const bool branch_taken_0x15e18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e18c) {
            ctx->pc = 0x15E204u;
            goto label_15e204;
        }
    }
    ctx->pc = 0x15E194u;
label_15e194:
    // 0x15e194: 0x8c420198  lw          $v0, 0x198($v0)
    ctx->pc = 0x15e194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
label_15e198:
    // 0x15e198: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x15e198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_15e19c:
    // 0x15e19c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_15e1a0:
    if (ctx->pc == 0x15E1A0u) {
        ctx->pc = 0x15E1A4u;
        goto label_15e1a4;
    }
    ctx->pc = 0x15E19Cu;
    {
        const bool branch_taken_0x15e19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e19c) {
            ctx->pc = 0x15E1E4u;
            goto label_15e1e4;
        }
    }
    ctx->pc = 0x15E1A4u;
label_15e1a4:
    // 0x15e1a4: 0x8623002c  lh          $v1, 0x2C($s1)
    ctx->pc = 0x15e1a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_15e1a8:
    // 0x15e1a8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x15e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_15e1ac:
    // 0x15e1ac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15e1b0:
    // 0x15e1b0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x15e1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_15e1b4:
    // 0x15e1b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15e1b8:
    // 0x15e1b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15e1bc:
    // 0x15e1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e1c0:
    // 0x15e1c0: 0x0  nop
    ctx->pc = 0x15e1c0u;
    // NOP
label_15e1c4:
    // 0x15e1c4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x15e1c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_15e1c8:
    // 0x15e1c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15e1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15e1cc:
    // 0x15e1cc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x15e1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_15e1d0:
    // 0x15e1d0: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x15e1d0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_15e1d4:
    // 0x15e1d4: 0xc0554dc  jal         func_155370
label_15e1d8:
    if (ctx->pc == 0x15E1D8u) {
        ctx->pc = 0x15E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1D4u;
        // 0x15e1d8: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1DCu;
        goto label_15e1dc;
    }
    ctx->pc = 0x15E1D4u;
    SET_GPR_U32(ctx, 31, 0x15E1DCu);
    ctx->pc = 0x15E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E1D4u;
    // 0x15e1d8: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x155370u;
    { ctx->pc = 0x155370; return; }
    ctx->pc = 0x15E1DCu;
label_15e1dc:
    // 0x15e1dc: 0x10000009  b           . + 4 + (0x9 << 2)
label_15e1e0:
    if (ctx->pc == 0x15E1E0u) {
        ctx->pc = 0x15E1E4u;
        goto label_15e1e4;
    }
    ctx->pc = 0x15E1DCu;
    {
        const bool branch_taken_0x15e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e1dc) {
            ctx->pc = 0x15E204u;
            goto label_15e204;
        }
    }
    ctx->pc = 0x15E1E4u;
label_15e1e4:
    // 0x15e1e4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x15e1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_15e1e8:
    // 0x15e1e8: 0x90c20232  lbu         $v0, 0x232($a2)
    ctx->pc = 0x15e1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 562)));
label_15e1ec:
    // 0x15e1ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15e1f0:
    if (ctx->pc == 0x15E1F0u) {
        ctx->pc = 0x15E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1ECu;
        // 0x15e1f0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1F4u;
        goto label_15e1f4;
    }
    ctx->pc = 0x15E1ECu;
    {
        const bool branch_taken_0x15e1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1ECu;
        // 0x15e1f0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1ec) {
            ctx->pc = 0x15E204u;
            goto label_15e204;
        }
    }
    ctx->pc = 0x15E1F4u;
label_15e1f4:
    // 0x15e1f4: 0xc057998  jal         func_15E660
label_15e1f8:
    if (ctx->pc == 0x15E1F8u) {
        ctx->pc = 0x15E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1F4u;
        // 0x15e1f8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1FCu;
        goto label_15e1fc;
    }
    ctx->pc = 0x15E1F4u;
    SET_GPR_U32(ctx, 31, 0x15E1FCu);
    ctx->pc = 0x15E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E1F4u;
    // 0x15e1f8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E660u;
    { ctx->pc = 0x15e660; return; }
    ctx->pc = 0x15E1FCu;
label_15e1fc:
    // 0x15e1fc: 0xc0554dc  jal         func_155370
label_15e200:
    if (ctx->pc == 0x15E200u) {
        ctx->pc = 0x15E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1FCu;
        // 0x15e200: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E204u;
        goto label_15e204;
    }
    ctx->pc = 0x15E1FCu;
    SET_GPR_U32(ctx, 31, 0x15E204u);
    ctx->pc = 0x15E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E1FCu;
    // 0x15e200: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155370u;
    { ctx->pc = 0x155370; return; }
    ctx->pc = 0x15E204u;
label_15e204:
    // 0x15e204: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15e204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e208:
    // 0x15e208: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x15e208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_15e20c:
    // 0x15e20c: 0xc0553fc  jal         func_154FF0
label_15e210:
    if (ctx->pc == 0x15E210u) {
        ctx->pc = 0x15E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E20Cu;
        // 0x15e210: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E214u;
        goto label_15e214;
    }
    ctx->pc = 0x15E20Cu;
    SET_GPR_U32(ctx, 31, 0x15E214u);
    ctx->pc = 0x15E210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E20Cu;
    // 0x15e210: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154FF0u;
    { ctx->pc = 0x154ff0; return; }
    ctx->pc = 0x15E214u;
label_15e214:
    // 0x15e214: 0xc0554dc  jal         func_155370
label_15e218:
    if (ctx->pc == 0x15E218u) {
        ctx->pc = 0x15E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E214u;
        // 0x15e218: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E21Cu;
        goto label_15e21c;
    }
    ctx->pc = 0x15E214u;
    SET_GPR_U32(ctx, 31, 0x15E21Cu);
    ctx->pc = 0x15E218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E214u;
    // 0x15e218: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155370u;
    { ctx->pc = 0x155370; return; }
    ctx->pc = 0x15E21Cu;
label_15e21c:
    // 0x15e21c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e220:
    // 0x15e220: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e224:
    // 0x15e224: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x15e224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_15e228:
    // 0x15e228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e22c:
    // 0x15e22c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e22cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e230:
    // 0x15e230: 0xc066c72  jal         func_19B1C8
label_15e234:
    if (ctx->pc == 0x15E234u) {
        ctx->pc = 0x15E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E230u;
        // 0x15e234: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E238u;
        goto label_15e238;
    }
    ctx->pc = 0x15E230u;
    SET_GPR_U32(ctx, 31, 0x15E238u);
    ctx->pc = 0x15E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E230u;
    // 0x15e234: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15E238u;
label_15e238:
    // 0x15e238: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x15e238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_15e23c:
    // 0x15e23c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e240:
    // 0x15e240: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x15e240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15e244:
    // 0x15e244: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15e244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15e248:
    // 0x15e248: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15e248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e24c:
    // 0x15e24c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e250:
    // 0x15e250: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e254:
    // 0x15e254: 0xc066c72  jal         func_19B1C8
label_15e258:
    if (ctx->pc == 0x15E258u) {
        ctx->pc = 0x15E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E254u;
        // 0x15e258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E25Cu;
        goto label_15e25c;
    }
    ctx->pc = 0x15E254u;
    SET_GPR_U32(ctx, 31, 0x15E25Cu);
    ctx->pc = 0x15E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E254u;
    // 0x15e258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15E25Cu;
label_15e25c:
    // 0x15e25c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e260:
    // 0x15e260: 0xc066c5c  jal         func_19B170
label_15e264:
    if (ctx->pc == 0x15E264u) {
        ctx->pc = 0x15E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E260u;
        // 0x15e264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E268u;
        goto label_15e268;
    }
    ctx->pc = 0x15E260u;
    SET_GPR_U32(ctx, 31, 0x15E268u);
    ctx->pc = 0x15E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E260u;
    // 0x15e264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x15E268u;
label_15e268:
    // 0x15e268: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e26c:
    // 0x15e26c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15e270:
    // 0x15e270: 0xc066d10  jal         func_19B440
label_15e274:
    if (ctx->pc == 0x15E274u) {
        ctx->pc = 0x15E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E270u;
        // 0x15e274: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E278u;
        goto label_15e278;
    }
    ctx->pc = 0x15E270u;
    SET_GPR_U32(ctx, 31, 0x15E278u);
    ctx->pc = 0x15E274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E270u;
    // 0x15e274: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15E278u;
label_15e278:
    // 0x15e278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e27c:
    // 0x15e27c: 0xc066d30  jal         func_19B4C0
label_15e280:
    if (ctx->pc == 0x15E280u) {
        ctx->pc = 0x15E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E27Cu;
        // 0x15e280: 0x3c051400  lui         $a1, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E284u;
        goto label_15e284;
    }
    ctx->pc = 0x15E27Cu;
    SET_GPR_U32(ctx, 31, 0x15E284u);
    ctx->pc = 0x15E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E27Cu;
    // 0x15e280: 0x3c051400  lui         $a1, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x15E284u;
label_15e284:
    // 0x15e284: 0xc066c46  jal         func_19B118
label_15e288:
    if (ctx->pc == 0x15E288u) {
        ctx->pc = 0x15E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E284u;
        // 0x15e288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E28Cu;
        goto label_15e28c;
    }
    ctx->pc = 0x15E284u;
    SET_GPR_U32(ctx, 31, 0x15E28Cu);
    ctx->pc = 0x15E288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E284u;
    // 0x15e288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x15E28Cu;
label_15e28c:
    // 0x15e28c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e290:
    // 0x15e290: 0xc066c5c  jal         func_19B170
label_15e294:
    if (ctx->pc == 0x15E294u) {
        ctx->pc = 0x15E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E290u;
        // 0x15e294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E298u;
        goto label_15e298;
    }
    ctx->pc = 0x15E290u;
    SET_GPR_U32(ctx, 31, 0x15E298u);
    ctx->pc = 0x15E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E290u;
    // 0x15e294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x15E298u;
label_15e298:
    // 0x15e298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e29c:
    // 0x15e29c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15e29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15e2a0:
    // 0x15e2a0: 0xc066d10  jal         func_19B440
label_15e2a4:
    if (ctx->pc == 0x15E2A4u) {
        ctx->pc = 0x15E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2A0u;
        // 0x15e2a4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2A8u;
        goto label_15e2a8;
    }
    ctx->pc = 0x15E2A0u;
    SET_GPR_U32(ctx, 31, 0x15E2A8u);
    ctx->pc = 0x15E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2A0u;
    // 0x15e2a4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15E2A8u;
label_15e2a8:
    // 0x15e2a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e2ac:
    // 0x15e2ac: 0xc066ce8  jal         func_19B3A0
label_15e2b0:
    if (ctx->pc == 0x15E2B0u) {
        ctx->pc = 0x15E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2ACu;
        // 0x15e2b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2B4u;
        goto label_15e2b4;
    }
    ctx->pc = 0x15E2ACu;
    SET_GPR_U32(ctx, 31, 0x15E2B4u);
    ctx->pc = 0x15E2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2ACu;
    // 0x15e2b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3A0u;
    { ctx->pc = 0x19b3a0; return; }
    ctx->pc = 0x15E2B4u;
label_15e2b4:
    // 0x15e2b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x15e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_15e2b8:
    // 0x15e2b8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x15e2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_15e2bc:
    // 0x15e2bc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x15e2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_15e2c0:
    // 0x15e2c0: 0x27b400a8  addiu       $s4, $sp, 0xA8
    ctx->pc = 0x15e2c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_15e2c4:
    // 0x15e2c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15e2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_15e2c8:
    // 0x15e2c8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_15e2cc:
    // 0x15e2cc: 0xffa300a0  sd          $v1, 0xA0($sp)
    ctx->pc = 0x15e2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 3));
label_15e2d0:
    // 0x15e2d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e2d4:
    // 0x15e2d4: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x15e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_15e2d8:
    // 0x15e2d8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x15e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_15e2dc:
    // 0x15e2dc: 0xc066d5c  jal         func_19B570
label_15e2e0:
    if (ctx->pc == 0x15E2E0u) {
        ctx->pc = 0x15E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2DCu;
        // 0x15e2e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2E4u;
        goto label_15e2e4;
    }
    ctx->pc = 0x15E2DCu;
    SET_GPR_U32(ctx, 31, 0x15E2E4u);
    ctx->pc = 0x15E2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2DCu;
    // 0x15e2e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15E2E4u;
label_15e2e4:
    // 0x15e2e4: 0xffa000a0  sd          $zero, 0xA0($sp)
    ctx->pc = 0x15e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 0));
label_15e2e8:
    // 0x15e2e8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x15e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_15e2ec:
    // 0x15e2ec: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x15e2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_15e2f0:
    // 0x15e2f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e2f4:
    // 0x15e2f4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x15e2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_15e2f8:
    // 0x15e2f8: 0xc066d5c  jal         func_19B570
label_15e2fc:
    if (ctx->pc == 0x15E2FCu) {
        ctx->pc = 0x15E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2F8u;
        // 0x15e2fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E300u;
        goto label_15e300;
    }
    ctx->pc = 0x15E2F8u;
    SET_GPR_U32(ctx, 31, 0x15E300u);
    ctx->pc = 0x15E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2F8u;
    // 0x15e2fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15E300u;
label_15e300:
    // 0x15e300: 0xc066cfe  jal         func_19B3F8
label_15e304:
    if (ctx->pc == 0x15E304u) {
        ctx->pc = 0x15E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E300u;
        // 0x15e304: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E308u;
        goto label_15e308;
    }
    ctx->pc = 0x15E300u;
    SET_GPR_U32(ctx, 31, 0x15E308u);
    ctx->pc = 0x15E304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E300u;
    // 0x15e304: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3F8u;
    { ctx->pc = 0x19b3f8; return; }
    ctx->pc = 0x15E308u;
label_15e308:
    // 0x15e308: 0xc066c46  jal         func_19B118
label_15e30c:
    if (ctx->pc == 0x15E30Cu) {
        ctx->pc = 0x15E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E308u;
        // 0x15e30c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E310u;
        goto label_15e310;
    }
    ctx->pc = 0x15E308u;
    SET_GPR_U32(ctx, 31, 0x15E310u);
    ctx->pc = 0x15E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E308u;
    // 0x15e30c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x15E310u;
label_15e310:
    // 0x15e310: 0x82230031  lb          $v1, 0x31($s1)
    ctx->pc = 0x15e310u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_15e314:
    // 0x15e314: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_15e318:
    if (ctx->pc == 0x15E318u) {
        ctx->pc = 0x15E31Cu;
        goto label_15e31c;
    }
    ctx->pc = 0x15E314u;
    {
        const bool branch_taken_0x15e314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e314) {
            ctx->pc = 0x15E354u;
            goto label_15e354;
        }
    }
    ctx->pc = 0x15E31Cu;
label_15e31c:
    // 0x15e31c: 0x8222002b  lb          $v0, 0x2B($s1)
    ctx->pc = 0x15e31cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
label_15e320:
    // 0x15e320: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e324:
    // 0x15e324: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x15e324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_15e328:
    // 0x15e328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e32c:
    // 0x15e32c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e32cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e330:
    // 0x15e330: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x15e330u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15e334:
    // 0x15e334: 0x24c3002c  addiu       $v1, $a2, 0x2C
    ctx->pc = 0x15e334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
label_15e338:
    // 0x15e338: 0x24c20074  addiu       $v0, $a2, 0x74
    ctx->pc = 0x15e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 116));
label_15e33c:
    // 0x15e33c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15e340:
    // 0x15e340: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15e340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15e344:
    // 0x15e344: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15e344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15e348:
    // 0x15e348: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15e348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e34c:
    // 0x15e34c: 0xc066c72  jal         func_19B1C8
label_15e350:
    if (ctx->pc == 0x15E350u) {
        ctx->pc = 0x15E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E34Cu;
        // 0x15e350: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E354u;
        goto label_15e354;
    }
    ctx->pc = 0x15E34Cu;
    SET_GPR_U32(ctx, 31, 0x15E354u);
    ctx->pc = 0x15E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E34Cu;
    // 0x15e350: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15E354u;
label_15e354:
    // 0x15e354: 0x82230030  lb          $v1, 0x30($s1)
    ctx->pc = 0x15e354u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_15e358:
    // 0x15e358: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_15e35c:
    if (ctx->pc == 0x15E35Cu) {
        ctx->pc = 0x15E360u;
        goto label_15e360;
    }
    ctx->pc = 0x15E358u;
    {
        const bool branch_taken_0x15e358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e358) {
            ctx->pc = 0x15E380u;
            goto label_15e380;
        }
    }
    ctx->pc = 0x15E360u;
label_15e360:
    // 0x15e360: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x15e360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_15e364:
    // 0x15e364: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e368:
    // 0x15e368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e36c:
    // 0x15e36c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e36cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e370:
    // 0x15e370: 0x94460024  lhu         $a2, 0x24($v0)
    ctx->pc = 0x15e370u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
label_15e374:
    // 0x15e374: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x15e374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_15e378:
    // 0x15e378: 0xc066c72  jal         func_19B1C8
label_15e37c:
    if (ctx->pc == 0x15E37Cu) {
        ctx->pc = 0x15E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E378u;
        // 0x15e37c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E380u;
        goto label_15e380;
    }
    ctx->pc = 0x15E378u;
    SET_GPR_U32(ctx, 31, 0x15E380u);
    ctx->pc = 0x15E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E378u;
    // 0x15e37c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15E380u;
label_15e380:
    // 0x15e380: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x15e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_15e384:
    // 0x15e384: 0x8c7400c0  lw          $s4, 0xC0($v1)
    ctx->pc = 0x15e384u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_15e388:
    // 0x15e388: 0x1000000d  b           . + 4 + (0xD << 2)
label_15e38c:
    if (ctx->pc == 0x15E38Cu) {
        ctx->pc = 0x15E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E388u;
        // 0x15e38c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E390u;
        goto label_15e390;
    }
    ctx->pc = 0x15E388u;
    {
        const bool branch_taken_0x15e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E388u;
        // 0x15e38c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e388) {
            ctx->pc = 0x15E3C0u;
            goto label_15e3c0;
        }
    }
    ctx->pc = 0x15E390u;
label_15e390:
    // 0x15e390: 0x0  nop
    ctx->pc = 0x15e390u;
    // NOP
label_15e394:
    // 0x15e394: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x15e394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_15e398:
    // 0x15e398: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e39c:
    if (ctx->pc == 0x15E39Cu) {
        ctx->pc = 0x15E3A0u;
        goto label_15e3a0;
    }
    ctx->pc = 0x15E398u;
    {
        const bool branch_taken_0x15e398 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e398) {
            ctx->pc = 0x15E3B8u;
            goto label_15e3b8;
        }
    }
    ctx->pc = 0x15E3A0u;
label_15e3a0:
    // 0x15e3a0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x15e3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_15e3a4:
    // 0x15e3a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e3a8:
    // 0x15e3a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e3ac:
    // 0x15e3ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e3acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e3b0:
    // 0x15e3b0: 0xc066c72  jal         func_19B1C8
label_15e3b4:
    if (ctx->pc == 0x15E3B4u) {
        ctx->pc = 0x15E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3B0u;
        // 0x15e3b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3B8u;
        goto label_15e3b8;
    }
    ctx->pc = 0x15E3B0u;
    SET_GPR_U32(ctx, 31, 0x15E3B8u);
    ctx->pc = 0x15E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3B0u;
    // 0x15e3b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15E3B8u;
label_15e3b8:
    // 0x15e3b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x15e3b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_15e3bc:
    // 0x15e3bc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x15e3bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_15e3c0:
    // 0x15e3c0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x15e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_15e3c4:
    // 0x15e3c4: 0x806300be  lb          $v1, 0xBE($v1)
    ctx->pc = 0x15e3c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 190)));
label_15e3c8:
    // 0x15e3c8: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x15e3c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15e3cc:
    // 0x15e3cc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_15e3d0:
    if (ctx->pc == 0x15E3D0u) {
        ctx->pc = 0x15E3D4u;
        goto label_15e3d4;
    }
    ctx->pc = 0x15E3CCu;
    {
        const bool branch_taken_0x15e3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e3cc) {
            ctx->pc = 0x15E390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e390;
        }
    }
    ctx->pc = 0x15E3D4u;
label_15e3d4:
    // 0x15e3d4: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15e3d8:
    // 0x15e3d8: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x15e3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_15e3dc:
    // 0x15e3dc: 0x14600093  bnez        $v1, . + 4 + (0x93 << 2)
label_15e3e0:
    if (ctx->pc == 0x15E3E0u) {
        ctx->pc = 0x15E3E4u;
        goto label_15e3e4;
    }
    ctx->pc = 0x15E3DCu;
    {
        const bool branch_taken_0x15e3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e3dc) {
            ctx->pc = 0x15E62Cu;
            { ctx->pc = 0x15e62c; return; }
        }
    }
    ctx->pc = 0x15E3E4u;
label_15e3e4:
    // 0x15e3e4: 0x8223002a  lb          $v1, 0x2A($s1)
    ctx->pc = 0x15e3e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_15e3e8:
    // 0x15e3e8: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
label_15e3ec:
    if (ctx->pc == 0x15E3ECu) {
        ctx->pc = 0x15E3F0u;
        goto label_15e3f0;
    }
    ctx->pc = 0x15E3E8u;
    {
        const bool branch_taken_0x15e3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e3e8) {
            ctx->pc = 0x15E62Cu;
            { ctx->pc = 0x15e62c; return; }
        }
    }
    ctx->pc = 0x15E3F0u;
label_15e3f0:
    // 0x15e3f0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x15e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_15e3f4:
    // 0x15e3f4: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x15e3f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_15e3f8:
    // 0x15e3f8: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
label_15e3fc:
    if (ctx->pc == 0x15E3FCu) {
        ctx->pc = 0x15E400u;
        goto label_15e400;
    }
    ctx->pc = 0x15E3F8u;
    {
        const bool branch_taken_0x15e3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e3f8) {
            ctx->pc = 0x15E62Cu;
            { ctx->pc = 0x15e62c; return; }
        }
    }
    ctx->pc = 0x15E400u;
label_15e400:
    // 0x15e400: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x15e400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_15e404:
    // 0x15e404: 0x84a3003c  lh          $v1, 0x3C($a1)
    ctx->pc = 0x15e404u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
label_15e408:
    // 0x15e408: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x15e408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_15e40c:
    // 0x15e40c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_15e410:
    if (ctx->pc == 0x15E410u) {
        ctx->pc = 0x15E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E40Cu;
        // 0x15e410: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E414u;
        goto label_15e414;
    }
    ctx->pc = 0x15E40Cu;
    {
        const bool branch_taken_0x15e40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E40Cu;
        // 0x15e410: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e40c) {
            ctx->pc = 0x15E418u;
            goto label_15e418;
        }
    }
    ctx->pc = 0x15E414u;
label_15e414:
    // 0x15e414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e418:
    // 0x15e418: 0x10600084  beqz        $v1, . + 4 + (0x84 << 2)
label_15e41c:
    if (ctx->pc == 0x15E41Cu) {
        ctx->pc = 0x15E420u;
        goto label_15e420;
    }
    ctx->pc = 0x15E418u;
    {
        const bool branch_taken_0x15e418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e418) {
            ctx->pc = 0x15E62Cu;
            { ctx->pc = 0x15e62c; return; }
        }
    }
    ctx->pc = 0x15E420u;
label_15e420:
    // 0x15e420: 0xdc860270  ld          $a2, 0x270($a0)
    ctx->pc = 0x15e420u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 624)));
label_15e424:
    // 0x15e424: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x15e424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_15e428:
    // 0x15e428: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15e428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_15e42c:
    // 0x15e42c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x15e42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_15e430:
    // 0x15e430: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_15e434:
    if (ctx->pc == 0x15E434u) {
        ctx->pc = 0x15E438u;
        goto label_15e438;
    }
    ctx->pc = 0x15E430u;
    {
        const bool branch_taken_0x15e430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e430) {
            ctx->pc = 0x15E62Cu;
            { ctx->pc = 0x15e62c; return; }
        }
    }
    ctx->pc = 0x15E438u;
label_15e438:
    // 0x15e438: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x15e438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_15e43c:
    // 0x15e43c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x15e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_15e440:
    // 0x15e440: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x15e440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_15e444:
    // 0x15e444: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15e444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_15e448:
    // 0x15e448: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_15e44c:
    if (ctx->pc == 0x15E44Cu) {
        ctx->pc = 0x15E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E448u;
        // 0x15e44c: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E450u;
        goto label_15e450;
    }
    ctx->pc = 0x15E448u;
    {
        const bool branch_taken_0x15e448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E448u;
        // 0x15e44c: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e448) {
            ctx->pc = 0x15E468u;
            goto label_15e468;
        }
    }
    ctx->pc = 0x15E450u;
label_15e450:
    // 0x15e450: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x15e450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_15e454:
    // 0x15e454: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15e454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_15e458:
    // 0x15e458: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x15e458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_15e45c:
    // 0x15e45c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_15e460:
    if (ctx->pc == 0x15E460u) {
        ctx->pc = 0x15E464u;
        goto label_15e464;
    }
    ctx->pc = 0x15E45Cu;
    {
        const bool branch_taken_0x15e45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e45c) {
            ctx->pc = 0x15E480u;
            goto label_15e480;
        }
    }
    ctx->pc = 0x15E464u;
label_15e464:
    // 0x15e464: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x15e464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_15e468:
    // 0x15e468: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
label_15e46c:
    if (ctx->pc == 0x15E46Cu) {
        ctx->pc = 0x15E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E468u;
        // 0x15e46c: 0x24034000  addiu       $v1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E470u;
        goto label_15e470;
    }
    ctx->pc = 0x15E468u;
    {
        const bool branch_taken_0x15e468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E468u;
        // 0x15e46c: 0x24034000  addiu       $v1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e468) {
            ctx->pc = 0x15E62Cu;
            { ctx->pc = 0x15e62c; return; }
        }
    }
    ctx->pc = 0x15E470u;
label_15e470:
    // 0x15e470: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15e470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_15e474:
    // 0x15e474: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x15e474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_15e478:
    // 0x15e478: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_15e47c:
    if (ctx->pc == 0x15E47Cu) {
        ctx->pc = 0x15E480u;
        goto label_15e480;
    }
    ctx->pc = 0x15E478u;
    {
        const bool branch_taken_0x15e478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e478) {
            ctx->pc = 0x15E62Cu;
            { ctx->pc = 0x15e62c; return; }
        }
    }
    ctx->pc = 0x15E480u;
label_15e480:
    // 0x15e480: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x15e480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15e484:
    // 0x15e484: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15e484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15e488:
    // 0x15e488: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x15e488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_15e48c:
    // 0x15e48c: 0x0  nop
    ctx->pc = 0x15e48cu;
    // NOP
label_15e490:
    // 0x15e490: 0x1a800066  blez        $s4, . + 4 + (0x66 << 2)
label_15e494:
    if (ctx->pc == 0x15E494u) {
        ctx->pc = 0x15E498u;
        goto label_15e498;
    }
    ctx->pc = 0x15E490u;
    {
        const bool branch_taken_0x15e490 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x15e490) {
            ctx->pc = 0x15E62Cu;
            { ctx->pc = 0x15e62c; return; }
        }
    }
    ctx->pc = 0x15E498u;
label_15e498:
    // 0x15e498: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x15e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_15e49c:
    // 0x15e49c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e4a0:
    // 0x15e4a0: 0x282001a  div         $zero, $s4, $v0
    ctx->pc = 0x15e4a0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15e4a4:
    // 0x15e4a4: 0x0  nop
    ctx->pc = 0x15e4a4u;
    // NOP
label_15e4a8:
    // 0x15e4a8: 0x0  nop
    ctx->pc = 0x15e4a8u;
    // NOP
label_15e4ac:
    // 0x15e4ac: 0x1810  mfhi        $v1
    ctx->pc = 0x15e4acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_15e4b0:
    // 0x15e4b0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_15e4b4:
    // 0x15e4b4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x15e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_15e4b8:
    // 0x15e4b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15e4bc:
    // 0x15e4bc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x15e4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15e4c0:
    // 0x15e4c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x15e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15e4c4:
    // 0x15e4c4: 0xc08e93e  jal         func_23A4F8
label_15e4c8:
    if (ctx->pc == 0x15E4C8u) {
        ctx->pc = 0x15E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4C4u;
        // 0x15e4c8: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4CCu;
        goto label_15e4cc;
    }
    ctx->pc = 0x15E4C4u;
    SET_GPR_U32(ctx, 31, 0x15E4CCu);
    ctx->pc = 0x15E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4C4u;
    // 0x15e4c8: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x15E4CCu;
label_15e4cc:
    // 0x15e4cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15e4d0:
    // 0x15e4d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15e4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15e4d4:
    // 0x15e4d4: 0x24060d50  addiu       $a2, $zero, 0xD50
    ctx->pc = 0x15e4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3408));
label_15e4d8:
    // 0x15e4d8: 0xc08e93e  jal         func_23A4F8
label_15e4dc:
    if (ctx->pc == 0x15E4DCu) {
        ctx->pc = 0x15E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4D8u;
        // 0x15e4dc: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4E0u;
        goto label_15e4e0;
    }
    ctx->pc = 0x15E4D8u;
    SET_GPR_U32(ctx, 31, 0x15E4E0u);
    ctx->pc = 0x15E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4D8u;
    // 0x15e4dc: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x15E4E0u;
label_15e4e0:
    // 0x15e4e0: 0x2a83000d  slti        $v1, $s4, 0xD
    ctx->pc = 0x15e4e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)13) ? 1 : 0);
label_15e4e4:
    // 0x15e4e4: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
label_15e4e8:
    if (ctx->pc == 0x15E4E8u) {
        ctx->pc = 0x15E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4E4u;
        // 0x15e4e8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4ECu;
        goto label_15e4ec;
    }
    ctx->pc = 0x15E4E4u;
    {
        const bool branch_taken_0x15e4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4E4u;
        // 0x15e4e8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4e4) {
            ctx->pc = 0x15E62Cu;
            { ctx->pc = 0x15e62c; return; }
        }
    }
    ctx->pc = 0x15E4ECu;
label_15e4ec:
    // 0x15e4ec: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x15e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_15e4f0:
    // 0x15e4f0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x15e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_15e4f4:
    // 0x15e4f4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15e4f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15e4f8:
    // 0x15e4f8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x15e4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_15e4fc:
    // 0x15e4fc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x15e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_15e500:
    // 0x15e500: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x15e500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_15e504:
    // 0x15e504: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x15e504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_15e508:
    // 0x15e508: 0x28c10081  slti        $at, $a2, 0x81
    ctx->pc = 0x15e508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)129) ? 1 : 0);
label_15e50c:
    // 0x15e50c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x15e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_15e510:
    // 0x15e510: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x15e510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_15e514:
    // 0x15e514: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15e514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_15e518:
    // 0x15e518: 0x1810  mfhi        $v1
    ctx->pc = 0x15e518u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_15e51c:
    // 0x15e51c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15e520:
    // 0x15e520: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15e520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15e524:
    // 0x15e524: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x15e524u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15e528:
    // 0x15e528: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_15e52c:
    if (ctx->pc == 0x15E52Cu) {
        ctx->pc = 0x15E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E528u;
        // 0x15e52c: 0xfe420030  sd          $v0, 0x30($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E530u;
        goto label_15e530;
    }
    ctx->pc = 0x15E528u;
    {
        const bool branch_taken_0x15e528 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E528u;
        // 0x15e52c: 0xfe420030  sd          $v0, 0x30($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e528) {
            ctx->pc = 0x15E534u;
            goto label_15e534;
        }
    }
    ctx->pc = 0x15E530u;
label_15e530:
    // 0x15e530: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15e530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e534:
    // 0x15e534: 0xd51818  mult        $v1, $a2, $s5
    ctx->pc = 0x15e534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15e538:
    // 0x15e538: 0x3c024ec4  lui         $v0, 0x4EC4
    ctx->pc = 0x15e538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20164 << 16));
label_15e53c:
    // 0x15e53c: 0x3442ec4f  ori         $v0, $v0, 0xEC4F
    ctx->pc = 0x15e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60495);
label_15e540:
    // 0x15e540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e544:
    // 0x15e544: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e548:
    // 0x15e548: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e54c:
    // 0x15e54c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e54cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e550:
    // 0x15e550: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15e550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e554:
    // 0x15e554: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15e554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15e558:
    // 0x15e558: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x15e558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_15e55c:
    // 0x15e55c: 0x0  nop
    ctx->pc = 0x15e55cu;
    // NOP
label_15e560:
    // 0x15e560: 0x1010  mfhi        $v0
    ctx->pc = 0x15e560u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_15e564:
    // 0x15e564: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15e564u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_15e568:
    // 0x15e568: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x15e568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_15e56c:
    // 0x15e56c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15e570:
    // 0x15e570: 0xc066c72  jal         func_19B1C8
label_15e574:
    if (ctx->pc == 0x15E574u) {
        ctx->pc = 0x15E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E570u;
        // 0x15e574: 0xae4200ec  sw          $v0, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E578u;
        goto label_15e578;
    }
    ctx->pc = 0x15E570u;
    SET_GPR_U32(ctx, 31, 0x15E578u);
    ctx->pc = 0x15E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E570u;
    // 0x15e574: 0xae4200ec  sw          $v0, 0xEC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15E578u;
label_15e578:
    // 0x15e578: 0x264500f0  addiu       $a1, $s2, 0xF0
    ctx->pc = 0x15e578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_15e57c:
    // 0x15e57c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e580:
    // 0x15e580: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15e580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e584:
    // 0x15e584: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e588:
    // 0x15e588: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e58c:
    // 0x15e58c: 0xc066c72  jal         func_19B1C8
label_15e590:
    if (ctx->pc == 0x15E590u) {
        ctx->pc = 0x15E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E58Cu;
        // 0x15e590: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E594u;
        goto label_15e594;
    }
    ctx->pc = 0x15E58Cu;
    SET_GPR_U32(ctx, 31, 0x15E594u);
    ctx->pc = 0x15E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E58Cu;
    // 0x15e590: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15E594u;
label_15e594:
    // 0x15e594: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e598:
    // 0x15e598: 0xc066c5c  jal         func_19B170
label_15e59c:
    if (ctx->pc == 0x15E59Cu) {
        ctx->pc = 0x15E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E598u;
        // 0x15e59c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5A0u;
        { ctx->pc = 0x15e5a0; return; }
    }
    ctx->pc = 0x15E598u;
    SET_GPR_U32(ctx, 31, 0x15E5A0u);
    ctx->pc = 0x15E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E598u;
    // 0x15e59c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x15E5A0u;
    ctx->pc = 0x15e5a0u;
    return;
}
