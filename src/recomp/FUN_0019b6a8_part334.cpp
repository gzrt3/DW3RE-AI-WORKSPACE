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


void FUN_0019b6a8_part334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23e038u: goto label_23e038;
        case 0x23e03cu: goto label_23e03c;
        case 0x23e040u: goto label_23e040;
        case 0x23e044u: goto label_23e044;
        case 0x23e048u: goto label_23e048;
        case 0x23e04cu: goto label_23e04c;
        case 0x23e050u: goto label_23e050;
        case 0x23e054u: goto label_23e054;
        case 0x23e058u: goto label_23e058;
        case 0x23e05cu: goto label_23e05c;
        case 0x23e060u: goto label_23e060;
        case 0x23e064u: goto label_23e064;
        case 0x23e068u: goto label_23e068;
        case 0x23e06cu: goto label_23e06c;
        case 0x23e070u: goto label_23e070;
        case 0x23e074u: goto label_23e074;
        case 0x23e078u: goto label_23e078;
        case 0x23e07cu: goto label_23e07c;
        case 0x23e080u: goto label_23e080;
        case 0x23e084u: goto label_23e084;
        case 0x23e088u: goto label_23e088;
        case 0x23e08cu: goto label_23e08c;
        case 0x23e090u: goto label_23e090;
        case 0x23e094u: goto label_23e094;
        case 0x23e098u: goto label_23e098;
        case 0x23e09cu: goto label_23e09c;
        case 0x23e0a0u: goto label_23e0a0;
        case 0x23e0a4u: goto label_23e0a4;
        case 0x23e0a8u: goto label_23e0a8;
        case 0x23e0acu: goto label_23e0ac;
        case 0x23e0b0u: goto label_23e0b0;
        case 0x23e0b4u: goto label_23e0b4;
        case 0x23e0b8u: goto label_23e0b8;
        case 0x23e0bcu: goto label_23e0bc;
        case 0x23e0c0u: goto label_23e0c0;
        case 0x23e0c4u: goto label_23e0c4;
        case 0x23e0c8u: goto label_23e0c8;
        case 0x23e0ccu: goto label_23e0cc;
        case 0x23e0d0u: goto label_23e0d0;
        case 0x23e0d4u: goto label_23e0d4;
        case 0x23e0d8u: goto label_23e0d8;
        case 0x23e0dcu: goto label_23e0dc;
        case 0x23e0e0u: goto label_23e0e0;
        case 0x23e0e4u: goto label_23e0e4;
        case 0x23e0e8u: goto label_23e0e8;
        case 0x23e0ecu: goto label_23e0ec;
        case 0x23e0f0u: goto label_23e0f0;
        case 0x23e0f4u: goto label_23e0f4;
        case 0x23e0f8u: goto label_23e0f8;
        case 0x23e0fcu: goto label_23e0fc;
        case 0x23e100u: goto label_23e100;
        case 0x23e104u: goto label_23e104;
        case 0x23e108u: goto label_23e108;
        case 0x23e10cu: goto label_23e10c;
        case 0x23e110u: goto label_23e110;
        case 0x23e114u: goto label_23e114;
        case 0x23e118u: goto label_23e118;
        case 0x23e11cu: goto label_23e11c;
        case 0x23e120u: goto label_23e120;
        case 0x23e124u: goto label_23e124;
        case 0x23e128u: goto label_23e128;
        case 0x23e12cu: goto label_23e12c;
        case 0x23e130u: goto label_23e130;
        case 0x23e134u: goto label_23e134;
        case 0x23e138u: goto label_23e138;
        case 0x23e13cu: goto label_23e13c;
        case 0x23e140u: goto label_23e140;
        case 0x23e144u: goto label_23e144;
        case 0x23e148u: goto label_23e148;
        case 0x23e14cu: goto label_23e14c;
        case 0x23e150u: goto label_23e150;
        case 0x23e154u: goto label_23e154;
        case 0x23e158u: goto label_23e158;
        case 0x23e15cu: goto label_23e15c;
        case 0x23e160u: goto label_23e160;
        case 0x23e164u: goto label_23e164;
        case 0x23e168u: goto label_23e168;
        case 0x23e16cu: goto label_23e16c;
        case 0x23e170u: goto label_23e170;
        case 0x23e174u: goto label_23e174;
        case 0x23e178u: goto label_23e178;
        case 0x23e17cu: goto label_23e17c;
        case 0x23e180u: goto label_23e180;
        case 0x23e184u: goto label_23e184;
        case 0x23e188u: goto label_23e188;
        case 0x23e18cu: goto label_23e18c;
        case 0x23e190u: goto label_23e190;
        case 0x23e194u: goto label_23e194;
        case 0x23e198u: goto label_23e198;
        case 0x23e19cu: goto label_23e19c;
        case 0x23e1a0u: goto label_23e1a0;
        case 0x23e1a4u: goto label_23e1a4;
        case 0x23e1a8u: goto label_23e1a8;
        case 0x23e1acu: goto label_23e1ac;
        case 0x23e1b0u: goto label_23e1b0;
        case 0x23e1b4u: goto label_23e1b4;
        case 0x23e1b8u: goto label_23e1b8;
        case 0x23e1bcu: goto label_23e1bc;
        case 0x23e1c0u: goto label_23e1c0;
        case 0x23e1c4u: goto label_23e1c4;
        case 0x23e1c8u: goto label_23e1c8;
        case 0x23e1ccu: goto label_23e1cc;
        case 0x23e1d0u: goto label_23e1d0;
        case 0x23e1d4u: goto label_23e1d4;
        case 0x23e1d8u: goto label_23e1d8;
        case 0x23e1dcu: goto label_23e1dc;
        case 0x23e1e0u: goto label_23e1e0;
        case 0x23e1e4u: goto label_23e1e4;
        case 0x23e1e8u: goto label_23e1e8;
        case 0x23e1ecu: goto label_23e1ec;
        case 0x23e1f0u: goto label_23e1f0;
        case 0x23e1f4u: goto label_23e1f4;
        case 0x23e1f8u: goto label_23e1f8;
        case 0x23e1fcu: goto label_23e1fc;
        case 0x23e200u: goto label_23e200;
        case 0x23e204u: goto label_23e204;
        case 0x23e208u: goto label_23e208;
        case 0x23e20cu: goto label_23e20c;
        case 0x23e210u: goto label_23e210;
        case 0x23e214u: goto label_23e214;
        case 0x23e218u: goto label_23e218;
        case 0x23e21cu: goto label_23e21c;
        case 0x23e220u: goto label_23e220;
        case 0x23e224u: goto label_23e224;
        case 0x23e228u: goto label_23e228;
        case 0x23e22cu: goto label_23e22c;
        case 0x23e230u: goto label_23e230;
        case 0x23e234u: goto label_23e234;
        case 0x23e238u: goto label_23e238;
        case 0x23e23cu: goto label_23e23c;
        case 0x23e240u: goto label_23e240;
        case 0x23e244u: goto label_23e244;
        case 0x23e248u: goto label_23e248;
        case 0x23e24cu: goto label_23e24c;
        case 0x23e250u: goto label_23e250;
        case 0x23e254u: goto label_23e254;
        case 0x23e258u: goto label_23e258;
        case 0x23e25cu: goto label_23e25c;
        case 0x23e260u: goto label_23e260;
        case 0x23e264u: goto label_23e264;
        case 0x23e268u: goto label_23e268;
        case 0x23e26cu: goto label_23e26c;
        case 0x23e270u: goto label_23e270;
        case 0x23e274u: goto label_23e274;
        case 0x23e278u: goto label_23e278;
        case 0x23e27cu: goto label_23e27c;
        case 0x23e280u: goto label_23e280;
        case 0x23e284u: goto label_23e284;
        case 0x23e288u: goto label_23e288;
        case 0x23e28cu: goto label_23e28c;
        case 0x23e290u: goto label_23e290;
        case 0x23e294u: goto label_23e294;
        case 0x23e298u: goto label_23e298;
        case 0x23e29cu: goto label_23e29c;
        case 0x23e2a0u: goto label_23e2a0;
        case 0x23e2a4u: goto label_23e2a4;
        case 0x23e2a8u: goto label_23e2a8;
        case 0x23e2acu: goto label_23e2ac;
        case 0x23e2b0u: goto label_23e2b0;
        case 0x23e2b4u: goto label_23e2b4;
        case 0x23e2b8u: goto label_23e2b8;
        case 0x23e2bcu: goto label_23e2bc;
        case 0x23e2c0u: goto label_23e2c0;
        case 0x23e2c4u: goto label_23e2c4;
        case 0x23e2c8u: goto label_23e2c8;
        case 0x23e2ccu: goto label_23e2cc;
        case 0x23e2d0u: goto label_23e2d0;
        case 0x23e2d4u: goto label_23e2d4;
        case 0x23e2d8u: goto label_23e2d8;
        case 0x23e2dcu: goto label_23e2dc;
        case 0x23e2e0u: goto label_23e2e0;
        case 0x23e2e4u: goto label_23e2e4;
        case 0x23e2e8u: goto label_23e2e8;
        case 0x23e2ecu: goto label_23e2ec;
        case 0x23e2f0u: goto label_23e2f0;
        case 0x23e2f4u: goto label_23e2f4;
        case 0x23e2f8u: goto label_23e2f8;
        case 0x23e2fcu: goto label_23e2fc;
        case 0x23e300u: goto label_23e300;
        case 0x23e304u: goto label_23e304;
        case 0x23e308u: goto label_23e308;
        case 0x23e30cu: goto label_23e30c;
        case 0x23e310u: goto label_23e310;
        case 0x23e314u: goto label_23e314;
        case 0x23e318u: goto label_23e318;
        case 0x23e31cu: goto label_23e31c;
        case 0x23e320u: goto label_23e320;
        case 0x23e324u: goto label_23e324;
        case 0x23e328u: goto label_23e328;
        case 0x23e32cu: goto label_23e32c;
        case 0x23e330u: goto label_23e330;
        case 0x23e334u: goto label_23e334;
        case 0x23e338u: goto label_23e338;
        case 0x23e33cu: goto label_23e33c;
        case 0x23e340u: goto label_23e340;
        case 0x23e344u: goto label_23e344;
        case 0x23e348u: goto label_23e348;
        case 0x23e34cu: goto label_23e34c;
        case 0x23e350u: goto label_23e350;
        case 0x23e354u: goto label_23e354;
        case 0x23e358u: goto label_23e358;
        case 0x23e35cu: goto label_23e35c;
        case 0x23e360u: goto label_23e360;
        case 0x23e364u: goto label_23e364;
        case 0x23e368u: goto label_23e368;
        case 0x23e36cu: goto label_23e36c;
        case 0x23e370u: goto label_23e370;
        case 0x23e374u: goto label_23e374;
        case 0x23e378u: goto label_23e378;
        case 0x23e37cu: goto label_23e37c;
        case 0x23e380u: goto label_23e380;
        case 0x23e384u: goto label_23e384;
        case 0x23e388u: goto label_23e388;
        case 0x23e38cu: goto label_23e38c;
        case 0x23e390u: goto label_23e390;
        case 0x23e394u: goto label_23e394;
        case 0x23e398u: goto label_23e398;
        case 0x23e39cu: goto label_23e39c;
        case 0x23e3a0u: goto label_23e3a0;
        case 0x23e3a4u: goto label_23e3a4;
        case 0x23e3a8u: goto label_23e3a8;
        case 0x23e3acu: goto label_23e3ac;
        case 0x23e3b0u: goto label_23e3b0;
        case 0x23e3b4u: goto label_23e3b4;
        case 0x23e3b8u: goto label_23e3b8;
        case 0x23e3bcu: goto label_23e3bc;
        case 0x23e3c0u: goto label_23e3c0;
        case 0x23e3c4u: goto label_23e3c4;
        case 0x23e3c8u: goto label_23e3c8;
        case 0x23e3ccu: goto label_23e3cc;
        case 0x23e3d0u: goto label_23e3d0;
        case 0x23e3d4u: goto label_23e3d4;
        case 0x23e3d8u: goto label_23e3d8;
        case 0x23e3dcu: goto label_23e3dc;
        case 0x23e3e0u: goto label_23e3e0;
        case 0x23e3e4u: goto label_23e3e4;
        case 0x23e3e8u: goto label_23e3e8;
        case 0x23e3ecu: goto label_23e3ec;
        case 0x23e3f0u: goto label_23e3f0;
        case 0x23e3f4u: goto label_23e3f4;
        case 0x23e3f8u: goto label_23e3f8;
        case 0x23e3fcu: goto label_23e3fc;
        case 0x23e400u: goto label_23e400;
        case 0x23e404u: goto label_23e404;
        case 0x23e408u: goto label_23e408;
        case 0x23e40cu: goto label_23e40c;
        case 0x23e410u: goto label_23e410;
        case 0x23e414u: goto label_23e414;
        case 0x23e418u: goto label_23e418;
        case 0x23e41cu: goto label_23e41c;
        case 0x23e420u: goto label_23e420;
        case 0x23e424u: goto label_23e424;
        case 0x23e428u: goto label_23e428;
        case 0x23e42cu: goto label_23e42c;
        case 0x23e430u: goto label_23e430;
        case 0x23e434u: goto label_23e434;
        case 0x23e438u: goto label_23e438;
        case 0x23e43cu: goto label_23e43c;
        case 0x23e440u: goto label_23e440;
        case 0x23e444u: goto label_23e444;
        case 0x23e448u: goto label_23e448;
        case 0x23e44cu: goto label_23e44c;
        case 0x23e450u: goto label_23e450;
        case 0x23e454u: goto label_23e454;
        case 0x23e458u: goto label_23e458;
        case 0x23e45cu: goto label_23e45c;
        case 0x23e460u: goto label_23e460;
        case 0x23e464u: goto label_23e464;
        case 0x23e468u: goto label_23e468;
        case 0x23e46cu: goto label_23e46c;
        case 0x23e470u: goto label_23e470;
        case 0x23e474u: goto label_23e474;
        case 0x23e478u: goto label_23e478;
        case 0x23e47cu: goto label_23e47c;
        case 0x23e480u: goto label_23e480;
        case 0x23e484u: goto label_23e484;
        case 0x23e488u: goto label_23e488;
        case 0x23e48cu: goto label_23e48c;
        case 0x23e490u: goto label_23e490;
        case 0x23e494u: goto label_23e494;
        case 0x23e498u: goto label_23e498;
        case 0x23e49cu: goto label_23e49c;
        case 0x23e4a0u: goto label_23e4a0;
        case 0x23e4a4u: goto label_23e4a4;
        case 0x23e4a8u: goto label_23e4a8;
        case 0x23e4acu: goto label_23e4ac;
        case 0x23e4b0u: goto label_23e4b0;
        case 0x23e4b4u: goto label_23e4b4;
        case 0x23e4b8u: goto label_23e4b8;
        case 0x23e4bcu: goto label_23e4bc;
        case 0x23e4c0u: goto label_23e4c0;
        case 0x23e4c4u: goto label_23e4c4;
        case 0x23e4c8u: goto label_23e4c8;
        case 0x23e4ccu: goto label_23e4cc;
        case 0x23e4d0u: goto label_23e4d0;
        case 0x23e4d4u: goto label_23e4d4;
        case 0x23e4d8u: goto label_23e4d8;
        case 0x23e4dcu: goto label_23e4dc;
        case 0x23e4e0u: goto label_23e4e0;
        case 0x23e4e4u: goto label_23e4e4;
        case 0x23e4e8u: goto label_23e4e8;
        case 0x23e4ecu: goto label_23e4ec;
        case 0x23e4f0u: goto label_23e4f0;
        case 0x23e4f4u: goto label_23e4f4;
        case 0x23e4f8u: goto label_23e4f8;
        case 0x23e4fcu: goto label_23e4fc;
        case 0x23e500u: goto label_23e500;
        case 0x23e504u: goto label_23e504;
        case 0x23e508u: goto label_23e508;
        case 0x23e50cu: goto label_23e50c;
        case 0x23e510u: goto label_23e510;
        case 0x23e514u: goto label_23e514;
        case 0x23e518u: goto label_23e518;
        case 0x23e51cu: goto label_23e51c;
        case 0x23e520u: goto label_23e520;
        case 0x23e524u: goto label_23e524;
        case 0x23e528u: goto label_23e528;
        case 0x23e52cu: goto label_23e52c;
        case 0x23e530u: goto label_23e530;
        case 0x23e534u: goto label_23e534;
        case 0x23e538u: goto label_23e538;
        case 0x23e53cu: goto label_23e53c;
        case 0x23e540u: goto label_23e540;
        case 0x23e544u: goto label_23e544;
        case 0x23e548u: goto label_23e548;
        case 0x23e54cu: goto label_23e54c;
        case 0x23e550u: goto label_23e550;
        case 0x23e554u: goto label_23e554;
        case 0x23e558u: goto label_23e558;
        case 0x23e55cu: goto label_23e55c;
        case 0x23e560u: goto label_23e560;
        case 0x23e564u: goto label_23e564;
        case 0x23e568u: goto label_23e568;
        case 0x23e56cu: goto label_23e56c;
        case 0x23e570u: goto label_23e570;
        case 0x23e574u: goto label_23e574;
        case 0x23e578u: goto label_23e578;
        case 0x23e57cu: goto label_23e57c;
        case 0x23e580u: goto label_23e580;
        case 0x23e584u: goto label_23e584;
        case 0x23e588u: goto label_23e588;
        case 0x23e58cu: goto label_23e58c;
        case 0x23e590u: goto label_23e590;
        case 0x23e594u: goto label_23e594;
        case 0x23e598u: goto label_23e598;
        case 0x23e59cu: goto label_23e59c;
        case 0x23e5a0u: goto label_23e5a0;
        case 0x23e5a4u: goto label_23e5a4;
        case 0x23e5a8u: goto label_23e5a8;
        case 0x23e5acu: goto label_23e5ac;
        case 0x23e5b0u: goto label_23e5b0;
        case 0x23e5b4u: goto label_23e5b4;
        case 0x23e5b8u: goto label_23e5b8;
        case 0x23e5bcu: goto label_23e5bc;
        case 0x23e5c0u: goto label_23e5c0;
        case 0x23e5c4u: goto label_23e5c4;
        case 0x23e5c8u: goto label_23e5c8;
        case 0x23e5ccu: goto label_23e5cc;
        case 0x23e5d0u: goto label_23e5d0;
        case 0x23e5d4u: goto label_23e5d4;
        case 0x23e5d8u: goto label_23e5d8;
        case 0x23e5dcu: goto label_23e5dc;
        case 0x23e5e0u: goto label_23e5e0;
        case 0x23e5e4u: goto label_23e5e4;
        case 0x23e5e8u: goto label_23e5e8;
        case 0x23e5ecu: goto label_23e5ec;
        case 0x23e5f0u: goto label_23e5f0;
        case 0x23e5f4u: goto label_23e5f4;
        case 0x23e5f8u: goto label_23e5f8;
        case 0x23e5fcu: goto label_23e5fc;
        case 0x23e600u: goto label_23e600;
        case 0x23e604u: goto label_23e604;
        case 0x23e608u: goto label_23e608;
        case 0x23e60cu: goto label_23e60c;
        case 0x23e610u: goto label_23e610;
        case 0x23e614u: goto label_23e614;
        case 0x23e618u: goto label_23e618;
        case 0x23e61cu: goto label_23e61c;
        case 0x23e620u: goto label_23e620;
        case 0x23e624u: goto label_23e624;
        case 0x23e628u: goto label_23e628;
        case 0x23e62cu: goto label_23e62c;
        case 0x23e630u: goto label_23e630;
        case 0x23e634u: goto label_23e634;
        case 0x23e638u: goto label_23e638;
        case 0x23e63cu: goto label_23e63c;
        case 0x23e640u: goto label_23e640;
        case 0x23e644u: goto label_23e644;
        case 0x23e648u: goto label_23e648;
        case 0x23e64cu: goto label_23e64c;
        case 0x23e650u: goto label_23e650;
        case 0x23e654u: goto label_23e654;
        case 0x23e658u: goto label_23e658;
        case 0x23e65cu: goto label_23e65c;
        case 0x23e660u: goto label_23e660;
        case 0x23e664u: goto label_23e664;
        case 0x23e668u: goto label_23e668;
        case 0x23e66cu: goto label_23e66c;
        case 0x23e670u: goto label_23e670;
        case 0x23e674u: goto label_23e674;
        case 0x23e678u: goto label_23e678;
        case 0x23e67cu: goto label_23e67c;
        case 0x23e680u: goto label_23e680;
        case 0x23e684u: goto label_23e684;
        case 0x23e688u: goto label_23e688;
        case 0x23e68cu: goto label_23e68c;
        case 0x23e690u: goto label_23e690;
        case 0x23e694u: goto label_23e694;
        case 0x23e698u: goto label_23e698;
        case 0x23e69cu: goto label_23e69c;
        case 0x23e6a0u: goto label_23e6a0;
        case 0x23e6a4u: goto label_23e6a4;
        case 0x23e6a8u: goto label_23e6a8;
        case 0x23e6acu: goto label_23e6ac;
        case 0x23e6b0u: goto label_23e6b0;
        case 0x23e6b4u: goto label_23e6b4;
        case 0x23e6b8u: goto label_23e6b8;
        case 0x23e6bcu: goto label_23e6bc;
        case 0x23e6c0u: goto label_23e6c0;
        case 0x23e6c4u: goto label_23e6c4;
        case 0x23e6c8u: goto label_23e6c8;
        case 0x23e6ccu: goto label_23e6cc;
        case 0x23e6d0u: goto label_23e6d0;
        case 0x23e6d4u: goto label_23e6d4;
        case 0x23e6d8u: goto label_23e6d8;
        case 0x23e6dcu: goto label_23e6dc;
        case 0x23e6e0u: goto label_23e6e0;
        case 0x23e6e4u: goto label_23e6e4;
        case 0x23e6e8u: goto label_23e6e8;
        case 0x23e6ecu: goto label_23e6ec;
        case 0x23e6f0u: goto label_23e6f0;
        case 0x23e6f4u: goto label_23e6f4;
        case 0x23e6f8u: goto label_23e6f8;
        case 0x23e6fcu: goto label_23e6fc;
        case 0x23e700u: goto label_23e700;
        case 0x23e704u: goto label_23e704;
        case 0x23e708u: goto label_23e708;
        case 0x23e70cu: goto label_23e70c;
        case 0x23e710u: goto label_23e710;
        case 0x23e714u: goto label_23e714;
        case 0x23e718u: goto label_23e718;
        case 0x23e71cu: goto label_23e71c;
        case 0x23e720u: goto label_23e720;
        case 0x23e724u: goto label_23e724;
        case 0x23e728u: goto label_23e728;
        case 0x23e72cu: goto label_23e72c;
        case 0x23e730u: goto label_23e730;
        case 0x23e734u: goto label_23e734;
        case 0x23e738u: goto label_23e738;
        case 0x23e73cu: goto label_23e73c;
        case 0x23e740u: goto label_23e740;
        case 0x23e744u: goto label_23e744;
        case 0x23e748u: goto label_23e748;
        case 0x23e74cu: goto label_23e74c;
        case 0x23e750u: goto label_23e750;
        case 0x23e754u: goto label_23e754;
        case 0x23e758u: goto label_23e758;
        case 0x23e75cu: goto label_23e75c;
        case 0x23e760u: goto label_23e760;
        case 0x23e764u: goto label_23e764;
        case 0x23e768u: goto label_23e768;
        case 0x23e76cu: goto label_23e76c;
        case 0x23e770u: goto label_23e770;
        case 0x23e774u: goto label_23e774;
        case 0x23e778u: goto label_23e778;
        case 0x23e77cu: goto label_23e77c;
        case 0x23e780u: goto label_23e780;
        case 0x23e784u: goto label_23e784;
        case 0x23e788u: goto label_23e788;
        case 0x23e78cu: goto label_23e78c;
        case 0x23e790u: goto label_23e790;
        case 0x23e794u: goto label_23e794;
        case 0x23e798u: goto label_23e798;
        case 0x23e79cu: goto label_23e79c;
        case 0x23e7a0u: goto label_23e7a0;
        case 0x23e7a4u: goto label_23e7a4;
        case 0x23e7a8u: goto label_23e7a8;
        case 0x23e7acu: goto label_23e7ac;
        case 0x23e7b0u: goto label_23e7b0;
        case 0x23e7b4u: goto label_23e7b4;
        case 0x23e7b8u: goto label_23e7b8;
        case 0x23e7bcu: goto label_23e7bc;
        case 0x23e7c0u: goto label_23e7c0;
        case 0x23e7c4u: goto label_23e7c4;
        case 0x23e7c8u: goto label_23e7c8;
        case 0x23e7ccu: goto label_23e7cc;
        case 0x23e7d0u: goto label_23e7d0;
        case 0x23e7d4u: goto label_23e7d4;
        case 0x23e7d8u: goto label_23e7d8;
        case 0x23e7dcu: goto label_23e7dc;
        case 0x23e7e0u: goto label_23e7e0;
        case 0x23e7e4u: goto label_23e7e4;
        case 0x23e7e8u: goto label_23e7e8;
        case 0x23e7ecu: goto label_23e7ec;
        case 0x23e7f0u: goto label_23e7f0;
        case 0x23e7f4u: goto label_23e7f4;
        case 0x23e7f8u: goto label_23e7f8;
        case 0x23e7fcu: goto label_23e7fc;
        case 0x23e800u: goto label_23e800;
        case 0x23e804u: goto label_23e804;
        default: return;
    }

