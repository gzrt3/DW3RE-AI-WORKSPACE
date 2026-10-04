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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part365(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24d1d8u: goto label_24d1d8;
        case 0x24d1dcu: goto label_24d1dc;
        case 0x24d1e0u: goto label_24d1e0;
        case 0x24d1e4u: goto label_24d1e4;
        case 0x24d1e8u: goto label_24d1e8;
        case 0x24d1ecu: goto label_24d1ec;
        case 0x24d1f0u: goto label_24d1f0;
        case 0x24d1f4u: goto label_24d1f4;
        case 0x24d1f8u: goto label_24d1f8;
        case 0x24d1fcu: goto label_24d1fc;
        case 0x24d200u: goto label_24d200;
        case 0x24d204u: goto label_24d204;
        case 0x24d208u: goto label_24d208;
        case 0x24d20cu: goto label_24d20c;
        case 0x24d210u: goto label_24d210;
        case 0x24d214u: goto label_24d214;
        case 0x24d218u: goto label_24d218;
        case 0x24d21cu: goto label_24d21c;
        case 0x24d220u: goto label_24d220;
        case 0x24d224u: goto label_24d224;
        case 0x24d228u: goto label_24d228;
        case 0x24d22cu: goto label_24d22c;
        case 0x24d230u: goto label_24d230;
        case 0x24d234u: goto label_24d234;
        case 0x24d238u: goto label_24d238;
        case 0x24d23cu: goto label_24d23c;
        case 0x24d240u: goto label_24d240;
        case 0x24d244u: goto label_24d244;
        case 0x24d248u: goto label_24d248;
        case 0x24d24cu: goto label_24d24c;
        case 0x24d250u: goto label_24d250;
        case 0x24d254u: goto label_24d254;
        case 0x24d258u: goto label_24d258;
        case 0x24d25cu: goto label_24d25c;
        case 0x24d260u: goto label_24d260;
        case 0x24d264u: goto label_24d264;
        case 0x24d268u: goto label_24d268;
        case 0x24d26cu: goto label_24d26c;
        case 0x24d270u: goto label_24d270;
        case 0x24d274u: goto label_24d274;
        case 0x24d278u: goto label_24d278;
        case 0x24d27cu: goto label_24d27c;
        case 0x24d280u: goto label_24d280;
        case 0x24d284u: goto label_24d284;
        case 0x24d288u: goto label_24d288;
        case 0x24d28cu: goto label_24d28c;
        case 0x24d290u: goto label_24d290;
        case 0x24d294u: goto label_24d294;
        case 0x24d298u: goto label_24d298;
        case 0x24d29cu: goto label_24d29c;
        case 0x24d2a0u: goto label_24d2a0;
        case 0x24d2a4u: goto label_24d2a4;
        case 0x24d2a8u: goto label_24d2a8;
        case 0x24d2acu: goto label_24d2ac;
        case 0x24d2b0u: goto label_24d2b0;
        case 0x24d2b4u: goto label_24d2b4;
        case 0x24d2b8u: goto label_24d2b8;
        case 0x24d2bcu: goto label_24d2bc;
        case 0x24d2c0u: goto label_24d2c0;
        case 0x24d2c4u: goto label_24d2c4;
        case 0x24d2c8u: goto label_24d2c8;
        case 0x24d2ccu: goto label_24d2cc;
        case 0x24d2d0u: goto label_24d2d0;
        case 0x24d2d4u: goto label_24d2d4;
        case 0x24d2d8u: goto label_24d2d8;
        case 0x24d2dcu: goto label_24d2dc;
        case 0x24d2e0u: goto label_24d2e0;
        case 0x24d2e4u: goto label_24d2e4;
        case 0x24d2e8u: goto label_24d2e8;
        case 0x24d2ecu: goto label_24d2ec;
        case 0x24d2f0u: goto label_24d2f0;
        case 0x24d2f4u: goto label_24d2f4;
        case 0x24d2f8u: goto label_24d2f8;
        case 0x24d2fcu: goto label_24d2fc;
        case 0x24d300u: goto label_24d300;
        case 0x24d304u: goto label_24d304;
        case 0x24d308u: goto label_24d308;
        case 0x24d30cu: goto label_24d30c;
        case 0x24d310u: goto label_24d310;
        case 0x24d314u: goto label_24d314;
        case 0x24d318u: goto label_24d318;
        case 0x24d31cu: goto label_24d31c;
        case 0x24d320u: goto label_24d320;
        case 0x24d324u: goto label_24d324;
        case 0x24d328u: goto label_24d328;
        case 0x24d32cu: goto label_24d32c;
        case 0x24d330u: goto label_24d330;
        case 0x24d334u: goto label_24d334;
        case 0x24d338u: goto label_24d338;
        case 0x24d33cu: goto label_24d33c;
        case 0x24d340u: goto label_24d340;
        case 0x24d344u: goto label_24d344;
        case 0x24d348u: goto label_24d348;
        case 0x24d34cu: goto label_24d34c;
        case 0x24d350u: goto label_24d350;
        case 0x24d354u: goto label_24d354;
        case 0x24d358u: goto label_24d358;
        case 0x24d35cu: goto label_24d35c;
        case 0x24d360u: goto label_24d360;
        case 0x24d364u: goto label_24d364;
        case 0x24d368u: goto label_24d368;
        case 0x24d36cu: goto label_24d36c;
        case 0x24d370u: goto label_24d370;
        case 0x24d374u: goto label_24d374;
        case 0x24d378u: goto label_24d378;
        case 0x24d37cu: goto label_24d37c;
        case 0x24d380u: goto label_24d380;
        case 0x24d384u: goto label_24d384;
        case 0x24d388u: goto label_24d388;
        case 0x24d38cu: goto label_24d38c;
        case 0x24d390u: goto label_24d390;
        case 0x24d394u: goto label_24d394;
        case 0x24d398u: goto label_24d398;
        case 0x24d39cu: goto label_24d39c;
        case 0x24d3a0u: goto label_24d3a0;
        case 0x24d3a4u: goto label_24d3a4;
        case 0x24d3a8u: goto label_24d3a8;
        case 0x24d3acu: goto label_24d3ac;
        case 0x24d3b0u: goto label_24d3b0;
        case 0x24d3b4u: goto label_24d3b4;
        case 0x24d3b8u: goto label_24d3b8;
        case 0x24d3bcu: goto label_24d3bc;
        case 0x24d3c0u: goto label_24d3c0;
        case 0x24d3c4u: goto label_24d3c4;
        case 0x24d3c8u: goto label_24d3c8;
        case 0x24d3ccu: goto label_24d3cc;
        case 0x24d3d0u: goto label_24d3d0;
        case 0x24d3d4u: goto label_24d3d4;
        case 0x24d3d8u: goto label_24d3d8;
        case 0x24d3dcu: goto label_24d3dc;
        case 0x24d3e0u: goto label_24d3e0;
        case 0x24d3e4u: goto label_24d3e4;
        case 0x24d3e8u: goto label_24d3e8;
        case 0x24d3ecu: goto label_24d3ec;
        case 0x24d3f0u: goto label_24d3f0;
        case 0x24d3f4u: goto label_24d3f4;
        case 0x24d3f8u: goto label_24d3f8;
        case 0x24d3fcu: goto label_24d3fc;
        case 0x24d400u: goto label_24d400;
        case 0x24d404u: goto label_24d404;
        case 0x24d408u: goto label_24d408;
        case 0x24d40cu: goto label_24d40c;
        case 0x24d410u: goto label_24d410;
        case 0x24d414u: goto label_24d414;
        case 0x24d418u: goto label_24d418;
        case 0x24d41cu: goto label_24d41c;
        case 0x24d420u: goto label_24d420;
        case 0x24d424u: goto label_24d424;
        case 0x24d428u: goto label_24d428;
        case 0x24d42cu: goto label_24d42c;
        case 0x24d430u: goto label_24d430;
        case 0x24d434u: goto label_24d434;
        case 0x24d438u: goto label_24d438;
        case 0x24d43cu: goto label_24d43c;
        case 0x24d440u: goto label_24d440;
        case 0x24d444u: goto label_24d444;
        case 0x24d448u: goto label_24d448;
        case 0x24d44cu: goto label_24d44c;
        case 0x24d450u: goto label_24d450;
        case 0x24d454u: goto label_24d454;
        case 0x24d458u: goto label_24d458;
        case 0x24d45cu: goto label_24d45c;
        case 0x24d460u: goto label_24d460;
        case 0x24d464u: goto label_24d464;
        case 0x24d468u: goto label_24d468;
        case 0x24d46cu: goto label_24d46c;
        case 0x24d470u: goto label_24d470;
        case 0x24d474u: goto label_24d474;
        case 0x24d478u: goto label_24d478;
        case 0x24d47cu: goto label_24d47c;
        case 0x24d480u: goto label_24d480;
        case 0x24d484u: goto label_24d484;
        case 0x24d488u: goto label_24d488;
        case 0x24d48cu: goto label_24d48c;
        case 0x24d490u: goto label_24d490;
        case 0x24d494u: goto label_24d494;
        case 0x24d498u: goto label_24d498;
        case 0x24d49cu: goto label_24d49c;
        case 0x24d4a0u: goto label_24d4a0;
        case 0x24d4a4u: goto label_24d4a4;
        case 0x24d4a8u: goto label_24d4a8;
        case 0x24d4acu: goto label_24d4ac;
        case 0x24d4b0u: goto label_24d4b0;
        case 0x24d4b4u: goto label_24d4b4;
        case 0x24d4b8u: goto label_24d4b8;
        case 0x24d4bcu: goto label_24d4bc;
        case 0x24d4c0u: goto label_24d4c0;
        case 0x24d4c4u: goto label_24d4c4;
        case 0x24d4c8u: goto label_24d4c8;
        case 0x24d4ccu: goto label_24d4cc;
        case 0x24d4d0u: goto label_24d4d0;
        case 0x24d4d4u: goto label_24d4d4;
        case 0x24d4d8u: goto label_24d4d8;
        case 0x24d4dcu: goto label_24d4dc;
        case 0x24d4e0u: goto label_24d4e0;
        case 0x24d4e4u: goto label_24d4e4;
        case 0x24d4e8u: goto label_24d4e8;
        case 0x24d4ecu: goto label_24d4ec;
        case 0x24d4f0u: goto label_24d4f0;
        case 0x24d4f4u: goto label_24d4f4;
        case 0x24d4f8u: goto label_24d4f8;
        case 0x24d4fcu: goto label_24d4fc;
        case 0x24d500u: goto label_24d500;
        case 0x24d504u: goto label_24d504;
        case 0x24d508u: goto label_24d508;
        case 0x24d50cu: goto label_24d50c;
        case 0x24d510u: goto label_24d510;
        case 0x24d514u: goto label_24d514;
        case 0x24d518u: goto label_24d518;
        case 0x24d51cu: goto label_24d51c;
        case 0x24d520u: goto label_24d520;
        case 0x24d524u: goto label_24d524;
        case 0x24d528u: goto label_24d528;
        case 0x24d52cu: goto label_24d52c;
        case 0x24d530u: goto label_24d530;
        case 0x24d534u: goto label_24d534;
        case 0x24d538u: goto label_24d538;
        case 0x24d53cu: goto label_24d53c;
        case 0x24d540u: goto label_24d540;
        case 0x24d544u: goto label_24d544;
        case 0x24d548u: goto label_24d548;
        case 0x24d54cu: goto label_24d54c;
        case 0x24d550u: goto label_24d550;
        case 0x24d554u: goto label_24d554;
        case 0x24d558u: goto label_24d558;
        case 0x24d55cu: goto label_24d55c;
        case 0x24d560u: goto label_24d560;
        case 0x24d564u: goto label_24d564;
        case 0x24d568u: goto label_24d568;
        case 0x24d56cu: goto label_24d56c;
        case 0x24d570u: goto label_24d570;
        case 0x24d574u: goto label_24d574;
        case 0x24d578u: goto label_24d578;
        case 0x24d57cu: goto label_24d57c;
        case 0x24d580u: goto label_24d580;
        case 0x24d584u: goto label_24d584;
        case 0x24d588u: goto label_24d588;
        case 0x24d58cu: goto label_24d58c;
        case 0x24d590u: goto label_24d590;
        case 0x24d594u: goto label_24d594;
        case 0x24d598u: goto label_24d598;
        case 0x24d59cu: goto label_24d59c;
        case 0x24d5a0u: goto label_24d5a0;
        case 0x24d5a4u: goto label_24d5a4;
        case 0x24d5a8u: goto label_24d5a8;
        case 0x24d5acu: goto label_24d5ac;
        case 0x24d5b0u: goto label_24d5b0;
        case 0x24d5b4u: goto label_24d5b4;
        case 0x24d5b8u: goto label_24d5b8;
        case 0x24d5bcu: goto label_24d5bc;
        case 0x24d5c0u: goto label_24d5c0;
        case 0x24d5c4u: goto label_24d5c4;
        case 0x24d5c8u: goto label_24d5c8;
        case 0x24d5ccu: goto label_24d5cc;
        case 0x24d5d0u: goto label_24d5d0;
        case 0x24d5d4u: goto label_24d5d4;
        case 0x24d5d8u: goto label_24d5d8;
        case 0x24d5dcu: goto label_24d5dc;
        case 0x24d5e0u: goto label_24d5e0;
        case 0x24d5e4u: goto label_24d5e4;
        case 0x24d5e8u: goto label_24d5e8;
        case 0x24d5ecu: goto label_24d5ec;
        case 0x24d5f0u: goto label_24d5f0;
        case 0x24d5f4u: goto label_24d5f4;
        case 0x24d5f8u: goto label_24d5f8;
        case 0x24d5fcu: goto label_24d5fc;
        case 0x24d600u: goto label_24d600;
        case 0x24d604u: goto label_24d604;
        case 0x24d608u: goto label_24d608;
        case 0x24d60cu: goto label_24d60c;
        case 0x24d610u: goto label_24d610;
        case 0x24d614u: goto label_24d614;
        case 0x24d618u: goto label_24d618;
        case 0x24d61cu: goto label_24d61c;
        case 0x24d620u: goto label_24d620;
        case 0x24d624u: goto label_24d624;
        case 0x24d628u: goto label_24d628;
        case 0x24d62cu: goto label_24d62c;
        case 0x24d630u: goto label_24d630;
        case 0x24d634u: goto label_24d634;
        case 0x24d638u: goto label_24d638;
        case 0x24d63cu: goto label_24d63c;
        case 0x24d640u: goto label_24d640;
        case 0x24d644u: goto label_24d644;
        case 0x24d648u: goto label_24d648;
        case 0x24d64cu: goto label_24d64c;
        case 0x24d650u: goto label_24d650;
        case 0x24d654u: goto label_24d654;
        case 0x24d658u: goto label_24d658;
        case 0x24d65cu: goto label_24d65c;
        case 0x24d660u: goto label_24d660;
        case 0x24d664u: goto label_24d664;
        case 0x24d668u: goto label_24d668;
        case 0x24d66cu: goto label_24d66c;
        case 0x24d670u: goto label_24d670;
        case 0x24d674u: goto label_24d674;
        case 0x24d678u: goto label_24d678;
        case 0x24d67cu: goto label_24d67c;
        case 0x24d680u: goto label_24d680;
        case 0x24d684u: goto label_24d684;
        case 0x24d688u: goto label_24d688;
        case 0x24d68cu: goto label_24d68c;
        case 0x24d690u: goto label_24d690;
        case 0x24d694u: goto label_24d694;
        case 0x24d698u: goto label_24d698;
        case 0x24d69cu: goto label_24d69c;
        case 0x24d6a0u: goto label_24d6a0;
        case 0x24d6a4u: goto label_24d6a4;
        case 0x24d6a8u: goto label_24d6a8;
        case 0x24d6acu: goto label_24d6ac;
        case 0x24d6b0u: goto label_24d6b0;
        case 0x24d6b4u: goto label_24d6b4;
        case 0x24d6b8u: goto label_24d6b8;
        case 0x24d6bcu: goto label_24d6bc;
        case 0x24d6c0u: goto label_24d6c0;
        case 0x24d6c4u: goto label_24d6c4;
        case 0x24d6c8u: goto label_24d6c8;
        case 0x24d6ccu: goto label_24d6cc;
        case 0x24d6d0u: goto label_24d6d0;
        case 0x24d6d4u: goto label_24d6d4;
        case 0x24d6d8u: goto label_24d6d8;
        case 0x24d6dcu: goto label_24d6dc;
        case 0x24d6e0u: goto label_24d6e0;
        case 0x24d6e4u: goto label_24d6e4;
        case 0x24d6e8u: goto label_24d6e8;
        case 0x24d6ecu: goto label_24d6ec;
        case 0x24d6f0u: goto label_24d6f0;
        case 0x24d6f4u: goto label_24d6f4;
        case 0x24d6f8u: goto label_24d6f8;
        case 0x24d6fcu: goto label_24d6fc;
        case 0x24d700u: goto label_24d700;
        case 0x24d704u: goto label_24d704;
        case 0x24d708u: goto label_24d708;
        case 0x24d70cu: goto label_24d70c;
        case 0x24d710u: goto label_24d710;
        case 0x24d714u: goto label_24d714;
        case 0x24d718u: goto label_24d718;
        case 0x24d71cu: goto label_24d71c;
        case 0x24d720u: goto label_24d720;
        case 0x24d724u: goto label_24d724;
        case 0x24d728u: goto label_24d728;
        case 0x24d72cu: goto label_24d72c;
        case 0x24d730u: goto label_24d730;
        case 0x24d734u: goto label_24d734;
        case 0x24d738u: goto label_24d738;
        case 0x24d73cu: goto label_24d73c;
        case 0x24d740u: goto label_24d740;
        case 0x24d744u: goto label_24d744;
        case 0x24d748u: goto label_24d748;
        case 0x24d74cu: goto label_24d74c;
        case 0x24d750u: goto label_24d750;
        case 0x24d754u: goto label_24d754;
        case 0x24d758u: goto label_24d758;
        case 0x24d75cu: goto label_24d75c;
        case 0x24d760u: goto label_24d760;
        case 0x24d764u: goto label_24d764;
        case 0x24d768u: goto label_24d768;
        case 0x24d76cu: goto label_24d76c;
        case 0x24d770u: goto label_24d770;
        case 0x24d774u: goto label_24d774;
        case 0x24d778u: goto label_24d778;
        case 0x24d77cu: goto label_24d77c;
        case 0x24d780u: goto label_24d780;
        case 0x24d784u: goto label_24d784;
        case 0x24d788u: goto label_24d788;
        case 0x24d78cu: goto label_24d78c;
        case 0x24d790u: goto label_24d790;
        case 0x24d794u: goto label_24d794;
        case 0x24d798u: goto label_24d798;
        case 0x24d79cu: goto label_24d79c;
        case 0x24d7a0u: goto label_24d7a0;
        case 0x24d7a4u: goto label_24d7a4;
        case 0x24d7a8u: goto label_24d7a8;
        case 0x24d7acu: goto label_24d7ac;
        case 0x24d7b0u: goto label_24d7b0;
        case 0x24d7b4u: goto label_24d7b4;
        case 0x24d7b8u: goto label_24d7b8;
        case 0x24d7bcu: goto label_24d7bc;
        case 0x24d7c0u: goto label_24d7c0;
        case 0x24d7c4u: goto label_24d7c4;
        case 0x24d7c8u: goto label_24d7c8;
        case 0x24d7ccu: goto label_24d7cc;
        case 0x24d7d0u: goto label_24d7d0;
        case 0x24d7d4u: goto label_24d7d4;
        case 0x24d7d8u: goto label_24d7d8;
        case 0x24d7dcu: goto label_24d7dc;
        case 0x24d7e0u: goto label_24d7e0;
        case 0x24d7e4u: goto label_24d7e4;
        case 0x24d7e8u: goto label_24d7e8;
        case 0x24d7ecu: goto label_24d7ec;
        case 0x24d7f0u: goto label_24d7f0;
        case 0x24d7f4u: goto label_24d7f4;
        case 0x24d7f8u: goto label_24d7f8;
        case 0x24d7fcu: goto label_24d7fc;
        case 0x24d800u: goto label_24d800;
        case 0x24d804u: goto label_24d804;
        case 0x24d808u: goto label_24d808;
        case 0x24d80cu: goto label_24d80c;
        case 0x24d810u: goto label_24d810;
        case 0x24d814u: goto label_24d814;
        case 0x24d818u: goto label_24d818;
        case 0x24d81cu: goto label_24d81c;
        case 0x24d820u: goto label_24d820;
        case 0x24d824u: goto label_24d824;
        case 0x24d828u: goto label_24d828;
        case 0x24d82cu: goto label_24d82c;
        case 0x24d830u: goto label_24d830;
        case 0x24d834u: goto label_24d834;
        case 0x24d838u: goto label_24d838;
        case 0x24d83cu: goto label_24d83c;
        case 0x24d840u: goto label_24d840;
        case 0x24d844u: goto label_24d844;
        case 0x24d848u: goto label_24d848;
        case 0x24d84cu: goto label_24d84c;
        case 0x24d850u: goto label_24d850;
        case 0x24d854u: goto label_24d854;
        case 0x24d858u: goto label_24d858;
        case 0x24d85cu: goto label_24d85c;
        case 0x24d860u: goto label_24d860;
        case 0x24d864u: goto label_24d864;
        case 0x24d868u: goto label_24d868;
        case 0x24d86cu: goto label_24d86c;
        case 0x24d870u: goto label_24d870;
        case 0x24d874u: goto label_24d874;
        case 0x24d878u: goto label_24d878;
        case 0x24d87cu: goto label_24d87c;
        case 0x24d880u: goto label_24d880;
        case 0x24d884u: goto label_24d884;
        case 0x24d888u: goto label_24d888;
        case 0x24d88cu: goto label_24d88c;
        case 0x24d890u: goto label_24d890;
        case 0x24d894u: goto label_24d894;
        case 0x24d898u: goto label_24d898;
        case 0x24d89cu: goto label_24d89c;
        case 0x24d8a0u: goto label_24d8a0;
        case 0x24d8a4u: goto label_24d8a4;
        case 0x24d8a8u: goto label_24d8a8;
        case 0x24d8acu: goto label_24d8ac;
        case 0x24d8b0u: goto label_24d8b0;
        case 0x24d8b4u: goto label_24d8b4;
        case 0x24d8b8u: goto label_24d8b8;
        case 0x24d8bcu: goto label_24d8bc;
        case 0x24d8c0u: goto label_24d8c0;
        case 0x24d8c4u: goto label_24d8c4;
        case 0x24d8c8u: goto label_24d8c8;
        case 0x24d8ccu: goto label_24d8cc;
        case 0x24d8d0u: goto label_24d8d0;
        case 0x24d8d4u: goto label_24d8d4;
        case 0x24d8d8u: goto label_24d8d8;
        case 0x24d8dcu: goto label_24d8dc;
        case 0x24d8e0u: goto label_24d8e0;
        case 0x24d8e4u: goto label_24d8e4;
        case 0x24d8e8u: goto label_24d8e8;
        case 0x24d8ecu: goto label_24d8ec;
        case 0x24d8f0u: goto label_24d8f0;
        case 0x24d8f4u: goto label_24d8f4;
        case 0x24d8f8u: goto label_24d8f8;
        case 0x24d8fcu: goto label_24d8fc;
        case 0x24d900u: goto label_24d900;
        case 0x24d904u: goto label_24d904;
        case 0x24d908u: goto label_24d908;
        case 0x24d90cu: goto label_24d90c;
        case 0x24d910u: goto label_24d910;
        case 0x24d914u: goto label_24d914;
        case 0x24d918u: goto label_24d918;
        case 0x24d91cu: goto label_24d91c;
        case 0x24d920u: goto label_24d920;
        case 0x24d924u: goto label_24d924;
        case 0x24d928u: goto label_24d928;
        case 0x24d92cu: goto label_24d92c;
        case 0x24d930u: goto label_24d930;
        case 0x24d934u: goto label_24d934;
        case 0x24d938u: goto label_24d938;
        case 0x24d93cu: goto label_24d93c;
        case 0x24d940u: goto label_24d940;
        case 0x24d944u: goto label_24d944;
        case 0x24d948u: goto label_24d948;
        case 0x24d94cu: goto label_24d94c;
        case 0x24d950u: goto label_24d950;
        case 0x24d954u: goto label_24d954;
        case 0x24d958u: goto label_24d958;
        case 0x24d95cu: goto label_24d95c;
        case 0x24d960u: goto label_24d960;
        case 0x24d964u: goto label_24d964;
        case 0x24d968u: goto label_24d968;
        case 0x24d96cu: goto label_24d96c;
        case 0x24d970u: goto label_24d970;
        case 0x24d974u: goto label_24d974;
        case 0x24d978u: goto label_24d978;
        case 0x24d97cu: goto label_24d97c;
        case 0x24d980u: goto label_24d980;
        case 0x24d984u: goto label_24d984;
        case 0x24d988u: goto label_24d988;
        case 0x24d98cu: goto label_24d98c;
        case 0x24d990u: goto label_24d990;
        case 0x24d994u: goto label_24d994;
        case 0x24d998u: goto label_24d998;
        case 0x24d99cu: goto label_24d99c;
        case 0x24d9a0u: goto label_24d9a0;
        case 0x24d9a4u: goto label_24d9a4;
        default: return;
    }

