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


void FUN_0017d410_part97(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ac210u: goto label_1ac210;
        case 0x1ac214u: goto label_1ac214;
        case 0x1ac218u: goto label_1ac218;
        case 0x1ac21cu: goto label_1ac21c;
        case 0x1ac220u: goto label_1ac220;
        case 0x1ac224u: goto label_1ac224;
        case 0x1ac228u: goto label_1ac228;
        case 0x1ac22cu: goto label_1ac22c;
        case 0x1ac230u: goto label_1ac230;
        case 0x1ac234u: goto label_1ac234;
        case 0x1ac238u: goto label_1ac238;
        case 0x1ac23cu: goto label_1ac23c;
        case 0x1ac240u: goto label_1ac240;
        case 0x1ac244u: goto label_1ac244;
        case 0x1ac248u: goto label_1ac248;
        case 0x1ac24cu: goto label_1ac24c;
        case 0x1ac250u: goto label_1ac250;
        case 0x1ac254u: goto label_1ac254;
        case 0x1ac258u: goto label_1ac258;
        case 0x1ac25cu: goto label_1ac25c;
        case 0x1ac260u: goto label_1ac260;
        case 0x1ac264u: goto label_1ac264;
        case 0x1ac268u: goto label_1ac268;
        case 0x1ac26cu: goto label_1ac26c;
        case 0x1ac270u: goto label_1ac270;
        case 0x1ac274u: goto label_1ac274;
        case 0x1ac278u: goto label_1ac278;
        case 0x1ac27cu: goto label_1ac27c;
        case 0x1ac280u: goto label_1ac280;
        case 0x1ac284u: goto label_1ac284;
        case 0x1ac288u: goto label_1ac288;
        case 0x1ac28cu: goto label_1ac28c;
        case 0x1ac290u: goto label_1ac290;
        case 0x1ac294u: goto label_1ac294;
        case 0x1ac298u: goto label_1ac298;
        case 0x1ac29cu: goto label_1ac29c;
        case 0x1ac2a0u: goto label_1ac2a0;
        case 0x1ac2a4u: goto label_1ac2a4;
        case 0x1ac2a8u: goto label_1ac2a8;
        case 0x1ac2acu: goto label_1ac2ac;
        case 0x1ac2b0u: goto label_1ac2b0;
        case 0x1ac2b4u: goto label_1ac2b4;
        case 0x1ac2b8u: goto label_1ac2b8;
        case 0x1ac2bcu: goto label_1ac2bc;
        case 0x1ac2c0u: goto label_1ac2c0;
        case 0x1ac2c4u: goto label_1ac2c4;
        case 0x1ac2c8u: goto label_1ac2c8;
        case 0x1ac2ccu: goto label_1ac2cc;
        case 0x1ac2d0u: goto label_1ac2d0;
        case 0x1ac2d4u: goto label_1ac2d4;
        case 0x1ac2d8u: goto label_1ac2d8;
        case 0x1ac2dcu: goto label_1ac2dc;
        case 0x1ac2e0u: goto label_1ac2e0;
        case 0x1ac2e4u: goto label_1ac2e4;
        case 0x1ac2e8u: goto label_1ac2e8;
        case 0x1ac2ecu: goto label_1ac2ec;
        case 0x1ac2f0u: goto label_1ac2f0;
        case 0x1ac2f4u: goto label_1ac2f4;
        case 0x1ac2f8u: goto label_1ac2f8;
        case 0x1ac2fcu: goto label_1ac2fc;
        case 0x1ac300u: goto label_1ac300;
        case 0x1ac304u: goto label_1ac304;
        case 0x1ac308u: goto label_1ac308;
        case 0x1ac30cu: goto label_1ac30c;
        case 0x1ac310u: goto label_1ac310;
        case 0x1ac314u: goto label_1ac314;
        case 0x1ac318u: goto label_1ac318;
        case 0x1ac31cu: goto label_1ac31c;
        case 0x1ac320u: goto label_1ac320;
        case 0x1ac324u: goto label_1ac324;
        case 0x1ac328u: goto label_1ac328;
        case 0x1ac32cu: goto label_1ac32c;
        case 0x1ac330u: goto label_1ac330;
        case 0x1ac334u: goto label_1ac334;
        case 0x1ac338u: goto label_1ac338;
        case 0x1ac33cu: goto label_1ac33c;
        case 0x1ac340u: goto label_1ac340;
        case 0x1ac344u: goto label_1ac344;
        case 0x1ac348u: goto label_1ac348;
        case 0x1ac34cu: goto label_1ac34c;
        case 0x1ac350u: goto label_1ac350;
        case 0x1ac354u: goto label_1ac354;
        case 0x1ac358u: goto label_1ac358;
        case 0x1ac35cu: goto label_1ac35c;
        case 0x1ac360u: goto label_1ac360;
        case 0x1ac364u: goto label_1ac364;
        case 0x1ac368u: goto label_1ac368;
        case 0x1ac36cu: goto label_1ac36c;
        case 0x1ac370u: goto label_1ac370;
        case 0x1ac374u: goto label_1ac374;
        case 0x1ac378u: goto label_1ac378;
        case 0x1ac37cu: goto label_1ac37c;
        case 0x1ac380u: goto label_1ac380;
        case 0x1ac384u: goto label_1ac384;
        case 0x1ac388u: goto label_1ac388;
        case 0x1ac38cu: goto label_1ac38c;
        case 0x1ac390u: goto label_1ac390;
        case 0x1ac394u: goto label_1ac394;
        case 0x1ac398u: goto label_1ac398;
        case 0x1ac39cu: goto label_1ac39c;
        case 0x1ac3a0u: goto label_1ac3a0;
        case 0x1ac3a4u: goto label_1ac3a4;
        case 0x1ac3a8u: goto label_1ac3a8;
        case 0x1ac3acu: goto label_1ac3ac;
        case 0x1ac3b0u: goto label_1ac3b0;
        case 0x1ac3b4u: goto label_1ac3b4;
        case 0x1ac3b8u: goto label_1ac3b8;
        case 0x1ac3bcu: goto label_1ac3bc;
        case 0x1ac3c0u: goto label_1ac3c0;
        case 0x1ac3c4u: goto label_1ac3c4;
        case 0x1ac3c8u: goto label_1ac3c8;
        case 0x1ac3ccu: goto label_1ac3cc;
        case 0x1ac3d0u: goto label_1ac3d0;
        case 0x1ac3d4u: goto label_1ac3d4;
        case 0x1ac3d8u: goto label_1ac3d8;
        case 0x1ac3dcu: goto label_1ac3dc;
        case 0x1ac3e0u: goto label_1ac3e0;
        case 0x1ac3e4u: goto label_1ac3e4;
        case 0x1ac3e8u: goto label_1ac3e8;
        case 0x1ac3ecu: goto label_1ac3ec;
        case 0x1ac3f0u: goto label_1ac3f0;
        case 0x1ac3f4u: goto label_1ac3f4;
        case 0x1ac3f8u: goto label_1ac3f8;
        case 0x1ac3fcu: goto label_1ac3fc;
        case 0x1ac400u: goto label_1ac400;
        case 0x1ac404u: goto label_1ac404;
        case 0x1ac408u: goto label_1ac408;
        case 0x1ac40cu: goto label_1ac40c;
        case 0x1ac410u: goto label_1ac410;
        case 0x1ac414u: goto label_1ac414;
        case 0x1ac418u: goto label_1ac418;
        case 0x1ac41cu: goto label_1ac41c;
        case 0x1ac420u: goto label_1ac420;
        case 0x1ac424u: goto label_1ac424;
        case 0x1ac428u: goto label_1ac428;
        case 0x1ac42cu: goto label_1ac42c;
        case 0x1ac430u: goto label_1ac430;
        case 0x1ac434u: goto label_1ac434;
        case 0x1ac438u: goto label_1ac438;
        case 0x1ac43cu: goto label_1ac43c;
        case 0x1ac440u: goto label_1ac440;
        case 0x1ac444u: goto label_1ac444;
        case 0x1ac448u: goto label_1ac448;
        case 0x1ac44cu: goto label_1ac44c;
        case 0x1ac450u: goto label_1ac450;
        case 0x1ac454u: goto label_1ac454;
        case 0x1ac458u: goto label_1ac458;
        case 0x1ac45cu: goto label_1ac45c;
        case 0x1ac460u: goto label_1ac460;
        case 0x1ac464u: goto label_1ac464;
        case 0x1ac468u: goto label_1ac468;
        case 0x1ac46cu: goto label_1ac46c;
        case 0x1ac470u: goto label_1ac470;
        case 0x1ac474u: goto label_1ac474;
        case 0x1ac478u: goto label_1ac478;
        case 0x1ac47cu: goto label_1ac47c;
        case 0x1ac480u: goto label_1ac480;
        case 0x1ac484u: goto label_1ac484;
        case 0x1ac488u: goto label_1ac488;
        case 0x1ac48cu: goto label_1ac48c;
        case 0x1ac490u: goto label_1ac490;
        case 0x1ac494u: goto label_1ac494;
        case 0x1ac498u: goto label_1ac498;
        case 0x1ac49cu: goto label_1ac49c;
        case 0x1ac4a0u: goto label_1ac4a0;
        case 0x1ac4a4u: goto label_1ac4a4;
        case 0x1ac4a8u: goto label_1ac4a8;
        case 0x1ac4acu: goto label_1ac4ac;
        case 0x1ac4b0u: goto label_1ac4b0;
        case 0x1ac4b4u: goto label_1ac4b4;
        case 0x1ac4b8u: goto label_1ac4b8;
        case 0x1ac4bcu: goto label_1ac4bc;
        case 0x1ac4c0u: goto label_1ac4c0;
        case 0x1ac4c4u: goto label_1ac4c4;
        case 0x1ac4c8u: goto label_1ac4c8;
        case 0x1ac4ccu: goto label_1ac4cc;
        case 0x1ac4d0u: goto label_1ac4d0;
        case 0x1ac4d4u: goto label_1ac4d4;
        case 0x1ac4d8u: goto label_1ac4d8;
        case 0x1ac4dcu: goto label_1ac4dc;
        case 0x1ac4e0u: goto label_1ac4e0;
        case 0x1ac4e4u: goto label_1ac4e4;
        case 0x1ac4e8u: goto label_1ac4e8;
        case 0x1ac4ecu: goto label_1ac4ec;
        case 0x1ac4f0u: goto label_1ac4f0;
        case 0x1ac4f4u: goto label_1ac4f4;
        case 0x1ac4f8u: goto label_1ac4f8;
        case 0x1ac4fcu: goto label_1ac4fc;
        case 0x1ac500u: goto label_1ac500;
        case 0x1ac504u: goto label_1ac504;
        case 0x1ac508u: goto label_1ac508;
        case 0x1ac50cu: goto label_1ac50c;
        case 0x1ac510u: goto label_1ac510;
        case 0x1ac514u: goto label_1ac514;
        case 0x1ac518u: goto label_1ac518;
        case 0x1ac51cu: goto label_1ac51c;
        case 0x1ac520u: goto label_1ac520;
        case 0x1ac524u: goto label_1ac524;
        case 0x1ac528u: goto label_1ac528;
        case 0x1ac52cu: goto label_1ac52c;
        case 0x1ac530u: goto label_1ac530;
        case 0x1ac534u: goto label_1ac534;
        case 0x1ac538u: goto label_1ac538;
        case 0x1ac53cu: goto label_1ac53c;
        case 0x1ac540u: goto label_1ac540;
        case 0x1ac544u: goto label_1ac544;
        case 0x1ac548u: goto label_1ac548;
        case 0x1ac54cu: goto label_1ac54c;
        case 0x1ac550u: goto label_1ac550;
        case 0x1ac554u: goto label_1ac554;
        case 0x1ac558u: goto label_1ac558;
        case 0x1ac55cu: goto label_1ac55c;
        case 0x1ac560u: goto label_1ac560;
        case 0x1ac564u: goto label_1ac564;
        case 0x1ac568u: goto label_1ac568;
        case 0x1ac56cu: goto label_1ac56c;
        case 0x1ac570u: goto label_1ac570;
        case 0x1ac574u: goto label_1ac574;
        case 0x1ac578u: goto label_1ac578;
        case 0x1ac57cu: goto label_1ac57c;
        case 0x1ac580u: goto label_1ac580;
        case 0x1ac584u: goto label_1ac584;
        case 0x1ac588u: goto label_1ac588;
        case 0x1ac58cu: goto label_1ac58c;
        case 0x1ac590u: goto label_1ac590;
        case 0x1ac594u: goto label_1ac594;
        case 0x1ac598u: goto label_1ac598;
        case 0x1ac59cu: goto label_1ac59c;
        case 0x1ac5a0u: goto label_1ac5a0;
        case 0x1ac5a4u: goto label_1ac5a4;
        case 0x1ac5a8u: goto label_1ac5a8;
        case 0x1ac5acu: goto label_1ac5ac;
        case 0x1ac5b0u: goto label_1ac5b0;
        case 0x1ac5b4u: goto label_1ac5b4;
        case 0x1ac5b8u: goto label_1ac5b8;
        case 0x1ac5bcu: goto label_1ac5bc;
        case 0x1ac5c0u: goto label_1ac5c0;
        case 0x1ac5c4u: goto label_1ac5c4;
        case 0x1ac5c8u: goto label_1ac5c8;
        case 0x1ac5ccu: goto label_1ac5cc;
        case 0x1ac5d0u: goto label_1ac5d0;
        case 0x1ac5d4u: goto label_1ac5d4;
        case 0x1ac5d8u: goto label_1ac5d8;
        case 0x1ac5dcu: goto label_1ac5dc;
        case 0x1ac5e0u: goto label_1ac5e0;
        case 0x1ac5e4u: goto label_1ac5e4;
        case 0x1ac5e8u: goto label_1ac5e8;
        case 0x1ac5ecu: goto label_1ac5ec;
        case 0x1ac5f0u: goto label_1ac5f0;
        case 0x1ac5f4u: goto label_1ac5f4;
        case 0x1ac5f8u: goto label_1ac5f8;
        case 0x1ac5fcu: goto label_1ac5fc;
        case 0x1ac600u: goto label_1ac600;
        case 0x1ac604u: goto label_1ac604;
        case 0x1ac608u: goto label_1ac608;
        case 0x1ac60cu: goto label_1ac60c;
        case 0x1ac610u: goto label_1ac610;
        case 0x1ac614u: goto label_1ac614;
        case 0x1ac618u: goto label_1ac618;
        case 0x1ac61cu: goto label_1ac61c;
        case 0x1ac620u: goto label_1ac620;
        case 0x1ac624u: goto label_1ac624;
        case 0x1ac628u: goto label_1ac628;
        case 0x1ac62cu: goto label_1ac62c;
        case 0x1ac630u: goto label_1ac630;
        case 0x1ac634u: goto label_1ac634;
        case 0x1ac638u: goto label_1ac638;
        case 0x1ac63cu: goto label_1ac63c;
        case 0x1ac640u: goto label_1ac640;
        case 0x1ac644u: goto label_1ac644;
        case 0x1ac648u: goto label_1ac648;
        case 0x1ac64cu: goto label_1ac64c;
        case 0x1ac650u: goto label_1ac650;
        case 0x1ac654u: goto label_1ac654;
        case 0x1ac658u: goto label_1ac658;
        case 0x1ac65cu: goto label_1ac65c;
        case 0x1ac660u: goto label_1ac660;
        case 0x1ac664u: goto label_1ac664;
        case 0x1ac668u: goto label_1ac668;
        case 0x1ac66cu: goto label_1ac66c;
        case 0x1ac670u: goto label_1ac670;
        case 0x1ac674u: goto label_1ac674;
        case 0x1ac678u: goto label_1ac678;
        case 0x1ac67cu: goto label_1ac67c;
        case 0x1ac680u: goto label_1ac680;
        case 0x1ac684u: goto label_1ac684;
        case 0x1ac688u: goto label_1ac688;
        case 0x1ac68cu: goto label_1ac68c;
        case 0x1ac690u: goto label_1ac690;
        case 0x1ac694u: goto label_1ac694;
        case 0x1ac698u: goto label_1ac698;
        case 0x1ac69cu: goto label_1ac69c;
        case 0x1ac6a0u: goto label_1ac6a0;
        case 0x1ac6a4u: goto label_1ac6a4;
        case 0x1ac6a8u: goto label_1ac6a8;
        case 0x1ac6acu: goto label_1ac6ac;
        case 0x1ac6b0u: goto label_1ac6b0;
        case 0x1ac6b4u: goto label_1ac6b4;
        case 0x1ac6b8u: goto label_1ac6b8;
        case 0x1ac6bcu: goto label_1ac6bc;
        case 0x1ac6c0u: goto label_1ac6c0;
        case 0x1ac6c4u: goto label_1ac6c4;
        case 0x1ac6c8u: goto label_1ac6c8;
        case 0x1ac6ccu: goto label_1ac6cc;
        case 0x1ac6d0u: goto label_1ac6d0;
        case 0x1ac6d4u: goto label_1ac6d4;
        case 0x1ac6d8u: goto label_1ac6d8;
        case 0x1ac6dcu: goto label_1ac6dc;
        case 0x1ac6e0u: goto label_1ac6e0;
        case 0x1ac6e4u: goto label_1ac6e4;
        case 0x1ac6e8u: goto label_1ac6e8;
        case 0x1ac6ecu: goto label_1ac6ec;
        case 0x1ac6f0u: goto label_1ac6f0;
        case 0x1ac6f4u: goto label_1ac6f4;
        case 0x1ac6f8u: goto label_1ac6f8;
        case 0x1ac6fcu: goto label_1ac6fc;
        case 0x1ac700u: goto label_1ac700;
        case 0x1ac704u: goto label_1ac704;
        case 0x1ac708u: goto label_1ac708;
        case 0x1ac70cu: goto label_1ac70c;
        case 0x1ac710u: goto label_1ac710;
        case 0x1ac714u: goto label_1ac714;
        case 0x1ac718u: goto label_1ac718;
        case 0x1ac71cu: goto label_1ac71c;
        case 0x1ac720u: goto label_1ac720;
        case 0x1ac724u: goto label_1ac724;
        case 0x1ac728u: goto label_1ac728;
        case 0x1ac72cu: goto label_1ac72c;
        case 0x1ac730u: goto label_1ac730;
        case 0x1ac734u: goto label_1ac734;
        case 0x1ac738u: goto label_1ac738;
        case 0x1ac73cu: goto label_1ac73c;
        case 0x1ac740u: goto label_1ac740;
        case 0x1ac744u: goto label_1ac744;
        case 0x1ac748u: goto label_1ac748;
        case 0x1ac74cu: goto label_1ac74c;
        case 0x1ac750u: goto label_1ac750;
        case 0x1ac754u: goto label_1ac754;
        case 0x1ac758u: goto label_1ac758;
        case 0x1ac75cu: goto label_1ac75c;
        case 0x1ac760u: goto label_1ac760;
        case 0x1ac764u: goto label_1ac764;
        case 0x1ac768u: goto label_1ac768;
        case 0x1ac76cu: goto label_1ac76c;
        case 0x1ac770u: goto label_1ac770;
        case 0x1ac774u: goto label_1ac774;
        case 0x1ac778u: goto label_1ac778;
        case 0x1ac77cu: goto label_1ac77c;
        case 0x1ac780u: goto label_1ac780;
        case 0x1ac784u: goto label_1ac784;
        case 0x1ac788u: goto label_1ac788;
        case 0x1ac78cu: goto label_1ac78c;
        case 0x1ac790u: goto label_1ac790;
        case 0x1ac794u: goto label_1ac794;
        case 0x1ac798u: goto label_1ac798;
        case 0x1ac79cu: goto label_1ac79c;
        case 0x1ac7a0u: goto label_1ac7a0;
        case 0x1ac7a4u: goto label_1ac7a4;
        case 0x1ac7a8u: goto label_1ac7a8;
        case 0x1ac7acu: goto label_1ac7ac;
        case 0x1ac7b0u: goto label_1ac7b0;
        case 0x1ac7b4u: goto label_1ac7b4;
        case 0x1ac7b8u: goto label_1ac7b8;
        case 0x1ac7bcu: goto label_1ac7bc;
        case 0x1ac7c0u: goto label_1ac7c0;
        case 0x1ac7c4u: goto label_1ac7c4;
        case 0x1ac7c8u: goto label_1ac7c8;
        case 0x1ac7ccu: goto label_1ac7cc;
        case 0x1ac7d0u: goto label_1ac7d0;
        case 0x1ac7d4u: goto label_1ac7d4;
        case 0x1ac7d8u: goto label_1ac7d8;
        case 0x1ac7dcu: goto label_1ac7dc;
        case 0x1ac7e0u: goto label_1ac7e0;
        case 0x1ac7e4u: goto label_1ac7e4;
        case 0x1ac7e8u: goto label_1ac7e8;
        case 0x1ac7ecu: goto label_1ac7ec;
        case 0x1ac7f0u: goto label_1ac7f0;
        case 0x1ac7f4u: goto label_1ac7f4;
        case 0x1ac7f8u: goto label_1ac7f8;
        case 0x1ac7fcu: goto label_1ac7fc;
        case 0x1ac800u: goto label_1ac800;
        case 0x1ac804u: goto label_1ac804;
        case 0x1ac808u: goto label_1ac808;
        case 0x1ac80cu: goto label_1ac80c;
        case 0x1ac810u: goto label_1ac810;
        case 0x1ac814u: goto label_1ac814;
        case 0x1ac818u: goto label_1ac818;
        case 0x1ac81cu: goto label_1ac81c;
        case 0x1ac820u: goto label_1ac820;
        case 0x1ac824u: goto label_1ac824;
        case 0x1ac828u: goto label_1ac828;
        case 0x1ac82cu: goto label_1ac82c;
        case 0x1ac830u: goto label_1ac830;
        case 0x1ac834u: goto label_1ac834;
        case 0x1ac838u: goto label_1ac838;
        case 0x1ac83cu: goto label_1ac83c;
        case 0x1ac840u: goto label_1ac840;
        case 0x1ac844u: goto label_1ac844;
        case 0x1ac848u: goto label_1ac848;
        case 0x1ac84cu: goto label_1ac84c;
        case 0x1ac850u: goto label_1ac850;
        case 0x1ac854u: goto label_1ac854;
        case 0x1ac858u: goto label_1ac858;
        case 0x1ac85cu: goto label_1ac85c;
        case 0x1ac860u: goto label_1ac860;
        case 0x1ac864u: goto label_1ac864;
        case 0x1ac868u: goto label_1ac868;
        case 0x1ac86cu: goto label_1ac86c;
        case 0x1ac870u: goto label_1ac870;
        case 0x1ac874u: goto label_1ac874;
        case 0x1ac878u: goto label_1ac878;
        case 0x1ac87cu: goto label_1ac87c;
        case 0x1ac880u: goto label_1ac880;
        case 0x1ac884u: goto label_1ac884;
        case 0x1ac888u: goto label_1ac888;
        case 0x1ac88cu: goto label_1ac88c;
        case 0x1ac890u: goto label_1ac890;
        case 0x1ac894u: goto label_1ac894;
        case 0x1ac898u: goto label_1ac898;
        case 0x1ac89cu: goto label_1ac89c;
        case 0x1ac8a0u: goto label_1ac8a0;
        case 0x1ac8a4u: goto label_1ac8a4;
        case 0x1ac8a8u: goto label_1ac8a8;
        case 0x1ac8acu: goto label_1ac8ac;
        case 0x1ac8b0u: goto label_1ac8b0;
        case 0x1ac8b4u: goto label_1ac8b4;
        case 0x1ac8b8u: goto label_1ac8b8;
        case 0x1ac8bcu: goto label_1ac8bc;
        case 0x1ac8c0u: goto label_1ac8c0;
        case 0x1ac8c4u: goto label_1ac8c4;
        case 0x1ac8c8u: goto label_1ac8c8;
        case 0x1ac8ccu: goto label_1ac8cc;
        case 0x1ac8d0u: goto label_1ac8d0;
        case 0x1ac8d4u: goto label_1ac8d4;
        case 0x1ac8d8u: goto label_1ac8d8;
        case 0x1ac8dcu: goto label_1ac8dc;
        case 0x1ac8e0u: goto label_1ac8e0;
        case 0x1ac8e4u: goto label_1ac8e4;
        case 0x1ac8e8u: goto label_1ac8e8;
        case 0x1ac8ecu: goto label_1ac8ec;
        case 0x1ac8f0u: goto label_1ac8f0;
        case 0x1ac8f4u: goto label_1ac8f4;
        case 0x1ac8f8u: goto label_1ac8f8;
        case 0x1ac8fcu: goto label_1ac8fc;
        case 0x1ac900u: goto label_1ac900;
        case 0x1ac904u: goto label_1ac904;
        case 0x1ac908u: goto label_1ac908;
        case 0x1ac90cu: goto label_1ac90c;
        case 0x1ac910u: goto label_1ac910;
        case 0x1ac914u: goto label_1ac914;
        case 0x1ac918u: goto label_1ac918;
        case 0x1ac91cu: goto label_1ac91c;
        case 0x1ac920u: goto label_1ac920;
        case 0x1ac924u: goto label_1ac924;
        case 0x1ac928u: goto label_1ac928;
        case 0x1ac92cu: goto label_1ac92c;
        case 0x1ac930u: goto label_1ac930;
        case 0x1ac934u: goto label_1ac934;
        case 0x1ac938u: goto label_1ac938;
        case 0x1ac93cu: goto label_1ac93c;
        case 0x1ac940u: goto label_1ac940;
        case 0x1ac944u: goto label_1ac944;
        case 0x1ac948u: goto label_1ac948;
        case 0x1ac94cu: goto label_1ac94c;
        case 0x1ac950u: goto label_1ac950;
        case 0x1ac954u: goto label_1ac954;
        case 0x1ac958u: goto label_1ac958;
        case 0x1ac95cu: goto label_1ac95c;
        case 0x1ac960u: goto label_1ac960;
        case 0x1ac964u: goto label_1ac964;
        case 0x1ac968u: goto label_1ac968;
        case 0x1ac96cu: goto label_1ac96c;
        case 0x1ac970u: goto label_1ac970;
        case 0x1ac974u: goto label_1ac974;
        case 0x1ac978u: goto label_1ac978;
        case 0x1ac97cu: goto label_1ac97c;
        case 0x1ac980u: goto label_1ac980;
        case 0x1ac984u: goto label_1ac984;
        case 0x1ac988u: goto label_1ac988;
        case 0x1ac98cu: goto label_1ac98c;
        case 0x1ac990u: goto label_1ac990;
        case 0x1ac994u: goto label_1ac994;
        case 0x1ac998u: goto label_1ac998;
        case 0x1ac99cu: goto label_1ac99c;
        case 0x1ac9a0u: goto label_1ac9a0;
        case 0x1ac9a4u: goto label_1ac9a4;
        case 0x1ac9a8u: goto label_1ac9a8;
        case 0x1ac9acu: goto label_1ac9ac;
        case 0x1ac9b0u: goto label_1ac9b0;
        case 0x1ac9b4u: goto label_1ac9b4;
        case 0x1ac9b8u: goto label_1ac9b8;
        case 0x1ac9bcu: goto label_1ac9bc;
        case 0x1ac9c0u: goto label_1ac9c0;
        case 0x1ac9c4u: goto label_1ac9c4;
        case 0x1ac9c8u: goto label_1ac9c8;
        case 0x1ac9ccu: goto label_1ac9cc;
        case 0x1ac9d0u: goto label_1ac9d0;
        case 0x1ac9d4u: goto label_1ac9d4;
        case 0x1ac9d8u: goto label_1ac9d8;
        case 0x1ac9dcu: goto label_1ac9dc;
        default: return;
    }

