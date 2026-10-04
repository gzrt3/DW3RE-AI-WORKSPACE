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


void FUN_0014eba0_part63(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16d000u: goto label_16d000;
        case 0x16d004u: goto label_16d004;
        case 0x16d008u: goto label_16d008;
        case 0x16d00cu: goto label_16d00c;
        case 0x16d010u: goto label_16d010;
        case 0x16d014u: goto label_16d014;
        case 0x16d018u: goto label_16d018;
        case 0x16d01cu: goto label_16d01c;
        case 0x16d020u: goto label_16d020;
        case 0x16d024u: goto label_16d024;
        case 0x16d028u: goto label_16d028;
        case 0x16d02cu: goto label_16d02c;
        case 0x16d030u: goto label_16d030;
        case 0x16d034u: goto label_16d034;
        case 0x16d038u: goto label_16d038;
        case 0x16d03cu: goto label_16d03c;
        case 0x16d040u: goto label_16d040;
        case 0x16d044u: goto label_16d044;
        case 0x16d048u: goto label_16d048;
        case 0x16d04cu: goto label_16d04c;
        case 0x16d050u: goto label_16d050;
        case 0x16d054u: goto label_16d054;
        case 0x16d058u: goto label_16d058;
        case 0x16d05cu: goto label_16d05c;
        case 0x16d060u: goto label_16d060;
        case 0x16d064u: goto label_16d064;
        case 0x16d068u: goto label_16d068;
        case 0x16d06cu: goto label_16d06c;
        case 0x16d070u: goto label_16d070;
        case 0x16d074u: goto label_16d074;
        case 0x16d078u: goto label_16d078;
        case 0x16d07cu: goto label_16d07c;
        case 0x16d080u: goto label_16d080;
        case 0x16d084u: goto label_16d084;
        case 0x16d088u: goto label_16d088;
        case 0x16d08cu: goto label_16d08c;
        case 0x16d090u: goto label_16d090;
        case 0x16d094u: goto label_16d094;
        case 0x16d098u: goto label_16d098;
        case 0x16d09cu: goto label_16d09c;
        case 0x16d0a0u: goto label_16d0a0;
        case 0x16d0a4u: goto label_16d0a4;
        case 0x16d0a8u: goto label_16d0a8;
        case 0x16d0acu: goto label_16d0ac;
        case 0x16d0b0u: goto label_16d0b0;
        case 0x16d0b4u: goto label_16d0b4;
        case 0x16d0b8u: goto label_16d0b8;
        case 0x16d0bcu: goto label_16d0bc;
        case 0x16d0c0u: goto label_16d0c0;
        case 0x16d0c4u: goto label_16d0c4;
        case 0x16d0c8u: goto label_16d0c8;
        case 0x16d0ccu: goto label_16d0cc;
        case 0x16d0d0u: goto label_16d0d0;
        case 0x16d0d4u: goto label_16d0d4;
        case 0x16d0d8u: goto label_16d0d8;
        case 0x16d0dcu: goto label_16d0dc;
        case 0x16d0e0u: goto label_16d0e0;
        case 0x16d0e4u: goto label_16d0e4;
        case 0x16d0e8u: goto label_16d0e8;
        case 0x16d0ecu: goto label_16d0ec;
        case 0x16d0f0u: goto label_16d0f0;
        case 0x16d0f4u: goto label_16d0f4;
        case 0x16d0f8u: goto label_16d0f8;
        case 0x16d0fcu: goto label_16d0fc;
        case 0x16d100u: goto label_16d100;
        case 0x16d104u: goto label_16d104;
        case 0x16d108u: goto label_16d108;
        case 0x16d10cu: goto label_16d10c;
        case 0x16d110u: goto label_16d110;
        case 0x16d114u: goto label_16d114;
        case 0x16d118u: goto label_16d118;
        case 0x16d11cu: goto label_16d11c;
        case 0x16d120u: goto label_16d120;
        case 0x16d124u: goto label_16d124;
        case 0x16d128u: goto label_16d128;
        case 0x16d12cu: goto label_16d12c;
        case 0x16d130u: goto label_16d130;
        case 0x16d134u: goto label_16d134;
        case 0x16d138u: goto label_16d138;
        case 0x16d13cu: goto label_16d13c;
        case 0x16d140u: goto label_16d140;
        case 0x16d144u: goto label_16d144;
        case 0x16d148u: goto label_16d148;
        case 0x16d14cu: goto label_16d14c;
        case 0x16d150u: goto label_16d150;
        case 0x16d154u: goto label_16d154;
        case 0x16d158u: goto label_16d158;
        case 0x16d15cu: goto label_16d15c;
        case 0x16d160u: goto label_16d160;
        case 0x16d164u: goto label_16d164;
        case 0x16d168u: goto label_16d168;
        case 0x16d16cu: goto label_16d16c;
        case 0x16d170u: goto label_16d170;
        case 0x16d174u: goto label_16d174;
        case 0x16d178u: goto label_16d178;
        case 0x16d17cu: goto label_16d17c;
        case 0x16d180u: goto label_16d180;
        case 0x16d184u: goto label_16d184;
        case 0x16d188u: goto label_16d188;
        case 0x16d18cu: goto label_16d18c;
        case 0x16d190u: goto label_16d190;
        case 0x16d194u: goto label_16d194;
        case 0x16d198u: goto label_16d198;
        case 0x16d19cu: goto label_16d19c;
        case 0x16d1a0u: goto label_16d1a0;
        case 0x16d1a4u: goto label_16d1a4;
        case 0x16d1a8u: goto label_16d1a8;
        case 0x16d1acu: goto label_16d1ac;
        case 0x16d1b0u: goto label_16d1b0;
        case 0x16d1b4u: goto label_16d1b4;
        case 0x16d1b8u: goto label_16d1b8;
        case 0x16d1bcu: goto label_16d1bc;
        case 0x16d1c0u: goto label_16d1c0;
        case 0x16d1c4u: goto label_16d1c4;
        case 0x16d1c8u: goto label_16d1c8;
        case 0x16d1ccu: goto label_16d1cc;
        case 0x16d1d0u: goto label_16d1d0;
        case 0x16d1d4u: goto label_16d1d4;
        case 0x16d1d8u: goto label_16d1d8;
        case 0x16d1dcu: goto label_16d1dc;
        case 0x16d1e0u: goto label_16d1e0;
        case 0x16d1e4u: goto label_16d1e4;
        case 0x16d1e8u: goto label_16d1e8;
        case 0x16d1ecu: goto label_16d1ec;
        case 0x16d1f0u: goto label_16d1f0;
        case 0x16d1f4u: goto label_16d1f4;
        case 0x16d1f8u: goto label_16d1f8;
        case 0x16d1fcu: goto label_16d1fc;
        case 0x16d200u: goto label_16d200;
        case 0x16d204u: goto label_16d204;
        case 0x16d208u: goto label_16d208;
        case 0x16d20cu: goto label_16d20c;
        case 0x16d210u: goto label_16d210;
        case 0x16d214u: goto label_16d214;
        case 0x16d218u: goto label_16d218;
        case 0x16d21cu: goto label_16d21c;
        case 0x16d220u: goto label_16d220;
        case 0x16d224u: goto label_16d224;
        case 0x16d228u: goto label_16d228;
        case 0x16d22cu: goto label_16d22c;
        case 0x16d230u: goto label_16d230;
        case 0x16d234u: goto label_16d234;
        case 0x16d238u: goto label_16d238;
        case 0x16d23cu: goto label_16d23c;
        case 0x16d240u: goto label_16d240;
        case 0x16d244u: goto label_16d244;
        case 0x16d248u: goto label_16d248;
        case 0x16d24cu: goto label_16d24c;
        case 0x16d250u: goto label_16d250;
        case 0x16d254u: goto label_16d254;
        case 0x16d258u: goto label_16d258;
        case 0x16d25cu: goto label_16d25c;
        case 0x16d260u: goto label_16d260;
        case 0x16d264u: goto label_16d264;
        case 0x16d268u: goto label_16d268;
        case 0x16d26cu: goto label_16d26c;
        case 0x16d270u: goto label_16d270;
        case 0x16d274u: goto label_16d274;
        case 0x16d278u: goto label_16d278;
        case 0x16d27cu: goto label_16d27c;
        case 0x16d280u: goto label_16d280;
        case 0x16d284u: goto label_16d284;
        case 0x16d288u: goto label_16d288;
        case 0x16d28cu: goto label_16d28c;
        case 0x16d290u: goto label_16d290;
        case 0x16d294u: goto label_16d294;
        case 0x16d298u: goto label_16d298;
        case 0x16d29cu: goto label_16d29c;
        case 0x16d2a0u: goto label_16d2a0;
        case 0x16d2a4u: goto label_16d2a4;
        case 0x16d2a8u: goto label_16d2a8;
        case 0x16d2acu: goto label_16d2ac;
        case 0x16d2b0u: goto label_16d2b0;
        case 0x16d2b4u: goto label_16d2b4;
        case 0x16d2b8u: goto label_16d2b8;
        case 0x16d2bcu: goto label_16d2bc;
        case 0x16d2c0u: goto label_16d2c0;
        case 0x16d2c4u: goto label_16d2c4;
        case 0x16d2c8u: goto label_16d2c8;
        case 0x16d2ccu: goto label_16d2cc;
        case 0x16d2d0u: goto label_16d2d0;
        case 0x16d2d4u: goto label_16d2d4;
        case 0x16d2d8u: goto label_16d2d8;
        case 0x16d2dcu: goto label_16d2dc;
        case 0x16d2e0u: goto label_16d2e0;
        case 0x16d2e4u: goto label_16d2e4;
        case 0x16d2e8u: goto label_16d2e8;
        case 0x16d2ecu: goto label_16d2ec;
        case 0x16d2f0u: goto label_16d2f0;
        case 0x16d2f4u: goto label_16d2f4;
        case 0x16d2f8u: goto label_16d2f8;
        case 0x16d2fcu: goto label_16d2fc;
        case 0x16d300u: goto label_16d300;
        case 0x16d304u: goto label_16d304;
        case 0x16d308u: goto label_16d308;
        case 0x16d30cu: goto label_16d30c;
        case 0x16d310u: goto label_16d310;
        case 0x16d314u: goto label_16d314;
        case 0x16d318u: goto label_16d318;
        case 0x16d31cu: goto label_16d31c;
        case 0x16d320u: goto label_16d320;
        case 0x16d324u: goto label_16d324;
        case 0x16d328u: goto label_16d328;
        case 0x16d32cu: goto label_16d32c;
        case 0x16d330u: goto label_16d330;
        case 0x16d334u: goto label_16d334;
        case 0x16d338u: goto label_16d338;
        case 0x16d33cu: goto label_16d33c;
        case 0x16d340u: goto label_16d340;
        case 0x16d344u: goto label_16d344;
        case 0x16d348u: goto label_16d348;
        case 0x16d34cu: goto label_16d34c;
        case 0x16d350u: goto label_16d350;
        case 0x16d354u: goto label_16d354;
        case 0x16d358u: goto label_16d358;
        case 0x16d35cu: goto label_16d35c;
        case 0x16d360u: goto label_16d360;
        case 0x16d364u: goto label_16d364;
        case 0x16d368u: goto label_16d368;
        case 0x16d36cu: goto label_16d36c;
        case 0x16d370u: goto label_16d370;
        case 0x16d374u: goto label_16d374;
        case 0x16d378u: goto label_16d378;
        case 0x16d37cu: goto label_16d37c;
        case 0x16d380u: goto label_16d380;
        case 0x16d384u: goto label_16d384;
        case 0x16d388u: goto label_16d388;
        case 0x16d38cu: goto label_16d38c;
        case 0x16d390u: goto label_16d390;
        case 0x16d394u: goto label_16d394;
        case 0x16d398u: goto label_16d398;
        case 0x16d39cu: goto label_16d39c;
        case 0x16d3a0u: goto label_16d3a0;
        case 0x16d3a4u: goto label_16d3a4;
        case 0x16d3a8u: goto label_16d3a8;
        case 0x16d3acu: goto label_16d3ac;
        case 0x16d3b0u: goto label_16d3b0;
        case 0x16d3b4u: goto label_16d3b4;
        case 0x16d3b8u: goto label_16d3b8;
        case 0x16d3bcu: goto label_16d3bc;
        case 0x16d3c0u: goto label_16d3c0;
        case 0x16d3c4u: goto label_16d3c4;
        case 0x16d3c8u: goto label_16d3c8;
        case 0x16d3ccu: goto label_16d3cc;
        case 0x16d3d0u: goto label_16d3d0;
        case 0x16d3d4u: goto label_16d3d4;
        case 0x16d3d8u: goto label_16d3d8;
        case 0x16d3dcu: goto label_16d3dc;
        case 0x16d3e0u: goto label_16d3e0;
        case 0x16d3e4u: goto label_16d3e4;
        case 0x16d3e8u: goto label_16d3e8;
        case 0x16d3ecu: goto label_16d3ec;
        case 0x16d3f0u: goto label_16d3f0;
        case 0x16d3f4u: goto label_16d3f4;
        case 0x16d3f8u: goto label_16d3f8;
        case 0x16d3fcu: goto label_16d3fc;
        case 0x16d400u: goto label_16d400;
        case 0x16d404u: goto label_16d404;
        case 0x16d408u: goto label_16d408;
        case 0x16d40cu: goto label_16d40c;
        case 0x16d410u: goto label_16d410;
        case 0x16d414u: goto label_16d414;
        case 0x16d418u: goto label_16d418;
        case 0x16d41cu: goto label_16d41c;
        case 0x16d420u: goto label_16d420;
        case 0x16d424u: goto label_16d424;
        case 0x16d428u: goto label_16d428;
        case 0x16d42cu: goto label_16d42c;
        case 0x16d430u: goto label_16d430;
        case 0x16d434u: goto label_16d434;
        case 0x16d438u: goto label_16d438;
        case 0x16d43cu: goto label_16d43c;
        case 0x16d440u: goto label_16d440;
        case 0x16d444u: goto label_16d444;
        case 0x16d448u: goto label_16d448;
        case 0x16d44cu: goto label_16d44c;
        case 0x16d450u: goto label_16d450;
        case 0x16d454u: goto label_16d454;
        case 0x16d458u: goto label_16d458;
        case 0x16d45cu: goto label_16d45c;
        case 0x16d460u: goto label_16d460;
        case 0x16d464u: goto label_16d464;
        case 0x16d468u: goto label_16d468;
        case 0x16d46cu: goto label_16d46c;
        case 0x16d470u: goto label_16d470;
        case 0x16d474u: goto label_16d474;
        case 0x16d478u: goto label_16d478;
        case 0x16d47cu: goto label_16d47c;
        case 0x16d480u: goto label_16d480;
        case 0x16d484u: goto label_16d484;
        case 0x16d488u: goto label_16d488;
        case 0x16d48cu: goto label_16d48c;
        case 0x16d490u: goto label_16d490;
        case 0x16d494u: goto label_16d494;
        case 0x16d498u: goto label_16d498;
        case 0x16d49cu: goto label_16d49c;
        case 0x16d4a0u: goto label_16d4a0;
        case 0x16d4a4u: goto label_16d4a4;
        case 0x16d4a8u: goto label_16d4a8;
        case 0x16d4acu: goto label_16d4ac;
        case 0x16d4b0u: goto label_16d4b0;
        case 0x16d4b4u: goto label_16d4b4;
        case 0x16d4b8u: goto label_16d4b8;
        case 0x16d4bcu: goto label_16d4bc;
        case 0x16d4c0u: goto label_16d4c0;
        case 0x16d4c4u: goto label_16d4c4;
        case 0x16d4c8u: goto label_16d4c8;
        case 0x16d4ccu: goto label_16d4cc;
        case 0x16d4d0u: goto label_16d4d0;
        case 0x16d4d4u: goto label_16d4d4;
        case 0x16d4d8u: goto label_16d4d8;
        case 0x16d4dcu: goto label_16d4dc;
        case 0x16d4e0u: goto label_16d4e0;
        case 0x16d4e4u: goto label_16d4e4;
        case 0x16d4e8u: goto label_16d4e8;
        case 0x16d4ecu: goto label_16d4ec;
        case 0x16d4f0u: goto label_16d4f0;
        case 0x16d4f4u: goto label_16d4f4;
        case 0x16d4f8u: goto label_16d4f8;
        case 0x16d4fcu: goto label_16d4fc;
        case 0x16d500u: goto label_16d500;
        case 0x16d504u: goto label_16d504;
        case 0x16d508u: goto label_16d508;
        case 0x16d50cu: goto label_16d50c;
        case 0x16d510u: goto label_16d510;
        case 0x16d514u: goto label_16d514;
        case 0x16d518u: goto label_16d518;
        case 0x16d51cu: goto label_16d51c;
        case 0x16d520u: goto label_16d520;
        case 0x16d524u: goto label_16d524;
        case 0x16d528u: goto label_16d528;
        case 0x16d52cu: goto label_16d52c;
        case 0x16d530u: goto label_16d530;
        case 0x16d534u: goto label_16d534;
        case 0x16d538u: goto label_16d538;
        case 0x16d53cu: goto label_16d53c;
        case 0x16d540u: goto label_16d540;
        case 0x16d544u: goto label_16d544;
        case 0x16d548u: goto label_16d548;
        case 0x16d54cu: goto label_16d54c;
        case 0x16d550u: goto label_16d550;
        case 0x16d554u: goto label_16d554;
        case 0x16d558u: goto label_16d558;
        case 0x16d55cu: goto label_16d55c;
        case 0x16d560u: goto label_16d560;
        case 0x16d564u: goto label_16d564;
        case 0x16d568u: goto label_16d568;
        case 0x16d56cu: goto label_16d56c;
        case 0x16d570u: goto label_16d570;
        case 0x16d574u: goto label_16d574;
        case 0x16d578u: goto label_16d578;
        case 0x16d57cu: goto label_16d57c;
        case 0x16d580u: goto label_16d580;
        case 0x16d584u: goto label_16d584;
        case 0x16d588u: goto label_16d588;
        case 0x16d58cu: goto label_16d58c;
        case 0x16d590u: goto label_16d590;
        case 0x16d594u: goto label_16d594;
        case 0x16d598u: goto label_16d598;
        case 0x16d59cu: goto label_16d59c;
        case 0x16d5a0u: goto label_16d5a0;
        case 0x16d5a4u: goto label_16d5a4;
        case 0x16d5a8u: goto label_16d5a8;
        case 0x16d5acu: goto label_16d5ac;
        case 0x16d5b0u: goto label_16d5b0;
        case 0x16d5b4u: goto label_16d5b4;
        case 0x16d5b8u: goto label_16d5b8;
        case 0x16d5bcu: goto label_16d5bc;
        case 0x16d5c0u: goto label_16d5c0;
        case 0x16d5c4u: goto label_16d5c4;
        case 0x16d5c8u: goto label_16d5c8;
        case 0x16d5ccu: goto label_16d5cc;
        case 0x16d5d0u: goto label_16d5d0;
        case 0x16d5d4u: goto label_16d5d4;
        case 0x16d5d8u: goto label_16d5d8;
        case 0x16d5dcu: goto label_16d5dc;
        case 0x16d5e0u: goto label_16d5e0;
        case 0x16d5e4u: goto label_16d5e4;
        case 0x16d5e8u: goto label_16d5e8;
        case 0x16d5ecu: goto label_16d5ec;
        case 0x16d5f0u: goto label_16d5f0;
        case 0x16d5f4u: goto label_16d5f4;
        case 0x16d5f8u: goto label_16d5f8;
        case 0x16d5fcu: goto label_16d5fc;
        case 0x16d600u: goto label_16d600;
        case 0x16d604u: goto label_16d604;
        case 0x16d608u: goto label_16d608;
        case 0x16d60cu: goto label_16d60c;
        case 0x16d610u: goto label_16d610;
        case 0x16d614u: goto label_16d614;
        case 0x16d618u: goto label_16d618;
        case 0x16d61cu: goto label_16d61c;
        case 0x16d620u: goto label_16d620;
        case 0x16d624u: goto label_16d624;
        case 0x16d628u: goto label_16d628;
        case 0x16d62cu: goto label_16d62c;
        case 0x16d630u: goto label_16d630;
        case 0x16d634u: goto label_16d634;
        case 0x16d638u: goto label_16d638;
        case 0x16d63cu: goto label_16d63c;
        case 0x16d640u: goto label_16d640;
        case 0x16d644u: goto label_16d644;
        case 0x16d648u: goto label_16d648;
        case 0x16d64cu: goto label_16d64c;
        case 0x16d650u: goto label_16d650;
        case 0x16d654u: goto label_16d654;
        case 0x16d658u: goto label_16d658;
        case 0x16d65cu: goto label_16d65c;
        case 0x16d660u: goto label_16d660;
        case 0x16d664u: goto label_16d664;
        case 0x16d668u: goto label_16d668;
        case 0x16d66cu: goto label_16d66c;
        case 0x16d670u: goto label_16d670;
        case 0x16d674u: goto label_16d674;
        case 0x16d678u: goto label_16d678;
        case 0x16d67cu: goto label_16d67c;
        case 0x16d680u: goto label_16d680;
        case 0x16d684u: goto label_16d684;
        case 0x16d688u: goto label_16d688;
        case 0x16d68cu: goto label_16d68c;
        case 0x16d690u: goto label_16d690;
        case 0x16d694u: goto label_16d694;
        case 0x16d698u: goto label_16d698;
        case 0x16d69cu: goto label_16d69c;
        case 0x16d6a0u: goto label_16d6a0;
        case 0x16d6a4u: goto label_16d6a4;
        case 0x16d6a8u: goto label_16d6a8;
        case 0x16d6acu: goto label_16d6ac;
        case 0x16d6b0u: goto label_16d6b0;
        case 0x16d6b4u: goto label_16d6b4;
        case 0x16d6b8u: goto label_16d6b8;
        case 0x16d6bcu: goto label_16d6bc;
        case 0x16d6c0u: goto label_16d6c0;
        case 0x16d6c4u: goto label_16d6c4;
        case 0x16d6c8u: goto label_16d6c8;
        case 0x16d6ccu: goto label_16d6cc;
        case 0x16d6d0u: goto label_16d6d0;
        case 0x16d6d4u: goto label_16d6d4;
        case 0x16d6d8u: goto label_16d6d8;
        case 0x16d6dcu: goto label_16d6dc;
        case 0x16d6e0u: goto label_16d6e0;
        case 0x16d6e4u: goto label_16d6e4;
        case 0x16d6e8u: goto label_16d6e8;
        case 0x16d6ecu: goto label_16d6ec;
        case 0x16d6f0u: goto label_16d6f0;
        case 0x16d6f4u: goto label_16d6f4;
        case 0x16d6f8u: goto label_16d6f8;
        case 0x16d6fcu: goto label_16d6fc;
        case 0x16d700u: goto label_16d700;
        case 0x16d704u: goto label_16d704;
        case 0x16d708u: goto label_16d708;
        case 0x16d70cu: goto label_16d70c;
        case 0x16d710u: goto label_16d710;
        case 0x16d714u: goto label_16d714;
        case 0x16d718u: goto label_16d718;
        case 0x16d71cu: goto label_16d71c;
        case 0x16d720u: goto label_16d720;
        case 0x16d724u: goto label_16d724;
        case 0x16d728u: goto label_16d728;
        case 0x16d72cu: goto label_16d72c;
        case 0x16d730u: goto label_16d730;
        case 0x16d734u: goto label_16d734;
        case 0x16d738u: goto label_16d738;
        case 0x16d73cu: goto label_16d73c;
        case 0x16d740u: goto label_16d740;
        case 0x16d744u: goto label_16d744;
        case 0x16d748u: goto label_16d748;
        case 0x16d74cu: goto label_16d74c;
        case 0x16d750u: goto label_16d750;
        case 0x16d754u: goto label_16d754;
        case 0x16d758u: goto label_16d758;
        case 0x16d75cu: goto label_16d75c;
        case 0x16d760u: goto label_16d760;
        case 0x16d764u: goto label_16d764;
        case 0x16d768u: goto label_16d768;
        case 0x16d76cu: goto label_16d76c;
        case 0x16d770u: goto label_16d770;
        case 0x16d774u: goto label_16d774;
        case 0x16d778u: goto label_16d778;
        case 0x16d77cu: goto label_16d77c;
        case 0x16d780u: goto label_16d780;
        case 0x16d784u: goto label_16d784;
        case 0x16d788u: goto label_16d788;
        case 0x16d78cu: goto label_16d78c;
        case 0x16d790u: goto label_16d790;
        case 0x16d794u: goto label_16d794;
        case 0x16d798u: goto label_16d798;
        case 0x16d79cu: goto label_16d79c;
        case 0x16d7a0u: goto label_16d7a0;
        case 0x16d7a4u: goto label_16d7a4;
        case 0x16d7a8u: goto label_16d7a8;
        case 0x16d7acu: goto label_16d7ac;
        case 0x16d7b0u: goto label_16d7b0;
        case 0x16d7b4u: goto label_16d7b4;
        case 0x16d7b8u: goto label_16d7b8;
        case 0x16d7bcu: goto label_16d7bc;
        case 0x16d7c0u: goto label_16d7c0;
        case 0x16d7c4u: goto label_16d7c4;
        case 0x16d7c8u: goto label_16d7c8;
        case 0x16d7ccu: goto label_16d7cc;
        default: return;
    }

