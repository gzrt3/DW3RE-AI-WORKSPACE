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


void FUN_0014eba0_part622(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27df30u: goto label_27df30;
        case 0x27df34u: goto label_27df34;
        case 0x27df38u: goto label_27df38;
        case 0x27df3cu: goto label_27df3c;
        case 0x27df40u: goto label_27df40;
        case 0x27df44u: goto label_27df44;
        case 0x27df48u: goto label_27df48;
        case 0x27df4cu: goto label_27df4c;
        case 0x27df50u: goto label_27df50;
        case 0x27df54u: goto label_27df54;
        case 0x27df58u: goto label_27df58;
        case 0x27df5cu: goto label_27df5c;
        case 0x27df60u: goto label_27df60;
        case 0x27df64u: goto label_27df64;
        case 0x27df68u: goto label_27df68;
        case 0x27df6cu: goto label_27df6c;
        case 0x27df70u: goto label_27df70;
        case 0x27df74u: goto label_27df74;
        case 0x27df78u: goto label_27df78;
        case 0x27df7cu: goto label_27df7c;
        case 0x27df80u: goto label_27df80;
        case 0x27df84u: goto label_27df84;
        case 0x27df88u: goto label_27df88;
        case 0x27df8cu: goto label_27df8c;
        case 0x27df90u: goto label_27df90;
        case 0x27df94u: goto label_27df94;
        case 0x27df98u: goto label_27df98;
        case 0x27df9cu: goto label_27df9c;
        case 0x27dfa0u: goto label_27dfa0;
        case 0x27dfa4u: goto label_27dfa4;
        case 0x27dfa8u: goto label_27dfa8;
        case 0x27dfacu: goto label_27dfac;
        case 0x27dfb0u: goto label_27dfb0;
        case 0x27dfb4u: goto label_27dfb4;
        case 0x27dfb8u: goto label_27dfb8;
        case 0x27dfbcu: goto label_27dfbc;
        case 0x27dfc0u: goto label_27dfc0;
        case 0x27dfc4u: goto label_27dfc4;
        case 0x27dfc8u: goto label_27dfc8;
        case 0x27dfccu: goto label_27dfcc;
        case 0x27dfd0u: goto label_27dfd0;
        case 0x27dfd4u: goto label_27dfd4;
        case 0x27dfd8u: goto label_27dfd8;
        case 0x27dfdcu: goto label_27dfdc;
        case 0x27dfe0u: goto label_27dfe0;
        case 0x27dfe4u: goto label_27dfe4;
        case 0x27dfe8u: goto label_27dfe8;
        case 0x27dfecu: goto label_27dfec;
        case 0x27dff0u: goto label_27dff0;
        case 0x27dff4u: goto label_27dff4;
        case 0x27dff8u: goto label_27dff8;
        case 0x27dffcu: goto label_27dffc;
        case 0x27e000u: goto label_27e000;
        case 0x27e004u: goto label_27e004;
        case 0x27e008u: goto label_27e008;
        case 0x27e00cu: goto label_27e00c;
        case 0x27e010u: goto label_27e010;
        case 0x27e014u: goto label_27e014;
        case 0x27e018u: goto label_27e018;
        case 0x27e01cu: goto label_27e01c;
        case 0x27e020u: goto label_27e020;
        case 0x27e024u: goto label_27e024;
        case 0x27e028u: goto label_27e028;
        case 0x27e02cu: goto label_27e02c;
        case 0x27e030u: goto label_27e030;
        case 0x27e034u: goto label_27e034;
        case 0x27e038u: goto label_27e038;
        case 0x27e03cu: goto label_27e03c;
        case 0x27e040u: goto label_27e040;
        case 0x27e044u: goto label_27e044;
        case 0x27e048u: goto label_27e048;
        case 0x27e04cu: goto label_27e04c;
        case 0x27e050u: goto label_27e050;
        case 0x27e054u: goto label_27e054;
        case 0x27e058u: goto label_27e058;
        case 0x27e05cu: goto label_27e05c;
        case 0x27e060u: goto label_27e060;
        case 0x27e064u: goto label_27e064;
        case 0x27e068u: goto label_27e068;
        case 0x27e06cu: goto label_27e06c;
        case 0x27e070u: goto label_27e070;
        case 0x27e074u: goto label_27e074;
        case 0x27e078u: goto label_27e078;
        case 0x27e07cu: goto label_27e07c;
        case 0x27e080u: goto label_27e080;
        case 0x27e084u: goto label_27e084;
        case 0x27e088u: goto label_27e088;
        case 0x27e08cu: goto label_27e08c;
        case 0x27e090u: goto label_27e090;
        case 0x27e094u: goto label_27e094;
        case 0x27e098u: goto label_27e098;
        case 0x27e09cu: goto label_27e09c;
        case 0x27e0a0u: goto label_27e0a0;
        case 0x27e0a4u: goto label_27e0a4;
        case 0x27e0a8u: goto label_27e0a8;
        case 0x27e0acu: goto label_27e0ac;
        case 0x27e0b0u: goto label_27e0b0;
        case 0x27e0b4u: goto label_27e0b4;
        case 0x27e0b8u: goto label_27e0b8;
        case 0x27e0bcu: goto label_27e0bc;
        case 0x27e0c0u: goto label_27e0c0;
        case 0x27e0c4u: goto label_27e0c4;
        case 0x27e0c8u: goto label_27e0c8;
        case 0x27e0ccu: goto label_27e0cc;
        case 0x27e0d0u: goto label_27e0d0;
        case 0x27e0d4u: goto label_27e0d4;
        case 0x27e0d8u: goto label_27e0d8;
        case 0x27e0dcu: goto label_27e0dc;
        case 0x27e0e0u: goto label_27e0e0;
        case 0x27e0e4u: goto label_27e0e4;
        case 0x27e0e8u: goto label_27e0e8;
        case 0x27e0ecu: goto label_27e0ec;
        case 0x27e0f0u: goto label_27e0f0;
        case 0x27e0f4u: goto label_27e0f4;
        case 0x27e0f8u: goto label_27e0f8;
        case 0x27e0fcu: goto label_27e0fc;
        case 0x27e100u: goto label_27e100;
        case 0x27e104u: goto label_27e104;
        case 0x27e108u: goto label_27e108;
        case 0x27e10cu: goto label_27e10c;
        case 0x27e110u: goto label_27e110;
        case 0x27e114u: goto label_27e114;
        case 0x27e118u: goto label_27e118;
        case 0x27e11cu: goto label_27e11c;
        case 0x27e120u: goto label_27e120;
        case 0x27e124u: goto label_27e124;
        case 0x27e128u: goto label_27e128;
        case 0x27e12cu: goto label_27e12c;
        case 0x27e130u: goto label_27e130;
        case 0x27e134u: goto label_27e134;
        case 0x27e138u: goto label_27e138;
        case 0x27e13cu: goto label_27e13c;
        case 0x27e140u: goto label_27e140;
        case 0x27e144u: goto label_27e144;
        case 0x27e148u: goto label_27e148;
        case 0x27e14cu: goto label_27e14c;
        case 0x27e150u: goto label_27e150;
        case 0x27e154u: goto label_27e154;
        case 0x27e158u: goto label_27e158;
        case 0x27e15cu: goto label_27e15c;
        case 0x27e160u: goto label_27e160;
        case 0x27e164u: goto label_27e164;
        case 0x27e168u: goto label_27e168;
        case 0x27e16cu: goto label_27e16c;
        case 0x27e170u: goto label_27e170;
        case 0x27e174u: goto label_27e174;
        case 0x27e178u: goto label_27e178;
        case 0x27e17cu: goto label_27e17c;
        case 0x27e180u: goto label_27e180;
        case 0x27e184u: goto label_27e184;
        case 0x27e188u: goto label_27e188;
        case 0x27e18cu: goto label_27e18c;
        case 0x27e190u: goto label_27e190;
        case 0x27e194u: goto label_27e194;
        case 0x27e198u: goto label_27e198;
        case 0x27e19cu: goto label_27e19c;
        case 0x27e1a0u: goto label_27e1a0;
        case 0x27e1a4u: goto label_27e1a4;
        case 0x27e1a8u: goto label_27e1a8;
        case 0x27e1acu: goto label_27e1ac;
        case 0x27e1b0u: goto label_27e1b0;
        case 0x27e1b4u: goto label_27e1b4;
        case 0x27e1b8u: goto label_27e1b8;
        case 0x27e1bcu: goto label_27e1bc;
        case 0x27e1c0u: goto label_27e1c0;
        case 0x27e1c4u: goto label_27e1c4;
        case 0x27e1c8u: goto label_27e1c8;
        case 0x27e1ccu: goto label_27e1cc;
        case 0x27e1d0u: goto label_27e1d0;
        case 0x27e1d4u: goto label_27e1d4;
        case 0x27e1d8u: goto label_27e1d8;
        case 0x27e1dcu: goto label_27e1dc;
        case 0x27e1e0u: goto label_27e1e0;
        case 0x27e1e4u: goto label_27e1e4;
        case 0x27e1e8u: goto label_27e1e8;
        case 0x27e1ecu: goto label_27e1ec;
        case 0x27e1f0u: goto label_27e1f0;
        case 0x27e1f4u: goto label_27e1f4;
        case 0x27e1f8u: goto label_27e1f8;
        case 0x27e1fcu: goto label_27e1fc;
        case 0x27e200u: goto label_27e200;
        case 0x27e204u: goto label_27e204;
        case 0x27e208u: goto label_27e208;
        case 0x27e20cu: goto label_27e20c;
        case 0x27e210u: goto label_27e210;
        case 0x27e214u: goto label_27e214;
        case 0x27e218u: goto label_27e218;
        case 0x27e21cu: goto label_27e21c;
        case 0x27e220u: goto label_27e220;
        case 0x27e224u: goto label_27e224;
        case 0x27e228u: goto label_27e228;
        case 0x27e22cu: goto label_27e22c;
        case 0x27e230u: goto label_27e230;
        case 0x27e234u: goto label_27e234;
        case 0x27e238u: goto label_27e238;
        case 0x27e23cu: goto label_27e23c;
        case 0x27e240u: goto label_27e240;
        case 0x27e244u: goto label_27e244;
        case 0x27e248u: goto label_27e248;
        case 0x27e24cu: goto label_27e24c;
        case 0x27e250u: goto label_27e250;
        case 0x27e254u: goto label_27e254;
        case 0x27e258u: goto label_27e258;
        case 0x27e25cu: goto label_27e25c;
        case 0x27e260u: goto label_27e260;
        case 0x27e264u: goto label_27e264;
        case 0x27e268u: goto label_27e268;
        case 0x27e26cu: goto label_27e26c;
        case 0x27e270u: goto label_27e270;
        case 0x27e274u: goto label_27e274;
        case 0x27e278u: goto label_27e278;
        case 0x27e27cu: goto label_27e27c;
        case 0x27e280u: goto label_27e280;
        case 0x27e284u: goto label_27e284;
        case 0x27e288u: goto label_27e288;
        case 0x27e28cu: goto label_27e28c;
        case 0x27e290u: goto label_27e290;
        case 0x27e294u: goto label_27e294;
        case 0x27e298u: goto label_27e298;
        case 0x27e29cu: goto label_27e29c;
        case 0x27e2a0u: goto label_27e2a0;
        case 0x27e2a4u: goto label_27e2a4;
        case 0x27e2a8u: goto label_27e2a8;
        case 0x27e2acu: goto label_27e2ac;
        case 0x27e2b0u: goto label_27e2b0;
        case 0x27e2b4u: goto label_27e2b4;
        case 0x27e2b8u: goto label_27e2b8;
        case 0x27e2bcu: goto label_27e2bc;
        case 0x27e2c0u: goto label_27e2c0;
        case 0x27e2c4u: goto label_27e2c4;
        case 0x27e2c8u: goto label_27e2c8;
        case 0x27e2ccu: goto label_27e2cc;
        case 0x27e2d0u: goto label_27e2d0;
        case 0x27e2d4u: goto label_27e2d4;
        case 0x27e2d8u: goto label_27e2d8;
        case 0x27e2dcu: goto label_27e2dc;
        case 0x27e2e0u: goto label_27e2e0;
        case 0x27e2e4u: goto label_27e2e4;
        case 0x27e2e8u: goto label_27e2e8;
        case 0x27e2ecu: goto label_27e2ec;
        case 0x27e2f0u: goto label_27e2f0;
        case 0x27e2f4u: goto label_27e2f4;
        case 0x27e2f8u: goto label_27e2f8;
        case 0x27e2fcu: goto label_27e2fc;
        case 0x27e300u: goto label_27e300;
        case 0x27e304u: goto label_27e304;
        case 0x27e308u: goto label_27e308;
        case 0x27e30cu: goto label_27e30c;
        case 0x27e310u: goto label_27e310;
        case 0x27e314u: goto label_27e314;
        case 0x27e318u: goto label_27e318;
        case 0x27e31cu: goto label_27e31c;
        case 0x27e320u: goto label_27e320;
        case 0x27e324u: goto label_27e324;
        case 0x27e328u: goto label_27e328;
        case 0x27e32cu: goto label_27e32c;
        case 0x27e330u: goto label_27e330;
        case 0x27e334u: goto label_27e334;
        case 0x27e338u: goto label_27e338;
        case 0x27e33cu: goto label_27e33c;
        case 0x27e340u: goto label_27e340;
        case 0x27e344u: goto label_27e344;
        case 0x27e348u: goto label_27e348;
        case 0x27e34cu: goto label_27e34c;
        case 0x27e350u: goto label_27e350;
        case 0x27e354u: goto label_27e354;
        case 0x27e358u: goto label_27e358;
        case 0x27e35cu: goto label_27e35c;
        case 0x27e360u: goto label_27e360;
        case 0x27e364u: goto label_27e364;
        case 0x27e368u: goto label_27e368;
        case 0x27e36cu: goto label_27e36c;
        case 0x27e370u: goto label_27e370;
        case 0x27e374u: goto label_27e374;
        case 0x27e378u: goto label_27e378;
        case 0x27e37cu: goto label_27e37c;
        case 0x27e380u: goto label_27e380;
        case 0x27e384u: goto label_27e384;
        case 0x27e388u: goto label_27e388;
        case 0x27e38cu: goto label_27e38c;
        case 0x27e390u: goto label_27e390;
        case 0x27e394u: goto label_27e394;
        case 0x27e398u: goto label_27e398;
        case 0x27e39cu: goto label_27e39c;
        case 0x27e3a0u: goto label_27e3a0;
        case 0x27e3a4u: goto label_27e3a4;
        case 0x27e3a8u: goto label_27e3a8;
        case 0x27e3acu: goto label_27e3ac;
        case 0x27e3b0u: goto label_27e3b0;
        case 0x27e3b4u: goto label_27e3b4;
        case 0x27e3b8u: goto label_27e3b8;
        case 0x27e3bcu: goto label_27e3bc;
        case 0x27e3c0u: goto label_27e3c0;
        case 0x27e3c4u: goto label_27e3c4;
        case 0x27e3c8u: goto label_27e3c8;
        case 0x27e3ccu: goto label_27e3cc;
        case 0x27e3d0u: goto label_27e3d0;
        case 0x27e3d4u: goto label_27e3d4;
        case 0x27e3d8u: goto label_27e3d8;
        case 0x27e3dcu: goto label_27e3dc;
        case 0x27e3e0u: goto label_27e3e0;
        case 0x27e3e4u: goto label_27e3e4;
        case 0x27e3e8u: goto label_27e3e8;
        case 0x27e3ecu: goto label_27e3ec;
        case 0x27e3f0u: goto label_27e3f0;
        case 0x27e3f4u: goto label_27e3f4;
        case 0x27e3f8u: goto label_27e3f8;
        case 0x27e3fcu: goto label_27e3fc;
        case 0x27e400u: goto label_27e400;
        case 0x27e404u: goto label_27e404;
        case 0x27e408u: goto label_27e408;
        case 0x27e40cu: goto label_27e40c;
        case 0x27e410u: goto label_27e410;
        case 0x27e414u: goto label_27e414;
        case 0x27e418u: goto label_27e418;
        case 0x27e41cu: goto label_27e41c;
        case 0x27e420u: goto label_27e420;
        case 0x27e424u: goto label_27e424;
        case 0x27e428u: goto label_27e428;
        case 0x27e42cu: goto label_27e42c;
        case 0x27e430u: goto label_27e430;
        case 0x27e434u: goto label_27e434;
        case 0x27e438u: goto label_27e438;
        case 0x27e43cu: goto label_27e43c;
        case 0x27e440u: goto label_27e440;
        case 0x27e444u: goto label_27e444;
        case 0x27e448u: goto label_27e448;
        case 0x27e44cu: goto label_27e44c;
        case 0x27e450u: goto label_27e450;
        case 0x27e454u: goto label_27e454;
        case 0x27e458u: goto label_27e458;
        case 0x27e45cu: goto label_27e45c;
        case 0x27e460u: goto label_27e460;
        case 0x27e464u: goto label_27e464;
        case 0x27e468u: goto label_27e468;
        case 0x27e46cu: goto label_27e46c;
        case 0x27e470u: goto label_27e470;
        case 0x27e474u: goto label_27e474;
        case 0x27e478u: goto label_27e478;
        case 0x27e47cu: goto label_27e47c;
        case 0x27e480u: goto label_27e480;
        case 0x27e484u: goto label_27e484;
        case 0x27e488u: goto label_27e488;
        case 0x27e48cu: goto label_27e48c;
        case 0x27e490u: goto label_27e490;
        case 0x27e494u: goto label_27e494;
        case 0x27e498u: goto label_27e498;
        case 0x27e49cu: goto label_27e49c;
        case 0x27e4a0u: goto label_27e4a0;
        case 0x27e4a4u: goto label_27e4a4;
        case 0x27e4a8u: goto label_27e4a8;
        case 0x27e4acu: goto label_27e4ac;
        case 0x27e4b0u: goto label_27e4b0;
        case 0x27e4b4u: goto label_27e4b4;
        case 0x27e4b8u: goto label_27e4b8;
        case 0x27e4bcu: goto label_27e4bc;
        case 0x27e4c0u: goto label_27e4c0;
        case 0x27e4c4u: goto label_27e4c4;
        case 0x27e4c8u: goto label_27e4c8;
        case 0x27e4ccu: goto label_27e4cc;
        case 0x27e4d0u: goto label_27e4d0;
        case 0x27e4d4u: goto label_27e4d4;
        case 0x27e4d8u: goto label_27e4d8;
        case 0x27e4dcu: goto label_27e4dc;
        case 0x27e4e0u: goto label_27e4e0;
        case 0x27e4e4u: goto label_27e4e4;
        case 0x27e4e8u: goto label_27e4e8;
        case 0x27e4ecu: goto label_27e4ec;
        case 0x27e4f0u: goto label_27e4f0;
        case 0x27e4f4u: goto label_27e4f4;
        case 0x27e4f8u: goto label_27e4f8;
        case 0x27e4fcu: goto label_27e4fc;
        case 0x27e500u: goto label_27e500;
        case 0x27e504u: goto label_27e504;
        case 0x27e508u: goto label_27e508;
        case 0x27e50cu: goto label_27e50c;
        case 0x27e510u: goto label_27e510;
        case 0x27e514u: goto label_27e514;
        case 0x27e518u: goto label_27e518;
        case 0x27e51cu: goto label_27e51c;
        case 0x27e520u: goto label_27e520;
        case 0x27e524u: goto label_27e524;
        case 0x27e528u: goto label_27e528;
        case 0x27e52cu: goto label_27e52c;
        case 0x27e530u: goto label_27e530;
        case 0x27e534u: goto label_27e534;
        case 0x27e538u: goto label_27e538;
        case 0x27e53cu: goto label_27e53c;
        case 0x27e540u: goto label_27e540;
        case 0x27e544u: goto label_27e544;
        case 0x27e548u: goto label_27e548;
        case 0x27e54cu: goto label_27e54c;
        case 0x27e550u: goto label_27e550;
        case 0x27e554u: goto label_27e554;
        case 0x27e558u: goto label_27e558;
        case 0x27e55cu: goto label_27e55c;
        case 0x27e560u: goto label_27e560;
        case 0x27e564u: goto label_27e564;
        case 0x27e568u: goto label_27e568;
        case 0x27e56cu: goto label_27e56c;
        case 0x27e570u: goto label_27e570;
        case 0x27e574u: goto label_27e574;
        case 0x27e578u: goto label_27e578;
        case 0x27e57cu: goto label_27e57c;
        case 0x27e580u: goto label_27e580;
        case 0x27e584u: goto label_27e584;
        case 0x27e588u: goto label_27e588;
        case 0x27e58cu: goto label_27e58c;
        case 0x27e590u: goto label_27e590;
        case 0x27e594u: goto label_27e594;
        case 0x27e598u: goto label_27e598;
        case 0x27e59cu: goto label_27e59c;
        case 0x27e5a0u: goto label_27e5a0;
        case 0x27e5a4u: goto label_27e5a4;
        case 0x27e5a8u: goto label_27e5a8;
        case 0x27e5acu: goto label_27e5ac;
        case 0x27e5b0u: goto label_27e5b0;
        case 0x27e5b4u: goto label_27e5b4;
        case 0x27e5b8u: goto label_27e5b8;
        case 0x27e5bcu: goto label_27e5bc;
        case 0x27e5c0u: goto label_27e5c0;
        case 0x27e5c4u: goto label_27e5c4;
        case 0x27e5c8u: goto label_27e5c8;
        case 0x27e5ccu: goto label_27e5cc;
        case 0x27e5d0u: goto label_27e5d0;
        case 0x27e5d4u: goto label_27e5d4;
        case 0x27e5d8u: goto label_27e5d8;
        case 0x27e5dcu: goto label_27e5dc;
        case 0x27e5e0u: goto label_27e5e0;
        case 0x27e5e4u: goto label_27e5e4;
        case 0x27e5e8u: goto label_27e5e8;
        case 0x27e5ecu: goto label_27e5ec;
        case 0x27e5f0u: goto label_27e5f0;
        case 0x27e5f4u: goto label_27e5f4;
        case 0x27e5f8u: goto label_27e5f8;
        case 0x27e5fcu: goto label_27e5fc;
        case 0x27e600u: goto label_27e600;
        case 0x27e604u: goto label_27e604;
        case 0x27e608u: goto label_27e608;
        case 0x27e60cu: goto label_27e60c;
        case 0x27e610u: goto label_27e610;
        case 0x27e614u: goto label_27e614;
        case 0x27e618u: goto label_27e618;
        case 0x27e61cu: goto label_27e61c;
        case 0x27e620u: goto label_27e620;
        case 0x27e624u: goto label_27e624;
        case 0x27e628u: goto label_27e628;
        case 0x27e62cu: goto label_27e62c;
        case 0x27e630u: goto label_27e630;
        case 0x27e634u: goto label_27e634;
        case 0x27e638u: goto label_27e638;
        case 0x27e63cu: goto label_27e63c;
        case 0x27e640u: goto label_27e640;
        case 0x27e644u: goto label_27e644;
        case 0x27e648u: goto label_27e648;
        case 0x27e64cu: goto label_27e64c;
        case 0x27e650u: goto label_27e650;
        case 0x27e654u: goto label_27e654;
        case 0x27e658u: goto label_27e658;
        case 0x27e65cu: goto label_27e65c;
        case 0x27e660u: goto label_27e660;
        case 0x27e664u: goto label_27e664;
        case 0x27e668u: goto label_27e668;
        case 0x27e66cu: goto label_27e66c;
        case 0x27e670u: goto label_27e670;
        case 0x27e674u: goto label_27e674;
        case 0x27e678u: goto label_27e678;
        case 0x27e67cu: goto label_27e67c;
        case 0x27e680u: goto label_27e680;
        case 0x27e684u: goto label_27e684;
        case 0x27e688u: goto label_27e688;
        case 0x27e68cu: goto label_27e68c;
        case 0x27e690u: goto label_27e690;
        case 0x27e694u: goto label_27e694;
        case 0x27e698u: goto label_27e698;
        case 0x27e69cu: goto label_27e69c;
        case 0x27e6a0u: goto label_27e6a0;
        case 0x27e6a4u: goto label_27e6a4;
        case 0x27e6a8u: goto label_27e6a8;
        case 0x27e6acu: goto label_27e6ac;
        case 0x27e6b0u: goto label_27e6b0;
        case 0x27e6b4u: goto label_27e6b4;
        case 0x27e6b8u: goto label_27e6b8;
        case 0x27e6bcu: goto label_27e6bc;
        case 0x27e6c0u: goto label_27e6c0;
        case 0x27e6c4u: goto label_27e6c4;
        case 0x27e6c8u: goto label_27e6c8;
        case 0x27e6ccu: goto label_27e6cc;
        case 0x27e6d0u: goto label_27e6d0;
        case 0x27e6d4u: goto label_27e6d4;
        case 0x27e6d8u: goto label_27e6d8;
        case 0x27e6dcu: goto label_27e6dc;
        case 0x27e6e0u: goto label_27e6e0;
        case 0x27e6e4u: goto label_27e6e4;
        case 0x27e6e8u: goto label_27e6e8;
        case 0x27e6ecu: goto label_27e6ec;
        case 0x27e6f0u: goto label_27e6f0;
        case 0x27e6f4u: goto label_27e6f4;
        case 0x27e6f8u: goto label_27e6f8;
        case 0x27e6fcu: goto label_27e6fc;
        default: return;
    }