label_1ac210:
    // 0x1ac210: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ac214:
    // 0x1ac214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ac214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac218:
    // 0x1ac218: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac21c:
    // 0x1ac21c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac220:
    // 0x1ac220: 0x3e00008  jr          $ra
label_1ac224:
    if (ctx->pc == 0x1AC224u) {
        ctx->pc = 0x1AC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC220u;
        // 0x1ac224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC228u;
        goto label_1ac228;
    }
    ctx->pc = 0x1AC220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC220u;
        // 0x1ac224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC228u;
label_1ac228:
    // 0x1ac228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ac22c:
    // 0x1ac22c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac230:
    // 0x1ac230: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ac230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ac234:
    // 0x1ac234: 0xc06aef0  jal         func_1ABBC0
label_1ac238:
    if (ctx->pc == 0x1AC238u) {
        ctx->pc = 0x1AC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC234u;
        // 0x1ac238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC23Cu;
        goto label_1ac23c;
    }
    ctx->pc = 0x1AC234u;
    SET_GPR_U32(ctx, 31, 0x1AC23Cu);
    ctx->pc = 0x1AC238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC234u;
    // 0x1ac238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC23Cu;
label_1ac23c:
    // 0x1ac23c: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
label_1ac240:
    if (ctx->pc == 0x1AC240u) {
        ctx->pc = 0x1AC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC23Cu;
        // 0x1ac240: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC244u;
        goto label_1ac244;
    }
    ctx->pc = 0x1AC23Cu;
    {
        const bool branch_taken_0x1ac23c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC23Cu;
        // 0x1ac240: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac23c) {
            ctx->pc = 0x1AC2B8u;
            goto label_1ac2b8;
        }
    }
    ctx->pc = 0x1AC244u;
