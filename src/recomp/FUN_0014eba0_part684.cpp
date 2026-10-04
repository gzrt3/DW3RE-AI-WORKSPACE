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


void FUN_0014eba0_part684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29c390u: goto label_29c390;
        case 0x29c394u: goto label_29c394;
        case 0x29c398u: goto label_29c398;
        case 0x29c39cu: goto label_29c39c;
        case 0x29c3a0u: goto label_29c3a0;
        case 0x29c3a4u: goto label_29c3a4;
        case 0x29c3a8u: goto label_29c3a8;
        case 0x29c3acu: goto label_29c3ac;
        case 0x29c3b0u: goto label_29c3b0;
        case 0x29c3b4u: goto label_29c3b4;
        case 0x29c3b8u: goto label_29c3b8;
        case 0x29c3bcu: goto label_29c3bc;
        case 0x29c3c0u: goto label_29c3c0;
        case 0x29c3c4u: goto label_29c3c4;
        case 0x29c3c8u: goto label_29c3c8;
        case 0x29c3ccu: goto label_29c3cc;
        case 0x29c3d0u: goto label_29c3d0;
        case 0x29c3d4u: goto label_29c3d4;
        case 0x29c3d8u: goto label_29c3d8;
        case 0x29c3dcu: goto label_29c3dc;
        case 0x29c3e0u: goto label_29c3e0;
        case 0x29c3e4u: goto label_29c3e4;
        case 0x29c3e8u: goto label_29c3e8;
        case 0x29c3ecu: goto label_29c3ec;
        case 0x29c3f0u: goto label_29c3f0;
        case 0x29c3f4u: goto label_29c3f4;
        case 0x29c3f8u: goto label_29c3f8;
        case 0x29c3fcu: goto label_29c3fc;
        case 0x29c400u: goto label_29c400;
        case 0x29c404u: goto label_29c404;
        case 0x29c408u: goto label_29c408;
        case 0x29c40cu: goto label_29c40c;
        case 0x29c410u: goto label_29c410;
        case 0x29c414u: goto label_29c414;
        case 0x29c418u: goto label_29c418;
        case 0x29c41cu: goto label_29c41c;
        case 0x29c420u: goto label_29c420;
        case 0x29c424u: goto label_29c424;
        case 0x29c428u: goto label_29c428;
        case 0x29c42cu: goto label_29c42c;
        case 0x29c430u: goto label_29c430;
        case 0x29c434u: goto label_29c434;
        case 0x29c438u: goto label_29c438;
        case 0x29c43cu: goto label_29c43c;
        case 0x29c440u: goto label_29c440;
        case 0x29c444u: goto label_29c444;
        case 0x29c448u: goto label_29c448;
        case 0x29c44cu: goto label_29c44c;
        case 0x29c450u: goto label_29c450;
        case 0x29c454u: goto label_29c454;
        case 0x29c458u: goto label_29c458;
        case 0x29c45cu: goto label_29c45c;
        case 0x29c460u: goto label_29c460;
        case 0x29c464u: goto label_29c464;
        case 0x29c468u: goto label_29c468;
        case 0x29c46cu: goto label_29c46c;
        case 0x29c470u: goto label_29c470;
        case 0x29c474u: goto label_29c474;
        case 0x29c478u: goto label_29c478;
        case 0x29c47cu: goto label_29c47c;
        case 0x29c480u: goto label_29c480;
        case 0x29c484u: goto label_29c484;
        case 0x29c488u: goto label_29c488;
        case 0x29c48cu: goto label_29c48c;
        case 0x29c490u: goto label_29c490;
        case 0x29c494u: goto label_29c494;
        case 0x29c498u: goto label_29c498;
        case 0x29c49cu: goto label_29c49c;
        case 0x29c4a0u: goto label_29c4a0;
        case 0x29c4a4u: goto label_29c4a4;
        case 0x29c4a8u: goto label_29c4a8;
        case 0x29c4acu: goto label_29c4ac;
        case 0x29c4b0u: goto label_29c4b0;
        case 0x29c4b4u: goto label_29c4b4;
        case 0x29c4b8u: goto label_29c4b8;
        case 0x29c4bcu: goto label_29c4bc;
        case 0x29c4c0u: goto label_29c4c0;
        case 0x29c4c4u: goto label_29c4c4;
        case 0x29c4c8u: goto label_29c4c8;
        case 0x29c4ccu: goto label_29c4cc;
        case 0x29c4d0u: goto label_29c4d0;
        case 0x29c4d4u: goto label_29c4d4;
        case 0x29c4d8u: goto label_29c4d8;
        case 0x29c4dcu: goto label_29c4dc;
        case 0x29c4e0u: goto label_29c4e0;
        case 0x29c4e4u: goto label_29c4e4;
        case 0x29c4e8u: goto label_29c4e8;
        case 0x29c4ecu: goto label_29c4ec;
        case 0x29c4f0u: goto label_29c4f0;
        case 0x29c4f4u: goto label_29c4f4;
        case 0x29c4f8u: goto label_29c4f8;
        case 0x29c4fcu: goto label_29c4fc;
        case 0x29c500u: goto label_29c500;
        case 0x29c504u: goto label_29c504;
        case 0x29c508u: goto label_29c508;
        case 0x29c50cu: goto label_29c50c;
        case 0x29c510u: goto label_29c510;
        case 0x29c514u: goto label_29c514;
        case 0x29c518u: goto label_29c518;
        case 0x29c51cu: goto label_29c51c;
        case 0x29c520u: goto label_29c520;
        case 0x29c524u: goto label_29c524;
        case 0x29c528u: goto label_29c528;
        case 0x29c52cu: goto label_29c52c;
        case 0x29c530u: goto label_29c530;
        case 0x29c534u: goto label_29c534;
        case 0x29c538u: goto label_29c538;
        case 0x29c53cu: goto label_29c53c;
        case 0x29c540u: goto label_29c540;
        case 0x29c544u: goto label_29c544;
        case 0x29c548u: goto label_29c548;
        case 0x29c54cu: goto label_29c54c;
        case 0x29c550u: goto label_29c550;
        case 0x29c554u: goto label_29c554;
        case 0x29c558u: goto label_29c558;
        case 0x29c55cu: goto label_29c55c;
        case 0x29c560u: goto label_29c560;
        case 0x29c564u: goto label_29c564;
        case 0x29c568u: goto label_29c568;
        case 0x29c56cu: goto label_29c56c;
        case 0x29c570u: goto label_29c570;
        case 0x29c574u: goto label_29c574;
        case 0x29c578u: goto label_29c578;
        case 0x29c57cu: goto label_29c57c;
        case 0x29c580u: goto label_29c580;
        case 0x29c584u: goto label_29c584;
        case 0x29c588u: goto label_29c588;
        case 0x29c58cu: goto label_29c58c;
        case 0x29c590u: goto label_29c590;
        case 0x29c594u: goto label_29c594;
        case 0x29c598u: goto label_29c598;
        case 0x29c59cu: goto label_29c59c;
        case 0x29c5a0u: goto label_29c5a0;
        case 0x29c5a4u: goto label_29c5a4;
        case 0x29c5a8u: goto label_29c5a8;
        case 0x29c5acu: goto label_29c5ac;
        case 0x29c5b0u: goto label_29c5b0;
        case 0x29c5b4u: goto label_29c5b4;
        case 0x29c5b8u: goto label_29c5b8;
        case 0x29c5bcu: goto label_29c5bc;
        case 0x29c5c0u: goto label_29c5c0;
        case 0x29c5c4u: goto label_29c5c4;
        case 0x29c5c8u: goto label_29c5c8;
        case 0x29c5ccu: goto label_29c5cc;
        case 0x29c5d0u: goto label_29c5d0;
        case 0x29c5d4u: goto label_29c5d4;
        case 0x29c5d8u: goto label_29c5d8;
        case 0x29c5dcu: goto label_29c5dc;
        case 0x29c5e0u: goto label_29c5e0;
        case 0x29c5e4u: goto label_29c5e4;
        case 0x29c5e8u: goto label_29c5e8;
        case 0x29c5ecu: goto label_29c5ec;
        case 0x29c5f0u: goto label_29c5f0;
        case 0x29c5f4u: goto label_29c5f4;
        case 0x29c5f8u: goto label_29c5f8;
        case 0x29c5fcu: goto label_29c5fc;
        case 0x29c600u: goto label_29c600;
        case 0x29c604u: goto label_29c604;
        case 0x29c608u: goto label_29c608;
        case 0x29c60cu: goto label_29c60c;
        case 0x29c610u: goto label_29c610;
        case 0x29c614u: goto label_29c614;
        case 0x29c618u: goto label_29c618;
        case 0x29c61cu: goto label_29c61c;
        case 0x29c620u: goto label_29c620;
        case 0x29c624u: goto label_29c624;
        case 0x29c628u: goto label_29c628;
        case 0x29c62cu: goto label_29c62c;
        case 0x29c630u: goto label_29c630;
        case 0x29c634u: goto label_29c634;
        case 0x29c638u: goto label_29c638;
        case 0x29c63cu: goto label_29c63c;
        case 0x29c640u: goto label_29c640;
        case 0x29c644u: goto label_29c644;
        case 0x29c648u: goto label_29c648;
        case 0x29c64cu: goto label_29c64c;
        case 0x29c650u: goto label_29c650;
        case 0x29c654u: goto label_29c654;
        case 0x29c658u: goto label_29c658;
        case 0x29c65cu: goto label_29c65c;
        case 0x29c660u: goto label_29c660;
        case 0x29c664u: goto label_29c664;
        case 0x29c668u: goto label_29c668;
        case 0x29c66cu: goto label_29c66c;
        case 0x29c670u: goto label_29c670;
        case 0x29c674u: goto label_29c674;
        case 0x29c678u: goto label_29c678;
        case 0x29c67cu: goto label_29c67c;
        case 0x29c680u: goto label_29c680;
        case 0x29c684u: goto label_29c684;
        case 0x29c688u: goto label_29c688;
        case 0x29c68cu: goto label_29c68c;
        case 0x29c690u: goto label_29c690;
        case 0x29c694u: goto label_29c694;
        case 0x29c698u: goto label_29c698;
        case 0x29c69cu: goto label_29c69c;
        case 0x29c6a0u: goto label_29c6a0;
        case 0x29c6a4u: goto label_29c6a4;
        case 0x29c6a8u: goto label_29c6a8;
        case 0x29c6acu: goto label_29c6ac;
        case 0x29c6b0u: goto label_29c6b0;
        case 0x29c6b4u: goto label_29c6b4;
        case 0x29c6b8u: goto label_29c6b8;
        case 0x29c6bcu: goto label_29c6bc;
        case 0x29c6c0u: goto label_29c6c0;
        case 0x29c6c4u: goto label_29c6c4;
        case 0x29c6c8u: goto label_29c6c8;
        case 0x29c6ccu: goto label_29c6cc;
        case 0x29c6d0u: goto label_29c6d0;
        case 0x29c6d4u: goto label_29c6d4;
        case 0x29c6d8u: goto label_29c6d8;
        case 0x29c6dcu: goto label_29c6dc;
        case 0x29c6e0u: goto label_29c6e0;
        case 0x29c6e4u: goto label_29c6e4;
        case 0x29c6e8u: goto label_29c6e8;
        case 0x29c6ecu: goto label_29c6ec;
        case 0x29c6f0u: goto label_29c6f0;
        case 0x29c6f4u: goto label_29c6f4;
        case 0x29c6f8u: goto label_29c6f8;
        case 0x29c6fcu: goto label_29c6fc;
        case 0x29c700u: goto label_29c700;
        case 0x29c704u: goto label_29c704;
        case 0x29c708u: goto label_29c708;
        case 0x29c70cu: goto label_29c70c;
        case 0x29c710u: goto label_29c710;
        case 0x29c714u: goto label_29c714;
        case 0x29c718u: goto label_29c718;
        case 0x29c71cu: goto label_29c71c;
        case 0x29c720u: goto label_29c720;
        case 0x29c724u: goto label_29c724;
        case 0x29c728u: goto label_29c728;
        case 0x29c72cu: goto label_29c72c;
        case 0x29c730u: goto label_29c730;
        case 0x29c734u: goto label_29c734;
        case 0x29c738u: goto label_29c738;
        case 0x29c73cu: goto label_29c73c;
        case 0x29c740u: goto label_29c740;
        case 0x29c744u: goto label_29c744;
        case 0x29c748u: goto label_29c748;
        case 0x29c74cu: goto label_29c74c;
        case 0x29c750u: goto label_29c750;
        case 0x29c754u: goto label_29c754;
        case 0x29c758u: goto label_29c758;
        case 0x29c75cu: goto label_29c75c;
        case 0x29c760u: goto label_29c760;
        case 0x29c764u: goto label_29c764;
        case 0x29c768u: goto label_29c768;
        case 0x29c76cu: goto label_29c76c;
        case 0x29c770u: goto label_29c770;
        case 0x29c774u: goto label_29c774;
        case 0x29c778u: goto label_29c778;
        case 0x29c77cu: goto label_29c77c;
        case 0x29c780u: goto label_29c780;
        case 0x29c784u: goto label_29c784;
        case 0x29c788u: goto label_29c788;
        case 0x29c78cu: goto label_29c78c;
        case 0x29c790u: goto label_29c790;
        case 0x29c794u: goto label_29c794;
        case 0x29c798u: goto label_29c798;
        case 0x29c79cu: goto label_29c79c;
        case 0x29c7a0u: goto label_29c7a0;
        case 0x29c7a4u: goto label_29c7a4;
        case 0x29c7a8u: goto label_29c7a8;
        case 0x29c7acu: goto label_29c7ac;
        case 0x29c7b0u: goto label_29c7b0;
        case 0x29c7b4u: goto label_29c7b4;
        case 0x29c7b8u: goto label_29c7b8;
        case 0x29c7bcu: goto label_29c7bc;
        case 0x29c7c0u: goto label_29c7c0;
        case 0x29c7c4u: goto label_29c7c4;
        case 0x29c7c8u: goto label_29c7c8;
        case 0x29c7ccu: goto label_29c7cc;
        case 0x29c7d0u: goto label_29c7d0;
        case 0x29c7d4u: goto label_29c7d4;
        case 0x29c7d8u: goto label_29c7d8;
        case 0x29c7dcu: goto label_29c7dc;
        case 0x29c7e0u: goto label_29c7e0;
        case 0x29c7e4u: goto label_29c7e4;
        case 0x29c7e8u: goto label_29c7e8;
        case 0x29c7ecu: goto label_29c7ec;
        case 0x29c7f0u: goto label_29c7f0;
        case 0x29c7f4u: goto label_29c7f4;
        case 0x29c7f8u: goto label_29c7f8;
        case 0x29c7fcu: goto label_29c7fc;
        case 0x29c800u: goto label_29c800;
        case 0x29c804u: goto label_29c804;
        case 0x29c808u: goto label_29c808;
        case 0x29c80cu: goto label_29c80c;
        case 0x29c810u: goto label_29c810;
        case 0x29c814u: goto label_29c814;
        case 0x29c818u: goto label_29c818;
        case 0x29c81cu: goto label_29c81c;
        case 0x29c820u: goto label_29c820;
        case 0x29c824u: goto label_29c824;
        case 0x29c828u: goto label_29c828;
        case 0x29c82cu: goto label_29c82c;
        case 0x29c830u: goto label_29c830;
        case 0x29c834u: goto label_29c834;
        case 0x29c838u: goto label_29c838;
        case 0x29c83cu: goto label_29c83c;
        case 0x29c840u: goto label_29c840;
        case 0x29c844u: goto label_29c844;
        case 0x29c848u: goto label_29c848;
        case 0x29c84cu: goto label_29c84c;
        case 0x29c850u: goto label_29c850;
        case 0x29c854u: goto label_29c854;
        case 0x29c858u: goto label_29c858;
        case 0x29c85cu: goto label_29c85c;
        case 0x29c860u: goto label_29c860;
        case 0x29c864u: goto label_29c864;
        case 0x29c868u: goto label_29c868;
        case 0x29c86cu: goto label_29c86c;
        case 0x29c870u: goto label_29c870;
        case 0x29c874u: goto label_29c874;
        case 0x29c878u: goto label_29c878;
        case 0x29c87cu: goto label_29c87c;
        case 0x29c880u: goto label_29c880;
        case 0x29c884u: goto label_29c884;
        case 0x29c888u: goto label_29c888;
        case 0x29c88cu: goto label_29c88c;
        case 0x29c890u: goto label_29c890;
        case 0x29c894u: goto label_29c894;
        case 0x29c898u: goto label_29c898;
        case 0x29c89cu: goto label_29c89c;
        case 0x29c8a0u: goto label_29c8a0;
        case 0x29c8a4u: goto label_29c8a4;
        case 0x29c8a8u: goto label_29c8a8;
        case 0x29c8acu: goto label_29c8ac;
        case 0x29c8b0u: goto label_29c8b0;
        case 0x29c8b4u: goto label_29c8b4;
        case 0x29c8b8u: goto label_29c8b8;
        case 0x29c8bcu: goto label_29c8bc;
        case 0x29c8c0u: goto label_29c8c0;
        case 0x29c8c4u: goto label_29c8c4;
        case 0x29c8c8u: goto label_29c8c8;
        case 0x29c8ccu: goto label_29c8cc;
        case 0x29c8d0u: goto label_29c8d0;
        case 0x29c8d4u: goto label_29c8d4;
        case 0x29c8d8u: goto label_29c8d8;
        case 0x29c8dcu: goto label_29c8dc;
        case 0x29c8e0u: goto label_29c8e0;
        case 0x29c8e4u: goto label_29c8e4;
        case 0x29c8e8u: goto label_29c8e8;
        case 0x29c8ecu: goto label_29c8ec;
        case 0x29c8f0u: goto label_29c8f0;
        case 0x29c8f4u: goto label_29c8f4;
        case 0x29c8f8u: goto label_29c8f8;
        case 0x29c8fcu: goto label_29c8fc;
        case 0x29c900u: goto label_29c900;
        case 0x29c904u: goto label_29c904;
        case 0x29c908u: goto label_29c908;
        case 0x29c90cu: goto label_29c90c;
        case 0x29c910u: goto label_29c910;
        case 0x29c914u: goto label_29c914;
        case 0x29c918u: goto label_29c918;
        case 0x29c91cu: goto label_29c91c;
        case 0x29c920u: goto label_29c920;
        case 0x29c924u: goto label_29c924;
        case 0x29c928u: goto label_29c928;
        case 0x29c92cu: goto label_29c92c;
        case 0x29c930u: goto label_29c930;
        case 0x29c934u: goto label_29c934;
        case 0x29c938u: goto label_29c938;
        case 0x29c93cu: goto label_29c93c;
        case 0x29c940u: goto label_29c940;
        case 0x29c944u: goto label_29c944;
        case 0x29c948u: goto label_29c948;
        case 0x29c94cu: goto label_29c94c;
        case 0x29c950u: goto label_29c950;
        case 0x29c954u: goto label_29c954;
        case 0x29c958u: goto label_29c958;
        case 0x29c95cu: goto label_29c95c;
        case 0x29c960u: goto label_29c960;
        case 0x29c964u: goto label_29c964;
        case 0x29c968u: goto label_29c968;
        case 0x29c96cu: goto label_29c96c;
        case 0x29c970u: goto label_29c970;
        case 0x29c974u: goto label_29c974;
        case 0x29c978u: goto label_29c978;
        case 0x29c97cu: goto label_29c97c;
        case 0x29c980u: goto label_29c980;
        case 0x29c984u: goto label_29c984;
        case 0x29c988u: goto label_29c988;
        case 0x29c98cu: goto label_29c98c;
        case 0x29c990u: goto label_29c990;
        case 0x29c994u: goto label_29c994;
        case 0x29c998u: goto label_29c998;
        case 0x29c99cu: goto label_29c99c;
        case 0x29c9a0u: goto label_29c9a0;
        case 0x29c9a4u: goto label_29c9a4;
        case 0x29c9a8u: goto label_29c9a8;
        case 0x29c9acu: goto label_29c9ac;
        case 0x29c9b0u: goto label_29c9b0;
        case 0x29c9b4u: goto label_29c9b4;
        case 0x29c9b8u: goto label_29c9b8;
        case 0x29c9bcu: goto label_29c9bc;
        case 0x29c9c0u: goto label_29c9c0;
        case 0x29c9c4u: goto label_29c9c4;
        case 0x29c9c8u: goto label_29c9c8;
        case 0x29c9ccu: goto label_29c9cc;
        case 0x29c9d0u: goto label_29c9d0;
        case 0x29c9d4u: goto label_29c9d4;
        case 0x29c9d8u: goto label_29c9d8;
        case 0x29c9dcu: goto label_29c9dc;
        case 0x29c9e0u: goto label_29c9e0;
        case 0x29c9e4u: goto label_29c9e4;
        case 0x29c9e8u: goto label_29c9e8;
        case 0x29c9ecu: goto label_29c9ec;
        case 0x29c9f0u: goto label_29c9f0;
        case 0x29c9f4u: goto label_29c9f4;
        case 0x29c9f8u: goto label_29c9f8;
        case 0x29c9fcu: goto label_29c9fc;
        case 0x29ca00u: goto label_29ca00;
        case 0x29ca04u: goto label_29ca04;
        case 0x29ca08u: goto label_29ca08;
        case 0x29ca0cu: goto label_29ca0c;
        case 0x29ca10u: goto label_29ca10;
        case 0x29ca14u: goto label_29ca14;
        case 0x29ca18u: goto label_29ca18;
        case 0x29ca1cu: goto label_29ca1c;
        case 0x29ca20u: goto label_29ca20;
        case 0x29ca24u: goto label_29ca24;
        case 0x29ca28u: goto label_29ca28;
        case 0x29ca2cu: goto label_29ca2c;
        case 0x29ca30u: goto label_29ca30;
        case 0x29ca34u: goto label_29ca34;
        case 0x29ca38u: goto label_29ca38;
        case 0x29ca3cu: goto label_29ca3c;
        case 0x29ca40u: goto label_29ca40;
        case 0x29ca44u: goto label_29ca44;
        case 0x29ca48u: goto label_29ca48;
        case 0x29ca4cu: goto label_29ca4c;
        case 0x29ca50u: goto label_29ca50;
        case 0x29ca54u: goto label_29ca54;
        case 0x29ca58u: goto label_29ca58;
        case 0x29ca5cu: goto label_29ca5c;
        case 0x29ca60u: goto label_29ca60;
        case 0x29ca64u: goto label_29ca64;
        case 0x29ca68u: goto label_29ca68;
        case 0x29ca6cu: goto label_29ca6c;
        case 0x29ca70u: goto label_29ca70;
        case 0x29ca74u: goto label_29ca74;
        case 0x29ca78u: goto label_29ca78;
        case 0x29ca7cu: goto label_29ca7c;
        case 0x29ca80u: goto label_29ca80;
        case 0x29ca84u: goto label_29ca84;
        case 0x29ca88u: goto label_29ca88;
        case 0x29ca8cu: goto label_29ca8c;
        case 0x29ca90u: goto label_29ca90;
        case 0x29ca94u: goto label_29ca94;
        case 0x29ca98u: goto label_29ca98;
        case 0x29ca9cu: goto label_29ca9c;
        case 0x29caa0u: goto label_29caa0;
        case 0x29caa4u: goto label_29caa4;
        case 0x29caa8u: goto label_29caa8;
        case 0x29caacu: goto label_29caac;
        case 0x29cab0u: goto label_29cab0;
        case 0x29cab4u: goto label_29cab4;
        case 0x29cab8u: goto label_29cab8;
        case 0x29cabcu: goto label_29cabc;
        case 0x29cac0u: goto label_29cac0;
        case 0x29cac4u: goto label_29cac4;
        case 0x29cac8u: goto label_29cac8;
        case 0x29caccu: goto label_29cacc;
        case 0x29cad0u: goto label_29cad0;
        case 0x29cad4u: goto label_29cad4;
        case 0x29cad8u: goto label_29cad8;
        case 0x29cadcu: goto label_29cadc;
        case 0x29cae0u: goto label_29cae0;
        case 0x29cae4u: goto label_29cae4;
        case 0x29cae8u: goto label_29cae8;
        case 0x29caecu: goto label_29caec;
        case 0x29caf0u: goto label_29caf0;
        case 0x29caf4u: goto label_29caf4;
        case 0x29caf8u: goto label_29caf8;
        case 0x29cafcu: goto label_29cafc;
        case 0x29cb00u: goto label_29cb00;
        case 0x29cb04u: goto label_29cb04;
        case 0x29cb08u: goto label_29cb08;
        case 0x29cb0cu: goto label_29cb0c;
        case 0x29cb10u: goto label_29cb10;
        case 0x29cb14u: goto label_29cb14;
        case 0x29cb18u: goto label_29cb18;
        case 0x29cb1cu: goto label_29cb1c;
        case 0x29cb20u: goto label_29cb20;
        case 0x29cb24u: goto label_29cb24;
        case 0x29cb28u: goto label_29cb28;
        case 0x29cb2cu: goto label_29cb2c;
        case 0x29cb30u: goto label_29cb30;
        case 0x29cb34u: goto label_29cb34;
        case 0x29cb38u: goto label_29cb38;
        case 0x29cb3cu: goto label_29cb3c;
        case 0x29cb40u: goto label_29cb40;
        case 0x29cb44u: goto label_29cb44;
        case 0x29cb48u: goto label_29cb48;
        case 0x29cb4cu: goto label_29cb4c;
        case 0x29cb50u: goto label_29cb50;
        case 0x29cb54u: goto label_29cb54;
        case 0x29cb58u: goto label_29cb58;
        case 0x29cb5cu: goto label_29cb5c;
        default: return;
    }

