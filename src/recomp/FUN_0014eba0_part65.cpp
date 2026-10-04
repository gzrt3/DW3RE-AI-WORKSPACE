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


void FUN_0014eba0_part65(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16dfa0u: goto label_16dfa0;
        case 0x16dfa4u: goto label_16dfa4;
        case 0x16dfa8u: goto label_16dfa8;
        case 0x16dfacu: goto label_16dfac;
        case 0x16dfb0u: goto label_16dfb0;
        case 0x16dfb4u: goto label_16dfb4;
        case 0x16dfb8u: goto label_16dfb8;
        case 0x16dfbcu: goto label_16dfbc;
        case 0x16dfc0u: goto label_16dfc0;
        case 0x16dfc4u: goto label_16dfc4;
        case 0x16dfc8u: goto label_16dfc8;
        case 0x16dfccu: goto label_16dfcc;
        case 0x16dfd0u: goto label_16dfd0;
        case 0x16dfd4u: goto label_16dfd4;
        case 0x16dfd8u: goto label_16dfd8;
        case 0x16dfdcu: goto label_16dfdc;
        case 0x16dfe0u: goto label_16dfe0;
        case 0x16dfe4u: goto label_16dfe4;
        case 0x16dfe8u: goto label_16dfe8;
        case 0x16dfecu: goto label_16dfec;
        case 0x16dff0u: goto label_16dff0;
        case 0x16dff4u: goto label_16dff4;
        case 0x16dff8u: goto label_16dff8;
        case 0x16dffcu: goto label_16dffc;
        case 0x16e000u: goto label_16e000;
        case 0x16e004u: goto label_16e004;
        case 0x16e008u: goto label_16e008;
        case 0x16e00cu: goto label_16e00c;
        case 0x16e010u: goto label_16e010;
        case 0x16e014u: goto label_16e014;
        case 0x16e018u: goto label_16e018;
        case 0x16e01cu: goto label_16e01c;
        case 0x16e020u: goto label_16e020;
        case 0x16e024u: goto label_16e024;
        case 0x16e028u: goto label_16e028;
        case 0x16e02cu: goto label_16e02c;
        case 0x16e030u: goto label_16e030;
        case 0x16e034u: goto label_16e034;
        case 0x16e038u: goto label_16e038;
        case 0x16e03cu: goto label_16e03c;
        case 0x16e040u: goto label_16e040;
        case 0x16e044u: goto label_16e044;
        case 0x16e048u: goto label_16e048;
        case 0x16e04cu: goto label_16e04c;
        case 0x16e050u: goto label_16e050;
        case 0x16e054u: goto label_16e054;
        case 0x16e058u: goto label_16e058;
        case 0x16e05cu: goto label_16e05c;
        case 0x16e060u: goto label_16e060;
        case 0x16e064u: goto label_16e064;
        case 0x16e068u: goto label_16e068;
        case 0x16e06cu: goto label_16e06c;
        case 0x16e070u: goto label_16e070;
        case 0x16e074u: goto label_16e074;
        case 0x16e078u: goto label_16e078;
        case 0x16e07cu: goto label_16e07c;
        case 0x16e080u: goto label_16e080;
        case 0x16e084u: goto label_16e084;
        case 0x16e088u: goto label_16e088;
        case 0x16e08cu: goto label_16e08c;
        case 0x16e090u: goto label_16e090;
        case 0x16e094u: goto label_16e094;
        case 0x16e098u: goto label_16e098;
        case 0x16e09cu: goto label_16e09c;
        case 0x16e0a0u: goto label_16e0a0;
        case 0x16e0a4u: goto label_16e0a4;
        case 0x16e0a8u: goto label_16e0a8;
        case 0x16e0acu: goto label_16e0ac;
        case 0x16e0b0u: goto label_16e0b0;
        case 0x16e0b4u: goto label_16e0b4;
        case 0x16e0b8u: goto label_16e0b8;
        case 0x16e0bcu: goto label_16e0bc;
        case 0x16e0c0u: goto label_16e0c0;
        case 0x16e0c4u: goto label_16e0c4;
        case 0x16e0c8u: goto label_16e0c8;
        case 0x16e0ccu: goto label_16e0cc;
        case 0x16e0d0u: goto label_16e0d0;
        case 0x16e0d4u: goto label_16e0d4;
        case 0x16e0d8u: goto label_16e0d8;
        case 0x16e0dcu: goto label_16e0dc;
        case 0x16e0e0u: goto label_16e0e0;
        case 0x16e0e4u: goto label_16e0e4;
        case 0x16e0e8u: goto label_16e0e8;
        case 0x16e0ecu: goto label_16e0ec;
        case 0x16e0f0u: goto label_16e0f0;
        case 0x16e0f4u: goto label_16e0f4;
        case 0x16e0f8u: goto label_16e0f8;
        case 0x16e0fcu: goto label_16e0fc;
        case 0x16e100u: goto label_16e100;
        case 0x16e104u: goto label_16e104;
        case 0x16e108u: goto label_16e108;
        case 0x16e10cu: goto label_16e10c;
        case 0x16e110u: goto label_16e110;
        case 0x16e114u: goto label_16e114;
        case 0x16e118u: goto label_16e118;
        case 0x16e11cu: goto label_16e11c;
        case 0x16e120u: goto label_16e120;
        case 0x16e124u: goto label_16e124;
        case 0x16e128u: goto label_16e128;
        case 0x16e12cu: goto label_16e12c;
        case 0x16e130u: goto label_16e130;
        case 0x16e134u: goto label_16e134;
        case 0x16e138u: goto label_16e138;
        case 0x16e13cu: goto label_16e13c;
        case 0x16e140u: goto label_16e140;
        case 0x16e144u: goto label_16e144;
        case 0x16e148u: goto label_16e148;
        case 0x16e14cu: goto label_16e14c;
        case 0x16e150u: goto label_16e150;
        case 0x16e154u: goto label_16e154;
        case 0x16e158u: goto label_16e158;
        case 0x16e15cu: goto label_16e15c;
        case 0x16e160u: goto label_16e160;
        case 0x16e164u: goto label_16e164;
        case 0x16e168u: goto label_16e168;
        case 0x16e16cu: goto label_16e16c;
        case 0x16e170u: goto label_16e170;
        case 0x16e174u: goto label_16e174;
        case 0x16e178u: goto label_16e178;
        case 0x16e17cu: goto label_16e17c;
        case 0x16e180u: goto label_16e180;
        case 0x16e184u: goto label_16e184;
        case 0x16e188u: goto label_16e188;
        case 0x16e18cu: goto label_16e18c;
        case 0x16e190u: goto label_16e190;
        case 0x16e194u: goto label_16e194;
        case 0x16e198u: goto label_16e198;
        case 0x16e19cu: goto label_16e19c;
        case 0x16e1a0u: goto label_16e1a0;
        case 0x16e1a4u: goto label_16e1a4;
        case 0x16e1a8u: goto label_16e1a8;
        case 0x16e1acu: goto label_16e1ac;
        case 0x16e1b0u: goto label_16e1b0;
        case 0x16e1b4u: goto label_16e1b4;
        case 0x16e1b8u: goto label_16e1b8;
        case 0x16e1bcu: goto label_16e1bc;
        case 0x16e1c0u: goto label_16e1c0;
        case 0x16e1c4u: goto label_16e1c4;
        case 0x16e1c8u: goto label_16e1c8;
        case 0x16e1ccu: goto label_16e1cc;
        case 0x16e1d0u: goto label_16e1d0;
        case 0x16e1d4u: goto label_16e1d4;
        case 0x16e1d8u: goto label_16e1d8;
        case 0x16e1dcu: goto label_16e1dc;
        case 0x16e1e0u: goto label_16e1e0;
        case 0x16e1e4u: goto label_16e1e4;
        case 0x16e1e8u: goto label_16e1e8;
        case 0x16e1ecu: goto label_16e1ec;
        case 0x16e1f0u: goto label_16e1f0;
        case 0x16e1f4u: goto label_16e1f4;
        case 0x16e1f8u: goto label_16e1f8;
        case 0x16e1fcu: goto label_16e1fc;
        case 0x16e200u: goto label_16e200;
        case 0x16e204u: goto label_16e204;
        case 0x16e208u: goto label_16e208;
        case 0x16e20cu: goto label_16e20c;
        case 0x16e210u: goto label_16e210;
        case 0x16e214u: goto label_16e214;
        case 0x16e218u: goto label_16e218;
        case 0x16e21cu: goto label_16e21c;
        case 0x16e220u: goto label_16e220;
        case 0x16e224u: goto label_16e224;
        case 0x16e228u: goto label_16e228;
        case 0x16e22cu: goto label_16e22c;
        case 0x16e230u: goto label_16e230;
        case 0x16e234u: goto label_16e234;
        case 0x16e238u: goto label_16e238;
        case 0x16e23cu: goto label_16e23c;
        case 0x16e240u: goto label_16e240;
        case 0x16e244u: goto label_16e244;
        case 0x16e248u: goto label_16e248;
        case 0x16e24cu: goto label_16e24c;
        case 0x16e250u: goto label_16e250;
        case 0x16e254u: goto label_16e254;
        case 0x16e258u: goto label_16e258;
        case 0x16e25cu: goto label_16e25c;
        case 0x16e260u: goto label_16e260;
        case 0x16e264u: goto label_16e264;
        case 0x16e268u: goto label_16e268;
        case 0x16e26cu: goto label_16e26c;
        case 0x16e270u: goto label_16e270;
        case 0x16e274u: goto label_16e274;
        case 0x16e278u: goto label_16e278;
        case 0x16e27cu: goto label_16e27c;
        case 0x16e280u: goto label_16e280;
        case 0x16e284u: goto label_16e284;
        case 0x16e288u: goto label_16e288;
        case 0x16e28cu: goto label_16e28c;
        case 0x16e290u: goto label_16e290;
        case 0x16e294u: goto label_16e294;
        case 0x16e298u: goto label_16e298;
        case 0x16e29cu: goto label_16e29c;
        case 0x16e2a0u: goto label_16e2a0;
        case 0x16e2a4u: goto label_16e2a4;
        case 0x16e2a8u: goto label_16e2a8;
        case 0x16e2acu: goto label_16e2ac;
        case 0x16e2b0u: goto label_16e2b0;
        case 0x16e2b4u: goto label_16e2b4;
        case 0x16e2b8u: goto label_16e2b8;
        case 0x16e2bcu: goto label_16e2bc;
        case 0x16e2c0u: goto label_16e2c0;
        case 0x16e2c4u: goto label_16e2c4;
        case 0x16e2c8u: goto label_16e2c8;
        case 0x16e2ccu: goto label_16e2cc;
        case 0x16e2d0u: goto label_16e2d0;
        case 0x16e2d4u: goto label_16e2d4;
        case 0x16e2d8u: goto label_16e2d8;
        case 0x16e2dcu: goto label_16e2dc;
        case 0x16e2e0u: goto label_16e2e0;
        case 0x16e2e4u: goto label_16e2e4;
        case 0x16e2e8u: goto label_16e2e8;
        case 0x16e2ecu: goto label_16e2ec;
        case 0x16e2f0u: goto label_16e2f0;
        case 0x16e2f4u: goto label_16e2f4;
        case 0x16e2f8u: goto label_16e2f8;
        case 0x16e2fcu: goto label_16e2fc;
        case 0x16e300u: goto label_16e300;
        case 0x16e304u: goto label_16e304;
        case 0x16e308u: goto label_16e308;
        case 0x16e30cu: goto label_16e30c;
        case 0x16e310u: goto label_16e310;
        case 0x16e314u: goto label_16e314;
        case 0x16e318u: goto label_16e318;
        case 0x16e31cu: goto label_16e31c;
        case 0x16e320u: goto label_16e320;
        case 0x16e324u: goto label_16e324;
        case 0x16e328u: goto label_16e328;
        case 0x16e32cu: goto label_16e32c;
        case 0x16e330u: goto label_16e330;
        case 0x16e334u: goto label_16e334;
        case 0x16e338u: goto label_16e338;
        case 0x16e33cu: goto label_16e33c;
        case 0x16e340u: goto label_16e340;
        case 0x16e344u: goto label_16e344;
        case 0x16e348u: goto label_16e348;
        case 0x16e34cu: goto label_16e34c;
        case 0x16e350u: goto label_16e350;
        case 0x16e354u: goto label_16e354;
        case 0x16e358u: goto label_16e358;
        case 0x16e35cu: goto label_16e35c;
        case 0x16e360u: goto label_16e360;
        case 0x16e364u: goto label_16e364;
        case 0x16e368u: goto label_16e368;
        case 0x16e36cu: goto label_16e36c;
        case 0x16e370u: goto label_16e370;
        case 0x16e374u: goto label_16e374;
        case 0x16e378u: goto label_16e378;
        case 0x16e37cu: goto label_16e37c;
        case 0x16e380u: goto label_16e380;
        case 0x16e384u: goto label_16e384;
        case 0x16e388u: goto label_16e388;
        case 0x16e38cu: goto label_16e38c;
        case 0x16e390u: goto label_16e390;
        case 0x16e394u: goto label_16e394;
        case 0x16e398u: goto label_16e398;
        case 0x16e39cu: goto label_16e39c;
        case 0x16e3a0u: goto label_16e3a0;
        case 0x16e3a4u: goto label_16e3a4;
        case 0x16e3a8u: goto label_16e3a8;
        case 0x16e3acu: goto label_16e3ac;
        case 0x16e3b0u: goto label_16e3b0;
        case 0x16e3b4u: goto label_16e3b4;
        case 0x16e3b8u: goto label_16e3b8;
        case 0x16e3bcu: goto label_16e3bc;
        case 0x16e3c0u: goto label_16e3c0;
        case 0x16e3c4u: goto label_16e3c4;
        case 0x16e3c8u: goto label_16e3c8;
        case 0x16e3ccu: goto label_16e3cc;
        case 0x16e3d0u: goto label_16e3d0;
        case 0x16e3d4u: goto label_16e3d4;
        case 0x16e3d8u: goto label_16e3d8;
        case 0x16e3dcu: goto label_16e3dc;
        case 0x16e3e0u: goto label_16e3e0;
        case 0x16e3e4u: goto label_16e3e4;
        case 0x16e3e8u: goto label_16e3e8;
        case 0x16e3ecu: goto label_16e3ec;
        case 0x16e3f0u: goto label_16e3f0;
        case 0x16e3f4u: goto label_16e3f4;
        case 0x16e3f8u: goto label_16e3f8;
        case 0x16e3fcu: goto label_16e3fc;
        case 0x16e400u: goto label_16e400;
        case 0x16e404u: goto label_16e404;
        case 0x16e408u: goto label_16e408;
        case 0x16e40cu: goto label_16e40c;
        case 0x16e410u: goto label_16e410;
        case 0x16e414u: goto label_16e414;
        case 0x16e418u: goto label_16e418;
        case 0x16e41cu: goto label_16e41c;
        case 0x16e420u: goto label_16e420;
        case 0x16e424u: goto label_16e424;
        case 0x16e428u: goto label_16e428;
        case 0x16e42cu: goto label_16e42c;
        case 0x16e430u: goto label_16e430;
        case 0x16e434u: goto label_16e434;
        case 0x16e438u: goto label_16e438;
        case 0x16e43cu: goto label_16e43c;
        case 0x16e440u: goto label_16e440;
        case 0x16e444u: goto label_16e444;
        case 0x16e448u: goto label_16e448;
        case 0x16e44cu: goto label_16e44c;
        case 0x16e450u: goto label_16e450;
        case 0x16e454u: goto label_16e454;
        case 0x16e458u: goto label_16e458;
        case 0x16e45cu: goto label_16e45c;
        case 0x16e460u: goto label_16e460;
        case 0x16e464u: goto label_16e464;
        case 0x16e468u: goto label_16e468;
        case 0x16e46cu: goto label_16e46c;
        case 0x16e470u: goto label_16e470;
        case 0x16e474u: goto label_16e474;
        case 0x16e478u: goto label_16e478;
        case 0x16e47cu: goto label_16e47c;
        case 0x16e480u: goto label_16e480;
        case 0x16e484u: goto label_16e484;
        case 0x16e488u: goto label_16e488;
        case 0x16e48cu: goto label_16e48c;
        case 0x16e490u: goto label_16e490;
        case 0x16e494u: goto label_16e494;
        case 0x16e498u: goto label_16e498;
        case 0x16e49cu: goto label_16e49c;
        case 0x16e4a0u: goto label_16e4a0;
        case 0x16e4a4u: goto label_16e4a4;
        case 0x16e4a8u: goto label_16e4a8;
        case 0x16e4acu: goto label_16e4ac;
        case 0x16e4b0u: goto label_16e4b0;
        case 0x16e4b4u: goto label_16e4b4;
        case 0x16e4b8u: goto label_16e4b8;
        case 0x16e4bcu: goto label_16e4bc;
        case 0x16e4c0u: goto label_16e4c0;
        case 0x16e4c4u: goto label_16e4c4;
        case 0x16e4c8u: goto label_16e4c8;
        case 0x16e4ccu: goto label_16e4cc;
        case 0x16e4d0u: goto label_16e4d0;
        case 0x16e4d4u: goto label_16e4d4;
        case 0x16e4d8u: goto label_16e4d8;
        case 0x16e4dcu: goto label_16e4dc;
        case 0x16e4e0u: goto label_16e4e0;
        case 0x16e4e4u: goto label_16e4e4;
        case 0x16e4e8u: goto label_16e4e8;
        case 0x16e4ecu: goto label_16e4ec;
        case 0x16e4f0u: goto label_16e4f0;
        case 0x16e4f4u: goto label_16e4f4;
        case 0x16e4f8u: goto label_16e4f8;
        case 0x16e4fcu: goto label_16e4fc;
        case 0x16e500u: goto label_16e500;
        case 0x16e504u: goto label_16e504;
        case 0x16e508u: goto label_16e508;
        case 0x16e50cu: goto label_16e50c;
        case 0x16e510u: goto label_16e510;
        case 0x16e514u: goto label_16e514;
        case 0x16e518u: goto label_16e518;
        case 0x16e51cu: goto label_16e51c;
        case 0x16e520u: goto label_16e520;
        case 0x16e524u: goto label_16e524;
        case 0x16e528u: goto label_16e528;
        case 0x16e52cu: goto label_16e52c;
        case 0x16e530u: goto label_16e530;
        case 0x16e534u: goto label_16e534;
        case 0x16e538u: goto label_16e538;
        case 0x16e53cu: goto label_16e53c;
        case 0x16e540u: goto label_16e540;
        case 0x16e544u: goto label_16e544;
        case 0x16e548u: goto label_16e548;
        case 0x16e54cu: goto label_16e54c;
        case 0x16e550u: goto label_16e550;
        case 0x16e554u: goto label_16e554;
        case 0x16e558u: goto label_16e558;
        case 0x16e55cu: goto label_16e55c;
        case 0x16e560u: goto label_16e560;
        case 0x16e564u: goto label_16e564;
        case 0x16e568u: goto label_16e568;
        case 0x16e56cu: goto label_16e56c;
        case 0x16e570u: goto label_16e570;
        case 0x16e574u: goto label_16e574;
        case 0x16e578u: goto label_16e578;
        case 0x16e57cu: goto label_16e57c;
        case 0x16e580u: goto label_16e580;
        case 0x16e584u: goto label_16e584;
        case 0x16e588u: goto label_16e588;
        case 0x16e58cu: goto label_16e58c;
        case 0x16e590u: goto label_16e590;
        case 0x16e594u: goto label_16e594;
        case 0x16e598u: goto label_16e598;
        case 0x16e59cu: goto label_16e59c;
        case 0x16e5a0u: goto label_16e5a0;
        case 0x16e5a4u: goto label_16e5a4;
        case 0x16e5a8u: goto label_16e5a8;
        case 0x16e5acu: goto label_16e5ac;
        case 0x16e5b0u: goto label_16e5b0;
        case 0x16e5b4u: goto label_16e5b4;
        case 0x16e5b8u: goto label_16e5b8;
        case 0x16e5bcu: goto label_16e5bc;
        case 0x16e5c0u: goto label_16e5c0;
        case 0x16e5c4u: goto label_16e5c4;
        case 0x16e5c8u: goto label_16e5c8;
        case 0x16e5ccu: goto label_16e5cc;
        case 0x16e5d0u: goto label_16e5d0;
        case 0x16e5d4u: goto label_16e5d4;
        case 0x16e5d8u: goto label_16e5d8;
        case 0x16e5dcu: goto label_16e5dc;
        case 0x16e5e0u: goto label_16e5e0;
        case 0x16e5e4u: goto label_16e5e4;
        case 0x16e5e8u: goto label_16e5e8;
        case 0x16e5ecu: goto label_16e5ec;
        case 0x16e5f0u: goto label_16e5f0;
        case 0x16e5f4u: goto label_16e5f4;
        case 0x16e5f8u: goto label_16e5f8;
        case 0x16e5fcu: goto label_16e5fc;
        case 0x16e600u: goto label_16e600;
        case 0x16e604u: goto label_16e604;
        case 0x16e608u: goto label_16e608;
        case 0x16e60cu: goto label_16e60c;
        case 0x16e610u: goto label_16e610;
        case 0x16e614u: goto label_16e614;
        case 0x16e618u: goto label_16e618;
        case 0x16e61cu: goto label_16e61c;
        case 0x16e620u: goto label_16e620;
        case 0x16e624u: goto label_16e624;
        case 0x16e628u: goto label_16e628;
        case 0x16e62cu: goto label_16e62c;
        case 0x16e630u: goto label_16e630;
        case 0x16e634u: goto label_16e634;
        case 0x16e638u: goto label_16e638;
        case 0x16e63cu: goto label_16e63c;
        case 0x16e640u: goto label_16e640;
        case 0x16e644u: goto label_16e644;
        case 0x16e648u: goto label_16e648;
        case 0x16e64cu: goto label_16e64c;
        case 0x16e650u: goto label_16e650;
        case 0x16e654u: goto label_16e654;
        case 0x16e658u: goto label_16e658;
        case 0x16e65cu: goto label_16e65c;
        case 0x16e660u: goto label_16e660;
        case 0x16e664u: goto label_16e664;
        case 0x16e668u: goto label_16e668;
        case 0x16e66cu: goto label_16e66c;
        case 0x16e670u: goto label_16e670;
        case 0x16e674u: goto label_16e674;
        case 0x16e678u: goto label_16e678;
        case 0x16e67cu: goto label_16e67c;
        case 0x16e680u: goto label_16e680;
        case 0x16e684u: goto label_16e684;
        case 0x16e688u: goto label_16e688;
        case 0x16e68cu: goto label_16e68c;
        case 0x16e690u: goto label_16e690;
        case 0x16e694u: goto label_16e694;
        case 0x16e698u: goto label_16e698;
        case 0x16e69cu: goto label_16e69c;
        case 0x16e6a0u: goto label_16e6a0;
        case 0x16e6a4u: goto label_16e6a4;
        case 0x16e6a8u: goto label_16e6a8;
        case 0x16e6acu: goto label_16e6ac;
        case 0x16e6b0u: goto label_16e6b0;
        case 0x16e6b4u: goto label_16e6b4;
        case 0x16e6b8u: goto label_16e6b8;
        case 0x16e6bcu: goto label_16e6bc;
        case 0x16e6c0u: goto label_16e6c0;
        case 0x16e6c4u: goto label_16e6c4;
        case 0x16e6c8u: goto label_16e6c8;
        case 0x16e6ccu: goto label_16e6cc;
        case 0x16e6d0u: goto label_16e6d0;
        case 0x16e6d4u: goto label_16e6d4;
        case 0x16e6d8u: goto label_16e6d8;
        case 0x16e6dcu: goto label_16e6dc;
        case 0x16e6e0u: goto label_16e6e0;
        case 0x16e6e4u: goto label_16e6e4;
        case 0x16e6e8u: goto label_16e6e8;
        case 0x16e6ecu: goto label_16e6ec;
        case 0x16e6f0u: goto label_16e6f0;
        case 0x16e6f4u: goto label_16e6f4;
        case 0x16e6f8u: goto label_16e6f8;
        case 0x16e6fcu: goto label_16e6fc;
        case 0x16e700u: goto label_16e700;
        case 0x16e704u: goto label_16e704;
        case 0x16e708u: goto label_16e708;
        case 0x16e70cu: goto label_16e70c;
        case 0x16e710u: goto label_16e710;
        case 0x16e714u: goto label_16e714;
        case 0x16e718u: goto label_16e718;
        case 0x16e71cu: goto label_16e71c;
        case 0x16e720u: goto label_16e720;
        case 0x16e724u: goto label_16e724;
        case 0x16e728u: goto label_16e728;
        case 0x16e72cu: goto label_16e72c;
        case 0x16e730u: goto label_16e730;
        case 0x16e734u: goto label_16e734;
        case 0x16e738u: goto label_16e738;
        case 0x16e73cu: goto label_16e73c;
        case 0x16e740u: goto label_16e740;
        case 0x16e744u: goto label_16e744;
        case 0x16e748u: goto label_16e748;
        case 0x16e74cu: goto label_16e74c;
        case 0x16e750u: goto label_16e750;
        case 0x16e754u: goto label_16e754;
        case 0x16e758u: goto label_16e758;
        case 0x16e75cu: goto label_16e75c;
        case 0x16e760u: goto label_16e760;
        case 0x16e764u: goto label_16e764;
        case 0x16e768u: goto label_16e768;
        case 0x16e76cu: goto label_16e76c;
        default: return;
    }