label_1ac244:
    // 0x1ac244: 0xc06af30  jal         func_1ABCC0
label_1ac248:
    if (ctx->pc == 0x1AC248u) {
        ctx->pc = 0x1AC24Cu;
        goto label_1ac24c;
    }
    ctx->pc = 0x1AC244u;
    SET_GPR_U32(ctx, 31, 0x1AC24Cu);
    ctx->pc = 0x1ABCC0u;
    { ctx->pc = 0x1abcc0; return; }
    ctx->pc = 0x1AC24Cu;
label_1ac24c:
    // 0x1ac24c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ac250:
    if (ctx->pc == 0x1AC250u) {
        ctx->pc = 0x1AC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC24Cu;
        // 0x1ac250: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC254u;
        goto label_1ac254;
    }
    ctx->pc = 0x1AC24Cu;
    {
        const bool branch_taken_0x1ac24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac24c) {
            ctx->pc = 0x1AC250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC24Cu;
            // 0x1ac250: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC260u;
            goto label_1ac260;
        }
    }
    ctx->pc = 0x1AC254u;
label_1ac254:
    // 0x1ac254: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac258:
    // 0x1ac258: 0x10000017  b           . + 4 + (0x17 << 2)
label_1ac25c:
    if (ctx->pc == 0x1AC25Cu) {
        ctx->pc = 0x1AC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC258u;
        // 0x1ac25c: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC260u;
        goto label_1ac260;
    }
    ctx->pc = 0x1AC258u;
    {
        const bool branch_taken_0x1ac258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC258u;
        // 0x1ac25c: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac258) {
            ctx->pc = 0x1AC2B8u;
            goto label_1ac2b8;
        }
    }
    ctx->pc = 0x1AC260u;
label_1ac260:
    // 0x1ac260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ac260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac264:
    // 0x1ac264: 0x24504788  addiu       $s0, $v0, 0x4788
    ctx->pc = 0x1ac264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18312));
label_1ac268:
    // 0x1ac268: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1ac268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ac26c:
    // 0x1ac26c: 0xc08f4fe  jal         func_23D3F8
label_1ac270:
    if (ctx->pc == 0x1AC270u) {
        ctx->pc = 0x1AC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC26Cu;
        // 0x1ac270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC274u;
        goto label_1ac274;
    }
    ctx->pc = 0x1AC26Cu;
    SET_GPR_U32(ctx, 31, 0x1AC274u);
    ctx->pc = 0x1AC270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC26Cu;
    // 0x1ac270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1AC274u;
label_1ac274:
    // 0x1ac274: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x1ac274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_1ac278:
    // 0x1ac278: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ac27c:
    // 0x1ac27c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1ac27cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ac280:
    // 0x1ac280: 0xa0600103  sb          $zero, 0x103($v1)
    ctx->pc = 0x1ac280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 259), (uint8_t)GPR_U32(ctx, 0));
label_1ac284:
    // 0x1ac284: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
label_1ac288:
    // 0x1ac288: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ac288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ac28c:
    // 0x1ac28c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac290:
    // 0x1ac290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac294:
    // 0x1ac294: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1ac298:
    // 0x1ac298: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac29c:
    // 0x1ac29c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ac29cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac2a0:
    // 0x1ac2a0: 0xc069e2a  jal         func_1A78A8
label_1ac2a4:
    if (ctx->pc == 0x1AC2A4u) {
        ctx->pc = 0x1AC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A0u;
        // 0x1ac2a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2A8u;
        goto label_1ac2a8;
    }
    ctx->pc = 0x1AC2A0u;
    SET_GPR_U32(ctx, 31, 0x1AC2A8u);
    ctx->pc = 0x1AC2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2A0u;
    // 0x1ac2a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC2A8u;
label_1ac2a8:
    // 0x1ac2a8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1ac2ac:
    if (ctx->pc == 0x1AC2ACu) {
        ctx->pc = 0x1AC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2A8u;
        // 0x1ac2ac: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2B0u;
        goto label_1ac2b0;
    }
    ctx->pc = 0x1AC2A8u;
    {
        const bool branch_taken_0x1ac2a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac2a8) {
            ctx->pc = 0x1AC2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC2A8u;
            // 0x1ac2ac: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC2B8u;
            goto label_1ac2b8;
        }
    }
    ctx->pc = 0x1AC2B0u;
label_1ac2b0:
    // 0x1ac2b0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac2b4:
    // 0x1ac2b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ac2b8:
    // 0x1ac2b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ac2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac2bc:
    // 0x1ac2bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac2c0:
    // 0x1ac2c0: 0x3e00008  jr          $ra
label_1ac2c4:
    if (ctx->pc == 0x1AC2C4u) {
        ctx->pc = 0x1AC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2C0u;
        // 0x1ac2c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2C8u;
        goto label_1ac2c8;
    }
    ctx->pc = 0x1AC2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2C0u;
        // 0x1ac2c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC2C8u;
label_1ac2c8:
    // 0x1ac2c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ac2cc:
    // 0x1ac2cc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ac2d0:
    // 0x1ac2d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ac2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ac2d4:
    // 0x1ac2d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac2d8:
    // 0x1ac2d8: 0xc06aef0  jal         func_1ABBC0
label_1ac2dc:
    if (ctx->pc == 0x1AC2DCu) {
        ctx->pc = 0x1AC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2D8u;
        // 0x1ac2dc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2E0u;
        goto label_1ac2e0;
    }
    ctx->pc = 0x1AC2D8u;
    SET_GPR_U32(ctx, 31, 0x1AC2E0u);
    ctx->pc = 0x1AC2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2D8u;
    // 0x1ac2dc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC2E0u;
label_1ac2e0:
    // 0x1ac2e0: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
label_1ac2e4:
    if (ctx->pc == 0x1AC2E4u) {
        ctx->pc = 0x1AC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E0u;
        // 0x1ac2e4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2E8u;
        goto label_1ac2e8;
    }
    ctx->pc = 0x1AC2E0u;
    {
        const bool branch_taken_0x1ac2e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2E0u;
        // 0x1ac2e4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2e0) {
            ctx->pc = 0x1AC344u;
            goto label_1ac344;
        }
    }
    ctx->pc = 0x1AC2E8u;
