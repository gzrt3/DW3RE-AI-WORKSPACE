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


void FUN_0019b8d0_part297(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22c150u: goto label_22c150;
        case 0x22c154u: goto label_22c154;
        case 0x22c158u: goto label_22c158;
        case 0x22c15cu: goto label_22c15c;
        case 0x22c160u: goto label_22c160;
        case 0x22c164u: goto label_22c164;
        case 0x22c168u: goto label_22c168;
        case 0x22c16cu: goto label_22c16c;
        case 0x22c170u: goto label_22c170;
        case 0x22c174u: goto label_22c174;
        case 0x22c178u: goto label_22c178;
        case 0x22c17cu: goto label_22c17c;
        case 0x22c180u: goto label_22c180;
        case 0x22c184u: goto label_22c184;
        case 0x22c188u: goto label_22c188;
        case 0x22c18cu: goto label_22c18c;
        case 0x22c190u: goto label_22c190;
        case 0x22c194u: goto label_22c194;
        case 0x22c198u: goto label_22c198;
        case 0x22c19cu: goto label_22c19c;
        case 0x22c1a0u: goto label_22c1a0;
        case 0x22c1a4u: goto label_22c1a4;
        case 0x22c1a8u: goto label_22c1a8;
        case 0x22c1acu: goto label_22c1ac;
        case 0x22c1b0u: goto label_22c1b0;
        case 0x22c1b4u: goto label_22c1b4;
        case 0x22c1b8u: goto label_22c1b8;
        case 0x22c1bcu: goto label_22c1bc;
        case 0x22c1c0u: goto label_22c1c0;
        case 0x22c1c4u: goto label_22c1c4;
        case 0x22c1c8u: goto label_22c1c8;
        case 0x22c1ccu: goto label_22c1cc;
        case 0x22c1d0u: goto label_22c1d0;
        case 0x22c1d4u: goto label_22c1d4;
        case 0x22c1d8u: goto label_22c1d8;
        case 0x22c1dcu: goto label_22c1dc;
        case 0x22c1e0u: goto label_22c1e0;
        case 0x22c1e4u: goto label_22c1e4;
        case 0x22c1e8u: goto label_22c1e8;
        case 0x22c1ecu: goto label_22c1ec;
        case 0x22c1f0u: goto label_22c1f0;
        case 0x22c1f4u: goto label_22c1f4;
        case 0x22c1f8u: goto label_22c1f8;
        case 0x22c1fcu: goto label_22c1fc;
        case 0x22c200u: goto label_22c200;
        case 0x22c204u: goto label_22c204;
        case 0x22c208u: goto label_22c208;
        case 0x22c20cu: goto label_22c20c;
        case 0x22c210u: goto label_22c210;
        case 0x22c214u: goto label_22c214;
        case 0x22c218u: goto label_22c218;
        case 0x22c21cu: goto label_22c21c;
        case 0x22c220u: goto label_22c220;
        case 0x22c224u: goto label_22c224;
        case 0x22c228u: goto label_22c228;
        case 0x22c22cu: goto label_22c22c;
        case 0x22c230u: goto label_22c230;
        case 0x22c234u: goto label_22c234;
        case 0x22c238u: goto label_22c238;
        case 0x22c23cu: goto label_22c23c;
        case 0x22c240u: goto label_22c240;
        case 0x22c244u: goto label_22c244;
        case 0x22c248u: goto label_22c248;
        case 0x22c24cu: goto label_22c24c;
        case 0x22c250u: goto label_22c250;
        case 0x22c254u: goto label_22c254;
        case 0x22c258u: goto label_22c258;
        case 0x22c25cu: goto label_22c25c;
        case 0x22c260u: goto label_22c260;
        case 0x22c264u: goto label_22c264;
        case 0x22c268u: goto label_22c268;
        case 0x22c26cu: goto label_22c26c;
        case 0x22c270u: goto label_22c270;
        case 0x22c274u: goto label_22c274;
        case 0x22c278u: goto label_22c278;
        case 0x22c27cu: goto label_22c27c;
        case 0x22c280u: goto label_22c280;
        case 0x22c284u: goto label_22c284;
        case 0x22c288u: goto label_22c288;
        case 0x22c28cu: goto label_22c28c;
        case 0x22c290u: goto label_22c290;
        case 0x22c294u: goto label_22c294;
        case 0x22c298u: goto label_22c298;
        case 0x22c29cu: goto label_22c29c;
        case 0x22c2a0u: goto label_22c2a0;
        case 0x22c2a4u: goto label_22c2a4;
        case 0x22c2a8u: goto label_22c2a8;
        case 0x22c2acu: goto label_22c2ac;
        case 0x22c2b0u: goto label_22c2b0;
        case 0x22c2b4u: goto label_22c2b4;
        case 0x22c2b8u: goto label_22c2b8;
        case 0x22c2bcu: goto label_22c2bc;
        case 0x22c2c0u: goto label_22c2c0;
        case 0x22c2c4u: goto label_22c2c4;
        case 0x22c2c8u: goto label_22c2c8;
        case 0x22c2ccu: goto label_22c2cc;
        case 0x22c2d0u: goto label_22c2d0;
        case 0x22c2d4u: goto label_22c2d4;
        case 0x22c2d8u: goto label_22c2d8;
        case 0x22c2dcu: goto label_22c2dc;
        case 0x22c2e0u: goto label_22c2e0;
        case 0x22c2e4u: goto label_22c2e4;
        case 0x22c2e8u: goto label_22c2e8;
        case 0x22c2ecu: goto label_22c2ec;
        case 0x22c2f0u: goto label_22c2f0;
        case 0x22c2f4u: goto label_22c2f4;
        case 0x22c2f8u: goto label_22c2f8;
        case 0x22c2fcu: goto label_22c2fc;
        case 0x22c300u: goto label_22c300;
        case 0x22c304u: goto label_22c304;
        case 0x22c308u: goto label_22c308;
        case 0x22c30cu: goto label_22c30c;
        case 0x22c310u: goto label_22c310;
        case 0x22c314u: goto label_22c314;
        case 0x22c318u: goto label_22c318;
        case 0x22c31cu: goto label_22c31c;
        case 0x22c320u: goto label_22c320;
        case 0x22c324u: goto label_22c324;
        case 0x22c328u: goto label_22c328;
        case 0x22c32cu: goto label_22c32c;
        case 0x22c330u: goto label_22c330;
        case 0x22c334u: goto label_22c334;
        case 0x22c338u: goto label_22c338;
        case 0x22c33cu: goto label_22c33c;
        case 0x22c340u: goto label_22c340;
        case 0x22c344u: goto label_22c344;
        case 0x22c348u: goto label_22c348;
        case 0x22c34cu: goto label_22c34c;
        case 0x22c350u: goto label_22c350;
        case 0x22c354u: goto label_22c354;
        case 0x22c358u: goto label_22c358;
        case 0x22c35cu: goto label_22c35c;
        case 0x22c360u: goto label_22c360;
        case 0x22c364u: goto label_22c364;
        case 0x22c368u: goto label_22c368;
        case 0x22c36cu: goto label_22c36c;
        case 0x22c370u: goto label_22c370;
        case 0x22c374u: goto label_22c374;
        case 0x22c378u: goto label_22c378;
        case 0x22c37cu: goto label_22c37c;
        case 0x22c380u: goto label_22c380;
        case 0x22c384u: goto label_22c384;
        case 0x22c388u: goto label_22c388;
        case 0x22c38cu: goto label_22c38c;
        case 0x22c390u: goto label_22c390;
        case 0x22c394u: goto label_22c394;
        case 0x22c398u: goto label_22c398;
        case 0x22c39cu: goto label_22c39c;
        case 0x22c3a0u: goto label_22c3a0;
        case 0x22c3a4u: goto label_22c3a4;
        case 0x22c3a8u: goto label_22c3a8;
        case 0x22c3acu: goto label_22c3ac;
        case 0x22c3b0u: goto label_22c3b0;
        case 0x22c3b4u: goto label_22c3b4;
        case 0x22c3b8u: goto label_22c3b8;
        case 0x22c3bcu: goto label_22c3bc;
        case 0x22c3c0u: goto label_22c3c0;
        case 0x22c3c4u: goto label_22c3c4;
        case 0x22c3c8u: goto label_22c3c8;
        case 0x22c3ccu: goto label_22c3cc;
        case 0x22c3d0u: goto label_22c3d0;
        case 0x22c3d4u: goto label_22c3d4;
        case 0x22c3d8u: goto label_22c3d8;
        case 0x22c3dcu: goto label_22c3dc;
        case 0x22c3e0u: goto label_22c3e0;
        case 0x22c3e4u: goto label_22c3e4;
        case 0x22c3e8u: goto label_22c3e8;
        case 0x22c3ecu: goto label_22c3ec;
        case 0x22c3f0u: goto label_22c3f0;
        case 0x22c3f4u: goto label_22c3f4;
        case 0x22c3f8u: goto label_22c3f8;
        case 0x22c3fcu: goto label_22c3fc;
        case 0x22c400u: goto label_22c400;
        case 0x22c404u: goto label_22c404;
        case 0x22c408u: goto label_22c408;
        case 0x22c40cu: goto label_22c40c;
        case 0x22c410u: goto label_22c410;
        case 0x22c414u: goto label_22c414;
        case 0x22c418u: goto label_22c418;
        case 0x22c41cu: goto label_22c41c;
        case 0x22c420u: goto label_22c420;
        case 0x22c424u: goto label_22c424;
        case 0x22c428u: goto label_22c428;
        case 0x22c42cu: goto label_22c42c;
        case 0x22c430u: goto label_22c430;
        case 0x22c434u: goto label_22c434;
        case 0x22c438u: goto label_22c438;
        case 0x22c43cu: goto label_22c43c;
        case 0x22c440u: goto label_22c440;
        case 0x22c444u: goto label_22c444;
        case 0x22c448u: goto label_22c448;
        case 0x22c44cu: goto label_22c44c;
        case 0x22c450u: goto label_22c450;
        case 0x22c454u: goto label_22c454;
        case 0x22c458u: goto label_22c458;
        case 0x22c45cu: goto label_22c45c;
        case 0x22c460u: goto label_22c460;
        case 0x22c464u: goto label_22c464;
        case 0x22c468u: goto label_22c468;
        case 0x22c46cu: goto label_22c46c;
        case 0x22c470u: goto label_22c470;
        case 0x22c474u: goto label_22c474;
        case 0x22c478u: goto label_22c478;
        case 0x22c47cu: goto label_22c47c;
        case 0x22c480u: goto label_22c480;
        case 0x22c484u: goto label_22c484;
        case 0x22c488u: goto label_22c488;
        case 0x22c48cu: goto label_22c48c;
        case 0x22c490u: goto label_22c490;
        case 0x22c494u: goto label_22c494;
        case 0x22c498u: goto label_22c498;
        case 0x22c49cu: goto label_22c49c;
        case 0x22c4a0u: goto label_22c4a0;
        case 0x22c4a4u: goto label_22c4a4;
        case 0x22c4a8u: goto label_22c4a8;
        case 0x22c4acu: goto label_22c4ac;
        case 0x22c4b0u: goto label_22c4b0;
        case 0x22c4b4u: goto label_22c4b4;
        case 0x22c4b8u: goto label_22c4b8;
        case 0x22c4bcu: goto label_22c4bc;
        case 0x22c4c0u: goto label_22c4c0;
        case 0x22c4c4u: goto label_22c4c4;
        case 0x22c4c8u: goto label_22c4c8;
        case 0x22c4ccu: goto label_22c4cc;
        case 0x22c4d0u: goto label_22c4d0;
        case 0x22c4d4u: goto label_22c4d4;
        case 0x22c4d8u: goto label_22c4d8;
        case 0x22c4dcu: goto label_22c4dc;
        case 0x22c4e0u: goto label_22c4e0;
        case 0x22c4e4u: goto label_22c4e4;
        case 0x22c4e8u: goto label_22c4e8;
        case 0x22c4ecu: goto label_22c4ec;
        case 0x22c4f0u: goto label_22c4f0;
        case 0x22c4f4u: goto label_22c4f4;
        case 0x22c4f8u: goto label_22c4f8;
        case 0x22c4fcu: goto label_22c4fc;
        case 0x22c500u: goto label_22c500;
        case 0x22c504u: goto label_22c504;
        case 0x22c508u: goto label_22c508;
        case 0x22c50cu: goto label_22c50c;
        case 0x22c510u: goto label_22c510;
        case 0x22c514u: goto label_22c514;
        case 0x22c518u: goto label_22c518;
        case 0x22c51cu: goto label_22c51c;
        case 0x22c520u: goto label_22c520;
        case 0x22c524u: goto label_22c524;
        case 0x22c528u: goto label_22c528;
        case 0x22c52cu: goto label_22c52c;
        case 0x22c530u: goto label_22c530;
        case 0x22c534u: goto label_22c534;
        case 0x22c538u: goto label_22c538;
        case 0x22c53cu: goto label_22c53c;
        case 0x22c540u: goto label_22c540;
        case 0x22c544u: goto label_22c544;
        case 0x22c548u: goto label_22c548;
        case 0x22c54cu: goto label_22c54c;
        case 0x22c550u: goto label_22c550;
        case 0x22c554u: goto label_22c554;
        case 0x22c558u: goto label_22c558;
        case 0x22c55cu: goto label_22c55c;
        case 0x22c560u: goto label_22c560;
        case 0x22c564u: goto label_22c564;
        case 0x22c568u: goto label_22c568;
        case 0x22c56cu: goto label_22c56c;
        case 0x22c570u: goto label_22c570;
        case 0x22c574u: goto label_22c574;
        case 0x22c578u: goto label_22c578;
        case 0x22c57cu: goto label_22c57c;
        case 0x22c580u: goto label_22c580;
        case 0x22c584u: goto label_22c584;
        case 0x22c588u: goto label_22c588;
        case 0x22c58cu: goto label_22c58c;
        case 0x22c590u: goto label_22c590;
        case 0x22c594u: goto label_22c594;
        case 0x22c598u: goto label_22c598;
        case 0x22c59cu: goto label_22c59c;
        case 0x22c5a0u: goto label_22c5a0;
        case 0x22c5a4u: goto label_22c5a4;
        case 0x22c5a8u: goto label_22c5a8;
        case 0x22c5acu: goto label_22c5ac;
        case 0x22c5b0u: goto label_22c5b0;
        case 0x22c5b4u: goto label_22c5b4;
        case 0x22c5b8u: goto label_22c5b8;
        case 0x22c5bcu: goto label_22c5bc;
        case 0x22c5c0u: goto label_22c5c0;
        case 0x22c5c4u: goto label_22c5c4;
        case 0x22c5c8u: goto label_22c5c8;
        case 0x22c5ccu: goto label_22c5cc;
        case 0x22c5d0u: goto label_22c5d0;
        case 0x22c5d4u: goto label_22c5d4;
        case 0x22c5d8u: goto label_22c5d8;
        case 0x22c5dcu: goto label_22c5dc;
        case 0x22c5e0u: goto label_22c5e0;
        case 0x22c5e4u: goto label_22c5e4;
        case 0x22c5e8u: goto label_22c5e8;
        case 0x22c5ecu: goto label_22c5ec;
        case 0x22c5f0u: goto label_22c5f0;
        case 0x22c5f4u: goto label_22c5f4;
        case 0x22c5f8u: goto label_22c5f8;
        case 0x22c5fcu: goto label_22c5fc;
        case 0x22c600u: goto label_22c600;
        case 0x22c604u: goto label_22c604;
        case 0x22c608u: goto label_22c608;
        case 0x22c60cu: goto label_22c60c;
        case 0x22c610u: goto label_22c610;
        case 0x22c614u: goto label_22c614;
        case 0x22c618u: goto label_22c618;
        case 0x22c61cu: goto label_22c61c;
        case 0x22c620u: goto label_22c620;
        case 0x22c624u: goto label_22c624;
        case 0x22c628u: goto label_22c628;
        case 0x22c62cu: goto label_22c62c;
        case 0x22c630u: goto label_22c630;
        case 0x22c634u: goto label_22c634;
        case 0x22c638u: goto label_22c638;
        case 0x22c63cu: goto label_22c63c;
        case 0x22c640u: goto label_22c640;
        case 0x22c644u: goto label_22c644;
        case 0x22c648u: goto label_22c648;
        case 0x22c64cu: goto label_22c64c;
        case 0x22c650u: goto label_22c650;
        case 0x22c654u: goto label_22c654;
        case 0x22c658u: goto label_22c658;
        case 0x22c65cu: goto label_22c65c;
        case 0x22c660u: goto label_22c660;
        case 0x22c664u: goto label_22c664;
        case 0x22c668u: goto label_22c668;
        case 0x22c66cu: goto label_22c66c;
        case 0x22c670u: goto label_22c670;
        case 0x22c674u: goto label_22c674;
        case 0x22c678u: goto label_22c678;
        case 0x22c67cu: goto label_22c67c;
        case 0x22c680u: goto label_22c680;
        case 0x22c684u: goto label_22c684;
        case 0x22c688u: goto label_22c688;
        case 0x22c68cu: goto label_22c68c;
        case 0x22c690u: goto label_22c690;
        case 0x22c694u: goto label_22c694;
        case 0x22c698u: goto label_22c698;
        case 0x22c69cu: goto label_22c69c;
        case 0x22c6a0u: goto label_22c6a0;
        case 0x22c6a4u: goto label_22c6a4;
        case 0x22c6a8u: goto label_22c6a8;
        case 0x22c6acu: goto label_22c6ac;
        case 0x22c6b0u: goto label_22c6b0;
        case 0x22c6b4u: goto label_22c6b4;
        case 0x22c6b8u: goto label_22c6b8;
        case 0x22c6bcu: goto label_22c6bc;
        case 0x22c6c0u: goto label_22c6c0;
        case 0x22c6c4u: goto label_22c6c4;
        case 0x22c6c8u: goto label_22c6c8;
        case 0x22c6ccu: goto label_22c6cc;
        case 0x22c6d0u: goto label_22c6d0;
        case 0x22c6d4u: goto label_22c6d4;
        case 0x22c6d8u: goto label_22c6d8;
        case 0x22c6dcu: goto label_22c6dc;
        case 0x22c6e0u: goto label_22c6e0;
        case 0x22c6e4u: goto label_22c6e4;
        case 0x22c6e8u: goto label_22c6e8;
        case 0x22c6ecu: goto label_22c6ec;
        case 0x22c6f0u: goto label_22c6f0;
        case 0x22c6f4u: goto label_22c6f4;
        case 0x22c6f8u: goto label_22c6f8;
        case 0x22c6fcu: goto label_22c6fc;
        case 0x22c700u: goto label_22c700;
        case 0x22c704u: goto label_22c704;
        case 0x22c708u: goto label_22c708;
        case 0x22c70cu: goto label_22c70c;
        case 0x22c710u: goto label_22c710;
        case 0x22c714u: goto label_22c714;
        case 0x22c718u: goto label_22c718;
        case 0x22c71cu: goto label_22c71c;
        case 0x22c720u: goto label_22c720;
        case 0x22c724u: goto label_22c724;
        case 0x22c728u: goto label_22c728;
        case 0x22c72cu: goto label_22c72c;
        case 0x22c730u: goto label_22c730;
        case 0x22c734u: goto label_22c734;
        case 0x22c738u: goto label_22c738;
        case 0x22c73cu: goto label_22c73c;
        case 0x22c740u: goto label_22c740;
        case 0x22c744u: goto label_22c744;
        case 0x22c748u: goto label_22c748;
        case 0x22c74cu: goto label_22c74c;
        case 0x22c750u: goto label_22c750;
        case 0x22c754u: goto label_22c754;
        case 0x22c758u: goto label_22c758;
        case 0x22c75cu: goto label_22c75c;
        case 0x22c760u: goto label_22c760;
        case 0x22c764u: goto label_22c764;
        case 0x22c768u: goto label_22c768;
        case 0x22c76cu: goto label_22c76c;
        case 0x22c770u: goto label_22c770;
        case 0x22c774u: goto label_22c774;
        case 0x22c778u: goto label_22c778;
        case 0x22c77cu: goto label_22c77c;
        case 0x22c780u: goto label_22c780;
        case 0x22c784u: goto label_22c784;
        case 0x22c788u: goto label_22c788;
        case 0x22c78cu: goto label_22c78c;
        case 0x22c790u: goto label_22c790;
        case 0x22c794u: goto label_22c794;
        case 0x22c798u: goto label_22c798;
        case 0x22c79cu: goto label_22c79c;
        case 0x22c7a0u: goto label_22c7a0;
        case 0x22c7a4u: goto label_22c7a4;
        case 0x22c7a8u: goto label_22c7a8;
        case 0x22c7acu: goto label_22c7ac;
        case 0x22c7b0u: goto label_22c7b0;
        case 0x22c7b4u: goto label_22c7b4;
        case 0x22c7b8u: goto label_22c7b8;
        case 0x22c7bcu: goto label_22c7bc;
        case 0x22c7c0u: goto label_22c7c0;
        case 0x22c7c4u: goto label_22c7c4;
        case 0x22c7c8u: goto label_22c7c8;
        case 0x22c7ccu: goto label_22c7cc;
        case 0x22c7d0u: goto label_22c7d0;
        case 0x22c7d4u: goto label_22c7d4;
        case 0x22c7d8u: goto label_22c7d8;
        case 0x22c7dcu: goto label_22c7dc;
        case 0x22c7e0u: goto label_22c7e0;
        case 0x22c7e4u: goto label_22c7e4;
        case 0x22c7e8u: goto label_22c7e8;
        case 0x22c7ecu: goto label_22c7ec;
        case 0x22c7f0u: goto label_22c7f0;
        case 0x22c7f4u: goto label_22c7f4;
        case 0x22c7f8u: goto label_22c7f8;
        case 0x22c7fcu: goto label_22c7fc;
        case 0x22c800u: goto label_22c800;
        case 0x22c804u: goto label_22c804;
        case 0x22c808u: goto label_22c808;
        case 0x22c80cu: goto label_22c80c;
        case 0x22c810u: goto label_22c810;
        case 0x22c814u: goto label_22c814;
        case 0x22c818u: goto label_22c818;
        case 0x22c81cu: goto label_22c81c;
        case 0x22c820u: goto label_22c820;
        case 0x22c824u: goto label_22c824;
        case 0x22c828u: goto label_22c828;
        case 0x22c82cu: goto label_22c82c;
        case 0x22c830u: goto label_22c830;
        case 0x22c834u: goto label_22c834;
        case 0x22c838u: goto label_22c838;
        case 0x22c83cu: goto label_22c83c;
        case 0x22c840u: goto label_22c840;
        case 0x22c844u: goto label_22c844;
        case 0x22c848u: goto label_22c848;
        case 0x22c84cu: goto label_22c84c;
        case 0x22c850u: goto label_22c850;
        case 0x22c854u: goto label_22c854;
        case 0x22c858u: goto label_22c858;
        case 0x22c85cu: goto label_22c85c;
        case 0x22c860u: goto label_22c860;
        case 0x22c864u: goto label_22c864;
        case 0x22c868u: goto label_22c868;
        case 0x22c86cu: goto label_22c86c;
        case 0x22c870u: goto label_22c870;
        case 0x22c874u: goto label_22c874;
        case 0x22c878u: goto label_22c878;
        case 0x22c87cu: goto label_22c87c;
        case 0x22c880u: goto label_22c880;
        case 0x22c884u: goto label_22c884;
        case 0x22c888u: goto label_22c888;
        case 0x22c88cu: goto label_22c88c;
        case 0x22c890u: goto label_22c890;
        case 0x22c894u: goto label_22c894;
        case 0x22c898u: goto label_22c898;
        case 0x22c89cu: goto label_22c89c;
        case 0x22c8a0u: goto label_22c8a0;
        case 0x22c8a4u: goto label_22c8a4;
        case 0x22c8a8u: goto label_22c8a8;
        case 0x22c8acu: goto label_22c8ac;
        case 0x22c8b0u: goto label_22c8b0;
        case 0x22c8b4u: goto label_22c8b4;
        case 0x22c8b8u: goto label_22c8b8;
        case 0x22c8bcu: goto label_22c8bc;
        case 0x22c8c0u: goto label_22c8c0;
        case 0x22c8c4u: goto label_22c8c4;
        case 0x22c8c8u: goto label_22c8c8;
        case 0x22c8ccu: goto label_22c8cc;
        case 0x22c8d0u: goto label_22c8d0;
        case 0x22c8d4u: goto label_22c8d4;
        case 0x22c8d8u: goto label_22c8d8;
        case 0x22c8dcu: goto label_22c8dc;
        case 0x22c8e0u: goto label_22c8e0;
        case 0x22c8e4u: goto label_22c8e4;
        case 0x22c8e8u: goto label_22c8e8;
        case 0x22c8ecu: goto label_22c8ec;
        case 0x22c8f0u: goto label_22c8f0;
        case 0x22c8f4u: goto label_22c8f4;
        case 0x22c8f8u: goto label_22c8f8;
        case 0x22c8fcu: goto label_22c8fc;
        case 0x22c900u: goto label_22c900;
        case 0x22c904u: goto label_22c904;
        case 0x22c908u: goto label_22c908;
        case 0x22c90cu: goto label_22c90c;
        case 0x22c910u: goto label_22c910;
        case 0x22c914u: goto label_22c914;
        case 0x22c918u: goto label_22c918;
        case 0x22c91cu: goto label_22c91c;
        default: return;
    }