label_23e038:
    if (ctx->pc == 0x23E038u) {
        ctx->pc = 0x23E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E034u;
        // 0x23e038: 0xa3a001d1  sb          $zero, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E03Cu;
        goto label_23e03c;
    }
    ctx->pc = 0x23E034u;
    {
        const bool branch_taken_0x23e034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e034) {
            ctx->pc = 0x23E038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E034u;
            // 0x23e038: 0xa3a001d1  sb          $zero, 0x1D1($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23E03Cu;
label_23e03c:
    // 0x23e03c: 0x10000080  b           . + 4 + (0x80 << 2)
label_23e040:
    if (ctx->pc == 0x23E040u) {
        ctx->pc = 0x23E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E03Cu;
        // 0x23e040: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E044u;
        goto label_23e044;
    }
    ctx->pc = 0x23E03Cu;
    {
        const bool branch_taken_0x23e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E03Cu;
        // 0x23e040: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e03c) {
            ctx->pc = 0x23E240u;
            goto label_23e240;
        }
    }
    ctx->pc = 0x23E044u;
label_23e044:
    // 0x23e044: 0x0  nop
    ctx->pc = 0x23e044u;
    // NOP
label_23e048:
    // 0x23e048: 0xc08f3d6  jal         func_23CF58
label_23e04c:
    if (ctx->pc == 0x23E04Cu) {
        ctx->pc = 0x23E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E048u;
        // 0x23e04c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E050u;
        goto label_23e050;
    }
    ctx->pc = 0x23E048u;
    SET_GPR_U32(ctx, 31, 0x23E050u);
    ctx->pc = 0x23E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E048u;
    // 0x23e04c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x23E050u;
