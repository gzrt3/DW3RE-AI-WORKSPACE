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


void FUN_0017d410_part523(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27c230u: goto label_27c230;
        case 0x27c234u: goto label_27c234;
        case 0x27c238u: goto label_27c238;
        case 0x27c23cu: goto label_27c23c;
        case 0x27c240u: goto label_27c240;
        case 0x27c244u: goto label_27c244;
        case 0x27c248u: goto label_27c248;
        case 0x27c24cu: goto label_27c24c;
        case 0x27c250u: goto label_27c250;
        case 0x27c254u: goto label_27c254;
        case 0x27c258u: goto label_27c258;
        case 0x27c25cu: goto label_27c25c;
        case 0x27c260u: goto label_27c260;
        case 0x27c264u: goto label_27c264;
        case 0x27c268u: goto label_27c268;
        case 0x27c26cu: goto label_27c26c;
        case 0x27c270u: goto label_27c270;
        case 0x27c274u: goto label_27c274;
        case 0x27c278u: goto label_27c278;
        case 0x27c27cu: goto label_27c27c;
        case 0x27c280u: goto label_27c280;
        case 0x27c284u: goto label_27c284;
        case 0x27c288u: goto label_27c288;
        case 0x27c28cu: goto label_27c28c;
        case 0x27c290u: goto label_27c290;
        case 0x27c294u: goto label_27c294;
        case 0x27c298u: goto label_27c298;
        case 0x27c29cu: goto label_27c29c;
        case 0x27c2a0u: goto label_27c2a0;
        case 0x27c2a4u: goto label_27c2a4;
        case 0x27c2a8u: goto label_27c2a8;
        case 0x27c2acu: goto label_27c2ac;
        case 0x27c2b0u: goto label_27c2b0;
        case 0x27c2b4u: goto label_27c2b4;
        case 0x27c2b8u: goto label_27c2b8;
        case 0x27c2bcu: goto label_27c2bc;
        case 0x27c2c0u: goto label_27c2c0;
        case 0x27c2c4u: goto label_27c2c4;
        case 0x27c2c8u: goto label_27c2c8;
        case 0x27c2ccu: goto label_27c2cc;
        case 0x27c2d0u: goto label_27c2d0;
        case 0x27c2d4u: goto label_27c2d4;
        case 0x27c2d8u: goto label_27c2d8;
        case 0x27c2dcu: goto label_27c2dc;
        case 0x27c2e0u: goto label_27c2e0;
        case 0x27c2e4u: goto label_27c2e4;
        case 0x27c2e8u: goto label_27c2e8;
        case 0x27c2ecu: goto label_27c2ec;
        case 0x27c2f0u: goto label_27c2f0;
        case 0x27c2f4u: goto label_27c2f4;
        case 0x27c2f8u: goto label_27c2f8;
        case 0x27c2fcu: goto label_27c2fc;
        case 0x27c300u: goto label_27c300;
        case 0x27c304u: goto label_27c304;
        case 0x27c308u: goto label_27c308;
        case 0x27c30cu: goto label_27c30c;
        case 0x27c310u: goto label_27c310;
        case 0x27c314u: goto label_27c314;
        case 0x27c318u: goto label_27c318;
        case 0x27c31cu: goto label_27c31c;
        case 0x27c320u: goto label_27c320;
        case 0x27c324u: goto label_27c324;
        case 0x27c328u: goto label_27c328;
        case 0x27c32cu: goto label_27c32c;
        case 0x27c330u: goto label_27c330;
        case 0x27c334u: goto label_27c334;
        case 0x27c338u: goto label_27c338;
        case 0x27c33cu: goto label_27c33c;
        case 0x27c340u: goto label_27c340;
        case 0x27c344u: goto label_27c344;
        case 0x27c348u: goto label_27c348;
        case 0x27c34cu: goto label_27c34c;
        case 0x27c350u: goto label_27c350;
        case 0x27c354u: goto label_27c354;
        case 0x27c358u: goto label_27c358;
        case 0x27c35cu: goto label_27c35c;
        case 0x27c360u: goto label_27c360;
        case 0x27c364u: goto label_27c364;
        case 0x27c368u: goto label_27c368;
        case 0x27c36cu: goto label_27c36c;
        case 0x27c370u: goto label_27c370;
        case 0x27c374u: goto label_27c374;
        case 0x27c378u: goto label_27c378;
        case 0x27c37cu: goto label_27c37c;
        case 0x27c380u: goto label_27c380;
        case 0x27c384u: goto label_27c384;
        case 0x27c388u: goto label_27c388;
        case 0x27c38cu: goto label_27c38c;
        case 0x27c390u: goto label_27c390;
        case 0x27c394u: goto label_27c394;
        case 0x27c398u: goto label_27c398;
        case 0x27c39cu: goto label_27c39c;
        case 0x27c3a0u: goto label_27c3a0;
        case 0x27c3a4u: goto label_27c3a4;
        case 0x27c3a8u: goto label_27c3a8;
        case 0x27c3acu: goto label_27c3ac;
        case 0x27c3b0u: goto label_27c3b0;
        case 0x27c3b4u: goto label_27c3b4;
        case 0x27c3b8u: goto label_27c3b8;
        case 0x27c3bcu: goto label_27c3bc;
        case 0x27c3c0u: goto label_27c3c0;
        case 0x27c3c4u: goto label_27c3c4;
        case 0x27c3c8u: goto label_27c3c8;
        case 0x27c3ccu: goto label_27c3cc;
        case 0x27c3d0u: goto label_27c3d0;
        case 0x27c3d4u: goto label_27c3d4;
        case 0x27c3d8u: goto label_27c3d8;
        case 0x27c3dcu: goto label_27c3dc;
        case 0x27c3e0u: goto label_27c3e0;
        case 0x27c3e4u: goto label_27c3e4;
        case 0x27c3e8u: goto label_27c3e8;
        case 0x27c3ecu: goto label_27c3ec;
        case 0x27c3f0u: goto label_27c3f0;
        case 0x27c3f4u: goto label_27c3f4;
        case 0x27c3f8u: goto label_27c3f8;
        case 0x27c3fcu: goto label_27c3fc;
        case 0x27c400u: goto label_27c400;
        case 0x27c404u: goto label_27c404;
        case 0x27c408u: goto label_27c408;
        case 0x27c40cu: goto label_27c40c;
        case 0x27c410u: goto label_27c410;
        case 0x27c414u: goto label_27c414;
        case 0x27c418u: goto label_27c418;
        case 0x27c41cu: goto label_27c41c;
        case 0x27c420u: goto label_27c420;
        case 0x27c424u: goto label_27c424;
        case 0x27c428u: goto label_27c428;
        case 0x27c42cu: goto label_27c42c;
        case 0x27c430u: goto label_27c430;
        case 0x27c434u: goto label_27c434;
        case 0x27c438u: goto label_27c438;
        case 0x27c43cu: goto label_27c43c;
        case 0x27c440u: goto label_27c440;
        case 0x27c444u: goto label_27c444;
        case 0x27c448u: goto label_27c448;
        case 0x27c44cu: goto label_27c44c;
        case 0x27c450u: goto label_27c450;
        case 0x27c454u: goto label_27c454;
        case 0x27c458u: goto label_27c458;
        case 0x27c45cu: goto label_27c45c;
        case 0x27c460u: goto label_27c460;
        case 0x27c464u: goto label_27c464;
        case 0x27c468u: goto label_27c468;
        case 0x27c46cu: goto label_27c46c;
        case 0x27c470u: goto label_27c470;
        case 0x27c474u: goto label_27c474;
        case 0x27c478u: goto label_27c478;
        case 0x27c47cu: goto label_27c47c;
        case 0x27c480u: goto label_27c480;
        case 0x27c484u: goto label_27c484;
        case 0x27c488u: goto label_27c488;
        case 0x27c48cu: goto label_27c48c;
        case 0x27c490u: goto label_27c490;
        case 0x27c494u: goto label_27c494;
        case 0x27c498u: goto label_27c498;
        case 0x27c49cu: goto label_27c49c;
        case 0x27c4a0u: goto label_27c4a0;
        case 0x27c4a4u: goto label_27c4a4;
        case 0x27c4a8u: goto label_27c4a8;
        case 0x27c4acu: goto label_27c4ac;
        case 0x27c4b0u: goto label_27c4b0;
        case 0x27c4b4u: goto label_27c4b4;
        case 0x27c4b8u: goto label_27c4b8;
        case 0x27c4bcu: goto label_27c4bc;
        case 0x27c4c0u: goto label_27c4c0;
        case 0x27c4c4u: goto label_27c4c4;
        case 0x27c4c8u: goto label_27c4c8;
        case 0x27c4ccu: goto label_27c4cc;
        case 0x27c4d0u: goto label_27c4d0;
        case 0x27c4d4u: goto label_27c4d4;
        case 0x27c4d8u: goto label_27c4d8;
        case 0x27c4dcu: goto label_27c4dc;
        case 0x27c4e0u: goto label_27c4e0;
        case 0x27c4e4u: goto label_27c4e4;
        case 0x27c4e8u: goto label_27c4e8;
        case 0x27c4ecu: goto label_27c4ec;
        case 0x27c4f0u: goto label_27c4f0;
        case 0x27c4f4u: goto label_27c4f4;
        case 0x27c4f8u: goto label_27c4f8;
        case 0x27c4fcu: goto label_27c4fc;
        case 0x27c500u: goto label_27c500;
        case 0x27c504u: goto label_27c504;
        case 0x27c508u: goto label_27c508;
        case 0x27c50cu: goto label_27c50c;
        case 0x27c510u: goto label_27c510;
        case 0x27c514u: goto label_27c514;
        case 0x27c518u: goto label_27c518;
        case 0x27c51cu: goto label_27c51c;
        case 0x27c520u: goto label_27c520;
        case 0x27c524u: goto label_27c524;
        case 0x27c528u: goto label_27c528;
        case 0x27c52cu: goto label_27c52c;
        case 0x27c530u: goto label_27c530;
        case 0x27c534u: goto label_27c534;
        case 0x27c538u: goto label_27c538;
        case 0x27c53cu: goto label_27c53c;
        case 0x27c540u: goto label_27c540;
        case 0x27c544u: goto label_27c544;
        case 0x27c548u: goto label_27c548;
        case 0x27c54cu: goto label_27c54c;
        case 0x27c550u: goto label_27c550;
        case 0x27c554u: goto label_27c554;
        case 0x27c558u: goto label_27c558;
        case 0x27c55cu: goto label_27c55c;
        case 0x27c560u: goto label_27c560;
        case 0x27c564u: goto label_27c564;
        case 0x27c568u: goto label_27c568;
        case 0x27c56cu: goto label_27c56c;
        case 0x27c570u: goto label_27c570;
        case 0x27c574u: goto label_27c574;
        case 0x27c578u: goto label_27c578;
        case 0x27c57cu: goto label_27c57c;
        case 0x27c580u: goto label_27c580;
        case 0x27c584u: goto label_27c584;
        case 0x27c588u: goto label_27c588;
        case 0x27c58cu: goto label_27c58c;
        case 0x27c590u: goto label_27c590;
        case 0x27c594u: goto label_27c594;
        case 0x27c598u: goto label_27c598;
        case 0x27c59cu: goto label_27c59c;
        case 0x27c5a0u: goto label_27c5a0;
        case 0x27c5a4u: goto label_27c5a4;
        case 0x27c5a8u: goto label_27c5a8;
        case 0x27c5acu: goto label_27c5ac;
        case 0x27c5b0u: goto label_27c5b0;
        case 0x27c5b4u: goto label_27c5b4;
        case 0x27c5b8u: goto label_27c5b8;
        case 0x27c5bcu: goto label_27c5bc;
        case 0x27c5c0u: goto label_27c5c0;
        case 0x27c5c4u: goto label_27c5c4;
        case 0x27c5c8u: goto label_27c5c8;
        case 0x27c5ccu: goto label_27c5cc;
        case 0x27c5d0u: goto label_27c5d0;
        case 0x27c5d4u: goto label_27c5d4;
        case 0x27c5d8u: goto label_27c5d8;
        case 0x27c5dcu: goto label_27c5dc;
        case 0x27c5e0u: goto label_27c5e0;
        case 0x27c5e4u: goto label_27c5e4;
        case 0x27c5e8u: goto label_27c5e8;
        case 0x27c5ecu: goto label_27c5ec;
        case 0x27c5f0u: goto label_27c5f0;
        case 0x27c5f4u: goto label_27c5f4;
        case 0x27c5f8u: goto label_27c5f8;
        case 0x27c5fcu: goto label_27c5fc;
        case 0x27c600u: goto label_27c600;
        case 0x27c604u: goto label_27c604;
        case 0x27c608u: goto label_27c608;
        case 0x27c60cu: goto label_27c60c;
        case 0x27c610u: goto label_27c610;
        case 0x27c614u: goto label_27c614;
        case 0x27c618u: goto label_27c618;
        case 0x27c61cu: goto label_27c61c;
        case 0x27c620u: goto label_27c620;
        case 0x27c624u: goto label_27c624;
        case 0x27c628u: goto label_27c628;
        case 0x27c62cu: goto label_27c62c;
        case 0x27c630u: goto label_27c630;
        case 0x27c634u: goto label_27c634;
        case 0x27c638u: goto label_27c638;
        case 0x27c63cu: goto label_27c63c;
        case 0x27c640u: goto label_27c640;
        case 0x27c644u: goto label_27c644;
        case 0x27c648u: goto label_27c648;
        case 0x27c64cu: goto label_27c64c;
        case 0x27c650u: goto label_27c650;
        case 0x27c654u: goto label_27c654;
        case 0x27c658u: goto label_27c658;
        case 0x27c65cu: goto label_27c65c;
        case 0x27c660u: goto label_27c660;
        case 0x27c664u: goto label_27c664;
        case 0x27c668u: goto label_27c668;
        case 0x27c66cu: goto label_27c66c;
        case 0x27c670u: goto label_27c670;
        case 0x27c674u: goto label_27c674;
        case 0x27c678u: goto label_27c678;
        case 0x27c67cu: goto label_27c67c;
        case 0x27c680u: goto label_27c680;
        case 0x27c684u: goto label_27c684;
        case 0x27c688u: goto label_27c688;
        case 0x27c68cu: goto label_27c68c;
        case 0x27c690u: goto label_27c690;
        case 0x27c694u: goto label_27c694;
        case 0x27c698u: goto label_27c698;
        case 0x27c69cu: goto label_27c69c;
        case 0x27c6a0u: goto label_27c6a0;
        case 0x27c6a4u: goto label_27c6a4;
        case 0x27c6a8u: goto label_27c6a8;
        case 0x27c6acu: goto label_27c6ac;
        case 0x27c6b0u: goto label_27c6b0;
        case 0x27c6b4u: goto label_27c6b4;
        case 0x27c6b8u: goto label_27c6b8;
        case 0x27c6bcu: goto label_27c6bc;
        case 0x27c6c0u: goto label_27c6c0;
        case 0x27c6c4u: goto label_27c6c4;
        case 0x27c6c8u: goto label_27c6c8;
        case 0x27c6ccu: goto label_27c6cc;
        case 0x27c6d0u: goto label_27c6d0;
        case 0x27c6d4u: goto label_27c6d4;
        case 0x27c6d8u: goto label_27c6d8;
        case 0x27c6dcu: goto label_27c6dc;
        case 0x27c6e0u: goto label_27c6e0;
        case 0x27c6e4u: goto label_27c6e4;
        case 0x27c6e8u: goto label_27c6e8;
        case 0x27c6ecu: goto label_27c6ec;
        case 0x27c6f0u: goto label_27c6f0;
        case 0x27c6f4u: goto label_27c6f4;
        case 0x27c6f8u: goto label_27c6f8;
        case 0x27c6fcu: goto label_27c6fc;
        case 0x27c700u: goto label_27c700;
        case 0x27c704u: goto label_27c704;
        case 0x27c708u: goto label_27c708;
        case 0x27c70cu: goto label_27c70c;
        case 0x27c710u: goto label_27c710;
        case 0x27c714u: goto label_27c714;
        case 0x27c718u: goto label_27c718;
        case 0x27c71cu: goto label_27c71c;
        case 0x27c720u: goto label_27c720;
        case 0x27c724u: goto label_27c724;
        case 0x27c728u: goto label_27c728;
        case 0x27c72cu: goto label_27c72c;
        case 0x27c730u: goto label_27c730;
        case 0x27c734u: goto label_27c734;
        case 0x27c738u: goto label_27c738;
        case 0x27c73cu: goto label_27c73c;
        case 0x27c740u: goto label_27c740;
        case 0x27c744u: goto label_27c744;
        case 0x27c748u: goto label_27c748;
        case 0x27c74cu: goto label_27c74c;
        case 0x27c750u: goto label_27c750;
        case 0x27c754u: goto label_27c754;
        case 0x27c758u: goto label_27c758;
        case 0x27c75cu: goto label_27c75c;
        case 0x27c760u: goto label_27c760;
        case 0x27c764u: goto label_27c764;
        case 0x27c768u: goto label_27c768;
        case 0x27c76cu: goto label_27c76c;
        case 0x27c770u: goto label_27c770;
        case 0x27c774u: goto label_27c774;
        case 0x27c778u: goto label_27c778;
        case 0x27c77cu: goto label_27c77c;
        case 0x27c780u: goto label_27c780;
        case 0x27c784u: goto label_27c784;
        case 0x27c788u: goto label_27c788;
        case 0x27c78cu: goto label_27c78c;
        case 0x27c790u: goto label_27c790;
        case 0x27c794u: goto label_27c794;
        case 0x27c798u: goto label_27c798;
        case 0x27c79cu: goto label_27c79c;
        case 0x27c7a0u: goto label_27c7a0;
        case 0x27c7a4u: goto label_27c7a4;
        case 0x27c7a8u: goto label_27c7a8;
        case 0x27c7acu: goto label_27c7ac;
        case 0x27c7b0u: goto label_27c7b0;
        case 0x27c7b4u: goto label_27c7b4;
        case 0x27c7b8u: goto label_27c7b8;
        case 0x27c7bcu: goto label_27c7bc;
        case 0x27c7c0u: goto label_27c7c0;
        case 0x27c7c4u: goto label_27c7c4;
        case 0x27c7c8u: goto label_27c7c8;
        case 0x27c7ccu: goto label_27c7cc;
        case 0x27c7d0u: goto label_27c7d0;
        case 0x27c7d4u: goto label_27c7d4;
        case 0x27c7d8u: goto label_27c7d8;
        case 0x27c7dcu: goto label_27c7dc;
        case 0x27c7e0u: goto label_27c7e0;
        case 0x27c7e4u: goto label_27c7e4;
        case 0x27c7e8u: goto label_27c7e8;
        case 0x27c7ecu: goto label_27c7ec;
        case 0x27c7f0u: goto label_27c7f0;
        case 0x27c7f4u: goto label_27c7f4;
        case 0x27c7f8u: goto label_27c7f8;
        case 0x27c7fcu: goto label_27c7fc;
        case 0x27c800u: goto label_27c800;
        case 0x27c804u: goto label_27c804;
        case 0x27c808u: goto label_27c808;
        case 0x27c80cu: goto label_27c80c;
        case 0x27c810u: goto label_27c810;
        case 0x27c814u: goto label_27c814;
        case 0x27c818u: goto label_27c818;
        case 0x27c81cu: goto label_27c81c;
        case 0x27c820u: goto label_27c820;
        case 0x27c824u: goto label_27c824;
        case 0x27c828u: goto label_27c828;
        case 0x27c82cu: goto label_27c82c;
        case 0x27c830u: goto label_27c830;
        case 0x27c834u: goto label_27c834;
        case 0x27c838u: goto label_27c838;
        case 0x27c83cu: goto label_27c83c;
        case 0x27c840u: goto label_27c840;
        case 0x27c844u: goto label_27c844;
        case 0x27c848u: goto label_27c848;
        case 0x27c84cu: goto label_27c84c;
        case 0x27c850u: goto label_27c850;
        case 0x27c854u: goto label_27c854;
        case 0x27c858u: goto label_27c858;
        case 0x27c85cu: goto label_27c85c;
        case 0x27c860u: goto label_27c860;
        case 0x27c864u: goto label_27c864;
        case 0x27c868u: goto label_27c868;
        case 0x27c86cu: goto label_27c86c;
        case 0x27c870u: goto label_27c870;
        case 0x27c874u: goto label_27c874;
        case 0x27c878u: goto label_27c878;
        case 0x27c87cu: goto label_27c87c;
        case 0x27c880u: goto label_27c880;
        case 0x27c884u: goto label_27c884;
        case 0x27c888u: goto label_27c888;
        case 0x27c88cu: goto label_27c88c;
        case 0x27c890u: goto label_27c890;
        case 0x27c894u: goto label_27c894;
        case 0x27c898u: goto label_27c898;
        case 0x27c89cu: goto label_27c89c;
        case 0x27c8a0u: goto label_27c8a0;
        case 0x27c8a4u: goto label_27c8a4;
        case 0x27c8a8u: goto label_27c8a8;
        case 0x27c8acu: goto label_27c8ac;
        case 0x27c8b0u: goto label_27c8b0;
        case 0x27c8b4u: goto label_27c8b4;
        case 0x27c8b8u: goto label_27c8b8;
        case 0x27c8bcu: goto label_27c8bc;
        case 0x27c8c0u: goto label_27c8c0;
        case 0x27c8c4u: goto label_27c8c4;
        case 0x27c8c8u: goto label_27c8c8;
        case 0x27c8ccu: goto label_27c8cc;
        case 0x27c8d0u: goto label_27c8d0;
        case 0x27c8d4u: goto label_27c8d4;
        case 0x27c8d8u: goto label_27c8d8;
        case 0x27c8dcu: goto label_27c8dc;
        case 0x27c8e0u: goto label_27c8e0;
        case 0x27c8e4u: goto label_27c8e4;
        case 0x27c8e8u: goto label_27c8e8;
        case 0x27c8ecu: goto label_27c8ec;
        case 0x27c8f0u: goto label_27c8f0;
        case 0x27c8f4u: goto label_27c8f4;
        case 0x27c8f8u: goto label_27c8f8;
        case 0x27c8fcu: goto label_27c8fc;
        case 0x27c900u: goto label_27c900;
        case 0x27c904u: goto label_27c904;
        case 0x27c908u: goto label_27c908;
        case 0x27c90cu: goto label_27c90c;
        case 0x27c910u: goto label_27c910;
        case 0x27c914u: goto label_27c914;
        case 0x27c918u: goto label_27c918;
        case 0x27c91cu: goto label_27c91c;
        case 0x27c920u: goto label_27c920;
        case 0x27c924u: goto label_27c924;
        case 0x27c928u: goto label_27c928;
        case 0x27c92cu: goto label_27c92c;
        case 0x27c930u: goto label_27c930;
        case 0x27c934u: goto label_27c934;
        case 0x27c938u: goto label_27c938;
        case 0x27c93cu: goto label_27c93c;
        case 0x27c940u: goto label_27c940;
        case 0x27c944u: goto label_27c944;
        case 0x27c948u: goto label_27c948;
        case 0x27c94cu: goto label_27c94c;
        case 0x27c950u: goto label_27c950;
        case 0x27c954u: goto label_27c954;
        case 0x27c958u: goto label_27c958;
        case 0x27c95cu: goto label_27c95c;
        case 0x27c960u: goto label_27c960;
        case 0x27c964u: goto label_27c964;
        case 0x27c968u: goto label_27c968;
        case 0x27c96cu: goto label_27c96c;
        case 0x27c970u: goto label_27c970;
        case 0x27c974u: goto label_27c974;
        case 0x27c978u: goto label_27c978;
        case 0x27c97cu: goto label_27c97c;
        case 0x27c980u: goto label_27c980;
        case 0x27c984u: goto label_27c984;
        case 0x27c988u: goto label_27c988;
        case 0x27c98cu: goto label_27c98c;
        case 0x27c990u: goto label_27c990;
        case 0x27c994u: goto label_27c994;
        case 0x27c998u: goto label_27c998;
        case 0x27c99cu: goto label_27c99c;
        case 0x27c9a0u: goto label_27c9a0;
        case 0x27c9a4u: goto label_27c9a4;
        case 0x27c9a8u: goto label_27c9a8;
        case 0x27c9acu: goto label_27c9ac;
        case 0x27c9b0u: goto label_27c9b0;
        case 0x27c9b4u: goto label_27c9b4;
        case 0x27c9b8u: goto label_27c9b8;
        case 0x27c9bcu: goto label_27c9bc;
        case 0x27c9c0u: goto label_27c9c0;
        case 0x27c9c4u: goto label_27c9c4;
        case 0x27c9c8u: goto label_27c9c8;
        case 0x27c9ccu: goto label_27c9cc;
        case 0x27c9d0u: goto label_27c9d0;
        case 0x27c9d4u: goto label_27c9d4;
        case 0x27c9d8u: goto label_27c9d8;
        case 0x27c9dcu: goto label_27c9dc;
        case 0x27c9e0u: goto label_27c9e0;
        case 0x27c9e4u: goto label_27c9e4;
        case 0x27c9e8u: goto label_27c9e8;
        case 0x27c9ecu: goto label_27c9ec;
        case 0x27c9f0u: goto label_27c9f0;
        case 0x27c9f4u: goto label_27c9f4;
        case 0x27c9f8u: goto label_27c9f8;
        case 0x27c9fcu: goto label_27c9fc;
        default: return;
    }

