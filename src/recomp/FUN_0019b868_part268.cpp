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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21de58u: goto label_21de58;
        case 0x21de5cu: goto label_21de5c;
        case 0x21de60u: goto label_21de60;
        case 0x21de64u: goto label_21de64;
        case 0x21de68u: goto label_21de68;
        case 0x21de6cu: goto label_21de6c;
        case 0x21de70u: goto label_21de70;
        case 0x21de74u: goto label_21de74;
        case 0x21de78u: goto label_21de78;
        case 0x21de7cu: goto label_21de7c;
        case 0x21de80u: goto label_21de80;
        case 0x21de84u: goto label_21de84;
        case 0x21de88u: goto label_21de88;
        case 0x21de8cu: goto label_21de8c;
        case 0x21de90u: goto label_21de90;
        case 0x21de94u: goto label_21de94;
        case 0x21de98u: goto label_21de98;
        case 0x21de9cu: goto label_21de9c;
        case 0x21dea0u: goto label_21dea0;
        case 0x21dea4u: goto label_21dea4;
        case 0x21dea8u: goto label_21dea8;
        case 0x21deacu: goto label_21deac;
        case 0x21deb0u: goto label_21deb0;
        case 0x21deb4u: goto label_21deb4;
        case 0x21deb8u: goto label_21deb8;
        case 0x21debcu: goto label_21debc;
        case 0x21dec0u: goto label_21dec0;
        case 0x21dec4u: goto label_21dec4;
        case 0x21dec8u: goto label_21dec8;
        case 0x21deccu: goto label_21decc;
        case 0x21ded0u: goto label_21ded0;
        case 0x21ded4u: goto label_21ded4;
        case 0x21ded8u: goto label_21ded8;
        case 0x21dedcu: goto label_21dedc;
        case 0x21dee0u: goto label_21dee0;
        case 0x21dee4u: goto label_21dee4;
        case 0x21dee8u: goto label_21dee8;
        case 0x21deecu: goto label_21deec;
        case 0x21def0u: goto label_21def0;
        case 0x21def4u: goto label_21def4;
        case 0x21def8u: goto label_21def8;
        case 0x21defcu: goto label_21defc;
        case 0x21df00u: goto label_21df00;
        case 0x21df04u: goto label_21df04;
        case 0x21df08u: goto label_21df08;
        case 0x21df0cu: goto label_21df0c;
        case 0x21df10u: goto label_21df10;
        case 0x21df14u: goto label_21df14;
        case 0x21df18u: goto label_21df18;
        case 0x21df1cu: goto label_21df1c;
        case 0x21df20u: goto label_21df20;
        case 0x21df24u: goto label_21df24;
        case 0x21df28u: goto label_21df28;
        case 0x21df2cu: goto label_21df2c;
        case 0x21df30u: goto label_21df30;
        case 0x21df34u: goto label_21df34;
        case 0x21df38u: goto label_21df38;
        case 0x21df3cu: goto label_21df3c;
        case 0x21df40u: goto label_21df40;
        case 0x21df44u: goto label_21df44;
        case 0x21df48u: goto label_21df48;
        case 0x21df4cu: goto label_21df4c;
        case 0x21df50u: goto label_21df50;
        case 0x21df54u: goto label_21df54;
        case 0x21df58u: goto label_21df58;
        case 0x21df5cu: goto label_21df5c;
        case 0x21df60u: goto label_21df60;
        case 0x21df64u: goto label_21df64;
        case 0x21df68u: goto label_21df68;
        case 0x21df6cu: goto label_21df6c;
        case 0x21df70u: goto label_21df70;
        case 0x21df74u: goto label_21df74;
        case 0x21df78u: goto label_21df78;
        case 0x21df7cu: goto label_21df7c;
        case 0x21df80u: goto label_21df80;
        case 0x21df84u: goto label_21df84;
        case 0x21df88u: goto label_21df88;
        case 0x21df8cu: goto label_21df8c;
        case 0x21df90u: goto label_21df90;
        case 0x21df94u: goto label_21df94;
        case 0x21df98u: goto label_21df98;
        case 0x21df9cu: goto label_21df9c;
        case 0x21dfa0u: goto label_21dfa0;
        case 0x21dfa4u: goto label_21dfa4;
        case 0x21dfa8u: goto label_21dfa8;
        case 0x21dfacu: goto label_21dfac;
        case 0x21dfb0u: goto label_21dfb0;
        case 0x21dfb4u: goto label_21dfb4;
        case 0x21dfb8u: goto label_21dfb8;
        case 0x21dfbcu: goto label_21dfbc;
        case 0x21dfc0u: goto label_21dfc0;
        case 0x21dfc4u: goto label_21dfc4;
        case 0x21dfc8u: goto label_21dfc8;
        case 0x21dfccu: goto label_21dfcc;
        case 0x21dfd0u: goto label_21dfd0;
        case 0x21dfd4u: goto label_21dfd4;
        case 0x21dfd8u: goto label_21dfd8;
        case 0x21dfdcu: goto label_21dfdc;
        case 0x21dfe0u: goto label_21dfe0;
        case 0x21dfe4u: goto label_21dfe4;
        case 0x21dfe8u: goto label_21dfe8;
        case 0x21dfecu: goto label_21dfec;
        case 0x21dff0u: goto label_21dff0;
        case 0x21dff4u: goto label_21dff4;
        case 0x21dff8u: goto label_21dff8;
        case 0x21dffcu: goto label_21dffc;
        case 0x21e000u: goto label_21e000;
        case 0x21e004u: goto label_21e004;
        case 0x21e008u: goto label_21e008;
        case 0x21e00cu: goto label_21e00c;
        case 0x21e010u: goto label_21e010;
        case 0x21e014u: goto label_21e014;
        case 0x21e018u: goto label_21e018;
        case 0x21e01cu: goto label_21e01c;
        case 0x21e020u: goto label_21e020;
        case 0x21e024u: goto label_21e024;
        case 0x21e028u: goto label_21e028;
        case 0x21e02cu: goto label_21e02c;
        case 0x21e030u: goto label_21e030;
        case 0x21e034u: goto label_21e034;
        case 0x21e038u: goto label_21e038;
        case 0x21e03cu: goto label_21e03c;
        case 0x21e040u: goto label_21e040;
        case 0x21e044u: goto label_21e044;
        case 0x21e048u: goto label_21e048;
        case 0x21e04cu: goto label_21e04c;
        case 0x21e050u: goto label_21e050;
        case 0x21e054u: goto label_21e054;
        case 0x21e058u: goto label_21e058;
        case 0x21e05cu: goto label_21e05c;
        case 0x21e060u: goto label_21e060;
        case 0x21e064u: goto label_21e064;
        case 0x21e068u: goto label_21e068;
        case 0x21e06cu: goto label_21e06c;
        case 0x21e070u: goto label_21e070;
        case 0x21e074u: goto label_21e074;
        case 0x21e078u: goto label_21e078;
        case 0x21e07cu: goto label_21e07c;
        case 0x21e080u: goto label_21e080;
        case 0x21e084u: goto label_21e084;
        case 0x21e088u: goto label_21e088;
        case 0x21e08cu: goto label_21e08c;
        case 0x21e090u: goto label_21e090;
        case 0x21e094u: goto label_21e094;
        case 0x21e098u: goto label_21e098;
        case 0x21e09cu: goto label_21e09c;
        case 0x21e0a0u: goto label_21e0a0;
        case 0x21e0a4u: goto label_21e0a4;
        case 0x21e0a8u: goto label_21e0a8;
        case 0x21e0acu: goto label_21e0ac;
        case 0x21e0b0u: goto label_21e0b0;
        case 0x21e0b4u: goto label_21e0b4;
        case 0x21e0b8u: goto label_21e0b8;
        case 0x21e0bcu: goto label_21e0bc;
        case 0x21e0c0u: goto label_21e0c0;
        case 0x21e0c4u: goto label_21e0c4;
        case 0x21e0c8u: goto label_21e0c8;
        case 0x21e0ccu: goto label_21e0cc;
        case 0x21e0d0u: goto label_21e0d0;
        case 0x21e0d4u: goto label_21e0d4;
        case 0x21e0d8u: goto label_21e0d8;
        case 0x21e0dcu: goto label_21e0dc;
        case 0x21e0e0u: goto label_21e0e0;
        case 0x21e0e4u: goto label_21e0e4;
        case 0x21e0e8u: goto label_21e0e8;
        case 0x21e0ecu: goto label_21e0ec;
        case 0x21e0f0u: goto label_21e0f0;
        case 0x21e0f4u: goto label_21e0f4;
        case 0x21e0f8u: goto label_21e0f8;
        case 0x21e0fcu: goto label_21e0fc;
        case 0x21e100u: goto label_21e100;
        case 0x21e104u: goto label_21e104;
        case 0x21e108u: goto label_21e108;
        case 0x21e10cu: goto label_21e10c;
        case 0x21e110u: goto label_21e110;
        case 0x21e114u: goto label_21e114;
        case 0x21e118u: goto label_21e118;
        case 0x21e11cu: goto label_21e11c;
        case 0x21e120u: goto label_21e120;
        case 0x21e124u: goto label_21e124;
        case 0x21e128u: goto label_21e128;
        case 0x21e12cu: goto label_21e12c;
        case 0x21e130u: goto label_21e130;
        case 0x21e134u: goto label_21e134;
        case 0x21e138u: goto label_21e138;
        case 0x21e13cu: goto label_21e13c;
        case 0x21e140u: goto label_21e140;
        case 0x21e144u: goto label_21e144;
        case 0x21e148u: goto label_21e148;
        case 0x21e14cu: goto label_21e14c;
        case 0x21e150u: goto label_21e150;
        case 0x21e154u: goto label_21e154;
        case 0x21e158u: goto label_21e158;
        case 0x21e15cu: goto label_21e15c;
        case 0x21e160u: goto label_21e160;
        case 0x21e164u: goto label_21e164;
        case 0x21e168u: goto label_21e168;
        case 0x21e16cu: goto label_21e16c;
        case 0x21e170u: goto label_21e170;
        case 0x21e174u: goto label_21e174;
        case 0x21e178u: goto label_21e178;
        case 0x21e17cu: goto label_21e17c;
        case 0x21e180u: goto label_21e180;
        case 0x21e184u: goto label_21e184;
        case 0x21e188u: goto label_21e188;
        case 0x21e18cu: goto label_21e18c;
        case 0x21e190u: goto label_21e190;
        case 0x21e194u: goto label_21e194;
        case 0x21e198u: goto label_21e198;
        case 0x21e19cu: goto label_21e19c;
        case 0x21e1a0u: goto label_21e1a0;
        case 0x21e1a4u: goto label_21e1a4;
        case 0x21e1a8u: goto label_21e1a8;
        case 0x21e1acu: goto label_21e1ac;
        case 0x21e1b0u: goto label_21e1b0;
        case 0x21e1b4u: goto label_21e1b4;
        case 0x21e1b8u: goto label_21e1b8;
        case 0x21e1bcu: goto label_21e1bc;
        case 0x21e1c0u: goto label_21e1c0;
        case 0x21e1c4u: goto label_21e1c4;
        case 0x21e1c8u: goto label_21e1c8;
        case 0x21e1ccu: goto label_21e1cc;
        case 0x21e1d0u: goto label_21e1d0;
        case 0x21e1d4u: goto label_21e1d4;
        case 0x21e1d8u: goto label_21e1d8;
        case 0x21e1dcu: goto label_21e1dc;
        case 0x21e1e0u: goto label_21e1e0;
        case 0x21e1e4u: goto label_21e1e4;
        case 0x21e1e8u: goto label_21e1e8;
        case 0x21e1ecu: goto label_21e1ec;
        case 0x21e1f0u: goto label_21e1f0;
        case 0x21e1f4u: goto label_21e1f4;
        case 0x21e1f8u: goto label_21e1f8;
        case 0x21e1fcu: goto label_21e1fc;
        case 0x21e200u: goto label_21e200;
        case 0x21e204u: goto label_21e204;
        case 0x21e208u: goto label_21e208;
        case 0x21e20cu: goto label_21e20c;
        case 0x21e210u: goto label_21e210;
        case 0x21e214u: goto label_21e214;
        case 0x21e218u: goto label_21e218;
        case 0x21e21cu: goto label_21e21c;
        case 0x21e220u: goto label_21e220;
        case 0x21e224u: goto label_21e224;
        case 0x21e228u: goto label_21e228;
        case 0x21e22cu: goto label_21e22c;
        case 0x21e230u: goto label_21e230;
        case 0x21e234u: goto label_21e234;
        case 0x21e238u: goto label_21e238;
        case 0x21e23cu: goto label_21e23c;
        case 0x21e240u: goto label_21e240;
        case 0x21e244u: goto label_21e244;
        case 0x21e248u: goto label_21e248;
        case 0x21e24cu: goto label_21e24c;
        case 0x21e250u: goto label_21e250;
        case 0x21e254u: goto label_21e254;
        case 0x21e258u: goto label_21e258;
        case 0x21e25cu: goto label_21e25c;
        case 0x21e260u: goto label_21e260;
        case 0x21e264u: goto label_21e264;
        case 0x21e268u: goto label_21e268;
        case 0x21e26cu: goto label_21e26c;
        case 0x21e270u: goto label_21e270;
        case 0x21e274u: goto label_21e274;
        case 0x21e278u: goto label_21e278;
        case 0x21e27cu: goto label_21e27c;
        case 0x21e280u: goto label_21e280;
        case 0x21e284u: goto label_21e284;
        case 0x21e288u: goto label_21e288;
        case 0x21e28cu: goto label_21e28c;
        case 0x21e290u: goto label_21e290;
        case 0x21e294u: goto label_21e294;
        case 0x21e298u: goto label_21e298;
        case 0x21e29cu: goto label_21e29c;
        case 0x21e2a0u: goto label_21e2a0;
        case 0x21e2a4u: goto label_21e2a4;
        case 0x21e2a8u: goto label_21e2a8;
        case 0x21e2acu: goto label_21e2ac;
        case 0x21e2b0u: goto label_21e2b0;
        case 0x21e2b4u: goto label_21e2b4;
        case 0x21e2b8u: goto label_21e2b8;
        case 0x21e2bcu: goto label_21e2bc;
        case 0x21e2c0u: goto label_21e2c0;
        case 0x21e2c4u: goto label_21e2c4;
        case 0x21e2c8u: goto label_21e2c8;
        case 0x21e2ccu: goto label_21e2cc;
        case 0x21e2d0u: goto label_21e2d0;
        case 0x21e2d4u: goto label_21e2d4;
        case 0x21e2d8u: goto label_21e2d8;
        case 0x21e2dcu: goto label_21e2dc;
        case 0x21e2e0u: goto label_21e2e0;
        case 0x21e2e4u: goto label_21e2e4;
        case 0x21e2e8u: goto label_21e2e8;
        case 0x21e2ecu: goto label_21e2ec;
        case 0x21e2f0u: goto label_21e2f0;
        case 0x21e2f4u: goto label_21e2f4;
        case 0x21e2f8u: goto label_21e2f8;
        case 0x21e2fcu: goto label_21e2fc;
        case 0x21e300u: goto label_21e300;
        case 0x21e304u: goto label_21e304;
        case 0x21e308u: goto label_21e308;
        case 0x21e30cu: goto label_21e30c;
        case 0x21e310u: goto label_21e310;
        case 0x21e314u: goto label_21e314;
        case 0x21e318u: goto label_21e318;
        case 0x21e31cu: goto label_21e31c;
        case 0x21e320u: goto label_21e320;
        case 0x21e324u: goto label_21e324;
        case 0x21e328u: goto label_21e328;
        case 0x21e32cu: goto label_21e32c;
        case 0x21e330u: goto label_21e330;
        case 0x21e334u: goto label_21e334;
        case 0x21e338u: goto label_21e338;
        case 0x21e33cu: goto label_21e33c;
        case 0x21e340u: goto label_21e340;
        case 0x21e344u: goto label_21e344;
        case 0x21e348u: goto label_21e348;
        case 0x21e34cu: goto label_21e34c;
        case 0x21e350u: goto label_21e350;
        case 0x21e354u: goto label_21e354;
        case 0x21e358u: goto label_21e358;
        case 0x21e35cu: goto label_21e35c;
        case 0x21e360u: goto label_21e360;
        case 0x21e364u: goto label_21e364;
        case 0x21e368u: goto label_21e368;
        case 0x21e36cu: goto label_21e36c;
        case 0x21e370u: goto label_21e370;
        case 0x21e374u: goto label_21e374;
        case 0x21e378u: goto label_21e378;
        case 0x21e37cu: goto label_21e37c;
        case 0x21e380u: goto label_21e380;
        case 0x21e384u: goto label_21e384;
        case 0x21e388u: goto label_21e388;
        case 0x21e38cu: goto label_21e38c;
        case 0x21e390u: goto label_21e390;
        case 0x21e394u: goto label_21e394;
        case 0x21e398u: goto label_21e398;
        case 0x21e39cu: goto label_21e39c;
        case 0x21e3a0u: goto label_21e3a0;
        case 0x21e3a4u: goto label_21e3a4;
        case 0x21e3a8u: goto label_21e3a8;
        case 0x21e3acu: goto label_21e3ac;
        case 0x21e3b0u: goto label_21e3b0;
        case 0x21e3b4u: goto label_21e3b4;
        case 0x21e3b8u: goto label_21e3b8;
        case 0x21e3bcu: goto label_21e3bc;
        case 0x21e3c0u: goto label_21e3c0;
        case 0x21e3c4u: goto label_21e3c4;
        case 0x21e3c8u: goto label_21e3c8;
        case 0x21e3ccu: goto label_21e3cc;
        case 0x21e3d0u: goto label_21e3d0;
        case 0x21e3d4u: goto label_21e3d4;
        case 0x21e3d8u: goto label_21e3d8;
        case 0x21e3dcu: goto label_21e3dc;
        case 0x21e3e0u: goto label_21e3e0;
        case 0x21e3e4u: goto label_21e3e4;
        case 0x21e3e8u: goto label_21e3e8;
        case 0x21e3ecu: goto label_21e3ec;
        case 0x21e3f0u: goto label_21e3f0;
        case 0x21e3f4u: goto label_21e3f4;
        case 0x21e3f8u: goto label_21e3f8;
        case 0x21e3fcu: goto label_21e3fc;
        case 0x21e400u: goto label_21e400;
        case 0x21e404u: goto label_21e404;
        case 0x21e408u: goto label_21e408;
        case 0x21e40cu: goto label_21e40c;
        case 0x21e410u: goto label_21e410;
        case 0x21e414u: goto label_21e414;
        case 0x21e418u: goto label_21e418;
        case 0x21e41cu: goto label_21e41c;
        case 0x21e420u: goto label_21e420;
        case 0x21e424u: goto label_21e424;
        case 0x21e428u: goto label_21e428;
        case 0x21e42cu: goto label_21e42c;
        case 0x21e430u: goto label_21e430;
        case 0x21e434u: goto label_21e434;
        case 0x21e438u: goto label_21e438;
        case 0x21e43cu: goto label_21e43c;
        case 0x21e440u: goto label_21e440;
        case 0x21e444u: goto label_21e444;
        case 0x21e448u: goto label_21e448;
        case 0x21e44cu: goto label_21e44c;
        case 0x21e450u: goto label_21e450;
        case 0x21e454u: goto label_21e454;
        case 0x21e458u: goto label_21e458;
        case 0x21e45cu: goto label_21e45c;
        case 0x21e460u: goto label_21e460;
        case 0x21e464u: goto label_21e464;
        case 0x21e468u: goto label_21e468;
        case 0x21e46cu: goto label_21e46c;
        case 0x21e470u: goto label_21e470;
        case 0x21e474u: goto label_21e474;
        case 0x21e478u: goto label_21e478;
        case 0x21e47cu: goto label_21e47c;
        case 0x21e480u: goto label_21e480;
        case 0x21e484u: goto label_21e484;
        case 0x21e488u: goto label_21e488;
        case 0x21e48cu: goto label_21e48c;
        case 0x21e490u: goto label_21e490;
        case 0x21e494u: goto label_21e494;
        case 0x21e498u: goto label_21e498;
        case 0x21e49cu: goto label_21e49c;
        case 0x21e4a0u: goto label_21e4a0;
        case 0x21e4a4u: goto label_21e4a4;
        case 0x21e4a8u: goto label_21e4a8;
        case 0x21e4acu: goto label_21e4ac;
        case 0x21e4b0u: goto label_21e4b0;
        case 0x21e4b4u: goto label_21e4b4;
        case 0x21e4b8u: goto label_21e4b8;
        case 0x21e4bcu: goto label_21e4bc;
        case 0x21e4c0u: goto label_21e4c0;
        case 0x21e4c4u: goto label_21e4c4;
        case 0x21e4c8u: goto label_21e4c8;
        case 0x21e4ccu: goto label_21e4cc;
        case 0x21e4d0u: goto label_21e4d0;
        case 0x21e4d4u: goto label_21e4d4;
        case 0x21e4d8u: goto label_21e4d8;
        case 0x21e4dcu: goto label_21e4dc;
        case 0x21e4e0u: goto label_21e4e0;
        case 0x21e4e4u: goto label_21e4e4;
        case 0x21e4e8u: goto label_21e4e8;
        case 0x21e4ecu: goto label_21e4ec;
        case 0x21e4f0u: goto label_21e4f0;
        case 0x21e4f4u: goto label_21e4f4;
        case 0x21e4f8u: goto label_21e4f8;
        case 0x21e4fcu: goto label_21e4fc;
        case 0x21e500u: goto label_21e500;
        case 0x21e504u: goto label_21e504;
        case 0x21e508u: goto label_21e508;
        case 0x21e50cu: goto label_21e50c;
        case 0x21e510u: goto label_21e510;
        case 0x21e514u: goto label_21e514;
        case 0x21e518u: goto label_21e518;
        case 0x21e51cu: goto label_21e51c;
        case 0x21e520u: goto label_21e520;
        case 0x21e524u: goto label_21e524;
        case 0x21e528u: goto label_21e528;
        case 0x21e52cu: goto label_21e52c;
        case 0x21e530u: goto label_21e530;
        case 0x21e534u: goto label_21e534;
        case 0x21e538u: goto label_21e538;
        case 0x21e53cu: goto label_21e53c;
        case 0x21e540u: goto label_21e540;
        case 0x21e544u: goto label_21e544;
        case 0x21e548u: goto label_21e548;
        case 0x21e54cu: goto label_21e54c;
        case 0x21e550u: goto label_21e550;
        case 0x21e554u: goto label_21e554;
        case 0x21e558u: goto label_21e558;
        case 0x21e55cu: goto label_21e55c;
        case 0x21e560u: goto label_21e560;
        case 0x21e564u: goto label_21e564;
        case 0x21e568u: goto label_21e568;
        case 0x21e56cu: goto label_21e56c;
        case 0x21e570u: goto label_21e570;
        case 0x21e574u: goto label_21e574;
        case 0x21e578u: goto label_21e578;
        case 0x21e57cu: goto label_21e57c;
        case 0x21e580u: goto label_21e580;
        case 0x21e584u: goto label_21e584;
        case 0x21e588u: goto label_21e588;
        case 0x21e58cu: goto label_21e58c;
        case 0x21e590u: goto label_21e590;
        case 0x21e594u: goto label_21e594;
        case 0x21e598u: goto label_21e598;
        case 0x21e59cu: goto label_21e59c;
        case 0x21e5a0u: goto label_21e5a0;
        case 0x21e5a4u: goto label_21e5a4;
        case 0x21e5a8u: goto label_21e5a8;
        case 0x21e5acu: goto label_21e5ac;
        case 0x21e5b0u: goto label_21e5b0;
        case 0x21e5b4u: goto label_21e5b4;
        case 0x21e5b8u: goto label_21e5b8;
        case 0x21e5bcu: goto label_21e5bc;
        case 0x21e5c0u: goto label_21e5c0;
        case 0x21e5c4u: goto label_21e5c4;
        case 0x21e5c8u: goto label_21e5c8;
        case 0x21e5ccu: goto label_21e5cc;
        case 0x21e5d0u: goto label_21e5d0;
        case 0x21e5d4u: goto label_21e5d4;
        case 0x21e5d8u: goto label_21e5d8;
        case 0x21e5dcu: goto label_21e5dc;
        case 0x21e5e0u: goto label_21e5e0;
        case 0x21e5e4u: goto label_21e5e4;
        case 0x21e5e8u: goto label_21e5e8;
        case 0x21e5ecu: goto label_21e5ec;
        case 0x21e5f0u: goto label_21e5f0;
        case 0x21e5f4u: goto label_21e5f4;
        case 0x21e5f8u: goto label_21e5f8;
        case 0x21e5fcu: goto label_21e5fc;
        case 0x21e600u: goto label_21e600;
        case 0x21e604u: goto label_21e604;
        case 0x21e608u: goto label_21e608;
        case 0x21e60cu: goto label_21e60c;
        case 0x21e610u: goto label_21e610;
        case 0x21e614u: goto label_21e614;
        case 0x21e618u: goto label_21e618;
        case 0x21e61cu: goto label_21e61c;
        case 0x21e620u: goto label_21e620;
        case 0x21e624u: goto label_21e624;
        default: return;
    }

