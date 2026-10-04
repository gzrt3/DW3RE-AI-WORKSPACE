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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29d158u: goto label_29d158;
        case 0x29d15cu: goto label_29d15c;
        case 0x29d160u: goto label_29d160;
        case 0x29d164u: goto label_29d164;
        case 0x29d168u: goto label_29d168;
        case 0x29d16cu: goto label_29d16c;
        case 0x29d170u: goto label_29d170;
        case 0x29d174u: goto label_29d174;
        case 0x29d178u: goto label_29d178;
        case 0x29d17cu: goto label_29d17c;
        case 0x29d180u: goto label_29d180;
        case 0x29d184u: goto label_29d184;
        case 0x29d188u: goto label_29d188;
        case 0x29d18cu: goto label_29d18c;
        case 0x29d190u: goto label_29d190;
        case 0x29d194u: goto label_29d194;
        case 0x29d198u: goto label_29d198;
        case 0x29d19cu: goto label_29d19c;
        case 0x29d1a0u: goto label_29d1a0;
        case 0x29d1a4u: goto label_29d1a4;
        case 0x29d1a8u: goto label_29d1a8;
        case 0x29d1acu: goto label_29d1ac;
        case 0x29d1b0u: goto label_29d1b0;
        case 0x29d1b4u: goto label_29d1b4;
        case 0x29d1b8u: goto label_29d1b8;
        case 0x29d1bcu: goto label_29d1bc;
        case 0x29d1c0u: goto label_29d1c0;
        case 0x29d1c4u: goto label_29d1c4;
        case 0x29d1c8u: goto label_29d1c8;
        case 0x29d1ccu: goto label_29d1cc;
        case 0x29d1d0u: goto label_29d1d0;
        case 0x29d1d4u: goto label_29d1d4;
        case 0x29d1d8u: goto label_29d1d8;
        case 0x29d1dcu: goto label_29d1dc;
        case 0x29d1e0u: goto label_29d1e0;
        case 0x29d1e4u: goto label_29d1e4;
        case 0x29d1e8u: goto label_29d1e8;
        case 0x29d1ecu: goto label_29d1ec;
        case 0x29d1f0u: goto label_29d1f0;
        case 0x29d1f4u: goto label_29d1f4;
        case 0x29d1f8u: goto label_29d1f8;
        case 0x29d1fcu: goto label_29d1fc;
        case 0x29d200u: goto label_29d200;
        case 0x29d204u: goto label_29d204;
        case 0x29d208u: goto label_29d208;
        case 0x29d20cu: goto label_29d20c;
        case 0x29d210u: goto label_29d210;
        case 0x29d214u: goto label_29d214;
        case 0x29d218u: goto label_29d218;
        case 0x29d21cu: goto label_29d21c;
        case 0x29d220u: goto label_29d220;
        case 0x29d224u: goto label_29d224;
        case 0x29d228u: goto label_29d228;
        case 0x29d22cu: goto label_29d22c;
        case 0x29d230u: goto label_29d230;
        case 0x29d234u: goto label_29d234;
        case 0x29d238u: goto label_29d238;
        case 0x29d23cu: goto label_29d23c;
        case 0x29d240u: goto label_29d240;
        case 0x29d244u: goto label_29d244;
        case 0x29d248u: goto label_29d248;
        case 0x29d24cu: goto label_29d24c;
        case 0x29d250u: goto label_29d250;
        case 0x29d254u: goto label_29d254;
        case 0x29d258u: goto label_29d258;
        case 0x29d25cu: goto label_29d25c;
        case 0x29d260u: goto label_29d260;
        case 0x29d264u: goto label_29d264;
        case 0x29d268u: goto label_29d268;
        case 0x29d26cu: goto label_29d26c;
        case 0x29d270u: goto label_29d270;
        case 0x29d274u: goto label_29d274;
        case 0x29d278u: goto label_29d278;
        case 0x29d27cu: goto label_29d27c;
        case 0x29d280u: goto label_29d280;
        case 0x29d284u: goto label_29d284;
        case 0x29d288u: goto label_29d288;
        case 0x29d28cu: goto label_29d28c;
        case 0x29d290u: goto label_29d290;
        case 0x29d294u: goto label_29d294;
        case 0x29d298u: goto label_29d298;
        case 0x29d29cu: goto label_29d29c;
        case 0x29d2a0u: goto label_29d2a0;
        case 0x29d2a4u: goto label_29d2a4;
        case 0x29d2a8u: goto label_29d2a8;
        case 0x29d2acu: goto label_29d2ac;
        case 0x29d2b0u: goto label_29d2b0;
        case 0x29d2b4u: goto label_29d2b4;
        case 0x29d2b8u: goto label_29d2b8;
        case 0x29d2bcu: goto label_29d2bc;
        case 0x29d2c0u: goto label_29d2c0;
        case 0x29d2c4u: goto label_29d2c4;
        case 0x29d2c8u: goto label_29d2c8;
        case 0x29d2ccu: goto label_29d2cc;
        case 0x29d2d0u: goto label_29d2d0;
        case 0x29d2d4u: goto label_29d2d4;
        case 0x29d2d8u: goto label_29d2d8;
        case 0x29d2dcu: goto label_29d2dc;
        case 0x29d2e0u: goto label_29d2e0;
        case 0x29d2e4u: goto label_29d2e4;
        case 0x29d2e8u: goto label_29d2e8;
        case 0x29d2ecu: goto label_29d2ec;
        case 0x29d2f0u: goto label_29d2f0;
        case 0x29d2f4u: goto label_29d2f4;
        case 0x29d2f8u: goto label_29d2f8;
        case 0x29d2fcu: goto label_29d2fc;
        case 0x29d300u: goto label_29d300;
        case 0x29d304u: goto label_29d304;
        case 0x29d308u: goto label_29d308;
        case 0x29d30cu: goto label_29d30c;
        case 0x29d310u: goto label_29d310;
        case 0x29d314u: goto label_29d314;
        case 0x29d318u: goto label_29d318;
        case 0x29d31cu: goto label_29d31c;
        case 0x29d320u: goto label_29d320;
        case 0x29d324u: goto label_29d324;
        case 0x29d328u: goto label_29d328;
        case 0x29d32cu: goto label_29d32c;
        case 0x29d330u: goto label_29d330;
        case 0x29d334u: goto label_29d334;
        case 0x29d338u: goto label_29d338;
        case 0x29d33cu: goto label_29d33c;
        case 0x29d340u: goto label_29d340;
        case 0x29d344u: goto label_29d344;
        case 0x29d348u: goto label_29d348;
        case 0x29d34cu: goto label_29d34c;
        case 0x29d350u: goto label_29d350;
        case 0x29d354u: goto label_29d354;
        case 0x29d358u: goto label_29d358;
        case 0x29d35cu: goto label_29d35c;
        case 0x29d360u: goto label_29d360;
        case 0x29d364u: goto label_29d364;
        case 0x29d368u: goto label_29d368;
        case 0x29d36cu: goto label_29d36c;
        case 0x29d370u: goto label_29d370;
        case 0x29d374u: goto label_29d374;
        case 0x29d378u: goto label_29d378;
        case 0x29d37cu: goto label_29d37c;
        case 0x29d380u: goto label_29d380;
        case 0x29d384u: goto label_29d384;
        case 0x29d388u: goto label_29d388;
        case 0x29d38cu: goto label_29d38c;
        case 0x29d390u: goto label_29d390;
        case 0x29d394u: goto label_29d394;
        case 0x29d398u: goto label_29d398;
        case 0x29d39cu: goto label_29d39c;
        case 0x29d3a0u: goto label_29d3a0;
        case 0x29d3a4u: goto label_29d3a4;
        case 0x29d3a8u: goto label_29d3a8;
        case 0x29d3acu: goto label_29d3ac;
        case 0x29d3b0u: goto label_29d3b0;
        case 0x29d3b4u: goto label_29d3b4;
        case 0x29d3b8u: goto label_29d3b8;
        case 0x29d3bcu: goto label_29d3bc;
        case 0x29d3c0u: goto label_29d3c0;
        case 0x29d3c4u: goto label_29d3c4;
        case 0x29d3c8u: goto label_29d3c8;
        case 0x29d3ccu: goto label_29d3cc;
        case 0x29d3d0u: goto label_29d3d0;
        case 0x29d3d4u: goto label_29d3d4;
        case 0x29d3d8u: goto label_29d3d8;
        case 0x29d3dcu: goto label_29d3dc;
        case 0x29d3e0u: goto label_29d3e0;
        case 0x29d3e4u: goto label_29d3e4;
        case 0x29d3e8u: goto label_29d3e8;
        case 0x29d3ecu: goto label_29d3ec;
        case 0x29d3f0u: goto label_29d3f0;
        case 0x29d3f4u: goto label_29d3f4;
        case 0x29d3f8u: goto label_29d3f8;
        case 0x29d3fcu: goto label_29d3fc;
        case 0x29d400u: goto label_29d400;
        case 0x29d404u: goto label_29d404;
        case 0x29d408u: goto label_29d408;
        case 0x29d40cu: goto label_29d40c;
        case 0x29d410u: goto label_29d410;
        case 0x29d414u: goto label_29d414;
        case 0x29d418u: goto label_29d418;
        case 0x29d41cu: goto label_29d41c;
        case 0x29d420u: goto label_29d420;
        case 0x29d424u: goto label_29d424;
        case 0x29d428u: goto label_29d428;
        case 0x29d42cu: goto label_29d42c;
        case 0x29d430u: goto label_29d430;
        case 0x29d434u: goto label_29d434;
        case 0x29d438u: goto label_29d438;
        case 0x29d43cu: goto label_29d43c;
        case 0x29d440u: goto label_29d440;
        case 0x29d444u: goto label_29d444;
        case 0x29d448u: goto label_29d448;
        case 0x29d44cu: goto label_29d44c;
        case 0x29d450u: goto label_29d450;
        case 0x29d454u: goto label_29d454;
        case 0x29d458u: goto label_29d458;
        case 0x29d45cu: goto label_29d45c;
        case 0x29d460u: goto label_29d460;
        case 0x29d464u: goto label_29d464;
        case 0x29d468u: goto label_29d468;
        case 0x29d46cu: goto label_29d46c;
        case 0x29d470u: goto label_29d470;
        case 0x29d474u: goto label_29d474;
        case 0x29d478u: goto label_29d478;
        case 0x29d47cu: goto label_29d47c;
        case 0x29d480u: goto label_29d480;
        case 0x29d484u: goto label_29d484;
        case 0x29d488u: goto label_29d488;
        case 0x29d48cu: goto label_29d48c;
        case 0x29d490u: goto label_29d490;
        case 0x29d494u: goto label_29d494;
        case 0x29d498u: goto label_29d498;
        case 0x29d49cu: goto label_29d49c;
        case 0x29d4a0u: goto label_29d4a0;
        case 0x29d4a4u: goto label_29d4a4;
        case 0x29d4a8u: goto label_29d4a8;
        case 0x29d4acu: goto label_29d4ac;
        case 0x29d4b0u: goto label_29d4b0;
        case 0x29d4b4u: goto label_29d4b4;
        case 0x29d4b8u: goto label_29d4b8;
        case 0x29d4bcu: goto label_29d4bc;
        case 0x29d4c0u: goto label_29d4c0;
        case 0x29d4c4u: goto label_29d4c4;
        case 0x29d4c8u: goto label_29d4c8;
        case 0x29d4ccu: goto label_29d4cc;
        case 0x29d4d0u: goto label_29d4d0;
        case 0x29d4d4u: goto label_29d4d4;
        case 0x29d4d8u: goto label_29d4d8;
        case 0x29d4dcu: goto label_29d4dc;
        case 0x29d4e0u: goto label_29d4e0;
        case 0x29d4e4u: goto label_29d4e4;
        case 0x29d4e8u: goto label_29d4e8;
        case 0x29d4ecu: goto label_29d4ec;
        case 0x29d4f0u: goto label_29d4f0;
        case 0x29d4f4u: goto label_29d4f4;
        case 0x29d4f8u: goto label_29d4f8;
        case 0x29d4fcu: goto label_29d4fc;
        case 0x29d500u: goto label_29d500;
        case 0x29d504u: goto label_29d504;
        case 0x29d508u: goto label_29d508;
        case 0x29d50cu: goto label_29d50c;
        case 0x29d510u: goto label_29d510;
        case 0x29d514u: goto label_29d514;
        case 0x29d518u: goto label_29d518;
        case 0x29d51cu: goto label_29d51c;
        case 0x29d520u: goto label_29d520;
        case 0x29d524u: goto label_29d524;
        case 0x29d528u: goto label_29d528;
        case 0x29d52cu: goto label_29d52c;
        case 0x29d530u: goto label_29d530;
        case 0x29d534u: goto label_29d534;
        case 0x29d538u: goto label_29d538;
        case 0x29d53cu: goto label_29d53c;
        case 0x29d540u: goto label_29d540;
        case 0x29d544u: goto label_29d544;
        case 0x29d548u: goto label_29d548;
        case 0x29d54cu: goto label_29d54c;
        case 0x29d550u: goto label_29d550;
        case 0x29d554u: goto label_29d554;
        case 0x29d558u: goto label_29d558;
        case 0x29d55cu: goto label_29d55c;
        case 0x29d560u: goto label_29d560;
        case 0x29d564u: goto label_29d564;
        case 0x29d568u: goto label_29d568;
        case 0x29d56cu: goto label_29d56c;
        case 0x29d570u: goto label_29d570;
        case 0x29d574u: goto label_29d574;
        case 0x29d578u: goto label_29d578;
        case 0x29d57cu: goto label_29d57c;
        case 0x29d580u: goto label_29d580;
        case 0x29d584u: goto label_29d584;
        case 0x29d588u: goto label_29d588;
        case 0x29d58cu: goto label_29d58c;
        case 0x29d590u: goto label_29d590;
        case 0x29d594u: goto label_29d594;
        case 0x29d598u: goto label_29d598;
        case 0x29d59cu: goto label_29d59c;
        case 0x29d5a0u: goto label_29d5a0;
        case 0x29d5a4u: goto label_29d5a4;
        case 0x29d5a8u: goto label_29d5a8;
        case 0x29d5acu: goto label_29d5ac;
        case 0x29d5b0u: goto label_29d5b0;
        case 0x29d5b4u: goto label_29d5b4;
        case 0x29d5b8u: goto label_29d5b8;
        case 0x29d5bcu: goto label_29d5bc;
        case 0x29d5c0u: goto label_29d5c0;
        case 0x29d5c4u: goto label_29d5c4;
        case 0x29d5c8u: goto label_29d5c8;
        case 0x29d5ccu: goto label_29d5cc;
        case 0x29d5d0u: goto label_29d5d0;
        case 0x29d5d4u: goto label_29d5d4;
        case 0x29d5d8u: goto label_29d5d8;
        case 0x29d5dcu: goto label_29d5dc;
        case 0x29d5e0u: goto label_29d5e0;
        case 0x29d5e4u: goto label_29d5e4;
        case 0x29d5e8u: goto label_29d5e8;
        case 0x29d5ecu: goto label_29d5ec;
        case 0x29d5f0u: goto label_29d5f0;
        case 0x29d5f4u: goto label_29d5f4;
        case 0x29d5f8u: goto label_29d5f8;
        case 0x29d5fcu: goto label_29d5fc;
        case 0x29d600u: goto label_29d600;
        case 0x29d604u: goto label_29d604;
        case 0x29d608u: goto label_29d608;
        case 0x29d60cu: goto label_29d60c;
        case 0x29d610u: goto label_29d610;
        case 0x29d614u: goto label_29d614;
        case 0x29d618u: goto label_29d618;
        case 0x29d61cu: goto label_29d61c;
        case 0x29d620u: goto label_29d620;
        case 0x29d624u: goto label_29d624;
        case 0x29d628u: goto label_29d628;
        case 0x29d62cu: goto label_29d62c;
        case 0x29d630u: goto label_29d630;
        case 0x29d634u: goto label_29d634;
        case 0x29d638u: goto label_29d638;
        case 0x29d63cu: goto label_29d63c;
        case 0x29d640u: goto label_29d640;
        case 0x29d644u: goto label_29d644;
        case 0x29d648u: goto label_29d648;
        case 0x29d64cu: goto label_29d64c;
        case 0x29d650u: goto label_29d650;
        case 0x29d654u: goto label_29d654;
        case 0x29d658u: goto label_29d658;
        case 0x29d65cu: goto label_29d65c;
        case 0x29d660u: goto label_29d660;
        case 0x29d664u: goto label_29d664;
        case 0x29d668u: goto label_29d668;
        case 0x29d66cu: goto label_29d66c;
        case 0x29d670u: goto label_29d670;
        case 0x29d674u: goto label_29d674;
        case 0x29d678u: goto label_29d678;
        case 0x29d67cu: goto label_29d67c;
        case 0x29d680u: goto label_29d680;
        case 0x29d684u: goto label_29d684;
        case 0x29d688u: goto label_29d688;
        case 0x29d68cu: goto label_29d68c;
        case 0x29d690u: goto label_29d690;
        case 0x29d694u: goto label_29d694;
        case 0x29d698u: goto label_29d698;
        case 0x29d69cu: goto label_29d69c;
        case 0x29d6a0u: goto label_29d6a0;
        case 0x29d6a4u: goto label_29d6a4;
        case 0x29d6a8u: goto label_29d6a8;
        case 0x29d6acu: goto label_29d6ac;
        case 0x29d6b0u: goto label_29d6b0;
        case 0x29d6b4u: goto label_29d6b4;
        case 0x29d6b8u: goto label_29d6b8;
        case 0x29d6bcu: goto label_29d6bc;
        case 0x29d6c0u: goto label_29d6c0;
        case 0x29d6c4u: goto label_29d6c4;
        case 0x29d6c8u: goto label_29d6c8;
        case 0x29d6ccu: goto label_29d6cc;
        case 0x29d6d0u: goto label_29d6d0;
        case 0x29d6d4u: goto label_29d6d4;
        case 0x29d6d8u: goto label_29d6d8;
        case 0x29d6dcu: goto label_29d6dc;
        case 0x29d6e0u: goto label_29d6e0;
        case 0x29d6e4u: goto label_29d6e4;
        case 0x29d6e8u: goto label_29d6e8;
        case 0x29d6ecu: goto label_29d6ec;
        case 0x29d6f0u: goto label_29d6f0;
        case 0x29d6f4u: goto label_29d6f4;
        case 0x29d6f8u: goto label_29d6f8;
        case 0x29d6fcu: goto label_29d6fc;
        case 0x29d700u: goto label_29d700;
        case 0x29d704u: goto label_29d704;
        case 0x29d708u: goto label_29d708;
        case 0x29d70cu: goto label_29d70c;
        case 0x29d710u: goto label_29d710;
        case 0x29d714u: goto label_29d714;
        case 0x29d718u: goto label_29d718;
        case 0x29d71cu: goto label_29d71c;
        case 0x29d720u: goto label_29d720;
        case 0x29d724u: goto label_29d724;
        case 0x29d728u: goto label_29d728;
        case 0x29d72cu: goto label_29d72c;
        case 0x29d730u: goto label_29d730;
        case 0x29d734u: goto label_29d734;
        case 0x29d738u: goto label_29d738;
        case 0x29d73cu: goto label_29d73c;
        case 0x29d740u: goto label_29d740;
        case 0x29d744u: goto label_29d744;
        case 0x29d748u: goto label_29d748;
        case 0x29d74cu: goto label_29d74c;
        case 0x29d750u: goto label_29d750;
        case 0x29d754u: goto label_29d754;
        case 0x29d758u: goto label_29d758;
        case 0x29d75cu: goto label_29d75c;
        case 0x29d760u: goto label_29d760;
        case 0x29d764u: goto label_29d764;
        case 0x29d768u: goto label_29d768;
        case 0x29d76cu: goto label_29d76c;
        case 0x29d770u: goto label_29d770;
        case 0x29d774u: goto label_29d774;
        case 0x29d778u: goto label_29d778;
        case 0x29d77cu: goto label_29d77c;
        case 0x29d780u: goto label_29d780;
        case 0x29d784u: goto label_29d784;
        case 0x29d788u: goto label_29d788;
        case 0x29d78cu: goto label_29d78c;
        case 0x29d790u: goto label_29d790;
        case 0x29d794u: goto label_29d794;
        case 0x29d798u: goto label_29d798;
        case 0x29d79cu: goto label_29d79c;
        case 0x29d7a0u: goto label_29d7a0;
        case 0x29d7a4u: goto label_29d7a4;
        case 0x29d7a8u: goto label_29d7a8;
        case 0x29d7acu: goto label_29d7ac;
        case 0x29d7b0u: goto label_29d7b0;
        case 0x29d7b4u: goto label_29d7b4;
        case 0x29d7b8u: goto label_29d7b8;
        case 0x29d7bcu: goto label_29d7bc;
        case 0x29d7c0u: goto label_29d7c0;
        case 0x29d7c4u: goto label_29d7c4;
        case 0x29d7c8u: goto label_29d7c8;
        case 0x29d7ccu: goto label_29d7cc;
        case 0x29d7d0u: goto label_29d7d0;
        case 0x29d7d4u: goto label_29d7d4;
        case 0x29d7d8u: goto label_29d7d8;
        case 0x29d7dcu: goto label_29d7dc;
        case 0x29d7e0u: goto label_29d7e0;
        case 0x29d7e4u: goto label_29d7e4;
        case 0x29d7e8u: goto label_29d7e8;
        case 0x29d7ecu: goto label_29d7ec;
        case 0x29d7f0u: goto label_29d7f0;
        case 0x29d7f4u: goto label_29d7f4;
        case 0x29d7f8u: goto label_29d7f8;
        case 0x29d7fcu: goto label_29d7fc;
        case 0x29d800u: goto label_29d800;
        case 0x29d804u: goto label_29d804;
        case 0x29d808u: goto label_29d808;
        case 0x29d80cu: goto label_29d80c;
        case 0x29d810u: goto label_29d810;
        case 0x29d814u: goto label_29d814;
        case 0x29d818u: goto label_29d818;
        case 0x29d81cu: goto label_29d81c;
        case 0x29d820u: goto label_29d820;
        case 0x29d824u: goto label_29d824;
        case 0x29d828u: goto label_29d828;
        case 0x29d82cu: goto label_29d82c;
        case 0x29d830u: goto label_29d830;
        case 0x29d834u: goto label_29d834;
        case 0x29d838u: goto label_29d838;
        case 0x29d83cu: goto label_29d83c;
        case 0x29d840u: goto label_29d840;
        case 0x29d844u: goto label_29d844;
        case 0x29d848u: goto label_29d848;
        case 0x29d84cu: goto label_29d84c;
        case 0x29d850u: goto label_29d850;
        case 0x29d854u: goto label_29d854;
        case 0x29d858u: goto label_29d858;
        case 0x29d85cu: goto label_29d85c;
        case 0x29d860u: goto label_29d860;
        case 0x29d864u: goto label_29d864;
        case 0x29d868u: goto label_29d868;
        case 0x29d86cu: goto label_29d86c;
        case 0x29d870u: goto label_29d870;
        case 0x29d874u: goto label_29d874;
        case 0x29d878u: goto label_29d878;
        case 0x29d87cu: goto label_29d87c;
        case 0x29d880u: goto label_29d880;
        case 0x29d884u: goto label_29d884;
        case 0x29d888u: goto label_29d888;
        case 0x29d88cu: goto label_29d88c;
        case 0x29d890u: goto label_29d890;
        case 0x29d894u: goto label_29d894;
        case 0x29d898u: goto label_29d898;
        case 0x29d89cu: goto label_29d89c;
        case 0x29d8a0u: goto label_29d8a0;
        case 0x29d8a4u: goto label_29d8a4;
        case 0x29d8a8u: goto label_29d8a8;
        case 0x29d8acu: goto label_29d8ac;
        case 0x29d8b0u: goto label_29d8b0;
        case 0x29d8b4u: goto label_29d8b4;
        case 0x29d8b8u: goto label_29d8b8;
        case 0x29d8bcu: goto label_29d8bc;
        case 0x29d8c0u: goto label_29d8c0;
        case 0x29d8c4u: goto label_29d8c4;
        case 0x29d8c8u: goto label_29d8c8;
        case 0x29d8ccu: goto label_29d8cc;
        case 0x29d8d0u: goto label_29d8d0;
        case 0x29d8d4u: goto label_29d8d4;
        case 0x29d8d8u: goto label_29d8d8;
        case 0x29d8dcu: goto label_29d8dc;
        case 0x29d8e0u: goto label_29d8e0;
        case 0x29d8e4u: goto label_29d8e4;
        case 0x29d8e8u: goto label_29d8e8;
        case 0x29d8ecu: goto label_29d8ec;
        case 0x29d8f0u: goto label_29d8f0;
        case 0x29d8f4u: goto label_29d8f4;
        case 0x29d8f8u: goto label_29d8f8;
        case 0x29d8fcu: goto label_29d8fc;
        case 0x29d900u: goto label_29d900;
        case 0x29d904u: goto label_29d904;
        case 0x29d908u: goto label_29d908;
        case 0x29d90cu: goto label_29d90c;
        case 0x29d910u: goto label_29d910;
        case 0x29d914u: goto label_29d914;
        case 0x29d918u: goto label_29d918;
        case 0x29d91cu: goto label_29d91c;
        case 0x29d920u: goto label_29d920;
        case 0x29d924u: goto label_29d924;
        default: return;
    }