label_27c230:
    // 0x27c230: 0x1317b  dsra        $a2, $at, 5
    ctx->pc = 0x27c230u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> 5);
label_27c234:
    // 0x27c234: 0x9d10  .word       0x00009D10                   # mfhi        $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c234u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27c238:
    // 0x27c238: 0x0  nop
    ctx->pc = 0x27c238u;
    // NOP
label_27c23c:
    // 0x27c23c: 0x0  nop
    ctx->pc = 0x27c23cu;
    // NOP
label_27c240:
    // 0x27c240: 0x1318f  .word       0x0001318F                   # sync # 00013000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c240u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27c244:
    // 0x27c244: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x27c244u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_27c248:
    // 0x27c248: 0x0  nop
    ctx->pc = 0x27c248u;
    // NOP
label_27c24c:
    // 0x27c24c: 0x0  nop
    ctx->pc = 0x27c24cu;
    // NOP
label_27c250:
    // 0x27c250: 0x131a3  .word       0x000131A3                   # negu        $a2, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c250u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27c254:
    // 0x27c254: 0x7b10  .word       0x00007B10                   # mfhi        $t7 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c254u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27c258:
    // 0x27c258: 0x0  nop
    ctx->pc = 0x27c258u;
    // NOP
label_27c25c:
    // 0x27c25c: 0x0  nop
    ctx->pc = 0x27c25cu;
    // NOP