label_27df30:
    // 0x27df30: 0x15510  .word       0x00015510                   # mfhi        $t2 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df30u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27df34:
    // 0x27df34: 0x7020  add         $t6, $zero, $zero
    ctx->pc = 0x27df34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27df38:
    // 0x27df38: 0x0  nop
    ctx->pc = 0x27df38u;
    // NOP
label_27df3c:
    // 0x27df3c: 0x0  nop
    ctx->pc = 0x27df3cu;
    // NOP
label_27df40:
    // 0x27df40: 0x1551f  .word       0x0001551F                   # ddivu       $t2, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df40u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27DF40 raw=0x0001551F");
 /* MITIGATED */
label_27df44:
    // 0x27df44: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df44u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27df48:
    // 0x27df48: 0x0  nop
    ctx->pc = 0x27df48u;
    // NOP
label_27df4c:
    // 0x27df4c: 0x0  nop
    ctx->pc = 0x27df4cu;
    // NOP
label_27df50:
    // 0x27df50: 0x1552a  .word       0x0001552A                   # slt         $t2, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df50u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27df54:
    // 0x27df54: 0x5020  add         $t2, $zero, $zero
    ctx->pc = 0x27df54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27df58:
    // 0x27df58: 0x0  nop
    ctx->pc = 0x27df58u;
    // NOP