label_16d000:
    // 0x16d000: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d000u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16d004:
    // 0x16d004: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16d008:
    // 0x16d008: 0xc08d61c  jal         func_235870
label_16d00c:
    if (ctx->pc == 0x16D00Cu) {
        ctx->pc = 0x16D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D008u;
        // 0x16d00c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D010u;
        goto label_16d010;
    }
    ctx->pc = 0x16D008u;
    SET_GPR_U32(ctx, 31, 0x16D010u);
    ctx->pc = 0x16D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D008u;
    // 0x16d00c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16D010u;
label_16d010:
    // 0x16d010: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d014:
    // 0x16d014: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16d018:
    if (ctx->pc == 0x16D018u) {
        ctx->pc = 0x16D01Cu;
        goto label_16d01c;
    }
    ctx->pc = 0x16D014u;
    {
        const bool branch_taken_0x16d014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d014) {
            ctx->pc = 0x16CFFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x16cffc; return; }
        }
    }
    ctx->pc = 0x16D01Cu;
label_16d01c:
    // 0x16d01c: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16d020:
    // 0x16d020: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16d020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d024:
    // 0x16d024: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x16d024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_16d028:
    // 0x16d028: 0x2032825  or          $a1, $s0, $v1
    ctx->pc = 0x16d028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16d02c:
    // 0x16d02c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16d030:
    // 0x16d030: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x16d030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
