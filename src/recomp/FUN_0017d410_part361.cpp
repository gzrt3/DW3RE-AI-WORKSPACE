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


void FUN_0017d410_part361(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22d090u: goto label_22d090;
        case 0x22d094u: goto label_22d094;
        case 0x22d098u: goto label_22d098;
        case 0x22d09cu: goto label_22d09c;
        case 0x22d0a0u: goto label_22d0a0;
        case 0x22d0a4u: goto label_22d0a4;
        case 0x22d0a8u: goto label_22d0a8;
        case 0x22d0acu: goto label_22d0ac;
        case 0x22d0b0u: goto label_22d0b0;
        case 0x22d0b4u: goto label_22d0b4;
        case 0x22d0b8u: goto label_22d0b8;
        case 0x22d0bcu: goto label_22d0bc;
        case 0x22d0c0u: goto label_22d0c0;
        case 0x22d0c4u: goto label_22d0c4;
        case 0x22d0c8u: goto label_22d0c8;
        case 0x22d0ccu: goto label_22d0cc;
        case 0x22d0d0u: goto label_22d0d0;
        case 0x22d0d4u: goto label_22d0d4;
        case 0x22d0d8u: goto label_22d0d8;
        case 0x22d0dcu: goto label_22d0dc;
        case 0x22d0e0u: goto label_22d0e0;
        case 0x22d0e4u: goto label_22d0e4;
        case 0x22d0e8u: goto label_22d0e8;
        case 0x22d0ecu: goto label_22d0ec;
        case 0x22d0f0u: goto label_22d0f0;
        case 0x22d0f4u: goto label_22d0f4;
        case 0x22d0f8u: goto label_22d0f8;
        case 0x22d0fcu: goto label_22d0fc;
        case 0x22d100u: goto label_22d100;
        case 0x22d104u: goto label_22d104;
        case 0x22d108u: goto label_22d108;
        case 0x22d10cu: goto label_22d10c;
        case 0x22d110u: goto label_22d110;
        case 0x22d114u: goto label_22d114;
        case 0x22d118u: goto label_22d118;
        case 0x22d11cu: goto label_22d11c;
        case 0x22d120u: goto label_22d120;
        case 0x22d124u: goto label_22d124;
        case 0x22d128u: goto label_22d128;
        case 0x22d12cu: goto label_22d12c;
        case 0x22d130u: goto label_22d130;
        case 0x22d134u: goto label_22d134;
        case 0x22d138u: goto label_22d138;
        case 0x22d13cu: goto label_22d13c;
        case 0x22d140u: goto label_22d140;
        case 0x22d144u: goto label_22d144;
        case 0x22d148u: goto label_22d148;
        case 0x22d14cu: goto label_22d14c;
        case 0x22d150u: goto label_22d150;
        case 0x22d154u: goto label_22d154;
        case 0x22d158u: goto label_22d158;
        case 0x22d15cu: goto label_22d15c;
        case 0x22d160u: goto label_22d160;
        case 0x22d164u: goto label_22d164;
        case 0x22d168u: goto label_22d168;
        case 0x22d16cu: goto label_22d16c;
        case 0x22d170u: goto label_22d170;
        case 0x22d174u: goto label_22d174;
        case 0x22d178u: goto label_22d178;
        case 0x22d17cu: goto label_22d17c;
        case 0x22d180u: goto label_22d180;
        case 0x22d184u: goto label_22d184;
        case 0x22d188u: goto label_22d188;
        case 0x22d18cu: goto label_22d18c;
        case 0x22d190u: goto label_22d190;
        case 0x22d194u: goto label_22d194;
        case 0x22d198u: goto label_22d198;
        case 0x22d19cu: goto label_22d19c;
        case 0x22d1a0u: goto label_22d1a0;
        case 0x22d1a4u: goto label_22d1a4;
        case 0x22d1a8u: goto label_22d1a8;
        case 0x22d1acu: goto label_22d1ac;
        case 0x22d1b0u: goto label_22d1b0;
        case 0x22d1b4u: goto label_22d1b4;
        case 0x22d1b8u: goto label_22d1b8;
        case 0x22d1bcu: goto label_22d1bc;
        case 0x22d1c0u: goto label_22d1c0;
        case 0x22d1c4u: goto label_22d1c4;
        case 0x22d1c8u: goto label_22d1c8;
        case 0x22d1ccu: goto label_22d1cc;
        case 0x22d1d0u: goto label_22d1d0;
        case 0x22d1d4u: goto label_22d1d4;
        case 0x22d1d8u: goto label_22d1d8;
        case 0x22d1dcu: goto label_22d1dc;
        case 0x22d1e0u: goto label_22d1e0;
        case 0x22d1e4u: goto label_22d1e4;
        case 0x22d1e8u: goto label_22d1e8;
        case 0x22d1ecu: goto label_22d1ec;
        case 0x22d1f0u: goto label_22d1f0;
        case 0x22d1f4u: goto label_22d1f4;
        case 0x22d1f8u: goto label_22d1f8;
        case 0x22d1fcu: goto label_22d1fc;
        case 0x22d200u: goto label_22d200;
        case 0x22d204u: goto label_22d204;
        case 0x22d208u: goto label_22d208;
        case 0x22d20cu: goto label_22d20c;
        case 0x22d210u: goto label_22d210;
        case 0x22d214u: goto label_22d214;
        case 0x22d218u: goto label_22d218;
        case 0x22d21cu: goto label_22d21c;
        case 0x22d220u: goto label_22d220;
        case 0x22d224u: goto label_22d224;
        case 0x22d228u: goto label_22d228;
        case 0x22d22cu: goto label_22d22c;
        case 0x22d230u: goto label_22d230;
        case 0x22d234u: goto label_22d234;
        case 0x22d238u: goto label_22d238;
        case 0x22d23cu: goto label_22d23c;
        case 0x22d240u: goto label_22d240;
        case 0x22d244u: goto label_22d244;
        case 0x22d248u: goto label_22d248;
        case 0x22d24cu: goto label_22d24c;
        case 0x22d250u: goto label_22d250;
        case 0x22d254u: goto label_22d254;
        case 0x22d258u: goto label_22d258;
        case 0x22d25cu: goto label_22d25c;
        case 0x22d260u: goto label_22d260;
        case 0x22d264u: goto label_22d264;
        case 0x22d268u: goto label_22d268;
        case 0x22d26cu: goto label_22d26c;
        case 0x22d270u: goto label_22d270;
        case 0x22d274u: goto label_22d274;
        case 0x22d278u: goto label_22d278;
        case 0x22d27cu: goto label_22d27c;
        case 0x22d280u: goto label_22d280;
        case 0x22d284u: goto label_22d284;
        case 0x22d288u: goto label_22d288;
        case 0x22d28cu: goto label_22d28c;
        case 0x22d290u: goto label_22d290;
        case 0x22d294u: goto label_22d294;
        case 0x22d298u: goto label_22d298;
        case 0x22d29cu: goto label_22d29c;
        case 0x22d2a0u: goto label_22d2a0;
        case 0x22d2a4u: goto label_22d2a4;
        case 0x22d2a8u: goto label_22d2a8;
        case 0x22d2acu: goto label_22d2ac;
        case 0x22d2b0u: goto label_22d2b0;
        case 0x22d2b4u: goto label_22d2b4;
        case 0x22d2b8u: goto label_22d2b8;
        case 0x22d2bcu: goto label_22d2bc;
        case 0x22d2c0u: goto label_22d2c0;
        case 0x22d2c4u: goto label_22d2c4;
        case 0x22d2c8u: goto label_22d2c8;
        case 0x22d2ccu: goto label_22d2cc;
        case 0x22d2d0u: goto label_22d2d0;
        case 0x22d2d4u: goto label_22d2d4;
        case 0x22d2d8u: goto label_22d2d8;
        case 0x22d2dcu: goto label_22d2dc;
        case 0x22d2e0u: goto label_22d2e0;
        case 0x22d2e4u: goto label_22d2e4;
        case 0x22d2e8u: goto label_22d2e8;
        case 0x22d2ecu: goto label_22d2ec;
        case 0x22d2f0u: goto label_22d2f0;
        case 0x22d2f4u: goto label_22d2f4;
        case 0x22d2f8u: goto label_22d2f8;
        case 0x22d2fcu: goto label_22d2fc;
        case 0x22d300u: goto label_22d300;
        case 0x22d304u: goto label_22d304;
        case 0x22d308u: goto label_22d308;
        case 0x22d30cu: goto label_22d30c;
        case 0x22d310u: goto label_22d310;
        case 0x22d314u: goto label_22d314;
        case 0x22d318u: goto label_22d318;
        case 0x22d31cu: goto label_22d31c;
        case 0x22d320u: goto label_22d320;
        case 0x22d324u: goto label_22d324;
        case 0x22d328u: goto label_22d328;
        case 0x22d32cu: goto label_22d32c;
        case 0x22d330u: goto label_22d330;
        case 0x22d334u: goto label_22d334;
        case 0x22d338u: goto label_22d338;
        case 0x22d33cu: goto label_22d33c;
        case 0x22d340u: goto label_22d340;
        case 0x22d344u: goto label_22d344;
        case 0x22d348u: goto label_22d348;
        case 0x22d34cu: goto label_22d34c;
        case 0x22d350u: goto label_22d350;
        case 0x22d354u: goto label_22d354;
        case 0x22d358u: goto label_22d358;
        case 0x22d35cu: goto label_22d35c;
        case 0x22d360u: goto label_22d360;
        case 0x22d364u: goto label_22d364;
        case 0x22d368u: goto label_22d368;
        case 0x22d36cu: goto label_22d36c;
        case 0x22d370u: goto label_22d370;
        case 0x22d374u: goto label_22d374;
        case 0x22d378u: goto label_22d378;
        case 0x22d37cu: goto label_22d37c;
        case 0x22d380u: goto label_22d380;
        case 0x22d384u: goto label_22d384;
        case 0x22d388u: goto label_22d388;
        case 0x22d38cu: goto label_22d38c;
        case 0x22d390u: goto label_22d390;
        case 0x22d394u: goto label_22d394;
        case 0x22d398u: goto label_22d398;
        case 0x22d39cu: goto label_22d39c;
        case 0x22d3a0u: goto label_22d3a0;
        case 0x22d3a4u: goto label_22d3a4;
        case 0x22d3a8u: goto label_22d3a8;
        case 0x22d3acu: goto label_22d3ac;
        case 0x22d3b0u: goto label_22d3b0;
        case 0x22d3b4u: goto label_22d3b4;
        case 0x22d3b8u: goto label_22d3b8;
        case 0x22d3bcu: goto label_22d3bc;
        case 0x22d3c0u: goto label_22d3c0;
        case 0x22d3c4u: goto label_22d3c4;
        case 0x22d3c8u: goto label_22d3c8;
        case 0x22d3ccu: goto label_22d3cc;
        case 0x22d3d0u: goto label_22d3d0;
        case 0x22d3d4u: goto label_22d3d4;
        case 0x22d3d8u: goto label_22d3d8;
        case 0x22d3dcu: goto label_22d3dc;
        case 0x22d3e0u: goto label_22d3e0;
        case 0x22d3e4u: goto label_22d3e4;
        case 0x22d3e8u: goto label_22d3e8;
        case 0x22d3ecu: goto label_22d3ec;
        case 0x22d3f0u: goto label_22d3f0;
        case 0x22d3f4u: goto label_22d3f4;
        case 0x22d3f8u: goto label_22d3f8;
        case 0x22d3fcu: goto label_22d3fc;
        case 0x22d400u: goto label_22d400;
        case 0x22d404u: goto label_22d404;
        case 0x22d408u: goto label_22d408;
        case 0x22d40cu: goto label_22d40c;
        case 0x22d410u: goto label_22d410;
        case 0x22d414u: goto label_22d414;
        case 0x22d418u: goto label_22d418;
        case 0x22d41cu: goto label_22d41c;
        case 0x22d420u: goto label_22d420;
        case 0x22d424u: goto label_22d424;
        case 0x22d428u: goto label_22d428;
        case 0x22d42cu: goto label_22d42c;
        case 0x22d430u: goto label_22d430;
        case 0x22d434u: goto label_22d434;
        case 0x22d438u: goto label_22d438;
        case 0x22d43cu: goto label_22d43c;
        case 0x22d440u: goto label_22d440;
        case 0x22d444u: goto label_22d444;
        case 0x22d448u: goto label_22d448;
        case 0x22d44cu: goto label_22d44c;
        case 0x22d450u: goto label_22d450;
        case 0x22d454u: goto label_22d454;
        case 0x22d458u: goto label_22d458;
        case 0x22d45cu: goto label_22d45c;
        case 0x22d460u: goto label_22d460;
        case 0x22d464u: goto label_22d464;
        case 0x22d468u: goto label_22d468;
        case 0x22d46cu: goto label_22d46c;
        case 0x22d470u: goto label_22d470;
        case 0x22d474u: goto label_22d474;
        case 0x22d478u: goto label_22d478;
        case 0x22d47cu: goto label_22d47c;
        case 0x22d480u: goto label_22d480;
        case 0x22d484u: goto label_22d484;
        case 0x22d488u: goto label_22d488;
        case 0x22d48cu: goto label_22d48c;
        case 0x22d490u: goto label_22d490;
        case 0x22d494u: goto label_22d494;
        case 0x22d498u: goto label_22d498;
        case 0x22d49cu: goto label_22d49c;
        case 0x22d4a0u: goto label_22d4a0;
        case 0x22d4a4u: goto label_22d4a4;
        case 0x22d4a8u: goto label_22d4a8;
        case 0x22d4acu: goto label_22d4ac;
        case 0x22d4b0u: goto label_22d4b0;
        case 0x22d4b4u: goto label_22d4b4;
        case 0x22d4b8u: goto label_22d4b8;
        case 0x22d4bcu: goto label_22d4bc;
        case 0x22d4c0u: goto label_22d4c0;
        case 0x22d4c4u: goto label_22d4c4;
        case 0x22d4c8u: goto label_22d4c8;
        case 0x22d4ccu: goto label_22d4cc;
        case 0x22d4d0u: goto label_22d4d0;
        case 0x22d4d4u: goto label_22d4d4;
        case 0x22d4d8u: goto label_22d4d8;
        case 0x22d4dcu: goto label_22d4dc;
        case 0x22d4e0u: goto label_22d4e0;
        case 0x22d4e4u: goto label_22d4e4;
        case 0x22d4e8u: goto label_22d4e8;
        case 0x22d4ecu: goto label_22d4ec;
        case 0x22d4f0u: goto label_22d4f0;
        case 0x22d4f4u: goto label_22d4f4;
        case 0x22d4f8u: goto label_22d4f8;
        case 0x22d4fcu: goto label_22d4fc;
        case 0x22d500u: goto label_22d500;
        case 0x22d504u: goto label_22d504;
        case 0x22d508u: goto label_22d508;
        case 0x22d50cu: goto label_22d50c;
        case 0x22d510u: goto label_22d510;
        case 0x22d514u: goto label_22d514;
        case 0x22d518u: goto label_22d518;
        case 0x22d51cu: goto label_22d51c;
        case 0x22d520u: goto label_22d520;
        case 0x22d524u: goto label_22d524;
        case 0x22d528u: goto label_22d528;
        case 0x22d52cu: goto label_22d52c;
        case 0x22d530u: goto label_22d530;
        case 0x22d534u: goto label_22d534;
        case 0x22d538u: goto label_22d538;
        case 0x22d53cu: goto label_22d53c;
        case 0x22d540u: goto label_22d540;
        case 0x22d544u: goto label_22d544;
        case 0x22d548u: goto label_22d548;
        case 0x22d54cu: goto label_22d54c;
        case 0x22d550u: goto label_22d550;
        case 0x22d554u: goto label_22d554;
        case 0x22d558u: goto label_22d558;
        case 0x22d55cu: goto label_22d55c;
        case 0x22d560u: goto label_22d560;
        case 0x22d564u: goto label_22d564;
        case 0x22d568u: goto label_22d568;
        case 0x22d56cu: goto label_22d56c;
        case 0x22d570u: goto label_22d570;
        case 0x22d574u: goto label_22d574;
        case 0x22d578u: goto label_22d578;
        case 0x22d57cu: goto label_22d57c;
        case 0x22d580u: goto label_22d580;
        case 0x22d584u: goto label_22d584;
        case 0x22d588u: goto label_22d588;
        case 0x22d58cu: goto label_22d58c;
        case 0x22d590u: goto label_22d590;
        case 0x22d594u: goto label_22d594;
        case 0x22d598u: goto label_22d598;
        case 0x22d59cu: goto label_22d59c;
        case 0x22d5a0u: goto label_22d5a0;
        case 0x22d5a4u: goto label_22d5a4;
        case 0x22d5a8u: goto label_22d5a8;
        case 0x22d5acu: goto label_22d5ac;
        case 0x22d5b0u: goto label_22d5b0;
        case 0x22d5b4u: goto label_22d5b4;
        case 0x22d5b8u: goto label_22d5b8;
        case 0x22d5bcu: goto label_22d5bc;
        case 0x22d5c0u: goto label_22d5c0;
        case 0x22d5c4u: goto label_22d5c4;
        case 0x22d5c8u: goto label_22d5c8;
        case 0x22d5ccu: goto label_22d5cc;
        case 0x22d5d0u: goto label_22d5d0;
        case 0x22d5d4u: goto label_22d5d4;
        case 0x22d5d8u: goto label_22d5d8;
        case 0x22d5dcu: goto label_22d5dc;
        case 0x22d5e0u: goto label_22d5e0;
        case 0x22d5e4u: goto label_22d5e4;
        case 0x22d5e8u: goto label_22d5e8;
        case 0x22d5ecu: goto label_22d5ec;
        case 0x22d5f0u: goto label_22d5f0;
        case 0x22d5f4u: goto label_22d5f4;
        case 0x22d5f8u: goto label_22d5f8;
        case 0x22d5fcu: goto label_22d5fc;
        case 0x22d600u: goto label_22d600;
        case 0x22d604u: goto label_22d604;
        case 0x22d608u: goto label_22d608;
        case 0x22d60cu: goto label_22d60c;
        case 0x22d610u: goto label_22d610;
        case 0x22d614u: goto label_22d614;
        case 0x22d618u: goto label_22d618;
        case 0x22d61cu: goto label_22d61c;
        case 0x22d620u: goto label_22d620;
        case 0x22d624u: goto label_22d624;
        case 0x22d628u: goto label_22d628;
        case 0x22d62cu: goto label_22d62c;
        case 0x22d630u: goto label_22d630;
        case 0x22d634u: goto label_22d634;
        case 0x22d638u: goto label_22d638;
        case 0x22d63cu: goto label_22d63c;
        case 0x22d640u: goto label_22d640;
        case 0x22d644u: goto label_22d644;
        case 0x22d648u: goto label_22d648;
        case 0x22d64cu: goto label_22d64c;
        case 0x22d650u: goto label_22d650;
        case 0x22d654u: goto label_22d654;
        case 0x22d658u: goto label_22d658;
        case 0x22d65cu: goto label_22d65c;
        case 0x22d660u: goto label_22d660;
        case 0x22d664u: goto label_22d664;
        case 0x22d668u: goto label_22d668;
        case 0x22d66cu: goto label_22d66c;
        case 0x22d670u: goto label_22d670;
        case 0x22d674u: goto label_22d674;
        case 0x22d678u: goto label_22d678;
        case 0x22d67cu: goto label_22d67c;
        case 0x22d680u: goto label_22d680;
        case 0x22d684u: goto label_22d684;
        case 0x22d688u: goto label_22d688;
        case 0x22d68cu: goto label_22d68c;
        case 0x22d690u: goto label_22d690;
        case 0x22d694u: goto label_22d694;
        case 0x22d698u: goto label_22d698;
        case 0x22d69cu: goto label_22d69c;
        case 0x22d6a0u: goto label_22d6a0;
        case 0x22d6a4u: goto label_22d6a4;
        case 0x22d6a8u: goto label_22d6a8;
        case 0x22d6acu: goto label_22d6ac;
        case 0x22d6b0u: goto label_22d6b0;
        case 0x22d6b4u: goto label_22d6b4;
        case 0x22d6b8u: goto label_22d6b8;
        case 0x22d6bcu: goto label_22d6bc;
        case 0x22d6c0u: goto label_22d6c0;
        case 0x22d6c4u: goto label_22d6c4;
        case 0x22d6c8u: goto label_22d6c8;
        case 0x22d6ccu: goto label_22d6cc;
        case 0x22d6d0u: goto label_22d6d0;
        case 0x22d6d4u: goto label_22d6d4;
        case 0x22d6d8u: goto label_22d6d8;
        case 0x22d6dcu: goto label_22d6dc;
        case 0x22d6e0u: goto label_22d6e0;
        case 0x22d6e4u: goto label_22d6e4;
        case 0x22d6e8u: goto label_22d6e8;
        case 0x22d6ecu: goto label_22d6ec;
        case 0x22d6f0u: goto label_22d6f0;
        case 0x22d6f4u: goto label_22d6f4;
        case 0x22d6f8u: goto label_22d6f8;
        case 0x22d6fcu: goto label_22d6fc;
        case 0x22d700u: goto label_22d700;
        case 0x22d704u: goto label_22d704;
        case 0x22d708u: goto label_22d708;
        case 0x22d70cu: goto label_22d70c;
        case 0x22d710u: goto label_22d710;
        case 0x22d714u: goto label_22d714;
        case 0x22d718u: goto label_22d718;
        case 0x22d71cu: goto label_22d71c;
        case 0x22d720u: goto label_22d720;
        case 0x22d724u: goto label_22d724;
        case 0x22d728u: goto label_22d728;
        case 0x22d72cu: goto label_22d72c;
        case 0x22d730u: goto label_22d730;
        case 0x22d734u: goto label_22d734;
        case 0x22d738u: goto label_22d738;
        case 0x22d73cu: goto label_22d73c;
        case 0x22d740u: goto label_22d740;
        case 0x22d744u: goto label_22d744;
        case 0x22d748u: goto label_22d748;
        case 0x22d74cu: goto label_22d74c;
        case 0x22d750u: goto label_22d750;
        case 0x22d754u: goto label_22d754;
        case 0x22d758u: goto label_22d758;
        case 0x22d75cu: goto label_22d75c;
        case 0x22d760u: goto label_22d760;
        case 0x22d764u: goto label_22d764;
        case 0x22d768u: goto label_22d768;
        case 0x22d76cu: goto label_22d76c;
        case 0x22d770u: goto label_22d770;
        case 0x22d774u: goto label_22d774;
        case 0x22d778u: goto label_22d778;
        case 0x22d77cu: goto label_22d77c;
        case 0x22d780u: goto label_22d780;
        case 0x22d784u: goto label_22d784;
        case 0x22d788u: goto label_22d788;
        case 0x22d78cu: goto label_22d78c;
        case 0x22d790u: goto label_22d790;
        case 0x22d794u: goto label_22d794;
        case 0x22d798u: goto label_22d798;
        case 0x22d79cu: goto label_22d79c;
        case 0x22d7a0u: goto label_22d7a0;
        case 0x22d7a4u: goto label_22d7a4;
        case 0x22d7a8u: goto label_22d7a8;
        case 0x22d7acu: goto label_22d7ac;
        case 0x22d7b0u: goto label_22d7b0;
        case 0x22d7b4u: goto label_22d7b4;
        case 0x22d7b8u: goto label_22d7b8;
        case 0x22d7bcu: goto label_22d7bc;
        case 0x22d7c0u: goto label_22d7c0;
        case 0x22d7c4u: goto label_22d7c4;
        case 0x22d7c8u: goto label_22d7c8;
        case 0x22d7ccu: goto label_22d7cc;
        case 0x22d7d0u: goto label_22d7d0;
        case 0x22d7d4u: goto label_22d7d4;
        case 0x22d7d8u: goto label_22d7d8;
        case 0x22d7dcu: goto label_22d7dc;
        case 0x22d7e0u: goto label_22d7e0;
        case 0x22d7e4u: goto label_22d7e4;
        case 0x22d7e8u: goto label_22d7e8;
        case 0x22d7ecu: goto label_22d7ec;
        case 0x22d7f0u: goto label_22d7f0;
        case 0x22d7f4u: goto label_22d7f4;
        case 0x22d7f8u: goto label_22d7f8;
        case 0x22d7fcu: goto label_22d7fc;
        case 0x22d800u: goto label_22d800;
        case 0x22d804u: goto label_22d804;
        case 0x22d808u: goto label_22d808;
        case 0x22d80cu: goto label_22d80c;
        case 0x22d810u: goto label_22d810;
        case 0x22d814u: goto label_22d814;
        case 0x22d818u: goto label_22d818;
        case 0x22d81cu: goto label_22d81c;
        case 0x22d820u: goto label_22d820;
        case 0x22d824u: goto label_22d824;
        case 0x22d828u: goto label_22d828;
        case 0x22d82cu: goto label_22d82c;
        case 0x22d830u: goto label_22d830;
        case 0x22d834u: goto label_22d834;
        case 0x22d838u: goto label_22d838;
        case 0x22d83cu: goto label_22d83c;
        case 0x22d840u: goto label_22d840;
        case 0x22d844u: goto label_22d844;
        case 0x22d848u: goto label_22d848;
        case 0x22d84cu: goto label_22d84c;
        case 0x22d850u: goto label_22d850;
        case 0x22d854u: goto label_22d854;
        case 0x22d858u: goto label_22d858;
        case 0x22d85cu: goto label_22d85c;
        default: return;
    }

