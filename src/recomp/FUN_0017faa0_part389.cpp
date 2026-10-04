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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part389(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23d1e0u: goto label_23d1e0;
        case 0x23d1e4u: goto label_23d1e4;
        case 0x23d1e8u: goto label_23d1e8;
        case 0x23d1ecu: goto label_23d1ec;
        case 0x23d1f0u: goto label_23d1f0;
        case 0x23d1f4u: goto label_23d1f4;
        case 0x23d1f8u: goto label_23d1f8;
        case 0x23d1fcu: goto label_23d1fc;
        case 0x23d200u: goto label_23d200;
        case 0x23d204u: goto label_23d204;
        case 0x23d208u: goto label_23d208;
        case 0x23d20cu: goto label_23d20c;
        case 0x23d210u: goto label_23d210;
        case 0x23d214u: goto label_23d214;
        case 0x23d218u: goto label_23d218;
        case 0x23d21cu: goto label_23d21c;
        case 0x23d220u: goto label_23d220;
        case 0x23d224u: goto label_23d224;
        case 0x23d228u: goto label_23d228;
        case 0x23d22cu: goto label_23d22c;
        case 0x23d230u: goto label_23d230;
        case 0x23d234u: goto label_23d234;
        case 0x23d238u: goto label_23d238;
        case 0x23d23cu: goto label_23d23c;
        case 0x23d240u: goto label_23d240;
        case 0x23d244u: goto label_23d244;
        case 0x23d248u: goto label_23d248;
        case 0x23d24cu: goto label_23d24c;
        case 0x23d250u: goto label_23d250;
        case 0x23d254u: goto label_23d254;
        case 0x23d258u: goto label_23d258;
        case 0x23d25cu: goto label_23d25c;
        case 0x23d260u: goto label_23d260;
        case 0x23d264u: goto label_23d264;
        case 0x23d268u: goto label_23d268;
        case 0x23d26cu: goto label_23d26c;
        case 0x23d270u: goto label_23d270;
        case 0x23d274u: goto label_23d274;
        case 0x23d278u: goto label_23d278;
        case 0x23d27cu: goto label_23d27c;
        case 0x23d280u: goto label_23d280;
        case 0x23d284u: goto label_23d284;
        case 0x23d288u: goto label_23d288;
        case 0x23d28cu: goto label_23d28c;
        case 0x23d290u: goto label_23d290;
        case 0x23d294u: goto label_23d294;
        case 0x23d298u: goto label_23d298;
        case 0x23d29cu: goto label_23d29c;
        case 0x23d2a0u: goto label_23d2a0;
        case 0x23d2a4u: goto label_23d2a4;
        case 0x23d2a8u: goto label_23d2a8;
        case 0x23d2acu: goto label_23d2ac;
        case 0x23d2b0u: goto label_23d2b0;
        case 0x23d2b4u: goto label_23d2b4;
        case 0x23d2b8u: goto label_23d2b8;
        case 0x23d2bcu: goto label_23d2bc;
        case 0x23d2c0u: goto label_23d2c0;
        case 0x23d2c4u: goto label_23d2c4;
        case 0x23d2c8u: goto label_23d2c8;
        case 0x23d2ccu: goto label_23d2cc;
        case 0x23d2d0u: goto label_23d2d0;
        case 0x23d2d4u: goto label_23d2d4;
        case 0x23d2d8u: goto label_23d2d8;
        case 0x23d2dcu: goto label_23d2dc;
        case 0x23d2e0u: goto label_23d2e0;
        case 0x23d2e4u: goto label_23d2e4;
        case 0x23d2e8u: goto label_23d2e8;
        case 0x23d2ecu: goto label_23d2ec;
        case 0x23d2f0u: goto label_23d2f0;
        case 0x23d2f4u: goto label_23d2f4;
        case 0x23d2f8u: goto label_23d2f8;
        case 0x23d2fcu: goto label_23d2fc;
        case 0x23d300u: goto label_23d300;
        case 0x23d304u: goto label_23d304;
        case 0x23d308u: goto label_23d308;
        case 0x23d30cu: goto label_23d30c;
        case 0x23d310u: goto label_23d310;
        case 0x23d314u: goto label_23d314;
        case 0x23d318u: goto label_23d318;
        case 0x23d31cu: goto label_23d31c;
        case 0x23d320u: goto label_23d320;
        case 0x23d324u: goto label_23d324;
        case 0x23d328u: goto label_23d328;
        case 0x23d32cu: goto label_23d32c;
        case 0x23d330u: goto label_23d330;
        case 0x23d334u: goto label_23d334;
        case 0x23d338u: goto label_23d338;
        case 0x23d33cu: goto label_23d33c;
        case 0x23d340u: goto label_23d340;
        case 0x23d344u: goto label_23d344;
        case 0x23d348u: goto label_23d348;
        case 0x23d34cu: goto label_23d34c;
        case 0x23d350u: goto label_23d350;
        case 0x23d354u: goto label_23d354;
        case 0x23d358u: goto label_23d358;
        case 0x23d35cu: goto label_23d35c;
        case 0x23d360u: goto label_23d360;
        case 0x23d364u: goto label_23d364;
        case 0x23d368u: goto label_23d368;
        case 0x23d36cu: goto label_23d36c;
        case 0x23d370u: goto label_23d370;
        case 0x23d374u: goto label_23d374;
        case 0x23d378u: goto label_23d378;
        case 0x23d37cu: goto label_23d37c;
        case 0x23d380u: goto label_23d380;
        case 0x23d384u: goto label_23d384;
        case 0x23d388u: goto label_23d388;
        case 0x23d38cu: goto label_23d38c;
        case 0x23d390u: goto label_23d390;
        case 0x23d394u: goto label_23d394;
        case 0x23d398u: goto label_23d398;
        case 0x23d39cu: goto label_23d39c;
        case 0x23d3a0u: goto label_23d3a0;
        case 0x23d3a4u: goto label_23d3a4;
        case 0x23d3a8u: goto label_23d3a8;
        case 0x23d3acu: goto label_23d3ac;
        case 0x23d3b0u: goto label_23d3b0;
        case 0x23d3b4u: goto label_23d3b4;
        case 0x23d3b8u: goto label_23d3b8;
        case 0x23d3bcu: goto label_23d3bc;
        case 0x23d3c0u: goto label_23d3c0;
        case 0x23d3c4u: goto label_23d3c4;
        case 0x23d3c8u: goto label_23d3c8;
        case 0x23d3ccu: goto label_23d3cc;
        case 0x23d3d0u: goto label_23d3d0;
        case 0x23d3d4u: goto label_23d3d4;
        case 0x23d3d8u: goto label_23d3d8;
        case 0x23d3dcu: goto label_23d3dc;
        case 0x23d3e0u: goto label_23d3e0;
        case 0x23d3e4u: goto label_23d3e4;
        case 0x23d3e8u: goto label_23d3e8;
        case 0x23d3ecu: goto label_23d3ec;
        case 0x23d3f0u: goto label_23d3f0;
        case 0x23d3f4u: goto label_23d3f4;
        case 0x23d3f8u: goto label_23d3f8;
        case 0x23d3fcu: goto label_23d3fc;
        case 0x23d400u: goto label_23d400;
        case 0x23d404u: goto label_23d404;
        case 0x23d408u: goto label_23d408;
        case 0x23d40cu: goto label_23d40c;
        case 0x23d410u: goto label_23d410;
        case 0x23d414u: goto label_23d414;
        case 0x23d418u: goto label_23d418;
        case 0x23d41cu: goto label_23d41c;
        case 0x23d420u: goto label_23d420;
        case 0x23d424u: goto label_23d424;
        case 0x23d428u: goto label_23d428;
        case 0x23d42cu: goto label_23d42c;
        case 0x23d430u: goto label_23d430;
        case 0x23d434u: goto label_23d434;
        case 0x23d438u: goto label_23d438;
        case 0x23d43cu: goto label_23d43c;
        case 0x23d440u: goto label_23d440;
        case 0x23d444u: goto label_23d444;
        case 0x23d448u: goto label_23d448;
        case 0x23d44cu: goto label_23d44c;
        case 0x23d450u: goto label_23d450;
        case 0x23d454u: goto label_23d454;
        case 0x23d458u: goto label_23d458;
        case 0x23d45cu: goto label_23d45c;
        case 0x23d460u: goto label_23d460;
        case 0x23d464u: goto label_23d464;
        case 0x23d468u: goto label_23d468;
        case 0x23d46cu: goto label_23d46c;
        case 0x23d470u: goto label_23d470;
        case 0x23d474u: goto label_23d474;
        case 0x23d478u: goto label_23d478;
        case 0x23d47cu: goto label_23d47c;
        case 0x23d480u: goto label_23d480;
        case 0x23d484u: goto label_23d484;
        case 0x23d488u: goto label_23d488;
        case 0x23d48cu: goto label_23d48c;
        case 0x23d490u: goto label_23d490;
        case 0x23d494u: goto label_23d494;
        case 0x23d498u: goto label_23d498;
        case 0x23d49cu: goto label_23d49c;
        case 0x23d4a0u: goto label_23d4a0;
        case 0x23d4a4u: goto label_23d4a4;
        case 0x23d4a8u: goto label_23d4a8;
        case 0x23d4acu: goto label_23d4ac;
        case 0x23d4b0u: goto label_23d4b0;
        case 0x23d4b4u: goto label_23d4b4;
        case 0x23d4b8u: goto label_23d4b8;
        case 0x23d4bcu: goto label_23d4bc;
        case 0x23d4c0u: goto label_23d4c0;
        case 0x23d4c4u: goto label_23d4c4;
        case 0x23d4c8u: goto label_23d4c8;
        case 0x23d4ccu: goto label_23d4cc;
        case 0x23d4d0u: goto label_23d4d0;
        case 0x23d4d4u: goto label_23d4d4;
        case 0x23d4d8u: goto label_23d4d8;
        case 0x23d4dcu: goto label_23d4dc;
        case 0x23d4e0u: goto label_23d4e0;
        case 0x23d4e4u: goto label_23d4e4;
        case 0x23d4e8u: goto label_23d4e8;
        case 0x23d4ecu: goto label_23d4ec;
        case 0x23d4f0u: goto label_23d4f0;
        case 0x23d4f4u: goto label_23d4f4;
        case 0x23d4f8u: goto label_23d4f8;
        case 0x23d4fcu: goto label_23d4fc;
        case 0x23d500u: goto label_23d500;
        case 0x23d504u: goto label_23d504;
        case 0x23d508u: goto label_23d508;
        case 0x23d50cu: goto label_23d50c;
        case 0x23d510u: goto label_23d510;
        case 0x23d514u: goto label_23d514;
        case 0x23d518u: goto label_23d518;
        case 0x23d51cu: goto label_23d51c;
        case 0x23d520u: goto label_23d520;
        case 0x23d524u: goto label_23d524;
        case 0x23d528u: goto label_23d528;
        case 0x23d52cu: goto label_23d52c;
        case 0x23d530u: goto label_23d530;
        case 0x23d534u: goto label_23d534;
        case 0x23d538u: goto label_23d538;
        case 0x23d53cu: goto label_23d53c;
        case 0x23d540u: goto label_23d540;
        case 0x23d544u: goto label_23d544;
        case 0x23d548u: goto label_23d548;
        case 0x23d54cu: goto label_23d54c;
        case 0x23d550u: goto label_23d550;
        case 0x23d554u: goto label_23d554;
        case 0x23d558u: goto label_23d558;
        case 0x23d55cu: goto label_23d55c;
        case 0x23d560u: goto label_23d560;
        case 0x23d564u: goto label_23d564;
        case 0x23d568u: goto label_23d568;
        case 0x23d56cu: goto label_23d56c;
        case 0x23d570u: goto label_23d570;
        case 0x23d574u: goto label_23d574;
        case 0x23d578u: goto label_23d578;
        case 0x23d57cu: goto label_23d57c;
        case 0x23d580u: goto label_23d580;
        case 0x23d584u: goto label_23d584;
        case 0x23d588u: goto label_23d588;
        case 0x23d58cu: goto label_23d58c;
        case 0x23d590u: goto label_23d590;
        case 0x23d594u: goto label_23d594;
        case 0x23d598u: goto label_23d598;
        case 0x23d59cu: goto label_23d59c;
        case 0x23d5a0u: goto label_23d5a0;
        case 0x23d5a4u: goto label_23d5a4;
        case 0x23d5a8u: goto label_23d5a8;
        case 0x23d5acu: goto label_23d5ac;
        case 0x23d5b0u: goto label_23d5b0;
        case 0x23d5b4u: goto label_23d5b4;
        case 0x23d5b8u: goto label_23d5b8;
        case 0x23d5bcu: goto label_23d5bc;
        case 0x23d5c0u: goto label_23d5c0;
        case 0x23d5c4u: goto label_23d5c4;
        case 0x23d5c8u: goto label_23d5c8;
        case 0x23d5ccu: goto label_23d5cc;
        case 0x23d5d0u: goto label_23d5d0;
        case 0x23d5d4u: goto label_23d5d4;
        case 0x23d5d8u: goto label_23d5d8;
        case 0x23d5dcu: goto label_23d5dc;
        case 0x23d5e0u: goto label_23d5e0;
        case 0x23d5e4u: goto label_23d5e4;
        case 0x23d5e8u: goto label_23d5e8;
        case 0x23d5ecu: goto label_23d5ec;
        case 0x23d5f0u: goto label_23d5f0;
        case 0x23d5f4u: goto label_23d5f4;
        case 0x23d5f8u: goto label_23d5f8;
        case 0x23d5fcu: goto label_23d5fc;
        case 0x23d600u: goto label_23d600;
        case 0x23d604u: goto label_23d604;
        case 0x23d608u: goto label_23d608;
        case 0x23d60cu: goto label_23d60c;
        case 0x23d610u: goto label_23d610;
        case 0x23d614u: goto label_23d614;
        case 0x23d618u: goto label_23d618;
        case 0x23d61cu: goto label_23d61c;
        case 0x23d620u: goto label_23d620;
        case 0x23d624u: goto label_23d624;
        case 0x23d628u: goto label_23d628;
        case 0x23d62cu: goto label_23d62c;
        case 0x23d630u: goto label_23d630;
        case 0x23d634u: goto label_23d634;
        case 0x23d638u: goto label_23d638;
        case 0x23d63cu: goto label_23d63c;
        case 0x23d640u: goto label_23d640;
        case 0x23d644u: goto label_23d644;
        case 0x23d648u: goto label_23d648;
        case 0x23d64cu: goto label_23d64c;
        case 0x23d650u: goto label_23d650;
        case 0x23d654u: goto label_23d654;
        case 0x23d658u: goto label_23d658;
        case 0x23d65cu: goto label_23d65c;
        case 0x23d660u: goto label_23d660;
        case 0x23d664u: goto label_23d664;
        case 0x23d668u: goto label_23d668;
        case 0x23d66cu: goto label_23d66c;
        case 0x23d670u: goto label_23d670;
        case 0x23d674u: goto label_23d674;
        case 0x23d678u: goto label_23d678;
        case 0x23d67cu: goto label_23d67c;
        case 0x23d680u: goto label_23d680;
        case 0x23d684u: goto label_23d684;
        case 0x23d688u: goto label_23d688;
        case 0x23d68cu: goto label_23d68c;
        case 0x23d690u: goto label_23d690;
        case 0x23d694u: goto label_23d694;
        case 0x23d698u: goto label_23d698;
        case 0x23d69cu: goto label_23d69c;
        case 0x23d6a0u: goto label_23d6a0;
        case 0x23d6a4u: goto label_23d6a4;
        case 0x23d6a8u: goto label_23d6a8;
        case 0x23d6acu: goto label_23d6ac;
        case 0x23d6b0u: goto label_23d6b0;
        case 0x23d6b4u: goto label_23d6b4;
        case 0x23d6b8u: goto label_23d6b8;
        case 0x23d6bcu: goto label_23d6bc;
        case 0x23d6c0u: goto label_23d6c0;
        case 0x23d6c4u: goto label_23d6c4;
        case 0x23d6c8u: goto label_23d6c8;
        case 0x23d6ccu: goto label_23d6cc;
        case 0x23d6d0u: goto label_23d6d0;
        case 0x23d6d4u: goto label_23d6d4;
        case 0x23d6d8u: goto label_23d6d8;
        case 0x23d6dcu: goto label_23d6dc;
        case 0x23d6e0u: goto label_23d6e0;
        case 0x23d6e4u: goto label_23d6e4;
        case 0x23d6e8u: goto label_23d6e8;
        case 0x23d6ecu: goto label_23d6ec;
        case 0x23d6f0u: goto label_23d6f0;
        case 0x23d6f4u: goto label_23d6f4;
        case 0x23d6f8u: goto label_23d6f8;
        case 0x23d6fcu: goto label_23d6fc;
        case 0x23d700u: goto label_23d700;
        case 0x23d704u: goto label_23d704;
        case 0x23d708u: goto label_23d708;
        case 0x23d70cu: goto label_23d70c;
        case 0x23d710u: goto label_23d710;
        case 0x23d714u: goto label_23d714;
        case 0x23d718u: goto label_23d718;
        case 0x23d71cu: goto label_23d71c;
        case 0x23d720u: goto label_23d720;
        case 0x23d724u: goto label_23d724;
        case 0x23d728u: goto label_23d728;
        case 0x23d72cu: goto label_23d72c;
        case 0x23d730u: goto label_23d730;
        case 0x23d734u: goto label_23d734;
        case 0x23d738u: goto label_23d738;
        case 0x23d73cu: goto label_23d73c;
        case 0x23d740u: goto label_23d740;
        case 0x23d744u: goto label_23d744;
        case 0x23d748u: goto label_23d748;
        case 0x23d74cu: goto label_23d74c;
        case 0x23d750u: goto label_23d750;
        case 0x23d754u: goto label_23d754;
        case 0x23d758u: goto label_23d758;
        case 0x23d75cu: goto label_23d75c;
        case 0x23d760u: goto label_23d760;
        case 0x23d764u: goto label_23d764;
        case 0x23d768u: goto label_23d768;
        case 0x23d76cu: goto label_23d76c;
        case 0x23d770u: goto label_23d770;
        case 0x23d774u: goto label_23d774;
        case 0x23d778u: goto label_23d778;
        case 0x23d77cu: goto label_23d77c;
        case 0x23d780u: goto label_23d780;
        case 0x23d784u: goto label_23d784;
        case 0x23d788u: goto label_23d788;
        case 0x23d78cu: goto label_23d78c;
        case 0x23d790u: goto label_23d790;
        case 0x23d794u: goto label_23d794;
        case 0x23d798u: goto label_23d798;
        case 0x23d79cu: goto label_23d79c;
        case 0x23d7a0u: goto label_23d7a0;
        case 0x23d7a4u: goto label_23d7a4;
        case 0x23d7a8u: goto label_23d7a8;
        case 0x23d7acu: goto label_23d7ac;
        case 0x23d7b0u: goto label_23d7b0;
        case 0x23d7b4u: goto label_23d7b4;
        case 0x23d7b8u: goto label_23d7b8;
        case 0x23d7bcu: goto label_23d7bc;
        case 0x23d7c0u: goto label_23d7c0;
        case 0x23d7c4u: goto label_23d7c4;
        case 0x23d7c8u: goto label_23d7c8;
        case 0x23d7ccu: goto label_23d7cc;
        case 0x23d7d0u: goto label_23d7d0;
        case 0x23d7d4u: goto label_23d7d4;
        case 0x23d7d8u: goto label_23d7d8;
        case 0x23d7dcu: goto label_23d7dc;
        case 0x23d7e0u: goto label_23d7e0;
        case 0x23d7e4u: goto label_23d7e4;
        case 0x23d7e8u: goto label_23d7e8;
        case 0x23d7ecu: goto label_23d7ec;
        case 0x23d7f0u: goto label_23d7f0;
        case 0x23d7f4u: goto label_23d7f4;
        case 0x23d7f8u: goto label_23d7f8;
        case 0x23d7fcu: goto label_23d7fc;
        case 0x23d800u: goto label_23d800;
        case 0x23d804u: goto label_23d804;
        case 0x23d808u: goto label_23d808;
        case 0x23d80cu: goto label_23d80c;
        case 0x23d810u: goto label_23d810;
        case 0x23d814u: goto label_23d814;
        case 0x23d818u: goto label_23d818;
        case 0x23d81cu: goto label_23d81c;
        case 0x23d820u: goto label_23d820;
        case 0x23d824u: goto label_23d824;
        case 0x23d828u: goto label_23d828;
        case 0x23d82cu: goto label_23d82c;
        case 0x23d830u: goto label_23d830;
        case 0x23d834u: goto label_23d834;
        case 0x23d838u: goto label_23d838;
        case 0x23d83cu: goto label_23d83c;
        case 0x23d840u: goto label_23d840;
        case 0x23d844u: goto label_23d844;
        case 0x23d848u: goto label_23d848;
        case 0x23d84cu: goto label_23d84c;
        case 0x23d850u: goto label_23d850;
        case 0x23d854u: goto label_23d854;
        case 0x23d858u: goto label_23d858;
        case 0x23d85cu: goto label_23d85c;
        case 0x23d860u: goto label_23d860;
        case 0x23d864u: goto label_23d864;
        case 0x23d868u: goto label_23d868;
        case 0x23d86cu: goto label_23d86c;
        case 0x23d870u: goto label_23d870;
        case 0x23d874u: goto label_23d874;
        case 0x23d878u: goto label_23d878;
        case 0x23d87cu: goto label_23d87c;
        case 0x23d880u: goto label_23d880;
        case 0x23d884u: goto label_23d884;
        case 0x23d888u: goto label_23d888;
        case 0x23d88cu: goto label_23d88c;
        case 0x23d890u: goto label_23d890;
        case 0x23d894u: goto label_23d894;
        case 0x23d898u: goto label_23d898;
        case 0x23d89cu: goto label_23d89c;
        case 0x23d8a0u: goto label_23d8a0;
        case 0x23d8a4u: goto label_23d8a4;
        case 0x23d8a8u: goto label_23d8a8;
        case 0x23d8acu: goto label_23d8ac;
        case 0x23d8b0u: goto label_23d8b0;
        case 0x23d8b4u: goto label_23d8b4;
        case 0x23d8b8u: goto label_23d8b8;
        case 0x23d8bcu: goto label_23d8bc;
        case 0x23d8c0u: goto label_23d8c0;
        case 0x23d8c4u: goto label_23d8c4;
        case 0x23d8c8u: goto label_23d8c8;
        case 0x23d8ccu: goto label_23d8cc;
        case 0x23d8d0u: goto label_23d8d0;
        case 0x23d8d4u: goto label_23d8d4;
        case 0x23d8d8u: goto label_23d8d8;
        case 0x23d8dcu: goto label_23d8dc;
        case 0x23d8e0u: goto label_23d8e0;
        case 0x23d8e4u: goto label_23d8e4;
        case 0x23d8e8u: goto label_23d8e8;
        case 0x23d8ecu: goto label_23d8ec;
        case 0x23d8f0u: goto label_23d8f0;
        case 0x23d8f4u: goto label_23d8f4;
        case 0x23d8f8u: goto label_23d8f8;
        case 0x23d8fcu: goto label_23d8fc;
        case 0x23d900u: goto label_23d900;
        case 0x23d904u: goto label_23d904;
        case 0x23d908u: goto label_23d908;
        case 0x23d90cu: goto label_23d90c;
        case 0x23d910u: goto label_23d910;
        case 0x23d914u: goto label_23d914;
        case 0x23d918u: goto label_23d918;
        case 0x23d91cu: goto label_23d91c;
        case 0x23d920u: goto label_23d920;
        case 0x23d924u: goto label_23d924;
        case 0x23d928u: goto label_23d928;
        case 0x23d92cu: goto label_23d92c;
        case 0x23d930u: goto label_23d930;
        case 0x23d934u: goto label_23d934;
        case 0x23d938u: goto label_23d938;
        case 0x23d93cu: goto label_23d93c;
        case 0x23d940u: goto label_23d940;
        case 0x23d944u: goto label_23d944;
        case 0x23d948u: goto label_23d948;
        case 0x23d94cu: goto label_23d94c;
        case 0x23d950u: goto label_23d950;
        case 0x23d954u: goto label_23d954;
        case 0x23d958u: goto label_23d958;
        case 0x23d95cu: goto label_23d95c;
        case 0x23d960u: goto label_23d960;
        case 0x23d964u: goto label_23d964;
        case 0x23d968u: goto label_23d968;
        case 0x23d96cu: goto label_23d96c;
        case 0x23d970u: goto label_23d970;
        case 0x23d974u: goto label_23d974;
        case 0x23d978u: goto label_23d978;
        case 0x23d97cu: goto label_23d97c;
        case 0x23d980u: goto label_23d980;
        case 0x23d984u: goto label_23d984;
        case 0x23d988u: goto label_23d988;
        case 0x23d98cu: goto label_23d98c;
        case 0x23d990u: goto label_23d990;
        case 0x23d994u: goto label_23d994;
        case 0x23d998u: goto label_23d998;
        case 0x23d99cu: goto label_23d99c;
        case 0x23d9a0u: goto label_23d9a0;
        case 0x23d9a4u: goto label_23d9a4;
        case 0x23d9a8u: goto label_23d9a8;
        case 0x23d9acu: goto label_23d9ac;
        default: return;
    }