label_16dfa0:
    if (ctx->pc == 0x16DFA0u) {
        ctx->pc = 0x16DFA4u;
        goto label_16dfa4;
    }
    ctx->pc = 0x16DF9Cu;
    {
        const bool branch_taken_0x16df9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16df9c) {
            ctx->pc = 0x16DFB4u;
            goto label_16dfb4;
        }
    }
    ctx->pc = 0x16DFA4u;
label_16dfa4:
    // 0x16dfa4: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16dfa8:
    // 0x16dfa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16dfac:
    // 0x16dfac: 0x10000052  b           . + 4 + (0x52 << 2)
label_16dfb0:
    if (ctx->pc == 0x16DFB0u) {
        ctx->pc = 0x16DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFACu;
        // 0x16dfb0: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DFB4u;
        goto label_16dfb4;
    }
    ctx->pc = 0x16DFACu;
    {
        const bool branch_taken_0x16dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFACu;
        // 0x16dfb0: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfac) {
            ctx->pc = 0x16E0F8u;
            goto label_16e0f8;
        }
    }
    ctx->pc = 0x16DFB4u;
label_16dfb4:
    // 0x16dfb4: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16dfb8:
    // 0x16dfb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16dfbc:
    if (ctx->pc == 0x16DFBCu) {
        ctx->pc = 0x16DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFB8u;
        // 0x16dfbc: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DFC0u;
        goto label_16dfc0;
    }
    ctx->pc = 0x16DFB8u;
    {
        const bool branch_taken_0x16dfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFB8u;
        // 0x16dfbc: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfb8) {
            ctx->pc = 0x16DFE8u;
            goto label_16dfe8;
        }
    }
    ctx->pc = 0x16DFC0u;
