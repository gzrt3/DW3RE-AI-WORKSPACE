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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part301(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22ddd8u: goto label_22ddd8;
        case 0x22dddcu: goto label_22dddc;
        case 0x22dde0u: goto label_22dde0;
        case 0x22dde4u: goto label_22dde4;
        case 0x22dde8u: goto label_22dde8;
        case 0x22ddecu: goto label_22ddec;
        case 0x22ddf0u: goto label_22ddf0;
        case 0x22ddf4u: goto label_22ddf4;
        case 0x22ddf8u: goto label_22ddf8;
        case 0x22ddfcu: goto label_22ddfc;
        case 0x22de00u: goto label_22de00;
        case 0x22de04u: goto label_22de04;
        case 0x22de08u: goto label_22de08;
        case 0x22de0cu: goto label_22de0c;
        case 0x22de10u: goto label_22de10;
        case 0x22de14u: goto label_22de14;
        case 0x22de18u: goto label_22de18;
        case 0x22de1cu: goto label_22de1c;
        case 0x22de20u: goto label_22de20;
        case 0x22de24u: goto label_22de24;
        case 0x22de28u: goto label_22de28;
        case 0x22de2cu: goto label_22de2c;
        case 0x22de30u: goto label_22de30;
        case 0x22de34u: goto label_22de34;
        case 0x22de38u: goto label_22de38;
        case 0x22de3cu: goto label_22de3c;
        case 0x22de40u: goto label_22de40;
        case 0x22de44u: goto label_22de44;
        case 0x22de48u: goto label_22de48;
        case 0x22de4cu: goto label_22de4c;
        case 0x22de50u: goto label_22de50;
        case 0x22de54u: goto label_22de54;
        case 0x22de58u: goto label_22de58;
        case 0x22de5cu: goto label_22de5c;
        case 0x22de60u: goto label_22de60;
        case 0x22de64u: goto label_22de64;
        case 0x22de68u: goto label_22de68;
        case 0x22de6cu: goto label_22de6c;
        case 0x22de70u: goto label_22de70;
        case 0x22de74u: goto label_22de74;
        case 0x22de78u: goto label_22de78;
        case 0x22de7cu: goto label_22de7c;
        case 0x22de80u: goto label_22de80;
        case 0x22de84u: goto label_22de84;
        case 0x22de88u: goto label_22de88;
        case 0x22de8cu: goto label_22de8c;
        case 0x22de90u: goto label_22de90;
        case 0x22de94u: goto label_22de94;
        case 0x22de98u: goto label_22de98;
        case 0x22de9cu: goto label_22de9c;
        case 0x22dea0u: goto label_22dea0;
        case 0x22dea4u: goto label_22dea4;
        case 0x22dea8u: goto label_22dea8;
        case 0x22deacu: goto label_22deac;
        case 0x22deb0u: goto label_22deb0;
        case 0x22deb4u: goto label_22deb4;
        case 0x22deb8u: goto label_22deb8;
        case 0x22debcu: goto label_22debc;
        case 0x22dec0u: goto label_22dec0;
        case 0x22dec4u: goto label_22dec4;
        case 0x22dec8u: goto label_22dec8;
        case 0x22deccu: goto label_22decc;
        case 0x22ded0u: goto label_22ded0;
        case 0x22ded4u: goto label_22ded4;
        case 0x22ded8u: goto label_22ded8;
        case 0x22dedcu: goto label_22dedc;
        case 0x22dee0u: goto label_22dee0;
        case 0x22dee4u: goto label_22dee4;
        case 0x22dee8u: goto label_22dee8;
        case 0x22deecu: goto label_22deec;
        case 0x22def0u: goto label_22def0;
        case 0x22def4u: goto label_22def4;
        case 0x22def8u: goto label_22def8;
        case 0x22defcu: goto label_22defc;
        case 0x22df00u: goto label_22df00;
        case 0x22df04u: goto label_22df04;
        case 0x22df08u: goto label_22df08;
        case 0x22df0cu: goto label_22df0c;
        case 0x22df10u: goto label_22df10;
        case 0x22df14u: goto label_22df14;
        case 0x22df18u: goto label_22df18;
        case 0x22df1cu: goto label_22df1c;
        case 0x22df20u: goto label_22df20;
        case 0x22df24u: goto label_22df24;
        case 0x22df28u: goto label_22df28;
        case 0x22df2cu: goto label_22df2c;
        case 0x22df30u: goto label_22df30;
        case 0x22df34u: goto label_22df34;
        case 0x22df38u: goto label_22df38;
        case 0x22df3cu: goto label_22df3c;
        case 0x22df40u: goto label_22df40;
        case 0x22df44u: goto label_22df44;
        case 0x22df48u: goto label_22df48;
        case 0x22df4cu: goto label_22df4c;
        case 0x22df50u: goto label_22df50;
        case 0x22df54u: goto label_22df54;
        case 0x22df58u: goto label_22df58;
        case 0x22df5cu: goto label_22df5c;
        case 0x22df60u: goto label_22df60;
        case 0x22df64u: goto label_22df64;
        case 0x22df68u: goto label_22df68;
        case 0x22df6cu: goto label_22df6c;
        case 0x22df70u: goto label_22df70;
        case 0x22df74u: goto label_22df74;
        case 0x22df78u: goto label_22df78;
        case 0x22df7cu: goto label_22df7c;
        case 0x22df80u: goto label_22df80;
        case 0x22df84u: goto label_22df84;
        case 0x22df88u: goto label_22df88;
        case 0x22df8cu: goto label_22df8c;
        case 0x22df90u: goto label_22df90;
        case 0x22df94u: goto label_22df94;
        case 0x22df98u: goto label_22df98;
        case 0x22df9cu: goto label_22df9c;
        case 0x22dfa0u: goto label_22dfa0;
        case 0x22dfa4u: goto label_22dfa4;
        case 0x22dfa8u: goto label_22dfa8;
        case 0x22dfacu: goto label_22dfac;
        case 0x22dfb0u: goto label_22dfb0;
        case 0x22dfb4u: goto label_22dfb4;
        case 0x22dfb8u: goto label_22dfb8;
        case 0x22dfbcu: goto label_22dfbc;
        case 0x22dfc0u: goto label_22dfc0;
        case 0x22dfc4u: goto label_22dfc4;
        case 0x22dfc8u: goto label_22dfc8;
        case 0x22dfccu: goto label_22dfcc;
        case 0x22dfd0u: goto label_22dfd0;
        case 0x22dfd4u: goto label_22dfd4;
        case 0x22dfd8u: goto label_22dfd8;
        case 0x22dfdcu: goto label_22dfdc;
        case 0x22dfe0u: goto label_22dfe0;
        case 0x22dfe4u: goto label_22dfe4;
        case 0x22dfe8u: goto label_22dfe8;
        case 0x22dfecu: goto label_22dfec;
        case 0x22dff0u: goto label_22dff0;
        case 0x22dff4u: goto label_22dff4;
        case 0x22dff8u: goto label_22dff8;
        case 0x22dffcu: goto label_22dffc;
        case 0x22e000u: goto label_22e000;
        case 0x22e004u: goto label_22e004;
        case 0x22e008u: goto label_22e008;
        case 0x22e00cu: goto label_22e00c;
        case 0x22e010u: goto label_22e010;
        case 0x22e014u: goto label_22e014;
        case 0x22e018u: goto label_22e018;
        case 0x22e01cu: goto label_22e01c;
        case 0x22e020u: goto label_22e020;
        case 0x22e024u: goto label_22e024;
        case 0x22e028u: goto label_22e028;
        case 0x22e02cu: goto label_22e02c;
        case 0x22e030u: goto label_22e030;
        case 0x22e034u: goto label_22e034;
        case 0x22e038u: goto label_22e038;
        case 0x22e03cu: goto label_22e03c;
        case 0x22e040u: goto label_22e040;
        case 0x22e044u: goto label_22e044;
        case 0x22e048u: goto label_22e048;
        case 0x22e04cu: goto label_22e04c;
        case 0x22e050u: goto label_22e050;
        case 0x22e054u: goto label_22e054;
        case 0x22e058u: goto label_22e058;
        case 0x22e05cu: goto label_22e05c;
        case 0x22e060u: goto label_22e060;
        case 0x22e064u: goto label_22e064;
        case 0x22e068u: goto label_22e068;
        case 0x22e06cu: goto label_22e06c;
        case 0x22e070u: goto label_22e070;
        case 0x22e074u: goto label_22e074;
        case 0x22e078u: goto label_22e078;
        case 0x22e07cu: goto label_22e07c;
        case 0x22e080u: goto label_22e080;
        case 0x22e084u: goto label_22e084;
        case 0x22e088u: goto label_22e088;
        case 0x22e08cu: goto label_22e08c;
        case 0x22e090u: goto label_22e090;
        case 0x22e094u: goto label_22e094;
        case 0x22e098u: goto label_22e098;
        case 0x22e09cu: goto label_22e09c;
        case 0x22e0a0u: goto label_22e0a0;
        case 0x22e0a4u: goto label_22e0a4;
        case 0x22e0a8u: goto label_22e0a8;
        case 0x22e0acu: goto label_22e0ac;
        case 0x22e0b0u: goto label_22e0b0;
        case 0x22e0b4u: goto label_22e0b4;
        case 0x22e0b8u: goto label_22e0b8;
        case 0x22e0bcu: goto label_22e0bc;
        case 0x22e0c0u: goto label_22e0c0;
        case 0x22e0c4u: goto label_22e0c4;
        case 0x22e0c8u: goto label_22e0c8;
        case 0x22e0ccu: goto label_22e0cc;
        case 0x22e0d0u: goto label_22e0d0;
        case 0x22e0d4u: goto label_22e0d4;
        case 0x22e0d8u: goto label_22e0d8;
        case 0x22e0dcu: goto label_22e0dc;
        case 0x22e0e0u: goto label_22e0e0;
        case 0x22e0e4u: goto label_22e0e4;
        case 0x22e0e8u: goto label_22e0e8;
        case 0x22e0ecu: goto label_22e0ec;
        case 0x22e0f0u: goto label_22e0f0;
        case 0x22e0f4u: goto label_22e0f4;
        case 0x22e0f8u: goto label_22e0f8;
        case 0x22e0fcu: goto label_22e0fc;
        case 0x22e100u: goto label_22e100;
        case 0x22e104u: goto label_22e104;
        case 0x22e108u: goto label_22e108;
        case 0x22e10cu: goto label_22e10c;
        case 0x22e110u: goto label_22e110;
        case 0x22e114u: goto label_22e114;
        case 0x22e118u: goto label_22e118;
        case 0x22e11cu: goto label_22e11c;
        case 0x22e120u: goto label_22e120;
        case 0x22e124u: goto label_22e124;
        case 0x22e128u: goto label_22e128;
        case 0x22e12cu: goto label_22e12c;
        case 0x22e130u: goto label_22e130;
        case 0x22e134u: goto label_22e134;
        case 0x22e138u: goto label_22e138;
        case 0x22e13cu: goto label_22e13c;
        case 0x22e140u: goto label_22e140;
        case 0x22e144u: goto label_22e144;
        case 0x22e148u: goto label_22e148;
        case 0x22e14cu: goto label_22e14c;
        case 0x22e150u: goto label_22e150;
        case 0x22e154u: goto label_22e154;
        case 0x22e158u: goto label_22e158;
        case 0x22e15cu: goto label_22e15c;
        case 0x22e160u: goto label_22e160;
        case 0x22e164u: goto label_22e164;
        case 0x22e168u: goto label_22e168;
        case 0x22e16cu: goto label_22e16c;
        case 0x22e170u: goto label_22e170;
        case 0x22e174u: goto label_22e174;
        case 0x22e178u: goto label_22e178;
        case 0x22e17cu: goto label_22e17c;
        case 0x22e180u: goto label_22e180;
        case 0x22e184u: goto label_22e184;
        case 0x22e188u: goto label_22e188;
        case 0x22e18cu: goto label_22e18c;
        case 0x22e190u: goto label_22e190;
        case 0x22e194u: goto label_22e194;
        case 0x22e198u: goto label_22e198;
        case 0x22e19cu: goto label_22e19c;
        case 0x22e1a0u: goto label_22e1a0;
        case 0x22e1a4u: goto label_22e1a4;
        case 0x22e1a8u: goto label_22e1a8;
        case 0x22e1acu: goto label_22e1ac;
        case 0x22e1b0u: goto label_22e1b0;
        case 0x22e1b4u: goto label_22e1b4;
        case 0x22e1b8u: goto label_22e1b8;
        case 0x22e1bcu: goto label_22e1bc;
        case 0x22e1c0u: goto label_22e1c0;
        case 0x22e1c4u: goto label_22e1c4;
        case 0x22e1c8u: goto label_22e1c8;
        case 0x22e1ccu: goto label_22e1cc;
        case 0x22e1d0u: goto label_22e1d0;
        case 0x22e1d4u: goto label_22e1d4;
        case 0x22e1d8u: goto label_22e1d8;
        case 0x22e1dcu: goto label_22e1dc;
        case 0x22e1e0u: goto label_22e1e0;
        case 0x22e1e4u: goto label_22e1e4;
        case 0x22e1e8u: goto label_22e1e8;
        case 0x22e1ecu: goto label_22e1ec;
        case 0x22e1f0u: goto label_22e1f0;
        case 0x22e1f4u: goto label_22e1f4;
        case 0x22e1f8u: goto label_22e1f8;
        case 0x22e1fcu: goto label_22e1fc;
        case 0x22e200u: goto label_22e200;
        case 0x22e204u: goto label_22e204;
        case 0x22e208u: goto label_22e208;
        case 0x22e20cu: goto label_22e20c;
        case 0x22e210u: goto label_22e210;
        case 0x22e214u: goto label_22e214;
        case 0x22e218u: goto label_22e218;
        case 0x22e21cu: goto label_22e21c;
        case 0x22e220u: goto label_22e220;
        case 0x22e224u: goto label_22e224;
        case 0x22e228u: goto label_22e228;
        case 0x22e22cu: goto label_22e22c;
        case 0x22e230u: goto label_22e230;
        case 0x22e234u: goto label_22e234;
        case 0x22e238u: goto label_22e238;
        case 0x22e23cu: goto label_22e23c;
        case 0x22e240u: goto label_22e240;
        case 0x22e244u: goto label_22e244;
        case 0x22e248u: goto label_22e248;
        case 0x22e24cu: goto label_22e24c;
        case 0x22e250u: goto label_22e250;
        case 0x22e254u: goto label_22e254;
        case 0x22e258u: goto label_22e258;
        case 0x22e25cu: goto label_22e25c;
        case 0x22e260u: goto label_22e260;
        case 0x22e264u: goto label_22e264;
        case 0x22e268u: goto label_22e268;
        case 0x22e26cu: goto label_22e26c;
        case 0x22e270u: goto label_22e270;
        case 0x22e274u: goto label_22e274;
        case 0x22e278u: goto label_22e278;
        case 0x22e27cu: goto label_22e27c;
        case 0x22e280u: goto label_22e280;
        case 0x22e284u: goto label_22e284;
        case 0x22e288u: goto label_22e288;
        case 0x22e28cu: goto label_22e28c;
        case 0x22e290u: goto label_22e290;
        case 0x22e294u: goto label_22e294;
        case 0x22e298u: goto label_22e298;
        case 0x22e29cu: goto label_22e29c;
        case 0x22e2a0u: goto label_22e2a0;
        case 0x22e2a4u: goto label_22e2a4;
        case 0x22e2a8u: goto label_22e2a8;
        case 0x22e2acu: goto label_22e2ac;
        case 0x22e2b0u: goto label_22e2b0;
        case 0x22e2b4u: goto label_22e2b4;
        case 0x22e2b8u: goto label_22e2b8;
        case 0x22e2bcu: goto label_22e2bc;
        case 0x22e2c0u: goto label_22e2c0;
        case 0x22e2c4u: goto label_22e2c4;
        case 0x22e2c8u: goto label_22e2c8;
        case 0x22e2ccu: goto label_22e2cc;
        case 0x22e2d0u: goto label_22e2d0;
        case 0x22e2d4u: goto label_22e2d4;
        case 0x22e2d8u: goto label_22e2d8;
        case 0x22e2dcu: goto label_22e2dc;
        case 0x22e2e0u: goto label_22e2e0;
        case 0x22e2e4u: goto label_22e2e4;
        case 0x22e2e8u: goto label_22e2e8;
        case 0x22e2ecu: goto label_22e2ec;
        case 0x22e2f0u: goto label_22e2f0;
        case 0x22e2f4u: goto label_22e2f4;
        case 0x22e2f8u: goto label_22e2f8;
        case 0x22e2fcu: goto label_22e2fc;
        case 0x22e300u: goto label_22e300;
        case 0x22e304u: goto label_22e304;
        case 0x22e308u: goto label_22e308;
        case 0x22e30cu: goto label_22e30c;
        case 0x22e310u: goto label_22e310;
        case 0x22e314u: goto label_22e314;
        case 0x22e318u: goto label_22e318;
        case 0x22e31cu: goto label_22e31c;
        case 0x22e320u: goto label_22e320;
        case 0x22e324u: goto label_22e324;
        case 0x22e328u: goto label_22e328;
        case 0x22e32cu: goto label_22e32c;
        case 0x22e330u: goto label_22e330;
        case 0x22e334u: goto label_22e334;
        case 0x22e338u: goto label_22e338;
        case 0x22e33cu: goto label_22e33c;
        case 0x22e340u: goto label_22e340;
        case 0x22e344u: goto label_22e344;
        case 0x22e348u: goto label_22e348;
        case 0x22e34cu: goto label_22e34c;
        case 0x22e350u: goto label_22e350;
        case 0x22e354u: goto label_22e354;
        case 0x22e358u: goto label_22e358;
        case 0x22e35cu: goto label_22e35c;
        case 0x22e360u: goto label_22e360;
        case 0x22e364u: goto label_22e364;
        case 0x22e368u: goto label_22e368;
        case 0x22e36cu: goto label_22e36c;
        case 0x22e370u: goto label_22e370;
        case 0x22e374u: goto label_22e374;
        case 0x22e378u: goto label_22e378;
        case 0x22e37cu: goto label_22e37c;
        case 0x22e380u: goto label_22e380;
        case 0x22e384u: goto label_22e384;
        case 0x22e388u: goto label_22e388;
        case 0x22e38cu: goto label_22e38c;
        case 0x22e390u: goto label_22e390;
        case 0x22e394u: goto label_22e394;
        case 0x22e398u: goto label_22e398;
        case 0x22e39cu: goto label_22e39c;
        case 0x22e3a0u: goto label_22e3a0;
        case 0x22e3a4u: goto label_22e3a4;
        case 0x22e3a8u: goto label_22e3a8;
        case 0x22e3acu: goto label_22e3ac;
        case 0x22e3b0u: goto label_22e3b0;
        case 0x22e3b4u: goto label_22e3b4;
        case 0x22e3b8u: goto label_22e3b8;
        case 0x22e3bcu: goto label_22e3bc;
        case 0x22e3c0u: goto label_22e3c0;
        case 0x22e3c4u: goto label_22e3c4;
        case 0x22e3c8u: goto label_22e3c8;
        case 0x22e3ccu: goto label_22e3cc;
        case 0x22e3d0u: goto label_22e3d0;
        case 0x22e3d4u: goto label_22e3d4;
        case 0x22e3d8u: goto label_22e3d8;
        case 0x22e3dcu: goto label_22e3dc;
        case 0x22e3e0u: goto label_22e3e0;
        case 0x22e3e4u: goto label_22e3e4;
        case 0x22e3e8u: goto label_22e3e8;
        case 0x22e3ecu: goto label_22e3ec;
        case 0x22e3f0u: goto label_22e3f0;
        case 0x22e3f4u: goto label_22e3f4;
        case 0x22e3f8u: goto label_22e3f8;
        case 0x22e3fcu: goto label_22e3fc;
        case 0x22e400u: goto label_22e400;
        case 0x22e404u: goto label_22e404;
        case 0x22e408u: goto label_22e408;
        case 0x22e40cu: goto label_22e40c;
        case 0x22e410u: goto label_22e410;
        case 0x22e414u: goto label_22e414;
        case 0x22e418u: goto label_22e418;
        case 0x22e41cu: goto label_22e41c;
        case 0x22e420u: goto label_22e420;
        case 0x22e424u: goto label_22e424;
        case 0x22e428u: goto label_22e428;
        case 0x22e42cu: goto label_22e42c;
        case 0x22e430u: goto label_22e430;
        case 0x22e434u: goto label_22e434;
        case 0x22e438u: goto label_22e438;
        case 0x22e43cu: goto label_22e43c;
        case 0x22e440u: goto label_22e440;
        case 0x22e444u: goto label_22e444;
        case 0x22e448u: goto label_22e448;
        case 0x22e44cu: goto label_22e44c;
        case 0x22e450u: goto label_22e450;
        case 0x22e454u: goto label_22e454;
        case 0x22e458u: goto label_22e458;
        case 0x22e45cu: goto label_22e45c;
        case 0x22e460u: goto label_22e460;
        case 0x22e464u: goto label_22e464;
        case 0x22e468u: goto label_22e468;
        case 0x22e46cu: goto label_22e46c;
        case 0x22e470u: goto label_22e470;
        case 0x22e474u: goto label_22e474;
        case 0x22e478u: goto label_22e478;
        case 0x22e47cu: goto label_22e47c;
        case 0x22e480u: goto label_22e480;
        case 0x22e484u: goto label_22e484;
        case 0x22e488u: goto label_22e488;
        case 0x22e48cu: goto label_22e48c;
        case 0x22e490u: goto label_22e490;
        case 0x22e494u: goto label_22e494;
        case 0x22e498u: goto label_22e498;
        case 0x22e49cu: goto label_22e49c;
        case 0x22e4a0u: goto label_22e4a0;
        case 0x22e4a4u: goto label_22e4a4;
        case 0x22e4a8u: goto label_22e4a8;
        case 0x22e4acu: goto label_22e4ac;
        case 0x22e4b0u: goto label_22e4b0;
        case 0x22e4b4u: goto label_22e4b4;
        case 0x22e4b8u: goto label_22e4b8;
        case 0x22e4bcu: goto label_22e4bc;
        case 0x22e4c0u: goto label_22e4c0;
        case 0x22e4c4u: goto label_22e4c4;
        case 0x22e4c8u: goto label_22e4c8;
        case 0x22e4ccu: goto label_22e4cc;
        case 0x22e4d0u: goto label_22e4d0;
        case 0x22e4d4u: goto label_22e4d4;
        case 0x22e4d8u: goto label_22e4d8;
        case 0x22e4dcu: goto label_22e4dc;
        case 0x22e4e0u: goto label_22e4e0;
        case 0x22e4e4u: goto label_22e4e4;
        case 0x22e4e8u: goto label_22e4e8;
        case 0x22e4ecu: goto label_22e4ec;
        case 0x22e4f0u: goto label_22e4f0;
        case 0x22e4f4u: goto label_22e4f4;
        case 0x22e4f8u: goto label_22e4f8;
        case 0x22e4fcu: goto label_22e4fc;
        case 0x22e500u: goto label_22e500;
        case 0x22e504u: goto label_22e504;
        case 0x22e508u: goto label_22e508;
        case 0x22e50cu: goto label_22e50c;
        case 0x22e510u: goto label_22e510;
        case 0x22e514u: goto label_22e514;
        case 0x22e518u: goto label_22e518;
        case 0x22e51cu: goto label_22e51c;
        case 0x22e520u: goto label_22e520;
        case 0x22e524u: goto label_22e524;
        case 0x22e528u: goto label_22e528;
        case 0x22e52cu: goto label_22e52c;
        case 0x22e530u: goto label_22e530;
        case 0x22e534u: goto label_22e534;
        case 0x22e538u: goto label_22e538;
        case 0x22e53cu: goto label_22e53c;
        case 0x22e540u: goto label_22e540;
        case 0x22e544u: goto label_22e544;
        case 0x22e548u: goto label_22e548;
        case 0x22e54cu: goto label_22e54c;
        case 0x22e550u: goto label_22e550;
        case 0x22e554u: goto label_22e554;
        case 0x22e558u: goto label_22e558;
        case 0x22e55cu: goto label_22e55c;
        case 0x22e560u: goto label_22e560;
        case 0x22e564u: goto label_22e564;
        case 0x22e568u: goto label_22e568;
        case 0x22e56cu: goto label_22e56c;
        case 0x22e570u: goto label_22e570;
        case 0x22e574u: goto label_22e574;
        case 0x22e578u: goto label_22e578;
        case 0x22e57cu: goto label_22e57c;
        case 0x22e580u: goto label_22e580;
        case 0x22e584u: goto label_22e584;
        case 0x22e588u: goto label_22e588;
        case 0x22e58cu: goto label_22e58c;
        case 0x22e590u: goto label_22e590;
        case 0x22e594u: goto label_22e594;
        case 0x22e598u: goto label_22e598;
        case 0x22e59cu: goto label_22e59c;
        case 0x22e5a0u: goto label_22e5a0;
        case 0x22e5a4u: goto label_22e5a4;
        default: return;
    }