label_23d1e0:
    if (ctx->pc == 0x23D1E0u) {
        ctx->pc = 0x23D1E4u;
        goto label_23d1e4;
    }
    ctx->pc = 0x23D1DCu;
    {
        const bool branch_taken_0x23d1dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d1dc) {
            ctx->pc = 0x23D234u;
            goto label_23d234;
        }
    }
    ctx->pc = 0x23D1E4u;
label_23d1e4:
    // 0x23d1e4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23d1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23d1e8:
    // 0x23d1e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23d1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23d1ec:
    // 0x23d1ec: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d1f0:
    // 0x23d1f0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_23d1f4:
    // 0x23d1f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_23d1f8:
    if (ctx->pc == 0x23D1F8u) {
        ctx->pc = 0x23D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1F4u;
        // 0x23d1f8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1FCu;
        goto label_23d1fc;
    }
    ctx->pc = 0x23D1F4u;
    {
        const bool branch_taken_0x23d1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1F4u;
        // 0x23d1f8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1f4) {
            ctx->pc = 0x23D234u;
            goto label_23d234;
        }
    }
    ctx->pc = 0x23D1FCu;
label_23d1fc:
    // 0x23d1fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_23d200:
    // 0x23d200: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23d200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_23d204:
    // 0x23d204: 0x0  nop
    ctx->pc = 0x23d204u;
    // NOP