label_16dfc0:
    // 0x16dfc0: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16dfc4:
    // 0x16dfc4: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16dfc8:
    // 0x16dfc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16dfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16dfcc:
    // 0x16dfcc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16dfd0:
    // 0x16dfd0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16dfd4:
    // 0x16dfd4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16dfd8:
    // 0x16dfd8: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16dfdc:
    // 0x16dfdc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16dfe0:
    // 0x16dfe0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16dfe4:
    // 0x16dfe4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16dfe8:
    // 0x16dfe8: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_16dfec:
    // 0x16dfec: 0x10000049  b           . + 4 + (0x49 << 2)
label_16dff0:
    if (ctx->pc == 0x16DFF0u) {
        ctx->pc = 0x16DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFECu;
        // 0x16dff0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DFF4u;
        goto label_16dff4;
    }
    ctx->pc = 0x16DFECu;
    {
        const bool branch_taken_0x16dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFECu;
        // 0x16dff0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfec) {
            ctx->pc = 0x16E114u;
            goto label_16e114;
        }
    }
    ctx->pc = 0x16DFF4u;
label_16dff4:
    // 0x16dff4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16dff8:
    // 0x16dff8: 0xc08d232  jal         func_2348C8
label_16dffc:
    if (ctx->pc == 0x16DFFCu) {
        ctx->pc = 0x16DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFF8u;
        // 0x16dffc: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E000u;
        goto label_16e000;
    }
    ctx->pc = 0x16DFF8u;
    SET_GPR_U32(ctx, 31, 0x16E000u);
    ctx->pc = 0x16DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFF8u;
    // 0x16dffc: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2348C8u;
    { ctx->pc = 0x2348c8; return; }
    ctx->pc = 0x16E000u;
label_16e000:
    // 0x16e000: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_16e004:
    if (ctx->pc == 0x16E004u) {
        ctx->pc = 0x16E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E000u;
        // 0x16e004: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E008u;
        goto label_16e008;
    }
    ctx->pc = 0x16E000u;
    {
        const bool branch_taken_0x16e000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E000u;
        // 0x16e004: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e000) {
            ctx->pc = 0x16E068u;
            goto label_16e068;
        }
    }
    ctx->pc = 0x16E008u;
label_16e008:
    // 0x16e008: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16e00c:
    // 0x16e00c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e010:
    // 0x16e010: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_16e014:
    if (ctx->pc == 0x16E014u) {
        ctx->pc = 0x16E018u;
        goto label_16e018;
    }
    ctx->pc = 0x16E010u;
    {
        const bool branch_taken_0x16e010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e010) {
            ctx->pc = 0x16E028u;
            goto label_16e028;
        }
    }
    ctx->pc = 0x16E018u;
label_16e018:
    // 0x16e018: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16e018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16e01c:
    // 0x16e01c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16e020:
    // 0x16e020: 0x10000035  b           . + 4 + (0x35 << 2)
label_16e024:
    if (ctx->pc == 0x16E024u) {
        ctx->pc = 0x16E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E020u;
        // 0x16e024: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E028u;
        goto label_16e028;
    }
    ctx->pc = 0x16E020u;
    {
        const bool branch_taken_0x16e020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E020u;
        // 0x16e024: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e020) {
            ctx->pc = 0x16E0F8u;
            goto label_16e0f8;
        }
    }
    ctx->pc = 0x16E028u;
label_16e028:
    // 0x16e028: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16e02c:
    // 0x16e02c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16e030:
    if (ctx->pc == 0x16E030u) {
        ctx->pc = 0x16E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E02Cu;
        // 0x16e030: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E034u;
        goto label_16e034;
    }
    ctx->pc = 0x16E02Cu;
    {
        const bool branch_taken_0x16e02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E02Cu;
        // 0x16e030: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e02c) {
            ctx->pc = 0x16E05Cu;
            goto label_16e05c;
        }
    }
    ctx->pc = 0x16E034u;
label_16e034:
    // 0x16e034: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16e038:
    // 0x16e038: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16e038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16e03c:
    // 0x16e03c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16e040:
    // 0x16e040: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e044:
    // 0x16e044: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e044u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16e048:
    // 0x16e048: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e04c:
    // 0x16e04c: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16e050:
    // 0x16e050: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16e050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16e054:
    // 0x16e054: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e058:
    // 0x16e058: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16e05c:
    // 0x16e05c: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_16e060:
    // 0x16e060: 0x1000002c  b           . + 4 + (0x2C << 2)
label_16e064:
    if (ctx->pc == 0x16E064u) {
        ctx->pc = 0x16E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E060u;
        // 0x16e064: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E068u;
        goto label_16e068;
    }
    ctx->pc = 0x16E060u;
    {
        const bool branch_taken_0x16e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E060u;
        // 0x16e064: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e060) {
            ctx->pc = 0x16E114u;
            goto label_16e114;
        }
    }
    ctx->pc = 0x16E068u;
label_16e068:
    // 0x16e068: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
label_16e06c:
    if (ctx->pc == 0x16E06Cu) {
        ctx->pc = 0x16E070u;
        goto label_16e070;
    }
    ctx->pc = 0x16E068u;
    {
        const bool branch_taken_0x16e068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e068) {
            ctx->pc = 0x16E0F8u;
            goto label_16e0f8;
        }
    }
    ctx->pc = 0x16E070u;
label_16e070:
    // 0x16e070: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16e074:
    // 0x16e074: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16e078:
    if (ctx->pc == 0x16E078u) {
        ctx->pc = 0x16E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E074u;
        // 0x16e078: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E07Cu;
        goto label_16e07c;
    }
    ctx->pc = 0x16E074u;
    {
        const bool branch_taken_0x16e074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E074u;
        // 0x16e078: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e074) {
            ctx->pc = 0x16E0A4u;
            goto label_16e0a4;
        }
    }
    ctx->pc = 0x16E07Cu;
label_16e07c:
    // 0x16e07c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16e080:
    // 0x16e080: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16e080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16e084:
    // 0x16e084: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16e088:
    // 0x16e088: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e08c:
    // 0x16e08c: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e08cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16e090:
    // 0x16e090: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e094:
    // 0x16e094: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16e098:
    // 0x16e098: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16e098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16e09c:
    // 0x16e09c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e0a0:
    // 0x16e0a0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16e0a4:
    // 0x16e0a4: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_16e0a8:
    // 0x16e0a8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_16e0ac:
    if (ctx->pc == 0x16E0ACu) {
        ctx->pc = 0x16E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0A8u;
        // 0x16e0ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0B0u;
        goto label_16e0b0;
    }
    ctx->pc = 0x16E0A8u;
    {
        const bool branch_taken_0x16e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0A8u;
        // 0x16e0ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0a8) {
            ctx->pc = 0x16E114u;
            goto label_16e114;
        }
    }
    ctx->pc = 0x16E0B0u;