label_22ddd8:
    // 0x22ddd8: 0x0  nop
    ctx->pc = 0x22ddd8u;
    // NOP
label_22dddc:
    // 0x22dddc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22dddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_22dde0:
    // 0x22dde0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22dde0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dde4:
    // 0x22dde4: 0x0  nop
    ctx->pc = 0x22dde4u;
    // NOP
label_22dde8:
    // 0x22dde8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22ddec:
    if (ctx->pc == 0x22DDECu) {
        ctx->pc = 0x22DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDE8u;
        // 0x22ddec: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DDF0u;
        goto label_22ddf0;
    }
    ctx->pc = 0x22DDE8u;
    {
        const bool branch_taken_0x22dde8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDE8u;
        // 0x22ddec: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dde8) {
            ctx->pc = 0x22DE04u;
            goto label_22de04;
        }
    }
    ctx->pc = 0x22DDF0u;
label_22ddf0:
    // 0x22ddf0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22ddf4:
    // 0x22ddf4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22ddf8:
    // 0x22ddf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ddf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ddfc:
    // 0x22ddfc: 0x1000000d  b           . + 4 + (0xD << 2)
label_22de00:
    if (ctx->pc == 0x22DE00u) {
        ctx->pc = 0x22DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDFCu;
        // 0x22de00: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE04u;
        goto label_22de04;
    }
    ctx->pc = 0x22DDFCu;
    {
        const bool branch_taken_0x22ddfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDFCu;
        // 0x22de00: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ddfc) {
            ctx->pc = 0x22DE34u;
            goto label_22de34;
        }
    }
    ctx->pc = 0x22DE04u;