label_27df5c:
    // 0x27df5c: 0x0  nop
    ctx->pc = 0x27df5cu;
    // NOP
label_27df60:
    // 0x27df60: 0x15535  .word       0x00015535                   # INVALID     $zero, $at, 0x5535 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df60u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27DF60 raw=0x00015535");
 /* MITIGATED */
label_27df64:
    // 0x27df64: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df64u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27df68:
    // 0x27df68: 0x0  nop
    ctx->pc = 0x27df68u;
    // NOP
label_27df6c:
    // 0x27df6c: 0x0  nop
    ctx->pc = 0x27df6cu;
    // NOP
label_27df70:
    // 0x27df70: 0x15542  srl         $t2, $at, 21
    ctx->pc = 0x27df70u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 1), 21));
label_27df74:
    // 0x27df74: 0x9320  .word       0x00009320                   # add         $s2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27df78:
    // 0x27df78: 0x0  nop
    ctx->pc = 0x27df78u;
    // NOP
label_27df7c:
    // 0x27df7c: 0x0  nop
    ctx->pc = 0x27df7cu;
    // NOP
label_27df80:
    // 0x27df80: 0x15555  .word       0x00015555                   # INVALID     $zero, $at, 0x5555 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27DF80 raw=0x00015555");
 /* MITIGATED */
label_27df84:
    // 0x27df84: 0x4d10  .word       0x00004D10                   # mfhi        $t1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df84u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27df88:
    // 0x27df88: 0x0  nop
    ctx->pc = 0x27df88u;
    // NOP
label_27df8c:
    // 0x27df8c: 0x0  nop
    ctx->pc = 0x27df8cu;
    // NOP
label_27df90:
    // 0x27df90: 0x1555f  .word       0x0001555F                   # ddivu       $t2, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27DF90 raw=0x0001555F");
 /* MITIGATED */
label_27df94:
    // 0x27df94: 0x67e0  .word       0x000067E0                   # add         $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27df98:
    // 0x27df98: 0x0  nop
    ctx->pc = 0x27df98u;
    // NOP
label_27df9c:
    // 0x27df9c: 0x0  nop
    ctx->pc = 0x27df9cu;
    // NOP
label_27dfa0:
    // 0x27dfa0: 0x1556c  .word       0x0001556C                   # dadd        $t2, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_27dfa4:
    // 0x27dfa4: 0x8ed0  .word       0x00008ED0                   # mfhi        $s1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfa4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27dfa8:
    // 0x27dfa8: 0x0  nop
    ctx->pc = 0x27dfa8u;
    // NOP
label_27dfac:
    // 0x27dfac: 0x0  nop
    ctx->pc = 0x27dfacu;
    // NOP
label_27dfb0:
    // 0x27dfb0: 0x1557e  dsrl32      $t2, $at, 21
    ctx->pc = 0x27dfb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) >> (32 + 21));
label_27dfb4:
    // 0x27dfb4: 0x9850  .word       0x00009850                   # mfhi        $s3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfb4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27dfb8:
    // 0x27dfb8: 0x0  nop
    ctx->pc = 0x27dfb8u;
    // NOP
label_27dfbc:
    // 0x27dfbc: 0x0  nop
    ctx->pc = 0x27dfbcu;
    // NOP
label_27dfc0:
    // 0x27dfc0: 0x15592  .word       0x00015592                   # mflo        $t2 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfc0u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_27dfc4:
    // 0x27dfc4: 0xa040  sll         $s4, $zero, 1
    ctx->pc = 0x27dfc4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27dfc8:
    // 0x27dfc8: 0x0  nop
    ctx->pc = 0x27dfc8u;
    // NOP
label_27dfcc:
    // 0x27dfcc: 0x0  nop
    ctx->pc = 0x27dfccu;
    // NOP
label_27dfd0:
    // 0x27dfd0: 0x155a7  .word       0x000155A7                   # nor         $t2, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfd0u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27dfd4:
    // 0x27dfd4: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x27dfd4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27dfd8:
    // 0x27dfd8: 0x0  nop
    ctx->pc = 0x27dfd8u;
    // NOP
label_27dfdc:
    // 0x27dfdc: 0x0  nop
    ctx->pc = 0x27dfdcu;
    // NOP
label_27dfe0:
    // 0x27dfe0: 0x155ba  dsrl        $t2, $at, 22
    ctx->pc = 0x27dfe0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) >> 22);
label_27dfe4:
    // 0x27dfe4: 0xe310  .word       0x0000E310                   # mfhi        $gp # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfe4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_27dfe8:
    // 0x27dfe8: 0x0  nop
    ctx->pc = 0x27dfe8u;
    // NOP
label_27dfec:
    // 0x27dfec: 0x0  nop
    ctx->pc = 0x27dfecu;
    // NOP
label_27dff0:
    // 0x27dff0: 0x155d7  .word       0x000155D7                   # dsrav       $t2, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dff0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27dff4:
    // 0x27dff4: 0xc240  sll         $t8, $zero, 9
    ctx->pc = 0x27dff4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_27dff8:
    // 0x27dff8: 0x0  nop
    ctx->pc = 0x27dff8u;
    // NOP
label_27dffc:
    // 0x27dffc: 0x0  nop
    ctx->pc = 0x27dffcu;
    // NOP
label_27e000:
    // 0x27e000: 0x155f0  tge         $zero, $at, 343
    ctx->pc = 0x27e000u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e004:
    // 0x27e004: 0xfb00  sll         $ra, $zero, 12
    ctx->pc = 0x27e004u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27e008:
    // 0x27e008: 0x0  nop
    ctx->pc = 0x27e008u;
    // NOP
label_27e00c:
    // 0x27e00c: 0x0  nop
    ctx->pc = 0x27e00cu;
    // NOP
label_27e010:
    // 0x27e010: 0x15610  .word       0x00015610                   # mfhi        $t2 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e010u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27e014:
    // 0x27e014: 0xb010  mfhi        $s6
    ctx->pc = 0x27e014u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27e018:
    // 0x27e018: 0x0  nop
    ctx->pc = 0x27e018u;
    // NOP
label_27e01c:
    // 0x27e01c: 0x0  nop
    ctx->pc = 0x27e01cu;
    // NOP
label_27e020:
    // 0x27e020: 0x15627  .word       0x00015627                   # nor         $t2, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e020u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27e024:
    // 0x27e024: 0xcdc0  sll         $t9, $zero, 23
    ctx->pc = 0x27e024u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27e028:
    // 0x27e028: 0x0  nop
    ctx->pc = 0x27e028u;
    // NOP
label_27e02c:
    // 0x27e02c: 0x0  nop
    ctx->pc = 0x27e02cu;
    // NOP
label_27e030:
    // 0x27e030: 0x15641  .word       0x00015641                   # INVALID     $zero, $at, 0x5641 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e030u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27E030 raw=0x00015641");
 /* MITIGATED */
label_27e034:
    // 0x27e034: 0x12710  .word       0x00012710                   # mfhi        $a0 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e034u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_27e038:
    // 0x27e038: 0x0  nop
    ctx->pc = 0x27e038u;
    // NOP