label_21de58:
    // 0x21de58: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21de5c:
    // 0x21de5c: 0x8f8d828c  lw          $t5, -0x7D74($gp)
    ctx->pc = 0x21de5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21de60:
    // 0x21de60: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21de60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21de64:
    // 0x21de64: 0xd6402  srl         $t4, $t5, 16
    ctx->pc = 0x21de64u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_21de68:
    // 0x21de68: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21de68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21de6c:
    // 0x21de6c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21de6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21de70:
    // 0x21de70: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x21de70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_21de74:
    // 0x21de74: 0x1a85818  mult        $t3, $t5, $t0
    ctx->pc = 0x21de74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21de78:
    // 0x21de78: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21de78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21de7c:
    // 0x21de7c: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21de80:
    // 0x21de80: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21de84:
    // 0x21de84: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21de84u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21de88:
    // 0x21de88: 0x71685818  mult1       $t3, $t3, $t0
    ctx->pc = 0x21de88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21de8c:
    // 0x21de8c: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21de8cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21de90:
    // 0x21de90: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21de90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21de94:
    // 0x21de94: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21de98:
    // 0x21de98: 0x8f8d828c  lw          $t5, -0x7D74($gp)
    ctx->pc = 0x21de98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21de9c:
    // 0x21de9c: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21de9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21dea0:
    // 0x21dea0: 0xd6402  srl         $t4, $t5, 16
    ctx->pc = 0x21dea0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_21dea4:
    // 0x21dea4: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21dea4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21dea8:
    // 0x21dea8: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21dea8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21deac:
    // 0x21deac: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x21deacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_21deb0:
    // 0x21deb0: 0x1a85818  mult        $t3, $t5, $t0
    ctx->pc = 0x21deb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21deb4:
    // 0x21deb4: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21deb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21deb8:
    // 0x21deb8: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21debc:
    // 0x21debc: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21debcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21dec0:
    // 0x21dec0: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21dec0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21dec4:
    // 0x21dec4: 0x71685818  mult1       $t3, $t3, $t0
    ctx->pc = 0x21dec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21dec8:
    // 0x21dec8: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21dec8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21decc:
    // 0x21decc: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21deccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21ded0:
    // 0x21ded0: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21ded4:
    // 0x21ded4: 0x8f8d828c  lw          $t5, -0x7D74($gp)
    ctx->pc = 0x21ded4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21ded8:
    // 0x21ded8: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21ded8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21dedc:
    // 0x21dedc: 0xd6402  srl         $t4, $t5, 16
    ctx->pc = 0x21dedcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_21dee0:
    // 0x21dee0: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21dee0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21dee4:
    // 0x21dee4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21dee4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21dee8:
    // 0x21dee8: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x21dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_21deec:
    // 0x21deec: 0x1a85818  mult        $t3, $t5, $t0
    ctx->pc = 0x21deecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21def0:
    // 0x21def0: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21def0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21def4:
    // 0x21def4: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21def4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21def8:
    // 0x21def8: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21def8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21defc:
    // 0x21defc: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21defcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21df00:
    // 0x21df00: 0x71685818  mult1       $t3, $t3, $t0
    ctx->pc = 0x21df00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21df04:
    // 0x21df04: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21df04u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21df08:
    // 0x21df08: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21df08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21df0c:
    // 0x21df0c: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21df10:
    // 0x21df10: 0x8f8d828c  lw          $t5, -0x7D74($gp)
    ctx->pc = 0x21df10u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21df14:
    // 0x21df14: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21df14u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21df18:
    // 0x21df18: 0xd6402  srl         $t4, $t5, 16
    ctx->pc = 0x21df18u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_21df1c:
    // 0x21df1c: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21df1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21df20:
    // 0x21df20: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21df20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21df24:
    // 0x21df24: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x21df24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_21df28:
    // 0x21df28: 0x1a85818  mult        $t3, $t5, $t0
    ctx->pc = 0x21df28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21df2c:
    // 0x21df2c: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21df2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21df30:
    // 0x21df30: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21df30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21df34:
    // 0x21df34: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21df34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21df38:
    // 0x21df38: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21df38u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21df3c:
    // 0x21df3c: 0x71685818  mult1       $t3, $t3, $t0
    ctx->pc = 0x21df3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21df40:
    // 0x21df40: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21df40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21df44:
    // 0x21df44: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21df44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21df48:
    // 0x21df48: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21df48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21df4c:
    // 0x21df4c: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21df4cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21df50:
    // 0x21df50: 0x8f8c828c  lw          $t4, -0x7D74($gp)
    ctx->pc = 0x21df50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21df54:
    // 0x21df54: 0xc6402  srl         $t4, $t4, 16
    ctx->pc = 0x21df54u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