label_1ac2e8:
    // 0x1ac2e8: 0xc06af30  jal         func_1ABCC0
label_1ac2ec:
    if (ctx->pc == 0x1AC2ECu) {
        ctx->pc = 0x1AC2F0u;
        goto label_1ac2f0;
    }
    ctx->pc = 0x1AC2E8u;
    SET_GPR_U32(ctx, 31, 0x1AC2F0u);
    ctx->pc = 0x1ABCC0u;
    { ctx->pc = 0x1abcc0; return; }
    ctx->pc = 0x1AC2F0u;
label_1ac2f0:
    // 0x1ac2f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ac2f4:
    if (ctx->pc == 0x1AC2F4u) {
        ctx->pc = 0x1AC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2F0u;
        // 0x1ac2f4: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC2F8u;
        goto label_1ac2f8;
    }
    ctx->pc = 0x1AC2F0u;
    {
        const bool branch_taken_0x1ac2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2F0u;
        // 0x1ac2f4: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2f0) {
            ctx->pc = 0x1AC304u;
            goto label_1ac304;
        }
    }
    ctx->pc = 0x1AC2F8u;
label_1ac2f8:
    // 0x1ac2f8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac2fc:
    // 0x1ac2fc: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ac300:
    if (ctx->pc == 0x1AC300u) {
        ctx->pc = 0x1AC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2FCu;
        // 0x1ac300: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC304u;
        goto label_1ac304;
    }
    ctx->pc = 0x1AC2FCu;
    {
        const bool branch_taken_0x1ac2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2FCu;
        // 0x1ac300: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2fc) {
            ctx->pc = 0x1AC344u;
            goto label_1ac344;
        }
    }
    ctx->pc = 0x1AC304u;
label_1ac304:
    // 0x1ac304: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ac308:
    // 0x1ac308: 0x26074780  addiu       $a3, $s0, 0x4780
    ctx->pc = 0x1ac308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 18304));
label_1ac30c:
    // 0x1ac30c: 0xae114780  sw          $s1, 0x4780($s0)
    ctx->pc = 0x1ac30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18304), GPR_U32(ctx, 17));
label_1ac310:
    // 0x1ac310: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
label_1ac314:
    // 0x1ac314: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac318:
    // 0x1ac318: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ac318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ac31c:
    // 0x1ac31c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac320:
    // 0x1ac320: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ac320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac324:
    // 0x1ac324: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac328:
    // 0x1ac328: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ac328u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac32c:
    // 0x1ac32c: 0xc069e2a  jal         func_1A78A8
label_1ac330:
    if (ctx->pc == 0x1AC330u) {
        ctx->pc = 0x1AC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC32Cu;
        // 0x1ac330: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC334u;
        goto label_1ac334;
    }
    ctx->pc = 0x1AC32Cu;
    SET_GPR_U32(ctx, 31, 0x1AC334u);
    ctx->pc = 0x1AC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC32Cu;
    // 0x1ac330: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC334u;
label_1ac334:
    // 0x1ac334: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1ac338:
    if (ctx->pc == 0x1AC338u) {
        ctx->pc = 0x1AC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC334u;
        // 0x1ac338: 0x8e024780  lw          $v0, 0x4780($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC33Cu;
        goto label_1ac33c;
    }
    ctx->pc = 0x1AC334u;
    {
        const bool branch_taken_0x1ac334 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac334) {
            ctx->pc = 0x1AC338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC334u;
            // 0x1ac338: 0x8e024780  lw          $v0, 0x4780($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC344u;
            goto label_1ac344;
        }
    }
    ctx->pc = 0x1AC33Cu;
label_1ac33c:
    // 0x1ac33c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac340:
    // 0x1ac340: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ac340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ac344:
    // 0x1ac344: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ac344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac348:
    // 0x1ac348: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac34c:
    // 0x1ac34c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac350:
    // 0x1ac350: 0x3e00008  jr          $ra
label_1ac354:
    if (ctx->pc == 0x1AC354u) {
        ctx->pc = 0x1AC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC350u;
        // 0x1ac354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC358u;
        goto label_1ac358;
    }
    ctx->pc = 0x1AC350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC350u;
        // 0x1ac354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC358u;
label_1ac358:
    // 0x1ac358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ac35c:
    // 0x1ac35c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ac360:
    // 0x1ac360: 0xc06af62  jal         func_1ABD88
label_1ac364:
    if (ctx->pc == 0x1AC364u) {
        ctx->pc = 0x1AC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC360u;
        // 0x1ac364: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC368u;
        goto label_1ac368;
    }
    ctx->pc = 0x1AC360u;
    SET_GPR_U32(ctx, 31, 0x1AC368u);
    ctx->pc = 0x1AC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC360u;
    // 0x1ac364: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABD88u;
    { ctx->pc = 0x1abd88; return; }
    ctx->pc = 0x1AC368u;
label_1ac368:
    // 0x1ac368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ac368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac36c:
    // 0x1ac36c: 0x3e00008  jr          $ra
label_1ac370:
    if (ctx->pc == 0x1AC370u) {
        ctx->pc = 0x1AC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC36Cu;
        // 0x1ac370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC374u;
        goto label_1ac374;
    }
    ctx->pc = 0x1AC36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC36Cu;
        // 0x1ac370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC374u;
label_1ac374:
    // 0x1ac374: 0x0  nop
    ctx->pc = 0x1ac374u;
    // NOP
label_1ac378:
    // 0x1ac378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ac37c:
    // 0x1ac37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac380:
    // 0x1ac380: 0xc06af62  jal         func_1ABD88
label_1ac384:
    if (ctx->pc == 0x1AC384u) {
        ctx->pc = 0x1AC388u;
        goto label_1ac388;
    }
    ctx->pc = 0x1AC380u;
    SET_GPR_U32(ctx, 31, 0x1AC388u);
    ctx->pc = 0x1ABD88u;
    { ctx->pc = 0x1abd88; return; }
    ctx->pc = 0x1AC388u;
label_1ac388:
    // 0x1ac388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac38c:
    // 0x1ac38c: 0x3e00008  jr          $ra
label_1ac390:
    if (ctx->pc == 0x1AC390u) {
        ctx->pc = 0x1AC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC38Cu;
        // 0x1ac390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC394u;
        goto label_1ac394;
    }
    ctx->pc = 0x1AC38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC38Cu;
        // 0x1ac390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC394u;
label_1ac394:
    // 0x1ac394: 0x0  nop
    ctx->pc = 0x1ac394u;
    // NOP
label_1ac398:
    // 0x1ac398: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ac398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ac39c:
    // 0x1ac39c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ac39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1ac3a0:
    // 0x1ac3a0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ac3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1ac3a4:
    // 0x1ac3a4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ac3a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3a8:
    // 0x1ac3a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ac3ac:
    // 0x1ac3ac: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1ac3acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3b0:
    // 0x1ac3b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ac3b4:
    // 0x1ac3b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3b8:
    // 0x1ac3b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac3bc:
    // 0x1ac3bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3c0:
    // 0x1ac3c0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ac3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1ac3c4:
    // 0x1ac3c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ac3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3c8:
    // 0x1ac3c8: 0xc06aef0  jal         func_1ABBC0
label_1ac3cc:
    if (ctx->pc == 0x1AC3CCu) {
        ctx->pc = 0x1AC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C8u;
        // 0x1ac3cc: 0xffb50060  sd          $s5, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3D0u;
        goto label_1ac3d0;
    }
    ctx->pc = 0x1AC3C8u;
    SET_GPR_U32(ctx, 31, 0x1AC3D0u);
    ctx->pc = 0x1AC3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3C8u;
    // 0x1ac3cc: 0xffb50060  sd          $s5, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC3D0u;
label_1ac3d0:
    // 0x1ac3d0: 0x4400071  bltz        $v0, . + 4 + (0x71 << 2)
label_1ac3d4:
    if (ctx->pc == 0x1AC3D4u) {
        ctx->pc = 0x1AC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3D0u;
        // 0x1ac3d4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3D8u;
        goto label_1ac3d8;
    }
    ctx->pc = 0x1AC3D0u;
    {
        const bool branch_taken_0x1ac3d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3D0u;
        // 0x1ac3d4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3d0) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC3D8u;
label_1ac3d8:
    // 0x1ac3d8: 0xc06af30  jal         func_1ABCC0
label_1ac3dc:
    if (ctx->pc == 0x1AC3DCu) {
        ctx->pc = 0x1AC3E0u;
        goto label_1ac3e0;
    }
    ctx->pc = 0x1AC3D8u;
    SET_GPR_U32(ctx, 31, 0x1AC3E0u);
    ctx->pc = 0x1ABCC0u;
    { ctx->pc = 0x1abcc0; return; }
    ctx->pc = 0x1AC3E0u;
label_1ac3e0:
    // 0x1ac3e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ac3e4:
    if (ctx->pc == 0x1AC3E4u) {
        ctx->pc = 0x1AC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3E0u;
        // 0x1ac3e4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3E8u;
        goto label_1ac3e8;
    }
    ctx->pc = 0x1AC3E0u;
    {
        const bool branch_taken_0x1ac3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3e0) {
            ctx->pc = 0x1AC3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC3E0u;
            // 0x1ac3e4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC3F4u;
            goto label_1ac3f4;
        }
    }
    ctx->pc = 0x1AC3E8u;
label_1ac3e8:
    // 0x1ac3e8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac3ec:
    // 0x1ac3ec: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1ac3f0:
    if (ctx->pc == 0x1AC3F0u) {
        ctx->pc = 0x1AC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3ECu;
        // 0x1ac3f0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3F4u;
        goto label_1ac3f4;
    }
    ctx->pc = 0x1AC3ECu;
    {
        const bool branch_taken_0x1ac3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3ECu;
        // 0x1ac3f0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3ec) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC3F4u;
label_1ac3f4:
    // 0x1ac3f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ac3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3f8:
    // 0x1ac3f8: 0x24514788  addiu       $s1, $v0, 0x4788
    ctx->pc = 0x1ac3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18312));
label_1ac3fc:
    // 0x1ac3fc: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1ac3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ac400:
    // 0x1ac400: 0xc08f4fe  jal         func_23D3F8
label_1ac404:
    if (ctx->pc == 0x1AC404u) {
        ctx->pc = 0x1AC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC400u;
        // 0x1ac404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC408u;
        goto label_1ac408;
    }
    ctx->pc = 0x1AC400u;
    SET_GPR_U32(ctx, 31, 0x1AC408u);
    ctx->pc = 0x1AC404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC400u;
    // 0x1ac404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1AC408u;
label_1ac408:
    // 0x1ac408: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x1ac408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_1ac40c:
    // 0x1ac40c: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
label_1ac410:
    if (ctx->pc == 0x1AC410u) {
        ctx->pc = 0x1AC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC40Cu;
        // 0x1ac410: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC414u;
        goto label_1ac414;
    }
    ctx->pc = 0x1AC40Cu;
    {
        const bool branch_taken_0x1ac40c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC40Cu;
        // 0x1ac410: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac40c) {
            ctx->pc = 0x1AC540u;
            goto label_1ac540;
        }
    }
    ctx->pc = 0x1AC414u;
label_1ac414:
    // 0x1ac414: 0x2a4200fd  slti        $v0, $s2, 0xFD
    ctx->pc = 0x1ac414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)253) ? 1 : 0);
label_1ac418:
    // 0x1ac418: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_1ac41c:
    if (ctx->pc == 0x1AC41Cu) {
        ctx->pc = 0x1AC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC418u;
        // 0x1ac41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC420u;
        goto label_1ac420;
    }
    ctx->pc = 0x1AC418u;
    {
        const bool branch_taken_0x1ac418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC418u;
        // 0x1ac41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac418) {
            ctx->pc = 0x1AC528u;
            goto label_1ac528;
        }
    }
    ctx->pc = 0x1AC420u;
