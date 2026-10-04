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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26cfe0u: goto label_26cfe0;
        case 0x26cfe4u: goto label_26cfe4;
        case 0x26cfe8u: goto label_26cfe8;
        case 0x26cfecu: goto label_26cfec;
        case 0x26cff0u: goto label_26cff0;
        case 0x26cff4u: goto label_26cff4;
        case 0x26cff8u: goto label_26cff8;
        case 0x26cffcu: goto label_26cffc;
        case 0x26d000u: goto label_26d000;
        case 0x26d004u: goto label_26d004;
        case 0x26d008u: goto label_26d008;
        case 0x26d00cu: goto label_26d00c;
        case 0x26d010u: goto label_26d010;
        case 0x26d014u: goto label_26d014;
        case 0x26d018u: goto label_26d018;
        case 0x26d01cu: goto label_26d01c;
        case 0x26d020u: goto label_26d020;
        case 0x26d024u: goto label_26d024;
        case 0x26d028u: goto label_26d028;
        case 0x26d02cu: goto label_26d02c;
        case 0x26d030u: goto label_26d030;
        case 0x26d034u: goto label_26d034;
        case 0x26d038u: goto label_26d038;
        case 0x26d03cu: goto label_26d03c;
        case 0x26d040u: goto label_26d040;
        case 0x26d044u: goto label_26d044;
        case 0x26d048u: goto label_26d048;
        case 0x26d04cu: goto label_26d04c;
        case 0x26d050u: goto label_26d050;
        case 0x26d054u: goto label_26d054;
        case 0x26d058u: goto label_26d058;
        case 0x26d05cu: goto label_26d05c;
        case 0x26d060u: goto label_26d060;
        case 0x26d064u: goto label_26d064;
        case 0x26d068u: goto label_26d068;
        case 0x26d06cu: goto label_26d06c;
        case 0x26d070u: goto label_26d070;
        case 0x26d074u: goto label_26d074;
        case 0x26d078u: goto label_26d078;
        case 0x26d07cu: goto label_26d07c;
        case 0x26d080u: goto label_26d080;
        case 0x26d084u: goto label_26d084;
        case 0x26d088u: goto label_26d088;
        case 0x26d08cu: goto label_26d08c;
        case 0x26d090u: goto label_26d090;
        case 0x26d094u: goto label_26d094;
        case 0x26d098u: goto label_26d098;
        case 0x26d09cu: goto label_26d09c;
        case 0x26d0a0u: goto label_26d0a0;
        case 0x26d0a4u: goto label_26d0a4;
        case 0x26d0a8u: goto label_26d0a8;
        case 0x26d0acu: goto label_26d0ac;
        case 0x26d0b0u: goto label_26d0b0;
        case 0x26d0b4u: goto label_26d0b4;
        case 0x26d0b8u: goto label_26d0b8;
        case 0x26d0bcu: goto label_26d0bc;
        case 0x26d0c0u: goto label_26d0c0;
        case 0x26d0c4u: goto label_26d0c4;
        case 0x26d0c8u: goto label_26d0c8;
        case 0x26d0ccu: goto label_26d0cc;
        case 0x26d0d0u: goto label_26d0d0;
        case 0x26d0d4u: goto label_26d0d4;
        case 0x26d0d8u: goto label_26d0d8;
        case 0x26d0dcu: goto label_26d0dc;
        case 0x26d0e0u: goto label_26d0e0;
        case 0x26d0e4u: goto label_26d0e4;
        case 0x26d0e8u: goto label_26d0e8;
        case 0x26d0ecu: goto label_26d0ec;
        case 0x26d0f0u: goto label_26d0f0;
        case 0x26d0f4u: goto label_26d0f4;
        case 0x26d0f8u: goto label_26d0f8;
        case 0x26d0fcu: goto label_26d0fc;
        case 0x26d100u: goto label_26d100;
        case 0x26d104u: goto label_26d104;
        case 0x26d108u: goto label_26d108;
        case 0x26d10cu: goto label_26d10c;
        case 0x26d110u: goto label_26d110;
        case 0x26d114u: goto label_26d114;
        case 0x26d118u: goto label_26d118;
        case 0x26d11cu: goto label_26d11c;
        case 0x26d120u: goto label_26d120;
        case 0x26d124u: goto label_26d124;
        case 0x26d128u: goto label_26d128;
        case 0x26d12cu: goto label_26d12c;
        case 0x26d130u: goto label_26d130;
        case 0x26d134u: goto label_26d134;
        case 0x26d138u: goto label_26d138;
        case 0x26d13cu: goto label_26d13c;
        case 0x26d140u: goto label_26d140;
        case 0x26d144u: goto label_26d144;
        case 0x26d148u: goto label_26d148;
        case 0x26d14cu: goto label_26d14c;
        case 0x26d150u: goto label_26d150;
        case 0x26d154u: goto label_26d154;
        case 0x26d158u: goto label_26d158;
        case 0x26d15cu: goto label_26d15c;
        case 0x26d160u: goto label_26d160;
        case 0x26d164u: goto label_26d164;
        case 0x26d168u: goto label_26d168;
        case 0x26d16cu: goto label_26d16c;
        case 0x26d170u: goto label_26d170;
        case 0x26d174u: goto label_26d174;
        case 0x26d178u: goto label_26d178;
        case 0x26d17cu: goto label_26d17c;
        case 0x26d180u: goto label_26d180;
        case 0x26d184u: goto label_26d184;
        case 0x26d188u: goto label_26d188;
        case 0x26d18cu: goto label_26d18c;
        case 0x26d190u: goto label_26d190;
        case 0x26d194u: goto label_26d194;
        case 0x26d198u: goto label_26d198;
        case 0x26d19cu: goto label_26d19c;
        case 0x26d1a0u: goto label_26d1a0;
        case 0x26d1a4u: goto label_26d1a4;
        case 0x26d1a8u: goto label_26d1a8;
        case 0x26d1acu: goto label_26d1ac;
        case 0x26d1b0u: goto label_26d1b0;
        case 0x26d1b4u: goto label_26d1b4;
        case 0x26d1b8u: goto label_26d1b8;
        case 0x26d1bcu: goto label_26d1bc;
        case 0x26d1c0u: goto label_26d1c0;
        case 0x26d1c4u: goto label_26d1c4;
        case 0x26d1c8u: goto label_26d1c8;
        case 0x26d1ccu: goto label_26d1cc;
        case 0x26d1d0u: goto label_26d1d0;
        case 0x26d1d4u: goto label_26d1d4;
        case 0x26d1d8u: goto label_26d1d8;
        case 0x26d1dcu: goto label_26d1dc;
        case 0x26d1e0u: goto label_26d1e0;
        case 0x26d1e4u: goto label_26d1e4;
        case 0x26d1e8u: goto label_26d1e8;
        case 0x26d1ecu: goto label_26d1ec;
        case 0x26d1f0u: goto label_26d1f0;
        case 0x26d1f4u: goto label_26d1f4;
        case 0x26d1f8u: goto label_26d1f8;
        case 0x26d1fcu: goto label_26d1fc;
        case 0x26d200u: goto label_26d200;
        case 0x26d204u: goto label_26d204;
        case 0x26d208u: goto label_26d208;
        case 0x26d20cu: goto label_26d20c;
        case 0x26d210u: goto label_26d210;
        case 0x26d214u: goto label_26d214;
        case 0x26d218u: goto label_26d218;
        case 0x26d21cu: goto label_26d21c;
        case 0x26d220u: goto label_26d220;
        case 0x26d224u: goto label_26d224;
        case 0x26d228u: goto label_26d228;
        case 0x26d22cu: goto label_26d22c;
        case 0x26d230u: goto label_26d230;
        case 0x26d234u: goto label_26d234;
        case 0x26d238u: goto label_26d238;
        case 0x26d23cu: goto label_26d23c;
        case 0x26d240u: goto label_26d240;
        case 0x26d244u: goto label_26d244;
        case 0x26d248u: goto label_26d248;
        case 0x26d24cu: goto label_26d24c;
        case 0x26d250u: goto label_26d250;
        case 0x26d254u: goto label_26d254;
        case 0x26d258u: goto label_26d258;
        case 0x26d25cu: goto label_26d25c;
        case 0x26d260u: goto label_26d260;
        case 0x26d264u: goto label_26d264;
        case 0x26d268u: goto label_26d268;
        case 0x26d26cu: goto label_26d26c;
        case 0x26d270u: goto label_26d270;
        case 0x26d274u: goto label_26d274;
        case 0x26d278u: goto label_26d278;
        case 0x26d27cu: goto label_26d27c;
        case 0x26d280u: goto label_26d280;
        case 0x26d284u: goto label_26d284;
        case 0x26d288u: goto label_26d288;
        case 0x26d28cu: goto label_26d28c;
        case 0x26d290u: goto label_26d290;
        case 0x26d294u: goto label_26d294;
        case 0x26d298u: goto label_26d298;
        case 0x26d29cu: goto label_26d29c;
        case 0x26d2a0u: goto label_26d2a0;
        case 0x26d2a4u: goto label_26d2a4;
        case 0x26d2a8u: goto label_26d2a8;
        case 0x26d2acu: goto label_26d2ac;
        case 0x26d2b0u: goto label_26d2b0;
        case 0x26d2b4u: goto label_26d2b4;
        case 0x26d2b8u: goto label_26d2b8;
        case 0x26d2bcu: goto label_26d2bc;
        case 0x26d2c0u: goto label_26d2c0;
        case 0x26d2c4u: goto label_26d2c4;
        case 0x26d2c8u: goto label_26d2c8;
        case 0x26d2ccu: goto label_26d2cc;
        case 0x26d2d0u: goto label_26d2d0;
        case 0x26d2d4u: goto label_26d2d4;
        case 0x26d2d8u: goto label_26d2d8;
        case 0x26d2dcu: goto label_26d2dc;
        case 0x26d2e0u: goto label_26d2e0;
        case 0x26d2e4u: goto label_26d2e4;
        case 0x26d2e8u: goto label_26d2e8;
        case 0x26d2ecu: goto label_26d2ec;
        case 0x26d2f0u: goto label_26d2f0;
        case 0x26d2f4u: goto label_26d2f4;
        case 0x26d2f8u: goto label_26d2f8;
        case 0x26d2fcu: goto label_26d2fc;
        case 0x26d300u: goto label_26d300;
        case 0x26d304u: goto label_26d304;
        case 0x26d308u: goto label_26d308;
        case 0x26d30cu: goto label_26d30c;
        case 0x26d310u: goto label_26d310;
        case 0x26d314u: goto label_26d314;
        case 0x26d318u: goto label_26d318;
        case 0x26d31cu: goto label_26d31c;
        case 0x26d320u: goto label_26d320;
        case 0x26d324u: goto label_26d324;
        case 0x26d328u: goto label_26d328;
        case 0x26d32cu: goto label_26d32c;
        case 0x26d330u: goto label_26d330;
        case 0x26d334u: goto label_26d334;
        case 0x26d338u: goto label_26d338;
        case 0x26d33cu: goto label_26d33c;
        case 0x26d340u: goto label_26d340;
        case 0x26d344u: goto label_26d344;
        case 0x26d348u: goto label_26d348;
        case 0x26d34cu: goto label_26d34c;
        case 0x26d350u: goto label_26d350;
        case 0x26d354u: goto label_26d354;
        case 0x26d358u: goto label_26d358;
        case 0x26d35cu: goto label_26d35c;
        case 0x26d360u: goto label_26d360;
        case 0x26d364u: goto label_26d364;
        case 0x26d368u: goto label_26d368;
        case 0x26d36cu: goto label_26d36c;
        case 0x26d370u: goto label_26d370;
        case 0x26d374u: goto label_26d374;
        case 0x26d378u: goto label_26d378;
        case 0x26d37cu: goto label_26d37c;
        case 0x26d380u: goto label_26d380;
        case 0x26d384u: goto label_26d384;
        case 0x26d388u: goto label_26d388;
        case 0x26d38cu: goto label_26d38c;
        case 0x26d390u: goto label_26d390;
        case 0x26d394u: goto label_26d394;
        case 0x26d398u: goto label_26d398;
        case 0x26d39cu: goto label_26d39c;
        case 0x26d3a0u: goto label_26d3a0;
        case 0x26d3a4u: goto label_26d3a4;
        case 0x26d3a8u: goto label_26d3a8;
        case 0x26d3acu: goto label_26d3ac;
        case 0x26d3b0u: goto label_26d3b0;
        case 0x26d3b4u: goto label_26d3b4;
        case 0x26d3b8u: goto label_26d3b8;
        case 0x26d3bcu: goto label_26d3bc;
        case 0x26d3c0u: goto label_26d3c0;
        case 0x26d3c4u: goto label_26d3c4;
        case 0x26d3c8u: goto label_26d3c8;
        case 0x26d3ccu: goto label_26d3cc;
        case 0x26d3d0u: goto label_26d3d0;
        case 0x26d3d4u: goto label_26d3d4;
        case 0x26d3d8u: goto label_26d3d8;
        case 0x26d3dcu: goto label_26d3dc;
        case 0x26d3e0u: goto label_26d3e0;
        case 0x26d3e4u: goto label_26d3e4;
        case 0x26d3e8u: goto label_26d3e8;
        case 0x26d3ecu: goto label_26d3ec;
        case 0x26d3f0u: goto label_26d3f0;
        case 0x26d3f4u: goto label_26d3f4;
        case 0x26d3f8u: goto label_26d3f8;
        case 0x26d3fcu: goto label_26d3fc;
        case 0x26d400u: goto label_26d400;
        case 0x26d404u: goto label_26d404;
        case 0x26d408u: goto label_26d408;
        case 0x26d40cu: goto label_26d40c;
        case 0x26d410u: goto label_26d410;
        case 0x26d414u: goto label_26d414;
        case 0x26d418u: goto label_26d418;
        case 0x26d41cu: goto label_26d41c;
        case 0x26d420u: goto label_26d420;
        case 0x26d424u: goto label_26d424;
        case 0x26d428u: goto label_26d428;
        case 0x26d42cu: goto label_26d42c;
        case 0x26d430u: goto label_26d430;
        case 0x26d434u: goto label_26d434;
        case 0x26d438u: goto label_26d438;
        case 0x26d43cu: goto label_26d43c;
        case 0x26d440u: goto label_26d440;
        case 0x26d444u: goto label_26d444;
        case 0x26d448u: goto label_26d448;
        case 0x26d44cu: goto label_26d44c;
        case 0x26d450u: goto label_26d450;
        case 0x26d454u: goto label_26d454;
        case 0x26d458u: goto label_26d458;
        case 0x26d45cu: goto label_26d45c;
        case 0x26d460u: goto label_26d460;
        case 0x26d464u: goto label_26d464;
        case 0x26d468u: goto label_26d468;
        case 0x26d46cu: goto label_26d46c;
        case 0x26d470u: goto label_26d470;
        case 0x26d474u: goto label_26d474;
        case 0x26d478u: goto label_26d478;
        case 0x26d47cu: goto label_26d47c;
        case 0x26d480u: goto label_26d480;
        case 0x26d484u: goto label_26d484;
        case 0x26d488u: goto label_26d488;
        case 0x26d48cu: goto label_26d48c;
        case 0x26d490u: goto label_26d490;
        case 0x26d494u: goto label_26d494;
        case 0x26d498u: goto label_26d498;
        case 0x26d49cu: goto label_26d49c;
        case 0x26d4a0u: goto label_26d4a0;
        case 0x26d4a4u: goto label_26d4a4;
        case 0x26d4a8u: goto label_26d4a8;
        case 0x26d4acu: goto label_26d4ac;
        case 0x26d4b0u: goto label_26d4b0;
        case 0x26d4b4u: goto label_26d4b4;
        case 0x26d4b8u: goto label_26d4b8;
        case 0x26d4bcu: goto label_26d4bc;
        case 0x26d4c0u: goto label_26d4c0;
        case 0x26d4c4u: goto label_26d4c4;
        case 0x26d4c8u: goto label_26d4c8;
        case 0x26d4ccu: goto label_26d4cc;
        case 0x26d4d0u: goto label_26d4d0;
        case 0x26d4d4u: goto label_26d4d4;
        case 0x26d4d8u: goto label_26d4d8;
        case 0x26d4dcu: goto label_26d4dc;
        case 0x26d4e0u: goto label_26d4e0;
        case 0x26d4e4u: goto label_26d4e4;
        case 0x26d4e8u: goto label_26d4e8;
        case 0x26d4ecu: goto label_26d4ec;
        case 0x26d4f0u: goto label_26d4f0;
        case 0x26d4f4u: goto label_26d4f4;
        case 0x26d4f8u: goto label_26d4f8;
        case 0x26d4fcu: goto label_26d4fc;
        case 0x26d500u: goto label_26d500;
        case 0x26d504u: goto label_26d504;
        case 0x26d508u: goto label_26d508;
        case 0x26d50cu: goto label_26d50c;
        case 0x26d510u: goto label_26d510;
        case 0x26d514u: goto label_26d514;
        case 0x26d518u: goto label_26d518;
        case 0x26d51cu: goto label_26d51c;
        case 0x26d520u: goto label_26d520;
        case 0x26d524u: goto label_26d524;
        case 0x26d528u: goto label_26d528;
        case 0x26d52cu: goto label_26d52c;
        case 0x26d530u: goto label_26d530;
        case 0x26d534u: goto label_26d534;
        case 0x26d538u: goto label_26d538;
        case 0x26d53cu: goto label_26d53c;
        case 0x26d540u: goto label_26d540;
        case 0x26d544u: goto label_26d544;
        case 0x26d548u: goto label_26d548;
        case 0x26d54cu: goto label_26d54c;
        case 0x26d550u: goto label_26d550;
        case 0x26d554u: goto label_26d554;
        case 0x26d558u: goto label_26d558;
        case 0x26d55cu: goto label_26d55c;
        case 0x26d560u: goto label_26d560;
        case 0x26d564u: goto label_26d564;
        case 0x26d568u: goto label_26d568;
        case 0x26d56cu: goto label_26d56c;
        case 0x26d570u: goto label_26d570;
        case 0x26d574u: goto label_26d574;
        case 0x26d578u: goto label_26d578;
        case 0x26d57cu: goto label_26d57c;
        case 0x26d580u: goto label_26d580;
        case 0x26d584u: goto label_26d584;
        case 0x26d588u: goto label_26d588;
        case 0x26d58cu: goto label_26d58c;
        case 0x26d590u: goto label_26d590;
        case 0x26d594u: goto label_26d594;
        case 0x26d598u: goto label_26d598;
        case 0x26d59cu: goto label_26d59c;
        case 0x26d5a0u: goto label_26d5a0;
        case 0x26d5a4u: goto label_26d5a4;
        case 0x26d5a8u: goto label_26d5a8;
        case 0x26d5acu: goto label_26d5ac;
        case 0x26d5b0u: goto label_26d5b0;
        case 0x26d5b4u: goto label_26d5b4;
        case 0x26d5b8u: goto label_26d5b8;
        case 0x26d5bcu: goto label_26d5bc;
        case 0x26d5c0u: goto label_26d5c0;
        case 0x26d5c4u: goto label_26d5c4;
        case 0x26d5c8u: goto label_26d5c8;
        case 0x26d5ccu: goto label_26d5cc;
        case 0x26d5d0u: goto label_26d5d0;
        case 0x26d5d4u: goto label_26d5d4;
        case 0x26d5d8u: goto label_26d5d8;
        case 0x26d5dcu: goto label_26d5dc;
        case 0x26d5e0u: goto label_26d5e0;
        case 0x26d5e4u: goto label_26d5e4;
        case 0x26d5e8u: goto label_26d5e8;
        case 0x26d5ecu: goto label_26d5ec;
        case 0x26d5f0u: goto label_26d5f0;
        case 0x26d5f4u: goto label_26d5f4;
        case 0x26d5f8u: goto label_26d5f8;
        case 0x26d5fcu: goto label_26d5fc;
        case 0x26d600u: goto label_26d600;
        case 0x26d604u: goto label_26d604;
        case 0x26d608u: goto label_26d608;
        case 0x26d60cu: goto label_26d60c;
        case 0x26d610u: goto label_26d610;
        case 0x26d614u: goto label_26d614;
        case 0x26d618u: goto label_26d618;
        case 0x26d61cu: goto label_26d61c;
        case 0x26d620u: goto label_26d620;
        case 0x26d624u: goto label_26d624;
        case 0x26d628u: goto label_26d628;
        case 0x26d62cu: goto label_26d62c;
        case 0x26d630u: goto label_26d630;
        case 0x26d634u: goto label_26d634;
        case 0x26d638u: goto label_26d638;
        case 0x26d63cu: goto label_26d63c;
        case 0x26d640u: goto label_26d640;
        case 0x26d644u: goto label_26d644;
        case 0x26d648u: goto label_26d648;
        case 0x26d64cu: goto label_26d64c;
        case 0x26d650u: goto label_26d650;
        case 0x26d654u: goto label_26d654;
        case 0x26d658u: goto label_26d658;
        case 0x26d65cu: goto label_26d65c;
        case 0x26d660u: goto label_26d660;
        case 0x26d664u: goto label_26d664;
        case 0x26d668u: goto label_26d668;
        case 0x26d66cu: goto label_26d66c;
        case 0x26d670u: goto label_26d670;
        case 0x26d674u: goto label_26d674;
        case 0x26d678u: goto label_26d678;
        case 0x26d67cu: goto label_26d67c;
        case 0x26d680u: goto label_26d680;
        case 0x26d684u: goto label_26d684;
        case 0x26d688u: goto label_26d688;
        case 0x26d68cu: goto label_26d68c;
        case 0x26d690u: goto label_26d690;
        case 0x26d694u: goto label_26d694;
        case 0x26d698u: goto label_26d698;
        case 0x26d69cu: goto label_26d69c;
        case 0x26d6a0u: goto label_26d6a0;
        case 0x26d6a4u: goto label_26d6a4;
        case 0x26d6a8u: goto label_26d6a8;
        case 0x26d6acu: goto label_26d6ac;
        case 0x26d6b0u: goto label_26d6b0;
        case 0x26d6b4u: goto label_26d6b4;
        case 0x26d6b8u: goto label_26d6b8;
        case 0x26d6bcu: goto label_26d6bc;
        case 0x26d6c0u: goto label_26d6c0;
        case 0x26d6c4u: goto label_26d6c4;
        case 0x26d6c8u: goto label_26d6c8;
        case 0x26d6ccu: goto label_26d6cc;
        case 0x26d6d0u: goto label_26d6d0;
        case 0x26d6d4u: goto label_26d6d4;
        case 0x26d6d8u: goto label_26d6d8;
        case 0x26d6dcu: goto label_26d6dc;
        case 0x26d6e0u: goto label_26d6e0;
        case 0x26d6e4u: goto label_26d6e4;
        case 0x26d6e8u: goto label_26d6e8;
        case 0x26d6ecu: goto label_26d6ec;
        case 0x26d6f0u: goto label_26d6f0;
        case 0x26d6f4u: goto label_26d6f4;
        case 0x26d6f8u: goto label_26d6f8;
        case 0x26d6fcu: goto label_26d6fc;
        case 0x26d700u: goto label_26d700;
        case 0x26d704u: goto label_26d704;
        case 0x26d708u: goto label_26d708;
        case 0x26d70cu: goto label_26d70c;
        case 0x26d710u: goto label_26d710;
        case 0x26d714u: goto label_26d714;
        case 0x26d718u: goto label_26d718;
        case 0x26d71cu: goto label_26d71c;
        case 0x26d720u: goto label_26d720;
        case 0x26d724u: goto label_26d724;
        case 0x26d728u: goto label_26d728;
        case 0x26d72cu: goto label_26d72c;
        case 0x26d730u: goto label_26d730;
        case 0x26d734u: goto label_26d734;
        case 0x26d738u: goto label_26d738;
        case 0x26d73cu: goto label_26d73c;
        case 0x26d740u: goto label_26d740;
        case 0x26d744u: goto label_26d744;
        case 0x26d748u: goto label_26d748;
        case 0x26d74cu: goto label_26d74c;
        case 0x26d750u: goto label_26d750;
        case 0x26d754u: goto label_26d754;
        case 0x26d758u: goto label_26d758;
        case 0x26d75cu: goto label_26d75c;
        case 0x26d760u: goto label_26d760;
        case 0x26d764u: goto label_26d764;
        case 0x26d768u: goto label_26d768;
        case 0x26d76cu: goto label_26d76c;
        case 0x26d770u: goto label_26d770;
        case 0x26d774u: goto label_26d774;
        case 0x26d778u: goto label_26d778;
        case 0x26d77cu: goto label_26d77c;
        case 0x26d780u: goto label_26d780;
        case 0x26d784u: goto label_26d784;
        case 0x26d788u: goto label_26d788;
        case 0x26d78cu: goto label_26d78c;
        case 0x26d790u: goto label_26d790;
        case 0x26d794u: goto label_26d794;
        case 0x26d798u: goto label_26d798;
        case 0x26d79cu: goto label_26d79c;
        case 0x26d7a0u: goto label_26d7a0;
        case 0x26d7a4u: goto label_26d7a4;
        case 0x26d7a8u: goto label_26d7a8;
        case 0x26d7acu: goto label_26d7ac;
        default: return;
    }