label_29c390:
    // 0x29c390: 0x3576e  .word       0x0003576E                   # dsub        $t2, $zero, $v1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c390u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_29c394:
    // 0x29c394: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c394u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C394 raw=0x0000003D");
 /* MITIGATED */
label_29c398:
    // 0x29c398: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c398u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c39c:
    // 0x29c39c: 0x0  nop
    ctx->pc = 0x29c39cu;
    // NOP
label_29c3a0:
    // 0x29c3a0: 0x357ab  .word       0x000357AB                   # sltu        $t2, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3a0u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29c3a4:
    // 0x29c3a4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3A4 raw=0x0000003D");
 /* MITIGATED */
label_29c3a8:
    // 0x29c3a8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3a8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3ac:
    // 0x29c3ac: 0x0  nop
    ctx->pc = 0x29c3acu;
    // NOP
label_29c3b0:
    // 0x29c3b0: 0x357e8  .word       0x000357E8                   # mfsa        $t2 # 000307C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29c3b0u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_29c3b4:
    // 0x29c3b4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3B4 raw=0x0000003D");
 /* MITIGATED */
label_29c3b8:
    // 0x29c3b8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3b8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3bc:
    // 0x29c3bc: 0x0  nop
    ctx->pc = 0x29c3bcu;
    // NOP
