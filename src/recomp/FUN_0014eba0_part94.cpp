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


void FUN_0014eba0_part94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17c230u: goto label_17c230;
        case 0x17c234u: goto label_17c234;
        case 0x17c238u: goto label_17c238;
        case 0x17c23cu: goto label_17c23c;
        case 0x17c240u: goto label_17c240;
        case 0x17c244u: goto label_17c244;
        case 0x17c248u: goto label_17c248;
        case 0x17c24cu: goto label_17c24c;
        case 0x17c250u: goto label_17c250;
        case 0x17c254u: goto label_17c254;
        case 0x17c258u: goto label_17c258;
        case 0x17c25cu: goto label_17c25c;
        case 0x17c260u: goto label_17c260;
        case 0x17c264u: goto label_17c264;
        case 0x17c268u: goto label_17c268;
        case 0x17c26cu: goto label_17c26c;
        case 0x17c270u: goto label_17c270;
        case 0x17c274u: goto label_17c274;
        case 0x17c278u: goto label_17c278;
        case 0x17c27cu: goto label_17c27c;
        case 0x17c280u: goto label_17c280;
        case 0x17c284u: goto label_17c284;
        case 0x17c288u: goto label_17c288;
        case 0x17c28cu: goto label_17c28c;
        case 0x17c290u: goto label_17c290;
        case 0x17c294u: goto label_17c294;
        case 0x17c298u: goto label_17c298;
        case 0x17c29cu: goto label_17c29c;
        case 0x17c2a0u: goto label_17c2a0;
        case 0x17c2a4u: goto label_17c2a4;
        case 0x17c2a8u: goto label_17c2a8;
        case 0x17c2acu: goto label_17c2ac;
        case 0x17c2b0u: goto label_17c2b0;
        case 0x17c2b4u: goto label_17c2b4;
        case 0x17c2b8u: goto label_17c2b8;
        case 0x17c2bcu: goto label_17c2bc;
        case 0x17c2c0u: goto label_17c2c0;
        case 0x17c2c4u: goto label_17c2c4;
        case 0x17c2c8u: goto label_17c2c8;
        case 0x17c2ccu: goto label_17c2cc;
        case 0x17c2d0u: goto label_17c2d0;
        case 0x17c2d4u: goto label_17c2d4;
        case 0x17c2d8u: goto label_17c2d8;
        case 0x17c2dcu: goto label_17c2dc;
        case 0x17c2e0u: goto label_17c2e0;
        case 0x17c2e4u: goto label_17c2e4;
        case 0x17c2e8u: goto label_17c2e8;
        case 0x17c2ecu: goto label_17c2ec;
        case 0x17c2f0u: goto label_17c2f0;
        case 0x17c2f4u: goto label_17c2f4;
        case 0x17c2f8u: goto label_17c2f8;
        case 0x17c2fcu: goto label_17c2fc;
        case 0x17c300u: goto label_17c300;
        case 0x17c304u: goto label_17c304;
        case 0x17c308u: goto label_17c308;
        case 0x17c30cu: goto label_17c30c;
        case 0x17c310u: goto label_17c310;
        case 0x17c314u: goto label_17c314;
        case 0x17c318u: goto label_17c318;
        case 0x17c31cu: goto label_17c31c;
        case 0x17c320u: goto label_17c320;
        case 0x17c324u: goto label_17c324;
        case 0x17c328u: goto label_17c328;
        case 0x17c32cu: goto label_17c32c;
        case 0x17c330u: goto label_17c330;
        case 0x17c334u: goto label_17c334;
        case 0x17c338u: goto label_17c338;
        case 0x17c33cu: goto label_17c33c;
        case 0x17c340u: goto label_17c340;
        case 0x17c344u: goto label_17c344;
        case 0x17c348u: goto label_17c348;
        case 0x17c34cu: goto label_17c34c;
        case 0x17c350u: goto label_17c350;
        case 0x17c354u: goto label_17c354;
        case 0x17c358u: goto label_17c358;
        case 0x17c35cu: goto label_17c35c;
        case 0x17c360u: goto label_17c360;
        case 0x17c364u: goto label_17c364;
        case 0x17c368u: goto label_17c368;
        case 0x17c36cu: goto label_17c36c;
        case 0x17c370u: goto label_17c370;
        case 0x17c374u: goto label_17c374;
        case 0x17c378u: goto label_17c378;
        case 0x17c37cu: goto label_17c37c;
        case 0x17c380u: goto label_17c380;
        case 0x17c384u: goto label_17c384;
        case 0x17c388u: goto label_17c388;
        case 0x17c38cu: goto label_17c38c;
        case 0x17c390u: goto label_17c390;
        case 0x17c394u: goto label_17c394;
        case 0x17c398u: goto label_17c398;
        case 0x17c39cu: goto label_17c39c;
        case 0x17c3a0u: goto label_17c3a0;
        case 0x17c3a4u: goto label_17c3a4;
        case 0x17c3a8u: goto label_17c3a8;
        case 0x17c3acu: goto label_17c3ac;
        case 0x17c3b0u: goto label_17c3b0;
        case 0x17c3b4u: goto label_17c3b4;
        case 0x17c3b8u: goto label_17c3b8;
        case 0x17c3bcu: goto label_17c3bc;
        case 0x17c3c0u: goto label_17c3c0;
        case 0x17c3c4u: goto label_17c3c4;
        case 0x17c3c8u: goto label_17c3c8;
        case 0x17c3ccu: goto label_17c3cc;
        case 0x17c3d0u: goto label_17c3d0;
        case 0x17c3d4u: goto label_17c3d4;
        case 0x17c3d8u: goto label_17c3d8;
        case 0x17c3dcu: goto label_17c3dc;
        case 0x17c3e0u: goto label_17c3e0;
        case 0x17c3e4u: goto label_17c3e4;
        case 0x17c3e8u: goto label_17c3e8;
        case 0x17c3ecu: goto label_17c3ec;
        case 0x17c3f0u: goto label_17c3f0;
        case 0x17c3f4u: goto label_17c3f4;
        case 0x17c3f8u: goto label_17c3f8;
        case 0x17c3fcu: goto label_17c3fc;
        case 0x17c400u: goto label_17c400;
        case 0x17c404u: goto label_17c404;
        case 0x17c408u: goto label_17c408;
        case 0x17c40cu: goto label_17c40c;
        case 0x17c410u: goto label_17c410;
        case 0x17c414u: goto label_17c414;
        case 0x17c418u: goto label_17c418;
        case 0x17c41cu: goto label_17c41c;
        case 0x17c420u: goto label_17c420;
        case 0x17c424u: goto label_17c424;
        case 0x17c428u: goto label_17c428;
        case 0x17c42cu: goto label_17c42c;
        case 0x17c430u: goto label_17c430;
        case 0x17c434u: goto label_17c434;
        case 0x17c438u: goto label_17c438;
        case 0x17c43cu: goto label_17c43c;
        case 0x17c440u: goto label_17c440;
        case 0x17c444u: goto label_17c444;
        case 0x17c448u: goto label_17c448;
        case 0x17c44cu: goto label_17c44c;
        case 0x17c450u: goto label_17c450;
        case 0x17c454u: goto label_17c454;
        case 0x17c458u: goto label_17c458;
        case 0x17c45cu: goto label_17c45c;
        case 0x17c460u: goto label_17c460;
        case 0x17c464u: goto label_17c464;
        case 0x17c468u: goto label_17c468;
        case 0x17c46cu: goto label_17c46c;
        case 0x17c470u: goto label_17c470;
        case 0x17c474u: goto label_17c474;
        case 0x17c478u: goto label_17c478;
        case 0x17c47cu: goto label_17c47c;
        case 0x17c480u: goto label_17c480;
        case 0x17c484u: goto label_17c484;
        case 0x17c488u: goto label_17c488;
        case 0x17c48cu: goto label_17c48c;
        case 0x17c490u: goto label_17c490;
        case 0x17c494u: goto label_17c494;
        case 0x17c498u: goto label_17c498;
        case 0x17c49cu: goto label_17c49c;
        case 0x17c4a0u: goto label_17c4a0;
        case 0x17c4a4u: goto label_17c4a4;
        case 0x17c4a8u: goto label_17c4a8;
        case 0x17c4acu: goto label_17c4ac;
        case 0x17c4b0u: goto label_17c4b0;
        case 0x17c4b4u: goto label_17c4b4;
        case 0x17c4b8u: goto label_17c4b8;
        case 0x17c4bcu: goto label_17c4bc;
        case 0x17c4c0u: goto label_17c4c0;
        case 0x17c4c4u: goto label_17c4c4;
        case 0x17c4c8u: goto label_17c4c8;
        case 0x17c4ccu: goto label_17c4cc;
        case 0x17c4d0u: goto label_17c4d0;
        case 0x17c4d4u: goto label_17c4d4;
        case 0x17c4d8u: goto label_17c4d8;
        case 0x17c4dcu: goto label_17c4dc;
        case 0x17c4e0u: goto label_17c4e0;
        case 0x17c4e4u: goto label_17c4e4;
        case 0x17c4e8u: goto label_17c4e8;
        case 0x17c4ecu: goto label_17c4ec;
        case 0x17c4f0u: goto label_17c4f0;
        case 0x17c4f4u: goto label_17c4f4;
        case 0x17c4f8u: goto label_17c4f8;
        case 0x17c4fcu: goto label_17c4fc;
        case 0x17c500u: goto label_17c500;
        case 0x17c504u: goto label_17c504;
        case 0x17c508u: goto label_17c508;
        case 0x17c50cu: goto label_17c50c;
        case 0x17c510u: goto label_17c510;
        case 0x17c514u: goto label_17c514;
        case 0x17c518u: goto label_17c518;
        case 0x17c51cu: goto label_17c51c;
        case 0x17c520u: goto label_17c520;
        case 0x17c524u: goto label_17c524;
        case 0x17c528u: goto label_17c528;
        case 0x17c52cu: goto label_17c52c;
        case 0x17c530u: goto label_17c530;
        case 0x17c534u: goto label_17c534;
        case 0x17c538u: goto label_17c538;
        case 0x17c53cu: goto label_17c53c;
        case 0x17c540u: goto label_17c540;
        case 0x17c544u: goto label_17c544;
        case 0x17c548u: goto label_17c548;
        case 0x17c54cu: goto label_17c54c;
        case 0x17c550u: goto label_17c550;
        case 0x17c554u: goto label_17c554;
        case 0x17c558u: goto label_17c558;
        case 0x17c55cu: goto label_17c55c;
        case 0x17c560u: goto label_17c560;
        case 0x17c564u: goto label_17c564;
        case 0x17c568u: goto label_17c568;
        case 0x17c56cu: goto label_17c56c;
        case 0x17c570u: goto label_17c570;
        case 0x17c574u: goto label_17c574;
        case 0x17c578u: goto label_17c578;
        case 0x17c57cu: goto label_17c57c;
        case 0x17c580u: goto label_17c580;
        case 0x17c584u: goto label_17c584;
        case 0x17c588u: goto label_17c588;
        case 0x17c58cu: goto label_17c58c;
        case 0x17c590u: goto label_17c590;
        case 0x17c594u: goto label_17c594;
        case 0x17c598u: goto label_17c598;
        case 0x17c59cu: goto label_17c59c;
        case 0x17c5a0u: goto label_17c5a0;
        case 0x17c5a4u: goto label_17c5a4;
        case 0x17c5a8u: goto label_17c5a8;
        case 0x17c5acu: goto label_17c5ac;
        case 0x17c5b0u: goto label_17c5b0;
        case 0x17c5b4u: goto label_17c5b4;
        case 0x17c5b8u: goto label_17c5b8;
        case 0x17c5bcu: goto label_17c5bc;
        case 0x17c5c0u: goto label_17c5c0;
        case 0x17c5c4u: goto label_17c5c4;
        case 0x17c5c8u: goto label_17c5c8;
        case 0x17c5ccu: goto label_17c5cc;
        case 0x17c5d0u: goto label_17c5d0;
        case 0x17c5d4u: goto label_17c5d4;
        case 0x17c5d8u: goto label_17c5d8;
        case 0x17c5dcu: goto label_17c5dc;
        case 0x17c5e0u: goto label_17c5e0;
        case 0x17c5e4u: goto label_17c5e4;
        case 0x17c5e8u: goto label_17c5e8;
        case 0x17c5ecu: goto label_17c5ec;
        case 0x17c5f0u: goto label_17c5f0;
        case 0x17c5f4u: goto label_17c5f4;
        case 0x17c5f8u: goto label_17c5f8;
        case 0x17c5fcu: goto label_17c5fc;
        case 0x17c600u: goto label_17c600;
        case 0x17c604u: goto label_17c604;
        case 0x17c608u: goto label_17c608;
        case 0x17c60cu: goto label_17c60c;
        case 0x17c610u: goto label_17c610;
        case 0x17c614u: goto label_17c614;
        case 0x17c618u: goto label_17c618;
        case 0x17c61cu: goto label_17c61c;
        case 0x17c620u: goto label_17c620;
        case 0x17c624u: goto label_17c624;
        case 0x17c628u: goto label_17c628;
        case 0x17c62cu: goto label_17c62c;
        case 0x17c630u: goto label_17c630;
        case 0x17c634u: goto label_17c634;
        case 0x17c638u: goto label_17c638;
        case 0x17c63cu: goto label_17c63c;
        case 0x17c640u: goto label_17c640;
        case 0x17c644u: goto label_17c644;
        case 0x17c648u: goto label_17c648;
        case 0x17c64cu: goto label_17c64c;
        case 0x17c650u: goto label_17c650;
        case 0x17c654u: goto label_17c654;
        case 0x17c658u: goto label_17c658;
        case 0x17c65cu: goto label_17c65c;
        case 0x17c660u: goto label_17c660;
        case 0x17c664u: goto label_17c664;
        case 0x17c668u: goto label_17c668;
        case 0x17c66cu: goto label_17c66c;
        case 0x17c670u: goto label_17c670;
        case 0x17c674u: goto label_17c674;
        case 0x17c678u: goto label_17c678;
        case 0x17c67cu: goto label_17c67c;
        case 0x17c680u: goto label_17c680;
        case 0x17c684u: goto label_17c684;
        case 0x17c688u: goto label_17c688;
        case 0x17c68cu: goto label_17c68c;
        case 0x17c690u: goto label_17c690;
        case 0x17c694u: goto label_17c694;
        case 0x17c698u: goto label_17c698;
        case 0x17c69cu: goto label_17c69c;
        case 0x17c6a0u: goto label_17c6a0;
        case 0x17c6a4u: goto label_17c6a4;
        case 0x17c6a8u: goto label_17c6a8;
        case 0x17c6acu: goto label_17c6ac;
        case 0x17c6b0u: goto label_17c6b0;
        case 0x17c6b4u: goto label_17c6b4;
        case 0x17c6b8u: goto label_17c6b8;
        case 0x17c6bcu: goto label_17c6bc;
        case 0x17c6c0u: goto label_17c6c0;
        case 0x17c6c4u: goto label_17c6c4;
        case 0x17c6c8u: goto label_17c6c8;
        case 0x17c6ccu: goto label_17c6cc;
        case 0x17c6d0u: goto label_17c6d0;
        case 0x17c6d4u: goto label_17c6d4;
        case 0x17c6d8u: goto label_17c6d8;
        case 0x17c6dcu: goto label_17c6dc;
        case 0x17c6e0u: goto label_17c6e0;
        case 0x17c6e4u: goto label_17c6e4;
        case 0x17c6e8u: goto label_17c6e8;
        case 0x17c6ecu: goto label_17c6ec;
        case 0x17c6f0u: goto label_17c6f0;
        case 0x17c6f4u: goto label_17c6f4;
        case 0x17c6f8u: goto label_17c6f8;
        case 0x17c6fcu: goto label_17c6fc;
        case 0x17c700u: goto label_17c700;
        case 0x17c704u: goto label_17c704;
        case 0x17c708u: goto label_17c708;
        case 0x17c70cu: goto label_17c70c;
        case 0x17c710u: goto label_17c710;
        case 0x17c714u: goto label_17c714;
        case 0x17c718u: goto label_17c718;
        case 0x17c71cu: goto label_17c71c;
        case 0x17c720u: goto label_17c720;
        case 0x17c724u: goto label_17c724;
        case 0x17c728u: goto label_17c728;
        case 0x17c72cu: goto label_17c72c;
        case 0x17c730u: goto label_17c730;
        case 0x17c734u: goto label_17c734;
        case 0x17c738u: goto label_17c738;
        case 0x17c73cu: goto label_17c73c;
        case 0x17c740u: goto label_17c740;
        case 0x17c744u: goto label_17c744;
        case 0x17c748u: goto label_17c748;
        case 0x17c74cu: goto label_17c74c;
        case 0x17c750u: goto label_17c750;
        case 0x17c754u: goto label_17c754;
        case 0x17c758u: goto label_17c758;
        case 0x17c75cu: goto label_17c75c;
        case 0x17c760u: goto label_17c760;
        case 0x17c764u: goto label_17c764;
        case 0x17c768u: goto label_17c768;
        case 0x17c76cu: goto label_17c76c;
        case 0x17c770u: goto label_17c770;
        case 0x17c774u: goto label_17c774;
        case 0x17c778u: goto label_17c778;
        case 0x17c77cu: goto label_17c77c;
        case 0x17c780u: goto label_17c780;
        case 0x17c784u: goto label_17c784;
        case 0x17c788u: goto label_17c788;
        case 0x17c78cu: goto label_17c78c;
        case 0x17c790u: goto label_17c790;
        case 0x17c794u: goto label_17c794;
        case 0x17c798u: goto label_17c798;
        case 0x17c79cu: goto label_17c79c;
        case 0x17c7a0u: goto label_17c7a0;
        case 0x17c7a4u: goto label_17c7a4;
        case 0x17c7a8u: goto label_17c7a8;
        case 0x17c7acu: goto label_17c7ac;
        case 0x17c7b0u: goto label_17c7b0;
        case 0x17c7b4u: goto label_17c7b4;
        case 0x17c7b8u: goto label_17c7b8;
        case 0x17c7bcu: goto label_17c7bc;
        case 0x17c7c0u: goto label_17c7c0;
        case 0x17c7c4u: goto label_17c7c4;
        case 0x17c7c8u: goto label_17c7c8;
        case 0x17c7ccu: goto label_17c7cc;
        case 0x17c7d0u: goto label_17c7d0;
        case 0x17c7d4u: goto label_17c7d4;
        case 0x17c7d8u: goto label_17c7d8;
        case 0x17c7dcu: goto label_17c7dc;
        case 0x17c7e0u: goto label_17c7e0;
        case 0x17c7e4u: goto label_17c7e4;
        case 0x17c7e8u: goto label_17c7e8;
        case 0x17c7ecu: goto label_17c7ec;
        case 0x17c7f0u: goto label_17c7f0;
        case 0x17c7f4u: goto label_17c7f4;
        case 0x17c7f8u: goto label_17c7f8;
        case 0x17c7fcu: goto label_17c7fc;
        case 0x17c800u: goto label_17c800;
        case 0x17c804u: goto label_17c804;
        case 0x17c808u: goto label_17c808;
        case 0x17c80cu: goto label_17c80c;
        case 0x17c810u: goto label_17c810;
        case 0x17c814u: goto label_17c814;
        case 0x17c818u: goto label_17c818;
        case 0x17c81cu: goto label_17c81c;
        case 0x17c820u: goto label_17c820;
        case 0x17c824u: goto label_17c824;
        case 0x17c828u: goto label_17c828;
        case 0x17c82cu: goto label_17c82c;
        case 0x17c830u: goto label_17c830;
        case 0x17c834u: goto label_17c834;
        case 0x17c838u: goto label_17c838;
        case 0x17c83cu: goto label_17c83c;
        case 0x17c840u: goto label_17c840;
        case 0x17c844u: goto label_17c844;
        case 0x17c848u: goto label_17c848;
        case 0x17c84cu: goto label_17c84c;
        case 0x17c850u: goto label_17c850;
        case 0x17c854u: goto label_17c854;
        case 0x17c858u: goto label_17c858;
        case 0x17c85cu: goto label_17c85c;
        case 0x17c860u: goto label_17c860;
        case 0x17c864u: goto label_17c864;
        case 0x17c868u: goto label_17c868;
        case 0x17c86cu: goto label_17c86c;
        case 0x17c870u: goto label_17c870;
        case 0x17c874u: goto label_17c874;
        case 0x17c878u: goto label_17c878;
        case 0x17c87cu: goto label_17c87c;
        case 0x17c880u: goto label_17c880;
        case 0x17c884u: goto label_17c884;
        case 0x17c888u: goto label_17c888;
        case 0x17c88cu: goto label_17c88c;
        case 0x17c890u: goto label_17c890;
        case 0x17c894u: goto label_17c894;
        case 0x17c898u: goto label_17c898;
        case 0x17c89cu: goto label_17c89c;
        case 0x17c8a0u: goto label_17c8a0;
        case 0x17c8a4u: goto label_17c8a4;
        case 0x17c8a8u: goto label_17c8a8;
        case 0x17c8acu: goto label_17c8ac;
        case 0x17c8b0u: goto label_17c8b0;
        case 0x17c8b4u: goto label_17c8b4;
        case 0x17c8b8u: goto label_17c8b8;
        case 0x17c8bcu: goto label_17c8bc;
        case 0x17c8c0u: goto label_17c8c0;
        case 0x17c8c4u: goto label_17c8c4;
        case 0x17c8c8u: goto label_17c8c8;
        case 0x17c8ccu: goto label_17c8cc;
        case 0x17c8d0u: goto label_17c8d0;
        case 0x17c8d4u: goto label_17c8d4;
        case 0x17c8d8u: goto label_17c8d8;
        case 0x17c8dcu: goto label_17c8dc;
        case 0x17c8e0u: goto label_17c8e0;
        case 0x17c8e4u: goto label_17c8e4;
        case 0x17c8e8u: goto label_17c8e8;
        case 0x17c8ecu: goto label_17c8ec;
        case 0x17c8f0u: goto label_17c8f0;
        case 0x17c8f4u: goto label_17c8f4;
        case 0x17c8f8u: goto label_17c8f8;
        case 0x17c8fcu: goto label_17c8fc;
        case 0x17c900u: goto label_17c900;
        case 0x17c904u: goto label_17c904;
        case 0x17c908u: goto label_17c908;
        case 0x17c90cu: goto label_17c90c;
        case 0x17c910u: goto label_17c910;
        case 0x17c914u: goto label_17c914;
        case 0x17c918u: goto label_17c918;
        case 0x17c91cu: goto label_17c91c;
        case 0x17c920u: goto label_17c920;
        case 0x17c924u: goto label_17c924;
        case 0x17c928u: goto label_17c928;
        case 0x17c92cu: goto label_17c92c;
        case 0x17c930u: goto label_17c930;
        case 0x17c934u: goto label_17c934;
        case 0x17c938u: goto label_17c938;
        case 0x17c93cu: goto label_17c93c;
        case 0x17c940u: goto label_17c940;
        case 0x17c944u: goto label_17c944;
        case 0x17c948u: goto label_17c948;
        case 0x17c94cu: goto label_17c94c;
        case 0x17c950u: goto label_17c950;
        case 0x17c954u: goto label_17c954;
        case 0x17c958u: goto label_17c958;
        case 0x17c95cu: goto label_17c95c;
        case 0x17c960u: goto label_17c960;
        case 0x17c964u: goto label_17c964;
        case 0x17c968u: goto label_17c968;
        case 0x17c96cu: goto label_17c96c;
        case 0x17c970u: goto label_17c970;
        case 0x17c974u: goto label_17c974;
        case 0x17c978u: goto label_17c978;
        case 0x17c97cu: goto label_17c97c;
        case 0x17c980u: goto label_17c980;
        case 0x17c984u: goto label_17c984;
        case 0x17c988u: goto label_17c988;
        case 0x17c98cu: goto label_17c98c;
        case 0x17c990u: goto label_17c990;
        case 0x17c994u: goto label_17c994;
        case 0x17c998u: goto label_17c998;
        case 0x17c99cu: goto label_17c99c;
        case 0x17c9a0u: goto label_17c9a0;
        case 0x17c9a4u: goto label_17c9a4;
        case 0x17c9a8u: goto label_17c9a8;
        case 0x17c9acu: goto label_17c9ac;
        case 0x17c9b0u: goto label_17c9b0;
        case 0x17c9b4u: goto label_17c9b4;
        case 0x17c9b8u: goto label_17c9b8;
        case 0x17c9bcu: goto label_17c9bc;
        case 0x17c9c0u: goto label_17c9c0;
        case 0x17c9c4u: goto label_17c9c4;
        case 0x17c9c8u: goto label_17c9c8;
        case 0x17c9ccu: goto label_17c9cc;
        case 0x17c9d0u: goto label_17c9d0;
        case 0x17c9d4u: goto label_17c9d4;
        case 0x17c9d8u: goto label_17c9d8;
        case 0x17c9dcu: goto label_17c9dc;
        case 0x17c9e0u: goto label_17c9e0;
        case 0x17c9e4u: goto label_17c9e4;
        case 0x17c9e8u: goto label_17c9e8;
        case 0x17c9ecu: goto label_17c9ec;
        case 0x17c9f0u: goto label_17c9f0;
        case 0x17c9f4u: goto label_17c9f4;
        case 0x17c9f8u: goto label_17c9f8;
        case 0x17c9fcu: goto label_17c9fc;
        default: return;
    }