label_26cfe0:
    // 0x26cfe0: 0x2f85  .word       0x00002F85                   # INVALID     $zero, $zero, 0x2F85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cfe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26CFE0 raw=0x00002F85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26cfe4:
    // 0x26cfe4: 0x7130  tge         $zero, $zero, 452
    ctx->pc = 0x26cfe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cfe8:
    // 0x26cfe8: 0x0  nop
    ctx->pc = 0x26cfe8u;
    // NOP
label_26cfec:
    // 0x26cfec: 0x0  nop
    ctx->pc = 0x26cfecu;
    // NOP
label_26cff0:
    // 0x26cff0: 0x2f94  .word       0x00002F94                   # dsllv       $a1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26cff4:
    // 0x26cff4: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cff4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26cff8:
    // 0x26cff8: 0x0  nop
    ctx->pc = 0x26cff8u;
    // NOP
label_26cffc:
    // 0x26cffc: 0x0  nop
    ctx->pc = 0x26cffcu;
    // NOP
label_26d000:
    // 0x26d000: 0x2fa1  .word       0x00002FA1                   # addu        $a1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26d004:
    // 0x26d004: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d004u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26d008:
    // 0x26d008: 0x0  nop
    ctx->pc = 0x26d008u;
    // NOP
label_26d00c:
    // 0x26d00c: 0x0  nop
    ctx->pc = 0x26d00cu;
    // NOP