label_27e03c:
    // 0x27e03c: 0x0  nop
    ctx->pc = 0x27e03cu;
    // NOP
label_27e040:
    // 0x27e040: 0x15666  .word       0x00015666                   # xor         $t2, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e040u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27e044:
    // 0x27e044: 0x7fc0  sll         $t7, $zero, 31
    ctx->pc = 0x27e044u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_27e048:
    // 0x27e048: 0x0  nop
    ctx->pc = 0x27e048u;
    // NOP
label_27e04c:
    // 0x27e04c: 0x0  nop
    ctx->pc = 0x27e04cu;
    // NOP
label_27e050:
    // 0x27e050: 0x15676  tne         $zero, $at, 345
    ctx->pc = 0x27e050u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e054:
    // 0x27e054: 0xb020  add         $s6, $zero, $zero
    ctx->pc = 0x27e054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_27e058:
    // 0x27e058: 0x0  nop
    ctx->pc = 0x27e058u;
    // NOP
label_27e05c:
    // 0x27e05c: 0x0  nop
    ctx->pc = 0x27e05cu;
    // NOP
label_27e060:
    // 0x27e060: 0x1568d  break       1, 346
    ctx->pc = 0x27e060u;
    runtime->handleBreak(rdram, ctx);
label_27e064:
    // 0x27e064: 0x12450  .word       0x00012450                   # mfhi        $a0 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e064u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_27e068:
    // 0x27e068: 0x0  nop
    ctx->pc = 0x27e068u;
    // NOP
label_27e06c:
    // 0x27e06c: 0x0  nop
    ctx->pc = 0x27e06cu;
    // NOP
label_27e070:
    // 0x27e070: 0x156b2  tlt         $zero, $at, 346
    ctx->pc = 0x27e070u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e074:
    // 0x27e074: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e074u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27e078:
    // 0x27e078: 0x0  nop
    ctx->pc = 0x27e078u;
    // NOP
label_27e07c:
    // 0x27e07c: 0x0  nop
    ctx->pc = 0x27e07cu;
    // NOP
label_27e080:
    // 0x27e080: 0x156c3  sra         $t2, $at, 27
    ctx->pc = 0x27e080u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 1), 27));
label_27e084:
    // 0x27e084: 0x9f00  sll         $s3, $zero, 28
    ctx->pc = 0x27e084u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27e088:
    // 0x27e088: 0x0  nop
    ctx->pc = 0x27e088u;
    // NOP
label_27e08c:
    // 0x27e08c: 0x0  nop
    ctx->pc = 0x27e08cu;
    // NOP
label_27e090:
    // 0x27e090: 0x156d7  .word       0x000156D7                   # dsrav       $t2, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e090u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27e094:
    // 0x27e094: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e094u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27e098:
    // 0x27e098: 0x0  nop
    ctx->pc = 0x27e098u;
    // NOP
label_27e09c:
    // 0x27e09c: 0x0  nop
    ctx->pc = 0x27e09cu;
    // NOP
label_27e0a0:
    // 0x27e0a0: 0x156e3  .word       0x000156E3                   # negu        $t2, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e0a4:
    // 0x27e0a4: 0xa9c0  sll         $s5, $zero, 7
    ctx->pc = 0x27e0a4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27e0a8:
    // 0x27e0a8: 0x0  nop
    ctx->pc = 0x27e0a8u;
    // NOP
label_27e0ac:
    // 0x27e0ac: 0x0  nop
    ctx->pc = 0x27e0acu;
    // NOP
label_27e0b0:
    // 0x27e0b0: 0x156f9  .word       0x000156F9                   # INVALID     $zero, $at, 0x56F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27E0B0 raw=0x000156F9");
 /* MITIGATED */
label_27e0b4:
    // 0x27e0b4: 0x6f00  sll         $t5, $zero, 28
    ctx->pc = 0x27e0b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27e0b8:
    // 0x27e0b8: 0x0  nop
    ctx->pc = 0x27e0b8u;
    // NOP
label_27e0bc:
    // 0x27e0bc: 0x0  nop
    ctx->pc = 0x27e0bcu;
    // NOP
label_27e0c0:
    // 0x27e0c0: 0x15707  .word       0x00015707                   # srav        $t2, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0c0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27e0c4:
    // 0x27e0c4: 0x7bf0  tge         $zero, $zero, 495
    ctx->pc = 0x27e0c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e0c8:
    // 0x27e0c8: 0x0  nop
    ctx->pc = 0x27e0c8u;
    // NOP
label_27e0cc:
    // 0x27e0cc: 0x0  nop
    ctx->pc = 0x27e0ccu;
    // NOP
label_27e0d0:
    // 0x27e0d0: 0x15717  .word       0x00015717                   # dsrav       $t2, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0d0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27e0d4:
    // 0x27e0d4: 0x9710  .word       0x00009710                   # mfhi        $s2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0d4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27e0d8:
    // 0x27e0d8: 0x0  nop
    ctx->pc = 0x27e0d8u;
    // NOP
label_27e0dc:
    // 0x27e0dc: 0x0  nop
    ctx->pc = 0x27e0dcu;
    // NOP
label_27e0e0:
    // 0x27e0e0: 0x1572a  .word       0x0001572A                   # slt         $t2, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0e0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27e0e4:
    // 0x27e0e4: 0xbfe0  .word       0x0000BFE0                   # add         $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27e0e8:
    // 0x27e0e8: 0x0  nop
    ctx->pc = 0x27e0e8u;
    // NOP
label_27e0ec:
    // 0x27e0ec: 0x0  nop
    ctx->pc = 0x27e0ecu;
    // NOP
label_27e0f0:
    // 0x27e0f0: 0x15742  srl         $t2, $at, 29
    ctx->pc = 0x27e0f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 1), 29));
label_27e0f4:
    // 0x27e0f4: 0xd670  tge         $zero, $zero, 857
    ctx->pc = 0x27e0f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e0f8:
    // 0x27e0f8: 0x0  nop
    ctx->pc = 0x27e0f8u;
    // NOP
label_27e0fc:
    // 0x27e0fc: 0x0  nop
    ctx->pc = 0x27e0fcu;
    // NOP
label_27e100:
    // 0x27e100: 0x1575d  .word       0x0001575D                   # dmultu      $zero, $at # 00005740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e100u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27E100 raw=0x0001575D");
 /* MITIGATED */
label_27e104:
    // 0x27e104: 0x9890  .word       0x00009890                   # mfhi        $s3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e104u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27e108:
    // 0x27e108: 0x0  nop
    ctx->pc = 0x27e108u;
    // NOP
label_27e10c:
    // 0x27e10c: 0x0  nop
    ctx->pc = 0x27e10cu;
    // NOP
label_27e110:
    // 0x27e110: 0x15771  tgeu        $zero, $at, 349
    ctx->pc = 0x27e110u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e114:
    // 0x27e114: 0xb450  .word       0x0000B450                   # mfhi        $s6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e114u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27e118:
    // 0x27e118: 0x0  nop
    ctx->pc = 0x27e118u;
    // NOP
label_27e11c:
    // 0x27e11c: 0x0  nop
    ctx->pc = 0x27e11cu;
    // NOP
label_27e120:
    // 0x27e120: 0x15788  .word       0x00015788                   # jr          $zero # 00015780 <InstrIdType: CPU_SPECIAL>
label_27e124:
    if (ctx->pc == 0x27E124u) {
        ctx->pc = 0x27E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E120u;
        // 0x27e124: 0xafa0  .word       0x0000AFA0                   # add         $s5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E128u;
        goto label_27e128;
    }
    ctx->pc = 0x27E120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E120u;
        // 0x27e124: 0xafa0  .word       0x0000AFA0                   # add         $s5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E120u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27E128u;
label_27e128:
    // 0x27e128: 0x0  nop
    ctx->pc = 0x27e128u;
    // NOP
label_27e12c:
    // 0x27e12c: 0x0  nop
    ctx->pc = 0x27e12cu;
    // NOP
label_27e130:
    // 0x27e130: 0x1579e  .word       0x0001579E                   # ddiv        $t2, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e130u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27E130 raw=0x0001579E");
 /* MITIGATED */
label_27e134:
    // 0x27e134: 0x8f50  .word       0x00008F50                   # mfhi        $s1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e134u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27e138:
    // 0x27e138: 0x0  nop
    ctx->pc = 0x27e138u;
    // NOP
label_27e13c:
    // 0x27e13c: 0x0  nop
    ctx->pc = 0x27e13cu;
    // NOP
label_27e140:
    // 0x27e140: 0x157b0  tge         $zero, $at, 350
    ctx->pc = 0x27e140u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e144:
    // 0x27e144: 0xae00  sll         $s5, $zero, 24
    ctx->pc = 0x27e144u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_27e148:
    // 0x27e148: 0x0  nop
    ctx->pc = 0x27e148u;
    // NOP
label_27e14c:
    // 0x27e14c: 0x0  nop
    ctx->pc = 0x27e14cu;
    // NOP
label_27e150:
    // 0x27e150: 0x157c6  .word       0x000157C6                   # srlv        $t2, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e150u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27e154:
    // 0x27e154: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e154u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27e158:
    // 0x27e158: 0x0  nop
    ctx->pc = 0x27e158u;
    // NOP
label_27e15c:
    // 0x27e15c: 0x0  nop
    ctx->pc = 0x27e15cu;
    // NOP
label_27e160:
    // 0x27e160: 0x157d8  .word       0x000157D8                   # mult        $t2, $zero, $at # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27e160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_27e164:
    // 0x27e164: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e164u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27e168:
    // 0x27e168: 0x0  nop
    ctx->pc = 0x27e168u;
    // NOP
label_27e16c:
    // 0x27e16c: 0x0  nop
    ctx->pc = 0x27e16cu;
    // NOP
label_27e170:
    // 0x27e170: 0x157ea  .word       0x000157EA                   # slt         $t2, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e170u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27e174:
    // 0x27e174: 0x5890  .word       0x00005890                   # mfhi        $t3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e174u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27e178:
    // 0x27e178: 0x0  nop
    ctx->pc = 0x27e178u;
    // NOP
label_27e17c:
    // 0x27e17c: 0x0  nop
    ctx->pc = 0x27e17cu;
    // NOP
label_27e180:
    // 0x27e180: 0x157f6  tne         $zero, $at, 351
    ctx->pc = 0x27e180u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e184:
    // 0x27e184: 0xf830  tge         $zero, $zero, 992
    ctx->pc = 0x27e184u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e188:
    // 0x27e188: 0x0  nop
    ctx->pc = 0x27e188u;
    // NOP
label_27e18c:
    // 0x27e18c: 0x0  nop
    ctx->pc = 0x27e18cu;
    // NOP
label_27e190:
    // 0x27e190: 0x15816  dsrlv       $t3, $at, $zero
    ctx->pc = 0x27e190u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27e194:
    // 0x27e194: 0xc580  sll         $t8, $zero, 22
    ctx->pc = 0x27e194u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_27e198:
    // 0x27e198: 0x0  nop
    ctx->pc = 0x27e198u;
    // NOP
label_27e19c:
    // 0x27e19c: 0x0  nop
    ctx->pc = 0x27e19cu;
    // NOP