label_29d158:
    // 0x29d158: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d158u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D158 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d15c:
    // 0x29d15c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d160:
    // 0x29d160: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29d160u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29d164:
    // 0x29d164: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x29d164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d168:
    // 0x29d168: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d168u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d16c:
    // 0x29d16c: 0x16a8  .word       0x000016A8                   # mfsa        $v0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d16cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29d170:
    // 0x29d170: 0x9  jalr        $zero, $zero
label_29d174:
    if (ctx->pc == 0x29D174u) {
        ctx->pc = 0x29D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D170u;
        // 0x29d174: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D178u;
        goto label_29d178;
    }
    ctx->pc = 0x29D170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D170u;
        // 0x29d174: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D170u, 0x29D178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D178u;
label_29d178:
    // 0x29d178: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d178u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d17c:
    // 0x29d17c: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d17cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29d180:
    // 0x29d180: 0xc  syscall     0
    ctx->pc = 0x29d180u;
    ctx->pc = 0x29D184u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d184:
    // 0x29d184: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d184u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29d188:
    // 0x29d188: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d188u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D188 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d18c:
    // 0x29d18c: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL>
label_29d190:
    if (ctx->pc == 0x29D190u) {
        ctx->pc = 0x29D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D18Cu;
        // 0x29d190: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D194u;
        goto label_29d194;
    }
    ctx->pc = 0x29D18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D18Cu;
        // 0x29d190: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D18Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D194u;