label_23e050:
    // 0x23e050: 0x1000007b  b           . + 4 + (0x7B << 2)
label_23e054:
    if (ctx->pc == 0x23E054u) {
        ctx->pc = 0x23E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E050u;
        // 0x23e054: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E058u;
        goto label_23e058;
    }
    ctx->pc = 0x23E050u;
    {
        const bool branch_taken_0x23e050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E050u;
        // 0x23e054: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e050) {
            ctx->pc = 0x23E240u;
            goto label_23e240;
        }
    }
    ctx->pc = 0x23E058u;
label_23e058:
    // 0x23e058: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x23e058u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_23e05c:
    // 0x23e05c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23e05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
label_23e060:
    // 0x23e060: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23e064:
    if (ctx->pc == 0x23E064u) {
        ctx->pc = 0x23E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E060u;
        // 0x23e064: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E068u;
        goto label_23e068;
    }
    ctx->pc = 0x23E060u;
    {
        const bool branch_taken_0x23e060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E060u;
        // 0x23e064: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e060) {
            ctx->pc = 0x23E078u;
            goto label_23e078;
        }
    }
    ctx->pc = 0x23E068u;
label_23e068:
    // 0x23e068: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e068u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e06c:
    // 0x23e06c: 0x1000000a  b           . + 4 + (0xA << 2)
label_23e070:
    if (ctx->pc == 0x23E070u) {
        ctx->pc = 0x23E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E06Cu;
        // 0x23e070: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E074u;
        goto label_23e074;
    }
    ctx->pc = 0x23E06Cu;
    {
        const bool branch_taken_0x23e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E06Cu;
        // 0x23e070: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e06c) {
            ctx->pc = 0x23E098u;
            goto label_23e098;
        }
    }
    ctx->pc = 0x23E074u;
label_23e074:
    // 0x23e074: 0x0  nop
    ctx->pc = 0x23e074u;
    // NOP
label_23e078:
    // 0x23e078: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23e078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
label_23e07c:
    // 0x23e07c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23e080:
    if (ctx->pc == 0x23E080u) {
        ctx->pc = 0x23E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E07Cu;
        // 0x23e080: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E084u;
        goto label_23e084;
    }
    ctx->pc = 0x23E07Cu;
    {
        const bool branch_taken_0x23e07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E07Cu;
        // 0x23e080: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e07c) {
            ctx->pc = 0x23E090u;
            goto label_23e090;
        }
    }
    ctx->pc = 0x23E084u;
label_23e084:
    // 0x23e084: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e088:
    // 0x23e088: 0x10000003  b           . + 4 + (0x3 << 2)
label_23e08c:
    if (ctx->pc == 0x23E08Cu) {
        ctx->pc = 0x23E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E088u;
        // 0x23e08c: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E090u;
        goto label_23e090;
    }
    ctx->pc = 0x23E088u;
    {
        const bool branch_taken_0x23e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E088u;
        // 0x23e08c: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e088) {
            ctx->pc = 0x23E098u;
            goto label_23e098;
        }
    }
    ctx->pc = 0x23E090u;
label_23e090:
    // 0x23e090: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e094:
    // 0x23e094: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x23e094u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e098:
    // 0x23e098: 0x1000001c  b           . + 4 + (0x1C << 2)
label_23e09c:
    if (ctx->pc == 0x23E09Cu) {
        ctx->pc = 0x23E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E098u;
        // 0x23e09c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0A0u;
        goto label_23e0a0;
    }
    ctx->pc = 0x23E098u;
    {
        const bool branch_taken_0x23e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E098u;
        // 0x23e09c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e098) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23E0A0u;
label_23e0a0:
    // 0x23e0a0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23e0a4:
    // 0x23e0a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_23e0a8:
    if (ctx->pc == 0x23E0A8u) {
        ctx->pc = 0x23E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0A4u;
        // 0x23e0a8: 0x2442e520  addiu       $v0, $v0, -0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0ACu;
        goto label_23e0ac;
    }
    ctx->pc = 0x23E0A4u;
    {
        const bool branch_taken_0x23e0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0A4u;
        // 0x23e0a8: 0x2442e520  addiu       $v0, $v0, -0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0a4) {
            ctx->pc = 0x23E0B8u;
            goto label_23e0b8;
        }
    }
    ctx->pc = 0x23E0ACu;
label_23e0ac:
    // 0x23e0ac: 0x0  nop
    ctx->pc = 0x23e0acu;
    // NOP
label_23e0b0:
    // 0x23e0b0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23e0b4:
    // 0x23e0b4: 0x2442e500  addiu       $v0, $v0, -0x1B00
    ctx->pc = 0x23e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960384));
label_23e0b8:
    // 0x23e0b8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x23e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_23e0bc:
    // 0x23e0bc: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23e0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
label_23e0c0:
    // 0x23e0c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23e0c4:
    if (ctx->pc == 0x23E0C4u) {
        ctx->pc = 0x23E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0C0u;
        // 0x23e0c4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0C8u;
        goto label_23e0c8;
    }
    ctx->pc = 0x23E0C0u;
    {
        const bool branch_taken_0x23e0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0C0u;
        // 0x23e0c4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0c0) {
            ctx->pc = 0x23E0D8u;
            goto label_23e0d8;
        }
    }
    ctx->pc = 0x23E0C8u;
label_23e0c8:
    // 0x23e0c8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e0cc:
    // 0x23e0cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_23e0d0:
    if (ctx->pc == 0x23E0D0u) {
        ctx->pc = 0x23E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0CCu;
        // 0x23e0d0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0D4u;
        goto label_23e0d4;
    }
    ctx->pc = 0x23E0CCu;
    {
        const bool branch_taken_0x23e0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0CCu;
        // 0x23e0d0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0cc) {
            ctx->pc = 0x23E0F8u;
            goto label_23e0f8;
        }
    }
    ctx->pc = 0x23E0D4u;
label_23e0d4:
    // 0x23e0d4: 0x0  nop
    ctx->pc = 0x23e0d4u;
    // NOP
label_23e0d8:
    // 0x23e0d8: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23e0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
label_23e0dc:
    // 0x23e0dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23e0e0:
    if (ctx->pc == 0x23E0E0u) {
        ctx->pc = 0x23E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0DCu;
        // 0x23e0e0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0E4u;
        goto label_23e0e4;
    }
    ctx->pc = 0x23E0DCu;
    {
        const bool branch_taken_0x23e0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0DCu;
        // 0x23e0e0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0dc) {
            ctx->pc = 0x23E0F0u;
            goto label_23e0f0;
        }
    }
    ctx->pc = 0x23E0E4u;
label_23e0e4:
    // 0x23e0e4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e0e8:
    // 0x23e0e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_23e0ec:
    if (ctx->pc == 0x23E0ECu) {
        ctx->pc = 0x23E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0E8u;
        // 0x23e0ec: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0F0u;
        goto label_23e0f0;
    }
    ctx->pc = 0x23E0E8u;
    {
        const bool branch_taken_0x23e0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0E8u;
        // 0x23e0ec: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0e8) {
            ctx->pc = 0x23E0F8u;
            goto label_23e0f8;
        }
    }
    ctx->pc = 0x23E0F0u;
label_23e0f0:
    // 0x23e0f0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e0f4:
    // 0x23e0f4: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x23e0f4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e0f8:
    // 0x23e0f8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_23e0fc:
    // 0x23e0fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23e100:
    if (ctx->pc == 0x23E100u) {
        ctx->pc = 0x23E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0FCu;
        // 0x23e100: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E104u;
        goto label_23e104;
    }
    ctx->pc = 0x23E0FCu;
    {
        const bool branch_taken_0x23e0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0FCu;
        // 0x23e100: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0fc) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23E104u;
label_23e104:
    // 0x23e104: 0x36e20002  ori         $v0, $s7, 0x2
    ctx->pc = 0x23e104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
label_23e108:
    // 0x23e108: 0x50b80b  movn        $s7, $v0, $s0
    ctx->pc = 0x23e108u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_23e10c:
    // 0x23e10c: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x23e10cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_23e110:
    // 0x23e110: 0x6800003  bltz        $s4, . + 4 + (0x3 << 2)
label_23e114:
    if (ctx->pc == 0x23E114u) {
        ctx->pc = 0x23E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E110u;
        // 0x23e114: 0xafb40204  sw          $s4, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E118u;
        goto label_23e118;
    }
    ctx->pc = 0x23E110u;
    {
        const bool branch_taken_0x23e110 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E110u;
        // 0x23e114: 0xafb40204  sw          $s4, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e110) {
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23E118u;
label_23e118:
    // 0x23e118: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x23e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_23e11c:
    // 0x23e11c: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x23e11cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_23e120:
    // 0x23e120: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_23e124:
    if (ctx->pc == 0x23E124u) {
        ctx->pc = 0x23E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E120u;
        // 0x23e124: 0x27b501bc  addiu       $s5, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E128u;
        goto label_23e128;
    }
    ctx->pc = 0x23E120u;
    {
        const bool branch_taken_0x23e120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E120u;
        // 0x23e124: 0x27b501bc  addiu       $s5, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e120) {
            ctx->pc = 0x23E134u;
            goto label_23e134;
        }
    }
    ctx->pc = 0x23E128u;
label_23e128:
    // 0x23e128: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x23e128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_23e12c:
    // 0x23e12c: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
label_23e130:
    if (ctx->pc == 0x23E130u) {
        ctx->pc = 0x23E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E12Cu;
        // 0x23e130: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E134u;
        goto label_23e134;
    }
    ctx->pc = 0x23E12Cu;
    {
        const bool branch_taken_0x23e12c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E12Cu;
        // 0x23e130: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e12c) {
            ctx->pc = 0x23E224u;
            goto label_23e224;
        }
    }
    ctx->pc = 0x23E134u;