label_27c260:
    // 0x27c260: 0x131b3  tltu        $zero, $at, 198
    ctx->pc = 0x27c260u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c264:
    // 0x27c264: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x27c264u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27c268:
    // 0x27c268: 0x0  nop
    ctx->pc = 0x27c268u;
    // NOP
label_27c26c:
    // 0x27c26c: 0x0  nop
    ctx->pc = 0x27c26cu;
    // NOP
label_27c270:
    // 0x27c270: 0x131c3  sra         $a2, $at, 7
    ctx->pc = 0x27c270u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), 7));
label_27c274:
    // 0x27c274: 0x6fb0  tge         $zero, $zero, 446
    ctx->pc = 0x27c274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c278:
    // 0x27c278: 0x0  nop
    ctx->pc = 0x27c278u;
    // NOP
label_27c27c:
    // 0x27c27c: 0x0  nop
    ctx->pc = 0x27c27cu;
    // NOP
label_27c280:
    // 0x27c280: 0x131d1  .word       0x000131D1                   # mthi        $zero # 000131C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c280u;
    ctx->hi = GPR_U64(ctx, 0);
label_27c284:
    // 0x27c284: 0xb080  sll         $s6, $zero, 2
    ctx->pc = 0x27c284u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27c288:
    // 0x27c288: 0x0  nop
    ctx->pc = 0x27c288u;
    // NOP
label_27c28c:
    // 0x27c28c: 0x0  nop
    ctx->pc = 0x27c28cu;
    // NOP
label_27c290:
    // 0x27c290: 0x131e8  .word       0x000131E8                   # mfsa        $a2 # 000101C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27c290u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_27c294:
    // 0x27c294: 0xc170  tge         $zero, $zero, 773
    ctx->pc = 0x27c294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c298:
    // 0x27c298: 0x0  nop
    ctx->pc = 0x27c298u;
    // NOP
label_27c29c:
    // 0x27c29c: 0x0  nop
    ctx->pc = 0x27c29cu;
    // NOP
label_27c2a0:
    // 0x27c2a0: 0x13201  .word       0x00013201                   # INVALID     $zero, $at, 0x3201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c2a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27C2A0 raw=0x00013201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c2a4:
    // 0x27c2a4: 0x8b70  tge         $zero, $zero, 557
    ctx->pc = 0x27c2a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c2a8:
    // 0x27c2a8: 0x0  nop
    ctx->pc = 0x27c2a8u;
    // NOP
label_27c2ac:
    // 0x27c2ac: 0x0  nop
    ctx->pc = 0x27c2acu;
    // NOP
label_27c2b0:
    // 0x27c2b0: 0x13213  .word       0x00013213                   # mtlo        $zero # 00013200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c2b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_27c2b4:
    // 0x27c2b4: 0x8ad0  .word       0x00008AD0                   # mfhi        $s1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c2b4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27c2b8:
    // 0x27c2b8: 0x0  nop
    ctx->pc = 0x27c2b8u;
    // NOP
label_27c2bc:
    // 0x27c2bc: 0x0  nop
    ctx->pc = 0x27c2bcu;
    // NOP
label_27c2c0:
    // 0x27c2c0: 0x13225  .word       0x00013225                   # or          $a2, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c2c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27c2c4:
    // 0x27c2c4: 0xa130  tge         $zero, $zero, 644
    ctx->pc = 0x27c2c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c2c8:
    // 0x27c2c8: 0x0  nop
    ctx->pc = 0x27c2c8u;
    // NOP
label_27c2cc:
    // 0x27c2cc: 0x0  nop
    ctx->pc = 0x27c2ccu;
    // NOP
label_27c2d0:
    // 0x27c2d0: 0x1323a  dsrl        $a2, $at, 8
    ctx->pc = 0x27c2d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> 8);
label_27c2d4:
    // 0x27c2d4: 0xc1e0  .word       0x0000C1E0                   # add         $t8, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c2d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_27c2d8:
    // 0x27c2d8: 0x0  nop
    ctx->pc = 0x27c2d8u;
    // NOP
label_27c2dc:
    // 0x27c2dc: 0x0  nop
    ctx->pc = 0x27c2dcu;
    // NOP
label_27c2e0:
    // 0x27c2e0: 0x13253  .word       0x00013253                   # mtlo        $zero # 00013240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c2e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_27c2e4:
    // 0x27c2e4: 0x9300  sll         $s2, $zero, 12
    ctx->pc = 0x27c2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27c2e8:
    // 0x27c2e8: 0x0  nop
    ctx->pc = 0x27c2e8u;
    // NOP
label_27c2ec:
    // 0x27c2ec: 0x0  nop
    ctx->pc = 0x27c2ecu;
    // NOP
label_27c2f0:
    // 0x27c2f0: 0x13266  .word       0x00013266                   # xor         $a2, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c2f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27c2f4:
    // 0x27c2f4: 0xaac0  sll         $s5, $zero, 11
    ctx->pc = 0x27c2f4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27c2f8:
    // 0x27c2f8: 0x0  nop
    ctx->pc = 0x27c2f8u;
    // NOP
label_27c2fc:
    // 0x27c2fc: 0x0  nop
    ctx->pc = 0x27c2fcu;
    // NOP
label_27c300:
    // 0x27c300: 0x1327c  dsll32      $a2, $at, 9
    ctx->pc = 0x27c300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << (32 + 9));
label_27c304:
    // 0x27c304: 0x9dd0  .word       0x00009DD0                   # mfhi        $s3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c304u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27c308:
    // 0x27c308: 0x0  nop
    ctx->pc = 0x27c308u;
    // NOP
label_27c30c:
    // 0x27c30c: 0x0  nop
    ctx->pc = 0x27c30cu;
    // NOP
label_27c310:
    // 0x27c310: 0x13290  .word       0x00013290                   # mfhi        $a2 # 00010280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c310u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_27c314:
    // 0x27c314: 0xe1a0  .word       0x0000E1A0                   # add         $gp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_27c318:
    // 0x27c318: 0x0  nop
    ctx->pc = 0x27c318u;
    // NOP
label_27c31c:
    // 0x27c31c: 0x0  nop
    ctx->pc = 0x27c31cu;
    // NOP
