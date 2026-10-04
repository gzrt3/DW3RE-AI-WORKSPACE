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


void FUN_0014eba0_part127(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18c400u: goto label_18c400;
        case 0x18c404u: goto label_18c404;
        case 0x18c408u: goto label_18c408;
        case 0x18c40cu: goto label_18c40c;
        case 0x18c410u: goto label_18c410;
        case 0x18c414u: goto label_18c414;
        case 0x18c418u: goto label_18c418;
        case 0x18c41cu: goto label_18c41c;
        case 0x18c420u: goto label_18c420;
        case 0x18c424u: goto label_18c424;
        case 0x18c428u: goto label_18c428;
        case 0x18c42cu: goto label_18c42c;
        case 0x18c430u: goto label_18c430;
        case 0x18c434u: goto label_18c434;
        case 0x18c438u: goto label_18c438;
        case 0x18c43cu: goto label_18c43c;
        case 0x18c440u: goto label_18c440;
        case 0x18c444u: goto label_18c444;
        case 0x18c448u: goto label_18c448;
        case 0x18c44cu: goto label_18c44c;
        case 0x18c450u: goto label_18c450;
        case 0x18c454u: goto label_18c454;
        case 0x18c458u: goto label_18c458;
        case 0x18c45cu: goto label_18c45c;
        case 0x18c460u: goto label_18c460;
        case 0x18c464u: goto label_18c464;
        case 0x18c468u: goto label_18c468;
        case 0x18c46cu: goto label_18c46c;
        case 0x18c470u: goto label_18c470;
        case 0x18c474u: goto label_18c474;
        case 0x18c478u: goto label_18c478;
        case 0x18c47cu: goto label_18c47c;
        case 0x18c480u: goto label_18c480;
        case 0x18c484u: goto label_18c484;
        case 0x18c488u: goto label_18c488;
        case 0x18c48cu: goto label_18c48c;
        case 0x18c490u: goto label_18c490;
        case 0x18c494u: goto label_18c494;
        case 0x18c498u: goto label_18c498;
        case 0x18c49cu: goto label_18c49c;
        case 0x18c4a0u: goto label_18c4a0;
        case 0x18c4a4u: goto label_18c4a4;
        case 0x18c4a8u: goto label_18c4a8;
        case 0x18c4acu: goto label_18c4ac;
        case 0x18c4b0u: goto label_18c4b0;
        case 0x18c4b4u: goto label_18c4b4;
        case 0x18c4b8u: goto label_18c4b8;
        case 0x18c4bcu: goto label_18c4bc;
        case 0x18c4c0u: goto label_18c4c0;
        case 0x18c4c4u: goto label_18c4c4;
        case 0x18c4c8u: goto label_18c4c8;
        case 0x18c4ccu: goto label_18c4cc;
        case 0x18c4d0u: goto label_18c4d0;
        case 0x18c4d4u: goto label_18c4d4;
        case 0x18c4d8u: goto label_18c4d8;
        case 0x18c4dcu: goto label_18c4dc;
        case 0x18c4e0u: goto label_18c4e0;
        case 0x18c4e4u: goto label_18c4e4;
        case 0x18c4e8u: goto label_18c4e8;
        case 0x18c4ecu: goto label_18c4ec;
        case 0x18c4f0u: goto label_18c4f0;
        case 0x18c4f4u: goto label_18c4f4;
        case 0x18c4f8u: goto label_18c4f8;
        case 0x18c4fcu: goto label_18c4fc;
        case 0x18c500u: goto label_18c500;
        case 0x18c504u: goto label_18c504;
        case 0x18c508u: goto label_18c508;
        case 0x18c50cu: goto label_18c50c;
        case 0x18c510u: goto label_18c510;
        case 0x18c514u: goto label_18c514;
        case 0x18c518u: goto label_18c518;
        case 0x18c51cu: goto label_18c51c;
        case 0x18c520u: goto label_18c520;
        case 0x18c524u: goto label_18c524;
        case 0x18c528u: goto label_18c528;
        case 0x18c52cu: goto label_18c52c;
        case 0x18c530u: goto label_18c530;
        case 0x18c534u: goto label_18c534;
        case 0x18c538u: goto label_18c538;
        case 0x18c53cu: goto label_18c53c;
        case 0x18c540u: goto label_18c540;
        case 0x18c544u: goto label_18c544;
        case 0x18c548u: goto label_18c548;
        case 0x18c54cu: goto label_18c54c;
        case 0x18c550u: goto label_18c550;
        case 0x18c554u: goto label_18c554;
        case 0x18c558u: goto label_18c558;
        case 0x18c55cu: goto label_18c55c;
        case 0x18c560u: goto label_18c560;
        case 0x18c564u: goto label_18c564;
        case 0x18c568u: goto label_18c568;
        case 0x18c56cu: goto label_18c56c;
        case 0x18c570u: goto label_18c570;
        case 0x18c574u: goto label_18c574;
        case 0x18c578u: goto label_18c578;
        case 0x18c57cu: goto label_18c57c;
        case 0x18c580u: goto label_18c580;
        case 0x18c584u: goto label_18c584;
        case 0x18c588u: goto label_18c588;
        case 0x18c58cu: goto label_18c58c;
        case 0x18c590u: goto label_18c590;
        case 0x18c594u: goto label_18c594;
        case 0x18c598u: goto label_18c598;
        case 0x18c59cu: goto label_18c59c;
        case 0x18c5a0u: goto label_18c5a0;
        case 0x18c5a4u: goto label_18c5a4;
        case 0x18c5a8u: goto label_18c5a8;
        case 0x18c5acu: goto label_18c5ac;
        case 0x18c5b0u: goto label_18c5b0;
        case 0x18c5b4u: goto label_18c5b4;
        case 0x18c5b8u: goto label_18c5b8;
        case 0x18c5bcu: goto label_18c5bc;
        case 0x18c5c0u: goto label_18c5c0;
        case 0x18c5c4u: goto label_18c5c4;
        case 0x18c5c8u: goto label_18c5c8;
        case 0x18c5ccu: goto label_18c5cc;
        case 0x18c5d0u: goto label_18c5d0;
        case 0x18c5d4u: goto label_18c5d4;
        case 0x18c5d8u: goto label_18c5d8;
        case 0x18c5dcu: goto label_18c5dc;
        case 0x18c5e0u: goto label_18c5e0;
        case 0x18c5e4u: goto label_18c5e4;
        case 0x18c5e8u: goto label_18c5e8;
        case 0x18c5ecu: goto label_18c5ec;
        case 0x18c5f0u: goto label_18c5f0;
        case 0x18c5f4u: goto label_18c5f4;
        case 0x18c5f8u: goto label_18c5f8;
        case 0x18c5fcu: goto label_18c5fc;
        case 0x18c600u: goto label_18c600;
        case 0x18c604u: goto label_18c604;
        case 0x18c608u: goto label_18c608;
        case 0x18c60cu: goto label_18c60c;
        case 0x18c610u: goto label_18c610;
        case 0x18c614u: goto label_18c614;
        case 0x18c618u: goto label_18c618;
        case 0x18c61cu: goto label_18c61c;
        case 0x18c620u: goto label_18c620;
        case 0x18c624u: goto label_18c624;
        case 0x18c628u: goto label_18c628;
        case 0x18c62cu: goto label_18c62c;
        case 0x18c630u: goto label_18c630;
        case 0x18c634u: goto label_18c634;
        case 0x18c638u: goto label_18c638;
        case 0x18c63cu: goto label_18c63c;
        case 0x18c640u: goto label_18c640;
        case 0x18c644u: goto label_18c644;
        case 0x18c648u: goto label_18c648;
        case 0x18c64cu: goto label_18c64c;
        case 0x18c650u: goto label_18c650;
        case 0x18c654u: goto label_18c654;
        case 0x18c658u: goto label_18c658;
        case 0x18c65cu: goto label_18c65c;
        case 0x18c660u: goto label_18c660;
        case 0x18c664u: goto label_18c664;
        case 0x18c668u: goto label_18c668;
        case 0x18c66cu: goto label_18c66c;
        case 0x18c670u: goto label_18c670;
        case 0x18c674u: goto label_18c674;
        case 0x18c678u: goto label_18c678;
        case 0x18c67cu: goto label_18c67c;
        case 0x18c680u: goto label_18c680;
        case 0x18c684u: goto label_18c684;
        case 0x18c688u: goto label_18c688;
        case 0x18c68cu: goto label_18c68c;
        case 0x18c690u: goto label_18c690;
        case 0x18c694u: goto label_18c694;
        case 0x18c698u: goto label_18c698;
        case 0x18c69cu: goto label_18c69c;
        case 0x18c6a0u: goto label_18c6a0;
        case 0x18c6a4u: goto label_18c6a4;
        case 0x18c6a8u: goto label_18c6a8;
        case 0x18c6acu: goto label_18c6ac;
        case 0x18c6b0u: goto label_18c6b0;
        case 0x18c6b4u: goto label_18c6b4;
        case 0x18c6b8u: goto label_18c6b8;
        case 0x18c6bcu: goto label_18c6bc;
        case 0x18c6c0u: goto label_18c6c0;
        case 0x18c6c4u: goto label_18c6c4;
        case 0x18c6c8u: goto label_18c6c8;
        case 0x18c6ccu: goto label_18c6cc;
        case 0x18c6d0u: goto label_18c6d0;
        case 0x18c6d4u: goto label_18c6d4;
        case 0x18c6d8u: goto label_18c6d8;
        case 0x18c6dcu: goto label_18c6dc;
        case 0x18c6e0u: goto label_18c6e0;
        case 0x18c6e4u: goto label_18c6e4;
        case 0x18c6e8u: goto label_18c6e8;
        case 0x18c6ecu: goto label_18c6ec;
        case 0x18c6f0u: goto label_18c6f0;
        case 0x18c6f4u: goto label_18c6f4;
        case 0x18c6f8u: goto label_18c6f8;
        case 0x18c6fcu: goto label_18c6fc;
        case 0x18c700u: goto label_18c700;
        case 0x18c704u: goto label_18c704;
        case 0x18c708u: goto label_18c708;
        case 0x18c70cu: goto label_18c70c;
        case 0x18c710u: goto label_18c710;
        case 0x18c714u: goto label_18c714;
        case 0x18c718u: goto label_18c718;
        case 0x18c71cu: goto label_18c71c;
        case 0x18c720u: goto label_18c720;
        case 0x18c724u: goto label_18c724;
        case 0x18c728u: goto label_18c728;
        case 0x18c72cu: goto label_18c72c;
        case 0x18c730u: goto label_18c730;
        case 0x18c734u: goto label_18c734;
        case 0x18c738u: goto label_18c738;
        case 0x18c73cu: goto label_18c73c;
        case 0x18c740u: goto label_18c740;
        case 0x18c744u: goto label_18c744;
        case 0x18c748u: goto label_18c748;
        case 0x18c74cu: goto label_18c74c;
        case 0x18c750u: goto label_18c750;
        case 0x18c754u: goto label_18c754;
        case 0x18c758u: goto label_18c758;
        case 0x18c75cu: goto label_18c75c;
        case 0x18c760u: goto label_18c760;
        case 0x18c764u: goto label_18c764;
        case 0x18c768u: goto label_18c768;
        case 0x18c76cu: goto label_18c76c;
        case 0x18c770u: goto label_18c770;
        case 0x18c774u: goto label_18c774;
        case 0x18c778u: goto label_18c778;
        case 0x18c77cu: goto label_18c77c;
        case 0x18c780u: goto label_18c780;
        case 0x18c784u: goto label_18c784;
        case 0x18c788u: goto label_18c788;
        case 0x18c78cu: goto label_18c78c;
        case 0x18c790u: goto label_18c790;
        case 0x18c794u: goto label_18c794;
        case 0x18c798u: goto label_18c798;
        case 0x18c79cu: goto label_18c79c;
        case 0x18c7a0u: goto label_18c7a0;
        case 0x18c7a4u: goto label_18c7a4;
        case 0x18c7a8u: goto label_18c7a8;
        case 0x18c7acu: goto label_18c7ac;
        case 0x18c7b0u: goto label_18c7b0;
        case 0x18c7b4u: goto label_18c7b4;
        case 0x18c7b8u: goto label_18c7b8;
        case 0x18c7bcu: goto label_18c7bc;
        case 0x18c7c0u: goto label_18c7c0;
        case 0x18c7c4u: goto label_18c7c4;
        case 0x18c7c8u: goto label_18c7c8;
        case 0x18c7ccu: goto label_18c7cc;
        case 0x18c7d0u: goto label_18c7d0;
        case 0x18c7d4u: goto label_18c7d4;
        case 0x18c7d8u: goto label_18c7d8;
        case 0x18c7dcu: goto label_18c7dc;
        case 0x18c7e0u: goto label_18c7e0;
        case 0x18c7e4u: goto label_18c7e4;
        case 0x18c7e8u: goto label_18c7e8;
        case 0x18c7ecu: goto label_18c7ec;
        case 0x18c7f0u: goto label_18c7f0;
        case 0x18c7f4u: goto label_18c7f4;
        case 0x18c7f8u: goto label_18c7f8;
        case 0x18c7fcu: goto label_18c7fc;
        case 0x18c800u: goto label_18c800;
        case 0x18c804u: goto label_18c804;
        case 0x18c808u: goto label_18c808;
        case 0x18c80cu: goto label_18c80c;
        case 0x18c810u: goto label_18c810;
        case 0x18c814u: goto label_18c814;
        case 0x18c818u: goto label_18c818;
        case 0x18c81cu: goto label_18c81c;
        case 0x18c820u: goto label_18c820;
        case 0x18c824u: goto label_18c824;
        case 0x18c828u: goto label_18c828;
        case 0x18c82cu: goto label_18c82c;
        case 0x18c830u: goto label_18c830;
        case 0x18c834u: goto label_18c834;
        case 0x18c838u: goto label_18c838;
        case 0x18c83cu: goto label_18c83c;
        case 0x18c840u: goto label_18c840;
        case 0x18c844u: goto label_18c844;
        case 0x18c848u: goto label_18c848;
        case 0x18c84cu: goto label_18c84c;
        case 0x18c850u: goto label_18c850;
        case 0x18c854u: goto label_18c854;
        case 0x18c858u: goto label_18c858;
        case 0x18c85cu: goto label_18c85c;
        case 0x18c860u: goto label_18c860;
        case 0x18c864u: goto label_18c864;
        case 0x18c868u: goto label_18c868;
        case 0x18c86cu: goto label_18c86c;
        case 0x18c870u: goto label_18c870;
        case 0x18c874u: goto label_18c874;
        case 0x18c878u: goto label_18c878;
        case 0x18c87cu: goto label_18c87c;
        case 0x18c880u: goto label_18c880;
        case 0x18c884u: goto label_18c884;
        case 0x18c888u: goto label_18c888;
        case 0x18c88cu: goto label_18c88c;
        case 0x18c890u: goto label_18c890;
        case 0x18c894u: goto label_18c894;
        case 0x18c898u: goto label_18c898;
        case 0x18c89cu: goto label_18c89c;
        case 0x18c8a0u: goto label_18c8a0;
        case 0x18c8a4u: goto label_18c8a4;
        case 0x18c8a8u: goto label_18c8a8;
        case 0x18c8acu: goto label_18c8ac;
        case 0x18c8b0u: goto label_18c8b0;
        case 0x18c8b4u: goto label_18c8b4;
        case 0x18c8b8u: goto label_18c8b8;
        case 0x18c8bcu: goto label_18c8bc;
        case 0x18c8c0u: goto label_18c8c0;
        case 0x18c8c4u: goto label_18c8c4;
        case 0x18c8c8u: goto label_18c8c8;
        case 0x18c8ccu: goto label_18c8cc;
        case 0x18c8d0u: goto label_18c8d0;
        case 0x18c8d4u: goto label_18c8d4;
        case 0x18c8d8u: goto label_18c8d8;
        case 0x18c8dcu: goto label_18c8dc;
        case 0x18c8e0u: goto label_18c8e0;
        case 0x18c8e4u: goto label_18c8e4;
        case 0x18c8e8u: goto label_18c8e8;
        case 0x18c8ecu: goto label_18c8ec;
        case 0x18c8f0u: goto label_18c8f0;
        case 0x18c8f4u: goto label_18c8f4;
        case 0x18c8f8u: goto label_18c8f8;
        case 0x18c8fcu: goto label_18c8fc;
        case 0x18c900u: goto label_18c900;
        case 0x18c904u: goto label_18c904;
        case 0x18c908u: goto label_18c908;
        case 0x18c90cu: goto label_18c90c;
        case 0x18c910u: goto label_18c910;
        case 0x18c914u: goto label_18c914;
        case 0x18c918u: goto label_18c918;
        case 0x18c91cu: goto label_18c91c;
        case 0x18c920u: goto label_18c920;
        case 0x18c924u: goto label_18c924;
        case 0x18c928u: goto label_18c928;
        case 0x18c92cu: goto label_18c92c;
        case 0x18c930u: goto label_18c930;
        case 0x18c934u: goto label_18c934;
        case 0x18c938u: goto label_18c938;
        case 0x18c93cu: goto label_18c93c;
        case 0x18c940u: goto label_18c940;
        case 0x18c944u: goto label_18c944;
        case 0x18c948u: goto label_18c948;
        case 0x18c94cu: goto label_18c94c;
        case 0x18c950u: goto label_18c950;
        case 0x18c954u: goto label_18c954;
        case 0x18c958u: goto label_18c958;
        case 0x18c95cu: goto label_18c95c;
        case 0x18c960u: goto label_18c960;
        case 0x18c964u: goto label_18c964;
        case 0x18c968u: goto label_18c968;
        case 0x18c96cu: goto label_18c96c;
        case 0x18c970u: goto label_18c970;
        case 0x18c974u: goto label_18c974;
        case 0x18c978u: goto label_18c978;
        case 0x18c97cu: goto label_18c97c;
        case 0x18c980u: goto label_18c980;
        case 0x18c984u: goto label_18c984;
        case 0x18c988u: goto label_18c988;
        case 0x18c98cu: goto label_18c98c;
        case 0x18c990u: goto label_18c990;
        case 0x18c994u: goto label_18c994;
        case 0x18c998u: goto label_18c998;
        case 0x18c99cu: goto label_18c99c;
        case 0x18c9a0u: goto label_18c9a0;
        case 0x18c9a4u: goto label_18c9a4;
        case 0x18c9a8u: goto label_18c9a8;
        case 0x18c9acu: goto label_18c9ac;
        case 0x18c9b0u: goto label_18c9b0;
        case 0x18c9b4u: goto label_18c9b4;
        case 0x18c9b8u: goto label_18c9b8;
        case 0x18c9bcu: goto label_18c9bc;
        case 0x18c9c0u: goto label_18c9c0;
        case 0x18c9c4u: goto label_18c9c4;
        case 0x18c9c8u: goto label_18c9c8;
        case 0x18c9ccu: goto label_18c9cc;
        case 0x18c9d0u: goto label_18c9d0;
        case 0x18c9d4u: goto label_18c9d4;
        case 0x18c9d8u: goto label_18c9d8;
        case 0x18c9dcu: goto label_18c9dc;
        case 0x18c9e0u: goto label_18c9e0;
        case 0x18c9e4u: goto label_18c9e4;
        case 0x18c9e8u: goto label_18c9e8;
        case 0x18c9ecu: goto label_18c9ec;
        case 0x18c9f0u: goto label_18c9f0;
        case 0x18c9f4u: goto label_18c9f4;
        case 0x18c9f8u: goto label_18c9f8;
        case 0x18c9fcu: goto label_18c9fc;
        case 0x18ca00u: goto label_18ca00;
        case 0x18ca04u: goto label_18ca04;
        case 0x18ca08u: goto label_18ca08;
        case 0x18ca0cu: goto label_18ca0c;
        case 0x18ca10u: goto label_18ca10;
        case 0x18ca14u: goto label_18ca14;
        case 0x18ca18u: goto label_18ca18;
        case 0x18ca1cu: goto label_18ca1c;
        case 0x18ca20u: goto label_18ca20;
        case 0x18ca24u: goto label_18ca24;
        case 0x18ca28u: goto label_18ca28;
        case 0x18ca2cu: goto label_18ca2c;
        case 0x18ca30u: goto label_18ca30;
        case 0x18ca34u: goto label_18ca34;
        case 0x18ca38u: goto label_18ca38;
        case 0x18ca3cu: goto label_18ca3c;
        case 0x18ca40u: goto label_18ca40;
        case 0x18ca44u: goto label_18ca44;
        case 0x18ca48u: goto label_18ca48;
        case 0x18ca4cu: goto label_18ca4c;
        case 0x18ca50u: goto label_18ca50;
        case 0x18ca54u: goto label_18ca54;
        case 0x18ca58u: goto label_18ca58;
        case 0x18ca5cu: goto label_18ca5c;
        case 0x18ca60u: goto label_18ca60;
        case 0x18ca64u: goto label_18ca64;
        case 0x18ca68u: goto label_18ca68;
        case 0x18ca6cu: goto label_18ca6c;
        case 0x18ca70u: goto label_18ca70;
        case 0x18ca74u: goto label_18ca74;
        case 0x18ca78u: goto label_18ca78;
        case 0x18ca7cu: goto label_18ca7c;
        case 0x18ca80u: goto label_18ca80;
        case 0x18ca84u: goto label_18ca84;
        case 0x18ca88u: goto label_18ca88;
        case 0x18ca8cu: goto label_18ca8c;
        case 0x18ca90u: goto label_18ca90;
        case 0x18ca94u: goto label_18ca94;
        case 0x18ca98u: goto label_18ca98;
        case 0x18ca9cu: goto label_18ca9c;
        case 0x18caa0u: goto label_18caa0;
        case 0x18caa4u: goto label_18caa4;
        case 0x18caa8u: goto label_18caa8;
        case 0x18caacu: goto label_18caac;
        case 0x18cab0u: goto label_18cab0;
        case 0x18cab4u: goto label_18cab4;
        case 0x18cab8u: goto label_18cab8;
        case 0x18cabcu: goto label_18cabc;
        case 0x18cac0u: goto label_18cac0;
        case 0x18cac4u: goto label_18cac4;
        case 0x18cac8u: goto label_18cac8;
        case 0x18caccu: goto label_18cacc;
        case 0x18cad0u: goto label_18cad0;
        case 0x18cad4u: goto label_18cad4;
        case 0x18cad8u: goto label_18cad8;
        case 0x18cadcu: goto label_18cadc;
        case 0x18cae0u: goto label_18cae0;
        case 0x18cae4u: goto label_18cae4;
        case 0x18cae8u: goto label_18cae8;
        case 0x18caecu: goto label_18caec;
        case 0x18caf0u: goto label_18caf0;
        case 0x18caf4u: goto label_18caf4;
        case 0x18caf8u: goto label_18caf8;
        case 0x18cafcu: goto label_18cafc;
        case 0x18cb00u: goto label_18cb00;
        case 0x18cb04u: goto label_18cb04;
        case 0x18cb08u: goto label_18cb08;
        case 0x18cb0cu: goto label_18cb0c;
        case 0x18cb10u: goto label_18cb10;
        case 0x18cb14u: goto label_18cb14;
        case 0x18cb18u: goto label_18cb18;
        case 0x18cb1cu: goto label_18cb1c;
        case 0x18cb20u: goto label_18cb20;
        case 0x18cb24u: goto label_18cb24;
        case 0x18cb28u: goto label_18cb28;
        case 0x18cb2cu: goto label_18cb2c;
        case 0x18cb30u: goto label_18cb30;
        case 0x18cb34u: goto label_18cb34;
        case 0x18cb38u: goto label_18cb38;
        case 0x18cb3cu: goto label_18cb3c;
        case 0x18cb40u: goto label_18cb40;
        case 0x18cb44u: goto label_18cb44;
        case 0x18cb48u: goto label_18cb48;
        case 0x18cb4cu: goto label_18cb4c;
        case 0x18cb50u: goto label_18cb50;
        case 0x18cb54u: goto label_18cb54;
        case 0x18cb58u: goto label_18cb58;
        case 0x18cb5cu: goto label_18cb5c;
        case 0x18cb60u: goto label_18cb60;
        case 0x18cb64u: goto label_18cb64;
        case 0x18cb68u: goto label_18cb68;
        case 0x18cb6cu: goto label_18cb6c;
        case 0x18cb70u: goto label_18cb70;
        case 0x18cb74u: goto label_18cb74;
        case 0x18cb78u: goto label_18cb78;
        case 0x18cb7cu: goto label_18cb7c;
        case 0x18cb80u: goto label_18cb80;
        case 0x18cb84u: goto label_18cb84;
        case 0x18cb88u: goto label_18cb88;
        case 0x18cb8cu: goto label_18cb8c;
        case 0x18cb90u: goto label_18cb90;
        case 0x18cb94u: goto label_18cb94;
        case 0x18cb98u: goto label_18cb98;
        case 0x18cb9cu: goto label_18cb9c;
        case 0x18cba0u: goto label_18cba0;
        case 0x18cba4u: goto label_18cba4;
        case 0x18cba8u: goto label_18cba8;
        case 0x18cbacu: goto label_18cbac;
        case 0x18cbb0u: goto label_18cbb0;
        case 0x18cbb4u: goto label_18cbb4;
        case 0x18cbb8u: goto label_18cbb8;
        case 0x18cbbcu: goto label_18cbbc;
        case 0x18cbc0u: goto label_18cbc0;
        case 0x18cbc4u: goto label_18cbc4;
        case 0x18cbc8u: goto label_18cbc8;
        case 0x18cbccu: goto label_18cbcc;
        default: return;
    }