label_29d194:
    // 0x29d194: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x29d194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29d198:
    // 0x29d198: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29d198u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d19c:
    // 0x29d19c: 0x11f8  dsll        $v0, $zero, 7
    ctx->pc = 0x29d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 7);
label_29d1a0:
    // 0x29d1a0: 0x0  nop
    ctx->pc = 0x29d1a0u;
    // NOP
label_29d1a4:
    // 0x29d1a4: 0x1130  tge         $zero, $zero, 68
    ctx->pc = 0x29d1a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d1a8:
    // 0x29d1a8: 0x13  mtlo        $zero
    ctx->pc = 0x29d1a8u;
    ctx->lo = GPR_U64(ctx, 0);
label_29d1ac:
    // 0x29d1ac: 0x1068  .word       0x00001068                   # mfsa        $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d1acu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29d1b0:
    // 0x29d1b0: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d1b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d1b4:
    // 0x29d1b4: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x29d1b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d1b8:
    // 0x29d1b8: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d1b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d1bc:
    // 0x29d1bc: 0x16a8  .word       0x000016A8                   # mfsa        $v0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d1bcu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29d1c0:
    // 0x29d1c0: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29d1c0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29d1c4:
    // 0x29d1c4: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d1c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29d1c8:
    // 0x29d1c8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d1c8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d1cc:
    // 0x29d1cc: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29d1d0:
    // 0x29d1d0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d1d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D1D0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d1d4:
    // 0x29d1d4: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d1d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29d1d8:
    // 0x29d1d8: 0xd  break       0
    ctx->pc = 0x29d1d8u;
    runtime->handleBreak(rdram, ctx);
