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


void FUN_0017d410_part425(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24c490u: goto label_24c490;
        case 0x24c494u: goto label_24c494;
        case 0x24c498u: goto label_24c498;
        case 0x24c49cu: goto label_24c49c;
        case 0x24c4a0u: goto label_24c4a0;
        case 0x24c4a4u: goto label_24c4a4;
        case 0x24c4a8u: goto label_24c4a8;
        case 0x24c4acu: goto label_24c4ac;
        case 0x24c4b0u: goto label_24c4b0;
        case 0x24c4b4u: goto label_24c4b4;
        case 0x24c4b8u: goto label_24c4b8;
        case 0x24c4bcu: goto label_24c4bc;
        case 0x24c4c0u: goto label_24c4c0;
        case 0x24c4c4u: goto label_24c4c4;
        case 0x24c4c8u: goto label_24c4c8;
        case 0x24c4ccu: goto label_24c4cc;
        case 0x24c4d0u: goto label_24c4d0;
        case 0x24c4d4u: goto label_24c4d4;
        case 0x24c4d8u: goto label_24c4d8;
        case 0x24c4dcu: goto label_24c4dc;
        case 0x24c4e0u: goto label_24c4e0;
        case 0x24c4e4u: goto label_24c4e4;
        case 0x24c4e8u: goto label_24c4e8;
        case 0x24c4ecu: goto label_24c4ec;
        case 0x24c4f0u: goto label_24c4f0;
        case 0x24c4f4u: goto label_24c4f4;
        case 0x24c4f8u: goto label_24c4f8;
        case 0x24c4fcu: goto label_24c4fc;
        case 0x24c500u: goto label_24c500;
        case 0x24c504u: goto label_24c504;
        case 0x24c508u: goto label_24c508;
        case 0x24c50cu: goto label_24c50c;
        case 0x24c510u: goto label_24c510;
        case 0x24c514u: goto label_24c514;
        case 0x24c518u: goto label_24c518;
        case 0x24c51cu: goto label_24c51c;
        case 0x24c520u: goto label_24c520;
        case 0x24c524u: goto label_24c524;
        case 0x24c528u: goto label_24c528;
        case 0x24c52cu: goto label_24c52c;
        case 0x24c530u: goto label_24c530;
        case 0x24c534u: goto label_24c534;
        case 0x24c538u: goto label_24c538;
        case 0x24c53cu: goto label_24c53c;
        case 0x24c540u: goto label_24c540;
        case 0x24c544u: goto label_24c544;
        case 0x24c548u: goto label_24c548;
        case 0x24c54cu: goto label_24c54c;
        case 0x24c550u: goto label_24c550;
        case 0x24c554u: goto label_24c554;
        case 0x24c558u: goto label_24c558;
        case 0x24c55cu: goto label_24c55c;
        case 0x24c560u: goto label_24c560;
        case 0x24c564u: goto label_24c564;
        case 0x24c568u: goto label_24c568;
        case 0x24c56cu: goto label_24c56c;
        case 0x24c570u: goto label_24c570;
        case 0x24c574u: goto label_24c574;
        case 0x24c578u: goto label_24c578;
        case 0x24c57cu: goto label_24c57c;
        case 0x24c580u: goto label_24c580;
        case 0x24c584u: goto label_24c584;
        case 0x24c588u: goto label_24c588;
        case 0x24c58cu: goto label_24c58c;
        case 0x24c590u: goto label_24c590;
        case 0x24c594u: goto label_24c594;
        case 0x24c598u: goto label_24c598;
        case 0x24c59cu: goto label_24c59c;
        case 0x24c5a0u: goto label_24c5a0;
        case 0x24c5a4u: goto label_24c5a4;
        case 0x24c5a8u: goto label_24c5a8;
        case 0x24c5acu: goto label_24c5ac;
        case 0x24c5b0u: goto label_24c5b0;
        case 0x24c5b4u: goto label_24c5b4;
        case 0x24c5b8u: goto label_24c5b8;
        case 0x24c5bcu: goto label_24c5bc;
        case 0x24c5c0u: goto label_24c5c0;
        case 0x24c5c4u: goto label_24c5c4;
        case 0x24c5c8u: goto label_24c5c8;
        case 0x24c5ccu: goto label_24c5cc;
        case 0x24c5d0u: goto label_24c5d0;
        case 0x24c5d4u: goto label_24c5d4;
        case 0x24c5d8u: goto label_24c5d8;
        case 0x24c5dcu: goto label_24c5dc;
        case 0x24c5e0u: goto label_24c5e0;
        case 0x24c5e4u: goto label_24c5e4;
        case 0x24c5e8u: goto label_24c5e8;
        case 0x24c5ecu: goto label_24c5ec;
        case 0x24c5f0u: goto label_24c5f0;
        case 0x24c5f4u: goto label_24c5f4;
        case 0x24c5f8u: goto label_24c5f8;
        case 0x24c5fcu: goto label_24c5fc;
        case 0x24c600u: goto label_24c600;
        case 0x24c604u: goto label_24c604;
        case 0x24c608u: goto label_24c608;
        case 0x24c60cu: goto label_24c60c;
        case 0x24c610u: goto label_24c610;
        case 0x24c614u: goto label_24c614;
        case 0x24c618u: goto label_24c618;
        case 0x24c61cu: goto label_24c61c;
        case 0x24c620u: goto label_24c620;
        case 0x24c624u: goto label_24c624;
        case 0x24c628u: goto label_24c628;
        case 0x24c62cu: goto label_24c62c;
        case 0x24c630u: goto label_24c630;
        case 0x24c634u: goto label_24c634;
        case 0x24c638u: goto label_24c638;
        case 0x24c63cu: goto label_24c63c;
        case 0x24c640u: goto label_24c640;
        case 0x24c644u: goto label_24c644;
        case 0x24c648u: goto label_24c648;
        case 0x24c64cu: goto label_24c64c;
        case 0x24c650u: goto label_24c650;
        case 0x24c654u: goto label_24c654;
        case 0x24c658u: goto label_24c658;
        case 0x24c65cu: goto label_24c65c;
        case 0x24c660u: goto label_24c660;
        case 0x24c664u: goto label_24c664;
        case 0x24c668u: goto label_24c668;
        case 0x24c66cu: goto label_24c66c;
        case 0x24c670u: goto label_24c670;
        case 0x24c674u: goto label_24c674;
        case 0x24c678u: goto label_24c678;
        case 0x24c67cu: goto label_24c67c;
        case 0x24c680u: goto label_24c680;
        case 0x24c684u: goto label_24c684;
        case 0x24c688u: goto label_24c688;
        case 0x24c68cu: goto label_24c68c;
        case 0x24c690u: goto label_24c690;
        case 0x24c694u: goto label_24c694;
        case 0x24c698u: goto label_24c698;
        case 0x24c69cu: goto label_24c69c;
        case 0x24c6a0u: goto label_24c6a0;
        case 0x24c6a4u: goto label_24c6a4;
        case 0x24c6a8u: goto label_24c6a8;
        case 0x24c6acu: goto label_24c6ac;
        case 0x24c6b0u: goto label_24c6b0;
        case 0x24c6b4u: goto label_24c6b4;
        case 0x24c6b8u: goto label_24c6b8;
        case 0x24c6bcu: goto label_24c6bc;
        case 0x24c6c0u: goto label_24c6c0;
        case 0x24c6c4u: goto label_24c6c4;
        case 0x24c6c8u: goto label_24c6c8;
        case 0x24c6ccu: goto label_24c6cc;
        case 0x24c6d0u: goto label_24c6d0;
        case 0x24c6d4u: goto label_24c6d4;
        case 0x24c6d8u: goto label_24c6d8;
        case 0x24c6dcu: goto label_24c6dc;
        case 0x24c6e0u: goto label_24c6e0;
        case 0x24c6e4u: goto label_24c6e4;
        case 0x24c6e8u: goto label_24c6e8;
        case 0x24c6ecu: goto label_24c6ec;
        case 0x24c6f0u: goto label_24c6f0;
        case 0x24c6f4u: goto label_24c6f4;
        case 0x24c6f8u: goto label_24c6f8;
        case 0x24c6fcu: goto label_24c6fc;
        case 0x24c700u: goto label_24c700;
        case 0x24c704u: goto label_24c704;
        case 0x24c708u: goto label_24c708;
        case 0x24c70cu: goto label_24c70c;
        case 0x24c710u: goto label_24c710;
        case 0x24c714u: goto label_24c714;
        case 0x24c718u: goto label_24c718;
        case 0x24c71cu: goto label_24c71c;
        case 0x24c720u: goto label_24c720;
        case 0x24c724u: goto label_24c724;
        case 0x24c728u: goto label_24c728;
        case 0x24c72cu: goto label_24c72c;
        case 0x24c730u: goto label_24c730;
        case 0x24c734u: goto label_24c734;
        case 0x24c738u: goto label_24c738;
        case 0x24c73cu: goto label_24c73c;
        case 0x24c740u: goto label_24c740;
        case 0x24c744u: goto label_24c744;
        case 0x24c748u: goto label_24c748;
        case 0x24c74cu: goto label_24c74c;
        case 0x24c750u: goto label_24c750;
        case 0x24c754u: goto label_24c754;
        case 0x24c758u: goto label_24c758;
        case 0x24c75cu: goto label_24c75c;
        case 0x24c760u: goto label_24c760;
        case 0x24c764u: goto label_24c764;
        case 0x24c768u: goto label_24c768;
        case 0x24c76cu: goto label_24c76c;
        case 0x24c770u: goto label_24c770;
        case 0x24c774u: goto label_24c774;
        case 0x24c778u: goto label_24c778;
        case 0x24c77cu: goto label_24c77c;
        case 0x24c780u: goto label_24c780;
        case 0x24c784u: goto label_24c784;
        case 0x24c788u: goto label_24c788;
        case 0x24c78cu: goto label_24c78c;
        case 0x24c790u: goto label_24c790;
        case 0x24c794u: goto label_24c794;
        case 0x24c798u: goto label_24c798;
        case 0x24c79cu: goto label_24c79c;
        case 0x24c7a0u: goto label_24c7a0;
        case 0x24c7a4u: goto label_24c7a4;
        case 0x24c7a8u: goto label_24c7a8;
        case 0x24c7acu: goto label_24c7ac;
        case 0x24c7b0u: goto label_24c7b0;
        case 0x24c7b4u: goto label_24c7b4;
        case 0x24c7b8u: goto label_24c7b8;
        case 0x24c7bcu: goto label_24c7bc;
        case 0x24c7c0u: goto label_24c7c0;
        case 0x24c7c4u: goto label_24c7c4;
        case 0x24c7c8u: goto label_24c7c8;
        case 0x24c7ccu: goto label_24c7cc;
        case 0x24c7d0u: goto label_24c7d0;
        case 0x24c7d4u: goto label_24c7d4;
        case 0x24c7d8u: goto label_24c7d8;
        case 0x24c7dcu: goto label_24c7dc;
        case 0x24c7e0u: goto label_24c7e0;
        case 0x24c7e4u: goto label_24c7e4;
        case 0x24c7e8u: goto label_24c7e8;
        case 0x24c7ecu: goto label_24c7ec;
        case 0x24c7f0u: goto label_24c7f0;
        case 0x24c7f4u: goto label_24c7f4;
        case 0x24c7f8u: goto label_24c7f8;
        case 0x24c7fcu: goto label_24c7fc;
        case 0x24c800u: goto label_24c800;
        case 0x24c804u: goto label_24c804;
        case 0x24c808u: goto label_24c808;
        case 0x24c80cu: goto label_24c80c;
        case 0x24c810u: goto label_24c810;
        case 0x24c814u: goto label_24c814;
        case 0x24c818u: goto label_24c818;
        case 0x24c81cu: goto label_24c81c;
        case 0x24c820u: goto label_24c820;
        case 0x24c824u: goto label_24c824;
        case 0x24c828u: goto label_24c828;
        case 0x24c82cu: goto label_24c82c;
        case 0x24c830u: goto label_24c830;
        case 0x24c834u: goto label_24c834;
        case 0x24c838u: goto label_24c838;
        case 0x24c83cu: goto label_24c83c;
        case 0x24c840u: goto label_24c840;
        case 0x24c844u: goto label_24c844;
        case 0x24c848u: goto label_24c848;
        case 0x24c84cu: goto label_24c84c;
        case 0x24c850u: goto label_24c850;
        case 0x24c854u: goto label_24c854;
        case 0x24c858u: goto label_24c858;
        case 0x24c85cu: goto label_24c85c;
        case 0x24c860u: goto label_24c860;
        case 0x24c864u: goto label_24c864;
        case 0x24c868u: goto label_24c868;
        case 0x24c86cu: goto label_24c86c;
        case 0x24c870u: goto label_24c870;
        case 0x24c874u: goto label_24c874;
        case 0x24c878u: goto label_24c878;
        case 0x24c87cu: goto label_24c87c;
        case 0x24c880u: goto label_24c880;
        case 0x24c884u: goto label_24c884;
        case 0x24c888u: goto label_24c888;
        case 0x24c88cu: goto label_24c88c;
        case 0x24c890u: goto label_24c890;
        case 0x24c894u: goto label_24c894;
        case 0x24c898u: goto label_24c898;
        case 0x24c89cu: goto label_24c89c;
        case 0x24c8a0u: goto label_24c8a0;
        case 0x24c8a4u: goto label_24c8a4;
        case 0x24c8a8u: goto label_24c8a8;
        case 0x24c8acu: goto label_24c8ac;
        case 0x24c8b0u: goto label_24c8b0;
        case 0x24c8b4u: goto label_24c8b4;
        case 0x24c8b8u: goto label_24c8b8;
        case 0x24c8bcu: goto label_24c8bc;
        case 0x24c8c0u: goto label_24c8c0;
        case 0x24c8c4u: goto label_24c8c4;
        case 0x24c8c8u: goto label_24c8c8;
        case 0x24c8ccu: goto label_24c8cc;
        case 0x24c8d0u: goto label_24c8d0;
        case 0x24c8d4u: goto label_24c8d4;
        case 0x24c8d8u: goto label_24c8d8;
        case 0x24c8dcu: goto label_24c8dc;
        case 0x24c8e0u: goto label_24c8e0;
        case 0x24c8e4u: goto label_24c8e4;
        case 0x24c8e8u: goto label_24c8e8;
        case 0x24c8ecu: goto label_24c8ec;
        case 0x24c8f0u: goto label_24c8f0;
        case 0x24c8f4u: goto label_24c8f4;
        case 0x24c8f8u: goto label_24c8f8;
        case 0x24c8fcu: goto label_24c8fc;
        case 0x24c900u: goto label_24c900;
        case 0x24c904u: goto label_24c904;
        case 0x24c908u: goto label_24c908;
        case 0x24c90cu: goto label_24c90c;
        case 0x24c910u: goto label_24c910;
        case 0x24c914u: goto label_24c914;
        case 0x24c918u: goto label_24c918;
        case 0x24c91cu: goto label_24c91c;
        case 0x24c920u: goto label_24c920;
        case 0x24c924u: goto label_24c924;
        case 0x24c928u: goto label_24c928;
        case 0x24c92cu: goto label_24c92c;
        case 0x24c930u: goto label_24c930;
        case 0x24c934u: goto label_24c934;
        case 0x24c938u: goto label_24c938;
        case 0x24c93cu: goto label_24c93c;
        case 0x24c940u: goto label_24c940;
        case 0x24c944u: goto label_24c944;
        case 0x24c948u: goto label_24c948;
        case 0x24c94cu: goto label_24c94c;
        case 0x24c950u: goto label_24c950;
        case 0x24c954u: goto label_24c954;
        case 0x24c958u: goto label_24c958;
        case 0x24c95cu: goto label_24c95c;
        case 0x24c960u: goto label_24c960;
        case 0x24c964u: goto label_24c964;
        case 0x24c968u: goto label_24c968;
        case 0x24c96cu: goto label_24c96c;
        case 0x24c970u: goto label_24c970;
        case 0x24c974u: goto label_24c974;
        case 0x24c978u: goto label_24c978;
        case 0x24c97cu: goto label_24c97c;
        case 0x24c980u: goto label_24c980;
        case 0x24c984u: goto label_24c984;
        case 0x24c988u: goto label_24c988;
        case 0x24c98cu: goto label_24c98c;
        case 0x24c990u: goto label_24c990;
        case 0x24c994u: goto label_24c994;
        case 0x24c998u: goto label_24c998;
        case 0x24c99cu: goto label_24c99c;
        case 0x24c9a0u: goto label_24c9a0;
        case 0x24c9a4u: goto label_24c9a4;
        case 0x24c9a8u: goto label_24c9a8;
        case 0x24c9acu: goto label_24c9ac;
        case 0x24c9b0u: goto label_24c9b0;
        case 0x24c9b4u: goto label_24c9b4;
        case 0x24c9b8u: goto label_24c9b8;
        case 0x24c9bcu: goto label_24c9bc;
        case 0x24c9c0u: goto label_24c9c0;
        case 0x24c9c4u: goto label_24c9c4;
        case 0x24c9c8u: goto label_24c9c8;
        case 0x24c9ccu: goto label_24c9cc;
        case 0x24c9d0u: goto label_24c9d0;
        case 0x24c9d4u: goto label_24c9d4;
        case 0x24c9d8u: goto label_24c9d8;
        case 0x24c9dcu: goto label_24c9dc;
        case 0x24c9e0u: goto label_24c9e0;
        case 0x24c9e4u: goto label_24c9e4;
        case 0x24c9e8u: goto label_24c9e8;
        case 0x24c9ecu: goto label_24c9ec;
        case 0x24c9f0u: goto label_24c9f0;
        case 0x24c9f4u: goto label_24c9f4;
        case 0x24c9f8u: goto label_24c9f8;
        case 0x24c9fcu: goto label_24c9fc;
        case 0x24ca00u: goto label_24ca00;
        case 0x24ca04u: goto label_24ca04;
        case 0x24ca08u: goto label_24ca08;
        case 0x24ca0cu: goto label_24ca0c;
        case 0x24ca10u: goto label_24ca10;
        case 0x24ca14u: goto label_24ca14;
        case 0x24ca18u: goto label_24ca18;
        case 0x24ca1cu: goto label_24ca1c;
        case 0x24ca20u: goto label_24ca20;
        case 0x24ca24u: goto label_24ca24;
        case 0x24ca28u: goto label_24ca28;
        case 0x24ca2cu: goto label_24ca2c;
        case 0x24ca30u: goto label_24ca30;
        case 0x24ca34u: goto label_24ca34;
        case 0x24ca38u: goto label_24ca38;
        case 0x24ca3cu: goto label_24ca3c;
        case 0x24ca40u: goto label_24ca40;
        case 0x24ca44u: goto label_24ca44;
        case 0x24ca48u: goto label_24ca48;
        case 0x24ca4cu: goto label_24ca4c;
        case 0x24ca50u: goto label_24ca50;
        case 0x24ca54u: goto label_24ca54;
        case 0x24ca58u: goto label_24ca58;
        case 0x24ca5cu: goto label_24ca5c;
        case 0x24ca60u: goto label_24ca60;
        case 0x24ca64u: goto label_24ca64;
        case 0x24ca68u: goto label_24ca68;
        case 0x24ca6cu: goto label_24ca6c;
        case 0x24ca70u: goto label_24ca70;
        case 0x24ca74u: goto label_24ca74;
        case 0x24ca78u: goto label_24ca78;
        case 0x24ca7cu: goto label_24ca7c;
        case 0x24ca80u: goto label_24ca80;
        case 0x24ca84u: goto label_24ca84;
        case 0x24ca88u: goto label_24ca88;
        case 0x24ca8cu: goto label_24ca8c;
        case 0x24ca90u: goto label_24ca90;
        case 0x24ca94u: goto label_24ca94;
        case 0x24ca98u: goto label_24ca98;
        case 0x24ca9cu: goto label_24ca9c;
        case 0x24caa0u: goto label_24caa0;
        case 0x24caa4u: goto label_24caa4;
        case 0x24caa8u: goto label_24caa8;
        case 0x24caacu: goto label_24caac;
        case 0x24cab0u: goto label_24cab0;
        case 0x24cab4u: goto label_24cab4;
        case 0x24cab8u: goto label_24cab8;
        case 0x24cabcu: goto label_24cabc;
        case 0x24cac0u: goto label_24cac0;
        case 0x24cac4u: goto label_24cac4;
        case 0x24cac8u: goto label_24cac8;
        case 0x24caccu: goto label_24cacc;
        case 0x24cad0u: goto label_24cad0;
        case 0x24cad4u: goto label_24cad4;
        case 0x24cad8u: goto label_24cad8;
        case 0x24cadcu: goto label_24cadc;
        case 0x24cae0u: goto label_24cae0;
        case 0x24cae4u: goto label_24cae4;
        case 0x24cae8u: goto label_24cae8;
        case 0x24caecu: goto label_24caec;
        case 0x24caf0u: goto label_24caf0;
        case 0x24caf4u: goto label_24caf4;
        case 0x24caf8u: goto label_24caf8;
        case 0x24cafcu: goto label_24cafc;
        case 0x24cb00u: goto label_24cb00;
        case 0x24cb04u: goto label_24cb04;
        case 0x24cb08u: goto label_24cb08;
        case 0x24cb0cu: goto label_24cb0c;
        case 0x24cb10u: goto label_24cb10;
        case 0x24cb14u: goto label_24cb14;
        case 0x24cb18u: goto label_24cb18;
        case 0x24cb1cu: goto label_24cb1c;
        case 0x24cb20u: goto label_24cb20;
        case 0x24cb24u: goto label_24cb24;
        case 0x24cb28u: goto label_24cb28;
        case 0x24cb2cu: goto label_24cb2c;
        case 0x24cb30u: goto label_24cb30;
        case 0x24cb34u: goto label_24cb34;
        case 0x24cb38u: goto label_24cb38;
        case 0x24cb3cu: goto label_24cb3c;
        case 0x24cb40u: goto label_24cb40;
        case 0x24cb44u: goto label_24cb44;
        case 0x24cb48u: goto label_24cb48;
        case 0x24cb4cu: goto label_24cb4c;
        case 0x24cb50u: goto label_24cb50;
        case 0x24cb54u: goto label_24cb54;
        case 0x24cb58u: goto label_24cb58;
        case 0x24cb5cu: goto label_24cb5c;
        case 0x24cb60u: goto label_24cb60;
        case 0x24cb64u: goto label_24cb64;
        case 0x24cb68u: goto label_24cb68;
        case 0x24cb6cu: goto label_24cb6c;
        case 0x24cb70u: goto label_24cb70;
        case 0x24cb74u: goto label_24cb74;
        case 0x24cb78u: goto label_24cb78;
        case 0x24cb7cu: goto label_24cb7c;
        case 0x24cb80u: goto label_24cb80;
        case 0x24cb84u: goto label_24cb84;
        case 0x24cb88u: goto label_24cb88;
        case 0x24cb8cu: goto label_24cb8c;
        case 0x24cb90u: goto label_24cb90;
        case 0x24cb94u: goto label_24cb94;
        case 0x24cb98u: goto label_24cb98;
        case 0x24cb9cu: goto label_24cb9c;
        case 0x24cba0u: goto label_24cba0;
        case 0x24cba4u: goto label_24cba4;
        case 0x24cba8u: goto label_24cba8;
        case 0x24cbacu: goto label_24cbac;
        case 0x24cbb0u: goto label_24cbb0;
        case 0x24cbb4u: goto label_24cbb4;
        case 0x24cbb8u: goto label_24cbb8;
        case 0x24cbbcu: goto label_24cbbc;
        case 0x24cbc0u: goto label_24cbc0;
        case 0x24cbc4u: goto label_24cbc4;
        case 0x24cbc8u: goto label_24cbc8;
        case 0x24cbccu: goto label_24cbcc;
        case 0x24cbd0u: goto label_24cbd0;
        case 0x24cbd4u: goto label_24cbd4;
        case 0x24cbd8u: goto label_24cbd8;
        case 0x24cbdcu: goto label_24cbdc;
        case 0x24cbe0u: goto label_24cbe0;
        case 0x24cbe4u: goto label_24cbe4;
        case 0x24cbe8u: goto label_24cbe8;
        case 0x24cbecu: goto label_24cbec;
        case 0x24cbf0u: goto label_24cbf0;
        case 0x24cbf4u: goto label_24cbf4;
        case 0x24cbf8u: goto label_24cbf8;
        case 0x24cbfcu: goto label_24cbfc;
        case 0x24cc00u: goto label_24cc00;
        case 0x24cc04u: goto label_24cc04;
        case 0x24cc08u: goto label_24cc08;
        case 0x24cc0cu: goto label_24cc0c;
        case 0x24cc10u: goto label_24cc10;
        case 0x24cc14u: goto label_24cc14;
        case 0x24cc18u: goto label_24cc18;
        case 0x24cc1cu: goto label_24cc1c;
        case 0x24cc20u: goto label_24cc20;
        case 0x24cc24u: goto label_24cc24;
        case 0x24cc28u: goto label_24cc28;
        case 0x24cc2cu: goto label_24cc2c;
        case 0x24cc30u: goto label_24cc30;
        case 0x24cc34u: goto label_24cc34;
        case 0x24cc38u: goto label_24cc38;
        case 0x24cc3cu: goto label_24cc3c;
        case 0x24cc40u: goto label_24cc40;
        case 0x24cc44u: goto label_24cc44;
        case 0x24cc48u: goto label_24cc48;
        case 0x24cc4cu: goto label_24cc4c;
        case 0x24cc50u: goto label_24cc50;
        case 0x24cc54u: goto label_24cc54;
        case 0x24cc58u: goto label_24cc58;
        case 0x24cc5cu: goto label_24cc5c;
        default: return;
    }

