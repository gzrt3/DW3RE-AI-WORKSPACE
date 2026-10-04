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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part213(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23c1f0u: goto label_23c1f0;
        case 0x23c1f4u: goto label_23c1f4;
        case 0x23c1f8u: goto label_23c1f8;
        case 0x23c1fcu: goto label_23c1fc;
        case 0x23c200u: goto label_23c200;
        case 0x23c204u: goto label_23c204;
        case 0x23c208u: goto label_23c208;
        case 0x23c20cu: goto label_23c20c;
        case 0x23c210u: goto label_23c210;
        case 0x23c214u: goto label_23c214;
        case 0x23c218u: goto label_23c218;
        case 0x23c21cu: goto label_23c21c;
        case 0x23c220u: goto label_23c220;
        case 0x23c224u: goto label_23c224;
        case 0x23c228u: goto label_23c228;
        case 0x23c22cu: goto label_23c22c;
        case 0x23c230u: goto label_23c230;
        case 0x23c234u: goto label_23c234;
        case 0x23c238u: goto label_23c238;
        case 0x23c23cu: goto label_23c23c;
        case 0x23c240u: goto label_23c240;
        case 0x23c244u: goto label_23c244;
        case 0x23c248u: goto label_23c248;
        case 0x23c24cu: goto label_23c24c;
        case 0x23c250u: goto label_23c250;
        case 0x23c254u: goto label_23c254;
        case 0x23c258u: goto label_23c258;
        case 0x23c25cu: goto label_23c25c;
        case 0x23c260u: goto label_23c260;
        case 0x23c264u: goto label_23c264;
        case 0x23c268u: goto label_23c268;
        case 0x23c26cu: goto label_23c26c;
        case 0x23c270u: goto label_23c270;
        case 0x23c274u: goto label_23c274;
        case 0x23c278u: goto label_23c278;
        case 0x23c27cu: goto label_23c27c;
        case 0x23c280u: goto label_23c280;
        case 0x23c284u: goto label_23c284;
        case 0x23c288u: goto label_23c288;
        case 0x23c28cu: goto label_23c28c;
        case 0x23c290u: goto label_23c290;
        case 0x23c294u: goto label_23c294;
        case 0x23c298u: goto label_23c298;
        case 0x23c29cu: goto label_23c29c;
        case 0x23c2a0u: goto label_23c2a0;
        case 0x23c2a4u: goto label_23c2a4;
        case 0x23c2a8u: goto label_23c2a8;
        case 0x23c2acu: goto label_23c2ac;
        case 0x23c2b0u: goto label_23c2b0;
        case 0x23c2b4u: goto label_23c2b4;
        case 0x23c2b8u: goto label_23c2b8;
        case 0x23c2bcu: goto label_23c2bc;
        case 0x23c2c0u: goto label_23c2c0;
        case 0x23c2c4u: goto label_23c2c4;
        case 0x23c2c8u: goto label_23c2c8;
        case 0x23c2ccu: goto label_23c2cc;
        case 0x23c2d0u: goto label_23c2d0;
        case 0x23c2d4u: goto label_23c2d4;
        case 0x23c2d8u: goto label_23c2d8;
        case 0x23c2dcu: goto label_23c2dc;
        case 0x23c2e0u: goto label_23c2e0;
        case 0x23c2e4u: goto label_23c2e4;
        case 0x23c2e8u: goto label_23c2e8;
        case 0x23c2ecu: goto label_23c2ec;
        case 0x23c2f0u: goto label_23c2f0;
        case 0x23c2f4u: goto label_23c2f4;
        case 0x23c2f8u: goto label_23c2f8;
        case 0x23c2fcu: goto label_23c2fc;
        case 0x23c300u: goto label_23c300;
        case 0x23c304u: goto label_23c304;
        case 0x23c308u: goto label_23c308;
        case 0x23c30cu: goto label_23c30c;
        case 0x23c310u: goto label_23c310;
        case 0x23c314u: goto label_23c314;
        case 0x23c318u: goto label_23c318;
        case 0x23c31cu: goto label_23c31c;
        case 0x23c320u: goto label_23c320;
        case 0x23c324u: goto label_23c324;
        case 0x23c328u: goto label_23c328;
        case 0x23c32cu: goto label_23c32c;
        case 0x23c330u: goto label_23c330;
        case 0x23c334u: goto label_23c334;
        case 0x23c338u: goto label_23c338;
        case 0x23c33cu: goto label_23c33c;
        case 0x23c340u: goto label_23c340;
        case 0x23c344u: goto label_23c344;
        case 0x23c348u: goto label_23c348;
        case 0x23c34cu: goto label_23c34c;
        case 0x23c350u: goto label_23c350;
        case 0x23c354u: goto label_23c354;
        case 0x23c358u: goto label_23c358;
        case 0x23c35cu: goto label_23c35c;
        case 0x23c360u: goto label_23c360;
        case 0x23c364u: goto label_23c364;
        case 0x23c368u: goto label_23c368;
        case 0x23c36cu: goto label_23c36c;
        case 0x23c370u: goto label_23c370;
        case 0x23c374u: goto label_23c374;
        case 0x23c378u: goto label_23c378;
        case 0x23c37cu: goto label_23c37c;
        case 0x23c380u: goto label_23c380;
        case 0x23c384u: goto label_23c384;
        case 0x23c388u: goto label_23c388;
        case 0x23c38cu: goto label_23c38c;
        case 0x23c390u: goto label_23c390;
        case 0x23c394u: goto label_23c394;
        case 0x23c398u: goto label_23c398;
        case 0x23c39cu: goto label_23c39c;
        case 0x23c3a0u: goto label_23c3a0;
        case 0x23c3a4u: goto label_23c3a4;
        case 0x23c3a8u: goto label_23c3a8;
        case 0x23c3acu: goto label_23c3ac;
        case 0x23c3b0u: goto label_23c3b0;
        case 0x23c3b4u: goto label_23c3b4;
        case 0x23c3b8u: goto label_23c3b8;
        case 0x23c3bcu: goto label_23c3bc;
        case 0x23c3c0u: goto label_23c3c0;
        case 0x23c3c4u: goto label_23c3c4;
        case 0x23c3c8u: goto label_23c3c8;
        case 0x23c3ccu: goto label_23c3cc;
        case 0x23c3d0u: goto label_23c3d0;
        case 0x23c3d4u: goto label_23c3d4;
        case 0x23c3d8u: goto label_23c3d8;
        case 0x23c3dcu: goto label_23c3dc;
        case 0x23c3e0u: goto label_23c3e0;
        case 0x23c3e4u: goto label_23c3e4;
        case 0x23c3e8u: goto label_23c3e8;
        case 0x23c3ecu: goto label_23c3ec;
        case 0x23c3f0u: goto label_23c3f0;
        case 0x23c3f4u: goto label_23c3f4;
        case 0x23c3f8u: goto label_23c3f8;
        case 0x23c3fcu: goto label_23c3fc;
        case 0x23c400u: goto label_23c400;
        case 0x23c404u: goto label_23c404;
        case 0x23c408u: goto label_23c408;
        case 0x23c40cu: goto label_23c40c;
        case 0x23c410u: goto label_23c410;
        case 0x23c414u: goto label_23c414;
        case 0x23c418u: goto label_23c418;
        case 0x23c41cu: goto label_23c41c;
        case 0x23c420u: goto label_23c420;
        case 0x23c424u: goto label_23c424;
        case 0x23c428u: goto label_23c428;
        case 0x23c42cu: goto label_23c42c;
        case 0x23c430u: goto label_23c430;
        case 0x23c434u: goto label_23c434;
        case 0x23c438u: goto label_23c438;
        case 0x23c43cu: goto label_23c43c;
        case 0x23c440u: goto label_23c440;
        case 0x23c444u: goto label_23c444;
        case 0x23c448u: goto label_23c448;
        case 0x23c44cu: goto label_23c44c;
        case 0x23c450u: goto label_23c450;
        case 0x23c454u: goto label_23c454;
        case 0x23c458u: goto label_23c458;
        case 0x23c45cu: goto label_23c45c;
        case 0x23c460u: goto label_23c460;
        case 0x23c464u: goto label_23c464;
        case 0x23c468u: goto label_23c468;
        case 0x23c46cu: goto label_23c46c;
        case 0x23c470u: goto label_23c470;
        case 0x23c474u: goto label_23c474;
        case 0x23c478u: goto label_23c478;
        case 0x23c47cu: goto label_23c47c;
        case 0x23c480u: goto label_23c480;
        case 0x23c484u: goto label_23c484;
        case 0x23c488u: goto label_23c488;
        case 0x23c48cu: goto label_23c48c;
        case 0x23c490u: goto label_23c490;
        case 0x23c494u: goto label_23c494;
        case 0x23c498u: goto label_23c498;
        case 0x23c49cu: goto label_23c49c;
        case 0x23c4a0u: goto label_23c4a0;
        case 0x23c4a4u: goto label_23c4a4;
        case 0x23c4a8u: goto label_23c4a8;
        case 0x23c4acu: goto label_23c4ac;
        case 0x23c4b0u: goto label_23c4b0;
        case 0x23c4b4u: goto label_23c4b4;
        case 0x23c4b8u: goto label_23c4b8;
        case 0x23c4bcu: goto label_23c4bc;
        case 0x23c4c0u: goto label_23c4c0;
        case 0x23c4c4u: goto label_23c4c4;
        case 0x23c4c8u: goto label_23c4c8;
        case 0x23c4ccu: goto label_23c4cc;
        case 0x23c4d0u: goto label_23c4d0;
        case 0x23c4d4u: goto label_23c4d4;
        case 0x23c4d8u: goto label_23c4d8;
        case 0x23c4dcu: goto label_23c4dc;
        case 0x23c4e0u: goto label_23c4e0;
        case 0x23c4e4u: goto label_23c4e4;
        case 0x23c4e8u: goto label_23c4e8;
        case 0x23c4ecu: goto label_23c4ec;
        case 0x23c4f0u: goto label_23c4f0;
        case 0x23c4f4u: goto label_23c4f4;
        case 0x23c4f8u: goto label_23c4f8;
        case 0x23c4fcu: goto label_23c4fc;
        case 0x23c500u: goto label_23c500;
        case 0x23c504u: goto label_23c504;
        case 0x23c508u: goto label_23c508;
        case 0x23c50cu: goto label_23c50c;
        case 0x23c510u: goto label_23c510;
        case 0x23c514u: goto label_23c514;
        case 0x23c518u: goto label_23c518;
        case 0x23c51cu: goto label_23c51c;
        case 0x23c520u: goto label_23c520;
        case 0x23c524u: goto label_23c524;
        case 0x23c528u: goto label_23c528;
        case 0x23c52cu: goto label_23c52c;
        case 0x23c530u: goto label_23c530;
        case 0x23c534u: goto label_23c534;
        case 0x23c538u: goto label_23c538;
        case 0x23c53cu: goto label_23c53c;
        case 0x23c540u: goto label_23c540;
        case 0x23c544u: goto label_23c544;
        case 0x23c548u: goto label_23c548;
        case 0x23c54cu: goto label_23c54c;
        case 0x23c550u: goto label_23c550;
        case 0x23c554u: goto label_23c554;
        case 0x23c558u: goto label_23c558;
        case 0x23c55cu: goto label_23c55c;
        case 0x23c560u: goto label_23c560;
        case 0x23c564u: goto label_23c564;
        case 0x23c568u: goto label_23c568;
        case 0x23c56cu: goto label_23c56c;
        case 0x23c570u: goto label_23c570;
        case 0x23c574u: goto label_23c574;
        case 0x23c578u: goto label_23c578;
        case 0x23c57cu: goto label_23c57c;
        case 0x23c580u: goto label_23c580;
        case 0x23c584u: goto label_23c584;
        case 0x23c588u: goto label_23c588;
        case 0x23c58cu: goto label_23c58c;
        case 0x23c590u: goto label_23c590;
        case 0x23c594u: goto label_23c594;
        case 0x23c598u: goto label_23c598;
        case 0x23c59cu: goto label_23c59c;
        case 0x23c5a0u: goto label_23c5a0;
        case 0x23c5a4u: goto label_23c5a4;
        case 0x23c5a8u: goto label_23c5a8;
        case 0x23c5acu: goto label_23c5ac;
        case 0x23c5b0u: goto label_23c5b0;
        case 0x23c5b4u: goto label_23c5b4;
        case 0x23c5b8u: goto label_23c5b8;
        case 0x23c5bcu: goto label_23c5bc;
        case 0x23c5c0u: goto label_23c5c0;
        case 0x23c5c4u: goto label_23c5c4;
        case 0x23c5c8u: goto label_23c5c8;
        case 0x23c5ccu: goto label_23c5cc;
        case 0x23c5d0u: goto label_23c5d0;
        case 0x23c5d4u: goto label_23c5d4;
        case 0x23c5d8u: goto label_23c5d8;
        case 0x23c5dcu: goto label_23c5dc;
        case 0x23c5e0u: goto label_23c5e0;
        case 0x23c5e4u: goto label_23c5e4;
        case 0x23c5e8u: goto label_23c5e8;
        case 0x23c5ecu: goto label_23c5ec;
        case 0x23c5f0u: goto label_23c5f0;
        case 0x23c5f4u: goto label_23c5f4;
        case 0x23c5f8u: goto label_23c5f8;
        case 0x23c5fcu: goto label_23c5fc;
        case 0x23c600u: goto label_23c600;
        case 0x23c604u: goto label_23c604;
        case 0x23c608u: goto label_23c608;
        case 0x23c60cu: goto label_23c60c;
        case 0x23c610u: goto label_23c610;
        case 0x23c614u: goto label_23c614;
        case 0x23c618u: goto label_23c618;
        case 0x23c61cu: goto label_23c61c;
        case 0x23c620u: goto label_23c620;
        case 0x23c624u: goto label_23c624;
        case 0x23c628u: goto label_23c628;
        case 0x23c62cu: goto label_23c62c;
        case 0x23c630u: goto label_23c630;
        case 0x23c634u: goto label_23c634;
        case 0x23c638u: goto label_23c638;
        case 0x23c63cu: goto label_23c63c;
        case 0x23c640u: goto label_23c640;
        case 0x23c644u: goto label_23c644;
        case 0x23c648u: goto label_23c648;
        case 0x23c64cu: goto label_23c64c;
        case 0x23c650u: goto label_23c650;
        case 0x23c654u: goto label_23c654;
        case 0x23c658u: goto label_23c658;
        case 0x23c65cu: goto label_23c65c;
        case 0x23c660u: goto label_23c660;
        case 0x23c664u: goto label_23c664;
        case 0x23c668u: goto label_23c668;
        case 0x23c66cu: goto label_23c66c;
        case 0x23c670u: goto label_23c670;
        case 0x23c674u: goto label_23c674;
        case 0x23c678u: goto label_23c678;
        case 0x23c67cu: goto label_23c67c;
        case 0x23c680u: goto label_23c680;
        case 0x23c684u: goto label_23c684;
        case 0x23c688u: goto label_23c688;
        case 0x23c68cu: goto label_23c68c;
        case 0x23c690u: goto label_23c690;
        case 0x23c694u: goto label_23c694;
        case 0x23c698u: goto label_23c698;
        case 0x23c69cu: goto label_23c69c;
        case 0x23c6a0u: goto label_23c6a0;
        case 0x23c6a4u: goto label_23c6a4;
        case 0x23c6a8u: goto label_23c6a8;
        case 0x23c6acu: goto label_23c6ac;
        case 0x23c6b0u: goto label_23c6b0;
        case 0x23c6b4u: goto label_23c6b4;
        case 0x23c6b8u: goto label_23c6b8;
        case 0x23c6bcu: goto label_23c6bc;
        case 0x23c6c0u: goto label_23c6c0;
        case 0x23c6c4u: goto label_23c6c4;
        case 0x23c6c8u: goto label_23c6c8;
        case 0x23c6ccu: goto label_23c6cc;
        case 0x23c6d0u: goto label_23c6d0;
        case 0x23c6d4u: goto label_23c6d4;
        case 0x23c6d8u: goto label_23c6d8;
        case 0x23c6dcu: goto label_23c6dc;
        case 0x23c6e0u: goto label_23c6e0;
        case 0x23c6e4u: goto label_23c6e4;
        case 0x23c6e8u: goto label_23c6e8;
        case 0x23c6ecu: goto label_23c6ec;
        case 0x23c6f0u: goto label_23c6f0;
        case 0x23c6f4u: goto label_23c6f4;
        case 0x23c6f8u: goto label_23c6f8;
        case 0x23c6fcu: goto label_23c6fc;
        case 0x23c700u: goto label_23c700;
        case 0x23c704u: goto label_23c704;
        case 0x23c708u: goto label_23c708;
        case 0x23c70cu: goto label_23c70c;
        case 0x23c710u: goto label_23c710;
        case 0x23c714u: goto label_23c714;
        case 0x23c718u: goto label_23c718;
        case 0x23c71cu: goto label_23c71c;
        case 0x23c720u: goto label_23c720;
        case 0x23c724u: goto label_23c724;
        case 0x23c728u: goto label_23c728;
        case 0x23c72cu: goto label_23c72c;
        case 0x23c730u: goto label_23c730;
        case 0x23c734u: goto label_23c734;
        case 0x23c738u: goto label_23c738;
        case 0x23c73cu: goto label_23c73c;
        case 0x23c740u: goto label_23c740;
        case 0x23c744u: goto label_23c744;
        case 0x23c748u: goto label_23c748;
        case 0x23c74cu: goto label_23c74c;
        case 0x23c750u: goto label_23c750;
        case 0x23c754u: goto label_23c754;
        case 0x23c758u: goto label_23c758;
        case 0x23c75cu: goto label_23c75c;
        case 0x23c760u: goto label_23c760;
        case 0x23c764u: goto label_23c764;
        case 0x23c768u: goto label_23c768;
        case 0x23c76cu: goto label_23c76c;
        case 0x23c770u: goto label_23c770;
        case 0x23c774u: goto label_23c774;
        case 0x23c778u: goto label_23c778;
        case 0x23c77cu: goto label_23c77c;
        case 0x23c780u: goto label_23c780;
        case 0x23c784u: goto label_23c784;
        case 0x23c788u: goto label_23c788;
        case 0x23c78cu: goto label_23c78c;
        case 0x23c790u: goto label_23c790;
        case 0x23c794u: goto label_23c794;
        case 0x23c798u: goto label_23c798;
        case 0x23c79cu: goto label_23c79c;
        case 0x23c7a0u: goto label_23c7a0;
        case 0x23c7a4u: goto label_23c7a4;
        case 0x23c7a8u: goto label_23c7a8;
        case 0x23c7acu: goto label_23c7ac;
        case 0x23c7b0u: goto label_23c7b0;
        case 0x23c7b4u: goto label_23c7b4;
        case 0x23c7b8u: goto label_23c7b8;
        case 0x23c7bcu: goto label_23c7bc;
        case 0x23c7c0u: goto label_23c7c0;
        case 0x23c7c4u: goto label_23c7c4;
        case 0x23c7c8u: goto label_23c7c8;
        case 0x23c7ccu: goto label_23c7cc;
        case 0x23c7d0u: goto label_23c7d0;
        case 0x23c7d4u: goto label_23c7d4;
        case 0x23c7d8u: goto label_23c7d8;
        case 0x23c7dcu: goto label_23c7dc;
        case 0x23c7e0u: goto label_23c7e0;
        case 0x23c7e4u: goto label_23c7e4;
        case 0x23c7e8u: goto label_23c7e8;
        case 0x23c7ecu: goto label_23c7ec;
        case 0x23c7f0u: goto label_23c7f0;
        case 0x23c7f4u: goto label_23c7f4;
        case 0x23c7f8u: goto label_23c7f8;
        case 0x23c7fcu: goto label_23c7fc;
        case 0x23c800u: goto label_23c800;
        case 0x23c804u: goto label_23c804;
        case 0x23c808u: goto label_23c808;
        case 0x23c80cu: goto label_23c80c;
        case 0x23c810u: goto label_23c810;
        case 0x23c814u: goto label_23c814;
        case 0x23c818u: goto label_23c818;
        case 0x23c81cu: goto label_23c81c;
        case 0x23c820u: goto label_23c820;
        case 0x23c824u: goto label_23c824;
        case 0x23c828u: goto label_23c828;
        case 0x23c82cu: goto label_23c82c;
        case 0x23c830u: goto label_23c830;
        case 0x23c834u: goto label_23c834;
        case 0x23c838u: goto label_23c838;
        case 0x23c83cu: goto label_23c83c;
        case 0x23c840u: goto label_23c840;
        case 0x23c844u: goto label_23c844;
        case 0x23c848u: goto label_23c848;
        case 0x23c84cu: goto label_23c84c;
        case 0x23c850u: goto label_23c850;
        case 0x23c854u: goto label_23c854;
        case 0x23c858u: goto label_23c858;
        case 0x23c85cu: goto label_23c85c;
        case 0x23c860u: goto label_23c860;
        case 0x23c864u: goto label_23c864;
        case 0x23c868u: goto label_23c868;
        case 0x23c86cu: goto label_23c86c;
        case 0x23c870u: goto label_23c870;
        case 0x23c874u: goto label_23c874;
        case 0x23c878u: goto label_23c878;
        case 0x23c87cu: goto label_23c87c;
        case 0x23c880u: goto label_23c880;
        case 0x23c884u: goto label_23c884;
        case 0x23c888u: goto label_23c888;
        case 0x23c88cu: goto label_23c88c;
        case 0x23c890u: goto label_23c890;
        case 0x23c894u: goto label_23c894;
        case 0x23c898u: goto label_23c898;
        case 0x23c89cu: goto label_23c89c;
        case 0x23c8a0u: goto label_23c8a0;
        case 0x23c8a4u: goto label_23c8a4;
        case 0x23c8a8u: goto label_23c8a8;
        case 0x23c8acu: goto label_23c8ac;
        case 0x23c8b0u: goto label_23c8b0;
        case 0x23c8b4u: goto label_23c8b4;
        case 0x23c8b8u: goto label_23c8b8;
        case 0x23c8bcu: goto label_23c8bc;
        case 0x23c8c0u: goto label_23c8c0;
        case 0x23c8c4u: goto label_23c8c4;
        case 0x23c8c8u: goto label_23c8c8;
        case 0x23c8ccu: goto label_23c8cc;
        case 0x23c8d0u: goto label_23c8d0;
        case 0x23c8d4u: goto label_23c8d4;
        case 0x23c8d8u: goto label_23c8d8;
        case 0x23c8dcu: goto label_23c8dc;
        case 0x23c8e0u: goto label_23c8e0;
        case 0x23c8e4u: goto label_23c8e4;
        case 0x23c8e8u: goto label_23c8e8;
        case 0x23c8ecu: goto label_23c8ec;
        case 0x23c8f0u: goto label_23c8f0;
        case 0x23c8f4u: goto label_23c8f4;
        case 0x23c8f8u: goto label_23c8f8;
        case 0x23c8fcu: goto label_23c8fc;
        case 0x23c900u: goto label_23c900;
        case 0x23c904u: goto label_23c904;
        case 0x23c908u: goto label_23c908;
        case 0x23c90cu: goto label_23c90c;
        case 0x23c910u: goto label_23c910;
        case 0x23c914u: goto label_23c914;
        case 0x23c918u: goto label_23c918;
        case 0x23c91cu: goto label_23c91c;
        case 0x23c920u: goto label_23c920;
        case 0x23c924u: goto label_23c924;
        case 0x23c928u: goto label_23c928;
        case 0x23c92cu: goto label_23c92c;
        case 0x23c930u: goto label_23c930;
        case 0x23c934u: goto label_23c934;
        case 0x23c938u: goto label_23c938;
        case 0x23c93cu: goto label_23c93c;
        case 0x23c940u: goto label_23c940;
        case 0x23c944u: goto label_23c944;
        case 0x23c948u: goto label_23c948;
        case 0x23c94cu: goto label_23c94c;
        case 0x23c950u: goto label_23c950;
        case 0x23c954u: goto label_23c954;
        case 0x23c958u: goto label_23c958;
        case 0x23c95cu: goto label_23c95c;
        case 0x23c960u: goto label_23c960;
        case 0x23c964u: goto label_23c964;
        case 0x23c968u: goto label_23c968;
        case 0x23c96cu: goto label_23c96c;
        case 0x23c970u: goto label_23c970;
        case 0x23c974u: goto label_23c974;
        case 0x23c978u: goto label_23c978;
        case 0x23c97cu: goto label_23c97c;
        case 0x23c980u: goto label_23c980;
        case 0x23c984u: goto label_23c984;
        case 0x23c988u: goto label_23c988;
        case 0x23c98cu: goto label_23c98c;
        case 0x23c990u: goto label_23c990;
        case 0x23c994u: goto label_23c994;
        case 0x23c998u: goto label_23c998;
        case 0x23c99cu: goto label_23c99c;
        case 0x23c9a0u: goto label_23c9a0;
        case 0x23c9a4u: goto label_23c9a4;
        case 0x23c9a8u: goto label_23c9a8;
        case 0x23c9acu: goto label_23c9ac;
        case 0x23c9b0u: goto label_23c9b0;
        case 0x23c9b4u: goto label_23c9b4;
        case 0x23c9b8u: goto label_23c9b8;
        case 0x23c9bcu: goto label_23c9bc;
        default: return;
    }