label_18c400:
    // 0x18c400: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18c404:
    // 0x18c404: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x18c404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_18c408:
    // 0x18c408: 0xae0800b0  sw          $t0, 0xB0($s0)
    ctx->pc = 0x18c408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 8));
label_18c40c:
    // 0x18c40c: 0xae070098  sw          $a3, 0x98($s0)
    ctx->pc = 0x18c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 7));
label_18c410:
    // 0x18c410: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x18c410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
label_18c414:
    // 0x18c414: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x18c414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_18c418:
    // 0x18c418: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x18c418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
label_18c41c:
    // 0x18c41c: 0xae0600e0  sw          $a2, 0xE0($s0)
    ctx->pc = 0x18c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 6));
label_18c420:
    // 0x18c420: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x18c420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_18c424:
    // 0x18c424: 0xc066e26  jal         func_19B898
label_18c428:
    if (ctx->pc == 0x18C428u) {
        ctx->pc = 0x18C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C424u;
        // 0x18c428: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C42Cu;
        goto label_18c42c;
    }
    ctx->pc = 0x18C424u;
    SET_GPR_U32(ctx, 31, 0x18C42Cu);
    ctx->pc = 0x18C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C424u;
    // 0x18c428: 0xae0200d8  sw          $v0, 0xD8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18C42Cu;