label_29c3c0:
    // 0x29c3c0: 0x35825  or          $t3, $zero, $v1
    ctx->pc = 0x29c3c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29c3c4:
    // 0x29c3c4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3C4 raw=0x0000003D");
 /* MITIGATED */
label_29c3c8:
    // 0x29c3c8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3c8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3cc:
    // 0x29c3cc: 0x0  nop
    ctx->pc = 0x29c3ccu;
    // NOP
label_29c3d0:
    // 0x29c3d0: 0x35862  .word       0x00035862                   # neg         $t3, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_29c3d4:
    // 0x29c3d4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3d4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3D4 raw=0x0000003D");
 /* MITIGATED */
label_29c3d8:
    // 0x29c3d8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3d8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3dc:
    // 0x29c3dc: 0x0  nop
    ctx->pc = 0x29c3dcu;
    // NOP
label_29c3e0:
    // 0x29c3e0: 0x3589f  .word       0x0003589F                   # ddivu       $t3, $zero, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29C3E0 raw=0x0003589F");
 /* MITIGATED */
label_29c3e4:
    // 0x29c3e4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3E4 raw=0x0000003D");
 /* MITIGATED */
label_29c3e8:
    // 0x29c3e8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3e8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3ec:
    // 0x29c3ec: 0x0  nop
    ctx->pc = 0x29c3ecu;
    // NOP
label_29c3f0:
    // 0x29c3f0: 0x358dc  .word       0x000358DC                   # dmult       $zero, $v1 # 000058C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29C3F0 raw=0x000358DC");
 /* MITIGATED */
label_29c3f4:
    // 0x29c3f4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c3f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C3F4 raw=0x0000003D");
 /* MITIGATED */
label_29c3f8:
    // 0x29c3f8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c3f8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c3fc:
    // 0x29c3fc: 0x0  nop
    ctx->pc = 0x29c3fcu;
    // NOP
label_29c400:
    // 0x29c400: 0x35919  .word       0x00035919                   # multu       $zero, $v1 # 00005900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c400u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_29c404:
    // 0x29c404: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c404u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C404 raw=0x0000003D");
 /* MITIGATED */
label_29c408:
    // 0x29c408: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c408u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c40c:
    // 0x29c40c: 0x0  nop
    ctx->pc = 0x29c40cu;
    // NOP
label_29c410:
    // 0x29c410: 0x35956  .word       0x00035956                   # dsrlv       $t3, $v1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c410u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29c414:
    // 0x29c414: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c414u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C414 raw=0x0000003D");
 /* MITIGATED */
label_29c418:
    // 0x29c418: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c418u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c41c:
    // 0x29c41c: 0x0  nop
    ctx->pc = 0x29c41cu;
    // NOP
label_29c420:
    // 0x29c420: 0x35993  .word       0x00035993                   # mtlo        $zero # 00035980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c420u;
    ctx->lo = GPR_U64(ctx, 0);
label_29c424:
    // 0x29c424: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c424u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C424 raw=0x0000003D");
 /* MITIGATED */
label_29c428:
    // 0x29c428: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c428u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c42c:
    // 0x29c42c: 0x0  nop
    ctx->pc = 0x29c42cu;
    // NOP
label_29c430:
    // 0x29c430: 0x359d0  .word       0x000359D0                   # mfhi        $t3 # 000301C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c430u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29c434:
    // 0x29c434: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c434u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C434 raw=0x0000003D");
 /* MITIGATED */
label_29c438:
    // 0x29c438: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c438u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c43c:
    // 0x29c43c: 0x0  nop
    ctx->pc = 0x29c43cu;
    // NOP
label_29c440:
    // 0x29c440: 0x35a0d  break       3, 360
    ctx->pc = 0x29c440u;
    runtime->handleBreak(rdram, ctx);
label_29c444:
    // 0x29c444: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c444u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C444 raw=0x0000003D");
 /* MITIGATED */
label_29c448:
    // 0x29c448: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c448u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c44c:
    // 0x29c44c: 0x0  nop
    ctx->pc = 0x29c44cu;
    // NOP
label_29c450:
    // 0x29c450: 0x35a4a  .word       0x00035A4A                   # movz        $t3, $zero, $v1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c450u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_29c454:
    // 0x29c454: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c454u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C454 raw=0x0000003D");
 /* MITIGATED */
label_29c458:
    // 0x29c458: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c458u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c45c:
    // 0x29c45c: 0x0  nop
    ctx->pc = 0x29c45cu;
    // NOP