label_22c150:
    // 0x22c150: 0xc0590dc  jal         func_164370
label_22c154:
    if (ctx->pc == 0x22C154u) {
        ctx->pc = 0x22C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C150u;
        // 0x22c154: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C158u;
        goto label_22c158;
    }
    ctx->pc = 0x22C150u;
    SET_GPR_U32(ctx, 31, 0x22C158u);
    ctx->pc = 0x22C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C150u;
    // 0x22c154: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22C150u, 0x22C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C158u;
label_22c158:
    // 0x22c158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22c158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c15c:
    // 0x22c15c: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
label_22c160:
    if (ctx->pc == 0x22C160u) {
        ctx->pc = 0x22C164u;
        goto label_22c164;
    }
    ctx->pc = 0x22C15Cu;
    {
        const bool branch_taken_0x22c15c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c15c) {
            ctx->pc = 0x22C2B0u;
            goto label_22c2b0;
        }
    }
    ctx->pc = 0x22C164u;
label_22c164:
    // 0x22c164: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x22c164u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_22c168:
    // 0x22c168: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x22c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22c16c:
    // 0x22c16c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x22c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22c170:
    // 0x22c170: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x22c170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_22c174:
    // 0x22c174: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x22c174u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22c178:
    // 0x22c178: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c17c:
    // 0x22c17c: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x22c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
