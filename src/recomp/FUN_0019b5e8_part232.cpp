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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part232(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20c298u: goto label_20c298;
        case 0x20c29cu: goto label_20c29c;
        case 0x20c2a0u: goto label_20c2a0;
        case 0x20c2a4u: goto label_20c2a4;
        case 0x20c2a8u: goto label_20c2a8;
        case 0x20c2acu: goto label_20c2ac;
        case 0x20c2b0u: goto label_20c2b0;
        case 0x20c2b4u: goto label_20c2b4;
        case 0x20c2b8u: goto label_20c2b8;
        case 0x20c2bcu: goto label_20c2bc;
        case 0x20c2c0u: goto label_20c2c0;
        case 0x20c2c4u: goto label_20c2c4;
        case 0x20c2c8u: goto label_20c2c8;
        case 0x20c2ccu: goto label_20c2cc;
        case 0x20c2d0u: goto label_20c2d0;
        case 0x20c2d4u: goto label_20c2d4;
        case 0x20c2d8u: goto label_20c2d8;
        case 0x20c2dcu: goto label_20c2dc;
        case 0x20c2e0u: goto label_20c2e0;
        case 0x20c2e4u: goto label_20c2e4;
        case 0x20c2e8u: goto label_20c2e8;
        case 0x20c2ecu: goto label_20c2ec;
        case 0x20c2f0u: goto label_20c2f0;
        case 0x20c2f4u: goto label_20c2f4;
        case 0x20c2f8u: goto label_20c2f8;
        case 0x20c2fcu: goto label_20c2fc;
        case 0x20c300u: goto label_20c300;
        case 0x20c304u: goto label_20c304;
        case 0x20c308u: goto label_20c308;
        case 0x20c30cu: goto label_20c30c;
        case 0x20c310u: goto label_20c310;
        case 0x20c314u: goto label_20c314;
        case 0x20c318u: goto label_20c318;
        case 0x20c31cu: goto label_20c31c;
        case 0x20c320u: goto label_20c320;
        case 0x20c324u: goto label_20c324;
        case 0x20c328u: goto label_20c328;
        case 0x20c32cu: goto label_20c32c;
        case 0x20c330u: goto label_20c330;
        case 0x20c334u: goto label_20c334;
        case 0x20c338u: goto label_20c338;
        case 0x20c33cu: goto label_20c33c;
        case 0x20c340u: goto label_20c340;
        case 0x20c344u: goto label_20c344;
        case 0x20c348u: goto label_20c348;
        case 0x20c34cu: goto label_20c34c;
        case 0x20c350u: goto label_20c350;
        case 0x20c354u: goto label_20c354;
        case 0x20c358u: goto label_20c358;
        case 0x20c35cu: goto label_20c35c;
        case 0x20c360u: goto label_20c360;
        case 0x20c364u: goto label_20c364;
        case 0x20c368u: goto label_20c368;
        case 0x20c36cu: goto label_20c36c;
        case 0x20c370u: goto label_20c370;
        case 0x20c374u: goto label_20c374;
        case 0x20c378u: goto label_20c378;
        case 0x20c37cu: goto label_20c37c;
        case 0x20c380u: goto label_20c380;
        case 0x20c384u: goto label_20c384;
        case 0x20c388u: goto label_20c388;
        case 0x20c38cu: goto label_20c38c;
        case 0x20c390u: goto label_20c390;
        case 0x20c394u: goto label_20c394;
        case 0x20c398u: goto label_20c398;
        case 0x20c39cu: goto label_20c39c;
        case 0x20c3a0u: goto label_20c3a0;
        case 0x20c3a4u: goto label_20c3a4;
        case 0x20c3a8u: goto label_20c3a8;
        case 0x20c3acu: goto label_20c3ac;
        case 0x20c3b0u: goto label_20c3b0;
        case 0x20c3b4u: goto label_20c3b4;
        case 0x20c3b8u: goto label_20c3b8;
        case 0x20c3bcu: goto label_20c3bc;
        case 0x20c3c0u: goto label_20c3c0;
        case 0x20c3c4u: goto label_20c3c4;
        case 0x20c3c8u: goto label_20c3c8;
        case 0x20c3ccu: goto label_20c3cc;
        case 0x20c3d0u: goto label_20c3d0;
        case 0x20c3d4u: goto label_20c3d4;
        case 0x20c3d8u: goto label_20c3d8;
        case 0x20c3dcu: goto label_20c3dc;
        case 0x20c3e0u: goto label_20c3e0;
        case 0x20c3e4u: goto label_20c3e4;
        case 0x20c3e8u: goto label_20c3e8;
        case 0x20c3ecu: goto label_20c3ec;
        case 0x20c3f0u: goto label_20c3f0;
        case 0x20c3f4u: goto label_20c3f4;
        case 0x20c3f8u: goto label_20c3f8;
        case 0x20c3fcu: goto label_20c3fc;
        case 0x20c400u: goto label_20c400;
        case 0x20c404u: goto label_20c404;
        case 0x20c408u: goto label_20c408;
        case 0x20c40cu: goto label_20c40c;
        case 0x20c410u: goto label_20c410;
        case 0x20c414u: goto label_20c414;
        case 0x20c418u: goto label_20c418;
        case 0x20c41cu: goto label_20c41c;
        case 0x20c420u: goto label_20c420;
        case 0x20c424u: goto label_20c424;
        case 0x20c428u: goto label_20c428;
        case 0x20c42cu: goto label_20c42c;
        case 0x20c430u: goto label_20c430;
        case 0x20c434u: goto label_20c434;
        case 0x20c438u: goto label_20c438;
        case 0x20c43cu: goto label_20c43c;
        case 0x20c440u: goto label_20c440;
        case 0x20c444u: goto label_20c444;
        case 0x20c448u: goto label_20c448;
        case 0x20c44cu: goto label_20c44c;
        case 0x20c450u: goto label_20c450;
        case 0x20c454u: goto label_20c454;
        case 0x20c458u: goto label_20c458;
        case 0x20c45cu: goto label_20c45c;
        case 0x20c460u: goto label_20c460;
        case 0x20c464u: goto label_20c464;
        case 0x20c468u: goto label_20c468;
        case 0x20c46cu: goto label_20c46c;
        case 0x20c470u: goto label_20c470;
        case 0x20c474u: goto label_20c474;
        case 0x20c478u: goto label_20c478;
        case 0x20c47cu: goto label_20c47c;
        case 0x20c480u: goto label_20c480;
        case 0x20c484u: goto label_20c484;
        case 0x20c488u: goto label_20c488;
        case 0x20c48cu: goto label_20c48c;
        case 0x20c490u: goto label_20c490;
        case 0x20c494u: goto label_20c494;
        case 0x20c498u: goto label_20c498;
        case 0x20c49cu: goto label_20c49c;
        case 0x20c4a0u: goto label_20c4a0;
        case 0x20c4a4u: goto label_20c4a4;
        case 0x20c4a8u: goto label_20c4a8;
        case 0x20c4acu: goto label_20c4ac;
        case 0x20c4b0u: goto label_20c4b0;
        case 0x20c4b4u: goto label_20c4b4;
        case 0x20c4b8u: goto label_20c4b8;
        case 0x20c4bcu: goto label_20c4bc;
        case 0x20c4c0u: goto label_20c4c0;
        case 0x20c4c4u: goto label_20c4c4;
        case 0x20c4c8u: goto label_20c4c8;
        case 0x20c4ccu: goto label_20c4cc;
        case 0x20c4d0u: goto label_20c4d0;
        case 0x20c4d4u: goto label_20c4d4;
        case 0x20c4d8u: goto label_20c4d8;
        case 0x20c4dcu: goto label_20c4dc;
        case 0x20c4e0u: goto label_20c4e0;
        case 0x20c4e4u: goto label_20c4e4;
        case 0x20c4e8u: goto label_20c4e8;
        case 0x20c4ecu: goto label_20c4ec;
        case 0x20c4f0u: goto label_20c4f0;
        case 0x20c4f4u: goto label_20c4f4;
        case 0x20c4f8u: goto label_20c4f8;
        case 0x20c4fcu: goto label_20c4fc;
        case 0x20c500u: goto label_20c500;
        case 0x20c504u: goto label_20c504;
        case 0x20c508u: goto label_20c508;
        case 0x20c50cu: goto label_20c50c;
        case 0x20c510u: goto label_20c510;
        case 0x20c514u: goto label_20c514;
        case 0x20c518u: goto label_20c518;
        case 0x20c51cu: goto label_20c51c;
        case 0x20c520u: goto label_20c520;
        case 0x20c524u: goto label_20c524;
        case 0x20c528u: goto label_20c528;
        case 0x20c52cu: goto label_20c52c;
        case 0x20c530u: goto label_20c530;
        case 0x20c534u: goto label_20c534;
        case 0x20c538u: goto label_20c538;
        case 0x20c53cu: goto label_20c53c;
        case 0x20c540u: goto label_20c540;
        case 0x20c544u: goto label_20c544;
        case 0x20c548u: goto label_20c548;
        case 0x20c54cu: goto label_20c54c;
        case 0x20c550u: goto label_20c550;
        case 0x20c554u: goto label_20c554;
        case 0x20c558u: goto label_20c558;
        case 0x20c55cu: goto label_20c55c;
        case 0x20c560u: goto label_20c560;
        case 0x20c564u: goto label_20c564;
        case 0x20c568u: goto label_20c568;
        case 0x20c56cu: goto label_20c56c;
        case 0x20c570u: goto label_20c570;
        case 0x20c574u: goto label_20c574;
        case 0x20c578u: goto label_20c578;
        case 0x20c57cu: goto label_20c57c;
        case 0x20c580u: goto label_20c580;
        case 0x20c584u: goto label_20c584;
        case 0x20c588u: goto label_20c588;
        case 0x20c58cu: goto label_20c58c;
        case 0x20c590u: goto label_20c590;
        case 0x20c594u: goto label_20c594;
        case 0x20c598u: goto label_20c598;
        case 0x20c59cu: goto label_20c59c;
        case 0x20c5a0u: goto label_20c5a0;
        case 0x20c5a4u: goto label_20c5a4;
        case 0x20c5a8u: goto label_20c5a8;
        case 0x20c5acu: goto label_20c5ac;
        case 0x20c5b0u: goto label_20c5b0;
        case 0x20c5b4u: goto label_20c5b4;
        case 0x20c5b8u: goto label_20c5b8;
        case 0x20c5bcu: goto label_20c5bc;
        case 0x20c5c0u: goto label_20c5c0;
        case 0x20c5c4u: goto label_20c5c4;
        case 0x20c5c8u: goto label_20c5c8;
        case 0x20c5ccu: goto label_20c5cc;
        case 0x20c5d0u: goto label_20c5d0;
        case 0x20c5d4u: goto label_20c5d4;
        case 0x20c5d8u: goto label_20c5d8;
        case 0x20c5dcu: goto label_20c5dc;
        case 0x20c5e0u: goto label_20c5e0;
        case 0x20c5e4u: goto label_20c5e4;
        case 0x20c5e8u: goto label_20c5e8;
        case 0x20c5ecu: goto label_20c5ec;
        case 0x20c5f0u: goto label_20c5f0;
        case 0x20c5f4u: goto label_20c5f4;
        case 0x20c5f8u: goto label_20c5f8;
        case 0x20c5fcu: goto label_20c5fc;
        case 0x20c600u: goto label_20c600;
        case 0x20c604u: goto label_20c604;
        case 0x20c608u: goto label_20c608;
        case 0x20c60cu: goto label_20c60c;
        case 0x20c610u: goto label_20c610;
        case 0x20c614u: goto label_20c614;
        case 0x20c618u: goto label_20c618;
        case 0x20c61cu: goto label_20c61c;
        case 0x20c620u: goto label_20c620;
        case 0x20c624u: goto label_20c624;
        case 0x20c628u: goto label_20c628;
        case 0x20c62cu: goto label_20c62c;
        case 0x20c630u: goto label_20c630;
        case 0x20c634u: goto label_20c634;
        case 0x20c638u: goto label_20c638;
        case 0x20c63cu: goto label_20c63c;
        case 0x20c640u: goto label_20c640;
        case 0x20c644u: goto label_20c644;
        case 0x20c648u: goto label_20c648;
        case 0x20c64cu: goto label_20c64c;
        case 0x20c650u: goto label_20c650;
        case 0x20c654u: goto label_20c654;
        case 0x20c658u: goto label_20c658;
        case 0x20c65cu: goto label_20c65c;
        case 0x20c660u: goto label_20c660;
        case 0x20c664u: goto label_20c664;
        case 0x20c668u: goto label_20c668;
        case 0x20c66cu: goto label_20c66c;
        case 0x20c670u: goto label_20c670;
        case 0x20c674u: goto label_20c674;
        case 0x20c678u: goto label_20c678;
        case 0x20c67cu: goto label_20c67c;
        case 0x20c680u: goto label_20c680;
        case 0x20c684u: goto label_20c684;
        case 0x20c688u: goto label_20c688;
        case 0x20c68cu: goto label_20c68c;
        case 0x20c690u: goto label_20c690;
        case 0x20c694u: goto label_20c694;
        case 0x20c698u: goto label_20c698;
        case 0x20c69cu: goto label_20c69c;
        case 0x20c6a0u: goto label_20c6a0;
        case 0x20c6a4u: goto label_20c6a4;
        case 0x20c6a8u: goto label_20c6a8;
        case 0x20c6acu: goto label_20c6ac;
        case 0x20c6b0u: goto label_20c6b0;
        case 0x20c6b4u: goto label_20c6b4;
        case 0x20c6b8u: goto label_20c6b8;
        case 0x20c6bcu: goto label_20c6bc;
        case 0x20c6c0u: goto label_20c6c0;
        case 0x20c6c4u: goto label_20c6c4;
        case 0x20c6c8u: goto label_20c6c8;
        case 0x20c6ccu: goto label_20c6cc;
        case 0x20c6d0u: goto label_20c6d0;
        case 0x20c6d4u: goto label_20c6d4;
        case 0x20c6d8u: goto label_20c6d8;
        case 0x20c6dcu: goto label_20c6dc;
        case 0x20c6e0u: goto label_20c6e0;
        case 0x20c6e4u: goto label_20c6e4;
        case 0x20c6e8u: goto label_20c6e8;
        case 0x20c6ecu: goto label_20c6ec;
        case 0x20c6f0u: goto label_20c6f0;
        case 0x20c6f4u: goto label_20c6f4;
        case 0x20c6f8u: goto label_20c6f8;
        case 0x20c6fcu: goto label_20c6fc;
        case 0x20c700u: goto label_20c700;
        case 0x20c704u: goto label_20c704;
        case 0x20c708u: goto label_20c708;
        case 0x20c70cu: goto label_20c70c;
        case 0x20c710u: goto label_20c710;
        case 0x20c714u: goto label_20c714;
        case 0x20c718u: goto label_20c718;
        case 0x20c71cu: goto label_20c71c;
        case 0x20c720u: goto label_20c720;
        case 0x20c724u: goto label_20c724;
        case 0x20c728u: goto label_20c728;
        case 0x20c72cu: goto label_20c72c;
        case 0x20c730u: goto label_20c730;
        case 0x20c734u: goto label_20c734;
        case 0x20c738u: goto label_20c738;
        case 0x20c73cu: goto label_20c73c;
        case 0x20c740u: goto label_20c740;
        case 0x20c744u: goto label_20c744;
        case 0x20c748u: goto label_20c748;
        case 0x20c74cu: goto label_20c74c;
        case 0x20c750u: goto label_20c750;
        case 0x20c754u: goto label_20c754;
        case 0x20c758u: goto label_20c758;
        case 0x20c75cu: goto label_20c75c;
        case 0x20c760u: goto label_20c760;
        case 0x20c764u: goto label_20c764;
        case 0x20c768u: goto label_20c768;
        case 0x20c76cu: goto label_20c76c;
        case 0x20c770u: goto label_20c770;
        case 0x20c774u: goto label_20c774;
        case 0x20c778u: goto label_20c778;
        case 0x20c77cu: goto label_20c77c;
        case 0x20c780u: goto label_20c780;
        case 0x20c784u: goto label_20c784;
        case 0x20c788u: goto label_20c788;
        case 0x20c78cu: goto label_20c78c;
        case 0x20c790u: goto label_20c790;
        case 0x20c794u: goto label_20c794;
        case 0x20c798u: goto label_20c798;
        case 0x20c79cu: goto label_20c79c;
        case 0x20c7a0u: goto label_20c7a0;
        case 0x20c7a4u: goto label_20c7a4;
        case 0x20c7a8u: goto label_20c7a8;
        case 0x20c7acu: goto label_20c7ac;
        case 0x20c7b0u: goto label_20c7b0;
        case 0x20c7b4u: goto label_20c7b4;
        case 0x20c7b8u: goto label_20c7b8;
        case 0x20c7bcu: goto label_20c7bc;
        case 0x20c7c0u: goto label_20c7c0;
        case 0x20c7c4u: goto label_20c7c4;
        case 0x20c7c8u: goto label_20c7c8;
        case 0x20c7ccu: goto label_20c7cc;
        case 0x20c7d0u: goto label_20c7d0;
        case 0x20c7d4u: goto label_20c7d4;
        case 0x20c7d8u: goto label_20c7d8;
        case 0x20c7dcu: goto label_20c7dc;
        case 0x20c7e0u: goto label_20c7e0;
        case 0x20c7e4u: goto label_20c7e4;
        case 0x20c7e8u: goto label_20c7e8;
        case 0x20c7ecu: goto label_20c7ec;
        case 0x20c7f0u: goto label_20c7f0;
        case 0x20c7f4u: goto label_20c7f4;
        case 0x20c7f8u: goto label_20c7f8;
        case 0x20c7fcu: goto label_20c7fc;
        case 0x20c800u: goto label_20c800;
        case 0x20c804u: goto label_20c804;
        case 0x20c808u: goto label_20c808;
        case 0x20c80cu: goto label_20c80c;
        case 0x20c810u: goto label_20c810;
        case 0x20c814u: goto label_20c814;
        case 0x20c818u: goto label_20c818;
        case 0x20c81cu: goto label_20c81c;
        case 0x20c820u: goto label_20c820;
        case 0x20c824u: goto label_20c824;
        case 0x20c828u: goto label_20c828;
        case 0x20c82cu: goto label_20c82c;
        case 0x20c830u: goto label_20c830;
        case 0x20c834u: goto label_20c834;
        case 0x20c838u: goto label_20c838;
        case 0x20c83cu: goto label_20c83c;
        case 0x20c840u: goto label_20c840;
        case 0x20c844u: goto label_20c844;
        case 0x20c848u: goto label_20c848;
        case 0x20c84cu: goto label_20c84c;
        case 0x20c850u: goto label_20c850;
        case 0x20c854u: goto label_20c854;
        case 0x20c858u: goto label_20c858;
        case 0x20c85cu: goto label_20c85c;
        case 0x20c860u: goto label_20c860;
        case 0x20c864u: goto label_20c864;
        case 0x20c868u: goto label_20c868;
        case 0x20c86cu: goto label_20c86c;
        case 0x20c870u: goto label_20c870;
        case 0x20c874u: goto label_20c874;
        case 0x20c878u: goto label_20c878;
        case 0x20c87cu: goto label_20c87c;
        case 0x20c880u: goto label_20c880;
        case 0x20c884u: goto label_20c884;
        case 0x20c888u: goto label_20c888;
        case 0x20c88cu: goto label_20c88c;
        case 0x20c890u: goto label_20c890;
        case 0x20c894u: goto label_20c894;
        case 0x20c898u: goto label_20c898;
        case 0x20c89cu: goto label_20c89c;
        case 0x20c8a0u: goto label_20c8a0;
        case 0x20c8a4u: goto label_20c8a4;
        case 0x20c8a8u: goto label_20c8a8;
        case 0x20c8acu: goto label_20c8ac;
        case 0x20c8b0u: goto label_20c8b0;
        case 0x20c8b4u: goto label_20c8b4;
        case 0x20c8b8u: goto label_20c8b8;
        case 0x20c8bcu: goto label_20c8bc;
        case 0x20c8c0u: goto label_20c8c0;
        case 0x20c8c4u: goto label_20c8c4;
        case 0x20c8c8u: goto label_20c8c8;
        case 0x20c8ccu: goto label_20c8cc;
        case 0x20c8d0u: goto label_20c8d0;
        case 0x20c8d4u: goto label_20c8d4;
        case 0x20c8d8u: goto label_20c8d8;
        case 0x20c8dcu: goto label_20c8dc;
        case 0x20c8e0u: goto label_20c8e0;
        case 0x20c8e4u: goto label_20c8e4;
        case 0x20c8e8u: goto label_20c8e8;
        case 0x20c8ecu: goto label_20c8ec;
        case 0x20c8f0u: goto label_20c8f0;
        case 0x20c8f4u: goto label_20c8f4;
        case 0x20c8f8u: goto label_20c8f8;
        case 0x20c8fcu: goto label_20c8fc;
        case 0x20c900u: goto label_20c900;
        case 0x20c904u: goto label_20c904;
        case 0x20c908u: goto label_20c908;
        case 0x20c90cu: goto label_20c90c;
        case 0x20c910u: goto label_20c910;
        case 0x20c914u: goto label_20c914;
        case 0x20c918u: goto label_20c918;
        case 0x20c91cu: goto label_20c91c;
        case 0x20c920u: goto label_20c920;
        case 0x20c924u: goto label_20c924;
        case 0x20c928u: goto label_20c928;
        case 0x20c92cu: goto label_20c92c;
        case 0x20c930u: goto label_20c930;
        case 0x20c934u: goto label_20c934;
        case 0x20c938u: goto label_20c938;
        case 0x20c93cu: goto label_20c93c;
        case 0x20c940u: goto label_20c940;
        case 0x20c944u: goto label_20c944;
        case 0x20c948u: goto label_20c948;
        case 0x20c94cu: goto label_20c94c;
        case 0x20c950u: goto label_20c950;
        case 0x20c954u: goto label_20c954;
        case 0x20c958u: goto label_20c958;
        case 0x20c95cu: goto label_20c95c;
        case 0x20c960u: goto label_20c960;
        case 0x20c964u: goto label_20c964;
        case 0x20c968u: goto label_20c968;
        case 0x20c96cu: goto label_20c96c;
        case 0x20c970u: goto label_20c970;
        case 0x20c974u: goto label_20c974;
        case 0x20c978u: goto label_20c978;
        case 0x20c97cu: goto label_20c97c;
        case 0x20c980u: goto label_20c980;
        case 0x20c984u: goto label_20c984;
        case 0x20c988u: goto label_20c988;
        case 0x20c98cu: goto label_20c98c;
        case 0x20c990u: goto label_20c990;
        case 0x20c994u: goto label_20c994;
        case 0x20c998u: goto label_20c998;
        case 0x20c99cu: goto label_20c99c;
        case 0x20c9a0u: goto label_20c9a0;
        case 0x20c9a4u: goto label_20c9a4;
        case 0x20c9a8u: goto label_20c9a8;
        case 0x20c9acu: goto label_20c9ac;
        case 0x20c9b0u: goto label_20c9b0;
        case 0x20c9b4u: goto label_20c9b4;
        case 0x20c9b8u: goto label_20c9b8;
        case 0x20c9bcu: goto label_20c9bc;
        case 0x20c9c0u: goto label_20c9c0;
        case 0x20c9c4u: goto label_20c9c4;
        case 0x20c9c8u: goto label_20c9c8;
        case 0x20c9ccu: goto label_20c9cc;
        case 0x20c9d0u: goto label_20c9d0;
        case 0x20c9d4u: goto label_20c9d4;
        case 0x20c9d8u: goto label_20c9d8;
        case 0x20c9dcu: goto label_20c9dc;
        case 0x20c9e0u: goto label_20c9e0;
        case 0x20c9e4u: goto label_20c9e4;
        case 0x20c9e8u: goto label_20c9e8;
        case 0x20c9ecu: goto label_20c9ec;
        case 0x20c9f0u: goto label_20c9f0;
        case 0x20c9f4u: goto label_20c9f4;
        case 0x20c9f8u: goto label_20c9f8;
        case 0x20c9fcu: goto label_20c9fc;
        case 0x20ca00u: goto label_20ca00;
        case 0x20ca04u: goto label_20ca04;
        case 0x20ca08u: goto label_20ca08;
        case 0x20ca0cu: goto label_20ca0c;
        case 0x20ca10u: goto label_20ca10;
        case 0x20ca14u: goto label_20ca14;
        case 0x20ca18u: goto label_20ca18;
        case 0x20ca1cu: goto label_20ca1c;
        case 0x20ca20u: goto label_20ca20;
        case 0x20ca24u: goto label_20ca24;
        case 0x20ca28u: goto label_20ca28;
        case 0x20ca2cu: goto label_20ca2c;
        case 0x20ca30u: goto label_20ca30;
        case 0x20ca34u: goto label_20ca34;
        case 0x20ca38u: goto label_20ca38;
        case 0x20ca3cu: goto label_20ca3c;
        case 0x20ca40u: goto label_20ca40;
        case 0x20ca44u: goto label_20ca44;
        case 0x20ca48u: goto label_20ca48;
        case 0x20ca4cu: goto label_20ca4c;
        case 0x20ca50u: goto label_20ca50;
        case 0x20ca54u: goto label_20ca54;
        case 0x20ca58u: goto label_20ca58;
        case 0x20ca5cu: goto label_20ca5c;
        case 0x20ca60u: goto label_20ca60;
        case 0x20ca64u: goto label_20ca64;
        default: return;
    }