label_21df58:
    // 0x21df58: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21df58u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21df5c:
    // 0x21df5c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21df5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21df60:
    // 0x21df60: 0x1540ff85  bnez        $t2, . + 4 + (-0x7B << 2)
label_21df64:
    if (ctx->pc == 0x21DF64u) {
        ctx->pc = 0x21DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF60u;
        // 0x21df64: 0xad2b0000  sw          $t3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DF68u;
        goto label_21df68;
    }
    ctx->pc = 0x21DF60u;
    {
        const bool branch_taken_0x21df60 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF60u;
        // 0x21df64: 0xad2b0000  sw          $t3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df60) {
            ctx->pc = 0x21DD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21dd78; return; }
        }
    }
    ctx->pc = 0x21DF68u;
label_21df68:
    // 0x21df68: 0x2881000f  slti        $at, $a0, 0xF
    ctx->pc = 0x21df68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
label_21df6c:
    // 0x21df6c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_21df70:
    if (ctx->pc == 0x21DF70u) {
        ctx->pc = 0x21DF74u;
        goto label_21df74;
    }
    ctx->pc = 0x21DF6Cu;
    {
        const bool branch_taken_0x21df6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21df6c) {
            ctx->pc = 0x21DFC4u;
            goto label_21dfc4;
        }
    }
    ctx->pc = 0x21DF74u;