label_22c180:
    // 0x22c180: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c184:
    // 0x22c184: 0x0  nop
    ctx->pc = 0x22c184u;
    // NOP
label_22c188:
    // 0x22c188: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c18c:
    // 0x22c18c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22c190:
    // 0x22c190: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22c190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c194:
    // 0x22c194: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x22c194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_22c198:
    // 0x22c198: 0x86830004  lh          $v1, 0x4($s4)
    ctx->pc = 0x22c198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_22c19c:
    // 0x22c19c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c19cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c1a0:
    // 0x22c1a0: 0x0  nop
    ctx->pc = 0x22c1a0u;
    // NOP
label_22c1a4:
    // 0x22c1a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c1a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c1a8:
    // 0x22c1a8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x22c1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_22c1ac:
    // 0x22c1ac: 0x86830006  lh          $v1, 0x6($s4)
    ctx->pc = 0x22c1acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_22c1b0:
    // 0x22c1b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c1b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c1b4:
    // 0x22c1b4: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x22c1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_22c1b8:
    // 0x22c1b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c1bc:
    // 0x22c1bc: 0xc066d7a  jal         func_19B5E8
label_22c1c0:
    if (ctx->pc == 0x22C1C0u) {
        ctx->pc = 0x22C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1BCu;
        // 0x22c1c0: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C1C4u;
        goto label_22c1c4;
    }
    ctx->pc = 0x22C1BCu;
    SET_GPR_U32(ctx, 31, 0x22C1C4u);
    ctx->pc = 0x22C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C1BCu;
    // 0x22c1c0: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x22C1BCu, 0x22C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C1C4u;
label_22c1c4:
    // 0x22c1c4: 0x86830008  lh          $v1, 0x8($s4)
    ctx->pc = 0x22c1c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_22c1c8:
    // 0x22c1c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22c1cc:
    // 0x22c1cc: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x22c1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_22c1d0:
    // 0x22c1d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c1d4:
    // 0x22c1d4: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x22c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
label_22c1d8:
    // 0x22c1d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22c1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c1dc:
    // 0x22c1dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c1e0:
    // 0x22c1e0: 0x0  nop
    ctx->pc = 0x22c1e0u;
    // NOP
label_22c1e4:
    // 0x22c1e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c1e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c1e8:
    // 0x22c1e8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x22c1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_22c1ec:
    // 0x22c1ec: 0x8683000a  lh          $v1, 0xA($s4)
    ctx->pc = 0x22c1ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_22c1f0:
    // 0x22c1f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c1f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c1f4:
    // 0x22c1f4: 0x0  nop
    ctx->pc = 0x22c1f4u;
    // NOP
label_22c1f8:
    // 0x22c1f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c1f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c1fc:
    // 0x22c1fc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22c1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_22c200:
    // 0x22c200: 0x8683000c  lh          $v1, 0xC($s4)
    ctx->pc = 0x22c200u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_22c204:
    // 0x22c204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c208:
    // 0x22c208: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x22c208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_22c20c:
    // 0x22c20c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c210:
    // 0x22c210: 0xc066d7a  jal         func_19B5E8
label_22c214:
    if (ctx->pc == 0x22C214u) {
        ctx->pc = 0x22C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C210u;
        // 0x22c214: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C218u;
        goto label_22c218;
    }
    ctx->pc = 0x22C210u;
    SET_GPR_U32(ctx, 31, 0x22C218u);
    ctx->pc = 0x22C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C210u;
    // 0x22c214: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x22C210u, 0x22C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C218u;
label_22c218:
    // 0x22c218: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22c218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22c21c:
    // 0x22c21c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x22c21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22c220:
    // 0x22c220: 0xc066e08  jal         func_19B820
label_22c224:
    if (ctx->pc == 0x22C224u) {
        ctx->pc = 0x22C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C220u;
        // 0x22c224: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C228u;
        goto label_22c228;
    }
    ctx->pc = 0x22C220u;
    SET_GPR_U32(ctx, 31, 0x22C228u);
    ctx->pc = 0x22C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C220u;
    // 0x22c224: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x22C220u, 0x22C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C228u;
label_22c228:
    // 0x22c228: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22c228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22c22c:
    // 0x22c22c: 0xc066daa  jal         func_19B6A8
label_22c230:
    if (ctx->pc == 0x22C230u) {
        ctx->pc = 0x22C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C22Cu;
        // 0x22c230: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C234u;
        goto label_22c234;
    }
    ctx->pc = 0x22C22Cu;
    SET_GPR_U32(ctx, 31, 0x22C234u);
    ctx->pc = 0x22C230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C22Cu;
    // 0x22c230: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x22C22Cu, 0x22C234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C234u;
label_22c234:
    // 0x22c234: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22c234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_22c238:
    // 0x22c238: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22c238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22c23c:
    // 0x22c23c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22c23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c240:
    // 0x22c240: 0xc066e14  jal         func_19B850
label_22c244:
    if (ctx->pc == 0x22C244u) {
        ctx->pc = 0x22C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C240u;
        // 0x22c244: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C248u;
        goto label_22c248;
    }
    ctx->pc = 0x22C240u;
    SET_GPR_U32(ctx, 31, 0x22C248u);
    ctx->pc = 0x22C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C240u;
    // 0x22c244: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x22C240u, 0x22C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C248u;