label_24c490:
    // 0x24c490: 0x0  nop
    ctx->pc = 0x24c490u;
    // NOP
label_24c494:
    // 0x24c494: 0x41a80000  .word       0x41A80000                   # INVALID     $t5, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c494u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C494 raw=0x41A80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c498:
    // 0x24c498: 0x0  nop
    ctx->pc = 0x24c498u;
    // NOP
label_24c49c:
    // 0x24c49c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c49cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c4a0:
    // 0x24c4a0: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c4a0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24C4A0 raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c4a4:
    // 0x24c4a4: 0x42080000  .word       0x42080000                   # INVALID     $s0, $t0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c4a4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C4A4 raw=0x42080000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c4a8:
    // 0x24c4a8: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24c4a8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24C4A8 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c4ac:
    // 0x24c4ac: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24c4b0:
    if (ctx->pc == 0x24C4B0u) {
        ctx->pc = 0x24C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4ACu;
        // 0x24c4b0: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x24C4B0 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C4B4u;
        goto label_24c4b4;
    }
    ctx->pc = 0x24C4ACu;
    {
        const bool branch_taken_0x24c4ac = (false);
        ctx->pc = 0x24C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4ACu;
        // 0x24c4b0: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x24C4B0 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4ac) {
            ctx->pc = 0x24C4B0u;
            goto label_24c4b0;
        }
    }
    ctx->pc = 0x24C4B4u;