label_22de04:
    // 0x22de04: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22de04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_22de08:
    // 0x22de08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22de08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22de0c:
    // 0x22de0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22de0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22de10:
    // 0x22de10: 0x0  nop
    ctx->pc = 0x22de10u;
    // NOP
label_22de14:
    // 0x22de14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22de14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22de18:
    // 0x22de18: 0x0  nop
    ctx->pc = 0x22de18u;
    // NOP
label_22de1c:
    // 0x22de1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22de20:
    if (ctx->pc == 0x22DE20u) {
        ctx->pc = 0x22DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE1Cu;
        // 0x22de20: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE24u;
        goto label_22de24;
    }
    ctx->pc = 0x22DE1Cu;
    {
        const bool branch_taken_0x22de1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE1Cu;
        // 0x22de20: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de1c) {
            ctx->pc = 0x22DE34u;
            goto label_22de34;
        }
    }
    ctx->pc = 0x22DE24u;
label_22de24:
    // 0x22de24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22de28:
    // 0x22de28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22de28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22de2c:
    // 0x22de2c: 0x10000001  b           . + 4 + (0x1 << 2)
label_22de30:
    if (ctx->pc == 0x22DE30u) {
        ctx->pc = 0x22DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE2Cu;
        // 0x22de30: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE34u;
        goto label_22de34;
    }
    ctx->pc = 0x22DE2Cu;
    {
        const bool branch_taken_0x22de2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE2Cu;
        // 0x22de30: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de2c) {
            ctx->pc = 0x22DE34u;
            goto label_22de34;
        }
    }
    ctx->pc = 0x22DE34u;
label_22de34:
    // 0x22de34: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x22de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22de38:
    // 0x22de38: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22de38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22de3c:
    // 0x22de3c: 0xe6210058  swc1        $f1, 0x58($s1)
    ctx->pc = 0x22de3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_22de40:
    // 0x22de40: 0xc066e02  jal         func_19B808
label_22de44:
    if (ctx->pc == 0x22DE44u) {
        ctx->pc = 0x22DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE40u;
        // 0x22de44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE48u;
        goto label_22de48;
    }
    ctx->pc = 0x22DE40u;
    SET_GPR_U32(ctx, 31, 0x22DE48u);
    ctx->pc = 0x22DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE40u;
    // 0x22de44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22DE48u;
label_22de48:
    // 0x22de48: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x22de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_22de4c:
    // 0x22de4c: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22de4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22de50:
    // 0x22de50: 0xc066e02  jal         func_19B808
label_22de54:
    if (ctx->pc == 0x22DE54u) {
        ctx->pc = 0x22DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE50u;
        // 0x22de54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE58u;
        goto label_22de58;
    }
    ctx->pc = 0x22DE50u;
    SET_GPR_U32(ctx, 31, 0x22DE58u);
    ctx->pc = 0x22DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE50u;
    // 0x22de54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22DE58u;
label_22de58:
    // 0x22de58: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x22de58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_22de5c:
    // 0x22de5c: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22de5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22de60:
    // 0x22de60: 0xc066e02  jal         func_19B808
label_22de64:
    if (ctx->pc == 0x22DE64u) {
        ctx->pc = 0x22DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE60u;
        // 0x22de64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE68u;
        goto label_22de68;
    }
    ctx->pc = 0x22DE60u;
    SET_GPR_U32(ctx, 31, 0x22DE68u);
    ctx->pc = 0x22DE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE60u;
    // 0x22de64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22DE68u;
label_22de68:
    // 0x22de68: 0xc066e44  jal         func_19B910
label_22de6c:
    if (ctx->pc == 0x22DE6Cu) {
        ctx->pc = 0x22DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE68u;
        // 0x22de6c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE70u;
        goto label_22de70;
    }
    ctx->pc = 0x22DE68u;
    SET_GPR_U32(ctx, 31, 0x22DE70u);
    ctx->pc = 0x22DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE68u;
    // 0x22de6c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x22DE70u;
label_22de70:
    // 0x22de70: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x22de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22de74:
    // 0x22de74: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x22de74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_22de78:
    // 0x22de78: 0xc066e96  jal         func_19BA58
label_22de7c:
    if (ctx->pc == 0x22DE7Cu) {
        ctx->pc = 0x22DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE78u;
        // 0x22de7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE80u;
        goto label_22de80;
    }
    ctx->pc = 0x22DE78u;
    SET_GPR_U32(ctx, 31, 0x22DE80u);
    ctx->pc = 0x22DE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE78u;
    // 0x22de7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x22DE80u;
label_22de80:
    // 0x22de80: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x22de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22de84:
    // 0x22de84: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x22de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_22de88:
    // 0x22de88: 0xc066e6c  jal         func_19B9B0