label_16d034:
    // 0x16d034: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16d034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16d038:
    // 0x16d038: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16d038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16d03c:
    // 0x16d03c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16d040:
    // 0x16d040: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16d040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16d044:
    // 0x16d044: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d048:
    // 0x16d048: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16d04c:
    // 0x16d04c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16d050:
    // 0x16d050: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16d050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16d054:
    // 0x16d054: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16d054u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16d058:
    // 0x16d058: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16d058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16d05c:
    // 0x16d05c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16d05cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16d060:
    // 0x16d060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16d060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16d064:
    // 0x16d064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d068:
    // 0x16d068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16d06c:
    // 0x16d06c: 0x3e00008  jr          $ra
label_16d070:
    if (ctx->pc == 0x16D070u) {
        ctx->pc = 0x16D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D06Cu;
        // 0x16d070: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D074u;
        goto label_16d074;
    }
    ctx->pc = 0x16D06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D06Cu;
        // 0x16d070: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D074u;
label_16d074:
    // 0x16d074: 0x0  nop
    ctx->pc = 0x16d074u;
    // NOP
label_16d078:
    // 0x16d078: 0x0  nop
    ctx->pc = 0x16d078u;
    // NOP
label_16d07c:
    // 0x16d07c: 0x0  nop
    ctx->pc = 0x16d07cu;
    // NOP
label_16d080:
    // 0x16d080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16d084:
    // 0x16d084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16d088:
    // 0x16d088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16d08c:
    // 0x16d08c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16d090:
    // 0x16d090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16d090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d094:
    // 0x16d094: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16d098:
    // 0x16d098: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_16d09c:
    if (ctx->pc == 0x16D09Cu) {
        ctx->pc = 0x16D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D098u;
        // 0x16d09c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0A0u;
        goto label_16d0a0;
    }
    ctx->pc = 0x16D098u;
    {
        const bool branch_taken_0x16d098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D098u;
        // 0x16d09c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d098) {
            ctx->pc = 0x16D180u;
            goto label_16d180;
        }
    }
    ctx->pc = 0x16D0A0u;
label_16d0a0:
    // 0x16d0a0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d0a4:
    // 0x16d0a4: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16d0a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16d0a8:
    // 0x16d0a8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16d0ac:
    if (ctx->pc == 0x16D0ACu) {
        ctx->pc = 0x16D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0A8u;
        // 0x16d0ac: 0x112b80  sll         $a1, $s1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0B0u;
        goto label_16d0b0;
    }
    ctx->pc = 0x16D0A8u;
    {
        const bool branch_taken_0x16d0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0A8u;
        // 0x16d0ac: 0x112b80  sll         $a1, $s1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0a8) {
            ctx->pc = 0x16D0D8u;
            goto label_16d0d8;
        }
    }
    ctx->pc = 0x16D0B0u;
label_16d0b0:
    // 0x16d0b0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d0b4:
    // 0x16d0b4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16d0b8:
    // 0x16d0b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16d0bc:
    // 0x16d0bc: 0xc08d61c  jal         func_235870
label_16d0c0:
    if (ctx->pc == 0x16D0C0u) {
        ctx->pc = 0x16D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0BCu;
        // 0x16d0c0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D0C4u;
        goto label_16d0c4;
    }
    ctx->pc = 0x16D0BCu;
    SET_GPR_U32(ctx, 31, 0x16D0C4u);
    ctx->pc = 0x16D0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D0BCu;
    // 0x16d0c0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16D0C4u;
label_16d0c4:
    // 0x16d0c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d0c8:
    // 0x16d0c8: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16d0cc:
    if (ctx->pc == 0x16D0CCu) {
        ctx->pc = 0x16D0D0u;
        goto label_16d0d0;
    }
    ctx->pc = 0x16D0C8u;
    {
        const bool branch_taken_0x16d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d0c8) {
            ctx->pc = 0x16D0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d0b0;
        }
    }
    ctx->pc = 0x16D0D0u;
label_16d0d0:
    // 0x16d0d0: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16d0d4:
    // 0x16d0d4: 0x112b80  sll         $a1, $s1, 14
    ctx->pc = 0x16d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