label_23c1f0:
    // 0x23c1f0: 0x2b31823  subu        $v1, $s5, $s3
    ctx->pc = 0x23c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_23c1f4:
    // 0x23c1f4: 0x2728023  subu        $s0, $s3, $s2
    ctx->pc = 0x23c1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_23c1f8:
    // 0x23c1f8: 0x742823  subu        $a1, $v1, $s4
    ctx->pc = 0x23c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_23c1fc:
    // 0x23c1fc: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x23c1fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23c200:
    // 0x23c200: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x23c200u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_23c204:
    // 0x23c204: 0x58a00021  blezl       $a1, . + 4 + (0x21 << 2)
label_23c208:
    if (ctx->pc == 0x23C208u) {
        ctx->pc = 0x23C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C204u;
        // 0x23c208: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C20Cu;
        goto label_23c20c;
    }
    ctx->pc = 0x23C204u;
    {
        const bool branch_taken_0x23c204 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x23c204) {
            ctx->pc = 0x23C208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C204u;
            // 0x23c208: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C28Cu;
            goto label_23c28c;
        }
    }
    ctx->pc = 0x23C20Cu;
label_23c20c:
    // 0x23c20c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x23c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23c210:
    // 0x23c210: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x23c210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_23c214:
    // 0x23c214: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_23c218:
    if (ctx->pc == 0x23C218u) {
        ctx->pc = 0x23C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C214u;
        // 0x23c218: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C21Cu;
        goto label_23c21c;
    }
    ctx->pc = 0x23C214u;
    {
        const bool branch_taken_0x23c214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C214u;
        // 0x23c218: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c214) {
            ctx->pc = 0x23C258u;
            goto label_23c258;
        }
    }
    ctx->pc = 0x23C21Cu;