label_17c230:
    // 0x17c230: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_17c234:
    if (ctx->pc == 0x17C234u) {
        ctx->pc = 0x17C238u;
        goto label_17c238;
    }
    ctx->pc = 0x17C230u;
    {
        const bool branch_taken_0x17c230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c230) {
            ctx->pc = 0x17C240u;
            goto label_17c240;
        }
    }
    ctx->pc = 0x17C238u;
label_17c238:
    // 0x17c238: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x17c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c23c:
    // 0x17c23c: 0x0  nop
    ctx->pc = 0x17c23cu;
    // NOP
label_17c240:
    // 0x17c240: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x17c240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_17c244:
    // 0x17c244: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x17c244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_17c248:
    // 0x17c248: 0x106202b  sltu        $a0, $t0, $a2
    ctx->pc = 0x17c248u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_17c24c:
    // 0x17c24c: 0x1480ffe3  bnez        $a0, . + 4 + (-0x1D << 2)
label_17c250:
    if (ctx->pc == 0x17C250u) {
        ctx->pc = 0x17C254u;
        goto label_17c254;
    }
    ctx->pc = 0x17C24Cu;
    {
        const bool branch_taken_0x17c24c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c24c) {
            ctx->pc = 0x17C1DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17c1dc; return; }
        }
    }
    ctx->pc = 0x17C254u;
