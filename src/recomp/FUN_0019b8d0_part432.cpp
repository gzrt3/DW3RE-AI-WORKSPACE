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


void FUN_0019b8d0_part432(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26e000u: goto label_26e000;
        case 0x26e004u: goto label_26e004;
        case 0x26e008u: goto label_26e008;
        case 0x26e00cu: goto label_26e00c;
        case 0x26e010u: goto label_26e010;
        case 0x26e014u: goto label_26e014;
        case 0x26e018u: goto label_26e018;
        case 0x26e01cu: goto label_26e01c;
        case 0x26e020u: goto label_26e020;
        case 0x26e024u: goto label_26e024;
        case 0x26e028u: goto label_26e028;
        case 0x26e02cu: goto label_26e02c;
        case 0x26e030u: goto label_26e030;
        case 0x26e034u: goto label_26e034;
        case 0x26e038u: goto label_26e038;
        case 0x26e03cu: goto label_26e03c;
        case 0x26e040u: goto label_26e040;
        case 0x26e044u: goto label_26e044;
        case 0x26e048u: goto label_26e048;
        case 0x26e04cu: goto label_26e04c;
        case 0x26e050u: goto label_26e050;
        case 0x26e054u: goto label_26e054;
        case 0x26e058u: goto label_26e058;
        case 0x26e05cu: goto label_26e05c;
        case 0x26e060u: goto label_26e060;
        case 0x26e064u: goto label_26e064;
        case 0x26e068u: goto label_26e068;
        case 0x26e06cu: goto label_26e06c;
        case 0x26e070u: goto label_26e070;
        case 0x26e074u: goto label_26e074;
        case 0x26e078u: goto label_26e078;
        case 0x26e07cu: goto label_26e07c;
        case 0x26e080u: goto label_26e080;
        case 0x26e084u: goto label_26e084;
        case 0x26e088u: goto label_26e088;
        case 0x26e08cu: goto label_26e08c;
        case 0x26e090u: goto label_26e090;
        case 0x26e094u: goto label_26e094;
        case 0x26e098u: goto label_26e098;
        case 0x26e09cu: goto label_26e09c;
        case 0x26e0a0u: goto label_26e0a0;
        case 0x26e0a4u: goto label_26e0a4;
        case 0x26e0a8u: goto label_26e0a8;
        case 0x26e0acu: goto label_26e0ac;
        case 0x26e0b0u: goto label_26e0b0;
        case 0x26e0b4u: goto label_26e0b4;
        case 0x26e0b8u: goto label_26e0b8;
        case 0x26e0bcu: goto label_26e0bc;
        case 0x26e0c0u: goto label_26e0c0;
        case 0x26e0c4u: goto label_26e0c4;
        case 0x26e0c8u: goto label_26e0c8;
        case 0x26e0ccu: goto label_26e0cc;
        case 0x26e0d0u: goto label_26e0d0;
        case 0x26e0d4u: goto label_26e0d4;
        case 0x26e0d8u: goto label_26e0d8;
        case 0x26e0dcu: goto label_26e0dc;
        case 0x26e0e0u: goto label_26e0e0;
        case 0x26e0e4u: goto label_26e0e4;
        case 0x26e0e8u: goto label_26e0e8;
        case 0x26e0ecu: goto label_26e0ec;
        case 0x26e0f0u: goto label_26e0f0;
        case 0x26e0f4u: goto label_26e0f4;
        case 0x26e0f8u: goto label_26e0f8;
        case 0x26e0fcu: goto label_26e0fc;
        case 0x26e100u: goto label_26e100;
        case 0x26e104u: goto label_26e104;
        case 0x26e108u: goto label_26e108;
        case 0x26e10cu: goto label_26e10c;
        case 0x26e110u: goto label_26e110;
        case 0x26e114u: goto label_26e114;
        case 0x26e118u: goto label_26e118;
        case 0x26e11cu: goto label_26e11c;
        case 0x26e120u: goto label_26e120;
        case 0x26e124u: goto label_26e124;
        case 0x26e128u: goto label_26e128;
        case 0x26e12cu: goto label_26e12c;
        case 0x26e130u: goto label_26e130;
        case 0x26e134u: goto label_26e134;
        case 0x26e138u: goto label_26e138;
        case 0x26e13cu: goto label_26e13c;
        case 0x26e140u: goto label_26e140;
        case 0x26e144u: goto label_26e144;
        case 0x26e148u: goto label_26e148;
        case 0x26e14cu: goto label_26e14c;
        case 0x26e150u: goto label_26e150;
        case 0x26e154u: goto label_26e154;
        case 0x26e158u: goto label_26e158;
        case 0x26e15cu: goto label_26e15c;
        case 0x26e160u: goto label_26e160;
        case 0x26e164u: goto label_26e164;
        case 0x26e168u: goto label_26e168;
        case 0x26e16cu: goto label_26e16c;
        case 0x26e170u: goto label_26e170;
        case 0x26e174u: goto label_26e174;
        case 0x26e178u: goto label_26e178;
        case 0x26e17cu: goto label_26e17c;
        case 0x26e180u: goto label_26e180;
        case 0x26e184u: goto label_26e184;
        case 0x26e188u: goto label_26e188;
        case 0x26e18cu: goto label_26e18c;
        case 0x26e190u: goto label_26e190;
        case 0x26e194u: goto label_26e194;
        case 0x26e198u: goto label_26e198;
        case 0x26e19cu: goto label_26e19c;
        case 0x26e1a0u: goto label_26e1a0;
        case 0x26e1a4u: goto label_26e1a4;
        case 0x26e1a8u: goto label_26e1a8;
        case 0x26e1acu: goto label_26e1ac;
        case 0x26e1b0u: goto label_26e1b0;
        case 0x26e1b4u: goto label_26e1b4;
        case 0x26e1b8u: goto label_26e1b8;
        case 0x26e1bcu: goto label_26e1bc;
        case 0x26e1c0u: goto label_26e1c0;
        case 0x26e1c4u: goto label_26e1c4;
        case 0x26e1c8u: goto label_26e1c8;
        case 0x26e1ccu: goto label_26e1cc;
        case 0x26e1d0u: goto label_26e1d0;
        case 0x26e1d4u: goto label_26e1d4;
        case 0x26e1d8u: goto label_26e1d8;
        case 0x26e1dcu: goto label_26e1dc;
        case 0x26e1e0u: goto label_26e1e0;
        case 0x26e1e4u: goto label_26e1e4;
        case 0x26e1e8u: goto label_26e1e8;
        case 0x26e1ecu: goto label_26e1ec;
        case 0x26e1f0u: goto label_26e1f0;
        case 0x26e1f4u: goto label_26e1f4;
        case 0x26e1f8u: goto label_26e1f8;
        case 0x26e1fcu: goto label_26e1fc;
        case 0x26e200u: goto label_26e200;
        case 0x26e204u: goto label_26e204;
        case 0x26e208u: goto label_26e208;
        case 0x26e20cu: goto label_26e20c;
        case 0x26e210u: goto label_26e210;
        case 0x26e214u: goto label_26e214;
        case 0x26e218u: goto label_26e218;
        case 0x26e21cu: goto label_26e21c;
        case 0x26e220u: goto label_26e220;
        case 0x26e224u: goto label_26e224;
        case 0x26e228u: goto label_26e228;
        case 0x26e22cu: goto label_26e22c;
        case 0x26e230u: goto label_26e230;
        case 0x26e234u: goto label_26e234;
        case 0x26e238u: goto label_26e238;
        case 0x26e23cu: goto label_26e23c;
        case 0x26e240u: goto label_26e240;
        case 0x26e244u: goto label_26e244;
        case 0x26e248u: goto label_26e248;
        case 0x26e24cu: goto label_26e24c;
        case 0x26e250u: goto label_26e250;
        case 0x26e254u: goto label_26e254;
        case 0x26e258u: goto label_26e258;
        case 0x26e25cu: goto label_26e25c;
        case 0x26e260u: goto label_26e260;
        case 0x26e264u: goto label_26e264;
        case 0x26e268u: goto label_26e268;
        case 0x26e26cu: goto label_26e26c;
        case 0x26e270u: goto label_26e270;
        case 0x26e274u: goto label_26e274;
        case 0x26e278u: goto label_26e278;
        case 0x26e27cu: goto label_26e27c;
        case 0x26e280u: goto label_26e280;
        case 0x26e284u: goto label_26e284;
        case 0x26e288u: goto label_26e288;
        case 0x26e28cu: goto label_26e28c;
        case 0x26e290u: goto label_26e290;
        case 0x26e294u: goto label_26e294;
        case 0x26e298u: goto label_26e298;
        case 0x26e29cu: goto label_26e29c;
        case 0x26e2a0u: goto label_26e2a0;
        case 0x26e2a4u: goto label_26e2a4;
        case 0x26e2a8u: goto label_26e2a8;
        case 0x26e2acu: goto label_26e2ac;
        case 0x26e2b0u: goto label_26e2b0;
        case 0x26e2b4u: goto label_26e2b4;
        case 0x26e2b8u: goto label_26e2b8;
        case 0x26e2bcu: goto label_26e2bc;
        case 0x26e2c0u: goto label_26e2c0;
        case 0x26e2c4u: goto label_26e2c4;
        case 0x26e2c8u: goto label_26e2c8;
        case 0x26e2ccu: goto label_26e2cc;
        case 0x26e2d0u: goto label_26e2d0;
        case 0x26e2d4u: goto label_26e2d4;
        case 0x26e2d8u: goto label_26e2d8;
        case 0x26e2dcu: goto label_26e2dc;
        case 0x26e2e0u: goto label_26e2e0;
        case 0x26e2e4u: goto label_26e2e4;
        case 0x26e2e8u: goto label_26e2e8;
        case 0x26e2ecu: goto label_26e2ec;
        case 0x26e2f0u: goto label_26e2f0;
        case 0x26e2f4u: goto label_26e2f4;
        case 0x26e2f8u: goto label_26e2f8;
        case 0x26e2fcu: goto label_26e2fc;
        case 0x26e300u: goto label_26e300;
        case 0x26e304u: goto label_26e304;
        case 0x26e308u: goto label_26e308;
        case 0x26e30cu: goto label_26e30c;
        case 0x26e310u: goto label_26e310;
        case 0x26e314u: goto label_26e314;
        case 0x26e318u: goto label_26e318;
        case 0x26e31cu: goto label_26e31c;
        case 0x26e320u: goto label_26e320;
        case 0x26e324u: goto label_26e324;
        case 0x26e328u: goto label_26e328;
        case 0x26e32cu: goto label_26e32c;
        case 0x26e330u: goto label_26e330;
        case 0x26e334u: goto label_26e334;
        case 0x26e338u: goto label_26e338;
        case 0x26e33cu: goto label_26e33c;
        case 0x26e340u: goto label_26e340;
        case 0x26e344u: goto label_26e344;
        case 0x26e348u: goto label_26e348;
        case 0x26e34cu: goto label_26e34c;
        case 0x26e350u: goto label_26e350;
        case 0x26e354u: goto label_26e354;
        case 0x26e358u: goto label_26e358;
        case 0x26e35cu: goto label_26e35c;
        case 0x26e360u: goto label_26e360;
        case 0x26e364u: goto label_26e364;
        case 0x26e368u: goto label_26e368;
        case 0x26e36cu: goto label_26e36c;
        case 0x26e370u: goto label_26e370;
        case 0x26e374u: goto label_26e374;
        case 0x26e378u: goto label_26e378;
        case 0x26e37cu: goto label_26e37c;
        case 0x26e380u: goto label_26e380;
        case 0x26e384u: goto label_26e384;
        case 0x26e388u: goto label_26e388;
        case 0x26e38cu: goto label_26e38c;
        case 0x26e390u: goto label_26e390;
        case 0x26e394u: goto label_26e394;
        case 0x26e398u: goto label_26e398;
        case 0x26e39cu: goto label_26e39c;
        case 0x26e3a0u: goto label_26e3a0;
        case 0x26e3a4u: goto label_26e3a4;
        case 0x26e3a8u: goto label_26e3a8;
        case 0x26e3acu: goto label_26e3ac;
        case 0x26e3b0u: goto label_26e3b0;
        case 0x26e3b4u: goto label_26e3b4;
        case 0x26e3b8u: goto label_26e3b8;
        case 0x26e3bcu: goto label_26e3bc;
        case 0x26e3c0u: goto label_26e3c0;
        case 0x26e3c4u: goto label_26e3c4;
        case 0x26e3c8u: goto label_26e3c8;
        case 0x26e3ccu: goto label_26e3cc;
        case 0x26e3d0u: goto label_26e3d0;
        case 0x26e3d4u: goto label_26e3d4;
        case 0x26e3d8u: goto label_26e3d8;
        case 0x26e3dcu: goto label_26e3dc;
        case 0x26e3e0u: goto label_26e3e0;
        case 0x26e3e4u: goto label_26e3e4;
        case 0x26e3e8u: goto label_26e3e8;
        case 0x26e3ecu: goto label_26e3ec;
        case 0x26e3f0u: goto label_26e3f0;
        case 0x26e3f4u: goto label_26e3f4;
        case 0x26e3f8u: goto label_26e3f8;
        case 0x26e3fcu: goto label_26e3fc;
        case 0x26e400u: goto label_26e400;
        case 0x26e404u: goto label_26e404;
        case 0x26e408u: goto label_26e408;
        case 0x26e40cu: goto label_26e40c;
        case 0x26e410u: goto label_26e410;
        case 0x26e414u: goto label_26e414;
        case 0x26e418u: goto label_26e418;
        case 0x26e41cu: goto label_26e41c;
        case 0x26e420u: goto label_26e420;
        case 0x26e424u: goto label_26e424;
        case 0x26e428u: goto label_26e428;
        case 0x26e42cu: goto label_26e42c;
        case 0x26e430u: goto label_26e430;
        case 0x26e434u: goto label_26e434;
        case 0x26e438u: goto label_26e438;
        case 0x26e43cu: goto label_26e43c;
        case 0x26e440u: goto label_26e440;
        case 0x26e444u: goto label_26e444;
        case 0x26e448u: goto label_26e448;
        case 0x26e44cu: goto label_26e44c;
        case 0x26e450u: goto label_26e450;
        case 0x26e454u: goto label_26e454;
        case 0x26e458u: goto label_26e458;
        case 0x26e45cu: goto label_26e45c;
        case 0x26e460u: goto label_26e460;
        case 0x26e464u: goto label_26e464;
        case 0x26e468u: goto label_26e468;
        case 0x26e46cu: goto label_26e46c;
        case 0x26e470u: goto label_26e470;
        case 0x26e474u: goto label_26e474;
        case 0x26e478u: goto label_26e478;
        case 0x26e47cu: goto label_26e47c;
        case 0x26e480u: goto label_26e480;
        case 0x26e484u: goto label_26e484;
        case 0x26e488u: goto label_26e488;
        case 0x26e48cu: goto label_26e48c;
        case 0x26e490u: goto label_26e490;
        case 0x26e494u: goto label_26e494;
        case 0x26e498u: goto label_26e498;
        case 0x26e49cu: goto label_26e49c;
        case 0x26e4a0u: goto label_26e4a0;
        case 0x26e4a4u: goto label_26e4a4;
        case 0x26e4a8u: goto label_26e4a8;
        case 0x26e4acu: goto label_26e4ac;
        case 0x26e4b0u: goto label_26e4b0;
        case 0x26e4b4u: goto label_26e4b4;
        case 0x26e4b8u: goto label_26e4b8;
        case 0x26e4bcu: goto label_26e4bc;
        case 0x26e4c0u: goto label_26e4c0;
        case 0x26e4c4u: goto label_26e4c4;
        case 0x26e4c8u: goto label_26e4c8;
        case 0x26e4ccu: goto label_26e4cc;
        case 0x26e4d0u: goto label_26e4d0;
        case 0x26e4d4u: goto label_26e4d4;
        case 0x26e4d8u: goto label_26e4d8;
        case 0x26e4dcu: goto label_26e4dc;
        case 0x26e4e0u: goto label_26e4e0;
        case 0x26e4e4u: goto label_26e4e4;
        case 0x26e4e8u: goto label_26e4e8;
        case 0x26e4ecu: goto label_26e4ec;
        case 0x26e4f0u: goto label_26e4f0;
        case 0x26e4f4u: goto label_26e4f4;
        case 0x26e4f8u: goto label_26e4f8;
        case 0x26e4fcu: goto label_26e4fc;
        case 0x26e500u: goto label_26e500;
        case 0x26e504u: goto label_26e504;
        case 0x26e508u: goto label_26e508;
        case 0x26e50cu: goto label_26e50c;
        case 0x26e510u: goto label_26e510;
        case 0x26e514u: goto label_26e514;
        case 0x26e518u: goto label_26e518;
        case 0x26e51cu: goto label_26e51c;
        case 0x26e520u: goto label_26e520;
        case 0x26e524u: goto label_26e524;
        case 0x26e528u: goto label_26e528;
        case 0x26e52cu: goto label_26e52c;
        case 0x26e530u: goto label_26e530;
        case 0x26e534u: goto label_26e534;
        case 0x26e538u: goto label_26e538;
        case 0x26e53cu: goto label_26e53c;
        case 0x26e540u: goto label_26e540;
        case 0x26e544u: goto label_26e544;
        case 0x26e548u: goto label_26e548;
        case 0x26e54cu: goto label_26e54c;
        case 0x26e550u: goto label_26e550;
        case 0x26e554u: goto label_26e554;
        case 0x26e558u: goto label_26e558;
        case 0x26e55cu: goto label_26e55c;
        case 0x26e560u: goto label_26e560;
        case 0x26e564u: goto label_26e564;
        case 0x26e568u: goto label_26e568;
        case 0x26e56cu: goto label_26e56c;
        case 0x26e570u: goto label_26e570;
        case 0x26e574u: goto label_26e574;
        case 0x26e578u: goto label_26e578;
        case 0x26e57cu: goto label_26e57c;
        case 0x26e580u: goto label_26e580;
        case 0x26e584u: goto label_26e584;
        case 0x26e588u: goto label_26e588;
        case 0x26e58cu: goto label_26e58c;
        case 0x26e590u: goto label_26e590;
        case 0x26e594u: goto label_26e594;
        case 0x26e598u: goto label_26e598;
        case 0x26e59cu: goto label_26e59c;
        case 0x26e5a0u: goto label_26e5a0;
        case 0x26e5a4u: goto label_26e5a4;
        case 0x26e5a8u: goto label_26e5a8;
        case 0x26e5acu: goto label_26e5ac;
        case 0x26e5b0u: goto label_26e5b0;
        case 0x26e5b4u: goto label_26e5b4;
        case 0x26e5b8u: goto label_26e5b8;
        case 0x26e5bcu: goto label_26e5bc;
        case 0x26e5c0u: goto label_26e5c0;
        case 0x26e5c4u: goto label_26e5c4;
        case 0x26e5c8u: goto label_26e5c8;
        case 0x26e5ccu: goto label_26e5cc;
        case 0x26e5d0u: goto label_26e5d0;
        case 0x26e5d4u: goto label_26e5d4;
        case 0x26e5d8u: goto label_26e5d8;
        case 0x26e5dcu: goto label_26e5dc;
        case 0x26e5e0u: goto label_26e5e0;
        case 0x26e5e4u: goto label_26e5e4;
        case 0x26e5e8u: goto label_26e5e8;
        case 0x26e5ecu: goto label_26e5ec;
        case 0x26e5f0u: goto label_26e5f0;
        case 0x26e5f4u: goto label_26e5f4;
        case 0x26e5f8u: goto label_26e5f8;
        case 0x26e5fcu: goto label_26e5fc;
        case 0x26e600u: goto label_26e600;
        case 0x26e604u: goto label_26e604;
        case 0x26e608u: goto label_26e608;
        case 0x26e60cu: goto label_26e60c;
        case 0x26e610u: goto label_26e610;
        case 0x26e614u: goto label_26e614;
        case 0x26e618u: goto label_26e618;
        case 0x26e61cu: goto label_26e61c;
        case 0x26e620u: goto label_26e620;
        case 0x26e624u: goto label_26e624;
        case 0x26e628u: goto label_26e628;
        case 0x26e62cu: goto label_26e62c;
        case 0x26e630u: goto label_26e630;
        case 0x26e634u: goto label_26e634;
        case 0x26e638u: goto label_26e638;
        case 0x26e63cu: goto label_26e63c;
        case 0x26e640u: goto label_26e640;
        case 0x26e644u: goto label_26e644;
        case 0x26e648u: goto label_26e648;
        case 0x26e64cu: goto label_26e64c;
        case 0x26e650u: goto label_26e650;
        case 0x26e654u: goto label_26e654;
        case 0x26e658u: goto label_26e658;
        case 0x26e65cu: goto label_26e65c;
        case 0x26e660u: goto label_26e660;
        case 0x26e664u: goto label_26e664;
        case 0x26e668u: goto label_26e668;
        case 0x26e66cu: goto label_26e66c;
        case 0x26e670u: goto label_26e670;
        case 0x26e674u: goto label_26e674;
        case 0x26e678u: goto label_26e678;
        case 0x26e67cu: goto label_26e67c;
        case 0x26e680u: goto label_26e680;
        case 0x26e684u: goto label_26e684;
        case 0x26e688u: goto label_26e688;
        case 0x26e68cu: goto label_26e68c;
        case 0x26e690u: goto label_26e690;
        case 0x26e694u: goto label_26e694;
        case 0x26e698u: goto label_26e698;
        case 0x26e69cu: goto label_26e69c;
        case 0x26e6a0u: goto label_26e6a0;
        case 0x26e6a4u: goto label_26e6a4;
        case 0x26e6a8u: goto label_26e6a8;
        case 0x26e6acu: goto label_26e6ac;
        case 0x26e6b0u: goto label_26e6b0;
        case 0x26e6b4u: goto label_26e6b4;
        case 0x26e6b8u: goto label_26e6b8;
        case 0x26e6bcu: goto label_26e6bc;
        case 0x26e6c0u: goto label_26e6c0;
        case 0x26e6c4u: goto label_26e6c4;
        case 0x26e6c8u: goto label_26e6c8;
        case 0x26e6ccu: goto label_26e6cc;
        case 0x26e6d0u: goto label_26e6d0;
        case 0x26e6d4u: goto label_26e6d4;
        case 0x26e6d8u: goto label_26e6d8;
        case 0x26e6dcu: goto label_26e6dc;
        case 0x26e6e0u: goto label_26e6e0;
        case 0x26e6e4u: goto label_26e6e4;
        case 0x26e6e8u: goto label_26e6e8;
        case 0x26e6ecu: goto label_26e6ec;
        case 0x26e6f0u: goto label_26e6f0;
        case 0x26e6f4u: goto label_26e6f4;
        case 0x26e6f8u: goto label_26e6f8;
        case 0x26e6fcu: goto label_26e6fc;
        case 0x26e700u: goto label_26e700;
        case 0x26e704u: goto label_26e704;
        case 0x26e708u: goto label_26e708;
        case 0x26e70cu: goto label_26e70c;
        case 0x26e710u: goto label_26e710;
        case 0x26e714u: goto label_26e714;
        case 0x26e718u: goto label_26e718;
        case 0x26e71cu: goto label_26e71c;
        case 0x26e720u: goto label_26e720;
        case 0x26e724u: goto label_26e724;
        case 0x26e728u: goto label_26e728;
        case 0x26e72cu: goto label_26e72c;
        case 0x26e730u: goto label_26e730;
        case 0x26e734u: goto label_26e734;
        case 0x26e738u: goto label_26e738;
        case 0x26e73cu: goto label_26e73c;
        case 0x26e740u: goto label_26e740;
        case 0x26e744u: goto label_26e744;
        case 0x26e748u: goto label_26e748;
        case 0x26e74cu: goto label_26e74c;
        case 0x26e750u: goto label_26e750;
        case 0x26e754u: goto label_26e754;
        case 0x26e758u: goto label_26e758;
        case 0x26e75cu: goto label_26e75c;
        case 0x26e760u: goto label_26e760;
        case 0x26e764u: goto label_26e764;
        case 0x26e768u: goto label_26e768;
        case 0x26e76cu: goto label_26e76c;
        case 0x26e770u: goto label_26e770;
        case 0x26e774u: goto label_26e774;
        case 0x26e778u: goto label_26e778;
        case 0x26e77cu: goto label_26e77c;
        case 0x26e780u: goto label_26e780;
        case 0x26e784u: goto label_26e784;
        case 0x26e788u: goto label_26e788;
        case 0x26e78cu: goto label_26e78c;
        case 0x26e790u: goto label_26e790;
        case 0x26e794u: goto label_26e794;
        case 0x26e798u: goto label_26e798;
        case 0x26e79cu: goto label_26e79c;
        case 0x26e7a0u: goto label_26e7a0;
        case 0x26e7a4u: goto label_26e7a4;
        case 0x26e7a8u: goto label_26e7a8;
        case 0x26e7acu: goto label_26e7ac;
        case 0x26e7b0u: goto label_26e7b0;
        case 0x26e7b4u: goto label_26e7b4;
        case 0x26e7b8u: goto label_26e7b8;
        case 0x26e7bcu: goto label_26e7bc;
        case 0x26e7c0u: goto label_26e7c0;
        case 0x26e7c4u: goto label_26e7c4;
        case 0x26e7c8u: goto label_26e7c8;
        case 0x26e7ccu: goto label_26e7cc;
        default: return;
    }