label_23c21c:
    // 0x23c21c: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x23c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_23c220:
    // 0x23c220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c224:
    // 0x23c224: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23c228:
    // 0x23c228: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x23c228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23c22c:
    // 0x23c22c: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x23c22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_23c230:
    // 0x23c230: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x23c230u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23c234:
    // 0x23c234: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23c234u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23c238:
    // 0x23c238: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x23c238u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_23c23c:
    // 0x23c23c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x23c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_23c240:
    // 0x23c240: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23c240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_23c244:
    // 0x23c244: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x23c244u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_23c248:
    // 0x23c248: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23c24c:
    if (ctx->pc == 0x23C24Cu) {
        ctx->pc = 0x23C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C248u;
        // 0x23c24c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C250u;
        goto label_23c250;
    }
    ctx->pc = 0x23C248u;
    {
        const bool branch_taken_0x23c248 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C248u;
        // 0x23c24c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c248) {
            ctx->pc = 0x23C230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c230;
        }
    }
    ctx->pc = 0x23C250u;
label_23c250:
    // 0x23c250: 0x1000000e  b           . + 4 + (0xE << 2)
label_23c254:
    if (ctx->pc == 0x23C254u) {
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C258u;
        goto label_23c258;
    }
    ctx->pc = 0x23C250u;
    {
        const bool branch_taken_0x23c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C250u;
        // 0x23c254: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c250) {
            ctx->pc = 0x23C28Cu;
            goto label_23c28c;
        }
    }
    ctx->pc = 0x23C258u;
label_23c258:
    // 0x23c258: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x23c258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_23c25c:
    // 0x23c25c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c260:
    // 0x23c260: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x23c260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_23c264:
    // 0x23c264: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x23c264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23c268:
    // 0x23c268: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x23c268u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23c26c:
    // 0x23c26c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23c26cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23c270:
    // 0x23c270: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x23c270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23c274:
    // 0x23c274: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23c274u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23c278:
    // 0x23c278: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23c278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23c27c:
    // 0x23c27c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x23c27cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_23c280:
    // 0x23c280: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23c284:
    if (ctx->pc == 0x23C284u) {
        ctx->pc = 0x23C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C280u;
        // 0x23c284: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C288u;
        goto label_23c288;
    }
    ctx->pc = 0x23C280u;
    {
        const bool branch_taken_0x23c280 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C280u;
        // 0x23c284: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c280) {
            ctx->pc = 0x23C268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c268;
        }
    }
    ctx->pc = 0x23C288u;
label_23c288:
    // 0x23c288: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x23c288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23c28c:
    // 0x23c28c: 0x285102b  sltu        $v0, $s4, $a1
    ctx->pc = 0x23c28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23c290:
    // 0x23c290: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_23c294:
    if (ctx->pc == 0x23C294u) {
        ctx->pc = 0x23C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C290u;
        // 0x23c294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C298u;
        goto label_23c298;
    }
    ctx->pc = 0x23C290u;
    {
        const bool branch_taken_0x23c290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c290) {
            ctx->pc = 0x23C294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C290u;
            // 0x23c294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2C0u;
            goto label_23c2c0;
        }
    }
    ctx->pc = 0x23C298u;
label_23c298:
    // 0x23c298: 0xb4001b  divu        $zero, $a1, $s4
    ctx->pc = 0x23c298u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_23c29c:
    // 0x23c29c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23c29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23c2a0:
    // 0x23c2a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23c2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23c2a4:
    // 0x23c2a4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x23c2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23c2a8:
    // 0x23c2a8: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_23c2ac:
    if (ctx->pc == 0x23C2ACu) {
        ctx->pc = 0x23C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2A8u;
        // 0x23c2ac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2B0u;
        goto label_23c2b0;
    }
    ctx->pc = 0x23C2A8u;
    {
        const bool branch_taken_0x23c2a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c2a8) {
            ctx->pc = 0x23C2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C2A8u;
            // 0x23c2ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2B0u;
            goto label_23c2b0;
        }
    }
    ctx->pc = 0x23C2B0u;
label_23c2b0:
    // 0x23c2b0: 0x2812  mflo        $a1
    ctx->pc = 0x23c2b0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_23c2b4:
    // 0x23c2b4: 0xc08ee4a  jal         func_23B928
label_23c2b8:
    if (ctx->pc == 0x23C2B8u) {
        ctx->pc = 0x23C2BCu;
        goto label_23c2bc;
    }
    ctx->pc = 0x23C2B4u;
    SET_GPR_U32(ctx, 31, 0x23C2BCu);
    ctx->pc = 0x23B928u;
    { ctx->pc = 0x23b928; return; }
    ctx->pc = 0x23C2BCu;