label_23d208:
    // 0x23d208: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_23d20c:
    if (ctx->pc == 0x23D20Cu) {
        ctx->pc = 0x23D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D208u;
        // 0x23d20c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D210u;
        goto label_23d210;
    }
    ctx->pc = 0x23D208u;
    {
        const bool branch_taken_0x23d208 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d208) {
            ctx->pc = 0x23D20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D208u;
            // 0x23d20c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D210u;
            goto label_23d210;
        }
    }
    ctx->pc = 0x23D210u;
label_23d210:
    // 0x23d210: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23d210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23d214:
    // 0x23d214: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
label_23d218:
    if (ctx->pc == 0x23D218u) {
        ctx->pc = 0x23D21Cu;
        goto label_23d21c;
    }
    ctx->pc = 0x23D214u;
    {
        const bool branch_taken_0x23d214 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x23d214) {
            ctx->pc = 0x23D234u;
            goto label_23d234;
        }
    }
    ctx->pc = 0x23D21Cu;
label_23d21c:
    // 0x23d21c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23d21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23d220:
    // 0x23d220: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23d220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23d224:
    // 0x23d224: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d228:
    // 0x23d228: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23d228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_23d22c:
    // 0x23d22c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_23d230:
    if (ctx->pc == 0x23D230u) {
        ctx->pc = 0x23D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D22Cu;
        // 0x23d230: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D234u;
        goto label_23d234;
    }
    ctx->pc = 0x23D22Cu;
    {
        const bool branch_taken_0x23d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D22Cu;
        // 0x23d230: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d22c) {
            ctx->pc = 0x23D208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d208;
        }
    }
    ctx->pc = 0x23D234u;
label_23d234:
    // 0x23d234: 0x3e00008  jr          $ra
label_23d238:
    if (ctx->pc == 0x23D238u) {
        ctx->pc = 0x23D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D234u;
        // 0x23d238: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D23Cu;
        goto label_23d23c;
    }
    ctx->pc = 0x23D234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D234u;
        // 0x23d238: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D23Cu;
label_23d23c:
    // 0x23d23c: 0x0  nop
    ctx->pc = 0x23d23cu;
    // NOP
label_23d240:
    // 0x23d240: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_23d244:
    if (ctx->pc == 0x23D244u) {
        ctx->pc = 0x23D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D240u;
        // 0x23d244: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D248u;
        goto label_23d248;
    }
    ctx->pc = 0x23D240u;
    {
        const bool branch_taken_0x23d240 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D240u;
        // 0x23d244: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d240) {
            ctx->pc = 0x23D250u;
            goto label_23d250;
        }
    }
    ctx->pc = 0x23D248u;
label_23d248:
    // 0x23d248: 0x3e00008  jr          $ra
label_23d24c:
    if (ctx->pc == 0x23D24Cu) {
        ctx->pc = 0x23D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D248u;
        // 0x23d24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D250u;
        goto label_23d250;
    }
    ctx->pc = 0x23D248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D248u;
        // 0x23d24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D250u;
label_23d250:
    // 0x23d250: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x23d250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_23d254:
    // 0x23d254: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_23d258:
    if (ctx->pc == 0x23D258u) {
        ctx->pc = 0x23D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D254u;
        // 0x23d258: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D25Cu;
        goto label_23d25c;
    }
    ctx->pc = 0x23D254u;
    {
        const bool branch_taken_0x23d254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D254u;
        // 0x23d258: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d254) {
            ctx->pc = 0x23D3ACu;
            goto label_23d3ac;
        }
    }
    ctx->pc = 0x23D25Cu;
label_23d25c:
    // 0x23d25c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x23d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_23d260:
    // 0x23d260: 0x2cc70010  sltiu       $a3, $a2, 0x10
    ctx->pc = 0x23d260u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_23d264:
    // 0x23d264: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x23d264u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
label_23d268:
    // 0x23d268: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d268u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
label_23d26c:
    // 0x23d26c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d26cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
label_23d270:
    // 0x23d270: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d270u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
label_23d274:
    // 0x23d274: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d274u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
label_23d278:
    // 0x23d278: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d278u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
label_23d27c:
    // 0x23d27c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x23d27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_23d280:
    // 0x23d280: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_23d284:
    if (ctx->pc == 0x23D284u) {
        ctx->pc = 0x23D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D280u;
        // 0x23d284: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D288u;
        goto label_23d288;
    }
    ctx->pc = 0x23D280u;
    {
        const bool branch_taken_0x23d280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D280u;
        // 0x23d284: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d280) {
            ctx->pc = 0x23D328u;
            goto label_23d328;
        }
    }
    ctx->pc = 0x23D288u;
label_23d288:
    // 0x23d288: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x23d288u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_23d28c:
    // 0x23d28c: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x23d28cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
label_23d290:
    // 0x23d290: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23d290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23d294:
    // 0x23d294: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x23d294u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
label_23d298:
    // 0x23d298: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23d298u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
label_23d29c:
    // 0x23d29c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23d29cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
label_23d2a0:
    // 0x23d2a0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23d2a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
label_23d2a4:
    // 0x23d2a4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23d2a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
label_23d2a8:
    // 0x23d2a8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23d2a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
label_23d2ac:
    // 0x23d2ac: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x23d2acu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_23d2b0:
    // 0x23d2b0: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x23d2b0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
label_23d2b4:
    // 0x23d2b4: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x23d2b4u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_23d2b8:
    // 0x23d2b8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x23d2b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23d2bc:
    // 0x23d2bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x23d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23d2c0:
    // 0x23d2c0: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
label_23d2c4:
    if (ctx->pc == 0x23D2C4u) {
        ctx->pc = 0x23D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2C0u;
        // 0x23d2c4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2C8u;
        goto label_23d2c8;
    }
    ctx->pc = 0x23D2C0u;
    {
        const bool branch_taken_0x23d2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2C0u;
        // 0x23d2c4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2c0) {
            ctx->pc = 0x23D3ACu;
            goto label_23d3ac;
        }
    }
    ctx->pc = 0x23D2C8u;
label_23d2c8:
    // 0x23d2c8: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x23d2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_23d2cc:
    // 0x23d2cc: 0x10c0ffde  beqz        $a2, . + 4 + (-0x22 << 2)