label_23e134:
    // 0x23e134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e138:
    // 0x23e138: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_23e13c:
    if (ctx->pc == 0x23E13Cu) {
        ctx->pc = 0x23E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E138u;
        // 0x23e13c: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E140u;
        goto label_23e140;
    }
    ctx->pc = 0x23E138u;
    {
        const bool branch_taken_0x23e138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E138u;
        // 0x23e13c: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e138) {
            ctx->pc = 0x23E1D4u;
            goto label_23e1d4;
        }
    }
    ctx->pc = 0x23E140u;
label_23e140:
    // 0x23e140: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_23e144:
    if (ctx->pc == 0x23E144u) {
        ctx->pc = 0x23E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E140u;
        // 0x23e144: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E148u;
        goto label_23e148;
    }
    ctx->pc = 0x23E140u;
    {
        const bool branch_taken_0x23e140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E140u;
        // 0x23e144: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e140) {
            ctx->pc = 0x23E168u;
            goto label_23e168;
        }
    }
    ctx->pc = 0x23E148u;
label_23e148:
    // 0x23e148: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23e14c:
    // 0x23e14c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_23e150:
    if (ctx->pc == 0x23E150u) {
        ctx->pc = 0x23E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E14Cu;
        // 0x23e150: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E154u;
        goto label_23e154;
    }
    ctx->pc = 0x23E14Cu;
    {
        const bool branch_taken_0x23e14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E14Cu;
        // 0x23e150: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e14c) {
            ctx->pc = 0x23E1F0u;
            goto label_23e1f0;
        }
    }
    ctx->pc = 0x23E154u;
label_23e154:
    // 0x23e154: 0x2455e538  addiu       $s5, $v0, -0x1AC8
    ctx->pc = 0x23e154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960440));
label_23e158:
    // 0x23e158: 0xc08f3d6  jal         func_23CF58
label_23e15c:
    if (ctx->pc == 0x23E15Cu) {
        ctx->pc = 0x23E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E158u;
        // 0x23e15c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E160u;
        goto label_23e160;
    }
    ctx->pc = 0x23E158u;
    SET_GPR_U32(ctx, 31, 0x23E160u);
    ctx->pc = 0x23E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E158u;
    // 0x23e15c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x23E160u;
label_23e160:
    // 0x23e160: 0x10000038  b           . + 4 + (0x38 << 2)
label_23e164:
    if (ctx->pc == 0x23E164u) {
        ctx->pc = 0x23E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E160u;
        // 0x23e164: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E168u;
        goto label_23e168;
    }
    ctx->pc = 0x23E160u;
    {
        const bool branch_taken_0x23e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E160u;
        // 0x23e164: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e160) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23E168u;
label_23e168:
    // 0x23e168: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x23e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_23e16c:
    // 0x23e16c: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x23e16cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_23e170:
    // 0x23e170: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x23e170u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_23e174:
    // 0x23e174: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23e178:
    // 0x23e178: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23e178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23e17c:
    // 0x23e17c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_23e180:
    if (ctx->pc == 0x23E180u) {
        ctx->pc = 0x23E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E17Cu;
        // 0x23e180: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E184u;
        goto label_23e184;
    }
    ctx->pc = 0x23E17Cu;
    {
        const bool branch_taken_0x23e17c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E17Cu;
        // 0x23e180: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e17c) {
            ctx->pc = 0x23E168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e168;
        }
    }
    ctx->pc = 0x23E184u;
label_23e184:
    // 0x23e184: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23e184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_23e188:
    // 0x23e188: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_23e18c:
    if (ctx->pc == 0x23E18Cu) {
        ctx->pc = 0x23E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E188u;
        // 0x23e18c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E190u;
        goto label_23e190;
    }
    ctx->pc = 0x23E188u;
    {
        const bool branch_taken_0x23e188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E188u;
        // 0x23e18c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e188) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E190u;
label_23e190:
    // 0x23e190: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
label_23e194:
    if (ctx->pc == 0x23E194u) {
        ctx->pc = 0x23E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E190u;
        // 0x23e194: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E198u;
        goto label_23e198;
    }
    ctx->pc = 0x23E190u;
    {
        const bool branch_taken_0x23e190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23e190) {
            ctx->pc = 0x23E194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E190u;
            // 0x23e194: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E224u;
            goto label_23e224;
        }
    }
    ctx->pc = 0x23E198u;
label_23e198:
    // 0x23e198: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e198u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23e19c:
    // 0x23e19c: 0x10000020  b           . + 4 + (0x20 << 2)
label_23e1a0:
    if (ctx->pc == 0x23E1A0u) {
        ctx->pc = 0x23E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E19Cu;
        // 0x23e1a0: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1A4u;
        goto label_23e1a4;
    }
    ctx->pc = 0x23E19Cu;
    {
        const bool branch_taken_0x23e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E19Cu;
        // 0x23e1a0: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e19c) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E1A4u;
label_23e1a4:
    // 0x23e1a4: 0x0  nop
    ctx->pc = 0x23e1a4u;
    // NOP
label_23e1a8:
    // 0x23e1a8: 0xc06d9fe  jal         func_1B67F8
label_23e1ac:
    if (ctx->pc == 0x23E1ACu) {
        ctx->pc = 0x23E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1A8u;
        // 0x23e1ac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1B0u;
        goto label_23e1b0;
    }
    ctx->pc = 0x23E1A8u;
    SET_GPR_U32(ctx, 31, 0x23E1B0u);
    ctx->pc = 0x23E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1A8u;
    // 0x23e1ac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x23E1B0u;
label_23e1b0:
    // 0x23e1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e1b4:
    // 0x23e1b4: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x23e1b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_23e1b8:
    // 0x23e1b8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e1b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23e1bc:
    // 0x23e1bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23e1c0:
    // 0x23e1c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23e1c4:
    // 0x23e1c4: 0xc06d89e  jal         func_1B6278
label_23e1c8:
    if (ctx->pc == 0x23E1C8u) {
        ctx->pc = 0x23E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1C4u;
        // 0x23e1c8: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1CCu;
        goto label_23e1cc;
    }
    ctx->pc = 0x23E1C4u;
    SET_GPR_U32(ctx, 31, 0x23E1CCu);
    ctx->pc = 0x23E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1C4u;
    // 0x23e1c8: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x23E1CCu;
label_23e1cc:
    // 0x23e1cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e1d0:
    // 0x23e1d0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x23e1d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_23e1d4:
    // 0x23e1d4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
label_23e1d8:
    if (ctx->pc == 0x23E1D8u) {
        ctx->pc = 0x23E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1D4u;
        // 0x23e1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1DCu;
        goto label_23e1dc;
    }
    ctx->pc = 0x23E1D4u;
    {
        const bool branch_taken_0x23e1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1D4u;
        // 0x23e1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1d4) {
            ctx->pc = 0x23E1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e1a8;
        }
    }
    ctx->pc = 0x23E1DCu;
label_23e1dc:
    // 0x23e1dc: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x23e1dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
label_23e1e0:
    // 0x23e1e0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e1e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23e1e4:
    // 0x23e1e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23e1e8:
    // 0x23e1e8: 0x1000000d  b           . + 4 + (0xD << 2)
label_23e1ec:
    if (ctx->pc == 0x23E1ECu) {
        ctx->pc = 0x23E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1E8u;
        // 0x23e1ec: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1F0u;
        goto label_23e1f0;
    }
    ctx->pc = 0x23E1E8u;
    {
        const bool branch_taken_0x23e1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1E8u;
        // 0x23e1ec: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1e8) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E1F0u;
label_23e1f0:
    // 0x23e1f0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x23e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_23e1f4:
    // 0x23e1f4: 0x0  nop
    ctx->pc = 0x23e1f4u;
    // NOP
label_23e1f8:
    // 0x23e1f8: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x23e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_23e1fc:
    // 0x23e1fc: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x23e1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_23e200:
    // 0x23e200: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23e204:
    // 0x23e204: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23e204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23e208:
    // 0x23e208: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23e20c:
    // 0x23e20c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23e210:
    // 0x23e210: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x23e210u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_23e214:
    // 0x23e214: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23e214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_23e218:
    // 0x23e218: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_23e21c:
    if (ctx->pc == 0x23E21Cu) {
        ctx->pc = 0x23E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E218u;
        // 0x23e21c: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E220u;
        goto label_23e220;
    }
    ctx->pc = 0x23E218u;
    {
        const bool branch_taken_0x23e218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E218u;
        // 0x23e21c: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e218) {
            ctx->pc = 0x23E1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e1f8;
        }
    }
    ctx->pc = 0x23E220u;
label_23e220:
    // 0x23e220: 0x3b51023  subu        $v0, $sp, $s5
    ctx->pc = 0x23e220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
label_23e224:
    // 0x23e224: 0x10000007  b           . + 4 + (0x7 << 2)
label_23e228:
    if (ctx->pc == 0x23E228u) {
        ctx->pc = 0x23E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E224u;
        // 0x23e228: 0x245e01bc  addiu       $fp, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E22Cu;
        goto label_23e22c;
    }
    ctx->pc = 0x23E224u;
    {
        const bool branch_taken_0x23e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E224u;
        // 0x23e228: 0x245e01bc  addiu       $fp, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e224) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23E22Cu;
label_23e22c:
    // 0x23e22c: 0x0  nop
    ctx->pc = 0x23e22cu;
    // NOP
label_23e230:
    // 0x23e230: 0x1220035f  beqz        $s1, . + 4 + (0x35F << 2)
label_23e234:
    if (ctx->pc == 0x23E234u) {
        ctx->pc = 0x23E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E230u;
        // 0x23e234: 0x27b50060  addiu       $s5, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E238u;
        goto label_23e238;
    }
    ctx->pc = 0x23E230u;
    {
        const bool branch_taken_0x23e230 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E230u;
        // 0x23e234: 0x27b50060  addiu       $s5, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e230) {
            ctx->pc = 0x23EFB0u;
            { ctx->pc = 0x23efb0; return; }
        }
    }
    ctx->pc = 0x23E238u;
label_23e238:
    // 0x23e238: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x23e238u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e23c:
    // 0x23e23c: 0xa2b10000  sb          $s1, 0x0($s5)
    ctx->pc = 0x23e23cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 17));
label_23e240:
    // 0x23e240: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x23e240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_23e244:
    // 0x23e244: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x23e244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_23e248:
    // 0x23e248: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x23e248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23e24c:
    // 0x23e24c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23e24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23e250:
    // 0x23e250: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_23e254:
    // 0x23e254: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x23e254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23e258:
    // 0x23e258: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x23e258u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_23e25c:
    // 0x23e25c: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x23e25cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
label_23e260:
    // 0x23e260: 0xafbe0208  sw          $fp, 0x208($sp)
    ctx->pc = 0x23e260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 30));