label_26e000:
    // 0x26e000: 0x3d9c  .word       0x00003D9C                   # dmult       $zero, $zero # 00003D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26E000 raw=0x00003D9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e004:
    // 0x26e004: 0xa460  .word       0x0000A460                   # add         $s4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26e008:
    // 0x26e008: 0x0  nop
    ctx->pc = 0x26e008u;
    // NOP
label_26e00c:
    // 0x26e00c: 0x0  nop
    ctx->pc = 0x26e00cu;
    // NOP
label_26e010:
    // 0x26e010: 0x3db1  tgeu        $zero, $zero, 246
    ctx->pc = 0x26e010u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e014:
    // 0x26e014: 0x6a20  .word       0x00006A20                   # add         $t5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26e018:
    // 0x26e018: 0x0  nop
    ctx->pc = 0x26e018u;
    // NOP
label_26e01c:
    // 0x26e01c: 0x0  nop
    ctx->pc = 0x26e01cu;
    // NOP
label_26e020:
    // 0x26e020: 0x3dbf  dsra32      $a3, $zero, 22
    ctx->pc = 0x26e020u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 22));
label_26e024:
    // 0x26e024: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x26e024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e028:
    // 0x26e028: 0x0  nop
    ctx->pc = 0x26e028u;
    // NOP