label_23d2d0:
    if (ctx->pc == 0x23D2D0u) {
        ctx->pc = 0x23D2D4u;
        goto label_23d2d4;
    }
    ctx->pc = 0x23D2CCu;
    {
        const bool branch_taken_0x23d2cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d2cc) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D2D4u;
label_23d2d4:
    // 0x23d2d4: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x23d2d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_23d2d8:
    // 0x23d2d8: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x23d2d8u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_23d2dc:
    // 0x23d2dc: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x23d2dcu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
label_23d2e0:
    // 0x23d2e0: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23d2e0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23d2e4:
    // 0x23d2e4: 0x70491c89  pand        $v1, $v0, $t1
    ctx->pc = 0x23d2e4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
label_23d2e8:
    // 0x23d2e8: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x23d2e8u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_23d2ec:
    // 0x23d2ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23d2f0:
    // 0x23d2f0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_23d2f4:
    if (ctx->pc == 0x23D2F4u) {
        ctx->pc = 0x23D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2F0u;
        // 0x23d2f4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2F8u;
        goto label_23d2f8;
    }
    ctx->pc = 0x23D2F0u;
    {
        const bool branch_taken_0x23d2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2F0u;
        // 0x23d2f4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2f0) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D2F8u;
label_23d2f8:
    // 0x23d2f8: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x23d2f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_23d2fc:
    // 0x23d2fc: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x23d2fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_23d300:
    // 0x23d300: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_23d304:
    if (ctx->pc == 0x23D304u) {
        ctx->pc = 0x23D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D300u;
        // 0x23d304: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D308u;
        goto label_23d308;
    }
    ctx->pc = 0x23D300u;
    {
        const bool branch_taken_0x23d300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D300u;
        // 0x23d304: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d300) {
            ctx->pc = 0x23D3A0u;
            goto label_23d3a0;
        }
    }
    ctx->pc = 0x23D308u;
label_23d308:
    // 0x23d308: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x23d308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_23d30c:
    // 0x23d30c: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x23d30cu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_23d310:
    // 0x23d310: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x23d310u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_23d314:
    // 0x23d314: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23d318:
    // 0x23d318: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
label_23d31c:
    if (ctx->pc == 0x23D31Cu) {
        ctx->pc = 0x23D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D318u;
        // 0x23d31c: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D320u;
        goto label_23d320;
    }
    ctx->pc = 0x23D318u;
    {
        const bool branch_taken_0x23d318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d318) {
            ctx->pc = 0x23D31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D318u;
            // 0x23d31c: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D2CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d2cc;
        }
    }
    ctx->pc = 0x23D320u;
label_23d320:
    // 0x23d320: 0x10000020  b           . + 4 + (0x20 << 2)
label_23d324:
    if (ctx->pc == 0x23D324u) {
        ctx->pc = 0x23D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D320u;
        // 0x23d324: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D328u;
        goto label_23d328;
    }
    ctx->pc = 0x23D320u;
    {
        const bool branch_taken_0x23d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D320u;
        // 0x23d324: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d320) {
            ctx->pc = 0x23D3A4u;
            goto label_23d3a4;
        }
    }
    ctx->pc = 0x23D328u;
label_23d328:
    // 0x23d328: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23d328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23d32c:
    // 0x23d32c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_23d330:
    if (ctx->pc == 0x23D330u) {
        ctx->pc = 0x23D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D32Cu;
        // 0x23d330: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D334u;
        goto label_23d334;
    }
    ctx->pc = 0x23D32Cu;
    {
        const bool branch_taken_0x23d32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D32Cu;
        // 0x23d330: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d32c) {
            ctx->pc = 0x23D3A0u;
            goto label_23d3a0;
        }
    }
    ctx->pc = 0x23D334u;
label_23d334:
    // 0x23d334: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x23d334u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23d338:
    // 0x23d338: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x23d338u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23d33c:
    // 0x23d33c: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_23d340:
    if (ctx->pc == 0x23D340u) {
        ctx->pc = 0x23D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D33Cu;
        // 0x23d340: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D344u;
        goto label_23d344;
    }
    ctx->pc = 0x23D33Cu;
    {
        const bool branch_taken_0x23d33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D33Cu;
        // 0x23d340: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d33c) {
            ctx->pc = 0x23D3ACu;
            goto label_23d3ac;
        }
    }
    ctx->pc = 0x23D344u;
label_23d344:
    // 0x23d344: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23d344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_23d348:
    // 0x23d348: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x23d348u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
label_23d34c:
    // 0x23d34c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d34cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
label_23d350:
    // 0x23d350: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x23d350u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_23d354:
    // 0x23d354: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d354u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
label_23d358:
    // 0x23d358: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x23d358u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_23d35c:
    // 0x23d35c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d35cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
label_23d360:
    // 0x23d360: 0x10c0ffb9  beqz        $a2, . + 4 + (-0x47 << 2)
label_23d364:
    if (ctx->pc == 0x23D364u) {
        ctx->pc = 0x23D368u;
        goto label_23d368;
    }
    ctx->pc = 0x23D360u;
    {
        const bool branch_taken_0x23d360 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d360) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D368u;
label_23d368:
    // 0x23d368: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x23d368u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_23d36c:
    // 0x23d36c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23d36cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23d370:
    // 0x23d370: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x23d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
label_23d374:
    // 0x23d374: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23d378:
    // 0x23d378: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x23d378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_23d37c:
    // 0x23d37c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_23d380:
    if (ctx->pc == 0x23D380u) {
        ctx->pc = 0x23D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D37Cu;
        // 0x23d380: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D384u;
        goto label_23d384;
    }
    ctx->pc = 0x23D37Cu;
    {
        const bool branch_taken_0x23d37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D37Cu;
        // 0x23d380: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d37c) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D384u;
label_23d384:
    // 0x23d384: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23d384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23d388:
    // 0x23d388: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23d38c:
    if (ctx->pc == 0x23D38Cu) {
        ctx->pc = 0x23D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D388u;
        // 0x23d38c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D390u;
        goto label_23d390;
    }
    ctx->pc = 0x23D388u;
    {
        const bool branch_taken_0x23d388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D388u;
        // 0x23d38c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d388) {
            ctx->pc = 0x23D3A0u;
            goto label_23d3a0;
        }
    }
    ctx->pc = 0x23D390u;
label_23d390:
    // 0x23d390: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x23d390u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_23d394:
    // 0x23d394: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x23d394u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
label_23d398:
    // 0x23d398: 0x5062fff1  beql        $v1, $v0, . + 4 + (-0xF << 2)
label_23d39c:
    if (ctx->pc == 0x23D39Cu) {
        ctx->pc = 0x23D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D398u;
        // 0x23d39c: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3A0u;
        goto label_23d3a0;
    }
    ctx->pc = 0x23D398u;
    {
        const bool branch_taken_0x23d398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d398) {
            ctx->pc = 0x23D39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D398u;
            // 0x23d39c: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d360;
        }
    }
    ctx->pc = 0x23D3A0u;
label_23d3a0:
    // 0x23d3a0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23d3a4:
    // 0x23d3a4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x23d3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23d3a8:
    // 0x23d3a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x23d3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23d3ac:
    // 0x23d3ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23d3b0:
    if (ctx->pc == 0x23D3B0u) {
        ctx->pc = 0x23D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3ACu;
        // 0x23d3b0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3B4u;
        goto label_23d3b4;
    }
    ctx->pc = 0x23D3ACu;
    {
        const bool branch_taken_0x23d3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3ACu;
        // 0x23d3b0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3ac) {
            ctx->pc = 0x23D3E8u;
            goto label_23d3e8;
        }
    }
    ctx->pc = 0x23D3B4u;
label_23d3b4:
    // 0x23d3b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_23d3b8:
    if (ctx->pc == 0x23D3B8u) {
        ctx->pc = 0x23D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3B4u;
        // 0x23d3b8: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3BCu;
        goto label_23d3bc;
    }
    ctx->pc = 0x23D3B4u;
    {
        const bool branch_taken_0x23d3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3B4u;
        // 0x23d3b8: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3b4) {
            ctx->pc = 0x23D3DCu;
            goto label_23d3dc;
        }
    }
    ctx->pc = 0x23D3BCu;
label_23d3bc:
    // 0x23d3bc: 0x0  nop
    ctx->pc = 0x23d3bcu;
    // NOP
label_23d3c0:
    // 0x23d3c0: 0x10c0ffa1  beqz        $a2, . + 4 + (-0x5F << 2)
label_23d3c4:
    if (ctx->pc == 0x23D3C4u) {
        ctx->pc = 0x23D3C8u;
        goto label_23d3c8;
    }
    ctx->pc = 0x23D3C0u;
    {
        const bool branch_taken_0x23d3c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d3c0) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D3C8u;
label_23d3c8:
    // 0x23d3c8: 0x10e0ff9f  beqz        $a3, . + 4 + (-0x61 << 2)
label_23d3cc:
    if (ctx->pc == 0x23D3CCu) {
        ctx->pc = 0x23D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3C8u;
        // 0x23d3cc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3D0u;
        goto label_23d3d0;
    }
    ctx->pc = 0x23D3C8u;
    {
        const bool branch_taken_0x23d3c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3C8u;
        // 0x23d3cc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3c8) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D3D0u;
label_23d3d0:
    // 0x23d3d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23d3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23d3d4:
    // 0x23d3d4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x23d3d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23d3d8:
    // 0x23d3d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23d3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23d3dc:
    // 0x23d3dc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x23d3dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23d3e0:
    // 0x23d3e0: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
label_23d3e4:
    if (ctx->pc == 0x23D3E4u) {
        ctx->pc = 0x23D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3E0u;
        // 0x23d3e4: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3E8u;
        goto label_23d3e8;
    }
    ctx->pc = 0x23D3E0u;
    {
        const bool branch_taken_0x23d3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3E0u;
        // 0x23d3e4: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3e0) {
            ctx->pc = 0x23D3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d3c0;
        }
    }
    ctx->pc = 0x23D3E8u;
label_23d3e8:
    // 0x23d3e8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23d3e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23d3ec:
    // 0x23d3ec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x23d3ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23d3f0:
    // 0x23d3f0: 0x3e00008  jr          $ra
label_23d3f4:
    if (ctx->pc == 0x23D3F4u) {
        ctx->pc = 0x23D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3F0u;
        // 0x23d3f4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D3F8u;
        goto label_23d3f8;
    }
    ctx->pc = 0x23D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3F0u;
        // 0x23d3f4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D3F8u;
label_23d3f8:
    // 0x23d3f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23d3f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d3fc:
    // 0x23d3fc: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x23d3fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_23d400:
    // 0x23d400: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x23d400u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23d404:
    // 0x23d404: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x23d404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
label_23d408:
    // 0x23d408: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x23d408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23d40c:
    // 0x23d40c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_23d410:
    if (ctx->pc == 0x23D410u) {
        ctx->pc = 0x23D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D40Cu;
        // 0x23d410: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D414u;
        goto label_23d414;
    }
    ctx->pc = 0x23D40Cu;
    {
        const bool branch_taken_0x23d40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D40Cu;
        // 0x23d410: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d40c) {
            ctx->pc = 0x23D560u;
            goto label_23d560;
        }
    }
    ctx->pc = 0x23D414u;