label_26d010:
    // 0x26d010: 0x2fb1  tgeu        $zero, $zero, 190
    ctx->pc = 0x26d010u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d014:
    // 0x26d014: 0x7f60  .word       0x00007F60                   # add         $t7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26d018:
    // 0x26d018: 0x0  nop
    ctx->pc = 0x26d018u;
    // NOP
label_26d01c:
    // 0x26d01c: 0x0  nop
    ctx->pc = 0x26d01cu;
    // NOP
label_26d020:
    // 0x26d020: 0x2fc1  .word       0x00002FC1                   # INVALID     $zero, $zero, 0x2FC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26D020 raw=0x00002FC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d024:
    // 0x26d024: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d024u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26d028:
    // 0x26d028: 0x0  nop
    ctx->pc = 0x26d028u;
    // NOP
label_26d02c:
    // 0x26d02c: 0x0  nop
    ctx->pc = 0x26d02cu;
    // NOP
label_26d030:
    // 0x26d030: 0x2fd3  .word       0x00002FD3                   # mtlo        $zero # 00002FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d030u;
    ctx->lo = GPR_U64(ctx, 0);
label_26d034:
    // 0x26d034: 0xa4e0  .word       0x0000A4E0                   # add         $s4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26d038:
    // 0x26d038: 0x0  nop
    ctx->pc = 0x26d038u;
    // NOP
label_26d03c:
    // 0x26d03c: 0x0  nop
    ctx->pc = 0x26d03cu;
    // NOP
label_26d040:
    // 0x26d040: 0x2fe8  .word       0x00002FE8                   # mfsa        $a1 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d040u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_26d044:
    // 0x26d044: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x26d044u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26d048:
    // 0x26d048: 0x0  nop
    ctx->pc = 0x26d048u;
    // NOP
label_26d04c:
    // 0x26d04c: 0x0  nop
    ctx->pc = 0x26d04cu;
    // NOP
label_26d050:
    // 0x26d050: 0x2ff7  .word       0x00002FF7                   # INVALID     $zero, $zero, 0x2FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26D050 raw=0x00002FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d054:
    // 0x26d054: 0x3cc0  sll         $a3, $zero, 19
    ctx->pc = 0x26d054u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26d058:
    // 0x26d058: 0x0  nop
    ctx->pc = 0x26d058u;
    // NOP
label_26d05c:
    // 0x26d05c: 0x0  nop
    ctx->pc = 0x26d05cu;
    // NOP
label_26d060:
    // 0x26d060: 0x2fff  dsra32      $a1, $zero, 31
    ctx->pc = 0x26d060u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (32 + 31));
label_26d064:
    // 0x26d064: 0x50d0  .word       0x000050D0                   # mfhi        $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d064u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d068:
    // 0x26d068: 0x0  nop
    ctx->pc = 0x26d068u;
    // NOP
label_26d06c:
    // 0x26d06c: 0x0  nop
    ctx->pc = 0x26d06cu;
    // NOP
label_26d070:
    // 0x26d070: 0x300a  movz        $a2, $zero, $zero
    ctx->pc = 0x26d070u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d074:
    // 0x26d074: 0x7860  .word       0x00007860                   # add         $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26d078:
    // 0x26d078: 0x0  nop
    ctx->pc = 0x26d078u;
    // NOP
label_26d07c:
    // 0x26d07c: 0x0  nop
    ctx->pc = 0x26d07cu;
    // NOP
label_26d080:
    // 0x26d080: 0x301a  div         $a2, $zero, $zero
    ctx->pc = 0x26d080u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26d084:
    // 0x26d084: 0x68c0  sll         $t5, $zero, 3
    ctx->pc = 0x26d084u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26d088:
    // 0x26d088: 0x0  nop
    ctx->pc = 0x26d088u;
    // NOP
label_26d08c:
    // 0x26d08c: 0x0  nop
    ctx->pc = 0x26d08cu;
    // NOP
label_26d090:
    // 0x26d090: 0x3028  mfsa        $a2
    ctx->pc = 0x26d090u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_26d094:
    // 0x26d094: 0x8b10  .word       0x00008B10                   # mfhi        $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d094u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26d098:
    // 0x26d098: 0x0  nop
    ctx->pc = 0x26d098u;
    // NOP
label_26d09c:
    // 0x26d09c: 0x0  nop
    ctx->pc = 0x26d09cu;
    // NOP
label_26d0a0:
    // 0x26d0a0: 0x303a  dsrl        $a2, $zero, 0
    ctx->pc = 0x26d0a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> 0);
label_26d0a4:
    // 0x26d0a4: 0x62d0  .word       0x000062D0                   # mfhi        $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d0a4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26d0a8:
    // 0x26d0a8: 0x0  nop
    ctx->pc = 0x26d0a8u;
    // NOP
label_26d0ac:
    // 0x26d0ac: 0x0  nop
    ctx->pc = 0x26d0acu;
    // NOP
label_26d0b0:
    // 0x26d0b0: 0x3047  .word       0x00003047                   # srav        $a2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d0b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d0b4:
    // 0x26d0b4: 0x2910  .word       0x00002910                   # mfhi        $a1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d0b4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26d0b8:
    // 0x26d0b8: 0x0  nop
    ctx->pc = 0x26d0b8u;
    // NOP
label_26d0bc:
    // 0x26d0bc: 0x0  nop
    ctx->pc = 0x26d0bcu;
    // NOP
label_26d0c0:
    // 0x26d0c0: 0x304d  break       0, 193
    ctx->pc = 0x26d0c0u;
    runtime->handleBreak(rdram, ctx);