label_27e1a0:
    // 0x27e1a0: 0x1582f  dsubu       $t3, $zero, $at
    ctx->pc = 0x27e1a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27e1a4:
    // 0x27e1a4: 0x10a20  .word       0x00010A20                   # add         $at, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_27e1a8:
    // 0x27e1a8: 0x0  nop
    ctx->pc = 0x27e1a8u;
    // NOP
label_27e1ac:
    // 0x27e1ac: 0x0  nop
    ctx->pc = 0x27e1acu;
    // NOP
label_27e1b0:
    // 0x27e1b0: 0x15851  .word       0x00015851                   # mthi        $zero # 00015840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e1b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27e1b4:
    // 0x27e1b4: 0xf050  .word       0x0000F050                   # mfhi        $fp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e1b4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_27e1b8:
    // 0x27e1b8: 0x0  nop
    ctx->pc = 0x27e1b8u;
    // NOP
label_27e1bc:
    // 0x27e1bc: 0x0  nop
    ctx->pc = 0x27e1bcu;
    // NOP
label_27e1c0:
    // 0x27e1c0: 0x15870  tge         $zero, $at, 353
    ctx->pc = 0x27e1c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e1c4:
    // 0x27e1c4: 0xcf60  .word       0x0000CF60                   # add         $t9, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e1c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27e1c8:
    // 0x27e1c8: 0x0  nop
    ctx->pc = 0x27e1c8u;
    // NOP
label_27e1cc:
    // 0x27e1cc: 0x0  nop
    ctx->pc = 0x27e1ccu;
    // NOP
label_27e1d0:
    // 0x27e1d0: 0x1588a  .word       0x0001588A                   # movz        $t3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e1d0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_27e1d4:
    // 0x27e1d4: 0xb370  tge         $zero, $zero, 717
    ctx->pc = 0x27e1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e1d8:
    // 0x27e1d8: 0x0  nop
    ctx->pc = 0x27e1d8u;
    // NOP
label_27e1dc:
    // 0x27e1dc: 0x0  nop
    ctx->pc = 0x27e1dcu;
    // NOP
label_27e1e0:
    // 0x27e1e0: 0x158a1  .word       0x000158A1                   # addu        $t3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e1e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e1e4:
    // 0x27e1e4: 0x6820  add         $t5, $zero, $zero
    ctx->pc = 0x27e1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27e1e8:
    // 0x27e1e8: 0x0  nop
    ctx->pc = 0x27e1e8u;
    // NOP
label_27e1ec:
    // 0x27e1ec: 0x0  nop
    ctx->pc = 0x27e1ecu;
    // NOP
label_27e1f0:
    // 0x27e1f0: 0x158af  .word       0x000158AF                   # dsubu       $t3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e1f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27e1f4:
    // 0x27e1f4: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x27e1f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27e1f8:
    // 0x27e1f8: 0x0  nop
    ctx->pc = 0x27e1f8u;
    // NOP
label_27e1fc:
    // 0x27e1fc: 0x0  nop
    ctx->pc = 0x27e1fcu;
    // NOP
label_27e200:
    // 0x27e200: 0x158ba  dsrl        $t3, $at, 2
    ctx->pc = 0x27e200u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) >> 2);
label_27e204:
    // 0x27e204: 0x2d50  .word       0x00002D50                   # mfhi        $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e204u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_27e208:
    // 0x27e208: 0x0  nop
    ctx->pc = 0x27e208u;
    // NOP
label_27e20c:
    // 0x27e20c: 0x0  nop
    ctx->pc = 0x27e20cu;
    // NOP
label_27e210:
    // 0x27e210: 0x158c0  sll         $t3, $at, 3
    ctx->pc = 0x27e210u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 3));
label_27e214:
    // 0x27e214: 0x4180  sll         $t0, $zero, 6
    ctx->pc = 0x27e214u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_27e218:
    // 0x27e218: 0x0  nop
    ctx->pc = 0x27e218u;
    // NOP
label_27e21c:
    // 0x27e21c: 0x0  nop
    ctx->pc = 0x27e21cu;
    // NOP
label_27e220:
    // 0x27e220: 0x158c9  .word       0x000158C9                   # jalr        $t3, $zero # 000100C0 <InstrIdType: CPU_SPECIAL>
label_27e224:
    if (ctx->pc == 0x27E224u) {
        ctx->pc = 0x27E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E220u;
        // 0x27e224: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E228u;
        goto label_27e228;
    }
    ctx->pc = 0x27E220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 11, 0x27E228u);
        ctx->pc = 0x27E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E220u;
        // 0x27e224: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E220u, 0x27E228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E228u;
label_27e228:
    // 0x27e228: 0x0  nop
    ctx->pc = 0x27e228u;
    // NOP
label_27e22c:
    // 0x27e22c: 0x0  nop
    ctx->pc = 0x27e22cu;
    // NOP
label_27e230:
    // 0x27e230: 0x158d5  .word       0x000158D5                   # INVALID     $zero, $at, 0x58D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e230u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27E230 raw=0x000158D5");
 /* MITIGATED */
label_27e234:
    // 0x27e234: 0xb5a0  .word       0x0000B5A0                   # add         $s6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_27e238:
    // 0x27e238: 0x0  nop
    ctx->pc = 0x27e238u;
    // NOP
label_27e23c:
    // 0x27e23c: 0x0  nop
    ctx->pc = 0x27e23cu;
    // NOP
label_27e240:
    // 0x27e240: 0x158ec  .word       0x000158EC                   # dadd        $t3, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e240u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_27e244:
    // 0x27e244: 0xaef0  tge         $zero, $zero, 699
    ctx->pc = 0x27e244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e248:
    // 0x27e248: 0x0  nop
    ctx->pc = 0x27e248u;
    // NOP
label_27e24c:
    // 0x27e24c: 0x0  nop
    ctx->pc = 0x27e24cu;
    // NOP
label_27e250:
    // 0x27e250: 0x15902  srl         $t3, $at, 4
    ctx->pc = 0x27e250u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 1), 4));
label_27e254:
    // 0x27e254: 0x9410  .word       0x00009410                   # mfhi        $s2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e254u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27e258:
    // 0x27e258: 0x0  nop
    ctx->pc = 0x27e258u;
    // NOP
label_27e25c:
    // 0x27e25c: 0x0  nop
    ctx->pc = 0x27e25cu;
    // NOP
label_27e260:
    // 0x27e260: 0x15915  .word       0x00015915                   # INVALID     $zero, $at, 0x5915 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e260u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27E260 raw=0x00015915");
 /* MITIGATED */
label_27e264:
    // 0x27e264: 0xb3c0  sll         $s6, $zero, 15
    ctx->pc = 0x27e264u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_27e268:
    // 0x27e268: 0x0  nop
    ctx->pc = 0x27e268u;
    // NOP
label_27e26c:
    // 0x27e26c: 0x0  nop
    ctx->pc = 0x27e26cu;
    // NOP
label_27e270:
    // 0x27e270: 0x1592c  .word       0x0001592C                   # dadd        $t3, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e270u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_27e274:
    // 0x27e274: 0xb3b0  tge         $zero, $zero, 718
    ctx->pc = 0x27e274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e278:
    // 0x27e278: 0x0  nop
    ctx->pc = 0x27e278u;
    // NOP
label_27e27c:
    // 0x27e27c: 0x0  nop
    ctx->pc = 0x27e27cu;
    // NOP
label_27e280:
    // 0x27e280: 0x15943  sra         $t3, $at, 5
    ctx->pc = 0x27e280u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 1), 5));
label_27e284:
    // 0x27e284: 0x52b0  tge         $zero, $zero, 330
    ctx->pc = 0x27e284u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e288:
    // 0x27e288: 0x0  nop
    ctx->pc = 0x27e288u;
    // NOP
label_27e28c:
    // 0x27e28c: 0x0  nop
    ctx->pc = 0x27e28cu;
    // NOP
label_27e290:
    // 0x27e290: 0x449  .word       0x00000449                   # jalr        $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_27e294:
    if (ctx->pc == 0x27E294u) {
        ctx->pc = 0x27E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E290u;
        // 0x27e294: 0x44a  .word       0x0000044A                   # movz        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E298u;
        goto label_27e298;
    }
    ctx->pc = 0x27E290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E290u;
        // 0x27e294: 0x44a  .word       0x0000044A                   # movz        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E290u, 0x27E298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E298u;
label_27e298:
    // 0x27e298: 0x44b  .word       0x0000044B                   # movn        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e298u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_27e29c:
    // 0x27e29c: 0x44c  syscall     17
    ctx->pc = 0x27e29cu;
    ctx->pc = 0x27E2A0u;
runtime->handleSyscall(rdram, ctx, 0x11u);
label_27e2a0:
    // 0x27e2a0: 0x44f  sync.p
    ctx->pc = 0x27e2a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27e2a4:
    // 0x27e2a4: 0x0  nop
    ctx->pc = 0x27e2a4u;
    // NOP
label_27e2a8:
    // 0x27e2a8: 0x0  nop
    ctx->pc = 0x27e2a8u;
    // NOP
label_27e2ac:
    // 0x27e2ac: 0x0  nop
    ctx->pc = 0x27e2acu;
    // NOP
label_27e2b0:
    // 0x27e2b0: 0x4ca  .word       0x000004CA                   # movz        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_27e2b4:
    // 0x27e2b4: 0x4cb  .word       0x000004CB                   # movn        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2b4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_27e2b8:
    // 0x27e2b8: 0x4cc  syscall     19
    ctx->pc = 0x27e2b8u;
    ctx->pc = 0x27E2BCu;
runtime->handleSyscall(rdram, ctx, 0x13u);
label_27e2bc:
    // 0x27e2bc: 0x4cd  break       0, 19
    ctx->pc = 0x27e2bcu;
    runtime->handleBreak(rdram, ctx);
label_27e2c0:
    // 0x27e2c0: 0x4d0  .word       0x000004D0                   # mfhi        $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2c0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_27e2c4:
    // 0x27e2c4: 0x0  nop
    ctx->pc = 0x27e2c4u;
    // NOP
label_27e2c8:
    // 0x27e2c8: 0x449  .word       0x00000449                   # jalr        $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_27e2cc:
    if (ctx->pc == 0x27E2CCu) {
        ctx->pc = 0x27E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2C8u;
        // 0x27e2cc: 0x44d  break       0, 17 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E2D0u;
        goto label_27e2d0;
    }
    ctx->pc = 0x27E2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2C8u;
        // 0x27e2cc: 0x44d  break       0, 17 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E2C8u, 0x27E2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E2D0u;
label_27e2d0:
    // 0x27e2d0: 0x450  .word       0x00000450                   # mfhi        $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2d0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_27e2d4:
    // 0x27e2d4: 0x0  nop
    ctx->pc = 0x27e2d4u;
    // NOP
label_27e2d8:
    // 0x27e2d8: 0x4ca  .word       0x000004CA                   # movz        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2d8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_27e2dc:
    // 0x27e2dc: 0x4ce  .word       0x000004CE                   # INVALID     $zero, $zero, 0x4CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2dcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27E2DC raw=0x000004CE");
 /* MITIGATED */
label_27e2e0:
    // 0x27e2e0: 0x4d1  .word       0x000004D1                   # mthi        $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27e2e4:
    // 0x27e2e4: 0x0  nop
    ctx->pc = 0x27e2e4u;
    // NOP