label_23d414:
    // 0x23d414: 0x142480a  movz        $t1, $t2, $v0
    ctx->pc = 0x23d414u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
label_23d418:
    // 0x23d418: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_23d41c:
    if (ctx->pc == 0x23D41Cu) {
        ctx->pc = 0x23D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D418u;
        // 0x23d41c: 0xc9102b  sltu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D420u;
        goto label_23d420;
    }
    ctx->pc = 0x23D418u;
    {
        const bool branch_taken_0x23d418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D418u;
        // 0x23d41c: 0xc9102b  sltu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d418) {
            ctx->pc = 0x23D4CCu;
            goto label_23d4cc;
        }
    }
    ctx->pc = 0x23D420u;
label_23d420:
    // 0x23d420: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
label_23d424:
    if (ctx->pc == 0x23D424u) {
        ctx->pc = 0x23D428u;
        goto label_23d428;
    }
    ctx->pc = 0x23D420u;
    {
        const bool branch_taken_0x23d420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d420) {
            ctx->pc = 0x23D560u;
            goto label_23d560;
        }
    }
    ctx->pc = 0x23D428u;
label_23d428:
    // 0x23d428: 0x3c070101  lui         $a3, 0x101
    ctx->pc = 0x23d428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)257 << 16));
label_23d42c:
    // 0x23d42c: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23d42cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
label_23d430:
    // 0x23d430: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23d430u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_23d434:
    // 0x23d434: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23d434u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
label_23d438:
    // 0x23d438: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23d438u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_23d43c:
    // 0x23d43c: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23d43cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
label_23d440:
    // 0x23d440: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23d440u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23d444:
    // 0x23d444: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x23d444u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
label_23d448:
    // 0x23d448: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x23d448u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_23d44c:
    // 0x23d44c: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x23d44cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
label_23d450:
    // 0x23d450: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x23d450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
label_23d454:
    // 0x23d454: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23d454u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_23d458:
    // 0x23d458: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x23d458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
label_23d45c:
    // 0x23d45c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23d45cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_23d460:
    // 0x23d460: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x23d460u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
label_23d464:
    // 0x23d464: 0x70691248  psubb       $v0, $v1, $t1
    ctx->pc = 0x23d464u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
label_23d468:
    // 0x23d468: 0x70e75389  pcpyld      $t2, $a3, $a3
    ctx->pc = 0x23d468u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
label_23d46c:
    // 0x23d46c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23d46cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23d470:
    // 0x23d470: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x23d470u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
label_23d474:
    // 0x23d474: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x23d474u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_23d478:
    // 0x23d478: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x23d478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23d47c:
    // 0x23d47c: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_23d480:
    if (ctx->pc == 0x23D480u) {
        ctx->pc = 0x23D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D47Cu;
        // 0x23d480: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D484u;
        goto label_23d484;
    }
    ctx->pc = 0x23D47Cu;
    {
        const bool branch_taken_0x23d47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D47Cu;
        // 0x23d480: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d47c) {
            ctx->pc = 0x23D55Cu;
            goto label_23d55c;
        }
    }
    ctx->pc = 0x23D484u;
label_23d484:
    // 0x23d484: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23d484u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23d488:
    // 0x23d488: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x23d488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_23d48c:
    // 0x23d48c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23d490:
    // 0x23d490: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x23d490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_23d494:
    // 0x23d494: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x23d494u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_23d498:
    // 0x23d498: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_23d49c:
    if (ctx->pc == 0x23D49Cu) {
        ctx->pc = 0x23D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D498u;
        // 0x23d49c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4A0u;
        goto label_23d4a0;
    }
    ctx->pc = 0x23D498u;
    {
        const bool branch_taken_0x23d498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D498u;
        // 0x23d49c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d498) {
            ctx->pc = 0x23D55Cu;
            goto label_23d55c;
        }
    }
    ctx->pc = 0x23D4A0u;
label_23d4a0:
    // 0x23d4a0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23d4a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23d4a4:
    // 0x23d4a4: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x23d4a4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_23d4a8:
    // 0x23d4a8: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x23d4a8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
label_23d4ac:
    // 0x23d4ac: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23d4acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23d4b0:
    // 0x23d4b0: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x23d4b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
label_23d4b4:
    // 0x23d4b4: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x23d4b4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_23d4b8:
    // 0x23d4b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23d4bc:
    // 0x23d4bc: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_23d4c0:
    if (ctx->pc == 0x23D4C0u) {
        ctx->pc = 0x23D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4BCu;
        // 0x23d4c0: 0x78a30000  lq          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4C4u;
        goto label_23d4c4;
    }
    ctx->pc = 0x23D4BCu;
    {
        const bool branch_taken_0x23d4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d4bc) {
            ctx->pc = 0x23D4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D4BCu;
            // 0x23d4c0: 0x78a30000  lq          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D528u;
            goto label_23d528;
        }
    }
    ctx->pc = 0x23D4C4u;
label_23d4c4:
    // 0x23d4c4: 0x10000026  b           . + 4 + (0x26 << 2)
label_23d4c8:
    if (ctx->pc == 0x23D4C8u) {
        ctx->pc = 0x23D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4C4u;
        // 0x23d4c8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4CCu;
        goto label_23d4cc;
    }
    ctx->pc = 0x23D4C4u;
    {
        const bool branch_taken_0x23d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4C4u;
        // 0x23d4c8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4c4) {
            ctx->pc = 0x23D560u;
            goto label_23d560;
        }
    }
    ctx->pc = 0x23D4CCu;
label_23d4cc:
    // 0x23d4cc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_23d4d0:
    if (ctx->pc == 0x23D4D0u) {
        ctx->pc = 0x23D4D4u;
        goto label_23d4d4;
    }
    ctx->pc = 0x23D4CCu;
    {
        const bool branch_taken_0x23d4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d4cc) {
            ctx->pc = 0x23D560u;
            goto label_23d560;
        }
    }
    ctx->pc = 0x23D4D4u;
label_23d4d4:
    // 0x23d4d4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23d4d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23d4d8:
    // 0x23d4d8: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x23d4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
label_23d4dc:
    // 0x23d4dc: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d4dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
label_23d4e0:
    // 0x23d4e0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d4e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
label_23d4e4:
    // 0x23d4e4: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d4e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
label_23d4e8:
    // 0x23d4e8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d4e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
label_23d4ec:
    // 0x23d4ec: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d4ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
label_23d4f0:
    // 0x23d4f0: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x23d4f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
label_23d4f4:
    // 0x23d4f4: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d4f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
label_23d4f8:
    // 0x23d4f8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x23d4f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_23d4fc:
    // 0x23d4fc: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d4fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
label_23d500:
    // 0x23d500: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x23d500u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_23d504:
    // 0x23d504: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d504u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
label_23d508:
    // 0x23d508: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x23d508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
label_23d50c:
    // 0x23d50c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x23d50cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_23d510:
    // 0x23d510: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23d514:
    // 0x23d514: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x23d514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_23d518:
    // 0x23d518: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_23d51c:
    if (ctx->pc == 0x23D51Cu) {
        ctx->pc = 0x23D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D518u;
        // 0x23d51c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D520u;
        goto label_23d520;
    }
    ctx->pc = 0x23D518u;
    {
        const bool branch_taken_0x23d518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D518u;
        // 0x23d51c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d518) {
            ctx->pc = 0x23D55Cu;
            goto label_23d55c;
        }
    }
    ctx->pc = 0x23D520u;
label_23d520:
    // 0x23d520: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23d520u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23d524:
    // 0x23d524: 0x0  nop
    ctx->pc = 0x23d524u;
    // NOP
label_23d528:
    // 0x23d528: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23d528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_23d52c:
    // 0x23d52c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23d530:
    // 0x23d530: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23d530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23d534:
    // 0x23d534: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x23d534u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_23d538:
    // 0x23d538: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23d53c:
    if (ctx->pc == 0x23D53Cu) {
        ctx->pc = 0x23D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D538u;
        // 0x23d53c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D540u;
        goto label_23d540;
    }
    ctx->pc = 0x23D538u;
    {
        const bool branch_taken_0x23d538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D538u;
        // 0x23d53c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d538) {
            ctx->pc = 0x23D55Cu;
            goto label_23d55c;
        }
    }
    ctx->pc = 0x23D540u;
label_23d540:
    // 0x23d540: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x23d540u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23d544:
    // 0x23d544: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23d544u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23d548:
    // 0x23d548: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x23d548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
label_23d54c:
    // 0x23d54c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23d550:
    // 0x23d550: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x23d550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_23d554:
    // 0x23d554: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
label_23d558:
    if (ctx->pc == 0x23D558u) {
        ctx->pc = 0x23D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D554u;
        // 0x23d558: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D55Cu;
        goto label_23d55c;
    }
    ctx->pc = 0x23D554u;
    {
        const bool branch_taken_0x23d554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d554) {
            ctx->pc = 0x23D558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D554u;
            // 0x23d558: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d528;
        }
    }
    ctx->pc = 0x23D55Cu;
label_23d55c:
    // 0x23d55c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23d55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23d560:
    // 0x23d560: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_23d564:
    if (ctx->pc == 0x23D564u) {
        ctx->pc = 0x23D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D560u;
        // 0x23d564: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D568u;
        goto label_23d568;
    }
    ctx->pc = 0x23D560u;
    {
        const bool branch_taken_0x23d560 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D560u;
        // 0x23d564: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d560) {
            ctx->pc = 0x23D5ACu;
            goto label_23d5ac;
        }
    }
    ctx->pc = 0x23D568u;
label_23d568:
    // 0x23d568: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23d568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23d56c:
    // 0x23d56c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23d56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23d570:
    // 0x23d570: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23d570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23d574:
    // 0x23d574: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23d578:
    // 0x23d578: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23d578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_23d57c:
    // 0x23d57c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_23d580:
    if (ctx->pc == 0x23D580u) {
        ctx->pc = 0x23D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D57Cu;
        // 0x23d580: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D584u;
        goto label_23d584;
    }
    ctx->pc = 0x23D57Cu;
    {
        const bool branch_taken_0x23d57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D57Cu;
        // 0x23d580: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d57c) {
            ctx->pc = 0x23D560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d560;
        }
    }
    ctx->pc = 0x23D584u;
label_23d584:
    // 0x23d584: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x23d584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23d588:
    // 0x23d588: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23d58c:
    if (ctx->pc == 0x23D58Cu) {
        ctx->pc = 0x23D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D588u;
        // 0x23d58c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D590u;
        goto label_23d590;
    }
    ctx->pc = 0x23D588u;
    {
        const bool branch_taken_0x23d588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D588u;
        // 0x23d58c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d588) {
            ctx->pc = 0x23D5ACu;
            goto label_23d5ac;
        }
    }
    ctx->pc = 0x23D590u;