label_22de8c:
    if (ctx->pc == 0x22DE8Cu) {
        ctx->pc = 0x22DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE88u;
        // 0x22de8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE90u;
        goto label_22de90;
    }
    ctx->pc = 0x22DE88u;
    SET_GPR_U32(ctx, 31, 0x22DE90u);
    ctx->pc = 0x22DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE88u;
    // 0x22de8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x22DE90u;
label_22de90:
    // 0x22de90: 0xc62c0054  lwc1        $f12, 0x54($s1)
    ctx->pc = 0x22de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22de94:
    // 0x22de94: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x22de94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_22de98:
    // 0x22de98: 0xc066ec0  jal         func_19BB00
label_22de9c:
    if (ctx->pc == 0x22DE9Cu) {
        ctx->pc = 0x22DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE98u;
        // 0x22de9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEA0u;
        goto label_22dea0;
    }
    ctx->pc = 0x22DE98u;
    SET_GPR_U32(ctx, 31, 0x22DEA0u);
    ctx->pc = 0x22DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE98u;
    // 0x22de9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x22DEA0u;
label_22dea0:
    // 0x22dea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22dea4:
    // 0x22dea4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x22dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_22dea8:
    // 0x22dea8: 0xc066e1a  jal         func_19B868
label_22deac:
    if (ctx->pc == 0x22DEACu) {
        ctx->pc = 0x22DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEA8u;
        // 0x22deac: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEB0u;
        goto label_22deb0;
    }
    ctx->pc = 0x22DEA8u;
    SET_GPR_U32(ctx, 31, 0x22DEB0u);
    ctx->pc = 0x22DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DEA8u;
    // 0x22deac: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x22DEB0u;
label_22deb0:
    // 0x22deb0: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
label_22deb4:
    if (ctx->pc == 0x22DEB4u) {
        ctx->pc = 0x22DEB8u;
        goto label_22deb8;
    }
    ctx->pc = 0x22DEB0u;
    {
        const bool branch_taken_0x22deb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22deb0) {
            ctx->pc = 0x22DFC4u;
            goto label_22dfc4;
        }
    }
    ctx->pc = 0x22DEB8u;
label_22deb8:
    // 0x22deb8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x22deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_22debc:
    // 0x22debc: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x22debcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_22dec0:
    // 0x22dec0: 0x27b000e4  addiu       $s0, $sp, 0xE4
    ctx->pc = 0x22dec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_22dec4:
    // 0x22dec4: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x22dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
label_22dec8:
    // 0x22dec8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x22dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_22decc:
    // 0x22decc: 0x27b200e8  addiu       $s2, $sp, 0xE8
    ctx->pc = 0x22deccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_22ded0:
    // 0x22ded0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x22ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_22ded4:
    // 0x22ded4: 0x27b300ec  addiu       $s3, $sp, 0xEC
    ctx->pc = 0x22ded4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_22ded8:
    // 0x22ded8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22dedc:
    // 0x22dedc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x22dedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_22dee0:
    // 0x22dee0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x22dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_22dee4:
    // 0x22dee4: 0xc066e26  jal         func_19B898
label_22dee8:
    if (ctx->pc == 0x22DEE8u) {
        ctx->pc = 0x22DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEE4u;
        // 0x22dee8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEECu;
        goto label_22deec;
    }
    ctx->pc = 0x22DEE4u;
    SET_GPR_U32(ctx, 31, 0x22DEECu);
    ctx->pc = 0x22DEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DEE4u;
    // 0x22dee8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22DEECu;
label_22deec:
    // 0x22deec: 0xc6340054  lwc1        $f20, 0x54($s1)
    ctx->pc = 0x22deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22def0:
    // 0x22def0: 0xc066e44  jal         func_19B910
label_22def4:
    if (ctx->pc == 0x22DEF4u) {
        ctx->pc = 0x22DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEF0u;
        // 0x22def4: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEF8u;
        goto label_22def8;
    }
    ctx->pc = 0x22DEF0u;
    SET_GPR_U32(ctx, 31, 0x22DEF8u);
    ctx->pc = 0x22DEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DEF0u;
    // 0x22def4: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x22DEF8u;
label_22def8:
    // 0x22def8: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x22def8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_22defc:
    // 0x22defc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22defcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22df00:
    // 0x22df00: 0xc066ec0  jal         func_19BB00
label_22df04:
    if (ctx->pc == 0x22DF04u) {
        ctx->pc = 0x22DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF00u;
        // 0x22df04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF08u;
        goto label_22df08;
    }
    ctx->pc = 0x22DF00u;
    SET_GPR_U32(ctx, 31, 0x22DF08u);
    ctx->pc = 0x22DF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF00u;
    // 0x22df04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x22DF08u;
label_22df08:
    // 0x22df08: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x22df08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_22df0c:
    // 0x22df0c: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x22df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_22df10:
    // 0x22df10: 0xc066d7a  jal         func_19B5E8
label_22df14:
    if (ctx->pc == 0x22DF14u) {
        ctx->pc = 0x22DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF10u;
        // 0x22df14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF18u;
        goto label_22df18;
    }
    ctx->pc = 0x22DF10u;
    SET_GPR_U32(ctx, 31, 0x22DF18u);
    ctx->pc = 0x22DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF10u;
    // 0x22df14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x22DF10u, 0x22DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF18u;
label_22df18:
    // 0x22df18: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x22df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_22df1c:
    // 0x22df1c: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x22df1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22df20:
    // 0x22df20: 0xc066e02  jal         func_19B808
label_22df24:
    if (ctx->pc == 0x22DF24u) {
        ctx->pc = 0x22DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF20u;
        // 0x22df24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF28u;
        goto label_22df28;
    }
    ctx->pc = 0x22DF20u;
    SET_GPR_U32(ctx, 31, 0x22DF28u);
    ctx->pc = 0x22DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF20u;
    // 0x22df24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22DF28u;
label_22df28:
    // 0x22df28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22df28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22df2c:
    // 0x22df2c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x22df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_22df30:
    // 0x22df30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22df30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22df34:
    // 0x22df34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22df34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22df38:
    // 0x22df38: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x22df38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22df3c:
    // 0x22df3c: 0xc04bc90  jal         func_12F240
label_22df40:
    if (ctx->pc == 0x22DF40u) {
        ctx->pc = 0x22DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF3Cu;
        // 0x22df40: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF44u;
        goto label_22df44;
    }
    ctx->pc = 0x22DF3Cu;
    SET_GPR_U32(ctx, 31, 0x22DF44u);
    ctx->pc = 0x22DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF3Cu;
    // 0x22df40: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F240u, 0x22DF3Cu, 0x22DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF44u;
label_22df44:
    // 0x22df44: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x22df44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_22df48:
    // 0x22df48: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x22df48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_22df4c:
    // 0x22df4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22df50:
    // 0x22df50: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x22df50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_22df54:
    // 0x22df54: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x22df54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_22df58:
    // 0x22df58: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x22df58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_22df5c:
    // 0x22df5c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x22df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_22df60:
    // 0x22df60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22df60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22df64:
    // 0x22df64: 0xc066e26  jal         func_19B898
label_22df68:
    if (ctx->pc == 0x22DF68u) {
        ctx->pc = 0x22DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF64u;
        // 0x22df68: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF6Cu;
        goto label_22df6c;
    }
    ctx->pc = 0x22DF64u;
    SET_GPR_U32(ctx, 31, 0x22DF6Cu);
    ctx->pc = 0x22DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF64u;
    // 0x22df68: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22DF6Cu;
label_22df6c:
    // 0x22df6c: 0xc6340054  lwc1        $f20, 0x54($s1)
    ctx->pc = 0x22df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22df70:
    // 0x22df70: 0xc066e44  jal         func_19B910
label_22df74:
    if (ctx->pc == 0x22DF74u) {
        ctx->pc = 0x22DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF70u;
        // 0x22df74: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF78u;
        goto label_22df78;
    }
    ctx->pc = 0x22DF70u;
    SET_GPR_U32(ctx, 31, 0x22DF78u);
    ctx->pc = 0x22DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF70u;
    // 0x22df74: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x22DF78u;
label_22df78:
    // 0x22df78: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x22df78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_22df7c:
    // 0x22df7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22df7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22df80:
    // 0x22df80: 0xc066ec0  jal         func_19BB00
label_22df84:
    if (ctx->pc == 0x22DF84u) {
        ctx->pc = 0x22DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF80u;
        // 0x22df84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF88u;
        goto label_22df88;
    }
    ctx->pc = 0x22DF80u;
    SET_GPR_U32(ctx, 31, 0x22DF88u);
    ctx->pc = 0x22DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF80u;
    // 0x22df84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x22DF88u;
label_22df88:
    // 0x22df88: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x22df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_22df8c:
    // 0x22df8c: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x22df8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_22df90:
    // 0x22df90: 0xc066d7a  jal         func_19B5E8
label_22df94:
    if (ctx->pc == 0x22DF94u) {
        ctx->pc = 0x22DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF90u;
        // 0x22df94: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF98u;
        goto label_22df98;
    }
    ctx->pc = 0x22DF90u;
    SET_GPR_U32(ctx, 31, 0x22DF98u);
    ctx->pc = 0x22DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF90u;
    // 0x22df94: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x22DF90u, 0x22DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF98u;
label_22df98:
    // 0x22df98: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x22df98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_22df9c:
    // 0x22df9c: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x22df9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22dfa0:
    // 0x22dfa0: 0xc066e02  jal         func_19B808
label_22dfa4:
    if (ctx->pc == 0x22DFA4u) {
        ctx->pc = 0x22DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFA0u;
        // 0x22dfa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DFA8u;
        goto label_22dfa8;
    }
    ctx->pc = 0x22DFA0u;
    SET_GPR_U32(ctx, 31, 0x22DFA8u);
    ctx->pc = 0x22DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFA0u;
    // 0x22dfa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22DFA8u;
label_22dfa8:
    // 0x22dfa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22dfac:
    // 0x22dfac: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x22dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_22dfb0:
    // 0x22dfb0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22dfb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22dfb4:
    // 0x22dfb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22dfb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dfb8:
    // 0x22dfb8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x22dfb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22dfbc:
    // 0x22dfbc: 0xc04bc90  jal         func_12F240
label_22dfc0:
    if (ctx->pc == 0x22DFC0u) {
        ctx->pc = 0x22DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFBCu;
        // 0x22dfc0: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DFC4u;
        goto label_22dfc4;
    }
    ctx->pc = 0x22DFBCu;
    SET_GPR_U32(ctx, 31, 0x22DFC4u);
    ctx->pc = 0x22DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DFBCu;
    // 0x22dfc0: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F240u, 0x22DFBCu, 0x22DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DFC4u;