label_29c460:
    // 0x29c460: 0x35a87  .word       0x00035A87                   # srav        $t3, $v1, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c460u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29c464:
    // 0x29c464: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c464u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C464 raw=0x0000003D");
 /* MITIGATED */
label_29c468:
    // 0x29c468: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c468u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c46c:
    // 0x29c46c: 0x0  nop
    ctx->pc = 0x29c46cu;
    // NOP
label_29c470:
    // 0x29c470: 0x35ac4  .word       0x00035AC4                   # sllv        $t3, $v1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c470u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29c474:
    // 0x29c474: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c474u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C474 raw=0x0000003D");
 /* MITIGATED */
label_29c478:
    // 0x29c478: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c478u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c47c:
    // 0x29c47c: 0x0  nop
    ctx->pc = 0x29c47cu;
    // NOP
label_29c480:
    // 0x29c480: 0x35b01  .word       0x00035B01                   # INVALID     $zero, $v1, 0x5B01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c480u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29C480 raw=0x00035B01");
 /* MITIGATED */
label_29c484:
    // 0x29c484: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c484u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C484 raw=0x0000003D");
 /* MITIGATED */
label_29c488:
    // 0x29c488: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c488u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c48c:
    // 0x29c48c: 0x0  nop
    ctx->pc = 0x29c48cu;
    // NOP
label_29c490:
    // 0x29c490: 0x35b3e  dsrl32      $t3, $v1, 12
    ctx->pc = 0x29c490u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) >> (32 + 12));
label_29c494:
    // 0x29c494: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c494u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C494 raw=0x0000003D");
 /* MITIGATED */
label_29c498:
    // 0x29c498: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c498u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c49c:
    // 0x29c49c: 0x0  nop
    ctx->pc = 0x29c49cu;
    // NOP
label_29c4a0:
    // 0x29c4a0: 0x35b7b  dsra        $t3, $v1, 13
    ctx->pc = 0x29c4a0u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 3) >> 13);
label_29c4a4:
    // 0x29c4a4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4A4 raw=0x0000003D");
 /* MITIGATED */
label_29c4a8:
    // 0x29c4a8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4a8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4ac:
    // 0x29c4ac: 0x0  nop
    ctx->pc = 0x29c4acu;
    // NOP
label_29c4b0:
    // 0x29c4b0: 0x35bb8  dsll        $t3, $v1, 14
    ctx->pc = 0x29c4b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 14);
label_29c4b4:
    // 0x29c4b4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4B4 raw=0x0000003D");
 /* MITIGATED */
label_29c4b8:
    // 0x29c4b8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4b8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4bc:
    // 0x29c4bc: 0x0  nop
    ctx->pc = 0x29c4bcu;
    // NOP
label_29c4c0:
    // 0x29c4c0: 0x35bf5  .word       0x00035BF5                   # INVALID     $zero, $v1, 0x5BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29C4C0 raw=0x00035BF5");
 /* MITIGATED */
label_29c4c4:
    // 0x29c4c4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4C4 raw=0x0000003D");
 /* MITIGATED */
label_29c4c8:
    // 0x29c4c8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4c8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4cc:
    // 0x29c4cc: 0x0  nop
    ctx->pc = 0x29c4ccu;
    // NOP
label_29c4d0:
    // 0x29c4d0: 0x35c32  tlt         $zero, $v1, 368
    ctx->pc = 0x29c4d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c4d4:
    // 0x29c4d4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4d4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4D4 raw=0x0000003D");
 /* MITIGATED */
label_29c4d8:
    // 0x29c4d8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4d8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4dc:
    // 0x29c4dc: 0x0  nop
    ctx->pc = 0x29c4dcu;
    // NOP
label_29c4e0:
    // 0x29c4e0: 0x35c6f  .word       0x00035C6F                   # dsubu       $t3, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29c4e4:
    // 0x29c4e4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4E4 raw=0x0000003D");
 /* MITIGATED */
label_29c4e8:
    // 0x29c4e8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4e8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4ec:
    // 0x29c4ec: 0x0  nop
    ctx->pc = 0x29c4ecu;
    // NOP
label_29c4f0:
    // 0x29c4f0: 0x35cac  .word       0x00035CAC                   # dadd        $t3, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_29c4f4:
    // 0x29c4f4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c4f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C4F4 raw=0x0000003D");
 /* MITIGATED */
label_29c4f8:
    // 0x29c4f8: 0x1e440  sll         $gp, $at, 17
    ctx->pc = 0x29c4f8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29c4fc:
    // 0x29c4fc: 0x0  nop
    ctx->pc = 0x29c4fcu;
    // NOP
label_29c500:
    // 0x29c500: 0x35ce9  .word       0x00035CE9                   # mtsa        $zero # 00035CC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29c500u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29c504:
    // 0x29c504: 0x27  not         $zero, $zero
    ctx->pc = 0x29c504u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c508:
    // 0x29c508: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c508u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c50c:
    // 0x29c50c: 0x0  nop
    ctx->pc = 0x29c50cu;
    // NOP
label_29c510:
    // 0x29c510: 0x35d10  .word       0x00035D10                   # mfhi        $t3 # 00030500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c510u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29c514:
    // 0x29c514: 0x27  not         $zero, $zero
    ctx->pc = 0x29c514u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29c518:
    // 0x29c518: 0x13040  sll         $a2, $at, 1
    ctx->pc = 0x29c518u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29c51c:
    // 0x29c51c: 0x0  nop
    ctx->pc = 0x29c51cu;
    // NOP
label_29c520:
    // 0x29c520: 0x35d37  .word       0x00035D37                   # INVALID     $zero, $v1, 0x5D37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c520u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29C520 raw=0x00035D37");
 /* MITIGATED */
label_29c524:
    // 0x29c524: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c524u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c528:
    // 0x29c528: 0x1e00  sll         $v1, $zero, 24
    ctx->pc = 0x29c528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_29c52c:
    // 0x29c52c: 0x0  nop
    ctx->pc = 0x29c52cu;
    // NOP
label_29c530:
    // 0x29c530: 0x35d3b  dsra        $t3, $v1, 20
    ctx->pc = 0x29c530u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 3) >> 20);
label_29c534:
    // 0x29c534: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c534u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c538:
    // 0x29c538: 0x1990  .word       0x00001990                   # mfhi        $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c538u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29c53c:
    // 0x29c53c: 0x0  nop
    ctx->pc = 0x29c53cu;
    // NOP
label_29c540:
    // 0x29c540: 0x35d3f  dsra32      $t3, $v1, 20
    ctx->pc = 0x29c540u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 3) >> (32 + 20));
label_29c544:
    // 0x29c544: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29c544u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c548:
    // 0x29c548: 0x28e0  .word       0x000028E0                   # add         $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c548u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_29c54c:
    // 0x29c54c: 0x0  nop
    ctx->pc = 0x29c54cu;
    // NOP
label_29c550:
    // 0x29c550: 0x35d45  .word       0x00035D45                   # INVALID     $zero, $v1, 0x5D45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c550u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29C550 raw=0x00035D45");
 /* MITIGATED */
label_29c554:
    // 0x29c554: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29c554u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29c558:
    // 0x29c558: 0x1080  sll         $v0, $zero, 2
    ctx->pc = 0x29c558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_29c55c:
    // 0x29c55c: 0x0  nop
    ctx->pc = 0x29c55cu;
    // NOP
label_29c560:
    // 0x29c560: 0x35d48  .word       0x00035D48                   # jr          $zero # 00035D40 <InstrIdType: CPU_SPECIAL>
label_29c564:
    if (ctx->pc == 0x29C564u) {
        ctx->pc = 0x29C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C560u;
        // 0x29c564: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C568u;
        goto label_29c568;
    }
    ctx->pc = 0x29C560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C560u;
        // 0x29c564: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C560u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29C568u;
label_29c568:
    // 0x29c568: 0x1950  .word       0x00001950                   # mfhi        $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c568u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29c56c:
    // 0x29c56c: 0x0  nop
    ctx->pc = 0x29c56cu;
    // NOP
label_29c570:
    // 0x29c570: 0x35d4c  .word       0x00035D4C                   # syscall     373 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c570u;
    ctx->pc = 0x29C574u;
runtime->handleSyscall(rdram, ctx, 0xD75u);
label_29c574:
    // 0x29c574: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29c574u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29c578:
    // 0x29c578: 0x16a0  .word       0x000016A0                   # add         $v0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c578u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29c57c:
    // 0x29c57c: 0x0  nop
    ctx->pc = 0x29c57cu;
    // NOP
label_29c580:
    // 0x29c580: 0x35d4f  .word       0x00035D4F                   # sync.p # 00035800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c580u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29c584:
    // 0x29c584: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29c584u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c588:
    // 0x29c588: 0x2bd0  .word       0x00002BD0                   # mfhi        $a1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c588u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29c58c:
    // 0x29c58c: 0x0  nop
    ctx->pc = 0x29c58cu;
    // NOP
label_29c590:
    // 0x29c590: 0x35d55  .word       0x00035D55                   # INVALID     $zero, $v1, 0x5D55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c590u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29C590 raw=0x00035D55");
 /* MITIGATED */
label_29c594:
    // 0x29c594: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c594u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c598:
    // 0x29c598: 0x1c90  .word       0x00001C90                   # mfhi        $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c598u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29c59c:
    // 0x29c59c: 0x0  nop
    ctx->pc = 0x29c59cu;
    // NOP
label_29c5a0:
    // 0x29c5a0: 0x35d59  .word       0x00035D59                   # multu       $zero, $v1 # 00005D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c5a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_29c5a4:
    // 0x29c5a4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c5a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c5a8:
    // 0x29c5a8: 0x1c80  sll         $v1, $zero, 18
    ctx->pc = 0x29c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29c5ac:
    // 0x29c5ac: 0x0  nop
    ctx->pc = 0x29c5acu;
    // NOP
label_29c5b0:
    // 0x29c5b0: 0x35d5d  .word       0x00035D5D                   # dmultu      $zero, $v1 # 00005D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c5b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29C5B0 raw=0x00035D5D");
 /* MITIGATED */
label_29c5b4:
    // 0x29c5b4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29c5b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c5b8:
    // 0x29c5b8: 0x2bf0  tge         $zero, $zero, 175
    ctx->pc = 0x29c5b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29c5bc:
    // 0x29c5bc: 0x0  nop
    ctx->pc = 0x29c5bcu;
    // NOP
label_29c5c0:
    // 0x29c5c0: 0x35d63  .word       0x00035D63                   # negu        $t3, $v1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c5c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29c5c4:
    // 0x29c5c4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c5c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29C5C4 raw=0x00000005");
 /* MITIGATED */