label_23c2bc:
    // 0x23c2bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23c2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c2c0:
    // 0x23c2c0: 0x285102b  sltu        $v0, $s4, $a1
    ctx->pc = 0x23c2c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23c2c4:
    // 0x23c2c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23c2c8:
    if (ctx->pc == 0x23C2C8u) {
        ctx->pc = 0x23C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C4u;
        // 0x23c2c8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2CCu;
        goto label_23c2cc;
    }
    ctx->pc = 0x23C2C4u;
    {
        const bool branch_taken_0x23c2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2C4u;
        // 0x23c2c8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2c4) {
            ctx->pc = 0x23C2E8u;
            goto label_23c2e8;
        }
    }
    ctx->pc = 0x23C2CCu;
label_23c2cc:
    // 0x23c2cc: 0xb4001b  divu        $zero, $a1, $s4
    ctx->pc = 0x23c2ccu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_23c2d0:
    // 0x23c2d0: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_23c2d4:
    if (ctx->pc == 0x23C2D4u) {
        ctx->pc = 0x23C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2D0u;
        // 0x23c2d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2D8u;
        goto label_23c2d8;
    }
    ctx->pc = 0x23C2D0u;
    {
        const bool branch_taken_0x23c2d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c2d0) {
            ctx->pc = 0x23C2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C2D0u;
            // 0x23c2d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2D8u;
            goto label_23c2d8;
        }
    }
    ctx->pc = 0x23C2D8u;
label_23c2d8:
    // 0x23c2d8: 0x2a5b023  subu        $s6, $s5, $a1
    ctx->pc = 0x23c2d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_23c2dc:
    // 0x23c2dc: 0x1012  mflo        $v0
    ctx->pc = 0x23c2dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_23c2e0:
    // 0x23c2e0: 0x1000fda0  b           . + 4 + (-0x260 << 2)
label_23c2e4:
    if (ctx->pc == 0x23C2E4u) {
        ctx->pc = 0x23C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2E0u;
        // 0x23c2e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C2E8u;
        goto label_23c2e8;
    }
    ctx->pc = 0x23C2E0u;
    {
        const bool branch_taken_0x23c2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C2E0u;
        // 0x23c2e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c2e0) {
            ctx->pc = 0x23B964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23b964; return; }
        }
    }
    ctx->pc = 0x23C2E8u;
label_23c2e8:
    // 0x23c2e8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x23c2e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_23c2ec:
    // 0x23c2ec: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x23c2ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23c2f0:
    // 0x23c2f0: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x23c2f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_23c2f4:
    // 0x23c2f4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x23c2f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23c2f8:
    // 0x23c2f8: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x23c2f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_23c2fc:
    // 0x23c2fc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x23c2fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23c300:
    // 0x23c300: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x23c300u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_23c304:
    // 0x23c304: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x23c304u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_23c308:
    // 0x23c308: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x23c308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_23c30c:
    // 0x23c30c: 0x3e00008  jr          $ra
label_23c310:
    if (ctx->pc == 0x23C310u) {
        ctx->pc = 0x23C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C30Cu;
        // 0x23c310: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C314u;
        goto label_23c314;
    }
    ctx->pc = 0x23C30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C30Cu;
        // 0x23c310: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C314u;
label_23c314:
    // 0x23c314: 0x0  nop
    ctx->pc = 0x23c314u;
    // NOP
label_23c318:
    // 0x23c318: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23c31c:
    // 0x23c31c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x23c31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_23c320:
    // 0x23c320: 0x8c430818  lw          $v1, 0x818($v0)
    ctx->pc = 0x23c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23c324:
    // 0x23c324: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x23c324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_23c328:
    // 0x23c328: 0x3e00008  jr          $ra
label_23c32c:
    if (ctx->pc == 0x23C32Cu) {
        ctx->pc = 0x23C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C328u;
        // 0x23c32c: 0xfc6400a8  sd          $a0, 0xA8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C330u;
        goto label_23c330;
    }
    ctx->pc = 0x23C328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C328u;
        // 0x23c32c: 0xfc6400a8  sd          $a0, 0xA8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C330u;
label_23c330:
    // 0x23c330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c334:
    // 0x23c334: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23c338:
    // 0x23c338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c33c:
    // 0x23c33c: 0x3c055851  lui         $a1, 0x5851
    ctx->pc = 0x23c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22609 << 16));
label_23c340:
    // 0x23c340: 0x34a5f42d  ori         $a1, $a1, 0xF42D
    ctx->pc = 0x23c340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62509);
label_23c344:
    // 0x23c344: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x23c344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_23c348:
    // 0x23c348: 0x34a54c95  ori         $a1, $a1, 0x4C95
    ctx->pc = 0x23c348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19605);
label_23c34c:
    // 0x23c34c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x23c34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_23c350:
    // 0x23c350: 0x34a57f2d  ori         $a1, $a1, 0x7F2D
    ctx->pc = 0x23c350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32557);
label_23c354:
    // 0x23c354: 0x8c500818  lw          $s0, 0x818($v0)
    ctx->pc = 0x23c354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23c358:
    // 0x23c358: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23c35c:
    // 0x23c35c: 0xc06d536  jal         func_1B54D8
label_23c360:
    if (ctx->pc == 0x23C360u) {
        ctx->pc = 0x23C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C35Cu;
        // 0x23c360: 0xde0400a8  ld          $a0, 0xA8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C364u;
        goto label_23c364;
    }
    ctx->pc = 0x23C35Cu;
    SET_GPR_U32(ctx, 31, 0x23C364u);
    ctx->pc = 0x23C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C35Cu;
    // 0x23c360: 0xde0400a8  ld          $a0, 0xA8($s0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54D8u, 0x23C35Cu, 0x23C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C364u;
label_23c364:
    // 0x23c364: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x23c364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
label_23c368:
    // 0x23c368: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x23c368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_23c36c:
    // 0x23c36c: 0x64430001  daddiu      $v1, $v0, 0x1
    ctx->pc = 0x23c36cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_23c370:
    // 0x23c370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c374:
    // 0x23c374: 0x3103e  dsrl32      $v0, $v1, 0
    ctx->pc = 0x23c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 0));
label_23c378:
    // 0x23c378: 0xfe0300a8  sd          $v1, 0xA8($s0)
    ctx->pc = 0x23c378u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 168), GPR_U64(ctx, 3));
label_23c37c:
    // 0x23c37c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_23c380:
    // 0x23c380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c384:
    // 0x23c384: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23c384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23c388:
    // 0x23c388: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23c388u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23c38c:
    // 0x23c38c: 0x3e00008  jr          $ra
label_23c390:
    if (ctx->pc == 0x23C390u) {
        ctx->pc = 0x23C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C38Cu;
        // 0x23c390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C394u;
        goto label_23c394;
    }
    ctx->pc = 0x23C38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C38Cu;
        // 0x23c390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C394u;
label_23c394:
    // 0x23c394: 0x0  nop
    ctx->pc = 0x23c394u;
    // NOP
label_23c398:
    // 0x23c398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23c39c:
    // 0x23c39c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x23c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_23c3a0:
    // 0x23c3a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c3a4:
    // 0x23c3a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c3a8:
    // 0x23c3a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23c3ac:
    // 0x23c3ac: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x23c3acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
label_23c3b0:
    // 0x23c3b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23c3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c3b4:
    // 0x23c3b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23c3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23c3b8:
    // 0x23c3b8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x23c3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23c3bc:
    // 0x23c3bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23c3c0:
    // 0x23c3c0: 0xc06939a  jal         func_1A4E68
label_23c3c4:
    if (ctx->pc == 0x23C3C4u) {
        ctx->pc = 0x23C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3C0u;
        // 0x23c3c4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3C8u;
        goto label_23c3c8;
    }
    ctx->pc = 0x23C3C0u;
    SET_GPR_U32(ctx, 31, 0x23C3C8u);
    ctx->pc = 0x23C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3C0u;
    // 0x23c3c4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E68u, 0x23C3C0u, 0x23C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3C8u;
label_23c3c8:
    // 0x23c3c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23c3c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c3cc:
    // 0x23c3cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c3d0:
    // 0x23c3d0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_23c3d4:
    if (ctx->pc == 0x23C3D4u) {
        ctx->pc = 0x23C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3D0u;
        // 0x23c3d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3D8u;
        goto label_23c3d8;
    }
    ctx->pc = 0x23C3D0u;
    {
        const bool branch_taken_0x23c3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3D0u;
        // 0x23c3d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c3d0) {
            ctx->pc = 0x23C3E4u;
            goto label_23c3e4;
        }
    }
    ctx->pc = 0x23C3D8u;
label_23c3d8:
    // 0x23c3d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23c3dc:
    // 0x23c3dc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_23c3e0:
    if (ctx->pc == 0x23C3E0u) {
        ctx->pc = 0x23C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3DCu;
        // 0x23c3e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3E4u;
        goto label_23c3e4;
    }
    ctx->pc = 0x23C3DCu;
    {
        const bool branch_taken_0x23c3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c3dc) {
            ctx->pc = 0x23C3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C3DCu;
            // 0x23c3e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C3E4u;
            goto label_23c3e4;
        }
    }
    ctx->pc = 0x23C3E4u;
label_23c3e4:
    // 0x23c3e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c3e8:
    // 0x23c3e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c3ec:
    // 0x23c3ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c3f0:
    // 0x23c3f0: 0x3e00008  jr          $ra
label_23c3f4:
    if (ctx->pc == 0x23C3F4u) {
        ctx->pc = 0x23C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3F0u;
        // 0x23c3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C3F8u;
        goto label_23c3f8;
    }
    ctx->pc = 0x23C3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3F0u;
        // 0x23c3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C3F8u;
label_23c3f8:
    // 0x23c3f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23c3fc:
    // 0x23c3fc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x23c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_23c400:
    // 0x23c400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c404:
    // 0x23c404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c408:
    // 0x23c408: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23c40c:
    // 0x23c40c: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x23c40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
label_23c410:
    // 0x23c410: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23c410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c414:
    // 0x23c414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23c418:
    // 0x23c418: 0xc0693c8  jal         func_1A4F20
label_23c41c:
    if (ctx->pc == 0x23C41Cu) {
        ctx->pc = 0x23C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C418u;
        // 0x23c41c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C420u;
        goto label_23c420;
    }
    ctx->pc = 0x23C418u;
    SET_GPR_U32(ctx, 31, 0x23C420u);
    ctx->pc = 0x23C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C418u;
    // 0x23c41c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x23C418u, 0x23C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C420u;