label_24c4b4:
    // 0x24c4b4: 0x41de147b  .word       0x41DE147B                   # INVALID     $t6, $fp, 0x147B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c4b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24C4B4 raw=0x41DE147B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c4b8:
    // 0x24c4b8: 0x0  nop
    ctx->pc = 0x24c4b8u;
    // NOP
label_24c4bc:
    // 0x24c4bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c4bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c4c0:
    // 0x24c4c0: 0x0  nop
    ctx->pc = 0x24c4c0u;
    // NOP
label_24c4c4:
    // 0x24c4c4: 0x41de147b  .word       0x41DE147B                   # INVALID     $t6, $fp, 0x147B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c4c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24C4C4 raw=0x41DE147B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c4c8:
    // 0x24c4c8: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24c4c8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24C4C8 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c4cc:
    // 0x24c4cc: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24c4d0:
    if (ctx->pc == 0x24C4D0u) {
        ctx->pc = 0x24C4D4u;
        goto label_24c4d4;
    }
    ctx->pc = 0x24C4CCu;
    {
        const bool branch_taken_0x24c4cc = (false);
        if (branch_taken_0x24c4cc) {
            ctx->pc = 0x24C4D0u;
            goto label_24c4d0;
        }
    }
    ctx->pc = 0x24C4D4u;