label_27e2e8:
    // 0x27e2e8: 0x0  nop
    ctx->pc = 0x27e2e8u;
    // NOP
label_27e2ec:
    // 0x27e2ec: 0x0  nop
    ctx->pc = 0x27e2ecu;
    // NOP
label_27e2f0:
    // 0x27e2f0: 0x0  nop
    ctx->pc = 0x27e2f0u;
    // NOP
label_27e2f4:
    // 0x27e2f4: 0x120  .word       0x00000120                   # add         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_27e2f8:
    // 0x27e2f8: 0x0  nop
    ctx->pc = 0x27e2f8u;
    // NOP
label_27e2fc:
    // 0x27e2fc: 0x0  nop
    ctx->pc = 0x27e2fcu;
    // NOP
label_27e300:
    // 0x27e300: 0x14c03  sra         $t1, $at, 16
    ctx->pc = 0x27e300u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), 16));
label_27e304:
    // 0x27e304: 0x31c80  sll         $v1, $v1, 18
    ctx->pc = 0x27e304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
label_27e308:
    // 0x27e308: 0x0  nop
    ctx->pc = 0x27e308u;
    // NOP
label_27e30c:
    // 0x27e30c: 0x0  nop
    ctx->pc = 0x27e30cu;
    // NOP
label_27e310:
    // 0x27e310: 0x14c67  .word       0x00014C67                   # nor         $t1, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e310u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27e314:
    // 0x27e314: 0x2b030  tge         $zero, $v0, 704
    ctx->pc = 0x27e314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e318:
    // 0x27e318: 0x0  nop
    ctx->pc = 0x27e318u;
    // NOP
label_27e31c:
    // 0x27e31c: 0x0  nop
    ctx->pc = 0x27e31cu;
    // NOP
label_27e320:
    // 0x27e320: 0x14cbe  dsrl32      $t1, $at, 18
    ctx->pc = 0x27e320u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> (32 + 18));
label_27e324:
    // 0x27e324: 0x3cf20  .word       0x0003CF20                   # add         $t9, $zero, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27e328:
    // 0x27e328: 0x0  nop
    ctx->pc = 0x27e328u;
    // NOP
label_27e32c:
    // 0x27e32c: 0x0  nop
    ctx->pc = 0x27e32cu;
    // NOP
label_27e330:
    // 0x27e330: 0x14d38  dsll        $t1, $at, 20
    ctx->pc = 0x27e330u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) << 20);
label_27e334:
    // 0x27e334: 0x293a0  .word       0x000293A0                   # add         $s2, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27e338:
    // 0x27e338: 0x0  nop
    ctx->pc = 0x27e338u;
    // NOP
label_27e33c:
    // 0x27e33c: 0x0  nop
    ctx->pc = 0x27e33cu;
    // NOP
label_27e340:
    // 0x27e340: 0x14d8b  .word       0x00014D8B                   # movn        $t1, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e340u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_27e344:
    // 0x27e344: 0x394c0  sll         $s2, $v1, 19
    ctx->pc = 0x27e344u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
label_27e348:
    // 0x27e348: 0x0  nop
    ctx->pc = 0x27e348u;
    // NOP
label_27e34c:
    // 0x27e34c: 0x0  nop
    ctx->pc = 0x27e34cu;
    // NOP
label_27e350:
    // 0x27e350: 0x14dfe  dsrl32      $t1, $at, 23
    ctx->pc = 0x27e350u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> (32 + 23));
label_27e354:
    // 0x27e354: 0x32210  .word       0x00032210                   # mfhi        $a0 # 00030200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e354u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_27e358:
    // 0x27e358: 0x0  nop
    ctx->pc = 0x27e358u;
    // NOP
label_27e35c:
    // 0x27e35c: 0x0  nop
    ctx->pc = 0x27e35cu;
    // NOP
label_27e360:
    // 0x27e360: 0x14e63  .word       0x00014E63                   # negu        $t1, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e360u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e364:
    // 0x27e364: 0x2be30  tge         $zero, $v0, 760
    ctx->pc = 0x27e364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e368:
    // 0x27e368: 0x0  nop
    ctx->pc = 0x27e368u;
    // NOP
label_27e36c:
    // 0x27e36c: 0x0  nop
    ctx->pc = 0x27e36cu;
    // NOP
label_27e370:
    // 0x27e370: 0x14ebb  dsra        $t1, $at, 26
    ctx->pc = 0x27e370u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> 26);
label_27e374:
    // 0x27e374: 0x33ec0  sll         $a3, $v1, 27
    ctx->pc = 0x27e374u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
label_27e378:
    // 0x27e378: 0x0  nop
    ctx->pc = 0x27e378u;
    // NOP
label_27e37c:
    // 0x27e37c: 0x0  nop
    ctx->pc = 0x27e37cu;
    // NOP
label_27e380:
    // 0x27e380: 0x14f23  .word       0x00014F23                   # negu        $t1, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e380u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e384:
    // 0x27e384: 0x39160  .word       0x00039160                   # add         $s2, $zero, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27e388:
    // 0x27e388: 0x0  nop
    ctx->pc = 0x27e388u;
    // NOP
label_27e38c:
    // 0x27e38c: 0x0  nop
    ctx->pc = 0x27e38cu;
    // NOP
label_27e390:
    // 0x27e390: 0x14f96  .word       0x00014F96                   # dsrlv       $t1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e390u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27e394:
    // 0x27e394: 0x2da70  tge         $zero, $v0, 873
    ctx->pc = 0x27e394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e398:
    // 0x27e398: 0x0  nop
    ctx->pc = 0x27e398u;
    // NOP
label_27e39c:
    // 0x27e39c: 0x0  nop
    ctx->pc = 0x27e39cu;
    // NOP
label_27e3a0:
    // 0x27e3a0: 0x14ff2  tlt         $zero, $at, 319
    ctx->pc = 0x27e3a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e3a4:
    // 0x27e3a4: 0x34540  sll         $t0, $v1, 21
    ctx->pc = 0x27e3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 21));
label_27e3a8:
    // 0x27e3a8: 0x0  nop
    ctx->pc = 0x27e3a8u;
    // NOP
label_27e3ac:
    // 0x27e3ac: 0x0  nop
    ctx->pc = 0x27e3acu;
    // NOP
label_27e3b0:
    // 0x27e3b0: 0x1505b  .word       0x0001505B                   # divu        $t2, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3b0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27e3b4:
    // 0x27e3b4: 0x34a20  .word       0x00034A20                   # add         $t1, $zero, $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27e3b8:
    // 0x27e3b8: 0x0  nop
    ctx->pc = 0x27e3b8u;
    // NOP
label_27e3bc:
    // 0x27e3bc: 0x0  nop
    ctx->pc = 0x27e3bcu;
    // NOP
label_27e3c0:
    // 0x27e3c0: 0x150c5  .word       0x000150C5                   # INVALID     $zero, $at, 0x50C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27E3C0 raw=0x000150C5");
 /* MITIGATED */
label_27e3c4:
    // 0x27e3c4: 0x31120  .word       0x00031120                   # add         $v0, $zero, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_27e3c8:
    // 0x27e3c8: 0x0  nop
    ctx->pc = 0x27e3c8u;
    // NOP
label_27e3cc:
    // 0x27e3cc: 0x0  nop
    ctx->pc = 0x27e3ccu;
    // NOP
label_27e3d0:
    // 0x27e3d0: 0x15128  .word       0x00015128                   # mfsa        $t2 # 00010100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27e3d0u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_27e3d4:
    // 0x27e3d4: 0x25aa0  .word       0x00025AA0                   # add         $t3, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_27e3d8:
    // 0x27e3d8: 0x0  nop
    ctx->pc = 0x27e3d8u;
    // NOP
label_27e3dc:
    // 0x27e3dc: 0x0  nop
    ctx->pc = 0x27e3dcu;
    // NOP
label_27e3e0:
    // 0x27e3e0: 0x15174  teq         $zero, $at, 325
    ctx->pc = 0x27e3e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e3e4:
    // 0x27e3e4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x27e3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_27e3e8:
    // 0x27e3e8: 0x0  nop
    ctx->pc = 0x27e3e8u;
    // NOP
label_27e3ec:
    // 0x27e3ec: 0x0  nop
    ctx->pc = 0x27e3ecu;
    // NOP
label_27e3f0:
    // 0x27e3f0: 0x151db  .word       0x000151DB                   # divu        $t2, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3f0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27e3f4:
    // 0x27e3f4: 0x33280  sll         $a2, $v1, 10
    ctx->pc = 0x27e3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_27e3f8:
    // 0x27e3f8: 0x0  nop
    ctx->pc = 0x27e3f8u;
    // NOP
label_27e3fc:
    // 0x27e3fc: 0x0  nop
    ctx->pc = 0x27e3fcu;
    // NOP
label_27e400:
    // 0x27e400: 0x15242  srl         $t2, $at, 9
    ctx->pc = 0x27e400u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 1), 9));
label_27e404:
    // 0x27e404: 0x2ed30  tge         $zero, $v0, 948
    ctx->pc = 0x27e404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e408:
    // 0x27e408: 0x0  nop
    ctx->pc = 0x27e408u;
    // NOP
label_27e40c:
    // 0x27e40c: 0x0  nop
    ctx->pc = 0x27e40cu;
    // NOP
label_27e410:
    // 0x27e410: 0x152a0  .word       0x000152A0                   # add         $t2, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e410u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27e414:
    // 0x27e414: 0x39420  .word       0x00039420                   # add         $s2, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27e418:
    // 0x27e418: 0x0  nop
    ctx->pc = 0x27e418u;
    // NOP
label_27e41c:
    // 0x27e41c: 0x0  nop
    ctx->pc = 0x27e41cu;
    // NOP
label_27e420:
    // 0x27e420: 0x15313  .word       0x00015313                   # mtlo        $zero # 00015300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e420u;
    ctx->lo = GPR_U64(ctx, 0);
label_27e424:
    // 0x27e424: 0x361a0  .word       0x000361A0                   # add         $t4, $zero, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27e428:
    // 0x27e428: 0x0  nop
    ctx->pc = 0x27e428u;
    // NOP
label_27e42c:
    // 0x27e42c: 0x0  nop
    ctx->pc = 0x27e42cu;
    // NOP
label_27e430:
    // 0x27e430: 0x15380  sll         $t2, $at, 14
    ctx->pc = 0x27e430u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 14));
label_27e434:
    // 0x27e434: 0x3a1f0  tge         $zero, $v1, 647
    ctx->pc = 0x27e434u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e438:
    // 0x27e438: 0x0  nop
    ctx->pc = 0x27e438u;
    // NOP
label_27e43c:
    // 0x27e43c: 0x0  nop
    ctx->pc = 0x27e43cu;
    // NOP
label_27e440:
    // 0x27e440: 0x153f5  .word       0x000153F5                   # INVALID     $zero, $at, 0x53F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e440u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27E440 raw=0x000153F5");
 /* MITIGATED */
label_27e444:
    // 0x27e444: 0x2bac0  sll         $s7, $v0, 11
    ctx->pc = 0x27e444u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_27e448:
    // 0x27e448: 0x0  nop
    ctx->pc = 0x27e448u;
    // NOP
label_27e44c:
    // 0x27e44c: 0x0  nop
    ctx->pc = 0x27e44cu;
    // NOP