label_29c5c8:
    // 0x29c5c8: 0x25b0  tge         $zero, $zero, 150
    ctx->pc = 0x29c5c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29c5cc:
    // 0x29c5cc: 0x0  nop
    ctx->pc = 0x29c5ccu;
    // NOP
label_29c5d0:
    // 0x29c5d0: 0x35d68  .word       0x00035D68                   # mfsa        $t3 # 00030540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29c5d0u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_29c5d4:
    // 0x29c5d4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29c5d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c5d8:
    // 0x29c5d8: 0x28e0  .word       0x000028E0                   # add         $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c5d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_29c5dc:
    // 0x29c5dc: 0x0  nop
    ctx->pc = 0x29c5dcu;
    // NOP
label_29c5e0:
    // 0x29c5e0: 0x35d6e  .word       0x00035D6E                   # dsub        $t3, $zero, $v1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c5e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_29c5e4:
    // 0x29c5e4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29c5e4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29c5e8:
    // 0x29c5e8: 0x16a0  .word       0x000016A0                   # add         $v0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c5e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29c5ec:
    // 0x29c5ec: 0x0  nop
    ctx->pc = 0x29c5ecu;
    // NOP
label_29c5f0:
    // 0x29c5f0: 0x35d71  tgeu        $zero, $v1, 373
    ctx->pc = 0x29c5f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c5f4:
    // 0x29c5f4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29c5f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29c5f8:
    // 0x29c5f8: 0xd30  tge         $zero, $zero, 52
    ctx->pc = 0x29c5f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29c5fc:
    // 0x29c5fc: 0x0  nop
    ctx->pc = 0x29c5fcu;
    // NOP
label_29c600:
    // 0x29c600: 0x35d73  tltu        $zero, $v1, 373
    ctx->pc = 0x29c600u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c604:
    // 0x29c604: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c604u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29C604 raw=0x00000005");
 /* MITIGATED */
label_29c608:
    // 0x29c608: 0x25c0  sll         $a0, $zero, 23
    ctx->pc = 0x29c608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_29c60c:
    // 0x29c60c: 0x0  nop
    ctx->pc = 0x29c60cu;
    // NOP
label_29c610:
    // 0x29c610: 0x35d78  dsll        $t3, $v1, 21
    ctx->pc = 0x29c610u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 21);
label_29c614:
    // 0x29c614: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29c614u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29c618:
    // 0x29c618: 0x16a0  .word       0x000016A0                   # add         $v0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c618u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29c61c:
    // 0x29c61c: 0x0  nop
    ctx->pc = 0x29c61cu;
    // NOP
label_29c620:
    // 0x29c620: 0x35d7b  dsra        $t3, $v1, 21
    ctx->pc = 0x29c620u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 3) >> 21);
label_29c624:
    // 0x29c624: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29c624u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29c628:
    // 0x29c628: 0x1680  sll         $v0, $zero, 26
    ctx->pc = 0x29c628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_29c62c:
    // 0x29c62c: 0x0  nop
    ctx->pc = 0x29c62cu;
    // NOP
label_29c630:
    // 0x29c630: 0x35d7e  dsrl32      $t3, $v1, 21
    ctx->pc = 0x29c630u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) >> (32 + 21));
label_29c634:
    // 0x29c634: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c634u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c638:
    // 0x29c638: 0x1f80  sll         $v1, $zero, 30
    ctx->pc = 0x29c638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_29c63c:
    // 0x29c63c: 0x0  nop
    ctx->pc = 0x29c63cu;
    // NOP
label_29c640:
    // 0x29c640: 0x35d82  srl         $t3, $v1, 22
    ctx->pc = 0x29c640u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 3), 22));
label_29c644:
    // 0x29c644: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29c644u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c648:
    // 0x29c648: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x29c648u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_29c64c:
    // 0x29c64c: 0x0  nop
    ctx->pc = 0x29c64cu;
    // NOP
label_29c650:
    // 0x29c650: 0x35d88  .word       0x00035D88                   # jr          $zero # 00035D80 <InstrIdType: CPU_SPECIAL>
label_29c654:
    if (ctx->pc == 0x29C654u) {
        ctx->pc = 0x29C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C650u;
        // 0x29c654: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C658u;
        goto label_29c658;
    }
    ctx->pc = 0x29C650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C650u;
        // 0x29c654: 0x3  sra         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C650u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29C658u;
label_29c658:
    // 0x29c658: 0x16a0  .word       0x000016A0                   # add         $v0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c658u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29c65c:
    // 0x29c65c: 0x0  nop
    ctx->pc = 0x29c65cu;
    // NOP
label_29c660:
    // 0x29c660: 0x35d8b  .word       0x00035D8B                   # movn        $t3, $zero, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c660u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_29c664:
    // 0x29c664: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c664u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c668:
    // 0x29c668: 0x1fa0  .word       0x00001FA0                   # add         $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c668u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29c66c:
    // 0x29c66c: 0x0  nop
    ctx->pc = 0x29c66cu;
    // NOP
label_29c670:
    // 0x29c670: 0x35d8f  .word       0x00035D8F                   # sync.p # 00035800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c670u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29c674:
    // 0x29c674: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29c674u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29c678:
    // 0x29c678: 0x16a0  .word       0x000016A0                   # add         $v0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c678u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29c67c:
    // 0x29c67c: 0x0  nop
    ctx->pc = 0x29c67cu;
    // NOP
label_29c680:
    // 0x29c680: 0x35d92  .word       0x00035D92                   # mflo        $t3 # 00030580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c680u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_29c684:
    // 0x29c684: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c684u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c688:
    // 0x29c688: 0x1980  sll         $v1, $zero, 6
    ctx->pc = 0x29c688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_29c68c:
    // 0x29c68c: 0x0  nop
    ctx->pc = 0x29c68cu;
    // NOP
label_29c690:
    // 0x29c690: 0x35d96  .word       0x00035D96                   # dsrlv       $t3, $v1, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c690u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29c694:
    // 0x29c694: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c694u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c698:
    // 0x29c698: 0x1fc0  sll         $v1, $zero, 31
    ctx->pc = 0x29c698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_29c69c:
    // 0x29c69c: 0x0  nop
    ctx->pc = 0x29c69cu;
    // NOP
label_29c6a0:
    // 0x29c6a0: 0x35d9a  .word       0x00035D9A                   # div         $t3, $zero, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c6a0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29c6a4:
    // 0x29c6a4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c6a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c6a8:
    // 0x29c6a8: 0x1fb0  tge         $zero, $zero, 126
    ctx->pc = 0x29c6a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29c6ac:
    // 0x29c6ac: 0x0  nop
    ctx->pc = 0x29c6acu;
    // NOP
label_29c6b0:
    // 0x29c6b0: 0x35d9e  .word       0x00035D9E                   # ddiv        $t3, $zero, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c6b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29C6B0 raw=0x00035D9E");
 /* MITIGATED */
label_29c6b4:
    // 0x29c6b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c6b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c6b8:
    // 0x29c6b8: 0x1fa0  .word       0x00001FA0                   # add         $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c6b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29c6bc:
    // 0x29c6bc: 0x0  nop
    ctx->pc = 0x29c6bcu;
    // NOP
label_29c6c0:
    // 0x29c6c0: 0x35da2  .word       0x00035DA2                   # neg         $t3, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c6c0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_29c6c4:
    // 0x29c6c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c6c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29C6C4 raw=0x00000001");
 /* MITIGATED */
label_29c6c8:
    // 0x29c6c8: 0x420  .word       0x00000420                   # add         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c6c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29c6cc:
    // 0x29c6cc: 0x0  nop
    ctx->pc = 0x29c6ccu;
    // NOP
label_29c6d0:
    // 0x29c6d0: 0x35da3  .word       0x00035DA3                   # negu        $t3, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c6d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29c6d4:
    // 0x29c6d4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29c6d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29c6d8:
    // 0x29c6d8: 0xa10  .word       0x00000A10                   # mfhi        $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c6d8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29c6dc:
    // 0x29c6dc: 0x0  nop
    ctx->pc = 0x29c6dcu;
    // NOP
label_29c6e0:
    // 0x29c6e0: 0x35da5  .word       0x00035DA5                   # or          $t3, $zero, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c6e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29c6e4:
    // 0x29c6e4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29c6e4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29c6e8:
    // 0x29c6e8: 0x1090  .word       0x00001090                   # mfhi        $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c6e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29c6ec:
    // 0x29c6ec: 0x0  nop
    ctx->pc = 0x29c6ecu;
    // NOP
label_29c6f0:
    // 0x29c6f0: 0x35da8  .word       0x00035DA8                   # mfsa        $t3 # 00030580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29c6f0u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_29c6f4:
    // 0x29c6f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c6f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c6f8:
    // 0x29c6f8: 0x1c70  tge         $zero, $zero, 113
    ctx->pc = 0x29c6f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29c6fc:
    // 0x29c6fc: 0x0  nop
    ctx->pc = 0x29c6fcu;
    // NOP
label_29c700:
    // 0x29c700: 0x35dac  .word       0x00035DAC                   # dadd        $t3, $zero, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c700u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_29c704:
    // 0x29c704: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29c704u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29c708:
    // 0x29c708: 0x16a0  .word       0x000016A0                   # add         $v0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c708u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29c70c:
    // 0x29c70c: 0x0  nop
    ctx->pc = 0x29c70cu;
    // NOP
label_29c710:
    // 0x29c710: 0x35daf  .word       0x00035DAF                   # dsubu       $t3, $zero, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c710u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29c714:
    // 0x29c714: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c714u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c718:
    // 0x29c718: 0x1980  sll         $v1, $zero, 6
    ctx->pc = 0x29c718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_29c71c:
    // 0x29c71c: 0x0  nop
    ctx->pc = 0x29c71cu;
    // NOP
label_29c720:
    // 0x29c720: 0x35db3  tltu        $zero, $v1, 374
    ctx->pc = 0x29c720u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c724:
    // 0x29c724: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c724u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c728:
    // 0x29c728: 0x1990  .word       0x00001990                   # mfhi        $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c728u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29c72c:
    // 0x29c72c: 0x0  nop
    ctx->pc = 0x29c72cu;
    // NOP
label_29c730:
    // 0x29c730: 0x35db7  .word       0x00035DB7                   # INVALID     $zero, $v1, 0x5DB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c730u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29C730 raw=0x00035DB7");
 /* MITIGATED */
label_29c734:
    // 0x29c734: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29c734u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c738:
    // 0x29c738: 0x1970  tge         $zero, $zero, 101
    ctx->pc = 0x29c738u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29c73c:
    // 0x29c73c: 0x0  nop
    ctx->pc = 0x29c73cu;
    // NOP