label_23e264:
    // 0x23e264: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_23e268:
    if (ctx->pc == 0x23E268u) {
        ctx->pc = 0x23E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E264u;
        // 0x23e268: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E26Cu;
        goto label_23e26c;
    }
    ctx->pc = 0x23E264u;
    {
        const bool branch_taken_0x23e264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E264u;
        // 0x23e268: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e264) {
            ctx->pc = 0x23E278u;
            goto label_23e278;
        }
    }
    ctx->pc = 0x23E26Cu;
label_23e26c:
    // 0x23e26c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23e270:
    // 0x23e270: 0x10000005  b           . + 4 + (0x5 << 2)
label_23e274:
    if (ctx->pc == 0x23E274u) {
        ctx->pc = 0x23E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E270u;
        // 0x23e274: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E278u;
        goto label_23e278;
    }
    ctx->pc = 0x23E270u;
    {
        const bool branch_taken_0x23e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E270u;
        // 0x23e274: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e270) {
            ctx->pc = 0x23E288u;
            goto label_23e288;
        }
    }
    ctx->pc = 0x23E278u;
label_23e278:
    // 0x23e278: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x23e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_23e27c:
    // 0x23e27c: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x23e27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
label_23e280:
    // 0x23e280: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23e280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23e284:
    // 0x23e284: 0xafa30208  sw          $v1, 0x208($sp)
    ctx->pc = 0x23e284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 3));
label_23e288:
    // 0x23e288: 0x32e50084  andi        $a1, $s7, 0x84
    ctx->pc = 0x23e288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)132);
label_23e28c:
    // 0x23e28c: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
label_23e290:
    if (ctx->pc == 0x23E290u) {
        ctx->pc = 0x23E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E28Cu;
        // 0x23e290: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E294u;
        goto label_23e294;
    }
    ctx->pc = 0x23E28Cu;
    {
        const bool branch_taken_0x23e28c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E28Cu;
        // 0x23e290: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e28c) {
            ctx->pc = 0x23E378u;
            goto label_23e378;
        }
    }
    ctx->pc = 0x23E294u;
label_23e294:
    // 0x23e294: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x23e294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_23e298:
    // 0x23e298: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x23e298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_23e29c:
    // 0x23e29c: 0xc28023  subu        $s0, $a2, $v0
    ctx->pc = 0x23e29cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_23e2a0:
    // 0x23e2a0: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
label_23e2a4:
    if (ctx->pc == 0x23E2A4u) {
        ctx->pc = 0x23E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2A0u;
        // 0x23e2a4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2A8u;
        goto label_23e2a8;
    }
    ctx->pc = 0x23E2A0u;
    {
        const bool branch_taken_0x23e2a0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2A0u;
        // 0x23e2a4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2a0) {
            ctx->pc = 0x23E378u;
            goto label_23e378;
        }
    }
    ctx->pc = 0x23E2A8u;
label_23e2a8:
    // 0x23e2a8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_23e2ac:
    if (ctx->pc == 0x23E2ACu) {
        ctx->pc = 0x23E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2A8u;
        // 0x23e2ac: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2B0u;
        goto label_23e2b0;
    }
    ctx->pc = 0x23E2A8u;
    {
        const bool branch_taken_0x23e2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2A8u;
        // 0x23e2ac: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2a8) {
            ctx->pc = 0x23E328u;
            goto label_23e328;
        }
    }
    ctx->pc = 0x23E2B0u;
label_23e2b0:
    // 0x23e2b0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x23e2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23e2b4:
    // 0x23e2b4: 0x24f4e4d0  addiu       $s4, $a3, -0x1B30
    ctx->pc = 0x23e2b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960336));
label_23e2b8:
    // 0x23e2b8: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x23e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
label_23e2bc:
    // 0x23e2bc: 0x0  nop
    ctx->pc = 0x23e2bcu;
    // NOP
label_23e2c0:
    // 0x23e2c0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x23e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_23e2c4:
    // 0x23e2c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e2c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e2c8:
    // 0x23e2c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e2cc:
    // 0x23e2cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e2d0:
    // 0x23e2d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e2d4:
    // 0x23e2d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23e2d8:
    // 0x23e2d8: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e2d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e2dc:
    // 0x23e2dc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23e2e0:
    // 0x23e2e0: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_23e2e4:
    if (ctx->pc == 0x23E2E4u) {
        ctx->pc = 0x23E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2E0u;
        // 0x23e2e4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2E8u;
        goto label_23e2e8;
    }
    ctx->pc = 0x23E2E0u;
    {
        const bool branch_taken_0x23e2e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2E0u;
        // 0x23e2e4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2e0) {
            ctx->pc = 0x23E310u;
            goto label_23e310;
        }
    }
    ctx->pc = 0x23E2E8u;
label_23e2e8:
    // 0x23e2e8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e2ec:
    // 0x23e2ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23e2f0:
    // 0x23e2f0: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x23e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
label_23e2f4:
    // 0x23e2f4: 0xc08f610  jal         func_23D840
label_23e2f8:
    if (ctx->pc == 0x23E2F8u) {
        ctx->pc = 0x23E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2F4u;
        // 0x23e2f8: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E2FCu;
        goto label_23e2fc;
    }
    ctx->pc = 0x23E2F4u;
    SET_GPR_U32(ctx, 31, 0x23E2FCu);
    ctx->pc = 0x23E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E2F4u;
    // 0x23e2f8: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E2FCu;
label_23e2fc:
    // 0x23e2fc: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x23e2fcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_23e300:
    // 0x23e300: 0x14400333  bnez        $v0, . + 4 + (0x333 << 2)
label_23e304:
    if (ctx->pc == 0x23E304u) {
        ctx->pc = 0x23E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E300u;
        // 0x23e304: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E308u;
        goto label_23e308;
    }
    ctx->pc = 0x23E300u;
    {
        const bool branch_taken_0x23e300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E300u;
        // 0x23e304: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e300) {
            ctx->pc = 0x23EFD0u;
            { ctx->pc = 0x23efd0; return; }
        }
    }
    ctx->pc = 0x23E308u;
label_23e308:
    // 0x23e308: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23e308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e30c:
    // 0x23e30c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23e30cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23e310:
    // 0x23e310: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23e310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_23e314:
    // 0x23e314: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23e318:
    // 0x23e318: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
label_23e31c:
    if (ctx->pc == 0x23E31Cu) {
        ctx->pc = 0x23E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E318u;
        // 0x23e31c: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E320u;
        goto label_23e320;
    }
    ctx->pc = 0x23E318u;
    {
        const bool branch_taken_0x23e318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e318) {
            ctx->pc = 0x23E31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E318u;
            // 0x23e31c: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e2c0;
        }
    }
    ctx->pc = 0x23E320u;
label_23e320:
    // 0x23e320: 0x10000002  b           . + 4 + (0x2 << 2)
label_23e324:
    if (ctx->pc == 0x23E324u) {
        ctx->pc = 0x23E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E320u;
        // 0x23e324: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E328u;
        goto label_23e328;
    }
    ctx->pc = 0x23E320u;
    {
        const bool branch_taken_0x23e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E320u;
        // 0x23e324: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e320) {
            ctx->pc = 0x23E32Cu;
            goto label_23e32c;
        }
    }
    ctx->pc = 0x23E328u;
label_23e328:
    // 0x23e328: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e328u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e32c:
    // 0x23e32c: 0x24e2e4d0  addiu       $v0, $a3, -0x1B30
    ctx->pc = 0x23e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960336));
label_23e330:
    // 0x23e330: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e330u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23e334:
    // 0x23e334: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e338:
    // 0x23e338: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e33c:
    // 0x23e33c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e340:
    // 0x23e340: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e344:
    // 0x23e344: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23e348:
    // 0x23e348: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e348u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e34c:
    // 0x23e34c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23e350:
    // 0x23e350: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23e354:
    if (ctx->pc == 0x23E354u) {
        ctx->pc = 0x23E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E350u;
        // 0x23e354: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E358u;
        goto label_23e358;
    }
    ctx->pc = 0x23E350u;
    {
        const bool branch_taken_0x23e350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E350u;
        // 0x23e354: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e350) {
            ctx->pc = 0x23E374u;
            goto label_23e374;
        }
    }
    ctx->pc = 0x23E358u;
label_23e358:
    // 0x23e358: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e35c:
    // 0x23e35c: 0xc08f610  jal         func_23D840
label_23e360:
    if (ctx->pc == 0x23E360u) {
        ctx->pc = 0x23E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E35Cu;
        // 0x23e360: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E364u;
        goto label_23e364;
    }
    ctx->pc = 0x23E35Cu;
    SET_GPR_U32(ctx, 31, 0x23E364u);
    ctx->pc = 0x23E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E35Cu;
    // 0x23e360: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E364u;
label_23e364:
    // 0x23e364: 0x1440031b  bnez        $v0, . + 4 + (0x31B << 2)
label_23e368:
    if (ctx->pc == 0x23E368u) {
        ctx->pc = 0x23E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E364u;
        // 0x23e368: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E36Cu;
        goto label_23e36c;
    }
    ctx->pc = 0x23E364u;
    {
        const bool branch_taken_0x23e364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E364u;
        // 0x23e368: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e364) {
            ctx->pc = 0x23EFD4u;
            { ctx->pc = 0x23efd4; return; }
        }
    }
    ctx->pc = 0x23E36Cu;
label_23e36c:
    // 0x23e36c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e370:
    // 0x23e370: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23e370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e374:
    // 0x23e374: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x23e374u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_23e378:
    // 0x23e378: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_23e37c:
    if (ctx->pc == 0x23E37Cu) {
        ctx->pc = 0x23E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E378u;
        // 0x23e37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E380u;
        goto label_23e380;
    }
    ctx->pc = 0x23E378u;
    {
        const bool branch_taken_0x23e378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E378u;
        // 0x23e37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e378) {
            ctx->pc = 0x23E3D0u;
            goto label_23e3d0;
        }
    }
    ctx->pc = 0x23E380u;
label_23e380:
    // 0x23e380: 0x27a301d1  addiu       $v1, $sp, 0x1D1
    ctx->pc = 0x23e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
label_23e384:
    // 0x23e384: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x23e384u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_23e388:
    // 0x23e388: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x23e388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_23e38c:
    // 0x23e38c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e38cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e390:
    // 0x23e390: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e394:
    // 0x23e394: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e398:
    // 0x23e398: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e39c:
    // 0x23e39c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e3a0:
    // 0x23e3a0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e3a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e3a4:
    // 0x23e3a4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23e3a8:
    // 0x23e3a8: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
label_23e3ac:
    if (ctx->pc == 0x23E3ACu) {
        ctx->pc = 0x23E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3A8u;
        // 0x23e3ac: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E3B0u;
        goto label_23e3b0;
    }
    ctx->pc = 0x23E3A8u;
    {
        const bool branch_taken_0x23e3a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3A8u;
        // 0x23e3ac: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3a8) {
            ctx->pc = 0x23E434u;
            goto label_23e434;
        }
    }
    ctx->pc = 0x23E3B0u;
label_23e3b0:
    // 0x23e3b0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e3b4:
    // 0x23e3b4: 0xc08f610  jal         func_23D840
label_23e3b8:
    if (ctx->pc == 0x23E3B8u) {
        ctx->pc = 0x23E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3B4u;
        // 0x23e3b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E3BCu;
        goto label_23e3bc;
    }
    ctx->pc = 0x23E3B4u;
    SET_GPR_U32(ctx, 31, 0x23E3BCu);
    ctx->pc = 0x23E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E3B4u;
    // 0x23e3b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E3BCu;
label_23e3bc:
    // 0x23e3bc: 0x14400305  bnez        $v0, . + 4 + (0x305 << 2)
label_23e3c0:
    if (ctx->pc == 0x23E3C0u) {
        ctx->pc = 0x23E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3BCu;
        // 0x23e3c0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E3C4u;
        goto label_23e3c4;
    }
    ctx->pc = 0x23E3BCu;
    {
        const bool branch_taken_0x23e3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3BCu;
        // 0x23e3c0: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3bc) {
            ctx->pc = 0x23EFD4u;
            { ctx->pc = 0x23efd4; return; }
        }
    }
    ctx->pc = 0x23E3C4u;