label_24d1d8:
    // 0x24d1d8: 0x422c0000  .word       0x422C0000                   # INVALID     $s1, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d1d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D1D8 raw=0x422C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d1dc:
    // 0x24d1dc: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x24d1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d1e0:
    // 0x24d1e0: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x24d1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d1e4:
    // 0x24d1e4: 0x41a80000  .word       0x41A80000                   # INVALID     $t5, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d1e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D1E4 raw=0x41A80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d1e8:
    // 0x24d1e8: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d1e8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D1E8 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d1ec:
    // 0x24d1ec: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d1ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D1EC raw=0x41700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d1f0:
    // 0x24d1f0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d1f4:
    // 0x24d1f4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d1f8:
    // 0x24d1f8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d1fc:
    // 0x24d1fc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d1fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D1FC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d200:
    // 0x24d200: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d200u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D200 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d204:
    // 0x24d204: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d204u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D204 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d208:
    // 0x24d208: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d20c:
    // 0x24d20c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d210:
    // 0x24d210: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d214:
    // 0x24d214: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d214u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D214 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d218:
    // 0x24d218: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d218u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D218 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d21c:
    // 0x24d21c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d21cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D21C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d220:
    // 0x24d220: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d224:
    // 0x24d224: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d228:
    // 0x24d228: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d22c:
    // 0x24d22c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d22cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D22C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d230:
    // 0x24d230: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d230u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D230 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d234:
    // 0x24d234: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d234u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D234 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d238:
    // 0x24d238: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d238u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D238 raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d23c:
    // 0x24d23c: 0x1e0009  .word       0x001E0009                   # jalr        $zero, $zero # 001E0000 <InstrIdType: CPU_SPECIAL>