label_29c740:
    // 0x29c740: 0x35dbb  dsra        $t3, $v1, 22
    ctx->pc = 0x29c740u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 3) >> 22);
label_29c744:
    // 0x29c744: 0x85  .word       0x00000085                   # INVALID     $zero, $zero, 0x85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c744u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29C744 raw=0x00000085");
 /* MITIGATED */
label_29c748:
    // 0x29c748: 0x423e0  .word       0x000423E0                   # add         $a0, $zero, $a0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c748u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_29c74c:
    // 0x29c74c: 0x0  nop
    ctx->pc = 0x29c74cu;
    // NOP
label_29c750:
    // 0x29c750: 0x35e40  sll         $t3, $v1, 25
    ctx->pc = 0x29c750u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 25));
label_29c754:
    // 0x29c754: 0x71  tgeu        $zero, $zero, 1
    ctx->pc = 0x29c754u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29c758:
    // 0x29c758: 0x38110  .word       0x00038110                   # mfhi        $s0 # 00030100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c758u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_29c75c:
    // 0x29c75c: 0x0  nop
    ctx->pc = 0x29c75cu;
    // NOP
label_29c760:
    // 0x29c760: 0x35eb1  tgeu        $zero, $v1, 378
    ctx->pc = 0x29c760u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c764:
    // 0x29c764: 0xc4  .word       0x000000C4                   # sllv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c764u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c768:
    // 0x29c768: 0x61c20  .word       0x00061C20                   # add         $v1, $zero, $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c768u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29c76c:
    // 0x29c76c: 0x0  nop
    ctx->pc = 0x29c76cu;
    // NOP
label_29c770:
    // 0x29c770: 0x35f75  .word       0x00035F75                   # INVALID     $zero, $v1, 0x5F75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c770u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29C770 raw=0x00035F75");
 /* MITIGATED */
label_29c774:
    // 0x29c774: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c774u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c778:
    // 0x29c778: 0x235c0  sll         $a2, $v0, 23
    ctx->pc = 0x29c778u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
label_29c77c:
    // 0x29c77c: 0x0  nop
    ctx->pc = 0x29c77cu;
    // NOP
label_29c780:
    // 0x29c780: 0x35fbc  dsll32      $t3, $v1, 30
    ctx->pc = 0x29c780u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 30));
label_29c784:
    // 0x29c784: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c784u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29C784 raw=0x00000075");
 /* MITIGATED */
label_29c788:
    // 0x29c788: 0x3a520  .word       0x0003A520                   # add         $s4, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c788u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29c78c:
    // 0x29c78c: 0x0  nop
    ctx->pc = 0x29c78cu;
    // NOP
label_29c790:
    // 0x29c790: 0x36031  tgeu        $zero, $v1, 384
    ctx->pc = 0x29c790u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c794:
    // 0x29c794: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c794u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29c798:
    // 0x29c798: 0x32ae0  .word       0x00032AE0                   # add         $a1, $zero, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c798u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_29c79c:
    // 0x29c79c: 0x0  nop
    ctx->pc = 0x29c79cu;
    // NOP
label_29c7a0:
    // 0x29c7a0: 0x36097  .word       0x00036097                   # dsrav       $t4, $v1, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c7a0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29c7a4:
    // 0x29c7a4: 0xd3  .word       0x000000D3                   # mtlo        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c7a4u;
    ctx->lo = GPR_U64(ctx, 0);
label_29c7a8:
    // 0x29c7a8: 0x695c0  sll         $s2, $a2, 23
    ctx->pc = 0x29c7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
label_29c7ac:
    // 0x29c7ac: 0x0  nop
    ctx->pc = 0x29c7acu;
    // NOP
label_29c7b0:
    // 0x29c7b0: 0x3616a  .word       0x0003616A                   # slt         $t4, $zero, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c7b0u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29c7b4:
    // 0x29c7b4: 0x81  .word       0x00000081                   # INVALID     $zero, $zero, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c7b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29C7B4 raw=0x00000081");
 /* MITIGATED */
label_29c7b8:
    // 0x29c7b8: 0x40330  tge         $zero, $a0, 12
    ctx->pc = 0x29c7b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29c7bc:
    // 0x29c7bc: 0x0  nop
    ctx->pc = 0x29c7bcu;
    // NOP
label_29c7c0:
    // 0x29c7c0: 0x361eb  .word       0x000361EB                   # sltu        $t4, $zero, $v1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c7c0u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29c7c4:
    // 0x29c7c4: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x29c7c4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_29c7c8:
    // 0x29c7c8: 0x41010  .word       0x00041010                   # mfhi        $v0 # 00040000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c7c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29c7cc:
    // 0x29c7cc: 0x0  nop
    ctx->pc = 0x29c7ccu;
    // NOP
label_29c7d0:
    // 0x29c7d0: 0x3626e  .word       0x0003626E                   # dsub        $t4, $zero, $v1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c7d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_29c7d4:
    // 0x29c7d4: 0xc4  .word       0x000000C4                   # sllv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c7d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29c7d8:
    // 0x29c7d8: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x29c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_29c7dc:
    // 0x29c7dc: 0x0  nop
    ctx->pc = 0x29c7dcu;
    // NOP
label_29c7e0:
    // 0x29c7e0: 0x36332  tlt         $zero, $v1, 396
    ctx->pc = 0x29c7e0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c7e4:
    // 0x29c7e4: 0xb5  .word       0x000000B5                   # INVALID     $zero, $zero, 0xB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c7e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29C7E4 raw=0x000000B5");
 /* MITIGATED */
label_29c7e8:
    // 0x29c7e8: 0x5a3f0  tge         $zero, $a1, 655
    ctx->pc = 0x29c7e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_29c7ec:
    // 0x29c7ec: 0x0  nop
    ctx->pc = 0x29c7ecu;
    // NOP
label_29c7f0:
    // 0x29c7f0: 0x363e7  .word       0x000363E7                   # nor         $t4, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c7f0u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29c7f4:
    // 0x29c7f4: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c7f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29C7F4 raw=0x000000BD");
 /* MITIGATED */
label_29c7f8:
    // 0x29c7f8: 0x5e300  sll         $gp, $a1, 12
    ctx->pc = 0x29c7f8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
label_29c7fc:
    // 0x29c7fc: 0x0  nop
    ctx->pc = 0x29c7fcu;
    // NOP
label_29c800:
    // 0x29c800: 0x364a4  .word       0x000364A4                   # and         $t4, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c800u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 3));
label_29c804:
    // 0x29c804: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c804u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29c808:
    // 0x29c808: 0x307e0  .word       0x000307E0                   # add         $zero, $zero, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c808u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29c80c:
    // 0x29c80c: 0x0  nop
    ctx->pc = 0x29c80cu;
    // NOP
label_29c810:
    // 0x29c810: 0x36505  .word       0x00036505                   # INVALID     $zero, $v1, 0x6505 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c810u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29C810 raw=0x00036505");
 /* MITIGATED */
label_29c814:
    // 0x29c814: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x29c814u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_29c818:
    // 0x29c818: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x29c818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
label_29c81c:
    // 0x29c81c: 0x0  nop
    ctx->pc = 0x29c81cu;
    // NOP
label_29c820:
    // 0x29c820: 0x36548  .word       0x00036548                   # jr          $zero # 00036540 <InstrIdType: CPU_SPECIAL>
label_29c824:
    if (ctx->pc == 0x29C824u) {
        ctx->pc = 0x29C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C820u;
        // 0x29c824: 0xbb  dsra        $zero, $zero, 2 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C828u;
        goto label_29c828;
    }
    ctx->pc = 0x29C820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C820u;
        // 0x29c824: 0xbb  dsra        $zero, $zero, 2 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C820u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29C828u;
label_29c828:
    // 0x29c828: 0x5d010  .word       0x0005D010                   # mfhi        $k0 # 00050000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c828u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29c82c:
    // 0x29c82c: 0x0  nop
    ctx->pc = 0x29c82cu;
    // NOP
label_29c830:
    // 0x29c830: 0x36603  sra         $t4, $v1, 24
    ctx->pc = 0x29c830u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 24));
label_29c834:
    // 0x29c834: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c834u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29c838:
    // 0x29c838: 0x30f30  tge         $zero, $v1, 60
    ctx->pc = 0x29c838u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c83c:
    // 0x29c83c: 0x0  nop
    ctx->pc = 0x29c83cu;
    // NOP
label_29c840:
    // 0x29c840: 0x36665  .word       0x00036665                   # or          $t4, $zero, $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c840u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29c844:
    // 0x29c844: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x29c844u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29c848:
    // 0x29c848: 0x39f00  sll         $s3, $v1, 28
    ctx->pc = 0x29c848u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
label_29c84c:
    // 0x29c84c: 0x0  nop
    ctx->pc = 0x29c84cu;
    // NOP
label_29c850:
    // 0x29c850: 0x366d9  .word       0x000366D9                   # multu       $zero, $v1 # 000066C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c850u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_29c854:
    // 0x29c854: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c854u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29c858:
    // 0x29c858: 0x48930  tge         $zero, $a0, 548
    ctx->pc = 0x29c858u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29c85c:
    // 0x29c85c: 0x0  nop
    ctx->pc = 0x29c85cu;
    // NOP
label_29c860:
    // 0x29c860: 0x3676b  .word       0x0003676B                   # sltu        $t4, $zero, $v1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c860u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29c864:
    // 0x29c864: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x29c864u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_29c868:
    // 0x29c868: 0x5bb90  .word       0x0005BB90                   # mfhi        $s7 # 00050380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c868u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_29c86c:
    // 0x29c86c: 0x0  nop
    ctx->pc = 0x29c86cu;
    // NOP
label_29c870:
    // 0x29c870: 0x36823  negu        $t5, $v1
    ctx->pc = 0x29c870u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29c874:
    // 0x29c874: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c874u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29c878:
    // 0x29c878: 0x31df0  tge         $zero, $v1, 119
    ctx->pc = 0x29c878u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c87c:
    // 0x29c87c: 0x0  nop
    ctx->pc = 0x29c87cu;
    // NOP
label_29c880:
    // 0x29c880: 0x36887  .word       0x00036887                   # srav        $t5, $v1, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c880u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29c884:
    // 0x29c884: 0x8a  .word       0x0000008A                   # movz        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c884u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29c888:
    // 0x29c888: 0x44d80  sll         $t1, $a0, 22
    ctx->pc = 0x29c888u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 22));
label_29c88c:
    // 0x29c88c: 0x0  nop
    ctx->pc = 0x29c88cu;
    // NOP