label_21df74:
    // 0x21df74: 0x0  nop
    ctx->pc = 0x21df74u;
    // NOP
label_21df78:
    // 0x21df78: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21df78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21df7c:
    // 0x21df7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_21df80:
    // 0x21df80: 0x288a000f  slti        $t2, $a0, 0xF
    ctx->pc = 0x21df80u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
label_21df84:
    // 0x21df84: 0x1685818  mult        $t3, $t3, $t0
    ctx->pc = 0x21df84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21df88:
    // 0x21df88: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21df88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21df8c:
    // 0x21df8c: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21df8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21df90:
    // 0x21df90: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21df90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21df94:
    // 0x21df94: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21df94u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21df98:
    // 0x21df98: 0x71685818  mult1       $t3, $t3, $t0
    ctx->pc = 0x21df98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21df9c:
    // 0x21df9c: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21df9cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21dfa0:
    // 0x21dfa0: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21dfa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21dfa4:
    // 0x21dfa4: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21dfa8:
    // 0x21dfa8: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21dfa8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21dfac:
    // 0x21dfac: 0x8f8c828c  lw          $t4, -0x7D74($gp)
    ctx->pc = 0x21dfacu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21dfb0:
    // 0x21dfb0: 0xc6402  srl         $t4, $t4, 16
    ctx->pc = 0x21dfb0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
label_21dfb4:
    // 0x21dfb4: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21dfb4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21dfb8:
    // 0x21dfb8: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21dfb8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21dfbc:
    // 0x21dfbc: 0x1540ffed  bnez        $t2, . + 4 + (-0x13 << 2)
label_21dfc0:
    if (ctx->pc == 0x21DFC0u) {
        ctx->pc = 0x21DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFBCu;
        // 0x21dfc0: 0xad2b0000  sw          $t3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DFC4u;
        goto label_21dfc4;
    }
    ctx->pc = 0x21DFBCu;
    {
        const bool branch_taken_0x21dfbc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFBCu;
        // 0x21dfc0: 0xad2b0000  sw          $t3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfbc) {
            ctx->pc = 0x21DF74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21df74;
        }
    }
    ctx->pc = 0x21DFC4u;
label_21dfc4:
    // 0x21dfc4: 0x0  nop
    ctx->pc = 0x21dfc4u;
    // NOP
label_21dfc8:
    // 0x21dfc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21dfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21dfcc:
    // 0x21dfcc: 0x28c4000a  slti        $a0, $a2, 0xA
    ctx->pc = 0x21dfccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_21dfd0:
    // 0x21dfd0: 0x1480ff67  bnez        $a0, . + 4 + (-0x99 << 2)
label_21dfd4:
    if (ctx->pc == 0x21DFD4u) {
        ctx->pc = 0x21DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFD0u;
        // 0x21dfd4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DFD8u;
        goto label_21dfd8;
    }
    ctx->pc = 0x21DFD0u;
    {
        const bool branch_taken_0x21dfd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFD0u;
        // 0x21dfd4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfd0) {
            ctx->pc = 0x21DD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21dd70; return; }
        }
    }
    ctx->pc = 0x21DFD8u;
label_21dfd8:
    // 0x21dfd8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21dfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21dfdc:
    // 0x21dfdc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x21dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21dfe0:
    // 0x21dfe0: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x21dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_21dfe4:
    // 0x21dfe4: 0xc4001a  div         $zero, $a2, $a0
    ctx->pc = 0x21dfe4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21dfe8:
    // 0x21dfe8: 0x0  nop
    ctx->pc = 0x21dfe8u;
    // NOP
label_21dfec:
    // 0x21dfec: 0x0  nop
    ctx->pc = 0x21dfecu;
    // NOP
label_21dff0:
    // 0x21dff0: 0x3010  mfhi        $a2
    ctx->pc = 0x21dff0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21dff4:
    // 0x21dff4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x21dff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21dff8:
    // 0x21dff8: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x21dff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_21dffc:
    // 0x21dffc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x21dffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21e000:
    // 0x21e000: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x21e000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_21e004:
    // 0x21e004: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21e004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21e008:
    // 0x21e008: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x21e008u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_21e00c:
    // 0x21e00c: 0xc4001a  div         $zero, $a2, $a0
    ctx->pc = 0x21e00cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21e010:
    // 0x21e010: 0x0  nop
    ctx->pc = 0x21e010u;
    // NOP
label_21e014:
    // 0x21e014: 0x0  nop
    ctx->pc = 0x21e014u;
    // NOP
label_21e018:
    // 0x21e018: 0x3010  mfhi        $a2
    ctx->pc = 0x21e018u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21e01c:
    // 0x21e01c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x21e01cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21e020:
    // 0x21e020: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x21e020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_21e024:
    // 0x21e024: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x21e024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21e028:
    // 0x21e028: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x21e028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_21e02c:
    // 0x21e02c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21e02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21e030:
    // 0x21e030: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x21e030u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_21e034:
    // 0x21e034: 0xc4001a  div         $zero, $a2, $a0
    ctx->pc = 0x21e034u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21e038:
    // 0x21e038: 0x0  nop
    ctx->pc = 0x21e038u;
    // NOP
label_21e03c:
    // 0x21e03c: 0x0  nop
    ctx->pc = 0x21e03cu;
    // NOP
label_21e040:
    // 0x21e040: 0x3010  mfhi        $a2
    ctx->pc = 0x21e040u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21e044:
    // 0x21e044: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x21e044u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21e048:
    // 0x21e048: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x21e048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_21e04c:
    // 0x21e04c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x21e04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21e050:
    // 0x21e050: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x21e050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
label_21e054:
    // 0x21e054: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21e054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21e058:
    // 0x21e058: 0x630c3  sra         $a2, $a2, 3
    ctx->pc = 0x21e058u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
label_21e05c:
    // 0x21e05c: 0xc4001a  div         $zero, $a2, $a0
    ctx->pc = 0x21e05cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21e060:
    // 0x21e060: 0x0  nop
    ctx->pc = 0x21e060u;
    // NOP
label_21e064:
    // 0x21e064: 0x0  nop
    ctx->pc = 0x21e064u;
    // NOP
label_21e068:
    // 0x21e068: 0x3010  mfhi        $a2
    ctx->pc = 0x21e068u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21e06c:
    // 0x21e06c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x21e06cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21e070:
    // 0x21e070: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x21e070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_21e074:
    // 0x21e074: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x21e074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21e078:
    // 0x21e078: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x21e078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_21e07c:
    // 0x21e07c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21e07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21e080:
    // 0x21e080: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x21e080u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_21e084:
    // 0x21e084: 0xc4001a  div         $zero, $a2, $a0
    ctx->pc = 0x21e084u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21e088:
    // 0x21e088: 0x0  nop
    ctx->pc = 0x21e088u;
    // NOP
label_21e08c:
    // 0x21e08c: 0x0  nop
    ctx->pc = 0x21e08cu;
    // NOP
label_21e090:
    // 0x21e090: 0x2010  mfhi        $a0
    ctx->pc = 0x21e090u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_21e094:
    // 0x21e094: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21e094u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21e098:
    // 0x21e098: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21e098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21e09c:
    // 0x21e09c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21e0a0:
    // 0x21e0a0: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x21e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_21e0a4:
    // 0x21e0a4: 0x3e00008  jr          $ra
label_21e0a8:
    if (ctx->pc == 0x21E0A8u) {
        ctx->pc = 0x21E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0A4u;
        // 0x21e0a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0ACu;
        goto label_21e0ac;
    }
    ctx->pc = 0x21E0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0A4u;
        // 0x21e0a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E0ACu;
label_21e0ac:
    // 0x21e0ac: 0x0  nop
    ctx->pc = 0x21e0acu;
    // NOP
label_21e0b0:
    // 0x21e0b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x21e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_21e0b4:
    // 0x21e0b4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x21e0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21e0b8:
    // 0x21e0b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x21e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_21e0bc:
    // 0x21e0bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x21e0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_21e0c0:
    // 0x21e0c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_21e0c4:
    // 0x21e0c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21e0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_21e0c8:
    // 0x21e0c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_21e0cc:
    // 0x21e0cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21e0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21e0d0:
    // 0x21e0d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21e0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21e0d4:
    // 0x21e0d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21e0d8:
    // 0x21e0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21e0dc:
    // 0x21e0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21e0e0:
    // 0x21e0e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21e0e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21e0e4:
    // 0x21e0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e0e8:
    // 0x21e0e8: 0xc08e9ac  jal         func_23A6B0
label_21e0ec:
    if (ctx->pc == 0x21E0ECu) {
        ctx->pc = 0x21E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0E8u;
        // 0x21e0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0F0u;
        goto label_21e0f0;
    }
    ctx->pc = 0x21E0E8u;
    SET_GPR_U32(ctx, 31, 0x21E0F0u);
    ctx->pc = 0x21E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0E8u;
    // 0x21e0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x21E0F0u;