label_16e0b0:
    // 0x16e0b0: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16e0b4:
    // 0x16e0b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_16e0b8:
    if (ctx->pc == 0x16E0B8u) {
        ctx->pc = 0x16E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0B4u;
        // 0x16e0b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0BCu;
        goto label_16e0bc;
    }
    ctx->pc = 0x16E0B4u;
    {
        const bool branch_taken_0x16e0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0B4u;
        // 0x16e0b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0b4) {
            ctx->pc = 0x16E0E8u;
            goto label_16e0e8;
        }
    }
    ctx->pc = 0x16E0BCu;
label_16e0bc:
    // 0x16e0bc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e0c0:
    // 0x16e0c0: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16e0c4:
    // 0x16e0c4: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16e0c8:
    // 0x16e0c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16e0cc:
    // 0x16e0cc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e0d0:
    // 0x16e0d0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16e0d4:
    // 0x16e0d4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e0d8:
    // 0x16e0d8: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16e0dc:
    // 0x16e0dc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16e0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16e0e0:
    // 0x16e0e0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e0e4:
    // 0x16e0e4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16e0e8:
    // 0x16e0e8: 0xc05b5ac  jal         func_16D6B0
label_16e0ec:
    if (ctx->pc == 0x16E0ECu) {
        ctx->pc = 0x16E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0E8u;
        // 0x16e0ec: 0xaf8086fc  sw          $zero, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0F0u;
        goto label_16e0f0;
    }
    ctx->pc = 0x16E0E8u;
    SET_GPR_U32(ctx, 31, 0x16E0F0u);
    ctx->pc = 0x16E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0E8u;
    // 0x16e0ec: 0xaf8086fc  sw          $zero, -0x7904($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D6B0u;
    { ctx->pc = 0x16d6b0; return; }
    ctx->pc = 0x16E0F0u;
label_16e0f0:
    // 0x16e0f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_16e0f4:
    if (ctx->pc == 0x16E0F4u) {
        ctx->pc = 0x16E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0F0u;
        // 0x16e0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0F8u;
        goto label_16e0f8;
    }
    ctx->pc = 0x16E0F0u;
    {
        const bool branch_taken_0x16e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0F0u;
        // 0x16e0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0f0) {
            ctx->pc = 0x16E114u;
            goto label_16e114;
        }
    }
    ctx->pc = 0x16E0F8u;
label_16e0f8:
    // 0x16e0f8: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16e0fc:
    // 0x16e0fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e100:
    // 0x16e100: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_16e104:
    if (ctx->pc == 0x16E104u) {
        ctx->pc = 0x16E108u;
        goto label_16e108;
    }
    ctx->pc = 0x16E100u;
    {
        const bool branch_taken_0x16e100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e100) {
            ctx->pc = 0x16E110u;
            goto label_16e110;
        }
    }
    ctx->pc = 0x16E108u;
label_16e108:
    // 0x16e108: 0x10000002  b           . + 4 + (0x2 << 2)
label_16e10c:
    if (ctx->pc == 0x16E10Cu) {
        ctx->pc = 0x16E110u;
        goto label_16e110;
    }
    ctx->pc = 0x16E108u;
    {
        const bool branch_taken_0x16e108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e108) {
            ctx->pc = 0x16E114u;
            goto label_16e114;
        }
    }
    ctx->pc = 0x16E110u;
label_16e110:
    // 0x16e110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e114:
    // 0x16e114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e118:
    // 0x16e118: 0x3e00008  jr          $ra
label_16e11c:
    if (ctx->pc == 0x16E11Cu) {
        ctx->pc = 0x16E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E118u;
        // 0x16e11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E120u;
        goto label_16e120;
    }
    ctx->pc = 0x16E118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E118u;
        // 0x16e11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E120u;
label_16e120:
    // 0x16e120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e124:
    // 0x16e124: 0x288113de  slti        $at, $a0, 0x13DE
    ctx->pc = 0x16e124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5086) ? 1 : 0);
label_16e128:
    // 0x16e128: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_16e12c:
    if (ctx->pc == 0x16E12Cu) {
        ctx->pc = 0x16E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E128u;
        // 0x16e12c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E130u;
        goto label_16e130;
    }
    ctx->pc = 0x16E128u;
    {
        const bool branch_taken_0x16e128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E128u;
        // 0x16e12c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e128) {
            ctx->pc = 0x16E138u;
            goto label_16e138;
        }
    }
    ctx->pc = 0x16E130u;
label_16e130:
    // 0x16e130: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_16e134:
    if (ctx->pc == 0x16E134u) {
        ctx->pc = 0x16E138u;
        goto label_16e138;
    }
    ctx->pc = 0x16E130u;
    {
        const bool branch_taken_0x16e130 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x16e130) {
            ctx->pc = 0x16E140u;
            goto label_16e140;
        }
    }
    ctx->pc = 0x16E138u;
label_16e138:
    // 0x16e138: 0x1000004f  b           . + 4 + (0x4F << 2)
label_16e13c:
    if (ctx->pc == 0x16E13Cu) {
        ctx->pc = 0x16E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E138u;
        // 0x16e13c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E140u;
        goto label_16e140;
    }
    ctx->pc = 0x16E138u;
    {
        const bool branch_taken_0x16e138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E138u;
        // 0x16e13c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e138) {
            ctx->pc = 0x16E278u;
            goto label_16e278;
        }
    }
    ctx->pc = 0x16E140u;
label_16e140:
    // 0x16e140: 0x8f828184  lw          $v0, -0x7E7C($gp)
    ctx->pc = 0x16e140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
label_16e144:
    // 0x16e144: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_16e148:
    if (ctx->pc == 0x16E148u) {
        ctx->pc = 0x16E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E144u;
        // 0x16e148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E14Cu;
        goto label_16e14c;
    }
    ctx->pc = 0x16E144u;
    {
        const bool branch_taken_0x16e144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x16E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E144u;
        // 0x16e148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e144) {
            ctx->pc = 0x16E154u;
            goto label_16e154;
        }
    }
    ctx->pc = 0x16E14Cu;
label_16e14c:
    // 0x16e14c: 0x1000004b  b           . + 4 + (0x4B << 2)
label_16e150:
    if (ctx->pc == 0x16E150u) {
        ctx->pc = 0x16E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E14Cu;
        // 0x16e150: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E154u;
        goto label_16e154;
    }
    ctx->pc = 0x16E14Cu;
    {
        const bool branch_taken_0x16e14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E14Cu;
        // 0x16e150: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e14c) {
            ctx->pc = 0x16E27Cu;
            goto label_16e27c;
        }
    }
    ctx->pc = 0x16E154u;
label_16e154:
    // 0x16e154: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16e158:
    // 0x16e158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e15c:
    // 0x16e15c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_16e160:
    if (ctx->pc == 0x16E160u) {
        ctx->pc = 0x16E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E15Cu;
        // 0x16e160: 0xaf848184  sw          $a0, -0x7E7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934916), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E164u;
        goto label_16e164;
    }
    ctx->pc = 0x16E15Cu;
    {
        const bool branch_taken_0x16e15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E15Cu;
        // 0x16e160: 0xaf848184  sw          $a0, -0x7E7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934916), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e15c) {
            ctx->pc = 0x16E170u;
            goto label_16e170;
        }
    }
    ctx->pc = 0x16E164u;
label_16e164:
    // 0x16e164: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e168:
    // 0x16e168: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_16e16c:
    if (ctx->pc == 0x16E16Cu) {
        ctx->pc = 0x16E170u;
        goto label_16e170;
    }
    ctx->pc = 0x16E168u;
    {
        const bool branch_taken_0x16e168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e168) {
            ctx->pc = 0x16E184u;
            goto label_16e184;
        }
    }
    ctx->pc = 0x16E170u;
label_16e170:
    // 0x16e170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e174:
    // 0x16e174: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e178:
    // 0x16e178: 0xaf8386fc  sw          $v1, -0x7904($gp)
    ctx->pc = 0x16e178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 3));
label_16e17c:
    // 0x16e17c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_16e180:
    if (ctx->pc == 0x16E180u) {
        ctx->pc = 0x16E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E17Cu;
        // 0x16e180: 0xaf828700  sw          $v0, -0x7900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E184u;
        goto label_16e184;
    }
    ctx->pc = 0x16E17Cu;
    {
        const bool branch_taken_0x16e17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E17Cu;
        // 0x16e180: 0xaf828700  sw          $v0, -0x7900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e17c) {
            ctx->pc = 0x16E278u;
            goto label_16e278;
        }
    }
    ctx->pc = 0x16E184u;
label_16e184:
    // 0x16e184: 0xc05aef0  jal         func_16BBC0
label_16e188:
    if (ctx->pc == 0x16E188u) {
        ctx->pc = 0x16E18Cu;
        goto label_16e18c;
    }
    ctx->pc = 0x16E184u;
    SET_GPR_U32(ctx, 31, 0x16E18Cu);
    ctx->pc = 0x16BBC0u;
    { ctx->pc = 0x16bbc0; return; }
    ctx->pc = 0x16E18Cu;
label_16e18c:
    // 0x16e18c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16e18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_16e190:
    // 0x16e190: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_16e194:
    if (ctx->pc == 0x16E194u) {
        ctx->pc = 0x16E198u;
        goto label_16e198;
    }
    ctx->pc = 0x16E190u;
    {
        const bool branch_taken_0x16e190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e190) {
            ctx->pc = 0x16E1D4u;
            goto label_16e1d4;
        }
    }
    ctx->pc = 0x16E198u;
label_16e198:
    // 0x16e198: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16e19c:
    // 0x16e19c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_16e1a0:
    if (ctx->pc == 0x16E1A0u) {
        ctx->pc = 0x16E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E19Cu;
        // 0x16e1a0: 0xaf808180  sw          $zero, -0x7E80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1A4u;
        goto label_16e1a4;
    }
    ctx->pc = 0x16E19Cu;
    {
        const bool branch_taken_0x16e19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E19Cu;
        // 0x16e1a0: 0xaf808180  sw          $zero, -0x7E80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e19c) {
            ctx->pc = 0x16E1DCu;
            goto label_16e1dc;
        }
    }
    ctx->pc = 0x16E1A4u;
label_16e1a4:
    // 0x16e1a4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e1a8:
    // 0x16e1a8: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x16e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_16e1ac:
    // 0x16e1ac: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16e1b0:
    // 0x16e1b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16e1b4:
    // 0x16e1b4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e1b8:
    // 0x16e1b8: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16e1bc:
    // 0x16e1bc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e1c0:
    // 0x16e1c0: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16e1c4:
    // 0x16e1c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x16e1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_16e1c8:
    // 0x16e1c8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e1cc:
    // 0x16e1cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_16e1d0:
    if (ctx->pc == 0x16E1D0u) {
        ctx->pc = 0x16E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1CCu;
        // 0x16e1d0: 0xac221eb0  sw          $v0, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1D4u;
        goto label_16e1d4;
    }
    ctx->pc = 0x16E1CCu;
    {
        const bool branch_taken_0x16e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1CCu;
        // 0x16e1d0: 0xac221eb0  sw          $v0, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1cc) {
            ctx->pc = 0x16E1DCu;
            goto label_16e1dc;
        }
    }
    ctx->pc = 0x16E1D4u;