label_20c298:
    if (ctx->pc == 0x20C298u) {
        ctx->pc = 0x20C29Cu;
        goto label_20c29c;
    }
    ctx->pc = 0x20C294u;
    {
        const bool branch_taken_0x20c294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c294) {
            ctx->pc = 0x20C2A4u;
            goto label_20c2a4;
        }
    }
    ctx->pc = 0x20C29Cu;
label_20c29c:
    // 0x20c29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2a0:
    // 0x20c2a0: 0xaf829168  sw          $v0, -0x6E98($gp)
    ctx->pc = 0x20c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
label_20c2a4:
    // 0x20c2a4: 0x0  nop
    ctx->pc = 0x20c2a4u;
    // NOP
label_20c2a8:
    // 0x20c2a8: 0x1220ff64  beqz        $s1, . + 4 + (-0x9C << 2)
label_20c2ac:
    if (ctx->pc == 0x20C2ACu) {
        ctx->pc = 0x20C2B0u;
        goto label_20c2b0;
    }
    ctx->pc = 0x20C2A8u;
    {
        const bool branch_taken_0x20c2a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2a8) {
            ctx->pc = 0x20C03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20c03c; return; }
        }
    }
    ctx->pc = 0x20C2B0u;
label_20c2b0:
    // 0x20c2b0: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