label_16d0d8:
    // 0x16d0d8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_16d0dc:
    // 0x16d0dc: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x16d0dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16d0e0:
    // 0x16d0e0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16d0e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16d0e4:
    // 0x16d0e4: 0x1021c0  sll         $a0, $s0, 7
    ctx->pc = 0x16d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_16d0e8:
    // 0x16d0e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_16d0ec:
    // 0x16d0ec: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x16d0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_16d0f0:
    // 0x16d0f0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x16d0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_16d0f4:
    // 0x16d0f4: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x16d0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16d0f8:
    // 0x16d0f8: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d0fc:
    // 0x16d0fc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16d100:
    // 0x16d100: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16d104:
    // 0x16d104: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16d104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16d108:
    // 0x16d108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16d10c:
    // 0x16d10c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16d110:
    // 0x16d110: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d114:
    // 0x16d114: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16d118:
    // 0x16d118: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16d11c:
    // 0x16d11c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d120:
    // 0x16d120: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16d120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16d124:
    // 0x16d124: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16d128:
    if (ctx->pc == 0x16D128u) {
        ctx->pc = 0x16D12Cu;
        goto label_16d12c;
    }
    ctx->pc = 0x16D124u;
    {
        const bool branch_taken_0x16d124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d124) {
            ctx->pc = 0x16D150u;
            goto label_16d150;
        }
    }
    ctx->pc = 0x16D12Cu;
label_16d12c:
    // 0x16d12c: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d130:
    // 0x16d130: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16d134:
    // 0x16d134: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16d138:
    // 0x16d138: 0xc08d61c  jal         func_235870
label_16d13c:
    if (ctx->pc == 0x16D13Cu) {
        ctx->pc = 0x16D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D138u;
        // 0x16d13c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D140u;
        goto label_16d140;
    }
    ctx->pc = 0x16D138u;
    SET_GPR_U32(ctx, 31, 0x16D140u);
    ctx->pc = 0x16D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D138u;
    // 0x16d13c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16D140u;
label_16d140:
    // 0x16d140: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d144:
    // 0x16d144: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16d148:
    if (ctx->pc == 0x16D148u) {
        ctx->pc = 0x16D14Cu;
        goto label_16d14c;
    }
    ctx->pc = 0x16D144u;
    {
        const bool branch_taken_0x16d144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d144) {
            ctx->pc = 0x16D12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d12c;
        }
    }
    ctx->pc = 0x16D14Cu;
label_16d14c:
    // 0x16d14c: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16d150:
    // 0x16d150: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16d150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d154:
    // 0x16d154: 0x3c03400f  lui         $v1, 0x400F
    ctx->pc = 0x16d154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16399 << 16));
label_16d158:
    // 0x16d158: 0x34653f80  ori         $a1, $v1, 0x3F80
    ctx->pc = 0x16d158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16256);
label_16d15c:
    // 0x16d15c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16d160:
    // 0x16d160: 0x2052825  or          $a1, $s0, $a1
    ctx->pc = 0x16d160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
label_16d164:
    // 0x16d164: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16d164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16d168:
    // 0x16d168: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16d168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16d16c:
    // 0x16d16c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16d170:
    // 0x16d170: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16d170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16d174:
    // 0x16d174: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d178:
    // 0x16d178: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16d17c:
    // 0x16d17c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16d180:
    // 0x16d180: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16d180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16d184:
    // 0x16d184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d188:
    // 0x16d188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16d18c:
    // 0x16d18c: 0x3e00008  jr          $ra
label_16d190:
    if (ctx->pc == 0x16D190u) {
        ctx->pc = 0x16D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D18Cu;
        // 0x16d190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D194u;
        goto label_16d194;
    }
    ctx->pc = 0x16D18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D18Cu;
        // 0x16d190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D194u;
label_16d194:
    // 0x16d194: 0x0  nop
    ctx->pc = 0x16d194u;
    // NOP
label_16d198:
    // 0x16d198: 0x0  nop
    ctx->pc = 0x16d198u;
    // NOP
label_16d19c:
    // 0x16d19c: 0x0  nop
    ctx->pc = 0x16d19cu;
    // NOP
label_16d1a0:
    // 0x16d1a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16d1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16d1a4:
    // 0x16d1a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16d1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16d1a8:
    // 0x16d1a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16d1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16d1ac:
    // 0x16d1ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16d1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16d1b0:
    // 0x16d1b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16d1b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d1b4:
    // 0x16d1b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16d1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16d1b8:
    // 0x16d1b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16d1b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16d1bc:
    // 0x16d1bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16d1c0:
    // 0x16d1c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d1c4:
    // 0x16d1c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16d1c8:
    // 0x16d1c8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x16d1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16d1cc:
    // 0x16d1cc: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x16d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16d1d0:
    // 0x16d1d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x16d1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16d1d4:
    // 0x16d1d4: 0x10a40055  beq         $a1, $a0, . + 4 + (0x55 << 2)
label_16d1d8:
    if (ctx->pc == 0x16D1D8u) {
        ctx->pc = 0x16D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1D4u;
        // 0x16d1d8: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1DCu;
        goto label_16d1dc;
    }
    ctx->pc = 0x16D1D4u;
    {
        const bool branch_taken_0x16d1d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x16D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1D4u;
        // 0x16d1d8: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1d4) {
            ctx->pc = 0x16D32Cu;
            goto label_16d32c;
        }
    }
    ctx->pc = 0x16D1DCu;
label_16d1dc:
    // 0x16d1dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d1e0:
    // 0x16d1e0: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_16d1e4:
    if (ctx->pc == 0x16D1E4u) {
        ctx->pc = 0x16D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1E0u;
        // 0x16d1e4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1E8u;
        goto label_16d1e8;
    }
    ctx->pc = 0x16D1E0u;
    {
        const bool branch_taken_0x16d1e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1E0u;
        // 0x16d1e4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1e0) {
            ctx->pc = 0x16D1F4u;
            goto label_16d1f4;
        }
    }
    ctx->pc = 0x16D1E8u;
label_16d1e8:
    // 0x16d1e8: 0x10000051  b           . + 4 + (0x51 << 2)
label_16d1ec:
    if (ctx->pc == 0x16D1ECu) {
        ctx->pc = 0x16D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1E8u;
        // 0x16d1ec: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1F0u;
        goto label_16d1f0;
    }
    ctx->pc = 0x16D1E8u;
    {
        const bool branch_taken_0x16d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1E8u;
        // 0x16d1ec: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1e8) {
            ctx->pc = 0x16D330u;
            goto label_16d330;
        }
    }
    ctx->pc = 0x16D1F0u;
label_16d1f0:
    // 0x16d1f0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16d1f4:
    // 0x16d1f4: 0x1283000b  beq         $s4, $v1, . + 4 + (0xB << 2)
label_16d1f8:
    if (ctx->pc == 0x16D1F8u) {
        ctx->pc = 0x16D1FCu;
        goto label_16d1fc;
    }
    ctx->pc = 0x16D1F4u;
    {
        const bool branch_taken_0x16d1f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d1f4) {
            ctx->pc = 0x16D224u;
            goto label_16d224;
        }
    }
    ctx->pc = 0x16D1FCu;
label_16d1fc:
    // 0x16d1fc: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x16d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
label_16d200:
    // 0x16d200: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x16d200u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_16d204:
    // 0x16d204: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_16d208:
    if (ctx->pc == 0x16D208u) {
        ctx->pc = 0x16D20Cu;
        goto label_16d20c;
    }
    ctx->pc = 0x16D204u;
    {
        const bool branch_taken_0x16d204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d204) {
            ctx->pc = 0x16D224u;
            goto label_16d224;
        }
    }
    ctx->pc = 0x16D20Cu;
label_16d20c:
    // 0x16d20c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x16d20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16d210:
    // 0x16d210: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_16d214:
    if (ctx->pc == 0x16D214u) {
        ctx->pc = 0x16D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D210u;
        // 0x16d214: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D218u;
        goto label_16d218;
    }
    ctx->pc = 0x16D210u;
    {
        const bool branch_taken_0x16d210 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D210u;
        // 0x16d214: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d210) {
            ctx->pc = 0x16D220u;
            goto label_16d220;
        }
    }
    ctx->pc = 0x16D218u;
label_16d218:
    // 0x16d218: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x16d218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16d21c:
    // 0x16d21c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x16d21cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_16d220:
    // 0x16d220: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x16d220u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16d224:
    // 0x16d224: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16d224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16d228:
    // 0x16d228: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_16d22c:
    if (ctx->pc == 0x16D22Cu) {
        ctx->pc = 0x16D230u;
        goto label_16d230;
    }
    ctx->pc = 0x16D228u;
    {
        const bool branch_taken_0x16d228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d228) {
            ctx->pc = 0x16D32Cu;
            goto label_16d32c;
        }
    }
    ctx->pc = 0x16D230u;
label_16d230:
    // 0x16d230: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d234:
    // 0x16d234: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16d234u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16d238:
    // 0x16d238: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16d23c:
    if (ctx->pc == 0x16D23Cu) {
        ctx->pc = 0x16D240u;
        goto label_16d240;
    }
    ctx->pc = 0x16D238u;
    {
        const bool branch_taken_0x16d238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d238) {
            ctx->pc = 0x16D264u;
            goto label_16d264;
        }
    }
    ctx->pc = 0x16D240u;
label_16d240:
    // 0x16d240: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d244:
    // 0x16d244: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16d248:
    // 0x16d248: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16d24c:
    // 0x16d24c: 0xc08d61c  jal         func_235870
label_16d250:
    if (ctx->pc == 0x16D250u) {
        ctx->pc = 0x16D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D24Cu;
        // 0x16d250: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D254u;
        goto label_16d254;
    }
    ctx->pc = 0x16D24Cu;
    SET_GPR_U32(ctx, 31, 0x16D254u);
    ctx->pc = 0x16D250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D24Cu;
    // 0x16d250: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16D254u;
label_16d254:
    // 0x16d254: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d258:
    // 0x16d258: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16d25c:
    if (ctx->pc == 0x16D25Cu) {
        ctx->pc = 0x16D260u;
        goto label_16d260;
    }
    ctx->pc = 0x16D258u;
    {
        const bool branch_taken_0x16d258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d258) {
            ctx->pc = 0x16D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d240;
        }
    }
    ctx->pc = 0x16D260u;
label_16d260:
    // 0x16d260: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16d264:
    // 0x16d264: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x16d264u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16d268:
    // 0x16d268: 0x133380  sll         $a2, $s3, 14
    ctx->pc = 0x16d268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 14));