label_27e450:
    // 0x27e450: 0x1544d  break       1, 337
    ctx->pc = 0x27e450u;
    runtime->handleBreak(rdram, ctx);
label_27e454:
    // 0x27e454: 0x33760  .word       0x00033760                   # add         $a2, $zero, $v1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27e458:
    // 0x27e458: 0x0  nop
    ctx->pc = 0x27e458u;
    // NOP
label_27e45c:
    // 0x27e45c: 0x0  nop
    ctx->pc = 0x27e45cu;
    // NOP
label_27e460:
    // 0x27e460: 0x154b4  teq         $zero, $at, 338
    ctx->pc = 0x27e460u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e464:
    // 0x27e464: 0x23510  .word       0x00023510                   # mfhi        $a2 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e464u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_27e468:
    // 0x27e468: 0x0  nop
    ctx->pc = 0x27e468u;
    // NOP
label_27e46c:
    // 0x27e46c: 0x0  nop
    ctx->pc = 0x27e46cu;
    // NOP
label_27e470:
    // 0x27e470: 0x154fb  dsra        $t2, $at, 19
    ctx->pc = 0x27e470u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> 19);
label_27e474:
    // 0x27e474: 0x2b480  sll         $s6, $v0, 18
    ctx->pc = 0x27e474u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
label_27e478:
    // 0x27e478: 0x0  nop
    ctx->pc = 0x27e478u;
    // NOP
label_27e47c:
    // 0x27e47c: 0x0  nop
    ctx->pc = 0x27e47cu;
    // NOP
label_27e480:
    // 0x27e480: 0x15552  .word       0x00015552                   # mflo        $t2 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e480u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_27e484:
    // 0x27e484: 0x2bd90  .word       0x0002BD90                   # mfhi        $s7 # 00020580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e484u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27e488:
    // 0x27e488: 0x0  nop
    ctx->pc = 0x27e488u;
    // NOP
label_27e48c:
    // 0x27e48c: 0x0  nop
    ctx->pc = 0x27e48cu;
    // NOP
label_27e490:
    // 0x27e490: 0x155aa  .word       0x000155AA                   # slt         $t2, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e490u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27e494:
    // 0x27e494: 0x35a90  .word       0x00035A90                   # mfhi        $t3 # 00030280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e494u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27e498:
    // 0x27e498: 0x0  nop
    ctx->pc = 0x27e498u;
    // NOP
label_27e49c:
    // 0x27e49c: 0x0  nop
    ctx->pc = 0x27e49cu;
    // NOP
label_27e4a0:
    // 0x27e4a0: 0x15616  .word       0x00015616                   # dsrlv       $t2, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27e4a4:
    // 0x27e4a4: 0x2ade0  .word       0x0002ADE0                   # add         $s5, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27e4a8:
    // 0x27e4a8: 0x0  nop
    ctx->pc = 0x27e4a8u;
    // NOP
label_27e4ac:
    // 0x27e4ac: 0x0  nop
    ctx->pc = 0x27e4acu;
    // NOP
label_27e4b0:
    // 0x27e4b0: 0x1566c  .word       0x0001566C                   # dadd        $t2, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_27e4b4:
    // 0x27e4b4: 0x2e3d0  .word       0x0002E3D0                   # mfhi        $gp # 000203C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4b4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_27e4b8:
    // 0x27e4b8: 0x0  nop
    ctx->pc = 0x27e4b8u;
    // NOP
label_27e4bc:
    // 0x27e4bc: 0x0  nop
    ctx->pc = 0x27e4bcu;
    // NOP
label_27e4c0:
    // 0x27e4c0: 0x156c9  .word       0x000156C9                   # jalr        $t2, $zero # 000106C0 <InstrIdType: CPU_SPECIAL>
label_27e4c4:
    if (ctx->pc == 0x27E4C4u) {
        ctx->pc = 0x27E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4C0u;
        // 0x27e4c4: 0x2cd40  sll         $t9, $v0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E4C8u;
        goto label_27e4c8;
    }
    ctx->pc = 0x27E4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x27E4C8u);
        ctx->pc = 0x27E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4C0u;
        // 0x27e4c4: 0x2cd40  sll         $t9, $v0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E4C0u, 0x27E4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E4C8u;
label_27e4c8:
    // 0x27e4c8: 0x0  nop
    ctx->pc = 0x27e4c8u;
    // NOP
label_27e4cc:
    // 0x27e4cc: 0x0  nop
    ctx->pc = 0x27e4ccu;
    // NOP
label_27e4d0:
    // 0x27e4d0: 0x15723  .word       0x00015723                   # negu        $t2, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e4d4:
    // 0x27e4d4: 0x38ca0  .word       0x00038CA0                   # add         $s1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27e4d8:
    // 0x27e4d8: 0x0  nop
    ctx->pc = 0x27e4d8u;
    // NOP
label_27e4dc:
    // 0x27e4dc: 0x0  nop
    ctx->pc = 0x27e4dcu;
    // NOP
label_27e4e0:
    // 0x27e4e0: 0x15795  .word       0x00015795                   # INVALID     $zero, $at, 0x5795 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27E4E0 raw=0x00015795");
 /* MITIGATED */
label_27e4e4:
    // 0x27e4e4: 0x28500  sll         $s0, $v0, 20
    ctx->pc = 0x27e4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_27e4e8:
    // 0x27e4e8: 0x0  nop
    ctx->pc = 0x27e4e8u;
    // NOP
label_27e4ec:
    // 0x27e4ec: 0x0  nop
    ctx->pc = 0x27e4ecu;
    // NOP
label_27e4f0:
    // 0x27e4f0: 0x157e6  .word       0x000157E6                   # xor         $t2, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27e4f4:
    // 0x27e4f4: 0x2a860  .word       0x0002A860                   # add         $s5, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27e4f8:
    // 0x27e4f8: 0x0  nop
    ctx->pc = 0x27e4f8u;
    // NOP
label_27e4fc:
    // 0x27e4fc: 0x0  nop
    ctx->pc = 0x27e4fcu;
    // NOP
label_27e500:
    // 0x27e500: 0x1583c  dsll32      $t3, $at, 0
    ctx->pc = 0x27e500u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) << (32 + 0));
label_27e504:
    // 0x27e504: 0x2ef60  .word       0x0002EF60                   # add         $sp, $zero, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e504u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_27e508:
    // 0x27e508: 0x0  nop
    ctx->pc = 0x27e508u;
    // NOP
label_27e50c:
    // 0x27e50c: 0x0  nop
    ctx->pc = 0x27e50cu;
    // NOP
label_27e510:
    // 0x27e510: 0x1589a  .word       0x0001589A                   # div         $t3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e510u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27e514:
    // 0x27e514: 0x36690  .word       0x00036690                   # mfhi        $t4 # 00030680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e514u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27e518:
    // 0x27e518: 0x0  nop
    ctx->pc = 0x27e518u;
    // NOP
label_27e51c:
    // 0x27e51c: 0x0  nop
    ctx->pc = 0x27e51cu;
    // NOP
label_27e520:
    // 0x27e520: 0x15907  .word       0x00015907                   # srav        $t3, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e520u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27e524:
    // 0x27e524: 0x2fe80  sll         $ra, $v0, 26
    ctx->pc = 0x27e524u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
label_27e528:
    // 0x27e528: 0x0  nop
    ctx->pc = 0x27e528u;
    // NOP
label_27e52c:
    // 0x27e52c: 0x0  nop
    ctx->pc = 0x27e52cu;
    // NOP
label_27e530:
    // 0x27e530: 0x15967  .word       0x00015967                   # nor         $t3, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e530u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27e534:
    // 0x27e534: 0x3afd0  .word       0x0003AFD0                   # mfhi        $s5 # 000307C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e534u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27e538:
    // 0x27e538: 0x0  nop
    ctx->pc = 0x27e538u;
    // NOP
label_27e53c:
    // 0x27e53c: 0x0  nop
    ctx->pc = 0x27e53cu;
    // NOP
label_27e540:
    // 0x27e540: 0x159dd  .word       0x000159DD                   # dmultu      $zero, $at # 000059C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e540u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27E540 raw=0x000159DD");
 /* MITIGATED */
label_27e544:
    // 0x27e544: 0x27fe0  .word       0x00027FE0                   # add         $t7, $zero, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27e548:
    // 0x27e548: 0x0  nop
    ctx->pc = 0x27e548u;
    // NOP
label_27e54c:
    // 0x27e54c: 0x0  nop
    ctx->pc = 0x27e54cu;
    // NOP
label_27e550:
    // 0x27e550: 0x15a2d  .word       0x00015A2D                   # daddu       $t3, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e550u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27e554:
    // 0x27e554: 0x2f770  tge         $zero, $v0, 989
    ctx->pc = 0x27e554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e558:
    // 0x27e558: 0x0  nop
    ctx->pc = 0x27e558u;
    // NOP
label_27e55c:
    // 0x27e55c: 0x0  nop
    ctx->pc = 0x27e55cu;
    // NOP
label_27e560:
    // 0x27e560: 0x15a8c  .word       0x00015A8C                   # syscall     362 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e560u;
    ctx->pc = 0x27E564u;
runtime->handleSyscall(rdram, ctx, 0x56Au);
label_27e564:
    // 0x27e564: 0x342b0  tge         $zero, $v1, 266
    ctx->pc = 0x27e564u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e568:
    // 0x27e568: 0x0  nop
    ctx->pc = 0x27e568u;
    // NOP
label_27e56c:
    // 0x27e56c: 0x0  nop
    ctx->pc = 0x27e56cu;
    // NOP
label_27e570:
    // 0x27e570: 0x15af5  .word       0x00015AF5                   # INVALID     $zero, $at, 0x5AF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e570u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27E570 raw=0x00015AF5");
 /* MITIGATED */
label_27e574:
    // 0x27e574: 0x36a90  .word       0x00036A90                   # mfhi        $t5 # 00030280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e574u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27e578:
    // 0x27e578: 0x0  nop
    ctx->pc = 0x27e578u;
    // NOP
label_27e57c:
    // 0x27e57c: 0x0  nop
    ctx->pc = 0x27e57cu;
    // NOP
label_27e580:
    // 0x27e580: 0x15b63  .word       0x00015B63                   # negu        $t3, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e580u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e584:
    // 0x27e584: 0x2d880  sll         $k1, $v0, 2
    ctx->pc = 0x27e584u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27e588:
    // 0x27e588: 0x0  nop
    ctx->pc = 0x27e588u;
    // NOP
label_27e58c:
    // 0x27e58c: 0x0  nop
    ctx->pc = 0x27e58cu;
    // NOP
label_27e590:
    // 0x27e590: 0x15bbf  dsra32      $t3, $at, 14
    ctx->pc = 0x27e590u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 1) >> (32 + 14));
label_27e594:
    // 0x27e594: 0x2ce80  sll         $t9, $v0, 26
    ctx->pc = 0x27e594u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
label_27e598:
    // 0x27e598: 0x0  nop
    ctx->pc = 0x27e598u;
    // NOP
label_27e59c:
    // 0x27e59c: 0x0  nop
    ctx->pc = 0x27e59cu;
    // NOP
label_27e5a0:
    // 0x27e5a0: 0x15c19  .word       0x00015C19                   # multu       $zero, $at # 00005C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_27e5a4:
    // 0x27e5a4: 0x26800  sll         $t5, $v0, 0
    ctx->pc = 0x27e5a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_27e5a8:
    // 0x27e5a8: 0x0  nop
    ctx->pc = 0x27e5a8u;
    // NOP