label_22d090:
    // 0x22d090: 0x91640096  lbu         $a0, 0x96($t3)
    ctx->pc = 0x22d090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 150)));
label_22d094:
    // 0x22d094: 0x148a0019  bne         $a0, $t2, . + 4 + (0x19 << 2)
label_22d098:
    if (ctx->pc == 0x22D098u) {
        ctx->pc = 0x22D09Cu;
        goto label_22d09c;
    }
    ctx->pc = 0x22D094u;
    {
        const bool branch_taken_0x22d094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        if (branch_taken_0x22d094) {
            ctx->pc = 0x22D0FCu;
            goto label_22d0fc;
        }
    }
    ctx->pc = 0x22D09Cu;
label_22d09c:
    // 0x22d09c: 0x9164009d  lbu         $a0, 0x9D($t3)
    ctx->pc = 0x22d09cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 157)));
label_22d0a0:
    // 0x22d0a0: 0x1089000f  beq         $a0, $t1, . + 4 + (0xF << 2)
label_22d0a4:
    if (ctx->pc == 0x22D0A4u) {
        ctx->pc = 0x22D0A8u;
        goto label_22d0a8;
    }
    ctx->pc = 0x22D0A0u;
    {
        const bool branch_taken_0x22d0a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x22d0a0) {
            ctx->pc = 0x22D0E0u;
            goto label_22d0e0;
        }
    }
    ctx->pc = 0x22D0A8u;