label_22dfc4:
    // 0x22dfc4: 0x96a30012  lhu         $v1, 0x12($s5)
    ctx->pc = 0x22dfc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
label_22dfc8:
    // 0x22dfc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22dfcc:
    // 0x22dfcc: 0xa6a30012  sh          $v1, 0x12($s5)
    ctx->pc = 0x22dfccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 18), (uint16_t)GPR_U32(ctx, 3));
label_22dfd0:
    // 0x22dfd0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x22dfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22dfd4:
    // 0x22dfd4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22dfd8:
    // 0x22dfd8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x22dfd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22dfdc:
    // 0x22dfdc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x22dfdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22dfe0:
    // 0x22dfe0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x22dfe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22dfe4:
    // 0x22dfe4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22dfe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22dfe8:
    // 0x22dfe8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22dfe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22dfec:
    // 0x22dfec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22dfecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22dff0:
    // 0x22dff0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22dff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22dff4:
    // 0x22dff4: 0x3e00008  jr          $ra
label_22dff8:
    if (ctx->pc == 0x22DFF8u) {
        ctx->pc = 0x22DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFF4u;
        // 0x22dff8: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DFFCu;
        goto label_22dffc;
    }
    ctx->pc = 0x22DFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFF4u;
        // 0x22dff8: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DFFCu;
label_22dffc:
    // 0x22dffc: 0x0  nop
    ctx->pc = 0x22dffcu;
    // NOP
label_22e000:
    // 0x22e000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22e004:
    // 0x22e004: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22e004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22e008:
    // 0x22e008: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22e008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22e00c:
    // 0x22e00c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22e00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22e010:
    // 0x22e010: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22e010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22e014:
    // 0x22e014: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22e018:
    // 0x22e018: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22e018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22e01c:
    // 0x22e01c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22e020:
    // 0x22e020: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22e020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22e024:
    // 0x22e024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22e028:
    // 0x22e028: 0x8f9085d0  lw          $s0, -0x7A30($gp)
    ctx->pc = 0x22e028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22e02c:
    // 0x22e02c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_22e030:
    if (ctx->pc == 0x22E030u) {
        ctx->pc = 0x22E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E02Cu;
        // 0x22e030: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E034u;
        goto label_22e034;
    }
    ctx->pc = 0x22E02Cu;
    {
        const bool branch_taken_0x22e02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E02Cu;
        // 0x22e030: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e02c) {
            ctx->pc = 0x22E074u;
            goto label_22e074;
        }
    }
    ctx->pc = 0x22E034u;
label_22e034:
    // 0x22e034: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x22e034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22e038:
    // 0x22e038: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22e038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22e03c:
    // 0x22e03c: 0x92030094  lbu         $v1, 0x94($s0)
    ctx->pc = 0x22e03cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
label_22e040:
    // 0x22e040: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
label_22e044:
    if (ctx->pc == 0x22E044u) {
        ctx->pc = 0x22E048u;
        goto label_22e048;
    }
    ctx->pc = 0x22E040u;
    {
        const bool branch_taken_0x22e040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x22e040) {
            ctx->pc = 0x22E064u;
            goto label_22e064;
        }
    }
    ctx->pc = 0x22E048u;
label_22e048:
    // 0x22e048: 0x92030096  lbu         $v1, 0x96($s0)
    ctx->pc = 0x22e048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
label_22e04c:
    // 0x22e04c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_22e050:
    if (ctx->pc == 0x22E050u) {
        ctx->pc = 0x22E054u;
        goto label_22e054;
    }
    ctx->pc = 0x22E04Cu;
    {
        const bool branch_taken_0x22e04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22e04c) {
            ctx->pc = 0x22E064u;
            goto label_22e064;
        }
    }
    ctx->pc = 0x22E054u;
label_22e054:
    // 0x22e054: 0x9203009c  lbu         $v1, 0x9C($s0)
    ctx->pc = 0x22e054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_22e058:
    // 0x22e058: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x22e058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_22e05c:
    // 0x22e05c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_22e060:
    if (ctx->pc == 0x22E060u) {
        ctx->pc = 0x22E064u;
        goto label_22e064;
    }
    ctx->pc = 0x22E05Cu;
    {
        const bool branch_taken_0x22e05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e05c) {
            ctx->pc = 0x22E074u;
            goto label_22e074;
        }
    }
    ctx->pc = 0x22E064u;
label_22e064:
    // 0x22e064: 0x0  nop
    ctx->pc = 0x22e064u;
    // NOP
label_22e068:
    // 0x22e068: 0x8e100084  lw          $s0, 0x84($s0)
    ctx->pc = 0x22e068u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22e06c:
    // 0x22e06c: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_22e070:
    if (ctx->pc == 0x22E070u) {
        ctx->pc = 0x22E074u;
        goto label_22e074;
    }
    ctx->pc = 0x22E06Cu;
    {
        const bool branch_taken_0x22e06c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e06c) {
            ctx->pc = 0x22E03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e03c;
        }
    }
    ctx->pc = 0x22E074u;
label_22e074:
    // 0x22e074: 0x0  nop
    ctx->pc = 0x22e074u;
    // NOP
label_22e078:
    // 0x22e078: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_22e07c:
    if (ctx->pc == 0x22E07Cu) {
        ctx->pc = 0x22E080u;
        goto label_22e080;
    }
    ctx->pc = 0x22E078u;
    {
        const bool branch_taken_0x22e078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e078) {
            ctx->pc = 0x22E0DCu;
            goto label_22e0dc;
        }
    }
    ctx->pc = 0x22E080u;
label_22e080:
    // 0x22e080: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x22e080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_22e084:
    // 0x22e084: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22e084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22e088:
    // 0x22e088: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x22e088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_22e08c:
    // 0x22e08c: 0xc0590dc  jal         func_164370
label_22e090:
    if (ctx->pc == 0x22E090u) {
        ctx->pc = 0x22E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E08Cu;
        // 0x22e090: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E094u;
        goto label_22e094;
    }
    ctx->pc = 0x22E08Cu;
    SET_GPR_U32(ctx, 31, 0x22E094u);
    ctx->pc = 0x22E090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E08Cu;
    // 0x22e090: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22E08Cu, 0x22E094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E094u;
label_22e094:
    // 0x22e094: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_22e098:
    if (ctx->pc == 0x22E098u) {
        ctx->pc = 0x22E09Cu;
        goto label_22e09c;
    }
    ctx->pc = 0x22E094u;
    {
        const bool branch_taken_0x22e094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e094) {
            ctx->pc = 0x22E0DCu;
            goto label_22e0dc;
        }
    }
    ctx->pc = 0x22E09Cu;
label_22e09c:
    // 0x22e09c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x22e09cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e0a0:
    // 0x22e0a0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_22e0a4:
    // 0x22e0a4: 0xac50005c  sw          $s0, 0x5C($v0)
    ctx->pc = 0x22e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 16));
label_22e0a8:
    // 0x22e0a8: 0x3c04c120  lui         $a0, 0xC120
    ctx->pc = 0x22e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
label_22e0ac:
    // 0x22e0ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22e0acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22e0b0:
    // 0x22e0b0: 0x2463e100  addiu       $v1, $v1, -0x1F00
    ctx->pc = 0x22e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959360));
label_22e0b4:
    // 0x22e0b4: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x22e0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_22e0b8:
    // 0x22e0b8: 0xa4540014  sh          $s4, 0x14($v0)
    ctx->pc = 0x22e0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 20));
label_22e0bc:
    // 0x22e0bc: 0xa4530016  sh          $s3, 0x16($v0)
    ctx->pc = 0x22e0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 19));
label_22e0c0:
    // 0x22e0c0: 0xa4520018  sh          $s2, 0x18($v0)
    ctx->pc = 0x22e0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 18));
label_22e0c4:
    // 0x22e0c4: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x22e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
label_22e0c8:
    // 0x22e0c8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x22e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_22e0cc:
    // 0x22e0cc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x22e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_22e0d0:
    // 0x22e0d0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x22e0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_22e0d4:
    // 0x22e0d4: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x22e0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
label_22e0d8:
    // 0x22e0d8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x22e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_22e0dc:
    // 0x22e0dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22e0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22e0e0:
    // 0x22e0e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22e0e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22e0e4:
    // 0x22e0e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22e0e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22e0e8:
    // 0x22e0e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e0e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e0ec:
    // 0x22e0ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e0ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e0f0:
    // 0x22e0f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22e0f4:
    // 0x22e0f4: 0x3e00008  jr          $ra
label_22e0f8:
    if (ctx->pc == 0x22E0F8u) {
        ctx->pc = 0x22E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0F4u;
        // 0x22e0f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E0FCu;
        goto label_22e0fc;
    }
    ctx->pc = 0x22E0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0F4u;
        // 0x22e0f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E0FCu;
label_22e0fc:
    // 0x22e0fc: 0x0  nop
    ctx->pc = 0x22e0fcu;
    // NOP
label_22e100:
    // 0x22e100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22e100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_22e104:
    // 0x22e104: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22e104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22e108:
    // 0x22e108: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22e108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22e10c:
    // 0x22e10c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22e110:
    // 0x22e110: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22e110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22e114:
    // 0x22e114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22e118:
    // 0x22e118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22e11c:
    // 0x22e11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22e120:
    // 0x22e120: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x22e120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22e124:
    // 0x22e124: 0x8c90005c  lw          $s0, 0x5C($a0)
    ctx->pc = 0x22e124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22e128:
    // 0x22e128: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22e12c:
    if (ctx->pc == 0x22E12Cu) {
        ctx->pc = 0x22E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E128u;
        // 0x22e12c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E130u;
        goto label_22e130;
    }
    ctx->pc = 0x22E128u;
    {
        const bool branch_taken_0x22e128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E128u;
        // 0x22e12c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e128) {
            ctx->pc = 0x22E138u;
            goto label_22e138;
        }
    }
    ctx->pc = 0x22E130u;
label_22e130:
    // 0x22e130: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_22e134:
    if (ctx->pc == 0x22E134u) {
        ctx->pc = 0x22E138u;
        goto label_22e138;
    }
    ctx->pc = 0x22E130u;
    {
        const bool branch_taken_0x22e130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e130) {
            ctx->pc = 0x22E154u;
            goto label_22e154;
        }
    }
    ctx->pc = 0x22E138u;
label_22e138:
    // 0x22e138: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x22e138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_22e13c:
    // 0x22e13c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22e13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22e140:
    // 0x22e140: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x22e140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_22e144:
    // 0x22e144: 0xc0591f4  jal         func_1647D0