label_17c254:
    // 0x17c254: 0x0  nop
    ctx->pc = 0x17c254u;
    // NOP
label_17c258:
    // 0x17c258: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x17c258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_17c25c:
    // 0x17c25c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x17c25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_17c260:
    // 0x17c260: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_17c264:
    if (ctx->pc == 0x17C264u) {
        ctx->pc = 0x17C268u;
        goto label_17c268;
    }
    ctx->pc = 0x17C260u;
    {
        const bool branch_taken_0x17c260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c260) {
            ctx->pc = 0x17C270u;
            goto label_17c270;
        }
    }
    ctx->pc = 0x17C268u;
label_17c268:
    // 0x17c268: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_17c26c:
    if (ctx->pc == 0x17C26Cu) {
        ctx->pc = 0x17C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C268u;
        // 0x17c26c: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C270u;
        goto label_17c270;
    }
    ctx->pc = 0x17C268u;
    {
        const bool branch_taken_0x17c268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C268u;
        // 0x17c26c: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c268) {
            ctx->pc = 0x17C1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17c1a8; return; }
        }
    }
    ctx->pc = 0x17C270u;
label_17c270:
    // 0x17c270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c274:
    // 0x17c274: 0x0  nop
    ctx->pc = 0x17c274u;
    // NOP
label_17c278:
    // 0x17c278: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c27c:
    // 0x17c27c: 0x0  nop
    ctx->pc = 0x17c27cu;
    // NOP
label_17c280:
    // 0x17c280: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_17c284:
    if (ctx->pc == 0x17C284u) {
        ctx->pc = 0x17C288u;
        goto label_17c288;
    }
    ctx->pc = 0x17C280u;
    {
        const bool branch_taken_0x17c280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c280) {
            ctx->pc = 0x17C298u;
            goto label_17c298;
        }
    }
    ctx->pc = 0x17C288u;
label_17c288:
    // 0x17c288: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x17c288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_17c28c:
    // 0x17c28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c290:
    // 0x17c290: 0x10000064  b           . + 4 + (0x64 << 2)
label_17c294:
    if (ctx->pc == 0x17C294u) {
        ctx->pc = 0x17C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C290u;
        // 0x17c294: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C298u;
        goto label_17c298;
    }
    ctx->pc = 0x17C290u;
    {
        const bool branch_taken_0x17c290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C290u;
        // 0x17c294: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c290) {
            ctx->pc = 0x17C424u;
            goto label_17c424;
        }
    }
    ctx->pc = 0x17C298u;
label_17c298:
    // 0x17c298: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x17c298u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17c29c:
    // 0x17c29c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x17c29cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17c2a0:
    // 0x17c2a0: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x17c2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_17c2a4:
    // 0x17c2a4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x17c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17c2a8:
    // 0x17c2a8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x17c2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17c2ac:
    // 0x17c2ac: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x17c2acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_17c2b0:
    // 0x17c2b0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x17c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_17c2b4:
    // 0x17c2b4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x17c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_17c2b8:
    // 0x17c2b8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_17c2bc:
    // 0x17c2bc: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x17c2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_17c2c0:
    // 0x17c2c0: 0x2653000c  addiu       $s3, $s2, 0xC
    ctx->pc = 0x17c2c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_17c2c4:
    // 0x17c2c4: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x17c2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_17c2c8:
    // 0x17c2c8: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x17c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
label_17c2cc:
    // 0x17c2cc: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x17c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_17c2d0:
    // 0x17c2d0: 0x643018  mult        $a2, $v1, $a0
    ctx->pc = 0x17c2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_17c2d4:
    // 0x17c2d4: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x17c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_17c2d8:
    // 0x17c2d8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x17c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17c2dc:
    // 0x17c2dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x17c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17c2e0:
    // 0x17c2e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_17c2e4:
    // 0x17c2e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17c2e8:
    // 0x17c2e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_17c2ec:
    // 0x17c2ec: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x17c2ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_17c2f0:
    // 0x17c2f0: 0xc066e40  jal         func_19B900
label_17c2f4:
    if (ctx->pc == 0x17C2F4u) {
        ctx->pc = 0x17C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2F0u;
        // 0x17c2f4: 0x2639021  addu        $s2, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C2F8u;
        goto label_17c2f8;
    }
    ctx->pc = 0x17C2F0u;
    SET_GPR_U32(ctx, 31, 0x17C2F8u);
    ctx->pc = 0x17C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C2F0u;
    // 0x17c2f4: 0x2639021  addu        $s2, $s3, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B900u;
    { ctx->pc = 0x19b900; return; }
    ctx->pc = 0x17C2F8u;
label_17c2f8:
    // 0x17c2f8: 0x2603ffe7  addiu       $v1, $s0, -0x19
    ctx->pc = 0x17c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967271));
label_17c2fc:
    // 0x17c2fc: 0x112823  negu        $a1, $s1
    ctx->pc = 0x17c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_17c300:
    // 0x17c300: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x17c300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_17c304:
    // 0x17c304: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17c304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17c308:
    // 0x17c308: 0xc4f50000  lwc1        $f21, 0x0($a3)
    ctx->pc = 0x17c308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17c30c:
    // 0x17c30c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x17c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_17c310:
    // 0x17c310: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17c310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c314:
    // 0x17c314: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x17c314u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_17c318:
    // 0x17c318: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x17c318u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_17c31c:
    // 0x17c31c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x17c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_17c320:
    // 0x17c320: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17c320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17c324:
    // 0x17c324: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x17c324u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17c328:
    // 0x17c328: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17c328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17c32c:
    // 0x17c32c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x17c32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17c330:
    // 0x17c330: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_17c334:
    // 0x17c334: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x17c334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