label_20c2b4:
    // 0x20c2b4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_20c2b8:
    if (ctx->pc == 0x20C2B8u) {
        ctx->pc = 0x20C2BCu;
        goto label_20c2bc;
    }
    ctx->pc = 0x20C2B4u;
    {
        const bool branch_taken_0x20c2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2b4) {
            ctx->pc = 0x20C30Cu;
            goto label_20c30c;
        }
    }
    ctx->pc = 0x20C2BCu;
label_20c2bc:
    // 0x20c2bc: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
label_20c2c0:
    // 0x20c2c0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c2c4:
    // 0x20c2c4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_20c2c8:
    if (ctx->pc == 0x20C2C8u) {
        ctx->pc = 0x20C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2C4u;
        // 0x20c2c8: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C2CCu;
        goto label_20c2cc;
    }
    ctx->pc = 0x20C2C4u;
    {
        const bool branch_taken_0x20c2c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2C4u;
        // 0x20c2c8: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2c4) {
            ctx->pc = 0x20C2D8u;
            goto label_20c2d8;
        }
    }
    ctx->pc = 0x20C2CCu;
label_20c2cc:
    // 0x20c2cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20c2d0:
    if (ctx->pc == 0x20C2D0u) {
        ctx->pc = 0x20C2D4u;
        goto label_20c2d4;
    }
    ctx->pc = 0x20C2CCu;
    {
        const bool branch_taken_0x20c2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2cc) {
            ctx->pc = 0x20C2D8u;
            goto label_20c2d8;
        }
    }
    ctx->pc = 0x20C2D4u;
label_20c2d4:
    // 0x20c2d4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_20c2d8:
    // 0x20c2d8: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
label_20c2dc:
    // 0x20c2dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2e0:
    // 0x20c2e0: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_20c2e4:
    if (ctx->pc == 0x20C2E4u) {
        ctx->pc = 0x20C2E8u;
        goto label_20c2e8;
    }
    ctx->pc = 0x20C2E0u;
    {
        const bool branch_taken_0x20c2e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c2e0) {
            ctx->pc = 0x20C30Cu;
            goto label_20c30c;
        }
    }
    ctx->pc = 0x20C2E8u;
label_20c2e8:
    // 0x20c2e8: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20c2ec:
    // 0x20c2ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c2f0:
    // 0x20c2f0: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
label_20c2f4:
    // 0x20c2f4: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20c2f8:
    // 0x20c2f8: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20c2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
label_20c2fc:
    // 0x20c2fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20c300:
    if (ctx->pc == 0x20C300u) {
        ctx->pc = 0x20C304u;
        goto label_20c304;
    }
    ctx->pc = 0x20C2FCu;
    {
        const bool branch_taken_0x20c2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c2fc) {
            ctx->pc = 0x20C30Cu;
            goto label_20c30c;
        }
    }
    ctx->pc = 0x20C304u;
label_20c304:
    // 0x20c304: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c308:
    // 0x20c308: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20c308u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
label_20c30c:
    // 0x20c30c: 0x0  nop
    ctx->pc = 0x20c30cu;
    // NOP
label_20c310:
    // 0x20c310: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20c314:
    // 0x20c314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c318:
    // 0x20c318: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_20c31c:
    if (ctx->pc == 0x20C31Cu) {
        ctx->pc = 0x20C320u;
        goto label_20c320;
    }
    ctx->pc = 0x20C318u;
    {
        const bool branch_taken_0x20c318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c318) {
            ctx->pc = 0x20C358u;
            goto label_20c358;
        }
    }
    ctx->pc = 0x20C320u;
label_20c320:
    // 0x20c320: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20c320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20c324:
    // 0x20c324: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20c328:
    // 0x20c328: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20c328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20c32c:
    // 0x20c32c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20c330:
    if (ctx->pc == 0x20C330u) {
        ctx->pc = 0x20C334u;
        goto label_20c334;
    }
    ctx->pc = 0x20C32Cu;
    {
        const bool branch_taken_0x20c32c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c32c) {
            ctx->pc = 0x20C33Cu;
            goto label_20c33c;
        }
    }
    ctx->pc = 0x20C334u;
label_20c334:
    // 0x20c334: 0x10000003  b           . + 4 + (0x3 << 2)
label_20c338:
    if (ctx->pc == 0x20C338u) {
        ctx->pc = 0x20C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C334u;
        // 0x20c338: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C33Cu;
        goto label_20c33c;
    }
    ctx->pc = 0x20C334u;
    {
        const bool branch_taken_0x20c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C334u;
        // 0x20c338: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c334) {
            ctx->pc = 0x20C344u;
            goto label_20c344;
        }
    }
    ctx->pc = 0x20C33Cu;
label_20c33c:
    // 0x20c33c: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_20c340:
    // 0x20c340: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20c340u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
label_20c344:
    // 0x20c344: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20c344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20c348:
    // 0x20c348: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20c34c:
    if (ctx->pc == 0x20C34Cu) {
        ctx->pc = 0x20C350u;
        goto label_20c350;
    }
    ctx->pc = 0x20C348u;
    {
        const bool branch_taken_0x20c348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c348) {
            ctx->pc = 0x20C358u;
            goto label_20c358;
        }
    }
    ctx->pc = 0x20C350u;
label_20c350:
    // 0x20c350: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c354:
    // 0x20c354: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20c354u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
label_20c358:
    // 0x20c358: 0xc078030  jal         func_1E00C0