label_26e02c:
    // 0x26e02c: 0x0  nop
    ctx->pc = 0x26e02cu;
    // NOP
label_26e030:
    // 0x26e030: 0x3dcb  .word       0x00003DCB                   # movn        $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e030u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_26e034:
    // 0x26e034: 0x5ac0  sll         $t3, $zero, 11
    ctx->pc = 0x26e034u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26e038:
    // 0x26e038: 0x0  nop
    ctx->pc = 0x26e038u;
    // NOP
label_26e03c:
    // 0x26e03c: 0x0  nop
    ctx->pc = 0x26e03cu;
    // NOP
label_26e040:
    // 0x26e040: 0x3dd7  .word       0x00003DD7                   # dsrav       $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e040u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26e044:
    // 0x26e044: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x26e044u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26e048:
    // 0x26e048: 0x0  nop
    ctx->pc = 0x26e048u;
    // NOP
label_26e04c:
    // 0x26e04c: 0x0  nop
    ctx->pc = 0x26e04cu;
    // NOP
label_26e050:
    // 0x26e050: 0x3de2  .word       0x00003DE2                   # neg         $a3, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e050u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_26e054:
    // 0x26e054: 0x7360  .word       0x00007360                   # add         $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26e058:
    // 0x26e058: 0x0  nop
    ctx->pc = 0x26e058u;
    // NOP
label_26e05c:
    // 0x26e05c: 0x0  nop
    ctx->pc = 0x26e05cu;
    // NOP
label_26e060:
    // 0x26e060: 0x3df1  tgeu        $zero, $zero, 247
    ctx->pc = 0x26e060u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e064:
    // 0x26e064: 0x5510  .word       0x00005510                   # mfhi        $t2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e064u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26e068:
    // 0x26e068: 0x0  nop
    ctx->pc = 0x26e068u;
    // NOP
label_26e06c:
    // 0x26e06c: 0x0  nop
    ctx->pc = 0x26e06cu;
    // NOP
label_26e070:
    // 0x26e070: 0x3dfc  dsll32      $a3, $zero, 23
    ctx->pc = 0x26e070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (32 + 23));
label_26e074:
    // 0x26e074: 0x7f10  .word       0x00007F10                   # mfhi        $t7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e074u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26e078:
    // 0x26e078: 0x0  nop
    ctx->pc = 0x26e078u;
    // NOP
label_26e07c:
    // 0x26e07c: 0x0  nop
    ctx->pc = 0x26e07cu;
    // NOP
label_26e080:
    // 0x26e080: 0x3e0c  syscall     248
    ctx->pc = 0x26e080u;
    ctx->pc = 0x26E084u;
runtime->handleSyscall(rdram, ctx, 0xF8u);
label_26e084:
    // 0x26e084: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26e088:
    // 0x26e088: 0x0  nop
    ctx->pc = 0x26e088u;
    // NOP
label_26e08c:
    // 0x26e08c: 0x0  nop
    ctx->pc = 0x26e08cu;
    // NOP
label_26e090:
    // 0x26e090: 0x3e14  .word       0x00003E14                   # dsllv       $a3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e090u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26e094:
    // 0x26e094: 0x5230  tge         $zero, $zero, 328
    ctx->pc = 0x26e094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e098:
    // 0x26e098: 0x0  nop
    ctx->pc = 0x26e098u;
    // NOP
label_26e09c:
    // 0x26e09c: 0x0  nop
    ctx->pc = 0x26e09cu;
    // NOP
label_26e0a0:
    // 0x26e0a0: 0x3e1f  .word       0x00003E1F                   # ddivu       $a3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e0a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26E0A0 raw=0x00003E1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e0a4:
    // 0x26e0a4: 0x7ee0  .word       0x00007EE0                   # add         $t7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26e0a8:
    // 0x26e0a8: 0x0  nop
    ctx->pc = 0x26e0a8u;
    // NOP
label_26e0ac:
    // 0x26e0ac: 0x0  nop
    ctx->pc = 0x26e0acu;
    // NOP
label_26e0b0:
    // 0x26e0b0: 0x3e2f  .word       0x00003E2F                   # dsubu       $a3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e0b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26e0b4:
    // 0x26e0b4: 0x5b40  sll         $t3, $zero, 13
    ctx->pc = 0x26e0b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_26e0b8:
    // 0x26e0b8: 0x0  nop
    ctx->pc = 0x26e0b8u;
    // NOP
label_26e0bc:
    // 0x26e0bc: 0x0  nop
    ctx->pc = 0x26e0bcu;
    // NOP
label_26e0c0:
    // 0x26e0c0: 0x3e3b  dsra        $a3, $zero, 24
    ctx->pc = 0x26e0c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> 24);
label_26e0c4:
    // 0x26e0c4: 0x5f00  sll         $t3, $zero, 28
    ctx->pc = 0x26e0c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26e0c8:
    // 0x26e0c8: 0x0  nop
    ctx->pc = 0x26e0c8u;
    // NOP
label_26e0cc:
    // 0x26e0cc: 0x0  nop
    ctx->pc = 0x26e0ccu;
    // NOP
label_26e0d0:
    // 0x26e0d0: 0x3e47  .word       0x00003E47                   # srav        $a3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e0d0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e0d4:
    // 0x26e0d4: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e0d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26e0d8:
    // 0x26e0d8: 0x0  nop
    ctx->pc = 0x26e0d8u;
    // NOP
label_26e0dc:
    // 0x26e0dc: 0x0  nop
    ctx->pc = 0x26e0dcu;
    // NOP
label_26e0e0:
    // 0x26e0e0: 0x3e53  .word       0x00003E53                   # mtlo        $zero # 00003E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e0e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_26e0e4:
    // 0x26e0e4: 0x7840  sll         $t7, $zero, 1
    ctx->pc = 0x26e0e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26e0e8:
    // 0x26e0e8: 0x0  nop
    ctx->pc = 0x26e0e8u;
    // NOP