label_18c42c:
    // 0x18c42c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18c430:
    // 0x18c430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c434:
    // 0x18c434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18c438:
    // 0x18c438: 0x3e00008  jr          $ra
label_18c43c:
    if (ctx->pc == 0x18C43Cu) {
        ctx->pc = 0x18C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C438u;
        // 0x18c43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C440u;
        goto label_18c440;
    }
    ctx->pc = 0x18C438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C438u;
        // 0x18c43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C440u;
label_18c440:
    // 0x18c440: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18c440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c444:
    // 0x18c444: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18c444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18c448:
    // 0x18c448: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x18c448u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18c44c:
    // 0x18c44c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18c44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18c450:
    // 0x18c450: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18c450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18c454:
    // 0x18c454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18c458:
    // 0x18c458: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18c458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18c45c:
    // 0x18c45c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18c460:
    // 0x18c460: 0xc064224  jal         func_190890
label_18c464:
    if (ctx->pc == 0x18C464u) {
        ctx->pc = 0x18C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C460u;
        // 0x18c464: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C468u;
        goto label_18c468;
    }
    ctx->pc = 0x18C460u;
    SET_GPR_U32(ctx, 31, 0x18C468u);
    ctx->pc = 0x18C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C460u;
    // 0x18c464: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    { ctx->pc = 0x190890; return; }
    ctx->pc = 0x18C468u;
label_18c468:
    // 0x18c468: 0x3c033dab  lui         $v1, 0x3DAB
    ctx->pc = 0x18c468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15787 << 16));
label_18c46c:
    // 0x18c46c: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x18c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_18c470:
    // 0x18c470: 0x346592a6  ori         $a1, $v1, 0x92A6
    ctx->pc = 0x18c470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37542);
label_18c474:
    // 0x18c474: 0xae0500b8  sw          $a1, 0xB8($s0)
    ctx->pc = 0x18c474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 5));
label_18c478:
    // 0x18c478: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x18c478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_18c47c:
    // 0x18c47c: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x18c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_18c480:
    // 0x18c480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c484:
    // 0x18c484: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x18c484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c488:
    // 0x18c488: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x18c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_18c48c:
    // 0x18c48c: 0x3c034226  lui         $v1, 0x4226
    ctx->pc = 0x18c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16934 << 16));
label_18c490:
    // 0x18c490: 0x346327f0  ori         $v1, $v1, 0x27F0
    ctx->pc = 0x18c490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10224);
label_18c494:
    // 0x18c494: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18c498:
    // 0x18c498: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x18c498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_18c49c:
    // 0x18c49c: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x18c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
label_18c4a0:
    // 0x18c4a0: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x18c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_18c4a4:
    // 0x18c4a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18c4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18c4a8:
    // 0x18c4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18c4ac:
    // 0x18c4ac: 0x3e00008  jr          $ra
label_18c4b0:
    if (ctx->pc == 0x18C4B0u) {
        ctx->pc = 0x18C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4ACu;
        // 0x18c4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C4B4u;
        goto label_18c4b4;
    }
    ctx->pc = 0x18C4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4ACu;
        // 0x18c4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C4B4u;
label_18c4b4:
    // 0x18c4b4: 0x0  nop
    ctx->pc = 0x18c4b4u;
    // NOP
label_18c4b8:
    // 0x18c4b8: 0x0  nop
    ctx->pc = 0x18c4b8u;
    // NOP
label_18c4bc:
    // 0x18c4bc: 0x0  nop
    ctx->pc = 0x18c4bcu;
    // NOP
label_18c4c0:
    // 0x18c4c0: 0x3e00008  jr          $ra
label_18c4c4:
    if (ctx->pc == 0x18C4C4u) {
        ctx->pc = 0x18C4C8u;
        goto label_18c4c8;
    }
    ctx->pc = 0x18C4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C4C8u;
label_18c4c8:
    // 0x18c4c8: 0x0  nop
    ctx->pc = 0x18c4c8u;
    // NOP
label_18c4cc:
    // 0x18c4cc: 0x0  nop
    ctx->pc = 0x18c4ccu;
    // NOP
label_18c4d0:
    // 0x18c4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18c4d4:
    // 0x18c4d4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c4d8:
    // 0x18c4d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18c4dc:
    // 0x18c4dc: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x18c4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18c4e0:
    // 0x18c4e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18c4e4:
    // 0x18c4e4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x18c4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_18c4e8:
    // 0x18c4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18c4ec:
    // 0x18c4ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18c4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18c4f0:
    // 0x18c4f0: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x18c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_18c4f4:
    // 0x18c4f4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x18c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_18c4f8:
    // 0x18c4f8: 0x24a52cc0  addiu       $a1, $a1, 0x2CC0
    ctx->pc = 0x18c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11456));