label_16e1d4:
    // 0x16e1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e1d8:
    // 0x16e1d8: 0xaf828180  sw          $v0, -0x7E80($gp)
    ctx->pc = 0x16e1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934912), GPR_U32(ctx, 2));
label_16e1dc:
    // 0x16e1dc: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16e1e0:
    // 0x16e1e0: 0x2c42007f  sltiu       $v0, $v0, 0x7F
    ctx->pc = 0x16e1e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16e1e4:
    // 0x16e1e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_16e1e8:
    if (ctx->pc == 0x16E1E8u) {
        ctx->pc = 0x16E1ECu;
        goto label_16e1ec;
    }
    ctx->pc = 0x16E1E4u;
    {
        const bool branch_taken_0x16e1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e1e4) {
            ctx->pc = 0x16E210u;
            goto label_16e210;
        }
    }
    ctx->pc = 0x16E1ECu;
label_16e1ec:
    // 0x16e1ec: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16e1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16e1f0:
    // 0x16e1f0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16e1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16e1f4:
    // 0x16e1f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16e1f8:
    // 0x16e1f8: 0xc08d61c  jal         func_235870
label_16e1fc:
    if (ctx->pc == 0x16E1FCu) {
        ctx->pc = 0x16E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1F8u;
        // 0x16e1fc: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E200u;
        goto label_16e200;
    }
    ctx->pc = 0x16E1F8u;
    SET_GPR_U32(ctx, 31, 0x16E200u);
    ctx->pc = 0x16E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E1F8u;
    // 0x16e1fc: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16E200u;
label_16e200:
    // 0x16e200: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16e200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16e204:
    // 0x16e204: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16e208:
    if (ctx->pc == 0x16E208u) {
        ctx->pc = 0x16E20Cu;
        goto label_16e20c;
    }
    ctx->pc = 0x16E204u;
    {
        const bool branch_taken_0x16e204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e204) {
            ctx->pc = 0x16E1ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e1ec;
        }
    }
    ctx->pc = 0x16E20Cu;
label_16e20c:
    // 0x16e20c: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16e20cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16e210:
    // 0x16e210: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16e214:
    // 0x16e214: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16e214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16e218:
    // 0x16e218: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0
    ctx->pc = 0x16e218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
label_16e21c:
    // 0x16e21c: 0x3c032a07  lui         $v1, 0x2A07
    ctx->pc = 0x16e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10759 << 16));
label_16e220:
    // 0x16e220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16e224:
    // 0x16e224: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_16e228:
    // 0x16e228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16e228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_16e22c:
    // 0x16e22c: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16e230:
    // 0x16e230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16e234:
    // 0x16e234: 0xaf828710  sw          $v0, -0x78F0($gp)
    ctx->pc = 0x16e234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 2));
label_16e238:
    // 0x16e238: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16e238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16e23c:
    // 0x16e23c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_16e240:
    if (ctx->pc == 0x16E240u) {
        ctx->pc = 0x16E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E23Cu;
        // 0x16e240: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E244u;
        goto label_16e244;
    }
    ctx->pc = 0x16E23Cu;
    {
        const bool branch_taken_0x16e23c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E23Cu;
        // 0x16e240: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e23c) {
            ctx->pc = 0x16E260u;
            goto label_16e260;
        }
    }
    ctx->pc = 0x16E244u;
label_16e244:
    // 0x16e244: 0xc08d61c  jal         func_235870
label_16e248:
    if (ctx->pc == 0x16E248u) {
        ctx->pc = 0x16E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E244u;
        // 0x16e248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E24Cu;
        goto label_16e24c;
    }
    ctx->pc = 0x16E244u;
    SET_GPR_U32(ctx, 31, 0x16E24Cu);
    ctx->pc = 0x16E248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E244u;
    // 0x16e248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16E24Cu;
label_16e24c:
    // 0x16e24c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16e250:
    // 0x16e250: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_16e254:
    if (ctx->pc == 0x16E254u) {
        ctx->pc = 0x16E258u;
        goto label_16e258;
    }
    ctx->pc = 0x16E250u;
    {
        const bool branch_taken_0x16e250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e250) {
            ctx->pc = 0x16E25Cu;
            goto label_16e25c;
        }
    }
    ctx->pc = 0x16E258u;
label_16e258:
    // 0x16e258: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16e258u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16e25c:
    // 0x16e25c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e260:
    // 0x16e260: 0xc05b5ac  jal         func_16D6B0
label_16e264:
    if (ctx->pc == 0x16E264u) {
        ctx->pc = 0x16E268u;
        goto label_16e268;
    }
    ctx->pc = 0x16E260u;
    SET_GPR_U32(ctx, 31, 0x16E268u);
    ctx->pc = 0x16D6B0u;
    { ctx->pc = 0x16d6b0; return; }
    ctx->pc = 0x16E268u;
label_16e268:
    // 0x16e268: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16e268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e26c:
    // 0x16e26c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e270:
    // 0x16e270: 0xaf8386fc  sw          $v1, -0x7904($gp)
    ctx->pc = 0x16e270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 3));
label_16e274:
    // 0x16e274: 0xaf828700  sw          $v0, -0x7900($gp)
    ctx->pc = 0x16e274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
label_16e278:
    // 0x16e278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e27c:
    // 0x16e27c: 0x3e00008  jr          $ra
label_16e280:
    if (ctx->pc == 0x16E280u) {
        ctx->pc = 0x16E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E27Cu;
        // 0x16e280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E284u;
        goto label_16e284;
    }
    ctx->pc = 0x16E27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E27Cu;
        // 0x16e280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E284u;
label_16e284:
    // 0x16e284: 0x0  nop
    ctx->pc = 0x16e284u;
    // NOP
label_16e288:
    // 0x16e288: 0x0  nop
    ctx->pc = 0x16e288u;
    // NOP
label_16e28c:
    // 0x16e28c: 0x0  nop
    ctx->pc = 0x16e28cu;
    // NOP
label_16e290:
    // 0x16e290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16e294:
    // 0x16e294: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x16e294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_16e298:
    // 0x16e298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16e29c:
    // 0x16e29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16e2a0:
    // 0x16e2a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16e2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e2a4:
    // 0x16e2a4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x16e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_16e2a8:
    // 0x16e2a8: 0xc08e93e  jal         func_23A4F8
label_16e2ac:
    if (ctx->pc == 0x16E2ACu) {
        ctx->pc = 0x16E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2A8u;
        // 0x16e2ac: 0x24841ec0  addiu       $a0, $a0, 0x1EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2B0u;
        goto label_16e2b0;
    }
    ctx->pc = 0x16E2A8u;
    SET_GPR_U32(ctx, 31, 0x16E2B0u);
    ctx->pc = 0x16E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E2A8u;
    // 0x16e2ac: 0x24841ec0  addiu       $a0, $a0, 0x1EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x16E2B0u;
label_16e2b0:
    // 0x16e2b0: 0xaf908718  sw          $s0, -0x78E8($gp)
    ctx->pc = 0x16e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U32(ctx, 16));
label_16e2b4:
    // 0x16e2b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e2b8:
    // 0x16e2b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e2b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16e2bc:
    // 0x16e2bc: 0x3e00008  jr          $ra
label_16e2c0:
    if (ctx->pc == 0x16E2C0u) {
        ctx->pc = 0x16E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2BCu;
        // 0x16e2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2C4u;
        goto label_16e2c4;
    }
    ctx->pc = 0x16E2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2BCu;
        // 0x16e2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E2C4u;
label_16e2c4:
    // 0x16e2c4: 0x0  nop
    ctx->pc = 0x16e2c4u;
    // NOP
label_16e2c8:
    // 0x16e2c8: 0x0  nop
    ctx->pc = 0x16e2c8u;
    // NOP
label_16e2cc:
    // 0x16e2cc: 0x0  nop
    ctx->pc = 0x16e2ccu;
    // NOP
label_16e2d0:
    // 0x16e2d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16e2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_16e2d4:
    // 0x16e2d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x16e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_16e2d8:
    // 0x16e2d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16e2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_16e2dc:
    // 0x16e2dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16e2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_16e2e0:
    // 0x16e2e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16e2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_16e2e4:
    // 0x16e2e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16e2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16e2e8:
    // 0x16e2e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16e2ec:
    // 0x16e2ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16e2f0:
    // 0x16e2f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16e2f4:
    // 0x16e2f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16e2f8:
    // 0x16e2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16e2fc:
    // 0x16e2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16e2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e300:
    // 0x16e300: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x16e300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
label_16e304:
    // 0x16e304: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x16e304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_16e308:
    // 0x16e308: 0xafa600a8  sw          $a2, 0xA8($sp)
    ctx->pc = 0x16e308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
label_16e30c:
    // 0x16e30c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16e310:
    if (ctx->pc == 0x16E310u) {
        ctx->pc = 0x16E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E30Cu;
        // 0x16e310: 0xafa700a4  sw          $a3, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E314u;
        goto label_16e314;
    }
    ctx->pc = 0x16E30Cu;
    {
        const bool branch_taken_0x16e30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E30Cu;
        // 0x16e310: 0xafa700a4  sw          $a3, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e30c) {
            ctx->pc = 0x16E31Cu;
            goto label_16e31c;
        }
    }
    ctx->pc = 0x16E314u;
label_16e314:
    // 0x16e314: 0x100002df  b           . + 4 + (0x2DF << 2)
label_16e318:
    if (ctx->pc == 0x16E318u) {
        ctx->pc = 0x16E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E314u;
        // 0x16e318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E31Cu;
        goto label_16e31c;
    }
    ctx->pc = 0x16E314u;
    {
        const bool branch_taken_0x16e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E314u;
        // 0x16e318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e314) {
            ctx->pc = 0x16EE94u;
            { ctx->pc = 0x16ee94; return; }
        }
    }
    ctx->pc = 0x16E31Cu;
label_16e31c:
    // 0x16e31c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x16e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_16e320:
    // 0x16e320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e324:
    // 0x16e324: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
label_16e328:
    if (ctx->pc == 0x16E328u) {
        ctx->pc = 0x16E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E324u;
        // 0x16e328: 0x8f96816c  lw          $s6, -0x7E94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E32Cu;
        goto label_16e32c;
    }
    ctx->pc = 0x16E324u;
    {
        const bool branch_taken_0x16e324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E324u;
        // 0x16e328: 0x8f96816c  lw          $s6, -0x7E94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e324) {
            ctx->pc = 0x16E418u;
            goto label_16e418;
        }
    }
    ctx->pc = 0x16E32Cu;
label_16e32c:
    // 0x16e32c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16e330:
    if (ctx->pc == 0x16E330u) {
        ctx->pc = 0x16E334u;
        goto label_16e334;
    }
    ctx->pc = 0x16E32Cu;
    {
        const bool branch_taken_0x16e32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e32c) {
            ctx->pc = 0x16E33Cu;
            goto label_16e33c;
        }
    }
    ctx->pc = 0x16E334u;
label_16e334:
    // 0x16e334: 0x1000007f  b           . + 4 + (0x7F << 2)