label_23d590:
    // 0x23d590: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23d590u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_23d594:
    // 0x23d594: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x23d594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23d598:
    // 0x23d598: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23d598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23d59c:
    // 0x23d59c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23d59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23d5a0:
    // 0x23d5a0: 0x0  nop
    ctx->pc = 0x23d5a0u;
    // NOP
label_23d5a4:
    // 0x23d5a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23d5a8:
    if (ctx->pc == 0x23D5A8u) {
        ctx->pc = 0x23D5ACu;
        goto label_23d5ac;
    }
    ctx->pc = 0x23D5A4u;
    {
        const bool branch_taken_0x23d5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d5a4) {
            ctx->pc = 0x23D590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d590;
        }
    }
    ctx->pc = 0x23D5ACu;
label_23d5ac:
    // 0x23d5ac: 0x3e00008  jr          $ra
label_23d5b0:
    if (ctx->pc == 0x23D5B0u) {
        ctx->pc = 0x23D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5ACu;
        // 0x23d5b0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5B4u;
        goto label_23d5b4;
    }
    ctx->pc = 0x23D5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5ACu;
        // 0x23d5b0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D5B4u;
label_23d5b4:
    // 0x23d5b4: 0x0  nop
    ctx->pc = 0x23d5b4u;
    // NOP
label_23d5b8:
    // 0x23d5b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23d5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23d5bc:
    // 0x23d5bc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23d5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_23d5c0:
    // 0x23d5c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x23d5c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23d5c4:
    // 0x23d5c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_23d5c8:
    // 0x23d5c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_23d5cc:
    // 0x23d5cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_23d5d0:
    // 0x23d5d0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x23d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_23d5d4:
    // 0x23d5d4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x23d5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_23d5d8:
    // 0x23d5d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_23d5dc:
    // 0x23d5dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23d5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23d5e0:
    // 0x23d5e0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x23d5e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23d5e4:
    // 0x23d5e4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23d5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_23d5e8:
    // 0x23d5e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x23d5e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23d5ec:
    // 0x23d5ec: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x23d5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_23d5f0:
    // 0x23d5f0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23d5f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d5f4:
    // 0x23d5f4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x23d5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_23d5f8:
    // 0x23d5f8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x23d5f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23d5fc:
    // 0x23d5fc: 0x0  nop
    ctx->pc = 0x23d5fcu;
    // NOP
label_23d600:
    // 0x23d600: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23d600u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23d604:
    // 0x23d604: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23d604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23d608:
    // 0x23d608: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23d60c:
    // 0x23d60c: 0x9042e1f1  lbu         $v0, -0x1E0F($v0)
    ctx->pc = 0x23d60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294959601)));
label_23d610:
    // 0x23d610: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_23d614:
    // 0x23d614: 0x0  nop
    ctx->pc = 0x23d614u;
    // NOP
label_23d618:
    // 0x23d618: 0x0  nop
    ctx->pc = 0x23d618u;
    // NOP
label_23d61c:
    // 0x23d61c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_23d620:
    if (ctx->pc == 0x23D620u) {
        ctx->pc = 0x23D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D61Cu;
        // 0x23d620: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D624u;
        goto label_23d624;
    }
    ctx->pc = 0x23D61Cu;
    {
        const bool branch_taken_0x23d61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D61Cu;
        // 0x23d620: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d61c) {
            ctx->pc = 0x23D600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d600;
        }
    }
    ctx->pc = 0x23D624u;
label_23d624:
    // 0x23d624: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23d624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_23d628:
    // 0x23d628: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_23d62c:
    if (ctx->pc == 0x23D62Cu) {
        ctx->pc = 0x23D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D628u;
        // 0x23d62c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D630u;
        goto label_23d630;
    }
    ctx->pc = 0x23D628u;
    {
        const bool branch_taken_0x23d628 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D628u;
        // 0x23d62c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d628) {
            ctx->pc = 0x23D640u;
            goto label_23d640;
        }
    }
    ctx->pc = 0x23D630u;
label_23d630:
    // 0x23d630: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23d630u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23d634:
    // 0x23d634: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23d634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23d638:
    // 0x23d638: 0x10000005  b           . + 4 + (0x5 << 2)
label_23d63c:
    if (ctx->pc == 0x23D63Cu) {
        ctx->pc = 0x23D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D638u;
        // 0x23d63c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D640u;
        goto label_23d640;
    }
    ctx->pc = 0x23D638u;
    {
        const bool branch_taken_0x23d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D638u;
        // 0x23d63c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d638) {
            ctx->pc = 0x23D650u;
            goto label_23d650;
        }
    }
    ctx->pc = 0x23D640u;
label_23d640:
    // 0x23d640: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_23d644:
    if (ctx->pc == 0x23D644u) {
        ctx->pc = 0x23D648u;
        goto label_23d648;
    }
    ctx->pc = 0x23D640u;
    {
        const bool branch_taken_0x23d640 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d640) {
            ctx->pc = 0x23D650u;
            goto label_23d650;
        }
    }
    ctx->pc = 0x23D648u;
label_23d648:
    // 0x23d648: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23d648u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23d64c:
    // 0x23d64c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23d64cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23d650:
    // 0x23d650: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_23d654:
    if (ctx->pc == 0x23D654u) {
        ctx->pc = 0x23D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D650u;
        // 0x23d654: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D658u;
        goto label_23d658;
    }
    ctx->pc = 0x23D650u;
    {
        const bool branch_taken_0x23d650 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D650u;
        // 0x23d654: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d650) {
            ctx->pc = 0x23D660u;
            goto label_23d660;
        }
    }
    ctx->pc = 0x23D658u;
label_23d658:
    // 0x23d658: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
label_23d65c:
    if (ctx->pc == 0x23D65Cu) {
        ctx->pc = 0x23D660u;
        goto label_23d660;
    }
    ctx->pc = 0x23D658u;
    {
        const bool branch_taken_0x23d658 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d658) {
            ctx->pc = 0x23D68Cu;
            goto label_23d68c;
        }
    }
    ctx->pc = 0x23D660u;
label_23d660:
    // 0x23d660: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x23d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_23d664:
    // 0x23d664: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_23d668:
    if (ctx->pc == 0x23D668u) {
        ctx->pc = 0x23D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D664u;
        // 0x23d668: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D66Cu;
        goto label_23d66c;
    }
    ctx->pc = 0x23D664u;
    {
        const bool branch_taken_0x23d664 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D664u;
        // 0x23d668: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d664) {
            ctx->pc = 0x23D68Cu;
            goto label_23d68c;
        }
    }
    ctx->pc = 0x23D66Cu;
label_23d66c:
    // 0x23d66c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x23d66cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23d670:
    // 0x23d670: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23d674:
    if (ctx->pc == 0x23D674u) {
        ctx->pc = 0x23D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D670u;
        // 0x23d674: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D678u;
        goto label_23d678;
    }
    ctx->pc = 0x23D670u;
    {
        const bool branch_taken_0x23d670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D670u;
        // 0x23d674: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d670) {
            ctx->pc = 0x23D680u;
            goto label_23d680;
        }
    }
    ctx->pc = 0x23D678u;
label_23d678:
    // 0x23d678: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23d67c:
    if (ctx->pc == 0x23D67Cu) {
        ctx->pc = 0x23D680u;
        goto label_23d680;
    }
    ctx->pc = 0x23D678u;
    {
        const bool branch_taken_0x23d678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d678) {
            ctx->pc = 0x23D68Cu;
            goto label_23d68c;
        }
    }
    ctx->pc = 0x23D680u;
label_23d680:
    // 0x23d680: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x23d680u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_23d684:
    // 0x23d684: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x23d684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_23d688:
    // 0x23d688: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x23d688u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23d68c:
    // 0x23d68c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_23d690:
    if (ctx->pc == 0x23D690u) {
        ctx->pc = 0x23D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D68Cu;
        // 0x23d690: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D694u;
        goto label_23d694;
    }
    ctx->pc = 0x23D68Cu;
    {
        const bool branch_taken_0x23d68c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D68Cu;
        // 0x23d690: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d68c) {
            ctx->pc = 0x23D6A0u;
            goto label_23d6a0;
        }
    }
    ctx->pc = 0x23D694u;
label_23d694:
    // 0x23d694: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x23d694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23d698:
    // 0x23d698: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x23d698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
label_23d69c:
    // 0x23d69c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x23d69cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_23d6a0:
    // 0x23d6a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23d6a4:
    // 0x23d6a4: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x23d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_23d6a8:
    // 0x23d6a8: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x23d6a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23d6ac:
    // 0x23d6ac: 0x14a43c  dsll32      $s4, $s4, 16
    ctx->pc = 0x23d6acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 16));
label_23d6b0:
    // 0x23d6b0: 0x57a00a  movz        $s4, $v0, $s7
    ctx->pc = 0x23d6b0u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_23d6b4:
    // 0x23d6b4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x23d6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d6b8:
    // 0x23d6b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23d6bc:
    // 0x23d6bc: 0xc06d9fe  jal         func_1B67F8
label_23d6c0:
    if (ctx->pc == 0x23D6C0u) {
        ctx->pc = 0x23D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6BCu;
        // 0x23d6c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6C4u;
        goto label_23d6c4;
    }
    ctx->pc = 0x23D6BCu;
    SET_GPR_U32(ctx, 31, 0x23D6C4u);
    ctx->pc = 0x23D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6BCu;
    // 0x23d6c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x23D6C4u;
label_23d6c4:
    // 0x23d6c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23d6c8:
    // 0x23d6c8: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x23d6c8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
label_23d6cc:
    // 0x23d6cc: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x23d6ccu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
label_23d6d0:
    // 0x23d6d0: 0xc06d89e  jal         func_1B6278
label_23d6d4:
    if (ctx->pc == 0x23D6D4u) {
        ctx->pc = 0x23D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6D0u;
        // 0x23d6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6D8u;
        goto label_23d6d8;
    }
    ctx->pc = 0x23D6D0u;
    SET_GPR_U32(ctx, 31, 0x23D6D8u);
    ctx->pc = 0x23D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6D0u;
    // 0x23d6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x23D6D8u;
label_23d6d8:
    // 0x23d6d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23d6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d6dc:
    // 0x23d6dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23d6dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d6e0:
    // 0x23d6e0: 0x10000015  b           . + 4 + (0x15 << 2)
label_23d6e4:
    if (ctx->pc == 0x23D6E4u) {
        ctx->pc = 0x23D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6E0u;
        // 0x23d6e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6E8u;
        goto label_23d6e8;
    }
    ctx->pc = 0x23D6E0u;
    {
        const bool branch_taken_0x23d6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6E0u;
        // 0x23d6e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6e0) {
            ctx->pc = 0x23D738u;
            goto label_23d738;
        }
    }
    ctx->pc = 0x23D6E8u;