label_27e5ac:
    // 0x27e5ac: 0x0  nop
    ctx->pc = 0x27e5acu;
    // NOP
label_27e5b0:
    // 0x27e5b0: 0x15c66  .word       0x00015C66                   # xor         $t3, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27e5b4:
    // 0x27e5b4: 0x345d0  .word       0x000345D0                   # mfhi        $t0 # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5b4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27e5b8:
    // 0x27e5b8: 0x0  nop
    ctx->pc = 0x27e5b8u;
    // NOP
label_27e5bc:
    // 0x27e5bc: 0x0  nop
    ctx->pc = 0x27e5bcu;
    // NOP
label_27e5c0:
    // 0x27e5c0: 0x15ccf  .word       0x00015CCF                   # sync.p # 00015800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27e5c4:
    // 0x27e5c4: 0x2c230  tge         $zero, $v0, 776
    ctx->pc = 0x27e5c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e5c8:
    // 0x27e5c8: 0x0  nop
    ctx->pc = 0x27e5c8u;
    // NOP
label_27e5cc:
    // 0x27e5cc: 0x0  nop
    ctx->pc = 0x27e5ccu;
    // NOP
label_27e5d0:
    // 0x27e5d0: 0x15d28  .word       0x00015D28                   # mfsa        $t3 # 00010500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27e5d0u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_27e5d4:
    // 0x27e5d4: 0x32af0  tge         $zero, $v1, 171
    ctx->pc = 0x27e5d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e5d8:
    // 0x27e5d8: 0x0  nop
    ctx->pc = 0x27e5d8u;
    // NOP
label_27e5dc:
    // 0x27e5dc: 0x0  nop
    ctx->pc = 0x27e5dcu;
    // NOP
label_27e5e0:
    // 0x27e5e0: 0x15d8e  .word       0x00015D8E                   # INVALID     $zero, $at, 0x5D8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27E5E0 raw=0x00015D8E");
 /* MITIGATED */
label_27e5e4:
    // 0x27e5e4: 0x2c9e0  .word       0x0002C9E0                   # add         $t9, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27e5e8:
    // 0x27e5e8: 0x0  nop
    ctx->pc = 0x27e5e8u;
    // NOP
label_27e5ec:
    // 0x27e5ec: 0x0  nop
    ctx->pc = 0x27e5ecu;
    // NOP
label_27e5f0:
    // 0x27e5f0: 0x15de8  .word       0x00015DE8                   # mfsa        $t3 # 000105C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27e5f0u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_27e5f4:
    // 0x27e5f4: 0x334c0  sll         $a2, $v1, 19
    ctx->pc = 0x27e5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
label_27e5f8:
    // 0x27e5f8: 0x0  nop
    ctx->pc = 0x27e5f8u;
    // NOP
label_27e5fc:
    // 0x27e5fc: 0x0  nop
    ctx->pc = 0x27e5fcu;
    // NOP
label_27e600:
    // 0x27e600: 0x15e4f  .word       0x00015E4F                   # sync.p # 00015800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e600u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27e604:
    // 0x27e604: 0x21220  .word       0x00021220                   # add         $v0, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_27e608:
    // 0x27e608: 0x0  nop
    ctx->pc = 0x27e608u;
    // NOP
label_27e60c:
    // 0x27e60c: 0x0  nop
    ctx->pc = 0x27e60cu;
    // NOP
label_27e610:
    // 0x27e610: 0x15e92  .word       0x00015E92                   # mflo        $t3 # 00010680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e610u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_27e614:
    // 0x27e614: 0x2d800  sll         $k1, $v0, 0
    ctx->pc = 0x27e614u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_27e618:
    // 0x27e618: 0x0  nop
    ctx->pc = 0x27e618u;
    // NOP
label_27e61c:
    // 0x27e61c: 0x0  nop
    ctx->pc = 0x27e61cu;
    // NOP
label_27e620:
    // 0x27e620: 0x15eed  .word       0x00015EED                   # daddu       $t3, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e620u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27e624:
    // 0x27e624: 0x2c390  .word       0x0002C390                   # mfhi        $t8 # 00020380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e624u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27e628:
    // 0x27e628: 0x0  nop
    ctx->pc = 0x27e628u;
    // NOP
label_27e62c:
    // 0x27e62c: 0x0  nop
    ctx->pc = 0x27e62cu;
    // NOP
label_27e630:
    // 0x27e630: 0x15f46  .word       0x00015F46                   # srlv        $t3, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e630u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27e634:
    // 0x27e634: 0x2e560  .word       0x0002E560                   # add         $gp, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_27e638:
    // 0x27e638: 0x0  nop
    ctx->pc = 0x27e638u;
    // NOP
label_27e63c:
    // 0x27e63c: 0x0  nop
    ctx->pc = 0x27e63cu;
    // NOP
label_27e640:
    // 0x27e640: 0x15fa3  .word       0x00015FA3                   # negu        $t3, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e640u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e644:
    // 0x27e644: 0x2deb0  tge         $zero, $v0, 890
    ctx->pc = 0x27e644u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e648:
    // 0x27e648: 0x0  nop
    ctx->pc = 0x27e648u;
    // NOP
label_27e64c:
    // 0x27e64c: 0x0  nop
    ctx->pc = 0x27e64cu;
    // NOP
label_27e650:
    // 0x27e650: 0x15fff  dsra32      $t3, $at, 31
    ctx->pc = 0x27e650u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 1) >> (32 + 31));
label_27e654:
    // 0x27e654: 0x326c0  sll         $a0, $v1, 27
    ctx->pc = 0x27e654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
label_27e658:
    // 0x27e658: 0x0  nop
    ctx->pc = 0x27e658u;
    // NOP
label_27e65c:
    // 0x27e65c: 0x0  nop
    ctx->pc = 0x27e65cu;
    // NOP
label_27e660:
    // 0x27e660: 0x16064  .word       0x00016064                   # and         $t4, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e660u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27e664:
    // 0x27e664: 0x2e200  sll         $gp, $v0, 8
    ctx->pc = 0x27e664u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_27e668:
    // 0x27e668: 0x0  nop
    ctx->pc = 0x27e668u;
    // NOP
label_27e66c:
    // 0x27e66c: 0x0  nop
    ctx->pc = 0x27e66cu;
    // NOP
label_27e670:
    // 0x27e670: 0x160c1  .word       0x000160C1                   # INVALID     $zero, $at, 0x60C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e670u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27E670 raw=0x000160C1");
 /* MITIGATED */
label_27e674:
    // 0x27e674: 0x2bcd0  .word       0x0002BCD0                   # mfhi        $s7 # 000204C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e674u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27e678:
    // 0x27e678: 0x0  nop
    ctx->pc = 0x27e678u;
    // NOP
label_27e67c:
    // 0x27e67c: 0x0  nop
    ctx->pc = 0x27e67cu;
    // NOP
label_27e680:
    // 0x27e680: 0x16119  .word       0x00016119                   # multu       $zero, $at # 00006100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e680u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_27e684:
    // 0x27e684: 0x2d8c0  sll         $k1, $v0, 3
    ctx->pc = 0x27e684u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_27e688:
    // 0x27e688: 0x0  nop
    ctx->pc = 0x27e688u;
    // NOP
label_27e68c:
    // 0x27e68c: 0x0  nop
    ctx->pc = 0x27e68cu;
    // NOP
label_27e690:
    // 0x27e690: 0x16175  .word       0x00016175                   # INVALID     $zero, $at, 0x6175 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e690u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27E690 raw=0x00016175");
 /* MITIGATED */
label_27e694:
    // 0x27e694: 0x2d420  .word       0x0002D420                   # add         $k0, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_27e698:
    // 0x27e698: 0x0  nop
    ctx->pc = 0x27e698u;
    // NOP
label_27e69c:
    // 0x27e69c: 0x0  nop
    ctx->pc = 0x27e69cu;
    // NOP
label_27e6a0:
    // 0x27e6a0: 0x161d0  .word       0x000161D0                   # mfhi        $t4 # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e6a0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27e6a4:
    // 0x27e6a4: 0x36830  tge         $zero, $v1, 416
    ctx->pc = 0x27e6a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e6a8:
    // 0x27e6a8: 0x0  nop
    ctx->pc = 0x27e6a8u;
    // NOP
label_27e6ac:
    // 0x27e6ac: 0x0  nop
    ctx->pc = 0x27e6acu;
    // NOP
label_27e6b0:
    // 0x27e6b0: 0x1623e  dsrl32      $t4, $at, 8
    ctx->pc = 0x27e6b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) >> (32 + 8));
label_27e6b4:
    // 0x27e6b4: 0x2d6a0  .word       0x0002D6A0                   # add         $k0, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e6b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_27e6b8:
    // 0x27e6b8: 0x0  nop
    ctx->pc = 0x27e6b8u;
    // NOP
label_27e6bc:
    // 0x27e6bc: 0x0  nop
    ctx->pc = 0x27e6bcu;
    // NOP
label_27e6c0:
    // 0x27e6c0: 0x16299  .word       0x00016299                   # multu       $zero, $at # 00006280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e6c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_27e6c4:
    // 0x27e6c4: 0x2ec00  sll         $sp, $v0, 16
    ctx->pc = 0x27e6c4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27e6c8:
    // 0x27e6c8: 0x0  nop
    ctx->pc = 0x27e6c8u;
    // NOP
label_27e6cc:
    // 0x27e6cc: 0x0  nop
    ctx->pc = 0x27e6ccu;
    // NOP
label_27e6d0:
    // 0x27e6d0: 0x162f7  .word       0x000162F7                   # INVALID     $zero, $at, 0x62F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e6d0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27E6D0 raw=0x000162F7");
 /* MITIGATED */
label_27e6d4:
    // 0x27e6d4: 0x2e430  tge         $zero, $v0, 912
    ctx->pc = 0x27e6d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e6d8:
    // 0x27e6d8: 0x0  nop
    ctx->pc = 0x27e6d8u;
    // NOP
label_27e6dc:
    // 0x27e6dc: 0x0  nop
    ctx->pc = 0x27e6dcu;
    // NOP
label_27e6e0:
    // 0x27e6e0: 0x16354  .word       0x00016354                   # dsllv       $t4, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e6e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27e6e4:
    // 0x27e6e4: 0x2e0b0  tge         $zero, $v0, 898
    ctx->pc = 0x27e6e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e6e8:
    // 0x27e6e8: 0x0  nop
    ctx->pc = 0x27e6e8u;
    // NOP
label_27e6ec:
    // 0x27e6ec: 0x0  nop
    ctx->pc = 0x27e6ecu;
    // NOP
label_27e6f0:
    // 0x27e6f0: 0x163b1  tgeu        $zero, $at, 398
    ctx->pc = 0x27e6f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e6f4:
    // 0x27e6f4: 0x2dbb0  tge         $zero, $v0, 878
    ctx->pc = 0x27e6f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e6f8:
    // 0x27e6f8: 0x0  nop
    ctx->pc = 0x27e6f8u;
    // NOP
label_27e6fc:
    // 0x27e6fc: 0x0  nop
    ctx->pc = 0x27e6fcu;
    // NOP
    ctx->pc = 0x27e700u;
    return;
}