label_20c35c:
    if (ctx->pc == 0x20C35Cu) {
        ctx->pc = 0x20C360u;
        goto label_20c360;
    }
    ctx->pc = 0x20C358u;
    SET_GPR_U32(ctx, 31, 0x20C360u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x20C360u;
label_20c360:
    // 0x20c360: 0xc07a9d8  jal         func_1EA760
label_20c364:
    if (ctx->pc == 0x20C364u) {
        ctx->pc = 0x20C368u;
        goto label_20c368;
    }
    ctx->pc = 0x20C360u;
    SET_GPR_U32(ctx, 31, 0x20C368u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x20C368u;
label_20c368:
    // 0x20c368: 0xc04e168  jal         func_1385A0
label_20c36c:
    if (ctx->pc == 0x20C36Cu) {
        ctx->pc = 0x20C370u;
        goto label_20c370;
    }
    ctx->pc = 0x20C368u;
    SET_GPR_U32(ctx, 31, 0x20C370u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20C368u, 0x20C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C370u;
label_20c370:
    // 0x20c370: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20c370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20c374:
    // 0x20c374: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20c374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20c378:
    // 0x20c378: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20c37c:
    // 0x20c37c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20c380:
    // 0x20c380: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20c384:
    // 0x20c384: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20c384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20c388:
    // 0x20c388: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c38c:
    // 0x20c38c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c38cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c390:
    // 0x20c390: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20c390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20c394:
    // 0x20c394: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20c394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20c398:
    // 0x20c398: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20c398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20c39c:
    // 0x20c39c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c3a0:
    // 0x20c3a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20c3a4:
    // 0x20c3a4: 0xc066c72  jal         func_19B1C8
label_20c3a8:
    if (ctx->pc == 0x20C3A8u) {
        ctx->pc = 0x20C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3A4u;
        // 0x20c3a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C3ACu;
        goto label_20c3ac;
    }
    ctx->pc = 0x20C3A4u;
    SET_GPR_U32(ctx, 31, 0x20C3ACu);
    ctx->pc = 0x20C3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3A4u;
    // 0x20c3a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20C3A4u, 0x20C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3ACu;
label_20c3ac:
    // 0x20c3ac: 0xc08372c  jal         func_20DCB0
label_20c3b0:
    if (ctx->pc == 0x20C3B0u) {
        ctx->pc = 0x20C3B4u;
        goto label_20c3b4;
    }
    ctx->pc = 0x20C3ACu;
    SET_GPR_U32(ctx, 31, 0x20C3B4u);
    ctx->pc = 0x20DCB0u;
    { ctx->pc = 0x20dcb0; return; }
    ctx->pc = 0x20C3B4u;
label_20c3b4:
    // 0x20c3b4: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20c3b8:
    // 0x20c3b8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_20c3bc:
    if (ctx->pc == 0x20C3BCu) {
        ctx->pc = 0x20C3C0u;
        goto label_20c3c0;
    }
    ctx->pc = 0x20C3B8u;
    {
        const bool branch_taken_0x20c3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c3b8) {
            ctx->pc = 0x20C484u;
            goto label_20c484;
        }
    }
    ctx->pc = 0x20C3C0u;
label_20c3c0:
    // 0x20c3c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20c3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20c3c4:
    // 0x20c3c4: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20c3c4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20c3c8:
    // 0x20c3c8: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20c3c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20c3cc:
    // 0x20c3cc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_20c3d0:
    // 0x20c3d0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20c3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20c3d4:
    // 0x20c3d4: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20c3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20c3d8:
    // 0x20c3d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20c3dc:
    // 0x20c3dc: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20c3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_20c3e0:
    // 0x20c3e0: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20c3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_20c3e4:
    // 0x20c3e4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20c3e8:
    // 0x20c3e8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20c3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20c3ec:
    // 0x20c3ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c3f0:
    // 0x20c3f0: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20c3f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
label_20c3f4:
    // 0x20c3f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c3f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c3f8:
    // 0x20c3f8: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20c3f8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_20c3fc:
    // 0x20c3fc: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20c3fcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20c400:
    // 0x20c400: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20c400u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_20c404:
    // 0x20c404: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20c404u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20c408:
    // 0x20c408: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20c408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_20c40c:
    // 0x20c40c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20c40cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c410:
    // 0x20c410: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20c410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c414:
    // 0x20c414: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20c414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_20c418:
    // 0x20c418: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20c418u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
label_20c41c:
    // 0x20c41c: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20c41cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20c420:
    // 0x20c420: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20c420u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20c424:
    // 0x20c424: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20c424u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20c428:
    // 0x20c428: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20c428u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
label_20c42c:
    // 0x20c42c: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20c42cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
label_20c430:
    // 0x20c430: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20c430u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
label_20c434:
    // 0x20c434: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20c434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_20c438:
    // 0x20c438: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20c438u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_20c43c:
    // 0x20c43c: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20c43cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20c440:
    // 0x20c440: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20c440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_20c444:
    // 0x20c444: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20c444u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20c448:
    // 0x20c448: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20c448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
label_20c44c:
    // 0x20c44c: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20c44cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
label_20c450:
    // 0x20c450: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20c450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20c454:
    // 0x20c454: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20c454u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
label_20c458:
    // 0x20c458: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20c458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20c45c:
    // 0x20c45c: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20c45cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
label_20c460:
    // 0x20c460: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20c460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
label_20c464:
    // 0x20c464: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20c464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20c468:
    // 0x20c468: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20c468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
label_20c46c:
    // 0x20c46c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20c470:
    // 0x20c470: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20c470u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20c474:
    // 0x20c474: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20c474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_20c478:
    // 0x20c478: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20c478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20c47c:
    // 0x20c47c: 0xc066c72  jal         func_19B1C8
label_20c480:
    if (ctx->pc == 0x20C480u) {
        ctx->pc = 0x20C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C47Cu;
        // 0x20c480: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C484u;
        goto label_20c484;
    }
    ctx->pc = 0x20C47Cu;
    SET_GPR_U32(ctx, 31, 0x20C484u);
    ctx->pc = 0x20C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C47Cu;
    // 0x20c480: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20C47Cu, 0x20C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C484u;
label_20c484:
    // 0x20c484: 0x0  nop
    ctx->pc = 0x20c484u;
    // NOP
label_20c488:
    // 0x20c488: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20c488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20c48c:
    // 0x20c48c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20c490:
    // 0x20c490: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20c490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20c494:
    // 0x20c494: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20c494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20c498:
    // 0x20c498: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20c49c:
    // 0x20c49c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20c49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20c4a0:
    // 0x20c4a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c4a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c4a4:
    // 0x20c4a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c4a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c4a8:
    // 0x20c4a8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20c4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20c4ac:
    // 0x20c4ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20c4b0:
    // 0x20c4b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20c4b4:
    // 0x20c4b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c4b8:
    // 0x20c4b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20c4bc:
    // 0x20c4bc: 0xc066c72  jal         func_19B1C8
label_20c4c0:
    if (ctx->pc == 0x20C4C0u) {
        ctx->pc = 0x20C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4BCu;
        // 0x20c4c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C4C4u;
        goto label_20c4c4;
    }
    ctx->pc = 0x20C4BCu;
    SET_GPR_U32(ctx, 31, 0x20C4C4u);
    ctx->pc = 0x20C4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4BCu;
    // 0x20c4c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20C4BCu, 0x20C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4C4u;
label_20c4c4:
    // 0x20c4c4: 0xc077fc4  jal         func_1DFF10
label_20c4c8:
    if (ctx->pc == 0x20C4C8u) {
        ctx->pc = 0x20C4CCu;
        goto label_20c4cc;
    }
    ctx->pc = 0x20C4C4u;
    SET_GPR_U32(ctx, 31, 0x20C4CCu);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x20C4CCu;
label_20c4cc:
    // 0x20c4cc: 0xc07a86c  jal         func_1EA1B0
label_20c4d0:
    if (ctx->pc == 0x20C4D0u) {
        ctx->pc = 0x20C4D4u;
        goto label_20c4d4;
    }
    ctx->pc = 0x20C4CCu;
    SET_GPR_U32(ctx, 31, 0x20C4D4u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x20C4D4u;
label_20c4d4:
    // 0x20c4d4: 0xc04e120  jal         func_138480
label_20c4d8:
    if (ctx->pc == 0x20C4D8u) {
        ctx->pc = 0x20C4DCu;
        goto label_20c4dc;
    }
    ctx->pc = 0x20C4D4u;
    SET_GPR_U32(ctx, 31, 0x20C4DCu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20C4D4u, 0x20C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4DCu;
label_20c4dc:
    // 0x20c4dc: 0xc05b578  jal         func_16D5E0
label_20c4e0:
    if (ctx->pc == 0x20C4E0u) {
        ctx->pc = 0x20C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4DCu;
        // 0x20c4e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C4E4u;
        goto label_20c4e4;
    }
    ctx->pc = 0x20C4DCu;
    SET_GPR_U32(ctx, 31, 0x20C4E4u);
    ctx->pc = 0x20C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4DCu;
    // 0x20c4e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20C4DCu, 0x20C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4E4u;
label_20c4e4:
    // 0x20c4e4: 0xc060258  jal         func_180960
label_20c4e8:
    if (ctx->pc == 0x20C4E8u) {
        ctx->pc = 0x20C4ECu;
        goto label_20c4ec;
    }
    ctx->pc = 0x20C4E4u;
    SET_GPR_U32(ctx, 31, 0x20C4ECu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20C4E4u, 0x20C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4ECu;
label_20c4ec:
    // 0x20c4ec: 0x8f829164  lw          $v0, -0x6E9C($gp)
    ctx->pc = 0x20c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20c4f0:
    // 0x20c4f0: 0x10400165  beqz        $v0, . + 4 + (0x165 << 2)
label_20c4f4:
    if (ctx->pc == 0x20C4F4u) {
        ctx->pc = 0x20C4F8u;
        goto label_20c4f8;
    }
    ctx->pc = 0x20C4F0u;
    {
        const bool branch_taken_0x20c4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c4f0) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C4F8u;
label_20c4f8:
    // 0x20c4f8: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_20c4fc:
    // 0x20c4fc: 0x10400162  beqz        $v0, . + 4 + (0x162 << 2)
label_20c500:
    if (ctx->pc == 0x20C500u) {
        ctx->pc = 0x20C504u;
        goto label_20c504;
    }
    ctx->pc = 0x20C4FCu;
    {
        const bool branch_taken_0x20c4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c4fc) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C504u;
label_20c504:
    // 0x20c504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c508:
    // 0x20c508: 0x1000015f  b           . + 4 + (0x15F << 2)
label_20c50c:
    if (ctx->pc == 0x20C50Cu) {
        ctx->pc = 0x20C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C508u;
        // 0x20c50c: 0xaf829168  sw          $v0, -0x6E98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C510u;
        goto label_20c510;
    }
    ctx->pc = 0x20C508u;
    {
        const bool branch_taken_0x20c508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C508u;
        // 0x20c50c: 0xaf829168  sw          $v0, -0x6E98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c508) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C510u;
label_20c510:
    // 0x20c510: 0xaf929160  sw          $s2, -0x6EA0($gp)
    ctx->pc = 0x20c510u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938976), GPR_U32(ctx, 18));
label_20c514:
    // 0x20c514: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20c514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c518:
    // 0x20c518: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_20c51c:
    if (ctx->pc == 0x20C51Cu) {
        ctx->pc = 0x20C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C518u;
        // 0x20c51c: 0x3203000f  andi        $v1, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C520u;
        goto label_20c520;
    }
    ctx->pc = 0x20C518u;
    {
        const bool branch_taken_0x20c518 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x20C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C518u;
        // 0x20c51c: 0x3203000f  andi        $v1, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c518) {
            ctx->pc = 0x20C52Cu;
            goto label_20c52c;
        }
    }
    ctx->pc = 0x20C520u;
label_20c520:
    // 0x20c520: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_20c524:
    if (ctx->pc == 0x20C524u) {
        ctx->pc = 0x20C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C520u;
        // 0x20c524: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C528u;
        goto label_20c528;
    }
    ctx->pc = 0x20C520u;
    {
        const bool branch_taken_0x20c520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C520u;
        // 0x20c524: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c520) {
            ctx->pc = 0x20C530u;
            goto label_20c530;
        }
    }
    ctx->pc = 0x20C528u;
label_20c528:
    // 0x20c528: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x20c528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_20c52c:
    // 0x20c52c: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x20c52cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_20c530:
    // 0x20c530: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_20c534:
    if (ctx->pc == 0x20C534u) {
        ctx->pc = 0x20C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C530u;
        // 0x20c534: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C538u;
        goto label_20c538;
    }
    ctx->pc = 0x20C530u;
    {
        const bool branch_taken_0x20c530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C530u;
        // 0x20c534: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c530) {
            ctx->pc = 0x20C558u;
            goto label_20c558;
        }
    }
    ctx->pc = 0x20C538u;
label_20c538:
    // 0x20c538: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x20c538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20c53c:
    // 0x20c53c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_20c540:
    if (ctx->pc == 0x20C540u) {
        ctx->pc = 0x20C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C53Cu;
        // 0x20c540: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C544u;
        goto label_20c544;
    }
    ctx->pc = 0x20C53Cu;
    {
        const bool branch_taken_0x20c53c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C53Cu;
        // 0x20c540: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c53c) {
            ctx->pc = 0x20C570u;
            goto label_20c570;
        }
    }
    ctx->pc = 0x20C544u;
label_20c544:
    // 0x20c544: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x20c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_20c548:
    // 0x20c548: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x20c548u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_20c54c:
    // 0x20c54c: 0x10000009  b           . + 4 + (0x9 << 2)
label_20c550:
    if (ctx->pc == 0x20C550u) {
        ctx->pc = 0x20C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C54Cu;
        // 0x20c550: 0x8f849130  lw          $a0, -0x6ED0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C554u;
        goto label_20c554;
    }
    ctx->pc = 0x20C54Cu;
    {
        const bool branch_taken_0x20c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C54Cu;
        // 0x20c550: 0x8f849130  lw          $a0, -0x6ED0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c54c) {
            ctx->pc = 0x20C574u;
            goto label_20c574;
        }
    }
    ctx->pc = 0x20C554u;
label_20c554:
    // 0x20c554: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x20c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20c558:
    // 0x20c558: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20c558u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c55c:
    // 0x20c55c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x20c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_20c560:
    // 0x20c560: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_20c564:
    if (ctx->pc == 0x20C564u) {
        ctx->pc = 0x20C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C560u;
        // 0x20c564: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C568u;
        goto label_20c568;
    }
    ctx->pc = 0x20C560u;
    {
        const bool branch_taken_0x20c560 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C560u;
        // 0x20c564: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c560) {
            ctx->pc = 0x20C570u;
            goto label_20c570;
        }
    }
    ctx->pc = 0x20C568u;