label_22d0a8:
    // 0x22d0a8: 0x1088000b  beq         $a0, $t0, . + 4 + (0xB << 2)
label_22d0ac:
    if (ctx->pc == 0x22D0ACu) {
        ctx->pc = 0x22D0B0u;
        goto label_22d0b0;
    }
    ctx->pc = 0x22D0A8u;
    {
        const bool branch_taken_0x22d0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x22d0a8) {
            ctx->pc = 0x22D0D8u;
            goto label_22d0d8;
        }
    }
    ctx->pc = 0x22D0B0u;
label_22d0b0:
    // 0x22d0b0: 0x10870007  beq         $a0, $a3, . + 4 + (0x7 << 2)
label_22d0b4:
    if (ctx->pc == 0x22D0B4u) {
        ctx->pc = 0x22D0B8u;
        goto label_22d0b8;
    }
    ctx->pc = 0x22D0B0u;
    {
        const bool branch_taken_0x22d0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x22d0b0) {
            ctx->pc = 0x22D0D0u;
            goto label_22d0d0;
        }
    }
    ctx->pc = 0x22D0B8u;
label_22d0b8:
    // 0x22d0b8: 0x10860003  beq         $a0, $a2, . + 4 + (0x3 << 2)
label_22d0bc:
    if (ctx->pc == 0x22D0BCu) {
        ctx->pc = 0x22D0C0u;
        goto label_22d0c0;
    }
    ctx->pc = 0x22D0B8u;
    {
        const bool branch_taken_0x22d0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x22d0b8) {
            ctx->pc = 0x22D0C8u;
            goto label_22d0c8;
        }
    }
    ctx->pc = 0x22D0C0u;
label_22d0c0:
    // 0x22d0c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_22d0c4:
    if (ctx->pc == 0x22D0C4u) {
        ctx->pc = 0x22D0C8u;
        goto label_22d0c8;
    }
    ctx->pc = 0x22D0C0u;
    {
        const bool branch_taken_0x22d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d0c0) {
            ctx->pc = 0x22D0E4u;
            goto label_22d0e4;
        }
    }
    ctx->pc = 0x22D0C8u;
label_22d0c8:
    // 0x22d0c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_22d0cc:
    if (ctx->pc == 0x22D0CCu) {
        ctx->pc = 0x22D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0C8u;
        // 0x22d0cc: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D0D0u;
        goto label_22d0d0;
    }
    ctx->pc = 0x22D0C8u;
    {
        const bool branch_taken_0x22d0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0C8u;
        // 0x22d0cc: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0c8) {
            ctx->pc = 0x22D0E4u;
            goto label_22d0e4;
        }
    }
    ctx->pc = 0x22D0D0u;
label_22d0d0:
    // 0x22d0d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_22d0d4:
    if (ctx->pc == 0x22D0D4u) {
        ctx->pc = 0x22D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D0u;
        // 0x22d0d4: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D0D8u;
        goto label_22d0d8;
    }
    ctx->pc = 0x22D0D0u;
    {
        const bool branch_taken_0x22d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D0u;
        // 0x22d0d4: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0d0) {
            ctx->pc = 0x22D0E4u;
            goto label_22d0e4;
        }
    }
    ctx->pc = 0x22D0D8u;
label_22d0d8:
    // 0x22d0d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_22d0dc:
    if (ctx->pc == 0x22D0DCu) {
        ctx->pc = 0x22D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D8u;
        // 0x22d0dc: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D0E0u;
        goto label_22d0e0;
    }
    ctx->pc = 0x22D0D8u;
    {
        const bool branch_taken_0x22d0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D8u;
        // 0x22d0dc: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0d8) {
            ctx->pc = 0x22D0E4u;
            goto label_22d0e4;
        }
    }
    ctx->pc = 0x22D0E0u;
label_22d0e0:
    // 0x22d0e0: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x22d0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_22d0e4:
    // 0x22d0e4: 0x0  nop
    ctx->pc = 0x22d0e4u;
    // NOP
label_22d0e8:
    // 0x22d0e8: 0x702024  and         $a0, $v1, $s0
    ctx->pc = 0x22d0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_22d0ec:
    // 0x22d0ec: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x22d0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_22d0f0:
    // 0x22d0f0: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x22d0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_22d0f4:
    // 0x22d0f4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_22d0f8:
    if (ctx->pc == 0x22D0F8u) {
        ctx->pc = 0x22D0FCu;
        goto label_22d0fc;
    }
    ctx->pc = 0x22D0F4u;
    {
        const bool branch_taken_0x22d0f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d0f4) {
            ctx->pc = 0x22D110u;
            goto label_22d110;
        }
    }
    ctx->pc = 0x22D0FCu;
label_22d0fc:
    // 0x22d0fc: 0x0  nop
    ctx->pc = 0x22d0fcu;
    // NOP
label_22d100:
    // 0x22d100: 0x8d6b0084  lw          $t3, 0x84($t3)
    ctx->pc = 0x22d100u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