label_21e0f0:
    // 0x21e0f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21e0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21e0f4:
    // 0x21e0f4: 0xc087360  jal         func_21CD80
label_21e0f8:
    if (ctx->pc == 0x21E0F8u) {
        ctx->pc = 0x21E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0F4u;
        // 0x21e0f8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0FCu;
        goto label_21e0fc;
    }
    ctx->pc = 0x21E0F4u;
    SET_GPR_U32(ctx, 31, 0x21E0FCu);
    ctx->pc = 0x21E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0F4u;
    // 0x21e0f8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CD80u;
    { ctx->pc = 0x21cd80; return; }
    ctx->pc = 0x21E0FCu;
label_21e0fc:
    // 0x21e0fc: 0x27b200c8  addiu       $s2, $sp, 0xC8
    ctx->pc = 0x21e0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_21e100:
    // 0x21e100: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x21e100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_21e104:
    // 0x21e104: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x21e104u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_21e108:
    // 0x21e108: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x21e108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_21e10c:
    // 0x21e10c: 0xdfa400c0  ld          $a0, 0xC0($sp)
    ctx->pc = 0x21e10cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21e110:
    // 0x21e110: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x21e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
label_21e114:
    // 0x21e114: 0x4153e  dsrl32      $v0, $a0, 20
    ctx->pc = 0x21e114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 20));
label_21e118:
    // 0x21e118: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x21e118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_21e11c:
    // 0x21e11c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_21e120:
    // 0x21e120: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x21e120u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_21e124:
    // 0x21e124: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21e124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_21e128:
    // 0x21e128: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x21e128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_21e12c:
    // 0x21e12c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x21e12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_21e130:
    // 0x21e130: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21e130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21e134:
    // 0x21e134: 0xc06d9fe  jal         func_1B67F8
label_21e138:
    if (ctx->pc == 0x21E138u) {
        ctx->pc = 0x21E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E134u;
        // 0x21e138: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E13Cu;
        goto label_21e13c;
    }
    ctx->pc = 0x21E134u;
    SET_GPR_U32(ctx, 31, 0x21E13Cu);
    ctx->pc = 0x21E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E134u;
    // 0x21e138: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E13Cu;
label_21e13c:
    // 0x21e13c: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x21e13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_21e140:
    // 0x21e140: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x21e140u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_21e144:
    // 0x21e144: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x21e144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_21e148:
    // 0x21e148: 0xc06d9fe  jal         func_1B67F8
label_21e14c:
    if (ctx->pc == 0x21E14Cu) {
        ctx->pc = 0x21E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E148u;
        // 0x21e14c: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E150u;
        goto label_21e150;
    }
    ctx->pc = 0x21E148u;
    SET_GPR_U32(ctx, 31, 0x21E150u);
    ctx->pc = 0x21E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E148u;
    // 0x21e14c: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E150u;
label_21e150:
    // 0x21e150: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x21e150u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_21e154:
    // 0x21e154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21e158:
    // 0x21e158: 0xc08774c  jal         func_21DD30
label_21e15c:
    if (ctx->pc == 0x21E15Cu) {
        ctx->pc = 0x21E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E158u;
        // 0x21e15c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E160u;
        goto label_21e160;
    }
    ctx->pc = 0x21E158u;
    SET_GPR_U32(ctx, 31, 0x21E160u);
    ctx->pc = 0x21E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E158u;
    // 0x21e15c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DD30u;
    { ctx->pc = 0x21dd30; return; }
    ctx->pc = 0x21E160u;
label_21e160:
    // 0x21e160: 0x27b700a4  addiu       $s7, $sp, 0xA4
    ctx->pc = 0x21e160u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_21e164:
    // 0x21e164: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x21e164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_21e168:
    // 0x21e168: 0x2c610035  sltiu       $at, $v1, 0x35
    ctx->pc = 0x21e168u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
label_21e16c:
    // 0x21e16c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_21e170:
    if (ctx->pc == 0x21E170u) {
        ctx->pc = 0x21E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E16Cu;
        // 0x21e170: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E174u;
        goto label_21e174;
    }
    ctx->pc = 0x21E16Cu;
    {
        const bool branch_taken_0x21e16c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E16Cu;
        // 0x21e170: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e16c) {
            ctx->pc = 0x21E184u;
            goto label_21e184;
        }
    }
    ctx->pc = 0x21E174u;
label_21e174:
    // 0x21e174: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x21e174u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_21e178:
    // 0x21e178: 0x0  nop
    ctx->pc = 0x21e178u;
    // NOP
label_21e17c:
    // 0x21e17c: 0x0  nop
    ctx->pc = 0x21e17cu;
    // NOP
label_21e180:
    // 0x21e180: 0x1810  mfhi        $v1
    ctx->pc = 0x21e180u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_21e184:
    // 0x21e184: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x21e184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21e188:
    // 0x21e188: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x21e188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21e18c:
    // 0x21e18c: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x21e18cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21e190:
    // 0x21e190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e194:
    // 0x21e194: 0x2822814  dsllv       $a1, $v0, $s4
    ctx->pc = 0x21e194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 20) & 0x3F));
label_21e198:
    // 0x21e198: 0xc06d9fe  jal         func_1B67F8
label_21e19c:
    if (ctx->pc == 0x21E19Cu) {
        ctx->pc = 0x21E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E198u;
        // 0x21e19c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1A0u;
        goto label_21e1a0;
    }
    ctx->pc = 0x21E198u;
    SET_GPR_U32(ctx, 31, 0x21E1A0u);
    ctx->pc = 0x21E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E198u;
    // 0x21e19c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E1A0u;
label_21e1a0:
    // 0x21e1a0: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x21e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21e1a4:
    // 0x21e1a4: 0x2931816  dsrlv       $v1, $s3, $s4
    ctx->pc = 0x21e1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (GPR_U32(ctx, 20) & 0x3F));
label_21e1a8:
    // 0x21e1a8: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x21e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_21e1ac:
    // 0x21e1ac: 0x27b900a8  addiu       $t9, $sp, 0xA8
    ctx->pc = 0x21e1acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_21e1b0:
    // 0x21e1b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21e1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_21e1b4:
    // 0x21e1b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21e1b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e1b8:
    // 0x21e1b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x21e1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_21e1bc:
    // 0x21e1bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21e1bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e1c0:
    // 0x21e1c0: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x21e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_21e1c4:
    // 0x21e1c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21e1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21e1c8:
    // 0x21e1c8: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x21e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_21e1cc:
    // 0x21e1cc: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x21e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_21e1d0:
    // 0x21e1d0: 0x0  nop
    ctx->pc = 0x21e1d0u;
    // NOP
label_21e1d4:
    // 0x21e1d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x21e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21e1d8:
    // 0x21e1d8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x21e1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_21e1dc:
    // 0x21e1dc: 0x742823  subu        $a1, $v1, $s4
    ctx->pc = 0x21e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_21e1e0:
    // 0x21e1e0: 0xa22006  srlv        $a0, $v0, $a1
    ctx->pc = 0x21e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_21e1e4:
    // 0x21e1e4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x21e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_21e1e8:
    // 0x21e1e8: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x21e1e8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_21e1ec:
    // 0x21e1ec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21e1ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21e1f0:
    // 0x21e1f0: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x21e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_21e1f4:
    // 0x21e1f4: 0x2810  mfhi        $a1
    ctx->pc = 0x21e1f4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21e1f8:
    // 0x21e1f8: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x21e1f8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_21e1fc:
    // 0x21e1fc: 0x0  nop
    ctx->pc = 0x21e1fcu;
    // NOP
label_21e200:
    // 0x21e200: 0x0  nop
    ctx->pc = 0x21e200u;
    // NOP
label_21e204:
    // 0x21e204: 0x3010  mfhi        $a2
    ctx->pc = 0x21e204u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21e208:
    // 0x21e208: 0xc087588  jal         func_21D620
label_21e20c:
    if (ctx->pc == 0x21E20Cu) {
        ctx->pc = 0x21E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E208u;
        // 0x21e20c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E210u;
        goto label_21e210;
    }
    ctx->pc = 0x21E208u;
    SET_GPR_U32(ctx, 31, 0x21E210u);
    ctx->pc = 0x21E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E208u;
    // 0x21e20c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D620u;
    { ctx->pc = 0x21d620; return; }
    ctx->pc = 0x21E210u;
label_21e210:
    // 0x21e210: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21e210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_21e214:
    // 0x21e214: 0x2a630008  slti        $v1, $s3, 0x8
    ctx->pc = 0x21e214u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_21e218:
    // 0x21e218: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_21e21c:
    if (ctx->pc == 0x21E21Cu) {
        ctx->pc = 0x21E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E218u;
        // 0x21e21c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E220u;
        goto label_21e220;
    }
    ctx->pc = 0x21E218u;
    {
        const bool branch_taken_0x21e218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E218u;
        // 0x21e21c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e218) {
            ctx->pc = 0x21E1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e1d8;
        }
    }
    ctx->pc = 0x21E220u;
label_21e220:
    // 0x21e220: 0x27b600ac  addiu       $s6, $sp, 0xAC
    ctx->pc = 0x21e220u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_21e224:
    // 0x21e224: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x21e224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_21e228:
    // 0x21e228: 0x8ed50000  lw          $s5, 0x0($s6)
    ctx->pc = 0x21e228u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_21e22c:
    // 0x21e22c: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x21e22cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_21e230:
    // 0x21e230: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x21e230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_21e234:
    // 0x21e234: 0x27be00b0  addiu       $fp, $sp, 0xB0
    ctx->pc = 0x21e234u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_21e238:
    // 0x21e238: 0xdfa400c0  ld          $a0, 0xC0($sp)
    ctx->pc = 0x21e238u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21e23c:
    // 0x21e23c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21e23cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e240:
    // 0x21e240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e244:
    // 0x21e244: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x21e244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