label_29d1dc:
    // 0x29d1dc: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL>
label_29d1e0:
    if (ctx->pc == 0x29D1E0u) {
        ctx->pc = 0x29D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1DCu;
        // 0x29d1e0: 0x13  mtlo        $zero (Delay Slot)
        ctx->lo = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D1E4u;
        goto label_29d1e4;
    }
    ctx->pc = 0x29D1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1DCu;
        // 0x29d1e0: 0x13  mtlo        $zero (Delay Slot)
        ctx->lo = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D1DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D1E4u;
label_29d1e4:
    // 0x29d1e4: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x29d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29d1e8:
    // 0x29d1e8: 0x0  nop
    ctx->pc = 0x29d1e8u;
    // NOP
label_29d1ec:
    // 0x29d1ec: 0x11f8  dsll        $v0, $zero, 7
    ctx->pc = 0x29d1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 7);
label_29d1f0:
    // 0x29d1f0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d1f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d1f4:
    // 0x29d1f4: 0x1130  tge         $zero, $zero, 68
    ctx->pc = 0x29d1f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d1f8:
    // 0x29d1f8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d1f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D1F8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d1fc:
    // 0x29d1fc: 0x1068  .word       0x00001068                   # mfsa        $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d1fcu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29d200:
    // 0x29d200: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D200 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d204:
    // 0x29d204: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d208:
    // 0x29d208: 0x12  mflo        $zero
    ctx->pc = 0x29d208u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d20c:
    // 0x29d20c: 0xed8  .word       0x00000ED8                   # mult        $at, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d20cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d210:
    // 0x29d210: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d210u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d214:
    // 0x29d214: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d214u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29d218:
    // 0x29d218: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29d218u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29D218 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d21c:
    // 0x29d21c: 0xd48  .word       0x00000D48                   # jr          $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
label_29d220:
    if (ctx->pc == 0x29D220u) {
        ctx->pc = 0x29D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D21Cu;
        // 0x29d220: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D224u;
        goto label_29d224;
    }
    ctx->pc = 0x29D21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D21Cu;
        // 0x29d220: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D21Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D224u;
label_29d224:
    // 0x29d224: 0xc80  sll         $at, $zero, 18
    ctx->pc = 0x29d224u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29d228:
    // 0x29d228: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d228u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29D228 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d22c:
    // 0x29d22c: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x29d22cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_29d230:
    // 0x29d230: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d230u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d234:
    // 0x29d234: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x29d234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d238:
    // 0x29d238: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29d238u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d23c:
    // 0x29d23c: 0xa28  .word       0x00000A28                   # mfsa        $at # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d23cu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29d240:
    // 0x29d240: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29D240 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d244:
    // 0x29d244: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d248:
    // 0x29d248: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29d248u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29D248 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d24c:
    // 0x29d24c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d250:
    // 0x29d250: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d250u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d254:
    // 0x29d254: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d258:
    // 0x29d258: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d258u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d25c:
    // 0x29d25c: 0xed8  .word       0x00000ED8                   # mult        $at, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d260:
    // 0x29d260: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29d260u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d264:
    // 0x29d264: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d264u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29d268:
    // 0x29d268: 0x25  move        $zero, $zero
    ctx->pc = 0x29d268u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29d26c:
    // 0x29d26c: 0xd48  .word       0x00000D48                   # jr          $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
label_29d270:
    if (ctx->pc == 0x29D270u) {
        ctx->pc = 0x29D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D26Cu;
        // 0x29d270: 0x19  multu       $zero, $zero (Delay Slot)
        { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D274u;
        goto label_29d274;
    }
    ctx->pc = 0x29D26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D26Cu;
        // 0x29d270: 0x19  multu       $zero, $zero (Delay Slot)
        { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D26Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D274u;
label_29d274:
    // 0x29d274: 0xc80  sll         $at, $zero, 18
    ctx->pc = 0x29d274u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29d278:
    // 0x29d278: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d278u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d27c:
    // 0x29d27c: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x29d27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_29d280:
    // 0x29d280: 0xd  break       0
    ctx->pc = 0x29d280u;
    runtime->handleBreak(rdram, ctx);
label_29d284:
    // 0x29d284: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x29d284u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d288:
    // 0x29d288: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d288u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d28c:
    // 0x29d28c: 0xa28  .word       0x00000A28                   # mfsa        $at # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d28cu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29d290:
    // 0x29d290: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29d290u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d294:
    // 0x29d294: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d298:
    // 0x29d298: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d29c:
    // 0x29d29c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d29cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d2a0:
    // 0x29d2a0: 0xc  syscall     0
    ctx->pc = 0x29d2a0u;
    ctx->pc = 0x29D2A4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d2a4:
    // 0x29d2a4: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x29d2a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d2a8:
    // 0x29d2a8: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d2a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d2ac:
    // 0x29d2ac: 0x16a8  .word       0x000016A8                   # mfsa        $v0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d2acu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29d2b0:
    // 0x29d2b0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d2b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d2b4:
    // 0x29d2b4: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d2b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29d2b8:
    // 0x29d2b8: 0x9  jalr        $zero, $zero
label_29d2bc:
    if (ctx->pc == 0x29D2BCu) {
        ctx->pc = 0x29D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2B8u;
        // 0x29d2bc: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2C0u;
        goto label_29d2c0;
    }
    ctx->pc = 0x29D2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2B8u;
        // 0x29d2bc: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D2B8u, 0x29D2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D2C0u;
label_29d2c0:
    // 0x29d2c0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d2c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d2c4:
    // 0x29d2c4: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d2c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29d2c8:
    // 0x29d2c8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29d2c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d2cc:
    // 0x29d2cc: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL>
label_29d2d0:
    if (ctx->pc == 0x29D2D0u) {
        ctx->pc = 0x29D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2CCu;
        // 0x29d2d0: 0x7  srav        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2D4u;
        goto label_29d2d4;
    }
    ctx->pc = 0x29D2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2CCu;
        // 0x29d2d0: 0x7  srav        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D2CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D2D4u;
label_29d2d4:
    // 0x29d2d4: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x29d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29d2d8:
    // 0x29d2d8: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d2d8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d2dc:
    // 0x29d2dc: 0x11f8  dsll        $v0, $zero, 7
    ctx->pc = 0x29d2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 7);
label_29d2e0:
    // 0x29d2e0: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d2e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d2e4:
    // 0x29d2e4: 0x1130  tge         $zero, $zero, 68
    ctx->pc = 0x29d2e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d2e8:
    // 0x29d2e8: 0xd  break       0
    ctx->pc = 0x29d2e8u;
    runtime->handleBreak(rdram, ctx);
label_29d2ec:
    // 0x29d2ec: 0x1068  .word       0x00001068                   # mfsa        $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d2ecu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29d2f0:
    // 0x29d2f0: 0x12  mflo        $zero
    ctx->pc = 0x29d2f0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d2f4:
    // 0x29d2f4: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x29d2f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d2f8:
    // 0x29d2f8: 0x11  mthi        $zero
    ctx->pc = 0x29d2f8u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d2fc:
    // 0x29d2fc: 0x16a8  .word       0x000016A8                   # mfsa        $v0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d2fcu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29d300:
    // 0x29d300: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D300 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d304:
    // 0x29d304: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d304u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29d308:
    // 0x29d308: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d308u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d30c:
    // 0x29d30c: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29d310:
    // 0x29d310: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d310u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d314:
    // 0x29d314: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d314u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29d318:
    // 0x29d318: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d318u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d31c:
    // 0x29d31c: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL>
label_29d320:
    if (ctx->pc == 0x29D320u) {
        ctx->pc = 0x29D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D31Cu;
        // 0x29d320: 0x1a  div         $zero, $zero, $zero (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D324u;
        goto label_29d324;
    }
    ctx->pc = 0x29D31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D31Cu;
        // 0x29d320: 0x1a  div         $zero, $zero, $zero (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D31Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D324u;
label_29d324:
    // 0x29d324: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x29d324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29d328:
    // 0x29d328: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29d328u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d32c:
    // 0x29d32c: 0x11f8  dsll        $v0, $zero, 7
    ctx->pc = 0x29d32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 7);