label_24d240:
    if (ctx->pc == 0x24D240u) {
        ctx->pc = 0x24D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D23Cu;
        // 0x24d240: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D244u;
        goto label_24d244;
    }
    ctx->pc = 0x24D23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D23Cu;
        // 0x24d240: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D23Cu, 0x24D244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D244u;
label_24d244:
    // 0x24d244: 0xca00ca  .word       0x00CA00CA                   # movz        $zero, $a2, $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d244u;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 6));
label_24d248:
    // 0x24d248: 0x844005d  j           func_1100174
label_24d24c:
    if (ctx->pc == 0x24D24Cu) {
        ctx->pc = 0x24D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D248u;
        // 0x24d24c: 0x8770130  j           func_1DC04C0 (Delay Slot)
        // J 0x1DC04C0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D250u;
        goto label_24d250;
    }
    ctx->pc = 0x24D248u;
    ctx->pc = 0x24D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D248u;
    // 0x24d24c: 0x8770130  j           func_1DC04C0 (Delay Slot)
    // J 0x1DC04C0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100174u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100174u, 0x24D248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D250u;
label_24d250:
    // 0x24d250: 0x1e201e1  .word       0x01E201E1                   # addu        $zero, $t7, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d250u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_24d254:
    // 0x24d254: 0x185015c  .word       0x0185015C                   # dmult       $t4, $a1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d254u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24D254 raw=0x0185015C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d258:
    // 0x24d258: 0x4400cb  .word       0x004400CB                   # movn        $zero, $v0, $a0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d258u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 2));