label_21e248:
    // 0x21e248: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x21e248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_21e24c:
    // 0x21e24c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x21e24cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_21e250:
    // 0x21e250: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x21e250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_21e254:
    // 0x21e254: 0x85282f  dsubu       $a1, $a0, $a1
    ctx->pc = 0x21e254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
label_21e258:
    // 0x21e258: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21e258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_21e25c:
    // 0x21e25c: 0xffa500c0  sd          $a1, 0xC0($sp)
    ctx->pc = 0x21e25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 5));
label_21e260:
    // 0x21e260: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x21e260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_21e264:
    // 0x21e264: 0x9ee30000  lwu         $v1, 0x0($s7)
    ctx->pc = 0x21e264u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_21e268:
    // 0x21e268: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x21e268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_21e26c:
    // 0x21e26c: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x21e26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_21e270:
    // 0x21e270: 0xffa300c0  sd          $v1, 0xC0($sp)
    ctx->pc = 0x21e270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 3));
label_21e274:
    // 0x21e274: 0x8fd40000  lw          $s4, 0x0($fp)
    ctx->pc = 0x21e274u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_21e278:
    // 0x21e278: 0x0  nop
    ctx->pc = 0x21e278u;
    // NOP
label_21e27c:
    // 0x21e27c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x21e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21e280:
    // 0x21e280: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x21e280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_21e284:
    // 0x21e284: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x21e284u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_21e288:
    // 0x21e288: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21e288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_21e28c:
    // 0x21e28c: 0x752806  srlv        $a1, $s5, $v1
    ctx->pc = 0x21e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 21), GPR_U32(ctx, 3) & 0x1F));
label_21e290:
    // 0x21e290: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x21e290u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_21e294:
    // 0x21e294: 0x741806  srlv        $v1, $s4, $v1
    ctx->pc = 0x21e294u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 3) & 0x1F));
label_21e298:
    // 0x21e298: 0x0  nop
    ctx->pc = 0x21e298u;
    // NOP
label_21e29c:
    // 0x21e29c: 0x2810  mfhi        $a1
    ctx->pc = 0x21e29cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21e2a0:
    // 0x21e2a0: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x21e2a0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_21e2a4:
    // 0x21e2a4: 0x0  nop
    ctx->pc = 0x21e2a4u;
    // NOP
label_21e2a8:
    // 0x21e2a8: 0x0  nop
    ctx->pc = 0x21e2a8u;
    // NOP
label_21e2ac:
    // 0x21e2ac: 0x3010  mfhi        $a2
    ctx->pc = 0x21e2acu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21e2b0:
    // 0x21e2b0: 0xc087588  jal         func_21D620
label_21e2b4:
    if (ctx->pc == 0x21E2B4u) {
        ctx->pc = 0x21E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2B0u;
        // 0x21e2b4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2B8u;
        goto label_21e2b8;
    }
    ctx->pc = 0x21E2B0u;
    SET_GPR_U32(ctx, 31, 0x21E2B8u);
    ctx->pc = 0x21E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2B0u;
    // 0x21e2b4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D620u;
    { ctx->pc = 0x21d620; return; }
    ctx->pc = 0x21E2B8u;
label_21e2b8:
    // 0x21e2b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21e2bc:
    // 0x21e2bc: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x21e2bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_21e2c0:
    // 0x21e2c0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_21e2c4:
    if (ctx->pc == 0x21E2C4u) {
        ctx->pc = 0x21E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2C0u;
        // 0x21e2c4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2C8u;
        goto label_21e2c8;
    }
    ctx->pc = 0x21E2C0u;
    {
        const bool branch_taken_0x21e2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2C0u;
        // 0x21e2c4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2c0) {
            ctx->pc = 0x21E280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e280;
        }
    }
    ctx->pc = 0x21E2C8u;
label_21e2c8:
    // 0x21e2c8: 0x8f340000  lw          $s4, 0x0($t9)
    ctx->pc = 0x21e2c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_21e2cc:
    // 0x21e2cc: 0x2e810035  sltiu       $at, $s4, 0x35
    ctx->pc = 0x21e2ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
label_21e2d0:
    // 0x21e2d0: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_21e2d4:
    if (ctx->pc == 0x21E2D4u) {
        ctx->pc = 0x21E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2D0u;
        // 0x21e2d4: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2D8u;
        goto label_21e2d8;
    }
    ctx->pc = 0x21E2D0u;
    {
        const bool branch_taken_0x21e2d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2D0u;
        // 0x21e2d4: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2d0) {
            ctx->pc = 0x21E2ECu;
            goto label_21e2ec;
        }
    }
    ctx->pc = 0x21E2D8u;
label_21e2d8:
    // 0x21e2d8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x21e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21e2dc:
    // 0x21e2dc: 0x282001b  divu        $zero, $s4, $v0
    ctx->pc = 0x21e2dcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_21e2e0:
    // 0x21e2e0: 0x0  nop
    ctx->pc = 0x21e2e0u;
    // NOP
label_21e2e4:
    // 0x21e2e4: 0x0  nop
    ctx->pc = 0x21e2e4u;
    // NOP
label_21e2e8:
    // 0x21e2e8: 0x1810  mfhi        $v1
    ctx->pc = 0x21e2e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_21e2ec:
    // 0x21e2ec: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x21e2ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21e2f0:
    // 0x21e2f0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x21e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21e2f4:
    // 0x21e2f4: 0x43a823  subu        $s5, $v0, $v1
    ctx->pc = 0x21e2f4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21e2f8:
    // 0x21e2f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e2fc:
    // 0x21e2fc: 0x2a22814  dsllv       $a1, $v0, $s5
    ctx->pc = 0x21e2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
label_21e300:
    // 0x21e300: 0xc06d9fe  jal         func_1B67F8
label_21e304:
    if (ctx->pc == 0x21E304u) {
        ctx->pc = 0x21E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E300u;
        // 0x21e304: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E308u;
        goto label_21e308;
    }
    ctx->pc = 0x21E300u;
    SET_GPR_U32(ctx, 31, 0x21E308u);
    ctx->pc = 0x21E304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E300u;
    // 0x21e304: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E308u;
label_21e308:
    // 0x21e308: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x21e308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21e30c:
    // 0x21e30c: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x21e30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_21e310:
    // 0x21e310: 0xd52823  subu        $a1, $a2, $s5
    ctx->pc = 0x21e310u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_21e314:
    // 0x21e314: 0x2b32016  dsrlv       $a0, $s3, $s5
    ctx->pc = 0x21e314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> (GPR_U32(ctx, 21) & 0x3F));
label_21e318:
    // 0x21e318: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x21e318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_21e31c:
    // 0x21e31c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21e31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_21e320:
    // 0x21e320: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x21e320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_21e324:
    // 0x21e324: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x21e324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
label_21e328:
    // 0x21e328: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x21e328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_21e32c:
    // 0x21e32c: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x21e32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_21e330:
    // 0x21e330: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x21e330u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_21e334:
    // 0x21e334: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x21e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_21e338:
    // 0x21e338: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x21e338u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_21e33c:
    // 0x21e33c: 0x8fd40000  lw          $s4, 0x0($fp)
    ctx->pc = 0x21e33cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_21e340:
    // 0x21e340: 0x2e810035  sltiu       $at, $s4, 0x35
    ctx->pc = 0x21e340u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
label_21e344:
    // 0x21e344: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_21e348:
    if (ctx->pc == 0x21E348u) {
        ctx->pc = 0x21E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E344u;
        // 0x21e348: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E34Cu;
        goto label_21e34c;
    }
    ctx->pc = 0x21E344u;
    {
        const bool branch_taken_0x21e344 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E344u;
        // 0x21e348: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e344) {
            ctx->pc = 0x21E35Cu;
            goto label_21e35c;
        }
    }
    ctx->pc = 0x21E34Cu;
label_21e34c:
    // 0x21e34c: 0x286001b  divu        $zero, $s4, $a2
    ctx->pc = 0x21e34cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_21e350:
    // 0x21e350: 0x0  nop
    ctx->pc = 0x21e350u;
    // NOP
label_21e354:
    // 0x21e354: 0x0  nop
    ctx->pc = 0x21e354u;
    // NOP
label_21e358:
    // 0x21e358: 0x1810  mfhi        $v1
    ctx->pc = 0x21e358u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_21e35c:
    // 0x21e35c: 0xde530000  ld          $s3, 0x0($s2)
    ctx->pc = 0x21e35cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_21e360:
    // 0x21e360: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x21e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21e364:
    // 0x21e364: 0x43a823  subu        $s5, $v0, $v1
    ctx->pc = 0x21e364u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21e368:
    // 0x21e368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e36c:
    // 0x21e36c: 0x2a22814  dsllv       $a1, $v0, $s5
    ctx->pc = 0x21e36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 21) & 0x3F));
label_21e370:
    // 0x21e370: 0xc06d9fe  jal         func_1B67F8
label_21e374:
    if (ctx->pc == 0x21E374u) {
        ctx->pc = 0x21E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E370u;
        // 0x21e374: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E378u;
        goto label_21e378;
    }
    ctx->pc = 0x21E370u;
    SET_GPR_U32(ctx, 31, 0x21E378u);
    ctx->pc = 0x21E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E370u;
    // 0x21e374: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E378u;
label_21e378:
    // 0x21e378: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x21e378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21e37c:
    // 0x21e37c: 0x2b31816  dsrlv       $v1, $s3, $s5
    ctx->pc = 0x21e37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (GPR_U32(ctx, 21) & 0x3F));
label_21e380:
    // 0x21e380: 0x952023  subu        $a0, $a0, $s5
    ctx->pc = 0x21e380u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_21e384:
    // 0x21e384: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21e384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e388:
    // 0x21e388: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21e388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_21e38c:
    // 0x21e38c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21e38cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e390:
    // 0x21e390: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x21e390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_21e394:
    // 0x21e394: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x21e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_21e398:
    // 0x21e398: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21e398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21e39c:
    // 0x21e39c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x21e39cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_21e3a0:
    // 0x21e3a0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x21e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_21e3a4:
    // 0x21e3a4: 0x9ec30000  lwu         $v1, 0x0($s6)
    ctx->pc = 0x21e3a4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_21e3a8:
    // 0x21e3a8: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x21e3a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_21e3ac:
    // 0x21e3ac: 0x4233c  dsll32      $a0, $a0, 12
    ctx->pc = 0x21e3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 12));