label_29d330:
    // 0x29d330: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D330 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d334:
    // 0x29d334: 0x1130  tge         $zero, $zero, 68
    ctx->pc = 0x29d334u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d338:
    // 0x29d338: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29d338u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d33c:
    // 0x29d33c: 0x1068  .word       0x00001068                   # mfsa        $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d33cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29d340:
    // 0x29d340: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29d340u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29d344:
    // 0x29d344: 0x9c4  .word       0x000009C4                   # sllv        $at, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d344u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d348:
    // 0x29d348: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d348u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d34c:
    // 0x29d34c: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d34cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d350:
    // 0x29d350: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29D350 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d354:
    // 0x29d354: 0x8fc  dsll32      $at, $zero, 3
    ctx->pc = 0x29d354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 3));
label_29d358:
    // 0x29d358: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29d358u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d35c:
    // 0x29d35c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d360:
    // 0x29d360: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29d360u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29d364:
    // 0x29d364: 0x834  teq         $zero, $zero, 32
    ctx->pc = 0x29d364u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d368:
    // 0x29d368: 0xd  break       0
    ctx->pc = 0x29d368u;
    runtime->handleBreak(rdram, ctx);
label_29d36c:
    // 0x29d36c: 0x7d0  .word       0x000007D0                   # mfhi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d36cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d370:
    // 0x29d370: 0x22  neg         $zero, $zero
    ctx->pc = 0x29d370u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29d374:
    // 0x29d374: 0x76c  .word       0x0000076C                   # dadd        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d374u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d378:
    // 0x29d378: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d378u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d37c:
    // 0x29d37c: 0x708  .word       0x00000708                   # jr          $zero # 00000700 <InstrIdType: CPU_SPECIAL>
label_29d380:
    if (ctx->pc == 0x29D380u) {
        ctx->pc = 0x29D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D37Cu;
        // 0x29d380: 0x13  mtlo        $zero (Delay Slot)
        ctx->lo = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D384u;
        goto label_29d384;
    }
    ctx->pc = 0x29D37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D37Cu;
        // 0x29d380: 0x13  mtlo        $zero (Delay Slot)
        ctx->lo = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D37Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D384u;
label_29d384:
    // 0x29d384: 0x6a4  .word       0x000006A4                   # and         $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d384u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d388:
    // 0x29d388: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d388u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D388 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d38c:
    // 0x29d38c: 0x640  sll         $zero, $zero, 25
    ctx->pc = 0x29d38cu;
    
label_29d390:
    // 0x29d390: 0x11  mthi        $zero
    ctx->pc = 0x29d390u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d394:
    // 0x29d394: 0x9c4  .word       0x000009C4                   # sllv        $at, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d394u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d398:
    // 0x29d398: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29d398u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d39c:
    // 0x29d39c: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d39cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d3a0:
    // 0x29d3a0: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d3a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29D3A0 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d3a4:
    // 0x29d3a4: 0x8fc  dsll32      $at, $zero, 3
    ctx->pc = 0x29d3a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 3));
label_29d3a8:
    // 0x29d3a8: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d3a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29D3A8 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d3ac:
    // 0x29d3ac: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d3acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d3b0:
    // 0x29d3b0: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29d3b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29D3B0 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d3b4:
    // 0x29d3b4: 0x834  teq         $zero, $zero, 32
    ctx->pc = 0x29d3b4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d3b8:
    // 0x29d3b8: 0x8  jr          $zero
label_29d3bc:
    if (ctx->pc == 0x29D3BCu) {
        ctx->pc = 0x29D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3B8u;
        // 0x29d3bc: 0x7d0  .word       0x000007D0                   # mfhi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3C0u;
        goto label_29d3c0;
    }
    ctx->pc = 0x29D3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3B8u;
        // 0x29d3bc: 0x7d0  .word       0x000007D0                   # mfhi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D3B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D3C0u;
label_29d3c0:
    // 0x29d3c0: 0x10  mfhi        $zero
    ctx->pc = 0x29d3c0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d3c4:
    // 0x29d3c4: 0x76c  .word       0x0000076C                   # dadd        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d3c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d3c8:
    // 0x29d3c8: 0xd  break       0
    ctx->pc = 0x29d3c8u;
    runtime->handleBreak(rdram, ctx);
label_29d3cc:
    // 0x29d3cc: 0x708  .word       0x00000708                   # jr          $zero # 00000700 <InstrIdType: CPU_SPECIAL>
label_29d3d0:
    if (ctx->pc == 0x29D3D0u) {
        ctx->pc = 0x29D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3CCu;
        // 0x29d3d0: 0x21  addu        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3D4u;
        goto label_29d3d4;
    }
    ctx->pc = 0x29D3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3CCu;
        // 0x29d3d0: 0x21  addu        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D3CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D3D4u;
label_29d3d4:
    // 0x29d3d4: 0x6a4  .word       0x000006A4                   # and         $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d3d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d3d8:
    // 0x29d3d8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d3d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d3dc:
    // 0x29d3dc: 0x640  sll         $zero, $zero, 25
    ctx->pc = 0x29d3dcu;
    
label_29d3e0:
    // 0x29d3e0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d3e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d3e4:
    // 0x29d3e4: 0x9c4  .word       0x000009C4                   # sllv        $at, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d3e8:
    // 0x29d3e8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29d3e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d3ec:
    // 0x29d3ec: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d3ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d3f0:
    // 0x29d3f0: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29d3f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29d3f4:
    // 0x29d3f4: 0x8fc  dsll32      $at, $zero, 3
    ctx->pc = 0x29d3f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 3));
label_29d3f8:
    // 0x29d3f8: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d3f8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d3fc:
    // 0x29d3fc: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d3fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d400:
    // 0x29d400: 0x8  jr          $zero
label_29d404:
    if (ctx->pc == 0x29D404u) {
        ctx->pc = 0x29D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D400u;
        // 0x29d404: 0x834  teq         $zero, $zero, 32 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D408u;
        goto label_29d408;
    }
    ctx->pc = 0x29D400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D400u;
        // 0x29d404: 0x834  teq         $zero, $zero, 32 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D400u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D408u;
label_29d408:
    // 0x29d408: 0xf  sync
    ctx->pc = 0x29d408u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29d40c:
    // 0x29d40c: 0x7d0  .word       0x000007D0                   # mfhi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d40cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d410:
    // 0x29d410: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29d410u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d414:
    // 0x29d414: 0x76c  .word       0x0000076C                   # dadd        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d414u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d418:
    // 0x29d418: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d41c:
    // 0x29d41c: 0x708  .word       0x00000708                   # jr          $zero # 00000700 <InstrIdType: CPU_SPECIAL>
label_29d420:
    if (ctx->pc == 0x29D420u) {
        ctx->pc = 0x29D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D41Cu;
        // 0x29d420: 0x10  mfhi        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D424u;
        goto label_29d424;
    }
    ctx->pc = 0x29D41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D41Cu;
        // 0x29d420: 0x10  mfhi        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D41Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D424u;
label_29d424:
    // 0x29d424: 0x6a4  .word       0x000006A4                   # and         $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d424u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d428:
    // 0x29d428: 0xd  break       0
    ctx->pc = 0x29d428u;
    runtime->handleBreak(rdram, ctx);
label_29d42c:
    // 0x29d42c: 0x640  sll         $zero, $zero, 25
    ctx->pc = 0x29d42cu;
    