label_26d0c4:
    // 0x26d0c4: 0x51a0  .word       0x000051A0                   # add         $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d0c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d0c8:
    // 0x26d0c8: 0x0  nop
    ctx->pc = 0x26d0c8u;
    // NOP
label_26d0cc:
    // 0x26d0cc: 0x0  nop
    ctx->pc = 0x26d0ccu;
    // NOP
label_26d0d0:
    // 0x26d0d0: 0x3058  .word       0x00003058                   # mult        $a2, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d0d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_26d0d4:
    // 0x26d0d4: 0x5310  .word       0x00005310                   # mfhi        $t2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d0d4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d0d8:
    // 0x26d0d8: 0x0  nop
    ctx->pc = 0x26d0d8u;
    // NOP
label_26d0dc:
    // 0x26d0dc: 0x0  nop
    ctx->pc = 0x26d0dcu;
    // NOP
label_26d0e0:
    // 0x26d0e0: 0x3063  .word       0x00003063                   # negu        $a2, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26d0e4:
    // 0x26d0e4: 0x4d40  sll         $t1, $zero, 21
    ctx->pc = 0x26d0e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_26d0e8:
    // 0x26d0e8: 0x0  nop
    ctx->pc = 0x26d0e8u;
    // NOP
label_26d0ec:
    // 0x26d0ec: 0x0  nop
    ctx->pc = 0x26d0ecu;
    // NOP
label_26d0f0:
    // 0x26d0f0: 0x306d  .word       0x0000306D                   # daddu       $a2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d0f4:
    // 0x26d0f4: 0x6800  sll         $t5, $zero, 0
    ctx->pc = 0x26d0f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26d0f8:
    // 0x26d0f8: 0x0  nop
    ctx->pc = 0x26d0f8u;
    // NOP
label_26d0fc:
    // 0x26d0fc: 0x0  nop
    ctx->pc = 0x26d0fcu;
    // NOP
label_26d100:
    // 0x26d100: 0x307a  dsrl        $a2, $zero, 1
    ctx->pc = 0x26d100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> 1);
label_26d104:
    // 0x26d104: 0x6a30  tge         $zero, $zero, 424
    ctx->pc = 0x26d104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d108:
    // 0x26d108: 0x0  nop
    ctx->pc = 0x26d108u;
    // NOP
label_26d10c:
    // 0x26d10c: 0x0  nop
    ctx->pc = 0x26d10cu;
    // NOP
label_26d110:
    // 0x26d110: 0x3088  .word       0x00003088                   # jr          $zero # 00003080 <InstrIdType: CPU_SPECIAL>
label_26d114:
    if (ctx->pc == 0x26D114u) {
        ctx->pc = 0x26D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D110u;
        // 0x26d114: 0x7f60  .word       0x00007F60                   # add         $t7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D118u;
        goto label_26d118;
    }
    ctx->pc = 0x26D110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D110u;
        // 0x26d114: 0x7f60  .word       0x00007F60                   # add         $t7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26D118u;
label_26d118:
    // 0x26d118: 0x0  nop
    ctx->pc = 0x26d118u;
    // NOP
label_26d11c:
    // 0x26d11c: 0x0  nop
    ctx->pc = 0x26d11cu;
    // NOP
label_26d120:
    // 0x26d120: 0x3098  .word       0x00003098                   # mult        $a2, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_26d124:
    // 0x26d124: 0x63e0  .word       0x000063E0                   # add         $t4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26d128:
    // 0x26d128: 0x0  nop
    ctx->pc = 0x26d128u;
    // NOP
label_26d12c:
    // 0x26d12c: 0x0  nop
    ctx->pc = 0x26d12cu;
    // NOP
label_26d130:
    // 0x26d130: 0x30a5  .word       0x000030A5                   # move        $a2, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26d134:
    // 0x26d134: 0xa4d0  .word       0x0000A4D0                   # mfhi        $s4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d134u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26d138:
    // 0x26d138: 0x0  nop
    ctx->pc = 0x26d138u;
    // NOP
label_26d13c:
    // 0x26d13c: 0x0  nop
    ctx->pc = 0x26d13cu;
    // NOP
label_26d140:
    // 0x26d140: 0x30ba  dsrl        $a2, $zero, 2
    ctx->pc = 0x26d140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> 2);
label_26d144:
    // 0x26d144: 0xae30  tge         $zero, $zero, 696
    ctx->pc = 0x26d144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d148:
    // 0x26d148: 0x0  nop
    ctx->pc = 0x26d148u;
    // NOP
label_26d14c:
    // 0x26d14c: 0x0  nop
    ctx->pc = 0x26d14cu;
    // NOP
label_26d150:
    // 0x26d150: 0x30d0  .word       0x000030D0                   # mfhi        $a2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d150u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26d154:
    // 0x26d154: 0x6480  sll         $t4, $zero, 18
    ctx->pc = 0x26d154u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26d158:
    // 0x26d158: 0x0  nop
    ctx->pc = 0x26d158u;
    // NOP
label_26d15c:
    // 0x26d15c: 0x0  nop
    ctx->pc = 0x26d15cu;
    // NOP
label_26d160:
    // 0x26d160: 0x30dd  .word       0x000030DD                   # dmultu      $zero, $zero # 000030C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26D160 raw=0x000030DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d164:
    // 0x26d164: 0x8110  .word       0x00008110                   # mfhi        $s0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d164u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26d168:
    // 0x26d168: 0x0  nop
    ctx->pc = 0x26d168u;
    // NOP
label_26d16c:
    // 0x26d16c: 0x0  nop
    ctx->pc = 0x26d16cu;
    // NOP
label_26d170:
    // 0x26d170: 0x30ee  .word       0x000030EE                   # dsub        $a2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d170u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_26d174:
    // 0x26d174: 0x85b0  tge         $zero, $zero, 534
    ctx->pc = 0x26d174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d178:
    // 0x26d178: 0x0  nop
    ctx->pc = 0x26d178u;
    // NOP
label_26d17c:
    // 0x26d17c: 0x0  nop
    ctx->pc = 0x26d17cu;
    // NOP
label_26d180:
    // 0x26d180: 0x30ff  dsra32      $a2, $zero, 3
    ctx->pc = 0x26d180u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (32 + 3));
label_26d184:
    // 0x26d184: 0x8150  .word       0x00008150                   # mfhi        $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d184u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26d188:
    // 0x26d188: 0x0  nop
    ctx->pc = 0x26d188u;
    // NOP
label_26d18c:
    // 0x26d18c: 0x0  nop
    ctx->pc = 0x26d18cu;
    // NOP
label_26d190:
    // 0x26d190: 0x3110  .word       0x00003110                   # mfhi        $a2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d190u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26d194:
    // 0x26d194: 0x6770  tge         $zero, $zero, 413
    ctx->pc = 0x26d194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d198:
    // 0x26d198: 0x0  nop
    ctx->pc = 0x26d198u;
    // NOP
label_26d19c:
    // 0x26d19c: 0x0  nop
    ctx->pc = 0x26d19cu;
    // NOP
label_26d1a0:
    // 0x26d1a0: 0x311d  .word       0x0000311D                   # dmultu      $zero, $zero # 00003100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d1a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26D1A0 raw=0x0000311D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d1a4:
    // 0x26d1a4: 0x9800  sll         $s3, $zero, 0
    ctx->pc = 0x26d1a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26d1a8:
    // 0x26d1a8: 0x0  nop
    ctx->pc = 0x26d1a8u;
    // NOP
label_26d1ac:
    // 0x26d1ac: 0x0  nop
    ctx->pc = 0x26d1acu;
    // NOP
label_26d1b0:
    // 0x26d1b0: 0x3130  tge         $zero, $zero, 196
    ctx->pc = 0x26d1b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d1b4:
    // 0x26d1b4: 0x5af0  tge         $zero, $zero, 363
    ctx->pc = 0x26d1b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d1b8:
    // 0x26d1b8: 0x0  nop
    ctx->pc = 0x26d1b8u;
    // NOP
label_26d1bc:
    // 0x26d1bc: 0x0  nop
    ctx->pc = 0x26d1bcu;
    // NOP
label_26d1c0:
    // 0x26d1c0: 0x313c  dsll32      $a2, $zero, 4
    ctx->pc = 0x26d1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 4));
label_26d1c4:
    // 0x26d1c4: 0x7870  tge         $zero, $zero, 481
    ctx->pc = 0x26d1c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d1c8:
    // 0x26d1c8: 0x0  nop
    ctx->pc = 0x26d1c8u;
    // NOP
label_26d1cc:
    // 0x26d1cc: 0x0  nop
    ctx->pc = 0x26d1ccu;
    // NOP
label_26d1d0:
    // 0x26d1d0: 0x314c  syscall     197
    ctx->pc = 0x26d1d0u;
    ctx->pc = 0x26D1D4u;
runtime->handleSyscall(rdram, ctx, 0xC5u);
label_26d1d4:
    // 0x26d1d4: 0x6520  .word       0x00006520                   # add         $t4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d1d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26d1d8:
    // 0x26d1d8: 0x0  nop
    ctx->pc = 0x26d1d8u;
    // NOP
label_26d1dc:
    // 0x26d1dc: 0x0  nop
    ctx->pc = 0x26d1dcu;
    // NOP
label_26d1e0:
    // 0x26d1e0: 0x3159  .word       0x00003159                   # multu       $zero, $zero # 00003140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d1e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_26d1e4:
    // 0x26d1e4: 0x6b00  sll         $t5, $zero, 12
    ctx->pc = 0x26d1e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26d1e8:
    // 0x26d1e8: 0x0  nop
    ctx->pc = 0x26d1e8u;
    // NOP
label_26d1ec:
    // 0x26d1ec: 0x0  nop
    ctx->pc = 0x26d1ecu;
    // NOP
label_26d1f0:
    // 0x26d1f0: 0x3167  .word       0x00003167                   # not         $a2, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d1f0u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26d1f4:
    // 0x26d1f4: 0x8030  tge         $zero, $zero, 512
    ctx->pc = 0x26d1f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d1f8:
    // 0x26d1f8: 0x0  nop
    ctx->pc = 0x26d1f8u;
    // NOP
label_26d1fc:
    // 0x26d1fc: 0x0  nop
    ctx->pc = 0x26d1fcu;
    // NOP
label_26d200:
    // 0x26d200: 0x3178  dsll        $a2, $zero, 5
    ctx->pc = 0x26d200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 5);
label_26d204:
    // 0x26d204: 0x5350  .word       0x00005350                   # mfhi        $t2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d204u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d208:
    // 0x26d208: 0x0  nop
    ctx->pc = 0x26d208u;
    // NOP
label_26d20c:
    // 0x26d20c: 0x0  nop
    ctx->pc = 0x26d20cu;
    // NOP
label_26d210:
    // 0x26d210: 0x3183  sra         $a2, $zero, 6
    ctx->pc = 0x26d210u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), 6));