label_24c4d4:
    // 0x24c4d4: 0x0  nop
    ctx->pc = 0x24c4d4u;
    // NOP
label_24c4d8:
    // 0x24c4d8: 0x0  nop
    ctx->pc = 0x24c4d8u;
    // NOP
label_24c4dc:
    // 0x24c4dc: 0x0  nop
    ctx->pc = 0x24c4dcu;
    // NOP
label_24c4e0:
    // 0x24c4e0: 0x0  nop
    ctx->pc = 0x24c4e0u;
    // NOP
label_24c4e4:
    // 0x24c4e4: 0x0  nop
    ctx->pc = 0x24c4e4u;
    // NOP
label_24c4e8:
    // 0x24c4e8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c4ec:
    // 0x24c4ec: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c4f0:
    // 0x24c4f0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c4f4:
    // 0x24c4f4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c4f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C4F4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c4f8:
    // 0x24c4f8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c4f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C4F8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c4fc:
    // 0x24c4fc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c4fcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C4FC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c500:
    // 0x24c500: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c504:
    // 0x24c504: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c508:
    // 0x24c508: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c50c:
    // 0x24c50c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c50cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C50C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c510:
    // 0x24c510: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c510u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C510 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c514:
    // 0x24c514: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c514u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C514 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c518:
    // 0x24c518: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c51c:
    // 0x24c51c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24c51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c520:
    // 0x24c520: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24c520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c524:
    // 0x24c524: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c524u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C524 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c528:
    // 0x24c528: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c528u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C528 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c52c:
    // 0x24c52c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c52cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24C52C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c530:
    // 0x24c530: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c534:
    // 0x24c534: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24c534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c538:
    // 0x24c538: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c53c:
    // 0x24c53c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c53cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C53C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c540:
    // 0x24c540: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c540u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24C540 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c544:
    // 0x24c544: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c544u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24C544 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c548:
    // 0x24c548: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24c548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c54c:
    // 0x24c54c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24c54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c550:
    // 0x24c550: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24c550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c554:
    // 0x24c554: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c554u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24C554 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c558:
    // 0x24c558: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c558u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24C558 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c55c:
    // 0x24c55c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c55cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24C55C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c560:
    // 0x24c560: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24c560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c564:
    // 0x24c564: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c568:
    // 0x24c568: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c56c:
    // 0x24c56c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c56cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C56C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c570:
    // 0x24c570: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c570u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C570 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c574:
    // 0x24c574: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c574u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24C574 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c578:
    // 0x24c578: 0x42e80000  .word       0x42E80000                   # INVALID     $s7, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c578u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24C578 raw=0x42E80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c57c:
    // 0x24c57c: 0x120009  .word       0x00120009                   # jalr        $zero, $zero # 00120000 <InstrIdType: CPU_SPECIAL>
label_24c580:
    if (ctx->pc == 0x24C580u) {
        ctx->pc = 0x24C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C57Cu;
        // 0x24c580: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C584u;
        goto label_24c584;
    }
    ctx->pc = 0x24C57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C57Cu;
        // 0x24c580: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C57Cu, 0x24C584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C584u;
label_24c584:
    // 0x24c584: 0x9c009c  .word       0x009C009C                   # dmult       $a0, $gp # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c584u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24C584 raw=0x009C009C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c588:
    // 0x24c588: 0x8380051  j           func_E00144
label_24c58c:
    if (ctx->pc == 0x24C58Cu) {
        ctx->pc = 0x24C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C588u;
        // 0x24c58c: 0x8650117  j           func_194045C (Delay Slot)
        // J 0x194045C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C590u;
        goto label_24c590;
    }
    ctx->pc = 0x24C588u;
    ctx->pc = 0x24C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C588u;
    // 0x24c58c: 0x8650117  j           func_194045C (Delay Slot)
    // J 0x194045C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xE00144u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xE00144u, 0x24C588u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24C590u;
label_24c590:
    // 0x24c590: 0x2090208  .word       0x02090208                   # jr          $s0 # 00090200 <InstrIdType: CPU_SPECIAL>
label_24c594:
    if (ctx->pc == 0x24C594u) {
        ctx->pc = 0x24C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C590u;
        // 0x24c594: 0x1790150  .word       0x01790150                   # mfhi        $zero # 01790140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C598u;
        goto label_24c598;
    }
    ctx->pc = 0x24C590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        ctx->pc = 0x24C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C590u;
        // 0x24c594: 0x1790150  .word       0x01790150                   # mfhi        $zero # 01790140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C590u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24C598u;
label_24c598:
    // 0x24c598: 0x50009d  .word       0x0050009D                   # dmultu      $v0, $s0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c598u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24C598 raw=0x0050009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c59c:
    // 0x24c59c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x24c59cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_24c5a0:
    // 0x24c5a0: 0x0  nop
    ctx->pc = 0x24c5a0u;
    // NOP
label_24c5a4:
    // 0x24c5a4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c5a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C5A4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c5a8:
    // 0x24c5a8: 0x0  nop
    ctx->pc = 0x24c5a8u;
    // NOP
label_24c5ac:
    // 0x24c5ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c5acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c5b0:
    // 0x24c5b0: 0x42b40000  .word       0x42B40000                   # INVALID     $s5, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c5b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24C5B0 raw=0x42B40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c5b4:
    // 0x24c5b4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c5b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C5B4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c5b8:
    // 0x24c5b8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24c5b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24c5bc:
    // 0x24c5bc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c5bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24C5BC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c5c0:
    // 0x24c5c0: 0x0  nop
    ctx->pc = 0x24c5c0u;
    // NOP
label_24c5c4:
    // 0x24c5c4: 0x0  nop
    ctx->pc = 0x24c5c4u;
    // NOP
label_24c5c8:
    // 0x24c5c8: 0x0  nop
    ctx->pc = 0x24c5c8u;
    // NOP
label_24c5cc:
    // 0x24c5cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c5ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c5d0:
    // 0x24c5d0: 0x0  nop
    ctx->pc = 0x24c5d0u;
    // NOP
label_24c5d4:
    // 0x24c5d4: 0x0  nop
    ctx->pc = 0x24c5d4u;
    // NOP
label_24c5d8:
    // 0x24c5d8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24c5d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24c5dc:
    // 0x24c5dc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c5dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24C5DC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c5e0:
    // 0x24c5e0: 0x0  nop
    ctx->pc = 0x24c5e0u;
    // NOP
label_24c5e4:
    // 0x24c5e4: 0x0  nop
    ctx->pc = 0x24c5e4u;
    // NOP
label_24c5e8:
    // 0x24c5e8: 0x0  nop
    ctx->pc = 0x24c5e8u;
    // NOP
label_24c5ec:
    // 0x24c5ec: 0x0  nop
    ctx->pc = 0x24c5ecu;
    // NOP
label_24c5f0:
    // 0x24c5f0: 0x0  nop
    ctx->pc = 0x24c5f0u;
    // NOP
label_24c5f4:
    // 0x24c5f4: 0x0  nop
    ctx->pc = 0x24c5f4u;
    // NOP