label_22e148:
    if (ctx->pc == 0x22E148u) {
        ctx->pc = 0x22E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E144u;
        // 0x22e148: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E14Cu;
        goto label_22e14c;
    }
    ctx->pc = 0x22E144u;
    SET_GPR_U32(ctx, 31, 0x22E14Cu);
    ctx->pc = 0x22E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E144u;
    // 0x22e148: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22E144u, 0x22E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E14Cu;
label_22e14c:
    // 0x22e14c: 0x10000056  b           . + 4 + (0x56 << 2)
label_22e150:
    if (ctx->pc == 0x22E150u) {
        ctx->pc = 0x22E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E14Cu;
        // 0x22e150: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E154u;
        goto label_22e154;
    }
    ctx->pc = 0x22E14Cu;
    {
        const bool branch_taken_0x22e14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E14Cu;
        // 0x22e150: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e14c) {
            ctx->pc = 0x22E2A8u;
            goto label_22e2a8;
        }
    }
    ctx->pc = 0x22E154u;
label_22e154:
    // 0x22e154: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x22e154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e158:
    // 0x22e158: 0x96630012  lhu         $v1, 0x12($s3)
    ctx->pc = 0x22e158u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_22e15c:
    // 0x22e15c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22e15cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22e160:
    // 0x22e160: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x22e160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_22e164:
    // 0x22e164: 0x0  nop
    ctx->pc = 0x22e164u;
    // NOP
label_22e168:
    // 0x22e168: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x22e168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_22e16c:
    // 0x22e16c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_22e170:
    if (ctx->pc == 0x22E170u) {
        ctx->pc = 0x22E174u;
        goto label_22e174;
    }
    ctx->pc = 0x22E16Cu;
    {
        const bool branch_taken_0x22e16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e16c) {
            ctx->pc = 0x22E1ACu;
            goto label_22e1ac;
        }
    }
    ctx->pc = 0x22E174u;
label_22e174:
    // 0x22e174: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_22e178:
    if (ctx->pc == 0x22E178u) {
        ctx->pc = 0x22E17Cu;
        goto label_22e17c;
    }
    ctx->pc = 0x22E174u;
    {
        const bool branch_taken_0x22e174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22e174) {
            ctx->pc = 0x22E19Cu;
            goto label_22e19c;
        }
    }
    ctx->pc = 0x22E17Cu;
label_22e17c:
    // 0x22e17c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22e17cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e180:
    // 0x22e180: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x22e180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_22e184:
    // 0x22e184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22e184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22e188:
    // 0x22e188: 0x0  nop
    ctx->pc = 0x22e188u;
    // NOP
label_22e18c:
    // 0x22e18c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22e18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22e190:
    // 0x22e190: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22e190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22e194:
    // 0x22e194: 0x10000005  b           . + 4 + (0x5 << 2)
label_22e198:
    if (ctx->pc == 0x22E198u) {
        ctx->pc = 0x22E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E194u;
        // 0x22e198: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E19Cu;
        goto label_22e19c;
    }
    ctx->pc = 0x22E194u;
    {
        const bool branch_taken_0x22e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E194u;
        // 0x22e198: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e194) {
            ctx->pc = 0x22E1ACu;
            goto label_22e1ac;
        }
    }
    ctx->pc = 0x22E19Cu;
label_22e19c:
    // 0x22e19c: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x22e19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_22e1a0:
    // 0x22e1a0: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x22e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_22e1a4:
    // 0x22e1a4: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x22e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_22e1a8:
    // 0x22e1a8: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x22e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_22e1ac:
    // 0x22e1ac: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x22e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22e1b0:
    // 0x22e1b0: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x22e1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_22e1b4:
    // 0x22e1b4: 0xc066e02  jal         func_19B808
label_22e1b8:
    if (ctx->pc == 0x22E1B8u) {
        ctx->pc = 0x22E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1B4u;
        // 0x22e1b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1BCu;
        goto label_22e1bc;
    }
    ctx->pc = 0x22E1B4u;
    SET_GPR_U32(ctx, 31, 0x22E1BCu);
    ctx->pc = 0x22E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1B4u;
    // 0x22e1b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22E1BCu;
label_22e1bc:
    // 0x22e1bc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x22e1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_22e1c0:
    // 0x22e1c0: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x22e1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_22e1c4:
    // 0x22e1c4: 0xc066e02  jal         func_19B808
label_22e1c8:
    if (ctx->pc == 0x22E1C8u) {
        ctx->pc = 0x22E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1C4u;
        // 0x22e1c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1CCu;
        goto label_22e1cc;
    }
    ctx->pc = 0x22E1C4u;
    SET_GPR_U32(ctx, 31, 0x22E1CCu);
    ctx->pc = 0x22E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1C4u;
    // 0x22e1c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22E1CCu;
label_22e1cc:
    // 0x22e1cc: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x22e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_22e1d0:
    // 0x22e1d0: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x22e1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_22e1d4:
    // 0x22e1d4: 0xc066e02  jal         func_19B808
label_22e1d8:
    if (ctx->pc == 0x22E1D8u) {
        ctx->pc = 0x22E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1D4u;
        // 0x22e1d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1DCu;
        goto label_22e1dc;
    }
    ctx->pc = 0x22E1D4u;
    SET_GPR_U32(ctx, 31, 0x22E1DCu);
    ctx->pc = 0x22E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1D4u;
    // 0x22e1d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22E1DCu;
label_22e1dc:
    // 0x22e1dc: 0xc066e44  jal         func_19B910
label_22e1e0:
    if (ctx->pc == 0x22E1E0u) {
        ctx->pc = 0x22E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1DCu;
        // 0x22e1e0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1E4u;
        goto label_22e1e4;
    }
    ctx->pc = 0x22E1DCu;
    SET_GPR_U32(ctx, 31, 0x22E1E4u);
    ctx->pc = 0x22E1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1DCu;
    // 0x22e1e0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x22E1E4u;
label_22e1e4:
    // 0x22e1e4: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x22e1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e1e8:
    // 0x22e1e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22e1ec:
    // 0x22e1ec: 0xc066e96  jal         func_19BA58
label_22e1f0:
    if (ctx->pc == 0x22E1F0u) {
        ctx->pc = 0x22E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1ECu;
        // 0x22e1f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E1F4u;
        goto label_22e1f4;
    }
    ctx->pc = 0x22E1ECu;
    SET_GPR_U32(ctx, 31, 0x22E1F4u);
    ctx->pc = 0x22E1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1ECu;
    // 0x22e1f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x22E1F4u;
label_22e1f4:
    // 0x22e1f4: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x22e1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e1f8:
    // 0x22e1f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22e1fc:
    // 0x22e1fc: 0xc066e6c  jal         func_19B9B0
label_22e200:
    if (ctx->pc == 0x22E200u) {
        ctx->pc = 0x22E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1FCu;
        // 0x22e200: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E204u;
        goto label_22e204;
    }
    ctx->pc = 0x22E1FCu;
    SET_GPR_U32(ctx, 31, 0x22E204u);
    ctx->pc = 0x22E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E1FCu;
    // 0x22e200: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x22E204u;
label_22e204:
    // 0x22e204: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x22e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22e208:
    // 0x22e208: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22e208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22e20c:
    // 0x22e20c: 0xc066ec0  jal         func_19BB00
label_22e210:
    if (ctx->pc == 0x22E210u) {
        ctx->pc = 0x22E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E20Cu;
        // 0x22e210: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E214u;
        goto label_22e214;
    }
    ctx->pc = 0x22E20Cu;
    SET_GPR_U32(ctx, 31, 0x22E214u);
    ctx->pc = 0x22E210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E20Cu;
    // 0x22e210: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x22E214u;
label_22e214:
    // 0x22e214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e218:
    // 0x22e218: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22e218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22e21c:
    // 0x22e21c: 0xc066e1a  jal         func_19B868
label_22e220:
    if (ctx->pc == 0x22E220u) {
        ctx->pc = 0x22E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E21Cu;
        // 0x22e220: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E224u;
        goto label_22e224;
    }
    ctx->pc = 0x22E21Cu;
    SET_GPR_U32(ctx, 31, 0x22E224u);
    ctx->pc = 0x22E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E21Cu;
    // 0x22e220: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x22E224u;
label_22e224:
    // 0x22e224: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x22e224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_22e228:
    // 0x22e228: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22e228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e22c:
    // 0x22e22c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22e22cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e230:
    // 0x22e230: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x22e230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_22e234:
    // 0x22e234: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x22e234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
label_22e238:
    // 0x22e238: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x22e238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_22e23c:
    // 0x22e23c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22e240:
    // 0x22e240: 0x94840014  lhu         $a0, 0x14($a0)
    ctx->pc = 0x22e240u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_22e244:
    // 0x22e244: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_22e248:
    if (ctx->pc == 0x22E248u) {
        ctx->pc = 0x22E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E244u;
        // 0x22e248: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E24Cu;
        goto label_22e24c;
    }
    ctx->pc = 0x22E244u;
    {
        const bool branch_taken_0x22e244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E244u;
        // 0x22e248: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e244) {
            ctx->pc = 0x22E288u;
            goto label_22e288;
        }
    }
    ctx->pc = 0x22E24Cu;
label_22e24c:
    // 0x22e24c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x22e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
label_22e250:
    // 0x22e250: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x22e250u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_22e254:
    // 0x22e254: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x22e254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
label_22e258:
    // 0x22e258: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x22e258u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22e25c:
    // 0x22e25c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x22e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_22e260:
    // 0x22e260: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x22e260u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22e264:
    // 0x22e264: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x22e264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_22e268:
    // 0x22e268: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x22e268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22e26c:
    // 0x22e26c: 0x90830294  lbu         $v1, 0x294($a0)
    ctx->pc = 0x22e26cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 660)));
label_22e270:
    // 0x22e270: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_22e274:
    if (ctx->pc == 0x22E274u) {
        ctx->pc = 0x22E278u;
        goto label_22e278;
    }
    ctx->pc = 0x22E270u;
    {
        const bool branch_taken_0x22e270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e270) {
            ctx->pc = 0x22E288u;
            goto label_22e288;
        }
    }
    ctx->pc = 0x22E278u;
label_22e278:
    // 0x22e278: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x22e278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_22e27c:
    // 0x22e27c: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x22e27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_22e280:
    // 0x22e280: 0xc066e02  jal         func_19B808