label_29d430:
    // 0x29d430: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29d430u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29d434:
    // 0x29d434: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d434u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d438:
    // 0x29d438: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d438u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d43c:
    // 0x29d43c: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d43cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d440:
    // 0x29d440: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d440u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d444:
    // 0x29d444: 0x1cc  syscall     7
    ctx->pc = 0x29d444u;
    ctx->pc = 0x29D448u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29d448:
    // 0x29d448: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d448u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d44c:
    // 0x29d44c: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d44cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d450:
    // 0x29d450: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d450u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d454:
    // 0x29d454: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d454u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d458:
    // 0x29d458: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29d458u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d45c:
    // 0x29d45c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d45cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d460:
    // 0x29d460: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d460u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d464:
    // 0x29d464: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d464u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d468:
    // 0x29d468: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d468u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D468 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d46c:
    // 0x29d46c: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d46cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d470:
    // 0x29d470: 0xf  sync
    ctx->pc = 0x29d470u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29d474:
    // 0x29d474: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d474u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d478:
    // 0x29d478: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d478u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D478 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d47c:
    // 0x29d47c: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d47cu;
    
label_29d480:
    // 0x29d480: 0xc  syscall     0
    ctx->pc = 0x29d480u;
    ctx->pc = 0x29D484u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d484:
    // 0x29d484: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d484u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d488:
    // 0x29d488: 0x11  mthi        $zero
    ctx->pc = 0x29d488u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d48c:
    // 0x29d48c: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d48cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d490:
    // 0x29d490: 0x12  mflo        $zero
    ctx->pc = 0x29d490u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d494:
    // 0x29d494: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d494u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d498:
    // 0x29d498: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d498u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d49c:
    // 0x29d49c: 0x1cc  syscall     7
    ctx->pc = 0x29d49cu;
    ctx->pc = 0x29D4A0u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29d4a0:
    // 0x29d4a0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d4a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d4a4:
    // 0x29d4a4: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d4a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d4a8:
    // 0x29d4a8: 0x9  jalr        $zero, $zero
label_29d4ac:
    if (ctx->pc == 0x29D4ACu) {
        ctx->pc = 0x29D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4A8u;
        // 0x29d4ac: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4B0u;
        goto label_29d4b0;
    }
    ctx->pc = 0x29D4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4A8u;
        // 0x29d4ac: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D4A8u, 0x29D4B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D4B0u;
label_29d4b0:
    // 0x29d4b0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d4b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D4B0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d4b4:
    // 0x29d4b4: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d4b4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d4b8:
    // 0x29d4b8: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d4b8u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d4bc:
    // 0x29d4bc: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d4bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d4c0:
    // 0x29d4c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d4c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D4C0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d4c4:
    // 0x29d4c4: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d4c4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d4c8:
    // 0x29d4c8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d4c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d4cc:
    // 0x29d4cc: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d4ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d4d0:
    // 0x29d4d0: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29d4d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29d4d4:
    // 0x29d4d4: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d4d8:
    if (ctx->pc == 0x29D4D8u) {
        ctx->pc = 0x29D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4D4u;
        // 0x29d4d8: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4DCu;
        goto label_29d4dc;
    }
    ctx->pc = 0x29D4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4D4u;
        // 0x29d4d8: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D4D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D4DCu;
label_29d4dc:
    // 0x29d4dc: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d4dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d4e0:
    // 0x29d4e0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29d4e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d4e4:
    // 0x29d4e4: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d4e4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d4e8:
    // 0x29d4e8: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29d4e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29D4E8 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d4ec:
    // 0x29d4ec: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d4ecu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d4f0:
    // 0x29d4f0: 0x25  move        $zero, $zero
    ctx->pc = 0x29d4f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29d4f4:
    // 0x29d4f4: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d4f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d4f8:
    // 0x29d4f8: 0x10  mfhi        $zero
    ctx->pc = 0x29d4f8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d4fc:
    // 0x29d4fc: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d4fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d500:
    // 0x29d500: 0xd  break       0
    ctx->pc = 0x29d500u;
    runtime->handleBreak(rdram, ctx);
label_29d504:
    // 0x29d504: 0x8c  syscall     2
    ctx->pc = 0x29d504u;
    ctx->pc = 0x29D508u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d508:
    // 0x29d508: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29d508u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d50c:
    // 0x29d50c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d50cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d510:
    // 0x29d510: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d510u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d514:
    // 0x29d514: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d514u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d518:
    // 0x29d518: 0x8  jr          $zero
label_29d51c:
    if (ctx->pc == 0x29D51Cu) {
        ctx->pc = 0x29D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D518u;
        // 0x29d51c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D520u;
        goto label_29d520;
    }
    ctx->pc = 0x29D518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D518u;
        // 0x29d51c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D518u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D520u;
label_29d520:
    // 0x29d520: 0xc  syscall     0
    ctx->pc = 0x29d520u;
    ctx->pc = 0x29D524u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d524:
    // 0x29d524: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d528:
    if (ctx->pc == 0x29D528u) {
        ctx->pc = 0x29D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D524u;
        // 0x29d528: 0x11  mthi        $zero (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D52Cu;
        goto label_29d52c;
    }
    ctx->pc = 0x29D524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D524u;
        // 0x29d528: 0x11  mthi        $zero (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D524u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D52Cu;
label_29d52c:
    // 0x29d52c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d52cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d530:
    // 0x29d530: 0x9  jalr        $zero, $zero
label_29d534:
    if (ctx->pc == 0x29D534u) {
        ctx->pc = 0x29D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D530u;
        // 0x29d534: 0xb4  teq         $zero, $zero, 2 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D538u;
        goto label_29d538;
    }
    ctx->pc = 0x29D530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D530u;
        // 0x29d534: 0xb4  teq         $zero, $zero, 2 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D530u, 0x29D538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D538u;
label_29d538:
    // 0x29d538: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d538u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d53c:
    // 0x29d53c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d53cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d540:
    // 0x29d540: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D540 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d544:
    // 0x29d544: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d548:
    // 0x29d548: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d548u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D548 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d54c:
    // 0x29d54c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d54cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d550:
    // 0x29d550: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d550u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d554:
    // 0x29d554: 0x8c  syscall     2
    ctx->pc = 0x29d554u;
    ctx->pc = 0x29D558u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d558:
    // 0x29d558: 0x0  nop
    ctx->pc = 0x29d558u;
    // NOP
label_29d55c:
    // 0x29d55c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d55cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d560:
    // 0x29d560: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29d560u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d564:
    // 0x29d564: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d564u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d568:
    // 0x29d568: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d568u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d56c:
    // 0x29d56c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d56cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d570:
    // 0x29d570: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d570u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d574:
    // 0x29d574: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d578:
    if (ctx->pc == 0x29D578u) {
        ctx->pc = 0x29D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D574u;
        // 0x29d578: 0x24  and         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D57Cu;
        goto label_29d57c;
    }
    ctx->pc = 0x29D574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D574u;
        // 0x29d578: 0x24  and         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D574u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D57Cu;
label_29d57c:
    // 0x29d57c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d57cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d580:
    // 0x29d580: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d580u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d584:
    // 0x29d584: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d584u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d588:
    // 0x29d588: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d588u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d58c:
    // 0x29d58c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d58cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d590:
    // 0x29d590: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d590u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d594:
    // 0x29d594: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d598:
    // 0x29d598: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d59c:
    // 0x29d59c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d59cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d5a0:
    // 0x29d5a0: 0x8  jr          $zero