label_29c890:
    // 0x29c890: 0x36911  .word       0x00036911                   # mthi        $zero # 00036900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c890u;
    ctx->hi = GPR_U64(ctx, 0);
label_29c894:
    // 0x29c894: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29c898:
    // 0x29c898: 0x2f870  tge         $zero, $v0, 993
    ctx->pc = 0x29c898u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29c89c:
    // 0x29c89c: 0x0  nop
    ctx->pc = 0x29c89cu;
    // NOP
label_29c8a0:
    // 0x29c8a0: 0x36971  tgeu        $zero, $v1, 421
    ctx->pc = 0x29c8a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c8a4:
    // 0x29c8a4: 0x6a  .word       0x0000006A                   # slt         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c8a4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29c8a8:
    // 0x29c8a8: 0x34cd0  .word       0x00034CD0                   # mfhi        $t1 # 000304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c8a8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_29c8ac:
    // 0x29c8ac: 0x0  nop
    ctx->pc = 0x29c8acu;
    // NOP
label_29c8b0:
    // 0x29c8b0: 0x369db  .word       0x000369DB                   # divu        $t5, $zero, $v1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c8b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29c8b4:
    // 0x29c8b4: 0x8d  break       0, 2
    ctx->pc = 0x29c8b4u;
    runtime->handleBreak(rdram, ctx);
label_29c8b8:
    // 0x29c8b8: 0x461a0  .word       0x000461A0                   # add         $t4, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c8b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_29c8bc:
    // 0x29c8bc: 0x0  nop
    ctx->pc = 0x29c8bcu;
    // NOP
label_29c8c0:
    // 0x29c8c0: 0x36a68  .word       0x00036A68                   # mfsa        $t5 # 00030240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29c8c0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_29c8c4:
    // 0x29c8c4: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c8c4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29c8c8:
    // 0x29c8c8: 0x47a60  .word       0x00047A60                   # add         $t7, $zero, $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c8c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_29c8cc:
    // 0x29c8cc: 0x0  nop
    ctx->pc = 0x29c8ccu;
    // NOP
label_29c8d0:
    // 0x29c8d0: 0x36af8  dsll        $t5, $v1, 11
    ctx->pc = 0x29c8d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << 11);
label_29c8d4:
    // 0x29c8d4: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c8d4u;
    ctx->hi = GPR_U64(ctx, 0);
label_29c8d8:
    // 0x29c8d8: 0x48160  .word       0x00048160                   # add         $s0, $zero, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c8d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_29c8dc:
    // 0x29c8dc: 0x0  nop
    ctx->pc = 0x29c8dcu;
    // NOP
label_29c8e0:
    // 0x29c8e0: 0x36b89  .word       0x00036B89                   # jalr        $t5, $zero # 00030380 <InstrIdType: CPU_SPECIAL>
label_29c8e4:
    if (ctx->pc == 0x29C8E4u) {
        ctx->pc = 0x29C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8E0u;
        // 0x29c8e4: 0x14  dsllv       $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C8E8u;
        goto label_29c8e8;
    }
    ctx->pc = 0x29C8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x29C8E8u);
        ctx->pc = 0x29C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8E0u;
        // 0x29c8e4: 0x14  dsllv       $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8E0u, 0x29C8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C8E8u;
label_29c8e8:
    // 0x29c8e8: 0x9fe0  .word       0x00009FE0                   # add         $s3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c8e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_29c8ec:
    // 0x29c8ec: 0x0  nop
    ctx->pc = 0x29c8ecu;
    // NOP
label_29c8f0:
    // 0x29c8f0: 0x36b9d  .word       0x00036B9D                   # dmultu      $zero, $v1 # 00006B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c8f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29C8F0 raw=0x00036B9D");
 /* MITIGATED */
label_29c8f4:
    // 0x29c8f4: 0x37  .word       0x00000037                   # INVALID     $zero, $zero, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c8f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29C8F4 raw=0x00000037");
 /* MITIGATED */
label_29c8f8:
    // 0x29c8f8: 0x1b380  sll         $s6, $at, 14
    ctx->pc = 0x29c8f8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 1), 14));
label_29c8fc:
    // 0x29c8fc: 0x0  nop
    ctx->pc = 0x29c8fcu;
    // NOP
label_29c900:
    // 0x29c900: 0x36bd4  .word       0x00036BD4                   # dsllv       $t5, $v1, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c900u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (GPR_U32(ctx, 0) & 0x3F));
label_29c904:
    // 0x29c904: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_29c908:
    if (ctx->pc == 0x29C908u) {
        ctx->pc = 0x29C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C904u;
        // 0x29c908: 0x23ca0  .word       0x00023CA0                   # add         $a3, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C90Cu;
        goto label_29c90c;
    }
    ctx->pc = 0x29C904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C904u;
        // 0x29c908: 0x23ca0  .word       0x00023CA0                   # add         $a3, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C904u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29C90Cu;
label_29c90c:
    // 0x29c90c: 0x0  nop
    ctx->pc = 0x29c90cu;
    // NOP
label_29c910:
    // 0x29c910: 0x36c1c  .word       0x00036C1C                   # dmult       $zero, $v1 # 00006C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c910u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29C910 raw=0x00036C1C");
 /* MITIGATED */
label_29c914:
    // 0x29c914: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x29c914u;
    
label_29c918:
    // 0x29c918: 0x3fdd0  .word       0x0003FDD0                   # mfhi        $ra # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c918u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_29c91c:
    // 0x29c91c: 0x0  nop
    ctx->pc = 0x29c91cu;
    // NOP
label_29c920:
    // 0x29c920: 0x36c9c  .word       0x00036C9C                   # dmult       $zero, $v1 # 00006C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c920u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29C920 raw=0x00036C9C");
 /* MITIGATED */
label_29c924:
    // 0x29c924: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c924u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29C924 raw=0x00000075");
 /* MITIGATED */
label_29c928:
    // 0x29c928: 0x3a1f0  tge         $zero, $v1, 647
    ctx->pc = 0x29c928u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29c92c:
    // 0x29c92c: 0x0  nop
    ctx->pc = 0x29c92cu;
    // NOP
label_29c930:
    // 0x29c930: 0x36d11  .word       0x00036D11                   # mthi        $zero # 00036D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c930u;
    ctx->hi = GPR_U64(ctx, 0);
label_29c934:
    // 0x29c934: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c934u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29c938:
    // 0x29c938: 0x36d60  .word       0x00036D60                   # add         $t5, $zero, $v1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c938u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_29c93c:
    // 0x29c93c: 0x0  nop
    ctx->pc = 0x29c93cu;
    // NOP
label_29c940:
    // 0x29c940: 0x36d7f  dsra32      $t5, $v1, 21
    ctx->pc = 0x29c940u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 3) >> (32 + 21));
label_29c944:
    // 0x29c944: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29c944u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29c948:
    // 0x29c948: 0x3bc00  sll         $s7, $v1, 16
    ctx->pc = 0x29c948u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_29c94c:
    // 0x29c94c: 0x0  nop
    ctx->pc = 0x29c94cu;
    // NOP
label_29c950:
    // 0x29c950: 0x36df7  .word       0x00036DF7                   # INVALID     $zero, $v1, 0x6DF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c950u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29C950 raw=0x00036DF7");
 /* MITIGATED */
label_29c954:
    // 0x29c954: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c954u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c958:
    // 0x29c958: 0x36380  sll         $t4, $v1, 14
    ctx->pc = 0x29c958u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_29c95c:
    // 0x29c95c: 0x0  nop
    ctx->pc = 0x29c95cu;
    // NOP
label_29c960:
    // 0x29c960: 0x2ce7f0  tge         $at, $t4, 927
    ctx->pc = 0x29c960u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_29c964:
    // 0x29c964: 0x2ce830  tge         $at, $t4, 928
    ctx->pc = 0x29c964u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_29c968:
    // 0x29c968: 0x2ce880  .word       0x002CE880                   # sll         $sp, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c968u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_29c96c:
    // 0x29c96c: 0x2ce8c0  .word       0x002CE8C0                   # sll         $sp, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c96cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_29c970:
    // 0x29c970: 0x2ce8f0  tge         $at, $t4, 931
    ctx->pc = 0x29c970u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_29c974:
    // 0x29c974: 0x2ce910  .word       0x002CE910                   # mfhi        $sp # 002C0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c974u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29c978:
    // 0x29c978: 0x2ce950  .word       0x002CE950                   # mfhi        $sp # 002C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c978u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29c97c:
    // 0x29c97c: 0x2ce990  .word       0x002CE990                   # mfhi        $sp # 002C0180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c97cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29c980:
    // 0x29c980: 0x2ce9e0  .word       0x002CE9E0                   # add         $sp, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c980u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_29c984:
    // 0x29c984: 0x0  nop
    ctx->pc = 0x29c984u;
    // NOP
label_29c988:
    // 0x29c988: 0x0  nop
    ctx->pc = 0x29c988u;
    // NOP
label_29c98c:
    // 0x29c98c: 0x0  nop
    ctx->pc = 0x29c98cu;
    // NOP
label_29c990:
    // 0x29c990: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c990u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29c994:
    // 0x29c994: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c994u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29C994 raw=0x00000001");
 /* MITIGATED */
label_29c998:
    // 0x29c998: 0x0  nop
    ctx->pc = 0x29c998u;
    // NOP
label_29c99c:
    // 0x29c99c: 0x0  nop
    ctx->pc = 0x29c99cu;
    // NOP
label_29c9a0:
    // 0x29c9a0: 0x0  nop
    ctx->pc = 0x29c9a0u;
    // NOP
label_29c9a4:
    // 0x29c9a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c9a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29C9A4 raw=0x00000001");
 /* MITIGATED */
label_29c9a8:
    // 0x29c9a8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c9a8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29C9A8 raw=0x00000001");
 /* MITIGATED */
label_29c9ac:
    // 0x29c9ac: 0x0  nop
    ctx->pc = 0x29c9acu;
    // NOP
label_29c9b0:
    // 0x29c9b0: 0xf  sync
    ctx->pc = 0x29c9b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29c9b4:
    // 0x29c9b4: 0xf  sync
    ctx->pc = 0x29c9b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29c9b8:
    // 0x29c9b8: 0x0  nop
    ctx->pc = 0x29c9b8u;
    // NOP
label_29c9bc:
    // 0x29c9bc: 0x0  nop
    ctx->pc = 0x29c9bcu;
    // NOP
label_29c9c0:
    // 0x29c9c0: 0x0  nop
    ctx->pc = 0x29c9c0u;
    // NOP
label_29c9c4:
    // 0x29c9c4: 0x0  nop
    ctx->pc = 0x29c9c4u;
    // NOP