label_18c4fc:
    // 0x18c4fc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_18c500:
    if (ctx->pc == 0x18C500u) {
        ctx->pc = 0x18C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4FCu;
        // 0x18c500: 0xa68021  addu        $s0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C504u;
        goto label_18c504;
    }
    ctx->pc = 0x18C4FCu;
    {
        const bool branch_taken_0x18c4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4FCu;
        // 0x18c500: 0xa68021  addu        $s0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4fc) {
            ctx->pc = 0x18C548u;
            goto label_18c548;
        }
    }
    ctx->pc = 0x18C504u;
label_18c504:
    // 0x18c504: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x18c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_18c508:
    // 0x18c508: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_18c50c:
    if (ctx->pc == 0x18C50Cu) {
        ctx->pc = 0x18C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C508u;
        // 0x18c50c: 0x240300b4  addiu       $v1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C510u;
        goto label_18c510;
    }
    ctx->pc = 0x18C508u;
    {
        const bool branch_taken_0x18c508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C508u;
        // 0x18c50c: 0x240300b4  addiu       $v1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c508) {
            ctx->pc = 0x18C51Cu;
            goto label_18c51c;
        }
    }
    ctx->pc = 0x18C510u;
label_18c510:
    // 0x18c510: 0xc064224  jal         func_190890
label_18c514:
    if (ctx->pc == 0x18C514u) {
        ctx->pc = 0x18C518u;
        goto label_18c518;
    }
    ctx->pc = 0x18C510u;
    SET_GPR_U32(ctx, 31, 0x18C518u);
    ctx->pc = 0x190890u;
    { ctx->pc = 0x190890; return; }
    ctx->pc = 0x18C518u;
label_18c518:
    // 0x18c518: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x18c518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_18c51c:
    // 0x18c51c: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x18c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_18c520:
    // 0x18c520: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x18c520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_18c524:
    // 0x18c524: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x18c524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
label_18c528:
    // 0x18c528: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x18c528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_18c52c:
    // 0x18c52c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x18c52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_18c530:
    // 0x18c530: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x18c530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
label_18c534:
    // 0x18c534: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x18c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18c538:
    // 0x18c538: 0x3c034226  lui         $v1, 0x4226
    ctx->pc = 0x18c538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16934 << 16));
label_18c53c:
    // 0x18c53c: 0x346327f0  ori         $v1, $v1, 0x27F0
    ctx->pc = 0x18c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10224);
label_18c540:
    // 0x18c540: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x18c540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_18c544:
    // 0x18c544: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x18c544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_18c548:
    // 0x18c548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18c54c:
    // 0x18c54c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c550:
    // 0x18c550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18c554:
    // 0x18c554: 0x3e00008  jr          $ra
label_18c558:
    if (ctx->pc == 0x18C558u) {
        ctx->pc = 0x18C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C554u;
        // 0x18c558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C55Cu;
        goto label_18c55c;
    }
    ctx->pc = 0x18C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C554u;
        // 0x18c558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C55Cu;
label_18c55c:
    // 0x18c55c: 0x0  nop
    ctx->pc = 0x18c55cu;
    // NOP
label_18c560:
    // 0x18c560: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x18c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_18c564:
    // 0x18c564: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18c564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c568:
    // 0x18c568: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18c56c:
    // 0x18c56c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18c570:
    // 0x18c570: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18c574:
    // 0x18c574: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18c574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c578:
    // 0x18c578: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_18c57c:
    // 0x18c57c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18c57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18c580:
    // 0x18c580: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18c580u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18c584:
    // 0x18c584: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x18c584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_18c588:
    // 0x18c588: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18c588u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18c58c:
    // 0x18c58c: 0x24a52cc0  addiu       $a1, $a1, 0x2CC0
    ctx->pc = 0x18c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11456));
label_18c590:
    // 0x18c590: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x18c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_18c594:
    // 0x18c594: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
label_18c598:
    if (ctx->pc == 0x18C598u) {
        ctx->pc = 0x18C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C594u;
        // 0x18c598: 0xa48021  addu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C59Cu;
        goto label_18c59c;
    }
    ctx->pc = 0x18C594u;
    {
        const bool branch_taken_0x18c594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C594u;
        // 0x18c598: 0xa48021  addu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c594) {
            ctx->pc = 0x18C864u;
            goto label_18c864;
        }
    }
    ctx->pc = 0x18C59Cu;
label_18c59c:
    // 0x18c59c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x18c59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_18c5a0:
    // 0x18c5a0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x18c5a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_18c5a4:
    // 0x18c5a4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18c5a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18c5a8:
    // 0x18c5a8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18c5a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18c5ac:
    // 0x18c5ac: 0x4a0002ff  vnop
    ctx->pc = 0x18c5acu;
    // NOP operation, no action needed for VU0
label_18c5b0:
    // 0x18c5b0: 0x4a0002ff  vnop
    ctx->pc = 0x18c5b0u;
    // NOP operation, no action needed for VU0
label_18c5b4:
    // 0x18c5b4: 0x4a0002ff  vnop
    ctx->pc = 0x18c5b4u;
    // NOP operation, no action needed for VU0
label_18c5b8:
    // 0x18c5b8: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18c5b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18c5bc:
    // 0x18c5bc: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18c5bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18c5c0:
    // 0x18c5c0: 0x4a0002ff  vnop
    ctx->pc = 0x18c5c0u;
    // NOP operation, no action needed for VU0
label_18c5c4:
    // 0x18c5c4: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18c5c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18c5c8:
    // 0x18c5c8: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18c5c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18c5cc:
    // 0x18c5cc: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18c5ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18c5d0:
    // 0x18c5d0: 0x4a0002ff  vnop
    ctx->pc = 0x18c5d0u;
    // NOP operation, no action needed for VU0
label_18c5d4:
    // 0x18c5d4: 0x4a0002ff  vnop
    ctx->pc = 0x18c5d4u;
    // NOP operation, no action needed for VU0
label_18c5d8:
    // 0x18c5d8: 0x4a0002ff  vnop
    ctx->pc = 0x18c5d8u;
    // NOP operation, no action needed for VU0
label_18c5dc:
    // 0x18c5dc: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18c5dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18c5e0:
    // 0x18c5e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x18c5e0u;
    // VWAITQ (Q already resolved in this runtime)
label_18c5e4:
    // 0x18c5e4: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18c5e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18c5e8:
    // 0x18c5e8: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18c5e8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c5ec:
    // 0x18c5ec: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x18c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_18c5f0:
    // 0x18c5f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c5f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c5f4:
    // 0x18c5f4: 0x0  nop
    ctx->pc = 0x18c5f4u;
    // NOP
label_18c5f8:
    // 0x18c5f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c5fc:
    // 0x18c5fc: 0x0  nop
    ctx->pc = 0x18c5fcu;
    // NOP
label_18c600:
    // 0x18c600: 0x45010098  bc1t        . + 4 + (0x98 << 2)
label_18c604:
    if (ctx->pc == 0x18C604u) {
        ctx->pc = 0x18C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C600u;
        // 0x18c604: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C608u;
        goto label_18c608;
    }
    ctx->pc = 0x18C600u;
    {
        const bool branch_taken_0x18c600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C600u;
        // 0x18c604: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c600) {
            ctx->pc = 0x18C864u;
            goto label_18c864;
        }
    }
    ctx->pc = 0x18C608u;
label_18c608:
    // 0x18c608: 0xc066e08  jal         func_19B820
label_18c60c:
    if (ctx->pc == 0x18C60Cu) {
        ctx->pc = 0x18C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C608u;
        // 0x18c60c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C610u;
        goto label_18c610;
    }
    ctx->pc = 0x18C608u;
    SET_GPR_U32(ctx, 31, 0x18C610u);
    ctx->pc = 0x18C60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C608u;
    // 0x18c60c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18C610u;
label_18c610:
    // 0x18c610: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18c610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18c614:
    // 0x18c614: 0xc066daa  jal         func_19B6A8
label_18c618:
    if (ctx->pc == 0x18C618u) {
        ctx->pc = 0x18C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C614u;
        // 0x18c618: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C61Cu;
        goto label_18c61c;
    }
    ctx->pc = 0x18C614u;
    SET_GPR_U32(ctx, 31, 0x18C61Cu);
    ctx->pc = 0x18C618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C614u;
    // 0x18c618: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18C61Cu;
label_18c61c:
    // 0x18c61c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x18c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_18c620:
    // 0x18c620: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18c620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18c624:
    // 0x18c624: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18c628:
    // 0x18c628: 0xc066e14  jal         func_19B850
label_18c62c:
    if (ctx->pc == 0x18C62Cu) {
        ctx->pc = 0x18C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C628u;
        // 0x18c62c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C630u;
        goto label_18c630;
    }
    ctx->pc = 0x18C628u;
    SET_GPR_U32(ctx, 31, 0x18C630u);
    ctx->pc = 0x18C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C628u;
    // 0x18c62c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18C630u;
label_18c630:
    // 0x18c630: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18c630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18c634:
    // 0x18c634: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18c634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c638:
    // 0x18c638: 0xc066e02  jal         func_19B808
label_18c63c:
    if (ctx->pc == 0x18C63Cu) {
        ctx->pc = 0x18C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C638u;
        // 0x18c63c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C640u;
        goto label_18c640;
    }
    ctx->pc = 0x18C638u;
    SET_GPR_U32(ctx, 31, 0x18C640u);
    ctx->pc = 0x18C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C638u;
    // 0x18c63c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18C640u;
label_18c640:
    // 0x18c640: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x18c640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18c644:
    // 0x18c644: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x18c644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_18c648:
    // 0x18c648: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18c648u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18c64c:
    // 0x18c64c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18c64cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18c650:
    // 0x18c650: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18c650u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18c654:
    // 0x18c654: 0x4a0002ff  vnop
    ctx->pc = 0x18c654u;
    // NOP operation, no action needed for VU0
label_18c658:
    // 0x18c658: 0x4a0002ff  vnop
    ctx->pc = 0x18c658u;
    // NOP operation, no action needed for VU0
label_18c65c:
    // 0x18c65c: 0x4a0002ff  vnop
    ctx->pc = 0x18c65cu;
    // NOP operation, no action needed for VU0
label_18c660:
    // 0x18c660: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18c660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18c664:
    // 0x18c664: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18c664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18c668:
    // 0x18c668: 0x4a0002ff  vnop
    ctx->pc = 0x18c668u;
    // NOP operation, no action needed for VU0