label_22e284:
    if (ctx->pc == 0x22E284u) {
        ctx->pc = 0x22E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E280u;
        // 0x22e284: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E288u;
        goto label_22e288;
    }
    ctx->pc = 0x22E280u;
    SET_GPR_U32(ctx, 31, 0x22E288u);
    ctx->pc = 0x22E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E280u;
    // 0x22e284: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22E288u;
label_22e288:
    // 0x22e288: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22e288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22e28c:
    // 0x22e28c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x22e28cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_22e290:
    // 0x22e290: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_22e294:
    if (ctx->pc == 0x22E294u) {
        ctx->pc = 0x22E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E290u;
        // 0x22e294: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E298u;
        goto label_22e298;
    }
    ctx->pc = 0x22E290u;
    {
        const bool branch_taken_0x22e290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E290u;
        // 0x22e294: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e290) {
            ctx->pc = 0x22E238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e238;
        }
    }
    ctx->pc = 0x22E298u;
label_22e298:
    // 0x22e298: 0x96630012  lhu         $v1, 0x12($s3)
    ctx->pc = 0x22e298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_22e29c:
    // 0x22e29c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22e2a0:
    // 0x22e2a0: 0xa6630012  sh          $v1, 0x12($s3)
    ctx->pc = 0x22e2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 3));
label_22e2a4:
    // 0x22e2a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22e2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22e2a8:
    // 0x22e2a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22e2a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22e2ac:
    // 0x22e2ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e2acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e2b0:
    // 0x22e2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e2b4:
    // 0x22e2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22e2b8:
    // 0x22e2b8: 0x3e00008  jr          $ra
label_22e2bc:
    if (ctx->pc == 0x22E2BCu) {
        ctx->pc = 0x22E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2B8u;
        // 0x22e2bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E2C0u;
        goto label_22e2c0;
    }
    ctx->pc = 0x22E2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2B8u;
        // 0x22e2bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E2C0u;
label_22e2c0:
    // 0x22e2c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22e2c4:
    // 0x22e2c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22e2c8:
    // 0x22e2c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22e2cc:
    // 0x22e2cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22e2d0:
    // 0x22e2d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22e2d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e2d4:
    // 0x22e2d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22e2d8:
    // 0x22e2d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22e2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e2dc:
    // 0x22e2dc: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x22e2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
label_22e2e0:
    // 0x22e2e0: 0x2610a2c0  addiu       $s0, $s0, -0x5D40
    ctx->pc = 0x22e2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943424));
label_22e2e4:
    // 0x22e2e4: 0x0  nop
    ctx->pc = 0x22e2e4u;
    // NOP
label_22e2e8:
    // 0x22e2e8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x22e2e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_22e2ec:
    // 0x22e2ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_22e2f0:
    if (ctx->pc == 0x22E2F0u) {
        ctx->pc = 0x22E2F4u;
        goto label_22e2f4;
    }
    ctx->pc = 0x22E2ECu;
    {
        const bool branch_taken_0x22e2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e2ec) {
            ctx->pc = 0x22E304u;
            goto label_22e304;
        }
    }
    ctx->pc = 0x22E2F4u;
label_22e2f4:
    // 0x22e2f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22e2f8:
    // 0x22e2f8: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x22e2f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_22e2fc:
    // 0x22e2fc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_22e300:
    if (ctx->pc == 0x22E300u) {
        ctx->pc = 0x22E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2FCu;
        // 0x22e300: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E304u;
        goto label_22e304;
    }
    ctx->pc = 0x22E2FCu;
    {
        const bool branch_taken_0x22e2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E2FCu;
        // 0x22e300: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e2fc) {
            ctx->pc = 0x22E2E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e2e4;
        }
    }
    ctx->pc = 0x22E304u;
label_22e304:
    // 0x22e304: 0x0  nop
    ctx->pc = 0x22e304u;
    // NOP
label_22e308:
    // 0x22e308: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22e308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22e30c:
    // 0x22e30c: 0x10850078  beq         $a0, $a1, . + 4 + (0x78 << 2)
label_22e310:
    if (ctx->pc == 0x22E310u) {
        ctx->pc = 0x22E314u;
        goto label_22e314;
    }
    ctx->pc = 0x22E30Cu;
    {
        const bool branch_taken_0x22e30c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x22e30c) {
            ctx->pc = 0x22E4F0u;
            goto label_22e4f0;
        }
    }
    ctx->pc = 0x22E314u;
label_22e314:
    // 0x22e314: 0x8f8684b0  lw          $a2, -0x7B50($gp)
    ctx->pc = 0x22e314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
label_22e318:
    // 0x22e318: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_22e31c:
    if (ctx->pc == 0x22E31Cu) {
        ctx->pc = 0x22E320u;
        goto label_22e320;
    }
    ctx->pc = 0x22E318u;
    {
        const bool branch_taken_0x22e318 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e318) {
            ctx->pc = 0x22E35Cu;
            goto label_22e35c;
        }
    }
    ctx->pc = 0x22E320u;
label_22e320:
    // 0x22e320: 0x90c3005b  lbu         $v1, 0x5B($a2)
    ctx->pc = 0x22e320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 91)));
label_22e324:
    // 0x22e324: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
label_22e328:
    if (ctx->pc == 0x22E328u) {
        ctx->pc = 0x22E32Cu;
        goto label_22e32c;
    }
    ctx->pc = 0x22E324u;
    {
        const bool branch_taken_0x22e324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x22e324) {
            ctx->pc = 0x22E350u;
            goto label_22e350;
        }
    }
    ctx->pc = 0x22E32Cu;
label_22e32c:
    // 0x22e32c: 0x90c4005d  lbu         $a0, 0x5D($a2)
    ctx->pc = 0x22e32cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 93)));
label_22e330:
    // 0x22e330: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x22e330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_22e334:
    // 0x22e334: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_22e338:
    if (ctx->pc == 0x22E338u) {
        ctx->pc = 0x22E33Cu;
        goto label_22e33c;
    }
    ctx->pc = 0x22E334u;
    {
        const bool branch_taken_0x22e334 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22e334) {
            ctx->pc = 0x22E350u;
            goto label_22e350;
        }
    }
    ctx->pc = 0x22E33Cu;
label_22e33c:
    // 0x22e33c: 0x8cd1004c  lw          $s1, 0x4C($a2)
    ctx->pc = 0x22e33cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
label_22e340:
    // 0x22e340: 0x9223009c  lbu         $v1, 0x9C($s1)
    ctx->pc = 0x22e340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 156)));
label_22e344:
    // 0x22e344: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x22e344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_22e348:
    // 0x22e348: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22e34c:
    if (ctx->pc == 0x22E34Cu) {
        ctx->pc = 0x22E350u;
        goto label_22e350;
    }
    ctx->pc = 0x22E348u;
    {
        const bool branch_taken_0x22e348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e348) {
            ctx->pc = 0x22E35Cu;
            goto label_22e35c;
        }
    }
    ctx->pc = 0x22E350u;
label_22e350:
    // 0x22e350: 0x8cc60044  lw          $a2, 0x44($a2)
    ctx->pc = 0x22e350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_22e354:
    // 0x22e354: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
label_22e358:
    if (ctx->pc == 0x22E358u) {
        ctx->pc = 0x22E35Cu;
        goto label_22e35c;
    }
    ctx->pc = 0x22E354u;
    {
        const bool branch_taken_0x22e354 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e354) {
            ctx->pc = 0x22E320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e320;
        }
    }
    ctx->pc = 0x22E35Cu;
label_22e35c:
    // 0x22e35c: 0x0  nop
    ctx->pc = 0x22e35cu;
    // NOP
label_22e360:
    // 0x22e360: 0x10c00063  beqz        $a2, . + 4 + (0x63 << 2)
label_22e364:
    if (ctx->pc == 0x22E364u) {
        ctx->pc = 0x22E368u;
        goto label_22e368;
    }
    ctx->pc = 0x22E360u;
    {
        const bool branch_taken_0x22e360 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e360) {
            ctx->pc = 0x22E4F0u;
            goto label_22e4f0;
        }
    }
    ctx->pc = 0x22E368u;
label_22e368:
    // 0x22e368: 0x12200061  beqz        $s1, . + 4 + (0x61 << 2)
label_22e36c:
    if (ctx->pc == 0x22E36Cu) {
        ctx->pc = 0x22E370u;
        goto label_22e370;
    }
    ctx->pc = 0x22E368u;
    {
        const bool branch_taken_0x22e368 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e368) {
            ctx->pc = 0x22E4F0u;
            goto label_22e4f0;
        }
    }
    ctx->pc = 0x22E370u;
label_22e370:
    // 0x22e370: 0x9225009c  lbu         $a1, 0x9C($s1)
    ctx->pc = 0x22e370u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 156)));
label_22e374:
    // 0x22e374: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22e374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_22e378:
    // 0x22e378: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x22e378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_22e37c:
    // 0x22e37c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22e37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e380:
    // 0x22e380: 0x2463ef40  addiu       $v1, $v1, -0x10C0
    ctx->pc = 0x22e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963008));
label_22e384:
    // 0x22e384: 0x2442ef60  addiu       $v0, $v0, -0x10A0
    ctx->pc = 0x22e384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963040));
label_22e388:
    // 0x22e388: 0x34a50020  ori         $a1, $a1, 0x20
    ctx->pc = 0x22e388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
label_22e38c:
    // 0x22e38c: 0xa225009c  sb          $a1, 0x9C($s1)
    ctx->pc = 0x22e38cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 156), (uint8_t)GPR_U32(ctx, 5));
label_22e390:
    // 0x22e390: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x22e390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
label_22e394:
    // 0x22e394: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x22e394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_22e398:
    // 0x22e398: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x22e398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_22e39c:
    // 0x22e39c: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x22e39cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_22e3a0:
    // 0x22e3a0: 0x8644000a  lh          $a0, 0xA($s2)
    ctx->pc = 0x22e3a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_22e3a4:
    // 0x22e3a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22e3a8:
    // 0x22e3a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22e3ac:
    // 0x22e3ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x22e3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e3b0:
    // 0x22e3b0: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x22e3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_22e3b4:
    // 0x22e3b4: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x22e3b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_22e3b8:
    // 0x22e3b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22e3bc:
    // 0x22e3bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22e3c0:
    // 0x22e3c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22e3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e3c4:
    // 0x22e3c4: 0xc08f0cc  jal         func_23C330
label_22e3c8:
    if (ctx->pc == 0x22E3C8u) {
        ctx->pc = 0x22E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3C4u;
        // 0x22e3c8: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3CCu;
        goto label_22e3cc;
    }
    ctx->pc = 0x22E3C4u;
    SET_GPR_U32(ctx, 31, 0x22E3CCu);
    ctx->pc = 0x22E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3C4u;
    // 0x22e3c8: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22E3CCu;