label_23c420:
    // 0x23c420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23c420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c424:
    // 0x23c424: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23c424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c428:
    // 0x23c428: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_23c42c:
    if (ctx->pc == 0x23C42Cu) {
        ctx->pc = 0x23C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C428u;
        // 0x23c42c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C430u;
        goto label_23c430;
    }
    ctx->pc = 0x23C428u;
    {
        const bool branch_taken_0x23c428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23c428) {
            ctx->pc = 0x23C42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C428u;
            // 0x23c42c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C440u;
            goto label_23c440;
        }
    }
    ctx->pc = 0x23C430u;
label_23c430:
    // 0x23c430: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23c430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23c434:
    // 0x23c434: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_23c438:
    if (ctx->pc == 0x23C438u) {
        ctx->pc = 0x23C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C434u;
        // 0x23c438: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C43Cu;
        goto label_23c43c;
    }
    ctx->pc = 0x23C434u;
    {
        const bool branch_taken_0x23c434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c434) {
            ctx->pc = 0x23C438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C434u;
            // 0x23c438: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C43Cu;
            goto label_23c43c;
        }
    }
    ctx->pc = 0x23C43Cu;
label_23c43c:
    // 0x23c43c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c440:
    // 0x23c440: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c444:
    // 0x23c444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c448:
    // 0x23c448: 0x3e00008  jr          $ra
label_23c44c:
    if (ctx->pc == 0x23C44Cu) {
        ctx->pc = 0x23C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C448u;
        // 0x23c44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C450u;
        goto label_23c450;
    }
    ctx->pc = 0x23C448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C448u;
        // 0x23c44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C450u;
label_23c450:
    // 0x23c450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c454:
    // 0x23c454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c458:
    // 0x23c458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c45c:
    // 0x23c45c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23c460:
    // 0x23c460: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x23c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_23c464:
    // 0x23c464: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_23c468:
    if (ctx->pc == 0x23C468u) {
        ctx->pc = 0x23C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C464u;
        // 0x23c468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C46Cu;
        goto label_23c46c;
    }
    ctx->pc = 0x23C464u;
    {
        const bool branch_taken_0x23c464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c464) {
            ctx->pc = 0x23C468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C464u;
            // 0x23c468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C4B0u;
            goto label_23c4b0;
        }
    }
    ctx->pc = 0x23C46Cu;
label_23c46c:
    // 0x23c46c: 0xc08e708  jal         func_239C20
label_23c470:
    if (ctx->pc == 0x23C470u) {
        ctx->pc = 0x23C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C46Cu;
        // 0x23c470: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C474u;
        goto label_23c474;
    }
    ctx->pc = 0x23C46Cu;
    SET_GPR_U32(ctx, 31, 0x23C474u);
    ctx->pc = 0x23C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C46Cu;
    // 0x23c470: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    { ctx->pc = 0x239c20; return; }
    ctx->pc = 0x23C474u;
label_23c474:
    // 0x23c474: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23c474u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c478:
    // 0x23c478: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c47c:
    // 0x23c47c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_23c480:
    if (ctx->pc == 0x23C480u) {
        ctx->pc = 0x23C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C47Cu;
        // 0x23c480: 0xae0301d4  sw          $v1, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C484u;
        goto label_23c484;
    }
    ctx->pc = 0x23C47Cu;
    {
        const bool branch_taken_0x23c47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C47Cu;
        // 0x23c480: 0xae0301d4  sw          $v1, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c47c) {
            ctx->pc = 0x23C4B0u;
            goto label_23c4b0;
        }
    }
    ctx->pc = 0x23C484u;
label_23c484:
    // 0x23c484: 0x2462007c  addiu       $v0, $v1, 0x7C
    ctx->pc = 0x23c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 124));
label_23c488:
    // 0x23c488: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x23c488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_23c48c:
    // 0x23c48c: 0x0  nop
    ctx->pc = 0x23c48cu;
    // NOP
label_23c490:
    // 0x23c490: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23c490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23c494:
    // 0x23c494: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23c494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_23c498:
    // 0x23c498: 0x0  nop
    ctx->pc = 0x23c498u;
    // NOP
label_23c49c:
    // 0x23c49c: 0x0  nop
    ctx->pc = 0x23c49cu;
    // NOP
label_23c4a0:
    // 0x23c4a0: 0x0  nop
    ctx->pc = 0x23c4a0u;
    // NOP
label_23c4a4:
    // 0x23c4a4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_23c4a8:
    if (ctx->pc == 0x23C4A8u) {
        ctx->pc = 0x23C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4A4u;
        // 0x23c4a8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4ACu;
        goto label_23c4ac;
    }
    ctx->pc = 0x23C4A4u;
    {
        const bool branch_taken_0x23c4a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x23C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4A4u;
        // 0x23c4a8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4a4) {
            ctx->pc = 0x23C490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c490;
        }
    }
    ctx->pc = 0x23C4ACu;
label_23c4ac:
    // 0x23c4ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23c4acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c4b0:
    // 0x23c4b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c4b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c4b4:
    // 0x23c4b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c4b8:
    // 0x23c4b8: 0x3e00008  jr          $ra
label_23c4bc:
    if (ctx->pc == 0x23C4BCu) {
        ctx->pc = 0x23C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4B8u;
        // 0x23c4bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4C0u;
        goto label_23c4c0;
    }
    ctx->pc = 0x23C4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4B8u;
        // 0x23c4bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C4C0u;
label_23c4c0:
    // 0x23c4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23c4c4:
    // 0x23c4c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23c4c8:
    // 0x23c4c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c4cc:
    // 0x23c4cc: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x23c4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23c4d0:
    // 0x23c4d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c4d4:
    // 0x23c4d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23c4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23c4d8:
    // 0x23c4d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23c4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23c4dc:
    // 0x23c4dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23c4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_23c4e0:
    // 0x23c4e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23c4e4:
    if (ctx->pc == 0x23C4E4u) {
        ctx->pc = 0x23C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4E0u;
        // 0x23c4e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4E8u;
        goto label_23c4e8;
    }
    ctx->pc = 0x23C4E0u;
    {
        const bool branch_taken_0x23c4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4E0u;
        // 0x23c4e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4e0) {
            ctx->pc = 0x23C4F8u;
            goto label_23c4f8;
        }
    }
    ctx->pc = 0x23C4E8u;
label_23c4e8:
    // 0x23c4e8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x23c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_23c4ec:
    // 0x23c4ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c4f0:
    // 0x23c4f0: 0x1000000d  b           . + 4 + (0xD << 2)
label_23c4f4:
    if (ctx->pc == 0x23C4F4u) {
        ctx->pc = 0x23C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4F0u;
        // 0x23c4f4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C4F8u;
        goto label_23c4f8;
    }
    ctx->pc = 0x23C4F0u;
    {
        const bool branch_taken_0x23c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4F0u;
        // 0x23c4f4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4f0) {
            ctx->pc = 0x23C528u;
            goto label_23c528;
        }
    }
    ctx->pc = 0x23C4F8u;
label_23c4f8:
    // 0x23c4f8: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x23c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_23c4fc:
    // 0x23c4fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23c500:
    if (ctx->pc == 0x23C500u) {
        ctx->pc = 0x23C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4FCu;
        // 0x23c500: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C504u;
        goto label_23c504;
    }
    ctx->pc = 0x23C4FCu;
    {
        const bool branch_taken_0x23c4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C4FCu;
        // 0x23c500: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c4fc) {
            ctx->pc = 0x23C51Cu;
            goto label_23c51c;
        }
    }
    ctx->pc = 0x23C504u;
label_23c504:
    // 0x23c504: 0xc08f114  jal         func_23C450
label_23c508:
    if (ctx->pc == 0x23C508u) {
        ctx->pc = 0x23C50Cu;
        goto label_23c50c;
    }
    ctx->pc = 0x23C504u;
    SET_GPR_U32(ctx, 31, 0x23C50Cu);
    ctx->pc = 0x23C450u;
    goto label_23c450;
    ctx->pc = 0x23C50Cu;
label_23c50c:
    // 0x23c50c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23c510:
    if (ctx->pc == 0x23C510u) {
        ctx->pc = 0x23C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C50Cu;
        // 0x23c510: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C514u;
        goto label_23c514;
    }
    ctx->pc = 0x23C50Cu;
    {
        const bool branch_taken_0x23c50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C50Cu;
        // 0x23c510: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c50c) {
            ctx->pc = 0x23C528u;
            goto label_23c528;
        }
    }
    ctx->pc = 0x23C514u;
label_23c514:
    // 0x23c514: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x23c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_23c518:
    // 0x23c518: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x23c518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23c51c:
    // 0x23c51c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23c520:
    // 0x23c520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23c524:
    // 0x23c524: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x23c524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_23c528:
    // 0x23c528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c52c:
    // 0x23c52c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c52cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c530:
    // 0x23c530: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c534:
    // 0x23c534: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23c534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23c538:
    // 0x23c538: 0x3e00008  jr          $ra
label_23c53c:
    if (ctx->pc == 0x23C53Cu) {
        ctx->pc = 0x23C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C538u;
        // 0x23c53c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C540u;
        goto label_23c540;
    }
    ctx->pc = 0x23C538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C538u;
        // 0x23c53c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C540u;
label_23c540:
    // 0x23c540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23c544:
    // 0x23c544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23c548:
    // 0x23c548: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c54c:
    // 0x23c54c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x23c54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23c550:
    // 0x23c550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c554:
    // 0x23c554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23c558:
    // 0x23c558: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23c55c:
    if (ctx->pc == 0x23C55Cu) {
        ctx->pc = 0x23C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C558u;
        // 0x23c55c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C560u;
        goto label_23c560;
    }
    ctx->pc = 0x23C558u;
    {
        const bool branch_taken_0x23c558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C558u;
        // 0x23c55c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c558) {
            ctx->pc = 0x23C570u;
            goto label_23c570;
        }
    }
    ctx->pc = 0x23C560u;
label_23c560:
    // 0x23c560: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x23c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_23c564:
    // 0x23c564: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c568:
    // 0x23c568: 0x10000026  b           . + 4 + (0x26 << 2)
label_23c56c:
    if (ctx->pc == 0x23C56Cu) {
        ctx->pc = 0x23C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C568u;
        // 0x23c56c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C570u;
        goto label_23c570;
    }
    ctx->pc = 0x23C568u;
    {
        const bool branch_taken_0x23c568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C568u;
        // 0x23c56c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c568) {
            ctx->pc = 0x23C604u;
            goto label_23c604;
        }
    }
    ctx->pc = 0x23C570u;