label_18c66c:
    // 0x18c66c: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18c66cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18c670:
    // 0x18c670: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18c670u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18c674:
    // 0x18c674: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18c674u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18c678:
    // 0x18c678: 0x4a0002ff  vnop
    ctx->pc = 0x18c678u;
    // NOP operation, no action needed for VU0
label_18c67c:
    // 0x18c67c: 0x4a0002ff  vnop
    ctx->pc = 0x18c67cu;
    // NOP operation, no action needed for VU0
label_18c680:
    // 0x18c680: 0x4a0002ff  vnop
    ctx->pc = 0x18c680u;
    // NOP operation, no action needed for VU0
label_18c684:
    // 0x18c684: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18c684u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18c688:
    // 0x18c688: 0x4a0003bf  vwaitq
    ctx->pc = 0x18c688u;
    // VWAITQ (Q already resolved in this runtime)
label_18c68c:
    // 0x18c68c: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18c68cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18c690:
    // 0x18c690: 0x4489a800  mtc1        $t1, $f21
    ctx->pc = 0x18c690u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_18c694:
    // 0x18c694: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x18c694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_18c698:
    // 0x18c698: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_18c69c:
    if (ctx->pc == 0x18C69Cu) {
        ctx->pc = 0x18C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C698u;
        // 0x18c69c: 0x2c410121  sltiu       $at, $v0, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)289) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C6A0u;
        goto label_18c6a0;
    }
    ctx->pc = 0x18C698u;
    {
        const bool branch_taken_0x18c698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C698u;
        // 0x18c69c: 0x2c410121  sltiu       $at, $v0, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)289) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c698) {
            ctx->pc = 0x18C770u;
            goto label_18c770;
        }
    }
    ctx->pc = 0x18C6A0u;
label_18c6a0:
    // 0x18c6a0: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x18c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_18c6a4:
    // 0x18c6a4: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x18c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_18c6a8:
    // 0x18c6a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18c6a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18c6ac:
    // 0x18c6ac: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x18c6acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_18c6b0:
    // 0x18c6b0: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18c6b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18c6b4:
    // 0x18c6b4: 0x4a0002ff  vnop
    ctx->pc = 0x18c6b4u;
    // NOP operation, no action needed for VU0
label_18c6b8:
    // 0x18c6b8: 0x4a0002ff  vnop
    ctx->pc = 0x18c6b8u;
    // NOP operation, no action needed for VU0
label_18c6bc:
    // 0x18c6bc: 0x4a0002ff  vnop
    ctx->pc = 0x18c6bcu;
    // NOP operation, no action needed for VU0
label_18c6c0:
    // 0x18c6c0: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18c6c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18c6c4:
    // 0x18c6c4: 0x4a0002ff  vnop
    ctx->pc = 0x18c6c4u;
    // NOP operation, no action needed for VU0
label_18c6c8:
    // 0x18c6c8: 0x4a0002ff  vnop
    ctx->pc = 0x18c6c8u;
    // NOP operation, no action needed for VU0
label_18c6cc:
    // 0x18c6cc: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18c6ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18c6d0:
    // 0x18c6d0: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18c6d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18c6d4:
    // 0x18c6d4: 0x4a0002ff  vnop
    ctx->pc = 0x18c6d4u;
    // NOP operation, no action needed for VU0
label_18c6d8:
    // 0x18c6d8: 0x4a0002ff  vnop
    ctx->pc = 0x18c6d8u;
    // NOP operation, no action needed for VU0
label_18c6dc:
    // 0x18c6dc: 0x4a0002ff  vnop
    ctx->pc = 0x18c6dcu;
    // NOP operation, no action needed for VU0
label_18c6e0:
    // 0x18c6e0: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18c6e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18c6e4:
    // 0x18c6e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x18c6e4u;
    // VWAITQ (Q already resolved in this runtime)
label_18c6e8:
    // 0x18c6e8: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18c6e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18c6ec:
    // 0x18c6ec: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18c6ecu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c6f0:
    // 0x18c6f0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x18c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_18c6f4:
    // 0x18c6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c6f8:
    // 0x18c6f8: 0x0  nop
    ctx->pc = 0x18c6f8u;
    // NOP
label_18c6fc:
    // 0x18c6fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18c6fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c700:
    // 0x18c700: 0x0  nop
    ctx->pc = 0x18c700u;
    // NOP
label_18c704:
    // 0x18c704: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_18c708:
    if (ctx->pc == 0x18C708u) {
        ctx->pc = 0x18C70Cu;
        goto label_18c70c;
    }
    ctx->pc = 0x18C704u;
    {
        const bool branch_taken_0x18c704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c704) {
            ctx->pc = 0x18C77Cu;
            goto label_18c77c;
        }
    }
    ctx->pc = 0x18C70Cu;
label_18c70c:
    // 0x18c70c: 0xc6140034  lwc1        $f20, 0x34($s0)
    ctx->pc = 0x18c70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18c710:
    // 0x18c710: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18c710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18c714:
    // 0x18c714: 0xc066e08  jal         func_19B820
label_18c718:
    if (ctx->pc == 0x18C718u) {
        ctx->pc = 0x18C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C714u;
        // 0x18c718: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C71Cu;
        goto label_18c71c;
    }
    ctx->pc = 0x18C714u;
    SET_GPR_U32(ctx, 31, 0x18C71Cu);
    ctx->pc = 0x18C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C714u;
    // 0x18c718: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18C71Cu;
label_18c71c:
    // 0x18c71c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18c720:
    // 0x18c720: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x18c720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_18c724:
    // 0x18c724: 0xc066daa  jal         func_19B6A8
label_18c728:
    if (ctx->pc == 0x18C728u) {
        ctx->pc = 0x18C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C724u;
        // 0x18c728: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C72Cu;
        goto label_18c72c;
    }
    ctx->pc = 0x18C724u;
    SET_GPR_U32(ctx, 31, 0x18C72Cu);
    ctx->pc = 0x18C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C724u;
    // 0x18c728: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18C72Cu;
label_18c72c:
    // 0x18c72c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x18c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
label_18c730:
    // 0x18c730: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18c730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18c734:
    // 0x18c734: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18c738:
    // 0x18c738: 0xc066e14  jal         func_19B850
label_18c73c:
    if (ctx->pc == 0x18C73Cu) {
        ctx->pc = 0x18C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C738u;
        // 0x18c73c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C740u;
        goto label_18c740;
    }
    ctx->pc = 0x18C738u;
    SET_GPR_U32(ctx, 31, 0x18C740u);
    ctx->pc = 0x18C73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C738u;
    // 0x18c73c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18C740u;
label_18c740:
    // 0x18c740: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x18c740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_18c744:
    // 0x18c744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18c744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c748:
    // 0x18c748: 0xc066e02  jal         func_19B808
label_18c74c:
    if (ctx->pc == 0x18C74Cu) {
        ctx->pc = 0x18C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C748u;
        // 0x18c74c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C750u;
        goto label_18c750;
    }
    ctx->pc = 0x18C748u;
    SET_GPR_U32(ctx, 31, 0x18C750u);
    ctx->pc = 0x18C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C748u;
    // 0x18c74c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18C750u;
label_18c750:
    // 0x18c750: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x18c750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
label_18c754:
    // 0x18c754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c758:
    // 0x18c758: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18c75c:
    // 0x18c75c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18c75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c760:
    // 0x18c760: 0xc064324  jal         func_190C90
label_18c764:
    if (ctx->pc == 0x18C764u) {
        ctx->pc = 0x18C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C760u;
        // 0x18c764: 0xe6140034  swc1        $f20, 0x34($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C768u;
        goto label_18c768;
    }
    ctx->pc = 0x18C760u;
    SET_GPR_U32(ctx, 31, 0x18C768u);
    ctx->pc = 0x18C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C760u;
    // 0x18c764: 0xe6140034  swc1        $f20, 0x34($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    { ctx->pc = 0x190c90; return; }
    ctx->pc = 0x18C768u;
label_18c768:
    // 0x18c768: 0x10000005  b           . + 4 + (0x5 << 2)
label_18c76c:
    if (ctx->pc == 0x18C76Cu) {
        ctx->pc = 0x18C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C768u;
        // 0x18c76c: 0x8e0200a8  lw          $v0, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C770u;
        goto label_18c770;
    }
    ctx->pc = 0x18C768u;
    {
        const bool branch_taken_0x18c768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C768u;
        // 0x18c76c: 0x8e0200a8  lw          $v0, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c768) {
            ctx->pc = 0x18C780u;
            goto label_18c780;
        }
    }
    ctx->pc = 0x18C770u;
label_18c770:
    // 0x18c770: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_18c774:
    if (ctx->pc == 0x18C774u) {
        ctx->pc = 0x18C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C770u;
        // 0x18c774: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C778u;
        goto label_18c778;
    }
    ctx->pc = 0x18C770u;
    {
        const bool branch_taken_0x18c770 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C770u;
        // 0x18c774: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c770) {
            ctx->pc = 0x18C77Cu;
            goto label_18c77c;
        }
    }
    ctx->pc = 0x18C778u;
label_18c778:
    // 0x18c778: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x18c778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_18c77c:
    // 0x18c77c: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x18c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_18c780:
    // 0x18c780: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_18c784:
    if (ctx->pc == 0x18C784u) {
        ctx->pc = 0x18C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C780u;
        // 0x18c784: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C788u;
        goto label_18c788;
    }
    ctx->pc = 0x18C780u;
    {
        const bool branch_taken_0x18c780 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C780u;
        // 0x18c784: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c780) {
            ctx->pc = 0x18C794u;
            goto label_18c794;
        }
    }
    ctx->pc = 0x18C788u;
label_18c788:
    // 0x18c788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c78c:
    // 0x18c78c: 0x10000007  b           . + 4 + (0x7 << 2)
label_18c790:
    if (ctx->pc == 0x18C790u) {
        ctx->pc = 0x18C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C78Cu;
        // 0x18c790: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C794u;
        goto label_18c794;
    }
    ctx->pc = 0x18C78Cu;
    {
        const bool branch_taken_0x18c78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C78Cu;
        // 0x18c790: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c78c) {
            ctx->pc = 0x18C7ACu;
            goto label_18c7ac;
        }
    }
    ctx->pc = 0x18C794u;
label_18c794:
    // 0x18c794: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18c794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18c798:
    // 0x18c798: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18c79c:
    // 0x18c79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c7a0:
    // 0x18c7a0: 0x0  nop
    ctx->pc = 0x18c7a0u;
    // NOP