label_23d6e8:
    // 0x23d6e8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x23d6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_23d6ec:
    // 0x23d6ec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_23d6f0:
    if (ctx->pc == 0x23D6F0u) {
        ctx->pc = 0x23D6F4u;
        goto label_23d6f4;
    }
    ctx->pc = 0x23D6ECu;
    {
        const bool branch_taken_0x23d6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d6ec) {
            ctx->pc = 0x23D778u;
            goto label_23d778;
        }
    }
    ctx->pc = 0x23D6F4u;
label_23d6f4:
    // 0x23d6f4: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
label_23d6f8:
    if (ctx->pc == 0x23D6F8u) {
        ctx->pc = 0x23D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6F4u;
        // 0x23d6f8: 0x285102b  sltu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6FCu;
        goto label_23d6fc;
    }
    ctx->pc = 0x23D6F4u;
    {
        const bool branch_taken_0x23d6f4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x23D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6F4u;
        // 0x23d6f8: 0x285102b  sltu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6f4) {
            ctx->pc = 0x23D718u;
            goto label_23d718;
        }
    }
    ctx->pc = 0x23D6FCu;
label_23d6fc:
    // 0x23d6fc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_23d700:
    if (ctx->pc == 0x23D700u) {
        ctx->pc = 0x23D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6FCu;
        // 0x23d700: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D704u;
        goto label_23d704;
    }
    ctx->pc = 0x23D6FCu;
    {
        const bool branch_taken_0x23d6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d6fc) {
            ctx->pc = 0x23D700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D6FCu;
            // 0x23d700: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D730u;
            goto label_23d730;
        }
    }
    ctx->pc = 0x23D704u;
label_23d704:
    // 0x23d704: 0x14b40006  bne         $a1, $s4, . + 4 + (0x6 << 2)
label_23d708:
    if (ctx->pc == 0x23D708u) {
        ctx->pc = 0x23D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D704u;
        // 0x23d708: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D70Cu;
        goto label_23d70c;
    }
    ctx->pc = 0x23D704u;
    {
        const bool branch_taken_0x23d704 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x23D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D704u;
        // 0x23d708: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d704) {
            ctx->pc = 0x23D720u;
            goto label_23d720;
        }
    }
    ctx->pc = 0x23D70Cu;
label_23d70c:
    // 0x23d70c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x23d70cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_23d710:
    // 0x23d710: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23d714:
    if (ctx->pc == 0x23D714u) {
        ctx->pc = 0x23D718u;
        goto label_23d718;
    }
    ctx->pc = 0x23D710u;
    {
        const bool branch_taken_0x23d710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d710) {
            ctx->pc = 0x23D720u;
            goto label_23d720;
        }
    }
    ctx->pc = 0x23D718u;
label_23d718:
    // 0x23d718: 0x10000005  b           . + 4 + (0x5 << 2)
label_23d71c:
    if (ctx->pc == 0x23D71Cu) {
        ctx->pc = 0x23D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D718u;
        // 0x23d71c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D720u;
        goto label_23d720;
    }
    ctx->pc = 0x23D718u;
    {
        const bool branch_taken_0x23d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D718u;
        // 0x23d71c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d718) {
            ctx->pc = 0x23D730u;
            goto label_23d730;
        }
    }
    ctx->pc = 0x23D720u;
label_23d720:
    // 0x23d720: 0xc06d536  jal         func_1B54D8
label_23d724:
    if (ctx->pc == 0x23D724u) {
        ctx->pc = 0x23D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D720u;
        // 0x23d724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D728u;
        goto label_23d728;
    }
    ctx->pc = 0x23D720u;
    SET_GPR_U32(ctx, 31, 0x23D728u);
    ctx->pc = 0x23D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D720u;
    // 0x23d724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    { ctx->pc = 0x1b54d8; return; }
    ctx->pc = 0x23D728u;
label_23d728:
    // 0x23d728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23d728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d72c:
    // 0x23d72c: 0x222282d  daddu       $a1, $s1, $v0
    ctx->pc = 0x23d72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_23d730:
    // 0x23d730: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23d730u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23d734:
    // 0x23d734: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23d734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23d738:
    // 0x23d738: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x23d738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_23d73c:
    // 0x23d73c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x23d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_23d740:
    // 0x23d740: 0x9084e1f1  lbu         $a0, -0x1E0F($a0)
    ctx->pc = 0x23d740u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294959601)));
label_23d744:
    // 0x23d744: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x23d744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_23d748:
    // 0x23d748: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23d74c:
    if (ctx->pc == 0x23D74Cu) {
        ctx->pc = 0x23D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D748u;
        // 0x23d74c: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D750u;
        goto label_23d750;
    }
    ctx->pc = 0x23D748u;
    {
        const bool branch_taken_0x23d748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D748u;
        // 0x23d74c: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d748) {
            ctx->pc = 0x23D758u;
            goto label_23d758;
        }
    }
    ctx->pc = 0x23D750u;
label_23d750:
    // 0x23d750: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_23d754:
    if (ctx->pc == 0x23D754u) {
        ctx->pc = 0x23D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D750u;
        // 0x23d754: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D758u;
        goto label_23d758;
    }
    ctx->pc = 0x23D750u;
    {
        const bool branch_taken_0x23d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D750u;
        // 0x23d754: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d750) {
            ctx->pc = 0x23D6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d6e8;
        }
    }
    ctx->pc = 0x23D758u;
label_23d758:
    // 0x23d758: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23d75c:
    if (ctx->pc == 0x23D75Cu) {
        ctx->pc = 0x23D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D758u;
        // 0x23d75c: 0x2622ffc9  addiu       $v0, $s1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D760u;
        goto label_23d760;
    }
    ctx->pc = 0x23D758u;
    {
        const bool branch_taken_0x23d758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D758u;
        // 0x23d75c: 0x2622ffc9  addiu       $v0, $s1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d758) {
            ctx->pc = 0x23D778u;
            goto label_23d778;
        }
    }
    ctx->pc = 0x23D760u;
label_23d760:
    // 0x23d760: 0x2623ffa9  addiu       $v1, $s1, -0x57
    ctx->pc = 0x23d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
label_23d764:
    // 0x23d764: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x23d764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_23d768:
    // 0x23d768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d76c:
    // 0x23d76c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
label_23d770:
    if (ctx->pc == 0x23D770u) {
        ctx->pc = 0x23D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D76Cu;
        // 0x23d770: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D774u;
        goto label_23d774;
    }
    ctx->pc = 0x23D76Cu;
    {
        const bool branch_taken_0x23d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D76Cu;
        // 0x23d770: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d76c) {
            ctx->pc = 0x23D6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d6e8;
        }
    }
    ctx->pc = 0x23D774u;
label_23d774:
    // 0x23d774: 0x0  nop
    ctx->pc = 0x23d774u;
    // NOP
label_23d778:
    // 0x23d778: 0x4c1000b  bgez        $a2, . + 4 + (0xB << 2)
label_23d77c:
    if (ctx->pc == 0x23D77Cu) {
        ctx->pc = 0x23D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D778u;
        // 0x23d77c: 0x5102f  dsubu       $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D780u;
        goto label_23d780;
    }
    ctx->pc = 0x23D778u;
    {
        const bool branch_taken_0x23d778 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x23D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D778u;
        // 0x23d77c: 0x5102f  dsubu       $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d778) {
            ctx->pc = 0x23D7A8u;
            goto label_23d7a8;
        }
    }
    ctx->pc = 0x23D780u;
label_23d780:
    // 0x23d780: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23d784:
    // 0x23d784: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x23d784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_23d788:
    // 0x23d788: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x23d788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23d78c:
    // 0x23d78c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x23d78cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_23d790:
    // 0x23d790: 0x77280a  movz        $a1, $v1, $s7
    ctx->pc = 0x23d790u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_23d794:
    // 0x23d794: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23d794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23d798:
    // 0x23d798: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x23d798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_23d79c:
    // 0x23d79c: 0x10000003  b           . + 4 + (0x3 << 2)
label_23d7a0:
    if (ctx->pc == 0x23D7A0u) {
        ctx->pc = 0x23D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D79Cu;
        // 0x23d7a0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7A4u;
        goto label_23d7a4;
    }
    ctx->pc = 0x23D79Cu;
    {
        const bool branch_taken_0x23d79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D79Cu;
        // 0x23d7a0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d79c) {
            ctx->pc = 0x23D7ACu;
            goto label_23d7ac;
        }
    }
    ctx->pc = 0x23D7A4u;
label_23d7a4:
    // 0x23d7a4: 0x0  nop
    ctx->pc = 0x23d7a4u;
    // NOP
label_23d7a8:
    // 0x23d7a8: 0x57280b  movn        $a1, $v0, $s7
    ctx->pc = 0x23d7a8u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_23d7ac:
    // 0x23d7ac: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
label_23d7b0:
    if (ctx->pc == 0x23D7B0u) {
        ctx->pc = 0x23D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7ACu;
        // 0x23d7b0: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7B4u;
        goto label_23d7b4;
    }
    ctx->pc = 0x23D7ACu;
    {
        const bool branch_taken_0x23d7ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7ACu;
        // 0x23d7b0: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7ac) {
            ctx->pc = 0x23D7BCu;
            goto label_23d7bc;
        }
    }
    ctx->pc = 0x23D7B4u;
label_23d7b4:
    // 0x23d7b4: 0x46a80b  movn        $s5, $v0, $a2
    ctx->pc = 0x23d7b4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_23d7b8:
    // 0x23d7b8: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x23d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_23d7bc:
    // 0x23d7bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23d7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23d7c0:
    // 0x23d7c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23d7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23d7c4:
    // 0x23d7c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23d7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23d7c8:
    // 0x23d7c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23d7c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23d7cc:
    // 0x23d7cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23d7ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23d7d0:
    // 0x23d7d0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23d7d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23d7d4:
    // 0x23d7d4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23d7d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23d7d8:
    // 0x23d7d8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x23d7d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23d7dc:
    // 0x23d7dc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x23d7dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_23d7e0:
    // 0x23d7e0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x23d7e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23d7e4:
    // 0x23d7e4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x23d7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_23d7e8:
    // 0x23d7e8: 0x3e00008  jr          $ra
label_23d7ec:
    if (ctx->pc == 0x23D7ECu) {
        ctx->pc = 0x23D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7E8u;
        // 0x23d7ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7F0u;
        goto label_23d7f0;
    }
    ctx->pc = 0x23D7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7E8u;
        // 0x23d7ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D7F0u;
label_23d7f0:
    // 0x23d7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23d7f4:
    // 0x23d7f4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_23d7f8:
    // 0x23d7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23d7fc:
    // 0x23d7fc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23d7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23d800:
    // 0x23d800: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23d800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d804:
    // 0x23d804: 0x8c640818  lw          $a0, 0x818($v1)
    ctx->pc = 0x23d804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2072)));
label_23d808:
    // 0x23d808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d80c:
    // 0x23d80c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23d80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23d810:
    // 0x23d810: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23d810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d814:
    // 0x23d814: 0x808f56e  j           func_23D5B8
label_23d818:
    if (ctx->pc == 0x23D818u) {
        ctx->pc = 0x23D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D814u;
        // 0x23d818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D81Cu;
        goto label_23d81c;
    }
    ctx->pc = 0x23D814u;
    ctx->pc = 0x23D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D814u;
    // 0x23d818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D5B8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_23d5b8;
    ctx->pc = 0x23D81Cu;