label_22c248:
    // 0x22c248: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x22c248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_22c24c:
    // 0x22c24c: 0xc066e26  jal         func_19B898
label_22c250:
    if (ctx->pc == 0x22C250u) {
        ctx->pc = 0x22C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C24Cu;
        // 0x22c250: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C254u;
        goto label_22c254;
    }
    ctx->pc = 0x22C24Cu;
    SET_GPR_U32(ctx, 31, 0x22C254u);
    ctx->pc = 0x22C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C24Cu;
    // 0x22c250: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22C24Cu, 0x22C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C254u;
label_22c254:
    // 0x22c254: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x22c254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_22c258:
    // 0x22c258: 0xc066e26  jal         func_19B898
label_22c25c:
    if (ctx->pc == 0x22C25Cu) {
        ctx->pc = 0x22C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C258u;
        // 0x22c25c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C260u;
        goto label_22c260;
    }
    ctx->pc = 0x22C258u;
    SET_GPR_U32(ctx, 31, 0x22C260u);
    ctx->pc = 0x22C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C258u;
    // 0x22c25c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22C258u, 0x22C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C260u;
label_22c260:
    // 0x22c260: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x22c260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_22c264:
    // 0x22c264: 0xc066e26  jal         func_19B898
label_22c268:
    if (ctx->pc == 0x22C268u) {
        ctx->pc = 0x22C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C264u;
        // 0x22c268: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C26Cu;
        goto label_22c26c;
    }
    ctx->pc = 0x22C264u;
    SET_GPR_U32(ctx, 31, 0x22C26Cu);
    ctx->pc = 0x22C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C264u;
    // 0x22c268: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22C264u, 0x22C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C26Cu;
label_22c26c:
    // 0x22c26c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x22c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_22c270:
    // 0x22c270: 0xc066e26  jal         func_19B898
label_22c274:
    if (ctx->pc == 0x22C274u) {
        ctx->pc = 0x22C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C270u;
        // 0x22c274: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C278u;
        goto label_22c278;
    }
    ctx->pc = 0x22C270u;
    SET_GPR_U32(ctx, 31, 0x22C278u);
    ctx->pc = 0x22C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C270u;
    // 0x22c274: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22C270u, 0x22C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C278u;
label_22c278:
    // 0x22c278: 0xae13005c  sw          $s3, 0x5C($s0)
    ctx->pc = 0x22c278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 19));
label_22c27c:
    // 0x22c27c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c280:
    // 0x22c280: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x22c280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
label_22c284:
    // 0x22c284: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x22c284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_22c288:
    // 0x22c288: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x22c288u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_22c28c:
    // 0x22c28c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22c28cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22c290:
    // 0x22c290: 0x2484c2d0  addiu       $a0, $a0, -0x3D30
    ctx->pc = 0x22c290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951632));
label_22c294:
    // 0x22c294: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x22c294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_22c298:
    // 0x22c298: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x22c298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_22c29c:
    // 0x22c29c: 0xa6050016  sh          $a1, 0x16($s0)
    ctx->pc = 0x22c29cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 5));
label_22c2a0:
    // 0x22c2a0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x22c2a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_22c2a4:
    // 0x22c2a4: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x22c2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_22c2a8:
    // 0x22c2a8: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
label_22c2ac:
    if (ctx->pc == 0x22C2ACu) {
        ctx->pc = 0x22C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2A8u;
        // 0x22c2ac: 0xae04001c  sw          $a0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2B0u;
        goto label_22c2b0;
    }
    ctx->pc = 0x22C2A8u;
    {
        const bool branch_taken_0x22c2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2A8u;
        // 0x22c2ac: 0xae04001c  sw          $a0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2a8) {
            ctx->pc = 0x22C150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c150;
        }
    }
    ctx->pc = 0x22C2B0u;
label_22c2b0:
    // 0x22c2b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22c2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22c2b4:
    // 0x22c2b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22c2b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22c2b8:
    // 0x22c2b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22c2b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22c2bc:
    // 0x22c2bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c2c0:
    // 0x22c2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c2c4:
    // 0x22c2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22c2c8:
    // 0x22c2c8: 0x3e00008  jr          $ra
label_22c2cc:
    if (ctx->pc == 0x22C2CCu) {
        ctx->pc = 0x22C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2C8u;
        // 0x22c2cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C2D0u;
        goto label_22c2d0;
    }
    ctx->pc = 0x22C2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2C8u;
        // 0x22c2cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C2D0u;
label_22c2d0:
    // 0x22c2d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22c2d4:
    // 0x22c2d4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22c2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22c2d8:
    // 0x22c2d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22c2dc:
    // 0x22c2dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22c2e0:
    // 0x22c2e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22c2e4:
    // 0x22c2e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22c2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22c2e8:
    // 0x22c2e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22c2e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c2ec:
    // 0x22c2ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22c2f0:
    // 0x22c2f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22c2f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22c2f4:
    // 0x22c2f4: 0x9024a3ea  lbu         $a0, -0x5C16($at)
    ctx->pc = 0x22c2f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22c2f8:
    // 0x22c2f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_22c2fc:
    if (ctx->pc == 0x22C2FCu) {
        ctx->pc = 0x22C300u;
        goto label_22c300;
    }
    ctx->pc = 0x22C2F8u;
    {
        const bool branch_taken_0x22c2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22c2f8) {
            ctx->pc = 0x22C308u;
            goto label_22c308;
        }
    }
    ctx->pc = 0x22C300u;
label_22c300:
    // 0x22c300: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_22c304:
    if (ctx->pc == 0x22C304u) {
        ctx->pc = 0x22C308u;
        goto label_22c308;
    }
    ctx->pc = 0x22C300u;
    {
        const bool branch_taken_0x22c300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c300) {
            ctx->pc = 0x22C318u;
            goto label_22c318;
        }
    }
    ctx->pc = 0x22C308u;
label_22c308:
    // 0x22c308: 0xc0591f4  jal         func_1647D0
label_22c30c:
    if (ctx->pc == 0x22C30Cu) {
        ctx->pc = 0x22C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C308u;
        // 0x22c30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C310u;
        goto label_22c310;
    }
    ctx->pc = 0x22C308u;
    SET_GPR_U32(ctx, 31, 0x22C310u);
    ctx->pc = 0x22C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C308u;
    // 0x22c30c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22C308u, 0x22C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C310u;
label_22c310:
    // 0x22c310: 0x1000007b  b           . + 4 + (0x7B << 2)
label_22c314:
    if (ctx->pc == 0x22C314u) {
        ctx->pc = 0x22C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C310u;
        // 0x22c314: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C318u;
        goto label_22c318;
    }
    ctx->pc = 0x22C310u;
    {
        const bool branch_taken_0x22c310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C310u;
        // 0x22c314: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c310) {
            ctx->pc = 0x22C500u;
            goto label_22c500;
        }
    }
    ctx->pc = 0x22C318u;
label_22c318:
    // 0x22c318: 0x96440012  lhu         $a0, 0x12($s2)
    ctx->pc = 0x22c318u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_22c31c:
    // 0x22c31c: 0x8e51005c  lw          $s1, 0x5C($s2)
    ctx->pc = 0x22c31cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_22c320:
    // 0x22c320: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x22c320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22c324:
    // 0x22c324: 0xa6430012  sh          $v1, 0x12($s2)
    ctx->pc = 0x22c324u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 3));
label_22c328:
    // 0x22c328: 0x96430016  lhu         $v1, 0x16($s2)
    ctx->pc = 0x22c328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_22c32c:
    // 0x22c32c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x22c32cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22c330:
    // 0x22c330: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
label_22c334:
    if (ctx->pc == 0x22C334u) {
        ctx->pc = 0x22C338u;
        goto label_22c338;
    }
    ctx->pc = 0x22C330u;
    {
        const bool branch_taken_0x22c330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c330) {
            ctx->pc = 0x22C4FCu;
            goto label_22c4fc;
        }
    }
    ctx->pc = 0x22C338u;
label_22c338:
    // 0x22c338: 0x96420014  lhu         $v0, 0x14($s2)
    ctx->pc = 0x22c338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_22c33c:
    // 0x22c33c: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_22c340:
    if (ctx->pc == 0x22C340u) {
        ctx->pc = 0x22C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C33Cu;
        // 0x22c340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C344u;
        goto label_22c344;
    }
    ctx->pc = 0x22C33Cu;
    {
        const bool branch_taken_0x22c33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C33Cu;
        // 0x22c340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c33c) {
            ctx->pc = 0x22C4F4u;
            goto label_22c4f4;
        }
    }
    ctx->pc = 0x22C344u;
label_22c344:
    // 0x22c344: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x22c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22c348:
    // 0x22c348: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22c348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22c34c:
    // 0x22c34c: 0xc066e02  jal         func_19B808
label_22c350:
    if (ctx->pc == 0x22C350u) {
        ctx->pc = 0x22C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C34Cu;
        // 0x22c350: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C354u;
        goto label_22c354;
    }
    ctx->pc = 0x22C34Cu;
    SET_GPR_U32(ctx, 31, 0x22C354u);
    ctx->pc = 0x22C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C34Cu;
    // 0x22c350: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22C34Cu, 0x22C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C354u;
label_22c354:
    // 0x22c354: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x22c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_22c358:
    // 0x22c358: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22c358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22c35c:
    // 0x22c35c: 0xc066e02  jal         func_19B808
label_22c360:
    if (ctx->pc == 0x22C360u) {
        ctx->pc = 0x22C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C35Cu;
        // 0x22c360: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C364u;
        goto label_22c364;
    }
    ctx->pc = 0x22C35Cu;
    SET_GPR_U32(ctx, 31, 0x22C364u);
    ctx->pc = 0x22C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C35Cu;
    // 0x22c360: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22C35Cu, 0x22C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C364u;
label_22c364:
    // 0x22c364: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x22c364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_22c368:
    // 0x22c368: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22c368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22c36c:
    // 0x22c36c: 0xc066e02  jal         func_19B808
label_22c370:
    if (ctx->pc == 0x22C370u) {
        ctx->pc = 0x22C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C36Cu;
        // 0x22c370: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C374u;
        goto label_22c374;
    }
    ctx->pc = 0x22C36Cu;
    SET_GPR_U32(ctx, 31, 0x22C374u);
    ctx->pc = 0x22C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C36Cu;
    // 0x22c370: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22C36Cu, 0x22C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C374u;
label_22c374:
    // 0x22c374: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x22c374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c378:
    // 0x22c378: 0x3c023f09  lui         $v0, 0x3F09
    ctx->pc = 0x22c378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16137 << 16));
label_22c37c:
    // 0x22c37c: 0x34421870  ori         $v0, $v0, 0x1870
    ctx->pc = 0x22c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6256);