label_16d26c:
    // 0x16d26c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_16d270:
    // 0x16d270: 0x1029c0  sll         $a1, $s0, 7
    ctx->pc = 0x16d270u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_16d274:
    // 0x16d274: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x16d274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_16d278:
    // 0x16d278: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x16d278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16d27c:
    // 0x16d27c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x16d27cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_16d280:
    // 0x16d280: 0x148e00  sll         $s1, $s4, 24
    ctx->pc = 0x16d280u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
label_16d284:
    // 0x16d284: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x16d284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_16d288:
    // 0x16d288: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16d288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_16d28c:
    // 0x16d28c: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d290:
    // 0x16d290: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x16d290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_16d294:
    // 0x16d294: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x16d294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_16d298:
    // 0x16d298: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16d298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16d29c:
    // 0x16d29c: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16d2a0:
    // 0x16d2a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16d2a4:
    // 0x16d2a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16d2a8:
    // 0x16d2a8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16d2ac:
    // 0x16d2ac: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d2b0:
    // 0x16d2b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16d2b4:
    // 0x16d2b4: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16d2b8:
    // 0x16d2b8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d2bc:
    // 0x16d2bc: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16d2bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16d2c0:
    // 0x16d2c0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16d2c4:
    if (ctx->pc == 0x16D2C4u) {
        ctx->pc = 0x16D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2C0u;
        // 0x16d2c4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2C8u;
        goto label_16d2c8;
    }
    ctx->pc = 0x16D2C0u;
    {
        const bool branch_taken_0x16d2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2C0u;
        // 0x16d2c4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2c0) {
            ctx->pc = 0x16D2F0u;
            goto label_16d2f0;
        }
    }
    ctx->pc = 0x16D2C8u;
label_16d2c8:
    // 0x16d2c8: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d2cc:
    // 0x16d2cc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16d2d0:
    // 0x16d2d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16d2d4:
    // 0x16d2d4: 0xc08d61c  jal         func_235870
label_16d2d8:
    if (ctx->pc == 0x16D2D8u) {
        ctx->pc = 0x16D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2D4u;
        // 0x16d2d8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2DCu;
        goto label_16d2dc;
    }
    ctx->pc = 0x16D2D4u;
    SET_GPR_U32(ctx, 31, 0x16D2DCu);
    ctx->pc = 0x16D2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D2D4u;
    // 0x16d2d8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16D2DCu;
label_16d2dc:
    // 0x16d2dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d2e0:
    // 0x16d2e0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16d2e4:
    if (ctx->pc == 0x16D2E4u) {
        ctx->pc = 0x16D2E8u;
        goto label_16d2e8;
    }
    ctx->pc = 0x16D2E0u;
    {
        const bool branch_taken_0x16d2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d2e0) {
            ctx->pc = 0x16D2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d2c8;
        }
    }
    ctx->pc = 0x16D2E8u;
label_16d2e8:
    // 0x16d2e8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16d2ec:
    // 0x16d2ec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_16d2f0:
    // 0x16d2f0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x16d2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_16d2f4:
    // 0x16d2f4: 0x2232825  or          $a1, $s1, $v1
    ctx->pc = 0x16d2f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_16d2f8:
    // 0x16d2f8: 0x41b80  sll         $v1, $a0, 14
    ctx->pc = 0x16d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
label_16d2fc:
    // 0x16d2fc: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d300:
    // 0x16d300: 0x34633f80  ori         $v1, $v1, 0x3F80
    ctx->pc = 0x16d300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16256);
label_16d304:
    // 0x16d304: 0x703025  or          $a2, $v1, $s0
    ctx->pc = 0x16d304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_16d308:
    // 0x16d308: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16d308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16d30c:
    // 0x16d30c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x16d30cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_16d310:
    // 0x16d310: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16d310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16d314:
    // 0x16d314: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16d314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16d318:
    // 0x16d318: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16d31c:
    // 0x16d31c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16d320:
    // 0x16d320: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d324:
    // 0x16d324: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16d328:
    // 0x16d328: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16d32c:
    // 0x16d32c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16d32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16d330:
    // 0x16d330: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16d330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16d334:
    // 0x16d334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16d334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16d338:
    // 0x16d338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16d338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16d33c:
    // 0x16d33c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d340:
    // 0x16d340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16d344:
    // 0x16d344: 0x3e00008  jr          $ra
label_16d348:
    if (ctx->pc == 0x16D348u) {
        ctx->pc = 0x16D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D344u;
        // 0x16d348: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D34Cu;
        goto label_16d34c;
    }
    ctx->pc = 0x16D344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D344u;
        // 0x16d348: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D34Cu;
label_16d34c:
    // 0x16d34c: 0x0  nop
    ctx->pc = 0x16d34cu;
    // NOP
label_16d350:
    // 0x16d350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16d350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16d354:
    // 0x16d354: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16d358:
    // 0x16d358: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16d35c:
    // 0x16d35c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16d360:
    // 0x16d360: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16d360u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d364:
    // 0x16d364: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16d364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16d368:
    // 0x16d368: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16d368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16d36c:
    // 0x16d36c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16d370:
    // 0x16d370: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x16d370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16d374:
    // 0x16d374: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16d378:
    // 0x16d378: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x16d378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16d37c:
    // 0x16d37c: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x16d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_16d380:
    // 0x16d380: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x16d380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_16d384:
    // 0x16d384: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_16d388:
    if (ctx->pc == 0x16D388u) {
        ctx->pc = 0x16D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D384u;
        // 0x16d388: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D38Cu;
        goto label_16d38c;
    }
    ctx->pc = 0x16D384u;
    {
        const bool branch_taken_0x16d384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D384u;
        // 0x16d388: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d384) {
            ctx->pc = 0x16D40Cu;
            goto label_16d40c;
        }
    }
    ctx->pc = 0x16D38Cu;
label_16d38c:
    // 0x16d38c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16d390:
    // 0x16d390: 0x1683001e  bne         $s4, $v1, . + 4 + (0x1E << 2)
label_16d394:
    if (ctx->pc == 0x16D394u) {
        ctx->pc = 0x16D398u;
        goto label_16d398;
    }
    ctx->pc = 0x16D390u;
    {
        const bool branch_taken_0x16d390 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d390) {
            ctx->pc = 0x16D40Cu;
            goto label_16d40c;
        }
    }
    ctx->pc = 0x16D398u;
label_16d398:
    // 0x16d398: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x16d398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_16d39c:
    // 0x16d39c: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
label_16d3a0:
    if (ctx->pc == 0x16D3A0u) {
        ctx->pc = 0x16D3A4u;
        goto label_16d3a4;
    }
    ctx->pc = 0x16D39Cu;
    {
        const bool branch_taken_0x16d39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d39c) {
            ctx->pc = 0x16D56Cu;
            goto label_16d56c;
        }
    }
    ctx->pc = 0x16D3A4u;
label_16d3a4:
    // 0x16d3a4: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x16d3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_16d3a8:
    // 0x16d3a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16d3ac:
    if (ctx->pc == 0x16D3ACu) {
        ctx->pc = 0x16D3B0u;
        goto label_16d3b0;
    }
    ctx->pc = 0x16D3A8u;
    {
        const bool branch_taken_0x16d3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d3a8) {
            ctx->pc = 0x16D3B8u;
            goto label_16d3b8;
        }
    }
    ctx->pc = 0x16D3B0u;
label_16d3b0:
    // 0x16d3b0: 0x1000006f  b           . + 4 + (0x6F << 2)
label_16d3b4:
    if (ctx->pc == 0x16D3B4u) {
        ctx->pc = 0x16D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3B0u;
        // 0x16d3b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3B8u;
        goto label_16d3b8;
    }
    ctx->pc = 0x16D3B0u;
    {
        const bool branch_taken_0x16d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3B0u;
        // 0x16d3b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3b0) {
            ctx->pc = 0x16D570u;
            goto label_16d570;
        }
    }
    ctx->pc = 0x16D3B8u;
label_16d3b8:
    // 0x16d3b8: 0xc08f0cc  jal         func_23C330
label_16d3bc:
    if (ctx->pc == 0x16D3BCu) {
        ctx->pc = 0x16D3C0u;
        goto label_16d3c0;
    }
    ctx->pc = 0x16D3B8u;
    SET_GPR_U32(ctx, 31, 0x16D3C0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x16D3C0u;
label_16d3c0:
    // 0x16d3c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16d3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16d3c4:
    // 0x16d3c4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16d3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_16d3c8:
    // 0x16d3c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16d3c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d3cc:
    // 0x16d3cc: 0x0  nop
    ctx->pc = 0x16d3ccu;
    // NOP
label_16d3d0:
    // 0x16d3d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16d3d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16d3d4:
    // 0x16d3d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x16d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_16d3d8:
    // 0x16d3d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16d3d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16d3dc:
    // 0x16d3dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16d3dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d3e0:
    // 0x16d3e0: 0x0  nop
    ctx->pc = 0x16d3e0u;
    // NOP
label_16d3e4:
    // 0x16d3e4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16d3e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_16d3e8:
    // 0x16d3e8: 0x0  nop
    ctx->pc = 0x16d3e8u;
    // NOP
label_16d3ec:
    // 0x16d3ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16d3ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_16d3f0:
    // 0x16d3f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16d3f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16d3f4:
    // 0x16d3f4: 0x0  nop
    ctx->pc = 0x16d3f4u;
    // NOP
label_16d3f8:
    // 0x16d3f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_16d3fc:
    if (ctx->pc == 0x16D3FCu) {
        ctx->pc = 0x16D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3F8u;
        // 0x16d3fc: 0x2414000d  addiu       $s4, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D400u;
        goto label_16d400;
    }
    ctx->pc = 0x16D3F8u;
    {
        const bool branch_taken_0x16d3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3F8u;
        // 0x16d3fc: 0x2414000d  addiu       $s4, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3f8) {
            ctx->pc = 0x16D40Cu;
            goto label_16d40c;
        }
    }
    ctx->pc = 0x16D400u;
label_16d400:
    // 0x16d400: 0x10000002  b           . + 4 + (0x2 << 2)
label_16d404:
    if (ctx->pc == 0x16D404u) {
        ctx->pc = 0x16D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D400u;
        // 0x16d404: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D408u;
        goto label_16d408;
    }
    ctx->pc = 0x16D400u;
    {
        const bool branch_taken_0x16d400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D400u;
        // 0x16d404: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d400) {
            ctx->pc = 0x16D40Cu;
            goto label_16d40c;
        }
    }
    ctx->pc = 0x16D408u;