label_23e3c4:
    // 0x23e3c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e3c8:
    // 0x23e3c8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_23e3cc:
    if (ctx->pc == 0x23E3CCu) {
        ctx->pc = 0x23E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3C8u;
        // 0x23e3cc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E3D0u;
        goto label_23e3d0;
    }
    ctx->pc = 0x23E3C8u;
    {
        const bool branch_taken_0x23e3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3C8u;
        // 0x23e3cc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3c8) {
            ctx->pc = 0x23E434u;
            goto label_23e434;
        }
    }
    ctx->pc = 0x23E3D0u;
label_23e3d0:
    // 0x23e3d0: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x23e3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
label_23e3d4:
    // 0x23e3d4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_23e3d8:
    if (ctx->pc == 0x23E3D8u) {
        ctx->pc = 0x23E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3D4u;
        // 0x23e3d8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E3DCu;
        goto label_23e3dc;
    }
    ctx->pc = 0x23E3D4u;
    {
        const bool branch_taken_0x23e3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E3D4u;
        // 0x23e3d8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e3d4) {
            ctx->pc = 0x23E434u;
            goto label_23e434;
        }
    }
    ctx->pc = 0x23E3DCu;
label_23e3dc:
    // 0x23e3dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23e3e0:
    // 0x23e3e0: 0xa3a201c0  sb          $v0, 0x1C0($sp)
    ctx->pc = 0x23e3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 2));
label_23e3e4:
    // 0x23e3e4: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x23e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_23e3e8:
    // 0x23e3e8: 0xa3b101c1  sb          $s1, 0x1C1($sp)
    ctx->pc = 0x23e3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 17));
label_23e3ec:
    // 0x23e3ec: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x23e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_23e3f0:
    // 0x23e3f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x23e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_23e3f4:
    // 0x23e3f4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e3f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e3f8:
    // 0x23e3f8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e3fc:
    // 0x23e3fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e400:
    // 0x23e400: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e404:
    // 0x23e404: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x23e404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_23e408:
    // 0x23e408: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e408u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e40c:
    // 0x23e40c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23e410:
    // 0x23e410: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23e414:
    if (ctx->pc == 0x23E414u) {
        ctx->pc = 0x23E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E410u;
        // 0x23e414: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E418u;
        goto label_23e418;
    }
    ctx->pc = 0x23E410u;
    {
        const bool branch_taken_0x23e410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E410u;
        // 0x23e414: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e410) {
            ctx->pc = 0x23E434u;
            goto label_23e434;
        }
    }
    ctx->pc = 0x23E418u;
label_23e418:
    // 0x23e418: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e41c:
    // 0x23e41c: 0xc08f610  jal         func_23D840
label_23e420:
    if (ctx->pc == 0x23E420u) {
        ctx->pc = 0x23E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E41Cu;
        // 0x23e420: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E424u;
        goto label_23e424;
    }
    ctx->pc = 0x23E41Cu;
    SET_GPR_U32(ctx, 31, 0x23E424u);
    ctx->pc = 0x23E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E41Cu;
    // 0x23e420: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E424u;
label_23e424:
    // 0x23e424: 0x144002eb  bnez        $v0, . + 4 + (0x2EB << 2)
label_23e428:
    if (ctx->pc == 0x23E428u) {
        ctx->pc = 0x23E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E424u;
        // 0x23e428: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E42Cu;
        goto label_23e42c;
    }
    ctx->pc = 0x23E424u;
    {
        const bool branch_taken_0x23e424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E424u;
        // 0x23e428: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e424) {
            ctx->pc = 0x23EFD4u;
            { ctx->pc = 0x23efd4; return; }
        }
    }
    ctx->pc = 0x23E42Cu;
label_23e42c:
    // 0x23e42c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23e42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e430:
    // 0x23e430: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23e430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e434:
    // 0x23e434: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x23e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_23e438:
    // 0x23e438: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x23e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_23e43c:
    // 0x23e43c: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_23e440:
    if (ctx->pc == 0x23E440u) {
        ctx->pc = 0x23E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E43Cu;
        // 0x23e440: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E444u;
        goto label_23e444;
    }
    ctx->pc = 0x23E43Cu;
    {
        const bool branch_taken_0x23e43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E43Cu;
        // 0x23e440: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e43c) {
            ctx->pc = 0x23E528u;
            goto label_23e528;
        }
    }
    ctx->pc = 0x23E444u;
label_23e444:
    // 0x23e444: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x23e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_23e448:
    // 0x23e448: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x23e448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_23e44c:
    // 0x23e44c: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x23e44cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_23e450:
    // 0x23e450: 0x1a000035  blez        $s0, . + 4 + (0x35 << 2)
label_23e454:
    if (ctx->pc == 0x23E454u) {
        ctx->pc = 0x23E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E450u;
        // 0x23e454: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E458u;
        goto label_23e458;
    }
    ctx->pc = 0x23E450u;
    {
        const bool branch_taken_0x23e450 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E450u;
        // 0x23e454: 0x8fa40204  lw          $a0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e450) {
            ctx->pc = 0x23E528u;
            goto label_23e528;
        }
    }
    ctx->pc = 0x23E458u;
label_23e458:
    // 0x23e458: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23e45c:
    // 0x23e45c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_23e460:
    if (ctx->pc == 0x23E460u) {
        ctx->pc = 0x23E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E45Cu;
        // 0x23e460: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E464u;
        goto label_23e464;
    }
    ctx->pc = 0x23E45Cu;
    {
        const bool branch_taken_0x23e45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E45Cu;
        // 0x23e460: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e45c) {
            ctx->pc = 0x23E4D8u;
            goto label_23e4d8;
        }
    }
    ctx->pc = 0x23E464u;
label_23e464:
    // 0x23e464: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x23e464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23e468:
    // 0x23e468: 0x24f4e4e0  addiu       $s4, $a3, -0x1B20
    ctx->pc = 0x23e468u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23e46c:
    // 0x23e46c: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x23e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
label_23e470:
    // 0x23e470: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x23e470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_23e474:
    // 0x23e474: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e478:
    // 0x23e478: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e47c:
    // 0x23e47c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e480:
    // 0x23e480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e484:
    // 0x23e484: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23e488:
    // 0x23e488: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e488u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e48c:
    // 0x23e48c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23e490:
    // 0x23e490: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_23e494:
    if (ctx->pc == 0x23E494u) {
        ctx->pc = 0x23E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E490u;
        // 0x23e494: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E498u;
        goto label_23e498;
    }
    ctx->pc = 0x23E490u;
    {
        const bool branch_taken_0x23e490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E490u;
        // 0x23e494: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e490) {
            ctx->pc = 0x23E4C0u;
            goto label_23e4c0;
        }
    }
    ctx->pc = 0x23E498u;
label_23e498:
    // 0x23e498: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e49c:
    // 0x23e49c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23e4a0:
    // 0x23e4a0: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x23e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
label_23e4a4:
    // 0x23e4a4: 0xc08f610  jal         func_23D840
label_23e4a8:
    if (ctx->pc == 0x23E4A8u) {
        ctx->pc = 0x23E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4A4u;
        // 0x23e4a8: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E4ACu;
        goto label_23e4ac;
    }
    ctx->pc = 0x23E4A4u;
    SET_GPR_U32(ctx, 31, 0x23E4ACu);
    ctx->pc = 0x23E4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E4A4u;
    // 0x23e4a8: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E4ACu;
label_23e4ac:
    // 0x23e4ac: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x23e4acu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_23e4b0:
    // 0x23e4b0: 0x144002c7  bnez        $v0, . + 4 + (0x2C7 << 2)
label_23e4b4:
    if (ctx->pc == 0x23E4B4u) {
        ctx->pc = 0x23E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4B0u;
        // 0x23e4b4: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E4B8u;
        goto label_23e4b8;
    }
    ctx->pc = 0x23E4B0u;
    {
        const bool branch_taken_0x23e4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4B0u;
        // 0x23e4b4: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4b0) {
            ctx->pc = 0x23EFD0u;
            { ctx->pc = 0x23efd0; return; }
        }
    }
    ctx->pc = 0x23E4B8u;
label_23e4b8:
    // 0x23e4b8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x23e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e4bc:
    // 0x23e4bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23e4bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e4c0:
    // 0x23e4c0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23e4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_23e4c4:
    // 0x23e4c4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e4c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23e4c8:
    // 0x23e4c8: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
label_23e4cc:
    if (ctx->pc == 0x23E4CCu) {
        ctx->pc = 0x23E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4C8u;
        // 0x23e4cc: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E4D0u;
        goto label_23e4d0;
    }
    ctx->pc = 0x23E4C8u;
    {
        const bool branch_taken_0x23e4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e4c8) {
            ctx->pc = 0x23E4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E4C8u;
            // 0x23e4cc: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e470;
        }
    }
    ctx->pc = 0x23E4D0u;
label_23e4d0:
    // 0x23e4d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_23e4d4:
    if (ctx->pc == 0x23E4D4u) {
        ctx->pc = 0x23E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4D0u;
        // 0x23e4d4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E4D8u;
        goto label_23e4d8;
    }
    ctx->pc = 0x23E4D0u;
    {
        const bool branch_taken_0x23e4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4D0u;
        // 0x23e4d4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4d0) {
            ctx->pc = 0x23E4DCu;
            goto label_23e4dc;
        }
    }
    ctx->pc = 0x23E4D8u;
label_23e4d8:
    // 0x23e4d8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e4dc:
    // 0x23e4dc: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23e4e0:
    // 0x23e4e0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23e4e4:
    // 0x23e4e4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e4e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e4e8:
    // 0x23e4e8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e4ec:
    // 0x23e4ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e4f0:
    // 0x23e4f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e4f4:
    // 0x23e4f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23e4f8:
    // 0x23e4f8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e4f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e4fc:
    // 0x23e4fc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23e500:
    // 0x23e500: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23e504:
    if (ctx->pc == 0x23E504u) {
        ctx->pc = 0x23E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E500u;
        // 0x23e504: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E508u;
        goto label_23e508;
    }
    ctx->pc = 0x23E500u;
    {
        const bool branch_taken_0x23e500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E500u;
        // 0x23e504: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e500) {
            ctx->pc = 0x23E524u;
            goto label_23e524;
        }
    }
    ctx->pc = 0x23E508u;
label_23e508:
    // 0x23e508: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e50c:
    // 0x23e50c: 0xc08f610  jal         func_23D840
label_23e510:
    if (ctx->pc == 0x23E510u) {
        ctx->pc = 0x23E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E50Cu;
        // 0x23e510: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E514u;
        goto label_23e514;
    }
    ctx->pc = 0x23E50Cu;
    SET_GPR_U32(ctx, 31, 0x23E514u);
    ctx->pc = 0x23E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E50Cu;
    // 0x23e510: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E514u;
label_23e514:
    // 0x23e514: 0x144002af  bnez        $v0, . + 4 + (0x2AF << 2)
label_23e518:
    if (ctx->pc == 0x23E518u) {
        ctx->pc = 0x23E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E514u;
        // 0x23e518: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E51Cu;
        goto label_23e51c;
    }
    ctx->pc = 0x23E514u;
    {
        const bool branch_taken_0x23e514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E514u;
        // 0x23e518: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e514) {
            ctx->pc = 0x23EFD4u;
            { ctx->pc = 0x23efd4; return; }
        }
    }
    ctx->pc = 0x23E51Cu;
label_23e51c:
    // 0x23e51c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e520:
    // 0x23e520: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23e520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23e524:
    // 0x23e524: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x23e524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_23e528:
    // 0x23e528: 0x9e8023  subu        $s0, $a0, $fp
    ctx->pc = 0x23e528u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_23e52c:
    // 0x23e52c: 0x1a000036  blez        $s0, . + 4 + (0x36 << 2)
label_23e530:
    if (ctx->pc == 0x23E530u) {
        ctx->pc = 0x23E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E52Cu;
        // 0x23e530: 0x32e20100  andi        $v0, $s7, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E534u;
        goto label_23e534;
    }
    ctx->pc = 0x23E52Cu;
    {
        const bool branch_taken_0x23e52c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E52Cu;
        // 0x23e530: 0x32e20100  andi        $v0, $s7, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e52c) {
            ctx->pc = 0x23E608u;
            goto label_23e608;
        }
    }
    ctx->pc = 0x23E534u;