label_26d214:
    // 0x26d214: 0xc2b0  tge         $zero, $zero, 778
    ctx->pc = 0x26d214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d218:
    // 0x26d218: 0x0  nop
    ctx->pc = 0x26d218u;
    // NOP
label_26d21c:
    // 0x26d21c: 0x0  nop
    ctx->pc = 0x26d21cu;
    // NOP
label_26d220:
    // 0x26d220: 0x319c  .word       0x0000319C                   # dmult       $zero, $zero # 00003180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26D220 raw=0x0000319C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d224:
    // 0x26d224: 0x8670  tge         $zero, $zero, 537
    ctx->pc = 0x26d224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d228:
    // 0x26d228: 0x0  nop
    ctx->pc = 0x26d228u;
    // NOP
label_26d22c:
    // 0x26d22c: 0x0  nop
    ctx->pc = 0x26d22cu;
    // NOP
label_26d230:
    // 0x26d230: 0x31ad  .word       0x000031AD                   # daddu       $a2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d234:
    // 0x26d234: 0x5bf0  tge         $zero, $zero, 367
    ctx->pc = 0x26d234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d238:
    // 0x26d238: 0x0  nop
    ctx->pc = 0x26d238u;
    // NOP
label_26d23c:
    // 0x26d23c: 0x0  nop
    ctx->pc = 0x26d23cu;
    // NOP
label_26d240:
    // 0x26d240: 0x31b9  .word       0x000031B9                   # INVALID     $zero, $zero, 0x31B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26D240 raw=0x000031B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d244:
    // 0x26d244: 0x5720  .word       0x00005720                   # add         $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d248:
    // 0x26d248: 0x0  nop
    ctx->pc = 0x26d248u;
    // NOP
label_26d24c:
    // 0x26d24c: 0x0  nop
    ctx->pc = 0x26d24cu;
    // NOP
label_26d250:
    // 0x26d250: 0x31c4  .word       0x000031C4                   # sllv        $a2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d250u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d254:
    // 0x26d254: 0x49b0  tge         $zero, $zero, 294
    ctx->pc = 0x26d254u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d258:
    // 0x26d258: 0x0  nop
    ctx->pc = 0x26d258u;
    // NOP
label_26d25c:
    // 0x26d25c: 0x0  nop
    ctx->pc = 0x26d25cu;
    // NOP
label_26d260:
    // 0x26d260: 0x31ce  .word       0x000031CE                   # INVALID     $zero, $zero, 0x31CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26D260 raw=0x000031CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d264:
    // 0x26d264: 0x6170  tge         $zero, $zero, 389
    ctx->pc = 0x26d264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d268:
    // 0x26d268: 0x0  nop
    ctx->pc = 0x26d268u;
    // NOP
label_26d26c:
    // 0x26d26c: 0x0  nop
    ctx->pc = 0x26d26cu;
    // NOP
label_26d270:
    // 0x26d270: 0x31db  .word       0x000031DB                   # divu        $a2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d270u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26d274:
    // 0x26d274: 0x6dc0  sll         $t5, $zero, 23
    ctx->pc = 0x26d274u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26d278:
    // 0x26d278: 0x0  nop
    ctx->pc = 0x26d278u;
    // NOP
label_26d27c:
    // 0x26d27c: 0x0  nop
    ctx->pc = 0x26d27cu;
    // NOP
label_26d280:
    // 0x26d280: 0x31e9  .word       0x000031E9                   # mtsa        $zero # 000031C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d280u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26d284:
    // 0x26d284: 0x5620  .word       0x00005620                   # add         $t2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d288:
    // 0x26d288: 0x0  nop
    ctx->pc = 0x26d288u;
    // NOP
label_26d28c:
    // 0x26d28c: 0x0  nop
    ctx->pc = 0x26d28cu;
    // NOP
label_26d290:
    // 0x26d290: 0x31f4  teq         $zero, $zero, 199
    ctx->pc = 0x26d290u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d294:
    // 0x26d294: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d294u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d298:
    // 0x26d298: 0x0  nop
    ctx->pc = 0x26d298u;
    // NOP
label_26d29c:
    // 0x26d29c: 0x0  nop
    ctx->pc = 0x26d29cu;
    // NOP
label_26d2a0:
    // 0x26d2a0: 0x31ff  dsra32      $a2, $zero, 7
    ctx->pc = 0x26d2a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (32 + 7));
label_26d2a4:
    // 0x26d2a4: 0x3cc0  sll         $a3, $zero, 19
    ctx->pc = 0x26d2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26d2a8:
    // 0x26d2a8: 0x0  nop
    ctx->pc = 0x26d2a8u;
    // NOP
label_26d2ac:
    // 0x26d2ac: 0x0  nop
    ctx->pc = 0x26d2acu;
    // NOP
label_26d2b0:
    // 0x26d2b0: 0x3207  .word       0x00003207                   # srav        $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d2b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d2b4:
    // 0x26d2b4: 0x4100  sll         $t0, $zero, 4
    ctx->pc = 0x26d2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26d2b8:
    // 0x26d2b8: 0x0  nop
    ctx->pc = 0x26d2b8u;
    // NOP
label_26d2bc:
    // 0x26d2bc: 0x0  nop
    ctx->pc = 0x26d2bcu;
    // NOP
label_26d2c0:
    // 0x26d2c0: 0x3210  .word       0x00003210                   # mfhi        $a2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d2c0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26d2c4:
    // 0x26d2c4: 0x2e30  tge         $zero, $zero, 184
    ctx->pc = 0x26d2c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d2c8:
    // 0x26d2c8: 0x0  nop
    ctx->pc = 0x26d2c8u;
    // NOP
label_26d2cc:
    // 0x26d2cc: 0x0  nop
    ctx->pc = 0x26d2ccu;
    // NOP
label_26d2d0:
    // 0x26d2d0: 0x3216  .word       0x00003216                   # dsrlv       $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d2d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26d2d4:
    // 0x26d2d4: 0x7850  .word       0x00007850                   # mfhi        $t7 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d2d4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26d2d8:
    // 0x26d2d8: 0x0  nop
    ctx->pc = 0x26d2d8u;
    // NOP
label_26d2dc:
    // 0x26d2dc: 0x0  nop
    ctx->pc = 0x26d2dcu;
    // NOP
label_26d2e0:
    // 0x26d2e0: 0x3226  .word       0x00003226                   # xor         $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d2e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26d2e4:
    // 0x26d2e4: 0x4380  sll         $t0, $zero, 14
    ctx->pc = 0x26d2e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_26d2e8:
    // 0x26d2e8: 0x0  nop
    ctx->pc = 0x26d2e8u;
    // NOP
label_26d2ec:
    // 0x26d2ec: 0x0  nop
    ctx->pc = 0x26d2ecu;
    // NOP
label_26d2f0:
    // 0x26d2f0: 0x322f  .word       0x0000322F                   # dsubu       $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d2f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26d2f4:
    // 0x26d2f4: 0x4810  mfhi        $t1
    ctx->pc = 0x26d2f4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26d2f8:
    // 0x26d2f8: 0x0  nop
    ctx->pc = 0x26d2f8u;
    // NOP
label_26d2fc:
    // 0x26d2fc: 0x0  nop
    ctx->pc = 0x26d2fcu;
    // NOP
label_26d300:
    // 0x26d300: 0x3239  .word       0x00003239                   # INVALID     $zero, $zero, 0x3239 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26D300 raw=0x00003239"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d304:
    // 0x26d304: 0x46f0  tge         $zero, $zero, 283
    ctx->pc = 0x26d304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d308:
    // 0x26d308: 0x0  nop
    ctx->pc = 0x26d308u;
    // NOP
label_26d30c:
    // 0x26d30c: 0x0  nop
    ctx->pc = 0x26d30cu;
    // NOP
label_26d310:
    // 0x26d310: 0x3242  srl         $a2, $zero, 9
    ctx->pc = 0x26d310u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_26d314:
    // 0x26d314: 0x4c30  tge         $zero, $zero, 304
    ctx->pc = 0x26d314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d318:
    // 0x26d318: 0x0  nop
    ctx->pc = 0x26d318u;
    // NOP
label_26d31c:
    // 0x26d31c: 0x0  nop
    ctx->pc = 0x26d31cu;
    // NOP
label_26d320:
    // 0x26d320: 0x324c  syscall     201
    ctx->pc = 0x26d320u;
    ctx->pc = 0x26D324u;
runtime->handleSyscall(rdram, ctx, 0xC9u);
label_26d324:
    // 0x26d324: 0x5700  sll         $t2, $zero, 28
    ctx->pc = 0x26d324u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26d328:
    // 0x26d328: 0x0  nop
    ctx->pc = 0x26d328u;
    // NOP
label_26d32c:
    // 0x26d32c: 0x0  nop
    ctx->pc = 0x26d32cu;
    // NOP
label_26d330:
    // 0x26d330: 0x3257  .word       0x00003257                   # dsrav       $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d330u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26d334:
    // 0x26d334: 0xf5e0  .word       0x0000F5E0                   # add         $fp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_26d338:
    // 0x26d338: 0x0  nop
    ctx->pc = 0x26d338u;
    // NOP
label_26d33c:
    // 0x26d33c: 0x0  nop
    ctx->pc = 0x26d33cu;
    // NOP
label_26d340:
    // 0x26d340: 0x3276  tne         $zero, $zero, 201
    ctx->pc = 0x26d340u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d344:
    // 0x26d344: 0x3c10  .word       0x00003C10                   # mfhi        $a3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d344u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26d348:
    // 0x26d348: 0x0  nop
    ctx->pc = 0x26d348u;
    // NOP
label_26d34c:
    // 0x26d34c: 0x0  nop
    ctx->pc = 0x26d34cu;
    // NOP
label_26d350:
    // 0x26d350: 0x327e  dsrl32      $a2, $zero, 9
    ctx->pc = 0x26d350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (32 + 9));
label_26d354:
    // 0x26d354: 0x4630  tge         $zero, $zero, 280
    ctx->pc = 0x26d354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d358:
    // 0x26d358: 0x0  nop
    ctx->pc = 0x26d358u;
    // NOP
label_26d35c:
    // 0x26d35c: 0x0  nop
    ctx->pc = 0x26d35cu;
    // NOP
label_26d360:
    // 0x26d360: 0x3287  .word       0x00003287                   # srav        $a2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d360u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d364:
    // 0x26d364: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26d368:
    // 0x26d368: 0x0  nop
    ctx->pc = 0x26d368u;
    // NOP
label_26d36c:
    // 0x26d36c: 0x0  nop
    ctx->pc = 0x26d36cu;
    // NOP
label_26d370:
    // 0x26d370: 0x3290  .word       0x00003290                   # mfhi        $a2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d370u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26d374:
    // 0x26d374: 0x3100  sll         $a2, $zero, 4
    ctx->pc = 0x26d374u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26d378:
    // 0x26d378: 0x0  nop
    ctx->pc = 0x26d378u;
    // NOP