label_20c568:
    // 0x20c568: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x20c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_20c56c:
    // 0x20c56c: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x20c56cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_20c570:
    // 0x20c570: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20c570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
label_20c574:
    // 0x20c574: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_20c578:
    if (ctx->pc == 0x20C578u) {
        ctx->pc = 0x20C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C574u;
        // 0x20c578: 0xaf839120  sw          $v1, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C57Cu;
        goto label_20c57c;
    }
    ctx->pc = 0x20C574u;
    {
        const bool branch_taken_0x20c574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C574u;
        // 0x20c578: 0xaf839120  sw          $v1, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c574) {
            ctx->pc = 0x20C5CCu;
            goto label_20c5cc;
        }
    }
    ctx->pc = 0x20C57Cu;
label_20c57c:
    // 0x20c57c: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
label_20c580:
    // 0x20c580: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20c580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c584:
    // 0x20c584: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_20c588:
    if (ctx->pc == 0x20C588u) {
        ctx->pc = 0x20C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C584u;
        // 0x20c588: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C58Cu;
        goto label_20c58c;
    }
    ctx->pc = 0x20C584u;
    {
        const bool branch_taken_0x20c584 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C584u;
        // 0x20c588: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c584) {
            ctx->pc = 0x20C598u;
            goto label_20c598;
        }
    }
    ctx->pc = 0x20C58Cu;
label_20c58c:
    // 0x20c58c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20c590:
    if (ctx->pc == 0x20C590u) {
        ctx->pc = 0x20C594u;
        goto label_20c594;
    }
    ctx->pc = 0x20C58Cu;
    {
        const bool branch_taken_0x20c58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c58c) {
            ctx->pc = 0x20C598u;
            goto label_20c598;
        }
    }
    ctx->pc = 0x20C594u;
label_20c594:
    // 0x20c594: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_20c598:
    // 0x20c598: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20c598u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
label_20c59c:
    // 0x20c59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c5a0:
    // 0x20c5a0: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_20c5a4:
    if (ctx->pc == 0x20C5A4u) {
        ctx->pc = 0x20C5A8u;
        goto label_20c5a8;
    }
    ctx->pc = 0x20C5A0u;
    {
        const bool branch_taken_0x20c5a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c5a0) {
            ctx->pc = 0x20C5CCu;
            goto label_20c5cc;
        }
    }
    ctx->pc = 0x20C5A8u;
label_20c5a8:
    // 0x20c5a8: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20c5ac:
    // 0x20c5ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c5b0:
    // 0x20c5b0: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
label_20c5b4:
    // 0x20c5b4: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20c5b8:
    // 0x20c5b8: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20c5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
label_20c5bc:
    // 0x20c5bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20c5c0:
    if (ctx->pc == 0x20C5C0u) {
        ctx->pc = 0x20C5C4u;
        goto label_20c5c4;
    }
    ctx->pc = 0x20C5BCu;
    {
        const bool branch_taken_0x20c5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c5bc) {
            ctx->pc = 0x20C5CCu;
            goto label_20c5cc;
        }
    }
    ctx->pc = 0x20C5C4u;
label_20c5c4:
    // 0x20c5c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c5c8:
    // 0x20c5c8: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
label_20c5cc:
    // 0x20c5cc: 0x0  nop
    ctx->pc = 0x20c5ccu;
    // NOP
label_20c5d0:
    // 0x20c5d0: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20c5d4:
    // 0x20c5d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c5d8:
    // 0x20c5d8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_20c5dc:
    if (ctx->pc == 0x20C5DCu) {
        ctx->pc = 0x20C5E0u;
        goto label_20c5e0;
    }
    ctx->pc = 0x20C5D8u;
    {
        const bool branch_taken_0x20c5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c5d8) {
            ctx->pc = 0x20C618u;
            goto label_20c618;
        }
    }
    ctx->pc = 0x20C5E0u;
label_20c5e0:
    // 0x20c5e0: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20c5e4:
    // 0x20c5e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20c5e8:
    // 0x20c5e8: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20c5e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20c5ec:
    // 0x20c5ec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20c5f0:
    if (ctx->pc == 0x20C5F0u) {
        ctx->pc = 0x20C5F4u;
        goto label_20c5f4;
    }
    ctx->pc = 0x20C5ECu;
    {
        const bool branch_taken_0x20c5ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c5ec) {
            ctx->pc = 0x20C5FCu;
            goto label_20c5fc;
        }
    }
    ctx->pc = 0x20C5F4u;
label_20c5f4:
    // 0x20c5f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_20c5f8:
    if (ctx->pc == 0x20C5F8u) {
        ctx->pc = 0x20C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5F4u;
        // 0x20c5f8: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C5FCu;
        goto label_20c5fc;
    }
    ctx->pc = 0x20C5F4u;
    {
        const bool branch_taken_0x20c5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5F4u;
        // 0x20c5f8: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5f4) {
            ctx->pc = 0x20C604u;
            goto label_20c604;
        }
    }
    ctx->pc = 0x20C5FCu;
label_20c5fc:
    // 0x20c5fc: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_20c600:
    // 0x20c600: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20c600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
label_20c604:
    // 0x20c604: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20c604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20c608:
    // 0x20c608: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20c60c:
    if (ctx->pc == 0x20C60Cu) {
        ctx->pc = 0x20C610u;
        goto label_20c610;
    }
    ctx->pc = 0x20C608u;
    {
        const bool branch_taken_0x20c608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c608) {
            ctx->pc = 0x20C618u;
            goto label_20c618;
        }
    }
    ctx->pc = 0x20C610u;
label_20c610:
    // 0x20c610: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c614:
    // 0x20c614: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20c614u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
label_20c618:
    // 0x20c618: 0xc078030  jal         func_1E00C0
label_20c61c:
    if (ctx->pc == 0x20C61Cu) {
        ctx->pc = 0x20C620u;
        goto label_20c620;
    }
    ctx->pc = 0x20C618u;
    SET_GPR_U32(ctx, 31, 0x20C620u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x20C620u;
label_20c620:
    // 0x20c620: 0xc07a9d8  jal         func_1EA760
label_20c624:
    if (ctx->pc == 0x20C624u) {
        ctx->pc = 0x20C628u;
        goto label_20c628;
    }
    ctx->pc = 0x20C620u;
    SET_GPR_U32(ctx, 31, 0x20C628u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x20C628u;
label_20c628:
    // 0x20c628: 0xc04e168  jal         func_1385A0
label_20c62c:
    if (ctx->pc == 0x20C62Cu) {
        ctx->pc = 0x20C630u;
        goto label_20c630;
    }
    ctx->pc = 0x20C628u;
    SET_GPR_U32(ctx, 31, 0x20C630u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20C628u, 0x20C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C630u;
label_20c630:
    // 0x20c630: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20c630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_20c634:
    // 0x20c634: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20c634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20c638:
    // 0x20c638: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x20c638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_20c63c:
    // 0x20c63c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20c640:
    // 0x20c640: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20c640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20c644:
    // 0x20c644: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20c648:
    // 0x20c648: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20c648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20c64c:
    // 0x20c64c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c650:
    // 0x20c650: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c650u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c654:
    // 0x20c654: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20c654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20c658:
    // 0x20c658: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20c658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20c65c:
    // 0x20c65c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20c65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20c660:
    // 0x20c660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c664:
    // 0x20c664: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20c664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20c668:
    // 0x20c668: 0xc066c72  jal         func_19B1C8
label_20c66c:
    if (ctx->pc == 0x20C66Cu) {
        ctx->pc = 0x20C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C668u;
        // 0x20c66c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C670u;
        goto label_20c670;
    }
    ctx->pc = 0x20C668u;
    SET_GPR_U32(ctx, 31, 0x20C670u);
    ctx->pc = 0x20C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C668u;
    // 0x20c66c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20C668u, 0x20C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C670u;
label_20c670:
    // 0x20c670: 0xc08372c  jal         func_20DCB0
label_20c674:
    if (ctx->pc == 0x20C674u) {
        ctx->pc = 0x20C678u;
        goto label_20c678;
    }
    ctx->pc = 0x20C670u;
    SET_GPR_U32(ctx, 31, 0x20C678u);
    ctx->pc = 0x20DCB0u;
    { ctx->pc = 0x20dcb0; return; }
    ctx->pc = 0x20C678u;
label_20c678:
    // 0x20c678: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20c67c:
    // 0x20c67c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_20c680:
    if (ctx->pc == 0x20C680u) {
        ctx->pc = 0x20C684u;
        goto label_20c684;
    }
    ctx->pc = 0x20C67Cu;
    {
        const bool branch_taken_0x20c67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c67c) {
            ctx->pc = 0x20C748u;
            goto label_20c748;
        }
    }
    ctx->pc = 0x20C684u;
label_20c684:
    // 0x20c684: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20c684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20c688:
    // 0x20c688: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20c688u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20c68c:
    // 0x20c68c: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20c68cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20c690:
    // 0x20c690: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20c690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_20c694:
    // 0x20c694: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20c694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20c698:
    // 0x20c698: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20c698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20c69c:
    // 0x20c69c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20c6a0:
    // 0x20c6a0: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20c6a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_20c6a4:
    // 0x20c6a4: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20c6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_20c6a8:
    // 0x20c6a8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20c6ac:
    // 0x20c6ac: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20c6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20c6b0:
    // 0x20c6b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c6b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c6b4:
    // 0x20c6b4: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20c6b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
label_20c6b8:
    // 0x20c6b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c6b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c6bc:
    // 0x20c6bc: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20c6bcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_20c6c0:
    // 0x20c6c0: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20c6c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20c6c4:
    // 0x20c6c4: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20c6c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_20c6c8:
    // 0x20c6c8: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20c6c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20c6cc:
    // 0x20c6cc: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_20c6d0:
    // 0x20c6d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20c6d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c6d4:
    // 0x20c6d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20c6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20c6d8:
    // 0x20c6d8: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_20c6dc:
    // 0x20c6dc: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20c6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
label_20c6e0:
    // 0x20c6e0: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20c6e0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20c6e4:
    // 0x20c6e4: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20c6e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20c6e8:
    // 0x20c6e8: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20c6e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20c6ec:
    // 0x20c6ec: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20c6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
label_20c6f0:
    // 0x20c6f0: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20c6f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
label_20c6f4:
    // 0x20c6f4: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20c6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
label_20c6f8:
    // 0x20c6f8: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_20c6fc:
    // 0x20c6fc: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_20c700:
    // 0x20c700: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20c700u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20c704:
    // 0x20c704: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20c704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_20c708:
    // 0x20c708: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20c708u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20c70c:
    // 0x20c70c: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
label_20c710:
    // 0x20c710: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20c710u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
label_20c714:
    // 0x20c714: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20c714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20c718:
    // 0x20c718: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20c718u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
label_20c71c:
    // 0x20c71c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20c720:
    // 0x20c720: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20c720u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
label_20c724:
    // 0x20c724: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20c724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
label_20c728:
    // 0x20c728: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20c728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20c72c:
    // 0x20c72c: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
label_20c730:
    // 0x20c730: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20c730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20c734:
    // 0x20c734: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20c734u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20c738:
    // 0x20c738: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_20c73c:
    // 0x20c73c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20c740:
    // 0x20c740: 0xc066c72  jal         func_19B1C8
label_20c744:
    if (ctx->pc == 0x20C744u) {
        ctx->pc = 0x20C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C740u;
        // 0x20c744: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C748u;
        goto label_20c748;
    }
    ctx->pc = 0x20C740u;
    SET_GPR_U32(ctx, 31, 0x20C748u);
    ctx->pc = 0x20C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C740u;
    // 0x20c744: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20C740u, 0x20C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C748u;
label_20c748:
    // 0x20c748: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20c748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20c74c:
    // 0x20c74c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20c750:
    // 0x20c750: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20c750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20c754:
    // 0x20c754: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20c754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20c758:
    // 0x20c758: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20c758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20c75c:
    // 0x20c75c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20c75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20c760:
    // 0x20c760: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20c760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c764:
    // 0x20c764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c768:
    // 0x20c768: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20c768u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20c76c:
    // 0x20c76c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20c770:
    // 0x20c770: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20c770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20c774:
    // 0x20c774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c778:
    // 0x20c778: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20c778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20c77c:
    // 0x20c77c: 0xc066c72  jal         func_19B1C8
label_20c780:
    if (ctx->pc == 0x20C780u) {
        ctx->pc = 0x20C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C77Cu;
        // 0x20c780: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C784u;
        goto label_20c784;
    }
    ctx->pc = 0x20C77Cu;
    SET_GPR_U32(ctx, 31, 0x20C784u);
    ctx->pc = 0x20C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C77Cu;
    // 0x20c780: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20C77Cu, 0x20C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C784u;
label_20c784:
    // 0x20c784: 0xc077fc4  jal         func_1DFF10
label_20c788:
    if (ctx->pc == 0x20C788u) {
        ctx->pc = 0x20C78Cu;
        goto label_20c78c;
    }
    ctx->pc = 0x20C784u;
    SET_GPR_U32(ctx, 31, 0x20C78Cu);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x20C78Cu;
label_20c78c:
    // 0x20c78c: 0xc07a86c  jal         func_1EA1B0
label_20c790:
    if (ctx->pc == 0x20C790u) {
        ctx->pc = 0x20C794u;
        goto label_20c794;
    }
    ctx->pc = 0x20C78Cu;
    SET_GPR_U32(ctx, 31, 0x20C794u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x20C794u;
label_20c794:
    // 0x20c794: 0xc04e120  jal         func_138480
label_20c798:
    if (ctx->pc == 0x20C798u) {
        ctx->pc = 0x20C79Cu;
        goto label_20c79c;
    }
    ctx->pc = 0x20C794u;
    SET_GPR_U32(ctx, 31, 0x20C79Cu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20C794u, 0x20C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C79Cu;
label_20c79c:
    // 0x20c79c: 0xc05b578  jal         func_16D5E0
label_20c7a0:
    if (ctx->pc == 0x20C7A0u) {
        ctx->pc = 0x20C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C79Cu;
        // 0x20c7a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7A4u;
        goto label_20c7a4;
    }
    ctx->pc = 0x20C79Cu;
    SET_GPR_U32(ctx, 31, 0x20C7A4u);
    ctx->pc = 0x20C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C79Cu;
    // 0x20c7a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20C79Cu, 0x20C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7A4u;
label_20c7a4:
    // 0x20c7a4: 0xc060258  jal         func_180960
label_20c7a8:
    if (ctx->pc == 0x20C7A8u) {
        ctx->pc = 0x20C7ACu;
        goto label_20c7ac;
    }
    ctx->pc = 0x20C7A4u;
    SET_GPR_U32(ctx, 31, 0x20C7ACu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20C7A4u, 0x20C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7ACu;
label_20c7ac:
    // 0x20c7ac: 0x8f829164  lw          $v0, -0x6E9C($gp)
    ctx->pc = 0x20c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20c7b0:
    // 0x20c7b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20c7b4:
    if (ctx->pc == 0x20C7B4u) {
        ctx->pc = 0x20C7B8u;
        goto label_20c7b8;
    }
    ctx->pc = 0x20C7B0u;
    {
        const bool branch_taken_0x20c7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7b0) {
            ctx->pc = 0x20C7CCu;
            goto label_20c7cc;
        }
    }
    ctx->pc = 0x20C7B8u;
label_20c7b8:
    // 0x20c7b8: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_20c7bc:
    // 0x20c7bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20c7c0:
    if (ctx->pc == 0x20C7C0u) {
        ctx->pc = 0x20C7C4u;
        goto label_20c7c4;
    }
    ctx->pc = 0x20C7BCu;
    {
        const bool branch_taken_0x20c7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7bc) {
            ctx->pc = 0x20C7CCu;
            goto label_20c7cc;
        }
    }
    ctx->pc = 0x20C7C4u;
label_20c7c4:
    // 0x20c7c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c7c8:
    // 0x20c7c8: 0xaf829168  sw          $v0, -0x6E98($gp)
    ctx->pc = 0x20c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
label_20c7cc:
    // 0x20c7cc: 0x0  nop
    ctx->pc = 0x20c7ccu;
    // NOP
label_20c7d0:
    // 0x20c7d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20c7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20c7d4:
    // 0x20c7d4: 0x2a010031  slti        $at, $s0, 0x31
    ctx->pc = 0x20c7d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)49) ? 1 : 0);