label_24c5f8:
    // 0x24c5f8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c5fc:
    // 0x24c5fc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c600:
    // 0x24c600: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c604:
    // 0x24c604: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c604u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C604 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c608:
    // 0x24c608: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c608u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C608 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c60c:
    // 0x24c60c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c60cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C60C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c610:
    // 0x24c610: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c614:
    // 0x24c614: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c618:
    // 0x24c618: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c61c:
    // 0x24c61c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c61cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C61C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c620:
    // 0x24c620: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c620u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C620 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c624:
    // 0x24c624: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c624u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C624 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c628:
    // 0x24c628: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c62c:
    // 0x24c62c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24c62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c630:
    // 0x24c630: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24c630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c634:
    // 0x24c634: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c634u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C634 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c638:
    // 0x24c638: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c638u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C638 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c63c:
    // 0x24c63c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c63cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24C63C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c640:
    // 0x24c640: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c644:
    // 0x24c644: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24c644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c648:
    // 0x24c648: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c64c:
    // 0x24c64c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c64cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C64C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c650:
    // 0x24c650: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c650u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24C650 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c654:
    // 0x24c654: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c654u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24C654 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c658:
    // 0x24c658: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24c658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c65c:
    // 0x24c65c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24c65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c660:
    // 0x24c660: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24c660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c664:
    // 0x24c664: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c664u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24C664 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c668:
    // 0x24c668: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c668u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24C668 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c66c:
    // 0x24c66c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c66cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24C66C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c670:
    // 0x24c670: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24c670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c674:
    // 0x24c674: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c678:
    // 0x24c678: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c67c:
    // 0x24c67c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c67cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C67C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c680:
    // 0x24c680: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c680u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C680 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c684:
    // 0x24c684: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c684u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24C684 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c688:
    // 0x24c688: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c688u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24C688 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c68c:
    // 0x24c68c: 0x130009  .word       0x00130009                   # jalr        $zero, $zero # 00130000 <InstrIdType: CPU_SPECIAL>
label_24c690:
    if (ctx->pc == 0x24C690u) {
        ctx->pc = 0x24C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C68Cu;
        // 0x24c690: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C694u;
        goto label_24c694;
    }
    ctx->pc = 0x24C68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C68Cu;
        // 0x24c690: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C68Cu, 0x24C694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C694u;
label_24c694:
    // 0x24c694: 0x9e009e  .word       0x009E009E                   # ddiv        $zero, $a0, $fp # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c694u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24C694 raw=0x009E009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c698:
    // 0x24c698: 0x8390052  j           func_E40148
label_24c69c:
    if (ctx->pc == 0x24C69Cu) {
        ctx->pc = 0x24C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C698u;
        // 0x24c69c: 0x8660118  j           func_1980460 (Delay Slot)
        // J 0x1980460 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C6A0u;
        goto label_24c6a0;
    }
    ctx->pc = 0x24C698u;
    ctx->pc = 0x24C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C698u;
    // 0x24c69c: 0x8660118  j           func_1980460 (Delay Slot)
    // J 0x1980460 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xE40148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xE40148u, 0x24C698u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24C6A0u;
label_24c6a0:
    // 0x24c6a0: 0x20d020c  .word       0x020D020C                   # syscall     8 # 020D0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c6a0u;
    ctx->pc = 0x24C6A4u;
runtime->handleSyscall(rdram, ctx, 0x83408u);
label_24c6a4:
    // 0x24c6a4: 0x17a0151  .word       0x017A0151                   # mthi        $t3 # 001A0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c6a4u;
    ctx->hi = GPR_U64(ctx, 11);
label_24c6a8:
    // 0x24c6a8: 0x51009f  .word       0x0051009F                   # ddivu       $zero, $v0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c6a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24C6A8 raw=0x0051009F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6ac:
    // 0x24c6ac: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x24c6acu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24c6b0:
    // 0x24c6b0: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c6b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24C6B0 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6b4:
    // 0x24c6b4: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c6b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x24C6B4 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6b8:
    // 0x24c6b8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c6b8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24C6B8 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6bc:
    // 0x24c6bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c6bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c6c0:
    // 0x24c6c0: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c6c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24C6C0 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6c4:
    // 0x24c6c4: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c6c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x24C6C4 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6c8:
    // 0x24c6c8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24c6c8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24c6cc:
    // 0x24c6cc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c6ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24C6CC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6d0:
    // 0x24c6d0: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c6d0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C6D0 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6d4:
    // 0x24c6d4: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c6d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C6D4 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6d8:
    // 0x24c6d8: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x24c6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c6dc:
    // 0x24c6dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c6dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c6e0:
    // 0x24c6e0: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c6e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24C6E0 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6e4:
    // 0x24c6e4: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c6e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C6E4 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6e8:
    // 0x24c6e8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24c6e8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24c6ec:
    // 0x24c6ec: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c6ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24C6EC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c6f0:
    // 0x24c6f0: 0x0  nop
    ctx->pc = 0x24c6f0u;
    // NOP
label_24c6f4:
    // 0x24c6f4: 0x0  nop
    ctx->pc = 0x24c6f4u;
    // NOP
label_24c6f8:
    // 0x24c6f8: 0x0  nop
    ctx->pc = 0x24c6f8u;
    // NOP
label_24c6fc:
    // 0x24c6fc: 0x0  nop
    ctx->pc = 0x24c6fcu;
    // NOP
label_24c700:
    // 0x24c700: 0x0  nop
    ctx->pc = 0x24c700u;
    // NOP
label_24c704:
    // 0x24c704: 0x0  nop
    ctx->pc = 0x24c704u;
    // NOP
label_24c708:
    // 0x24c708: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c70c:
    // 0x24c70c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c710:
    // 0x24c710: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c714:
    // 0x24c714: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c714u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C714 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c718:
    // 0x24c718: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c718u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C718 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c71c:
    // 0x24c71c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c71cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C71C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c720:
    // 0x24c720: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c724:
    // 0x24c724: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c728:
    // 0x24c728: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c72c:
    // 0x24c72c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c72cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C72C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c730:
    // 0x24c730: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c730u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C730 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c734:
    // 0x24c734: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c734u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C734 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c738:
    // 0x24c738: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c73c:
    // 0x24c73c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24c73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c740:
    // 0x24c740: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24c740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c744:
    // 0x24c744: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c744u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C744 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c748:
    // 0x24c748: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c748u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C748 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c74c:
    // 0x24c74c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c74cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24C74C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c750:
    // 0x24c750: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c754:
    // 0x24c754: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24c754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c758:
    // 0x24c758: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c75c:
    // 0x24c75c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c75cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C75C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c760:
    // 0x24c760: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c760u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24C760 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c764:
    // 0x24c764: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c764u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24C764 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c768:
    // 0x24c768: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24c768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c76c:
    // 0x24c76c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24c76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c770:
    // 0x24c770: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24c770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c774:
    // 0x24c774: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c774u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24C774 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c778:
    // 0x24c778: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c778u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24C778 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c77c:
    // 0x24c77c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c77cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24C77C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c780:
    // 0x24c780: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24c780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c784:
    // 0x24c784: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c788:
    // 0x24c788: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c78c:
    // 0x24c78c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c78cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C78C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c790:
    // 0x24c790: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c790u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C790 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c794:
    // 0x24c794: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c794u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24C794 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c798:
    // 0x24c798: 0x42f2428f  .word       0x42F2428F                   # INVALID     $s7, $s2, 0x428F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c798u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24C798 raw=0x42F2428F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c79c:
    // 0x24c79c: 0x140009  .word       0x00140009                   # jalr        $zero, $zero # 00140000 <InstrIdType: CPU_SPECIAL>
label_24c7a0:
    if (ctx->pc == 0x24C7A0u) {
        ctx->pc = 0x24C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C79Cu;
        // 0x24c7a0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C7A4u;
        goto label_24c7a4;
    }
    ctx->pc = 0x24C79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C79Cu;
        // 0x24c7a0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C79Cu, 0x24C7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C7A4u;
label_24c7a4:
    // 0x24c7a4: 0xa000a0  .word       0x00A000A0                   # add         $zero, $a1, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c7a4u;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_24c7a8:
    // 0x24c7a8: 0x83a0053  j           func_E8014C
label_24c7ac:
    if (ctx->pc == 0x24C7ACu) {
        ctx->pc = 0x24C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7A8u;
        // 0x24c7ac: 0x8670119  j           func_19C0464 (Delay Slot)
        // J 0x19C0464 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C7B0u;
        goto label_24c7b0;
    }
    ctx->pc = 0x24C7A8u;
    ctx->pc = 0x24C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C7A8u;
    // 0x24c7ac: 0x8670119  j           func_19C0464 (Delay Slot)
    // J 0x19C0464 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xE8014Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xE8014Cu, 0x24C7A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24C7B0u;
label_24c7b0:
    // 0x24c7b0: 0x20f020e  .word       0x020F020E                   # INVALID     $s0, $t7, 0x20E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c7b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24C7B0 raw=0x020F020E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c7b4:
    // 0x24c7b4: 0x17b0152  .word       0x017B0152                   # mflo        $zero # 017B0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c7b4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24c7b8:
    // 0x24c7b8: 0x4f00a1  .word       0x004F00A1                   # addu        $zero, $v0, $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c7b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_24c7bc:
    // 0x24c7bc: 0x0  nop
    ctx->pc = 0x24c7bcu;
    // NOP
label_24c7c0:
    // 0x24c7c0: 0x0  nop
    ctx->pc = 0x24c7c0u;
    // NOP
label_24c7c4:
    // 0x24c7c4: 0x0  nop
    ctx->pc = 0x24c7c4u;
    // NOP
label_24c7c8:
    // 0x24c7c8: 0x0  nop
    ctx->pc = 0x24c7c8u;
    // NOP
label_24c7cc:
    // 0x24c7cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c7ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c7d0:
    // 0x24c7d0: 0x0  nop
    ctx->pc = 0x24c7d0u;
    // NOP
label_24c7d4:
    // 0x24c7d4: 0x0  nop
    ctx->pc = 0x24c7d4u;
    // NOP