label_26e0ec:
    // 0x26e0ec: 0x0  nop
    ctx->pc = 0x26e0ecu;
    // NOP
label_26e0f0:
    // 0x26e0f0: 0x3e63  .word       0x00003E63                   # negu        $a3, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26e0f4:
    // 0x26e0f4: 0x5aa0  .word       0x00005AA0                   # add         $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e0f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26e0f8:
    // 0x26e0f8: 0x0  nop
    ctx->pc = 0x26e0f8u;
    // NOP
label_26e0fc:
    // 0x26e0fc: 0x0  nop
    ctx->pc = 0x26e0fcu;
    // NOP
label_26e100:
    // 0x26e100: 0x3e6f  .word       0x00003E6F                   # dsubu       $a3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26e104:
    // 0x26e104: 0x84c0  sll         $s0, $zero, 19
    ctx->pc = 0x26e104u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26e108:
    // 0x26e108: 0x0  nop
    ctx->pc = 0x26e108u;
    // NOP
label_26e10c:
    // 0x26e10c: 0x0  nop
    ctx->pc = 0x26e10cu;
    // NOP
label_26e110:
    // 0x26e110: 0x3e80  sll         $a3, $zero, 26
    ctx->pc = 0x26e110u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26e114:
    // 0x26e114: 0x5b10  .word       0x00005B10                   # mfhi        $t3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e114u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26e118:
    // 0x26e118: 0x0  nop
    ctx->pc = 0x26e118u;
    // NOP
label_26e11c:
    // 0x26e11c: 0x0  nop
    ctx->pc = 0x26e11cu;
    // NOP
label_26e120:
    // 0x26e120: 0x3e8c  syscall     250
    ctx->pc = 0x26e120u;
    ctx->pc = 0x26E124u;
runtime->handleSyscall(rdram, ctx, 0xFAu);
label_26e124:
    // 0x26e124: 0x7700  sll         $t6, $zero, 28
    ctx->pc = 0x26e124u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26e128:
    // 0x26e128: 0x0  nop
    ctx->pc = 0x26e128u;
    // NOP
label_26e12c:
    // 0x26e12c: 0x0  nop
    ctx->pc = 0x26e12cu;
    // NOP
label_26e130:
    // 0x26e130: 0x3e9b  .word       0x00003E9B                   # divu        $a3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e130u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26e134:
    // 0x26e134: 0x50c0  sll         $t2, $zero, 3
    ctx->pc = 0x26e134u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26e138:
    // 0x26e138: 0x0  nop
    ctx->pc = 0x26e138u;
    // NOP
label_26e13c:
    // 0x26e13c: 0x0  nop
    ctx->pc = 0x26e13cu;
    // NOP
label_26e140:
    // 0x26e140: 0x3ea6  .word       0x00003EA6                   # xor         $a3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e140u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26e144:
    // 0x26e144: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x26e144u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26e148:
    // 0x26e148: 0x0  nop
    ctx->pc = 0x26e148u;
    // NOP
label_26e14c:
    // 0x26e14c: 0x0  nop
    ctx->pc = 0x26e14cu;
    // NOP
label_26e150:
    // 0x26e150: 0x3eb1  tgeu        $zero, $zero, 250
    ctx->pc = 0x26e150u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e154:
    // 0x26e154: 0x4a80  sll         $t1, $zero, 10
    ctx->pc = 0x26e154u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26e158:
    // 0x26e158: 0x0  nop
    ctx->pc = 0x26e158u;
    // NOP
label_26e15c:
    // 0x26e15c: 0x0  nop
    ctx->pc = 0x26e15cu;
    // NOP
label_26e160:
    // 0x26e160: 0x3ebb  dsra        $a3, $zero, 26
    ctx->pc = 0x26e160u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> 26);
label_26e164:
    // 0x26e164: 0x2b30  tge         $zero, $zero, 172
    ctx->pc = 0x26e164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e168:
    // 0x26e168: 0x0  nop
    ctx->pc = 0x26e168u;
    // NOP
label_26e16c:
    // 0x26e16c: 0x0  nop
    ctx->pc = 0x26e16cu;
    // NOP
label_26e170:
    // 0x26e170: 0x3ec1  .word       0x00003EC1                   # INVALID     $zero, $zero, 0x3EC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26E170 raw=0x00003EC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e174:
    // 0x26e174: 0x5a00  sll         $t3, $zero, 8
    ctx->pc = 0x26e174u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26e178:
    // 0x26e178: 0x0  nop
    ctx->pc = 0x26e178u;
    // NOP
label_26e17c:
    // 0x26e17c: 0x0  nop
    ctx->pc = 0x26e17cu;
    // NOP
label_26e180:
    // 0x26e180: 0x3ecd  break       0, 251
    ctx->pc = 0x26e180u;
    runtime->handleBreak(rdram, ctx);
label_26e184:
    // 0x26e184: 0x8f90  .word       0x00008F90                   # mfhi        $s1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e184u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26e188:
    // 0x26e188: 0x0  nop
    ctx->pc = 0x26e188u;
    // NOP
label_26e18c:
    // 0x26e18c: 0x0  nop
    ctx->pc = 0x26e18cu;
    // NOP
label_26e190:
    // 0x26e190: 0x3edf  .word       0x00003EDF                   # ddivu       $a3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26E190 raw=0x00003EDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e194:
    // 0x26e194: 0x49d0  .word       0x000049D0                   # mfhi        $t1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e194u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26e198:
    // 0x26e198: 0x0  nop
    ctx->pc = 0x26e198u;
    // NOP
label_26e19c:
    // 0x26e19c: 0x0  nop
    ctx->pc = 0x26e19cu;
    // NOP
label_26e1a0:
    // 0x26e1a0: 0x3ee9  .word       0x00003EE9                   # mtsa        $zero # 00003EC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e1a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26e1a4:
    // 0x26e1a4: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e1a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26e1a8:
    // 0x26e1a8: 0x0  nop
    ctx->pc = 0x26e1a8u;
    // NOP
label_26e1ac:
    // 0x26e1ac: 0x0  nop
    ctx->pc = 0x26e1acu;
    // NOP
label_26e1b0:
    // 0x26e1b0: 0x3ef5  .word       0x00003EF5                   # INVALID     $zero, $zero, 0x3EF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e1b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26E1B0 raw=0x00003EF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e1b4:
    // 0x26e1b4: 0x86c0  sll         $s0, $zero, 27
    ctx->pc = 0x26e1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26e1b8:
    // 0x26e1b8: 0x0  nop
    ctx->pc = 0x26e1b8u;
    // NOP
label_26e1bc:
    // 0x26e1bc: 0x0  nop
    ctx->pc = 0x26e1bcu;
    // NOP
label_26e1c0:
    // 0x26e1c0: 0x3f06  .word       0x00003F06                   # srlv        $a3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e1c4:
    // 0x26e1c4: 0x7320  .word       0x00007320                   # add         $t6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e1c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26e1c8:
    // 0x26e1c8: 0x0  nop
    ctx->pc = 0x26e1c8u;
    // NOP
label_26e1cc:
    // 0x26e1cc: 0x0  nop
    ctx->pc = 0x26e1ccu;
    // NOP
label_26e1d0:
    // 0x26e1d0: 0x3f15  .word       0x00003F15                   # INVALID     $zero, $zero, 0x3F15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e1d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26E1D0 raw=0x00003F15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e1d4:
    // 0x26e1d4: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e1d4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26e1d8:
    // 0x26e1d8: 0x0  nop
    ctx->pc = 0x26e1d8u;
    // NOP
label_26e1dc:
    // 0x26e1dc: 0x0  nop
    ctx->pc = 0x26e1dcu;
    // NOP
label_26e1e0:
    // 0x26e1e0: 0x3f20  .word       0x00003F20                   # add         $a3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e1e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26e1e4:
    // 0x26e1e4: 0xb790  .word       0x0000B790                   # mfhi        $s6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e1e4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26e1e8:
    // 0x26e1e8: 0x0  nop
    ctx->pc = 0x26e1e8u;
    // NOP
label_26e1ec:
    // 0x26e1ec: 0x0  nop
    ctx->pc = 0x26e1ecu;
    // NOP
label_26e1f0:
    // 0x26e1f0: 0x3f37  .word       0x00003F37                   # INVALID     $zero, $zero, 0x3F37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e1f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26E1F0 raw=0x00003F37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e1f4:
    // 0x26e1f4: 0xd2c0  sll         $k0, $zero, 11
    ctx->pc = 0x26e1f4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26e1f8:
    // 0x26e1f8: 0x0  nop
    ctx->pc = 0x26e1f8u;
    // NOP
label_26e1fc:
    // 0x26e1fc: 0x0  nop
    ctx->pc = 0x26e1fcu;
    // NOP
label_26e200:
    // 0x26e200: 0x3f52  .word       0x00003F52                   # mflo        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e200u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_26e204:
    // 0x26e204: 0xb7f0  tge         $zero, $zero, 735
    ctx->pc = 0x26e204u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e208:
    // 0x26e208: 0x0  nop
    ctx->pc = 0x26e208u;
    // NOP
label_26e20c:
    // 0x26e20c: 0x0  nop
    ctx->pc = 0x26e20cu;
    // NOP
label_26e210:
    // 0x26e210: 0x3f69  .word       0x00003F69                   # mtsa        $zero # 00003F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e210u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26e214:
    // 0x26e214: 0xc200  sll         $t8, $zero, 8
    ctx->pc = 0x26e214u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26e218:
    // 0x26e218: 0x0  nop
    ctx->pc = 0x26e218u;
    // NOP
label_26e21c:
    // 0x26e21c: 0x0  nop
    ctx->pc = 0x26e21cu;
    // NOP
label_26e220:
    // 0x26e220: 0x3f82  srl         $a3, $zero, 30
    ctx->pc = 0x26e220u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 30));
label_26e224:
    // 0x26e224: 0xbf40  sll         $s7, $zero, 29
    ctx->pc = 0x26e224u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26e228:
    // 0x26e228: 0x0  nop
    ctx->pc = 0x26e228u;
    // NOP
label_26e22c:
    // 0x26e22c: 0x0  nop
    ctx->pc = 0x26e22cu;
    // NOP
label_26e230:
    // 0x26e230: 0x3f9a  .word       0x00003F9A                   # div         $a3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e230u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26e234:
    // 0x26e234: 0x10470  tge         $zero, $at, 17
    ctx->pc = 0x26e234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26e238:
    // 0x26e238: 0x0  nop
    ctx->pc = 0x26e238u;
    // NOP
label_26e23c:
    // 0x26e23c: 0x0  nop
    ctx->pc = 0x26e23cu;
    // NOP
label_26e240:
    // 0x26e240: 0x3fbb  dsra        $a3, $zero, 30
    ctx->pc = 0x26e240u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> 30);
label_26e244:
    // 0x26e244: 0xca30  tge         $zero, $zero, 808
    ctx->pc = 0x26e244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e248:
    // 0x26e248: 0x0  nop
    ctx->pc = 0x26e248u;
    // NOP