label_22d104:
    // 0x22d104: 0x0  nop
    ctx->pc = 0x22d104u;
    // NOP
label_22d108:
    // 0x22d108: 0x1560ffe1  bnez        $t3, . + 4 + (-0x1F << 2)
label_22d10c:
    if (ctx->pc == 0x22D10Cu) {
        ctx->pc = 0x22D110u;
        goto label_22d110;
    }
    ctx->pc = 0x22D108u;
    {
        const bool branch_taken_0x22d108 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d108) {
            ctx->pc = 0x22D090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d090;
        }
    }
    ctx->pc = 0x22D110u;
label_22d110:
    // 0x22d110: 0x702024  and         $a0, $v1, $s0
    ctx->pc = 0x22d110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_22d114:
    // 0x22d114: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x22d114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_22d118:
    // 0x22d118: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x22d118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_22d11c:
    // 0x22d11c: 0x10800068  beqz        $a0, . + 4 + (0x68 << 2)
label_22d120:
    if (ctx->pc == 0x22D120u) {
        ctx->pc = 0x22D124u;
        goto label_22d124;
    }
    ctx->pc = 0x22D11Cu;
    {
        const bool branch_taken_0x22d11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d11c) {
            ctx->pc = 0x22D2C0u;
            goto label_22d2c0;
        }
    }
    ctx->pc = 0x22D124u;
label_22d124:
    // 0x22d124: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_22d128:
    if (ctx->pc == 0x22D128u) {
        ctx->pc = 0x22D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D124u;
        // 0x22d128: 0x3c02c1c8  lui         $v0, 0xC1C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49608 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D12Cu;
        goto label_22d12c;
    }
    ctx->pc = 0x22D124u;
    {
        const bool branch_taken_0x22d124 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D124u;
        // 0x22d128: 0x3c02c1c8  lui         $v0, 0xC1C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d124) {
            ctx->pc = 0x22D13Cu;
            goto label_22d13c;
        }
    }
    ctx->pc = 0x22D12Cu;
label_22d12c:
    // 0x22d12c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x22d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_22d130:
    // 0x22d130: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d134:
    // 0x22d134: 0x10000003  b           . + 4 + (0x3 << 2)
label_22d138:
    if (ctx->pc == 0x22D138u) {
        ctx->pc = 0x22D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D134u;
        // 0x22d138: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D13Cu;
        goto label_22d13c;
    }
    ctx->pc = 0x22D134u;
    {
        const bool branch_taken_0x22d134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D134u;
        // 0x22d138: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d134) {
            ctx->pc = 0x22D144u;
            goto label_22d144;
        }
    }
    ctx->pc = 0x22D13Cu;
label_22d13c:
    // 0x22d13c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d140:
    // 0x22d140: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d144:
    // 0x22d144: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x22d144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_22d148:
    // 0x22d148: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d14c:
    // 0x22d14c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x22d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_22d150:
    // 0x22d150: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d154:
    // 0x22d154: 0x0  nop
    ctx->pc = 0x22d154u;
    // NOP
label_22d158:
    // 0x22d158: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22d158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22d15c:
    // 0x22d15c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d160:
    // 0x22d160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d164:
    // 0x22d164: 0x0  nop
    ctx->pc = 0x22d164u;
    // NOP
label_22d168:
    // 0x22d168: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d168u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d16c:
    // 0x22d16c: 0x0  nop
    ctx->pc = 0x22d16cu;
    // NOP
label_22d170:
    // 0x22d170: 0x0  nop
    ctx->pc = 0x22d170u;
    // NOP
label_22d174:
    // 0x22d174: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_22d178:
    if (ctx->pc == 0x22D178u) {
        ctx->pc = 0x22D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D174u;
        // 0x22d178: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D17Cu;
        goto label_22d17c;
    }
    ctx->pc = 0x22D174u;
    {
        const bool branch_taken_0x22d174 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D174u;
        // 0x22d178: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d174) {
            ctx->pc = 0x22D18Cu;
            goto label_22d18c;
        }
    }
    ctx->pc = 0x22D17Cu;
label_22d17c:
    // 0x22d17c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x22d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_22d180:
    // 0x22d180: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d184:
    // 0x22d184: 0x10000004  b           . + 4 + (0x4 << 2)
label_22d188:
    if (ctx->pc == 0x22D188u) {
        ctx->pc = 0x22D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D184u;
        // 0x22d188: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D18Cu;
        goto label_22d18c;
    }
    ctx->pc = 0x22D184u;
    {
        const bool branch_taken_0x22d184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D184u;
        // 0x22d188: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d184) {
            ctx->pc = 0x22D198u;
            goto label_22d198;
        }
    }
    ctx->pc = 0x22D18Cu;
label_22d18c:
    // 0x22d18c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_22d190:
    // 0x22d190: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d194:
    // 0x22d194: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d198:
    // 0x22d198: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x22d198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_22d19c:
    // 0x22d19c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d1a0:
    // 0x22d1a0: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x22d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_22d1a4:
    // 0x22d1a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d1a8:
    // 0x22d1a8: 0x3c04c3bc  lui         $a0, 0xC3BC
    ctx->pc = 0x22d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50108 << 16));
label_22d1ac:
    // 0x22d1ac: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x22d1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_22d1b0:
    // 0x22d1b0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x22d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_22d1b4:
    // 0x22d1b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22d1b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22d1b8:
    // 0x22d1b8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d1bc:
    // 0x22d1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d1c0:
    // 0x22d1c0: 0x0  nop
    ctx->pc = 0x22d1c0u;
    // NOP
label_22d1c4:
    // 0x22d1c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d1c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d1c8:
    // 0x22d1c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22d1cc:
    // 0x22d1cc: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x22d1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_22d1d0:
    // 0x22d1d0: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x22d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_22d1d4:
    // 0x22d1d4: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x22d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_22d1d8:
    // 0x22d1d8: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x22d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_22d1dc:
    // 0x22d1dc: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x22d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_22d1e0:
    // 0x22d1e0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_22d1e4:
    // 0x22d1e4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x22d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_22d1e8:
    // 0x22d1e8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x22d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_22d1ec:
    // 0x22d1ec: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x22d1ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_22d1f0:
    // 0x22d1f0: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x22d1f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_22d1f4:
    // 0x22d1f4: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22d1f4u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22d1f8:
    // 0x22d1f8: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22d1f8u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22d1fc:
    // 0x22d1fc: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x22d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22d200:
    // 0x22d200: 0xfa110010  sqc2        $vf17, 0x10($s0)
    ctx->pc = 0x22d200u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22d204:
    // 0x22d204: 0xfa120020  sqc2        $vf18, 0x20($s0)
    ctx->pc = 0x22d204u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22d208:
    // 0x22d208: 0xfa130030  sqc2        $vf19, 0x30($s0)
    ctx->pc = 0x22d208u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22d20c:
    // 0x22d20c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x22d20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22d210:
    // 0x22d210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d214:
    // 0x22d214: 0xc066d86  jal         func_19B618
label_22d218:
    if (ctx->pc == 0x22D218u) {
        ctx->pc = 0x22D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D214u;
        // 0x22d218: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D21Cu;
        goto label_22d21c;
    }
    ctx->pc = 0x22D214u;
    SET_GPR_U32(ctx, 31, 0x22D21Cu);
    ctx->pc = 0x22D218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D214u;
    // 0x22d218: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x22D21Cu;
label_22d21c:
    // 0x22d21c: 0x3c02c3c1  lui         $v0, 0xC3C1
    ctx->pc = 0x22d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50113 << 16));
label_22d220:
    // 0x22d220: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x22d220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_22d224:
    // 0x22d224: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22d224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_22d228:
    // 0x22d228: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x22d228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_22d22c:
    // 0x22d22c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_22d230:
    // 0x22d230: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x22d230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_22d234:
    // 0x22d234: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22d238:
    // 0x22d238: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22d238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_22d23c:
    // 0x22d23c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x22d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_22d240:
    // 0x22d240: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22d240u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22d244:
    // 0x22d244: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d244u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d248:
    // 0x22d248: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22d248u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22d24c:
    // 0x22d24c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22d24cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22d250:
    // 0x22d250: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x22d250u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22d254:
    // 0x22d254: 0xfa310010  sqc2        $vf17, 0x10($s1)
    ctx->pc = 0x22d254u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22d258:
    // 0x22d258: 0xfa320020  sqc2        $vf18, 0x20($s1)
    ctx->pc = 0x22d258u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22d25c:
    // 0x22d25c: 0xfa330030  sqc2        $vf19, 0x30($s1)
    ctx->pc = 0x22d25cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22d260:
    // 0x22d260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d264:
    // 0x22d264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d268:
    // 0x22d268: 0xc066d86  jal         func_19B618
label_22d26c:
    if (ctx->pc == 0x22D26Cu) {
        ctx->pc = 0x22D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D268u;
        // 0x22d26c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D270u;
        goto label_22d270;
    }
    ctx->pc = 0x22D268u;
    SET_GPR_U32(ctx, 31, 0x22D270u);
    ctx->pc = 0x22D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D268u;
    // 0x22d26c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x22D270u;
label_22d270:
    // 0x22d270: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x22d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_22d274:
    // 0x22d274: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x22d274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_22d278:
    // 0x22d278: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x22d278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_22d27c:
    // 0x22d27c: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x22d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_22d280:
    // 0x22d280: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22d284:
    // 0x22d284: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x22d284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_22d288:
    // 0x22d288: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22d288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_22d28c:
    // 0x22d28c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x22d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_22d290:
    // 0x22d290: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22d290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22d294:
    // 0x22d294: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d294u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d298:
    // 0x22d298: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22d298u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22d29c:
    // 0x22d29c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22d29cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22d2a0:
    // 0x22d2a0: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x22d2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22d2a4:
    // 0x22d2a4: 0xfa510010  sqc2        $vf17, 0x10($s2)
    ctx->pc = 0x22d2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22d2a8:
    // 0x22d2a8: 0xfa520020  sqc2        $vf18, 0x20($s2)
    ctx->pc = 0x22d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22d2ac:
    // 0x22d2ac: 0xfa530030  sqc2        $vf19, 0x30($s2)
    ctx->pc = 0x22d2acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22d2b0:
    // 0x22d2b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d2b4:
    // 0x22d2b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d2b8:
    // 0x22d2b8: 0xc066d86  jal         func_19B618
label_22d2bc:
    if (ctx->pc == 0x22D2BCu) {
        ctx->pc = 0x22D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2B8u;
        // 0x22d2bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2C0u;
        goto label_22d2c0;
    }
    ctx->pc = 0x22D2B8u;
    SET_GPR_U32(ctx, 31, 0x22D2C0u);
    ctx->pc = 0x22D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D2B8u;
    // 0x22d2bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x22D2C0u;