label_24d25c:
    // 0x24d25c: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x24d25cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24D25C raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d260:
    // 0x24d260: 0x0  nop
    ctx->pc = 0x24d260u;
    // NOP
label_24d264:
    // 0x24d264: 0x41b80000  .word       0x41B80000                   # INVALID     $t5, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d264u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D264 raw=0x41B80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d268:
    // 0x24d268: 0x0  nop
    ctx->pc = 0x24d268u;
    // NOP
label_24d26c:
    // 0x24d26c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d26cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d270:
    // 0x24d270: 0x42be0000  .word       0x42BE0000                   # INVALID     $s5, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d270u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D270 raw=0x42BE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d274:
    // 0x24d274: 0x41b80000  .word       0x41B80000                   # INVALID     $t5, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d274u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D274 raw=0x41B80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d278:
    // 0x24d278: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d278u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d27c:
    // 0x24d27c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d27cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24D27C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d280:
    // 0x24d280: 0x0  nop
    ctx->pc = 0x24d280u;
    // NOP
label_24d284:
    // 0x24d284: 0x0  nop
    ctx->pc = 0x24d284u;
    // NOP
label_24d288:
    // 0x24d288: 0x0  nop
    ctx->pc = 0x24d288u;
    // NOP
label_24d28c:
    // 0x24d28c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d28cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d290:
    // 0x24d290: 0x0  nop
    ctx->pc = 0x24d290u;
    // NOP
label_24d294:
    // 0x24d294: 0x0  nop
    ctx->pc = 0x24d294u;
    // NOP
label_24d298:
    // 0x24d298: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24d298u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24d29c:
    // 0x24d29c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d29cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D29C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d2a0:
    // 0x24d2a0: 0x0  nop
    ctx->pc = 0x24d2a0u;
    // NOP
label_24d2a4:
    // 0x24d2a4: 0x0  nop
    ctx->pc = 0x24d2a4u;
    // NOP
label_24d2a8:
    // 0x24d2a8: 0x0  nop
    ctx->pc = 0x24d2a8u;
    // NOP
label_24d2ac:
    // 0x24d2ac: 0x0  nop
    ctx->pc = 0x24d2acu;
    // NOP
label_24d2b0:
    // 0x24d2b0: 0x0  nop
    ctx->pc = 0x24d2b0u;
    // NOP
label_24d2b4:
    // 0x24d2b4: 0x0  nop
    ctx->pc = 0x24d2b4u;
    // NOP
label_24d2b8:
    // 0x24d2b8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d2bc:
    // 0x24d2bc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d2c0:
    // 0x24d2c0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d2c4:
    // 0x24d2c4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d2c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D2C4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d2c8:
    // 0x24d2c8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d2c8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D2C8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d2cc:
    // 0x24d2cc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d2ccu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D2CC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d2d0:
    // 0x24d2d0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d2d4:
    // 0x24d2d4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d2d8:
    // 0x24d2d8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d2dc:
    // 0x24d2dc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d2dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D2DC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d2e0:
    // 0x24d2e0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d2e0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D2E0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d2e4:
    // 0x24d2e4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d2e4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D2E4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d2e8:
    // 0x24d2e8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d2ec:
    // 0x24d2ec: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d2f0:
    // 0x24d2f0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d2f4:
    // 0x24d2f4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d2f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D2F4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d2f8:
    // 0x24d2f8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d2f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D2F8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d2fc:
    // 0x24d2fc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d2fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D2FC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d300:
    // 0x24d300: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d304:
    // 0x24d304: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d308:
    // 0x24d308: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d30c:
    // 0x24d30c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d30cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D30C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d310:
    // 0x24d310: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d310u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D310 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d314:
    // 0x24d314: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d314u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D314 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d318:
    // 0x24d318: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d31c:
    // 0x24d31c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d320:
    // 0x24d320: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d324:
    // 0x24d324: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d324u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D324 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d328:
    // 0x24d328: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d328u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D328 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d32c:
    // 0x24d32c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d32cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D32C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d330:
    // 0x24d330: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d334:
    // 0x24d334: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d338:
    // 0x24d338: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d33c:
    // 0x24d33c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d33cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D33C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d340:
    // 0x24d340: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d340u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D340 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d344:
    // 0x24d344: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d344u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D344 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d348:
    // 0x24d348: 0x42f1d1ec  .word       0x42F1D1EC                   # INVALID     $s7, $s1, -0x2E14 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d348u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D348 raw=0x42F1D1EC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d34c:
    // 0x24d34c: 0x1f0009  .word       0x001F0009                   # jalr        $zero, $zero # 001F0000 <InstrIdType: CPU_SPECIAL>
label_24d350:
    if (ctx->pc == 0x24D350u) {
        ctx->pc = 0x24D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D34Cu;
        // 0x24d350: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D354u;
        goto label_24d354;
    }
    ctx->pc = 0x24D34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D34Cu;
        // 0x24d350: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D34Cu, 0x24D354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D354u;
label_24d354:
    // 0x24d354: 0xc000c0  .word       0x00C000C0                   # sll         $zero, $zero, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d354u;
    
label_24d358:
    // 0x24d358: 0x845005e  j           func_1140178
label_24d35c:
    if (ctx->pc == 0x24D35Cu) {
        ctx->pc = 0x24D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D358u;
        // 0x24d35c: 0x872012b  j           func_1C804AC (Delay Slot)
        // J 0x1C804AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D360u;
        goto label_24d360;
    }
    ctx->pc = 0x24D358u;
    ctx->pc = 0x24D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D358u;
    // 0x24d35c: 0x872012b  j           func_1C804AC (Delay Slot)
    // J 0x1C804AC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1140178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1140178u, 0x24D358u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D360u;
label_24d360:
    // 0x24d360: 0x1e501e4  .word       0x01E501E4                   # and         $zero, $t7, $a1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d360u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 15) & GPR_U64(ctx, 5));