label_16e338:
    if (ctx->pc == 0x16E338u) {
        ctx->pc = 0x16E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E334u;
        // 0x16e338: 0x2e010008  sltiu       $at, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E33Cu;
        goto label_16e33c;
    }
    ctx->pc = 0x16E334u;
    {
        const bool branch_taken_0x16e334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E334u;
        // 0x16e338: 0x2e010008  sltiu       $at, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e334) {
            ctx->pc = 0x16E534u;
            goto label_16e534;
        }
    }
    ctx->pc = 0x16E33Cu;
label_16e33c:
    // 0x16e33c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16e340:
    // 0x16e340: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x16e340u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_16e344:
    // 0x16e344: 0x2442e2d8  addiu       $v0, $v0, -0x1D28
    ctx->pc = 0x16e344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959832));
label_16e348:
    // 0x16e348: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x16e348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_16e34c:
    // 0x16e34c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e350:
    // 0x16e350: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e354:
    // 0x16e354: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e358:
    if (ctx->pc == 0x16E358u) {
        ctx->pc = 0x16E35Cu;
        goto label_16e35c;
    }
    ctx->pc = 0x16E354u;
    {
        const bool branch_taken_0x16e354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e354) {
            ctx->pc = 0x16E364u;
            goto label_16e364;
        }
    }
    ctx->pc = 0x16E35Cu;
label_16e35c:
    // 0x16e35c: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e360:
    if (ctx->pc == 0x16E360u) {
        ctx->pc = 0x16E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E35Cu;
        // 0x16e360: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E364u;
        goto label_16e364;
    }
    ctx->pc = 0x16E35Cu;
    {
        const bool branch_taken_0x16e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E35Cu;
        // 0x16e360: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e35c) {
            ctx->pc = 0x16E37Cu;
            goto label_16e37c;
        }
    }
    ctx->pc = 0x16E364u;
label_16e364:
    // 0x16e364: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e368:
    // 0x16e368: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e36c:
    // 0x16e36c: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e370:
    // 0x16e370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e374:
    // 0x16e374: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16e374u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e378:
    // 0x16e378: 0x0  nop
    ctx->pc = 0x16e378u;
    // NOP
label_16e37c:
    // 0x16e37c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e380:
    // 0x16e380: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e384:
    if (ctx->pc == 0x16E384u) {
        ctx->pc = 0x16E388u;
        goto label_16e388;
    }
    ctx->pc = 0x16E380u;
    {
        const bool branch_taken_0x16e380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e380) {
            ctx->pc = 0x16E390u;
            goto label_16e390;
        }
    }
    ctx->pc = 0x16E388u;
label_16e388:
    // 0x16e388: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e38c:
    if (ctx->pc == 0x16E38Cu) {
        ctx->pc = 0x16E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E388u;
        // 0x16e38c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E390u;
        goto label_16e390;
    }
    ctx->pc = 0x16E388u;
    {
        const bool branch_taken_0x16e388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E388u;
        // 0x16e38c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e388) {
            ctx->pc = 0x16E3A8u;
            goto label_16e3a8;
        }
    }
    ctx->pc = 0x16E390u;
label_16e390:
    // 0x16e390: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e394:
    // 0x16e394: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e398:
    // 0x16e398: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e39c:
    // 0x16e39c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e3a0:
    // 0x16e3a0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16e3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e3a4:
    // 0x16e3a4: 0x0  nop
    ctx->pc = 0x16e3a4u;
    // NOP
label_16e3a8:
    // 0x16e3a8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16e3ac:
    // 0x16e3ac: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e3b0:
    // 0x16e3b0: 0x2463e2c8  addiu       $v1, $v1, -0x1D38
    ctx->pc = 0x16e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959816));
label_16e3b4:
    // 0x16e3b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16e3b8:
    // 0x16e3b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e3bc:
    // 0x16e3bc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e3c0:
    if (ctx->pc == 0x16E3C0u) {
        ctx->pc = 0x16E3C4u;
        goto label_16e3c4;
    }
    ctx->pc = 0x16E3BCu;
    {
        const bool branch_taken_0x16e3bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e3bc) {
            ctx->pc = 0x16E3CCu;
            goto label_16e3cc;
        }
    }
    ctx->pc = 0x16E3C4u;
label_16e3c4:
    // 0x16e3c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e3c8:
    if (ctx->pc == 0x16E3C8u) {
        ctx->pc = 0x16E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3C4u;
        // 0x16e3c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E3CCu;
        goto label_16e3cc;
    }
    ctx->pc = 0x16E3C4u;
    {
        const bool branch_taken_0x16e3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3C4u;
        // 0x16e3c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e3c4) {
            ctx->pc = 0x16E3E4u;
            goto label_16e3e4;
        }
    }
    ctx->pc = 0x16E3CCu;
label_16e3cc:
    // 0x16e3cc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e3d0:
    // 0x16e3d0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e3d4:
    // 0x16e3d4: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e3d8:
    // 0x16e3d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e3dc:
    // 0x16e3dc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16e3dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e3e0:
    // 0x16e3e0: 0x0  nop
    ctx->pc = 0x16e3e0u;
    // NOP
label_16e3e4:
    // 0x16e3e4: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e3e8:
    // 0x16e3e8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e3ec:
    if (ctx->pc == 0x16E3ECu) {
        ctx->pc = 0x16E3F0u;
        goto label_16e3f0;
    }
    ctx->pc = 0x16E3E8u;
    {
        const bool branch_taken_0x16e3e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e3e8) {
            ctx->pc = 0x16E3F8u;
            goto label_16e3f8;
        }
    }
    ctx->pc = 0x16E3F0u;
label_16e3f0:
    // 0x16e3f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e3f4:
    if (ctx->pc == 0x16E3F4u) {
        ctx->pc = 0x16E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3F0u;
        // 0x16e3f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E3F8u;
        goto label_16e3f8;
    }
    ctx->pc = 0x16E3F0u;
    {
        const bool branch_taken_0x16e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3F0u;
        // 0x16e3f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e3f0) {
            ctx->pc = 0x16E410u;
            goto label_16e410;
        }
    }
    ctx->pc = 0x16E3F8u;
label_16e3f8:
    // 0x16e3f8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e3fc:
    // 0x16e3fc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e400:
    // 0x16e400: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e404:
    // 0x16e404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e408:
    // 0x16e408: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16e408u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e40c:
    // 0x16e40c: 0x0  nop
    ctx->pc = 0x16e40cu;
    // NOP
label_16e410:
    // 0x16e410: 0x10000253  b           . + 4 + (0x253 << 2)
label_16e414:
    if (ctx->pc == 0x16E414u) {
        ctx->pc = 0x16E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E410u;
        // 0x16e414: 0x1312c2  srl         $v0, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E418u;
        goto label_16e418;
    }
    ctx->pc = 0x16E410u;
    {
        const bool branch_taken_0x16e410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E410u;
        // 0x16e414: 0x1312c2  srl         $v0, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e410) {
            ctx->pc = 0x16ED60u;
            { ctx->pc = 0x16ed60; return; }
        }
    }
    ctx->pc = 0x16E418u;
label_16e418:
    // 0x16e418: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_16e41c:
    if (ctx->pc == 0x16E41Cu) {
        ctx->pc = 0x16E420u;
        goto label_16e420;
    }
    ctx->pc = 0x16E418u;
    {
        const bool branch_taken_0x16e418 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e418) {
            ctx->pc = 0x16E444u;
            goto label_16e444;
        }
    }
    ctx->pc = 0x16E420u;
label_16e420:
    // 0x16e420: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16e420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_16e424:
    // 0x16e424: 0x8c315990  lw          $s1, 0x5990($at)
    ctx->pc = 0x16e424u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22928)));
label_16e428:
    // 0x16e428: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16e428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_16e42c:
    // 0x16e42c: 0x8c325998  lw          $s2, 0x5998($at)
    ctx->pc = 0x16e42cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22936)));
label_16e430:
    // 0x16e430: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16e430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_16e434:
    // 0x16e434: 0x8c345180  lw          $s4, 0x5180($at)
    ctx->pc = 0x16e434u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20864)));
label_16e438:
    // 0x16e438: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16e438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_16e43c:
    // 0x16e43c: 0x10000247  b           . + 4 + (0x247 << 2)
label_16e440:
    if (ctx->pc == 0x16E440u) {
        ctx->pc = 0x16E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E43Cu;
        // 0x16e440: 0x8c335188  lw          $s3, 0x5188($at) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E444u;
        goto label_16e444;
    }
    ctx->pc = 0x16E43Cu;
    {
        const bool branch_taken_0x16e43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E43Cu;
        // 0x16e440: 0x8c335188  lw          $s3, 0x5188($at) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e43c) {
            ctx->pc = 0x16ED5Cu;
            { ctx->pc = 0x16ed5c; return; }
        }
    }
    ctx->pc = 0x16E444u;
label_16e444:
    // 0x16e444: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16e444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16e448:
    // 0x16e448: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16e448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_16e44c:
    // 0x16e44c: 0x24421ebc  addiu       $v0, $v0, 0x1EBC
    ctx->pc = 0x16e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7868));
label_16e450:
    // 0x16e450: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x16e450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_16e454:
    // 0x16e454: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x16e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e458:
    // 0x16e458: 0x8c22c9c4  lw          $v0, -0x363C($at)
    ctx->pc = 0x16e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953412)));
label_16e45c:
    // 0x16e45c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_16e460:
    if (ctx->pc == 0x16E460u) {
        ctx->pc = 0x16E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E45Cu;
        // 0x16e460: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E464u;
        goto label_16e464;
    }
    ctx->pc = 0x16E45Cu;
    {
        const bool branch_taken_0x16e45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E45Cu;
        // 0x16e460: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e45c) {
            ctx->pc = 0x16E4C0u;
            goto label_16e4c0;
        }
    }
    ctx->pc = 0x16E464u;
label_16e464:
    // 0x16e464: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x16e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_16e468:
    // 0x16e468: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16e46c:
    if (ctx->pc == 0x16E46Cu) {
        ctx->pc = 0x16E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E468u;
        // 0x16e46c: 0x8f968170  lw          $s6, -0x7E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E470u;
        goto label_16e470;
    }
    ctx->pc = 0x16E468u;
    {
        const bool branch_taken_0x16e468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E468u;
        // 0x16e46c: 0x8f968170  lw          $s6, -0x7E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e468) {
            ctx->pc = 0x16E498u;
            goto label_16e498;
        }
    }
    ctx->pc = 0x16E470u;
label_16e470:
    // 0x16e470: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16e470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16e474:
    // 0x16e474: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x16e474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e478:
    // 0x16e478: 0x2442efd0  addiu       $v0, $v0, -0x1030
    ctx->pc = 0x16e478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963152));
label_16e47c:
    // 0x16e47c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e480:
    // 0x16e480: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16e480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16e484:
    // 0x16e484: 0x2442efd4  addiu       $v0, $v0, -0x102C
    ctx->pc = 0x16e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963156));
label_16e488:
    // 0x16e488: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e48c:
    // 0x16e48c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16e48cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e490:
    // 0x16e490: 0x10000022  b           . + 4 + (0x22 << 2)
label_16e494:
    if (ctx->pc == 0x16E494u) {
        ctx->pc = 0x16E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E490u;
        // 0x16e494: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E498u;
        goto label_16e498;
    }
    ctx->pc = 0x16E490u;
    {
        const bool branch_taken_0x16e490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E490u;
        // 0x16e494: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e490) {
            ctx->pc = 0x16E51Cu;
            goto label_16e51c;
        }
    }
    ctx->pc = 0x16E498u;