label_21e3b0:
    // 0x21e3b0: 0x4233e  dsrl32      $a0, $a0, 12
    ctx->pc = 0x21e3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 12));
label_21e3b4:
    // 0x21e3b4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21e3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_21e3b8:
    // 0x21e3b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x21e3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_21e3bc:
    // 0x21e3bc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x21e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_21e3c0:
    // 0x21e3c0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x21e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_21e3c4:
    // 0x21e3c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x21e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21e3c8:
    // 0x21e3c8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x21e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_21e3cc:
    // 0x21e3cc: 0x552823  subu        $a1, $v0, $s5
    ctx->pc = 0x21e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_21e3d0:
    // 0x21e3d0: 0xb42006  srlv        $a0, $s4, $a1
    ctx->pc = 0x21e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 5) & 0x1F));
label_21e3d4:
    // 0x21e3d4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x21e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_21e3d8:
    // 0x21e3d8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x21e3d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_21e3dc:
    // 0x21e3dc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x21e3dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_21e3e0:
    // 0x21e3e0: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x21e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_21e3e4:
    // 0x21e3e4: 0x2810  mfhi        $a1
    ctx->pc = 0x21e3e4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21e3e8:
    // 0x21e3e8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x21e3e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_21e3ec:
    // 0x21e3ec: 0x0  nop
    ctx->pc = 0x21e3ecu;
    // NOP
label_21e3f0:
    // 0x21e3f0: 0x0  nop
    ctx->pc = 0x21e3f0u;
    // NOP
label_21e3f4:
    // 0x21e3f4: 0x3010  mfhi        $a2
    ctx->pc = 0x21e3f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21e3f8:
    // 0x21e3f8: 0xc087588  jal         func_21D620
label_21e3fc:
    if (ctx->pc == 0x21E3FCu) {
        ctx->pc = 0x21E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3F8u;
        // 0x21e3fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E400u;
        goto label_21e400;
    }
    ctx->pc = 0x21E3F8u;
    SET_GPR_U32(ctx, 31, 0x21E400u);
    ctx->pc = 0x21E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E3F8u;
    // 0x21e3fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D620u;
    { ctx->pc = 0x21d620; return; }
    ctx->pc = 0x21E400u;
label_21e400:
    // 0x21e400: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21e400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_21e404:
    // 0x21e404: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x21e404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_21e408:
    // 0x21e408: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_21e40c:
    if (ctx->pc == 0x21E40Cu) {
        ctx->pc = 0x21E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E408u;
        // 0x21e40c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E410u;
        goto label_21e410;
    }
    ctx->pc = 0x21E408u;
    {
        const bool branch_taken_0x21e408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E408u;
        // 0x21e40c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e408) {
            ctx->pc = 0x21E3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e3c8;
        }
    }
    ctx->pc = 0x21E410u;
label_21e410:
    // 0x21e410: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x21e410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_21e414:
    // 0x21e414: 0x2c610035  sltiu       $at, $v1, 0x35
    ctx->pc = 0x21e414u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
label_21e418:
    // 0x21e418: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_21e41c:
    if (ctx->pc == 0x21E41Cu) {
        ctx->pc = 0x21E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E418u;
        // 0x21e41c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E420u;
        goto label_21e420;
    }
    ctx->pc = 0x21E418u;
    {
        const bool branch_taken_0x21e418 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E418u;
        // 0x21e41c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e418) {
            ctx->pc = 0x21E430u;
            goto label_21e430;
        }
    }
    ctx->pc = 0x21E420u;
label_21e420:
    // 0x21e420: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x21e420u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_21e424:
    // 0x21e424: 0x0  nop
    ctx->pc = 0x21e424u;
    // NOP
label_21e428:
    // 0x21e428: 0x0  nop
    ctx->pc = 0x21e428u;
    // NOP
label_21e42c:
    // 0x21e42c: 0x1810  mfhi        $v1
    ctx->pc = 0x21e42cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_21e430:
    // 0x21e430: 0xde530000  ld          $s3, 0x0($s2)
    ctx->pc = 0x21e430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_21e434:
    // 0x21e434: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x21e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21e438:
    // 0x21e438: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x21e438u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21e43c:
    // 0x21e43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e440:
    // 0x21e440: 0x2822814  dsllv       $a1, $v0, $s4
    ctx->pc = 0x21e440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 20) & 0x3F));
label_21e444:
    // 0x21e444: 0xc06d9fe  jal         func_1B67F8
label_21e448:
    if (ctx->pc == 0x21E448u) {
        ctx->pc = 0x21E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E444u;
        // 0x21e448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E44Cu;
        goto label_21e44c;
    }
    ctx->pc = 0x21E444u;
    SET_GPR_U32(ctx, 31, 0x21E44Cu);
    ctx->pc = 0x21E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E444u;
    // 0x21e448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E44Cu;
label_21e44c:
    // 0x21e44c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x21e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21e450:
    // 0x21e450: 0x2932016  dsrlv       $a0, $s3, $s4
    ctx->pc = 0x21e450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> (GPR_U32(ctx, 20) & 0x3F));
label_21e454:
    // 0x21e454: 0x742823  subu        $a1, $v1, $s4
    ctx->pc = 0x21e454u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_21e458:
    // 0x21e458: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x21e458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_21e45c:
    // 0x21e45c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x21e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_21e460:
    // 0x21e460: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x21e460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_21e464:
    // 0x21e464: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x21e464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_21e468:
    // 0x21e468: 0xc21014  dsllv       $v0, $v0, $a2
    ctx->pc = 0x21e468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 6) & 0x3F));
label_21e46c:
    // 0x21e46c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x21e46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_21e470:
    // 0x21e470: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x21e470u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_21e474:
    // 0x21e474: 0xdfa400c0  ld          $a0, 0xC0($sp)
    ctx->pc = 0x21e474u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21e478:
    // 0x21e478: 0x413be  dsrl32      $v0, $a0, 14
    ctx->pc = 0x21e478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 14));
label_21e47c:
    // 0x21e47c: 0xc06d9fe  jal         func_1B67F8
label_21e480:
    if (ctx->pc == 0x21E480u) {
        ctx->pc = 0x21E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E47Cu;
        // 0x21e480: 0x3053003f  andi        $s3, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E484u;
        goto label_21e484;
    }
    ctx->pc = 0x21E47Cu;
    SET_GPR_U32(ctx, 31, 0x21E484u);
    ctx->pc = 0x21E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E47Cu;
    // 0x21e480: 0x3053003f  andi        $s3, $v0, 0x3F (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E484u;
label_21e484:
    // 0x21e484: 0xffa200d0  sd          $v0, 0xD0($sp)
    ctx->pc = 0x21e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 2));
label_21e488:
    // 0x21e488: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x21e488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_21e48c:
    // 0x21e48c: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x21e48cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_21e490:
    // 0x21e490: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x21e490u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_21e494:
    // 0x21e494: 0x91230001  lbu         $v1, 0x1($t1)
    ctx->pc = 0x21e494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_21e498:
    // 0x21e498: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x21e498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_21e49c:
    // 0x21e49c: 0x91280002  lbu         $t0, 0x2($t1)
    ctx->pc = 0x21e49cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_21e4a0:
    // 0x21e4a0: 0x91270003  lbu         $a3, 0x3($t1)
    ctx->pc = 0x21e4a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_21e4a4:
    // 0x21e4a4: 0x91260004  lbu         $a2, 0x4($t1)
    ctx->pc = 0x21e4a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
label_21e4a8:
    // 0x21e4a8: 0x91250005  lbu         $a1, 0x5($t1)
    ctx->pc = 0x21e4a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
label_21e4ac:
    // 0x21e4ac: 0x45021  addu        $t2, $zero, $a0
    ctx->pc = 0x21e4acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_21e4b0:
    // 0x21e4b0: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x21e4b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21e4b4:
    // 0x21e4b4: 0x91240006  lbu         $a0, 0x6($t1)
    ctx->pc = 0x21e4b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
label_21e4b8:
    // 0x21e4b8: 0x91230007  lbu         $v1, 0x7($t1)
    ctx->pc = 0x21e4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
label_21e4bc:
    // 0x21e4bc: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x21e4bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_21e4c0:
    // 0x21e4c0: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x21e4c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_21e4c4:
    // 0x21e4c4: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x21e4c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_21e4c8:
    // 0x21e4c8: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x21e4c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_21e4cc:
    // 0x21e4cc: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x21e4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_21e4d0:
    // 0x21e4d0: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x21e4d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21e4d4:
    // 0x21e4d4: 0x14b2024  and         $a0, $t2, $t3
    ctx->pc = 0x21e4d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
label_21e4d8:
    // 0x21e4d8: 0xa1c02  srl         $v1, $t2, 16
    ctx->pc = 0x21e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
label_21e4dc:
    // 0x21e4dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21e4e0:
    // 0x21e4e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21e4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_21e4e4:
    // 0x21e4e4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x21e4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_21e4e8:
    // 0x21e4e8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x21e4e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_21e4ec:
    // 0x21e4ec: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x21e4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_21e4f0:
    // 0x21e4f0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_21e4f4:
    if (ctx->pc == 0x21E4F4u) {
        ctx->pc = 0x21E4F8u;
        goto label_21e4f8;
    }
    ctx->pc = 0x21E4F0u;
    {
        const bool branch_taken_0x21e4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x21e4f0) {
            ctx->pc = 0x21E500u;
            goto label_21e500;
        }
    }
    ctx->pc = 0x21E4F8u;
label_21e4f8:
    // 0x21e4f8: 0x10000025  b           . + 4 + (0x25 << 2)
label_21e4fc:
    if (ctx->pc == 0x21E4FCu) {
        ctx->pc = 0x21E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4F8u;
        // 0x21e4fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E500u;
        goto label_21e500;
    }
    ctx->pc = 0x21E4F8u;
    {
        const bool branch_taken_0x21e4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4F8u;
        // 0x21e4fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4f8) {
            ctx->pc = 0x21E590u;
            goto label_21e590;
        }
    }
    ctx->pc = 0x21E500u;