label_22c380:
    // 0x22c380: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x22c380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_22c384:
    // 0x22c384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c388:
    // 0x22c388: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x22c388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22c38c:
    // 0x22c38c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22c38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22c390:
    // 0x22c390: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x22c390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_22c394:
    // 0x22c394: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22c394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22c398:
    // 0x22c398: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x22c398u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_22c39c:
    // 0x22c39c: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22c39cu;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22c3a0:
    // 0x22c3a0: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22c3a0u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22c3a4:
    // 0x22c3a4: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x22c3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22c3a8:
    // 0x22c3a8: 0xfa310010  sqc2        $vf17, 0x10($s1)
    ctx->pc = 0x22c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22c3ac:
    // 0x22c3ac: 0xfa320020  sqc2        $vf18, 0x20($s1)
    ctx->pc = 0x22c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22c3b0:
    // 0x22c3b0: 0xfa330030  sqc2        $vf19, 0x30($s1)
    ctx->pc = 0x22c3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22c3b4:
    // 0x22c3b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22c3b8:
    // 0x22c3b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c3bc:
    // 0x22c3bc: 0xc05f3d0  jal         func_17CF40
label_22c3c0:
    if (ctx->pc == 0x22C3C0u) {
        ctx->pc = 0x22C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3BCu;
        // 0x22c3c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3C4u;
        goto label_22c3c4;
    }
    ctx->pc = 0x22C3BCu;
    SET_GPR_U32(ctx, 31, 0x22C3C4u);
    ctx->pc = 0x22C3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C3BCu;
    // 0x22c3c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x22C3BCu, 0x22C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C3C4u;
label_22c3c4:
    // 0x22c3c4: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x22c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c3c8:
    // 0x22c3c8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x22c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_22c3cc:
    // 0x22c3cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22c3ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_22c3d0:
    // 0x22c3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c3d4:
    // 0x22c3d4: 0x0  nop
    ctx->pc = 0x22c3d4u;
    // NOP
label_22c3d8:
    // 0x22c3d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22c3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22c3dc:
    // 0x22c3dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22c3dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c3e0:
    // 0x22c3e0: 0x0  nop
    ctx->pc = 0x22c3e0u;
    // NOP
label_22c3e4:
    // 0x22c3e4: 0x45000042  bc1f        . + 4 + (0x42 << 2)
label_22c3e8:
    if (ctx->pc == 0x22C3E8u) {
        ctx->pc = 0x22C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3E4u;
        // 0x22c3e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3ECu;
        goto label_22c3ec;
    }
    ctx->pc = 0x22C3E4u;
    {
        const bool branch_taken_0x22c3e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3E4u;
        // 0x22c3e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3e4) {
            ctx->pc = 0x22C4F0u;
            goto label_22c4f0;
        }
    }
    ctx->pc = 0x22C3ECu;
label_22c3ec:
    // 0x22c3ec: 0x1000003b  b           . + 4 + (0x3B << 2)
label_22c3f0:
    if (ctx->pc == 0x22C3F0u) {
        ctx->pc = 0x22C3F4u;
        goto label_22c3f4;
    }
    ctx->pc = 0x22C3ECu;
    {
        const bool branch_taken_0x22c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c3ec) {
            ctx->pc = 0x22C4DCu;
            goto label_22c4dc;
        }
    }
    ctx->pc = 0x22C3F4u;
label_22c3f4:
    // 0x22c3f4: 0xc08f0cc  jal         func_23C330
label_22c3f8:
    if (ctx->pc == 0x22C3F8u) {
        ctx->pc = 0x22C3FCu;
        goto label_22c3fc;
    }
    ctx->pc = 0x22C3F4u;
    SET_GPR_U32(ctx, 31, 0x22C3FCu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22C3FCu;
label_22c3fc:
    // 0x22c3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c400:
    // 0x22c400: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22c400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22c404:
    // 0x22c404: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22c404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22c408:
    // 0x22c408: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x22c408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_22c40c:
    // 0x22c40c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c410:
    // 0x22c410: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x22c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c414:
    // 0x22c414: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x22c414u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22c418:
    // 0x22c418: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x22c418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_22c41c:
    // 0x22c41c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22c41cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22c420:
    // 0x22c420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c424:
    // 0x22c424: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x22c424u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_22c428:
    // 0x22c428: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22c428u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22c42c:
    // 0x22c42c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22c42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22c430:
    // 0x22c430: 0xc08f0cc  jal         func_23C330
label_22c434:
    if (ctx->pc == 0x22C434u) {
        ctx->pc = 0x22C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C430u;
        // 0x22c434: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C438u;
        goto label_22c438;
    }
    ctx->pc = 0x22C430u;
    SET_GPR_U32(ctx, 31, 0x22C438u);
    ctx->pc = 0x22C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C430u;
    // 0x22c434: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22C438u;
label_22c438:
    // 0x22c438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c43c:
    // 0x22c43c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22c440:
    // 0x22c440: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22c440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22c444:
    // 0x22c444: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x22c444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_22c448:
    // 0x22c448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c44c:
    // 0x22c44c: 0x0  nop
    ctx->pc = 0x22c44cu;
    // NOP
label_22c450:
    // 0x22c450: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x22c450u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22c454:
    // 0x22c454: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x22c454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_22c458:
    // 0x22c458: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x22c458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_22c45c:
    // 0x22c45c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22c45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c460:
    // 0x22c460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c464:
    // 0x22c464: 0x0  nop
    ctx->pc = 0x22c464u;
    // NOP
label_22c468:
    // 0x22c468: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22c468u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22c46c:
    // 0x22c46c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22c46cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22c470:
    // 0x22c470: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x22c470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_22c474:
    // 0x22c474: 0xc08f0cc  jal         func_23C330
label_22c478:
    if (ctx->pc == 0x22C478u) {
        ctx->pc = 0x22C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C474u;
        // 0x22c478: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C47Cu;
        goto label_22c47c;
    }
    ctx->pc = 0x22C474u;
    SET_GPR_U32(ctx, 31, 0x22C47Cu);
    ctx->pc = 0x22C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C474u;
    // 0x22c478: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22C47Cu;
label_22c47c:
    // 0x22c47c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c480:
    // 0x22c480: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x22c480u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
label_22c484:
    // 0x22c484: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x22c484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
label_22c488:
    // 0x22c488: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22c48c:
    // 0x22c48c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22c48cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22c490:
    // 0x22c490: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x22c490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_22c494:
    // 0x22c494: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22c494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c498:
    // 0x22c498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c49c:
    // 0x22c49c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22c49cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c4a0:
    // 0x22c4a0: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x22c4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_22c4a4:
    // 0x22c4a4: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x22c4a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_22c4a8:
    // 0x22c4a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c4ac:
    // 0x22c4ac: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x22c4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22c4b0:
    // 0x22c4b0: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x22c4b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22c4b4:
    // 0x22c4b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c4b8:
    // 0x22c4b8: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x22c4b8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22c4bc:
    // 0x22c4bc: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x22c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_22c4c0:
    // 0x22c4c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22c4c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c4c4:
    // 0x22c4c4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x22c4c4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_22c4c8:
    // 0x22c4c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22c4c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22c4cc:
    // 0x22c4cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22c4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22c4d0:
    // 0x22c4d0: 0xc04bc90  jal         func_12F240
label_22c4d4:
    if (ctx->pc == 0x22C4D4u) {
        ctx->pc = 0x22C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4D0u;
        // 0x22c4d4: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C4D8u;
        goto label_22c4d8;
    }
    ctx->pc = 0x22C4D0u;
    SET_GPR_U32(ctx, 31, 0x22C4D8u);
    ctx->pc = 0x22C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C4D0u;
    // 0x22c4d4: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F240u, 0x22C4D0u, 0x22C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4D8u;
label_22c4d8:
    // 0x22c4d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22c4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22c4dc:
    // 0x22c4dc: 0x0  nop
    ctx->pc = 0x22c4dcu;
    // NOP
label_22c4e0:
    // 0x22c4e0: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x22c4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_22c4e4:
    // 0x22c4e4: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_22c4e8:
    if (ctx->pc == 0x22C4E8u) {
        ctx->pc = 0x22C4ECu;
        goto label_22c4ec;
    }
    ctx->pc = 0x22C4E4u;
    {
        const bool branch_taken_0x22c4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c4e4) {
            ctx->pc = 0x22C3F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c3f4;
        }
    }
    ctx->pc = 0x22C4ECu;
label_22c4ec:
    // 0x22c4ec: 0xa6400014  sh          $zero, 0x14($s2)
    ctx->pc = 0x22c4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 0));
label_22c4f0:
    // 0x22c4f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c4f4:
    // 0x22c4f4: 0xc05ff64  jal         func_17FD90
label_22c4f8:
    if (ctx->pc == 0x22C4F8u) {
        ctx->pc = 0x22C4FCu;
        goto label_22c4fc;
    }
    ctx->pc = 0x22C4F4u;
    SET_GPR_U32(ctx, 31, 0x22C4FCu);
    ctx->pc = 0x17FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FD90u, 0x22C4F4u, 0x22C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4FCu;
label_22c4fc:
    // 0x22c4fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22c4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22c500:
    // 0x22c500: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22c504:
    // 0x22c504: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22c504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22c508:
    // 0x22c508: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22c508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c50c:
    // 0x22c50c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22c50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c510:
    // 0x22c510: 0x3e00008  jr          $ra
label_22c514:
    if (ctx->pc == 0x22C514u) {
        ctx->pc = 0x22C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C510u;
        // 0x22c514: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C518u;
        goto label_22c518;
    }
    ctx->pc = 0x22C510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C510u;
        // 0x22c514: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C518u;
label_22c518:
    // 0x22c518: 0x0  nop
    ctx->pc = 0x22c518u;
    // NOP
label_22c51c:
    // 0x22c51c: 0x0  nop
    ctx->pc = 0x22c51cu;
    // NOP
label_22c520:
    // 0x22c520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_22c524:
    // 0x22c524: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22c528:
    // 0x22c528: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22c52c:
    // 0x22c52c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22c530:
    // 0x22c530: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22c530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22c534:
    // 0x22c534: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22c534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c538:
    // 0x22c538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22c53c:
    // 0x22c53c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22c53cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22c540:
    // 0x22c540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c544:
    // 0x22c544: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x22c544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_22c548:
    // 0x22c548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22c54c:
    // 0x22c54c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22c54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22c550:
    // 0x22c550: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x22c550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22c554:
    // 0x22c554: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22c554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c558:
    // 0x22c558: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x22c558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_22c55c:
    // 0x22c55c: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