label_16e498:
    // 0x16e498: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16e498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16e49c:
    // 0x16e49c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x16e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e4a0:
    // 0x16e4a0: 0x2442e300  addiu       $v0, $v0, -0x1D00
    ctx->pc = 0x16e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959872));
label_16e4a4:
    // 0x16e4a4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e4a8:
    // 0x16e4a8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16e4ac:
    // 0x16e4ac: 0x2442e304  addiu       $v0, $v0, -0x1CFC
    ctx->pc = 0x16e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959876));
label_16e4b0:
    // 0x16e4b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e4b4:
    // 0x16e4b4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16e4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e4b8:
    // 0x16e4b8: 0x10000018  b           . + 4 + (0x18 << 2)
label_16e4bc:
    if (ctx->pc == 0x16E4BCu) {
        ctx->pc = 0x16E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4B8u;
        // 0x16e4bc: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4C0u;
        goto label_16e4c0;
    }
    ctx->pc = 0x16E4B8u;
    {
        const bool branch_taken_0x16e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4B8u;
        // 0x16e4bc: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4b8) {
            ctx->pc = 0x16E51Cu;
            goto label_16e51c;
        }
    }
    ctx->pc = 0x16E4C0u;
label_16e4c0:
    // 0x16e4c0: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x16e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_16e4c4:
    // 0x16e4c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16e4c8:
    if (ctx->pc == 0x16E4C8u) {
        ctx->pc = 0x16E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4C4u;
        // 0x16e4c8: 0x8f968174  lw          $s6, -0x7E8C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4CCu;
        goto label_16e4cc;
    }
    ctx->pc = 0x16E4C4u;
    {
        const bool branch_taken_0x16e4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4C4u;
        // 0x16e4c8: 0x8f968174  lw          $s6, -0x7E8C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4c4) {
            ctx->pc = 0x16E4F4u;
            goto label_16e4f4;
        }
    }
    ctx->pc = 0x16E4CCu;
label_16e4cc:
    // 0x16e4cc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16e4d0:
    // 0x16e4d0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x16e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e4d4:
    // 0x16e4d4: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x16e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
label_16e4d8:
    // 0x16e4d8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e4dc:
    // 0x16e4dc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16e4e0:
    // 0x16e4e0: 0x244205f4  addiu       $v0, $v0, 0x5F4
    ctx->pc = 0x16e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1524));
label_16e4e4:
    // 0x16e4e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e4e8:
    // 0x16e4e8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16e4e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e4ec:
    // 0x16e4ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_16e4f0:
    if (ctx->pc == 0x16E4F0u) {
        ctx->pc = 0x16E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4ECu;
        // 0x16e4f0: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4F4u;
        goto label_16e4f4;
    }
    ctx->pc = 0x16E4ECu;
    {
        const bool branch_taken_0x16e4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4ECu;
        // 0x16e4f0: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4ec) {
            ctx->pc = 0x16E51Cu;
            goto label_16e51c;
        }
    }
    ctx->pc = 0x16E4F4u;
label_16e4f4:
    // 0x16e4f4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16e4f8:
    // 0x16e4f8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x16e4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16e4fc:
    // 0x16e4fc: 0x2442f920  addiu       $v0, $v0, -0x6E0
    ctx->pc = 0x16e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965536));
label_16e500:
    // 0x16e500: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16e500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e504:
    // 0x16e504: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16e504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16e508:
    // 0x16e508: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x16e508u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e50c:
    // 0x16e50c: 0x2442f924  addiu       $v0, $v0, -0x6DC
    ctx->pc = 0x16e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965540));
label_16e510:
    // 0x16e510: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e514:
    // 0x16e514: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16e514u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e518:
    // 0x16e518: 0x0  nop
    ctx->pc = 0x16e518u;
    // NOP
label_16e51c:
    // 0x16e51c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e520:
    // 0x16e520: 0x8c34e2f0  lw          $s4, -0x1D10($at)
    ctx->pc = 0x16e520u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959856)));
label_16e524:
    // 0x16e524: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e528:
    // 0x16e528: 0x1000020c  b           . + 4 + (0x20C << 2)
label_16e52c:
    if (ctx->pc == 0x16E52Cu) {
        ctx->pc = 0x16E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E528u;
        // 0x16e52c: 0x8c33e2f4  lw          $s3, -0x1D0C($at) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E530u;
        goto label_16e530;
    }
    ctx->pc = 0x16E528u;
    {
        const bool branch_taken_0x16e528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E528u;
        // 0x16e52c: 0x8c33e2f4  lw          $s3, -0x1D0C($at) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e528) {
            ctx->pc = 0x16ED5Cu;
            { ctx->pc = 0x16ed5c; return; }
        }
    }
    ctx->pc = 0x16E530u;
label_16e530:
    // 0x16e530: 0x2e010008  sltiu       $at, $s0, 0x8
    ctx->pc = 0x16e530u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_16e534:
    // 0x16e534: 0x10200207  beqz        $at, . + 4 + (0x207 << 2)
label_16e538:
    if (ctx->pc == 0x16E538u) {
        ctx->pc = 0x16E53Cu;
        goto label_16e53c;
    }
    ctx->pc = 0x16E534u;
    {
        const bool branch_taken_0x16e534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e534) {
            ctx->pc = 0x16ED54u;
            { ctx->pc = 0x16ed54; return; }
        }
    }
    ctx->pc = 0x16E53Cu;
label_16e53c:
    // 0x16e53c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x16e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_16e540:
    // 0x16e540: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x16e540u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_16e544:
    // 0x16e544: 0x24639670  addiu       $v1, $v1, -0x6990
    ctx->pc = 0x16e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940272));
label_16e548:
    // 0x16e548: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16e548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_16e54c:
    // 0x16e54c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e550:
    // 0x16e550: 0x600008  jr          $v1
label_16e554:
    if (ctx->pc == 0x16E554u) {
        ctx->pc = 0x16E558u;
        goto label_16e558;
    }
    ctx->pc = 0x16E550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E558u: goto label_16e558;
            case 0x16E630u: goto label_16e630;
            case 0x16E7E0u: { ctx->pc = 0x16e7e0; return; }
            case 0x16E9B0u: { ctx->pc = 0x16e9b0; return; }
            case 0x16EA90u: { ctx->pc = 0x16ea90; return; }
            case 0x16EC64u: { ctx->pc = 0x16ec64; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E550u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16E558u;
label_16e558:
    // 0x16e558: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16e558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16e55c:
    // 0x16e55c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e560:
    // 0x16e560: 0x2463e2b0  addiu       $v1, $v1, -0x1D50
    ctx->pc = 0x16e560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959792));
label_16e564:
    // 0x16e564: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16e564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16e568:
    // 0x16e568: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e56c:
    // 0x16e56c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e570:
    if (ctx->pc == 0x16E570u) {
        ctx->pc = 0x16E574u;
        goto label_16e574;
    }
    ctx->pc = 0x16E56Cu;
    {
        const bool branch_taken_0x16e56c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e56c) {
            ctx->pc = 0x16E57Cu;
            goto label_16e57c;
        }
    }
    ctx->pc = 0x16E574u;
label_16e574:
    // 0x16e574: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e578:
    if (ctx->pc == 0x16E578u) {
        ctx->pc = 0x16E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E574u;
        // 0x16e578: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E57Cu;
        goto label_16e57c;
    }
    ctx->pc = 0x16E574u;
    {
        const bool branch_taken_0x16e574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E574u;
        // 0x16e578: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e574) {
            ctx->pc = 0x16E594u;
            goto label_16e594;
        }
    }
    ctx->pc = 0x16E57Cu;
label_16e57c:
    // 0x16e57c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e580:
    // 0x16e580: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e584:
    // 0x16e584: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e588:
    // 0x16e588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e58c:
    // 0x16e58c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16e58cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e590:
    // 0x16e590: 0x0  nop
    ctx->pc = 0x16e590u;
    // NOP
label_16e594:
    // 0x16e594: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e598:
    // 0x16e598: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e59c:
    if (ctx->pc == 0x16E59Cu) {
        ctx->pc = 0x16E5A0u;
        goto label_16e5a0;
    }
    ctx->pc = 0x16E598u;
    {
        const bool branch_taken_0x16e598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e598) {
            ctx->pc = 0x16E5A8u;
            goto label_16e5a8;
        }
    }
    ctx->pc = 0x16E5A0u;
label_16e5a0:
    // 0x16e5a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e5a4:
    if (ctx->pc == 0x16E5A4u) {
        ctx->pc = 0x16E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5A0u;
        // 0x16e5a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5A8u;
        goto label_16e5a8;
    }
    ctx->pc = 0x16E5A0u;
    {
        const bool branch_taken_0x16e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5A0u;
        // 0x16e5a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5a0) {
            ctx->pc = 0x16E5C0u;
            goto label_16e5c0;
        }
    }
    ctx->pc = 0x16E5A8u;
label_16e5a8:
    // 0x16e5a8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e5ac:
    // 0x16e5ac: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e5b0:
    // 0x16e5b0: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e5b4:
    // 0x16e5b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e5b8:
    // 0x16e5b8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16e5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e5bc:
    // 0x16e5bc: 0x0  nop
    ctx->pc = 0x16e5bcu;
    // NOP
label_16e5c0:
    // 0x16e5c0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16e5c4:
    // 0x16e5c4: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e5c8:
    // 0x16e5c8: 0x2463e290  addiu       $v1, $v1, -0x1D70
    ctx->pc = 0x16e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959760));
label_16e5cc:
    // 0x16e5cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16e5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16e5d0:
    // 0x16e5d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16e5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16e5d4:
    // 0x16e5d4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e5d8:
    if (ctx->pc == 0x16E5D8u) {
        ctx->pc = 0x16E5DCu;
        goto label_16e5dc;
    }
    ctx->pc = 0x16E5D4u;
    {
        const bool branch_taken_0x16e5d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e5d4) {
            ctx->pc = 0x16E5E4u;
            goto label_16e5e4;
        }
    }
    ctx->pc = 0x16E5DCu;
label_16e5dc:
    // 0x16e5dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e5e0:
    if (ctx->pc == 0x16E5E0u) {
        ctx->pc = 0x16E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5DCu;
        // 0x16e5e0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5E4u;
        goto label_16e5e4;
    }
    ctx->pc = 0x16E5DCu;
    {
        const bool branch_taken_0x16e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5DCu;
        // 0x16e5e0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5dc) {
            ctx->pc = 0x16E5FCu;
            goto label_16e5fc;
        }
    }
    ctx->pc = 0x16E5E4u;
label_16e5e4:
    // 0x16e5e4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e5e8:
    // 0x16e5e8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e5ec:
    // 0x16e5ec: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e5f0:
    // 0x16e5f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e5f4:
    // 0x16e5f4: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16e5f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e5f8:
    // 0x16e5f8: 0x0  nop
    ctx->pc = 0x16e5f8u;
    // NOP
label_16e5fc:
    // 0x16e5fc: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e600:
    // 0x16e600: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e604:
    if (ctx->pc == 0x16E604u) {
        ctx->pc = 0x16E608u;
        goto label_16e608;
    }
    ctx->pc = 0x16E600u;
    {
        const bool branch_taken_0x16e600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e600) {
            ctx->pc = 0x16E610u;
            goto label_16e610;
        }
    }
    ctx->pc = 0x16E608u;