label_20c7d8:
    // 0x20c7d8: 0x1420ff4f  bnez        $at, . + 4 + (-0xB1 << 2)
label_20c7dc:
    if (ctx->pc == 0x20C7DCu) {
        ctx->pc = 0x20C7E0u;
        goto label_20c7e0;
    }
    ctx->pc = 0x20C7D8u;
    {
        const bool branch_taken_0x20c7d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c7d8) {
            ctx->pc = 0x20C518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c518;
        }
    }
    ctx->pc = 0x20C7E0u;
label_20c7e0:
    // 0x20c7e0: 0x10000141  b           . + 4 + (0x141 << 2)
label_20c7e4:
    if (ctx->pc == 0x20C7E4u) {
        ctx->pc = 0x20C7E8u;
        goto label_20c7e8;
    }
    ctx->pc = 0x20C7E0u;
    {
        const bool branch_taken_0x20c7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7e0) {
            ctx->pc = 0x20CCE8u;
            { ctx->pc = 0x20cce8; return; }
        }
    }
    ctx->pc = 0x20C7E8u;
label_20c7e8:
    // 0x20c7e8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20c7ec:
    // 0x20c7ec: 0xc05b420  jal         func_16D080
label_20c7f0:
    if (ctx->pc == 0x20C7F0u) {
        ctx->pc = 0x20C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7ECu;
        // 0x20c7f0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C7F4u;
        goto label_20c7f4;
    }
    ctx->pc = 0x20C7ECu;
    SET_GPR_U32(ctx, 31, 0x20C7F4u);
    ctx->pc = 0x20C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C7ECu;
    // 0x20c7f0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20C7ECu, 0x20C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7F4u;
label_20c7f4:
    // 0x20c7f4: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_20c7f8:
    if (ctx->pc == 0x20C7F8u) {
        ctx->pc = 0x20C7FCu;
        goto label_20c7fc;
    }
    ctx->pc = 0x20C7F4u;
    {
        const bool branch_taken_0x20c7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7f4) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C7FCu;
label_20c7fc:
    // 0x20c7fc: 0x0  nop
    ctx->pc = 0x20c7fcu;
    // NOP
label_20c800:
    // 0x20c800: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x20c800u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_20c804:
    // 0x20c804: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x20c804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_20c808:
    // 0x20c808: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20c80c:
    if (ctx->pc == 0x20C80Cu) {
        ctx->pc = 0x20C810u;
        goto label_20c810;
    }
    ctx->pc = 0x20C808u;
    {
        const bool branch_taken_0x20c808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c808) {
            ctx->pc = 0x20C838u;
            goto label_20c838;
        }
    }
    ctx->pc = 0x20C810u;
label_20c810:
    // 0x20c810: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c814:
    // 0x20c814: 0xc05b420  jal         func_16D080
label_20c818:
    if (ctx->pc == 0x20C818u) {
        ctx->pc = 0x20C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C814u;
        // 0x20c818: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C81Cu;
        goto label_20c81c;
    }
    ctx->pc = 0x20C814u;
    SET_GPR_U32(ctx, 31, 0x20C81Cu);
    ctx->pc = 0x20C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C814u;
    // 0x20c818: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20C814u, 0x20C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C81Cu;
label_20c81c:
    // 0x20c81c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_20c820:
    if (ctx->pc == 0x20C820u) {
        ctx->pc = 0x20C824u;
        goto label_20c824;
    }
    ctx->pc = 0x20C81Cu;
    {
        const bool branch_taken_0x20c81c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c81c) {
            ctx->pc = 0x20C82Cu;
            goto label_20c82c;
        }
    }
    ctx->pc = 0x20C824u;
label_20c824:
    // 0x20c824: 0x10000002  b           . + 4 + (0x2 << 2)
label_20c828:
    if (ctx->pc == 0x20C828u) {
        ctx->pc = 0x20C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C824u;
        // 0x20c828: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C82Cu;
        goto label_20c82c;
    }
    ctx->pc = 0x20C824u;
    {
        const bool branch_taken_0x20c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C824u;
        // 0x20c828: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c824) {
            ctx->pc = 0x20C830u;
            goto label_20c830;
        }
    }
    ctx->pc = 0x20C82Cu;
label_20c82c:
    // 0x20c82c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x20c82cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_20c830:
    // 0x20c830: 0x10000095  b           . + 4 + (0x95 << 2)
label_20c834:
    if (ctx->pc == 0x20C834u) {
        ctx->pc = 0x20C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C830u;
        // 0x20c834: 0xaf929124  sw          $s2, -0x6EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C838u;
        goto label_20c838;
    }
    ctx->pc = 0x20C830u;
    {
        const bool branch_taken_0x20c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C830u;
        // 0x20c834: 0xaf929124  sw          $s2, -0x6EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c830) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C838u;
label_20c838:
    // 0x20c838: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x20c838u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_20c83c:
    // 0x20c83c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20c83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_20c840:
    // 0x20c840: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_20c844:
    if (ctx->pc == 0x20C844u) {
        ctx->pc = 0x20C848u;
        goto label_20c848;
    }
    ctx->pc = 0x20C840u;
    {
        const bool branch_taken_0x20c840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c840) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C848u;
label_20c848:
    // 0x20c848: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c84c:
    // 0x20c84c: 0xc05b420  jal         func_16D080
label_20c850:
    if (ctx->pc == 0x20C850u) {
        ctx->pc = 0x20C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C84Cu;
        // 0x20c850: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C854u;
        goto label_20c854;
    }
    ctx->pc = 0x20C84Cu;
    SET_GPR_U32(ctx, 31, 0x20C854u);
    ctx->pc = 0x20C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C84Cu;
    // 0x20c850: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20C84Cu, 0x20C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C854u;
label_20c854:
    // 0x20c854: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c858:
    // 0x20c858: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_20c85c:
    if (ctx->pc == 0x20C85Cu) {
        ctx->pc = 0x20C860u;
        goto label_20c860;
    }
    ctx->pc = 0x20C858u;
    {
        const bool branch_taken_0x20c858 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c858) {
            ctx->pc = 0x20C868u;
            goto label_20c868;
        }
    }
    ctx->pc = 0x20C860u;
label_20c860:
    // 0x20c860: 0x10000002  b           . + 4 + (0x2 << 2)
label_20c864:
    if (ctx->pc == 0x20C864u) {
        ctx->pc = 0x20C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C860u;
        // 0x20c864: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C868u;
        goto label_20c868;
    }
    ctx->pc = 0x20C860u;
    {
        const bool branch_taken_0x20c860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C860u;
        // 0x20c864: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c860) {
            ctx->pc = 0x20C86Cu;
            goto label_20c86c;
        }
    }
    ctx->pc = 0x20C868u;
label_20c868:
    // 0x20c868: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20c868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20c86c:
    // 0x20c86c: 0x10000086  b           . + 4 + (0x86 << 2)