label_22d2c0:
    // 0x22d2c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22d2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22d2c4:
    // 0x22d2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d2c8:
    // 0x22d2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d2cc:
    // 0x22d2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22d2d0:
    // 0x22d2d0: 0x3e00008  jr          $ra
label_22d2d4:
    if (ctx->pc == 0x22D2D4u) {
        ctx->pc = 0x22D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2D0u;
        // 0x22d2d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2D8u;
        goto label_22d2d8;
    }
    ctx->pc = 0x22D2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2D0u;
        // 0x22d2d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D2D8u;
label_22d2d8:
    // 0x22d2d8: 0x0  nop
    ctx->pc = 0x22d2d8u;
    // NOP
label_22d2dc:
    // 0x22d2dc: 0x0  nop
    ctx->pc = 0x22d2dcu;
    // NOP
label_22d2e0:
    // 0x22d2e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22d2e4:
    // 0x22d2e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22d2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22d2e8:
    // 0x22d2e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22d2ec:
    // 0x22d2ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22d2f0:
    // 0x22d2f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22d2f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d2f4:
    // 0x22d2f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22d2f8:
    // 0x22d2f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22d2f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d2fc:
    // 0x22d2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22d300:
    // 0x22d300: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22d300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d304:
    // 0x22d304: 0x8f8985d0  lw          $t1, -0x7A30($gp)
    ctx->pc = 0x22d304u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22d308:
    // 0x22d308: 0x11200026  beqz        $t1, . + 4 + (0x26 << 2)
label_22d30c:
    if (ctx->pc == 0x22D30Cu) {
        ctx->pc = 0x22D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D308u;
        // 0x22d30c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D310u;
        goto label_22d310;
    }
    ctx->pc = 0x22D308u;
    {
        const bool branch_taken_0x22d308 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D308u;
        // 0x22d30c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d308) {
            ctx->pc = 0x22D3A4u;
            goto label_22d3a4;
        }
    }
    ctx->pc = 0x22D310u;
label_22d310:
    // 0x22d310: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x22d310u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22d314:
    // 0x22d314: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x22d314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_22d318:
    // 0x22d318: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x22d318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_22d31c:
    // 0x22d31c: 0x24060085  addiu       $a2, $zero, 0x85
    ctx->pc = 0x22d31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_22d320:
    // 0x22d320: 0x24070086  addiu       $a3, $zero, 0x86
    ctx->pc = 0x22d320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_22d324:
    // 0x22d324: 0x91230096  lbu         $v1, 0x96($t1)
    ctx->pc = 0x22d324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 150)));
label_22d328:
    // 0x22d328: 0x1468001a  bne         $v1, $t0, . + 4 + (0x1A << 2)
label_22d32c:
    if (ctx->pc == 0x22D32Cu) {
        ctx->pc = 0x22D330u;
        goto label_22d330;
    }
    ctx->pc = 0x22D328u;
    {
        const bool branch_taken_0x22d328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x22d328) {
            ctx->pc = 0x22D394u;
            goto label_22d394;
        }
    }
    ctx->pc = 0x22D330u;
label_22d330:
    // 0x22d330: 0x9123009d  lbu         $v1, 0x9D($t1)
    ctx->pc = 0x22d330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 157)));
label_22d334:
    // 0x22d334: 0x10670010  beq         $v1, $a3, . + 4 + (0x10 << 2)
label_22d338:
    if (ctx->pc == 0x22D338u) {
        ctx->pc = 0x22D33Cu;
        goto label_22d33c;
    }
    ctx->pc = 0x22D334u;
    {
        const bool branch_taken_0x22d334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x22d334) {
            ctx->pc = 0x22D378u;
            goto label_22d378;
        }
    }
    ctx->pc = 0x22D33Cu;
label_22d33c:
    // 0x22d33c: 0x1066000c  beq         $v1, $a2, . + 4 + (0xC << 2)
label_22d340:
    if (ctx->pc == 0x22D340u) {
        ctx->pc = 0x22D344u;
        goto label_22d344;
    }
    ctx->pc = 0x22D33Cu;
    {
        const bool branch_taken_0x22d33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x22d33c) {
            ctx->pc = 0x22D370u;
            goto label_22d370;
        }
    }
    ctx->pc = 0x22D344u;
label_22d344:
    // 0x22d344: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
label_22d348:
    if (ctx->pc == 0x22D348u) {
        ctx->pc = 0x22D34Cu;
        goto label_22d34c;
    }
    ctx->pc = 0x22D344u;
    {
        const bool branch_taken_0x22d344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x22d344) {
            ctx->pc = 0x22D368u;
            goto label_22d368;
        }
    }
    ctx->pc = 0x22D34Cu;
label_22d34c:
    // 0x22d34c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_22d350:
    if (ctx->pc == 0x22D350u) {
        ctx->pc = 0x22D354u;
        goto label_22d354;
    }
    ctx->pc = 0x22D34Cu;
    {
        const bool branch_taken_0x22d34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x22d34c) {
            ctx->pc = 0x22D35Cu;
            goto label_22d35c;
        }
    }
    ctx->pc = 0x22D354u;
label_22d354:
    // 0x22d354: 0x10000009  b           . + 4 + (0x9 << 2)
label_22d358:
    if (ctx->pc == 0x22D358u) {
        ctx->pc = 0x22D35Cu;
        goto label_22d35c;
    }
    ctx->pc = 0x22D354u;
    {
        const bool branch_taken_0x22d354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d354) {
            ctx->pc = 0x22D37Cu;
            goto label_22d37c;
        }
    }
    ctx->pc = 0x22D35Cu;
label_22d35c:
    // 0x22d35c: 0x0  nop
    ctx->pc = 0x22d35cu;
    // NOP
label_22d360:
    // 0x22d360: 0x10000006  b           . + 4 + (0x6 << 2)
label_22d364:
    if (ctx->pc == 0x22D364u) {
        ctx->pc = 0x22D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D360u;
        // 0x22d364: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D368u;
        goto label_22d368;
    }
    ctx->pc = 0x22D360u;
    {
        const bool branch_taken_0x22d360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D360u;
        // 0x22d364: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d360) {
            ctx->pc = 0x22D37Cu;
            goto label_22d37c;
        }
    }
    ctx->pc = 0x22D368u;
label_22d368:
    // 0x22d368: 0x10000004  b           . + 4 + (0x4 << 2)
label_22d36c:
    if (ctx->pc == 0x22D36Cu) {
        ctx->pc = 0x22D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D368u;
        // 0x22d36c: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D370u;
        goto label_22d370;
    }
    ctx->pc = 0x22D368u;
    {
        const bool branch_taken_0x22d368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D368u;
        // 0x22d36c: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d368) {
            ctx->pc = 0x22D37Cu;
            goto label_22d37c;
        }
    }
    ctx->pc = 0x22D370u;
label_22d370:
    // 0x22d370: 0x10000002  b           . + 4 + (0x2 << 2)
label_22d374:
    if (ctx->pc == 0x22D374u) {
        ctx->pc = 0x22D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D370u;
        // 0x22d374: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D378u;
        goto label_22d378;
    }
    ctx->pc = 0x22D370u;
    {
        const bool branch_taken_0x22d370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D370u;
        // 0x22d374: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d370) {
            ctx->pc = 0x22D37Cu;
            goto label_22d37c;
        }
    }
    ctx->pc = 0x22D378u;
label_22d378:
    // 0x22d378: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x22d378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_22d37c:
    // 0x22d37c: 0x0  nop
    ctx->pc = 0x22d37cu;
    // NOP
label_22d380:
    // 0x22d380: 0x2321824  and         $v1, $s1, $s2
    ctx->pc = 0x22d380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 18));
label_22d384:
    // 0x22d384: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x22d384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
label_22d388:
    // 0x22d388: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x22d388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_22d38c:
    // 0x22d38c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_22d390:
    if (ctx->pc == 0x22D390u) {
        ctx->pc = 0x22D394u;
        goto label_22d394;
    }
    ctx->pc = 0x22D38Cu;
    {
        const bool branch_taken_0x22d38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d38c) {
            ctx->pc = 0x22D3A4u;
            goto label_22d3a4;
        }
    }
    ctx->pc = 0x22D394u;
label_22d394:
    // 0x22d394: 0x0  nop
    ctx->pc = 0x22d394u;
    // NOP
label_22d398:
    // 0x22d398: 0x8d290084  lw          $t1, 0x84($t1)
    ctx->pc = 0x22d398u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 132)));
label_22d39c:
    // 0x22d39c: 0x1520ffe1  bnez        $t1, . + 4 + (-0x1F << 2)
label_22d3a0:
    if (ctx->pc == 0x22D3A0u) {
        ctx->pc = 0x22D3A4u;
        goto label_22d3a4;
    }
    ctx->pc = 0x22D39Cu;
    {
        const bool branch_taken_0x22d39c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d39c) {
            ctx->pc = 0x22D324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d324;
        }
    }
    ctx->pc = 0x22D3A4u;
label_22d3a4:
    // 0x22d3a4: 0x0  nop
    ctx->pc = 0x22d3a4u;
    // NOP
label_22d3a8:
    // 0x22d3a8: 0x2321824  and         $v1, $s1, $s2
    ctx->pc = 0x22d3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 18));
label_22d3ac:
    // 0x22d3ac: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x22d3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
label_22d3b0:
    // 0x22d3b0: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x22d3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_22d3b4:
    // 0x22d3b4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_22d3b8:
    if (ctx->pc == 0x22D3B8u) {
        ctx->pc = 0x22D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3B4u;
        // 0x22d3b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D3BCu;
        goto label_22d3bc;
    }
    ctx->pc = 0x22D3B4u;
    {
        const bool branch_taken_0x22d3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3B4u;
        // 0x22d3b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3b4) {
            ctx->pc = 0x22D3ECu;
            goto label_22d3ec;
        }
    }
    ctx->pc = 0x22D3BCu;
label_22d3bc:
    // 0x22d3bc: 0xc0590dc  jal         func_164370
label_22d3c0:
    if (ctx->pc == 0x22D3C0u) {
        ctx->pc = 0x22D3C4u;
        goto label_22d3c4;
    }
    ctx->pc = 0x22D3BCu;
    SET_GPR_U32(ctx, 31, 0x22D3C4u);
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22D3BCu, 0x22D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3C4u;
label_22d3c4:
    // 0x22d3c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22d3c8:
    if (ctx->pc == 0x22D3C8u) {
        ctx->pc = 0x22D3CCu;
        goto label_22d3cc;
    }
    ctx->pc = 0x22D3C4u;
    {
        const bool branch_taken_0x22d3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d3c4) {
            ctx->pc = 0x22D3ECu;
            goto label_22d3ec;
        }
    }
    ctx->pc = 0x22D3CCu;