label_18c7a4:
    // 0x18c7a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18c7a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18c7a8:
    // 0x18c7a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18c7a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18c7ac:
    // 0x18c7ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x18c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_18c7b0:
    // 0x18c7b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18c7b4:
    // 0x18c7b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c7b8:
    // 0x18c7b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18c7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c7bc:
    // 0x18c7bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18c7bcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_18c7c0:
    // 0x18c7c0: 0x0  nop
    ctx->pc = 0x18c7c0u;
    // NOP
label_18c7c4:
    // 0x18c7c4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x18c7c4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_18c7c8:
    // 0x18c7c8: 0xc066e14  jal         func_19B850
label_18c7cc:
    if (ctx->pc == 0x18C7CCu) {
        ctx->pc = 0x18C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7C8u;
        // 0x18c7cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7D0u;
        goto label_18c7d0;
    }
    ctx->pc = 0x18C7C8u;
    SET_GPR_U32(ctx, 31, 0x18C7D0u);
    ctx->pc = 0x18C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7C8u;
    // 0x18c7cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18C7D0u;
label_18c7d0:
    // 0x18c7d0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x18c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_18c7d4:
    // 0x18c7d4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x18c7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18c7d8:
    // 0x18c7d8: 0xc066e02  jal         func_19B808
label_18c7dc:
    if (ctx->pc == 0x18C7DCu) {
        ctx->pc = 0x18C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7D8u;
        // 0x18c7dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7E0u;
        goto label_18c7e0;
    }
    ctx->pc = 0x18C7D8u;
    SET_GPR_U32(ctx, 31, 0x18C7E0u);
    ctx->pc = 0x18C7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7D8u;
    // 0x18c7dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18C7E0u;
label_18c7e0:
    // 0x18c7e0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18c7e4:
    // 0x18c7e4: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x18c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18c7e8:
    // 0x18c7e8: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x18c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_18c7ec:
    // 0x18c7ec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18c7f0:
    // 0x18c7f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18c7f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18c7f4:
    // 0x18c7f4: 0xc066e44  jal         func_19B910
label_18c7f8:
    if (ctx->pc == 0x18C7F8u) {
        ctx->pc = 0x18C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7F4u;
        // 0x18c7f8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C7FCu;
        goto label_18c7fc;
    }
    ctx->pc = 0x18C7F4u;
    SET_GPR_U32(ctx, 31, 0x18C7FCu);
    ctx->pc = 0x18C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7F4u;
    // 0x18c7f8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x18C7FCu;
label_18c7fc:
    // 0x18c7fc: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x18c7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18c800:
    // 0x18c800: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18c800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18c804:
    // 0x18c804: 0xc066e6c  jal         func_19B9B0
label_18c808:
    if (ctx->pc == 0x18C808u) {
        ctx->pc = 0x18C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C804u;
        // 0x18c808: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C80Cu;
        goto label_18c80c;
    }
    ctx->pc = 0x18C804u;
    SET_GPR_U32(ctx, 31, 0x18C80Cu);
    ctx->pc = 0x18C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C804u;
    // 0x18c808: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x18C80Cu;
label_18c80c:
    // 0x18c80c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x18c80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18c810:
    // 0x18c810: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18c810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18c814:
    // 0x18c814: 0xc066e96  jal         func_19BA58
label_18c818:
    if (ctx->pc == 0x18C818u) {
        ctx->pc = 0x18C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C814u;
        // 0x18c818: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C81Cu;
        goto label_18c81c;
    }
    ctx->pc = 0x18C814u;
    SET_GPR_U32(ctx, 31, 0x18C81Cu);
    ctx->pc = 0x18C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C814u;
    // 0x18c818: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x18C81Cu;
label_18c81c:
    // 0x18c81c: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x18c81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18c820:
    // 0x18c820: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18c820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18c824:
    // 0x18c824: 0xc066ec0  jal         func_19BB00
label_18c828:
    if (ctx->pc == 0x18C828u) {
        ctx->pc = 0x18C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C824u;
        // 0x18c828: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C82Cu;
        goto label_18c82c;
    }
    ctx->pc = 0x18C824u;
    SET_GPR_U32(ctx, 31, 0x18C82Cu);
    ctx->pc = 0x18C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C824u;
    // 0x18c828: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x18C82Cu;
label_18c82c:
    // 0x18c82c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18c830:
    // 0x18c830: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x18c830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18c834:
    // 0x18c834: 0xc066d7a  jal         func_19B5E8
label_18c838:
    if (ctx->pc == 0x18C838u) {
        ctx->pc = 0x18C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C834u;
        // 0x18c838: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C83Cu;
        goto label_18c83c;
    }
    ctx->pc = 0x18C834u;
    SET_GPR_U32(ctx, 31, 0x18C83Cu);
    ctx->pc = 0x18C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C834u;
    // 0x18c838: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x18C83Cu;
label_18c83c:
    // 0x18c83c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x18c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_18c840:
    // 0x18c840: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x18c840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_18c844:
    // 0x18c844: 0xc066e02  jal         func_19B808
label_18c848:
    if (ctx->pc == 0x18C848u) {
        ctx->pc = 0x18C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C844u;
        // 0x18c848: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C84Cu;
        goto label_18c84c;
    }
    ctx->pc = 0x18C844u;
    SET_GPR_U32(ctx, 31, 0x18C84Cu);
    ctx->pc = 0x18C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C844u;
    // 0x18c848: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18C84Cu;
label_18c84c:
    // 0x18c84c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18c850:
    // 0x18c850: 0xc0643e4  jal         func_190F90
label_18c854:
    if (ctx->pc == 0x18C854u) {
        ctx->pc = 0x18C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C850u;
        // 0x18c854: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C858u;
        goto label_18c858;
    }
    ctx->pc = 0x18C850u;
    SET_GPR_U32(ctx, 31, 0x18C858u);
    ctx->pc = 0x18C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C850u;
    // 0x18c854: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190F90u;
    { ctx->pc = 0x190f90; return; }
    ctx->pc = 0x18C858u;
label_18c858:
    // 0x18c858: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x18c858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_18c85c:
    // 0x18c85c: 0xc066e26  jal         func_19B898
label_18c860:
    if (ctx->pc == 0x18C860u) {
        ctx->pc = 0x18C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C85Cu;
        // 0x18c860: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C864u;
        goto label_18c864;
    }
    ctx->pc = 0x18C85Cu;
    SET_GPR_U32(ctx, 31, 0x18C864u);
    ctx->pc = 0x18C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C85Cu;
    // 0x18c860: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18C864u;
label_18c864:
    // 0x18c864: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18c864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18c868:
    // 0x18c868: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18c86c:
    // 0x18c86c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18c86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18c870:
    // 0x18c870: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18c870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18c874:
    // 0x18c874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c878:
    // 0x18c878: 0x3e00008  jr          $ra
label_18c87c:
    if (ctx->pc == 0x18C87Cu) {
        ctx->pc = 0x18C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C878u;
        // 0x18c87c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C880u;
        goto label_18c880;
    }
    ctx->pc = 0x18C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C878u;
        // 0x18c87c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C880u;
label_18c880:
    // 0x18c880: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x18c880u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c884:
    // 0x18c884: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x18c884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_18c888:
    // 0x18c888: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x18c888u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_18c88c:
    // 0x18c88c: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x18c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
label_18c890:
    // 0x18c890: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18c890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c894:
    // 0x18c894: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18c894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18c898:
    // 0x18c898: 0x8c6300b0  lw          $v1, 0xB0($v1)
    ctx->pc = 0x18c898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_18c89c:
    // 0x18c89c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_18c8a0:
    if (ctx->pc == 0x18C8A0u) {
        ctx->pc = 0x18C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C89Cu;
        // 0x18c8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8A4u;
        goto label_18c8a4;
    }
    ctx->pc = 0x18C89Cu;
    {
        const bool branch_taken_0x18c89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C89Cu;
        // 0x18c8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c89c) {
            ctx->pc = 0x18C8A8u;
            goto label_18c8a8;
        }
    }
    ctx->pc = 0x18C8A4u;
label_18c8a4:
    // 0x18c8a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18c8a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c8a8:
    // 0x18c8a8: 0x3e00008  jr          $ra
label_18c8ac:
    if (ctx->pc == 0x18C8ACu) {
        ctx->pc = 0x18C8B0u;
        goto label_18c8b0;
    }
    ctx->pc = 0x18C8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C8B0u;
label_18c8b0:
    // 0x18c8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18c8b4:
    // 0x18c8b4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c8b8:
    // 0x18c8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18c8bc:
    // 0x18c8bc: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x18c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18c8c0:
    // 0x18c8c0: 0x8f8588b0  lw          $a1, -0x7750($gp)
    ctx->pc = 0x18c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936752)));
label_18c8c4:
    // 0x18c8c4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18c8c8:
    // 0x18c8c8: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18c8cc:
    // 0x18c8cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18c8d0:
    // 0x18c8d0: 0xc064ba0  jal         func_192E80
label_18c8d4:
    if (ctx->pc == 0x18C8D4u) {
        ctx->pc = 0x18C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8D0u;
        // 0x18c8d4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8D8u;
        goto label_18c8d8;
    }
    ctx->pc = 0x18C8D0u;
    SET_GPR_U32(ctx, 31, 0x18C8D8u);
    ctx->pc = 0x18C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8D0u;
    // 0x18c8d4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192E80u;
    { ctx->pc = 0x192e80; return; }
    ctx->pc = 0x18C8D8u;
label_18c8d8:
    // 0x18c8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18c8dc:
    // 0x18c8dc: 0x3e00008  jr          $ra
label_18c8e0:
    if (ctx->pc == 0x18C8E0u) {
        ctx->pc = 0x18C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8DCu;
        // 0x18c8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8E4u;
        goto label_18c8e4;
    }
    ctx->pc = 0x18C8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8DCu;
        // 0x18c8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C8E4u;
label_18c8e4:
    // 0x18c8e4: 0x0  nop
    ctx->pc = 0x18c8e4u;
    // NOP
label_18c8e8:
    // 0x18c8e8: 0x0  nop
    ctx->pc = 0x18c8e8u;
    // NOP
label_18c8ec:
    // 0x18c8ec: 0x0  nop
    ctx->pc = 0x18c8ecu;
    // NOP
label_18c8f0:
    // 0x18c8f0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c8f4:
    // 0x18c8f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c8f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18c8f8:
    // 0x18c8f8: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x18c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18c8fc:
    // 0x18c8fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18c900:
    // 0x18c900: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18c904:
    // 0x18c904: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x18c904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18c908:
    // 0x18c908: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18c908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18c90c:
    // 0x18c90c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18c910:
    // 0x18c910: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x18c910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18c914:
    // 0x18c914: 0x278288b8  addiu       $v0, $gp, -0x7748
    ctx->pc = 0x18c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936760));