label_1ac420:
    // 0x1ac420: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1ac420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
label_1ac424:
    // 0x1ac424: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1ac424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_1ac428:
    // 0x1ac428: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ac428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1ac42c:
    // 0x1ac42c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1ac430:
    if (ctx->pc == 0x1AC430u) {
        ctx->pc = 0x1AC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC42Cu;
        // 0x1ac430: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC434u;
        goto label_1ac434;
    }
    ctx->pc = 0x1AC42Cu;
    {
        const bool branch_taken_0x1ac42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC42Cu;
        // 0x1ac430: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac42c) {
            ctx->pc = 0x1AC49Cu;
            goto label_1ac49c;
        }
    }
    ctx->pc = 0x1AC434u;
label_1ac434:
    // 0x1ac434: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ac434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1ac438:
    // 0x1ac438: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ac438u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1ac43c:
    // 0x1ac43c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac440:
    // 0x1ac440: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1ac440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1ac444:
    // 0x1ac444: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1ac444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1ac448:
    // 0x1ac448: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1ac448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1ac44c:
    // 0x1ac44c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1ac44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1ac450:
    // 0x1ac450: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1ac450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1ac454:
    // 0x1ac454: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1ac454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1ac458:
    // 0x1ac458: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x1ac458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1ac45c:
    // 0x1ac45c: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x1ac45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1ac460:
    // 0x1ac460: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1ac460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac464:
    // 0x1ac464: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1ac464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac468:
    // 0x1ac468: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1ac468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac46c:
    // 0x1ac46c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1ac46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac470:
    // 0x1ac470: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1ac470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac474:
    // 0x1ac474: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1ac474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac478:
    // 0x1ac478: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1ac478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac47c:
    // 0x1ac47c: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1ac47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac480:
    // 0x1ac480: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ac480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1ac484:
    // 0x1ac484: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ac484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1ac488:
    // 0x1ac488: 0x0  nop
    ctx->pc = 0x1ac488u;
    // NOP
label_1ac48c:
    // 0x1ac48c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
label_1ac490:
    if (ctx->pc == 0x1AC490u) {
        ctx->pc = 0x1AC494u;
        goto label_1ac494;
    }
    ctx->pc = 0x1AC48Cu;
    {
        const bool branch_taken_0x1ac48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac48c) {
            ctx->pc = 0x1AC440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac440;
        }
    }
    ctx->pc = 0x1AC494u;
label_1ac494:
    // 0x1ac494: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ac498:
    if (ctx->pc == 0x1AC498u) {
        ctx->pc = 0x1AC49Cu;
        goto label_1ac49c;
    }
    ctx->pc = 0x1AC494u;
    {
        const bool branch_taken_0x1ac494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac494) {
            ctx->pc = 0x1AC4DCu;
            goto label_1ac4dc;
        }
    }
    ctx->pc = 0x1AC49Cu;
label_1ac49c:
    // 0x1ac49c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ac49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1ac4a0:
    // 0x1ac4a0: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ac4a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1ac4a4:
    // 0x1ac4a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac4a8:
    // 0x1ac4a8: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1ac4a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac4ac:
    // 0x1ac4ac: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1ac4acu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_1ac4b0:
    // 0x1ac4b0: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1ac4b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1ac4b4:
    // 0x1ac4b4: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1ac4b4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1ac4b8:
    // 0x1ac4b8: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1ac4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
label_1ac4bc:
    // 0x1ac4bc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1ac4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
label_1ac4c0:
    // 0x1ac4c0: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1ac4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
label_1ac4c4:
    // 0x1ac4c4: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1ac4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
label_1ac4c8:
    // 0x1ac4c8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ac4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1ac4cc:
    // 0x1ac4cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ac4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1ac4d0:
    // 0x1ac4d0: 0x0  nop
    ctx->pc = 0x1ac4d0u;
    // NOP
label_1ac4d4:
    // 0x1ac4d4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_1ac4d8:
    if (ctx->pc == 0x1AC4D8u) {
        ctx->pc = 0x1AC4DCu;
        goto label_1ac4dc;
    }
    ctx->pc = 0x1AC4D4u;
    {
        const bool branch_taken_0x1ac4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac4d4) {
            ctx->pc = 0x1AC4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac4a8;
        }
    }
    ctx->pc = 0x1AC4DCu;
label_1ac4dc:
    // 0x1ac4dc: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1ac4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1ac4e0:
    // 0x1ac4e0: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1ac4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1ac4e4:
    // 0x1ac4e4: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1ac4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1ac4e8:
    // 0x1ac4e8: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1ac4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1ac4ec:
    // 0x1ac4ec: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1ac4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1ac4f0:
    // 0x1ac4f0: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1ac4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1ac4f4:
    // 0x1ac4f4: 0x8869001b  lwl         $t1, 0x1B($v1)
    ctx->pc = 0x1ac4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
label_1ac4f8:
    // 0x1ac4f8: 0x98690018  lwr         $t1, 0x18($v1)
    ctx->pc = 0x1ac4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
label_1ac4fc:
    // 0x1ac4fc: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1ac4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac500:
    // 0x1ac500: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1ac500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac504:
    // 0x1ac504: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1ac504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac508:
    // 0x1ac508: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1ac508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac50c:
    // 0x1ac50c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1ac50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac510:
    // 0x1ac510: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1ac510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ac514:
    // 0x1ac514: 0xa889001b  swl         $t1, 0x1B($a0)
    ctx->pc = 0x1ac514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ac518:
    // 0x1ac518: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1ac518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ac51c:
    // 0x1ac51c: 0xb8890018  swr         $t1, 0x18($a0)
    ctx->pc = 0x1ac51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ac520:
    // 0x1ac520: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ac524:
    if (ctx->pc == 0x1AC524u) {
        ctx->pc = 0x1AC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC520u;
        // 0x1ac524: 0xaea24780  sw          $v0, 0x4780($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 18304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC528u;
        goto label_1ac528;
    }
    ctx->pc = 0x1AC520u;
    {
        const bool branch_taken_0x1ac520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC520u;
        // 0x1ac524: 0xaea24780  sw          $v0, 0x4780($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 18304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac520) {
            ctx->pc = 0x1AC550u;
            goto label_1ac550;
        }
    }
    ctx->pc = 0x1AC528u;
label_1ac528:
    // 0x1ac528: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1ac528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
label_1ac52c:
    // 0x1ac52c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ac52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ac530:
    // 0x1ac530: 0xc08e93e  jal         func_23A4F8
label_1ac534:
    if (ctx->pc == 0x1AC534u) {
        ctx->pc = 0x1AC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC530u;
        // 0x1ac534: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC538u;
        goto label_1ac538;
    }
    ctx->pc = 0x1AC530u;
    SET_GPR_U32(ctx, 31, 0x1AC538u);
    ctx->pc = 0x1AC534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC530u;
    // 0x1ac534: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1AC538u;
label_1ac538:
    // 0x1ac538: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ac53c:
    if (ctx->pc == 0x1AC53Cu) {
        ctx->pc = 0x1AC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC538u;
        // 0x1ac53c: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC540u;
        goto label_1ac540;
    }
    ctx->pc = 0x1AC538u;
    {
        const bool branch_taken_0x1ac538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC538u;
        // 0x1ac53c: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac538) {
            ctx->pc = 0x1AC54Cu;
            goto label_1ac54c;
        }
    }
    ctx->pc = 0x1AC540u;
label_1ac540:
    // 0x1ac540: 0xa0400104  sb          $zero, 0x104($v0)
    ctx->pc = 0x1ac540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 260), (uint8_t)GPR_U32(ctx, 0));
label_1ac544:
    // 0x1ac544: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ac544u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1ac548:
    // 0x1ac548: 0xae20fff8  sw          $zero, -0x8($s1)
    ctx->pc = 0x1ac548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 0));
label_1ac54c:
    // 0x1ac54c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac550:
    // 0x1ac550: 0x26b04780  addiu       $s0, $s5, 0x4780
    ctx->pc = 0x1ac550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
label_1ac554:
    // 0x1ac554: 0x24a44980  addiu       $a0, $a1, 0x4980
    ctx->pc = 0x1ac554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 18816));
label_1ac558:
    // 0x1ac558: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ac558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ac55c:
    // 0x1ac55c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac560:
    // 0x1ac560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac564:
    // 0x1ac564: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ac564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac568:
    // 0x1ac568: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1ac56c:
    // 0x1ac56c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ac56cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac570:
    // 0x1ac570: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1ac570u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ac574:
    // 0x1ac574: 0xc069e2a  jal         func_1A78A8
label_1ac578:
    if (ctx->pc == 0x1AC578u) {
        ctx->pc = 0x1AC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC574u;
        // 0x1ac578: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC57Cu;
        goto label_1ac57c;
    }
    ctx->pc = 0x1AC574u;
    SET_GPR_U32(ctx, 31, 0x1AC57Cu);
    ctx->pc = 0x1AC578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC574u;
    // 0x1ac578: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC57Cu;
label_1ac57c:
    // 0x1ac57c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_1ac580:
    if (ctx->pc == 0x1AC580u) {
        ctx->pc = 0x1AC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC57Cu;
        // 0x1ac580: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC584u;
        goto label_1ac584;
    }
    ctx->pc = 0x1AC57Cu;
    {
        const bool branch_taken_0x1ac57c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac57c) {
            ctx->pc = 0x1AC580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC57Cu;
            // 0x1ac580: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC590u;
            goto label_1ac590;
        }
    }
    ctx->pc = 0x1AC584u;
label_1ac584:
    // 0x1ac584: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac588:
    // 0x1ac588: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ac58c:
    if (ctx->pc == 0x1AC58Cu) {
        ctx->pc = 0x1AC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC588u;
        // 0x1ac58c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC590u;
        goto label_1ac590;
    }
    ctx->pc = 0x1AC588u;
    {
        const bool branch_taken_0x1ac588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC588u;
        // 0x1ac58c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac588) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC590u;
label_1ac590:
    // 0x1ac590: 0x8ea24780  lw          $v0, 0x4780($s5)
    ctx->pc = 0x1ac590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18304)));
label_1ac594:
    // 0x1ac594: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1ac594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1ac598:
    // 0x1ac598: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ac598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ac59c:
    // 0x1ac59c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ac59cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ac5a0:
    // 0x1ac5a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ac5a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac5a4:
    // 0x1ac5a4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ac5a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac5a8:
    // 0x1ac5a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac5a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac5ac:
    // 0x1ac5ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac5b0:
    // 0x1ac5b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac5b4:
    // 0x1ac5b4: 0x3e00008  jr          $ra
label_1ac5b8:
    if (ctx->pc == 0x1AC5B8u) {
        ctx->pc = 0x1AC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5B4u;
        // 0x1ac5b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5BCu;
        goto label_1ac5bc;
    }
    ctx->pc = 0x1AC5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5B4u;
        // 0x1ac5b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC5BCu;
label_1ac5bc:
    // 0x1ac5bc: 0x0  nop
    ctx->pc = 0x1ac5bcu;
    // NOP
label_1ac5c0:
    // 0x1ac5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ac5c4:
    // 0x1ac5c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ac5c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac5c8:
    // 0x1ac5c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ac5cc:
    // 0x1ac5cc: 0xc06b0e6  jal         func_1AC398
label_1ac5d0:
    if (ctx->pc == 0x1AC5D0u) {
        ctx->pc = 0x1AC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5CCu;
        // 0x1ac5d0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5D4u;
        goto label_1ac5d4;
    }
    ctx->pc = 0x1AC5CCu;
    SET_GPR_U32(ctx, 31, 0x1AC5D4u);
    ctx->pc = 0x1AC5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5CCu;
    // 0x1ac5d0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC398u;
    goto label_1ac398;
    ctx->pc = 0x1AC5D4u;