label_24d364:
    // 0x24d364: 0x186015d  .word       0x0186015D                   # dmultu      $t4, $a2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24D364 raw=0x0186015D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d368:
    // 0x24d368: 0x4500c1  .word       0x004500C1                   # INVALID     $v0, $a1, 0xC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d368u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24D368 raw=0x004500C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d36c:
    // 0x24d36c: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x24d36cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24D36C raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d370:
    // 0x24d370: 0x0  nop
    ctx->pc = 0x24d370u;
    // NOP
label_24d374:
    // 0x24d374: 0x41880000  .word       0x41880000                   # INVALID     $t4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d374u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D374 raw=0x41880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d378:
    // 0x24d378: 0x0  nop
    ctx->pc = 0x24d378u;
    // NOP
label_24d37c:
    // 0x24d37c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d37cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d380:
    // 0x24d380: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d380u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D380 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d384:
    // 0x24d384: 0x41880000  .word       0x41880000                   # INVALID     $t4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d384u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D384 raw=0x41880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d388:
    // 0x24d388: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d388u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d38c:
    // 0x24d38c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d38cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D38C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d390:
    // 0x24d390: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d390u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D390 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d394:
    // 0x24d394: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d394u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D394 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d398:
    // 0x24d398: 0x0  nop
    ctx->pc = 0x24d398u;
    // NOP
label_24d39c:
    // 0x24d39c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d39cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d3a0:
    // 0x24d3a0: 0x0  nop
    ctx->pc = 0x24d3a0u;
    // NOP
label_24d3a4:
    // 0x24d3a4: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d3a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D3A4 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d3a8:
    // 0x24d3a8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24d3a8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24d3ac:
    // 0x24d3ac: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x24d3acu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x24D3AC raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d3b0:
    // 0x24d3b0: 0x0  nop
    ctx->pc = 0x24d3b0u;
    // NOP
label_24d3b4:
    // 0x24d3b4: 0x0  nop
    ctx->pc = 0x24d3b4u;
    // NOP
label_24d3b8:
    // 0x24d3b8: 0x0  nop
    ctx->pc = 0x24d3b8u;
    // NOP
label_24d3bc:
    // 0x24d3bc: 0x0  nop
    ctx->pc = 0x24d3bcu;
    // NOP
label_24d3c0:
    // 0x24d3c0: 0x0  nop
    ctx->pc = 0x24d3c0u;
    // NOP
label_24d3c4:
    // 0x24d3c4: 0x0  nop
    ctx->pc = 0x24d3c4u;
    // NOP
label_24d3c8:
    // 0x24d3c8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d3cc:
    // 0x24d3cc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d3d0:
    // 0x24d3d0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d3d4:
    // 0x24d3d4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d3d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D3D4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d3d8:
    // 0x24d3d8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d3d8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D3D8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d3dc:
    // 0x24d3dc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d3dcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D3DC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d3e0:
    // 0x24d3e0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d3e4:
    // 0x24d3e4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d3e8:
    // 0x24d3e8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d3ec:
    // 0x24d3ec: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d3ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D3EC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d3f0:
    // 0x24d3f0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d3f0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D3F0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d3f4:
    // 0x24d3f4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d3f4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D3F4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d3f8:
    // 0x24d3f8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d3fc:
    // 0x24d3fc: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d400:
    // 0x24d400: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d404:
    // 0x24d404: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d404u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D404 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d408:
    // 0x24d408: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d408u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D408 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d40c:
    // 0x24d40c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d40cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D40C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d410:
    // 0x24d410: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d414:
    // 0x24d414: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d418:
    // 0x24d418: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d41c:
    // 0x24d41c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d41cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D41C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d420:
    // 0x24d420: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d420u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D420 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d424:
    // 0x24d424: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d424u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D424 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d428:
    // 0x24d428: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d42c:
    // 0x24d42c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d430:
    // 0x24d430: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d434:
    // 0x24d434: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d434u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D434 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d438:
    // 0x24d438: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d438u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D438 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d43c:
    // 0x24d43c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d43cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D43C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d440:
    // 0x24d440: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d444:
    // 0x24d444: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d448:
    // 0x24d448: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d44c:
    // 0x24d44c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d44cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D44C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d450:
    // 0x24d450: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d450u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D450 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d454:
    // 0x24d454: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d454u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D454 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d458:
    // 0x24d458: 0x42e21eb8  .word       0x42E21EB8                   # INVALID     $s7, $v0, 0x1EB8 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d458u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D458 raw=0x42E21EB8"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d45c:
    // 0x24d45c: 0x200009  jalr        $zero, $at
label_24d460:
    if (ctx->pc == 0x24D460u) {
        ctx->pc = 0x24D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D45Cu;
        // 0x24d460: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D464u;
        goto label_24d464;
    }
    ctx->pc = 0x24D45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D45Cu;
        // 0x24d460: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D45Cu, 0x24D464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D464u;
label_24d464:
    // 0x24d464: 0xc200c2  .word       0x00C200C2                   # srl         $zero, $v0, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d464u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_24d468:
    // 0x24d468: 0x846005f  j           func_118017C
label_24d46c:
    if (ctx->pc == 0x24D46Cu) {
        ctx->pc = 0x24D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D468u;
        // 0x24d46c: 0x873012c  j           func_1CC04B0 (Delay Slot)
        // J 0x1CC04B0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D470u;
        goto label_24d470;
    }
    ctx->pc = 0x24D468u;
    ctx->pc = 0x24D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D468u;
    // 0x24d46c: 0x873012c  j           func_1CC04B0 (Delay Slot)
    // J 0x1CC04B0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x118017Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118017Cu, 0x24D468u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D470u;
label_24d470:
    // 0x24d470: 0x1e801e7  .word       0x01E801E7                   # nor         $zero, $t7, $t0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d470u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 15) | GPR_U64(ctx, 8)));
label_24d474:
    // 0x24d474: 0x187015e  .word       0x0187015E                   # ddiv        $zero, $t4, $a3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d474u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24D474 raw=0x0187015E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d478:
    // 0x24d478: 0x4600c3  .word       0x004600C3                   # sra         $zero, $a2, 3 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d478u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 6), 3));
label_24d47c:
    // 0x24d47c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x24d47cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_24d480:
    // 0x24d480: 0x0  nop
    ctx->pc = 0x24d480u;
    // NOP
label_24d484:
    // 0x24d484: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d484u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D484 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d488:
    // 0x24d488: 0x0  nop
    ctx->pc = 0x24d488u;
    // NOP
label_24d48c:
    // 0x24d48c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d48cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d490:
    // 0x24d490: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d490u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D490 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d494:
    // 0x24d494: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d494u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D494 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d498:
    // 0x24d498: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d498u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d49c:
    // 0x24d49c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d49cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24D49C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4a0:
    // 0x24d4a0: 0x0  nop
    ctx->pc = 0x24d4a0u;
    // NOP
label_24d4a4:
    // 0x24d4a4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4a8:
    // 0x24d4a8: 0x0  nop
    ctx->pc = 0x24d4a8u;
    // NOP
label_24d4ac:
    // 0x24d4ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d4acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d4b0:
    // 0x24d4b0: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24D4B0 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4b4:
    // 0x24d4b4: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D4B4 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4b8:
    // 0x24d4b8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4b8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24D4B8 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4bc:
    // 0x24d4bc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D4BC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4c0:
    // 0x24d4c0: 0x0  nop
    ctx->pc = 0x24d4c0u;
    // NOP
label_24d4c4:
    // 0x24d4c4: 0x0  nop
    ctx->pc = 0x24d4c4u;
    // NOP
label_24d4c8:
    // 0x24d4c8: 0x0  nop
    ctx->pc = 0x24d4c8u;
    // NOP
label_24d4cc:
    // 0x24d4cc: 0x0  nop
    ctx->pc = 0x24d4ccu;
    // NOP
label_24d4d0:
    // 0x24d4d0: 0x0  nop
    ctx->pc = 0x24d4d0u;
    // NOP
label_24d4d4:
    // 0x24d4d4: 0x0  nop
    ctx->pc = 0x24d4d4u;
    // NOP