label_22c560:
    if (ctx->pc == 0x22C560u) {
        ctx->pc = 0x22C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C55Cu;
        // 0x22c560: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C564u;
        goto label_22c564;
    }
    ctx->pc = 0x22C55Cu;
    {
        const bool branch_taken_0x22c55c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C55Cu;
        // 0x22c560: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c55c) {
            ctx->pc = 0x22C6ECu;
            goto label_22c6ec;
        }
    }
    ctx->pc = 0x22C564u;
label_22c564:
    // 0x22c564: 0xc0590dc  jal         func_164370
label_22c568:
    if (ctx->pc == 0x22C568u) {
        ctx->pc = 0x22C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C564u;
        // 0x22c568: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C56Cu;
        goto label_22c56c;
    }
    ctx->pc = 0x22C564u;
    SET_GPR_U32(ctx, 31, 0x22C56Cu);
    ctx->pc = 0x22C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C564u;
    // 0x22c568: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22C564u, 0x22C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C56Cu;
label_22c56c:
    // 0x22c56c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22c56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c570:
    // 0x22c570: 0x1200005e  beqz        $s0, . + 4 + (0x5E << 2)
label_22c574:
    if (ctx->pc == 0x22C574u) {
        ctx->pc = 0x22C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C570u;
        // 0x22c574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C578u;
        goto label_22c578;
    }
    ctx->pc = 0x22C570u;
    {
        const bool branch_taken_0x22c570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C570u;
        // 0x22c574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c570) {
            ctx->pc = 0x22C6ECu;
            goto label_22c6ec;
        }
    }
    ctx->pc = 0x22C578u;
label_22c578:
    // 0x22c578: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x22c578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22c57c:
    // 0x22c57c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x22c57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22c580:
    // 0x22c580: 0xc08b1c8  jal         func_22C720
label_22c584:
    if (ctx->pc == 0x22C584u) {
        ctx->pc = 0x22C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C580u;
        // 0x22c584: 0xa6140014  sh          $s4, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C588u;
        goto label_22c588;
    }
    ctx->pc = 0x22C580u;
    SET_GPR_U32(ctx, 31, 0x22C588u);
    ctx->pc = 0x22C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C580u;
    // 0x22c584: 0xa6140014  sh          $s4, 0x14($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C720u;
    goto label_22c720;
    ctx->pc = 0x22C588u;
label_22c588:
    // 0x22c588: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x22c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_22c58c:
    // 0x22c58c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22c590:
    if (ctx->pc == 0x22C590u) {
        ctx->pc = 0x22C594u;
        goto label_22c594;
    }
    ctx->pc = 0x22C58Cu;
    {
        const bool branch_taken_0x22c58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c58c) {
            ctx->pc = 0x22C5A0u;
            goto label_22c5a0;
        }
    }
    ctx->pc = 0x22C594u;
label_22c594:
    // 0x22c594: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_22c598:
    // 0x22c598: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_22c59c:
    if (ctx->pc == 0x22C59Cu) {
        ctx->pc = 0x22C5A0u;
        goto label_22c5a0;
    }
    ctx->pc = 0x22C598u;
    {
        const bool branch_taken_0x22c598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c598) {
            ctx->pc = 0x22C5B0u;
            goto label_22c5b0;
        }
    }
    ctx->pc = 0x22C5A0u;
label_22c5a0:
    // 0x22c5a0: 0xc0591f4  jal         func_1647D0
label_22c5a4:
    if (ctx->pc == 0x22C5A4u) {
        ctx->pc = 0x22C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5A0u;
        // 0x22c5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C5A8u;
        goto label_22c5a8;
    }
    ctx->pc = 0x22C5A0u;
    SET_GPR_U32(ctx, 31, 0x22C5A8u);
    ctx->pc = 0x22C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5A0u;
    // 0x22c5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22C5A0u, 0x22C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5A8u;
label_22c5a8:
    // 0x22c5a8: 0x10000050  b           . + 4 + (0x50 << 2)
label_22c5ac:
    if (ctx->pc == 0x22C5ACu) {
        ctx->pc = 0x22C5B0u;
        goto label_22c5b0;
    }
    ctx->pc = 0x22C5A8u;
    {
        const bool branch_taken_0x22c5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c5a8) {
            ctx->pc = 0x22C6ECu;
            goto label_22c6ec;
        }
    }
    ctx->pc = 0x22C5B0u;
label_22c5b0:
    // 0x22c5b0: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x22c5b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_22c5b4:
    // 0x22c5b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x22c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22c5b8:
    // 0x22c5b8: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x22c5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_22c5bc:
    // 0x22c5bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c5c0:
    // 0x22c5c0: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x22c5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
label_22c5c4:
    // 0x22c5c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22c5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c5c8:
    // 0x22c5c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c5c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c5cc:
    // 0x22c5cc: 0x0  nop
    ctx->pc = 0x22c5ccu;
    // NOP
label_22c5d0:
    // 0x22c5d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c5d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c5d4:
    // 0x22c5d4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x22c5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_22c5d8:
    // 0x22c5d8: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x22c5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_22c5dc:
    // 0x22c5dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c5dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c5e0:
    // 0x22c5e0: 0x0  nop
    ctx->pc = 0x22c5e0u;
    // NOP
label_22c5e4:
    // 0x22c5e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c5e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c5e8:
    // 0x22c5e8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x22c5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_22c5ec:
    // 0x22c5ec: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x22c5ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_22c5f0:
    // 0x22c5f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c5f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c5f4:
    // 0x22c5f4: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x22c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_22c5f8:
    // 0x22c5f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c5f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c5fc:
    // 0x22c5fc: 0xc066d7a  jal         func_19B5E8
label_22c600:
    if (ctx->pc == 0x22C600u) {
        ctx->pc = 0x22C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5FCu;
        // 0x22c600: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C604u;
        goto label_22c604;
    }
    ctx->pc = 0x22C5FCu;
    SET_GPR_U32(ctx, 31, 0x22C604u);
    ctx->pc = 0x22C600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5FCu;
    // 0x22c600: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x22C5FCu, 0x22C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C604u;
label_22c604:
    // 0x22c604: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x22c604u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_22c608:
    // 0x22c608: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22c608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_22c60c:
    // 0x22c60c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x22c60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_22c610:
    // 0x22c610: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22c610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22c614:
    // 0x22c614: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x22c614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
label_22c618:
    // 0x22c618: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22c618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c61c:
    // 0x22c61c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c620:
    // 0x22c620: 0x0  nop
    ctx->pc = 0x22c620u;
    // NOP
label_22c624:
    // 0x22c624: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c628:
    // 0x22c628: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x22c628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_22c62c:
    // 0x22c62c: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x22c62cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_22c630:
    // 0x22c630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c634:
    // 0x22c634: 0x0  nop
    ctx->pc = 0x22c634u;
    // NOP
label_22c638:
    // 0x22c638: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c63c:
    // 0x22c63c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22c63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_22c640:
    // 0x22c640: 0x8643000c  lh          $v1, 0xC($s2)
    ctx->pc = 0x22c640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_22c644:
    // 0x22c644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c648:
    // 0x22c648: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x22c648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_22c64c:
    // 0x22c64c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22c650:
    // 0x22c650: 0xc066d7a  jal         func_19B5E8
label_22c654:
    if (ctx->pc == 0x22C654u) {
        ctx->pc = 0x22C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C650u;
        // 0x22c654: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C658u;
        goto label_22c658;
    }
    ctx->pc = 0x22C650u;
    SET_GPR_U32(ctx, 31, 0x22C658u);
    ctx->pc = 0x22C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C650u;
    // 0x22c654: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x22C650u, 0x22C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C658u;
label_22c658:
    // 0x22c658: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22c658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_22c65c:
    // 0x22c65c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x22c65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22c660:
    // 0x22c660: 0xc066e08  jal         func_19B820
label_22c664:
    if (ctx->pc == 0x22C664u) {
        ctx->pc = 0x22C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C660u;
        // 0x22c664: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C668u;
        goto label_22c668;
    }
    ctx->pc = 0x22C660u;
    SET_GPR_U32(ctx, 31, 0x22C668u);
    ctx->pc = 0x22C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C660u;
    // 0x22c664: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x22C660u, 0x22C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C668u;
label_22c668:
    // 0x22c668: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_22c66c:
    // 0x22c66c: 0xc066daa  jal         func_19B6A8
label_22c670:
    if (ctx->pc == 0x22C670u) {
        ctx->pc = 0x22C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C66Cu;
        // 0x22c670: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C674u;
        goto label_22c674;
    }
    ctx->pc = 0x22C66Cu;
    SET_GPR_U32(ctx, 31, 0x22C674u);
    ctx->pc = 0x22C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C66Cu;
    // 0x22c670: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x22C66Cu, 0x22C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C674u;
label_22c674:
    // 0x22c674: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22c674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_22c678:
    // 0x22c678: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22c678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_22c67c:
    // 0x22c67c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22c67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c680:
    // 0x22c680: 0xc066e14  jal         func_19B850
label_22c684:
    if (ctx->pc == 0x22C684u) {
        ctx->pc = 0x22C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C680u;
        // 0x22c684: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C688u;
        goto label_22c688;
    }
    ctx->pc = 0x22C680u;
    SET_GPR_U32(ctx, 31, 0x22C688u);
    ctx->pc = 0x22C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C680u;
    // 0x22c684: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x22C680u, 0x22C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C688u;
label_22c688:
    // 0x22c688: 0x8e15005c  lw          $s5, 0x5C($s0)
    ctx->pc = 0x22c688u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_22c68c:
    // 0x22c68c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22c690:
    // 0x22c690: 0xc066e26  jal         func_19B898
label_22c694:
    if (ctx->pc == 0x22C694u) {
        ctx->pc = 0x22C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C690u;
        // 0x22c694: 0x26a40040  addiu       $a0, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C698u;
        goto label_22c698;
    }
    ctx->pc = 0x22C690u;
    SET_GPR_U32(ctx, 31, 0x22C698u);
    ctx->pc = 0x22C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C690u;
    // 0x22c694: 0x26a40040  addiu       $a0, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22C690u, 0x22C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C698u;
label_22c698:
    // 0x22c698: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x22c698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_22c69c:
    // 0x22c69c: 0xc066e26  jal         func_19B898
label_22c6a0:
    if (ctx->pc == 0x22C6A0u) {
        ctx->pc = 0x22C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C69Cu;
        // 0x22c6a0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6A4u;
        goto label_22c6a4;
    }
    ctx->pc = 0x22C69Cu;
    SET_GPR_U32(ctx, 31, 0x22C6A4u);
    ctx->pc = 0x22C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C69Cu;
    // 0x22c6a0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22C69Cu, 0x22C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6A4u;
label_22c6a4:
    // 0x22c6a4: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x22c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_22c6a8:
    // 0x22c6a8: 0xc066e26  jal         func_19B898