label_27c320:
    // 0x27c320: 0x132ad  .word       0x000132AD                   # daddu       $a2, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27c324:
    // 0x27c324: 0xf840  sll         $ra, $zero, 1
    ctx->pc = 0x27c324u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27c328:
    // 0x27c328: 0x0  nop
    ctx->pc = 0x27c328u;
    // NOP
label_27c32c:
    // 0x27c32c: 0x0  nop
    ctx->pc = 0x27c32cu;
    // NOP
label_27c330:
    // 0x27c330: 0x132cd  break       1, 203
    ctx->pc = 0x27c330u;
    runtime->handleBreak(rdram, ctx);
label_27c334:
    // 0x27c334: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x27c334u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27c338:
    // 0x27c338: 0x0  nop
    ctx->pc = 0x27c338u;
    // NOP
label_27c33c:
    // 0x27c33c: 0x0  nop
    ctx->pc = 0x27c33cu;
    // NOP
label_27c340:
    // 0x27c340: 0x132e6  .word       0x000132E6                   # xor         $a2, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27c344:
    // 0x27c344: 0xab10  .word       0x0000AB10                   # mfhi        $s5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c344u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27c348:
    // 0x27c348: 0x0  nop
    ctx->pc = 0x27c348u;
    // NOP
label_27c34c:
    // 0x27c34c: 0x0  nop
    ctx->pc = 0x27c34cu;
    // NOP
label_27c350:
    // 0x27c350: 0x132fc  dsll32      $a2, $at, 11
    ctx->pc = 0x27c350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << (32 + 11));
label_27c354:
    // 0x27c354: 0xad10  .word       0x0000AD10                   # mfhi        $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c354u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27c358:
    // 0x27c358: 0x0  nop
    ctx->pc = 0x27c358u;
    // NOP
label_27c35c:
    // 0x27c35c: 0x0  nop
    ctx->pc = 0x27c35cu;
    // NOP
label_27c360:
    // 0x27c360: 0x13312  .word       0x00013312                   # mflo        $a2 # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c360u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_27c364:
    // 0x27c364: 0x7600  sll         $t6, $zero, 24
    ctx->pc = 0x27c364u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_27c368:
    // 0x27c368: 0x0  nop
    ctx->pc = 0x27c368u;
    // NOP
label_27c36c:
    // 0x27c36c: 0x0  nop
    ctx->pc = 0x27c36cu;
    // NOP
label_27c370:
    // 0x27c370: 0x13321  .word       0x00013321                   # addu        $a2, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27c374:
    // 0x27c374: 0x7590  .word       0x00007590                   # mfhi        $t6 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c374u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27c378:
    // 0x27c378: 0x0  nop
    ctx->pc = 0x27c378u;
    // NOP
label_27c37c:
    // 0x27c37c: 0x0  nop
    ctx->pc = 0x27c37cu;
    // NOP
label_27c380:
    // 0x27c380: 0x13330  tge         $zero, $at, 204
    ctx->pc = 0x27c380u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c384:
    // 0x27c384: 0x7a50  .word       0x00007A50                   # mfhi        $t7 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c384u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27c388:
    // 0x27c388: 0x0  nop
    ctx->pc = 0x27c388u;
    // NOP
label_27c38c:
    // 0x27c38c: 0x0  nop
    ctx->pc = 0x27c38cu;
    // NOP
label_27c390:
    // 0x27c390: 0x13340  sll         $a2, $at, 13
    ctx->pc = 0x27c390u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 13));
label_27c394:
    // 0x27c394: 0x96d0  .word       0x000096D0                   # mfhi        $s2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c394u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27c398:
    // 0x27c398: 0x0  nop
    ctx->pc = 0x27c398u;
    // NOP
label_27c39c:
    // 0x27c39c: 0x0  nop
    ctx->pc = 0x27c39cu;
    // NOP
label_27c3a0:
    // 0x27c3a0: 0x13353  .word       0x00013353                   # mtlo        $zero # 00013340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c3a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_27c3a4:
    // 0x27c3a4: 0xac00  sll         $s5, $zero, 16
    ctx->pc = 0x27c3a4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_27c3a8:
    // 0x27c3a8: 0x0  nop
    ctx->pc = 0x27c3a8u;
    // NOP
label_27c3ac:
    // 0x27c3ac: 0x0  nop
    ctx->pc = 0x27c3acu;
    // NOP
label_27c3b0:
    // 0x27c3b0: 0x13369  .word       0x00013369                   # mtsa        $zero # 00013340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27c3b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27c3b4:
    // 0x27c3b4: 0xcdc0  sll         $t9, $zero, 23
    ctx->pc = 0x27c3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27c3b8:
    // 0x27c3b8: 0x0  nop
    ctx->pc = 0x27c3b8u;
    // NOP
label_27c3bc:
    // 0x27c3bc: 0x0  nop
    ctx->pc = 0x27c3bcu;
    // NOP
label_27c3c0:
    // 0x27c3c0: 0x13383  sra         $a2, $at, 14
    ctx->pc = 0x27c3c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), 14));
label_27c3c4:
    // 0x27c3c4: 0x7fb0  tge         $zero, $zero, 510
    ctx->pc = 0x27c3c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c3c8:
    // 0x27c3c8: 0x0  nop
    ctx->pc = 0x27c3c8u;
    // NOP
label_27c3cc:
    // 0x27c3cc: 0x0  nop
    ctx->pc = 0x27c3ccu;
    // NOP
label_27c3d0:
    // 0x27c3d0: 0x13393  .word       0x00013393                   # mtlo        $zero # 00013380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c3d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_27c3d4:
    // 0x27c3d4: 0x8010  mfhi        $s0
    ctx->pc = 0x27c3d4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27c3d8:
    // 0x27c3d8: 0x0  nop
    ctx->pc = 0x27c3d8u;
    // NOP
label_27c3dc:
    // 0x27c3dc: 0x0  nop
    ctx->pc = 0x27c3dcu;
    // NOP
label_27c3e0:
    // 0x27c3e0: 0x133a4  .word       0x000133A4                   # and         $a2, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c3e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27c3e4:
    // 0x27c3e4: 0x7160  .word       0x00007160                   # add         $t6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c3e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27c3e8:
    // 0x27c3e8: 0x0  nop
    ctx->pc = 0x27c3e8u;
    // NOP
label_27c3ec:
    // 0x27c3ec: 0x0  nop
    ctx->pc = 0x27c3ecu;
    // NOP
label_27c3f0:
    // 0x27c3f0: 0x133b3  tltu        $zero, $at, 206
    ctx->pc = 0x27c3f0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c3f4:
    // 0x27c3f4: 0xb9e0  .word       0x0000B9E0                   # add         $s7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c3f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27c3f8:
    // 0x27c3f8: 0x0  nop
    ctx->pc = 0x27c3f8u;
    // NOP
label_27c3fc:
    // 0x27c3fc: 0x0  nop
    ctx->pc = 0x27c3fcu;
    // NOP
label_27c400:
    // 0x27c400: 0x133cb  .word       0x000133CB                   # movn        $a2, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c400u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_27c404:
    // 0x27c404: 0x8a10  .word       0x00008A10                   # mfhi        $s1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c404u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27c408:
    // 0x27c408: 0x0  nop
    ctx->pc = 0x27c408u;
    // NOP
label_27c40c:
    // 0x27c40c: 0x0  nop
    ctx->pc = 0x27c40cu;
    // NOP
label_27c410:
    // 0x27c410: 0x133dd  .word       0x000133DD                   # dmultu      $zero, $at # 000033C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27C410 raw=0x000133DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c414:
    // 0x27c414: 0x7e20  .word       0x00007E20                   # add         $t7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27c418:
    // 0x27c418: 0x0  nop
    ctx->pc = 0x27c418u;
    // NOP
label_27c41c:
    // 0x27c41c: 0x0  nop
    ctx->pc = 0x27c41cu;
    // NOP
label_27c420:
    // 0x27c420: 0x133ed  .word       0x000133ED                   # daddu       $a2, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27c424:
    // 0x27c424: 0x5ad0  .word       0x00005AD0                   # mfhi        $t3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c424u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27c428:
    // 0x27c428: 0x0  nop
    ctx->pc = 0x27c428u;
    // NOP
label_27c42c:
    // 0x27c42c: 0x0  nop
    ctx->pc = 0x27c42cu;
    // NOP
label_27c430:
    // 0x27c430: 0x133f9  .word       0x000133F9                   # INVALID     $zero, $at, 0x33F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27C430 raw=0x000133F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c434:
    // 0x27c434: 0x6840  sll         $t5, $zero, 1
    ctx->pc = 0x27c434u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27c438:
    // 0x27c438: 0x0  nop
    ctx->pc = 0x27c438u;
    // NOP
label_27c43c:
    // 0x27c43c: 0x0  nop
    ctx->pc = 0x27c43cu;
    // NOP
label_27c440:
    // 0x27c440: 0x13407  .word       0x00013407                   # srav        $a2, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c440u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27c444:
    // 0x27c444: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x27c444u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27c448:
    // 0x27c448: 0x0  nop
    ctx->pc = 0x27c448u;
    // NOP
label_27c44c:
    // 0x27c44c: 0x0  nop
    ctx->pc = 0x27c44cu;
    // NOP
label_27c450:
    // 0x27c450: 0x13414  .word       0x00013414                   # dsllv       $a2, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27c454:
    // 0x27c454: 0x6920  .word       0x00006920                   # add         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27c458:
    // 0x27c458: 0x0  nop
    ctx->pc = 0x27c458u;
    // NOP
label_27c45c:
    // 0x27c45c: 0x0  nop
    ctx->pc = 0x27c45cu;
    // NOP
label_27c460:
    // 0x27c460: 0x13422  .word       0x00013422                   # neg         $a2, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c460u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_27c464:
    // 0x27c464: 0xa620  .word       0x0000A620                   # add         $s4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27c468:
    // 0x27c468: 0x0  nop
    ctx->pc = 0x27c468u;
    // NOP
label_27c46c:
    // 0x27c46c: 0x0  nop
    ctx->pc = 0x27c46cu;
    // NOP
label_27c470:
    // 0x27c470: 0x13437  .word       0x00013437                   # INVALID     $zero, $at, 0x3437 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27C470 raw=0x00013437"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c474:
    // 0x27c474: 0xb380  sll         $s6, $zero, 14
    ctx->pc = 0x27c474u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_27c478:
    // 0x27c478: 0x0  nop
    ctx->pc = 0x27c478u;
    // NOP
label_27c47c:
    // 0x27c47c: 0x0  nop
    ctx->pc = 0x27c47cu;
    // NOP
label_27c480:
    // 0x27c480: 0x1344e  .word       0x0001344E                   # INVALID     $zero, $at, 0x344E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27C480 raw=0x0001344E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c484:
    // 0x27c484: 0x5c70  tge         $zero, $zero, 369
    ctx->pc = 0x27c484u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c488:
    // 0x27c488: 0x0  nop
    ctx->pc = 0x27c488u;
    // NOP
label_27c48c:
    // 0x27c48c: 0x0  nop
    ctx->pc = 0x27c48cu;
    // NOP