label_22d3cc:
    // 0x22d3cc: 0xac510050  sw          $s1, 0x50($v0)
    ctx->pc = 0x22d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 17));
label_22d3d0:
    // 0x22d3d0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_22d3d4:
    // 0x22d3d4: 0xac520054  sw          $s2, 0x54($v0)
    ctx->pc = 0x22d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 18));
label_22d3d8:
    // 0x22d3d8: 0x2463d410  addiu       $v1, $v1, -0x2BF0
    ctx->pc = 0x22d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956048));
label_22d3dc:
    // 0x22d3dc: 0xac530058  sw          $s3, 0x58($v0)
    ctx->pc = 0x22d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 19));
label_22d3e0:
    // 0x22d3e0: 0xac50005c  sw          $s0, 0x5C($v0)
    ctx->pc = 0x22d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 16));
label_22d3e4:
    // 0x22d3e4: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x22d3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
label_22d3e8:
    // 0x22d3e8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x22d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_22d3ec:
    // 0x22d3ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22d3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22d3f0:
    // 0x22d3f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22d3f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22d3f4:
    // 0x22d3f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d3f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d3f8:
    // 0x22d3f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d3fc:
    // 0x22d3fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22d400:
    // 0x22d400: 0x3e00008  jr          $ra
label_22d404:
    if (ctx->pc == 0x22D404u) {
        ctx->pc = 0x22D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D400u;
        // 0x22d404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D408u;
        goto label_22d408;
    }
    ctx->pc = 0x22D400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D400u;
        // 0x22d404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D408u;
label_22d408:
    // 0x22d408: 0x0  nop
    ctx->pc = 0x22d408u;
    // NOP
label_22d40c:
    // 0x22d40c: 0x0  nop
    ctx->pc = 0x22d40cu;
    // NOP
label_22d410:
    // 0x22d410: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22d414:
    // 0x22d414: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22d414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22d418:
    // 0x22d418: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22d41c:
    // 0x22d41c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d420:
    // 0x22d420: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22d424:
    // 0x22d424: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22d428:
    // 0x22d428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22d42c:
    // 0x22d42c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22d430:
    // 0x22d430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22d434:
    // 0x22d434: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x22d434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22d438:
    // 0x22d438: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22d43c:
    if (ctx->pc == 0x22D43Cu) {
        ctx->pc = 0x22D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D438u;
        // 0x22d43c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D440u;
        goto label_22d440;
    }
    ctx->pc = 0x22D438u;
    {
        const bool branch_taken_0x22d438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D438u;
        // 0x22d43c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d438) {
            ctx->pc = 0x22D448u;
            goto label_22d448;
        }
    }
    ctx->pc = 0x22D440u;
label_22d440:
    // 0x22d440: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_22d444:
    if (ctx->pc == 0x22D444u) {
        ctx->pc = 0x22D448u;
        goto label_22d448;
    }
    ctx->pc = 0x22D440u;
    {
        const bool branch_taken_0x22d440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d440) {
            ctx->pc = 0x22D458u;
            goto label_22d458;
        }
    }
    ctx->pc = 0x22D448u;
label_22d448:
    // 0x22d448: 0xc0591f4  jal         func_1647D0
label_22d44c:
    if (ctx->pc == 0x22D44Cu) {
        ctx->pc = 0x22D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D448u;
        // 0x22d44c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D450u;
        goto label_22d450;
    }
    ctx->pc = 0x22D448u;
    SET_GPR_U32(ctx, 31, 0x22D450u);
    ctx->pc = 0x22D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D448u;
    // 0x22d44c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22D448u, 0x22D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D450u;
label_22d450:
    // 0x22d450: 0x1000013b  b           . + 4 + (0x13B << 2)
label_22d454:
    if (ctx->pc == 0x22D454u) {
        ctx->pc = 0x22D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D450u;
        // 0x22d454: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D458u;
        goto label_22d458;
    }
    ctx->pc = 0x22D450u;
    {
        const bool branch_taken_0x22d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D450u;
        // 0x22d454: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d450) {
            ctx->pc = 0x22D940u;
            { ctx->pc = 0x22d940; return; }
        }
    }
    ctx->pc = 0x22D458u;
label_22d458:
    // 0x22d458: 0x96900012  lhu         $s0, 0x12($s4)
    ctx->pc = 0x22d458u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_22d45c:
    // 0x22d45c: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x22d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_22d460:
    // 0x22d460: 0x8e910054  lw          $s1, 0x54($s4)
    ctx->pc = 0x22d460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_22d464:
    // 0x22d464: 0x8e920058  lw          $s2, 0x58($s4)
    ctx->pc = 0x22d464u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_22d468:
    // 0x22d468: 0x8e93005c  lw          $s3, 0x5C($s4)
    ctx->pc = 0x22d468u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_22d46c:
    // 0x22d46c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x22d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22d470:
    // 0x22d470: 0x2a010033  slti        $at, $s0, 0x33
    ctx->pc = 0x22d470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)51) ? 1 : 0);
label_22d474:
    // 0x22d474: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_22d478:
    if (ctx->pc == 0x22D478u) {
        ctx->pc = 0x22D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D474u;
        // 0x22d478: 0xa6820012  sh          $v0, 0x12($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D47Cu;
        goto label_22d47c;
    }
    ctx->pc = 0x22D474u;
    {
        const bool branch_taken_0x22d474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D474u;
        // 0x22d478: 0xa6820012  sh          $v0, 0x12($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d474) {
            ctx->pc = 0x22D4D8u;
            goto label_22d4d8;
        }
    }
    ctx->pc = 0x22D47Cu;
label_22d47c:
    // 0x22d47c: 0x2102018  mult        $a0, $s0, $s0
    ctx->pc = 0x22d47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_22d480:
    // 0x22d480: 0x3c023d44  lui         $v0, 0x3D44
    ctx->pc = 0x22d480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15684 << 16));
label_22d484:
    // 0x22d484: 0x34429ba5  ori         $v0, $v0, 0x9BA5
    ctx->pc = 0x22d484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39845);
label_22d488:
    // 0x22d488: 0x3c03c1c8  lui         $v1, 0xC1C8
    ctx->pc = 0x22d488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49608 << 16));
label_22d48c:
    // 0x22d48c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d490:
    // 0x22d490: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22d490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d494:
    // 0x22d494: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x22d494u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22d498:
    // 0x22d498: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d49c:
    // 0x22d49c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x22d49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d4a0:
    // 0x22d4a0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22d4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_22d4a4:
    // 0x22d4a4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d4a8:
    // 0x22d4a8: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x22d4a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_22d4ac:
    // 0x22d4ac: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x22d4acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_22d4b0:
    // 0x22d4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d4b4:
    // 0x22d4b4: 0x0  nop
    ctx->pc = 0x22d4b4u;
    // NOP
label_22d4b8:
    // 0x22d4b8: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x22d4b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_22d4bc:
    // 0x22d4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d4c0:
    // 0x22d4c0: 0x0  nop
    ctx->pc = 0x22d4c0u;
    // NOP
label_22d4c4:
    // 0x22d4c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d4c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d4c8:
    // 0x22d4c8: 0x0  nop
    ctx->pc = 0x22d4c8u;
    // NOP
label_22d4cc:
    // 0x22d4cc: 0x0  nop
    ctx->pc = 0x22d4ccu;
    // NOP
label_22d4d0:
    // 0x22d4d0: 0x10000032  b           . + 4 + (0x32 << 2)
label_22d4d4:
    if (ctx->pc == 0x22D4D4u) {
        ctx->pc = 0x22D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4D0u;
        // 0x22d4d4: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4D8u;
        goto label_22d4d8;
    }
    ctx->pc = 0x22D4D0u;
    {
        const bool branch_taken_0x22d4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4D0u;
        // 0x22d4d4: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4d0) {
            ctx->pc = 0x22D59Cu;
            goto label_22d59c;
        }
    }
    ctx->pc = 0x22D4D8u;
label_22d4d8:
    // 0x22d4d8: 0x2a01003d  slti        $at, $s0, 0x3D
    ctx->pc = 0x22d4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)61) ? 1 : 0);
label_22d4dc:
    // 0x22d4dc: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_22d4e0:
    if (ctx->pc == 0x22D4E0u) {
        ctx->pc = 0x22D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4DCu;
        // 0x22d4e0: 0x2a010051  slti        $at, $s0, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4E4u;
        goto label_22d4e4;
    }
    ctx->pc = 0x22D4DCu;
    {
        const bool branch_taken_0x22d4dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4DCu;
        // 0x22d4e0: 0x2a010051  slti        $at, $s0, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d4dc) {
            ctx->pc = 0x22D544u;
            goto label_22d544;
        }
    }
    ctx->pc = 0x22D4E4u;
label_22d4e4:
    // 0x22d4e4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x22d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_22d4e8:
    // 0x22d4e8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x22d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_22d4ec:
    // 0x22d4ec: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x22d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22d4f0:
    // 0x22d4f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22d4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22d4f4:
    // 0x22d4f4: 0x632018  mult        $a0, $v1, $v1
    ctx->pc = 0x22d4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_22d4f8:
    // 0x22d4f8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x22d4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22d4fc:
    // 0x22d4fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d500:
    // 0x22d500: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x22d500u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_22d504:
    // 0x22d504: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x22d504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
label_22d508:
    // 0x22d508: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d50c:
    // 0x22d50c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x22d50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_22d510:
    // 0x22d510: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x22d510u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_22d514:
    // 0x22d514: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22d514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d518:
    // 0x22d518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d51c:
    // 0x22d51c: 0x460310c0  add.s       $f3, $f2, $f3
    ctx->pc = 0x22d51cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_22d520:
    // 0x22d520: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d524:
    // 0x22d524: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x22d524u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_22d528:
    // 0x22d528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d52c:
    // 0x22d52c: 0x0  nop
    ctx->pc = 0x22d52cu;
    // NOP
label_22d530:
    // 0x22d530: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d530u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d534:
    // 0x22d534: 0x0  nop
    ctx->pc = 0x22d534u;
    // NOP
label_22d538:
    // 0x22d538: 0x0  nop
    ctx->pc = 0x22d538u;
    // NOP
label_22d53c:
    // 0x22d53c: 0x10000017  b           . + 4 + (0x17 << 2)
label_22d540:
    if (ctx->pc == 0x22D540u) {
        ctx->pc = 0x22D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D53Cu;
        // 0x22d540: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D544u;
        goto label_22d544;
    }
    ctx->pc = 0x22D53Cu;
    {
        const bool branch_taken_0x22d53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D53Cu;
        // 0x22d540: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d53c) {
            ctx->pc = 0x22D59Cu;
            goto label_22d59c;
        }
    }
    ctx->pc = 0x22D544u;