label_16d408:
    // 0x16d408: 0x2414000d  addiu       $s4, $zero, 0xD
    ctx->pc = 0x16d408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_16d40c:
    // 0x16d40c: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x16d40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16d410:
    // 0x16d410: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d414:
    // 0x16d414: 0x10a40055  beq         $a1, $a0, . + 4 + (0x55 << 2)
label_16d418:
    if (ctx->pc == 0x16D418u) {
        ctx->pc = 0x16D41Cu;
        goto label_16d41c;
    }
    ctx->pc = 0x16D414u;
    {
        const bool branch_taken_0x16d414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x16d414) {
            ctx->pc = 0x16D56Cu;
            goto label_16d56c;
        }
    }
    ctx->pc = 0x16D41Cu;
label_16d41c:
    // 0x16d41c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d420:
    // 0x16d420: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_16d424:
    if (ctx->pc == 0x16D424u) {
        ctx->pc = 0x16D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D420u;
        // 0x16d424: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D428u;
        goto label_16d428;
    }
    ctx->pc = 0x16D420u;
    {
        const bool branch_taken_0x16d420 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D420u;
        // 0x16d424: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d420) {
            ctx->pc = 0x16D434u;
            goto label_16d434;
        }
    }
    ctx->pc = 0x16D428u;
label_16d428:
    // 0x16d428: 0x10000050  b           . + 4 + (0x50 << 2)
label_16d42c:
    if (ctx->pc == 0x16D42Cu) {
        ctx->pc = 0x16D430u;
        goto label_16d430;
    }
    ctx->pc = 0x16D428u;
    {
        const bool branch_taken_0x16d428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d428) {
            ctx->pc = 0x16D56Cu;
            goto label_16d56c;
        }
    }
    ctx->pc = 0x16D430u;
label_16d430:
    // 0x16d430: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16d430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16d434:
    // 0x16d434: 0x1283000b  beq         $s4, $v1, . + 4 + (0xB << 2)
label_16d438:
    if (ctx->pc == 0x16D438u) {
        ctx->pc = 0x16D43Cu;
        goto label_16d43c;
    }
    ctx->pc = 0x16D434u;
    {
        const bool branch_taken_0x16d434 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d434) {
            ctx->pc = 0x16D464u;
            goto label_16d464;
        }
    }
    ctx->pc = 0x16D43Cu;
label_16d43c:
    // 0x16d43c: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x16d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
label_16d440:
    // 0x16d440: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x16d440u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_16d444:
    // 0x16d444: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_16d448:
    if (ctx->pc == 0x16D448u) {
        ctx->pc = 0x16D44Cu;
        goto label_16d44c;
    }
    ctx->pc = 0x16D444u;
    {
        const bool branch_taken_0x16d444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d444) {
            ctx->pc = 0x16D464u;
            goto label_16d464;
        }
    }
    ctx->pc = 0x16D44Cu;
label_16d44c:
    // 0x16d44c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x16d44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16d450:
    // 0x16d450: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_16d454:
    if (ctx->pc == 0x16D454u) {
        ctx->pc = 0x16D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D450u;
        // 0x16d454: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D458u;
        goto label_16d458;
    }
    ctx->pc = 0x16D450u;
    {
        const bool branch_taken_0x16d450 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D450u;
        // 0x16d454: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d450) {
            ctx->pc = 0x16D460u;
            goto label_16d460;
        }
    }
    ctx->pc = 0x16D458u;
label_16d458:
    // 0x16d458: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x16d458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16d45c:
    // 0x16d45c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x16d45cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_16d460:
    // 0x16d460: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x16d460u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16d464:
    // 0x16d464: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16d464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16d468:
    // 0x16d468: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_16d46c:
    if (ctx->pc == 0x16D46Cu) {
        ctx->pc = 0x16D470u;
        goto label_16d470;
    }
    ctx->pc = 0x16D468u;
    {
        const bool branch_taken_0x16d468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d468) {
            ctx->pc = 0x16D56Cu;
            goto label_16d56c;
        }
    }
    ctx->pc = 0x16D470u;
label_16d470:
    // 0x16d470: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d474:
    // 0x16d474: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16d474u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16d478:
    // 0x16d478: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16d47c:
    if (ctx->pc == 0x16D47Cu) {
        ctx->pc = 0x16D480u;
        goto label_16d480;
    }
    ctx->pc = 0x16D478u;
    {
        const bool branch_taken_0x16d478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d478) {
            ctx->pc = 0x16D4A4u;
            goto label_16d4a4;
        }
    }
    ctx->pc = 0x16D480u;
label_16d480:
    // 0x16d480: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d484:
    // 0x16d484: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16d488:
    // 0x16d488: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16d48c:
    // 0x16d48c: 0xc08d61c  jal         func_235870
label_16d490:
    if (ctx->pc == 0x16D490u) {
        ctx->pc = 0x16D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D48Cu;
        // 0x16d490: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D494u;
        goto label_16d494;
    }
    ctx->pc = 0x16D48Cu;
    SET_GPR_U32(ctx, 31, 0x16D494u);
    ctx->pc = 0x16D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D48Cu;
    // 0x16d490: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16D494u;
label_16d494:
    // 0x16d494: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d498:
    // 0x16d498: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16d49c:
    if (ctx->pc == 0x16D49Cu) {
        ctx->pc = 0x16D4A0u;
        goto label_16d4a0;
    }
    ctx->pc = 0x16D498u;
    {
        const bool branch_taken_0x16d498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d498) {
            ctx->pc = 0x16D480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d480;
        }
    }
    ctx->pc = 0x16D4A0u;
label_16d4a0:
    // 0x16d4a0: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16d4a4:
    // 0x16d4a4: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x16d4a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16d4a8:
    // 0x16d4a8: 0x133380  sll         $a2, $s3, 14
    ctx->pc = 0x16d4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 14));
label_16d4ac:
    // 0x16d4ac: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_16d4b0:
    // 0x16d4b0: 0x1029c0  sll         $a1, $s0, 7
    ctx->pc = 0x16d4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_16d4b4:
    // 0x16d4b4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x16d4b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_16d4b8:
    // 0x16d4b8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x16d4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16d4bc:
    // 0x16d4bc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x16d4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_16d4c0:
    // 0x16d4c0: 0x148e00  sll         $s1, $s4, 24
    ctx->pc = 0x16d4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
label_16d4c4:
    // 0x16d4c4: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x16d4c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_16d4c8:
    // 0x16d4c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_16d4cc:
    // 0x16d4cc: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d4d0:
    // 0x16d4d0: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x16d4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_16d4d4:
    // 0x16d4d4: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x16d4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_16d4d8:
    // 0x16d4d8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16d4dc:
    // 0x16d4dc: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16d4e0:
    // 0x16d4e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16d4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16d4e4:
    // 0x16d4e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16d4e8:
    // 0x16d4e8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16d4ec:
    // 0x16d4ec: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d4f0:
    // 0x16d4f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16d4f4:
    // 0x16d4f4: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16d4f8:
    // 0x16d4f8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d4fc:
    // 0x16d4fc: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16d4fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16d500:
    // 0x16d500: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16d504:
    if (ctx->pc == 0x16D504u) {
        ctx->pc = 0x16D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D500u;
        // 0x16d504: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D508u;
        goto label_16d508;
    }
    ctx->pc = 0x16D500u;
    {
        const bool branch_taken_0x16d500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D500u;
        // 0x16d504: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d500) {
            ctx->pc = 0x16D530u;
            goto label_16d530;
        }
    }
    ctx->pc = 0x16D508u;
label_16d508:
    // 0x16d508: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d50c:
    // 0x16d50c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d50cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16d510:
    // 0x16d510: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16d514:
    // 0x16d514: 0xc08d61c  jal         func_235870
label_16d518:
    if (ctx->pc == 0x16D518u) {
        ctx->pc = 0x16D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D514u;
        // 0x16d518: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D51Cu;
        goto label_16d51c;
    }
    ctx->pc = 0x16D514u;
    SET_GPR_U32(ctx, 31, 0x16D51Cu);
    ctx->pc = 0x16D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D514u;
    // 0x16d518: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16D51Cu;
label_16d51c:
    // 0x16d51c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d520:
    // 0x16d520: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16d524:
    if (ctx->pc == 0x16D524u) {
        ctx->pc = 0x16D528u;
        goto label_16d528;
    }
    ctx->pc = 0x16D520u;
    {
        const bool branch_taken_0x16d520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d520) {
            ctx->pc = 0x16D508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d508;
        }
    }
    ctx->pc = 0x16D528u;
label_16d528:
    // 0x16d528: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d528u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16d52c:
    // 0x16d52c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_16d530:
    // 0x16d530: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x16d530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_16d534:
    // 0x16d534: 0x2232825  or          $a1, $s1, $v1
    ctx->pc = 0x16d534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_16d538:
    // 0x16d538: 0x41b80  sll         $v1, $a0, 14
    ctx->pc = 0x16d538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
label_16d53c:
    // 0x16d53c: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d540:
    // 0x16d540: 0x34633f80  ori         $v1, $v1, 0x3F80
    ctx->pc = 0x16d540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16256);
label_16d544:
    // 0x16d544: 0x703025  or          $a2, $v1, $s0
    ctx->pc = 0x16d544u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_16d548:
    // 0x16d548: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16d548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16d54c:
    // 0x16d54c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x16d54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_16d550:
    // 0x16d550: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16d550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16d554:
    // 0x16d554: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16d554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16d558:
    // 0x16d558: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16d55c:
    // 0x16d55c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16d560:
    // 0x16d560: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d564:
    // 0x16d564: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16d568:
    // 0x16d568: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16d56c:
    // 0x16d56c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16d56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16d570:
    // 0x16d570: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16d570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16d574:
    // 0x16d574: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16d574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16d578:
    // 0x16d578: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16d578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16d57c:
    // 0x16d57c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d57cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d580:
    // 0x16d580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16d584:
    // 0x16d584: 0x3e00008  jr          $ra
label_16d588:
    if (ctx->pc == 0x16D588u) {
        ctx->pc = 0x16D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D584u;
        // 0x16d588: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D58Cu;
        goto label_16d58c;
    }
    ctx->pc = 0x16D584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D584u;
        // 0x16d588: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D58Cu;
label_16d58c:
    // 0x16d58c: 0x0  nop
    ctx->pc = 0x16d58cu;
    // NOP