label_23e534:
    // 0x23e534: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23e538:
    // 0x23e538: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_23e53c:
    if (ctx->pc == 0x23E53Cu) {
        ctx->pc = 0x23E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E538u;
        // 0x23e53c: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E540u;
        goto label_23e540;
    }
    ctx->pc = 0x23E538u;
    {
        const bool branch_taken_0x23e538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E538u;
        // 0x23e53c: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e538) {
            ctx->pc = 0x23E5B8u;
            goto label_23e5b8;
        }
    }
    ctx->pc = 0x23E540u;
label_23e540:
    // 0x23e540: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x23e540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23e544:
    // 0x23e544: 0x24f4e4e0  addiu       $s4, $a3, -0x1B20
    ctx->pc = 0x23e544u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23e548:
    // 0x23e548: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x23e548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
label_23e54c:
    // 0x23e54c: 0x0  nop
    ctx->pc = 0x23e54cu;
    // NOP
label_23e550:
    // 0x23e550: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x23e550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_23e554:
    // 0x23e554: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e558:
    // 0x23e558: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e55c:
    // 0x23e55c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e560:
    // 0x23e560: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e564:
    // 0x23e564: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23e564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23e568:
    // 0x23e568: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e568u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e56c:
    // 0x23e56c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23e570:
    // 0x23e570: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_23e574:
    if (ctx->pc == 0x23E574u) {
        ctx->pc = 0x23E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E570u;
        // 0x23e574: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E578u;
        goto label_23e578;
    }
    ctx->pc = 0x23E570u;
    {
        const bool branch_taken_0x23e570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E570u;
        // 0x23e574: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e570) {
            ctx->pc = 0x23E5A0u;
            goto label_23e5a0;
        }
    }
    ctx->pc = 0x23E578u;
label_23e578:
    // 0x23e578: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e57c:
    // 0x23e57c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23e580:
    // 0x23e580: 0x7fa60220  sq          $a2, 0x220($sp)
    ctx->pc = 0x23e580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
label_23e584:
    // 0x23e584: 0xc08f610  jal         func_23D840
label_23e588:
    if (ctx->pc == 0x23E588u) {
        ctx->pc = 0x23E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E584u;
        // 0x23e588: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E58Cu;
        goto label_23e58c;
    }
    ctx->pc = 0x23E584u;
    SET_GPR_U32(ctx, 31, 0x23E58Cu);
    ctx->pc = 0x23E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E584u;
    // 0x23e588: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E58Cu;
label_23e58c:
    // 0x23e58c: 0x7ba60220  lq          $a2, 0x220($sp)
    ctx->pc = 0x23e58cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_23e590:
    // 0x23e590: 0x1440028f  bnez        $v0, . + 4 + (0x28F << 2)
label_23e594:
    if (ctx->pc == 0x23E594u) {
        ctx->pc = 0x23E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E590u;
        // 0x23e594: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E598u;
        goto label_23e598;
    }
    ctx->pc = 0x23E590u;
    {
        const bool branch_taken_0x23e590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E590u;
        // 0x23e594: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e590) {
            ctx->pc = 0x23EFD0u;
            { ctx->pc = 0x23efd0; return; }
        }
    }
    ctx->pc = 0x23E598u;
label_23e598:
    // 0x23e598: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23e598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e59c:
    // 0x23e59c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23e59cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e5a0:
    // 0x23e5a0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23e5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_23e5a4:
    // 0x23e5a4: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23e5a8:
    // 0x23e5a8: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
label_23e5ac:
    if (ctx->pc == 0x23E5ACu) {
        ctx->pc = 0x23E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5A8u;
        // 0x23e5ac: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5B0u;
        goto label_23e5b0;
    }
    ctx->pc = 0x23E5A8u;
    {
        const bool branch_taken_0x23e5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e5a8) {
            ctx->pc = 0x23E5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E5A8u;
            // 0x23e5ac: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e550;
        }
    }
    ctx->pc = 0x23E5B0u;
label_23e5b0:
    // 0x23e5b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_23e5b4:
    if (ctx->pc == 0x23E5B4u) {
        ctx->pc = 0x23E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5B0u;
        // 0x23e5b4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5B8u;
        goto label_23e5b8;
    }
    ctx->pc = 0x23E5B0u;
    {
        const bool branch_taken_0x23e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5B0u;
        // 0x23e5b4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5b0) {
            ctx->pc = 0x23E5BCu;
            goto label_23e5bc;
        }
    }
    ctx->pc = 0x23E5B8u;
label_23e5b8:
    // 0x23e5b8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e5bc:
    // 0x23e5bc: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23e5c0:
    // 0x23e5c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23e5c4:
    // 0x23e5c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e5c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e5c8:
    // 0x23e5c8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e5cc:
    // 0x23e5cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e5d0:
    // 0x23e5d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e5d4:
    // 0x23e5d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23e5d8:
    // 0x23e5d8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e5d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e5dc:
    // 0x23e5dc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23e5e0:
    // 0x23e5e0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23e5e4:
    if (ctx->pc == 0x23E5E4u) {
        ctx->pc = 0x23E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5E0u;
        // 0x23e5e4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5E8u;
        goto label_23e5e8;
    }
    ctx->pc = 0x23E5E0u;
    {
        const bool branch_taken_0x23e5e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5E0u;
        // 0x23e5e4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5e0) {
            ctx->pc = 0x23E604u;
            goto label_23e604;
        }
    }
    ctx->pc = 0x23E5E8u;
label_23e5e8:
    // 0x23e5e8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e5ec:
    // 0x23e5ec: 0xc08f610  jal         func_23D840
label_23e5f0:
    if (ctx->pc == 0x23E5F0u) {
        ctx->pc = 0x23E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5ECu;
        // 0x23e5f0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5F4u;
        goto label_23e5f4;
    }
    ctx->pc = 0x23E5ECu;
    SET_GPR_U32(ctx, 31, 0x23E5F4u);
    ctx->pc = 0x23E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5ECu;
    // 0x23e5f0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E5F4u;
label_23e5f4:
    // 0x23e5f4: 0x14400277  bnez        $v0, . + 4 + (0x277 << 2)
label_23e5f8:
    if (ctx->pc == 0x23E5F8u) {
        ctx->pc = 0x23E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5F4u;
        // 0x23e5f8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5FCu;
        goto label_23e5fc;
    }
    ctx->pc = 0x23E5F4u;
    {
        const bool branch_taken_0x23e5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5F4u;
        // 0x23e5f8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5f4) {
            ctx->pc = 0x23EFD4u;
            { ctx->pc = 0x23efd4; return; }
        }
    }
    ctx->pc = 0x23E5FCu;
label_23e5fc:
    // 0x23e5fc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23e5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e600:
    // 0x23e600: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23e600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e604:
    // 0x23e604: 0x32e20100  andi        $v0, $s7, 0x100
    ctx->pc = 0x23e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)256);
label_23e608:
    // 0x23e608: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_23e60c:
    if (ctx->pc == 0x23E60Cu) {
        ctx->pc = 0x23E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E608u;
        // 0x23e60c: 0x2a220066  slti        $v0, $s1, 0x66 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E610u;
        goto label_23e610;
    }
    ctx->pc = 0x23E608u;
    {
        const bool branch_taken_0x23e608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e608) {
            ctx->pc = 0x23E60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E608u;
            // 0x23e60c: 0x2a220066  slti        $v0, $s1, 0x66 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E630u;
            goto label_23e630;
        }
    }
    ctx->pc = 0x23E610u;
label_23e610:
    // 0x23e610: 0xae7e0004  sw          $fp, 0x4($s3)
    ctx->pc = 0x23e610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 30));
label_23e614:
    // 0x23e614: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23e614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_23e618:
    // 0x23e618: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e61c:
    // 0x23e61c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e620:
    // 0x23e620: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e624:
    // 0x23e624: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e628:
    // 0x23e628: 0x1000020b  b           . + 4 + (0x20B << 2)
label_23e62c:
    if (ctx->pc == 0x23E62Cu) {
        ctx->pc = 0x23E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E628u;
        // 0x23e62c: 0x7e1821  addu        $v1, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E630u;
        goto label_23e630;
    }
    ctx->pc = 0x23E628u;
    {
        const bool branch_taken_0x23e628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E628u;
        // 0x23e62c: 0x7e1821  addu        $v1, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e628) {
            ctx->pc = 0x23EE58u;
            { ctx->pc = 0x23ee58; return; }
        }
    }
    ctx->pc = 0x23E630u;
label_23e630:
    // 0x23e630: 0x1440017d  bnez        $v0, . + 4 + (0x17D << 2)
label_23e634:
    if (ctx->pc == 0x23E634u) {
        ctx->pc = 0x23E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E630u;
        // 0x23e634: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E638u;
        goto label_23e638;
    }
    ctx->pc = 0x23E630u;
    {
        const bool branch_taken_0x23e630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E630u;
        // 0x23e634: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e630) {
            ctx->pc = 0x23EC28u;
            { ctx->pc = 0x23ec28; return; }
        }
    }
    ctx->pc = 0x23E638u;
label_23e638:
    // 0x23e638: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23e638u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
label_23e63c:
    // 0x23e63c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e640:
    // 0x23e640: 0xc06def6  jal         func_1B7BD8
label_23e644:
    if (ctx->pc == 0x23E644u) {
        ctx->pc = 0x23E648u;
        goto label_23e648;
    }
    ctx->pc = 0x23E640u;
    SET_GPR_U32(ctx, 31, 0x23E648u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x23E648u;
label_23e648:
    // 0x23e648: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
label_23e64c:
    if (ctx->pc == 0x23E64Cu) {
        ctx->pc = 0x23E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E648u;
        // 0x23e64c: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E650u;
        goto label_23e650;
    }
    ctx->pc = 0x23E648u;
    {
        const bool branch_taken_0x23e648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E648u;
        // 0x23e64c: 0x8fa301dc  lw          $v1, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e648) {
            ctx->pc = 0x23E7C8u;
            goto label_23e7c8;
        }
    }
    ctx->pc = 0x23E650u;
label_23e650:
    // 0x23e650: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23e650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e654:
    // 0x23e654: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23e658:
    // 0x23e658: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e65c:
    // 0x23e65c: 0x2442e558  addiu       $v0, $v0, -0x1AA8
    ctx->pc = 0x23e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960472));
label_23e660:
    // 0x23e660: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23e664:
    // 0x23e664: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e668:
    // 0x23e668: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e66c:
    // 0x23e66c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e670:
    // 0x23e670: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e674:
    // 0x23e674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e678:
    // 0x23e678: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e678u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e67c:
    // 0x23e67c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23e680:
    // 0x23e680: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23e684:
    if (ctx->pc == 0x23E684u) {
        ctx->pc = 0x23E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E680u;
        // 0x23e684: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E688u;
        goto label_23e688;
    }
    ctx->pc = 0x23E680u;
    {
        const bool branch_taken_0x23e680 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E680u;
        // 0x23e684: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e680) {
            ctx->pc = 0x23E6A4u;
            goto label_23e6a4;
        }
    }
    ctx->pc = 0x23E688u;
label_23e688:
    // 0x23e688: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e68c:
    // 0x23e68c: 0xc08f610  jal         func_23D840
label_23e690:
    if (ctx->pc == 0x23E690u) {
        ctx->pc = 0x23E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E68Cu;
        // 0x23e690: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E694u;
        goto label_23e694;
    }
    ctx->pc = 0x23E68Cu;
    SET_GPR_U32(ctx, 31, 0x23E694u);
    ctx->pc = 0x23E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E68Cu;
    // 0x23e690: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E694u;
label_23e694:
    // 0x23e694: 0x1440024f  bnez        $v0, . + 4 + (0x24F << 2)