label_24c7d8:
    // 0x24c7d8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24c7d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24c7dc:
    // 0x24c7dc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c7dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24C7DC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c7e0:
    // 0x24c7e0: 0x0  nop
    ctx->pc = 0x24c7e0u;
    // NOP
label_24c7e4:
    // 0x24c7e4: 0x0  nop
    ctx->pc = 0x24c7e4u;
    // NOP
label_24c7e8:
    // 0x24c7e8: 0x0  nop
    ctx->pc = 0x24c7e8u;
    // NOP
label_24c7ec:
    // 0x24c7ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c7ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c7f0:
    // 0x24c7f0: 0x0  nop
    ctx->pc = 0x24c7f0u;
    // NOP
label_24c7f4:
    // 0x24c7f4: 0x0  nop
    ctx->pc = 0x24c7f4u;
    // NOP
label_24c7f8:
    // 0x24c7f8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24c7f8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24c7fc:
    // 0x24c7fc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c7fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24C7FC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c800:
    // 0x24c800: 0x0  nop
    ctx->pc = 0x24c800u;
    // NOP
label_24c804:
    // 0x24c804: 0x0  nop
    ctx->pc = 0x24c804u;
    // NOP
label_24c808:
    // 0x24c808: 0x0  nop
    ctx->pc = 0x24c808u;
    // NOP
label_24c80c:
    // 0x24c80c: 0x0  nop
    ctx->pc = 0x24c80cu;
    // NOP
label_24c810:
    // 0x24c810: 0x0  nop
    ctx->pc = 0x24c810u;
    // NOP
label_24c814:
    // 0x24c814: 0x0  nop
    ctx->pc = 0x24c814u;
    // NOP
label_24c818:
    // 0x24c818: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c81c:
    // 0x24c81c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c820:
    // 0x24c820: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c824:
    // 0x24c824: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c824u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C824 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c828:
    // 0x24c828: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c828u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C828 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c82c:
    // 0x24c82c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c82cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C82C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c830:
    // 0x24c830: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c834:
    // 0x24c834: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c838:
    // 0x24c838: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c83c:
    // 0x24c83c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c83cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C83C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c840:
    // 0x24c840: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c840u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C840 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c844:
    // 0x24c844: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c844u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C844 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c848:
    // 0x24c848: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c84c:
    // 0x24c84c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24c84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c850:
    // 0x24c850: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24c850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c854:
    // 0x24c854: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c854u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C854 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c858:
    // 0x24c858: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c858u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C858 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c85c:
    // 0x24c85c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c85cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24C85C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c860:
    // 0x24c860: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c864:
    // 0x24c864: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24c864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c868:
    // 0x24c868: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c86c:
    // 0x24c86c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c86cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C86C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c870:
    // 0x24c870: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c870u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24C870 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c874:
    // 0x24c874: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c874u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24C874 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c878:
    // 0x24c878: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24c878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c87c:
    // 0x24c87c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24c87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c880:
    // 0x24c880: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24c880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c884:
    // 0x24c884: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c884u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24C884 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c888:
    // 0x24c888: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c888u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24C888 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c88c:
    // 0x24c88c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c88cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24C88C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c890:
    // 0x24c890: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24c890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c894:
    // 0x24c894: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c898:
    // 0x24c898: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c89c:
    // 0x24c89c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c89cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C89C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c8a0:
    // 0x24c8a0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c8a0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C8A0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c8a4:
    // 0x24c8a4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c8a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24C8A4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c8a8:
    // 0x24c8a8: 0x42ed0000  .word       0x42ED0000                   # INVALID     $s7, $t5, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c8a8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24C8A8 raw=0x42ED0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c8ac:
    // 0x24c8ac: 0x150009  .word       0x00150009                   # jalr        $zero, $zero # 00150000 <InstrIdType: CPU_SPECIAL>
label_24c8b0:
    if (ctx->pc == 0x24C8B0u) {
        ctx->pc = 0x24C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8ACu;
        // 0x24c8b0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C8B4u;
        goto label_24c8b4;
    }
    ctx->pc = 0x24C8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8ACu;
        // 0x24c8b0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C8ACu, 0x24C8B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C8B4u;
label_24c8b4:
    // 0x24c8b4: 0xa200a2  .word       0x00A200A2                   # sub         $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c8b4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 5), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24c8b8:
    // 0x24c8b8: 0x83b0054  j           func_EC0150
label_24c8bc:
    if (ctx->pc == 0x24C8BCu) {
        ctx->pc = 0x24C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8B8u;
        // 0x24c8bc: 0x868011a  j           func_1A00468 (Delay Slot)
        // J 0x1A00468 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C8C0u;
        goto label_24c8c0;
    }
    ctx->pc = 0x24C8B8u;
    ctx->pc = 0x24C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C8B8u;
    // 0x24c8bc: 0x868011a  j           func_1A00468 (Delay Slot)
    // J 0x1A00468 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xEC0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xEC0150u, 0x24C8B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24C8C0u;
label_24c8c0:
    // 0x24c8c0: 0x20b020a  .word       0x020B020A                   # movz        $zero, $s0, $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c8c0u;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 16));
label_24c8c4:
    // 0x24c8c4: 0x17c0153  .word       0x017C0153                   # mtlo        $t3 # 001C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c8c4u;
    ctx->lo = GPR_U64(ctx, 11);
label_24c8c8:
    // 0x24c8c8: 0x4f00a3  .word       0x004F00A3                   # subu        $zero, $v0, $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c8c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_24c8cc:
    // 0x24c8cc: 0x0  nop
    ctx->pc = 0x24c8ccu;
    // NOP
label_24c8d0:
    // 0x24c8d0: 0x0  nop
    ctx->pc = 0x24c8d0u;
    // NOP
label_24c8d4:
    // 0x24c8d4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c8d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C8D4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c8d8:
    // 0x24c8d8: 0x0  nop
    ctx->pc = 0x24c8d8u;
    // NOP
label_24c8dc:
    // 0x24c8dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c8dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c8e0:
    // 0x24c8e0: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c8e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24C8E0 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c8e4:
    // 0x24c8e4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c8e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24C8E4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c8e8:
    // 0x24c8e8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24c8e8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24c8ec:
    // 0x24c8ec: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24c8f0:
    if (ctx->pc == 0x24C8F0u) {
        ctx->pc = 0x24C8F4u;
        goto label_24c8f4;
    }
    ctx->pc = 0x24C8ECu;
    {
        const bool branch_taken_0x24c8ec = (false);
        if (branch_taken_0x24c8ec) {
            ctx->pc = 0x24C8F0u;
            goto label_24c8f0;
        }
    }
    ctx->pc = 0x24C8F4u;
label_24c8f4:
    // 0x24c8f4: 0x0  nop
    ctx->pc = 0x24c8f4u;
    // NOP
label_24c8f8:
    // 0x24c8f8: 0x0  nop
    ctx->pc = 0x24c8f8u;
    // NOP
label_24c8fc:
    // 0x24c8fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c8fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c900:
    // 0x24c900: 0x0  nop
    ctx->pc = 0x24c900u;
    // NOP
label_24c904:
    // 0x24c904: 0x0  nop
    ctx->pc = 0x24c904u;
    // NOP
label_24c908:
    // 0x24c908: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24c908u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24c90c:
    // 0x24c90c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c90cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24C90C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c910:
    // 0x24c910: 0x0  nop
    ctx->pc = 0x24c910u;
    // NOP
label_24c914:
    // 0x24c914: 0x0  nop
    ctx->pc = 0x24c914u;
    // NOP
label_24c918:
    // 0x24c918: 0x0  nop
    ctx->pc = 0x24c918u;
    // NOP
label_24c91c:
    // 0x24c91c: 0x0  nop
    ctx->pc = 0x24c91cu;
    // NOP
label_24c920:
    // 0x24c920: 0x0  nop
    ctx->pc = 0x24c920u;
    // NOP
label_24c924:
    // 0x24c924: 0x0  nop
    ctx->pc = 0x24c924u;
    // NOP
label_24c928:
    // 0x24c928: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c92c:
    // 0x24c92c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c930:
    // 0x24c930: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c934:
    // 0x24c934: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c934u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C934 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c938:
    // 0x24c938: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c938u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C938 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c93c:
    // 0x24c93c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c93cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C93C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c940:
    // 0x24c940: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c944:
    // 0x24c944: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24c944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c948:
    // 0x24c948: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c94c:
    // 0x24c94c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c94cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C94C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c950:
    // 0x24c950: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c950u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C950 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c954:
    // 0x24c954: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c954u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C954 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c958:
    // 0x24c958: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c95c:
    // 0x24c95c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24c95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c960:
    // 0x24c960: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24c960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c964:
    // 0x24c964: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c964u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C964 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c968:
    // 0x24c968: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c968u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C968 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c96c:
    // 0x24c96c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c96cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24C96C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c970:
    // 0x24c970: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24c970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c974:
    // 0x24c974: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24c974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c978:
    // 0x24c978: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c97c:
    // 0x24c97c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c97cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24C97C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c980:
    // 0x24c980: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c980u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24C980 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c984:
    // 0x24c984: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c984u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24C984 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c988:
    // 0x24c988: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24c988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c98c:
    // 0x24c98c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24c98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c990:
    // 0x24c990: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24c990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c994:
    // 0x24c994: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c994u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24C994 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c998:
    // 0x24c998: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c998u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24C998 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c99c:
    // 0x24c99c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c99cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24C99C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c9a0:
    // 0x24c9a0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24c9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c9a4:
    // 0x24c9a4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24c9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c9a8:
    // 0x24c9a8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24c9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c9ac:
    // 0x24c9ac: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c9acu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C9AC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c9b0:
    // 0x24c9b0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24c9b0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24C9B0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c9b4:
    // 0x24c9b4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c9b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24C9B4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c9b8:
    // 0x24c9b8: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c9b8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24C9B8 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c9bc:
    // 0x24c9bc: 0x160009  .word       0x00160009                   # jalr        $zero, $zero # 00160000 <InstrIdType: CPU_SPECIAL>