label_26d37c:
    // 0x26d37c: 0x0  nop
    ctx->pc = 0x26d37cu;
    // NOP
label_26d380:
    // 0x26d380: 0x3297  .word       0x00003297                   # dsrav       $a2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d380u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26d384:
    // 0x26d384: 0x46b0  tge         $zero, $zero, 282
    ctx->pc = 0x26d384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d388:
    // 0x26d388: 0x0  nop
    ctx->pc = 0x26d388u;
    // NOP
label_26d38c:
    // 0x26d38c: 0x0  nop
    ctx->pc = 0x26d38cu;
    // NOP
label_26d390:
    // 0x26d390: 0x32a0  .word       0x000032A0                   # add         $a2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d390u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26d394:
    // 0x26d394: 0x8ac0  sll         $s1, $zero, 11
    ctx->pc = 0x26d394u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26d398:
    // 0x26d398: 0x0  nop
    ctx->pc = 0x26d398u;
    // NOP
label_26d39c:
    // 0x26d39c: 0x0  nop
    ctx->pc = 0x26d39cu;
    // NOP
label_26d3a0:
    // 0x26d3a0: 0x32b2  tlt         $zero, $zero, 202
    ctx->pc = 0x26d3a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d3a4:
    // 0x26d3a4: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d3a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26d3a8:
    // 0x26d3a8: 0x0  nop
    ctx->pc = 0x26d3a8u;
    // NOP
label_26d3ac:
    // 0x26d3ac: 0x0  nop
    ctx->pc = 0x26d3acu;
    // NOP
label_26d3b0:
    // 0x26d3b0: 0x32c1  .word       0x000032C1                   # INVALID     $zero, $zero, 0x32C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d3b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26D3B0 raw=0x000032C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d3b4:
    // 0x26d3b4: 0x4b90  .word       0x00004B90                   # mfhi        $t1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d3b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26d3b8:
    // 0x26d3b8: 0x0  nop
    ctx->pc = 0x26d3b8u;
    // NOP
label_26d3bc:
    // 0x26d3bc: 0x0  nop
    ctx->pc = 0x26d3bcu;
    // NOP
label_26d3c0:
    // 0x26d3c0: 0x32cb  .word       0x000032CB                   # movn        $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d3c0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d3c4:
    // 0x26d3c4: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x26d3c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26d3c8:
    // 0x26d3c8: 0x0  nop
    ctx->pc = 0x26d3c8u;
    // NOP
label_26d3cc:
    // 0x26d3cc: 0x0  nop
    ctx->pc = 0x26d3ccu;
    // NOP
label_26d3d0:
    // 0x26d3d0: 0x32d6  .word       0x000032D6                   # dsrlv       $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d3d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26d3d4:
    // 0x26d3d4: 0x3e30  tge         $zero, $zero, 248
    ctx->pc = 0x26d3d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d3d8:
    // 0x26d3d8: 0x0  nop
    ctx->pc = 0x26d3d8u;
    // NOP
label_26d3dc:
    // 0x26d3dc: 0x0  nop
    ctx->pc = 0x26d3dcu;
    // NOP
label_26d3e0:
    // 0x26d3e0: 0x32de  .word       0x000032DE                   # ddiv        $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d3e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26D3E0 raw=0x000032DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d3e4:
    // 0x26d3e4: 0x3fb0  tge         $zero, $zero, 254
    ctx->pc = 0x26d3e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d3e8:
    // 0x26d3e8: 0x0  nop
    ctx->pc = 0x26d3e8u;
    // NOP
label_26d3ec:
    // 0x26d3ec: 0x0  nop
    ctx->pc = 0x26d3ecu;
    // NOP
label_26d3f0:
    // 0x26d3f0: 0x32e6  .word       0x000032E6                   # xor         $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d3f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26d3f4:
    // 0x26d3f4: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x26d3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26d3f8:
    // 0x26d3f8: 0x0  nop
    ctx->pc = 0x26d3f8u;
    // NOP
label_26d3fc:
    // 0x26d3fc: 0x0  nop
    ctx->pc = 0x26d3fcu;
    // NOP
label_26d400:
    // 0x26d400: 0x32f0  tge         $zero, $zero, 203
    ctx->pc = 0x26d400u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d404:
    // 0x26d404: 0x4e70  tge         $zero, $zero, 313
    ctx->pc = 0x26d404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d408:
    // 0x26d408: 0x0  nop
    ctx->pc = 0x26d408u;
    // NOP
label_26d40c:
    // 0x26d40c: 0x0  nop
    ctx->pc = 0x26d40cu;
    // NOP
label_26d410:
    // 0x26d410: 0x32fa  dsrl        $a2, $zero, 11
    ctx->pc = 0x26d410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> 11);
label_26d414:
    // 0x26d414: 0x3910  .word       0x00003910                   # mfhi        $a3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d414u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26d418:
    // 0x26d418: 0x0  nop
    ctx->pc = 0x26d418u;
    // NOP
label_26d41c:
    // 0x26d41c: 0x0  nop
    ctx->pc = 0x26d41cu;
    // NOP
label_26d420:
    // 0x26d420: 0x3302  srl         $a2, $zero, 12
    ctx->pc = 0x26d420u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_26d424:
    // 0x26d424: 0x5160  .word       0x00005160                   # add         $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d428:
    // 0x26d428: 0x0  nop
    ctx->pc = 0x26d428u;
    // NOP
label_26d42c:
    // 0x26d42c: 0x0  nop
    ctx->pc = 0x26d42cu;
    // NOP
label_26d430:
    // 0x26d430: 0x330d  break       0, 204
    ctx->pc = 0x26d430u;
    runtime->handleBreak(rdram, ctx);
label_26d434:
    // 0x26d434: 0x69e0  .word       0x000069E0                   # add         $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26d438:
    // 0x26d438: 0x0  nop
    ctx->pc = 0x26d438u;
    // NOP
label_26d43c:
    // 0x26d43c: 0x0  nop
    ctx->pc = 0x26d43cu;
    // NOP
label_26d440:
    // 0x26d440: 0x331b  .word       0x0000331B                   # divu        $a2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d440u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26d444:
    // 0x26d444: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26d448:
    // 0x26d448: 0x0  nop
    ctx->pc = 0x26d448u;
    // NOP
label_26d44c:
    // 0x26d44c: 0x0  nop
    ctx->pc = 0x26d44cu;
    // NOP
label_26d450:
    // 0x26d450: 0x3324  .word       0x00003324                   # and         $a2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26d454:
    // 0x26d454: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d454u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26d458:
    // 0x26d458: 0x0  nop
    ctx->pc = 0x26d458u;
    // NOP
label_26d45c:
    // 0x26d45c: 0x0  nop
    ctx->pc = 0x26d45cu;
    // NOP
label_26d460:
    // 0x26d460: 0x332d  .word       0x0000332D                   # daddu       $a2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d464:
    // 0x26d464: 0x4f10  .word       0x00004F10                   # mfhi        $t1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d464u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26d468:
    // 0x26d468: 0x0  nop
    ctx->pc = 0x26d468u;
    // NOP
label_26d46c:
    // 0x26d46c: 0x0  nop
    ctx->pc = 0x26d46cu;
    // NOP
label_26d470:
    // 0x26d470: 0x3337  .word       0x00003337                   # INVALID     $zero, $zero, 0x3337 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26D470 raw=0x00003337"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d474:
    // 0x26d474: 0x3870  tge         $zero, $zero, 225
    ctx->pc = 0x26d474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d478:
    // 0x26d478: 0x0  nop
    ctx->pc = 0x26d478u;
    // NOP
label_26d47c:
    // 0x26d47c: 0x0  nop
    ctx->pc = 0x26d47cu;
    // NOP
label_26d480:
    // 0x26d480: 0x333f  dsra32      $a2, $zero, 12
    ctx->pc = 0x26d480u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (32 + 12));
label_26d484:
    // 0x26d484: 0x3d80  sll         $a3, $zero, 22
    ctx->pc = 0x26d484u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_26d488:
    // 0x26d488: 0x0  nop
    ctx->pc = 0x26d488u;
    // NOP
label_26d48c:
    // 0x26d48c: 0x0  nop
    ctx->pc = 0x26d48cu;
    // NOP
label_26d490:
    // 0x26d490: 0x3347  .word       0x00003347                   # srav        $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d490u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d494:
    // 0x26d494: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d494u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26d498:
    // 0x26d498: 0x0  nop
    ctx->pc = 0x26d498u;
    // NOP
label_26d49c:
    // 0x26d49c: 0x0  nop
    ctx->pc = 0x26d49cu;
    // NOP
label_26d4a0:
    // 0x26d4a0: 0x3354  .word       0x00003354                   # dsllv       $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26d4a4:
    // 0x26d4a4: 0x65b0  tge         $zero, $zero, 406
    ctx->pc = 0x26d4a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d4a8:
    // 0x26d4a8: 0x0  nop
    ctx->pc = 0x26d4a8u;
    // NOP
label_26d4ac:
    // 0x26d4ac: 0x0  nop
    ctx->pc = 0x26d4acu;
    // NOP
label_26d4b0:
    // 0x26d4b0: 0x3361  .word       0x00003361                   # addu        $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26d4b4:
    // 0x26d4b4: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4b4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26d4b8:
    // 0x26d4b8: 0x0  nop
    ctx->pc = 0x26d4b8u;
    // NOP
label_26d4bc:
    // 0x26d4bc: 0x0  nop
    ctx->pc = 0x26d4bcu;
    // NOP
label_26d4c0:
    // 0x26d4c0: 0x336a  .word       0x0000336A                   # slt         $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4c0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26d4c4:
    // 0x26d4c4: 0x4fa0  .word       0x00004FA0                   # add         $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26d4c8:
    // 0x26d4c8: 0x0  nop
    ctx->pc = 0x26d4c8u;
    // NOP
label_26d4cc:
    // 0x26d4cc: 0x0  nop
    ctx->pc = 0x26d4ccu;
    // NOP
label_26d4d0:
    // 0x26d4d0: 0x3374  teq         $zero, $zero, 205
    ctx->pc = 0x26d4d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d4d4:
    // 0x26d4d4: 0x3710  .word       0x00003710                   # mfhi        $a2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26d4d8:
    // 0x26d4d8: 0x0  nop
    ctx->pc = 0x26d4d8u;
    // NOP
label_26d4dc:
    // 0x26d4dc: 0x0  nop
    ctx->pc = 0x26d4dcu;
    // NOP
label_26d4e0:
    // 0x26d4e0: 0x337b  dsra        $a2, $zero, 13
    ctx->pc = 0x26d4e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 13);
label_26d4e4:
    // 0x26d4e4: 0x4850  .word       0x00004850                   # mfhi        $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4e4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26d4e8:
    // 0x26d4e8: 0x0  nop
    ctx->pc = 0x26d4e8u;
    // NOP