label_26e24c:
    // 0x26e24c: 0x0  nop
    ctx->pc = 0x26e24cu;
    // NOP
label_26e250:
    // 0x26e250: 0x3fd5  .word       0x00003FD5                   # INVALID     $zero, $zero, 0x3FD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26E250 raw=0x00003FD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e254:
    // 0x26e254: 0xb4c0  sll         $s6, $zero, 19
    ctx->pc = 0x26e254u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26e258:
    // 0x26e258: 0x0  nop
    ctx->pc = 0x26e258u;
    // NOP
label_26e25c:
    // 0x26e25c: 0x0  nop
    ctx->pc = 0x26e25cu;
    // NOP
label_26e260:
    // 0x26e260: 0x3fec  .word       0x00003FEC                   # dadd        $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e260u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_26e264:
    // 0x26e264: 0x97f0  tge         $zero, $zero, 607
    ctx->pc = 0x26e264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e268:
    // 0x26e268: 0x0  nop
    ctx->pc = 0x26e268u;
    // NOP
label_26e26c:
    // 0x26e26c: 0x0  nop
    ctx->pc = 0x26e26cu;
    // NOP
label_26e270:
    // 0x26e270: 0x3fff  dsra32      $a3, $zero, 31
    ctx->pc = 0x26e270u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 31));
label_26e274:
    // 0x26e274: 0xe7f0  tge         $zero, $zero, 927
    ctx->pc = 0x26e274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e278:
    // 0x26e278: 0x0  nop
    ctx->pc = 0x26e278u;
    // NOP
label_26e27c:
    // 0x26e27c: 0x0  nop
    ctx->pc = 0x26e27cu;
    // NOP
label_26e280:
    // 0x26e280: 0x401c  .word       0x0000401C                   # dmult       $zero, $zero # 00004000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26E280 raw=0x0000401C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e284:
    // 0x26e284: 0xcc20  .word       0x0000CC20                   # add         $t9, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26e288:
    // 0x26e288: 0x0  nop
    ctx->pc = 0x26e288u;
    // NOP
label_26e28c:
    // 0x26e28c: 0x0  nop
    ctx->pc = 0x26e28cu;
    // NOP
label_26e290:
    // 0x26e290: 0x4036  tne         $zero, $zero, 256
    ctx->pc = 0x26e290u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e294:
    // 0x26e294: 0xce30  tge         $zero, $zero, 824
    ctx->pc = 0x26e294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e298:
    // 0x26e298: 0x0  nop
    ctx->pc = 0x26e298u;
    // NOP
label_26e29c:
    // 0x26e29c: 0x0  nop
    ctx->pc = 0x26e29cu;
    // NOP
label_26e2a0:
    // 0x26e2a0: 0x4050  .word       0x00004050                   # mfhi        $t0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e2a0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26e2a4:
    // 0x26e2a4: 0x9750  .word       0x00009750                   # mfhi        $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e2a4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26e2a8:
    // 0x26e2a8: 0x0  nop
    ctx->pc = 0x26e2a8u;
    // NOP
label_26e2ac:
    // 0x26e2ac: 0x0  nop
    ctx->pc = 0x26e2acu;
    // NOP
label_26e2b0:
    // 0x26e2b0: 0x4063  .word       0x00004063                   # negu        $t0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26e2b4:
    // 0x26e2b4: 0xc430  tge         $zero, $zero, 784
    ctx->pc = 0x26e2b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e2b8:
    // 0x26e2b8: 0x0  nop
    ctx->pc = 0x26e2b8u;
    // NOP
label_26e2bc:
    // 0x26e2bc: 0x0  nop
    ctx->pc = 0x26e2bcu;
    // NOP
label_26e2c0:
    // 0x26e2c0: 0x407c  dsll32      $t0, $zero, 1
    ctx->pc = 0x26e2c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 1));
label_26e2c4:
    // 0x26e2c4: 0xdf80  sll         $k1, $zero, 30
    ctx->pc = 0x26e2c4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26e2c8:
    // 0x26e2c8: 0x0  nop
    ctx->pc = 0x26e2c8u;
    // NOP
label_26e2cc:
    // 0x26e2cc: 0x0  nop
    ctx->pc = 0x26e2ccu;
    // NOP
label_26e2d0:
    // 0x26e2d0: 0x4098  .word       0x00004098                   # mult        $t0, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_26e2d4:
    // 0x26e2d4: 0x92d0  .word       0x000092D0                   # mfhi        $s2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e2d4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26e2d8:
    // 0x26e2d8: 0x0  nop
    ctx->pc = 0x26e2d8u;
    // NOP
label_26e2dc:
    // 0x26e2dc: 0x0  nop
    ctx->pc = 0x26e2dcu;
    // NOP
label_26e2e0:
    // 0x26e2e0: 0x40ab  .word       0x000040AB                   # sltu        $t0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e2e0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26e2e4:
    // 0x26e2e4: 0xec40  sll         $sp, $zero, 17
    ctx->pc = 0x26e2e4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26e2e8:
    // 0x26e2e8: 0x0  nop
    ctx->pc = 0x26e2e8u;
    // NOP
label_26e2ec:
    // 0x26e2ec: 0x0  nop
    ctx->pc = 0x26e2ecu;
    // NOP
label_26e2f0:
    // 0x26e2f0: 0x40c9  .word       0x000040C9                   # jalr        $t0, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_26e2f4:
    if (ctx->pc == 0x26E2F4u) {
        ctx->pc = 0x26E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2F0u;
        // 0x26e2f4: 0xe790  .word       0x0000E790                   # mfhi        $gp # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 28, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E2F8u;
        goto label_26e2f8;
    }
    ctx->pc = 0x26E2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x26E2F8u);
        ctx->pc = 0x26E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E2F0u;
        // 0x26e2f4: 0xe790  .word       0x0000E790                   # mfhi        $gp # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 28, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E2F0u, 0x26E2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E2F8u;
label_26e2f8:
    // 0x26e2f8: 0x0  nop
    ctx->pc = 0x26e2f8u;
    // NOP
label_26e2fc:
    // 0x26e2fc: 0x0  nop
    ctx->pc = 0x26e2fcu;
    // NOP
label_26e300:
    // 0x26e300: 0x40e6  .word       0x000040E6                   # xor         $t0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e300u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26e304:
    // 0x26e304: 0x13f90  .word       0x00013F90                   # mfhi        $a3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e304u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26e308:
    // 0x26e308: 0x0  nop
    ctx->pc = 0x26e308u;
    // NOP
label_26e30c:
    // 0x26e30c: 0x0  nop
    ctx->pc = 0x26e30cu;
    // NOP
label_26e310:
    // 0x26e310: 0x410e  .word       0x0000410E                   # INVALID     $zero, $zero, 0x410E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26E310 raw=0x0000410E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e314:
    // 0x26e314: 0xcec0  sll         $t9, $zero, 27
    ctx->pc = 0x26e314u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26e318:
    // 0x26e318: 0x0  nop
    ctx->pc = 0x26e318u;
    // NOP
label_26e31c:
    // 0x26e31c: 0x0  nop
    ctx->pc = 0x26e31cu;
    // NOP
label_26e320:
    // 0x26e320: 0x4128  .word       0x00004128                   # mfsa        $t0 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e320u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_26e324:
    // 0x26e324: 0x15c50  .word       0x00015C50                   # mfhi        $t3 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e324u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26e328:
    // 0x26e328: 0x0  nop
    ctx->pc = 0x26e328u;
    // NOP
label_26e32c:
    // 0x26e32c: 0x0  nop
    ctx->pc = 0x26e32cu;
    // NOP
label_26e330:
    // 0x26e330: 0x4154  .word       0x00004154                   # dsllv       $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e330u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26e334:
    // 0x26e334: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e334u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_26e338:
    // 0x26e338: 0x0  nop
    ctx->pc = 0x26e338u;
    // NOP
label_26e33c:
    // 0x26e33c: 0x0  nop
    ctx->pc = 0x26e33cu;
    // NOP
label_26e340:
    // 0x26e340: 0x416f  .word       0x0000416F                   # dsubu       $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e340u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26e344:
    // 0x26e344: 0xa1b0  tge         $zero, $zero, 646
    ctx->pc = 0x26e344u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e348:
    // 0x26e348: 0x0  nop
    ctx->pc = 0x26e348u;
    // NOP
label_26e34c:
    // 0x26e34c: 0x0  nop
    ctx->pc = 0x26e34cu;
    // NOP
label_26e350:
    // 0x26e350: 0x4184  .word       0x00004184                   # sllv        $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e350u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e354:
    // 0x26e354: 0xe070  tge         $zero, $zero, 897
    ctx->pc = 0x26e354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e358:
    // 0x26e358: 0x0  nop
    ctx->pc = 0x26e358u;
    // NOP
label_26e35c:
    // 0x26e35c: 0x0  nop
    ctx->pc = 0x26e35cu;
    // NOP
label_26e360:
    // 0x26e360: 0x41a1  .word       0x000041A1                   # addu        $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26e364:
    // 0x26e364: 0x126c0  sll         $a0, $at, 27
    ctx->pc = 0x26e364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_26e368:
    // 0x26e368: 0x0  nop
    ctx->pc = 0x26e368u;
    // NOP
label_26e36c:
    // 0x26e36c: 0x0  nop
    ctx->pc = 0x26e36cu;
    // NOP
label_26e370:
    // 0x26e370: 0x41c6  .word       0x000041C6                   # srlv        $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e370u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e374:
    // 0x26e374: 0xe690  .word       0x0000E690                   # mfhi        $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e374u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_26e378:
    // 0x26e378: 0x0  nop
    ctx->pc = 0x26e378u;
    // NOP
label_26e37c:
    // 0x26e37c: 0x0  nop
    ctx->pc = 0x26e37cu;
    // NOP
label_26e380:
    // 0x26e380: 0x41e3  .word       0x000041E3                   # negu        $t0, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e380u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26e384:
    // 0x26e384: 0xd240  sll         $k0, $zero, 9
    ctx->pc = 0x26e384u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26e388:
    // 0x26e388: 0x0  nop
    ctx->pc = 0x26e388u;
    // NOP
label_26e38c:
    // 0x26e38c: 0x0  nop
    ctx->pc = 0x26e38cu;
    // NOP
label_26e390:
    // 0x26e390: 0x41fe  dsrl32      $t0, $zero, 7
    ctx->pc = 0x26e390u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (32 + 7));
label_26e394:
    // 0x26e394: 0x16a80  sll         $t5, $at, 10
    ctx->pc = 0x26e394u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_26e398:
    // 0x26e398: 0x0  nop
    ctx->pc = 0x26e398u;
    // NOP
label_26e39c:
    // 0x26e39c: 0x0  nop
    ctx->pc = 0x26e39cu;
    // NOP