label_22c6ac:
    if (ctx->pc == 0x22C6ACu) {
        ctx->pc = 0x22C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6A8u;
        // 0x22c6ac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6B0u;
        goto label_22c6b0;
    }
    ctx->pc = 0x22C6A8u;
    SET_GPR_U32(ctx, 31, 0x22C6B0u);
    ctx->pc = 0x22C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C6A8u;
    // 0x22c6ac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22C6A8u, 0x22C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6B0u;
label_22c6b0:
    // 0x22c6b0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x22c6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_22c6b4:
    // 0x22c6b4: 0xc066e26  jal         func_19B898
label_22c6b8:
    if (ctx->pc == 0x22C6B8u) {
        ctx->pc = 0x22C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6B4u;
        // 0x22c6b8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6BCu;
        goto label_22c6bc;
    }
    ctx->pc = 0x22C6B4u;
    SET_GPR_U32(ctx, 31, 0x22C6BCu);
    ctx->pc = 0x22C6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C6B4u;
    // 0x22c6b8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22C6B4u, 0x22C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6BCu;
label_22c6bc:
    // 0x22c6bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c6c0:
    // 0x22c6c0: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x22c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_22c6c4:
    // 0x22c6c4: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x22c6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
label_22c6c8:
    // 0x22c6c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22c6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22c6cc:
    // 0x22c6cc: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x22c6ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_22c6d0:
    // 0x22c6d0: 0x2484c830  addiu       $a0, $a0, -0x37D0
    ctx->pc = 0x22c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953008));
label_22c6d4:
    // 0x22c6d4: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x22c6d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_22c6d8:
    // 0x22c6d8: 0xa6050018  sh          $a1, 0x18($s0)
    ctx->pc = 0x22c6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 5));
label_22c6dc:
    // 0x22c6dc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x22c6dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_22c6e0:
    // 0x22c6e0: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x22c6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_22c6e4:
    // 0x22c6e4: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
label_22c6e8:
    if (ctx->pc == 0x22C6E8u) {
        ctx->pc = 0x22C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6E4u;
        // 0x22c6e8: 0xae04001c  sw          $a0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6ECu;
        goto label_22c6ec;
    }
    ctx->pc = 0x22C6E4u;
    {
        const bool branch_taken_0x22c6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6E4u;
        // 0x22c6e8: 0xae04001c  sw          $a0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6e4) {
            ctx->pc = 0x22C564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c564;
        }
    }
    ctx->pc = 0x22C6ECu;
label_22c6ec:
    // 0x22c6ec: 0x0  nop
    ctx->pc = 0x22c6ecu;
    // NOP
label_22c6f0:
    // 0x22c6f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22c6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22c6f4:
    // 0x22c6f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22c6f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22c6f8:
    // 0x22c6f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22c6f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22c6fc:
    // 0x22c6fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22c6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22c700:
    // 0x22c700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c704:
    // 0x22c704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c708:
    // 0x22c708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22c70c:
    // 0x22c70c: 0x3e00008  jr          $ra
label_22c710:
    if (ctx->pc == 0x22C710u) {
        ctx->pc = 0x22C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C70Cu;
        // 0x22c710: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C714u;
        goto label_22c714;
    }
    ctx->pc = 0x22C70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C70Cu;
        // 0x22c710: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C714u;
label_22c714:
    // 0x22c714: 0x0  nop
    ctx->pc = 0x22c714u;
    // NOP
label_22c718:
    // 0x22c718: 0x0  nop
    ctx->pc = 0x22c718u;
    // NOP
label_22c71c:
    // 0x22c71c: 0x0  nop
    ctx->pc = 0x22c71cu;
    // NOP
label_22c720:
    // 0x22c720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22c724:
    // 0x22c724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22c728:
    // 0x22c728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22c72c:
    // 0x22c72c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c730:
    // 0x22c730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22c734:
    // 0x22c734: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22c734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22c738:
    // 0x22c738: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x22c738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22c73c:
    // 0x22c73c: 0x90900014  lbu         $s0, 0x14($a0)
    ctx->pc = 0x22c73cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_22c740:
    // 0x22c740: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_22c744:
    if (ctx->pc == 0x22C744u) {
        ctx->pc = 0x22C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C740u;
        // 0x22c744: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C748u;
        goto label_22c748;
    }
    ctx->pc = 0x22C740u;
    {
        const bool branch_taken_0x22c740 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C740u;
        // 0x22c744: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c740) {
            ctx->pc = 0x22C774u;
            goto label_22c774;
        }
    }
    ctx->pc = 0x22C748u;
label_22c748:
    // 0x22c748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c74c:
    // 0x22c74c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x22c74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_22c750:
    // 0x22c750: 0x90c30096  lbu         $v1, 0x96($a2)
    ctx->pc = 0x22c750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 150)));
label_22c754:
    // 0x22c754: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_22c758:
    if (ctx->pc == 0x22C758u) {
        ctx->pc = 0x22C75Cu;
        goto label_22c75c;
    }
    ctx->pc = 0x22C754u;
    {
        const bool branch_taken_0x22c754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22c754) {
            ctx->pc = 0x22C768u;
            goto label_22c768;
        }
    }
    ctx->pc = 0x22C75Cu;
label_22c75c:
    // 0x22c75c: 0x90c30094  lbu         $v1, 0x94($a2)
    ctx->pc = 0x22c75cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 148)));
label_22c760:
    // 0x22c760: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_22c764:
    if (ctx->pc == 0x22C764u) {
        ctx->pc = 0x22C768u;
        goto label_22c768;
    }
    ctx->pc = 0x22C760u;
    {
        const bool branch_taken_0x22c760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22c760) {
            ctx->pc = 0x22C774u;
            goto label_22c774;
        }
    }
    ctx->pc = 0x22C768u;
label_22c768:
    // 0x22c768: 0x8cc60084  lw          $a2, 0x84($a2)
    ctx->pc = 0x22c768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_22c76c:
    // 0x22c76c: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_22c770:
    if (ctx->pc == 0x22C770u) {
        ctx->pc = 0x22C774u;
        goto label_22c774;
    }
    ctx->pc = 0x22C76Cu;
    {
        const bool branch_taken_0x22c76c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c76c) {
            ctx->pc = 0x22C750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c750;
        }
    }
    ctx->pc = 0x22C774u;
label_22c774:
    // 0x22c774: 0x0  nop
    ctx->pc = 0x22c774u;
    // NOP
label_22c778:
    // 0x22c778: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_22c77c:
    if (ctx->pc == 0x22C77Cu) {
        ctx->pc = 0x22C780u;
        goto label_22c780;
    }
    ctx->pc = 0x22C778u;
    {
        const bool branch_taken_0x22c778 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c778) {
            ctx->pc = 0x22C790u;
            goto label_22c790;
        }
    }
    ctx->pc = 0x22C780u;
label_22c780:
    // 0x22c780: 0xae46005c  sw          $a2, 0x5C($s2)
    ctx->pc = 0x22c780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 6));
label_22c784:
    // 0x22c784: 0x8cc20084  lw          $v0, 0x84($a2)
    ctx->pc = 0x22c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_22c788:
    // 0x22c788: 0x10000003  b           . + 4 + (0x3 << 2)
label_22c78c:
    if (ctx->pc == 0x22C78Cu) {
        ctx->pc = 0x22C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C788u;
        // 0x22c78c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C790u;
        goto label_22c790;
    }
    ctx->pc = 0x22C788u;
    {
        const bool branch_taken_0x22c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C788u;
        // 0x22c78c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c788) {
            ctx->pc = 0x22C798u;
            goto label_22c798;
        }
    }
    ctx->pc = 0x22C790u;
label_22c790:
    // 0x22c790: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x22c790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_22c794:
    // 0x22c794: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x22c794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_22c798:
    // 0x22c798: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x22c798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_22c79c:
    // 0x22c79c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c7a0:
    // 0x22c7a0: 0xc08e9ac  jal         func_23A6B0
label_22c7a4:
    if (ctx->pc == 0x22C7A4u) {
        ctx->pc = 0x22C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7A0u;
        // 0x22c7a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7A8u;
        goto label_22c7a8;
    }
    ctx->pc = 0x22C7A0u;
    SET_GPR_U32(ctx, 31, 0x22C7A8u);
    ctx->pc = 0x22C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C7A0u;
    // 0x22c7a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x22C7A8u;
label_22c7a8:
    // 0x22c7a8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x22c7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c7ac:
    // 0x22c7ac: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_22c7b0:
    if (ctx->pc == 0x22C7B0u) {
        ctx->pc = 0x22C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7ACu;
        // 0x22c7b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7B4u;
        goto label_22c7b4;
    }
    ctx->pc = 0x22C7ACu;
    {
        const bool branch_taken_0x22c7ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7ACu;
        // 0x22c7b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7ac) {
            ctx->pc = 0x22C7F4u;
            goto label_22c7f4;
        }
    }
    ctx->pc = 0x22C7B4u;
label_22c7b4:
    // 0x22c7b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22c7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c7b8:
    // 0x22c7b8: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x22c7b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_22c7bc:
    // 0x22c7bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22c7c0:
    // 0x22c7c0: 0x90c30096  lbu         $v1, 0x96($a2)
    ctx->pc = 0x22c7c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 150)));
label_22c7c4:
    // 0x22c7c4: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
label_22c7c8:
    if (ctx->pc == 0x22C7C8u) {
        ctx->pc = 0x22C7CCu;
        goto label_22c7cc;
    }
    ctx->pc = 0x22C7C4u;
    {
        const bool branch_taken_0x22c7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x22c7c4) {
            ctx->pc = 0x22C7E8u;
            goto label_22c7e8;
        }
    }
    ctx->pc = 0x22C7CCu;
label_22c7cc:
    // 0x22c7cc: 0x90c30094  lbu         $v1, 0x94($a2)
    ctx->pc = 0x22c7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 148)));
label_22c7d0:
    // 0x22c7d0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_22c7d4:
    if (ctx->pc == 0x22C7D4u) {
        ctx->pc = 0x22C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7D0u;
        // 0x22c7d4: 0x2481821  addu        $v1, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7D8u;
        goto label_22c7d8;
    }
    ctx->pc = 0x22C7D0u;
    {
        const bool branch_taken_0x22c7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7D0u;
        // 0x22c7d4: 0x2481821  addu        $v1, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7d0) {
            ctx->pc = 0x22C7E8u;
            goto label_22c7e8;
        }
    }
    ctx->pc = 0x22C7D8u;
label_22c7d8:
    // 0x22c7d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22c7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22c7dc:
    // 0x22c7dc: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x22c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
label_22c7e0:
    // 0x22c7e0: 0x10e40004  beq         $a3, $a0, . + 4 + (0x4 << 2)