label_26d4ec:
    // 0x26d4ec: 0x0  nop
    ctx->pc = 0x26d4ecu;
    // NOP
label_26d4f0:
    // 0x26d4f0: 0x3385  .word       0x00003385                   # INVALID     $zero, $zero, 0x3385 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26D4F0 raw=0x00003385"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d4f4:
    // 0x26d4f4: 0x4c50  .word       0x00004C50                   # mfhi        $t1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4f4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26d4f8:
    // 0x26d4f8: 0x0  nop
    ctx->pc = 0x26d4f8u;
    // NOP
label_26d4fc:
    // 0x26d4fc: 0x0  nop
    ctx->pc = 0x26d4fcu;
    // NOP
label_26d500:
    // 0x26d500: 0x338f  .word       0x0000338F                   # sync # 00003000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d500u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26d504:
    // 0x26d504: 0x5710  .word       0x00005710                   # mfhi        $t2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d504u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d508:
    // 0x26d508: 0x0  nop
    ctx->pc = 0x26d508u;
    // NOP
label_26d50c:
    // 0x26d50c: 0x0  nop
    ctx->pc = 0x26d50cu;
    // NOP
label_26d510:
    // 0x26d510: 0x339a  .word       0x0000339A                   # div         $a2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d510u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26d514:
    // 0x26d514: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x26d514u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26d518:
    // 0x26d518: 0x0  nop
    ctx->pc = 0x26d518u;
    // NOP
label_26d51c:
    // 0x26d51c: 0x0  nop
    ctx->pc = 0x26d51cu;
    // NOP
label_26d520:
    // 0x26d520: 0x33a6  .word       0x000033A6                   # xor         $a2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26d524:
    // 0x26d524: 0xd570  tge         $zero, $zero, 853
    ctx->pc = 0x26d524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d528:
    // 0x26d528: 0x0  nop
    ctx->pc = 0x26d528u;
    // NOP
label_26d52c:
    // 0x26d52c: 0x0  nop
    ctx->pc = 0x26d52cu;
    // NOP
label_26d530:
    // 0x26d530: 0x33c1  .word       0x000033C1                   # INVALID     $zero, $zero, 0x33C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26D530 raw=0x000033C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d534:
    // 0x26d534: 0x98a0  .word       0x000098A0                   # add         $s3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d534u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26d538:
    // 0x26d538: 0x0  nop
    ctx->pc = 0x26d538u;
    // NOP
label_26d53c:
    // 0x26d53c: 0x0  nop
    ctx->pc = 0x26d53cu;
    // NOP
label_26d540:
    // 0x26d540: 0x33d5  .word       0x000033D5                   # INVALID     $zero, $zero, 0x33D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26D540 raw=0x000033D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d544:
    // 0x26d544: 0xe1e0  .word       0x0000E1E0                   # add         $gp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_26d548:
    // 0x26d548: 0x0  nop
    ctx->pc = 0x26d548u;
    // NOP
label_26d54c:
    // 0x26d54c: 0x0  nop
    ctx->pc = 0x26d54cu;
    // NOP
label_26d550:
    // 0x26d550: 0x33f2  tlt         $zero, $zero, 207
    ctx->pc = 0x26d550u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d554:
    // 0x26d554: 0xb250  .word       0x0000B250                   # mfhi        $s6 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d554u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26d558:
    // 0x26d558: 0x0  nop
    ctx->pc = 0x26d558u;
    // NOP
label_26d55c:
    // 0x26d55c: 0x0  nop
    ctx->pc = 0x26d55cu;
    // NOP
label_26d560:
    // 0x26d560: 0x3409  .word       0x00003409                   # jalr        $a2, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_26d564:
    if (ctx->pc == 0x26D564u) {
        ctx->pc = 0x26D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D560u;
        // 0x26d564: 0xbff0  tge         $zero, $zero, 767 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D568u;
        goto label_26d568;
    }
    ctx->pc = 0x26D560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 6, 0x26D568u);
        ctx->pc = 0x26D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D560u;
        // 0x26d564: 0xbff0  tge         $zero, $zero, 767 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D560u, 0x26D568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D568u;
label_26d568:
    // 0x26d568: 0x0  nop
    ctx->pc = 0x26d568u;
    // NOP
label_26d56c:
    // 0x26d56c: 0x0  nop
    ctx->pc = 0x26d56cu;
    // NOP
label_26d570:
    // 0x26d570: 0x3421  .word       0x00003421                   # addu        $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26d574:
    // 0x26d574: 0x69a0  .word       0x000069A0                   # add         $t5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26d578:
    // 0x26d578: 0x0  nop
    ctx->pc = 0x26d578u;
    // NOP
label_26d57c:
    // 0x26d57c: 0x0  nop
    ctx->pc = 0x26d57cu;
    // NOP
label_26d580:
    // 0x26d580: 0x342f  .word       0x0000342F                   # dsubu       $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26d584:
    // 0x26d584: 0x4430  tge         $zero, $zero, 272
    ctx->pc = 0x26d584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d588:
    // 0x26d588: 0x0  nop
    ctx->pc = 0x26d588u;
    // NOP
label_26d58c:
    // 0x26d58c: 0x0  nop
    ctx->pc = 0x26d58cu;
    // NOP
label_26d590:
    // 0x26d590: 0x3438  dsll        $a2, $zero, 16
    ctx->pc = 0x26d590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 16);
label_26d594:
    // 0x26d594: 0x73a0  .word       0x000073A0                   # add         $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26d598:
    // 0x26d598: 0x0  nop
    ctx->pc = 0x26d598u;
    // NOP
label_26d59c:
    // 0x26d59c: 0x0  nop
    ctx->pc = 0x26d59cu;
    // NOP
label_26d5a0:
    // 0x26d5a0: 0x3447  .word       0x00003447                   # srav        $a2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d5a4:
    // 0x26d5a4: 0x71a0  .word       0x000071A0                   # add         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26d5a8:
    // 0x26d5a8: 0x0  nop
    ctx->pc = 0x26d5a8u;
    // NOP
label_26d5ac:
    // 0x26d5ac: 0x0  nop
    ctx->pc = 0x26d5acu;
    // NOP
label_26d5b0:
    // 0x26d5b0: 0x3456  .word       0x00003456                   # dsrlv       $a2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26d5b4:
    // 0x26d5b4: 0xac70  tge         $zero, $zero, 689
    ctx->pc = 0x26d5b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d5b8:
    // 0x26d5b8: 0x0  nop
    ctx->pc = 0x26d5b8u;
    // NOP
label_26d5bc:
    // 0x26d5bc: 0x0  nop
    ctx->pc = 0x26d5bcu;
    // NOP
label_26d5c0:
    // 0x26d5c0: 0x346c  .word       0x0000346C                   # dadd        $a2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_26d5c4:
    // 0x26d5c4: 0xa550  .word       0x0000A550                   # mfhi        $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5c4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26d5c8:
    // 0x26d5c8: 0x0  nop
    ctx->pc = 0x26d5c8u;
    // NOP
label_26d5cc:
    // 0x26d5cc: 0x0  nop
    ctx->pc = 0x26d5ccu;
    // NOP
label_26d5d0:
    // 0x26d5d0: 0x3481  .word       0x00003481                   # INVALID     $zero, $zero, 0x3481 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26D5D0 raw=0x00003481"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d5d4:
    // 0x26d5d4: 0x84c0  sll         $s0, $zero, 19
    ctx->pc = 0x26d5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26d5d8:
    // 0x26d5d8: 0x0  nop
    ctx->pc = 0x26d5d8u;
    // NOP
label_26d5dc:
    // 0x26d5dc: 0x0  nop
    ctx->pc = 0x26d5dcu;
    // NOP
label_26d5e0:
    // 0x26d5e0: 0x3492  .word       0x00003492                   # mflo        $a2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5e0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_26d5e4:
    // 0x26d5e4: 0x5490  .word       0x00005490                   # mfhi        $t2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d5e8:
    // 0x26d5e8: 0x0  nop
    ctx->pc = 0x26d5e8u;
    // NOP
label_26d5ec:
    // 0x26d5ec: 0x0  nop
    ctx->pc = 0x26d5ecu;
    // NOP
label_26d5f0:
    // 0x26d5f0: 0x349d  .word       0x0000349D                   # dmultu      $zero, $zero # 00003480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26D5F0 raw=0x0000349D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d5f4:
    // 0x26d5f4: 0x69d0  .word       0x000069D0                   # mfhi        $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26d5f8:
    // 0x26d5f8: 0x0  nop
    ctx->pc = 0x26d5f8u;
    // NOP
label_26d5fc:
    // 0x26d5fc: 0x0  nop
    ctx->pc = 0x26d5fcu;
    // NOP
label_26d600:
    // 0x26d600: 0x34ab  .word       0x000034AB                   # sltu        $a2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d600u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26d604:
    // 0x26d604: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26d608:
    // 0x26d608: 0x0  nop
    ctx->pc = 0x26d608u;
    // NOP
label_26d60c:
    // 0x26d60c: 0x0  nop
    ctx->pc = 0x26d60cu;
    // NOP
label_26d610:
    // 0x26d610: 0x34ba  dsrl        $a2, $zero, 18
    ctx->pc = 0x26d610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> 18);
label_26d614:
    // 0x26d614: 0x8300  sll         $s0, $zero, 12
    ctx->pc = 0x26d614u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26d618:
    // 0x26d618: 0x0  nop
    ctx->pc = 0x26d618u;
    // NOP
label_26d61c:
    // 0x26d61c: 0x0  nop
    ctx->pc = 0x26d61cu;
    // NOP
label_26d620:
    // 0x26d620: 0x34cb  .word       0x000034CB                   # movn        $a2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d620u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d624:
    // 0x26d624: 0xa140  sll         $s4, $zero, 5
    ctx->pc = 0x26d624u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_26d628:
    // 0x26d628: 0x0  nop
    ctx->pc = 0x26d628u;
    // NOP
label_26d62c:
    // 0x26d62c: 0x0  nop
    ctx->pc = 0x26d62cu;
    // NOP
label_26d630:
    // 0x26d630: 0x34e0  .word       0x000034E0                   # add         $a2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d630u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26d634:
    // 0x26d634: 0x91e0  .word       0x000091E0                   # add         $s2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_26d638:
    // 0x26d638: 0x0  nop
    ctx->pc = 0x26d638u;
    // NOP
label_26d63c:
    // 0x26d63c: 0x0  nop
    ctx->pc = 0x26d63cu;
    // NOP
label_26d640:
    // 0x26d640: 0x34f3  tltu        $zero, $zero, 211
    ctx->pc = 0x26d640u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d644:
    // 0x26d644: 0x64c0  sll         $t4, $zero, 19
    ctx->pc = 0x26d644u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26d648:
    // 0x26d648: 0x0  nop
    ctx->pc = 0x26d648u;
    // NOP