label_22d544:
    // 0x22d544: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_22d548:
    if (ctx->pc == 0x22D548u) {
        ctx->pc = 0x22D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D544u;
        // 0x22d548: 0x2603ffc4  addiu       $v1, $s0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D54Cu;
        goto label_22d54c;
    }
    ctx->pc = 0x22D544u;
    {
        const bool branch_taken_0x22d544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D544u;
        // 0x22d548: 0x2603ffc4  addiu       $v1, $s0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d544) {
            ctx->pc = 0x22D59Cu;
            goto label_22d59c;
        }
    }
    ctx->pc = 0x22D54Cu;
label_22d54c:
    // 0x22d54c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x22d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_22d550:
    // 0x22d550: 0x632018  mult        $a0, $v1, $v1
    ctx->pc = 0x22d550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_22d554:
    // 0x22d554: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22d554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22d558:
    // 0x22d558: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d55c:
    // 0x22d55c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x22d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_22d560:
    // 0x22d560: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x22d560u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22d564:
    // 0x22d564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d568:
    // 0x22d568: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22d568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_22d56c:
    // 0x22d56c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d570:
    // 0x22d570: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x22d570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d574:
    // 0x22d574: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d578:
    // 0x22d578: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x22d578u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_22d57c:
    // 0x22d57c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x22d57cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_22d580:
    // 0x22d580: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d584:
    // 0x22d584: 0x0  nop
    ctx->pc = 0x22d584u;
    // NOP
label_22d588:
    // 0x22d588: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x22d588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_22d58c:
    // 0x22d58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d590:
    // 0x22d590: 0x0  nop
    ctx->pc = 0x22d590u;
    // NOP
label_22d594:
    // 0x22d594: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d594u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d598:
    // 0x22d598: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x22d598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_22d59c:
    // 0x22d59c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x22d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_22d5a0:
    // 0x22d5a0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d5a4:
    // 0x22d5a4: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x22d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_22d5a8:
    // 0x22d5a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d5ac:
    // 0x22d5ac: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x22d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d5b0:
    // 0x22d5b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d5b4:
    // 0x22d5b4: 0x0  nop
    ctx->pc = 0x22d5b4u;
    // NOP
label_22d5b8:
    // 0x22d5b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d5b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d5bc:
    // 0x22d5bc: 0x0  nop
    ctx->pc = 0x22d5bcu;
    // NOP
label_22d5c0:
    // 0x22d5c0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22d5c4:
    if (ctx->pc == 0x22D5C4u) {
        ctx->pc = 0x22D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5C0u;
        // 0x22d5c4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5C8u;
        goto label_22d5c8;
    }
    ctx->pc = 0x22D5C0u;
    {
        const bool branch_taken_0x22d5c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5C0u;
        // 0x22d5c4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5c0) {
            ctx->pc = 0x22D5DCu;
            goto label_22d5dc;
        }
    }
    ctx->pc = 0x22D5C8u;
label_22d5c8:
    // 0x22d5c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22d5cc:
    // 0x22d5cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d5d0:
    // 0x22d5d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d5d4:
    // 0x22d5d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_22d5d8:
    if (ctx->pc == 0x22D5D8u) {
        ctx->pc = 0x22D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5D4u;
        // 0x22d5d8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5DCu;
        goto label_22d5dc;
    }
    ctx->pc = 0x22D5D4u;
    {
        const bool branch_taken_0x22d5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5D4u;
        // 0x22d5d8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5d4) {
            ctx->pc = 0x22D60Cu;
            goto label_22d60c;
        }
    }
    ctx->pc = 0x22D5DCu;
label_22d5dc:
    // 0x22d5dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d5e0:
    // 0x22d5e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d5e4:
    // 0x22d5e4: 0x0  nop
    ctx->pc = 0x22d5e4u;
    // NOP
label_22d5e8:
    // 0x22d5e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d5e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d5ec:
    // 0x22d5ec: 0x0  nop
    ctx->pc = 0x22d5ecu;
    // NOP
label_22d5f0:
    // 0x22d5f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_22d5f4:
    if (ctx->pc == 0x22D5F4u) {
        ctx->pc = 0x22D5F8u;
        goto label_22d5f8;
    }
    ctx->pc = 0x22D5F0u;
    {
        const bool branch_taken_0x22d5f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d5f0) {
            ctx->pc = 0x22D60Cu;
            goto label_22d60c;
        }
    }
    ctx->pc = 0x22D5F8u;
label_22d5f8:
    // 0x22d5f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22d5fc:
    // 0x22d5fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d600:
    // 0x22d600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d604:
    // 0x22d604: 0x10000001  b           . + 4 + (0x1 << 2)
label_22d608:
    if (ctx->pc == 0x22D608u) {
        ctx->pc = 0x22D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D604u;
        // 0x22d608: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D60Cu;
        goto label_22d60c;
    }
    ctx->pc = 0x22D604u;
    {
        const bool branch_taken_0x22d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D604u;
        // 0x22d608: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d604) {
            ctx->pc = 0x22D60Cu;
            goto label_22d60c;
        }
    }
    ctx->pc = 0x22D60Cu;
label_22d60c:
    // 0x22d60c: 0x2a010033  slti        $at, $s0, 0x33
    ctx->pc = 0x22d60cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)51) ? 1 : 0);
label_22d610:
    // 0x22d610: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_22d614:
    if (ctx->pc == 0x22D614u) {
        ctx->pc = 0x22D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D610u;
        // 0x22d614: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D618u;
        goto label_22d618;
    }
    ctx->pc = 0x22D610u;
    {
        const bool branch_taken_0x22d610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D610u;
        // 0x22d614: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d610) {
            ctx->pc = 0x22D674u;
            goto label_22d674;
        }
    }
    ctx->pc = 0x22D618u;
label_22d618:
    // 0x22d618: 0x2102018  mult        $a0, $s0, $s0
    ctx->pc = 0x22d618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_22d61c:
    // 0x22d61c: 0x3c02bc03  lui         $v0, 0xBC03
    ctx->pc = 0x22d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48131 << 16));
label_22d620:
    // 0x22d620: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x22d620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_22d624:
    // 0x22d624: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x22d624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_22d628:
    // 0x22d628: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22d628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d62c:
    // 0x22d62c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22d62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d630:
    // 0x22d630: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x22d630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22d634:
    // 0x22d634: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d638:
    // 0x22d638: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x22d638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d63c:
    // 0x22d63c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x22d63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_22d640:
    // 0x22d640: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d644:
    // 0x22d644: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x22d644u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_22d648:
    // 0x22d648: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x22d648u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_22d64c:
    // 0x22d64c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d64cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d650:
    // 0x22d650: 0x0  nop
    ctx->pc = 0x22d650u;
    // NOP
label_22d654:
    // 0x22d654: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x22d654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_22d658:
    // 0x22d658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d65c:
    // 0x22d65c: 0x0  nop
    ctx->pc = 0x22d65cu;
    // NOP
label_22d660:
    // 0x22d660: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d660u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d664:
    // 0x22d664: 0x0  nop
    ctx->pc = 0x22d664u;
    // NOP
label_22d668:
    // 0x22d668: 0x0  nop
    ctx->pc = 0x22d668u;
    // NOP
label_22d66c:
    // 0x22d66c: 0x10000029  b           . + 4 + (0x29 << 2)
label_22d670:
    if (ctx->pc == 0x22D670u) {
        ctx->pc = 0x22D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D66Cu;
        // 0x22d670: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D674u;
        goto label_22d674;
    }
    ctx->pc = 0x22D66Cu;
    {
        const bool branch_taken_0x22d66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D66Cu;
        // 0x22d670: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d66c) {
            ctx->pc = 0x22D714u;
            goto label_22d714;
        }
    }
    ctx->pc = 0x22D674u;
label_22d674:
    // 0x22d674: 0x2a010038  slti        $at, $s0, 0x38
    ctx->pc = 0x22d674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
label_22d678:
    // 0x22d678: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_22d67c:
    if (ctx->pc == 0x22D67Cu) {
        ctx->pc = 0x22D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D678u;
        // 0x22d67c: 0x2a010038  slti        $at, $s0, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D680u;
        goto label_22d680;
    }
    ctx->pc = 0x22D678u;
    {
        const bool branch_taken_0x22d678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D678u;
        // 0x22d67c: 0x2a010038  slti        $at, $s0, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d678) {
            ctx->pc = 0x22D6CCu;
            goto label_22d6cc;
        }
    }
    ctx->pc = 0x22D680u;
label_22d680:
    // 0x22d680: 0x2602ffce  addiu       $v0, $s0, -0x32
    ctx->pc = 0x22d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967246));
label_22d684:
    // 0x22d684: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x22d684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_22d688:
    // 0x22d688: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22d688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d68c:
    // 0x22d68c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d68cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d690:
    // 0x22d690: 0x0  nop
    ctx->pc = 0x22d690u;
    // NOP
label_22d694:
    // 0x22d694: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22d694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22d698:
    // 0x22d698: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d69c:
    // 0x22d69c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x22d69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d6a0:
    // 0x22d6a0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d6a4:
    // 0x22d6a4: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x22d6a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22d6a8:
    // 0x22d6a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22d6a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d6ac:
    // 0x22d6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d6b0:
    // 0x22d6b0: 0x0  nop
    ctx->pc = 0x22d6b0u;
    // NOP
label_22d6b4:
    // 0x22d6b4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x22d6b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_22d6b8:
    // 0x22d6b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d6b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d6bc:
    // 0x22d6bc: 0x0  nop
    ctx->pc = 0x22d6bcu;
    // NOP
label_22d6c0:
    // 0x22d6c0: 0x0  nop
    ctx->pc = 0x22d6c0u;
    // NOP
label_22d6c4:
    // 0x22d6c4: 0x10000013  b           . + 4 + (0x13 << 2)
label_22d6c8:
    if (ctx->pc == 0x22D6C8u) {
        ctx->pc = 0x22D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6C4u;
        // 0x22d6c8: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6CCu;
        goto label_22d6cc;
    }
    ctx->pc = 0x22D6C4u;
    {
        const bool branch_taken_0x22d6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6C4u;
        // 0x22d6c8: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6c4) {
            ctx->pc = 0x22D714u;
            goto label_22d714;
        }
    }
    ctx->pc = 0x22D6CCu;
label_22d6cc:
    // 0x22d6cc: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