label_17c338:
    // 0x17c338: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
label_17c33c:
    if (ctx->pc == 0x17C33Cu) {
        ctx->pc = 0x17C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C338u;
        // 0x17c33c: 0xafa600ac  sw          $a2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C340u;
        goto label_17c340;
    }
    ctx->pc = 0x17C338u;
    {
        const bool branch_taken_0x17c338 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x17C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C338u;
        // 0x17c33c: 0xafa600ac  sw          $a2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c338) {
            ctx->pc = 0x17C37Cu;
            goto label_17c37c;
        }
    }
    ctx->pc = 0x17C340u;
label_17c340:
    // 0x17c340: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x17c340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_17c344:
    // 0x17c344: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x17c344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_17c348:
    // 0x17c348: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x17c348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c34c:
    // 0x17c34c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x17c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c350:
    // 0x17c350: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17c354:
    // 0x17c354: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x17c354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_17c358:
    // 0x17c358: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x17c358u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_17c35c:
    // 0x17c35c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x17c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_17c360:
    // 0x17c360: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x17c360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c364:
    // 0x17c364: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x17c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c368:
    // 0x17c368: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17c36c:
    // 0x17c36c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x17c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_17c370:
    // 0x17c370: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x17c370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_17c374:
    // 0x17c374: 0x10000014  b           . + 4 + (0x14 << 2)
label_17c378:
    if (ctx->pc == 0x17C378u) {
        ctx->pc = 0x17C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C374u;
        // 0x17c378: 0xc6760000  lwc1        $f22, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C37Cu;
        goto label_17c37c;
    }
    ctx->pc = 0x17C374u;
    {
        const bool branch_taken_0x17c374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C374u;
        // 0x17c378: 0xc6760000  lwc1        $f22, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c374) {
            ctx->pc = 0x17C3C8u;
            goto label_17c3c8;
        }
    }
    ctx->pc = 0x17C37Cu;
label_17c37c:
    // 0x17c37c: 0x3c03c1c8  lui         $v1, 0xC1C8
    ctx->pc = 0x17c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49608 << 16));
label_17c380:
    // 0x17c380: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x17c380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_17c384:
    // 0x17c384: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x17c384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_17c388:
    // 0x17c388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c38c:
    // 0x17c38c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x17c38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17c390:
    // 0x17c390: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x17c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c394:
    // 0x17c394: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x17c394u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_17c398:
    // 0x17c398: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x17c398u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_17c39c:
    // 0x17c39c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x17c39cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_17c3a0:
    // 0x17c3a0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x17c3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_17c3a4:
    // 0x17c3a4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x17c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_17c3a8:
    // 0x17c3a8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x17c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_17c3ac:
    // 0x17c3ac: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x17c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c3b0:
    // 0x17c3b0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x17c3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c3b4:
    // 0x17c3b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c3b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17c3b8:
    // 0x17c3b8: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x17c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_17c3bc:
    // 0x17c3bc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x17c3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_17c3c0:
    // 0x17c3c0: 0xc6560004  lwc1        $f22, 0x4($s2)
    ctx->pc = 0x17c3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17c3c4:
    // 0x17c3c4: 0x0  nop
    ctx->pc = 0x17c3c4u;
    // NOP
label_17c3c8:
    // 0x17c3c8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_17c3cc:
    // 0x17c3cc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_17c3d0:
    // 0x17c3d0: 0xc066d98  jal         func_19B660
label_17c3d4:
    if (ctx->pc == 0x17C3D4u) {
        ctx->pc = 0x17C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3D0u;
        // 0x17c3d4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C3D8u;
        goto label_17c3d8;
    }
    ctx->pc = 0x17C3D0u;
    SET_GPR_U32(ctx, 31, 0x17C3D8u);
    ctx->pc = 0x17C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C3D0u;
    // 0x17c3d4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x17C3D8u;
label_17c3d8:
    // 0x17c3d8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_17c3dc:
    // 0x17c3dc: 0xc066daa  jal         func_19B6A8
label_17c3e0:
    if (ctx->pc == 0x17C3E0u) {
        ctx->pc = 0x17C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C3DCu;
        // 0x17c3e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C3E4u;
        goto label_17c3e4;
    }
    ctx->pc = 0x17C3DCu;
    SET_GPR_U32(ctx, 31, 0x17C3E4u);
    ctx->pc = 0x17C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C3DCu;
    // 0x17c3e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x17C3E4u;
label_17c3e4:
    // 0x17c3e4: 0xc6840000  lwc1        $f4, 0x0($s4)
    ctx->pc = 0x17c3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_17c3e8:
    // 0x17c3e8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x17c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_17c3ec:
    // 0x17c3ec: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x17c3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17c3f0:
    // 0x17c3f0: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x17c3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c3f4:
    // 0x17c3f4: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x17c3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17c3f8:
    // 0x17c3f8: 0xc6e50000  lwc1        $f5, 0x0($s7)
    ctx->pc = 0x17c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_17c3fc:
    // 0x17c3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c400:
    // 0x17c400: 0x4604a101  sub.s       $f4, $f20, $f4
    ctx->pc = 0x17c400u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
label_17c404:
    // 0x17c404: 0x4602a881  sub.s       $f2, $f21, $f2
    ctx->pc = 0x17c404u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_17c408:
    // 0x17c408: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x17c408u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_17c40c:
    // 0x17c40c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17c40cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_17c410:
    // 0x17c410: 0x46051883  div.s       $f2, $f3, $f5
    ctx->pc = 0x17c410u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[5];
label_17c414:
    // 0x17c414: 0x460508c3  div.s       $f3, $f1, $f5
    ctx->pc = 0x17c414u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[5];
label_17c418:
    // 0x17c418: 0x46161040  add.s       $f1, $f2, $f22
    ctx->pc = 0x17c418u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_17c41c:
    // 0x17c41c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x17c41cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_17c420:
    // 0x17c420: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17c424:
    // 0x17c424: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17c424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17c428:
    // 0x17c428: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17c428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17c42c:
    // 0x17c42c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17c42cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17c430:
    // 0x17c430: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17c434:
    // 0x17c434: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17c434u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17c438:
    // 0x17c438: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17c43c:
    // 0x17c43c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17c43cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17c440:
    // 0x17c440: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17c440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17c444:
    // 0x17c444: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17c444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17c448:
    // 0x17c448: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17c448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17c44c:
    // 0x17c44c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17c44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17c450:
    // 0x17c450: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17c454:
    // 0x17c454: 0x3e00008  jr          $ra
label_17c458:
    if (ctx->pc == 0x17C458u) {
        ctx->pc = 0x17C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C454u;
        // 0x17c458: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C45Cu;
        goto label_17c45c;
    }
    ctx->pc = 0x17C454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C454u;
        // 0x17c458: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C45Cu;
label_17c45c:
    // 0x17c45c: 0x0  nop
    ctx->pc = 0x17c45cu;
    // NOP
label_17c460:
    // 0x17c460: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x17c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_17c464:
    // 0x17c464: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x17c464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
label_17c468:
    // 0x17c468: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_17c46c:
    // 0x17c46c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x17c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_17c470:
    // 0x17c470: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17c470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17c474:
    // 0x17c474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17c478:
    // 0x17c478: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17c47c:
    // 0x17c47c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x17c47cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c480:
    // 0x17c480: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_17c484:
    // 0x17c484: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x17c484u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17c488:
    // 0x17c488: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17c488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17c48c:
    // 0x17c48c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x17c48cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c490:
    // 0x17c490: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17c490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17c494:
    // 0x17c494: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17c494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17c498:
    // 0x17c498: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17c498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17c49c:
    // 0x17c49c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17c49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17c4a0:
    // 0x17c4a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17c4a4:
    // 0x17c4a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17c4a8:
    // 0x17c4a8: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x17c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
label_17c4ac:
    // 0x17c4ac: 0xc066e14  jal         func_19B850
label_17c4b0:
    if (ctx->pc == 0x17C4B0u) {
        ctx->pc = 0x17C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4ACu;
        // 0x17c4b0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C4B4u;
        goto label_17c4b4;
    }
    ctx->pc = 0x17C4ACu;
    SET_GPR_U32(ctx, 31, 0x17C4B4u);
    ctx->pc = 0x17C4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C4ACu;
    // 0x17c4b0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x17C4B4u;
label_17c4b4:
    // 0x17c4b4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17c4b8:
    // 0x17c4b8: 0xc066e38  jal         func_19B8E0
label_17c4bc:
    if (ctx->pc == 0x17C4BCu) {
        ctx->pc = 0x17C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4B8u;
        // 0x17c4bc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C4C0u;
        goto label_17c4c0;
    }
    ctx->pc = 0x17C4B8u;
    SET_GPR_U32(ctx, 31, 0x17C4C0u);
    ctx->pc = 0x17C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C4B8u;
    // 0x17c4bc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8E0u;
    { ctx->pc = 0x19b8e0; return; }
    ctx->pc = 0x17C4C0u;
label_17c4c0:
    // 0x17c4c0: 0x8f838448  lw          $v1, -0x7BB8($gp)
    ctx->pc = 0x17c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17c4c4:
    // 0x17c4c4: 0x8fb300d0  lw          $s3, 0xD0($sp)
    ctx->pc = 0x17c4c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17c4c8:
    // 0x17c4c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17c4cc:
    // 0x17c4cc: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x17c4ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_17c4d0:
    // 0x17c4d0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_17c4d4:
    if (ctx->pc == 0x17C4D4u) {
        ctx->pc = 0x17C4D8u;
        goto label_17c4d8;
    }
    ctx->pc = 0x17C4D0u;
    {
        const bool branch_taken_0x17c4d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c4d0) {
            ctx->pc = 0x17C4DCu;
            goto label_17c4dc;
        }
    }
    ctx->pc = 0x17C4D8u;
label_17c4d8:
    // 0x17c4d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c4d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c4dc:
    // 0x17c4dc: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x17c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_17c4e0:
    // 0x17c4e0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x17c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17c4e4:
    // 0x17c4e4: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x17c4e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17c4e8:
    // 0x17c4e8: 0x75082a  slt         $at, $v1, $s5
    ctx->pc = 0x17c4e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_17c4ec:
    // 0x17c4ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_17c4f0:
    if (ctx->pc == 0x17C4F0u) {
        ctx->pc = 0x17C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4ECu;
        // 0x17c4f0: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C4F4u;
        goto label_17c4f4;
    }
    ctx->pc = 0x17C4ECu;
    {
        const bool branch_taken_0x17c4ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4ECu;
        // 0x17c4f0: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4ec) {
            ctx->pc = 0x17C4F8u;
            goto label_17c4f8;
        }
    }
    ctx->pc = 0x17C4F4u;