label_16d590:
    // 0x16d590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16d590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16d594:
    // 0x16d594: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x16d594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_16d598:
    // 0x16d598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16d59c:
    // 0x16d59c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d5a0:
    // 0x16d5a0: 0x8f8586f4  lw          $a1, -0x790C($gp)
    ctx->pc = 0x16d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
label_16d5a4:
    // 0x16d5a4: 0xaf8486f8  sw          $a0, -0x7908($gp)
    ctx->pc = 0x16d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U32(ctx, 4));
label_16d5a8:
    // 0x16d5a8: 0xc08d950  jal         func_236540
label_16d5ac:
    if (ctx->pc == 0x16D5ACu) {
        ctx->pc = 0x16D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5A8u;
        // 0x16d5ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D5B0u;
        goto label_16d5b0;
    }
    ctx->pc = 0x16D5A8u;
    SET_GPR_U32(ctx, 31, 0x16D5B0u);
    ctx->pc = 0x16D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5A8u;
    // 0x16d5ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236540u;
    { ctx->pc = 0x236540; return; }
    ctx->pc = 0x16D5B0u;
label_16d5b0:
    // 0x16d5b0: 0x8f8586f8  lw          $a1, -0x7908($gp)
    ctx->pc = 0x16d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936312)));
label_16d5b4:
    // 0x16d5b4: 0xc08d2ec  jal         func_234BB0
label_16d5b8:
    if (ctx->pc == 0x16D5B8u) {
        ctx->pc = 0x16D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5B4u;
        // 0x16d5b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D5BCu;
        goto label_16d5bc;
    }
    ctx->pc = 0x16D5B4u;
    SET_GPR_U32(ctx, 31, 0x16D5BCu);
    ctx->pc = 0x16D5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5B4u;
    // 0x16d5b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234BB0u;
    { ctx->pc = 0x234bb0; return; }
    ctx->pc = 0x16D5BCu;
label_16d5bc:
    // 0x16d5bc: 0x8f8586f8  lw          $a1, -0x7908($gp)
    ctx->pc = 0x16d5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936312)));
label_16d5c0:
    // 0x16d5c0: 0xc08d97a  jal         func_2365E8
label_16d5c4:
    if (ctx->pc == 0x16D5C4u) {
        ctx->pc = 0x16D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5C0u;
        // 0x16d5c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D5C8u;
        goto label_16d5c8;
    }
    ctx->pc = 0x16D5C0u;
    SET_GPR_U32(ctx, 31, 0x16D5C8u);
    ctx->pc = 0x16D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D5C0u;
    // 0x16d5c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2365E8u;
    { ctx->pc = 0x2365e8; return; }
    ctx->pc = 0x16D5C8u;
label_16d5c8:
    // 0x16d5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d5cc:
    // 0x16d5cc: 0x3e00008  jr          $ra
label_16d5d0:
    if (ctx->pc == 0x16D5D0u) {
        ctx->pc = 0x16D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5CCu;
        // 0x16d5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D5D4u;
        goto label_16d5d4;
    }
    ctx->pc = 0x16D5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5CCu;
        // 0x16d5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D5D4u;
label_16d5d4:
    // 0x16d5d4: 0x0  nop
    ctx->pc = 0x16d5d4u;
    // NOP
label_16d5d8:
    // 0x16d5d8: 0x0  nop
    ctx->pc = 0x16d5d8u;
    // NOP
label_16d5dc:
    // 0x16d5dc: 0x0  nop
    ctx->pc = 0x16d5dcu;
    // NOP
label_16d5e0:
    // 0x16d5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16d5e4:
    // 0x16d5e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d5e8:
    // 0x16d5e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16d5ec:
    // 0x16d5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16d5f0:
    // 0x16d5f0: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16d5f4:
    // 0x16d5f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_16d5f8:
    if (ctx->pc == 0x16D5F8u) {
        ctx->pc = 0x16D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5F4u;
        // 0x16d5f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D5FCu;
        goto label_16d5fc;
    }
    ctx->pc = 0x16D5F4u;
    {
        const bool branch_taken_0x16d5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D5F4u;
        // 0x16d5f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5f4) {
            ctx->pc = 0x16D608u;
            goto label_16d608;
        }
    }
    ctx->pc = 0x16D5FCu;
label_16d5fc:
    // 0x16d5fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d600:
    // 0x16d600: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_16d604:
    if (ctx->pc == 0x16D604u) {
        ctx->pc = 0x16D608u;
        goto label_16d608;
    }
    ctx->pc = 0x16D600u;
    {
        const bool branch_taken_0x16d600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d600) {
            ctx->pc = 0x16D634u;
            goto label_16d634;
        }
    }
    ctx->pc = 0x16D608u;
label_16d608:
    // 0x16d608: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d60c:
    // 0x16d60c: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d610:
    // 0x16d610: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x16d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_16d614:
    // 0x16d614: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16d618:
    if (ctx->pc == 0x16D618u) {
        ctx->pc = 0x16D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D614u;
        // 0x16d618: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D61Cu;
        goto label_16d61c;
    }
    ctx->pc = 0x16D614u;
    {
        const bool branch_taken_0x16d614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D614u;
        // 0x16d618: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d614) {
            ctx->pc = 0x16D624u;
            goto label_16d624;
        }
    }
    ctx->pc = 0x16D61Cu;
label_16d61c:
    // 0x16d61c: 0xc05b5ac  jal         func_16D6B0
label_16d620:
    if (ctx->pc == 0x16D620u) {
        ctx->pc = 0x16D624u;
        goto label_16d624;
    }
    ctx->pc = 0x16D61Cu;
    SET_GPR_U32(ctx, 31, 0x16D624u);
    ctx->pc = 0x16D6B0u;
    goto label_16d6b0;
    ctx->pc = 0x16D624u;
label_16d624:
    // 0x16d624: 0xc05b6ec  jal         func_16DBB0
label_16d628:
    if (ctx->pc == 0x16D628u) {
        ctx->pc = 0x16D62Cu;
        goto label_16d62c;
    }
    ctx->pc = 0x16D624u;
    SET_GPR_U32(ctx, 31, 0x16D62Cu);
    ctx->pc = 0x16DBB0u;
    { ctx->pc = 0x16dbb0; return; }
    ctx->pc = 0x16D62Cu;
label_16d62c:
    // 0x16d62c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_16d630:
    if (ctx->pc == 0x16D630u) {
        ctx->pc = 0x16D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D62Cu;
        // 0x16d630: 0xaf828700  sw          $v0, -0x7900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D634u;
        goto label_16d634;
    }
    ctx->pc = 0x16D62Cu;
    {
        const bool branch_taken_0x16d62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D62Cu;
        // 0x16d630: 0xaf828700  sw          $v0, -0x7900($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d62c) {
            ctx->pc = 0x16D698u;
            goto label_16d698;
        }
    }
    ctx->pc = 0x16D634u;
label_16d634:
    // 0x16d634: 0xc05ae90  jal         func_16BA40
label_16d638:
    if (ctx->pc == 0x16D638u) {
        ctx->pc = 0x16D63Cu;
        goto label_16d63c;
    }
    ctx->pc = 0x16D634u;
    SET_GPR_U32(ctx, 31, 0x16D63Cu);
    ctx->pc = 0x16BA40u;
    { ctx->pc = 0x16ba40; return; }
    ctx->pc = 0x16D63Cu;
label_16d63c:
    // 0x16d63c: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d640:
    // 0x16d640: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_16d644:
    if (ctx->pc == 0x16D644u) {
        ctx->pc = 0x16D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D640u;
        // 0x16d644: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D648u;
        goto label_16d648;
    }
    ctx->pc = 0x16D640u;
    {
        const bool branch_taken_0x16d640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D640u;
        // 0x16d644: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d640) {
            ctx->pc = 0x16D68Cu;
            goto label_16d68c;
        }
    }
    ctx->pc = 0x16D648u;
label_16d648:
    // 0x16d648: 0x10000005  b           . + 4 + (0x5 << 2)
label_16d64c:
    if (ctx->pc == 0x16D64Cu) {
        ctx->pc = 0x16D650u;
        goto label_16d650;
    }
    ctx->pc = 0x16D648u;
    {
        const bool branch_taken_0x16d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d648) {
            ctx->pc = 0x16D660u;
            goto label_16d660;
        }
    }
    ctx->pc = 0x16D650u;
label_16d650:
    // 0x16d650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d654:
    // 0x16d654: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x16d654u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_16d658:
    // 0x16d658: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16d65c:
    if (ctx->pc == 0x16D65Cu) {
        ctx->pc = 0x16D660u;
        goto label_16d660;
    }
    ctx->pc = 0x16D658u;
    {
        const bool branch_taken_0x16d658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d658) {
            ctx->pc = 0x16D688u;
            goto label_16d688;
        }
    }
    ctx->pc = 0x16D660u;
label_16d660:
    // 0x16d660: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16d664:
    // 0x16d664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d668:
    // 0x16d668: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16d66c:
    // 0x16d66c: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x16d66cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_16d670:
    // 0x16d670: 0xc08d61c  jal         func_235870
label_16d674:
    if (ctx->pc == 0x16D674u) {
        ctx->pc = 0x16D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D670u;
        // 0x16d674: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D678u;
        goto label_16d678;
    }
    ctx->pc = 0x16D670u;
    SET_GPR_U32(ctx, 31, 0x16D678u);
    ctx->pc = 0x16D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D670u;
    // 0x16d674: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16D678u;
label_16d678:
    // 0x16d678: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d67c:
    // 0x16d67c: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
label_16d680:
    if (ctx->pc == 0x16D680u) {
        ctx->pc = 0x16D684u;
        goto label_16d684;
    }
    ctx->pc = 0x16D67Cu;
    {
        const bool branch_taken_0x16d67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d67c) {
            ctx->pc = 0x16D650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d650;
        }
    }
    ctx->pc = 0x16D684u;
label_16d684:
    // 0x16d684: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d684u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16d688:
    // 0x16d688: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d68c:
    // 0x16d68c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d690:
    // 0x16d690: 0xc05b5ac  jal         func_16D6B0
label_16d694:
    if (ctx->pc == 0x16D694u) {
        ctx->pc = 0x16D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D690u;
        // 0x16d694: 0x50200a  movz        $a0, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D698u;
        goto label_16d698;
    }
    ctx->pc = 0x16D690u;
    SET_GPR_U32(ctx, 31, 0x16D698u);
    ctx->pc = 0x16D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D690u;
    // 0x16d694: 0x50200a  movz        $a0, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D6B0u;
    goto label_16d6b0;
    ctx->pc = 0x16D698u;