label_23e698:
    if (ctx->pc == 0x23E698u) {
        ctx->pc = 0x23E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E694u;
        // 0x23e698: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E69Cu;
        goto label_23e69c;
    }
    ctx->pc = 0x23E694u;
    {
        const bool branch_taken_0x23e694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E694u;
        // 0x23e698: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e694) {
            ctx->pc = 0x23EFD4u;
            { ctx->pc = 0x23efd4; return; }
        }
    }
    ctx->pc = 0x23E69Cu;
label_23e69c:
    // 0x23e69c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x23e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e6a0:
    // 0x23e6a0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x23e6a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23e6a4:
    // 0x23e6a4: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x23e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_23e6a8:
    // 0x23e6a8: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x23e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23e6ac:
    // 0x23e6ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23e6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23e6b0:
    // 0x23e6b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_23e6b4:
    if (ctx->pc == 0x23E6B4u) {
        ctx->pc = 0x23E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6B0u;
        // 0x23e6b4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E6B8u;
        goto label_23e6b8;
    }
    ctx->pc = 0x23E6B0u;
    {
        const bool branch_taken_0x23e6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e6b0) {
            ctx->pc = 0x23E6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E6B0u;
            // 0x23e6b4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E6C8u;
            goto label_23e6c8;
        }
    }
    ctx->pc = 0x23E6B8u;
label_23e6b8:
    // 0x23e6b8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23e6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_23e6bc:
    // 0x23e6bc: 0x104001f3  beqz        $v0, . + 4 + (0x1F3 << 2)
label_23e6c0:
    if (ctx->pc == 0x23E6C0u) {
        ctx->pc = 0x23E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6BCu;
        // 0x23e6c0: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E6C4u;
        goto label_23e6c4;
    }
    ctx->pc = 0x23E6BCu;
    {
        const bool branch_taken_0x23e6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6BCu;
        // 0x23e6c0: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6bc) {
            ctx->pc = 0x23EE8Cu;
            { ctx->pc = 0x23ee8c; return; }
        }
    }
    ctx->pc = 0x23E6C4u;
label_23e6c4:
    // 0x23e6c4: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e6c8:
    // 0x23e6c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e6cc:
    // 0x23e6cc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x23e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_23e6d0:
    // 0x23e6d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e6d4:
    // 0x23e6d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e6d8:
    // 0x23e6d8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x23e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_23e6dc:
    // 0x23e6dc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e6dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e6e0:
    // 0x23e6e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e6e4:
    // 0x23e6e4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e6e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e6e8:
    // 0x23e6e8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23e6ec:
    // 0x23e6ec: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23e6f0:
    if (ctx->pc == 0x23E6F0u) {
        ctx->pc = 0x23E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6ECu;
        // 0x23e6f0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E6F4u;
        goto label_23e6f4;
    }
    ctx->pc = 0x23E6ECu;
    {
        const bool branch_taken_0x23e6ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6ECu;
        // 0x23e6f0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6ec) {
            ctx->pc = 0x23E710u;
            goto label_23e710;
        }
    }
    ctx->pc = 0x23E6F4u;
label_23e6f4:
    // 0x23e6f4: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e6f8:
    // 0x23e6f8: 0xc08f610  jal         func_23D840
label_23e6fc:
    if (ctx->pc == 0x23E6FCu) {
        ctx->pc = 0x23E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6F8u;
        // 0x23e6fc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E700u;
        goto label_23e700;
    }
    ctx->pc = 0x23E6F8u;
    SET_GPR_U32(ctx, 31, 0x23E700u);
    ctx->pc = 0x23E6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E6F8u;
    // 0x23e6fc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E700u;
label_23e700:
    // 0x23e700: 0x14400234  bnez        $v0, . + 4 + (0x234 << 2)
label_23e704:
    if (ctx->pc == 0x23E704u) {
        ctx->pc = 0x23E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E700u;
        // 0x23e704: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E708u;
        goto label_23e708;
    }
    ctx->pc = 0x23E700u;
    {
        const bool branch_taken_0x23e700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E700u;
        // 0x23e704: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e700) {
            ctx->pc = 0x23EFD4u;
            { ctx->pc = 0x23efd4; return; }
        }
    }
    ctx->pc = 0x23E708u;
label_23e708:
    // 0x23e708: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23e708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e70c:
    // 0x23e70c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23e70cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e710:
    // 0x23e710: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x23e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23e714:
    // 0x23e714: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x23e714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23e718:
    // 0x23e718: 0x1a0001dc  blez        $s0, . + 4 + (0x1DC << 2)
label_23e71c:
    if (ctx->pc == 0x23E71Cu) {
        ctx->pc = 0x23E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E718u;
        // 0x23e71c: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E720u;
        goto label_23e720;
    }
    ctx->pc = 0x23E718u;
    {
        const bool branch_taken_0x23e718 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E718u;
        // 0x23e71c: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e718) {
            ctx->pc = 0x23EE8Cu;
            { ctx->pc = 0x23ee8c; return; }
        }
    }
    ctx->pc = 0x23E720u;
label_23e720:
    // 0x23e720: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23e724:
    // 0x23e724: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_23e728:
    if (ctx->pc == 0x23E728u) {
        ctx->pc = 0x23E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E724u;
        // 0x23e728: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E72Cu;
        goto label_23e72c;
    }
    ctx->pc = 0x23E724u;
    {
        const bool branch_taken_0x23e724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E724u;
        // 0x23e728: 0x3c07002d  lui         $a3, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e724) {
            ctx->pc = 0x23E798u;
            goto label_23e798;
        }
    }
    ctx->pc = 0x23E72Cu;
label_23e72c:
    // 0x23e72c: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x23e72cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23e730:
    // 0x23e730: 0x24f1e4e0  addiu       $s1, $a3, -0x1B20
    ctx->pc = 0x23e730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23e734:
    // 0x23e734: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x23e734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_23e738:
    // 0x23e738: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x23e738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_23e73c:
    // 0x23e73c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e73cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e740:
    // 0x23e740: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23e740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e744:
    // 0x23e744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e748:
    // 0x23e748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e74c:
    // 0x23e74c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23e750:
    // 0x23e750: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23e750u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e754:
    // 0x23e754: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23e754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23e758:
    // 0x23e758: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_23e75c:
    if (ctx->pc == 0x23E75Cu) {
        ctx->pc = 0x23E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E758u;
        // 0x23e75c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E760u;
        goto label_23e760;
    }
    ctx->pc = 0x23E758u;
    {
        const bool branch_taken_0x23e758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E758u;
        // 0x23e75c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e758) {
            ctx->pc = 0x23E780u;
            goto label_23e780;
        }
    }
    ctx->pc = 0x23E760u;
label_23e760:
    // 0x23e760: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23e760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23e764:
    // 0x23e764: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23e764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23e768:
    // 0x23e768: 0xc08f610  jal         func_23D840
label_23e76c:
    if (ctx->pc == 0x23E76Cu) {
        ctx->pc = 0x23E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E768u;
        // 0x23e76c: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E770u;
        goto label_23e770;
    }
    ctx->pc = 0x23E768u;
    SET_GPR_U32(ctx, 31, 0x23E770u);
    ctx->pc = 0x23E76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E768u;
    // 0x23e76c: 0x7fa70230  sq          $a3, 0x230($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23E770u;
label_23e770:
    // 0x23e770: 0x14400217  bnez        $v0, . + 4 + (0x217 << 2)
label_23e774:
    if (ctx->pc == 0x23E774u) {
        ctx->pc = 0x23E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E770u;
        // 0x23e774: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E778u;
        goto label_23e778;
    }
    ctx->pc = 0x23E770u;
    {
        const bool branch_taken_0x23e770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E770u;
        // 0x23e774: 0x7ba70230  lq          $a3, 0x230($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e770) {
            ctx->pc = 0x23EFD0u;
            { ctx->pc = 0x23efd0; return; }
        }
    }
    ctx->pc = 0x23E778u;
label_23e778:
    // 0x23e778: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23e778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23e77c:
    // 0x23e77c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23e77cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e780:
    // 0x23e780: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x23e780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_23e784:
    // 0x23e784: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x23e784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_23e788:
    // 0x23e788: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_23e78c:
    if (ctx->pc == 0x23E78Cu) {
        ctx->pc = 0x23E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E788u;
        // 0x23e78c: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E790u;
        goto label_23e790;
    }
    ctx->pc = 0x23E788u;
    {
        const bool branch_taken_0x23e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e788) {
            ctx->pc = 0x23E78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E788u;
            // 0x23e78c: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e738;
        }
    }
    ctx->pc = 0x23E790u;
label_23e790:
    // 0x23e790: 0x10000002  b           . + 4 + (0x2 << 2)
label_23e794:
    if (ctx->pc == 0x23E794u) {
        ctx->pc = 0x23E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E790u;
        // 0x23e794: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E798u;
        goto label_23e798;
    }
    ctx->pc = 0x23E790u;
    {
        const bool branch_taken_0x23e790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E790u;
        // 0x23e794: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e790) {
            ctx->pc = 0x23E79Cu;
            goto label_23e79c;
        }
    }
    ctx->pc = 0x23E798u;
label_23e798:
    // 0x23e798: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e79c:
    // 0x23e79c: 0x24e2e4e0  addiu       $v0, $a3, -0x1B20
    ctx->pc = 0x23e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960352));
label_23e7a0:
    // 0x23e7a0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23e7a4:
    // 0x23e7a4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e7a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e7a8:
    // 0x23e7a8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e7ac:
    // 0x23e7ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e7b0:
    // 0x23e7b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e7b4:
    // 0x23e7b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23e7b8:
    // 0x23e7b8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e7b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e7bc:
    // 0x23e7bc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23e7c0:
    // 0x23e7c0: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_23e7c4:
    if (ctx->pc == 0x23E7C4u) {
        ctx->pc = 0x23E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7C0u;
        // 0x23e7c4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E7C8u;
        goto label_23e7c8;
    }
    ctx->pc = 0x23E7C0u;
    {
        const bool branch_taken_0x23e7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7C0u;
        // 0x23e7c4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7c0) {
            ctx->pc = 0x23EE64u;
            { ctx->pc = 0x23ee64; return; }
        }
    }
    ctx->pc = 0x23E7C8u;
label_23e7c8:
    // 0x23e7c8: 0x1c600077  bgtz        $v1, . + 4 + (0x77 << 2)
label_23e7cc:
    if (ctx->pc == 0x23E7CCu) {
        ctx->pc = 0x23E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7C8u;
        // 0x23e7cc: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E7D0u;
        goto label_23e7d0;
    }
    ctx->pc = 0x23E7C8u;
    {
        const bool branch_taken_0x23e7c8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x23E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7C8u;
        // 0x23e7cc: 0x8fa401e0  lw          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7c8) {
            ctx->pc = 0x23E9A8u;
            { ctx->pc = 0x23e9a8; return; }
        }
    }
    ctx->pc = 0x23E7D0u;
label_23e7d0:
    // 0x23e7d0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23e7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e7d4:
    // 0x23e7d4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23e7d8:
    // 0x23e7d8: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23e7dc:
    // 0x23e7dc: 0x2442e558  addiu       $v0, $v0, -0x1AA8
    ctx->pc = 0x23e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960472));
label_23e7e0:
    // 0x23e7e0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23e7e4:
    // 0x23e7e4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23e7e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23e7e8:
    // 0x23e7e8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23e7ec:
    // 0x23e7ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23e7f0:
    // 0x23e7f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23e7f4:
    // 0x23e7f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23e7f8:
    // 0x23e7f8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23e7f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23e7fc:
    // 0x23e7fc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23e800:
    // 0x23e800: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23e804:
    if (ctx->pc == 0x23E804u) {
        ctx->pc = 0x23E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E800u;
        // 0x23e804: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E808u;
        { ctx->pc = 0x23e808; return; }
    }
    ctx->pc = 0x23E800u;
    {
        const bool branch_taken_0x23e800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E800u;
        // 0x23e804: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e800) {
            ctx->pc = 0x23E824u;
            { ctx->pc = 0x23e824; return; }
        }
    }
    ctx->pc = 0x23E808u;
    ctx->pc = 0x23e808u;
    return;
}