label_17c4f4:
    // 0x17c4f4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x17c4f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17c4f8:
    // 0x17c4f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17c4fc:
    // 0x17c4fc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x17c4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_17c500:
    // 0x17c500: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17c504:
    // 0x17c504: 0xc066e14  jal         func_19B850
label_17c508:
    if (ctx->pc == 0x17C508u) {
        ctx->pc = 0x17C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C504u;
        // 0x17c508: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C50Cu;
        goto label_17c50c;
    }
    ctx->pc = 0x17C504u;
    SET_GPR_U32(ctx, 31, 0x17C50Cu);
    ctx->pc = 0x17C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C504u;
    // 0x17c508: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x17C50Cu;
label_17c50c:
    // 0x17c50c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17c510:
    // 0x17c510: 0xc066e38  jal         func_19B8E0
label_17c514:
    if (ctx->pc == 0x17C514u) {
        ctx->pc = 0x17C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C510u;
        // 0x17c514: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C518u;
        goto label_17c518;
    }
    ctx->pc = 0x17C510u;
    SET_GPR_U32(ctx, 31, 0x17C518u);
    ctx->pc = 0x17C514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C510u;
    // 0x17c514: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8E0u;
    { ctx->pc = 0x19b8e0; return; }
    ctx->pc = 0x17C518u;
label_17c518:
    // 0x17c518: 0x8f838448  lw          $v1, -0x7BB8($gp)
    ctx->pc = 0x17c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17c51c:
    // 0x17c51c: 0x8fb400d0  lw          $s4, 0xD0($sp)
    ctx->pc = 0x17c51cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17c520:
    // 0x17c520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17c524:
    // 0x17c524: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x17c524u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_17c528:
    // 0x17c528: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17c52c:
    if (ctx->pc == 0x17C52Cu) {
        ctx->pc = 0x17C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C528u;
        // 0x17c52c: 0x27a200d8  addiu       $v0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C530u;
        goto label_17c530;
    }
    ctx->pc = 0x17C528u;
    {
        const bool branch_taken_0x17c528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C528u;
        // 0x17c52c: 0x27a200d8  addiu       $v0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c528) {
            ctx->pc = 0x17C538u;
            goto label_17c538;
        }
    }
    ctx->pc = 0x17C530u;
label_17c530:
    // 0x17c530: 0x10000067  b           . + 4 + (0x67 << 2)
label_17c534:
    if (ctx->pc == 0x17C534u) {
        ctx->pc = 0x17C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C530u;
        // 0x17c534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C538u;
        goto label_17c538;
    }
    ctx->pc = 0x17C530u;
    {
        const bool branch_taken_0x17c530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C530u;
        // 0x17c534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c530) {
            ctx->pc = 0x17C6D0u;
            goto label_17c6d0;
        }
    }
    ctx->pc = 0x17C538u;
label_17c538:
    // 0x17c538: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x17c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17c53c:
    // 0x17c53c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x17c53cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17c540:
    // 0x17c540: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x17c540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_17c544:
    // 0x17c544: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17c548:
    if (ctx->pc == 0x17C548u) {
        ctx->pc = 0x17C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C544u;
        // 0x17c548: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C54Cu;
        goto label_17c54c;
    }
    ctx->pc = 0x17C544u;
    {
        const bool branch_taken_0x17c544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C544u;
        // 0x17c548: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c544) {
            ctx->pc = 0x17C554u;
            goto label_17c554;
        }
    }
    ctx->pc = 0x17C54Cu;
label_17c54c:
    // 0x17c54c: 0x10000060  b           . + 4 + (0x60 << 2)
label_17c550:
    if (ctx->pc == 0x17C550u) {
        ctx->pc = 0x17C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C54Cu;
        // 0x17c550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C554u;
        goto label_17c554;
    }
    ctx->pc = 0x17C54Cu;
    {
        const bool branch_taken_0x17c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C54Cu;
        // 0x17c550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c54c) {
            ctx->pc = 0x17C6D0u;
            goto label_17c6d0;
        }
    }
    ctx->pc = 0x17C554u;
label_17c554:
    // 0x17c554: 0xc066e40  jal         func_19B900
label_17c558:
    if (ctx->pc == 0x17C558u) {
        ctx->pc = 0x17C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C554u;
        // 0x17c558: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C55Cu;
        goto label_17c55c;
    }
    ctx->pc = 0x17C554u;
    SET_GPR_U32(ctx, 31, 0x17C55Cu);
    ctx->pc = 0x17C558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C554u;
    // 0x17c558: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B900u;
    { ctx->pc = 0x19b900; return; }
    ctx->pc = 0x17C55Cu;
label_17c55c:
    // 0x17c55c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x17c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_17c560:
    // 0x17c560: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17c560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17c564:
    // 0x17c564: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17c564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17c568:
    // 0x17c568: 0xc066e14  jal         func_19B850
label_17c56c:
    if (ctx->pc == 0x17C56Cu) {
        ctx->pc = 0x17C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C568u;
        // 0x17c56c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C570u;
        goto label_17c570;
    }
    ctx->pc = 0x17C568u;
    SET_GPR_U32(ctx, 31, 0x17C570u);
    ctx->pc = 0x17C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C568u;
    // 0x17c56c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x17C570u;
label_17c570:
    // 0x17c570: 0x2742023  subu        $a0, $s3, $s4
    ctx->pc = 0x17c570u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_17c574:
    // 0x17c574: 0x2b01823  subu        $v1, $s5, $s0
    ctx->pc = 0x17c574u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_17c578:
    // 0x17c578: 0x80102a  slt         $v0, $a0, $zero
    ctx->pc = 0x17c578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_17c57c:
    // 0x17c57c: 0x48822  neg         $s1, $a0
    ctx->pc = 0x17c57cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 4), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_17c580:
    // 0x17c580: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x17c580u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_17c584:
    // 0x17c584: 0x39022  neg         $s2, $v1
    ctx->pc = 0x17c584u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_17c588:
    // 0x17c588: 0x60102a  slt         $v0, $v1, $zero
    ctx->pc = 0x17c588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_17c58c:
    // 0x17c58c: 0x8f86844c  lw          $a2, -0x7BB4($gp)
    ctx->pc = 0x17c58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935628)));
label_17c590:
    // 0x17c590: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x17c590u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_17c594:
    // 0x17c594: 0x274082a  slt         $at, $s3, $s4
    ctx->pc = 0x17c594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_17c598:
    // 0x17c598: 0x8f828448  lw          $v0, -0x7BB8($gp)
    ctx->pc = 0x17c598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17c59c:
    // 0x17c59c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17c5a0:
    // 0x17c5a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17c5a4:
    // 0x17c5a4: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x17c5a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_17c5a8:
    // 0x17c5a8: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x17c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_17c5ac:
    // 0x17c5ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_17c5b0:
    // 0x17c5b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c5b4:
    // 0x17c5b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_17c5b8:
    // 0x17c5b8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_17c5bc:
    if (ctx->pc == 0x17C5BCu) {
        ctx->pc = 0x17C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5B8u;
        // 0x17c5bc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C5C0u;
        goto label_17c5c0;
    }
    ctx->pc = 0x17C5B8u;
    {
        const bool branch_taken_0x17c5b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5B8u;
        // 0x17c5bc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5b8) {
            ctx->pc = 0x17C5D4u;
            goto label_17c5d4;
        }
    }
    ctx->pc = 0x17C5C0u;
label_17c5c0:
    // 0x17c5c0: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x17c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
label_17c5c4:
    // 0x17c5c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17c5c8:
    // 0x17c5c8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x17c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_17c5cc:
    // 0x17c5cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_17c5d0:
    if (ctx->pc == 0x17C5D0u) {
        ctx->pc = 0x17C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5CCu;
        // 0x17c5d0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C5D4u;
        goto label_17c5d4;
    }
    ctx->pc = 0x17C5CCu;
    {
        const bool branch_taken_0x17c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5CCu;
        // 0x17c5d0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5cc) {
            ctx->pc = 0x17C5E4u;
            goto label_17c5e4;
        }
    }
    ctx->pc = 0x17C5D4u;
label_17c5d4:
    // 0x17c5d4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x17c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_17c5d8:
    // 0x17c5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c5dc:
    // 0x17c5dc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x17c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_17c5e0:
    // 0x17c5e0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x17c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_17c5e4:
    // 0x17c5e4: 0x2b0082a  slt         $at, $s5, $s0
    ctx->pc = 0x17c5e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_17c5e8:
    // 0x17c5e8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_17c5ec:
    if (ctx->pc == 0x17C5ECu) {
        ctx->pc = 0x17C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5E8u;
        // 0x17c5ec: 0x3c0243fa  lui         $v0, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C5F0u;
        goto label_17c5f0;
    }
    ctx->pc = 0x17C5E8u;
    {
        const bool branch_taken_0x17c5e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5E8u;
        // 0x17c5ec: 0x3c0243fa  lui         $v0, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5e8) {
            ctx->pc = 0x17C608u;
            goto label_17c608;
        }
    }
    ctx->pc = 0x17C5F0u;
label_17c5f0:
    // 0x17c5f0: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x17c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_17c5f4:
    // 0x17c5f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17c5f8:
    // 0x17c5f8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x17c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_17c5fc:
    // 0x17c5fc: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x17c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_17c600:
    // 0x17c600: 0x10000005  b           . + 4 + (0x5 << 2)
label_17c604:
    if (ctx->pc == 0x17C604u) {
        ctx->pc = 0x17C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C600u;
        // 0x17c604: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C608u;
        goto label_17c608;
    }
    ctx->pc = 0x17C600u;
    {
        const bool branch_taken_0x17c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C600u;
        // 0x17c604: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c600) {
            ctx->pc = 0x17C618u;
            goto label_17c618;
        }
    }
    ctx->pc = 0x17C608u;
label_17c608:
    // 0x17c608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17c608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c60c:
    // 0x17c60c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x17c60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_17c610:
    // 0x17c610: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x17c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_17c614:
    // 0x17c614: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17c614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17c618:
    // 0x17c618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c61c:
    // 0x17c61c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17c61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17c620:
    // 0x17c620: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x17c620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_17c624:
    // 0x17c624: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x17c624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17c628:
    // 0x17c628: 0xc05f384  jal         func_17CE10
label_17c62c:
    if (ctx->pc == 0x17C62Cu) {
        ctx->pc = 0x17C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C628u;
        // 0x17c62c: 0x27a900d0  addiu       $t1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C630u;
        goto label_17c630;
    }
    ctx->pc = 0x17C628u;
    SET_GPR_U32(ctx, 31, 0x17C630u);
    ctx->pc = 0x17C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C628u;
    // 0x17c62c: 0x27a900d0  addiu       $t1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CE10u;
    { ctx->pc = 0x17ce10; return; }
    ctx->pc = 0x17C630u;