label_23d81c:
    // 0x23d81c: 0x0  nop
    ctx->pc = 0x23d81cu;
    // NOP
label_23d820:
    // 0x23d820: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23d820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d824:
    // 0x23d824: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x23d824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_23d828:
    // 0x23d828: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23d828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23d82c:
    // 0x23d82c: 0x9063e1f1  lbu         $v1, -0x1E0F($v1)
    ctx->pc = 0x23d82cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959601)));
label_23d830:
    // 0x23d830: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x23d830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_23d834:
    // 0x23d834: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x23d834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_23d838:
    // 0x23d838: 0x3e00008  jr          $ra
label_23d83c:
    if (ctx->pc == 0x23D83Cu) {
        ctx->pc = 0x23D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D838u;
        // 0x23d83c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D840u;
        goto label_23d840;
    }
    ctx->pc = 0x23D838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D838u;
        // 0x23d83c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D840u;
label_23d840:
    // 0x23d840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23d844:
    // 0x23d844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23d848:
    // 0x23d848: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23d848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23d84c:
    // 0x23d84c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23d84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23d850:
    // 0x23d850: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23d854:
    // 0x23d854: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23d858:
    if (ctx->pc == 0x23D858u) {
        ctx->pc = 0x23D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D854u;
        // 0x23d858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D85Cu;
        goto label_23d85c;
    }
    ctx->pc = 0x23D854u;
    {
        const bool branch_taken_0x23d854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D854u;
        // 0x23d858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d854) {
            ctx->pc = 0x23D868u;
            goto label_23d868;
        }
    }
    ctx->pc = 0x23D85Cu;
label_23d85c:
    // 0x23d85c: 0x10000006  b           . + 4 + (0x6 << 2)
label_23d860:
    if (ctx->pc == 0x23D860u) {
        ctx->pc = 0x23D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D85Cu;
        // 0x23d860: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D864u;
        goto label_23d864;
    }
    ctx->pc = 0x23D85Cu;
    {
        const bool branch_taken_0x23d85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D85Cu;
        // 0x23d860: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d85c) {
            ctx->pc = 0x23D878u;
            goto label_23d878;
        }
    }
    ctx->pc = 0x23D864u;
label_23d864:
    // 0x23d864: 0x0  nop
    ctx->pc = 0x23d864u;
    // NOP
label_23d868:
    // 0x23d868: 0xc08e3f2  jal         func_238FC8
label_23d86c:
    if (ctx->pc == 0x23D86Cu) {
        ctx->pc = 0x23D870u;
        goto label_23d870;
    }
    ctx->pc = 0x23D868u;
    SET_GPR_U32(ctx, 31, 0x23D870u);
    ctx->pc = 0x238FC8u;
    { ctx->pc = 0x238fc8; return; }
    ctx->pc = 0x23D870u;
label_23d870:
    // 0x23d870: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23d870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_23d874:
    // 0x23d874: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23d874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_23d878:
    // 0x23d878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d87c:
    // 0x23d87c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23d87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23d880:
    // 0x23d880: 0x3e00008  jr          $ra
label_23d884:
    if (ctx->pc == 0x23D884u) {
        ctx->pc = 0x23D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D880u;
        // 0x23d884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D888u;
        goto label_23d888;
    }
    ctx->pc = 0x23D880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D880u;
        // 0x23d884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D888u;
label_23d888:
    // 0x23d888: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x23d888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_23d88c:
    // 0x23d88c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x23d88cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_23d890:
    // 0x23d890: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x23d890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
label_23d894:
    // 0x23d894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d898:
    // 0x23d898: 0xffb10468  sd          $s1, 0x468($sp)
    ctx->pc = 0x23d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 17));
label_23d89c:
    // 0x23d89c: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x23d89cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_23d8a0:
    // 0x23d8a0: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x23d8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
label_23d8a4:
    // 0x23d8a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23d8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d8a8:
    // 0x23d8a8: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x23d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
label_23d8ac:
    // 0x23d8ac: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x23d8acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_23d8b0:
    // 0x23d8b0: 0x9609000e  lhu         $t1, 0xE($s0)
    ctx->pc = 0x23d8b0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_23d8b4:
    // 0x23d8b4: 0x8e080054  lw          $t0, 0x54($s0)
    ctx->pc = 0x23d8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23d8b8:
    // 0x23d8b8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x23d8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_23d8bc:
    // 0x23d8bc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x23d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_23d8c0:
    // 0x23d8c0: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x23d8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_23d8c4:
    // 0x23d8c4: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x23d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
label_23d8c8:
    // 0x23d8c8: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x23d8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
label_23d8cc:
    // 0x23d8cc: 0xa7a9000e  sh          $t1, 0xE($sp)
    ctx->pc = 0x23d8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 9));
label_23d8d0:
    // 0x23d8d0: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x23d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_23d8d4:
    // 0x23d8d4: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x23d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
label_23d8d8:
    // 0x23d8d8: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x23d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
label_23d8dc:
    // 0x23d8dc: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x23d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
label_23d8e0:
    // 0x23d8e0: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x23d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_23d8e4:
    // 0x23d8e4: 0xc08f650  jal         func_23D940
label_23d8e8:
    if (ctx->pc == 0x23D8E8u) {
        ctx->pc = 0x23D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8E4u;
        // 0x23d8e8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8ECu;
        goto label_23d8ec;
    }
    ctx->pc = 0x23D8E4u;
    SET_GPR_U32(ctx, 31, 0x23D8ECu);
    ctx->pc = 0x23D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8E4u;
    // 0x23d8e8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D940u;
    goto label_23d940;
    ctx->pc = 0x23D8ECu;
label_23d8ec:
    // 0x23d8ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23d8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d8f0:
    // 0x23d8f0: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
label_23d8f4:
    if (ctx->pc == 0x23D8F4u) {
        ctx->pc = 0x23D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8F0u;
        // 0x23d8f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8F8u;
        goto label_23d8f8;
    }
    ctx->pc = 0x23D8F0u;
    {
        const bool branch_taken_0x23d8f0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x23D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8F0u;
        // 0x23d8f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8f0) {
            ctx->pc = 0x23D908u;
            goto label_23d908;
        }
    }
    ctx->pc = 0x23D8F8u;
label_23d8f8:
    // 0x23d8f8: 0xc08e1d2  jal         func_238748
label_23d8fc:
    if (ctx->pc == 0x23D8FCu) {
        ctx->pc = 0x23D900u;
        goto label_23d900;
    }
    ctx->pc = 0x23D8F8u;
    SET_GPR_U32(ctx, 31, 0x23D900u);
    ctx->pc = 0x238748u;
    { ctx->pc = 0x238748; return; }
    ctx->pc = 0x23D900u;
label_23d900:
    // 0x23d900: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23d900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23d904:
    // 0x23d904: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x23d904u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_23d908:
    // 0x23d908: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x23d908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
label_23d90c:
    // 0x23d90c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_23d910:
    // 0x23d910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23d914:
    if (ctx->pc == 0x23D914u) {
        ctx->pc = 0x23D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D910u;
        // 0x23d914: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D918u;
        goto label_23d918;
    }
    ctx->pc = 0x23D910u;
    {
        const bool branch_taken_0x23d910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D910u;
        // 0x23d914: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d910) {
            ctx->pc = 0x23D928u;
            goto label_23d928;
        }
    }
    ctx->pc = 0x23D918u;
label_23d918:
    // 0x23d918: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x23d918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_23d91c:
    // 0x23d91c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_23d920:
    // 0x23d920: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x23d920u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_23d924:
    // 0x23d924: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23d924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d928:
    // 0x23d928: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x23d928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_23d92c:
    // 0x23d92c: 0xdfb10468  ld          $s1, 0x468($sp)
    ctx->pc = 0x23d92cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
label_23d930:
    // 0x23d930: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x23d930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
label_23d934:
    // 0x23d934: 0x3e00008  jr          $ra
label_23d938:
    if (ctx->pc == 0x23D938u) {
        ctx->pc = 0x23D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D934u;
        // 0x23d938: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D93Cu;
        goto label_23d93c;
    }
    ctx->pc = 0x23D934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D934u;
        // 0x23d938: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D93Cu;
label_23d93c:
    // 0x23d93c: 0x0  nop
    ctx->pc = 0x23d93cu;
    // NOP
label_23d940:
    // 0x23d940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23d944:
    // 0x23d944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23d948:
    // 0x23d948: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d94c:
    // 0x23d94c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23d94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23d950:
    // 0x23d950: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23d950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23d954:
    // 0x23d954: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23d954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23d958:
    // 0x23d958: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23d958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23d95c:
    // 0x23d95c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23d95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_23d960:
    // 0x23d960: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23d960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23d964:
    // 0x23d964: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_23d968:
    if (ctx->pc == 0x23D968u) {
        ctx->pc = 0x23D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D964u;
        // 0x23d968: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D96Cu;
        goto label_23d96c;
    }
    ctx->pc = 0x23D964u;
    {
        const bool branch_taken_0x23d964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D964u;
        // 0x23d968: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d964) {
            ctx->pc = 0x23D978u;
            goto label_23d978;
        }
    }
    ctx->pc = 0x23D96Cu;
label_23d96c:
    // 0x23d96c: 0x8c420818  lw          $v0, 0x818($v0)
    ctx->pc = 0x23d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23d970:
    // 0x23d970: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x23d970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_23d974:
    // 0x23d974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23d974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d978:
    // 0x23d978: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x23d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_23d97c:
    // 0x23d97c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23d980:
    if (ctx->pc == 0x23D980u) {
        ctx->pc = 0x23D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D97Cu;
        // 0x23d980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D984u;
        goto label_23d984;
    }
    ctx->pc = 0x23D97Cu;
    {
        const bool branch_taken_0x23d97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D97Cu;
        // 0x23d980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d97c) {
            ctx->pc = 0x23D994u;
            goto label_23d994;
        }
    }
    ctx->pc = 0x23D984u;
label_23d984:
    // 0x23d984: 0xc08e29c  jal         func_238A70
label_23d988:
    if (ctx->pc == 0x23D988u) {
        ctx->pc = 0x23D98Cu;
        goto label_23d98c;
    }
    ctx->pc = 0x23D984u;
    SET_GPR_U32(ctx, 31, 0x23D98Cu);
    ctx->pc = 0x238A70u;
    { ctx->pc = 0x238a70; return; }
    ctx->pc = 0x23D98Cu;
label_23d98c:
    // 0x23d98c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23d990:
    // 0x23d990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23d990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d994:
    // 0x23d994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d998:
    // 0x23d998: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23d998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d99c:
    // 0x23d99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23d99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23d9a0:
    // 0x23d9a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23d9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d9a4:
    // 0x23d9a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23d9a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23d9a8:
    // 0x23d9a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23d9ac:
    // 0x23d9ac: 0x808f66e  j           func_23D9B8
    ctx->pc = 0x23d9b0u;
    return;
}