label_26e3a0:
    // 0x26e3a0: 0x422c  .word       0x0000422C                   # dadd        $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e3a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_26e3a4:
    // 0x26e3a4: 0x10fe0  .word       0x00010FE0                   # add         $at, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e3a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_26e3a8:
    // 0x26e3a8: 0x0  nop
    ctx->pc = 0x26e3a8u;
    // NOP
label_26e3ac:
    // 0x26e3ac: 0x0  nop
    ctx->pc = 0x26e3acu;
    // NOP
label_26e3b0:
    // 0x26e3b0: 0x424e  .word       0x0000424E                   # INVALID     $zero, $zero, 0x424E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e3b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26E3B0 raw=0x0000424E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e3b4:
    // 0x26e3b4: 0xd0c0  sll         $k0, $zero, 3
    ctx->pc = 0x26e3b4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26e3b8:
    // 0x26e3b8: 0x0  nop
    ctx->pc = 0x26e3b8u;
    // NOP
label_26e3bc:
    // 0x26e3bc: 0x0  nop
    ctx->pc = 0x26e3bcu;
    // NOP
label_26e3c0:
    // 0x26e3c0: 0x4269  .word       0x00004269                   # mtsa        $zero # 00004240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e3c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26e3c4:
    // 0x26e3c4: 0x11950  .word       0x00011950                   # mfhi        $v1 # 00010140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e3c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26e3c8:
    // 0x26e3c8: 0x0  nop
    ctx->pc = 0x26e3c8u;
    // NOP
label_26e3cc:
    // 0x26e3cc: 0x0  nop
    ctx->pc = 0x26e3ccu;
    // NOP
label_26e3d0:
    // 0x26e3d0: 0x428d  break       0, 266
    ctx->pc = 0x26e3d0u;
    runtime->handleBreak(rdram, ctx);
label_26e3d4:
    // 0x26e3d4: 0xd820  add         $k1, $zero, $zero
    ctx->pc = 0x26e3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_26e3d8:
    // 0x26e3d8: 0x0  nop
    ctx->pc = 0x26e3d8u;
    // NOP
label_26e3dc:
    // 0x26e3dc: 0x0  nop
    ctx->pc = 0x26e3dcu;
    // NOP
label_26e3e0:
    // 0x26e3e0: 0x42a9  .word       0x000042A9                   # mtsa        $zero # 00004280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e3e0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26e3e4:
    // 0x26e3e4: 0xcec0  sll         $t9, $zero, 27
    ctx->pc = 0x26e3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26e3e8:
    // 0x26e3e8: 0x0  nop
    ctx->pc = 0x26e3e8u;
    // NOP
label_26e3ec:
    // 0x26e3ec: 0x0  nop
    ctx->pc = 0x26e3ecu;
    // NOP
label_26e3f0:
    // 0x26e3f0: 0x42c3  sra         $t0, $zero, 11
    ctx->pc = 0x26e3f0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), 11));
label_26e3f4:
    // 0x26e3f4: 0x14210  .word       0x00014210                   # mfhi        $t0 # 00010200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e3f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26e3f8:
    // 0x26e3f8: 0x0  nop
    ctx->pc = 0x26e3f8u;
    // NOP
label_26e3fc:
    // 0x26e3fc: 0x0  nop
    ctx->pc = 0x26e3fcu;
    // NOP
label_26e400:
    // 0x26e400: 0x42ec  .word       0x000042EC                   # dadd        $t0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e400u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_26e404:
    // 0x26e404: 0xf8f0  tge         $zero, $zero, 995
    ctx->pc = 0x26e404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e408:
    // 0x26e408: 0x0  nop
    ctx->pc = 0x26e408u;
    // NOP
label_26e40c:
    // 0x26e40c: 0x0  nop
    ctx->pc = 0x26e40cu;
    // NOP
label_26e410:
    // 0x26e410: 0x430c  syscall     268
    ctx->pc = 0x26e410u;
    ctx->pc = 0x26E414u;
runtime->handleSyscall(rdram, ctx, 0x10Cu);
label_26e414:
    // 0x26e414: 0xfe70  tge         $zero, $zero, 1017
    ctx->pc = 0x26e414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e418:
    // 0x26e418: 0x0  nop
    ctx->pc = 0x26e418u;
    // NOP
label_26e41c:
    // 0x26e41c: 0x0  nop
    ctx->pc = 0x26e41cu;
    // NOP
label_26e420:
    // 0x26e420: 0x432c  .word       0x0000432C                   # dadd        $t0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e420u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_26e424:
    // 0x26e424: 0xd2a0  .word       0x0000D2A0                   # add         $k0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_26e428:
    // 0x26e428: 0x0  nop
    ctx->pc = 0x26e428u;
    // NOP
label_26e42c:
    // 0x26e42c: 0x0  nop
    ctx->pc = 0x26e42cu;
    // NOP
label_26e430:
    // 0x26e430: 0x4347  .word       0x00004347                   # srav        $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e430u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e434:
    // 0x26e434: 0xad10  .word       0x0000AD10                   # mfhi        $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e434u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26e438:
    // 0x26e438: 0x0  nop
    ctx->pc = 0x26e438u;
    // NOP
label_26e43c:
    // 0x26e43c: 0x0  nop
    ctx->pc = 0x26e43cu;
    // NOP
label_26e440:
    // 0x26e440: 0x435d  .word       0x0000435D                   # dmultu      $zero, $zero # 00004340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26E440 raw=0x0000435D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e444:
    // 0x26e444: 0xcc40  sll         $t9, $zero, 17
    ctx->pc = 0x26e444u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26e448:
    // 0x26e448: 0x0  nop
    ctx->pc = 0x26e448u;
    // NOP
label_26e44c:
    // 0x26e44c: 0x0  nop
    ctx->pc = 0x26e44cu;
    // NOP
label_26e450:
    // 0x26e450: 0x4377  .word       0x00004377                   # INVALID     $zero, $zero, 0x4377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26E450 raw=0x00004377"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e454:
    // 0x26e454: 0xcba0  .word       0x0000CBA0                   # add         $t9, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26e458:
    // 0x26e458: 0x0  nop
    ctx->pc = 0x26e458u;
    // NOP
label_26e45c:
    // 0x26e45c: 0x0  nop
    ctx->pc = 0x26e45cu;
    // NOP
label_26e460:
    // 0x26e460: 0x4391  .word       0x00004391                   # mthi        $zero # 00004380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e460u;
    ctx->hi = GPR_U64(ctx, 0);
label_26e464:
    // 0x26e464: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x26e464u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26e468:
    // 0x26e468: 0x0  nop
    ctx->pc = 0x26e468u;
    // NOP
label_26e46c:
    // 0x26e46c: 0x0  nop
    ctx->pc = 0x26e46cu;
    // NOP
label_26e470:
    // 0x26e470: 0x43aa  .word       0x000043AA                   # slt         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e470u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26e474:
    // 0x26e474: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e474u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26e478:
    // 0x26e478: 0x0  nop
    ctx->pc = 0x26e478u;
    // NOP
label_26e47c:
    // 0x26e47c: 0x0  nop
    ctx->pc = 0x26e47cu;
    // NOP
label_26e480:
    // 0x26e480: 0x43ba  dsrl        $t0, $zero, 14
    ctx->pc = 0x26e480u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> 14);
label_26e484:
    // 0x26e484: 0x8fe0  .word       0x00008FE0                   # add         $s1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26e488:
    // 0x26e488: 0x0  nop
    ctx->pc = 0x26e488u;
    // NOP
label_26e48c:
    // 0x26e48c: 0x0  nop
    ctx->pc = 0x26e48cu;
    // NOP
label_26e490:
    // 0x26e490: 0x43cc  syscall     271
    ctx->pc = 0x26e490u;
    ctx->pc = 0x26E494u;
runtime->handleSyscall(rdram, ctx, 0x10Fu);
label_26e494:
    // 0x26e494: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e494u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26e498:
    // 0x26e498: 0x0  nop
    ctx->pc = 0x26e498u;
    // NOP
label_26e49c:
    // 0x26e49c: 0x0  nop
    ctx->pc = 0x26e49cu;
    // NOP
label_26e4a0:
    // 0x26e4a0: 0x43db  .word       0x000043DB                   # divu        $t0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4a0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26e4a4:
    // 0x26e4a4: 0x65f0  tge         $zero, $zero, 407
    ctx->pc = 0x26e4a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e4a8:
    // 0x26e4a8: 0x0  nop
    ctx->pc = 0x26e4a8u;
    // NOP
label_26e4ac:
    // 0x26e4ac: 0x0  nop
    ctx->pc = 0x26e4acu;
    // NOP
label_26e4b0:
    // 0x26e4b0: 0x43e8  .word       0x000043E8                   # mfsa        $t0 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e4b0u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_26e4b4:
    // 0x26e4b4: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4b4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26e4b8:
    // 0x26e4b8: 0x0  nop
    ctx->pc = 0x26e4b8u;
    // NOP
label_26e4bc:
    // 0x26e4bc: 0x0  nop
    ctx->pc = 0x26e4bcu;
    // NOP
label_26e4c0:
    // 0x26e4c0: 0x43f8  dsll        $t0, $zero, 15
    ctx->pc = 0x26e4c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << 15);
label_26e4c4:
    // 0x26e4c4: 0xbfe0  .word       0x0000BFE0                   # add         $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26e4c8:
    // 0x26e4c8: 0x0  nop
    ctx->pc = 0x26e4c8u;
    // NOP
label_26e4cc:
    // 0x26e4cc: 0x0  nop
    ctx->pc = 0x26e4ccu;
    // NOP
label_26e4d0:
    // 0x26e4d0: 0x4410  .word       0x00004410                   # mfhi        $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4d0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26e4d4:
    // 0x26e4d4: 0x88c0  sll         $s1, $zero, 3
    ctx->pc = 0x26e4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26e4d8:
    // 0x26e4d8: 0x0  nop
    ctx->pc = 0x26e4d8u;
    // NOP
label_26e4dc:
    // 0x26e4dc: 0x0  nop
    ctx->pc = 0x26e4dcu;
    // NOP
label_26e4e0:
    // 0x26e4e0: 0x4422  .word       0x00004422                   # neg         $t0, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_26e4e4:
    // 0x26e4e4: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26e4e8:
    // 0x26e4e8: 0x0  nop
    ctx->pc = 0x26e4e8u;
    // NOP
label_26e4ec:
    // 0x26e4ec: 0x0  nop
    ctx->pc = 0x26e4ecu;
    // NOP
label_26e4f0:
    // 0x26e4f0: 0x442e  .word       0x0000442E                   # dsub        $t0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_26e4f4:
    // 0x26e4f4: 0x6800  sll         $t5, $zero, 0
    ctx->pc = 0x26e4f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26e4f8:
    // 0x26e4f8: 0x0  nop
    ctx->pc = 0x26e4f8u;
    // NOP
label_26e4fc:
    // 0x26e4fc: 0x0  nop
    ctx->pc = 0x26e4fcu;
    // NOP