label_27c490:
    // 0x27c490: 0x1345a  .word       0x0001345A                   # div         $a2, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c490u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27c494:
    // 0x27c494: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x27c494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c498:
    // 0x27c498: 0x0  nop
    ctx->pc = 0x27c498u;
    // NOP
label_27c49c:
    // 0x27c49c: 0x0  nop
    ctx->pc = 0x27c49cu;
    // NOP
label_27c4a0:
    // 0x27c4a0: 0x1346e  .word       0x0001346E                   # dsub        $a2, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c4a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_27c4a4:
    // 0x27c4a4: 0xa190  .word       0x0000A190                   # mfhi        $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c4a4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27c4a8:
    // 0x27c4a8: 0x0  nop
    ctx->pc = 0x27c4a8u;
    // NOP
label_27c4ac:
    // 0x27c4ac: 0x0  nop
    ctx->pc = 0x27c4acu;
    // NOP
label_27c4b0:
    // 0x27c4b0: 0x13483  sra         $a2, $at, 18
    ctx->pc = 0x27c4b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), 18));
label_27c4b4:
    // 0x27c4b4: 0xe860  .word       0x0000E860                   # add         $sp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c4b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_27c4b8:
    // 0x27c4b8: 0x0  nop
    ctx->pc = 0x27c4b8u;
    // NOP
label_27c4bc:
    // 0x27c4bc: 0x0  nop
    ctx->pc = 0x27c4bcu;
    // NOP
label_27c4c0:
    // 0x27c4c0: 0x134a1  .word       0x000134A1                   # addu        $a2, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27c4c4:
    // 0x27c4c4: 0x8330  tge         $zero, $zero, 524
    ctx->pc = 0x27c4c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c4c8:
    // 0x27c4c8: 0x0  nop
    ctx->pc = 0x27c4c8u;
    // NOP
label_27c4cc:
    // 0x27c4cc: 0x0  nop
    ctx->pc = 0x27c4ccu;
    // NOP
label_27c4d0:
    // 0x27c4d0: 0x134b2  tlt         $zero, $at, 210
    ctx->pc = 0x27c4d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c4d4:
    // 0x27c4d4: 0xf4b0  tge         $zero, $zero, 978
    ctx->pc = 0x27c4d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c4d8:
    // 0x27c4d8: 0x0  nop
    ctx->pc = 0x27c4d8u;
    // NOP
label_27c4dc:
    // 0x27c4dc: 0x0  nop
    ctx->pc = 0x27c4dcu;
    // NOP
label_27c4e0:
    // 0x27c4e0: 0x134d1  .word       0x000134D1                   # mthi        $zero # 000134C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c4e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27c4e4:
    // 0x27c4e4: 0x8880  sll         $s1, $zero, 2
    ctx->pc = 0x27c4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27c4e8:
    // 0x27c4e8: 0x0  nop
    ctx->pc = 0x27c4e8u;
    // NOP
label_27c4ec:
    // 0x27c4ec: 0x0  nop
    ctx->pc = 0x27c4ecu;
    // NOP
label_27c4f0:
    // 0x27c4f0: 0x134e3  .word       0x000134E3                   # negu        $a2, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27c4f4:
    // 0x27c4f4: 0x62f0  tge         $zero, $zero, 395
    ctx->pc = 0x27c4f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c4f8:
    // 0x27c4f8: 0x0  nop
    ctx->pc = 0x27c4f8u;
    // NOP
label_27c4fc:
    // 0x27c4fc: 0x0  nop
    ctx->pc = 0x27c4fcu;
    // NOP
label_27c500:
    // 0x27c500: 0x134f0  tge         $zero, $at, 211
    ctx->pc = 0x27c500u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c504:
    // 0x27c504: 0xe740  sll         $gp, $zero, 29
    ctx->pc = 0x27c504u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_27c508:
    // 0x27c508: 0x0  nop
    ctx->pc = 0x27c508u;
    // NOP
label_27c50c:
    // 0x27c50c: 0x0  nop
    ctx->pc = 0x27c50cu;
    // NOP
label_27c510:
    // 0x27c510: 0x1350d  break       1, 212
    ctx->pc = 0x27c510u;
    runtime->handleBreak(rdram, ctx);
label_27c514:
    // 0x27c514: 0xb8c0  sll         $s7, $zero, 3
    ctx->pc = 0x27c514u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_27c518:
    // 0x27c518: 0x0  nop
    ctx->pc = 0x27c518u;
    // NOP
label_27c51c:
    // 0x27c51c: 0x0  nop
    ctx->pc = 0x27c51cu;
    // NOP
label_27c520:
    // 0x27c520: 0x13525  .word       0x00013525                   # or          $a2, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27c524:
    // 0x27c524: 0x9c30  tge         $zero, $zero, 624
    ctx->pc = 0x27c524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c528:
    // 0x27c528: 0x0  nop
    ctx->pc = 0x27c528u;
    // NOP
label_27c52c:
    // 0x27c52c: 0x0  nop
    ctx->pc = 0x27c52cu;
    // NOP
label_27c530:
    // 0x27c530: 0x13539  .word       0x00013539                   # INVALID     $zero, $at, 0x3539 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27C530 raw=0x00013539"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c534:
    // 0x27c534: 0x6b10  .word       0x00006B10                   # mfhi        $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c534u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27c538:
    // 0x27c538: 0x0  nop
    ctx->pc = 0x27c538u;
    // NOP
label_27c53c:
    // 0x27c53c: 0x0  nop
    ctx->pc = 0x27c53cu;
    // NOP
label_27c540:
    // 0x27c540: 0x13547  .word       0x00013547                   # srav        $a2, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c540u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27c544:
    // 0x27c544: 0x7350  .word       0x00007350                   # mfhi        $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c544u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27c548:
    // 0x27c548: 0x0  nop
    ctx->pc = 0x27c548u;
    // NOP
label_27c54c:
    // 0x27c54c: 0x0  nop
    ctx->pc = 0x27c54cu;
    // NOP
label_27c550:
    // 0x27c550: 0x13556  .word       0x00013556                   # dsrlv       $a2, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27c554:
    // 0x27c554: 0x79a0  .word       0x000079A0                   # add         $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c554u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27c558:
    // 0x27c558: 0x0  nop
    ctx->pc = 0x27c558u;
    // NOP
label_27c55c:
    // 0x27c55c: 0x0  nop
    ctx->pc = 0x27c55cu;
    // NOP
label_27c560:
    // 0x27c560: 0x13566  .word       0x00013566                   # xor         $a2, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27c564:
    // 0x27c564: 0x4620  .word       0x00004620                   # add         $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27c568:
    // 0x27c568: 0x0  nop
    ctx->pc = 0x27c568u;
    // NOP
label_27c56c:
    // 0x27c56c: 0x0  nop
    ctx->pc = 0x27c56cu;
    // NOP
label_27c570:
    // 0x27c570: 0x1356f  .word       0x0001356F                   # dsubu       $a2, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27c574:
    // 0x27c574: 0x5e40  sll         $t3, $zero, 25
    ctx->pc = 0x27c574u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_27c578:
    // 0x27c578: 0x0  nop
    ctx->pc = 0x27c578u;
    // NOP
label_27c57c:
    // 0x27c57c: 0x0  nop
    ctx->pc = 0x27c57cu;
    // NOP
label_27c580:
    // 0x27c580: 0x1357b  dsra        $a2, $at, 21
    ctx->pc = 0x27c580u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> 21);
label_27c584:
    // 0x27c584: 0x6d40  sll         $t5, $zero, 21
    ctx->pc = 0x27c584u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_27c588:
    // 0x27c588: 0x0  nop
    ctx->pc = 0x27c588u;
    // NOP
label_27c58c:
    // 0x27c58c: 0x0  nop
    ctx->pc = 0x27c58cu;
    // NOP
label_27c590:
    // 0x27c590: 0x13589  .word       0x00013589                   # jalr        $a2, $zero # 00010580 <InstrIdType: CPU_SPECIAL>
label_27c594:
    if (ctx->pc == 0x27C594u) {
        ctx->pc = 0x27C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C590u;
        // 0x27c594: 0x51a0  .word       0x000051A0                   # add         $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C598u;
        goto label_27c598;
    }
    ctx->pc = 0x27C590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 6, 0x27C598u);
        ctx->pc = 0x27C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C590u;
        // 0x27c594: 0x51a0  .word       0x000051A0                   # add         $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C590u, 0x27C598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27C598u;
label_27c598:
    // 0x27c598: 0x0  nop
    ctx->pc = 0x27c598u;
    // NOP
label_27c59c:
    // 0x27c59c: 0x0  nop
    ctx->pc = 0x27c59cu;
    // NOP
label_27c5a0:
    // 0x27c5a0: 0x13594  .word       0x00013594                   # dsllv       $a2, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c5a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27c5a4:
    // 0x27c5a4: 0x80a0  .word       0x000080A0                   # add         $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c5a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27c5a8:
    // 0x27c5a8: 0x0  nop
    ctx->pc = 0x27c5a8u;
    // NOP
label_27c5ac:
    // 0x27c5ac: 0x0  nop
    ctx->pc = 0x27c5acu;
    // NOP
label_27c5b0:
    // 0x27c5b0: 0x135a5  .word       0x000135A5                   # or          $a2, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c5b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27c5b4:
    // 0x27c5b4: 0x8880  sll         $s1, $zero, 2
    ctx->pc = 0x27c5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27c5b8:
    // 0x27c5b8: 0x0  nop
    ctx->pc = 0x27c5b8u;
    // NOP
label_27c5bc:
    // 0x27c5bc: 0x0  nop
    ctx->pc = 0x27c5bcu;
    // NOP
label_27c5c0:
    // 0x27c5c0: 0x135b7  .word       0x000135B7                   # INVALID     $zero, $at, 0x35B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c5c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27C5C0 raw=0x000135B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c5c4:
    // 0x27c5c4: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c5c4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27c5c8:
    // 0x27c5c8: 0x0  nop
    ctx->pc = 0x27c5c8u;
    // NOP
label_27c5cc:
    // 0x27c5cc: 0x0  nop
    ctx->pc = 0x27c5ccu;
    // NOP
label_27c5d0:
    // 0x27c5d0: 0x135c3  sra         $a2, $at, 23
    ctx->pc = 0x27c5d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 1), 23));
label_27c5d4:
    // 0x27c5d4: 0x8710  .word       0x00008710                   # mfhi        $s0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c5d4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27c5d8:
    // 0x27c5d8: 0x0  nop
    ctx->pc = 0x27c5d8u;
    // NOP
label_27c5dc:
    // 0x27c5dc: 0x0  nop
    ctx->pc = 0x27c5dcu;
    // NOP
label_27c5e0:
    // 0x27c5e0: 0x135d4  .word       0x000135D4                   # dsllv       $a2, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c5e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27c5e4:
    // 0x27c5e4: 0x7290  .word       0x00007290                   # mfhi        $t6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c5e4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27c5e8:
    // 0x27c5e8: 0x0  nop
    ctx->pc = 0x27c5e8u;
    // NOP