label_16e608:
    // 0x16e608: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e60c:
    if (ctx->pc == 0x16E60Cu) {
        ctx->pc = 0x16E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E608u;
        // 0x16e60c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E610u;
        goto label_16e610;
    }
    ctx->pc = 0x16E608u;
    {
        const bool branch_taken_0x16e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E608u;
        // 0x16e60c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e608) {
            ctx->pc = 0x16E628u;
            goto label_16e628;
        }
    }
    ctx->pc = 0x16E610u;
label_16e610:
    // 0x16e610: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e614:
    // 0x16e614: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e618:
    // 0x16e618: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e61c:
    // 0x16e61c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e620:
    // 0x16e620: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16e620u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e624:
    // 0x16e624: 0x0  nop
    ctx->pc = 0x16e624u;
    // NOP
label_16e628:
    // 0x16e628: 0x100001cc  b           . + 4 + (0x1CC << 2)
label_16e62c:
    if (ctx->pc == 0x16E62Cu) {
        ctx->pc = 0x16E630u;
        goto label_16e630;
    }
    ctx->pc = 0x16E628u;
    {
        const bool branch_taken_0x16e628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e628) {
            ctx->pc = 0x16ED5Cu;
            { ctx->pc = 0x16ed5c; return; }
        }
    }
    ctx->pc = 0x16E630u;
label_16e630:
    // 0x16e630: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x16e630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_16e634:
    // 0x16e634: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x16e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_16e638:
    // 0x16e638: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x16e638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_16e63c:
    // 0x16e63c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_16e640:
    if (ctx->pc == 0x16E640u) {
        ctx->pc = 0x16E644u;
        goto label_16e644;
    }
    ctx->pc = 0x16E63Cu;
    {
        const bool branch_taken_0x16e63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16e63c) {
            ctx->pc = 0x16E650u;
            goto label_16e650;
        }
    }
    ctx->pc = 0x16E644u;
label_16e644:
    // 0x16e644: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16e648:
    // 0x16e648: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
label_16e64c:
    if (ctx->pc == 0x16E64Cu) {
        ctx->pc = 0x16E650u;
        goto label_16e650;
    }
    ctx->pc = 0x16E648u;
    {
        const bool branch_taken_0x16e648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e648) {
            ctx->pc = 0x16E718u;
            goto label_16e718;
        }
    }
    ctx->pc = 0x16E650u;
label_16e650:
    // 0x16e650: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e654:
    // 0x16e654: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e658:
    // 0x16e658: 0x8c24e2c0  lw          $a0, -0x1D40($at)
    ctx->pc = 0x16e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959808)));
label_16e65c:
    // 0x16e65c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e660:
    if (ctx->pc == 0x16E660u) {
        ctx->pc = 0x16E664u;
        goto label_16e664;
    }
    ctx->pc = 0x16E65Cu;
    {
        const bool branch_taken_0x16e65c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e65c) {
            ctx->pc = 0x16E66Cu;
            goto label_16e66c;
        }
    }
    ctx->pc = 0x16E664u;
label_16e664:
    // 0x16e664: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e668:
    if (ctx->pc == 0x16E668u) {
        ctx->pc = 0x16E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E664u;
        // 0x16e668: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E66Cu;
        goto label_16e66c;
    }
    ctx->pc = 0x16E664u;
    {
        const bool branch_taken_0x16e664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E664u;
        // 0x16e668: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e664) {
            ctx->pc = 0x16E684u;
            goto label_16e684;
        }
    }
    ctx->pc = 0x16E66Cu;
label_16e66c:
    // 0x16e66c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e670:
    // 0x16e670: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e674:
    // 0x16e674: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e678:
    // 0x16e678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e67c:
    // 0x16e67c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16e67cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e680:
    // 0x16e680: 0x0  nop
    ctx->pc = 0x16e680u;
    // NOP
label_16e684:
    // 0x16e684: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e688:
    // 0x16e688: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e68c:
    if (ctx->pc == 0x16E68Cu) {
        ctx->pc = 0x16E690u;
        goto label_16e690;
    }
    ctx->pc = 0x16E688u;
    {
        const bool branch_taken_0x16e688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e688) {
            ctx->pc = 0x16E698u;
            goto label_16e698;
        }
    }
    ctx->pc = 0x16E690u;
label_16e690:
    // 0x16e690: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e694:
    if (ctx->pc == 0x16E694u) {
        ctx->pc = 0x16E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E690u;
        // 0x16e694: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E698u;
        goto label_16e698;
    }
    ctx->pc = 0x16E690u;
    {
        const bool branch_taken_0x16e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E690u;
        // 0x16e694: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e690) {
            ctx->pc = 0x16E6B0u;
            goto label_16e6b0;
        }
    }
    ctx->pc = 0x16E698u;
label_16e698:
    // 0x16e698: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e69c:
    // 0x16e69c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e6a0:
    // 0x16e6a0: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e6a4:
    // 0x16e6a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e6a8:
    // 0x16e6a8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x16e6a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e6ac:
    // 0x16e6ac: 0x0  nop
    ctx->pc = 0x16e6acu;
    // NOP
label_16e6b0:
    // 0x16e6b0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e6b4:
    // 0x16e6b4: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e6b8:
    // 0x16e6b8: 0x8c24e2a0  lw          $a0, -0x1D60($at)
    ctx->pc = 0x16e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959776)));
label_16e6bc:
    // 0x16e6bc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e6c0:
    if (ctx->pc == 0x16E6C0u) {
        ctx->pc = 0x16E6C4u;
        goto label_16e6c4;
    }
    ctx->pc = 0x16E6BCu;
    {
        const bool branch_taken_0x16e6bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e6bc) {
            ctx->pc = 0x16E6CCu;
            goto label_16e6cc;
        }
    }
    ctx->pc = 0x16E6C4u;
label_16e6c4:
    // 0x16e6c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e6c8:
    if (ctx->pc == 0x16E6C8u) {
        ctx->pc = 0x16E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6C4u;
        // 0x16e6c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E6CCu;
        goto label_16e6cc;
    }
    ctx->pc = 0x16E6C4u;
    {
        const bool branch_taken_0x16e6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6C4u;
        // 0x16e6c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6c4) {
            ctx->pc = 0x16E6E4u;
            goto label_16e6e4;
        }
    }
    ctx->pc = 0x16E6CCu;
label_16e6cc:
    // 0x16e6cc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e6d0:
    // 0x16e6d0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e6d4:
    // 0x16e6d4: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e6d8:
    // 0x16e6d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e6dc:
    // 0x16e6dc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x16e6dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e6e0:
    // 0x16e6e0: 0x0  nop
    ctx->pc = 0x16e6e0u;
    // NOP
label_16e6e4:
    // 0x16e6e4: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e6e8:
    // 0x16e6e8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e6ec:
    if (ctx->pc == 0x16E6ECu) {
        ctx->pc = 0x16E6F0u;
        goto label_16e6f0;
    }
    ctx->pc = 0x16E6E8u;
    {
        const bool branch_taken_0x16e6e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e6e8) {
            ctx->pc = 0x16E6F8u;
            goto label_16e6f8;
        }
    }
    ctx->pc = 0x16E6F0u;
label_16e6f0:
    // 0x16e6f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e6f4:
    if (ctx->pc == 0x16E6F4u) {
        ctx->pc = 0x16E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6F0u;
        // 0x16e6f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E6F8u;
        goto label_16e6f8;
    }
    ctx->pc = 0x16E6F0u;
    {
        const bool branch_taken_0x16e6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6F0u;
        // 0x16e6f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6f0) {
            ctx->pc = 0x16E710u;
            goto label_16e710;
        }
    }
    ctx->pc = 0x16E6F8u;
label_16e6f8:
    // 0x16e6f8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e6fc:
    // 0x16e6fc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e700:
    // 0x16e700: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e704:
    // 0x16e704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e708:
    // 0x16e708: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16e708u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e70c:
    // 0x16e70c: 0x0  nop
    ctx->pc = 0x16e70cu;
    // NOP
label_16e710:
    // 0x16e710: 0x10000192  b           . + 4 + (0x192 << 2)
label_16e714:
    if (ctx->pc == 0x16E714u) {
        ctx->pc = 0x16E718u;
        goto label_16e718;
    }
    ctx->pc = 0x16E710u;
    {
        const bool branch_taken_0x16e710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e710) {
            ctx->pc = 0x16ED5Cu;
            { ctx->pc = 0x16ed5c; return; }
        }
    }
    ctx->pc = 0x16E718u;
label_16e718:
    // 0x16e718: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16e71c:
    // 0x16e71c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e720:
    // 0x16e720: 0x8c24e2bc  lw          $a0, -0x1D44($at)
    ctx->pc = 0x16e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959804)));
label_16e724:
    // 0x16e724: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e728:
    if (ctx->pc == 0x16E728u) {
        ctx->pc = 0x16E72Cu;
        goto label_16e72c;
    }
    ctx->pc = 0x16E724u;
    {
        const bool branch_taken_0x16e724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e724) {
            ctx->pc = 0x16E734u;
            goto label_16e734;
        }
    }
    ctx->pc = 0x16E72Cu;
label_16e72c:
    // 0x16e72c: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e730:
    if (ctx->pc == 0x16E730u) {
        ctx->pc = 0x16E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E72Cu;
        // 0x16e730: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E734u;
        goto label_16e734;
    }
    ctx->pc = 0x16E72Cu;
    {
        const bool branch_taken_0x16e72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E72Cu;
        // 0x16e730: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e72c) {
            ctx->pc = 0x16E74Cu;
            goto label_16e74c;
        }
    }
    ctx->pc = 0x16E734u;
label_16e734:
    // 0x16e734: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e738:
    // 0x16e738: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e73c:
    // 0x16e73c: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x16e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_16e740:
    // 0x16e740: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16e744:
    // 0x16e744: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16e744u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e748:
    // 0x16e748: 0x0  nop
    ctx->pc = 0x16e748u;
    // NOP
label_16e74c:
    // 0x16e74c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x16e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16e750:
    // 0x16e750: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_16e754:
    if (ctx->pc == 0x16E754u) {
        ctx->pc = 0x16E758u;
        goto label_16e758;
    }
    ctx->pc = 0x16E750u;
    {
        const bool branch_taken_0x16e750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e750) {
            ctx->pc = 0x16E760u;
            goto label_16e760;
        }
    }
    ctx->pc = 0x16E758u;
label_16e758:
    // 0x16e758: 0x10000007  b           . + 4 + (0x7 << 2)
label_16e75c:
    if (ctx->pc == 0x16E75Cu) {
        ctx->pc = 0x16E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E758u;
        // 0x16e75c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E760u;
        goto label_16e760;
    }
    ctx->pc = 0x16E758u;
    {
        const bool branch_taken_0x16e758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E758u;
        // 0x16e75c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e758) {
            ctx->pc = 0x16E778u;
            { ctx->pc = 0x16e778; return; }
        }
    }
    ctx->pc = 0x16E760u;
label_16e760:
    // 0x16e760: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x16e760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_16e764:
    // 0x16e764: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x16e764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16e768:
    // 0x16e768: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x16e768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
label_16e76c:
    // 0x16e76c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x16e770u;
    return;
}