label_17c630:
    // 0x17c630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c634:
    // 0x17c634: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17c634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17c638:
    // 0x17c638: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17c638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17c63c:
    // 0x17c63c: 0xc05f30c  jal         func_17CC30
label_17c640:
    if (ctx->pc == 0x17C640u) {
        ctx->pc = 0x17C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C63Cu;
        // 0x17c640: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C644u;
        goto label_17c644;
    }
    ctx->pc = 0x17C63Cu;
    SET_GPR_U32(ctx, 31, 0x17C644u);
    ctx->pc = 0x17C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C63Cu;
    // 0x17c640: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CC30u;
    { ctx->pc = 0x17cc30; return; }
    ctx->pc = 0x17C644u;
label_17c644:
    // 0x17c644: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17c648:
    if (ctx->pc == 0x17C648u) {
        ctx->pc = 0x17C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C644u;
        // 0x17c648: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C64Cu;
        goto label_17c64c;
    }
    ctx->pc = 0x17C644u;
    {
        const bool branch_taken_0x17c644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C644u;
        // 0x17c648: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c644) {
            ctx->pc = 0x17C654u;
            goto label_17c654;
        }
    }
    ctx->pc = 0x17C64Cu;
label_17c64c:
    // 0x17c64c: 0x10000020  b           . + 4 + (0x20 << 2)
label_17c650:
    if (ctx->pc == 0x17C650u) {
        ctx->pc = 0x17C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C64Cu;
        // 0x17c650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C654u;
        goto label_17c654;
    }
    ctx->pc = 0x17C64Cu;
    {
        const bool branch_taken_0x17c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C64Cu;
        // 0x17c650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c64c) {
            ctx->pc = 0x17C6D0u;
            goto label_17c6d0;
        }
    }
    ctx->pc = 0x17C654u;
label_17c654:
    // 0x17c654: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17c654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17c658:
    // 0x17c658: 0xc05f1c0  jal         func_17C700
label_17c65c:
    if (ctx->pc == 0x17C65Cu) {
        ctx->pc = 0x17C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C658u;
        // 0x17c65c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C660u;
        goto label_17c660;
    }
    ctx->pc = 0x17C658u;
    SET_GPR_U32(ctx, 31, 0x17C660u);
    ctx->pc = 0x17C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C658u;
    // 0x17c65c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C700u;
    goto label_17c700;
    ctx->pc = 0x17C660u;
label_17c660:
    // 0x17c660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17c660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c664:
    // 0x17c664: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_17c668:
    if (ctx->pc == 0x17C668u) {
        ctx->pc = 0x17C66Cu;
        goto label_17c66c;
    }
    ctx->pc = 0x17C664u;
    {
        const bool branch_taken_0x17c664 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c664) {
            ctx->pc = 0x17C674u;
            goto label_17c674;
        }
    }
    ctx->pc = 0x17C66Cu;
label_17c66c:
    // 0x17c66c: 0x10000018  b           . + 4 + (0x18 << 2)
label_17c670:
    if (ctx->pc == 0x17C670u) {
        ctx->pc = 0x17C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C66Cu;
        // 0x17c670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C674u;
        goto label_17c674;
    }
    ctx->pc = 0x17C66Cu;
    {
        const bool branch_taken_0x17c66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C66Cu;
        // 0x17c670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c66c) {
            ctx->pc = 0x17C6D0u;
            goto label_17c6d0;
        }
    }
    ctx->pc = 0x17C674u;
label_17c674:
    // 0x17c674: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17c674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17c678:
    // 0x17c678: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17c678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17c67c:
    // 0x17c67c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_17c680:
    if (ctx->pc == 0x17C680u) {
        ctx->pc = 0x17C684u;
        goto label_17c684;
    }
    ctx->pc = 0x17C67Cu;
    {
        const bool branch_taken_0x17c67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c67c) {
            ctx->pc = 0x17C6ACu;
            goto label_17c6ac;
        }
    }
    ctx->pc = 0x17C684u;
label_17c684:
    // 0x17c684: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x17c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_17c688:
    // 0x17c688: 0xc066e26  jal         func_19B898
label_17c68c:
    if (ctx->pc == 0x17C68Cu) {
        ctx->pc = 0x17C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C688u;
        // 0x17c68c: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C690u;
        goto label_17c690;
    }
    ctx->pc = 0x17C688u;
    SET_GPR_U32(ctx, 31, 0x17C690u);
    ctx->pc = 0x17C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C688u;
    // 0x17c68c: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17C690u;
label_17c690:
    // 0x17c690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17c694:
    // 0x17c694: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x17c694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_17c698:
    // 0x17c698: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x17c698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_17c69c:
    // 0x17c69c: 0xc066e26  jal         func_19B898
label_17c6a0:
    if (ctx->pc == 0x17C6A0u) {
        ctx->pc = 0x17C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C69Cu;
        // 0x17c6a0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C6A4u;
        goto label_17c6a4;
    }
    ctx->pc = 0x17C69Cu;
    SET_GPR_U32(ctx, 31, 0x17C6A4u);
    ctx->pc = 0x17C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C69Cu;
    // 0x17c6a0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17C6A4u;
label_17c6a4:
    // 0x17c6a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_17c6a8:
    if (ctx->pc == 0x17C6A8u) {
        ctx->pc = 0x17C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6A4u;
        // 0x17c6a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C6ACu;
        goto label_17c6ac;
    }
    ctx->pc = 0x17C6A4u;
    {
        const bool branch_taken_0x17c6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6A4u;
        // 0x17c6a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6a4) {
            ctx->pc = 0x17C6D0u;
            goto label_17c6d0;
        }
    }
    ctx->pc = 0x17C6ACu;
label_17c6ac:
    // 0x17c6ac: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x17c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_17c6b0:
    // 0x17c6b0: 0xc066e26  jal         func_19B898
label_17c6b4:
    if (ctx->pc == 0x17C6B4u) {
        ctx->pc = 0x17C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6B0u;
        // 0x17c6b4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C6B8u;
        goto label_17c6b8;
    }
    ctx->pc = 0x17C6B0u;
    SET_GPR_U32(ctx, 31, 0x17C6B8u);
    ctx->pc = 0x17C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6B0u;
    // 0x17c6b4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17C6B8u;
label_17c6b8:
    // 0x17c6b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17c6bc:
    // 0x17c6bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x17c6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_17c6c0:
    // 0x17c6c0: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x17c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_17c6c4:
    // 0x17c6c4: 0xc066e26  jal         func_19B898
label_17c6c8:
    if (ctx->pc == 0x17C6C8u) {
        ctx->pc = 0x17C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6C4u;
        // 0x17c6c8: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C6CCu;
        goto label_17c6cc;
    }
    ctx->pc = 0x17C6C4u;
    SET_GPR_U32(ctx, 31, 0x17C6CCu);
    ctx->pc = 0x17C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6C4u;
    // 0x17c6c8: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17C6CCu;
label_17c6cc:
    // 0x17c6cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c6d0:
    // 0x17c6d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17c6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17c6d4:
    // 0x17c6d4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17c6d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17c6d8:
    // 0x17c6d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17c6d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17c6dc:
    // 0x17c6dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17c6dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17c6e0:
    // 0x17c6e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17c6e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17c6e4:
    // 0x17c6e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17c6e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17c6e8:
    // 0x17c6e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17c6e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17c6ec:
    // 0x17c6ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17c6ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17c6f0:
    // 0x17c6f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17c6f4:
    // 0x17c6f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17c6f8:
    // 0x17c6f8: 0x3e00008  jr          $ra
label_17c6fc:
    if (ctx->pc == 0x17C6FCu) {
        ctx->pc = 0x17C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6F8u;
        // 0x17c6fc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C700u;
        goto label_17c700;
    }
    ctx->pc = 0x17C6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6F8u;
        // 0x17c6fc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C700u;
label_17c700:
    // 0x17c700: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_17c704:
    // 0x17c704: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17c708:
    // 0x17c708: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17c708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_17c70c:
    // 0x17c70c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17c70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_17c710:
    // 0x17c710: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17c710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_17c714:
    // 0x17c714: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17c714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_17c718:
    // 0x17c718: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17c718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_17c71c:
    // 0x17c71c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17c71cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c720:
    // 0x17c720: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17c720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_17c724:
    // 0x17c724: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17c724u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c728:
    // 0x17c728: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_17c72c:
    // 0x17c72c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17c72cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c730:
    // 0x17c730: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17c730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17c734:
    // 0x17c734: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17c738:
    // 0x17c738: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17c738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17c73c:
    // 0x17c73c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17c73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c740:
    // 0x17c740: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x17c740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_17c744:
    // 0x17c744: 0x12a0012b  beqz        $s5, . + 4 + (0x12B << 2)
label_17c748:
    if (ctx->pc == 0x17C748u) {
        ctx->pc = 0x17C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C744u;
        // 0x17c748: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C74Cu;
        goto label_17c74c;
    }
    ctx->pc = 0x17C744u;
    {
        const bool branch_taken_0x17c744 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C744u;
        // 0x17c748: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c744) {
            ctx->pc = 0x17CBF4u;
            { ctx->pc = 0x17cbf4; return; }
        }
    }
    ctx->pc = 0x17C74Cu;
label_17c74c:
    // 0x17c74c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x17c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_17c750:
    // 0x17c750: 0x27b700a4  addiu       $s7, $sp, 0xA4
    ctx->pc = 0x17c750u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_17c754:
    // 0x17c754: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x17c754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_17c758:
    // 0x17c758: 0x27b600a8  addiu       $s6, $sp, 0xA8
    ctx->pc = 0x17c758u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_17c75c:
    // 0x17c75c: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x17c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_17c760:
    // 0x17c760: 0xc6a00054  lwc1        $f0, 0x54($s5)
    ctx->pc = 0x17c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c764:
    // 0x17c764: 0x27b100b4  addiu       $s1, $sp, 0xB4
    ctx->pc = 0x17c764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_17c768:
    // 0x17c768: 0x27b200b8  addiu       $s2, $sp, 0xB8
    ctx->pc = 0x17c768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_17c76c:
    // 0x17c76c: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x17c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_17c770:
    // 0x17c770: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17c770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_17c774:
    // 0x17c774: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17c774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17c778:
    // 0x17c778: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x17c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c77c:
    // 0x17c77c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c77cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17c780:
    // 0x17c780: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x17c780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_17c784:
    // 0x17c784: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x17c784u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_17c788:
    // 0x17c788: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x17c788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_17c78c:
    // 0x17c78c: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x17c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_17c790:
    // 0x17c790: 0xc6a00054  lwc1        $f0, 0x54($s5)
    ctx->pc = 0x17c790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c794:
    // 0x17c794: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17c794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c798:
    // 0x17c798: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17c79c:
    // 0x17c79c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x17c79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_17c7a0:
    // 0x17c7a0: 0xc066d98  jal         func_19B660