label_26e500:
    // 0x26e500: 0x443b  dsra        $t0, $zero, 16
    ctx->pc = 0x26e500u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> 16);
label_26e504:
    // 0x26e504: 0x6e70  tge         $zero, $zero, 441
    ctx->pc = 0x26e504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e508:
    // 0x26e508: 0x0  nop
    ctx->pc = 0x26e508u;
    // NOP
label_26e50c:
    // 0x26e50c: 0x0  nop
    ctx->pc = 0x26e50cu;
    // NOP
label_26e510:
    // 0x26e510: 0x4449  .word       0x00004449                   # jalr        $t0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_26e514:
    if (ctx->pc == 0x26E514u) {
        ctx->pc = 0x26E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E510u;
        // 0x26e514: 0x3d00  sll         $a3, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E518u;
        goto label_26e518;
    }
    ctx->pc = 0x26E510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x26E518u);
        ctx->pc = 0x26E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E510u;
        // 0x26e514: 0x3d00  sll         $a3, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E510u, 0x26E518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E518u;
label_26e518:
    // 0x26e518: 0x0  nop
    ctx->pc = 0x26e518u;
    // NOP
label_26e51c:
    // 0x26e51c: 0x0  nop
    ctx->pc = 0x26e51cu;
    // NOP
label_26e520:
    // 0x26e520: 0x4451  .word       0x00004451                   # mthi        $zero # 00004440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e520u;
    ctx->hi = GPR_U64(ctx, 0);
label_26e524:
    // 0x26e524: 0x8150  .word       0x00008150                   # mfhi        $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e524u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26e528:
    // 0x26e528: 0x0  nop
    ctx->pc = 0x26e528u;
    // NOP
label_26e52c:
    // 0x26e52c: 0x0  nop
    ctx->pc = 0x26e52cu;
    // NOP
label_26e530:
    // 0x26e530: 0x4462  .word       0x00004462                   # neg         $t0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e530u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_26e534:
    // 0x26e534: 0x67e0  .word       0x000067E0                   # add         $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e534u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26e538:
    // 0x26e538: 0x0  nop
    ctx->pc = 0x26e538u;
    // NOP
label_26e53c:
    // 0x26e53c: 0x0  nop
    ctx->pc = 0x26e53cu;
    // NOP
label_26e540:
    // 0x26e540: 0x446f  .word       0x0000446F                   # dsubu       $t0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26e544:
    // 0x26e544: 0x6d40  sll         $t5, $zero, 21
    ctx->pc = 0x26e544u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_26e548:
    // 0x26e548: 0x0  nop
    ctx->pc = 0x26e548u;
    // NOP
label_26e54c:
    // 0x26e54c: 0x0  nop
    ctx->pc = 0x26e54cu;
    // NOP
label_26e550:
    // 0x26e550: 0x447d  .word       0x0000447D                   # INVALID     $zero, $zero, 0x447D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26E550 raw=0x0000447D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e554:
    // 0x26e554: 0x8280  sll         $s0, $zero, 10
    ctx->pc = 0x26e554u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26e558:
    // 0x26e558: 0x0  nop
    ctx->pc = 0x26e558u;
    // NOP
label_26e55c:
    // 0x26e55c: 0x0  nop
    ctx->pc = 0x26e55cu;
    // NOP
label_26e560:
    // 0x26e560: 0x448e  .word       0x0000448E                   # INVALID     $zero, $zero, 0x448E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26E560 raw=0x0000448E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e564:
    // 0x26e564: 0x6120  .word       0x00006120                   # add         $t4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26e568:
    // 0x26e568: 0x0  nop
    ctx->pc = 0x26e568u;
    // NOP
label_26e56c:
    // 0x26e56c: 0x0  nop
    ctx->pc = 0x26e56cu;
    // NOP
label_26e570:
    // 0x26e570: 0x449b  .word       0x0000449B                   # divu        $t0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e570u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26e574:
    // 0x26e574: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x26e574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26e578:
    // 0x26e578: 0x0  nop
    ctx->pc = 0x26e578u;
    // NOP
label_26e57c:
    // 0x26e57c: 0x0  nop
    ctx->pc = 0x26e57cu;
    // NOP
label_26e580:
    // 0x26e580: 0x44a8  .word       0x000044A8                   # mfsa        $t0 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e580u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_26e584:
    // 0x26e584: 0x8590  .word       0x00008590                   # mfhi        $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e584u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26e588:
    // 0x26e588: 0x0  nop
    ctx->pc = 0x26e588u;
    // NOP
label_26e58c:
    // 0x26e58c: 0x0  nop
    ctx->pc = 0x26e58cu;
    // NOP
label_26e590:
    // 0x26e590: 0x44b9  .word       0x000044B9                   # INVALID     $zero, $zero, 0x44B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26E590 raw=0x000044B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e594:
    // 0x26e594: 0x6ba0  .word       0x00006BA0                   # add         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26e598:
    // 0x26e598: 0x0  nop
    ctx->pc = 0x26e598u;
    // NOP
label_26e59c:
    // 0x26e59c: 0x0  nop
    ctx->pc = 0x26e59cu;
    // NOP
label_26e5a0:
    // 0x26e5a0: 0x44c7  .word       0x000044C7                   # srav        $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e5a0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e5a4:
    // 0x26e5a4: 0x6500  sll         $t4, $zero, 20
    ctx->pc = 0x26e5a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26e5a8:
    // 0x26e5a8: 0x0  nop
    ctx->pc = 0x26e5a8u;
    // NOP
label_26e5ac:
    // 0x26e5ac: 0x0  nop
    ctx->pc = 0x26e5acu;
    // NOP
label_26e5b0:
    // 0x26e5b0: 0x44d4  .word       0x000044D4                   # dsllv       $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e5b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26e5b4:
    // 0x26e5b4: 0xd870  tge         $zero, $zero, 865
    ctx->pc = 0x26e5b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e5b8:
    // 0x26e5b8: 0x0  nop
    ctx->pc = 0x26e5b8u;
    // NOP
label_26e5bc:
    // 0x26e5bc: 0x0  nop
    ctx->pc = 0x26e5bcu;
    // NOP
label_26e5c0:
    // 0x26e5c0: 0x44f0  tge         $zero, $zero, 275
    ctx->pc = 0x26e5c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e5c4:
    // 0x26e5c4: 0x7570  tge         $zero, $zero, 469
    ctx->pc = 0x26e5c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e5c8:
    // 0x26e5c8: 0x0  nop
    ctx->pc = 0x26e5c8u;
    // NOP
label_26e5cc:
    // 0x26e5cc: 0x0  nop
    ctx->pc = 0x26e5ccu;
    // NOP
label_26e5d0:
    // 0x26e5d0: 0x44ff  dsra32      $t0, $zero, 19
    ctx->pc = 0x26e5d0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (32 + 19));
label_26e5d4:
    // 0x26e5d4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x26e5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26e5d8:
    // 0x26e5d8: 0x0  nop
    ctx->pc = 0x26e5d8u;
    // NOP
label_26e5dc:
    // 0x26e5dc: 0x0  nop
    ctx->pc = 0x26e5dcu;
    // NOP
label_26e5e0:
    // 0x26e5e0: 0x4510  .word       0x00004510                   # mfhi        $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e5e0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26e5e4:
    // 0x26e5e4: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x26e5e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26e5e8:
    // 0x26e5e8: 0x0  nop
    ctx->pc = 0x26e5e8u;
    // NOP
label_26e5ec:
    // 0x26e5ec: 0x0  nop
    ctx->pc = 0x26e5ecu;
    // NOP
label_26e5f0:
    // 0x26e5f0: 0x4520  .word       0x00004520                   # add         $t0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e5f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26e5f4:
    // 0x26e5f4: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e5f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26e5f8:
    // 0x26e5f8: 0x0  nop
    ctx->pc = 0x26e5f8u;
    // NOP
label_26e5fc:
    // 0x26e5fc: 0x0  nop
    ctx->pc = 0x26e5fcu;
    // NOP
label_26e600:
    // 0x26e600: 0x4535  .word       0x00004535                   # INVALID     $zero, $zero, 0x4535 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26E600 raw=0x00004535"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e604:
    // 0x26e604: 0xa630  tge         $zero, $zero, 664
    ctx->pc = 0x26e604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e608:
    // 0x26e608: 0x0  nop
    ctx->pc = 0x26e608u;
    // NOP
label_26e60c:
    // 0x26e60c: 0x0  nop
    ctx->pc = 0x26e60cu;
    // NOP
label_26e610:
    // 0x26e610: 0x454a  .word       0x0000454A                   # movz        $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e610u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_26e614:
    // 0x26e614: 0x6270  tge         $zero, $zero, 393
    ctx->pc = 0x26e614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e618:
    // 0x26e618: 0x0  nop
    ctx->pc = 0x26e618u;
    // NOP
label_26e61c:
    // 0x26e61c: 0x0  nop
    ctx->pc = 0x26e61cu;
    // NOP
label_26e620:
    // 0x26e620: 0x4557  .word       0x00004557                   # dsrav       $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e620u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26e624:
    // 0x26e624: 0xc9a0  .word       0x0000C9A0                   # add         $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26e628:
    // 0x26e628: 0x0  nop
    ctx->pc = 0x26e628u;
    // NOP
label_26e62c:
    // 0x26e62c: 0x0  nop
    ctx->pc = 0x26e62cu;
    // NOP
label_26e630:
    // 0x26e630: 0x4571  tgeu        $zero, $zero, 277
    ctx->pc = 0x26e630u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e634:
    // 0x26e634: 0x7aa0  .word       0x00007AA0                   # add         $t7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26e638:
    // 0x26e638: 0x0  nop
    ctx->pc = 0x26e638u;
    // NOP
label_26e63c:
    // 0x26e63c: 0x0  nop
    ctx->pc = 0x26e63cu;
    // NOP
label_26e640:
    // 0x26e640: 0x4581  .word       0x00004581                   # INVALID     $zero, $zero, 0x4581 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26E640 raw=0x00004581"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e644:
    // 0x26e644: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26e648:
    // 0x26e648: 0x0  nop
    ctx->pc = 0x26e648u;
    // NOP
label_26e64c:
    // 0x26e64c: 0x0  nop
    ctx->pc = 0x26e64cu;
    // NOP
label_26e650:
    // 0x26e650: 0x4590  .word       0x00004590                   # mfhi        $t0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e650u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26e654:
    // 0x26e654: 0x7cd0  .word       0x00007CD0                   # mfhi        $t7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e654u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26e658:
    // 0x26e658: 0x0  nop
    ctx->pc = 0x26e658u;
    // NOP
label_26e65c:
    // 0x26e65c: 0x0  nop
    ctx->pc = 0x26e65cu;
    // NOP
label_26e660:
    // 0x26e660: 0x45a0  .word       0x000045A0                   # add         $t0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e660u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26e664:
    // 0x26e664: 0xab00  sll         $s5, $zero, 12
    ctx->pc = 0x26e664u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26e668:
    // 0x26e668: 0x0  nop
    ctx->pc = 0x26e668u;
    // NOP