label_22e3cc:
    // 0x22e3cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22e3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22e3d0:
    // 0x22e3d0: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x22e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
label_22e3d4:
    // 0x22e3d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22e3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e3d8:
    // 0x22e3d8: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x22e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_22e3dc:
    // 0x22e3dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22e3dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22e3e0:
    // 0x22e3e0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x22e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_22e3e4:
    // 0x22e3e4: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x22e3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_22e3e8:
    // 0x22e3e8: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x22e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_22e3ec:
    // 0x22e3ec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22e3ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22e3f0:
    // 0x22e3f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22e3f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e3f4:
    // 0x22e3f4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x22e3f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22e3f8:
    // 0x22e3f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22e3f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22e3fc:
    // 0x22e3fc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x22e3fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_22e400:
    // 0x22e400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22e400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e404:
    // 0x22e404: 0x0  nop
    ctx->pc = 0x22e404u;
    // NOP
label_22e408:
    // 0x22e408: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x22e408u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_22e40c:
    // 0x22e40c: 0x0  nop
    ctx->pc = 0x22e40cu;
    // NOP
label_22e410:
    // 0x22e410: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x22e410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e414:
    // 0x22e414: 0x0  nop
    ctx->pc = 0x22e414u;
    // NOP
label_22e418:
    // 0x22e418: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22e41c:
    if (ctx->pc == 0x22E41Cu) {
        ctx->pc = 0x22E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E418u;
        // 0x22e41c: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E420u;
        goto label_22e420;
    }
    ctx->pc = 0x22E418u;
    {
        const bool branch_taken_0x22e418 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E418u;
        // 0x22e41c: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e418) {
            ctx->pc = 0x22E434u;
            goto label_22e434;
        }
    }
    ctx->pc = 0x22E420u;
label_22e420:
    // 0x22e420: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x22e420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_22e424:
    // 0x22e424: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22e424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_22e428:
    // 0x22e428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22e428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e42c:
    // 0x22e42c: 0x1000000d  b           . + 4 + (0xD << 2)
label_22e430:
    if (ctx->pc == 0x22E430u) {
        ctx->pc = 0x22E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E42Cu;
        // 0x22e430: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E434u;
        goto label_22e434;
    }
    ctx->pc = 0x22E42Cu;
    {
        const bool branch_taken_0x22e42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E42Cu;
        // 0x22e430: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e42c) {
            ctx->pc = 0x22E464u;
            goto label_22e464;
        }
    }
    ctx->pc = 0x22E434u;
label_22e434:
    // 0x22e434: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x22e434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_22e438:
    // 0x22e438: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22e438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_22e43c:
    // 0x22e43c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22e43cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e440:
    // 0x22e440: 0x0  nop
    ctx->pc = 0x22e440u;
    // NOP
label_22e444:
    // 0x22e444: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22e444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e448:
    // 0x22e448: 0x0  nop
    ctx->pc = 0x22e448u;
    // NOP
label_22e44c:
    // 0x22e44c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22e450:
    if (ctx->pc == 0x22E450u) {
        ctx->pc = 0x22E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E44Cu;
        // 0x22e450: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E454u;
        goto label_22e454;
    }
    ctx->pc = 0x22E44Cu;
    {
        const bool branch_taken_0x22e44c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E44Cu;
        // 0x22e450: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e44c) {
            ctx->pc = 0x22E464u;
            goto label_22e464;
        }
    }
    ctx->pc = 0x22E454u;
label_22e454:
    // 0x22e454: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22e454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_22e458:
    // 0x22e458: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22e458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e45c:
    // 0x22e45c: 0x10000001  b           . + 4 + (0x1 << 2)
label_22e460:
    if (ctx->pc == 0x22E460u) {
        ctx->pc = 0x22E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E45Cu;
        // 0x22e460: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E464u;
        goto label_22e464;
    }
    ctx->pc = 0x22E45Cu;
    {
        const bool branch_taken_0x22e45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E45Cu;
        // 0x22e460: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e45c) {
            ctx->pc = 0x22E464u;
            goto label_22e464;
        }
    }
    ctx->pc = 0x22E464u;
label_22e464:
    // 0x22e464: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x22e464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_22e468:
    // 0x22e468: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x22e468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_22e46c:
    // 0x22e46c: 0x82450004  lb          $a1, 0x4($s2)
    ctx->pc = 0x22e46cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_22e470:
    // 0x22e470: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x22e470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_22e474:
    // 0x22e474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22e474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e478:
    // 0x22e478: 0x2484ef20  addiu       $a0, $a0, -0x10E0
    ctx->pc = 0x22e478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962976));
label_22e47c:
    // 0x22e47c: 0xa2050024  sb          $a1, 0x24($s0)
    ctx->pc = 0x22e47cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 5));
label_22e480:
    // 0x22e480: 0x82430006  lb          $v1, 0x6($s2)
    ctx->pc = 0x22e480u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_22e484:
    // 0x22e484: 0xa2030025  sb          $v1, 0x25($s0)
    ctx->pc = 0x22e484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 3));
label_22e488:
    // 0x22e488: 0x82430008  lb          $v1, 0x8($s2)
    ctx->pc = 0x22e488u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_22e48c:
    // 0x22e48c: 0xa2030026  sb          $v1, 0x26($s0)
    ctx->pc = 0x22e48cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 3));
label_22e490:
    // 0x22e490: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x22e490u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_22e494:
    // 0x22e494: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22e498:
    // 0x22e498: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22e498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22e49c:
    // 0x22e49c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22e4a0:
    // 0x22e4a0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x22e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_22e4a4:
    // 0x22e4a4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e4a8:
    // 0x22e4a8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x22e4a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_22e4ac:
    // 0x22e4ac: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x22e4acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_22e4b0:
    // 0x22e4b0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e4b4:
    // 0x22e4b4: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x22e4b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_22e4b8:
    // 0x22e4b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22e4b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22e4bc:
    // 0x22e4bc: 0x0  nop
    ctx->pc = 0x22e4bcu;
    // NOP
label_22e4c0:
    // 0x22e4c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22e4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22e4c4:
    // 0x22e4c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22e4c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22e4c8:
    // 0x22e4c8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x22e4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_22e4cc:
    // 0x22e4cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e4d0:
    // 0x22e4d0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x22e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_22e4d4:
    // 0x22e4d4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x22e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_22e4d8:
    // 0x22e4d8: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x22e4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e4dc:
    // 0x22e4dc: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x22e4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_22e4e0:
    // 0x22e4e0: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x22e4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e4e4:
    // 0x22e4e4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x22e4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_22e4e8:
    // 0x22e4e8: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x22e4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e4ec:
    // 0x22e4ec: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x22e4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_22e4f0:
    // 0x22e4f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22e4f4:
    // 0x22e4f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e4f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e4f8:
    // 0x22e4f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e4f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e4fc:
    // 0x22e4fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22e500:
    // 0x22e500: 0x3e00008  jr          $ra
label_22e504:
    if (ctx->pc == 0x22E504u) {
        ctx->pc = 0x22E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E500u;
        // 0x22e504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E508u;
        goto label_22e508;
    }
    ctx->pc = 0x22E500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E500u;
        // 0x22e504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E508u;
label_22e508:
    // 0x22e508: 0x0  nop
    ctx->pc = 0x22e508u;
    // NOP
label_22e50c:
    // 0x22e50c: 0x0  nop
    ctx->pc = 0x22e50cu;
    // NOP
label_22e510:
    // 0x22e510: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22e510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_22e514:
    // 0x22e514: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_22e518:
    // 0x22e518: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x22e518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_22e51c:
    // 0x22e51c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22e51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_22e520:
    // 0x22e520: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22e520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_22e524:
    // 0x22e524: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22e524u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e528:
    // 0x22e528: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22e528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22e52c:
    // 0x22e52c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22e52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e530:
    // 0x22e530: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22e530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22e534:
    // 0x22e534: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22e534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22e538:
    // 0x22e538: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22e538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22e53c:
    // 0x22e53c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x22e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
label_22e540:
    // 0x22e540: 0x24639f20  addiu       $v1, $v1, -0x60E0
    ctx->pc = 0x22e540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942496));
label_22e544:
    // 0x22e544: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x22e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_22e548:
    // 0x22e548: 0x247003a0  addiu       $s0, $v1, 0x3A0
    ctx->pc = 0x22e548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
label_22e54c:
    // 0x22e54c: 0x906303a0  lbu         $v1, 0x3A0($v1)
    ctx->pc = 0x22e54cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 928)));
label_22e550:
    // 0x22e550: 0x106000ba  beqz        $v1, . + 4 + (0xBA << 2)
label_22e554:
    if (ctx->pc == 0x22E554u) {
        ctx->pc = 0x22E558u;
        goto label_22e558;
    }
    ctx->pc = 0x22E550u;
    {
        const bool branch_taken_0x22e550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e550) {
            ctx->pc = 0x22E83Cu;
            { ctx->pc = 0x22e83c; return; }
        }
    }
    ctx->pc = 0x22E558u;
label_22e558:
    // 0x22e558: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x22e558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22e55c:
    // 0x22e55c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x22e55cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_22e560:
    // 0x22e560: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_22e564:
    if (ctx->pc == 0x22E564u) {
        ctx->pc = 0x22E568u;
        goto label_22e568;
    }
    ctx->pc = 0x22E560u;
    {
        const bool branch_taken_0x22e560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e560) {
            ctx->pc = 0x22E5A4u;
            goto label_22e5a4;
        }
    }
    ctx->pc = 0x22E568u;
label_22e568:
    // 0x22e568: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22e568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e56c:
    // 0x22e56c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_22e570:
    // 0x22e570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e574:
    // 0x22e574: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x22e574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_22e578:
    // 0x22e578: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x22e578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_22e57c:
    // 0x22e57c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e580:
    // 0x22e580: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x22e580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_22e584:
    // 0x22e584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22e584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22e588:
    // 0x22e588: 0x0  nop
    ctx->pc = 0x22e588u;
    // NOP
label_22e58c:
    // 0x22e58c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22e58cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22e590:
    // 0x22e590: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22e590u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22e594:
    // 0x22e594: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x22e594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_22e598:
    // 0x22e598: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22e59c:
    // 0x22e59c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_22e5a0:
    // 0x22e5a0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x22e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_22e5a4:
    // 0x22e5a4: 0x0  nop
    ctx->pc = 0x22e5a4u;
    // NOP
    ctx->pc = 0x22e5a8u;
    return;
}