label_17c7a4:
    if (ctx->pc == 0x17C7A4u) {
        ctx->pc = 0x17C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7A0u;
        // 0x17c7a4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C7A8u;
        goto label_17c7a8;
    }
    ctx->pc = 0x17C7A0u;
    SET_GPR_U32(ctx, 31, 0x17C7A8u);
    ctx->pc = 0x17C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7A0u;
    // 0x17c7a4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x17C7A8u;
label_17c7a8:
    // 0x17c7a8: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x17c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_17c7ac:
    // 0x17c7ac: 0xc066daa  jal         func_19B6A8
label_17c7b0:
    if (ctx->pc == 0x17C7B0u) {
        ctx->pc = 0x17C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7ACu;
        // 0x17c7b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C7B4u;
        goto label_17c7b4;
    }
    ctx->pc = 0x17C7ACu;
    SET_GPR_U32(ctx, 31, 0x17C7B4u);
    ctx->pc = 0x17C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7ACu;
    // 0x17c7b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x17C7B4u;
label_17c7b4:
    // 0x17c7b4: 0x26a40050  addiu       $a0, $s5, 0x50
    ctx->pc = 0x17c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_17c7b8:
    // 0x17c7b8: 0xc066da0  jal         func_19B680
label_17c7bc:
    if (ctx->pc == 0x17C7BCu) {
        ctx->pc = 0x17C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7B8u;
        // 0x17c7bc: 0x26a50070  addiu       $a1, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C7C0u;
        goto label_17c7c0;
    }
    ctx->pc = 0x17C7B8u;
    SET_GPR_U32(ctx, 31, 0x17C7C0u);
    ctx->pc = 0x17C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7B8u;
    // 0x17c7bc: 0x26a50070  addiu       $a1, $s5, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x17C7C0u;
label_17c7c0:
    // 0x17c7c0: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x17c7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
label_17c7c4:
    // 0x17c7c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17c7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17c7c8:
    // 0x17c7c8: 0xc066da0  jal         func_19B680
label_17c7cc:
    if (ctx->pc == 0x17C7CCu) {
        ctx->pc = 0x17C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7C8u;
        // 0x17c7cc: 0x26a50070  addiu       $a1, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C7D0u;
        goto label_17c7d0;
    }
    ctx->pc = 0x17C7C8u;
    SET_GPR_U32(ctx, 31, 0x17C7D0u);
    ctx->pc = 0x17C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7C8u;
    // 0x17c7cc: 0x26a50070  addiu       $a1, $s5, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x17C7D0u;
label_17c7d0:
    // 0x17c7d0: 0xc6a20010  lwc1        $f2, 0x10($s5)
    ctx->pc = 0x17c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17c7d4:
    // 0x17c7d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17c7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17c7d8:
    // 0x17c7d8: 0x0  nop
    ctx->pc = 0x17c7d8u;
    // NOP
label_17c7dc:
    // 0x17c7dc: 0x46020501  sub.s       $f20, $f0, $f2
    ctx->pc = 0x17c7dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_17c7e0:
    // 0x17c7e0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x17c7e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c7e4:
    // 0x17c7e4: 0x0  nop
    ctx->pc = 0x17c7e4u;
    // NOP
label_17c7e8:
    // 0x17c7e8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_17c7ec:
    if (ctx->pc == 0x17C7ECu) {
        ctx->pc = 0x17C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7E8u;
        // 0x17c7ec: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C7F0u;
        goto label_17c7f0;
    }
    ctx->pc = 0x17C7E8u;
    {
        const bool branch_taken_0x17c7e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7E8u;
        // 0x17c7ec: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7e8) {
            ctx->pc = 0x17C80Cu;
            goto label_17c80c;
        }
    }
    ctx->pc = 0x17C7F0u;
label_17c7f0:
    // 0x17c7f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17c7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17c7f4:
    // 0x17c7f4: 0xc066da0  jal         func_19B680
label_17c7f8:
    if (ctx->pc == 0x17C7F8u) {
        ctx->pc = 0x17C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7F4u;
        // 0x17c7f8: 0x26a50070  addiu       $a1, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C7FCu;
        goto label_17c7fc;
    }
    ctx->pc = 0x17C7F4u;
    SET_GPR_U32(ctx, 31, 0x17C7FCu);
    ctx->pc = 0x17C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7F4u;
    // 0x17c7f8: 0x26a50070  addiu       $a1, $s5, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x17C7FCu;
label_17c7fc:
    // 0x17c7fc: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x17c7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c800:
    // 0x17c800: 0x10000003  b           . + 4 + (0x3 << 2)
label_17c804:
    if (ctx->pc == 0x17C804u) {
        ctx->pc = 0x17C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C800u;
        // 0x17c804: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C808u;
        goto label_17c808;
    }
    ctx->pc = 0x17C800u;
    {
        const bool branch_taken_0x17c800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C800u;
        // 0x17c804: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c800) {
            ctx->pc = 0x17C810u;
            goto label_17c810;
        }
    }
    ctx->pc = 0x17C808u;
label_17c808:
    // 0x17c808: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17c80c:
    // 0x17c80c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17c80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17c810:
    // 0x17c810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c814:
    // 0x17c814: 0x0  nop
    ctx->pc = 0x17c814u;
    // NOP
label_17c818:
    // 0x17c818: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17c818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c81c:
    // 0x17c81c: 0x0  nop
    ctx->pc = 0x17c81cu;
    // NOP
label_17c820:
    // 0x17c820: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
label_17c824:
    if (ctx->pc == 0x17C824u) {
        ctx->pc = 0x17C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C820u;
        // 0x17c824: 0x3c03c3fa  lui         $v1, 0xC3FA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C828u;
        goto label_17c828;
    }
    ctx->pc = 0x17C820u;
    {
        const bool branch_taken_0x17c820 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C820u;
        // 0x17c824: 0x3c03c3fa  lui         $v1, 0xC3FA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c820) {
            ctx->pc = 0x17C9A0u;
            goto label_17c9a0;
        }
    }
    ctx->pc = 0x17C828u;
label_17c828:
    // 0x17c828: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17c828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c82c:
    // 0x17c82c: 0x0  nop
    ctx->pc = 0x17c82cu;
    // NOP
label_17c830:
    // 0x17c830: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
label_17c834:
    if (ctx->pc == 0x17C834u) {
        ctx->pc = 0x17C838u;
        goto label_17c838;
    }
    ctx->pc = 0x17C830u;
    {
        const bool branch_taken_0x17c830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c830) {
            ctx->pc = 0x17C99Cu;
            goto label_17c99c;
        }
    }
    ctx->pc = 0x17C838u;
label_17c838:
    // 0x17c838: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x17c838u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_17c83c:
    // 0x17c83c: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x17c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_17c840:
    // 0x17c840: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17c840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17c844:
    // 0x17c844: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x17c844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17c848:
    // 0x17c848: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x17c848u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_17c84c:
    // 0x17c84c: 0x0  nop
    ctx->pc = 0x17c84cu;
    // NOP
label_17c850:
    // 0x17c850: 0x0  nop
    ctx->pc = 0x17c850u;
    // NOP
label_17c854:
    // 0x17c854: 0xc067054  jal         func_19C150
label_17c858:
    if (ctx->pc == 0x17C858u) {
        ctx->pc = 0x17C85Cu;
        goto label_17c85c;
    }
    ctx->pc = 0x17C854u;
    SET_GPR_U32(ctx, 31, 0x17C85Cu);
    ctx->pc = 0x19C150u;
    { ctx->pc = 0x19c150; return; }
    ctx->pc = 0x17C85Cu;
label_17c85c:
    // 0x17c85c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x17c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_17c860:
    // 0x17c860: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17c860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_17c864:
    // 0x17c864: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17c864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_17c868:
    // 0x17c868: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_17c86c:
    if (ctx->pc == 0x17C86Cu) {
        ctx->pc = 0x17C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C868u;
        // 0x17c86c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C870u;
        goto label_17c870;
    }
    ctx->pc = 0x17C868u;
    {
        const bool branch_taken_0x17c868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C868u;
        // 0x17c86c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c868) {
            ctx->pc = 0x17C8D8u;
            goto label_17c8d8;
        }
    }
    ctx->pc = 0x17C870u;
label_17c870:
    // 0x17c870: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x17c870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c874:
    // 0x17c874: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x17c874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c878:
    // 0x17c878: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17c878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c87c:
    // 0x17c87c: 0x0  nop
    ctx->pc = 0x17c87cu;
    // NOP
label_17c880:
    // 0x17c880: 0x45000037  bc1f        . + 4 + (0x37 << 2)
label_17c884:
    if (ctx->pc == 0x17C884u) {
        ctx->pc = 0x17C888u;
        goto label_17c888;
    }
    ctx->pc = 0x17C880u;
    {
        const bool branch_taken_0x17c880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c880) {
            ctx->pc = 0x17C960u;
            goto label_17c960;
        }
    }
    ctx->pc = 0x17C888u;
label_17c888:
    // 0x17c888: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x17c888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c88c:
    // 0x17c88c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17c88cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c890:
    // 0x17c890: 0x0  nop
    ctx->pc = 0x17c890u;
    // NOP
label_17c894:
    // 0x17c894: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_17c898:
    if (ctx->pc == 0x17C898u) {
        ctx->pc = 0x17C89Cu;
        goto label_17c89c;
    }
    ctx->pc = 0x17C894u;
    {
        const bool branch_taken_0x17c894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c894) {
            ctx->pc = 0x17C960u;
            goto label_17c960;
        }
    }
    ctx->pc = 0x17C89Cu;
label_17c89c:
    // 0x17c89c: 0xc6a00058  lwc1        $f0, 0x58($s5)
    ctx->pc = 0x17c89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c8a0:
    // 0x17c8a0: 0xc6a10038  lwc1        $f1, 0x38($s5)
    ctx->pc = 0x17c8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c8a4:
    // 0x17c8a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17c8a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c8a8:
    // 0x17c8a8: 0x0  nop
    ctx->pc = 0x17c8a8u;
    // NOP
label_17c8ac:
    // 0x17c8ac: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_17c8b0:
    if (ctx->pc == 0x17C8B0u) {
        ctx->pc = 0x17C8B4u;
        goto label_17c8b4;
    }
    ctx->pc = 0x17C8ACu;
    {
        const bool branch_taken_0x17c8ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c8ac) {
            ctx->pc = 0x17C960u;
            goto label_17c960;
        }
    }
    ctx->pc = 0x17C8B4u;