label_26d64c:
    // 0x26d64c: 0x0  nop
    ctx->pc = 0x26d64cu;
    // NOP
label_26d650:
    // 0x26d650: 0x3500  sll         $a2, $zero, 20
    ctx->pc = 0x26d650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26d654:
    // 0x26d654: 0x9040  sll         $s2, $zero, 1
    ctx->pc = 0x26d654u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26d658:
    // 0x26d658: 0x0  nop
    ctx->pc = 0x26d658u;
    // NOP
label_26d65c:
    // 0x26d65c: 0x0  nop
    ctx->pc = 0x26d65cu;
    // NOP
label_26d660:
    // 0x26d660: 0x3513  .word       0x00003513                   # mtlo        $zero # 00003500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d660u;
    ctx->lo = GPR_U64(ctx, 0);
label_26d664:
    // 0x26d664: 0xa9b0  tge         $zero, $zero, 678
    ctx->pc = 0x26d664u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d668:
    // 0x26d668: 0x0  nop
    ctx->pc = 0x26d668u;
    // NOP
label_26d66c:
    // 0x26d66c: 0x0  nop
    ctx->pc = 0x26d66cu;
    // NOP
label_26d670:
    // 0x26d670: 0x3529  .word       0x00003529                   # mtsa        $zero # 00003500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d670u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26d674:
    // 0x26d674: 0xb1d0  .word       0x0000B1D0                   # mfhi        $s6 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d674u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26d678:
    // 0x26d678: 0x0  nop
    ctx->pc = 0x26d678u;
    // NOP
label_26d67c:
    // 0x26d67c: 0x0  nop
    ctx->pc = 0x26d67cu;
    // NOP
label_26d680:
    // 0x26d680: 0x3540  sll         $a2, $zero, 21
    ctx->pc = 0x26d680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_26d684:
    // 0x26d684: 0x9ac0  sll         $s3, $zero, 11
    ctx->pc = 0x26d684u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26d688:
    // 0x26d688: 0x0  nop
    ctx->pc = 0x26d688u;
    // NOP
label_26d68c:
    // 0x26d68c: 0x0  nop
    ctx->pc = 0x26d68cu;
    // NOP
label_26d690:
    // 0x26d690: 0x3554  .word       0x00003554                   # dsllv       $a2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26d694:
    // 0x26d694: 0xd080  sll         $k0, $zero, 2
    ctx->pc = 0x26d694u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26d698:
    // 0x26d698: 0x0  nop
    ctx->pc = 0x26d698u;
    // NOP
label_26d69c:
    // 0x26d69c: 0x0  nop
    ctx->pc = 0x26d69cu;
    // NOP
label_26d6a0:
    // 0x26d6a0: 0x356f  .word       0x0000356F                   # dsubu       $a2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26d6a4:
    // 0x26d6a4: 0xa0f0  tge         $zero, $zero, 643
    ctx->pc = 0x26d6a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d6a8:
    // 0x26d6a8: 0x0  nop
    ctx->pc = 0x26d6a8u;
    // NOP
label_26d6ac:
    // 0x26d6ac: 0x0  nop
    ctx->pc = 0x26d6acu;
    // NOP
label_26d6b0:
    // 0x26d6b0: 0x3584  .word       0x00003584                   # sllv        $a2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d6b4:
    // 0x26d6b4: 0x4a70  tge         $zero, $zero, 297
    ctx->pc = 0x26d6b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d6b8:
    // 0x26d6b8: 0x0  nop
    ctx->pc = 0x26d6b8u;
    // NOP
label_26d6bc:
    // 0x26d6bc: 0x0  nop
    ctx->pc = 0x26d6bcu;
    // NOP
label_26d6c0:
    // 0x26d6c0: 0x358e  .word       0x0000358E                   # INVALID     $zero, $zero, 0x358E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26D6C0 raw=0x0000358E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d6c4:
    // 0x26d6c4: 0xd510  .word       0x0000D510                   # mfhi        $k0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6c4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_26d6c8:
    // 0x26d6c8: 0x0  nop
    ctx->pc = 0x26d6c8u;
    // NOP
label_26d6cc:
    // 0x26d6cc: 0x0  nop
    ctx->pc = 0x26d6ccu;
    // NOP
label_26d6d0:
    // 0x26d6d0: 0x35a9  .word       0x000035A9                   # mtsa        $zero # 00003580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d6d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26d6d4:
    // 0x26d6d4: 0x6d00  sll         $t5, $zero, 20
    ctx->pc = 0x26d6d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26d6d8:
    // 0x26d6d8: 0x0  nop
    ctx->pc = 0x26d6d8u;
    // NOP
label_26d6dc:
    // 0x26d6dc: 0x0  nop
    ctx->pc = 0x26d6dcu;
    // NOP
label_26d6e0:
    // 0x26d6e0: 0x35b7  .word       0x000035B7                   # INVALID     $zero, $zero, 0x35B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26D6E0 raw=0x000035B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d6e4:
    // 0x26d6e4: 0x6c70  tge         $zero, $zero, 433
    ctx->pc = 0x26d6e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d6e8:
    // 0x26d6e8: 0x0  nop
    ctx->pc = 0x26d6e8u;
    // NOP
label_26d6ec:
    // 0x26d6ec: 0x0  nop
    ctx->pc = 0x26d6ecu;
    // NOP
label_26d6f0:
    // 0x26d6f0: 0x35c5  .word       0x000035C5                   # INVALID     $zero, $zero, 0x35C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26D6F0 raw=0x000035C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d6f4:
    // 0x26d6f4: 0x4b70  tge         $zero, $zero, 301
    ctx->pc = 0x26d6f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d6f8:
    // 0x26d6f8: 0x0  nop
    ctx->pc = 0x26d6f8u;
    // NOP
label_26d6fc:
    // 0x26d6fc: 0x0  nop
    ctx->pc = 0x26d6fcu;
    // NOP
label_26d700:
    // 0x26d700: 0x35cf  .word       0x000035CF                   # sync.p # 00003000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d700u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26d704:
    // 0x26d704: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d704u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26d708:
    // 0x26d708: 0x0  nop
    ctx->pc = 0x26d708u;
    // NOP
label_26d70c:
    // 0x26d70c: 0x0  nop
    ctx->pc = 0x26d70cu;
    // NOP
label_26d710:
    // 0x26d710: 0x35dd  .word       0x000035DD                   # dmultu      $zero, $zero # 000035C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26D710 raw=0x000035DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d714:
    // 0x26d714: 0x9890  .word       0x00009890                   # mfhi        $s3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d714u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26d718:
    // 0x26d718: 0x0  nop
    ctx->pc = 0x26d718u;
    // NOP
label_26d71c:
    // 0x26d71c: 0x0  nop
    ctx->pc = 0x26d71cu;
    // NOP
label_26d720:
    // 0x26d720: 0x35f1  tgeu        $zero, $zero, 215
    ctx->pc = 0x26d720u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d724:
    // 0x26d724: 0x51f0  tge         $zero, $zero, 327
    ctx->pc = 0x26d724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d728:
    // 0x26d728: 0x0  nop
    ctx->pc = 0x26d728u;
    // NOP
label_26d72c:
    // 0x26d72c: 0x0  nop
    ctx->pc = 0x26d72cu;
    // NOP
label_26d730:
    // 0x26d730: 0x35fc  dsll32      $a2, $zero, 23
    ctx->pc = 0x26d730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 23));
label_26d734:
    // 0x26d734: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x26d734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d738:
    // 0x26d738: 0x0  nop
    ctx->pc = 0x26d738u;
    // NOP
label_26d73c:
    // 0x26d73c: 0x0  nop
    ctx->pc = 0x26d73cu;
    // NOP
label_26d740:
    // 0x26d740: 0x360b  .word       0x0000360B                   # movn        $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d740u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d744:
    // 0x26d744: 0xb020  add         $s6, $zero, $zero
    ctx->pc = 0x26d744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26d748:
    // 0x26d748: 0x0  nop
    ctx->pc = 0x26d748u;
    // NOP
label_26d74c:
    // 0x26d74c: 0x0  nop
    ctx->pc = 0x26d74cu;
    // NOP
label_26d750:
    // 0x26d750: 0x3622  .word       0x00003622                   # neg         $a2, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d750u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_26d754:
    // 0x26d754: 0x60c0  sll         $t4, $zero, 3
    ctx->pc = 0x26d754u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26d758:
    // 0x26d758: 0x0  nop
    ctx->pc = 0x26d758u;
    // NOP
label_26d75c:
    // 0x26d75c: 0x0  nop
    ctx->pc = 0x26d75cu;
    // NOP
label_26d760:
    // 0x26d760: 0x362f  .word       0x0000362F                   # dsubu       $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26d764:
    // 0x26d764: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x26d764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d768:
    // 0x26d768: 0x0  nop
    ctx->pc = 0x26d768u;
    // NOP
label_26d76c:
    // 0x26d76c: 0x0  nop
    ctx->pc = 0x26d76cu;
    // NOP
label_26d770:
    // 0x26d770: 0x3639  .word       0x00003639                   # INVALID     $zero, $zero, 0x3639 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26D770 raw=0x00003639"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d774:
    // 0x26d774: 0x83a0  .word       0x000083A0                   # add         $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26d778:
    // 0x26d778: 0x0  nop
    ctx->pc = 0x26d778u;
    // NOP
label_26d77c:
    // 0x26d77c: 0x0  nop
    ctx->pc = 0x26d77cu;
    // NOP
label_26d780:
    // 0x26d780: 0x364a  .word       0x0000364A                   # movz        $a2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d780u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d784:
    // 0x26d784: 0x5f30  tge         $zero, $zero, 380
    ctx->pc = 0x26d784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d788:
    // 0x26d788: 0x0  nop
    ctx->pc = 0x26d788u;
    // NOP
label_26d78c:
    // 0x26d78c: 0x0  nop
    ctx->pc = 0x26d78cu;
    // NOP
label_26d790:
    // 0x26d790: 0x3656  .word       0x00003656                   # dsrlv       $a2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26d794:
    // 0x26d794: 0x7b50  .word       0x00007B50                   # mfhi        $t7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d794u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26d798:
    // 0x26d798: 0x0  nop
    ctx->pc = 0x26d798u;
    // NOP
label_26d79c:
    // 0x26d79c: 0x0  nop
    ctx->pc = 0x26d79cu;
    // NOP
label_26d7a0:
    // 0x26d7a0: 0x3666  .word       0x00003666                   # xor         $a2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d7a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26d7a4:
    // 0x26d7a4: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x26d7a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d7a8:
    // 0x26d7a8: 0x0  nop
    ctx->pc = 0x26d7a8u;
    // NOP
label_26d7ac:
    // 0x26d7ac: 0x0  nop
    ctx->pc = 0x26d7acu;
    // NOP
    ctx->pc = 0x26d7b0u;
    return;
}