label_23c570:
    // 0x23c570: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x23c570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_23c574:
    // 0x23c574: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_23c578:
    if (ctx->pc == 0x23C578u) {
        ctx->pc = 0x23C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C574u;
        // 0x23c578: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C57Cu;
        goto label_23c57c;
    }
    ctx->pc = 0x23C574u;
    {
        const bool branch_taken_0x23c574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C574u;
        // 0x23c578: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c574) {
            ctx->pc = 0x23C594u;
            goto label_23c594;
        }
    }
    ctx->pc = 0x23C57Cu;
label_23c57c:
    // 0x23c57c: 0xc08f114  jal         func_23C450
label_23c580:
    if (ctx->pc == 0x23C580u) {
        ctx->pc = 0x23C584u;
        goto label_23c584;
    }
    ctx->pc = 0x23C57Cu;
    SET_GPR_U32(ctx, 31, 0x23C584u);
    ctx->pc = 0x23C450u;
    goto label_23c450;
    ctx->pc = 0x23C584u;
label_23c584:
    // 0x23c584: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_23c588:
    if (ctx->pc == 0x23C588u) {
        ctx->pc = 0x23C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C584u;
        // 0x23c588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C58Cu;
        goto label_23c58c;
    }
    ctx->pc = 0x23C584u;
    {
        const bool branch_taken_0x23c584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C584u;
        // 0x23c588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c584) {
            ctx->pc = 0x23C604u;
            goto label_23c604;
        }
    }
    ctx->pc = 0x23C58Cu;
label_23c58c:
    // 0x23c58c: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x23c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_23c590:
    // 0x23c590: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23c590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23c594:
    // 0x23c594: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x23c594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23c598:
    // 0x23c598: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x23c598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c59c:
    // 0x23c59c: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
label_23c5a0:
    if (ctx->pc == 0x23C5A0u) {
        ctx->pc = 0x23C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C59Cu;
        // 0x23c5a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5A4u;
        goto label_23c5a4;
    }
    ctx->pc = 0x23C59Cu;
    {
        const bool branch_taken_0x23c59c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c59c) {
            ctx->pc = 0x23C5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C59Cu;
            // 0x23c5a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C5D0u;
            goto label_23c5d0;
        }
    }
    ctx->pc = 0x23C5A4u;
label_23c5a4:
    // 0x23c5a4: 0xc08f1e6  jal         func_23C798
label_23c5a8:
    if (ctx->pc == 0x23C5A8u) {
        ctx->pc = 0x23C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5A4u;
        // 0x23c5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5ACu;
        goto label_23c5ac;
    }
    ctx->pc = 0x23C5A4u;
    SET_GPR_U32(ctx, 31, 0x23C5ACu);
    ctx->pc = 0x23C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5A4u;
    // 0x23c5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C798u;
    goto label_23c798;
    ctx->pc = 0x23C5ACu;
label_23c5ac:
    // 0x23c5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23c5b0:
    // 0x23c5b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23c5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c5b4:
    // 0x23c5b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c5b8:
    // 0x23c5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c5bc:
    // 0x23c5bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c5c0:
    // 0x23c5c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c5c4:
    // 0x23c5c4: 0x808f1ce  j           func_23C738
label_23c5c8:
    if (ctx->pc == 0x23C5C8u) {
        ctx->pc = 0x23C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5C4u;
        // 0x23c5c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5CCu;
        goto label_23c5cc;
    }
    ctx->pc = 0x23C5C4u;
    ctx->pc = 0x23C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C5C4u;
    // 0x23c5c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C738u;
    goto label_23c738;
    ctx->pc = 0x23C5CCu;
label_23c5cc:
    // 0x23c5cc: 0x0  nop
    ctx->pc = 0x23c5ccu;
    // NOP
label_23c5d0:
    // 0x23c5d0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_23c5d4:
    if (ctx->pc == 0x23C5D4u) {
        ctx->pc = 0x23C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5D0u;
        // 0x23c5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5D8u;
        goto label_23c5d8;
    }
    ctx->pc = 0x23C5D0u;
    {
        const bool branch_taken_0x23c5d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x23C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5D0u;
        // 0x23c5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5d0) {
            ctx->pc = 0x23C604u;
            goto label_23c604;
        }
    }
    ctx->pc = 0x23C5D8u;
label_23c5d8:
    // 0x23c5d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c5dc:
    // 0x23c5dc: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
label_23c5e0:
    if (ctx->pc == 0x23C5E0u) {
        ctx->pc = 0x23C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5DCu;
        // 0x23c5e0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5E4u;
        goto label_23c5e4;
    }
    ctx->pc = 0x23C5DCu;
    {
        const bool branch_taken_0x23c5dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c5dc) {
            ctx->pc = 0x23C5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C5DCu;
            // 0x23c5e0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C5F8u;
            goto label_23c5f8;
        }
    }
    ctx->pc = 0x23C5E4u;
label_23c5e4:
    // 0x23c5e4: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x23c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_23c5e8:
    // 0x23c5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c5ec:
    // 0x23c5ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_23c5f0:
    if (ctx->pc == 0x23C5F0u) {
        ctx->pc = 0x23C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5ECu;
        // 0x23c5f0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C5F4u;
        goto label_23c5f4;
    }
    ctx->pc = 0x23C5ECu;
    {
        const bool branch_taken_0x23c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5ECu;
        // 0x23c5f0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c5ec) {
            ctx->pc = 0x23C604u;
            goto label_23c604;
        }
    }
    ctx->pc = 0x23C5F4u;
label_23c5f4:
    // 0x23c5f4: 0x0  nop
    ctx->pc = 0x23c5f4u;
    // NOP
label_23c5f8:
    // 0x23c5f8: 0xa0f809  jalr        $a1
label_23c5fc:
    if (ctx->pc == 0x23C5FCu) {
        ctx->pc = 0x23C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5F8u;
        // 0x23c5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C600u;
        goto label_23c600;
    }
    ctx->pc = 0x23C5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23C600u);
        ctx->pc = 0x23C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C5F8u;
        // 0x23c5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C5F8u, 0x23C600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C600u;
label_23c600:
    // 0x23c600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23c600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c604:
    // 0x23c604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c608:
    // 0x23c608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c60c:
    // 0x23c60c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c610:
    // 0x23c610: 0x3e00008  jr          $ra
label_23c614:
    if (ctx->pc == 0x23C614u) {
        ctx->pc = 0x23C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C610u;
        // 0x23c614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C618u;
        goto label_23c618;
    }
    ctx->pc = 0x23C610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C610u;
        // 0x23c614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C618u;
label_23c618:
    // 0x23c618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23c61c:
    // 0x23c61c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c620:
    // 0x23c620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c624:
    // 0x23c624: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23c624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c628:
    // 0x23c628: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x23c628u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23c62c:
    // 0x23c62c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23c630:
    // 0x23c630: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23c634:
    // 0x23c634: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_23c638:
    if (ctx->pc == 0x23C638u) {
        ctx->pc = 0x23C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C634u;
        // 0x23c638: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C63Cu;
        goto label_23c63c;
    }
    ctx->pc = 0x23C634u;
    {
        const bool branch_taken_0x23c634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C634u;
        // 0x23c638: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c634) {
            ctx->pc = 0x23C69Cu;
            goto label_23c69c;
        }
    }
    ctx->pc = 0x23C63Cu;
label_23c63c:
    // 0x23c63c: 0x8e2501d4  lw          $a1, 0x1D4($s1)
    ctx->pc = 0x23c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_23c640:
    // 0x23c640: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_23c644:
    if (ctx->pc == 0x23C644u) {
        ctx->pc = 0x23C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C640u;
        // 0x23c644: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C648u;
        goto label_23c648;
    }
    ctx->pc = 0x23C640u;
    {
        const bool branch_taken_0x23c640 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C640u;
        // 0x23c644: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c640) {
            ctx->pc = 0x23C664u;
            goto label_23c664;
        }
    }
    ctx->pc = 0x23C648u;
label_23c648:
    // 0x23c648: 0xc08f114  jal         func_23C450
label_23c64c:
    if (ctx->pc == 0x23C64Cu) {
        ctx->pc = 0x23C650u;
        goto label_23c650;
    }
    ctx->pc = 0x23C648u;
    SET_GPR_U32(ctx, 31, 0x23C650u);
    ctx->pc = 0x23C450u;
    goto label_23c450;
    ctx->pc = 0x23C650u;
label_23c650:
    // 0x23c650: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_23c654:
    if (ctx->pc == 0x23C654u) {
        ctx->pc = 0x23C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C650u;
        // 0x23c654: 0x8e2501d4  lw          $a1, 0x1D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C658u;
        goto label_23c658;
    }
    ctx->pc = 0x23C650u;
    {
        const bool branch_taken_0x23c650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c650) {
            ctx->pc = 0x23C654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C650u;
            // 0x23c654: 0x8e2501d4  lw          $a1, 0x1D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C660u;
            goto label_23c660;
        }
    }
    ctx->pc = 0x23C658u;
label_23c658:
    // 0x23c658: 0x10000010  b           . + 4 + (0x10 << 2)
label_23c65c:
    if (ctx->pc == 0x23C65Cu) {
        ctx->pc = 0x23C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C658u;
        // 0x23c65c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C660u;
        goto label_23c660;
    }
    ctx->pc = 0x23C658u;
    {
        const bool branch_taken_0x23c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C658u;
        // 0x23c65c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c658) {
            ctx->pc = 0x23C69Cu;
            goto label_23c69c;
        }
    }
    ctx->pc = 0x23C660u;
label_23c660:
    // 0x23c660: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x23c660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23c664:
    // 0x23c664: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23c664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23c668:
    // 0x23c668: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x23c668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23c66c:
    // 0x23c66c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_23c670:
    if (ctx->pc == 0x23C670u) {
        ctx->pc = 0x23C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C66Cu;
        // 0x23c670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C674u;
        goto label_23c674;
    }
    ctx->pc = 0x23C66Cu;
    {
        const bool branch_taken_0x23c66c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C66Cu;
        // 0x23c670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c66c) {
            ctx->pc = 0x23C69Cu;
            goto label_23c69c;
        }
    }
    ctx->pc = 0x23C674u;
label_23c674:
    // 0x23c674: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c678:
    // 0x23c678: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_23c67c:
    if (ctx->pc == 0x23C67Cu) {
        ctx->pc = 0x23C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C678u;
        // 0x23c67c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C680u;
        goto label_23c680;
    }
    ctx->pc = 0x23C678u;
    {
        const bool branch_taken_0x23c678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x23C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C678u;
        // 0x23c67c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c678) {
            ctx->pc = 0x23C69Cu;
            goto label_23c69c;
        }
    }
    ctx->pc = 0x23C680u;