label_18c918:
    // 0x18c918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18c91c:
    // 0x18c91c: 0xc064ba0  jal         func_192E80
label_18c920:
    if (ctx->pc == 0x18C920u) {
        ctx->pc = 0x18C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C91Cu;
        // 0x18c920: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C924u;
        goto label_18c924;
    }
    ctx->pc = 0x18C91Cu;
    SET_GPR_U32(ctx, 31, 0x18C924u);
    ctx->pc = 0x18C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C91Cu;
    // 0x18c920: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192E80u;
    { ctx->pc = 0x192e80; return; }
    ctx->pc = 0x18C924u;
label_18c924:
    // 0x18c924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18c928:
    // 0x18c928: 0x3e00008  jr          $ra
label_18c92c:
    if (ctx->pc == 0x18C92Cu) {
        ctx->pc = 0x18C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C928u;
        // 0x18c92c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C930u;
        goto label_18c930;
    }
    ctx->pc = 0x18C928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C928u;
        // 0x18c92c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C930u;
label_18c930:
    // 0x18c930: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18c930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18c934:
    // 0x18c934: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18c938:
    // 0x18c938: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x18c938u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18c93c:
    // 0x18c93c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18c940:
    // 0x18c940: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18c940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18c944:
    // 0x18c944: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18c944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18c948:
    // 0x18c948: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18c948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18c94c:
    // 0x18c94c: 0xc063258  jal         func_18C960
label_18c950:
    if (ctx->pc == 0x18C950u) {
        ctx->pc = 0x18C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C94Cu;
        // 0x18c950: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C954u;
        goto label_18c954;
    }
    ctx->pc = 0x18C94Cu;
    SET_GPR_U32(ctx, 31, 0x18C954u);
    ctx->pc = 0x18C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C94Cu;
    // 0x18c950: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C960u;
    goto label_18c960;
    ctx->pc = 0x18C954u;
label_18c954:
    // 0x18c954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18c958:
    // 0x18c958: 0x3e00008  jr          $ra
label_18c95c:
    if (ctx->pc == 0x18C95Cu) {
        ctx->pc = 0x18C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C958u;
        // 0x18c95c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C960u;
        goto label_18c960;
    }
    ctx->pc = 0x18C958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C958u;
        // 0x18c95c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C960u;
label_18c960:
    // 0x18c960: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x18c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_18c964:
    // 0x18c964: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18c964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18c968:
    // 0x18c968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18c96c:
    // 0x18c96c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18c970:
    // 0x18c970: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18c970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c974:
    // 0x18c974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18c978:
    // 0x18c978: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18c978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18c97c:
    // 0x18c97c: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x18c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
label_18c980:
    // 0x18c980: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x18c980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
label_18c984:
    // 0x18c984: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x18c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_18c988:
    // 0x18c988: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18c98c:
    if (ctx->pc == 0x18C98Cu) {
        ctx->pc = 0x18C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C988u;
        // 0x18c98c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C990u;
        goto label_18c990;
    }
    ctx->pc = 0x18C988u;
    {
        const bool branch_taken_0x18c988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C988u;
        // 0x18c98c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c988) {
            ctx->pc = 0x18C998u;
            goto label_18c998;
        }
    }
    ctx->pc = 0x18C990u;
label_18c990:
    // 0x18c990: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_18c994:
    if (ctx->pc == 0x18C994u) {
        ctx->pc = 0x18C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C990u;
        // 0x18c994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C998u;
        goto label_18c998;
    }
    ctx->pc = 0x18C990u;
    {
        const bool branch_taken_0x18c990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C990u;
        // 0x18c994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c990) {
            ctx->pc = 0x18CC64u;
            { ctx->pc = 0x18cc64; return; }
        }
    }
    ctx->pc = 0x18C998u;
label_18c998:
    // 0x18c998: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x18c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_18c99c:
    // 0x18c99c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18c9a0:
    if (ctx->pc == 0x18C9A0u) {
        ctx->pc = 0x18C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C99Cu;
        // 0x18c9a0: 0x3c034226  lui         $v1, 0x4226 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16934 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C9A4u;
        goto label_18c9a4;
    }
    ctx->pc = 0x18C99Cu;
    {
        const bool branch_taken_0x18c99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C99Cu;
        // 0x18c9a0: 0x3c034226  lui         $v1, 0x4226 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16934 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c99c) {
            ctx->pc = 0x18C9ACu;
            goto label_18c9ac;
        }
    }
    ctx->pc = 0x18C9A4u;
label_18c9a4:
    // 0x18c9a4: 0x100000af  b           . + 4 + (0xAF << 2)
label_18c9a8:
    if (ctx->pc == 0x18C9A8u) {
        ctx->pc = 0x18C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9A4u;
        // 0x18c9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C9ACu;
        goto label_18c9ac;
    }
    ctx->pc = 0x18C9A4u;
    {
        const bool branch_taken_0x18c9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9A4u;
        // 0x18c9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9a4) {
            ctx->pc = 0x18CC64u;
            { ctx->pc = 0x18cc64; return; }
        }
    }
    ctx->pc = 0x18C9ACu;
label_18c9ac:
    // 0x18c9ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18c9b0:
    // 0x18c9b0: 0x346327f0  ori         $v1, $v1, 0x27F0
    ctx->pc = 0x18c9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10224);
label_18c9b4:
    // 0x18c9b4: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x18c9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_18c9b8:
    // 0x18c9b8: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x18c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
label_18c9bc:
    // 0x18c9bc: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x18c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_18c9c0:
    // 0x18c9c0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x18c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_18c9c4:
    // 0x18c9c4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x18c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_18c9c8:
    // 0x18c9c8: 0xc066e26  jal         func_19B898
label_18c9cc:
    if (ctx->pc == 0x18C9CCu) {
        ctx->pc = 0x18C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9C8u;
        // 0x18c9cc: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C9D0u;
        goto label_18c9d0;
    }
    ctx->pc = 0x18C9C8u;
    SET_GPR_U32(ctx, 31, 0x18C9D0u);
    ctx->pc = 0x18C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C9C8u;
    // 0x18c9cc: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18C9D0u;
label_18c9d0:
    // 0x18c9d0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x18c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18c9d4:
    // 0x18c9d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18c9d8:
    // 0x18c9d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18c9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18c9dc:
    // 0x18c9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c9e0:
    // 0x18c9e0: 0x0  nop
    ctx->pc = 0x18c9e0u;
    // NOP
label_18c9e4:
    // 0x18c9e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18c9e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c9e8:
    // 0x18c9e8: 0x0  nop
    ctx->pc = 0x18c9e8u;
    // NOP
label_18c9ec:
    // 0x18c9ec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18c9f0:
    if (ctx->pc == 0x18C9F0u) {
        ctx->pc = 0x18C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9ECu;
        // 0x18c9f0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C9F4u;
        goto label_18c9f4;
    }
    ctx->pc = 0x18C9ECu;
    {
        const bool branch_taken_0x18c9ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9ECu;
        // 0x18c9f0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9ec) {
            ctx->pc = 0x18CA08u;
            goto label_18ca08;
        }
    }
    ctx->pc = 0x18C9F4u;
label_18c9f4:
    // 0x18c9f4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18c9f8:
    // 0x18c9f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18c9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18c9fc:
    // 0x18c9fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ca00:
    // 0x18ca00: 0x1000000d  b           . + 4 + (0xD << 2)
label_18ca04:
    if (ctx->pc == 0x18CA04u) {
        ctx->pc = 0x18CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA00u;
        // 0x18ca04: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CA08u;
        goto label_18ca08;
    }
    ctx->pc = 0x18CA00u;
    {
        const bool branch_taken_0x18ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA00u;
        // 0x18ca04: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca00) {
            ctx->pc = 0x18CA38u;
            goto label_18ca38;
        }
    }
    ctx->pc = 0x18CA08u;
label_18ca08:
    // 0x18ca08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ca0c:
    // 0x18ca0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ca10:
    // 0x18ca10: 0x0  nop
    ctx->pc = 0x18ca10u;
    // NOP
label_18ca14:
    // 0x18ca14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ca14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ca18:
    // 0x18ca18: 0x0  nop
    ctx->pc = 0x18ca18u;
    // NOP
label_18ca1c:
    // 0x18ca1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18ca20:
    if (ctx->pc == 0x18CA20u) {
        ctx->pc = 0x18CA24u;
        goto label_18ca24;
    }
    ctx->pc = 0x18CA1Cu;
    {
        const bool branch_taken_0x18ca1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ca1c) {
            ctx->pc = 0x18CA38u;
            goto label_18ca38;
        }
    }
    ctx->pc = 0x18CA24u;
label_18ca24:
    // 0x18ca24: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18ca28:
    // 0x18ca28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ca2c:
    // 0x18ca2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ca30:
    // 0x18ca30: 0x0  nop
    ctx->pc = 0x18ca30u;
    // NOP
label_18ca34:
    // 0x18ca34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18ca34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18ca38:
    // 0x18ca38: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x18ca38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_18ca3c:
    // 0x18ca3c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18ca40:
    // 0x18ca40: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x18ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ca44:
    // 0x18ca44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ca48:
    // 0x18ca48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ca4c:
    // 0x18ca4c: 0x0  nop
    ctx->pc = 0x18ca4cu;
    // NOP
label_18ca50:
    // 0x18ca50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ca50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ca54:
    // 0x18ca54: 0x0  nop
    ctx->pc = 0x18ca54u;
    // NOP
label_18ca58:
    // 0x18ca58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18ca5c:
    if (ctx->pc == 0x18CA5Cu) {
        ctx->pc = 0x18CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA58u;
        // 0x18ca5c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CA60u;
        goto label_18ca60;
    }
    ctx->pc = 0x18CA58u;
    {
        const bool branch_taken_0x18ca58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA58u;
        // 0x18ca5c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca58) {
            ctx->pc = 0x18CA74u;
            goto label_18ca74;
        }
    }
    ctx->pc = 0x18CA60u;
label_18ca60:
    // 0x18ca60: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18ca64:
    // 0x18ca64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ca68:
    // 0x18ca68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ca6c:
    // 0x18ca6c: 0x1000000d  b           . + 4 + (0xD << 2)