label_27c5ec:
    // 0x27c5ec: 0x0  nop
    ctx->pc = 0x27c5ecu;
    // NOP
label_27c5f0:
    // 0x27c5f0: 0x135e3  .word       0x000135E3                   # negu        $a2, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27c5f4:
    // 0x27c5f4: 0x9160  .word       0x00009160                   # add         $s2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c5f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27c5f8:
    // 0x27c5f8: 0x0  nop
    ctx->pc = 0x27c5f8u;
    // NOP
label_27c5fc:
    // 0x27c5fc: 0x0  nop
    ctx->pc = 0x27c5fcu;
    // NOP
label_27c600:
    // 0x27c600: 0x135f6  tne         $zero, $at, 215
    ctx->pc = 0x27c600u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c604:
    // 0x27c604: 0x8e30  tge         $zero, $zero, 568
    ctx->pc = 0x27c604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c608:
    // 0x27c608: 0x0  nop
    ctx->pc = 0x27c608u;
    // NOP
label_27c60c:
    // 0x27c60c: 0x0  nop
    ctx->pc = 0x27c60cu;
    // NOP
label_27c610:
    // 0x27c610: 0x13608  .word       0x00013608                   # jr          $zero # 00013600 <InstrIdType: CPU_SPECIAL>
label_27c614:
    if (ctx->pc == 0x27C614u) {
        ctx->pc = 0x27C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C610u;
        // 0x27c614: 0x52e0  .word       0x000052E0                   # add         $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C618u;
        goto label_27c618;
    }
    ctx->pc = 0x27C610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C610u;
        // 0x27c614: 0x52e0  .word       0x000052E0                   # add         $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C610u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27C618u;
label_27c618:
    // 0x27c618: 0x0  nop
    ctx->pc = 0x27c618u;
    // NOP
label_27c61c:
    // 0x27c61c: 0x0  nop
    ctx->pc = 0x27c61cu;
    // NOP
label_27c620:
    // 0x27c620: 0x13613  .word       0x00013613                   # mtlo        $zero # 00013600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c620u;
    ctx->lo = GPR_U64(ctx, 0);
label_27c624:
    // 0x27c624: 0x9cf0  tge         $zero, $zero, 627
    ctx->pc = 0x27c624u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c628:
    // 0x27c628: 0x0  nop
    ctx->pc = 0x27c628u;
    // NOP
label_27c62c:
    // 0x27c62c: 0x0  nop
    ctx->pc = 0x27c62cu;
    // NOP
label_27c630:
    // 0x27c630: 0x13627  .word       0x00013627                   # nor         $a2, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c630u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27c634:
    // 0x27c634: 0xab10  .word       0x0000AB10                   # mfhi        $s5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c634u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27c638:
    // 0x27c638: 0x0  nop
    ctx->pc = 0x27c638u;
    // NOP
label_27c63c:
    // 0x27c63c: 0x0  nop
    ctx->pc = 0x27c63cu;
    // NOP
label_27c640:
    // 0x27c640: 0x1363d  .word       0x0001363D                   # INVALID     $zero, $at, 0x363D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27C640 raw=0x0001363D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c644:
    // 0x27c644: 0xdab0  tge         $zero, $zero, 874
    ctx->pc = 0x27c644u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c648:
    // 0x27c648: 0x0  nop
    ctx->pc = 0x27c648u;
    // NOP
label_27c64c:
    // 0x27c64c: 0x0  nop
    ctx->pc = 0x27c64cu;
    // NOP
label_27c650:
    // 0x27c650: 0x13659  .word       0x00013659                   # multu       $zero, $at # 00003640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c650u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_27c654:
    // 0x27c654: 0xc210  .word       0x0000C210                   # mfhi        $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c654u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27c658:
    // 0x27c658: 0x0  nop
    ctx->pc = 0x27c658u;
    // NOP
label_27c65c:
    // 0x27c65c: 0x0  nop
    ctx->pc = 0x27c65cu;
    // NOP
label_27c660:
    // 0x27c660: 0x13672  tlt         $zero, $at, 217
    ctx->pc = 0x27c660u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c664:
    // 0x27c664: 0x6d10  .word       0x00006D10                   # mfhi        $t5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c664u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27c668:
    // 0x27c668: 0x0  nop
    ctx->pc = 0x27c668u;
    // NOP
label_27c66c:
    // 0x27c66c: 0x0  nop
    ctx->pc = 0x27c66cu;
    // NOP
label_27c670:
    // 0x27c670: 0x13680  sll         $a2, $at, 26
    ctx->pc = 0x27c670u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_27c674:
    // 0x27c674: 0xebc0  sll         $sp, $zero, 15
    ctx->pc = 0x27c674u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_27c678:
    // 0x27c678: 0x0  nop
    ctx->pc = 0x27c678u;
    // NOP
label_27c67c:
    // 0x27c67c: 0x0  nop
    ctx->pc = 0x27c67cu;
    // NOP
label_27c680:
    // 0x27c680: 0x1369e  .word       0x0001369E                   # ddiv        $a2, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27C680 raw=0x0001369E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c684:
    // 0x27c684: 0xd6d0  .word       0x0000D6D0                   # mfhi        $k0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c684u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_27c688:
    // 0x27c688: 0x0  nop
    ctx->pc = 0x27c688u;
    // NOP
label_27c68c:
    // 0x27c68c: 0x0  nop
    ctx->pc = 0x27c68cu;
    // NOP
label_27c690:
    // 0x27c690: 0x136b9  .word       0x000136B9                   # INVALID     $zero, $at, 0x36B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27C690 raw=0x000136B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c694:
    // 0x27c694: 0x108a0  .word       0x000108A0                   # add         $at, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_27c698:
    // 0x27c698: 0x0  nop
    ctx->pc = 0x27c698u;
    // NOP
label_27c69c:
    // 0x27c69c: 0x0  nop
    ctx->pc = 0x27c69cu;
    // NOP
label_27c6a0:
    // 0x27c6a0: 0x136db  .word       0x000136DB                   # divu        $a2, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c6a0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27c6a4:
    // 0x27c6a4: 0x9be0  .word       0x00009BE0                   # add         $s3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c6a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27c6a8:
    // 0x27c6a8: 0x0  nop
    ctx->pc = 0x27c6a8u;
    // NOP
label_27c6ac:
    // 0x27c6ac: 0x0  nop
    ctx->pc = 0x27c6acu;
    // NOP
label_27c6b0:
    // 0x27c6b0: 0x136ef  .word       0x000136EF                   # dsubu       $a2, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c6b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27c6b4:
    // 0x27c6b4: 0xa300  sll         $s4, $zero, 12
    ctx->pc = 0x27c6b4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27c6b8:
    // 0x27c6b8: 0x0  nop
    ctx->pc = 0x27c6b8u;
    // NOP
label_27c6bc:
    // 0x27c6bc: 0x0  nop
    ctx->pc = 0x27c6bcu;
    // NOP
label_27c6c0:
    // 0x27c6c0: 0x13704  .word       0x00013704                   # sllv        $a2, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27c6c4:
    // 0x27c6c4: 0xc040  sll         $t8, $zero, 1
    ctx->pc = 0x27c6c4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27c6c8:
    // 0x27c6c8: 0x0  nop
    ctx->pc = 0x27c6c8u;
    // NOP
label_27c6cc:
    // 0x27c6cc: 0x0  nop
    ctx->pc = 0x27c6ccu;
    // NOP
label_27c6d0:
    // 0x27c6d0: 0x1371d  .word       0x0001371D                   # dmultu      $zero, $at # 00003700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c6d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27C6D0 raw=0x0001371D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c6d4:
    // 0x27c6d4: 0xbb50  .word       0x0000BB50                   # mfhi        $s7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c6d4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27c6d8:
    // 0x27c6d8: 0x0  nop
    ctx->pc = 0x27c6d8u;
    // NOP
label_27c6dc:
    // 0x27c6dc: 0x0  nop
    ctx->pc = 0x27c6dcu;
    // NOP
label_27c6e0:
    // 0x27c6e0: 0x13735  .word       0x00013735                   # INVALID     $zero, $at, 0x3735 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c6e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27C6E0 raw=0x00013735"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c6e4:
    // 0x27c6e4: 0x87b0  tge         $zero, $zero, 542
    ctx->pc = 0x27c6e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c6e8:
    // 0x27c6e8: 0x0  nop
    ctx->pc = 0x27c6e8u;
    // NOP
label_27c6ec:
    // 0x27c6ec: 0x0  nop
    ctx->pc = 0x27c6ecu;
    // NOP
label_27c6f0:
    // 0x27c6f0: 0x13746  .word       0x00013746                   # srlv        $a2, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27c6f4:
    // 0x27c6f4: 0xa220  .word       0x0000A220                   # add         $s4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c6f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27c6f8:
    // 0x27c6f8: 0x0  nop
    ctx->pc = 0x27c6f8u;
    // NOP
label_27c6fc:
    // 0x27c6fc: 0x0  nop
    ctx->pc = 0x27c6fcu;
    // NOP
label_27c700:
    // 0x27c700: 0x1375b  .word       0x0001375B                   # divu        $a2, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c700u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27c704:
    // 0x27c704: 0x8670  tge         $zero, $zero, 537
    ctx->pc = 0x27c704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c708:
    // 0x27c708: 0x0  nop
    ctx->pc = 0x27c708u;
    // NOP
label_27c70c:
    // 0x27c70c: 0x0  nop
    ctx->pc = 0x27c70cu;
    // NOP
label_27c710:
    // 0x27c710: 0x1376c  .word       0x0001376C                   # dadd        $a2, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c710u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_27c714:
    // 0x27c714: 0x9760  .word       0x00009760                   # add         $s2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27c718:
    // 0x27c718: 0x0  nop
    ctx->pc = 0x27c718u;
    // NOP
label_27c71c:
    // 0x27c71c: 0x0  nop
    ctx->pc = 0x27c71cu;
    // NOP
label_27c720:
    // 0x27c720: 0x1377f  dsra32      $a2, $at, 29
    ctx->pc = 0x27c720u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> (32 + 29));
label_27c724:
    // 0x27c724: 0x4e60  .word       0x00004E60                   # add         $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27c728:
    // 0x27c728: 0x0  nop
    ctx->pc = 0x27c728u;
    // NOP
label_27c72c:
    // 0x27c72c: 0x0  nop
    ctx->pc = 0x27c72cu;
    // NOP
label_27c730:
    // 0x27c730: 0x13789  .word       0x00013789                   # jalr        $a2, $zero # 00010780 <InstrIdType: CPU_SPECIAL>
label_27c734:
    if (ctx->pc == 0x27C734u) {
        ctx->pc = 0x27C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C730u;
        // 0x27c734: 0x7450  .word       0x00007450                   # mfhi        $t6 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C738u;
        goto label_27c738;
    }
    ctx->pc = 0x27C730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 6, 0x27C738u);
        ctx->pc = 0x27C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C730u;
        // 0x27c734: 0x7450  .word       0x00007450                   # mfhi        $t6 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C730u, 0x27C738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27C738u;
label_27c738:
    // 0x27c738: 0x0  nop
    ctx->pc = 0x27c738u;
    // NOP