label_26e66c:
    // 0x26e66c: 0x0  nop
    ctx->pc = 0x26e66cu;
    // NOP
label_26e670:
    // 0x26e670: 0x45b6  tne         $zero, $zero, 278
    ctx->pc = 0x26e670u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e674:
    // 0x26e674: 0x5ee0  .word       0x00005EE0                   # add         $t3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26e678:
    // 0x26e678: 0x0  nop
    ctx->pc = 0x26e678u;
    // NOP
label_26e67c:
    // 0x26e67c: 0x0  nop
    ctx->pc = 0x26e67cu;
    // NOP
label_26e680:
    // 0x26e680: 0x45c2  srl         $t0, $zero, 23
    ctx->pc = 0x26e680u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 23));
label_26e684:
    // 0x26e684: 0x98d0  .word       0x000098D0                   # mfhi        $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e684u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26e688:
    // 0x26e688: 0x0  nop
    ctx->pc = 0x26e688u;
    // NOP
label_26e68c:
    // 0x26e68c: 0x0  nop
    ctx->pc = 0x26e68cu;
    // NOP
label_26e690:
    // 0x26e690: 0x45d6  .word       0x000045D6                   # dsrlv       $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26e694:
    // 0x26e694: 0xc240  sll         $t8, $zero, 9
    ctx->pc = 0x26e694u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26e698:
    // 0x26e698: 0x0  nop
    ctx->pc = 0x26e698u;
    // NOP
label_26e69c:
    // 0x26e69c: 0x0  nop
    ctx->pc = 0x26e69cu;
    // NOP
label_26e6a0:
    // 0x26e6a0: 0x45ef  .word       0x000045EF                   # dsubu       $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26e6a4:
    // 0x26e6a4: 0xa190  .word       0x0000A190                   # mfhi        $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6a4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26e6a8:
    // 0x26e6a8: 0x0  nop
    ctx->pc = 0x26e6a8u;
    // NOP
label_26e6ac:
    // 0x26e6ac: 0x0  nop
    ctx->pc = 0x26e6acu;
    // NOP
label_26e6b0:
    // 0x26e6b0: 0x4604  .word       0x00004604                   # sllv        $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e6b4:
    // 0x26e6b4: 0x7d90  .word       0x00007D90                   # mfhi        $t7 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6b4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26e6b8:
    // 0x26e6b8: 0x0  nop
    ctx->pc = 0x26e6b8u;
    // NOP
label_26e6bc:
    // 0x26e6bc: 0x0  nop
    ctx->pc = 0x26e6bcu;
    // NOP
label_26e6c0:
    // 0x26e6c0: 0x4614  .word       0x00004614                   # dsllv       $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26e6c4:
    // 0x26e6c4: 0x79a0  .word       0x000079A0                   # add         $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26e6c8:
    // 0x26e6c8: 0x0  nop
    ctx->pc = 0x26e6c8u;
    // NOP
label_26e6cc:
    // 0x26e6cc: 0x0  nop
    ctx->pc = 0x26e6ccu;
    // NOP
label_26e6d0:
    // 0x26e6d0: 0x4624  .word       0x00004624                   # and         $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26e6d4:
    // 0x26e6d4: 0x71c0  sll         $t6, $zero, 7
    ctx->pc = 0x26e6d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_26e6d8:
    // 0x26e6d8: 0x0  nop
    ctx->pc = 0x26e6d8u;
    // NOP
label_26e6dc:
    // 0x26e6dc: 0x0  nop
    ctx->pc = 0x26e6dcu;
    // NOP
label_26e6e0:
    // 0x26e6e0: 0x4633  tltu        $zero, $zero, 280
    ctx->pc = 0x26e6e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e6e4:
    // 0x26e6e4: 0x70c0  sll         $t6, $zero, 3
    ctx->pc = 0x26e6e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26e6e8:
    // 0x26e6e8: 0x0  nop
    ctx->pc = 0x26e6e8u;
    // NOP
label_26e6ec:
    // 0x26e6ec: 0x0  nop
    ctx->pc = 0x26e6ecu;
    // NOP
label_26e6f0:
    // 0x26e6f0: 0x4642  srl         $t0, $zero, 25
    ctx->pc = 0x26e6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 25));
label_26e6f4:
    // 0x26e6f4: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6f4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26e6f8:
    // 0x26e6f8: 0x0  nop
    ctx->pc = 0x26e6f8u;
    // NOP
label_26e6fc:
    // 0x26e6fc: 0x0  nop
    ctx->pc = 0x26e6fcu;
    // NOP
label_26e700:
    // 0x26e700: 0x464e  .word       0x0000464E                   # INVALID     $zero, $zero, 0x464E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26E700 raw=0x0000464E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e704:
    // 0x26e704: 0x7300  sll         $t6, $zero, 12
    ctx->pc = 0x26e704u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26e708:
    // 0x26e708: 0x0  nop
    ctx->pc = 0x26e708u;
    // NOP
label_26e70c:
    // 0x26e70c: 0x0  nop
    ctx->pc = 0x26e70cu;
    // NOP
label_26e710:
    // 0x26e710: 0x465d  .word       0x0000465D                   # dmultu      $zero, $zero # 00004640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26E710 raw=0x0000465D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e714:
    // 0x26e714: 0x5e40  sll         $t3, $zero, 25
    ctx->pc = 0x26e714u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26e718:
    // 0x26e718: 0x0  nop
    ctx->pc = 0x26e718u;
    // NOP
label_26e71c:
    // 0x26e71c: 0x0  nop
    ctx->pc = 0x26e71cu;
    // NOP
label_26e720:
    // 0x26e720: 0x4669  .word       0x00004669                   # mtsa        $zero # 00004640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e720u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26e724:
    // 0x26e724: 0x2e30  tge         $zero, $zero, 184
    ctx->pc = 0x26e724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e728:
    // 0x26e728: 0x0  nop
    ctx->pc = 0x26e728u;
    // NOP
label_26e72c:
    // 0x26e72c: 0x0  nop
    ctx->pc = 0x26e72cu;
    // NOP
label_26e730:
    // 0x26e730: 0x466f  .word       0x0000466F                   # dsubu       $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e730u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26e734:
    // 0x26e734: 0x6870  tge         $zero, $zero, 417
    ctx->pc = 0x26e734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e738:
    // 0x26e738: 0x0  nop
    ctx->pc = 0x26e738u;
    // NOP
label_26e73c:
    // 0x26e73c: 0x0  nop
    ctx->pc = 0x26e73cu;
    // NOP
label_26e740:
    // 0x26e740: 0x467d  .word       0x0000467D                   # INVALID     $zero, $zero, 0x467D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26E740 raw=0x0000467D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e744:
    // 0x26e744: 0x3390  .word       0x00003390                   # mfhi        $a2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e744u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26e748:
    // 0x26e748: 0x0  nop
    ctx->pc = 0x26e748u;
    // NOP
label_26e74c:
    // 0x26e74c: 0x0  nop
    ctx->pc = 0x26e74cu;
    // NOP
label_26e750:
    // 0x26e750: 0x4684  .word       0x00004684                   # sllv        $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e750u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e754:
    // 0x26e754: 0x6870  tge         $zero, $zero, 417
    ctx->pc = 0x26e754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e758:
    // 0x26e758: 0x0  nop
    ctx->pc = 0x26e758u;
    // NOP
label_26e75c:
    // 0x26e75c: 0x0  nop
    ctx->pc = 0x26e75cu;
    // NOP
label_26e760:
    // 0x26e760: 0x4692  .word       0x00004692                   # mflo        $t0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e760u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_26e764:
    // 0x26e764: 0x67c0  sll         $t4, $zero, 31
    ctx->pc = 0x26e764u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_26e768:
    // 0x26e768: 0x0  nop
    ctx->pc = 0x26e768u;
    // NOP
label_26e76c:
    // 0x26e76c: 0x0  nop
    ctx->pc = 0x26e76cu;
    // NOP
label_26e770:
    // 0x26e770: 0x469f  .word       0x0000469F                   # ddivu       $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26E770 raw=0x0000469F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e774:
    // 0x26e774: 0x2710  .word       0x00002710                   # mfhi        $a0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e774u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_26e778:
    // 0x26e778: 0x0  nop
    ctx->pc = 0x26e778u;
    // NOP
label_26e77c:
    // 0x26e77c: 0x0  nop
    ctx->pc = 0x26e77cu;
    // NOP
label_26e780:
    // 0x26e780: 0x46a4  .word       0x000046A4                   # and         $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26e784:
    // 0x26e784: 0x7460  .word       0x00007460                   # add         $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26e788:
    // 0x26e788: 0x0  nop
    ctx->pc = 0x26e788u;
    // NOP
label_26e78c:
    // 0x26e78c: 0x0  nop
    ctx->pc = 0x26e78cu;
    // NOP
label_26e790:
    // 0x26e790: 0x46b3  tltu        $zero, $zero, 282
    ctx->pc = 0x26e790u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e794:
    // 0x26e794: 0x29a0  .word       0x000029A0                   # add         $a1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26e798:
    // 0x26e798: 0x0  nop
    ctx->pc = 0x26e798u;
    // NOP
label_26e79c:
    // 0x26e79c: 0x0  nop
    ctx->pc = 0x26e79cu;
    // NOP
label_26e7a0:
    // 0x26e7a0: 0x46b9  .word       0x000046B9                   # INVALID     $zero, $zero, 0x46B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26E7A0 raw=0x000046B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e7a4:
    // 0x26e7a4: 0x3820  add         $a3, $zero, $zero
    ctx->pc = 0x26e7a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26e7a8:
    // 0x26e7a8: 0x0  nop
    ctx->pc = 0x26e7a8u;
    // NOP
label_26e7ac:
    // 0x26e7ac: 0x0  nop
    ctx->pc = 0x26e7acu;
    // NOP
label_26e7b0:
    // 0x26e7b0: 0x46c1  .word       0x000046C1                   # INVALID     $zero, $zero, 0x46C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26E7B0 raw=0x000046C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e7b4:
    // 0x26e7b4: 0x6f50  .word       0x00006F50                   # mfhi        $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7b4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26e7b8:
    // 0x26e7b8: 0x0  nop
    ctx->pc = 0x26e7b8u;
    // NOP
label_26e7bc:
    // 0x26e7bc: 0x0  nop
    ctx->pc = 0x26e7bcu;
    // NOP
label_26e7c0:
    // 0x26e7c0: 0x46cf  .word       0x000046CF                   # sync.p # 00004000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26e7c4:
    // 0x26e7c4: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26e7c8:
    // 0x26e7c8: 0x0  nop
    ctx->pc = 0x26e7c8u;
    // NOP
label_26e7cc:
    // 0x26e7cc: 0x0  nop
    ctx->pc = 0x26e7ccu;
    // NOP
    ctx->pc = 0x26e7d0u;
    return;
}