label_18ca70:
    if (ctx->pc == 0x18CA70u) {
        ctx->pc = 0x18CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA6Cu;
        // 0x18ca70: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CA74u;
        goto label_18ca74;
    }
    ctx->pc = 0x18CA6Cu;
    {
        const bool branch_taken_0x18ca6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA6Cu;
        // 0x18ca70: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca6c) {
            ctx->pc = 0x18CAA4u;
            goto label_18caa4;
        }
    }
    ctx->pc = 0x18CA74u;
label_18ca74:
    // 0x18ca74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ca78:
    // 0x18ca78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ca7c:
    // 0x18ca7c: 0x0  nop
    ctx->pc = 0x18ca7cu;
    // NOP
label_18ca80:
    // 0x18ca80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ca80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ca84:
    // 0x18ca84: 0x0  nop
    ctx->pc = 0x18ca84u;
    // NOP
label_18ca88:
    // 0x18ca88: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18ca8c:
    if (ctx->pc == 0x18CA8Cu) {
        ctx->pc = 0x18CA90u;
        goto label_18ca90;
    }
    ctx->pc = 0x18CA88u;
    {
        const bool branch_taken_0x18ca88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ca88) {
            ctx->pc = 0x18CAA4u;
            goto label_18caa4;
        }
    }
    ctx->pc = 0x18CA90u;
label_18ca90:
    // 0x18ca90: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18ca94:
    // 0x18ca94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ca98:
    // 0x18ca98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ca9c:
    // 0x18ca9c: 0x0  nop
    ctx->pc = 0x18ca9cu;
    // NOP
label_18caa0:
    // 0x18caa0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18caa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18caa4:
    // 0x18caa4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x18caa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_18caa8:
    // 0x18caa8: 0xc066e44  jal         func_19B910
label_18caac:
    if (ctx->pc == 0x18CAACu) {
        ctx->pc = 0x18CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAA8u;
        // 0x18caac: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CAB0u;
        goto label_18cab0;
    }
    ctx->pc = 0x18CAA8u;
    SET_GPR_U32(ctx, 31, 0x18CAB0u);
    ctx->pc = 0x18CAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAA8u;
    // 0x18caac: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x18CAB0u;
label_18cab0:
    // 0x18cab0: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x18cab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18cab4:
    // 0x18cab4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18cab8:
    // 0x18cab8: 0xc066e96  jal         func_19BA58
label_18cabc:
    if (ctx->pc == 0x18CABCu) {
        ctx->pc = 0x18CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAB8u;
        // 0x18cabc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CAC0u;
        goto label_18cac0;
    }
    ctx->pc = 0x18CAB8u;
    SET_GPR_U32(ctx, 31, 0x18CAC0u);
    ctx->pc = 0x18CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAB8u;
    // 0x18cabc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x18CAC0u;
label_18cac0:
    // 0x18cac0: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x18cac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18cac4:
    // 0x18cac4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18cac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18cac8:
    // 0x18cac8: 0xc066ec0  jal         func_19BB00
label_18cacc:
    if (ctx->pc == 0x18CACCu) {
        ctx->pc = 0x18CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAC8u;
        // 0x18cacc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CAD0u;
        goto label_18cad0;
    }
    ctx->pc = 0x18CAC8u;
    SET_GPR_U32(ctx, 31, 0x18CAD0u);
    ctx->pc = 0x18CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAC8u;
    // 0x18cacc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x18CAD0u;
label_18cad0:
    // 0x18cad0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18cad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18cad4:
    // 0x18cad4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x18cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18cad8:
    // 0x18cad8: 0xc066d7a  jal         func_19B5E8
label_18cadc:
    if (ctx->pc == 0x18CADCu) {
        ctx->pc = 0x18CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAD8u;
        // 0x18cadc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CAE0u;
        goto label_18cae0;
    }
    ctx->pc = 0x18CAD8u;
    SET_GPR_U32(ctx, 31, 0x18CAE0u);
    ctx->pc = 0x18CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAD8u;
    // 0x18cadc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x18CAE0u;
label_18cae0:
    // 0x18cae0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18cae4:
    // 0x18cae4: 0xc066daa  jal         func_19B6A8
label_18cae8:
    if (ctx->pc == 0x18CAE8u) {
        ctx->pc = 0x18CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAE4u;
        // 0x18cae8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CAECu;
        goto label_18caec;
    }
    ctx->pc = 0x18CAE4u;
    SET_GPR_U32(ctx, 31, 0x18CAECu);
    ctx->pc = 0x18CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAE4u;
    // 0x18cae8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18CAECu;
label_18caec:
    // 0x18caec: 0x3c024384  lui         $v0, 0x4384
    ctx->pc = 0x18caecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17284 << 16));
label_18caf0:
    // 0x18caf0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18caf4:
    // 0x18caf4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18caf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_18caf8:
    // 0x18caf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18caf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18cafc:
    // 0x18cafc: 0xc066e14  jal         func_19B850
label_18cb00:
    if (ctx->pc == 0x18CB00u) {
        ctx->pc = 0x18CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAFCu;
        // 0x18cb00: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB04u;
        goto label_18cb04;
    }
    ctx->pc = 0x18CAFCu;
    SET_GPR_U32(ctx, 31, 0x18CB04u);
    ctx->pc = 0x18CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAFCu;
    // 0x18cb00: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18CB04u;
label_18cb04:
    // 0x18cb04: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x18cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
label_18cb08:
    // 0x18cb08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18cb0c:
    // 0x18cb0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18cb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18cb10:
    // 0x18cb10: 0xc066e14  jal         func_19B850
label_18cb14:
    if (ctx->pc == 0x18CB14u) {
        ctx->pc = 0x18CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB10u;
        // 0x18cb14: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB18u;
        goto label_18cb18;
    }
    ctx->pc = 0x18CB10u;
    SET_GPR_U32(ctx, 31, 0x18CB18u);
    ctx->pc = 0x18CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB10u;
    // 0x18cb14: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18CB18u;
label_18cb18:
    // 0x18cb18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18cb1c:
    // 0x18cb1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18cb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18cb20:
    // 0x18cb20: 0xc066e02  jal         func_19B808
label_18cb24:
    if (ctx->pc == 0x18CB24u) {
        ctx->pc = 0x18CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB20u;
        // 0x18cb24: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB28u;
        goto label_18cb28;
    }
    ctx->pc = 0x18CB20u;
    SET_GPR_U32(ctx, 31, 0x18CB28u);
    ctx->pc = 0x18CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB20u;
    // 0x18cb24: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18CB28u;
label_18cb28:
    // 0x18cb28: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18cb2c:
    // 0x18cb2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18cb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18cb30:
    // 0x18cb30: 0xc066e02  jal         func_19B808
label_18cb34:
    if (ctx->pc == 0x18CB34u) {
        ctx->pc = 0x18CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB30u;
        // 0x18cb34: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB38u;
        goto label_18cb38;
    }
    ctx->pc = 0x18CB30u;
    SET_GPR_U32(ctx, 31, 0x18CB38u);
    ctx->pc = 0x18CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB30u;
    // 0x18cb34: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18CB38u;
label_18cb38:
    // 0x18cb38: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x18cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18cb3c:
    // 0x18cb3c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x18cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_18cb40:
    // 0x18cb40: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x18cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18cb44:
    // 0x18cb44: 0x3c034260  lui         $v1, 0x4260
    ctx->pc = 0x18cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16992 << 16));
label_18cb48:
    // 0x18cb48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18cb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18cb4c:
    // 0x18cb4c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x18cb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18cb50:
    // 0x18cb50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18cb50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cb54:
    // 0x18cb54: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x18cb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18cb58:
    // 0x18cb58: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18cb5c:
    // 0x18cb5c: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18cb60:
    // 0x18cb60: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x18cb60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_18cb64:
    // 0x18cb64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18cb64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18cb68:
    // 0x18cb68: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x18cb68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_18cb6c:
    // 0x18cb6c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18cb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_18cb70:
    // 0x18cb70: 0x8e4400e8  lw          $a0, 0xE8($s2)
    ctx->pc = 0x18cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_18cb74:
    // 0x18cb74: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18cb78:
    // 0x18cb78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18cb7c:
    // 0x18cb7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18cb80:
    // 0x18cb80: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x18cb80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cb84:
    // 0x18cb84: 0xc08e93e  jal         func_23A4F8
label_18cb88:
    if (ctx->pc == 0x18CB88u) {
        ctx->pc = 0x18CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB84u;
        // 0x18cb88: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB8Cu;
        goto label_18cb8c;
    }
    ctx->pc = 0x18CB84u;
    SET_GPR_U32(ctx, 31, 0x18CB8Cu);
    ctx->pc = 0x18CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB84u;
    // 0x18cb88: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x18CB8Cu;
label_18cb8c:
    // 0x18cb8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18cb90:
    // 0x18cb90: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x18cb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_18cb94:
    // 0x18cb94: 0xc066e08  jal         func_19B820
label_18cb98:
    if (ctx->pc == 0x18CB98u) {
        ctx->pc = 0x18CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB94u;
        // 0x18cb98: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB9Cu;
        goto label_18cb9c;
    }
    ctx->pc = 0x18CB94u;
    SET_GPR_U32(ctx, 31, 0x18CB9Cu);
    ctx->pc = 0x18CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB94u;
    // 0x18cb98: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18CB9Cu;
label_18cb9c:
    // 0x18cb9c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x18cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18cba0:
    // 0x18cba0: 0x27b100b8  addiu       $s1, $sp, 0xB8
    ctx->pc = 0x18cba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_18cba4:
    // 0x18cba4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x18cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18cba8:
    // 0x18cba8: 0xc7ac00b4  lwc1        $f12, 0xB4($sp)
    ctx->pc = 0x18cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18cbac:
    // 0x18cbac: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18cbacu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18cbb0:
    // 0x18cbb0: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x18cbb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18cbb4:
    // 0x18cbb4: 0x46000344  c1          0x344
    ctx->pc = 0x18cbb4u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_18cbb8:
    // 0x18cbb8: 0x0  nop
    ctx->pc = 0x18cbb8u;
    // NOP
label_18cbbc:
    // 0x18cbbc: 0x0  nop
    ctx->pc = 0x18cbbcu;
    // NOP
label_18cbc0:
    // 0x18cbc0: 0xc06d51e  jal         func_1B5478
label_18cbc4:
    if (ctx->pc == 0x18CBC4u) {
        ctx->pc = 0x18CBC8u;
        goto label_18cbc8;
    }
    ctx->pc = 0x18CBC0u;
    SET_GPR_U32(ctx, 31, 0x18CBC8u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18CBC8u;
label_18cbc8:
    // 0x18cbc8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18cbc8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18cbcc:
    // 0x18cbcc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x18cbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->pc = 0x18cbd0u;
    return;
}