label_29c9c8:
    // 0x29c9c8: 0x0  nop
    ctx->pc = 0x29c9c8u;
    // NOP
label_29c9cc:
    // 0x29c9cc: 0x0  nop
    ctx->pc = 0x29c9ccu;
    // NOP
label_29c9d0:
    // 0x29c9d0: 0x0  nop
    ctx->pc = 0x29c9d0u;
    // NOP
label_29c9d4:
    // 0x29c9d4: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x29c9d4u;
    
label_29c9d8:
    // 0x29c9d8: 0x0  nop
    ctx->pc = 0x29c9d8u;
    // NOP
label_29c9dc:
    // 0x29c9dc: 0x0  nop
    ctx->pc = 0x29c9dcu;
    // NOP
label_29c9e0:
    // 0x29c9e0: 0x0  nop
    ctx->pc = 0x29c9e0u;
    // NOP
label_29c9e4:
    // 0x29c9e4: 0x0  nop
    ctx->pc = 0x29c9e4u;
    // NOP
label_29c9e8:
    // 0x29c9e8: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x29c9e8u;
    
label_29c9ec:
    // 0x29c9ec: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x29c9ecu;
    
label_29c9f0:
    // 0x29c9f0: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x29c9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29c9f4:
    // 0x29c9f4: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x29c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29c9f8:
    // 0x29c9f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29c9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29c9fc:
    // 0x29c9fc: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x29c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca00:
    // 0x29ca00: 0x8000  sll         $s0, $zero, 0
    ctx->pc = 0x29ca00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca04:
    // 0x29ca04: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x29ca04u;
    
label_29ca08:
    // 0x29ca08: 0x0  nop
    ctx->pc = 0x29ca08u;
    // NOP
label_29ca0c:
    // 0x29ca0c: 0x0  nop
    ctx->pc = 0x29ca0cu;
    // NOP
label_29ca10:
    // 0x29ca10: 0x0  nop
    ctx->pc = 0x29ca10u;
    // NOP
label_29ca14:
    // 0x29ca14: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x29ca14u;
    
label_29ca18:
    // 0x29ca18: 0x0  nop
    ctx->pc = 0x29ca18u;
    // NOP
label_29ca1c:
    // 0x29ca1c: 0x0  nop
    ctx->pc = 0x29ca1cu;
    // NOP
label_29ca20:
    // 0x29ca20: 0x0  nop
    ctx->pc = 0x29ca20u;
    // NOP
label_29ca24:
    // 0x29ca24: 0x0  nop
    ctx->pc = 0x29ca24u;
    // NOP
label_29ca28:
    // 0x29ca28: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x29ca28u;
    
label_29ca2c:
    // 0x29ca2c: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x29ca2cu;
    
label_29ca30:
    // 0x29ca30: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x29ca30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca34:
    // 0x29ca34: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x29ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca38:
    // 0x29ca38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29ca38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca3c:
    // 0x29ca3c: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x29ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca40:
    // 0x29ca40: 0x8000  sll         $s0, $zero, 0
    ctx->pc = 0x29ca40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca44:
    // 0x29ca44: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x29ca44u;
    
label_29ca48:
    // 0x29ca48: 0x0  nop
    ctx->pc = 0x29ca48u;
    // NOP
label_29ca4c:
    // 0x29ca4c: 0x0  nop
    ctx->pc = 0x29ca4cu;
    // NOP
label_29ca50:
    // 0x29ca50: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29ca50u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ca54:
    // 0x29ca54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ca54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CA54 raw=0x00000001");
 /* MITIGATED */
label_29ca58:
    // 0x29ca58: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29ca58u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29ca5c:
    // 0x29ca5c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ca5cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CA5C raw=0x00000001");
 /* MITIGATED */
label_29ca60:
    // 0x29ca60: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29ca60u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29ca64:
    // 0x29ca64: 0x0  nop
    ctx->pc = 0x29ca64u;
    // NOP
label_29ca68:
    // 0x29ca68: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ca68u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ca6c:
    // 0x29ca6c: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29ca6cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CA6C raw=0x0000001F");
 /* MITIGATED */
label_29ca70:
    // 0x29ca70: 0x8  jr          $zero
label_29ca74:
    if (ctx->pc == 0x29CA74u) {
        ctx->pc = 0x29CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA70u;
        // 0x29ca74: 0x1f  ddivu       $zero, $zero, $zero (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CA74 raw=0x0000001F");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA78u;
        goto label_29ca78;
    }
    ctx->pc = 0x29CA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA70u;
        // 0x29ca74: 0x1f  ddivu       $zero, $zero, $zero (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CA74 raw=0x0000001F");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CA78u;
label_29ca78:
    // 0x29ca78: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29ca78u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29ca7c:
    // 0x29ca7c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29ca7cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29ca80:
    // 0x29ca80: 0xd  break       0
    ctx->pc = 0x29ca80u;
    runtime->handleBreak(rdram, ctx);
label_29ca84:
    // 0x29ca84: 0xd  break       0
    ctx->pc = 0x29ca84u;
    runtime->handleBreak(rdram, ctx);
label_29ca88:
    // 0x29ca88: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ca88u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CA88 raw=0x0000000E");
 /* MITIGATED */
label_29ca8c:
    // 0x29ca8c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29ca8cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ca90:
    // 0x29ca90: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29ca90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CA90 raw=0x0000001D");
 /* MITIGATED */
label_29ca94:
    // 0x29ca94: 0x11  mthi        $zero
    ctx->pc = 0x29ca94u;
    ctx->hi = GPR_U64(ctx, 0);
label_29ca98:
    // 0x29ca98: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29ca98u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29ca9c:
    // 0x29ca9c: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29ca9cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CA9C raw=0x0000001F");
 /* MITIGATED */
label_29caa0:
    // 0x29caa0: 0xf  sync
    ctx->pc = 0x29caa0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29caa4:
    // 0x29caa4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29caa4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CAA4 raw=0x00000001");
 /* MITIGATED */
label_29caa8:
    // 0x29caa8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29caa8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29caac:
    // 0x29caac: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29caacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29cab0:
    // 0x29cab0: 0xd  break       0
    ctx->pc = 0x29cab0u;
    runtime->handleBreak(rdram, ctx);
label_29cab4:
    // 0x29cab4: 0x19  multu       $zero, $zero
    ctx->pc = 0x29cab4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29cab8:
    // 0x29cab8: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x29cab8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29cabc:
    // 0x29cabc: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29cabcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CABC raw=0x0000001D");
 /* MITIGATED */
label_29cac0:
    // 0x29cac0: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29cac0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29CAC0 raw=0x0000001C");
 /* MITIGATED */
label_29cac4:
    // 0x29cac4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29cac4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CAC4 raw=0x0000001D");
 /* MITIGATED */
label_29cac8:
    // 0x29cac8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29cac8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cacc:
    // 0x29cacc: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29caccu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CACC raw=0x0000001F");
 /* MITIGATED */
label_29cad0:
    // 0x29cad0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29cad0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29cad4:
    // 0x29cad4: 0x0  nop
    ctx->pc = 0x29cad4u;
    // NOP
label_29cad8:
    // 0x29cad8: 0x22  neg         $zero, $zero
    ctx->pc = 0x29cad8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29cadc:
    // 0x29cadc: 0x23  negu        $zero, $zero
    ctx->pc = 0x29cadcu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29cae0:
    // 0x29cae0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cae0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CAE0 raw=0x00000001");
 /* MITIGATED */
label_29cae4:
    // 0x29cae4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29cae4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29cae8:
    // 0x29cae8: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29cae8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29caec:
    // 0x29caec: 0x0  nop
    ctx->pc = 0x29caecu;
    // NOP
label_29caf0:
    // 0x29caf0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29caf0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CAF0 raw=0x00000001");
 /* MITIGATED */
label_29caf4:
    // 0x29caf4: 0x0  nop
    ctx->pc = 0x29caf4u;
    // NOP
label_29caf8:
    // 0x29caf8: 0x258  .word       0x00000258                   # mult        $zero, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29caf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29cafc:
    // 0x29cafc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cafcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CAFC raw=0x00000001");
 /* MITIGATED */
label_29cb00:
    // 0x29cb00: 0x226  .word       0x00000226                   # xor         $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb00u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29cb04:
    // 0x29cb04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29cb04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29cb08:
    // 0x29cb08: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29cb08u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cb0c:
    // 0x29cb0c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29cb0cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29cb10:
    // 0x29cb10: 0x1c2  srl         $zero, $zero, 7
    ctx->pc = 0x29cb10u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 7));
label_29cb14:
    // 0x29cb14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29cb14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cb18:
    // 0x29cb18: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb18u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29cb1c:
    // 0x29cb1c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29cb1cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CB1C raw=0x0000001D");
 /* MITIGATED */
label_29cb20:
    // 0x29cb20: 0x15e  .word       0x0000015E                   # ddiv        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29CB20 raw=0x0000015E");
 /* MITIGATED */
label_29cb24:
    // 0x29cb24: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29cb24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cb28:
    // 0x29cb28: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb28u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29cb2c:
    // 0x29cb2c: 0xd  break       0
    ctx->pc = 0x29cb2cu;
    runtime->handleBreak(rdram, ctx);
label_29cb30:
    // 0x29cb30: 0xfa  dsrl        $zero, $zero, 3
    ctx->pc = 0x29cb30u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 3);
label_29cb34:
    // 0x29cb34: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29cb34u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CB34 raw=0x0000001F");
 /* MITIGATED */
label_29cb38:
    // 0x29cb38: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29cb3c:
    if (ctx->pc == 0x29CB3Cu) {
        ctx->pc = 0x29CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB38u;
        // 0x29cb3c: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB40u;
        goto label_29cb40;
    }
    ctx->pc = 0x29CB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB38u;
        // 0x29cb3c: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CB38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CB40u;
label_29cb40:
    // 0x29cb40: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29cb44:
    // 0x29cb44: 0x0  nop
    ctx->pc = 0x29cb44u;
    // NOP
label_29cb48:
    // 0x29cb48: 0x5460  .word       0x00005460                   # add         $t2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_29cb4c:
    // 0x29cb4c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb4cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CB4C raw=0x00000001");
 /* MITIGATED */
label_29cb50:
    // 0x29cb50: 0x6270  tge         $zero, $zero, 393
    ctx->pc = 0x29cb50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cb54:
    // 0x29cb54: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29cb54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29cb58:
    // 0x29cb58: 0x7080  sll         $t6, $zero, 2
    ctx->pc = 0x29cb58u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_29cb5c:
    // 0x29cb5c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29cb5cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
    ctx->pc = 0x29cb60u;
    return;
}