label_21e500:
    // 0x21e500: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x21e500u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_21e504:
    // 0x21e504: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x21e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_21e508:
    // 0x21e508: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x21e508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_21e50c:
    // 0x21e50c: 0x412fe  dsrl32      $v0, $a0, 11
    ctx->pc = 0x21e50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 11));
label_21e510:
    // 0x21e510: 0xc06d9fe  jal         func_1B67F8
label_21e514:
    if (ctx->pc == 0x21E514u) {
        ctx->pc = 0x21E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E510u;
        // 0x21e514: 0x30530007  andi        $s3, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E518u;
        goto label_21e518;
    }
    ctx->pc = 0x21E510u;
    SET_GPR_U32(ctx, 31, 0x21E518u);
    ctx->pc = 0x21E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E510u;
    // 0x21e514: 0x30530007  andi        $s3, $v0, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E518u;
label_21e518:
    // 0x21e518: 0xffa200d8  sd          $v0, 0xD8($sp)
    ctx->pc = 0x21e518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 2));
label_21e51c:
    // 0x21e51c: 0x27a900d8  addiu       $t1, $sp, 0xD8
    ctx->pc = 0x21e51cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_21e520:
    // 0x21e520: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x21e520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_21e524:
    // 0x21e524: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x21e524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_21e528:
    // 0x21e528: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x21e528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_21e52c:
    // 0x21e52c: 0x91280002  lbu         $t0, 0x2($t1)
    ctx->pc = 0x21e52cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_21e530:
    // 0x21e530: 0x91270003  lbu         $a3, 0x3($t1)
    ctx->pc = 0x21e530u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_21e534:
    // 0x21e534: 0x91260004  lbu         $a2, 0x4($t1)
    ctx->pc = 0x21e534u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
label_21e538:
    // 0x21e538: 0x91250005  lbu         $a1, 0x5($t1)
    ctx->pc = 0x21e538u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
label_21e53c:
    // 0x21e53c: 0x35021  addu        $t2, $zero, $v1
    ctx->pc = 0x21e53cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_21e540:
    // 0x21e540: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x21e540u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_21e544:
    // 0x21e544: 0x91230006  lbu         $v1, 0x6($t1)
    ctx->pc = 0x21e544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
label_21e548:
    // 0x21e548: 0x91220007  lbu         $v0, 0x7($t1)
    ctx->pc = 0x21e548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
label_21e54c:
    // 0x21e54c: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x21e54cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_21e550:
    // 0x21e550: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x21e550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_21e554:
    // 0x21e554: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x21e554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_21e558:
    // 0x21e558: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x21e558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_21e55c:
    // 0x21e55c: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x21e55cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21e560:
    // 0x21e560: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x21e560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_21e564:
    // 0x21e564: 0xa1c02  srl         $v1, $t2, 16
    ctx->pc = 0x21e564u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
label_21e568:
    // 0x21e568: 0x3142ffff  andi        $v0, $t2, 0xFFFF
    ctx->pc = 0x21e568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_21e56c:
    // 0x21e56c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21e570:
    // 0x21e570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21e574:
    // 0x21e574: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x21e574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_21e578:
    // 0x21e578: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x21e578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_21e57c:
    // 0x21e57c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_21e580:
    if (ctx->pc == 0x21E580u) {
        ctx->pc = 0x21E584u;
        goto label_21e584;
    }
    ctx->pc = 0x21E57Cu;
    {
        const bool branch_taken_0x21e57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x21e57c) {
            ctx->pc = 0x21E58Cu;
            goto label_21e58c;
        }
    }
    ctx->pc = 0x21E584u;
label_21e584:
    // 0x21e584: 0x10000002  b           . + 4 + (0x2 << 2)
label_21e588:
    if (ctx->pc == 0x21E588u) {
        ctx->pc = 0x21E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E584u;
        // 0x21e588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E58Cu;
        goto label_21e58c;
    }
    ctx->pc = 0x21E584u;
    {
        const bool branch_taken_0x21e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E584u;
        // 0x21e588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e584) {
            ctx->pc = 0x21E590u;
            goto label_21e590;
        }
    }
    ctx->pc = 0x21E58Cu;
label_21e58c:
    // 0x21e58c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e590:
    // 0x21e590: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_21e594:
    if (ctx->pc == 0x21E594u) {
        ctx->pc = 0x21E598u;
        goto label_21e598;
    }
    ctx->pc = 0x21E590u;
    {
        const bool branch_taken_0x21e590 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x21e590) {
            ctx->pc = 0x21E5A0u;
            goto label_21e5a0;
        }
    }
    ctx->pc = 0x21E598u;
label_21e598:
    // 0x21e598: 0x10000032  b           . + 4 + (0x32 << 2)
label_21e59c:
    if (ctx->pc == 0x21E59Cu) {
        ctx->pc = 0x21E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E598u;
        // 0x21e59c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5A0u;
        goto label_21e5a0;
    }
    ctx->pc = 0x21E598u;
    {
        const bool branch_taken_0x21e598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E598u;
        // 0x21e59c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e598) {
            ctx->pc = 0x21E664u;
            { ctx->pc = 0x21e664; return; }
        }
    }
    ctx->pc = 0x21E5A0u;
label_21e5a0:
    // 0x21e5a0: 0xdfa400c0  ld          $a0, 0xC0($sp)
    ctx->pc = 0x21e5a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21e5a4:
    // 0x21e5a4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x21e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_21e5a8:
    // 0x21e5a8: 0xc06d9fe  jal         func_1B67F8
label_21e5ac:
    if (ctx->pc == 0x21E5ACu) {
        ctx->pc = 0x21E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5A8u;
        // 0x21e5ac: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5B0u;
        goto label_21e5b0;
    }
    ctx->pc = 0x21E5A8u;
    SET_GPR_U32(ctx, 31, 0x21E5B0u);
    ctx->pc = 0x21E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5A8u;
    // 0x21e5ac: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E5B0u;
label_21e5b0:
    // 0x21e5b0: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x21e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_21e5b4:
    // 0x21e5b4: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x21e5b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_21e5b8:
    // 0x21e5b8: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x21e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_21e5bc:
    // 0x21e5bc: 0xc06d9fe  jal         func_1B67F8
label_21e5c0:
    if (ctx->pc == 0x21E5C0u) {
        ctx->pc = 0x21E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5BCu;
        // 0x21e5c0: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5C4u;
        goto label_21e5c4;
    }
    ctx->pc = 0x21E5BCu;
    SET_GPR_U32(ctx, 31, 0x21E5C4u);
    ctx->pc = 0x21E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5BCu;
    // 0x21e5c0: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E5C4u;
label_21e5c4:
    // 0x21e5c4: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x21e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_21e5c8:
    // 0x21e5c8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_21e5cc:
    // 0x21e5cc: 0xc0875d0  jal         func_21D740
label_21e5d0:
    if (ctx->pc == 0x21E5D0u) {
        ctx->pc = 0x21E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5CCu;
        // 0x21e5d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5D4u;
        goto label_21e5d4;
    }
    ctx->pc = 0x21E5CCu;
    SET_GPR_U32(ctx, 31, 0x21E5D4u);
    ctx->pc = 0x21E5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5CCu;
    // 0x21e5d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D740u;
    { ctx->pc = 0x21d740; return; }
    ctx->pc = 0x21E5D4u;
label_21e5d4:
    // 0x21e5d4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x21e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_21e5d8:
    // 0x21e5d8: 0x0  nop
    ctx->pc = 0x21e5d8u;
    // NOP
label_21e5dc:
    // 0x21e5dc: 0x2c810010  sltiu       $at, $a0, 0x10
    ctx->pc = 0x21e5dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_21e5e0:
    // 0x21e5e0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_21e5e4:
    if (ctx->pc == 0x21E5E4u) {
        ctx->pc = 0x21E5E8u;
        goto label_21e5e8;
    }
    ctx->pc = 0x21E5E0u;
    {
        const bool branch_taken_0x21e5e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e5e0) {
            ctx->pc = 0x21E5F0u;
            goto label_21e5f0;
        }
    }
    ctx->pc = 0x21E5E8u;
label_21e5e8:
    // 0x21e5e8: 0x1000fffc  b           . + 4 + (-0x4 << 2)
label_21e5ec:
    if (ctx->pc == 0x21E5ECu) {
        ctx->pc = 0x21E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5E8u;
        // 0x21e5ec: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5F0u;
        goto label_21e5f0;
    }
    ctx->pc = 0x21E5E8u;
    {
        const bool branch_taken_0x21e5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5E8u;
        // 0x21e5ec: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5e8) {
            ctx->pc = 0x21E5DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e5dc;
        }
    }
    ctx->pc = 0x21E5F0u;
label_21e5f0:
    // 0x21e5f0: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x21e5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_21e5f4:
    // 0x21e5f4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x21e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_21e5f8:
    // 0x21e5f8: 0x41082  srl         $v0, $a0, 2
    ctx->pc = 0x21e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_21e5fc:
    // 0x21e5fc: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x21e5fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_21e600:
    // 0x21e600: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21e600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21e604:
    // 0x21e604: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x21e604u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21e608:
    // 0x21e608: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x21e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_21e60c:
    // 0x21e60c: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x21e60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_21e610:
    // 0x21e610: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21e610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21e614:
    // 0x21e614: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x21e614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21e618:
    // 0x21e618: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x21e618u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_21e61c:
    // 0x21e61c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21e61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21e620:
    // 0x21e620: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_21e624:
    if (ctx->pc == 0x21E624u) {
        ctx->pc = 0x21E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E620u;
        // 0x21e624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E628u;
        { ctx->pc = 0x21e628; return; }
    }
    ctx->pc = 0x21E620u;
    {
        const bool branch_taken_0x21e620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E620u;
        // 0x21e624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e620) {
            ctx->pc = 0x21E650u;
            { ctx->pc = 0x21e650; return; }
        }
    }
    ctx->pc = 0x21E628u;
    ctx->pc = 0x21e628u;
    return;
}