label_24d4d8:
    // 0x24d4d8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4dc:
    // 0x24d4dc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4e0:
    // 0x24d4e0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4e4:
    // 0x24d4e4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D4E4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4e8:
    // 0x24d4e8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d4e8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D4E8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4ec:
    // 0x24d4ec: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d4ecu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D4EC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4f0:
    // 0x24d4f0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4f4:
    // 0x24d4f4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4f8:
    // 0x24d4f8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4fc:
    // 0x24d4fc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D4FC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d500:
    // 0x24d500: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d500u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D500 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d504:
    // 0x24d504: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d504u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D504 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d508:
    // 0x24d508: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d50c:
    // 0x24d50c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d510:
    // 0x24d510: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d514:
    // 0x24d514: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d514u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D514 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d518:
    // 0x24d518: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d518u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D518 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d51c:
    // 0x24d51c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d51cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D51C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d520:
    // 0x24d520: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d524:
    // 0x24d524: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d528:
    // 0x24d528: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d52c:
    // 0x24d52c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d52cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D52C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d530:
    // 0x24d530: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d530u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D530 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d534:
    // 0x24d534: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d534u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D534 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d538:
    // 0x24d538: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d53c:
    // 0x24d53c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d540:
    // 0x24d540: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d544:
    // 0x24d544: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d544u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D544 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d548:
    // 0x24d548: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d548u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D548 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d54c:
    // 0x24d54c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d54cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D54C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d550:
    // 0x24d550: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d554:
    // 0x24d554: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d558:
    // 0x24d558: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d55c:
    // 0x24d55c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d55cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D55C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d560:
    // 0x24d560: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d560u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D560 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d564:
    // 0x24d564: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d564u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D564 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d568:
    // 0x24d568: 0x42f60000  .word       0x42F60000                   # INVALID     $s7, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d568u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D568 raw=0x42F60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d56c:
    // 0x24d56c: 0x210009  .word       0x00210009                   # jalr        $zero, $at # 00010000 <InstrIdType: CPU_SPECIAL>
label_24d570:
    if (ctx->pc == 0x24D570u) {
        ctx->pc = 0x24D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D56Cu;
        // 0x24d570: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D574u;
        goto label_24d574;
    }
    ctx->pc = 0x24D56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D56Cu;
        // 0x24d570: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D56Cu, 0x24D574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D574u;
label_24d574:
    // 0x24d574: 0xbc00bc  .word       0x00BC00BC                   # dsll32      $zero, $gp, 2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d574u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) << (32 + 2));
label_24d578:
    // 0x24d578: 0x8470060  j           func_11C0180
label_24d57c:
    if (ctx->pc == 0x24D57Cu) {
        ctx->pc = 0x24D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D578u;
        // 0x24d57c: 0x8700129  j           func_1C004A4 (Delay Slot)
        // J 0x1C004A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D580u;
        goto label_24d580;
    }
    ctx->pc = 0x24D578u;
    ctx->pc = 0x24D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D578u;
    // 0x24d57c: 0x8700129  j           func_1C004A4 (Delay Slot)
    // J 0x1C004A4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C0180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0180u, 0x24D578u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D580u;
label_24d580:
    // 0x24d580: 0x1eb01ea  .word       0x01EB01EA                   # slt         $zero, $t7, $t3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d580u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_24d584:
    // 0x24d584: 0x188015f  .word       0x0188015F                   # ddivu       $zero, $t4, $t0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d584u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24D584 raw=0x0188015F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d588:
    // 0x24d588: 0x4700bd  .word       0x004700BD                   # INVALID     $v0, $a3, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d588u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24D588 raw=0x004700BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d58c:
    // 0x24d58c: 0x22  neg         $zero, $zero
    ctx->pc = 0x24d58cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24d590:
    // 0x24d590: 0x0  nop
    ctx->pc = 0x24d590u;
    // NOP
label_24d594:
    // 0x24d594: 0x0  nop
    ctx->pc = 0x24d594u;
    // NOP
label_24d598:
    // 0x24d598: 0x0  nop
    ctx->pc = 0x24d598u;
    // NOP
label_24d59c:
    // 0x24d59c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d59cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d5a0:
    // 0x24d5a0: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d5a0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24D5A0 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5a4:
    // 0x24d5a4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d5a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D5A4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5a8:
    // 0x24d5a8: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24d5ac:
    if (ctx->pc == 0x24D5ACu) {
        ctx->pc = 0x24D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5A8u;
        // 0x24d5ac: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D5AC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5B0u;
        goto label_24d5b0;
    }
    ctx->pc = 0x24D5A8u;
    {
        const bool branch_taken_0x24d5a8 = (false);
        ctx->pc = 0x24D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5A8u;
        // 0x24d5ac: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D5AC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5a8) {
            ctx->pc = 0x24D5ACu;
            goto label_24d5ac;
        }
    }
    ctx->pc = 0x24D5B0u;
label_24d5b0:
    // 0x24d5b0: 0x0  nop
    ctx->pc = 0x24d5b0u;
    // NOP
label_24d5b4:
    // 0x24d5b4: 0x0  nop
    ctx->pc = 0x24d5b4u;
    // NOP
label_24d5b8:
    // 0x24d5b8: 0x0  nop
    ctx->pc = 0x24d5b8u;
    // NOP
label_24d5bc:
    // 0x24d5bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d5bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d5c0:
    // 0x24d5c0: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d5c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24D5C0 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5c4:
    // 0x24d5c4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d5c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D5C4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5c8:
    // 0x24d5c8: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24d5cc:
    if (ctx->pc == 0x24D5CCu) {
        ctx->pc = 0x24D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5C8u;
        // 0x24d5cc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D5CC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5D0u;
        goto label_24d5d0;
    }
    ctx->pc = 0x24D5C8u;
    {
        const bool branch_taken_0x24d5c8 = (false);
        ctx->pc = 0x24D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5C8u;
        // 0x24d5cc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D5CC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5c8) {
            ctx->pc = 0x24D5CCu;
            goto label_24d5cc;
        }
    }
    ctx->pc = 0x24D5D0u;
label_24d5d0:
    // 0x24d5d0: 0x0  nop
    ctx->pc = 0x24d5d0u;
    // NOP
label_24d5d4:
    // 0x24d5d4: 0x0  nop
    ctx->pc = 0x24d5d4u;
    // NOP
label_24d5d8:
    // 0x24d5d8: 0x0  nop
    ctx->pc = 0x24d5d8u;
    // NOP
label_24d5dc:
    // 0x24d5dc: 0x0  nop
    ctx->pc = 0x24d5dcu;
    // NOP
label_24d5e0:
    // 0x24d5e0: 0x0  nop
    ctx->pc = 0x24d5e0u;
    // NOP
label_24d5e4:
    // 0x24d5e4: 0x0  nop
    ctx->pc = 0x24d5e4u;
    // NOP
label_24d5e8:
    // 0x24d5e8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d5ec:
    // 0x24d5ec: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d5f0:
    // 0x24d5f0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d5f4:
    // 0x24d5f4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d5f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D5F4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5f8:
    // 0x24d5f8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d5f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D5F8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5fc:
    // 0x24d5fc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d5fcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D5FC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d600:
    // 0x24d600: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d604:
    // 0x24d604: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d608:
    // 0x24d608: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d60c:
    // 0x24d60c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d60cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D60C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d610:
    // 0x24d610: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d610u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D610 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d614:
    // 0x24d614: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d614u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D614 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d618:
    // 0x24d618: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d61c:
    // 0x24d61c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d620:
    // 0x24d620: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d624:
    // 0x24d624: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d624u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D624 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d628:
    // 0x24d628: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d628u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D628 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d62c:
    // 0x24d62c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d62cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D62C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d630:
    // 0x24d630: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d634:
    // 0x24d634: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d638:
    // 0x24d638: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d63c:
    // 0x24d63c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d63cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D63C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d640:
    // 0x24d640: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d640u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D640 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d644:
    // 0x24d644: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d644u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D644 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d648:
    // 0x24d648: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d64c:
    // 0x24d64c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d650:
    // 0x24d650: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d654:
    // 0x24d654: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d654u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D654 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d658:
    // 0x24d658: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d658u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D658 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d65c:
    // 0x24d65c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d65cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D65C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d660:
    // 0x24d660: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d664:
    // 0x24d664: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d668:
    // 0x24d668: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d66c:
    // 0x24d66c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d66cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D66C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d670:
    // 0x24d670: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d670u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D670 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d674:
    // 0x24d674: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d674u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D674 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d678:
    // 0x24d678: 0x42e33333  .word       0x42E33333                   # INVALID     $s7, $v1, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d678u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D678 raw=0x42E33333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d67c:
    // 0x24d67c: 0x220009  .word       0x00220009                   # jalr        $zero, $at # 00020000 <InstrIdType: CPU_SPECIAL>
label_24d680:
    if (ctx->pc == 0x24D680u) {
        ctx->pc = 0x24D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D67Cu;
        // 0x24d680: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D684u;
        goto label_24d684;
    }
    ctx->pc = 0x24D67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D67Cu;
        // 0x24d680: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D67Cu, 0x24D684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D684u;
label_24d684:
    // 0x24d684: 0xc400c4  .word       0x00C400C4                   # sllv        $zero, $a0, $a2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d684u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
label_24d688:
    // 0x24d688: 0x8480061  j           func_1200184