label_17c8b4:
    // 0x17c8b4: 0xc6a00068  lwc1        $f0, 0x68($s5)
    ctx->pc = 0x17c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c8b8:
    // 0x17c8b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17c8b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c8bc:
    // 0x17c8bc: 0x0  nop
    ctx->pc = 0x17c8bcu;
    // NOP
label_17c8c0:
    // 0x17c8c0: 0x45010027  bc1t        . + 4 + (0x27 << 2)
label_17c8c4:
    if (ctx->pc == 0x17C8C4u) {
        ctx->pc = 0x17C8C8u;
        goto label_17c8c8;
    }
    ctx->pc = 0x17C8C0u;
    {
        const bool branch_taken_0x17c8c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c8c0) {
            ctx->pc = 0x17C960u;
            goto label_17c960;
        }
    }
    ctx->pc = 0x17C8C8u;
label_17c8c8:
    // 0x17c8c8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x17c8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c8cc:
    // 0x17c8cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c8d0:
    // 0x17c8d0: 0x10000023  b           . + 4 + (0x23 << 2)
label_17c8d4:
    if (ctx->pc == 0x17C8D4u) {
        ctx->pc = 0x17C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8D0u;
        // 0x17c8d4: 0xe6a00034  swc1        $f0, 0x34($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C8D8u;
        goto label_17c8d8;
    }
    ctx->pc = 0x17C8D0u;
    {
        const bool branch_taken_0x17c8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8D0u;
        // 0x17c8d4: 0xe6a00034  swc1        $f0, 0x34($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8d0) {
            ctx->pc = 0x17C960u;
            goto label_17c960;
        }
    }
    ctx->pc = 0x17C8D8u;
label_17c8d8:
    // 0x17c8d8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x17c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c8dc:
    // 0x17c8dc: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x17c8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c8e0:
    // 0x17c8e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17c8e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c8e4:
    // 0x17c8e4: 0x0  nop
    ctx->pc = 0x17c8e4u;
    // NOP
label_17c8e8:
    // 0x17c8e8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_17c8ec:
    if (ctx->pc == 0x17C8ECu) {
        ctx->pc = 0x17C8F0u;
        goto label_17c8f0;
    }
    ctx->pc = 0x17C8E8u;
    {
        const bool branch_taken_0x17c8e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c8e8) {
            ctx->pc = 0x17C960u;
            goto label_17c960;
        }
    }
    ctx->pc = 0x17C8F0u;
label_17c8f0:
    // 0x17c8f0: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x17c8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c8f4:
    // 0x17c8f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17c8f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c8f8:
    // 0x17c8f8: 0x0  nop
    ctx->pc = 0x17c8f8u;
    // NOP
label_17c8fc:
    // 0x17c8fc: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_17c900:
    if (ctx->pc == 0x17C900u) {
        ctx->pc = 0x17C904u;
        goto label_17c904;
    }
    ctx->pc = 0x17C8FCu;
    {
        const bool branch_taken_0x17c8fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c8fc) {
            ctx->pc = 0x17C960u;
            goto label_17c960;
        }
    }
    ctx->pc = 0x17C904u;
label_17c904:
    // 0x17c904: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x17c904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c908:
    // 0x17c908: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x17c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c90c:
    // 0x17c90c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17c90cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c910:
    // 0x17c910: 0x0  nop
    ctx->pc = 0x17c910u;
    // NOP
label_17c914:
    // 0x17c914: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_17c918:
    if (ctx->pc == 0x17C918u) {
        ctx->pc = 0x17C91Cu;
        goto label_17c91c;
    }
    ctx->pc = 0x17C914u;
    {
        const bool branch_taken_0x17c914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c914) {
            ctx->pc = 0x17C960u;
            goto label_17c960;
        }
    }
    ctx->pc = 0x17C91Cu;
label_17c91c:
    // 0x17c91c: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x17c91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c920:
    // 0x17c920: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17c920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c924:
    // 0x17c924: 0x0  nop
    ctx->pc = 0x17c924u;
    // NOP
label_17c928:
    // 0x17c928: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_17c92c:
    if (ctx->pc == 0x17C92Cu) {
        ctx->pc = 0x17C930u;
        goto label_17c930;
    }
    ctx->pc = 0x17C928u;
    {
        const bool branch_taken_0x17c928 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c928) {
            ctx->pc = 0x17C960u;
            goto label_17c960;
        }
    }
    ctx->pc = 0x17C930u;
label_17c930:
    // 0x17c930: 0xc6a00058  lwc1        $f0, 0x58($s5)
    ctx->pc = 0x17c930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c934:
    // 0x17c934: 0xc6a10038  lwc1        $f1, 0x38($s5)
    ctx->pc = 0x17c934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c938:
    // 0x17c938: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17c938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c93c:
    // 0x17c93c: 0x0  nop
    ctx->pc = 0x17c93cu;
    // NOP
label_17c940:
    // 0x17c940: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_17c944:
    if (ctx->pc == 0x17C944u) {
        ctx->pc = 0x17C948u;
        goto label_17c948;
    }
    ctx->pc = 0x17C940u;
    {
        const bool branch_taken_0x17c940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c940) {
            ctx->pc = 0x17C960u;
            goto label_17c960;
        }
    }
    ctx->pc = 0x17C948u;
label_17c948:
    // 0x17c948: 0xc6a00068  lwc1        $f0, 0x68($s5)
    ctx->pc = 0x17c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c94c:
    // 0x17c94c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17c94cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c950:
    // 0x17c950: 0x0  nop
    ctx->pc = 0x17c950u;
    // NOP
label_17c954:
    // 0x17c954: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17c958:
    if (ctx->pc == 0x17C958u) {
        ctx->pc = 0x17C95Cu;
        goto label_17c95c;
    }
    ctx->pc = 0x17C954u;
    {
        const bool branch_taken_0x17c954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c954) {
            ctx->pc = 0x17C960u;
            goto label_17c960;
        }
    }
    ctx->pc = 0x17C95Cu;
label_17c95c:
    // 0x17c95c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c960:
    // 0x17c960: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_17c964:
    if (ctx->pc == 0x17C964u) {
        ctx->pc = 0x17C968u;
        goto label_17c968;
    }
    ctx->pc = 0x17C960u;
    {
        const bool branch_taken_0x17c960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c960) {
            ctx->pc = 0x17C99Cu;
            goto label_17c99c;
        }
    }
    ctx->pc = 0x17C968u;
label_17c968:
    // 0x17c968: 0xc6a30030  lwc1        $f3, 0x30($s5)
    ctx->pc = 0x17c968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17c96c:
    // 0x17c96c: 0xc6a20050  lwc1        $f2, 0x50($s5)
    ctx->pc = 0x17c96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17c970:
    // 0x17c970: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x17c970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c974:
    // 0x17c974: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x17c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c978:
    // 0x17c978: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x17c978u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_17c97c:
    // 0x17c97c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c97cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17c980:
    // 0x17c980: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x17c980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c984:
    // 0x17c984: 0x0  nop
    ctx->pc = 0x17c984u;
    // NOP
label_17c988:
    // 0x17c988: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_17c98c:
    if (ctx->pc == 0x17C98Cu) {
        ctx->pc = 0x17C990u;
        goto label_17c990;
    }
    ctx->pc = 0x17C988u;
    {
        const bool branch_taken_0x17c988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c988) {
            ctx->pc = 0x17C99Cu;
            goto label_17c99c;
        }
    }
    ctx->pc = 0x17C990u;
label_17c990:
    // 0x17c990: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17c990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c994:
    // 0x17c994: 0x10000097  b           . + 4 + (0x97 << 2)
label_17c998:
    if (ctx->pc == 0x17C998u) {
        ctx->pc = 0x17C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C994u;
        // 0x17c998: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C99Cu;
        goto label_17c99c;
    }
    ctx->pc = 0x17C994u;
    {
        const bool branch_taken_0x17c994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C994u;
        // 0x17c998: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c994) {
            ctx->pc = 0x17CBF4u;
            { ctx->pc = 0x17cbf4; return; }
        }
    }
    ctx->pc = 0x17C99Cu;
label_17c99c:
    // 0x17c99c: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x17c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
label_17c9a0:
    // 0x17c9a0: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x17c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
label_17c9a4:
    // 0x17c9a4: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x17c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_17c9a8:
    // 0x17c9a8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x17c9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_17c9ac:
    // 0x17c9ac: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x17c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_17c9b0:
    // 0x17c9b0: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x17c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c9b4:
    // 0x17c9b4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17c9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17c9b8:
    // 0x17c9b8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17c9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c9bc:
    // 0x17c9bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c9bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17c9c0:
    // 0x17c9c0: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x17c9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_17c9c4:
    // 0x17c9c4: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x17c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_17c9c8:
    // 0x17c9c8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x17c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_17c9cc:
    // 0x17c9cc: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x17c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_17c9d0:
    // 0x17c9d0: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x17c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c9d4:
    // 0x17c9d4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x17c9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c9d8:
    // 0x17c9d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c9d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17c9dc:
    // 0x17c9dc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x17c9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_17c9e0:
    // 0x17c9e0: 0xc066d98  jal         func_19B660
label_17c9e4:
    if (ctx->pc == 0x17C9E4u) {
        ctx->pc = 0x17C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9E0u;
        // 0x17c9e4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C9E8u;
        goto label_17c9e8;
    }
    ctx->pc = 0x17C9E0u;
    SET_GPR_U32(ctx, 31, 0x17C9E8u);
    ctx->pc = 0x17C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9E0u;
    // 0x17c9e4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x17C9E8u;
label_17c9e8:
    // 0x17c9e8: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x17c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
label_17c9ec:
    // 0x17c9ec: 0xc066daa  jal         func_19B6A8
label_17c9f0:
    if (ctx->pc == 0x17C9F0u) {
        ctx->pc = 0x17C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9ECu;
        // 0x17c9f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C9F4u;
        goto label_17c9f4;
    }
    ctx->pc = 0x17C9ECu;
    SET_GPR_U32(ctx, 31, 0x17C9F4u);
    ctx->pc = 0x17C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9ECu;
    // 0x17c9f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x17C9F4u;
label_17c9f4:
    // 0x17c9f4: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x17c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_17c9f8:
    // 0x17c9f8: 0xc066da0  jal         func_19B680
label_17c9fc:
    if (ctx->pc == 0x17C9FCu) {
        ctx->pc = 0x17C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9F8u;
        // 0x17c9fc: 0x26a50080  addiu       $a1, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CA00u;
        { ctx->pc = 0x17ca00; return; }
    }
    ctx->pc = 0x17C9F8u;
    SET_GPR_U32(ctx, 31, 0x17CA00u);
    ctx->pc = 0x17C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9F8u;
    // 0x17c9fc: 0x26a50080  addiu       $a1, $s5, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x17CA00u;
    ctx->pc = 0x17ca00u;
    return;
}