label_22d6d0:
    if (ctx->pc == 0x22D6D0u) {
        ctx->pc = 0x22D6D4u;
        goto label_22d6d4;
    }
    ctx->pc = 0x22D6CCu;
    {
        const bool branch_taken_0x22d6cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d6cc) {
            ctx->pc = 0x22D714u;
            goto label_22d714;
        }
    }
    ctx->pc = 0x22D6D4u;
label_22d6d4:
    // 0x22d6d4: 0x2a010042  slti        $at, $s0, 0x42
    ctx->pc = 0x22d6d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)66) ? 1 : 0);
label_22d6d8:
    // 0x22d6d8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_22d6dc:
    if (ctx->pc == 0x22D6DCu) {
        ctx->pc = 0x22D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6D8u;
        // 0x22d6dc: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D6E0u;
        goto label_22d6e0;
    }
    ctx->pc = 0x22D6D8u;
    {
        const bool branch_taken_0x22d6d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6D8u;
        // 0x22d6dc: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d6d8) {
            ctx->pc = 0x22D714u;
            goto label_22d714;
        }
    }
    ctx->pc = 0x22D6E0u;
label_22d6e0:
    // 0x22d6e0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d6e4:
    // 0x22d6e4: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x22d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22d6e8:
    // 0x22d6e8: 0x842018  mult        $a0, $a0, $a0
    ctx->pc = 0x22d6e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_22d6ec:
    // 0x22d6ec: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x22d6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d6f0:
    // 0x22d6f0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22d6f4:
    // 0x22d6f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22d6f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22d6f8:
    // 0x22d6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d6fc:
    // 0x22d6fc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x22d6fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22d700:
    // 0x22d700: 0x0  nop
    ctx->pc = 0x22d700u;
    // NOP
label_22d704:
    // 0x22d704: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x22d704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_22d708:
    // 0x22d708: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x22d708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_22d70c:
    // 0x22d70c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22d70cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22d710:
    // 0x22d710: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x22d710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
label_22d714:
    // 0x22d714: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x22d714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_22d718:
    // 0x22d718: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22d718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22d71c:
    // 0x22d71c: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x22d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_22d720:
    // 0x22d720: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d724:
    // 0x22d724: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x22d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d728:
    // 0x22d728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d72c:
    // 0x22d72c: 0x0  nop
    ctx->pc = 0x22d72cu;
    // NOP
label_22d730:
    // 0x22d730: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d734:
    // 0x22d734: 0x0  nop
    ctx->pc = 0x22d734u;
    // NOP
label_22d738:
    // 0x22d738: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22d73c:
    if (ctx->pc == 0x22D73Cu) {
        ctx->pc = 0x22D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D738u;
        // 0x22d73c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D740u;
        goto label_22d740;
    }
    ctx->pc = 0x22D738u;
    {
        const bool branch_taken_0x22d738 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D738u;
        // 0x22d73c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d738) {
            ctx->pc = 0x22D754u;
            goto label_22d754;
        }
    }
    ctx->pc = 0x22D740u;
label_22d740:
    // 0x22d740: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22d740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22d744:
    // 0x22d744: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d748:
    // 0x22d748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d74c:
    // 0x22d74c: 0x1000000d  b           . + 4 + (0xD << 2)
label_22d750:
    if (ctx->pc == 0x22D750u) {
        ctx->pc = 0x22D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D74Cu;
        // 0x22d750: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D754u;
        goto label_22d754;
    }
    ctx->pc = 0x22D74Cu;
    {
        const bool branch_taken_0x22d74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D74Cu;
        // 0x22d750: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d74c) {
            ctx->pc = 0x22D784u;
            goto label_22d784;
        }
    }
    ctx->pc = 0x22D754u;
label_22d754:
    // 0x22d754: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d758:
    // 0x22d758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d75c:
    // 0x22d75c: 0x0  nop
    ctx->pc = 0x22d75cu;
    // NOP
label_22d760:
    // 0x22d760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22d764:
    // 0x22d764: 0x0  nop
    ctx->pc = 0x22d764u;
    // NOP
label_22d768:
    // 0x22d768: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_22d76c:
    if (ctx->pc == 0x22D76Cu) {
        ctx->pc = 0x22D770u;
        goto label_22d770;
    }
    ctx->pc = 0x22D768u;
    {
        const bool branch_taken_0x22d768 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d768) {
            ctx->pc = 0x22D784u;
            goto label_22d784;
        }
    }
    ctx->pc = 0x22D770u;
label_22d770:
    // 0x22d770: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22d770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22d774:
    // 0x22d774: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22d778:
    // 0x22d778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22d77c:
    // 0x22d77c: 0x10000001  b           . + 4 + (0x1 << 2)
label_22d780:
    if (ctx->pc == 0x22D780u) {
        ctx->pc = 0x22D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D77Cu;
        // 0x22d780: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D784u;
        goto label_22d784;
    }
    ctx->pc = 0x22D77Cu;
    {
        const bool branch_taken_0x22d77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D77Cu;
        // 0x22d780: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d77c) {
            ctx->pc = 0x22D784u;
            goto label_22d784;
        }
    }
    ctx->pc = 0x22D784u;
label_22d784:
    // 0x22d784: 0xe6410058  swc1        $f1, 0x58($s2)
    ctx->pc = 0x22d784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
label_22d788:
    // 0x22d788: 0x3c02c3bc  lui         $v0, 0xC3BC
    ctx->pc = 0x22d788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50108 << 16));
label_22d78c:
    // 0x22d78c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x22d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_22d790:
    // 0x22d790: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x22d790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_22d794:
    // 0x22d794: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22d798:
    // 0x22d798: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x22d798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_22d79c:
    // 0x22d79c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x22d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_22d7a0:
    // 0x22d7a0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x22d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d7a4:
    // 0x22d7a4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x22d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_22d7a8:
    // 0x22d7a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22d7a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22d7ac:
    // 0x22d7ac: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d7acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d7b0:
    // 0x22d7b0: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22d7b0u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22d7b4:
    // 0x22d7b4: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22d7b4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22d7b8:
    // 0x22d7b8: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x22d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22d7bc:
    // 0x22d7bc: 0xfa310010  sqc2        $vf17, 0x10($s1)
    ctx->pc = 0x22d7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22d7c0:
    // 0x22d7c0: 0xfa320020  sqc2        $vf18, 0x20($s1)
    ctx->pc = 0x22d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22d7c4:
    // 0x22d7c4: 0xfa330030  sqc2        $vf19, 0x30($s1)
    ctx->pc = 0x22d7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22d7c8:
    // 0x22d7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d7cc:
    // 0x22d7cc: 0xc066d86  jal         func_19B618
label_22d7d0:
    if (ctx->pc == 0x22D7D0u) {
        ctx->pc = 0x22D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7CCu;
        // 0x22d7d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D7D4u;
        goto label_22d7d4;
    }
    ctx->pc = 0x22D7CCu;
    SET_GPR_U32(ctx, 31, 0x22D7D4u);
    ctx->pc = 0x22D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D7CCu;
    // 0x22d7d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x22D7D4u;
label_22d7d4:
    // 0x22d7d4: 0x3c02c3c1  lui         $v0, 0xC3C1
    ctx->pc = 0x22d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50113 << 16));
label_22d7d8:
    // 0x22d7d8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x22d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_22d7dc:
    // 0x22d7dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22d7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_22d7e0:
    // 0x22d7e0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x22d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_22d7e4:
    // 0x22d7e4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x22d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_22d7e8:
    // 0x22d7e8: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x22d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_22d7ec:
    // 0x22d7ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22d7f0:
    // 0x22d7f0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x22d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_22d7f4:
    // 0x22d7f4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x22d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d7f8:
    // 0x22d7f8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22d7f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22d7fc:
    // 0x22d7fc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d7fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d800:
    // 0x22d800: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22d800u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22d804:
    // 0x22d804: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22d804u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22d808:
    // 0x22d808: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x22d808u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22d80c:
    // 0x22d80c: 0xfa510010  sqc2        $vf17, 0x10($s2)
    ctx->pc = 0x22d80cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22d810:
    // 0x22d810: 0xfa520020  sqc2        $vf18, 0x20($s2)
    ctx->pc = 0x22d810u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22d814:
    // 0x22d814: 0xfa530030  sqc2        $vf19, 0x30($s2)
    ctx->pc = 0x22d814u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22d818:
    // 0x22d818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d81c:
    // 0x22d81c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d820:
    // 0x22d820: 0xc066d86  jal         func_19B618
label_22d824:
    if (ctx->pc == 0x22D824u) {
        ctx->pc = 0x22D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D820u;
        // 0x22d824: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D828u;
        goto label_22d828;
    }
    ctx->pc = 0x22D820u;
    SET_GPR_U32(ctx, 31, 0x22D828u);
    ctx->pc = 0x22D824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D820u;
    // 0x22d824: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x22D828u;
label_22d828:
    // 0x22d828: 0x2a010032  slti        $at, $s0, 0x32
    ctx->pc = 0x22d828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
label_22d82c:
    // 0x22d82c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_22d830:
    if (ctx->pc == 0x22D830u) {
        ctx->pc = 0x22D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D82Cu;
        // 0x22d830: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D834u;
        goto label_22d834;
    }
    ctx->pc = 0x22D82Cu;
    {
        const bool branch_taken_0x22d82c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D82Cu;
        // 0x22d830: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d82c) {
            ctx->pc = 0x22D8CCu;
            { ctx->pc = 0x22d8cc; return; }
        }
    }
    ctx->pc = 0x22D834u;
label_22d834:
    // 0x22d834: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x22d834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_22d838:
    // 0x22d838: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_22d83c:
    if (ctx->pc == 0x22D83Cu) {
        ctx->pc = 0x22D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D838u;
        // 0x22d83c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D840u;
        goto label_22d840;
    }
    ctx->pc = 0x22D838u;
    {
        const bool branch_taken_0x22d838 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D838u;
        // 0x22d83c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d838) {
            ctx->pc = 0x22D850u;
            goto label_22d850;
        }
    }
    ctx->pc = 0x22D840u;
label_22d840:
    // 0x22d840: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x22d840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_22d844:
    // 0x22d844: 0xc066e26  jal         func_19B898
label_22d848:
    if (ctx->pc == 0x22D848u) {
        ctx->pc = 0x22D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D844u;
        // 0x22d848: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D84Cu;
        goto label_22d84c;
    }
    ctx->pc = 0x22D844u;
    SET_GPR_U32(ctx, 31, 0x22D84Cu);
    ctx->pc = 0x22D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D844u;
    // 0x22d848: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22D84Cu;
label_22d84c:
    // 0x22d84c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x22d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_22d850:
    // 0x22d850: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x22d850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_22d854:
    // 0x22d854: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x22d854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_22d858:
    // 0x22d858: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x22d858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22d85c:
    // 0x22d85c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x22d860u;
    return;
}