label_24d68c:
    if (ctx->pc == 0x24D68Cu) {
        ctx->pc = 0x24D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D688u;
        // 0x24d68c: 0x874012d  j           func_1D004B4 (Delay Slot)
        // J 0x1D004B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D690u;
        goto label_24d690;
    }
    ctx->pc = 0x24D688u;
    ctx->pc = 0x24D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D688u;
    // 0x24d68c: 0x874012d  j           func_1D004B4 (Delay Slot)
    // J 0x1D004B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200184u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200184u, 0x24D688u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D690u;
label_24d690:
    // 0x24d690: 0x1ee01ed  .word       0x01EE01ED                   # daddu       $zero, $t7, $t6 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d690u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 14));
label_24d694:
    // 0x24d694: 0x1890160  .word       0x01890160                   # add         $zero, $t4, $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d694u;
    {     int32_t rs_val = GPR_S32(ctx, 12);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_24d698:
    // 0x24d698: 0x4800c5  .word       0x004800C5                   # INVALID     $v0, $t0, 0xC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d698u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24D698 raw=0x004800C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d69c:
    // 0x24d69c: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x24d69cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_24d6a0:
    // 0x24d6a0: 0x0  nop
    ctx->pc = 0x24d6a0u;
    // NOP
label_24d6a4:
    // 0x24d6a4: 0x0  nop
    ctx->pc = 0x24d6a4u;
    // NOP
label_24d6a8:
    // 0x24d6a8: 0x0  nop
    ctx->pc = 0x24d6a8u;
    // NOP
label_24d6ac:
    // 0x24d6ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d6acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d6b0:
    // 0x24d6b0: 0x0  nop
    ctx->pc = 0x24d6b0u;
    // NOP
label_24d6b4:
    // 0x24d6b4: 0x0  nop
    ctx->pc = 0x24d6b4u;
    // NOP
label_24d6b8:
    // 0x24d6b8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24d6b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24d6bc:
    // 0x24d6bc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d6bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D6BC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d6c0:
    // 0x24d6c0: 0x0  nop
    ctx->pc = 0x24d6c0u;
    // NOP
label_24d6c4:
    // 0x24d6c4: 0x0  nop
    ctx->pc = 0x24d6c4u;
    // NOP
label_24d6c8:
    // 0x24d6c8: 0x0  nop
    ctx->pc = 0x24d6c8u;
    // NOP
label_24d6cc:
    // 0x24d6cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d6ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d6d0:
    // 0x24d6d0: 0x0  nop
    ctx->pc = 0x24d6d0u;
    // NOP
label_24d6d4:
    // 0x24d6d4: 0x0  nop
    ctx->pc = 0x24d6d4u;
    // NOP
label_24d6d8:
    // 0x24d6d8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24d6d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24d6dc:
    // 0x24d6dc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d6dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D6DC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d6e0:
    // 0x24d6e0: 0x0  nop
    ctx->pc = 0x24d6e0u;
    // NOP
label_24d6e4:
    // 0x24d6e4: 0x0  nop
    ctx->pc = 0x24d6e4u;
    // NOP
label_24d6e8:
    // 0x24d6e8: 0x0  nop
    ctx->pc = 0x24d6e8u;
    // NOP
label_24d6ec:
    // 0x24d6ec: 0x0  nop
    ctx->pc = 0x24d6ecu;
    // NOP
label_24d6f0:
    // 0x24d6f0: 0x0  nop
    ctx->pc = 0x24d6f0u;
    // NOP
label_24d6f4:
    // 0x24d6f4: 0x0  nop
    ctx->pc = 0x24d6f4u;
    // NOP
label_24d6f8:
    // 0x24d6f8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d6fc:
    // 0x24d6fc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d700:
    // 0x24d700: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d704:
    // 0x24d704: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d704u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D704 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d708:
    // 0x24d708: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d708u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D708 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d70c:
    // 0x24d70c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d70cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D70C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d710:
    // 0x24d710: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d714:
    // 0x24d714: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d718:
    // 0x24d718: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d71c:
    // 0x24d71c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d71cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D71C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d720:
    // 0x24d720: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d720u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D720 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d724:
    // 0x24d724: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d724u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D724 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d728:
    // 0x24d728: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d72c:
    // 0x24d72c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d730:
    // 0x24d730: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d734:
    // 0x24d734: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d734u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D734 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d738:
    // 0x24d738: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d738u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D738 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d73c:
    // 0x24d73c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d73cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D73C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d740:
    // 0x24d740: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d744:
    // 0x24d744: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d748:
    // 0x24d748: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d74c:
    // 0x24d74c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d74cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D74C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d750:
    // 0x24d750: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d750u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D750 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d754:
    // 0x24d754: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d754u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D754 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d758:
    // 0x24d758: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d75c:
    // 0x24d75c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d760:
    // 0x24d760: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d764:
    // 0x24d764: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d764u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D764 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d768:
    // 0x24d768: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d768u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D768 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d76c:
    // 0x24d76c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d76cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D76C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d770:
    // 0x24d770: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d774:
    // 0x24d774: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d778:
    // 0x24d778: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d77c:
    // 0x24d77c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d77cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D77C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d780:
    // 0x24d780: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d780u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D780 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d784:
    // 0x24d784: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d784u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D784 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d788:
    // 0x24d788: 0x42f78000  .word       0x42F78000                   # INVALID     $s7, $s7, -0x8000 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d788u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D788 raw=0x42F78000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d78c:
    // 0x24d78c: 0x230009  .word       0x00230009                   # jalr        $zero, $at # 00030000 <InstrIdType: CPU_SPECIAL>
label_24d790:
    if (ctx->pc == 0x24D790u) {
        ctx->pc = 0x24D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D78Cu;
        // 0x24d790: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D794u;
        goto label_24d794;
    }
    ctx->pc = 0x24D78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D78Cu;
        // 0x24d790: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D78Cu, 0x24D794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D794u;
label_24d794:
    // 0x24d794: 0xc600c6  .word       0x00C600C6                   # srlv        $zero, $a2, $a2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d794u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 6) & 0x1F));
label_24d798:
    // 0x24d798: 0x8490062  j           func_1240188
label_24d79c:
    if (ctx->pc == 0x24D79Cu) {
        ctx->pc = 0x24D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D798u;
        // 0x24d79c: 0x875012e  j           func_1D404B8 (Delay Slot)
        // J 0x1D404B8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7A0u;
        goto label_24d7a0;
    }
    ctx->pc = 0x24D798u;
    ctx->pc = 0x24D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D798u;
    // 0x24d79c: 0x875012e  j           func_1D404B8 (Delay Slot)
    // J 0x1D404B8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1240188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1240188u, 0x24D798u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D7A0u;
label_24d7a0:
    // 0x24d7a0: 0x1f101f0  tge         $t7, $s1, 7
    ctx->pc = 0x24d7a0u;
    if (GPR_S64(ctx, 15) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_24d7a4:
    // 0x24d7a4: 0x18a0161  .word       0x018A0161                   # addu        $zero, $t4, $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d7a4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_24d7a8:
    // 0x24d7a8: 0x4900c7  .word       0x004900C7                   # srav        $zero, $t1, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d7a8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_24d7ac:
    // 0x24d7ac: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x24d7acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24d7b0:
    // 0x24d7b0: 0x42140000  .word       0x42140000                   # INVALID     $s0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d7b0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D7B0 raw=0x42140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7b4:
    // 0x24d7b4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d7b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D7B4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7b8:
    // 0x24d7b8: 0x0  nop
    ctx->pc = 0x24d7b8u;
    // NOP
label_24d7bc:
    // 0x24d7bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d7bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d7c0:
    // 0x24d7c0: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d7c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D7C0 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7c4:
    // 0x24d7c4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d7c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D7C4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7c8:
    // 0x24d7c8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d7c8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d7cc:
    // 0x24d7cc: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24d7ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24D7CC raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7d0:
    // 0x24d7d0: 0x0  nop
    ctx->pc = 0x24d7d0u;
    // NOP
label_24d7d4:
    // 0x24d7d4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d7d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D7D4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7d8:
    // 0x24d7d8: 0x0  nop
    ctx->pc = 0x24d7d8u;
    // NOP
label_24d7dc:
    // 0x24d7dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d7dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d7e0:
    // 0x24d7e0: 0x0  nop
    ctx->pc = 0x24d7e0u;
    // NOP
label_24d7e4:
    // 0x24d7e4: 0x0  nop
    ctx->pc = 0x24d7e4u;
    // NOP
label_24d7e8:
    // 0x24d7e8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24d7e8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24d7ec:
    // 0x24d7ec: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d7ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D7EC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7f0:
    // 0x24d7f0: 0x0  nop
    ctx->pc = 0x24d7f0u;
    // NOP
label_24d7f4:
    // 0x24d7f4: 0x0  nop
    ctx->pc = 0x24d7f4u;
    // NOP
label_24d7f8:
    // 0x24d7f8: 0x0  nop
    ctx->pc = 0x24d7f8u;
    // NOP
label_24d7fc:
    // 0x24d7fc: 0x0  nop
    ctx->pc = 0x24d7fcu;
    // NOP
label_24d800:
    // 0x24d800: 0x0  nop
    ctx->pc = 0x24d800u;
    // NOP
label_24d804:
    // 0x24d804: 0x0  nop
    ctx->pc = 0x24d804u;
    // NOP
label_24d808:
    // 0x24d808: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d80c:
    // 0x24d80c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d810:
    // 0x24d810: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d814:
    // 0x24d814: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d814u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D814 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d818:
    // 0x24d818: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d818u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D818 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d81c:
    // 0x24d81c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d81cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D81C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d820:
    // 0x24d820: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d824:
    // 0x24d824: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d828:
    // 0x24d828: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d82c:
    // 0x24d82c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d82cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D82C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d830:
    // 0x24d830: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d830u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D830 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d834:
    // 0x24d834: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d834u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D834 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d838:
    // 0x24d838: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d83c:
    // 0x24d83c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d840:
    // 0x24d840: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d844:
    // 0x24d844: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d844u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D844 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d848:
    // 0x24d848: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d848u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D848 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d84c:
    // 0x24d84c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d84cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D84C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d850:
    // 0x24d850: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d854:
    // 0x24d854: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d858:
    // 0x24d858: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d85c:
    // 0x24d85c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d85cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D85C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d860:
    // 0x24d860: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d860u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D860 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d864:
    // 0x24d864: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d864u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D864 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d868:
    // 0x24d868: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d86c:
    // 0x24d86c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d870:
    // 0x24d870: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d874:
    // 0x24d874: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d874u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D874 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d878:
    // 0x24d878: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d878u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D878 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d87c:
    // 0x24d87c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d87cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D87C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d880:
    // 0x24d880: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d884:
    // 0x24d884: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d888:
    // 0x24d888: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d88c:
    // 0x24d88c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d88cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D88C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d890:
    // 0x24d890: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d890u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D890 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d894:
    // 0x24d894: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d894u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D894 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d898:
    // 0x24d898: 0x42e92e14  .word       0x42E92E14                   # INVALID     $s7, $t1, 0x2E14 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d898u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D898 raw=0x42E92E14"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d89c:
    // 0x24d89c: 0x240009  .word       0x00240009                   # jalr        $zero, $at # 00040000 <InstrIdType: CPU_SPECIAL>
label_24d8a0:
    if (ctx->pc == 0x24D8A0u) {
        ctx->pc = 0x24D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D89Cu;
        // 0x24d8a0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8A4u;
        goto label_24d8a4;
    }
    ctx->pc = 0x24D89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D89Cu;
        // 0x24d8a0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D89Cu, 0x24D8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D8A4u;
label_24d8a4:
    // 0x24d8a4: 0xc800c8  .word       0x00C800C8                   # jr          $a2 # 000800C0 <InstrIdType: CPU_SPECIAL>
label_24d8a8:
    if (ctx->pc == 0x24D8A8u) {
        ctx->pc = 0x24D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8A4u;
        // 0x24d8a8: 0x84a0063  j           func_128018C (Delay Slot)
        // J 0x128018C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8ACu;
        goto label_24d8ac;
    }
    ctx->pc = 0x24D8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = 0x24D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8A4u;
        // 0x24d8a8: 0x84a0063  j           func_128018C (Delay Slot)
        // J 0x128018C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D8A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D8ACu;
label_24d8ac:
    // 0x24d8ac: 0x876012f  j           func_1D804BC
label_24d8b0:
    if (ctx->pc == 0x24D8B0u) {
        ctx->pc = 0x24D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8ACu;
        // 0x24d8b0: 0x1f401f3  tltu        $t7, $s4, 7 (Delay Slot)
        if (GPR_U64(ctx, 15) < GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8B4u;
        goto label_24d8b4;
    }
    ctx->pc = 0x24D8ACu;
    ctx->pc = 0x24D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8ACu;
    // 0x24d8b0: 0x1f401f3  tltu        $t7, $s4, 7 (Delay Slot)
    if (GPR_U64(ctx, 15) < GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D804BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D804BCu, 0x24D8ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D8B4u;
label_24d8b4:
    // 0x24d8b4: 0x18b0162  .word       0x018B0162                   # sub         $zero, $t4, $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d8b4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 12), GPR_U32(ctx, 11), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24d8b8:
    // 0x24d8b8: 0x4a00c9  .word       0x004A00C9                   # jalr        $zero, $v0 # 000A00C0 <InstrIdType: CPU_SPECIAL>
label_24d8bc:
    if (ctx->pc == 0x24D8BCu) {
        ctx->pc = 0x24D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8B8u;
        // 0x24d8bc: 0x28  mfsa        $zero (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8C0u;
        goto label_24d8c0;
    }
    ctx->pc = 0x24D8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x24D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8B8u;
        // 0x24d8bc: 0x28  mfsa        $zero (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D8B8u, 0x24D8C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D8C0u;
label_24d8c0:
    // 0x24d8c0: 0x0  nop
    ctx->pc = 0x24d8c0u;
    // NOP
label_24d8c4:
    // 0x24d8c4: 0x0  nop
    ctx->pc = 0x24d8c4u;
    // NOP
label_24d8c8:
    // 0x24d8c8: 0x0  nop
    ctx->pc = 0x24d8c8u;
    // NOP
label_24d8cc:
    // 0x24d8cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d8ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d8d0:
    // 0x24d8d0: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d8d0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D8D0 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d8d4:
    // 0x24d8d4: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24d8d4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24d8d8:
    // 0x24d8d8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d8d8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d8dc:
    // 0x24d8dc: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d8dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24D8DC raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d8e0:
    // 0x24d8e0: 0x0  nop
    ctx->pc = 0x24d8e0u;
    // NOP
label_24d8e4:
    // 0x24d8e4: 0x0  nop
    ctx->pc = 0x24d8e4u;
    // NOP
label_24d8e8:
    // 0x24d8e8: 0x0  nop
    ctx->pc = 0x24d8e8u;
    // NOP
label_24d8ec:
    // 0x24d8ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d8ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d8f0:
    // 0x24d8f0: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d8f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D8F0 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d8f4:
    // 0x24d8f4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d8f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D8F4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d8f8:
    // 0x24d8f8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d8f8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d8fc:
    // 0x24d8fc: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d8fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24D8FC raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d900:
    // 0x24d900: 0x0  nop
    ctx->pc = 0x24d900u;
    // NOP
label_24d904:
    // 0x24d904: 0x0  nop
    ctx->pc = 0x24d904u;
    // NOP
label_24d908:
    // 0x24d908: 0x0  nop
    ctx->pc = 0x24d908u;
    // NOP
label_24d90c:
    // 0x24d90c: 0x0  nop
    ctx->pc = 0x24d90cu;
    // NOP
label_24d910:
    // 0x24d910: 0x0  nop
    ctx->pc = 0x24d910u;
    // NOP
label_24d914:
    // 0x24d914: 0x0  nop
    ctx->pc = 0x24d914u;
    // NOP
label_24d918:
    // 0x24d918: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d91c:
    // 0x24d91c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d920:
    // 0x24d920: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d924:
    // 0x24d924: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d924u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D924 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d928:
    // 0x24d928: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d928u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D928 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d92c:
    // 0x24d92c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d92cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D92C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d930:
    // 0x24d930: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d934:
    // 0x24d934: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d938:
    // 0x24d938: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d93c:
    // 0x24d93c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d93cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D93C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d940:
    // 0x24d940: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d940u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D940 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d944:
    // 0x24d944: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d944u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D944 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d948:
    // 0x24d948: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d94c:
    // 0x24d94c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d950:
    // 0x24d950: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d954:
    // 0x24d954: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d954u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D954 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d958:
    // 0x24d958: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d958u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D958 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d95c:
    // 0x24d95c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d95cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D95C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d960:
    // 0x24d960: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d964:
    // 0x24d964: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d968:
    // 0x24d968: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d96c:
    // 0x24d96c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d96cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D96C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d970:
    // 0x24d970: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d970u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D970 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d974:
    // 0x24d974: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d974u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D974 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d978:
    // 0x24d978: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d97c:
    // 0x24d97c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d980:
    // 0x24d980: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d984:
    // 0x24d984: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d984u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D984 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d988:
    // 0x24d988: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d988u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D988 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d98c:
    // 0x24d98c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d98cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D98C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d990:
    // 0x24d990: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d994:
    // 0x24d994: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d998:
    // 0x24d998: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d99c:
    // 0x24d99c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d99cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D99C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d9a0:
    // 0x24d9a0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d9a0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D9A0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d9a4:
    // 0x24d9a4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d9a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D9A4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x24d9a8u;
    return;
}