label_1ac5d4:
    // 0x1ac5d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ac5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac5d8:
    // 0x1ac5d8: 0x3e00008  jr          $ra
label_1ac5dc:
    if (ctx->pc == 0x1AC5DCu) {
        ctx->pc = 0x1AC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5D8u;
        // 0x1ac5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5E0u;
        goto label_1ac5e0;
    }
    ctx->pc = 0x1AC5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5D8u;
        // 0x1ac5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC5E0u;
label_1ac5e0:
    // 0x1ac5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ac5e4:
    // 0x1ac5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac5e8:
    // 0x1ac5e8: 0xc06b0e6  jal         func_1AC398
label_1ac5ec:
    if (ctx->pc == 0x1AC5ECu) {
        ctx->pc = 0x1AC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5E8u;
        // 0x1ac5ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5F0u;
        goto label_1ac5f0;
    }
    ctx->pc = 0x1AC5E8u;
    SET_GPR_U32(ctx, 31, 0x1AC5F0u);
    ctx->pc = 0x1AC5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5E8u;
    // 0x1ac5ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC398u;
    goto label_1ac398;
    ctx->pc = 0x1AC5F0u;
label_1ac5f0:
    // 0x1ac5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac5f4:
    // 0x1ac5f4: 0x3e00008  jr          $ra
label_1ac5f8:
    if (ctx->pc == 0x1AC5F8u) {
        ctx->pc = 0x1AC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5F4u;
        // 0x1ac5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC5FCu;
        goto label_1ac5fc;
    }
    ctx->pc = 0x1AC5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5F4u;
        // 0x1ac5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC5FCu;
label_1ac5fc:
    // 0x1ac5fc: 0x0  nop
    ctx->pc = 0x1ac5fcu;
    // NOP
label_1ac600:
    // 0x1ac600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ac600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ac604:
    // 0x1ac604: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ac604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1ac608:
    // 0x1ac608: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ac608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1ac60c:
    // 0x1ac60c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ac60cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac610:
    // 0x1ac610: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ac614:
    // 0x1ac614: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ac614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac618:
    // 0x1ac618: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac61c:
    // 0x1ac61c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac620:
    // 0x1ac620: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ac620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1ac624:
    // 0x1ac624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac628:
    // 0x1ac628: 0xc06aef0  jal         func_1ABBC0
label_1ac62c:
    if (ctx->pc == 0x1AC62Cu) {
        ctx->pc = 0x1AC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC628u;
        // 0x1ac62c: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC630u;
        goto label_1ac630;
    }
    ctx->pc = 0x1AC628u;
    SET_GPR_U32(ctx, 31, 0x1AC630u);
    ctx->pc = 0x1AC62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC628u;
    // 0x1ac62c: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC630u;
label_1ac630:
    // 0x1ac630: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
label_1ac634:
    if (ctx->pc == 0x1AC634u) {
        ctx->pc = 0x1AC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC630u;
        // 0x1ac634: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC638u;
        goto label_1ac638;
    }
    ctx->pc = 0x1AC630u;
    {
        const bool branch_taken_0x1ac630 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC630u;
        // 0x1ac634: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac630) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC638u;
label_1ac638:
    // 0x1ac638: 0xc06af30  jal         func_1ABCC0
label_1ac63c:
    if (ctx->pc == 0x1AC63Cu) {
        ctx->pc = 0x1AC640u;
        goto label_1ac640;
    }
    ctx->pc = 0x1AC638u;
    SET_GPR_U32(ctx, 31, 0x1AC640u);
    ctx->pc = 0x1ABCC0u;
    { ctx->pc = 0x1abcc0; return; }
    ctx->pc = 0x1AC640u;
label_1ac640:
    // 0x1ac640: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1ac644:
    if (ctx->pc == 0x1AC644u) {
        ctx->pc = 0x1AC644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC640u;
        // 0x1ac644: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC648u;
        goto label_1ac648;
    }
    ctx->pc = 0x1AC640u;
    {
        const bool branch_taken_0x1ac640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac640) {
            ctx->pc = 0x1AC644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC640u;
            // 0x1ac644: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC654u;
            goto label_1ac654;
        }
    }
    ctx->pc = 0x1AC648u;
label_1ac648:
    // 0x1ac648: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac64c:
    // 0x1ac64c: 0x10000025  b           . + 4 + (0x25 << 2)
label_1ac650:
    if (ctx->pc == 0x1AC650u) {
        ctx->pc = 0x1AC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC64Cu;
        // 0x1ac650: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC654u;
        goto label_1ac654;
    }
    ctx->pc = 0x1AC64Cu;
    {
        const bool branch_taken_0x1ac64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC64Cu;
        // 0x1ac650: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac64c) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC654u;
label_1ac654:
    // 0x1ac654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ac654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac658:
    // 0x1ac658: 0x24514788  addiu       $s1, $v0, 0x4788
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18312));
label_1ac65c:
    // 0x1ac65c: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1ac65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1ac660:
    // 0x1ac660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac664:
    // 0x1ac664: 0xc08f4fe  jal         func_23D3F8
label_1ac668:
    if (ctx->pc == 0x1AC668u) {
        ctx->pc = 0x1AC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC664u;
        // 0x1ac668: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC66Cu;
        goto label_1ac66c;
    }
    ctx->pc = 0x1AC664u;
    SET_GPR_U32(ctx, 31, 0x1AC66Cu);
    ctx->pc = 0x1AC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC664u;
    // 0x1ac668: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1AC66Cu;
label_1ac66c:
    // 0x1ac66c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ac66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ac670:
    // 0x1ac670: 0xa2000103  sb          $zero, 0x103($s0)
    ctx->pc = 0x1ac670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
label_1ac674:
    // 0x1ac674: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1ac674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
label_1ac678:
    // 0x1ac678: 0xc08f4fe  jal         func_23D3F8
label_1ac67c:
    if (ctx->pc == 0x1AC67Cu) {
        ctx->pc = 0x1AC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC678u;
        // 0x1ac67c: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC680u;
        goto label_1ac680;
    }
    ctx->pc = 0x1AC678u;
    SET_GPR_U32(ctx, 31, 0x1AC680u);
    ctx->pc = 0x1AC67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC678u;
    // 0x1ac67c: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1AC680u;
label_1ac680:
    // 0x1ac680: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ac684:
    // 0x1ac684: 0xa20001ff  sb          $zero, 0x1FF($s0)
    ctx->pc = 0x1ac684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 511), (uint8_t)GPR_U32(ctx, 0));
label_1ac688:
    // 0x1ac688: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ac688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ac68c:
    // 0x1ac68c: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
label_1ac690:
    // 0x1ac690: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac694:
    // 0x1ac694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac698:
    // 0x1ac698: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ac698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac69c:
    // 0x1ac69c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1ac6a0:
    // 0x1ac6a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ac6a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6a4:
    // 0x1ac6a4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1ac6a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ac6a8:
    // 0x1ac6a8: 0xc069e2a  jal         func_1A78A8
label_1ac6ac:
    if (ctx->pc == 0x1AC6ACu) {
        ctx->pc = 0x1AC6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6A8u;
        // 0x1ac6ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6B0u;
        goto label_1ac6b0;
    }
    ctx->pc = 0x1AC6A8u;
    SET_GPR_U32(ctx, 31, 0x1AC6B0u);
    ctx->pc = 0x1AC6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6A8u;
    // 0x1ac6ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC6B0u;
label_1ac6b0:
    // 0x1ac6b0: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_1ac6b4:
    if (ctx->pc == 0x1AC6B4u) {
        ctx->pc = 0x1AC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6B0u;
        // 0x1ac6b4: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6B8u;
        goto label_1ac6b8;
    }
    ctx->pc = 0x1AC6B0u;
    {
        const bool branch_taken_0x1ac6b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac6b0) {
            ctx->pc = 0x1AC6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC6B0u;
            // 0x1ac6b4: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC6C4u;
            goto label_1ac6c4;
        }
    }
    ctx->pc = 0x1AC6B8u;
label_1ac6b8:
    // 0x1ac6b8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac6bc:
    // 0x1ac6bc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ac6c0:
    if (ctx->pc == 0x1AC6C0u) {
        ctx->pc = 0x1AC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6BCu;
        // 0x1ac6c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6C4u;
        goto label_1ac6c4;
    }
    ctx->pc = 0x1AC6BCu;
    {
        const bool branch_taken_0x1ac6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6BCu;
        // 0x1ac6c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6bc) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC6C4u;
label_1ac6c4:
    // 0x1ac6c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1ac6c8:
    if (ctx->pc == 0x1AC6C8u) {
        ctx->pc = 0x1AC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6C4u;
        // 0x1ac6c8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6CCu;
        goto label_1ac6cc;
    }
    ctx->pc = 0x1AC6C4u;
    {
        const bool branch_taken_0x1ac6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac6c4) {
            ctx->pc = 0x1AC6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC6C4u;
            // 0x1ac6c8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC6D8u;
            goto label_1ac6d8;
        }
    }
    ctx->pc = 0x1AC6CCu;
label_1ac6cc:
    // 0x1ac6cc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac6d0:
    // 0x1ac6d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ac6d4:
    if (ctx->pc == 0x1AC6D4u) {
        ctx->pc = 0x1AC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6D0u;
        // 0x1ac6d4: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6D8u;
        goto label_1ac6d8;
    }
    ctx->pc = 0x1AC6D0u;
    {
        const bool branch_taken_0x1ac6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6D0u;
        // 0x1ac6d4: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6d0) {
            ctx->pc = 0x1AC6E4u;
            goto label_1ac6e4;
        }
    }
    ctx->pc = 0x1AC6D8u;
label_1ac6d8:
    // 0x1ac6d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6dc:
    // 0x1ac6dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ac6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ac6e0:
    // 0x1ac6e0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1ac6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_1ac6e4:
    // 0x1ac6e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ac6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ac6e8:
    // 0x1ac6e8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ac6e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac6ec:
    // 0x1ac6ec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ac6ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac6f0:
    // 0x1ac6f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac6f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac6f4:
    // 0x1ac6f4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac6f8:
    // 0x1ac6f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac6fc:
    // 0x1ac6fc: 0x3e00008  jr          $ra
label_1ac700:
    if (ctx->pc == 0x1AC700u) {
        ctx->pc = 0x1AC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6FCu;
        // 0x1ac700: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC704u;
        goto label_1ac704;
    }
    ctx->pc = 0x1AC6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6FCu;
        // 0x1ac700: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC704u;
label_1ac704:
    // 0x1ac704: 0x0  nop
    ctx->pc = 0x1ac704u;
    // NOP
label_1ac708:
    // 0x1ac708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ac70c:
    // 0x1ac70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac710:
    // 0x1ac710: 0xc06b180  jal         func_1AC600
label_1ac714:
    if (ctx->pc == 0x1AC714u) {
        ctx->pc = 0x1AC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC710u;
        // 0x1ac714: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC718u;
        goto label_1ac718;
    }
    ctx->pc = 0x1AC710u;
    SET_GPR_U32(ctx, 31, 0x1AC718u);
    ctx->pc = 0x1AC714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC710u;
    // 0x1ac714: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC600u;
    goto label_1ac600;
    ctx->pc = 0x1AC718u;
label_1ac718:
    // 0x1ac718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac71c:
    // 0x1ac71c: 0x3e00008  jr          $ra
label_1ac720:
    if (ctx->pc == 0x1AC720u) {
        ctx->pc = 0x1AC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC71Cu;
        // 0x1ac720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC724u;
        goto label_1ac724;
    }
    ctx->pc = 0x1AC71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC71Cu;
        // 0x1ac720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC724u;