label_20c870:
    if (ctx->pc == 0x20C870u) {
        ctx->pc = 0x20C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C86Cu;
        // 0x20c870: 0xaf929124  sw          $s2, -0x6EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C874u;
        goto label_20c874;
    }
    ctx->pc = 0x20C86Cu;
    {
        const bool branch_taken_0x20c86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C86Cu;
        // 0x20c870: 0xaf929124  sw          $s2, -0x6EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c86c) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C874u;
label_20c874:
    // 0x20c874: 0x0  nop
    ctx->pc = 0x20c874u;
    // NOP
label_20c878:
    // 0x20c878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c87c:
    // 0x20c87c: 0x14620082  bne         $v1, $v0, . + 4 + (0x82 << 2)
label_20c880:
    if (ctx->pc == 0x20C880u) {
        ctx->pc = 0x20C884u;
        goto label_20c884;
    }
    ctx->pc = 0x20C87Cu;
    {
        const bool branch_taken_0x20c87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c87c) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C884u;
label_20c884:
    // 0x20c884: 0x16000035  bnez        $s0, . + 4 + (0x35 << 2)
label_20c888:
    if (ctx->pc == 0x20C888u) {
        ctx->pc = 0x20C88Cu;
        goto label_20c88c;
    }
    ctx->pc = 0x20C884u;
    {
        const bool branch_taken_0x20c884 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c884) {
            ctx->pc = 0x20C95Cu;
            goto label_20c95c;
        }
    }
    ctx->pc = 0x20C88Cu;
label_20c88c:
    // 0x20c88c: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x20c88cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_20c890:
    // 0x20c890: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x20c890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_20c894:
    // 0x20c894: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_20c898:
    if (ctx->pc == 0x20C898u) {
        ctx->pc = 0x20C89Cu;
        goto label_20c89c;
    }
    ctx->pc = 0x20C894u;
    {
        const bool branch_taken_0x20c894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c894) {
            ctx->pc = 0x20C8C0u;
            goto label_20c8c0;
        }
    }
    ctx->pc = 0x20C89Cu;
label_20c89c:
    // 0x20c89c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20c89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c8a0:
    // 0x20c8a0: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x20c8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_20c8a4:
    // 0x20c8a4: 0xc05b420  jal         func_16D080
label_20c8a8:
    if (ctx->pc == 0x20C8A8u) {
        ctx->pc = 0x20C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8A4u;
        // 0x20c8a8: 0xaf809164  sw          $zero, -0x6E9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8ACu;
        goto label_20c8ac;
    }
    ctx->pc = 0x20C8A4u;
    SET_GPR_U32(ctx, 31, 0x20C8ACu);
    ctx->pc = 0x20C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8A4u;
    // 0x20c8a8: 0xaf809164  sw          $zero, -0x6E9C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938980), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20C8A4u, 0x20C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8ACu;
label_20c8ac:
    // 0x20c8ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c8b0:
    // 0x20c8b0: 0xc080f84  jal         func_203E10
label_20c8b4:
    if (ctx->pc == 0x20C8B4u) {
        ctx->pc = 0x20C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8B0u;
        // 0x20c8b4: 0xaf929160  sw          $s2, -0x6EA0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938976), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8B8u;
        goto label_20c8b8;
    }
    ctx->pc = 0x20C8B0u;
    SET_GPR_U32(ctx, 31, 0x20C8B8u);
    ctx->pc = 0x20C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8B0u;
    // 0x20c8b4: 0xaf929160  sw          $s2, -0x6EA0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938976), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E10u;
    { ctx->pc = 0x203e10; return; }
    ctx->pc = 0x20C8B8u;
label_20c8b8:
    // 0x20c8b8: 0x10000073  b           . + 4 + (0x73 << 2)
label_20c8bc:
    if (ctx->pc == 0x20C8BCu) {
        ctx->pc = 0x20C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8B8u;
        // 0x20c8bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8C0u;
        goto label_20c8c0;
    }
    ctx->pc = 0x20C8B8u;
    {
        const bool branch_taken_0x20c8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8B8u;
        // 0x20c8bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8b8) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C8C0u;
label_20c8c0:
    // 0x20c8c0: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x20c8c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_20c8c4:
    // 0x20c8c4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x20c8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_20c8c8:
    // 0x20c8c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20c8cc:
    if (ctx->pc == 0x20C8CCu) {
        ctx->pc = 0x20C8D0u;
        goto label_20c8d0;
    }
    ctx->pc = 0x20C8C8u;
    {
        const bool branch_taken_0x20c8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c8c8) {
            ctx->pc = 0x20C8E4u;
            goto label_20c8e4;
        }
    }
    ctx->pc = 0x20C8D0u;
label_20c8d0:
    // 0x20c8d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20c8d4:
    // 0x20c8d4: 0xc05b420  jal         func_16D080
label_20c8d8:
    if (ctx->pc == 0x20C8D8u) {
        ctx->pc = 0x20C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8D4u;
        // 0x20c8d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8DCu;
        goto label_20c8dc;
    }
    ctx->pc = 0x20C8D4u;
    SET_GPR_U32(ctx, 31, 0x20C8DCu);
    ctx->pc = 0x20C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8D4u;
    // 0x20c8d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20C8D4u, 0x20C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8DCu;
label_20c8dc:
    // 0x20c8dc: 0x1000006a  b           . + 4 + (0x6A << 2)
label_20c8e0:
    if (ctx->pc == 0x20C8E0u) {
        ctx->pc = 0x20C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8DCu;
        // 0x20c8e0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8E4u;
        goto label_20c8e4;
    }
    ctx->pc = 0x20C8DCu;
    {
        const bool branch_taken_0x20c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8DCu;
        // 0x20c8e0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8dc) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C8E4u;
label_20c8e4:
    // 0x20c8e4: 0x0  nop
    ctx->pc = 0x20c8e4u;
    // NOP
label_20c8e8:
    // 0x20c8e8: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x20c8e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_20c8ec:
    // 0x20c8ec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x20c8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_20c8f0:
    // 0x20c8f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20c8f4:
    if (ctx->pc == 0x20C8F4u) {
        ctx->pc = 0x20C8F8u;
        goto label_20c8f8;
    }
    ctx->pc = 0x20C8F0u;
    {
        const bool branch_taken_0x20c8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c8f0) {
            ctx->pc = 0x20C920u;
            goto label_20c920;
        }
    }
    ctx->pc = 0x20C8F8u;
label_20c8f8:
    // 0x20c8f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c8fc:
    // 0x20c8fc: 0xc05b420  jal         func_16D080
label_20c900:
    if (ctx->pc == 0x20C900u) {
        ctx->pc = 0x20C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8FCu;
        // 0x20c900: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C904u;
        goto label_20c904;
    }
    ctx->pc = 0x20C8FCu;
    SET_GPR_U32(ctx, 31, 0x20C904u);
    ctx->pc = 0x20C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8FCu;
    // 0x20c900: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20C8FCu, 0x20C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C904u;
label_20c904:
    // 0x20c904: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_20c908:
    if (ctx->pc == 0x20C908u) {
        ctx->pc = 0x20C90Cu;
        goto label_20c90c;
    }
    ctx->pc = 0x20C904u;
    {
        const bool branch_taken_0x20c904 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c904) {
            ctx->pc = 0x20C914u;
            goto label_20c914;
        }
    }
    ctx->pc = 0x20C90Cu;
label_20c90c:
    // 0x20c90c: 0x10000002  b           . + 4 + (0x2 << 2)
label_20c910:
    if (ctx->pc == 0x20C910u) {
        ctx->pc = 0x20C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C90Cu;
        // 0x20c910: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C914u;
        goto label_20c914;
    }
    ctx->pc = 0x20C90Cu;
    {
        const bool branch_taken_0x20c90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C90Cu;
        // 0x20c910: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c90c) {
            ctx->pc = 0x20C918u;
            goto label_20c918;
        }
    }
    ctx->pc = 0x20C914u;
label_20c914:
    // 0x20c914: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x20c914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_20c918:
    // 0x20c918: 0x1000005b  b           . + 4 + (0x5B << 2)
label_20c91c:
    if (ctx->pc == 0x20C91Cu) {
        ctx->pc = 0x20C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C918u;
        // 0x20c91c: 0xaf929124  sw          $s2, -0x6EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C920u;
        goto label_20c920;
    }
    ctx->pc = 0x20C918u;
    {
        const bool branch_taken_0x20c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C918u;
        // 0x20c91c: 0xaf929124  sw          $s2, -0x6EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c918) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C920u;
label_20c920:
    // 0x20c920: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x20c920u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_20c924:
    // 0x20c924: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20c924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_20c928:
    // 0x20c928: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_20c92c:
    if (ctx->pc == 0x20C92Cu) {
        ctx->pc = 0x20C930u;
        goto label_20c930;
    }
    ctx->pc = 0x20C928u;
    {
        const bool branch_taken_0x20c928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c928) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C930u;
label_20c930:
    // 0x20c930: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c934:
    // 0x20c934: 0xc05b420  jal         func_16D080
label_20c938:
    if (ctx->pc == 0x20C938u) {
        ctx->pc = 0x20C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C934u;
        // 0x20c938: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C93Cu;
        goto label_20c93c;
    }
    ctx->pc = 0x20C934u;
    SET_GPR_U32(ctx, 31, 0x20C93Cu);
    ctx->pc = 0x20C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C934u;
    // 0x20c938: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20C934u, 0x20C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C93Cu;
label_20c93c:
    // 0x20c93c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c940:
    // 0x20c940: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_20c944:
    if (ctx->pc == 0x20C944u) {
        ctx->pc = 0x20C948u;
        goto label_20c948;
    }
    ctx->pc = 0x20C940u;
    {
        const bool branch_taken_0x20c940 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c940) {
            ctx->pc = 0x20C950u;
            goto label_20c950;
        }
    }
    ctx->pc = 0x20C948u;
label_20c948:
    // 0x20c948: 0x10000002  b           . + 4 + (0x2 << 2)
label_20c94c:
    if (ctx->pc == 0x20C94Cu) {
        ctx->pc = 0x20C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C948u;
        // 0x20c94c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C950u;
        goto label_20c950;
    }
    ctx->pc = 0x20C948u;
    {
        const bool branch_taken_0x20c948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C948u;
        // 0x20c94c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c948) {
            ctx->pc = 0x20C954u;
            goto label_20c954;
        }
    }
    ctx->pc = 0x20C950u;
label_20c950:
    // 0x20c950: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20c950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20c954:
    // 0x20c954: 0x1000004c  b           . + 4 + (0x4C << 2)
label_20c958:
    if (ctx->pc == 0x20C958u) {
        ctx->pc = 0x20C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C954u;
        // 0x20c958: 0xaf929124  sw          $s2, -0x6EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C95Cu;
        goto label_20c95c;
    }
    ctx->pc = 0x20C954u;
    {
        const bool branch_taken_0x20c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C954u;
        // 0x20c958: 0xaf929124  sw          $s2, -0x6EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c954) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C95Cu;
label_20c95c:
    // 0x20c95c: 0x0  nop
    ctx->pc = 0x20c95cu;
    // NOP
label_20c960:
    // 0x20c960: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_20c964:
    if (ctx->pc == 0x20C964u) {
        ctx->pc = 0x20C968u;
        goto label_20c968;
    }
    ctx->pc = 0x20C960u;
    {
        const bool branch_taken_0x20c960 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c960) {
            ctx->pc = 0x20C99Cu;
            goto label_20c99c;
        }
    }
    ctx->pc = 0x20C968u;
label_20c968:
    // 0x20c968: 0x8f829160  lw          $v0, -0x6EA0($gp)
    ctx->pc = 0x20c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938976)));
label_20c96c:
    // 0x20c96c: 0xc080a24  jal         func_202890