label_29d5a4:
    if (ctx->pc == 0x29D5A4u) {
        ctx->pc = 0x29D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5A0u;
        // 0x29d5a4: 0x8c  syscall     2 (Delay Slot)
        ctx->pc = 0x29D5A8u;
        runtime->handleSyscall(rdram, ctx, 0x2u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5A8u;
        goto label_29d5a8;
    }
    ctx->pc = 0x29D5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5A0u;
        // 0x29d5a4: 0x8c  syscall     2 (Delay Slot)
        ctx->pc = 0x29D5A8u;
        runtime->handleSyscall(rdram, ctx, 0x2u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D5A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D5A8u;
label_29d5a8:
    // 0x29d5a8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29d5a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d5ac:
    // 0x29d5ac: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d5acu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d5b0:
    // 0x29d5b0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29d5b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d5b4:
    // 0x29d5b4: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d5b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d5b8:
    // 0x29d5b8: 0x10  mfhi        $zero
    ctx->pc = 0x29d5b8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d5bc:
    // 0x29d5bc: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d5bcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d5c0:
    // 0x29d5c0: 0x12  mflo        $zero
    ctx->pc = 0x29d5c0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d5c4:
    // 0x29d5c4: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d5c4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d5c8:
    // 0x29d5c8: 0xc  syscall     0
    ctx->pc = 0x29d5c8u;
    ctx->pc = 0x29D5CCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d5cc:
    // 0x29d5cc: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d5ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d5d0:
    // 0x29d5d0: 0x11  mthi        $zero
    ctx->pc = 0x29d5d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d5d4:
    // 0x29d5d4: 0x1cc  syscall     7
    ctx->pc = 0x29d5d4u;
    ctx->pc = 0x29D5D8u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29d5d8:
    // 0x29d5d8: 0x9  jalr        $zero, $zero
label_29d5dc:
    if (ctx->pc == 0x29D5DCu) {
        ctx->pc = 0x29D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5D8u;
        // 0x29d5dc: 0x1b8  dsll        $zero, $zero, 6 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5E0u;
        goto label_29d5e0;
    }
    ctx->pc = 0x29D5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5D8u;
        // 0x29d5dc: 0x1b8  dsll        $zero, $zero, 6 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D5D8u, 0x29D5E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D5E0u;
label_29d5e0:
    // 0x29d5e0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d5e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d5e4:
    // 0x29d5e4: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d5e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d5e8:
    // 0x29d5e8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d5e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D5E8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d5ec:
    // 0x29d5ec: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d5ecu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d5f0:
    // 0x29d5f0: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d5f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d5f4:
    // 0x29d5f4: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d5f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d5f8:
    // 0x29d5f8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d5f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D5F8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d5fc:
    // 0x29d5fc: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d5fcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d600:
    // 0x29d600: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29d600u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29d604:
    // 0x29d604: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d604u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d608:
    // 0x29d608: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d608u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29D608 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d60c:
    // 0x29d60c: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d60cu;
    
label_29d610:
    // 0x29d610: 0x9  jalr        $zero, $zero
label_29d614:
    if (ctx->pc == 0x29D614u) {
        ctx->pc = 0x29D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D610u;
        // 0x29d614: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D618u;
        goto label_29d618;
    }
    ctx->pc = 0x29D610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D610u;
        // 0x29d614: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D610u, 0x29D618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D618u;
label_29d618:
    // 0x29d618: 0xc  syscall     0
    ctx->pc = 0x29d618u;
    ctx->pc = 0x29D61Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d61c:
    // 0x29d61c: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d61cu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29d620:
    // 0x29d620: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d620u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d624:
    // 0x29d624: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d624u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d628:
    // 0x29d628: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d628u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D628 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d62c:
    // 0x29d62c: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d62cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d630:
    // 0x29d630: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d630u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d634:
    // 0x29d634: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x29d634u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_29d638:
    // 0x29d638: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29d638u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29d63c:
    // 0x29d63c: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x29d63cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d640:
    // 0x29d640: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D640 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d644:
    // 0x29d644: 0x28  mfsa        $zero
    ctx->pc = 0x29d644u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d648:
    // 0x29d648: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d648u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d64c:
    // 0x29d64c: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29d64cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29D64C raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d650:
    // 0x29d650: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29d650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29D650 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d654:
    // 0x29d654: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29d654u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d658:
    // 0x29d658: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29d658u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d65c:
    // 0x29d65c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d65cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d660:
    // 0x29d660: 0xc  syscall     0
    ctx->pc = 0x29d660u;
    ctx->pc = 0x29D664u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d664:
    // 0x29d664: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d664u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d668:
    // 0x29d668: 0x12  mflo        $zero
    ctx->pc = 0x29d668u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d66c:
    // 0x29d66c: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d66cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d670:
    // 0x29d670: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29d670u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29d674:
    // 0x29d674: 0x1cc  syscall     7
    ctx->pc = 0x29d674u;
    ctx->pc = 0x29D678u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29d678:
    // 0x29d678: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d678u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d67c:
    // 0x29d67c: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d67cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d680:
    // 0x29d680: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d680u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d684:
    // 0x29d684: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d684u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d688:
    // 0x29d688: 0x9  jalr        $zero, $zero
label_29d68c:
    if (ctx->pc == 0x29D68Cu) {
        ctx->pc = 0x29D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D688u;
        // 0x29d68c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D690u;
        goto label_29d690;
    }
    ctx->pc = 0x29D688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D688u;
        // 0x29d68c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D688u, 0x29D690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D690u;
label_29d690:
    // 0x29d690: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D690 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d694:
    // 0x29d694: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d694u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d698:
    // 0x29d698: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d698u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D698 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d69c:
    // 0x29d69c: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d69cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d6a0:
    // 0x29d6a0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D6A0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d6a4:
    // 0x29d6a4: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d6a8:
    // 0x29d6a8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d6a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d6ac:
    // 0x29d6ac: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d6acu;
    
label_29d6b0:
    // 0x29d6b0: 0x11  mthi        $zero
    ctx->pc = 0x29d6b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d6b4:
    // 0x29d6b4: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d6b4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d6b8:
    // 0x29d6b8: 0xc  syscall     0
    ctx->pc = 0x29d6b8u;
    ctx->pc = 0x29D6BCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d6bc:
    // 0x29d6bc: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d6c0:
    // 0x29d6c0: 0x9  jalr        $zero, $zero
label_29d6c4:
    if (ctx->pc == 0x29D6C4u) {
        ctx->pc = 0x29D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6C0u;
        // 0x29d6c4: 0x1cc  syscall     7 (Delay Slot)
        ctx->pc = 0x29D6C8u;
        runtime->handleSyscall(rdram, ctx, 0x7u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6C8u;
        goto label_29d6c8;
    }
    ctx->pc = 0x29D6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6C0u;
        // 0x29d6c4: 0x1cc  syscall     7 (Delay Slot)
        ctx->pc = 0x29D6C8u;
        runtime->handleSyscall(rdram, ctx, 0x7u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D6C0u, 0x29D6C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D6C8u;
label_29d6c8:
    // 0x29d6c8: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d6c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d6cc:
    // 0x29d6cc: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d6ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d6d0:
    // 0x29d6d0: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d6d0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d6d4:
    // 0x29d6d4: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d6d8:
    // 0x29d6d8: 0xf  sync
    ctx->pc = 0x29d6d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29d6dc:
    // 0x29d6dc: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6dcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d6e0:
    // 0x29d6e0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D6E0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d6e4:
    // 0x29d6e4: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d6e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d6e8:
    // 0x29d6e8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29d6e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d6ec:
    // 0x29d6ec: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d6ecu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d6f0:
    // 0x29d6f0: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29d6f0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29d6f4:
    // 0x29d6f4: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d6f8:
    // 0x29d6f8: 0x0  nop
    ctx->pc = 0x29d6f8u;
    // NOP
label_29d6fc:
    // 0x29d6fc: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d6fcu;
    
label_29d700:
    // 0x29d700: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d700u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d704:
    // 0x29d704: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d708:
    if (ctx->pc == 0x29D708u) {
        ctx->pc = 0x29D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D704u;
        // 0x29d708: 0x24  and         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D70Cu;
        goto label_29d70c;
    }
    ctx->pc = 0x29D704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D704u;
        // 0x29d708: 0x24  and         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D704u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D70Cu;
label_29d70c:
    // 0x29d70c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d70cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d710:
    // 0x29d710: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d710u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d714:
    // 0x29d714: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d714u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d718:
    // 0x29d718: 0x22  neg         $zero, $zero
    ctx->pc = 0x29d718u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29d71c:
    // 0x29d71c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d71cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d720:
    // 0x29d720: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d720u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D720 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d724:
    // 0x29d724: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d728:
    // 0x29d728: 0x0  nop
    ctx->pc = 0x29d728u;
    // NOP
label_29d72c:
    // 0x29d72c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d72cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d730:
    // 0x29d730: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D730 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d734:
    // 0x29d734: 0x8c  syscall     2
    ctx->pc = 0x29d734u;
    ctx->pc = 0x29D738u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d738:
    // 0x29d738: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d738u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d73c:
    // 0x29d73c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d73cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d740:
    // 0x29d740: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29d740u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d744:
    // 0x29d744: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d744u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d748:
    // 0x29d748: 0x13  mtlo        $zero
    ctx->pc = 0x29d748u;
    ctx->lo = GPR_U64(ctx, 0);
label_29d74c:
    // 0x29d74c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d74cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d750:
    // 0x29d750: 0x11  mthi        $zero
    ctx->pc = 0x29d750u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d754:
    // 0x29d754: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d758:
    if (ctx->pc == 0x29D758u) {
        ctx->pc = 0x29D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D754u;
        // 0x29d758: 0x13  mtlo        $zero (Delay Slot)
        ctx->lo = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D75Cu;
        goto label_29d75c;
    }
    ctx->pc = 0x29D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D754u;
        // 0x29d758: 0x13  mtlo        $zero (Delay Slot)
        ctx->lo = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D754u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D75Cu;
label_29d75c:
    // 0x29d75c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d75cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d760:
    // 0x29d760: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d760u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d764:
    // 0x29d764: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d764u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d768:
    // 0x29d768: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d768u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29D768 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d76c:
    // 0x29d76c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d76cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d770:
    // 0x29d770: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29d770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29D770 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d774:
    // 0x29d774: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d778:
    // 0x29d778: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d778u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d77c:
    // 0x29d77c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d77cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d780:
    // 0x29d780: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29d780u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29d784:
    // 0x29d784: 0x8c  syscall     2
    ctx->pc = 0x29d784u;
    ctx->pc = 0x29D788u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d788:
    // 0x29d788: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d788u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29D788 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d78c:
    // 0x29d78c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d78cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d790:
    // 0x29d790: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D790 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d794:
    // 0x29d794: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d794u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d798:
    // 0x29d798: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d798u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d79c:
    // 0x29d79c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d79cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d7a0:
    // 0x29d7a0: 0x11  mthi        $zero
    ctx->pc = 0x29d7a0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d7a4:
    // 0x29d7a4: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d7a4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d7a8:
    // 0x29d7a8: 0x12  mflo        $zero
    ctx->pc = 0x29d7a8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d7ac:
    // 0x29d7ac: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d7acu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d7b0:
    // 0x29d7b0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d7b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d7b4:
    // 0x29d7b4: 0x1cc  syscall     7
    ctx->pc = 0x29d7b4u;
    ctx->pc = 0x29D7B8u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29d7b8:
    // 0x29d7b8: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d7b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d7bc:
    // 0x29d7bc: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d7bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d7c0:
    // 0x29d7c0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29d7c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d7c4:
    // 0x29d7c4: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d7c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d7c8:
    // 0x29d7c8: 0x10  mfhi        $zero
    ctx->pc = 0x29d7c8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d7cc:
    // 0x29d7cc: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d7ccu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d7d0:
    // 0x29d7d0: 0x25  move        $zero, $zero
    ctx->pc = 0x29d7d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29d7d4:
    // 0x29d7d4: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d7d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d7d8:
    // 0x29d7d8: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d7d8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d7dc:
    // 0x29d7dc: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d7dcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d7e0:
    // 0x29d7e0: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d7e0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d7e4:
    // 0x29d7e4: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d7e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d7e8:
    // 0x29d7e8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d7e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d7ec:
    // 0x29d7ec: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d7ecu;
    
label_29d7f0:
    // 0x29d7f0: 0x12  mflo        $zero
    ctx->pc = 0x29d7f0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d7f4:
    // 0x29d7f4: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d7f8:
    if (ctx->pc == 0x29D7F8u) {
        ctx->pc = 0x29D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7F4u;
        // 0x29d7f8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D7F8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7FCu;
        goto label_29d7fc;
    }
    ctx->pc = 0x29D7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7F4u;
        // 0x29d7f8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D7F8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D7F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D7FCu;
label_29d7fc:
    // 0x29d7fc: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d7fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d800:
    // 0x29d800: 0x10  mfhi        $zero
    ctx->pc = 0x29d800u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d804:
    // 0x29d804: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d804u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d808:
    // 0x29d808: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d808u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D808 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d80c:
    // 0x29d80c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d80cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d810:
    // 0x29d810: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d810u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d814:
    // 0x29d814: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d818:
    // 0x29d818: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d818u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d81c:
    // 0x29d81c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d81cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d820:
    // 0x29d820: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d824:
    // 0x29d824: 0x8c  syscall     2
    ctx->pc = 0x29d824u;
    ctx->pc = 0x29D828u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d828:
    // 0x29d828: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29d828u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29D828 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d82c:
    // 0x29d82c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d82cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d830:
    // 0x29d830: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d830u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d834:
    // 0x29d834: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d834u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d838:
    // 0x29d838: 0x8  jr          $zero
label_29d83c:
    if (ctx->pc == 0x29D83Cu) {
        ctx->pc = 0x29D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D838u;
        // 0x29d83c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D840u;
        goto label_29d840;
    }
    ctx->pc = 0x29D838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D838u;
        // 0x29d83c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D838u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D840u;
label_29d840:
    // 0x29d840: 0x9  jalr        $zero, $zero
label_29d844:
    if (ctx->pc == 0x29D844u) {
        ctx->pc = 0x29D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D840u;
        // 0x29d844: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D848u;
        goto label_29d848;
    }
    ctx->pc = 0x29D840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D840u;
        // 0x29d844: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D840u, 0x29D848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D848u;
label_29d848:
    // 0x29d848: 0xc  syscall     0
    ctx->pc = 0x29d848u;
    ctx->pc = 0x29D84Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d84c:
    // 0x29d84c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d84cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d850:
    // 0x29d850: 0x11  mthi        $zero
    ctx->pc = 0x29d850u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d854:
    // 0x29d854: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d854u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d858:
    // 0x29d858: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29d858u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d85c:
    // 0x29d85c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d85cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d860:
    // 0x29d860: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D860 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d864:
    // 0x29d864: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d868:
    // 0x29d868: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d868u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d86c:
    // 0x29d86c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d86cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d870:
    // 0x29d870: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d870u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d874:
    // 0x29d874: 0x8c  syscall     2
    ctx->pc = 0x29d874u;
    ctx->pc = 0x29D878u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d878:
    // 0x29d878: 0x0  nop
    ctx->pc = 0x29d878u;
    // NOP
label_29d87c:
    // 0x29d87c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d87cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d880:
    // 0x29d880: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d880u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d884:
    // 0x29d884: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d884u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d888:
    // 0x29d888: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d888u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D888 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d88c:
    // 0x29d88c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d88cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d890:
    // 0x29d890: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29d890u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29d894:
    // 0x29d894: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d894u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d898:
    // 0x29d898: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d898u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d89c:
    // 0x29d89c: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d89cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d8a0:
    // 0x29d8a0: 0x9  jalr        $zero, $zero
label_29d8a4:
    if (ctx->pc == 0x29D8A4u) {
        ctx->pc = 0x29D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8A0u;
        // 0x29d8a4: 0x1cc  syscall     7 (Delay Slot)
        ctx->pc = 0x29D8A8u;
        runtime->handleSyscall(rdram, ctx, 0x7u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D8A8u;
        goto label_29d8a8;
    }
    ctx->pc = 0x29D8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8A0u;
        // 0x29d8a4: 0x1cc  syscall     7 (Delay Slot)
        ctx->pc = 0x29D8A8u;
        runtime->handleSyscall(rdram, ctx, 0x7u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D8A0u, 0x29D8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D8A8u;
label_29d8a8:
    // 0x29d8a8: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d8a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d8ac:
    // 0x29d8ac: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d8acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d8b0:
    // 0x29d8b0: 0xc  syscall     0
    ctx->pc = 0x29d8b0u;
    ctx->pc = 0x29D8B4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d8b4:
    // 0x29d8b4: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d8b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d8b8:
    // 0x29d8b8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d8b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D8B8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d8bc:
    // 0x29d8bc: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d8bcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d8c0:
    // 0x29d8c0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d8c0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d8c4:
    // 0x29d8c4: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d8c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d8c8:
    // 0x29d8c8: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29d8c8u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d8cc:
    // 0x29d8cc: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d8ccu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d8d0:
    // 0x29d8d0: 0x0  nop
    ctx->pc = 0x29d8d0u;
    // NOP
label_29d8d4:
    // 0x29d8d4: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d8d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d8d8:
    // 0x29d8d8: 0x13  mtlo        $zero
    ctx->pc = 0x29d8d8u;
    ctx->lo = GPR_U64(ctx, 0);
label_29d8dc:
    // 0x29d8dc: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d8dcu;
    
label_29d8e0:
    // 0x29d8e0: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d8e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d8e4:
    // 0x29d8e4: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d8e4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d8e8:
    // 0x29d8e8: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d8e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d8ec:
    // 0x29d8ec: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d8ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d8f0:
    // 0x29d8f0: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29d8f0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29d8f4:
    // 0x29d8f4: 0x1cc  syscall     7
    ctx->pc = 0x29d8f4u;
    ctx->pc = 0x29D8F8u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29d8f8:
    // 0x29d8f8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d8f8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d8fc:
    // 0x29d8fc: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d8fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d900:
    // 0x29d900: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D900 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d904:
    // 0x29d904: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d904u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d908:
    // 0x29d908: 0xd  break       0
    ctx->pc = 0x29d908u;
    runtime->handleBreak(rdram, ctx);
label_29d90c:
    // 0x29d90c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d90cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d910:
    // 0x29d910: 0x13  mtlo        $zero
    ctx->pc = 0x29d910u;
    ctx->lo = GPR_U64(ctx, 0);
label_29d914:
    // 0x29d914: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d914u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d918:
    // 0x29d918: 0x0  nop
    ctx->pc = 0x29d918u;
    // NOP
label_29d91c:
    // 0x29d91c: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d91cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d920:
    // 0x29d920: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d920u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d924:
    // 0x29d924: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d924u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
    ctx->pc = 0x29d928u;
    return;
}