label_22c7e4:
    if (ctx->pc == 0x22C7E4u) {
        ctx->pc = 0x22C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7E0u;
        // 0x22c7e4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7E8u;
        goto label_22c7e8;
    }
    ctx->pc = 0x22C7E0u;
    {
        const bool branch_taken_0x22c7e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x22C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7E0u;
        // 0x22c7e4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7e0) {
            ctx->pc = 0x22C7F4u;
            goto label_22c7f4;
        }
    }
    ctx->pc = 0x22C7E8u;
label_22c7e8:
    // 0x22c7e8: 0x8cc60084  lw          $a2, 0x84($a2)
    ctx->pc = 0x22c7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_22c7ec:
    // 0x22c7ec: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
label_22c7f0:
    if (ctx->pc == 0x22C7F0u) {
        ctx->pc = 0x22C7F4u;
        goto label_22c7f4;
    }
    ctx->pc = 0x22C7ECu;
    {
        const bool branch_taken_0x22c7ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c7ec) {
            ctx->pc = 0x22C7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c7c0;
        }
    }
    ctx->pc = 0x22C7F4u;
label_22c7f4:
    // 0x22c7f4: 0x0  nop
    ctx->pc = 0x22c7f4u;
    // NOP
label_22c7f8:
    // 0x22c7f8: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_22c7fc:
    if (ctx->pc == 0x22C7FCu) {
        ctx->pc = 0x22C800u;
        goto label_22c800;
    }
    ctx->pc = 0x22C7F8u;
    {
        const bool branch_taken_0x22c7f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c7f8) {
            ctx->pc = 0x22C80Cu;
            goto label_22c80c;
        }
    }
    ctx->pc = 0x22C800u;
label_22c800:
    // 0x22c800: 0x8cc30084  lw          $v1, 0x84($a2)
    ctx->pc = 0x22c800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_22c804:
    // 0x22c804: 0x10000002  b           . + 4 + (0x2 << 2)
label_22c808:
    if (ctx->pc == 0x22C808u) {
        ctx->pc = 0x22C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C804u;
        // 0x22c808: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C80Cu;
        goto label_22c80c;
    }
    ctx->pc = 0x22C804u;
    {
        const bool branch_taken_0x22c804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C804u;
        // 0x22c808: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c804) {
            ctx->pc = 0x22C810u;
            goto label_22c810;
        }
    }
    ctx->pc = 0x22C80Cu;
label_22c80c:
    // 0x22c80c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_22c810:
    // 0x22c810: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22c810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22c814:
    // 0x22c814: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c818:
    // 0x22c818: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c81c:
    // 0x22c81c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22c820:
    // 0x22c820: 0x3e00008  jr          $ra
label_22c824:
    if (ctx->pc == 0x22C824u) {
        ctx->pc = 0x22C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C820u;
        // 0x22c824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C828u;
        goto label_22c828;
    }
    ctx->pc = 0x22C820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C820u;
        // 0x22c824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C828u;
label_22c828:
    // 0x22c828: 0x0  nop
    ctx->pc = 0x22c828u;
    // NOP
label_22c82c:
    // 0x22c82c: 0x0  nop
    ctx->pc = 0x22c82cu;
    // NOP
label_22c830:
    // 0x22c830: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_22c834:
    // 0x22c834: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22c834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22c838:
    // 0x22c838: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22c838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22c83c:
    // 0x22c83c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22c840:
    // 0x22c840: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22c840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_22c844:
    // 0x22c844: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22c844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_22c848:
    // 0x22c848: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22c84c:
    // 0x22c84c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22c84cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c850:
    // 0x22c850: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22c850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22c854:
    // 0x22c854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22c854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22c858:
    // 0x22c858: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22c858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22c85c:
    // 0x22c85c: 0x9024a3ea  lbu         $a0, -0x5C16($at)
    ctx->pc = 0x22c85cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22c860:
    // 0x22c860: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_22c864:
    if (ctx->pc == 0x22C864u) {
        ctx->pc = 0x22C868u;
        goto label_22c868;
    }
    ctx->pc = 0x22C860u;
    {
        const bool branch_taken_0x22c860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22c860) {
            ctx->pc = 0x22C870u;
            goto label_22c870;
        }
    }
    ctx->pc = 0x22C868u;
label_22c868:
    // 0x22c868: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_22c86c:
    if (ctx->pc == 0x22C86Cu) {
        ctx->pc = 0x22C870u;
        goto label_22c870;
    }
    ctx->pc = 0x22C868u;
    {
        const bool branch_taken_0x22c868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c868) {
            ctx->pc = 0x22C880u;
            goto label_22c880;
        }
    }
    ctx->pc = 0x22C870u;
label_22c870:
    // 0x22c870: 0xc0591f4  jal         func_1647D0
label_22c874:
    if (ctx->pc == 0x22C874u) {
        ctx->pc = 0x22C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C870u;
        // 0x22c874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C878u;
        goto label_22c878;
    }
    ctx->pc = 0x22C870u;
    SET_GPR_U32(ctx, 31, 0x22C878u);
    ctx->pc = 0x22C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C870u;
    // 0x22c874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22C870u, 0x22C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C878u;
label_22c878:
    // 0x22c878: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_22c87c:
    if (ctx->pc == 0x22C87Cu) {
        ctx->pc = 0x22C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C878u;
        // 0x22c87c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C880u;
        goto label_22c880;
    }
    ctx->pc = 0x22C878u;
    {
        const bool branch_taken_0x22c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C878u;
        // 0x22c87c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c878) {
            ctx->pc = 0x22CBE0u;
            { ctx->pc = 0x22cbe0; return; }
        }
    }
    ctx->pc = 0x22C880u;
label_22c880:
    // 0x22c880: 0x96640012  lhu         $a0, 0x12($s3)
    ctx->pc = 0x22c880u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_22c884:
    // 0x22c884: 0x8e71005c  lw          $s1, 0x5C($s3)
    ctx->pc = 0x22c884u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_22c888:
    // 0x22c888: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x22c888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22c88c:
    // 0x22c88c: 0xa6630012  sh          $v1, 0x12($s3)
    ctx->pc = 0x22c88cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 3));
label_22c890:
    // 0x22c890: 0x96630018  lhu         $v1, 0x18($s3)
    ctx->pc = 0x22c890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_22c894:
    // 0x22c894: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x22c894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22c898:
    // 0x22c898: 0x146000d0  bnez        $v1, . + 4 + (0xD0 << 2)
label_22c89c:
    if (ctx->pc == 0x22C89Cu) {
        ctx->pc = 0x22C8A0u;
        goto label_22c8a0;
    }
    ctx->pc = 0x22C898u;
    {
        const bool branch_taken_0x22c898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c898) {
            ctx->pc = 0x22CBDCu;
            { ctx->pc = 0x22cbdc; return; }
        }
    }
    ctx->pc = 0x22C8A0u;
label_22c8a0:
    // 0x22c8a0: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x22c8a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_22c8a4:
    // 0x22c8a4: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
label_22c8a8:
    if (ctx->pc == 0x22C8A8u) {
        ctx->pc = 0x22C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8A4u;
        // 0x22c8a8: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8ACu;
        goto label_22c8ac;
    }
    ctx->pc = 0x22C8A4u;
    {
        const bool branch_taken_0x22c8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8A4u;
        // 0x22c8a8: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8a4) {
            ctx->pc = 0x22CBDCu;
            { ctx->pc = 0x22cbdc; return; }
        }
    }
    ctx->pc = 0x22C8ACu;
label_22c8ac:
    // 0x22c8ac: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x22c8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_22c8b0:
    // 0x22c8b0: 0xc066e02  jal         func_19B808
label_22c8b4:
    if (ctx->pc == 0x22C8B4u) {
        ctx->pc = 0x22C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8B0u;
        // 0x22c8b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8B8u;
        goto label_22c8b8;
    }
    ctx->pc = 0x22C8B0u;
    SET_GPR_U32(ctx, 31, 0x22C8B8u);
    ctx->pc = 0x22C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8B0u;
    // 0x22c8b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22C8B0u, 0x22C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8B8u;
label_22c8b8:
    // 0x22c8b8: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x22c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_22c8bc:
    // 0x22c8bc: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x22c8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_22c8c0:
    // 0x22c8c0: 0xc066e02  jal         func_19B808
label_22c8c4:
    if (ctx->pc == 0x22C8C4u) {
        ctx->pc = 0x22C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8C0u;
        // 0x22c8c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8C8u;
        goto label_22c8c8;
    }
    ctx->pc = 0x22C8C0u;
    SET_GPR_U32(ctx, 31, 0x22C8C8u);
    ctx->pc = 0x22C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8C0u;
    // 0x22c8c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22C8C0u, 0x22C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8C8u;
label_22c8c8:
    // 0x22c8c8: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x22c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_22c8cc:
    // 0x22c8cc: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x22c8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_22c8d0:
    // 0x22c8d0: 0xc066e02  jal         func_19B808
label_22c8d4:
    if (ctx->pc == 0x22C8D4u) {
        ctx->pc = 0x22C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8D0u;
        // 0x22c8d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8D8u;
        goto label_22c8d8;
    }
    ctx->pc = 0x22C8D0u;
    SET_GPR_U32(ctx, 31, 0x22C8D8u);
    ctx->pc = 0x22C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8D0u;
    // 0x22c8d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22C8D0u, 0x22C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8D8u;
label_22c8d8:
    // 0x22c8d8: 0xc6630024  lwc1        $f3, 0x24($s3)
    ctx->pc = 0x22c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22c8dc:
    // 0x22c8dc: 0x3c023f09  lui         $v0, 0x3F09
    ctx->pc = 0x22c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16137 << 16));
label_22c8e0:
    // 0x22c8e0: 0x34431870  ori         $v1, $v0, 0x1870
    ctx->pc = 0x22c8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6256);
label_22c8e4:
    // 0x22c8e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22c8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22c8e8:
    // 0x22c8e8: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x22c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_22c8ec:
    // 0x22c8ec: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x22c8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_22c8f0:
    // 0x22c8f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c8f4:
    // 0x22c8f4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x22c8f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_22c8f8:
    // 0x22c8f8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22c8fc:
    // 0x22c8fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22c900:
    // 0x22c900: 0xe6620024  swc1        $f2, 0x24($s3)
    ctx->pc = 0x22c900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_22c904:
    // 0x22c904: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x22c904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c908:
    // 0x22c908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c90c:
    // 0x22c90c: 0x0  nop
    ctx->pc = 0x22c90cu;
    // NOP
label_22c910:
    // 0x22c910: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22c910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_22c914:
    // 0x22c914: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c918:
    // 0x22c918: 0x0  nop
    ctx->pc = 0x22c918u;
    // NOP
label_22c91c:
    // 0x22c91c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22c920u;
    return;
}