label_24c9c0:
    if (ctx->pc == 0x24C9C0u) {
        ctx->pc = 0x24C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9BCu;
        // 0x24c9c0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C9C4u;
        goto label_24c9c4;
    }
    ctx->pc = 0x24C9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9BCu;
        // 0x24c9c0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C9BCu, 0x24C9C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C9C4u;
label_24c9c4:
    // 0x24c9c4: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c9c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_24c9c8:
    // 0x24c9c8: 0x83c0055  j           func_F00154
label_24c9cc:
    if (ctx->pc == 0x24C9CCu) {
        ctx->pc = 0x24C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9C8u;
        // 0x24c9cc: 0x869011b  j           func_1A4046C (Delay Slot)
        // J 0x1A4046C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C9D0u;
        goto label_24c9d0;
    }
    ctx->pc = 0x24C9C8u;
    ctx->pc = 0x24C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9C8u;
    // 0x24c9cc: 0x869011b  j           func_1A4046C (Delay Slot)
    // J 0x1A4046C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xF00154u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xF00154u, 0x24C9C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24C9D0u;
label_24c9d0:
    // 0x24c9d0: 0x2110210  .word       0x02110210                   # mfhi        $zero # 02110200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c9d0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_24c9d4:
    // 0x24c9d4: 0x17d0154  .word       0x017D0154                   # dsllv       $zero, $sp, $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c9d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 29) << (GPR_U32(ctx, 11) & 0x3F));
label_24c9d8:
    // 0x24c9d8: 0x3300a5  .word       0x003300A5                   # or          $zero, $at, $s3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24c9d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) | GPR_U64(ctx, 19));
label_24c9dc:
    // 0x24c9dc: 0x8  jr          $zero
label_24c9e0:
    if (ctx->pc == 0x24C9E0u) {
        ctx->pc = 0x24C9E4u;
        goto label_24c9e4;
    }
    ctx->pc = 0x24C9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C9DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24C9E4u;
label_24c9e4:
    // 0x24c9e4: 0x0  nop
    ctx->pc = 0x24c9e4u;
    // NOP
label_24c9e8:
    // 0x24c9e8: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x24c9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24c9ec:
    // 0x24c9ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24c9ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24c9f0:
    // 0x24c9f0: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c9f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24C9F0 raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24c9f4:
    // 0x24c9f4: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24c9f8:
    if (ctx->pc == 0x24C9F8u) {
        ctx->pc = 0x24C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9F4u;
        // 0x24c9f8: 0x40000000  mfc0        $zero, Index (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C9FCu;
        goto label_24c9fc;
    }
    ctx->pc = 0x24C9F4u;
    {
        const bool branch_taken_0x24c9f4 = (false);
        ctx->pc = 0x24C9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9F4u;
        // 0x24c9f8: 0x40000000  mfc0        $zero, Index (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9f4) {
            ctx->pc = 0x24C9F8u;
            goto label_24c9f8;
        }
    }
    ctx->pc = 0x24C9FCu;
label_24c9fc:
    // 0x24c9fc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24c9fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24C9FC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca00:
    // 0x24ca00: 0x0  nop
    ctx->pc = 0x24ca00u;
    // NOP
label_24ca04:
    // 0x24ca04: 0x0  nop
    ctx->pc = 0x24ca04u;
    // NOP
label_24ca08:
    // 0x24ca08: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x24ca08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca0c:
    // 0x24ca0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ca0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ca10:
    // 0x24ca10: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca10u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CA10 raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca14:
    // 0x24ca14: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24ca18:
    if (ctx->pc == 0x24CA18u) {
        ctx->pc = 0x24CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA14u;
        // 0x24ca18: 0x40000000  mfc0        $zero, Index (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA1Cu;
        goto label_24ca1c;
    }
    ctx->pc = 0x24CA14u;
    {
        const bool branch_taken_0x24ca14 = (false);
        ctx->pc = 0x24CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA14u;
        // 0x24ca18: 0x40000000  mfc0        $zero, Index (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca14) {
            ctx->pc = 0x24CA18u;
            goto label_24ca18;
        }
    }
    ctx->pc = 0x24CA1Cu;
label_24ca1c:
    // 0x24ca1c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24CA1C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca20:
    // 0x24ca20: 0x0  nop
    ctx->pc = 0x24ca20u;
    // NOP
label_24ca24:
    // 0x24ca24: 0x0  nop
    ctx->pc = 0x24ca24u;
    // NOP
label_24ca28:
    // 0x24ca28: 0x0  nop
    ctx->pc = 0x24ca28u;
    // NOP
label_24ca2c:
    // 0x24ca2c: 0x0  nop
    ctx->pc = 0x24ca2cu;
    // NOP
label_24ca30:
    // 0x24ca30: 0x0  nop
    ctx->pc = 0x24ca30u;
    // NOP
label_24ca34:
    // 0x24ca34: 0x0  nop
    ctx->pc = 0x24ca34u;
    // NOP
label_24ca38:
    // 0x24ca38: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ca38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca3c:
    // 0x24ca3c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ca3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca40:
    // 0x24ca40: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ca40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca44:
    // 0x24ca44: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CA44 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca48:
    // 0x24ca48: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ca48u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CA48 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca4c:
    // 0x24ca4c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ca4cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CA4C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca50:
    // 0x24ca50: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ca50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca54:
    // 0x24ca54: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ca54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca58:
    // 0x24ca58: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ca58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca5c:
    // 0x24ca5c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CA5C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca60:
    // 0x24ca60: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ca60u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CA60 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca64:
    // 0x24ca64: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ca64u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CA64 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca68:
    // 0x24ca68: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ca68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca6c:
    // 0x24ca6c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24ca6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca70:
    // 0x24ca70: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24ca70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca74:
    // 0x24ca74: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca74u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CA74 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca78:
    // 0x24ca78: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ca78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CA78 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca7c:
    // 0x24ca7c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24CA7C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca80:
    // 0x24ca80: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ca80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca84:
    // 0x24ca84: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24ca84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca88:
    // 0x24ca88: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ca88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca8c:
    // 0x24ca8c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CA8C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca90:
    // 0x24ca90: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca90u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24CA90 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca94:
    // 0x24ca94: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CA94 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca98:
    // 0x24ca98: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24ca98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca9c:
    // 0x24ca9c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24ca9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24caa0:
    // 0x24caa0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24caa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24caa4:
    // 0x24caa4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24caa4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24CAA4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24caa8:
    // 0x24caa8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24caa8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24CAA8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24caac:
    // 0x24caac: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24caacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24CAAC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cab0:
    // 0x24cab0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24cab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cab4:
    // 0x24cab4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cab8:
    // 0x24cab8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cabc:
    // 0x24cabc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cabcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CABC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cac0:
    // 0x24cac0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cac0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CAC0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cac4:
    // 0x24cac4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cac4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24CAC4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cac8:
    // 0x24cac8: 0x42e7d1ec  .word       0x42E7D1EC                   # INVALID     $s7, $a3, -0x2E14 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cac8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24CAC8 raw=0x42E7D1EC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cacc:
    // 0x24cacc: 0x170009  .word       0x00170009                   # jalr        $zero, $zero # 00170000 <InstrIdType: CPU_SPECIAL>
label_24cad0:
    if (ctx->pc == 0x24CAD0u) {
        ctx->pc = 0x24CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CACCu;
        // 0x24cad0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CAD4u;
        goto label_24cad4;
    }
    ctx->pc = 0x24CACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CACCu;
        // 0x24cad0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CACCu, 0x24CAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CAD4u;
label_24cad4:
    // 0x24cad4: 0xa600a6  .word       0x00A600A6                   # xor         $zero, $a1, $a2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cad4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
label_24cad8:
    // 0x24cad8: 0x83d0056  j           func_F40158
label_24cadc:
    if (ctx->pc == 0x24CADCu) {
        ctx->pc = 0x24CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAD8u;
        // 0x24cadc: 0x86a011c  j           func_1A80470 (Delay Slot)
        // J 0x1A80470 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CAE0u;
        goto label_24cae0;
    }
    ctx->pc = 0x24CAD8u;
    ctx->pc = 0x24CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CAD8u;
    // 0x24cadc: 0x86a011c  j           func_1A80470 (Delay Slot)
    // J 0x1A80470 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xF40158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xF40158u, 0x24CAD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24CAE0u;