label_27c73c:
    // 0x27c73c: 0x0  nop
    ctx->pc = 0x27c73cu;
    // NOP
label_27c740:
    // 0x27c740: 0x13798  .word       0x00013798                   # mult        $a2, $zero, $at # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27c740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_27c744:
    // 0x27c744: 0x5080  sll         $t2, $zero, 2
    ctx->pc = 0x27c744u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27c748:
    // 0x27c748: 0x0  nop
    ctx->pc = 0x27c748u;
    // NOP
label_27c74c:
    // 0x27c74c: 0x0  nop
    ctx->pc = 0x27c74cu;
    // NOP
label_27c750:
    // 0x27c750: 0x137a3  .word       0x000137A3                   # negu        $a2, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c750u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27c754:
    // 0x27c754: 0x4b30  tge         $zero, $zero, 300
    ctx->pc = 0x27c754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c758:
    // 0x27c758: 0x0  nop
    ctx->pc = 0x27c758u;
    // NOP
label_27c75c:
    // 0x27c75c: 0x0  nop
    ctx->pc = 0x27c75cu;
    // NOP
label_27c760:
    // 0x27c760: 0x137ad  .word       0x000137AD                   # daddu       $a2, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27c764:
    // 0x27c764: 0x79f0  tge         $zero, $zero, 487
    ctx->pc = 0x27c764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c768:
    // 0x27c768: 0x0  nop
    ctx->pc = 0x27c768u;
    // NOP
label_27c76c:
    // 0x27c76c: 0x0  nop
    ctx->pc = 0x27c76cu;
    // NOP
label_27c770:
    // 0x27c770: 0x137bd  .word       0x000137BD                   # INVALID     $zero, $at, 0x37BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27C770 raw=0x000137BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c774:
    // 0x27c774: 0x5250  .word       0x00005250                   # mfhi        $t2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c774u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27c778:
    // 0x27c778: 0x0  nop
    ctx->pc = 0x27c778u;
    // NOP
label_27c77c:
    // 0x27c77c: 0x0  nop
    ctx->pc = 0x27c77cu;
    // NOP
label_27c780:
    // 0x27c780: 0x137c8  .word       0x000137C8                   # jr          $zero # 000137C0 <InstrIdType: CPU_SPECIAL>
label_27c784:
    if (ctx->pc == 0x27C784u) {
        ctx->pc = 0x27C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C780u;
        // 0x27c784: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27C788u;
        goto label_27c788;
    }
    ctx->pc = 0x27C780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C780u;
        // 0x27c784: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C780u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27C788u;
label_27c788:
    // 0x27c788: 0x0  nop
    ctx->pc = 0x27c788u;
    // NOP
label_27c78c:
    // 0x27c78c: 0x0  nop
    ctx->pc = 0x27c78cu;
    // NOP
label_27c790:
    // 0x27c790: 0x137d4  .word       0x000137D4                   # dsllv       $a2, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27c794:
    // 0x27c794: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c794u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27c798:
    // 0x27c798: 0x0  nop
    ctx->pc = 0x27c798u;
    // NOP
label_27c79c:
    // 0x27c79c: 0x0  nop
    ctx->pc = 0x27c79cu;
    // NOP
label_27c7a0:
    // 0x27c7a0: 0x137e0  .word       0x000137E0                   # add         $a2, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c7a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27c7a4:
    // 0x27c7a4: 0x7ad0  .word       0x00007AD0                   # mfhi        $t7 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c7a4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27c7a8:
    // 0x27c7a8: 0x0  nop
    ctx->pc = 0x27c7a8u;
    // NOP
label_27c7ac:
    // 0x27c7ac: 0x0  nop
    ctx->pc = 0x27c7acu;
    // NOP
label_27c7b0:
    // 0x27c7b0: 0x137f0  tge         $zero, $at, 223
    ctx->pc = 0x27c7b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c7b4:
    // 0x27c7b4: 0x8860  .word       0x00008860                   # add         $s1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c7b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27c7b8:
    // 0x27c7b8: 0x0  nop
    ctx->pc = 0x27c7b8u;
    // NOP
label_27c7bc:
    // 0x27c7bc: 0x0  nop
    ctx->pc = 0x27c7bcu;
    // NOP
label_27c7c0:
    // 0x27c7c0: 0x13802  srl         $a3, $at, 0
    ctx->pc = 0x27c7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_27c7c4:
    // 0x27c7c4: 0x27d0  .word       0x000027D0                   # mfhi        $a0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c7c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_27c7c8:
    // 0x27c7c8: 0x0  nop
    ctx->pc = 0x27c7c8u;
    // NOP
label_27c7cc:
    // 0x27c7cc: 0x0  nop
    ctx->pc = 0x27c7ccu;
    // NOP
label_27c7d0:
    // 0x27c7d0: 0x13807  srav        $a3, $at, $zero
    ctx->pc = 0x27c7d0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27c7d4:
    // 0x27c7d4: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c7d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27c7d8:
    // 0x27c7d8: 0x0  nop
    ctx->pc = 0x27c7d8u;
    // NOP
label_27c7dc:
    // 0x27c7dc: 0x0  nop
    ctx->pc = 0x27c7dcu;
    // NOP
label_27c7e0:
    // 0x27c7e0: 0x1381c  .word       0x0001381C                   # dmult       $zero, $at # 00003800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c7e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27C7E0 raw=0x0001381C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c7e4:
    // 0x27c7e4: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x27c7e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27c7e8:
    // 0x27c7e8: 0x0  nop
    ctx->pc = 0x27c7e8u;
    // NOP
label_27c7ec:
    // 0x27c7ec: 0x0  nop
    ctx->pc = 0x27c7ecu;
    // NOP
label_27c7f0:
    // 0x27c7f0: 0x1382a  slt         $a3, $zero, $at
    ctx->pc = 0x27c7f0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27c7f4:
    // 0x27c7f4: 0x8110  .word       0x00008110                   # mfhi        $s0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c7f4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27c7f8:
    // 0x27c7f8: 0x0  nop
    ctx->pc = 0x27c7f8u;
    // NOP
label_27c7fc:
    // 0x27c7fc: 0x0  nop
    ctx->pc = 0x27c7fcu;
    // NOP
label_27c800:
    // 0x27c800: 0x1383b  dsra        $a3, $at, 0
    ctx->pc = 0x27c800u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> 0);
label_27c804:
    // 0x27c804: 0x50c0  sll         $t2, $zero, 3
    ctx->pc = 0x27c804u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_27c808:
    // 0x27c808: 0x0  nop
    ctx->pc = 0x27c808u;
    // NOP
label_27c80c:
    // 0x27c80c: 0x0  nop
    ctx->pc = 0x27c80cu;
    // NOP
label_27c810:
    // 0x27c810: 0x13846  .word       0x00013846                   # srlv        $a3, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c810u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27c814:
    // 0x27c814: 0x7270  tge         $zero, $zero, 457
    ctx->pc = 0x27c814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c818:
    // 0x27c818: 0x0  nop
    ctx->pc = 0x27c818u;
    // NOP
label_27c81c:
    // 0x27c81c: 0x0  nop
    ctx->pc = 0x27c81cu;
    // NOP
label_27c820:
    // 0x27c820: 0x13855  .word       0x00013855                   # INVALID     $zero, $at, 0x3855 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27C820 raw=0x00013855"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c824:
    // 0x27c824: 0x4370  tge         $zero, $zero, 269
    ctx->pc = 0x27c824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c828:
    // 0x27c828: 0x0  nop
    ctx->pc = 0x27c828u;
    // NOP
label_27c82c:
    // 0x27c82c: 0x0  nop
    ctx->pc = 0x27c82cu;
    // NOP
label_27c830:
    // 0x27c830: 0x1385e  .word       0x0001385E                   # ddiv        $a3, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27C830 raw=0x0001385E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c834:
    // 0x27c834: 0x4ea0  .word       0x00004EA0                   # add         $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27c838:
    // 0x27c838: 0x0  nop
    ctx->pc = 0x27c838u;
    // NOP
label_27c83c:
    // 0x27c83c: 0x0  nop
    ctx->pc = 0x27c83cu;
    // NOP
label_27c840:
    // 0x27c840: 0x13868  .word       0x00013868                   # mfsa        $a3 # 00010040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27c840u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_27c844:
    // 0x27c844: 0x97a0  .word       0x000097A0                   # add         $s2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27c848:
    // 0x27c848: 0x0  nop
    ctx->pc = 0x27c848u;
    // NOP
label_27c84c:
    // 0x27c84c: 0x0  nop
    ctx->pc = 0x27c84cu;
    // NOP
label_27c850:
    // 0x27c850: 0x1387b  dsra        $a3, $at, 1
    ctx->pc = 0x27c850u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> 1);
label_27c854:
    // 0x27c854: 0x71a0  .word       0x000071A0                   # add         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27c858:
    // 0x27c858: 0x0  nop
    ctx->pc = 0x27c858u;
    // NOP
label_27c85c:
    // 0x27c85c: 0x0  nop
    ctx->pc = 0x27c85cu;
    // NOP
label_27c860:
    // 0x27c860: 0x1388a  .word       0x0001388A                   # movz        $a3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c860u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_27c864:
    // 0x27c864: 0x7ed0  .word       0x00007ED0                   # mfhi        $t7 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c864u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27c868:
    // 0x27c868: 0x0  nop
    ctx->pc = 0x27c868u;
    // NOP
label_27c86c:
    // 0x27c86c: 0x0  nop
    ctx->pc = 0x27c86cu;
    // NOP
label_27c870:
    // 0x27c870: 0x1389a  .word       0x0001389A                   # div         $a3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c870u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27c874:
    // 0x27c874: 0x9e50  .word       0x00009E50                   # mfhi        $s3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c874u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27c878:
    // 0x27c878: 0x0  nop
    ctx->pc = 0x27c878u;
    // NOP
label_27c87c:
    // 0x27c87c: 0x0  nop
    ctx->pc = 0x27c87cu;
    // NOP
label_27c880:
    // 0x27c880: 0x138ae  .word       0x000138AE                   # dsub        $a3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c880u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_27c884:
    // 0x27c884: 0x7bd0  .word       0x00007BD0                   # mfhi        $t7 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c884u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27c888:
    // 0x27c888: 0x0  nop
    ctx->pc = 0x27c888u;
    // NOP
label_27c88c:
    // 0x27c88c: 0x0  nop
    ctx->pc = 0x27c88cu;
    // NOP
label_27c890:
    // 0x27c890: 0x138be  dsrl32      $a3, $at, 2
    ctx->pc = 0x27c890u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (32 + 2));
label_27c894:
    // 0x27c894: 0x7c70  tge         $zero, $zero, 497
    ctx->pc = 0x27c894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c898:
    // 0x27c898: 0x0  nop
    ctx->pc = 0x27c898u;
    // NOP
label_27c89c:
    // 0x27c89c: 0x0  nop
    ctx->pc = 0x27c89cu;
    // NOP