label_23c680:
    // 0x23c680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c684:
    // 0x23c684: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_23c688:
    if (ctx->pc == 0x23C688u) {
        ctx->pc = 0x23C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C684u;
        // 0x23c688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C68Cu;
        goto label_23c68c;
    }
    ctx->pc = 0x23C684u;
    {
        const bool branch_taken_0x23c684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x23C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C684u;
        // 0x23c688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c684) {
            ctx->pc = 0x23C69Cu;
            goto label_23c69c;
        }
    }
    ctx->pc = 0x23C68Cu;
label_23c68c:
    // 0x23c68c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_23c690:
    // 0x23c690: 0xa0f809  jalr        $a1
label_23c694:
    if (ctx->pc == 0x23C694u) {
        ctx->pc = 0x23C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C690u;
        // 0x23c694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C698u;
        goto label_23c698;
    }
    ctx->pc = 0x23C690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23C698u);
        ctx->pc = 0x23C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C690u;
        // 0x23c694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C690u, 0x23C698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23C698u;
label_23c698:
    // 0x23c698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23c698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c69c:
    // 0x23c69c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c6a0:
    // 0x23c6a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c6a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c6a4:
    // 0x23c6a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c6a8:
    // 0x23c6a8: 0x3e00008  jr          $ra
label_23c6ac:
    if (ctx->pc == 0x23C6ACu) {
        ctx->pc = 0x23C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6A8u;
        // 0x23c6ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6B0u;
        goto label_23c6b0;
    }
    ctx->pc = 0x23C6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6A8u;
        // 0x23c6ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C6B0u;
label_23c6b0:
    // 0x23c6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c6b4:
    // 0x23c6b4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23c6b8:
    // 0x23c6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23c6bc:
    // 0x23c6bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23c6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c6c0:
    // 0x23c6c0: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23c6c4:
    // 0x23c6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c6c8:
    // 0x23c6c8: 0x808f150  j           func_23C540
label_23c6cc:
    if (ctx->pc == 0x23C6CCu) {
        ctx->pc = 0x23C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6C8u;
        // 0x23c6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6D0u;
        goto label_23c6d0;
    }
    ctx->pc = 0x23C6C8u;
    ctx->pc = 0x23C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6C8u;
    // 0x23c6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C540u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_23c540;
    ctx->pc = 0x23C6D0u;
label_23c6d0:
    // 0x23c6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c6d4:
    // 0x23c6d4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23c6d8:
    // 0x23c6d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23c6dc:
    // 0x23c6dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23c6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c6e0:
    // 0x23c6e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23c6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c6e4:
    // 0x23c6e4: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23c6e8:
    // 0x23c6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c6ec:
    // 0x23c6ec: 0x808f130  j           func_23C4C0
label_23c6f0:
    if (ctx->pc == 0x23C6F0u) {
        ctx->pc = 0x23C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C6ECu;
        // 0x23c6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C6F4u;
        goto label_23c6f4;
    }
    ctx->pc = 0x23C6ECu;
    ctx->pc = 0x23C6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6ECu;
    // 0x23c6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C4C0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_23c4c0;
    ctx->pc = 0x23C6F4u;
label_23c6f4:
    // 0x23c6f4: 0x0  nop
    ctx->pc = 0x23c6f4u;
    // NOP
label_23c6f8:
    // 0x23c6f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c6fc:
    // 0x23c6fc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23c700:
    // 0x23c700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23c704:
    // 0x23c704: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23c704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23c708:
    // 0x23c708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c70c:
    // 0x23c70c: 0x808f114  j           func_23C450
label_23c710:
    if (ctx->pc == 0x23C710u) {
        ctx->pc = 0x23C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C70Cu;
        // 0x23c710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C714u;
        goto label_23c714;
    }
    ctx->pc = 0x23C70Cu;
    ctx->pc = 0x23C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C70Cu;
    // 0x23c710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C450u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_23c450;
    ctx->pc = 0x23C714u;
label_23c714:
    // 0x23c714: 0x0  nop
    ctx->pc = 0x23c714u;
    // NOP
label_23c718:
    // 0x23c718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c71c:
    // 0x23c71c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23c720:
    // 0x23c720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23c724:
    // 0x23c724: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23c724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c728:
    // 0x23c728: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23c728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23c72c:
    // 0x23c72c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c730:
    // 0x23c730: 0x808f186  j           func_23C618
label_23c734:
    if (ctx->pc == 0x23C734u) {
        ctx->pc = 0x23C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C730u;
        // 0x23c734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C738u;
        goto label_23c738;
    }
    ctx->pc = 0x23C730u;
    ctx->pc = 0x23C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C730u;
    // 0x23c734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C618u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_23c618;
    ctx->pc = 0x23C738u;
label_23c738:
    // 0x23c738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23c73c:
    // 0x23c73c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x23c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_23c740:
    // 0x23c740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c744:
    // 0x23c744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c748:
    // 0x23c748: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23c74c:
    // 0x23c74c: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x23c74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
label_23c750:
    // 0x23c750: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23c750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c754:
    // 0x23c754: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23c754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23c758:
    // 0x23c758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23c75c:
    // 0x23c75c: 0xc0693fe  jal         func_1A4FF8
label_23c760:
    if (ctx->pc == 0x23C760u) {
        ctx->pc = 0x23C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C75Cu;
        // 0x23c760: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C764u;
        goto label_23c764;
    }
    ctx->pc = 0x23C75Cu;
    SET_GPR_U32(ctx, 31, 0x23C764u);
    ctx->pc = 0x23C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C75Cu;
    // 0x23c760: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FF8u, 0x23C75Cu, 0x23C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C764u;
label_23c764:
    // 0x23c764: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23c764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c768:
    // 0x23c768: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c76c:
    // 0x23c76c: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
label_23c770:
    if (ctx->pc == 0x23C770u) {
        ctx->pc = 0x23C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C76Cu;
        // 0x23c770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C774u;
        goto label_23c774;
    }
    ctx->pc = 0x23C76Cu;
    {
        const bool branch_taken_0x23c76c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23c76c) {
            ctx->pc = 0x23C770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C76Cu;
            // 0x23c770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C784u;
            goto label_23c784;
        }
    }
    ctx->pc = 0x23C774u;
label_23c774:
    // 0x23c774: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23c774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23c778:
    // 0x23c778: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_23c77c:
    if (ctx->pc == 0x23C77Cu) {
        ctx->pc = 0x23C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C778u;
        // 0x23c77c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C780u;
        goto label_23c780;
    }
    ctx->pc = 0x23C778u;
    {
        const bool branch_taken_0x23c778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c778) {
            ctx->pc = 0x23C77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C778u;
            // 0x23c77c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C780u;
            goto label_23c780;
        }
    }
    ctx->pc = 0x23C780u;
label_23c780:
    // 0x23c780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c784:
    // 0x23c784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c788:
    // 0x23c788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c78c:
    // 0x23c78c: 0x3e00008  jr          $ra
label_23c790:
    if (ctx->pc == 0x23C790u) {
        ctx->pc = 0x23C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C78Cu;
        // 0x23c790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C794u;
        goto label_23c794;
    }
    ctx->pc = 0x23C78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C78Cu;
        // 0x23c790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C794u;
label_23c794:
    // 0x23c794: 0x0  nop
    ctx->pc = 0x23c794u;
    // NOP
label_23c798:
    // 0x23c798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c79c:
    // 0x23c79c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23c7a0:
    // 0x23c7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c7a4:
    // 0x23c7a4: 0x80693fc  j           func_1A4FF0
label_23c7a8:
    if (ctx->pc == 0x23C7A8u) {
        ctx->pc = 0x23C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C7A4u;
        // 0x23c7a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C7ACu;
        goto label_23c7ac;
    }
    ctx->pc = 0x23C7A4u;
    ctx->pc = 0x23C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7A4u;
    // 0x23c7a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FF0u, 0x23C7A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23C7ACu;
label_23c7ac:
    // 0x23c7ac: 0x0  nop
    ctx->pc = 0x23c7acu;
    // NOP
label_23c7b0:
    // 0x23c7b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_23c7b4:
    // 0x23c7b4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x23c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_23c7b8:
    // 0x23c7b8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x23c7b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c7bc:
    // 0x23c7bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23c7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23c7c0:
    // 0x23c7c0: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x23c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
label_23c7c4:
    // 0x23c7c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23c7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c7c8:
    // 0x23c7c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23c7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23c7cc:
    // 0x23c7cc: 0x240c0208  addiu       $t4, $zero, 0x208
    ctx->pc = 0x23c7ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_23c7d0:
    // 0x23c7d0: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x23c7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_23c7d4:
    // 0x23c7d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_23c7d8:
    // 0x23c7d8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x23c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_23c7dc:
    // 0x23c7dc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x23c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_23c7e0:
    // 0x23c7e0: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x23c7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
label_23c7e4:
    // 0x23c7e4: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x23c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
label_23c7e8:
    // 0x23c7e8: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x23c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
label_23c7ec:
    // 0x23c7ec: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x23c7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
label_23c7f0:
    // 0x23c7f0: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x23c7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
label_23c7f4:
    // 0x23c7f4: 0xe7ac0078  swc1        $f12, 0x78($sp)
    ctx->pc = 0x23c7f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_23c7f8:
    // 0x23c7f8: 0xe7ad007c  swc1        $f13, 0x7C($sp)
    ctx->pc = 0x23c7f8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_23c7fc:
    // 0x23c7fc: 0xe7ae0080  swc1        $f14, 0x80($sp)
    ctx->pc = 0x23c7fcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_23c800:
    // 0x23c800: 0xe7af0084  swc1        $f15, 0x84($sp)
    ctx->pc = 0x23c800u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_23c804:
    // 0x23c804: 0xe7b00088  swc1        $f16, 0x88($sp)
    ctx->pc = 0x23c804u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_23c808:
    // 0x23c808: 0xe7b1008c  swc1        $f17, 0x8C($sp)
    ctx->pc = 0x23c808u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_23c80c:
    // 0x23c80c: 0xe7b20090  swc1        $f18, 0x90($sp)
    ctx->pc = 0x23c80cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_23c810:
    // 0x23c810: 0xe7b30094  swc1        $f19, 0x94($sp)
    ctx->pc = 0x23c810u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_23c814:
    // 0x23c814: 0xa7ac000c  sh          $t4, 0xC($sp)
    ctx->pc = 0x23c814u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 12));
label_23c818:
    // 0x23c818: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23c818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_23c81c:
    // 0x23c81c: 0xc08f650  jal         func_23D940