label_24cae0:
    // 0x24cae0: 0x2010200  .word       0x02010200                   # sll         $zero, $at, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cae0u;
    
label_24cae4:
    // 0x24cae4: 0x17e0155  .word       0x017E0155                   # INVALID     $t3, $fp, 0x155 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cae4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24CAE4 raw=0x017E0155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cae8:
    // 0x24cae8: 0x4000a7  .word       0x004000A7                   # not         $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cae8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_24caec:
    // 0x24caec: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x24caecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_24caf0:
    // 0x24caf0: 0x0  nop
    ctx->pc = 0x24caf0u;
    // NOP
label_24caf4:
    // 0x24caf4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24caf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24caf8:
    // 0x24caf8: 0x0  nop
    ctx->pc = 0x24caf8u;
    // NOP
label_24cafc:
    // 0x24cafc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cafcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cb00:
    // 0x24cb00: 0x429a0000  .word       0x429A0000                   # INVALID     $s4, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CB00 raw=0x429A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb04:
    // 0x24cb04: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24CB04 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb08:
    // 0x24cb08: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb08u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24CB08 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb0c:
    // 0x24cb0c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb0cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24CB0C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb10:
    // 0x24cb10: 0x0  nop
    ctx->pc = 0x24cb10u;
    // NOP
label_24cb14:
    // 0x24cb14: 0x0  nop
    ctx->pc = 0x24cb14u;
    // NOP
label_24cb18:
    // 0x24cb18: 0x0  nop
    ctx->pc = 0x24cb18u;
    // NOP
label_24cb1c:
    // 0x24cb1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cb1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cb20:
    // 0x24cb20: 0x0  nop
    ctx->pc = 0x24cb20u;
    // NOP
label_24cb24:
    // 0x24cb24: 0x0  nop
    ctx->pc = 0x24cb24u;
    // NOP
label_24cb28:
    // 0x24cb28: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24cb28u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24cb2c:
    // 0x24cb2c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb2cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24CB2C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb30:
    // 0x24cb30: 0x0  nop
    ctx->pc = 0x24cb30u;
    // NOP
label_24cb34:
    // 0x24cb34: 0x0  nop
    ctx->pc = 0x24cb34u;
    // NOP
label_24cb38:
    // 0x24cb38: 0x0  nop
    ctx->pc = 0x24cb38u;
    // NOP
label_24cb3c:
    // 0x24cb3c: 0x0  nop
    ctx->pc = 0x24cb3cu;
    // NOP
label_24cb40:
    // 0x24cb40: 0x0  nop
    ctx->pc = 0x24cb40u;
    // NOP
label_24cb44:
    // 0x24cb44: 0x0  nop
    ctx->pc = 0x24cb44u;
    // NOP
label_24cb48:
    // 0x24cb48: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb4c:
    // 0x24cb4c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24cb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb50:
    // 0x24cb50: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb54:
    // 0x24cb54: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CB54 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb58:
    // 0x24cb58: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cb58u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CB58 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb5c:
    // 0x24cb5c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cb5cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CB5C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb60:
    // 0x24cb60: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb64:
    // 0x24cb64: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24cb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb68:
    // 0x24cb68: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb6c:
    // 0x24cb6c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb6cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CB6C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb70:
    // 0x24cb70: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cb70u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CB70 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb74:
    // 0x24cb74: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cb74u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CB74 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb78:
    // 0x24cb78: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb7c:
    // 0x24cb7c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24cb7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb80:
    // 0x24cb80: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24cb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb84:
    // 0x24cb84: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CB84 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb88:
    // 0x24cb88: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cb88u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CB88 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb8c:
    // 0x24cb8c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24CB8C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb90:
    // 0x24cb90: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb94:
    // 0x24cb94: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24cb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb98:
    // 0x24cb98: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb9c:
    // 0x24cb9c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CB9C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cba0:
    // 0x24cba0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cba0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24CBA0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cba4:
    // 0x24cba4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cba4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CBA4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cba8:
    // 0x24cba8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24cba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbac:
    // 0x24cbac: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24cbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbb0:
    // 0x24cbb0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24cbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbb4:
    // 0x24cbb4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cbb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24CBB4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbb8:
    // 0x24cbb8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cbb8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24CBB8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbbc:
    // 0x24cbbc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cbbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24CBBC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbc0:
    // 0x24cbc0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24cbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbc4:
    // 0x24cbc4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbc8:
    // 0x24cbc8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbcc:
    // 0x24cbcc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cbccu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CBCC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbd0:
    // 0x24cbd0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cbd0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CBD0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbd4:
    // 0x24cbd4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cbd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24CBD4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbd8:
    // 0x24cbd8: 0x42e8dc29  .word       0x42E8DC29                   # INVALID     $s7, $t0, -0x23D7 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cbd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24CBD8 raw=0x42E8DC29"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbdc:
    // 0x24cbdc: 0x180009  .word       0x00180009                   # jalr        $zero, $zero # 00180000 <InstrIdType: CPU_SPECIAL>
label_24cbe0:
    if (ctx->pc == 0x24CBE0u) {
        ctx->pc = 0x24CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBDCu;
        // 0x24cbe0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBE4u;
        goto label_24cbe4;
    }
    ctx->pc = 0x24CBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBDCu;
        // 0x24cbe0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CBDCu, 0x24CBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CBE4u;
label_24cbe4:
    // 0x24cbe4: 0xa800a8  .word       0x00A800A8                   # mfsa        $zero # 00A80080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24cbe4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_24cbe8:
    // 0x24cbe8: 0x83e0057  j           func_F8015C
label_24cbec:
    if (ctx->pc == 0x24CBECu) {
        ctx->pc = 0x24CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBE8u;
        // 0x24cbec: 0x86b011d  j           func_1AC0474 (Delay Slot)
        // J 0x1AC0474 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBF0u;
        goto label_24cbf0;
    }
    ctx->pc = 0x24CBE8u;
    ctx->pc = 0x24CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBE8u;
    // 0x24cbec: 0x86b011d  j           func_1AC0474 (Delay Slot)
    // J 0x1AC0474 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xF8015Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xF8015Cu, 0x24CBE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24CBF0u;
label_24cbf0:
    // 0x24cbf0: 0x2130212  .word       0x02130212                   # mflo        $zero # 02130200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cbf0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24cbf4:
    // 0x24cbf4: 0x17f0156  .word       0x017F0156                   # dsrlv       $zero, $ra, $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cbf4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) >> (GPR_U32(ctx, 11) & 0x3F));
label_24cbf8:
    // 0x24cbf8: 0x5200a9  .word       0x005200A9                   # mtsa        $v0 # 00120080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24cbf8u;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_24cbfc:
    // 0x24cbfc: 0x8  jr          $zero
label_24cc00:
    if (ctx->pc == 0x24CC00u) {
        ctx->pc = 0x24CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBFCu;
        // 0x24cc00: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24CC00 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC04u;
        goto label_24cc04;
    }
    ctx->pc = 0x24CBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBFCu;
        // 0x24cc00: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24CC00 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CBFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24CC04u;
label_24cc04:
    // 0x24cc04: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24CC04 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc08:
    // 0x24cc08: 0x0  nop
    ctx->pc = 0x24cc08u;
    // NOP
label_24cc0c:
    // 0x24cc0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cc0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cc10:
    // 0x24cc10: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cc10u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CC10 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc14:
    // 0x24cc14: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CC14 raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc18:
    // 0x24cc18: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cc18u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cc1c:
    // 0x24cc1c: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x24cc1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x24CC1C raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc20:
    // 0x24cc20: 0x0  nop
    ctx->pc = 0x24cc20u;
    // NOP
label_24cc24:
    // 0x24cc24: 0x0  nop
    ctx->pc = 0x24cc24u;
    // NOP
label_24cc28:
    // 0x24cc28: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cc28u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CC28 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc2c:
    // 0x24cc2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cc2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cc30:
    // 0x24cc30: 0x42300000  .word       0x42300000                   # INVALID     $s1, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc30u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24CC30 raw=0x42300000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc34:
    // 0x24cc34: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cc34u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CC34 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc38:
    // 0x24cc38: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24cc38u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24cc3c:
    // 0x24cc3c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24CC3C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc40:
    // 0x24cc40: 0x0  nop
    ctx->pc = 0x24cc40u;
    // NOP
label_24cc44:
    // 0x24cc44: 0x0  nop
    ctx->pc = 0x24cc44u;
    // NOP
label_24cc48:
    // 0x24cc48: 0x0  nop
    ctx->pc = 0x24cc48u;
    // NOP
label_24cc4c:
    // 0x24cc4c: 0x0  nop
    ctx->pc = 0x24cc4cu;
    // NOP
label_24cc50:
    // 0x24cc50: 0x0  nop
    ctx->pc = 0x24cc50u;
    // NOP
label_24cc54:
    // 0x24cc54: 0x0  nop
    ctx->pc = 0x24cc54u;
    // NOP
label_24cc58:
    // 0x24cc58: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cc5c:
    // 0x24cc5c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24cc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    ctx->pc = 0x24cc60u;
    return;
}