label_27c8a0:
    // 0x27c8a0: 0x138ce  .word       0x000138CE                   # INVALID     $zero, $at, 0x38CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27C8A0 raw=0x000138CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c8a4:
    // 0x27c8a4: 0x7450  .word       0x00007450                   # mfhi        $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c8a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27c8a8:
    // 0x27c8a8: 0x0  nop
    ctx->pc = 0x27c8a8u;
    // NOP
label_27c8ac:
    // 0x27c8ac: 0x0  nop
    ctx->pc = 0x27c8acu;
    // NOP
label_27c8b0:
    // 0x27c8b0: 0x138dd  .word       0x000138DD                   # dmultu      $zero, $at # 000038C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c8b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27C8B0 raw=0x000138DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c8b4:
    // 0x27c8b4: 0x5360  .word       0x00005360                   # add         $t2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27c8b8:
    // 0x27c8b8: 0x0  nop
    ctx->pc = 0x27c8b8u;
    // NOP
label_27c8bc:
    // 0x27c8bc: 0x0  nop
    ctx->pc = 0x27c8bcu;
    // NOP
label_27c8c0:
    // 0x27c8c0: 0x138e8  .word       0x000138E8                   # mfsa        $a3 # 000100C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27c8c0u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_27c8c4:
    // 0x27c8c4: 0xc900  sll         $t9, $zero, 4
    ctx->pc = 0x27c8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27c8c8:
    // 0x27c8c8: 0x0  nop
    ctx->pc = 0x27c8c8u;
    // NOP
label_27c8cc:
    // 0x27c8cc: 0x0  nop
    ctx->pc = 0x27c8ccu;
    // NOP
label_27c8d0:
    // 0x27c8d0: 0x13902  srl         $a3, $at, 4
    ctx->pc = 0x27c8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), 4));
label_27c8d4:
    // 0x27c8d4: 0xc0d0  .word       0x0000C0D0                   # mfhi        $t8 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c8d4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27c8d8:
    // 0x27c8d8: 0x0  nop
    ctx->pc = 0x27c8d8u;
    // NOP
label_27c8dc:
    // 0x27c8dc: 0x0  nop
    ctx->pc = 0x27c8dcu;
    // NOP
label_27c8e0:
    // 0x27c8e0: 0x1391b  .word       0x0001391B                   # divu        $a3, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c8e0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27c8e4:
    // 0x27c8e4: 0x6850  .word       0x00006850                   # mfhi        $t5 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c8e4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27c8e8:
    // 0x27c8e8: 0x0  nop
    ctx->pc = 0x27c8e8u;
    // NOP
label_27c8ec:
    // 0x27c8ec: 0x0  nop
    ctx->pc = 0x27c8ecu;
    // NOP
label_27c8f0:
    // 0x27c8f0: 0x13929  .word       0x00013929                   # mtsa        $zero # 00013900 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27c8f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27c8f4:
    // 0x27c8f4: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c8f4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27c8f8:
    // 0x27c8f8: 0x0  nop
    ctx->pc = 0x27c8f8u;
    // NOP
label_27c8fc:
    // 0x27c8fc: 0x0  nop
    ctx->pc = 0x27c8fcu;
    // NOP
label_27c900:
    // 0x27c900: 0x13935  .word       0x00013935                   # INVALID     $zero, $at, 0x3935 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27C900 raw=0x00013935"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c904:
    // 0x27c904: 0xb800  sll         $s7, $zero, 0
    ctx->pc = 0x27c904u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27c908:
    // 0x27c908: 0x0  nop
    ctx->pc = 0x27c908u;
    // NOP
label_27c90c:
    // 0x27c90c: 0x0  nop
    ctx->pc = 0x27c90cu;
    // NOP
label_27c910:
    // 0x27c910: 0x1394c  .word       0x0001394C                   # syscall     229 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c910u;
    ctx->pc = 0x27C914u;
runtime->handleSyscall(rdram, ctx, 0x4E5u);
label_27c914:
    // 0x27c914: 0x87e0  .word       0x000087E0                   # add         $s0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27c918:
    // 0x27c918: 0x0  nop
    ctx->pc = 0x27c918u;
    // NOP
label_27c91c:
    // 0x27c91c: 0x0  nop
    ctx->pc = 0x27c91cu;
    // NOP
label_27c920:
    // 0x27c920: 0x1395d  .word       0x0001395D                   # dmultu      $zero, $at # 00003940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27C920 raw=0x0001395D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c924:
    // 0x27c924: 0x8f20  .word       0x00008F20                   # add         $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27c928:
    // 0x27c928: 0x0  nop
    ctx->pc = 0x27c928u;
    // NOP
label_27c92c:
    // 0x27c92c: 0x0  nop
    ctx->pc = 0x27c92cu;
    // NOP
label_27c930:
    // 0x27c930: 0x1396f  .word       0x0001396F                   # dsubu       $a3, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c930u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27c934:
    // 0x27c934: 0x49d0  .word       0x000049D0                   # mfhi        $t1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c934u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27c938:
    // 0x27c938: 0x0  nop
    ctx->pc = 0x27c938u;
    // NOP
label_27c93c:
    // 0x27c93c: 0x0  nop
    ctx->pc = 0x27c93cu;
    // NOP
label_27c940:
    // 0x27c940: 0x13979  .word       0x00013979                   # INVALID     $zero, $at, 0x3979 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27C940 raw=0x00013979"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c944:
    // 0x27c944: 0xddb0  tge         $zero, $zero, 886
    ctx->pc = 0x27c944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c948:
    // 0x27c948: 0x0  nop
    ctx->pc = 0x27c948u;
    // NOP
label_27c94c:
    // 0x27c94c: 0x0  nop
    ctx->pc = 0x27c94cu;
    // NOP
label_27c950:
    // 0x27c950: 0x13995  .word       0x00013995                   # INVALID     $zero, $at, 0x3995 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27C950 raw=0x00013995"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c954:
    // 0x27c954: 0xb720  .word       0x0000B720                   # add         $s6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_27c958:
    // 0x27c958: 0x0  nop
    ctx->pc = 0x27c958u;
    // NOP
label_27c95c:
    // 0x27c95c: 0x0  nop
    ctx->pc = 0x27c95cu;
    // NOP
label_27c960:
    // 0x27c960: 0x139ac  .word       0x000139AC                   # dadd        $a3, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c960u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_27c964:
    // 0x27c964: 0x10440  sll         $zero, $at, 17
    ctx->pc = 0x27c964u;
    
label_27c968:
    // 0x27c968: 0x0  nop
    ctx->pc = 0x27c968u;
    // NOP
label_27c96c:
    // 0x27c96c: 0x0  nop
    ctx->pc = 0x27c96cu;
    // NOP
label_27c970:
    // 0x27c970: 0x139cd  break       1, 231
    ctx->pc = 0x27c970u;
    runtime->handleBreak(rdram, ctx);
label_27c974:
    // 0x27c974: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x27c974u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_27c978:
    // 0x27c978: 0x0  nop
    ctx->pc = 0x27c978u;
    // NOP
label_27c97c:
    // 0x27c97c: 0x0  nop
    ctx->pc = 0x27c97cu;
    // NOP
label_27c980:
    // 0x27c980: 0x139de  .word       0x000139DE                   # ddiv        $a3, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27C980 raw=0x000139DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27c984:
    // 0x27c984: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27c988:
    // 0x27c988: 0x0  nop
    ctx->pc = 0x27c988u;
    // NOP
label_27c98c:
    // 0x27c98c: 0x0  nop
    ctx->pc = 0x27c98cu;
    // NOP
label_27c990:
    // 0x27c990: 0x139f0  tge         $zero, $at, 231
    ctx->pc = 0x27c990u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c994:
    // 0x27c994: 0xf270  tge         $zero, $zero, 969
    ctx->pc = 0x27c994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27c998:
    // 0x27c998: 0x0  nop
    ctx->pc = 0x27c998u;
    // NOP
label_27c99c:
    // 0x27c99c: 0x0  nop
    ctx->pc = 0x27c99cu;
    // NOP
label_27c9a0:
    // 0x27c9a0: 0x13a0f  .word       0x00013A0F                   # sync # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c9a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27c9a4:
    // 0x27c9a4: 0xd0a0  .word       0x0000D0A0                   # add         $k0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c9a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_27c9a8:
    // 0x27c9a8: 0x0  nop
    ctx->pc = 0x27c9a8u;
    // NOP
label_27c9ac:
    // 0x27c9ac: 0x0  nop
    ctx->pc = 0x27c9acu;
    // NOP
label_27c9b0:
    // 0x27c9b0: 0x13a2a  .word       0x00013A2A                   # slt         $a3, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c9b0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27c9b4:
    // 0x27c9b4: 0x7c90  .word       0x00007C90                   # mfhi        $t7 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c9b4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27c9b8:
    // 0x27c9b8: 0x0  nop
    ctx->pc = 0x27c9b8u;
    // NOP
label_27c9bc:
    // 0x27c9bc: 0x0  nop
    ctx->pc = 0x27c9bcu;
    // NOP
label_27c9c0:
    // 0x27c9c0: 0x13a3a  dsrl        $a3, $at, 8
    ctx->pc = 0x27c9c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> 8);
label_27c9c4:
    // 0x27c9c4: 0xc5d0  .word       0x0000C5D0                   # mfhi        $t8 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c9c4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27c9c8:
    // 0x27c9c8: 0x0  nop
    ctx->pc = 0x27c9c8u;
    // NOP
label_27c9cc:
    // 0x27c9cc: 0x0  nop
    ctx->pc = 0x27c9ccu;
    // NOP
label_27c9d0:
    // 0x27c9d0: 0x13a53  .word       0x00013A53                   # mtlo        $zero # 00013A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c9d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_27c9d4:
    // 0x27c9d4: 0xeb40  sll         $sp, $zero, 13
    ctx->pc = 0x27c9d4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27c9d8:
    // 0x27c9d8: 0x0  nop
    ctx->pc = 0x27c9d8u;
    // NOP
label_27c9dc:
    // 0x27c9dc: 0x0  nop
    ctx->pc = 0x27c9dcu;
    // NOP
label_27c9e0:
    // 0x27c9e0: 0x13a71  tgeu        $zero, $at, 233
    ctx->pc = 0x27c9e0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27c9e4:
    // 0x27c9e4: 0x8a60  .word       0x00008A60                   # add         $s1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c9e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27c9e8:
    // 0x27c9e8: 0x0  nop
    ctx->pc = 0x27c9e8u;
    // NOP
label_27c9ec:
    // 0x27c9ec: 0x0  nop
    ctx->pc = 0x27c9ecu;
    // NOP
label_27c9f0:
    // 0x27c9f0: 0x13a83  sra         $a3, $at, 10
    ctx->pc = 0x27c9f0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), 10));
label_27c9f4:
    // 0x27c9f4: 0x101d0  .word       0x000101D0                   # mfhi        $zero # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27c9f4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_27c9f8:
    // 0x27c9f8: 0x0  nop
    ctx->pc = 0x27c9f8u;
    // NOP
label_27c9fc:
    // 0x27c9fc: 0x0  nop
    ctx->pc = 0x27c9fcu;
    // NOP
    ctx->pc = 0x27ca00u;
    return;
}