label_16d698:
    // 0x16d698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16d69c:
    // 0x16d69c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16d6a0:
    // 0x16d6a0: 0x3e00008  jr          $ra
label_16d6a4:
    if (ctx->pc == 0x16D6A4u) {
        ctx->pc = 0x16D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6A0u;
        // 0x16d6a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D6A8u;
        goto label_16d6a8;
    }
    ctx->pc = 0x16D6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6A0u;
        // 0x16d6a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D6A8u;
label_16d6a8:
    // 0x16d6a8: 0x0  nop
    ctx->pc = 0x16d6a8u;
    // NOP
label_16d6ac:
    // 0x16d6ac: 0x0  nop
    ctx->pc = 0x16d6acu;
    // NOP
label_16d6b0:
    // 0x16d6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16d6b4:
    // 0x16d6b4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d6b8:
    // 0x16d6b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16d6bc:
    // 0x16d6bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16d6c0:
    // 0x16d6c0: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d6c4:
    // 0x16d6c4: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
label_16d6c8:
    if (ctx->pc == 0x16D6C8u) {
        ctx->pc = 0x16D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6C4u;
        // 0x16d6c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D6CCu;
        goto label_16d6cc;
    }
    ctx->pc = 0x16D6C4u;
    {
        const bool branch_taken_0x16d6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6C4u;
        // 0x16d6c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6c4) {
            ctx->pc = 0x16D8D0u;
            { ctx->pc = 0x16d8d0; return; }
        }
    }
    ctx->pc = 0x16D6CCu;
label_16d6cc:
    // 0x16d6cc: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x16d6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_16d6d0:
    // 0x16d6d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_16d6d4:
    if (ctx->pc == 0x16D6D4u) {
        ctx->pc = 0x16D6D8u;
        goto label_16d6d8;
    }
    ctx->pc = 0x16D6D0u;
    {
        const bool branch_taken_0x16d6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d6d0) {
            ctx->pc = 0x16D6F8u;
            goto label_16d6f8;
        }
    }
    ctx->pc = 0x16D6D8u;
label_16d6d8:
    // 0x16d6d8: 0xc08d7f6  jal         func_235FD8
label_16d6dc:
    if (ctx->pc == 0x16D6DCu) {
        ctx->pc = 0x16D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6D8u;
        // 0x16d6dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D6E0u;
        goto label_16d6e0;
    }
    ctx->pc = 0x16D6D8u;
    SET_GPR_U32(ctx, 31, 0x16D6E0u);
    ctx->pc = 0x16D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D6D8u;
    // 0x16d6dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235FD8u;
    { ctx->pc = 0x235fd8; return; }
    ctx->pc = 0x16D6E0u;
label_16d6e0:
    // 0x16d6e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16d6e4:
    // 0x16d6e4: 0x1043007a  beq         $v0, $v1, . + 4 + (0x7A << 2)
label_16d6e8:
    if (ctx->pc == 0x16D6E8u) {
        ctx->pc = 0x16D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6E4u;
        // 0x16d6e8: 0x36030002  ori         $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D6ECu;
        goto label_16d6ec;
    }
    ctx->pc = 0x16D6E4u;
    {
        const bool branch_taken_0x16d6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6E4u;
        // 0x16d6e8: 0x36030002  ori         $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6e4) {
            ctx->pc = 0x16D8D0u;
            { ctx->pc = 0x16d8d0; return; }
        }
    }
    ctx->pc = 0x16D6ECu;
label_16d6ec:
    // 0x16d6ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16d6f0:
    if (ctx->pc == 0x16D6F0u) {
        ctx->pc = 0x16D6F4u;
        goto label_16d6f4;
    }
    ctx->pc = 0x16D6ECu;
    {
        const bool branch_taken_0x16d6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6ec) {
            ctx->pc = 0x16D6F8u;
            goto label_16d6f8;
        }
    }
    ctx->pc = 0x16D6F4u;
label_16d6f4:
    // 0x16d6f4: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x16d6f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_16d6f8:
    // 0x16d6f8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d6fc:
    // 0x16d6fc: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d700:
    // 0x16d700: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x16d700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_16d704:
    // 0x16d704: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_16d708:
    if (ctx->pc == 0x16D708u) {
        ctx->pc = 0x16D70Cu;
        goto label_16d70c;
    }
    ctx->pc = 0x16D704u;
    {
        const bool branch_taken_0x16d704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d704) {
            ctx->pc = 0x16D758u;
            goto label_16d758;
        }
    }
    ctx->pc = 0x16D70Cu;
label_16d70c:
    // 0x16d70c: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x16d70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_16d710:
    // 0x16d710: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_16d714:
    if (ctx->pc == 0x16D714u) {
        ctx->pc = 0x16D718u;
        goto label_16d718;
    }
    ctx->pc = 0x16D710u;
    {
        const bool branch_taken_0x16d710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d710) {
            ctx->pc = 0x16D758u;
            goto label_16d758;
        }
    }
    ctx->pc = 0x16D718u;
label_16d718:
    // 0x16d718: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d71c:
    // 0x16d71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d720:
    // 0x16d720: 0x8c251ebc  lw          $a1, 0x1EBC($at)
    ctx->pc = 0x16d720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7868)));
label_16d724:
    // 0x16d724: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x16d724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_16d728:
    // 0x16d728: 0xc08d950  jal         func_236540
label_16d72c:
    if (ctx->pc == 0x16D72Cu) {
        ctx->pc = 0x16D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D728u;
        // 0x16d72c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D730u;
        goto label_16d730;
    }
    ctx->pc = 0x16D728u;
    SET_GPR_U32(ctx, 31, 0x16D730u);
    ctx->pc = 0x16D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D728u;
    // 0x16d72c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236540u;
    { ctx->pc = 0x236540; return; }
    ctx->pc = 0x16D730u;
label_16d730:
    // 0x16d730: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_16d734:
    if (ctx->pc == 0x16D734u) {
        ctx->pc = 0x16D738u;
        goto label_16d738;
    }
    ctx->pc = 0x16D730u;
    {
        const bool branch_taken_0x16d730 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d730) {
            ctx->pc = 0x16D758u;
            goto label_16d758;
        }
    }
    ctx->pc = 0x16D738u;
label_16d738:
    // 0x16d738: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d73c:
    // 0x16d73c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x16d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_16d740:
    // 0x16d740: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d744:
    // 0x16d744: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d748:
    // 0x16d748: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16d748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16d74c:
    // 0x16d74c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d750:
    // 0x16d750: 0xc08d7f6  jal         func_235FD8
label_16d754:
    if (ctx->pc == 0x16D754u) {
        ctx->pc = 0x16D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D750u;
        // 0x16d754: 0xac221eb0  sw          $v0, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D758u;
        goto label_16d758;
    }
    ctx->pc = 0x16D750u;
    SET_GPR_U32(ctx, 31, 0x16D758u);
    ctx->pc = 0x16D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D750u;
    // 0x16d754: 0xac221eb0  sw          $v0, 0x1EB0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235FD8u;
    { ctx->pc = 0x235fd8; return; }
    ctx->pc = 0x16D758u;
label_16d758:
    // 0x16d758: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d75c:
    // 0x16d75c: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d760:
    // 0x16d760: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x16d760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_16d764:
    // 0x16d764: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_16d768:
    if (ctx->pc == 0x16D768u) {
        ctx->pc = 0x16D76Cu;
        goto label_16d76c;
    }
    ctx->pc = 0x16D764u;
    {
        const bool branch_taken_0x16d764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d764) {
            ctx->pc = 0x16D794u;
            goto label_16d794;
        }
    }
    ctx->pc = 0x16D76Cu;
label_16d76c:
    // 0x16d76c: 0xc08d8ee  jal         func_2363B8
label_16d770:
    if (ctx->pc == 0x16D770u) {
        ctx->pc = 0x16D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D76Cu;
        // 0x16d770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D774u;
        goto label_16d774;
    }
    ctx->pc = 0x16D76Cu;
    SET_GPR_U32(ctx, 31, 0x16D774u);
    ctx->pc = 0x16D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D76Cu;
    // 0x16d770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2363B8u;
    { ctx->pc = 0x2363b8; return; }
    ctx->pc = 0x16D774u;
label_16d774:
    // 0x16d774: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_16d778:
    if (ctx->pc == 0x16D778u) {
        ctx->pc = 0x16D77Cu;
        goto label_16d77c;
    }
    ctx->pc = 0x16D774u;
    {
        const bool branch_taken_0x16d774 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d774) {
            ctx->pc = 0x16D794u;
            goto label_16d794;
        }
    }
    ctx->pc = 0x16D77Cu;
label_16d77c:
    // 0x16d77c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d780:
    // 0x16d780: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_16d784:
    // 0x16d784: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d788:
    // 0x16d788: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16d78c:
    // 0x16d78c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d790:
    // 0x16d790: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d790u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 3));
label_16d794:
    // 0x16d794: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d798:
    // 0x16d798: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d79c:
    // 0x16d79c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16d79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_16d7a0:
    // 0x16d7a0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_16d7a4:
    if (ctx->pc == 0x16D7A4u) {
        ctx->pc = 0x16D7A8u;
        goto label_16d7a8;
    }
    ctx->pc = 0x16D7A0u;
    {
        const bool branch_taken_0x16d7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d7a0) {
            ctx->pc = 0x16D818u;
            { ctx->pc = 0x16d818; return; }
        }
    }
    ctx->pc = 0x16D7A8u;
label_16d7a8:
    // 0x16d7a8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d7ac:
    // 0x16d7ac: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16d7b0:
    // 0x16d7b0: 0x8c231eb4  lw          $v1, 0x1EB4($at)
    ctx->pc = 0x16d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7860)));
label_16d7b4:
    // 0x16d7b4: 0x244214e0  addiu       $v0, $v0, 0x14E0
    ctx->pc = 0x16d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
label_16d7b8:
    // 0x16d7b8: 0x8f858168  lw          $a1, -0x7E98($gp)
    ctx->pc = 0x16d7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934888)));
label_16d7bc:
    // 0x16d7bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d7c0:
    // 0x16d7c0: 0x24093fff  addiu       $t1, $zero, 0x3FFF
    ctx->pc = 0x16d7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_16d7c4:
    // 0x16d7c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16d7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d7c8:
    // 0x16d7c8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d7cc:
    // 0x16d7cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    ctx->pc = 0x16d7d0u;
    return;
}