label_1ac724:
    // 0x1ac724: 0x0  nop
    ctx->pc = 0x1ac724u;
    // NOP
label_1ac728:
    // 0x1ac728: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ac728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac72c:
    // 0x1ac72c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac72cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ac730:
    // 0x1ac730: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1ac730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1ac734:
    // 0x1ac734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac738:
    // 0x1ac738: 0x24a5a738  addiu       $a1, $a1, -0x58C8
    ctx->pc = 0x1ac738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944568));
label_1ac73c:
    // 0x1ac73c: 0xc06b180  jal         func_1AC600
label_1ac740:
    if (ctx->pc == 0x1AC740u) {
        ctx->pc = 0x1AC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC73Cu;
        // 0x1ac740: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC744u;
        goto label_1ac744;
    }
    ctx->pc = 0x1AC73Cu;
    SET_GPR_U32(ctx, 31, 0x1AC744u);
    ctx->pc = 0x1AC740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC73Cu;
    // 0x1ac740: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC600u;
    goto label_1ac600;
    ctx->pc = 0x1AC744u;
label_1ac744:
    // 0x1ac744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac748:
    // 0x1ac748: 0x3e00008  jr          $ra
label_1ac74c:
    if (ctx->pc == 0x1AC74Cu) {
        ctx->pc = 0x1AC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC748u;
        // 0x1ac74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC750u;
        goto label_1ac750;
    }
    ctx->pc = 0x1AC748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC748u;
        // 0x1ac74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC750u;
label_1ac750:
    // 0x1ac750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ac750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ac754:
    // 0x1ac754: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ac754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1ac758:
    // 0x1ac758: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ac75c:
    // 0x1ac75c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ac75cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac760:
    // 0x1ac760: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac764:
    // 0x1ac764: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac768:
    // 0x1ac768: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ac768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ac76c:
    // 0x1ac76c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ac76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac770:
    // 0x1ac770: 0xc06aef0  jal         func_1ABBC0
label_1ac774:
    if (ctx->pc == 0x1AC774u) {
        ctx->pc = 0x1AC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC770u;
        // 0x1ac774: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC778u;
        goto label_1ac778;
    }
    ctx->pc = 0x1AC770u;
    SET_GPR_U32(ctx, 31, 0x1AC778u);
    ctx->pc = 0x1AC774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC770u;
    // 0x1ac774: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC778u;
label_1ac778:
    // 0x1ac778: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ac77c:
    if (ctx->pc == 0x1AC77Cu) {
        ctx->pc = 0x1AC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC778u;
        // 0x1ac77c: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC780u;
        goto label_1ac780;
    }
    ctx->pc = 0x1AC778u;
    {
        const bool branch_taken_0x1ac778 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC778u;
        // 0x1ac77c: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac778) {
            ctx->pc = 0x1AC788u;
            goto label_1ac788;
        }
    }
    ctx->pc = 0x1AC780u;
label_1ac780:
    // 0x1ac780: 0x10000027  b           . + 4 + (0x27 << 2)
label_1ac784:
    if (ctx->pc == 0x1AC784u) {
        ctx->pc = 0x1AC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC780u;
        // 0x1ac784: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC788u;
        goto label_1ac788;
    }
    ctx->pc = 0x1AC780u;
    {
        const bool branch_taken_0x1ac780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC780u;
        // 0x1ac784: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac780) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC788u;
label_1ac788:
    // 0x1ac788: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1ac78c:
    if (ctx->pc == 0x1AC78Cu) {
        ctx->pc = 0x1AC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC788u;
        // 0x1ac78c: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC790u;
        goto label_1ac790;
    }
    ctx->pc = 0x1AC788u;
    {
        const bool branch_taken_0x1ac788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC788u;
        // 0x1ac78c: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac788) {
            ctx->pc = 0x1AC80Cu;
            goto label_1ac80c;
        }
    }
    ctx->pc = 0x1AC790u;
label_1ac790:
    // 0x1ac790: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ac794:
    // 0x1ac794: 0x26224780  addiu       $v0, $s1, 0x4780
    ctx->pc = 0x1ac794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 18304));
label_1ac798:
    // 0x1ac798: 0xae334780  sw          $s3, 0x4780($s1)
    ctx->pc = 0x1ac798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18304), GPR_U32(ctx, 19));
label_1ac79c:
    // 0x1ac79c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ac79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac7a0:
    // 0x1ac7a0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1ac7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1ac7a4:
    // 0x1ac7a4: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
label_1ac7a8:
    // 0x1ac7a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ac7ac:
    // 0x1ac7ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac7b0:
    // 0x1ac7b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac7b4:
    // 0x1ac7b4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1ac7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ac7b8:
    // 0x1ac7b8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac7b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac7bc:
    // 0x1ac7bc: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1ac7bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ac7c0:
    // 0x1ac7c0: 0xc069e2a  jal         func_1A78A8
label_1ac7c4:
    if (ctx->pc == 0x1AC7C4u) {
        ctx->pc = 0x1AC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7C0u;
        // 0x1ac7c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7C8u;
        goto label_1ac7c8;
    }
    ctx->pc = 0x1AC7C0u;
    SET_GPR_U32(ctx, 31, 0x1AC7C8u);
    ctx->pc = 0x1AC7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7C0u;
    // 0x1ac7c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC7C8u;
label_1ac7c8:
    // 0x1ac7c8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1ac7cc:
    if (ctx->pc == 0x1AC7CCu) {
        ctx->pc = 0x1AC7D0u;
        goto label_1ac7d0;
    }
    ctx->pc = 0x1AC7C8u;
    {
        const bool branch_taken_0x1ac7c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac7c8) {
            ctx->pc = 0x1AC7DCu;
            goto label_1ac7dc;
        }
    }
    ctx->pc = 0x1AC7D0u;
label_1ac7d0:
    // 0x1ac7d0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac7d4:
    // 0x1ac7d4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1ac7d8:
    if (ctx->pc == 0x1AC7D8u) {
        ctx->pc = 0x1AC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7D4u;
        // 0x1ac7d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7DCu;
        goto label_1ac7dc;
    }
    ctx->pc = 0x1AC7D4u;
    {
        const bool branch_taken_0x1ac7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7D4u;
        // 0x1ac7d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7d4) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC7DCu;
label_1ac7dc:
    // 0x1ac7dc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1ac7e0:
    if (ctx->pc == 0x1AC7E0u) {
        ctx->pc = 0x1AC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7DCu;
        // 0x1ac7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7E4u;
        goto label_1ac7e4;
    }
    ctx->pc = 0x1AC7DCu;
    {
        const bool branch_taken_0x1ac7dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7DCu;
        // 0x1ac7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7dc) {
            ctx->pc = 0x1AC7F0u;
            goto label_1ac7f0;
        }
    }
    ctx->pc = 0x1AC7E4u;
label_1ac7e4:
    // 0x1ac7e4: 0x92224780  lbu         $v0, 0x4780($s1)
    ctx->pc = 0x1ac7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18304)));
label_1ac7e8:
    // 0x1ac7e8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1ac7ec:
    if (ctx->pc == 0x1AC7ECu) {
        ctx->pc = 0x1AC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7E8u;
        // 0x1ac7ec: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7F0u;
        goto label_1ac7f0;
    }
    ctx->pc = 0x1AC7E8u;
    {
        const bool branch_taken_0x1ac7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7E8u;
        // 0x1ac7ec: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7e8) {
            ctx->pc = 0x1AC81Cu;
            goto label_1ac81c;
        }
    }
    ctx->pc = 0x1AC7F0u;
label_1ac7f0:
    // 0x1ac7f0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1ac7f4:
    if (ctx->pc == 0x1AC7F4u) {
        ctx->pc = 0x1AC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7F0u;
        // 0x1ac7f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7F8u;
        goto label_1ac7f8;
    }
    ctx->pc = 0x1AC7F0u;
    {
        const bool branch_taken_0x1ac7f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7F0u;
        // 0x1ac7f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7f0) {
            ctx->pc = 0x1AC804u;
            goto label_1ac804;
        }
    }
    ctx->pc = 0x1AC7F8u;
label_1ac7f8:
    // 0x1ac7f8: 0x96224780  lhu         $v0, 0x4780($s1)
    ctx->pc = 0x1ac7f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18304)));
label_1ac7fc:
    // 0x1ac7fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ac800:
    if (ctx->pc == 0x1AC800u) {
        ctx->pc = 0x1AC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7FCu;
        // 0x1ac800: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC804u;
        goto label_1ac804;
    }
    ctx->pc = 0x1AC7FCu;
    {
        const bool branch_taken_0x1ac7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7FCu;
        // 0x1ac800: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7fc) {
            ctx->pc = 0x1AC81Cu;
            goto label_1ac81c;
        }
    }
    ctx->pc = 0x1AC804u;
label_1ac804:
    // 0x1ac804: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
label_1ac808:
    if (ctx->pc == 0x1AC808u) {
        ctx->pc = 0x1AC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC804u;
        // 0x1ac808: 0x8e224780  lw          $v0, 0x4780($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC80Cu;
        goto label_1ac80c;
    }
    ctx->pc = 0x1AC804u;
    {
        const bool branch_taken_0x1ac804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac804) {
            ctx->pc = 0x1AC808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC804u;
            // 0x1ac808: 0x8e224780  lw          $v0, 0x4780($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC818u;
            goto label_1ac818;
        }
    }
    ctx->pc = 0x1AC80Cu;
label_1ac80c:
    // 0x1ac80c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac810:
    // 0x1ac810: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ac814:
    if (ctx->pc == 0x1AC814u) {
        ctx->pc = 0x1AC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC810u;
        // 0x1ac814: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC818u;
        goto label_1ac818;
    }
    ctx->pc = 0x1AC810u;
    {
        const bool branch_taken_0x1ac810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC810u;
        // 0x1ac814: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac810) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC818u;
label_1ac818:
    // 0x1ac818: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ac818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1ac81c:
    // 0x1ac81c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac81cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac820:
    // 0x1ac820: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ac820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac824:
    // 0x1ac824: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ac824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac828:
    // 0x1ac828: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac82c:
    // 0x1ac82c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac82cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac830:
    // 0x1ac830: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac834:
    // 0x1ac834: 0x3e00008  jr          $ra
label_1ac838:
    if (ctx->pc == 0x1AC838u) {
        ctx->pc = 0x1AC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC834u;
        // 0x1ac838: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC83Cu;
        goto label_1ac83c;
    }
    ctx->pc = 0x1AC834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC834u;
        // 0x1ac838: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC83Cu;
label_1ac83c:
    // 0x1ac83c: 0x0  nop
    ctx->pc = 0x1ac83cu;
    // NOP
label_1ac840:
    // 0x1ac840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ac840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ac844:
    // 0x1ac844: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ac848:
    // 0x1ac848: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ac84c:
    // 0x1ac84c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ac84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac850:
    // 0x1ac850: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac854:
    // 0x1ac854: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ac854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac858:
    // 0x1ac858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ac858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ac85c:
    // 0x1ac85c: 0xc06aef0  jal         func_1ABBC0
label_1ac860:
    if (ctx->pc == 0x1AC860u) {
        ctx->pc = 0x1AC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC85Cu;
        // 0x1ac860: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC864u;
        goto label_1ac864;
    }
    ctx->pc = 0x1AC85Cu;
    SET_GPR_U32(ctx, 31, 0x1AC864u);
    ctx->pc = 0x1AC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC85Cu;
    // 0x1ac860: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC864u;
label_1ac864:
    // 0x1ac864: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ac868:
    if (ctx->pc == 0x1AC868u) {
        ctx->pc = 0x1AC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC864u;
        // 0x1ac868: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC86Cu;
        goto label_1ac86c;
    }
    ctx->pc = 0x1AC864u;
    {
        const bool branch_taken_0x1ac864 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC864u;
        // 0x1ac868: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac864) {
            ctx->pc = 0x1AC874u;
            goto label_1ac874;
        }
    }
    ctx->pc = 0x1AC86Cu;