label_23c820:
    if (ctx->pc == 0x23C820u) {
        ctx->pc = 0x23C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C81Cu;
        // 0x23c820: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C824u;
        goto label_23c824;
    }
    ctx->pc = 0x23C81Cu;
    SET_GPR_U32(ctx, 31, 0x23C824u);
    ctx->pc = 0x23C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C81Cu;
    // 0x23c820: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D940u;
    { ctx->pc = 0x23d940; return; }
    ctx->pc = 0x23C824u;
label_23c824:
    // 0x23c824: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23c828:
    // 0x23c828: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23c828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23c82c:
    // 0x23c82c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x23c82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_23c830:
    // 0x23c830: 0x3e00008  jr          $ra
label_23c834:
    if (ctx->pc == 0x23C834u) {
        ctx->pc = 0x23C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C830u;
        // 0x23c834: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C838u;
        goto label_23c838;
    }
    ctx->pc = 0x23C830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C830u;
        // 0x23c834: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C838u;
label_23c838:
    // 0x23c838: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23c83c:
    // 0x23c83c: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23c83cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_23c840:
    // 0x23c840: 0x8c4d0818  lw          $t5, 0x818($v0)
    ctx->pc = 0x23c840u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23c844:
    // 0x23c844: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x23c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_23c848:
    // 0x23c848: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x23c848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_23c84c:
    // 0x23c84c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x23c84cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c850:
    // 0x23c850: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23c850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_23c854:
    // 0x23c854: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x23c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
label_23c858:
    // 0x23c858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23c858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c85c:
    // 0x23c85c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x23c85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23c860:
    // 0x23c860: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_23c864:
    // 0x23c864: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x23c864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_23c868:
    // 0x23c868: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x23c868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_23c86c:
    // 0x23c86c: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x23c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
label_23c870:
    // 0x23c870: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x23c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
label_23c874:
    // 0x23c874: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x23c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
label_23c878:
    // 0x23c878: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x23c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
label_23c87c:
    // 0x23c87c: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x23c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
label_23c880:
    // 0x23c880: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x23c880u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_23c884:
    // 0x23c884: 0xe7ad0074  swc1        $f13, 0x74($sp)
    ctx->pc = 0x23c884u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_23c888:
    // 0x23c888: 0xe7ae0078  swc1        $f14, 0x78($sp)
    ctx->pc = 0x23c888u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_23c88c:
    // 0x23c88c: 0xe7af007c  swc1        $f15, 0x7C($sp)
    ctx->pc = 0x23c88cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_23c890:
    // 0x23c890: 0xe7b00080  swc1        $f16, 0x80($sp)
    ctx->pc = 0x23c890u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_23c894:
    // 0x23c894: 0xe7b10084  swc1        $f17, 0x84($sp)
    ctx->pc = 0x23c894u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_23c898:
    // 0x23c898: 0xe7b20088  swc1        $f18, 0x88($sp)
    ctx->pc = 0x23c898u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_23c89c:
    // 0x23c89c: 0xe7b3008c  swc1        $f19, 0x8C($sp)
    ctx->pc = 0x23c89cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_23c8a0:
    // 0x23c8a0: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x23c8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
label_23c8a4:
    // 0x23c8a4: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x23c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
label_23c8a8:
    // 0x23c8a8: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x23c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
label_23c8ac:
    // 0x23c8ac: 0xc08f650  jal         func_23D940
label_23c8b0:
    if (ctx->pc == 0x23C8B0u) {
        ctx->pc = 0x23C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8ACu;
        // 0x23c8b0: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8B4u;
        goto label_23c8b4;
    }
    ctx->pc = 0x23C8ACu;
    SET_GPR_U32(ctx, 31, 0x23C8B4u);
    ctx->pc = 0x23C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8ACu;
    // 0x23c8b0: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D940u;
    { ctx->pc = 0x23d940; return; }
    ctx->pc = 0x23C8B4u;
label_23c8b4:
    // 0x23c8b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23c8b8:
    // 0x23c8b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23c8bc:
    // 0x23c8bc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x23c8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_23c8c0:
    // 0x23c8c0: 0x3e00008  jr          $ra
label_23c8c4:
    if (ctx->pc == 0x23C8C4u) {
        ctx->pc = 0x23C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8C0u;
        // 0x23c8c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8C8u;
        goto label_23c8c8;
    }
    ctx->pc = 0x23C8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8C0u;
        // 0x23c8c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C8C8u;
label_23c8c8:
    // 0x23c8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c8cc:
    // 0x23c8cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23c8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23c8d0:
    // 0x23c8d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c8d4:
    // 0x23c8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c8d8:
    // 0x23c8d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23c8dc:
    // 0x23c8dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23c8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c8e0:
    // 0x23c8e0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23c8e4:
    // 0x23c8e4: 0xc08f0e6  jal         func_23C398
label_23c8e8:
    if (ctx->pc == 0x23C8E8u) {
        ctx->pc = 0x23C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8E4u;
        // 0x23c8e8: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8ECu;
        goto label_23c8ec;
    }
    ctx->pc = 0x23C8E4u;
    SET_GPR_U32(ctx, 31, 0x23C8ECu);
    ctx->pc = 0x23C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8E4u;
    // 0x23c8e8: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C398u;
    goto label_23c398;
    ctx->pc = 0x23C8ECu;
label_23c8ec:
    // 0x23c8ec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x23c8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_23c8f0:
    // 0x23c8f0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x23c8f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_23c8f4:
    // 0x23c8f4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_23c8f8:
    if (ctx->pc == 0x23C8F8u) {
        ctx->pc = 0x23C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8F4u;
        // 0x23c8f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8FCu;
        goto label_23c8fc;
    }
    ctx->pc = 0x23C8F4u;
    {
        const bool branch_taken_0x23c8f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8F4u;
        // 0x23c8f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8f4) {
            ctx->pc = 0x23C910u;
            goto label_23c910;
        }
    }
    ctx->pc = 0x23C8FCu;
label_23c8fc:
    // 0x23c8fc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x23c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_23c900:
    // 0x23c900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23c904:
    // 0x23c904: 0x10000005  b           . + 4 + (0x5 << 2)
label_23c908:
    if (ctx->pc == 0x23C908u) {
        ctx->pc = 0x23C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C904u;
        // 0x23c908: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C90Cu;
        goto label_23c90c;
    }
    ctx->pc = 0x23C904u;
    {
        const bool branch_taken_0x23c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C904u;
        // 0x23c908: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c904) {
            ctx->pc = 0x23C91Cu;
            goto label_23c91c;
        }
    }
    ctx->pc = 0x23C90Cu;
label_23c90c:
    // 0x23c90c: 0x0  nop
    ctx->pc = 0x23c90cu;
    // NOP
label_23c910:
    // 0x23c910: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x23c910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_23c914:
    // 0x23c914: 0x3063efff  andi        $v1, $v1, 0xEFFF
    ctx->pc = 0x23c914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
label_23c918:
    // 0x23c918: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x23c918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_23c91c:
    // 0x23c91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c920:
    // 0x23c920: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c924:
    // 0x23c924: 0x3e00008  jr          $ra
label_23c928:
    if (ctx->pc == 0x23C928u) {
        ctx->pc = 0x23C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C924u;
        // 0x23c928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C92Cu;
        goto label_23c92c;
    }
    ctx->pc = 0x23C924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C924u;
        // 0x23c928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C92Cu;
label_23c92c:
    // 0x23c92c: 0x0  nop
    ctx->pc = 0x23c92cu;
    // NOP
label_23c930:
    // 0x23c930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23c934:
    // 0x23c934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c938:
    // 0x23c938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c93c:
    // 0x23c93c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23c940:
    // 0x23c940: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c944:
    // 0x23c944: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23c944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23c948:
    // 0x23c948: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23c948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23c94c:
    // 0x23c94c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23c94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_23c950:
    // 0x23c950: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x23c950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_23c954:
    // 0x23c954: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x23c954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_23c958:
    // 0x23c958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23c95c:
    if (ctx->pc == 0x23C95Cu) {
        ctx->pc = 0x23C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C958u;
        // 0x23c95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C960u;
        goto label_23c960;
    }
    ctx->pc = 0x23C958u;
    {
        const bool branch_taken_0x23c958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C958u;
        // 0x23c95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c958) {
            ctx->pc = 0x23C970u;
            goto label_23c970;
        }
    }
    ctx->pc = 0x23C960u;
label_23c960:
    // 0x23c960: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23c960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23c964:
    // 0x23c964: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x23c964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23c968:
    // 0x23c968: 0xc08e550  jal         func_239540
label_23c96c:
    if (ctx->pc == 0x23C96Cu) {
        ctx->pc = 0x23C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C968u;
        // 0x23c96c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C970u;
        goto label_23c970;
    }
    ctx->pc = 0x23C968u;
    SET_GPR_U32(ctx, 31, 0x23C970u);
    ctx->pc = 0x23C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C968u;
    // 0x23c96c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239540u;
    { ctx->pc = 0x239540; return; }
    ctx->pc = 0x23C970u;
label_23c970:
    // 0x23c970: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x23c970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_23c974:
    // 0x23c974: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23c974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c978:
    // 0x23c978: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x23c978u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_23c97c:
    // 0x23c97c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23c97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23c980:
    // 0x23c980: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x23c980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
label_23c984:
    // 0x23c984: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23c984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23c988:
    // 0x23c988: 0xc08fcae  jal         func_23F2B8
label_23c98c:
    if (ctx->pc == 0x23C98Cu) {
        ctx->pc = 0x23C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C988u;
        // 0x23c98c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C990u;
        goto label_23c990;
    }
    ctx->pc = 0x23C988u;
    SET_GPR_U32(ctx, 31, 0x23C990u);
    ctx->pc = 0x23C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C988u;
    // 0x23c98c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F2B8u;
    { ctx->pc = 0x23f2b8; return; }
    ctx->pc = 0x23C990u;
label_23c990:
    // 0x23c990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c994:
    // 0x23c994: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23c998:
    // 0x23c998: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23c998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23c99c:
    // 0x23c99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c9a0:
    // 0x23c9a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c9a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c9a4:
    // 0x23c9a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23c9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23c9a8:
    // 0x23c9a8: 0x3e00008  jr          $ra
label_23c9ac:
    if (ctx->pc == 0x23C9ACu) {
        ctx->pc = 0x23C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9A8u;
        // 0x23c9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9B0u;
        goto label_23c9b0;
    }
    ctx->pc = 0x23C9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9A8u;
        // 0x23c9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C9B0u;
label_23c9b0:
    // 0x23c9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c9b4:
    // 0x23c9b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23c9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23c9b8:
    // 0x23c9b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c9bc:
    // 0x23c9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23c9c0u;
    return;
}