label_20c970:
    if (ctx->pc == 0x20C970u) {
        ctx->pc = 0x20C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C96Cu;
        // 0x20c970: 0x24440003  addiu       $a0, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C974u;
        goto label_20c974;
    }
    ctx->pc = 0x20C96Cu;
    SET_GPR_U32(ctx, 31, 0x20C974u);
    ctx->pc = 0x20C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C96Cu;
    // 0x20c970: 0x24440003  addiu       $a0, $v0, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202890u;
    { ctx->pc = 0x202890; return; }
    ctx->pc = 0x20C974u;
label_20c974:
    // 0x20c974: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20c974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c978:
    // 0x20c978: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
label_20c97c:
    if (ctx->pc == 0x20C97Cu) {
        ctx->pc = 0x20C980u;
        goto label_20c980;
    }
    ctx->pc = 0x20C978u;
    {
        const bool branch_taken_0x20c978 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c978) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C980u;
label_20c980:
    // 0x20c980: 0xc080f70  jal         func_203DC0
label_20c984:
    if (ctx->pc == 0x20C984u) {
        ctx->pc = 0x20C988u;
        goto label_20c988;
    }
    ctx->pc = 0x20C980u;
    SET_GPR_U32(ctx, 31, 0x20C988u);
    ctx->pc = 0x203DC0u;
    { ctx->pc = 0x203dc0; return; }
    ctx->pc = 0x20C988u;
label_20c988:
    // 0x20c988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c98c:
    // 0x20c98c: 0x1e2000d6  bgtz        $s1, . + 4 + (0xD6 << 2)
label_20c990:
    if (ctx->pc == 0x20C990u) {
        ctx->pc = 0x20C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C98Cu;
        // 0x20c990: 0xaf829164  sw          $v0, -0x6E9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C994u;
        goto label_20c994;
    }
    ctx->pc = 0x20C98Cu;
    {
        const bool branch_taken_0x20c98c = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x20C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C98Cu;
        // 0x20c990: 0xaf829164  sw          $v0, -0x6E9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c98c) {
            ctx->pc = 0x20CCE8u;
            { ctx->pc = 0x20cce8; return; }
        }
    }
    ctx->pc = 0x20C994u;
label_20c994:
    // 0x20c994: 0x1000003c  b           . + 4 + (0x3C << 2)
label_20c998:
    if (ctx->pc == 0x20C998u) {
        ctx->pc = 0x20C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C994u;
        // 0x20c998: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C99Cu;
        goto label_20c99c;
    }
    ctx->pc = 0x20C994u;
    {
        const bool branch_taken_0x20c994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C994u;
        // 0x20c998: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c994) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20C99Cu;
label_20c99c:
    // 0x20c99c: 0x0  nop
    ctx->pc = 0x20c99cu;
    // NOP
label_20c9a0:
    // 0x20c9a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c9a4:
    // 0x20c9a4: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
label_20c9a8:
    if (ctx->pc == 0x20C9A8u) {
        ctx->pc = 0x20C9ACu;
        goto label_20c9ac;
    }
    ctx->pc = 0x20C9A4u;
    {
        const bool branch_taken_0x20c9a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c9a4) {
            ctx->pc = 0x20CA08u;
            goto label_20ca08;
        }
    }
    ctx->pc = 0x20C9ACu;
label_20c9ac:
    // 0x20c9ac: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x20c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20c9b0:
    // 0x20c9b0: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x20c9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_20c9b4:
    // 0x20c9b4: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x20c9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_20c9b8:
    // 0x20c9b8: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x20c9b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_20c9bc:
    // 0x20c9bc: 0x24080168  addiu       $t0, $zero, 0x168
    ctx->pc = 0x20c9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_20c9c0:
    // 0x20c9c0: 0xc07aa5c  jal         func_1EA970
label_20c9c4:
    if (ctx->pc == 0x20C9C4u) {
        ctx->pc = 0x20C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9C0u;
        // 0x20c9c4: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C9C8u;
        goto label_20c9c8;
    }
    ctx->pc = 0x20C9C0u;
    SET_GPR_U32(ctx, 31, 0x20C9C8u);
    ctx->pc = 0x20C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9C0u;
    // 0x20c9c4: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x20C9C8u;
label_20c9c8:
    // 0x20c9c8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x20c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20c9cc:
    // 0x20c9cc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x20c9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_20c9d0:
    // 0x20c9d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x20c9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20c9d4:
    // 0x20c9d4: 0xc07aa7c  jal         func_1EA9F0
label_20c9d8:
    if (ctx->pc == 0x20C9D8u) {
        ctx->pc = 0x20C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9D4u;
        // 0x20c9d8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C9DCu;
        goto label_20c9dc;
    }
    ctx->pc = 0x20C9D4u;
    SET_GPR_U32(ctx, 31, 0x20C9DCu);
    ctx->pc = 0x20C9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9D4u;
    // 0x20c9d8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x20C9DCu;
label_20c9dc:
    // 0x20c9dc: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x20c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_20c9e0:
    // 0x20c9e0: 0xc07aaa8  jal         func_1EAAA0
label_20c9e4:
    if (ctx->pc == 0x20C9E4u) {
        ctx->pc = 0x20C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9E0u;
        // 0x20c9e4: 0x2484e060  addiu       $a0, $a0, -0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C9E8u;
        goto label_20c9e8;
    }
    ctx->pc = 0x20C9E0u;
    SET_GPR_U32(ctx, 31, 0x20C9E8u);
    ctx->pc = 0x20C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9E0u;
    // 0x20c9e4: 0x2484e060  addiu       $a0, $a0, -0x1FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x20C9E8u;
label_20c9e8:
    // 0x20c9e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c9ec:
    // 0x20c9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c9f0:
    // 0x20c9f0: 0xc07aa94  jal         func_1EAA50
label_20c9f4:
    if (ctx->pc == 0x20C9F4u) {
        ctx->pc = 0x20C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9F0u;
        // 0x20c9f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C9F8u;
        goto label_20c9f8;
    }
    ctx->pc = 0x20C9F0u;
    SET_GPR_U32(ctx, 31, 0x20C9F8u);
    ctx->pc = 0x20C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9F0u;
    // 0x20c9f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x20C9F8u;
label_20c9f8:
    // 0x20c9f8: 0xc07ab08  jal         func_1EAC20
label_20c9fc:
    if (ctx->pc == 0x20C9FCu) {
        ctx->pc = 0x20C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9F8u;
        // 0x20c9fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA00u;
        goto label_20ca00;
    }
    ctx->pc = 0x20C9F8u;
    SET_GPR_U32(ctx, 31, 0x20CA00u);
    ctx->pc = 0x20C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9F8u;
    // 0x20c9fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x20CA00u;
label_20ca00:
    // 0x20ca00: 0x10000021  b           . + 4 + (0x21 << 2)
label_20ca04:
    if (ctx->pc == 0x20CA04u) {
        ctx->pc = 0x20CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA00u;
        // 0x20ca04: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA08u;
        goto label_20ca08;
    }
    ctx->pc = 0x20CA00u;
    {
        const bool branch_taken_0x20ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA00u;
        // 0x20ca04: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca00) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20CA08u;
label_20ca08:
    // 0x20ca08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20ca0c:
    // 0x20ca0c: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
label_20ca10:
    if (ctx->pc == 0x20CA10u) {
        ctx->pc = 0x20CA14u;
        goto label_20ca14;
    }
    ctx->pc = 0x20CA0Cu;
    {
        const bool branch_taken_0x20ca0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ca0c) {
            ctx->pc = 0x20CA68u;
            { ctx->pc = 0x20ca68; return; }
        }
    }
    ctx->pc = 0x20CA14u;
label_20ca14:
    // 0x20ca14: 0xc07ab38  jal         func_1EACE0
label_20ca18:
    if (ctx->pc == 0x20CA18u) {
        ctx->pc = 0x20CA1Cu;
        goto label_20ca1c;
    }
    ctx->pc = 0x20CA14u;
    SET_GPR_U32(ctx, 31, 0x20CA1Cu);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x20CA1Cu;
label_20ca1c:
    // 0x20ca1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20ca20:
    // 0x20ca20: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_20ca24:
    if (ctx->pc == 0x20CA24u) {
        ctx->pc = 0x20CA28u;
        goto label_20ca28;
    }
    ctx->pc = 0x20CA20u;
    {
        const bool branch_taken_0x20ca20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20ca20) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20CA28u;
label_20ca28:
    // 0x20ca28: 0xc07aaa4  jal         func_1EAA90
label_20ca2c:
    if (ctx->pc == 0x20CA2Cu) {
        ctx->pc = 0x20CA30u;
        goto label_20ca30;
    }
    ctx->pc = 0x20CA28u;
    SET_GPR_U32(ctx, 31, 0x20CA30u);
    ctx->pc = 0x1EAA90u;
    { ctx->pc = 0x1eaa90; return; }
    ctx->pc = 0x20CA30u;
label_20ca30:
    // 0x20ca30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20ca34:
    // 0x20ca34: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_20ca38:
    if (ctx->pc == 0x20CA38u) {
        ctx->pc = 0x20CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA34u;
        // 0x20ca38: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA3Cu;
        goto label_20ca3c;
    }
    ctx->pc = 0x20CA34u;
    {
        const bool branch_taken_0x20ca34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA34u;
        // 0x20ca38: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca34) {
            ctx->pc = 0x20CA50u;
            goto label_20ca50;
        }
    }
    ctx->pc = 0x20CA3Cu;
label_20ca3c:
    // 0x20ca3c: 0xc07ab18  jal         func_1EAC60
label_20ca40:
    if (ctx->pc == 0x20CA40u) {
        ctx->pc = 0x20CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA3Cu;
        // 0x20ca40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA44u;
        goto label_20ca44;
    }
    ctx->pc = 0x20CA3Cu;
    SET_GPR_U32(ctx, 31, 0x20CA44u);
    ctx->pc = 0x20CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA3Cu;
    // 0x20ca40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x20CA44u;
label_20ca44:
    // 0x20ca44: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_20ca48:
    if (ctx->pc == 0x20CA48u) {
        ctx->pc = 0x20CA4Cu;
        goto label_20ca4c;
    }
    ctx->pc = 0x20CA44u;
    {
        const bool branch_taken_0x20ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ca44) {
            ctx->pc = 0x20CCE8u;
            { ctx->pc = 0x20cce8; return; }
        }
    }
    ctx->pc = 0x20CA4Cu;
label_20ca4c:
    // 0x20ca4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20ca50:
    // 0x20ca50: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_20ca54:
    if (ctx->pc == 0x20CA54u) {
        ctx->pc = 0x20CA58u;
        goto label_20ca58;
    }
    ctx->pc = 0x20CA50u;
    {
        const bool branch_taken_0x20ca50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20ca50) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20CA58u;
label_20ca58:
    // 0x20ca58: 0xc07ab18  jal         func_1EAC60
label_20ca5c:
    if (ctx->pc == 0x20CA5Cu) {
        ctx->pc = 0x20CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA58u;
        // 0x20ca5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA60u;
        goto label_20ca60;
    }
    ctx->pc = 0x20CA58u;
    SET_GPR_U32(ctx, 31, 0x20CA60u);
    ctx->pc = 0x20CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA58u;
    // 0x20ca5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x20CA60u;
label_20ca60:
    // 0x20ca60: 0x10000009  b           . + 4 + (0x9 << 2)
label_20ca64:
    if (ctx->pc == 0x20CA64u) {
        ctx->pc = 0x20CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA60u;
        // 0x20ca64: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CA68u;
        { ctx->pc = 0x20ca68; return; }
    }
    ctx->pc = 0x20CA60u;
    {
        const bool branch_taken_0x20ca60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA60u;
        // 0x20ca64: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca60) {
            ctx->pc = 0x20CA88u;
            { ctx->pc = 0x20ca88; return; }
        }
    }
    ctx->pc = 0x20CA68u;
    ctx->pc = 0x20ca68u;
    return;
}