label_1ac86c:
    // 0x1ac86c: 0x10000025  b           . + 4 + (0x25 << 2)
label_1ac870:
    if (ctx->pc == 0x1AC870u) {
        ctx->pc = 0x1AC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC86Cu;
        // 0x1ac870: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC874u;
        goto label_1ac874;
    }
    ctx->pc = 0x1AC86Cu;
    {
        const bool branch_taken_0x1ac86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC86Cu;
        // 0x1ac870: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac86c) {
            ctx->pc = 0x1AC904u;
            goto label_1ac904;
        }
    }
    ctx->pc = 0x1AC874u;
label_1ac874:
    // 0x1ac874: 0x24e34780  addiu       $v1, $a3, 0x4780
    ctx->pc = 0x1ac874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18304));
label_1ac878:
    // 0x1ac878: 0xacf24780  sw          $s2, 0x4780($a3)
    ctx->pc = 0x1ac878u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18304), GPR_U32(ctx, 18));
label_1ac87c:
    // 0x1ac87c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1ac880:
    if (ctx->pc == 0x1AC880u) {
        ctx->pc = 0x1AC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC87Cu;
        // 0x1ac880: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC884u;
        goto label_1ac884;
    }
    ctx->pc = 0x1AC87Cu;
    {
        const bool branch_taken_0x1ac87c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC87Cu;
        // 0x1ac880: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac87c) {
            ctx->pc = 0x1AC890u;
            goto label_1ac890;
        }
    }
    ctx->pc = 0x1AC884u;
label_1ac884:
    // 0x1ac884: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1ac884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac888:
    // 0x1ac888: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ac88c:
    if (ctx->pc == 0x1AC88Cu) {
        ctx->pc = 0x1AC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC888u;
        // 0x1ac88c: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC890u;
        goto label_1ac890;
    }
    ctx->pc = 0x1AC888u;
    {
        const bool branch_taken_0x1ac888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC888u;
        // 0x1ac88c: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac888) {
            ctx->pc = 0x1AC8C0u;
            goto label_1ac8c0;
        }
    }
    ctx->pc = 0x1AC890u;
label_1ac890:
    // 0x1ac890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac894:
    // 0x1ac894: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1ac898:
    if (ctx->pc == 0x1AC898u) {
        ctx->pc = 0x1AC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC894u;
        // 0x1ac898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC89Cu;
        goto label_1ac89c;
    }
    ctx->pc = 0x1AC894u;
    {
        const bool branch_taken_0x1ac894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC894u;
        // 0x1ac898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac894) {
            ctx->pc = 0x1AC8A8u;
            goto label_1ac8a8;
        }
    }
    ctx->pc = 0x1AC89Cu;
label_1ac89c:
    // 0x1ac89c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1ac89cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac8a0:
    // 0x1ac8a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ac8a4:
    if (ctx->pc == 0x1AC8A4u) {
        ctx->pc = 0x1AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A0u;
        // 0x1ac8a4: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8A8u;
        goto label_1ac8a8;
    }
    ctx->pc = 0x1AC8A0u;
    {
        const bool branch_taken_0x1ac8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A0u;
        // 0x1ac8a4: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8a0) {
            ctx->pc = 0x1AC8C0u;
            goto label_1ac8c0;
        }
    }
    ctx->pc = 0x1AC8A8u;
label_1ac8a8:
    // 0x1ac8a8: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
label_1ac8ac:
    if (ctx->pc == 0x1AC8ACu) {
        ctx->pc = 0x1AC8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A8u;
        // 0x1ac8ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8B0u;
        goto label_1ac8b0;
    }
    ctx->pc = 0x1AC8A8u;
    {
        const bool branch_taken_0x1ac8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac8a8) {
            ctx->pc = 0x1AC8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC8A8u;
            // 0x1ac8ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC8BCu;
            goto label_1ac8bc;
        }
    }
    ctx->pc = 0x1AC8B0u;
label_1ac8b0:
    // 0x1ac8b0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac8b4:
    // 0x1ac8b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1ac8b8:
    if (ctx->pc == 0x1AC8B8u) {
        ctx->pc = 0x1AC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8B4u;
        // 0x1ac8b8: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8BCu;
        goto label_1ac8bc;
    }
    ctx->pc = 0x1AC8B4u;
    {
        const bool branch_taken_0x1ac8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8B4u;
        // 0x1ac8b8: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8b4) {
            ctx->pc = 0x1AC904u;
            goto label_1ac904;
        }
    }
    ctx->pc = 0x1AC8BCu;
label_1ac8bc:
    // 0x1ac8bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1ac8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1ac8c0:
    // 0x1ac8c0: 0x24e74780  addiu       $a3, $a3, 0x4780
    ctx->pc = 0x1ac8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18304));
label_1ac8c4:
    // 0x1ac8c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ac8c8:
    // 0x1ac8c8: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
label_1ac8cc:
    // 0x1ac8cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac8d0:
    // 0x1ac8d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac8d4:
    // 0x1ac8d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8d8:
    // 0x1ac8d8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1ac8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ac8dc:
    // 0x1ac8dc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac8dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8e0:
    // 0x1ac8e0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1ac8e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ac8e4:
    // 0x1ac8e4: 0xc069e2a  jal         func_1A78A8
label_1ac8e8:
    if (ctx->pc == 0x1AC8E8u) {
        ctx->pc = 0x1AC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8E4u;
        // 0x1ac8e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8ECu;
        goto label_1ac8ec;
    }
    ctx->pc = 0x1AC8E4u;
    SET_GPR_U32(ctx, 31, 0x1AC8ECu);
    ctx->pc = 0x1AC8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8E4u;
    // 0x1ac8e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC8ECu;
label_1ac8ec:
    // 0x1ac8ec: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1ac8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
label_1ac8f0:
    // 0x1ac8f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ac8f4:
    // 0x1ac8f4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1ac8f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ac8f8:
    // 0x1ac8f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1ac8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1ac8fc:
    // 0x1ac8fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ac8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac900:
    // 0x1ac900: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1ac900u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1ac904:
    // 0x1ac904: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ac904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac908:
    // 0x1ac908: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac90c:
    // 0x1ac90c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac910:
    // 0x1ac910: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac914:
    // 0x1ac914: 0x3e00008  jr          $ra
label_1ac918:
    if (ctx->pc == 0x1AC918u) {
        ctx->pc = 0x1AC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC914u;
        // 0x1ac918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC91Cu;
        goto label_1ac91c;
    }
    ctx->pc = 0x1AC914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC914u;
        // 0x1ac918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC91Cu;
label_1ac91c:
    // 0x1ac91c: 0x0  nop
    ctx->pc = 0x1ac91cu;
    // NOP
label_1ac920:
    // 0x1ac920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ac924:
    // 0x1ac924: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ac928:
    // 0x1ac928: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac92c:
    // 0x1ac92c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac930:
    // 0x1ac930: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ac930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ac934:
    // 0x1ac934: 0xc0692bc  jal         func_1A4AF0
label_1ac938:
    if (ctx->pc == 0x1AC938u) {
        ctx->pc = 0x1AC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC934u;
        // 0x1ac938: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC93Cu;
        goto label_1ac93c;
    }
    ctx->pc = 0x1AC934u;
    SET_GPR_U32(ctx, 31, 0x1AC93Cu);
    ctx->pc = 0x1AC938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC934u;
    // 0x1ac938: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    { ctx->pc = 0x1a4af0; return; }
    ctx->pc = 0x1AC93Cu;
label_1ac93c:
    // 0x1ac93c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ac93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1ac940:
    // 0x1ac940: 0xc06930c  jal         func_1A4C30
label_1ac944:
    if (ctx->pc == 0x1AC944u) {
        ctx->pc = 0x1AC948u;
        goto label_1ac948;
    }
    ctx->pc = 0x1AC940u;
    SET_GPR_U32(ctx, 31, 0x1AC948u);
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1AC948u;
label_1ac948:
    // 0x1ac948: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1ac948u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
label_1ac94c:
    // 0x1ac94c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1ac94cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac950:
    // 0x1ac950: 0x254349c0  addiu       $v1, $t2, 0x49C0
    ctx->pc = 0x1ac950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 18880));
label_1ac954:
    // 0x1ac954: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x1ac954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_1ac958:
    // 0x1ac958: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1ac958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac95c:
    // 0x1ac95c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1ac960:
    if (ctx->pc == 0x1AC960u) {
        ctx->pc = 0x1AC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC95Cu;
        // 0x1ac960: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC964u;
        goto label_1ac964;
    }
    ctx->pc = 0x1AC95Cu;
    {
        const bool branch_taken_0x1ac95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC95Cu;
        // 0x1ac960: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac95c) {
            ctx->pc = 0x1AC990u;
            goto label_1ac990;
        }
    }
    ctx->pc = 0x1AC964u;
label_1ac964:
    // 0x1ac964: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ac964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac968:
    // 0x1ac968: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ac968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac96c:
    // 0x1ac96c: 0x0  nop
    ctx->pc = 0x1ac96cu;
    // NOP
label_1ac970:
    // 0x1ac970: 0x254349c0  addiu       $v1, $t2, 0x49C0
    ctx->pc = 0x1ac970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 18880));
label_1ac974:
    // 0x1ac974: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1ac974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1ac978:
    // 0x1ac978: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1ac978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1ac97c:
    // 0x1ac97c: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x1ac97cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
label_1ac980:
    // 0x1ac980: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_1ac984:
    // 0x1ac984: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1ac984u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac988:
    // 0x1ac988: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_1ac98c:
    if (ctx->pc == 0x1AC98Cu) {
        ctx->pc = 0x1AC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC988u;
        // 0x1ac98c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC990u;
        goto label_1ac990;
    }
    ctx->pc = 0x1AC988u;
    {
        const bool branch_taken_0x1ac988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac988) {
            ctx->pc = 0x1AC98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC988u;
            // 0x1ac98c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac970;
        }
    }
    ctx->pc = 0x1AC990u;
label_1ac990:
    // 0x1ac990: 0x254649c0  addiu       $a2, $t2, 0x49C0
    ctx->pc = 0x1ac990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 18880));
label_1ac994:
    // 0x1ac994: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ac994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1ac998:
    // 0x1ac998: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1ac998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1ac99c:
    // 0x1ac99c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ac99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ac9a0:
    // 0x1ac9a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ac9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1ac9a4:
    // 0x1ac9a4: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x1ac9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
label_1ac9a8:
    // 0x1ac9a8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1ac9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_1ac9ac:
    // 0x1ac9ac: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1ac9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1ac9b0:
    // 0x1ac9b0: 0xdd4249c0  ld          $v0, 0x49C0($t2)
    ctx->pc = 0x1ac9b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 18880)));
label_1ac9b4:
    // 0x1ac9b4: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x1ac9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1ac9b8:
    // 0x1ac9b8: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x1ac9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
label_1ac9bc:
    // 0x1ac9bc: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x1ac9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1ac9c0:
    // 0x1ac9c0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ac9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1ac9c4:
    // 0x1ac9c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1ac9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1ac9c8:
    // 0x1ac9c8: 0xfd4249c0  sd          $v0, 0x49C0($t2)
    ctx->pc = 0x1ac9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 18880), GPR_U64(ctx, 2));
label_1ac9cc:
    // 0x1ac9cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ac9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac9d0:
    // 0x1ac9d0: 0xa14549c0  sb          $a1, 0x49C0($t2)
    ctx->pc = 0x1ac9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 18880), (uint8_t)GPR_U32(ctx, 5));
label_1ac9d4:
    // 0x1ac9d4: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1ac9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1ac9d8:
    // 0x1ac9d8: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x1ac9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
label_1ac9dc:
    // 0x1ac9dc: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1ac9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->pc = 0x1ac9e0u;
    return;
}
