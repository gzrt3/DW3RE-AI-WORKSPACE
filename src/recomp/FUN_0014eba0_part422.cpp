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


void FUN_0014eba0_part422(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21c4b0u: goto label_21c4b0;
        case 0x21c4b4u: goto label_21c4b4;
        case 0x21c4b8u: goto label_21c4b8;
        case 0x21c4bcu: goto label_21c4bc;
        case 0x21c4c0u: goto label_21c4c0;
        case 0x21c4c4u: goto label_21c4c4;
        case 0x21c4c8u: goto label_21c4c8;
        case 0x21c4ccu: goto label_21c4cc;
        case 0x21c4d0u: goto label_21c4d0;
        case 0x21c4d4u: goto label_21c4d4;
        case 0x21c4d8u: goto label_21c4d8;
        case 0x21c4dcu: goto label_21c4dc;
        case 0x21c4e0u: goto label_21c4e0;
        case 0x21c4e4u: goto label_21c4e4;
        case 0x21c4e8u: goto label_21c4e8;
        case 0x21c4ecu: goto label_21c4ec;
        case 0x21c4f0u: goto label_21c4f0;
        case 0x21c4f4u: goto label_21c4f4;
        case 0x21c4f8u: goto label_21c4f8;
        case 0x21c4fcu: goto label_21c4fc;
        case 0x21c500u: goto label_21c500;
        case 0x21c504u: goto label_21c504;
        case 0x21c508u: goto label_21c508;
        case 0x21c50cu: goto label_21c50c;
        case 0x21c510u: goto label_21c510;
        case 0x21c514u: goto label_21c514;
        case 0x21c518u: goto label_21c518;
        case 0x21c51cu: goto label_21c51c;
        case 0x21c520u: goto label_21c520;
        case 0x21c524u: goto label_21c524;
        case 0x21c528u: goto label_21c528;
        case 0x21c52cu: goto label_21c52c;
        case 0x21c530u: goto label_21c530;
        case 0x21c534u: goto label_21c534;
        case 0x21c538u: goto label_21c538;
        case 0x21c53cu: goto label_21c53c;
        case 0x21c540u: goto label_21c540;
        case 0x21c544u: goto label_21c544;
        case 0x21c548u: goto label_21c548;
        case 0x21c54cu: goto label_21c54c;
        case 0x21c550u: goto label_21c550;
        case 0x21c554u: goto label_21c554;
        case 0x21c558u: goto label_21c558;
        case 0x21c55cu: goto label_21c55c;
        case 0x21c560u: goto label_21c560;
        case 0x21c564u: goto label_21c564;
        case 0x21c568u: goto label_21c568;
        case 0x21c56cu: goto label_21c56c;
        case 0x21c570u: goto label_21c570;
        case 0x21c574u: goto label_21c574;
        case 0x21c578u: goto label_21c578;
        case 0x21c57cu: goto label_21c57c;
        case 0x21c580u: goto label_21c580;
        case 0x21c584u: goto label_21c584;
        case 0x21c588u: goto label_21c588;
        case 0x21c58cu: goto label_21c58c;
        case 0x21c590u: goto label_21c590;
        case 0x21c594u: goto label_21c594;
        case 0x21c598u: goto label_21c598;
        case 0x21c59cu: goto label_21c59c;
        case 0x21c5a0u: goto label_21c5a0;
        case 0x21c5a4u: goto label_21c5a4;
        case 0x21c5a8u: goto label_21c5a8;
        case 0x21c5acu: goto label_21c5ac;
        case 0x21c5b0u: goto label_21c5b0;
        case 0x21c5b4u: goto label_21c5b4;
        case 0x21c5b8u: goto label_21c5b8;
        case 0x21c5bcu: goto label_21c5bc;
        case 0x21c5c0u: goto label_21c5c0;
        case 0x21c5c4u: goto label_21c5c4;
        case 0x21c5c8u: goto label_21c5c8;
        case 0x21c5ccu: goto label_21c5cc;
        case 0x21c5d0u: goto label_21c5d0;
        case 0x21c5d4u: goto label_21c5d4;
        case 0x21c5d8u: goto label_21c5d8;
        case 0x21c5dcu: goto label_21c5dc;
        case 0x21c5e0u: goto label_21c5e0;
        case 0x21c5e4u: goto label_21c5e4;
        case 0x21c5e8u: goto label_21c5e8;
        case 0x21c5ecu: goto label_21c5ec;
        case 0x21c5f0u: goto label_21c5f0;
        case 0x21c5f4u: goto label_21c5f4;
        case 0x21c5f8u: goto label_21c5f8;
        case 0x21c5fcu: goto label_21c5fc;
        case 0x21c600u: goto label_21c600;
        case 0x21c604u: goto label_21c604;
        case 0x21c608u: goto label_21c608;
        case 0x21c60cu: goto label_21c60c;
        case 0x21c610u: goto label_21c610;
        case 0x21c614u: goto label_21c614;
        case 0x21c618u: goto label_21c618;
        case 0x21c61cu: goto label_21c61c;
        case 0x21c620u: goto label_21c620;
        case 0x21c624u: goto label_21c624;
        case 0x21c628u: goto label_21c628;
        case 0x21c62cu: goto label_21c62c;
        case 0x21c630u: goto label_21c630;
        case 0x21c634u: goto label_21c634;
        case 0x21c638u: goto label_21c638;
        case 0x21c63cu: goto label_21c63c;
        case 0x21c640u: goto label_21c640;
        case 0x21c644u: goto label_21c644;
        case 0x21c648u: goto label_21c648;
        case 0x21c64cu: goto label_21c64c;
        case 0x21c650u: goto label_21c650;
        case 0x21c654u: goto label_21c654;
        case 0x21c658u: goto label_21c658;
        case 0x21c65cu: goto label_21c65c;
        case 0x21c660u: goto label_21c660;
        case 0x21c664u: goto label_21c664;
        case 0x21c668u: goto label_21c668;
        case 0x21c66cu: goto label_21c66c;
        case 0x21c670u: goto label_21c670;
        case 0x21c674u: goto label_21c674;
        case 0x21c678u: goto label_21c678;
        case 0x21c67cu: goto label_21c67c;
        case 0x21c680u: goto label_21c680;
        case 0x21c684u: goto label_21c684;
        case 0x21c688u: goto label_21c688;
        case 0x21c68cu: goto label_21c68c;
        case 0x21c690u: goto label_21c690;
        case 0x21c694u: goto label_21c694;
        case 0x21c698u: goto label_21c698;
        case 0x21c69cu: goto label_21c69c;
        case 0x21c6a0u: goto label_21c6a0;
        case 0x21c6a4u: goto label_21c6a4;
        case 0x21c6a8u: goto label_21c6a8;
        case 0x21c6acu: goto label_21c6ac;
        case 0x21c6b0u: goto label_21c6b0;
        case 0x21c6b4u: goto label_21c6b4;
        case 0x21c6b8u: goto label_21c6b8;
        case 0x21c6bcu: goto label_21c6bc;
        case 0x21c6c0u: goto label_21c6c0;
        case 0x21c6c4u: goto label_21c6c4;
        case 0x21c6c8u: goto label_21c6c8;
        case 0x21c6ccu: goto label_21c6cc;
        case 0x21c6d0u: goto label_21c6d0;
        case 0x21c6d4u: goto label_21c6d4;
        case 0x21c6d8u: goto label_21c6d8;
        case 0x21c6dcu: goto label_21c6dc;
        case 0x21c6e0u: goto label_21c6e0;
        case 0x21c6e4u: goto label_21c6e4;
        case 0x21c6e8u: goto label_21c6e8;
        case 0x21c6ecu: goto label_21c6ec;
        case 0x21c6f0u: goto label_21c6f0;
        case 0x21c6f4u: goto label_21c6f4;
        case 0x21c6f8u: goto label_21c6f8;
        case 0x21c6fcu: goto label_21c6fc;
        case 0x21c700u: goto label_21c700;
        case 0x21c704u: goto label_21c704;
        case 0x21c708u: goto label_21c708;
        case 0x21c70cu: goto label_21c70c;
        case 0x21c710u: goto label_21c710;
        case 0x21c714u: goto label_21c714;
        case 0x21c718u: goto label_21c718;
        case 0x21c71cu: goto label_21c71c;
        case 0x21c720u: goto label_21c720;
        case 0x21c724u: goto label_21c724;
        case 0x21c728u: goto label_21c728;
        case 0x21c72cu: goto label_21c72c;
        case 0x21c730u: goto label_21c730;
        case 0x21c734u: goto label_21c734;
        case 0x21c738u: goto label_21c738;
        case 0x21c73cu: goto label_21c73c;
        case 0x21c740u: goto label_21c740;
        case 0x21c744u: goto label_21c744;
        case 0x21c748u: goto label_21c748;
        case 0x21c74cu: goto label_21c74c;
        case 0x21c750u: goto label_21c750;
        case 0x21c754u: goto label_21c754;
        case 0x21c758u: goto label_21c758;
        case 0x21c75cu: goto label_21c75c;
        case 0x21c760u: goto label_21c760;
        case 0x21c764u: goto label_21c764;
        case 0x21c768u: goto label_21c768;
        case 0x21c76cu: goto label_21c76c;
        case 0x21c770u: goto label_21c770;
        case 0x21c774u: goto label_21c774;
        case 0x21c778u: goto label_21c778;
        case 0x21c77cu: goto label_21c77c;
        case 0x21c780u: goto label_21c780;
        case 0x21c784u: goto label_21c784;
        case 0x21c788u: goto label_21c788;
        case 0x21c78cu: goto label_21c78c;
        case 0x21c790u: goto label_21c790;
        case 0x21c794u: goto label_21c794;
        case 0x21c798u: goto label_21c798;
        case 0x21c79cu: goto label_21c79c;
        case 0x21c7a0u: goto label_21c7a0;
        case 0x21c7a4u: goto label_21c7a4;
        case 0x21c7a8u: goto label_21c7a8;
        case 0x21c7acu: goto label_21c7ac;
        case 0x21c7b0u: goto label_21c7b0;
        case 0x21c7b4u: goto label_21c7b4;
        case 0x21c7b8u: goto label_21c7b8;
        case 0x21c7bcu: goto label_21c7bc;
        case 0x21c7c0u: goto label_21c7c0;
        case 0x21c7c4u: goto label_21c7c4;
        case 0x21c7c8u: goto label_21c7c8;
        case 0x21c7ccu: goto label_21c7cc;
        case 0x21c7d0u: goto label_21c7d0;
        case 0x21c7d4u: goto label_21c7d4;
        case 0x21c7d8u: goto label_21c7d8;
        case 0x21c7dcu: goto label_21c7dc;
        case 0x21c7e0u: goto label_21c7e0;
        case 0x21c7e4u: goto label_21c7e4;
        case 0x21c7e8u: goto label_21c7e8;
        case 0x21c7ecu: goto label_21c7ec;
        case 0x21c7f0u: goto label_21c7f0;
        case 0x21c7f4u: goto label_21c7f4;
        case 0x21c7f8u: goto label_21c7f8;
        case 0x21c7fcu: goto label_21c7fc;
        case 0x21c800u: goto label_21c800;
        case 0x21c804u: goto label_21c804;
        case 0x21c808u: goto label_21c808;
        case 0x21c80cu: goto label_21c80c;
        case 0x21c810u: goto label_21c810;
        case 0x21c814u: goto label_21c814;
        case 0x21c818u: goto label_21c818;
        case 0x21c81cu: goto label_21c81c;
        case 0x21c820u: goto label_21c820;
        case 0x21c824u: goto label_21c824;
        case 0x21c828u: goto label_21c828;
        case 0x21c82cu: goto label_21c82c;
        case 0x21c830u: goto label_21c830;
        case 0x21c834u: goto label_21c834;
        case 0x21c838u: goto label_21c838;
        case 0x21c83cu: goto label_21c83c;
        case 0x21c840u: goto label_21c840;
        case 0x21c844u: goto label_21c844;
        case 0x21c848u: goto label_21c848;
        case 0x21c84cu: goto label_21c84c;
        case 0x21c850u: goto label_21c850;
        case 0x21c854u: goto label_21c854;
        case 0x21c858u: goto label_21c858;
        case 0x21c85cu: goto label_21c85c;
        case 0x21c860u: goto label_21c860;
        case 0x21c864u: goto label_21c864;
        case 0x21c868u: goto label_21c868;
        case 0x21c86cu: goto label_21c86c;
        case 0x21c870u: goto label_21c870;
        case 0x21c874u: goto label_21c874;
        case 0x21c878u: goto label_21c878;
        case 0x21c87cu: goto label_21c87c;
        case 0x21c880u: goto label_21c880;
        case 0x21c884u: goto label_21c884;
        case 0x21c888u: goto label_21c888;
        case 0x21c88cu: goto label_21c88c;
        case 0x21c890u: goto label_21c890;
        case 0x21c894u: goto label_21c894;
        case 0x21c898u: goto label_21c898;
        case 0x21c89cu: goto label_21c89c;
        case 0x21c8a0u: goto label_21c8a0;
        case 0x21c8a4u: goto label_21c8a4;
        case 0x21c8a8u: goto label_21c8a8;
        case 0x21c8acu: goto label_21c8ac;
        case 0x21c8b0u: goto label_21c8b0;
        case 0x21c8b4u: goto label_21c8b4;
        case 0x21c8b8u: goto label_21c8b8;
        case 0x21c8bcu: goto label_21c8bc;
        case 0x21c8c0u: goto label_21c8c0;
        case 0x21c8c4u: goto label_21c8c4;
        case 0x21c8c8u: goto label_21c8c8;
        case 0x21c8ccu: goto label_21c8cc;
        case 0x21c8d0u: goto label_21c8d0;
        case 0x21c8d4u: goto label_21c8d4;
        case 0x21c8d8u: goto label_21c8d8;
        case 0x21c8dcu: goto label_21c8dc;
        case 0x21c8e0u: goto label_21c8e0;
        case 0x21c8e4u: goto label_21c8e4;
        case 0x21c8e8u: goto label_21c8e8;
        case 0x21c8ecu: goto label_21c8ec;
        case 0x21c8f0u: goto label_21c8f0;
        case 0x21c8f4u: goto label_21c8f4;
        case 0x21c8f8u: goto label_21c8f8;
        case 0x21c8fcu: goto label_21c8fc;
        case 0x21c900u: goto label_21c900;
        case 0x21c904u: goto label_21c904;
        case 0x21c908u: goto label_21c908;
        case 0x21c90cu: goto label_21c90c;
        case 0x21c910u: goto label_21c910;
        case 0x21c914u: goto label_21c914;
        case 0x21c918u: goto label_21c918;
        case 0x21c91cu: goto label_21c91c;
        case 0x21c920u: goto label_21c920;
        case 0x21c924u: goto label_21c924;
        case 0x21c928u: goto label_21c928;
        case 0x21c92cu: goto label_21c92c;
        case 0x21c930u: goto label_21c930;
        case 0x21c934u: goto label_21c934;
        case 0x21c938u: goto label_21c938;
        case 0x21c93cu: goto label_21c93c;
        case 0x21c940u: goto label_21c940;
        case 0x21c944u: goto label_21c944;
        case 0x21c948u: goto label_21c948;
        case 0x21c94cu: goto label_21c94c;
        case 0x21c950u: goto label_21c950;
        case 0x21c954u: goto label_21c954;
        case 0x21c958u: goto label_21c958;
        case 0x21c95cu: goto label_21c95c;
        case 0x21c960u: goto label_21c960;
        case 0x21c964u: goto label_21c964;
        case 0x21c968u: goto label_21c968;
        case 0x21c96cu: goto label_21c96c;
        case 0x21c970u: goto label_21c970;
        case 0x21c974u: goto label_21c974;
        case 0x21c978u: goto label_21c978;
        case 0x21c97cu: goto label_21c97c;
        case 0x21c980u: goto label_21c980;
        case 0x21c984u: goto label_21c984;
        case 0x21c988u: goto label_21c988;
        case 0x21c98cu: goto label_21c98c;
        case 0x21c990u: goto label_21c990;
        case 0x21c994u: goto label_21c994;
        case 0x21c998u: goto label_21c998;
        case 0x21c99cu: goto label_21c99c;
        case 0x21c9a0u: goto label_21c9a0;
        case 0x21c9a4u: goto label_21c9a4;
        case 0x21c9a8u: goto label_21c9a8;
        case 0x21c9acu: goto label_21c9ac;
        case 0x21c9b0u: goto label_21c9b0;
        case 0x21c9b4u: goto label_21c9b4;
        case 0x21c9b8u: goto label_21c9b8;
        case 0x21c9bcu: goto label_21c9bc;
        case 0x21c9c0u: goto label_21c9c0;
        case 0x21c9c4u: goto label_21c9c4;
        case 0x21c9c8u: goto label_21c9c8;
        case 0x21c9ccu: goto label_21c9cc;
        case 0x21c9d0u: goto label_21c9d0;
        case 0x21c9d4u: goto label_21c9d4;
        case 0x21c9d8u: goto label_21c9d8;
        case 0x21c9dcu: goto label_21c9dc;
        case 0x21c9e0u: goto label_21c9e0;
        case 0x21c9e4u: goto label_21c9e4;
        case 0x21c9e8u: goto label_21c9e8;
        case 0x21c9ecu: goto label_21c9ec;
        case 0x21c9f0u: goto label_21c9f0;
        case 0x21c9f4u: goto label_21c9f4;
        case 0x21c9f8u: goto label_21c9f8;
        case 0x21c9fcu: goto label_21c9fc;
        case 0x21ca00u: goto label_21ca00;
        case 0x21ca04u: goto label_21ca04;
        case 0x21ca08u: goto label_21ca08;
        case 0x21ca0cu: goto label_21ca0c;
        case 0x21ca10u: goto label_21ca10;
        case 0x21ca14u: goto label_21ca14;
        case 0x21ca18u: goto label_21ca18;
        case 0x21ca1cu: goto label_21ca1c;
        case 0x21ca20u: goto label_21ca20;
        case 0x21ca24u: goto label_21ca24;
        case 0x21ca28u: goto label_21ca28;
        case 0x21ca2cu: goto label_21ca2c;
        case 0x21ca30u: goto label_21ca30;
        case 0x21ca34u: goto label_21ca34;
        case 0x21ca38u: goto label_21ca38;
        case 0x21ca3cu: goto label_21ca3c;
        case 0x21ca40u: goto label_21ca40;
        case 0x21ca44u: goto label_21ca44;
        case 0x21ca48u: goto label_21ca48;
        case 0x21ca4cu: goto label_21ca4c;
        case 0x21ca50u: goto label_21ca50;
        case 0x21ca54u: goto label_21ca54;
        case 0x21ca58u: goto label_21ca58;
        case 0x21ca5cu: goto label_21ca5c;
        case 0x21ca60u: goto label_21ca60;
        case 0x21ca64u: goto label_21ca64;
        case 0x21ca68u: goto label_21ca68;
        case 0x21ca6cu: goto label_21ca6c;
        case 0x21ca70u: goto label_21ca70;
        case 0x21ca74u: goto label_21ca74;
        case 0x21ca78u: goto label_21ca78;
        case 0x21ca7cu: goto label_21ca7c;
        case 0x21ca80u: goto label_21ca80;
        case 0x21ca84u: goto label_21ca84;
        case 0x21ca88u: goto label_21ca88;
        case 0x21ca8cu: goto label_21ca8c;
        case 0x21ca90u: goto label_21ca90;
        case 0x21ca94u: goto label_21ca94;
        case 0x21ca98u: goto label_21ca98;
        case 0x21ca9cu: goto label_21ca9c;
        case 0x21caa0u: goto label_21caa0;
        case 0x21caa4u: goto label_21caa4;
        case 0x21caa8u: goto label_21caa8;
        case 0x21caacu: goto label_21caac;
        case 0x21cab0u: goto label_21cab0;
        case 0x21cab4u: goto label_21cab4;
        case 0x21cab8u: goto label_21cab8;
        case 0x21cabcu: goto label_21cabc;
        case 0x21cac0u: goto label_21cac0;
        case 0x21cac4u: goto label_21cac4;
        case 0x21cac8u: goto label_21cac8;
        case 0x21caccu: goto label_21cacc;
        case 0x21cad0u: goto label_21cad0;
        case 0x21cad4u: goto label_21cad4;
        case 0x21cad8u: goto label_21cad8;
        case 0x21cadcu: goto label_21cadc;
        case 0x21cae0u: goto label_21cae0;
        case 0x21cae4u: goto label_21cae4;
        case 0x21cae8u: goto label_21cae8;
        case 0x21caecu: goto label_21caec;
        case 0x21caf0u: goto label_21caf0;
        case 0x21caf4u: goto label_21caf4;
        case 0x21caf8u: goto label_21caf8;
        case 0x21cafcu: goto label_21cafc;
        case 0x21cb00u: goto label_21cb00;
        case 0x21cb04u: goto label_21cb04;
        case 0x21cb08u: goto label_21cb08;
        case 0x21cb0cu: goto label_21cb0c;
        case 0x21cb10u: goto label_21cb10;
        case 0x21cb14u: goto label_21cb14;
        case 0x21cb18u: goto label_21cb18;
        case 0x21cb1cu: goto label_21cb1c;
        case 0x21cb20u: goto label_21cb20;
        case 0x21cb24u: goto label_21cb24;
        case 0x21cb28u: goto label_21cb28;
        case 0x21cb2cu: goto label_21cb2c;
        case 0x21cb30u: goto label_21cb30;
        case 0x21cb34u: goto label_21cb34;
        case 0x21cb38u: goto label_21cb38;
        case 0x21cb3cu: goto label_21cb3c;
        case 0x21cb40u: goto label_21cb40;
        case 0x21cb44u: goto label_21cb44;
        case 0x21cb48u: goto label_21cb48;
        case 0x21cb4cu: goto label_21cb4c;
        case 0x21cb50u: goto label_21cb50;
        case 0x21cb54u: goto label_21cb54;
        case 0x21cb58u: goto label_21cb58;
        case 0x21cb5cu: goto label_21cb5c;
        case 0x21cb60u: goto label_21cb60;
        case 0x21cb64u: goto label_21cb64;
        case 0x21cb68u: goto label_21cb68;
        case 0x21cb6cu: goto label_21cb6c;
        case 0x21cb70u: goto label_21cb70;
        case 0x21cb74u: goto label_21cb74;
        case 0x21cb78u: goto label_21cb78;
        case 0x21cb7cu: goto label_21cb7c;
        case 0x21cb80u: goto label_21cb80;
        case 0x21cb84u: goto label_21cb84;
        case 0x21cb88u: goto label_21cb88;
        case 0x21cb8cu: goto label_21cb8c;
        case 0x21cb90u: goto label_21cb90;
        case 0x21cb94u: goto label_21cb94;
        case 0x21cb98u: goto label_21cb98;
        case 0x21cb9cu: goto label_21cb9c;
        case 0x21cba0u: goto label_21cba0;
        case 0x21cba4u: goto label_21cba4;
        case 0x21cba8u: goto label_21cba8;
        case 0x21cbacu: goto label_21cbac;
        case 0x21cbb0u: goto label_21cbb0;
        case 0x21cbb4u: goto label_21cbb4;
        case 0x21cbb8u: goto label_21cbb8;
        case 0x21cbbcu: goto label_21cbbc;
        case 0x21cbc0u: goto label_21cbc0;
        case 0x21cbc4u: goto label_21cbc4;
        case 0x21cbc8u: goto label_21cbc8;
        case 0x21cbccu: goto label_21cbcc;
        case 0x21cbd0u: goto label_21cbd0;
        case 0x21cbd4u: goto label_21cbd4;
        case 0x21cbd8u: goto label_21cbd8;
        case 0x21cbdcu: goto label_21cbdc;
        case 0x21cbe0u: goto label_21cbe0;
        case 0x21cbe4u: goto label_21cbe4;
        case 0x21cbe8u: goto label_21cbe8;
        case 0x21cbecu: goto label_21cbec;
        case 0x21cbf0u: goto label_21cbf0;
        case 0x21cbf4u: goto label_21cbf4;
        case 0x21cbf8u: goto label_21cbf8;
        case 0x21cbfcu: goto label_21cbfc;
        case 0x21cc00u: goto label_21cc00;
        case 0x21cc04u: goto label_21cc04;
        case 0x21cc08u: goto label_21cc08;
        case 0x21cc0cu: goto label_21cc0c;
        case 0x21cc10u: goto label_21cc10;
        case 0x21cc14u: goto label_21cc14;
        case 0x21cc18u: goto label_21cc18;
        case 0x21cc1cu: goto label_21cc1c;
        case 0x21cc20u: goto label_21cc20;
        case 0x21cc24u: goto label_21cc24;
        case 0x21cc28u: goto label_21cc28;
        case 0x21cc2cu: goto label_21cc2c;
        case 0x21cc30u: goto label_21cc30;
        case 0x21cc34u: goto label_21cc34;
        case 0x21cc38u: goto label_21cc38;
        case 0x21cc3cu: goto label_21cc3c;
        case 0x21cc40u: goto label_21cc40;
        case 0x21cc44u: goto label_21cc44;
        case 0x21cc48u: goto label_21cc48;
        case 0x21cc4cu: goto label_21cc4c;
        case 0x21cc50u: goto label_21cc50;
        case 0x21cc54u: goto label_21cc54;
        case 0x21cc58u: goto label_21cc58;
        case 0x21cc5cu: goto label_21cc5c;
        case 0x21cc60u: goto label_21cc60;
        case 0x21cc64u: goto label_21cc64;
        case 0x21cc68u: goto label_21cc68;
        case 0x21cc6cu: goto label_21cc6c;
        case 0x21cc70u: goto label_21cc70;
        case 0x21cc74u: goto label_21cc74;
        case 0x21cc78u: goto label_21cc78;
        case 0x21cc7cu: goto label_21cc7c;
        default: return;
    }

label_21c4b0:
    // 0x21c4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21c4b4:
    if (ctx->pc == 0x21C4B4u) {
        ctx->pc = 0x21C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4B0u;
        // 0x21c4b4: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C4B8u;
        goto label_21c4b8;
    }
    ctx->pc = 0x21C4B0u;
    {
        const bool branch_taken_0x21c4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4B0u;
        // 0x21c4b4: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c4b0) {
            ctx->pc = 0x21C4C0u;
            goto label_21c4c0;
        }
    }
    ctx->pc = 0x21C4B8u;
label_21c4b8:
    // 0x21c4b8: 0xc0452cc  jal         func_114B30
label_21c4bc:
    if (ctx->pc == 0x21C4BCu) {
        ctx->pc = 0x21C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4B8u;
        // 0x21c4bc: 0x24848d00  addiu       $a0, $a0, -0x7300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C4C0u;
        goto label_21c4c0;
    }
    ctx->pc = 0x21C4B8u;
    SET_GPR_U32(ctx, 31, 0x21C4C0u);
    ctx->pc = 0x21C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4B8u;
    // 0x21c4bc: 0x24848d00  addiu       $a0, $a0, -0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x21C4B8u, 0x21C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4C0u;
label_21c4c0:
    // 0x21c4c0: 0xaf8092cc  sw          $zero, -0x6D34($gp)
    ctx->pc = 0x21c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 0));
label_21c4c4:
    // 0x21c4c4: 0xaf9092d0  sw          $s0, -0x6D30($gp)
    ctx->pc = 0x21c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939344), GPR_U32(ctx, 16));
label_21c4c8:
    // 0x21c4c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c4cc:
    // 0x21c4cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21c4d0:
    // 0x21c4d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21c4d4:
    // 0x21c4d4: 0x3e00008  jr          $ra
label_21c4d8:
    if (ctx->pc == 0x21C4D8u) {
        ctx->pc = 0x21C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4D4u;
        // 0x21c4d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C4DCu;
        goto label_21c4dc;
    }
    ctx->pc = 0x21C4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4D4u;
        // 0x21c4d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C4DCu;
label_21c4dc:
    // 0x21c4dc: 0x0  nop
    ctx->pc = 0x21c4dcu;
    // NOP
label_21c4e0:
    // 0x21c4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21c4e4:
    // 0x21c4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21c4e8:
    // 0x21c4e8: 0xc087164  jal         func_21C590
label_21c4ec:
    if (ctx->pc == 0x21C4ECu) {
        ctx->pc = 0x21C4F0u;
        goto label_21c4f0;
    }
    ctx->pc = 0x21C4E8u;
    SET_GPR_U32(ctx, 31, 0x21C4F0u);
    ctx->pc = 0x21C590u;
    goto label_21c590;
    ctx->pc = 0x21C4F0u;
label_21c4f0:
    // 0x21c4f0: 0xc045bac  jal         func_116EB0
label_21c4f4:
    if (ctx->pc == 0x21C4F4u) {
        ctx->pc = 0x21C4F8u;
        goto label_21c4f8;
    }
    ctx->pc = 0x21C4F0u;
    SET_GPR_U32(ctx, 31, 0x21C4F8u);
    ctx->pc = 0x116EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EB0u, 0x21C4F0u, 0x21C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4F8u;
label_21c4f8:
    // 0x21c4f8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c4fc:
    // 0x21c4fc: 0x8c228eb0  lw          $v0, -0x7150($at)
    ctx->pc = 0x21c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938288)));
label_21c500:
    // 0x21c500: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_21c504:
    if (ctx->pc == 0x21C504u) {
        ctx->pc = 0x21C508u;
        goto label_21c508;
    }
    ctx->pc = 0x21C500u;
    {
        const bool branch_taken_0x21c500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c500) {
            ctx->pc = 0x21C534u;
            goto label_21c534;
        }
    }
    ctx->pc = 0x21C508u;
label_21c508:
    // 0x21c508: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x21c508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_21c50c:
    // 0x21c50c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x21c50cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_21c510:
    // 0x21c510: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_21c514:
    if (ctx->pc == 0x21C514u) {
        ctx->pc = 0x21C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C510u;
        // 0x21c514: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C518u;
        goto label_21c518;
    }
    ctx->pc = 0x21C510u;
    {
        const bool branch_taken_0x21c510 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C510u;
        // 0x21c514: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c510) {
            ctx->pc = 0x21C534u;
            goto label_21c534;
        }
    }
    ctx->pc = 0x21C518u;
label_21c518:
    // 0x21c518: 0x8c238d34  lw          $v1, -0x72CC($at)
    ctx->pc = 0x21c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937908)));
label_21c51c:
    // 0x21c51c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_21c520:
    // 0x21c520: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x21c520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_21c524:
    // 0x21c524: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_21c528:
    // 0x21c528: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x21c528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_21c52c:
    // 0x21c52c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_21c530:
    // 0x21c530: 0xa040008c  sb          $zero, 0x8C($v0)
    ctx->pc = 0x21c530u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 0));
label_21c534:
    // 0x21c534: 0xc053250  jal         func_14C940
label_21c538:
    if (ctx->pc == 0x21C538u) {
        ctx->pc = 0x21C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C534u;
        // 0x21c538: 0x8f8480d0  lw          $a0, -0x7F30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C53Cu;
        goto label_21c53c;
    }
    ctx->pc = 0x21C534u;
    SET_GPR_U32(ctx, 31, 0x21C53Cu);
    ctx->pc = 0x21C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C534u;
    // 0x21c538: 0x8f8480d0  lw          $a0, -0x7F30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C940u, 0x21C534u, 0x21C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C53Cu;
label_21c53c:
    // 0x21c53c: 0xc055478  jal         func_1551E0
label_21c540:
    if (ctx->pc == 0x21C540u) {
        ctx->pc = 0x21C544u;
        goto label_21c544;
    }
    ctx->pc = 0x21C53Cu;
    SET_GPR_U32(ctx, 31, 0x21C544u);
    ctx->pc = 0x1551E0u;
    { ctx->pc = 0x1551e0; return; }
    ctx->pc = 0x21C544u;
label_21c544:
    // 0x21c544: 0xc064710  jal         func_191C40
label_21c548:
    if (ctx->pc == 0x21C548u) {
        ctx->pc = 0x21C54Cu;
        goto label_21c54c;
    }
    ctx->pc = 0x21C544u;
    SET_GPR_U32(ctx, 31, 0x21C54Cu);
    ctx->pc = 0x191C40u;
    { ctx->pc = 0x191c40; return; }
    ctx->pc = 0x21C54Cu;
label_21c54c:
    // 0x21c54c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c550:
    // 0x21c550: 0x90228ea2  lbu         $v0, -0x715E($at)
    ctx->pc = 0x21c550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938274)));
label_21c554:
    // 0x21c554: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_21c558:
    if (ctx->pc == 0x21C558u) {
        ctx->pc = 0x21C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C554u;
        // 0x21c558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C55Cu;
        goto label_21c55c;
    }
    ctx->pc = 0x21C554u;
    {
        const bool branch_taken_0x21c554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C554u;
        // 0x21c558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c554) {
            ctx->pc = 0x21C570u;
            goto label_21c570;
        }
    }
    ctx->pc = 0x21C55Cu;
label_21c55c:
    // 0x21c55c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x21c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_21c560:
    // 0x21c560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c564:
    // 0x21c564: 0xc045460  jal         func_115180
label_21c568:
    if (ctx->pc == 0x21C568u) {
        ctx->pc = 0x21C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C564u;
        // 0x21c568: 0x24a58d00  addiu       $a1, $a1, -0x7300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C56Cu;
        goto label_21c56c;
    }
    ctx->pc = 0x21C564u;
    SET_GPR_U32(ctx, 31, 0x21C56Cu);
    ctx->pc = 0x21C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C564u;
    // 0x21c568: 0x24a58d00  addiu       $a1, $a1, -0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115180u, 0x21C564u, 0x21C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C56Cu;
label_21c56c:
    // 0x21c56c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c570:
    // 0x21c570: 0xc0571f8  jal         func_15C7E0
label_21c574:
    if (ctx->pc == 0x21C574u) {
        ctx->pc = 0x21C578u;
        goto label_21c578;
    }
    ctx->pc = 0x21C570u;
    SET_GPR_U32(ctx, 31, 0x21C578u);
    ctx->pc = 0x15C7E0u;
    { ctx->pc = 0x15c7e0; return; }
    ctx->pc = 0x21C578u;
label_21c578:
    // 0x21c578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c57c:
    // 0x21c57c: 0x3e00008  jr          $ra
label_21c580:
    if (ctx->pc == 0x21C580u) {
        ctx->pc = 0x21C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C57Cu;
        // 0x21c580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C584u;
        goto label_21c584;
    }
    ctx->pc = 0x21C57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C57Cu;
        // 0x21c580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C584u;
label_21c584:
    // 0x21c584: 0x0  nop
    ctx->pc = 0x21c584u;
    // NOP
label_21c588:
    // 0x21c588: 0x0  nop
    ctx->pc = 0x21c588u;
    // NOP
label_21c58c:
    // 0x21c58c: 0x0  nop
    ctx->pc = 0x21c58cu;
    // NOP
label_21c590:
    // 0x21c590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21c594:
    // 0x21c594: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c598:
    // 0x21c598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21c59c:
    // 0x21c59c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21c5a0:
    // 0x21c5a0: 0x84228d3c  lh          $v0, -0x72C4($at)
    ctx->pc = 0x21c5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294937916)));
label_21c5a4:
    // 0x21c5a4: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x21c5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_21c5a8:
    // 0x21c5a8: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_21c5ac:
    if (ctx->pc == 0x21C5ACu) {
        ctx->pc = 0x21C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5A8u;
        // 0x21c5ac: 0x26108d00  addiu       $s0, $s0, -0x7300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C5B0u;
        goto label_21c5b0;
    }
    ctx->pc = 0x21C5A8u;
    {
        const bool branch_taken_0x21c5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5A8u;
        // 0x21c5ac: 0x26108d00  addiu       $s0, $s0, -0x7300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5a8) {
            ctx->pc = 0x21C698u;
            goto label_21c698;
        }
    }
    ctx->pc = 0x21C5B0u;
label_21c5b0:
    // 0x21c5b0: 0x8f8392c4  lw          $v1, -0x6D3C($gp)
    ctx->pc = 0x21c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
label_21c5b4:
    // 0x21c5b4: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x21c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_21c5b8:
    // 0x21c5b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21c5bc:
    // 0x21c5bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x21c5bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21c5c0:
    // 0x21c5c0: 0x0  nop
    ctx->pc = 0x21c5c0u;
    // NOP
label_21c5c4:
    // 0x21c5c4: 0x0  nop
    ctx->pc = 0x21c5c4u;
    // NOP
label_21c5c8:
    // 0x21c5c8: 0x1010  mfhi        $v0
    ctx->pc = 0x21c5c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_21c5cc:
    // 0x21c5cc: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_21c5d0:
    if (ctx->pc == 0x21C5D0u) {
        ctx->pc = 0x21C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5CCu;
        // 0x21c5d0: 0xaf8392c4  sw          $v1, -0x6D3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C5D4u;
        goto label_21c5d4;
    }
    ctx->pc = 0x21C5CCu;
    {
        const bool branch_taken_0x21c5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C5CCu;
        // 0x21c5d0: 0xaf8392c4  sw          $v1, -0x6D3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c5cc) {
            ctx->pc = 0x21C69Cu;
            goto label_21c69c;
        }
    }
    ctx->pc = 0x21C5D4u;
label_21c5d4:
    // 0x21c5d4: 0xc08f0cc  jal         func_23C330
label_21c5d8:
    if (ctx->pc == 0x21C5D8u) {
        ctx->pc = 0x21C5DCu;
        goto label_21c5dc;
    }
    ctx->pc = 0x21C5D4u;
    SET_GPR_U32(ctx, 31, 0x21C5DCu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x21C5DCu;
label_21c5dc:
    // 0x21c5dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21c5e0:
    // 0x21c5e0: 0x0  nop
    ctx->pc = 0x21c5e0u;
    // NOP
label_21c5e4:
    // 0x21c5e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21c5e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_21c5e8:
    // 0x21c5e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_21c5ec:
    // 0x21c5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c5f0:
    // 0x21c5f0: 0x0  nop
    ctx->pc = 0x21c5f0u;
    // NOP
label_21c5f4:
    // 0x21c5f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21c5f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_21c5f8:
    // 0x21c5f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x21c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_21c5fc:
    // 0x21c5fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21c600:
    // 0x21c600: 0x0  nop
    ctx->pc = 0x21c600u;
    // NOP
label_21c604:
    // 0x21c604: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x21c604u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_21c608:
    // 0x21c608: 0x0  nop
    ctx->pc = 0x21c608u;
    // NOP
label_21c60c:
    // 0x21c60c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21c60cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_21c610:
    // 0x21c610: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x21c610u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_21c614:
    // 0x21c614: 0x0  nop
    ctx->pc = 0x21c614u;
    // NOP
label_21c618:
    // 0x21c618: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_21c61c:
    if (ctx->pc == 0x21C61Cu) {
        ctx->pc = 0x21C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C618u;
        // 0x21c61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C620u;
        goto label_21c620;
    }
    ctx->pc = 0x21C618u;
    {
        const bool branch_taken_0x21c618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C618u;
        // 0x21c61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c618) {
            ctx->pc = 0x21C6A0u;
            goto label_21c6a0;
        }
    }
    ctx->pc = 0x21C620u;
label_21c620:
    // 0x21c620: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x21c620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_21c624:
    // 0x21c624: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x21c624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21c628:
    // 0x21c628: 0x2484d930  addiu       $a0, $a0, -0x26D0
    ctx->pc = 0x21c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957360));
label_21c62c:
    // 0x21c62c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x21c62cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21c630:
    // 0x21c630: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x21c630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c634:
    // 0x21c634: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x21c634u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_21c638:
    // 0x21c638: 0xc08f0cc  jal         func_23C330
label_21c63c:
    if (ctx->pc == 0x21C63Cu) {
        ctx->pc = 0x21C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C638u;
        // 0x21c63c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C640u;
        goto label_21c640;
    }
    ctx->pc = 0x21C638u;
    SET_GPR_U32(ctx, 31, 0x21C640u);
    ctx->pc = 0x21C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C638u;
    // 0x21c63c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x21C640u;
label_21c640:
    // 0x21c640: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21c644:
    // 0x21c644: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x21c644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_21c648:
    // 0x21c648: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x21c648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21c64c:
    // 0x21c64c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21c64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_21c650:
    // 0x21c650: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x21c650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_21c654:
    // 0x21c654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c658:
    // 0x21c658: 0x0  nop
    ctx->pc = 0x21c658u;
    // NOP
label_21c65c:
    // 0x21c65c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21c65cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_21c660:
    // 0x21c660: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x21c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21c664:
    // 0x21c664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c668:
    // 0x21c668: 0x0  nop
    ctx->pc = 0x21c668u;
    // NOP
label_21c66c:
    // 0x21c66c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x21c66cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_21c670:
    // 0x21c670: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21c670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_21c674:
    // 0x21c674: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x21c674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_21c678:
    // 0x21c678: 0x0  nop
    ctx->pc = 0x21c678u;
    // NOP
label_21c67c:
    // 0x21c67c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21c680:
    // 0x21c680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21c684:
    // 0x21c684: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21c688:
    // 0x21c688: 0xc050ed0  jal         func_143B40
label_21c68c:
    if (ctx->pc == 0x21C68Cu) {
        ctx->pc = 0x21C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C688u;
        // 0x21c68c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C690u;
        goto label_21c690;
    }
    ctx->pc = 0x21C688u;
    SET_GPR_U32(ctx, 31, 0x21C690u);
    ctx->pc = 0x21C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C688u;
    // 0x21c68c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B40u, 0x21C688u, 0x21C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C690u;
label_21c690:
    // 0x21c690: 0x10000002  b           . + 4 + (0x2 << 2)
label_21c694:
    if (ctx->pc == 0x21C694u) {
        ctx->pc = 0x21C698u;
        goto label_21c698;
    }
    ctx->pc = 0x21C690u;
    {
        const bool branch_taken_0x21c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c690) {
            ctx->pc = 0x21C69Cu;
            goto label_21c69c;
        }
    }
    ctx->pc = 0x21C698u;
label_21c698:
    // 0x21c698: 0xaf8092c4  sw          $zero, -0x6D3C($gp)
    ctx->pc = 0x21c698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 0));
label_21c69c:
    // 0x21c69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c6a0:
    // 0x21c6a0: 0xc04fe24  jal         func_13F890
label_21c6a4:
    if (ctx->pc == 0x21C6A4u) {
        ctx->pc = 0x21C6A8u;
        goto label_21c6a8;
    }
    ctx->pc = 0x21C6A0u;
    SET_GPR_U32(ctx, 31, 0x21C6A8u);
    ctx->pc = 0x13F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F890u, 0x21C6A0u, 0x21C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6A8u;
label_21c6a8:
    // 0x21c6a8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x21c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_21c6ac:
    // 0x21c6ac: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x21c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_21c6b0:
    // 0x21c6b0: 0xdf8387d0  ld          $v1, -0x7830($gp)
    ctx->pc = 0x21c6b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_21c6b4:
    // 0x21c6b4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x21c6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_21c6b8:
    // 0x21c6b8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_21c6bc:
    if (ctx->pc == 0x21C6BCu) {
        ctx->pc = 0x21C6C0u;
        goto label_21c6c0;
    }
    ctx->pc = 0x21C6B8u;
    {
        const bool branch_taken_0x21c6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c6b8) {
            ctx->pc = 0x21C740u;
            goto label_21c740;
        }
    }
    ctx->pc = 0x21C6C0u;
label_21c6c0:
    // 0x21c6c0: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x21c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21c6c4:
    // 0x21c6c4: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x21c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
label_21c6c8:
    // 0x21c6c8: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x21c6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_21c6cc:
    // 0x21c6cc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21c6ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21c6d0:
    // 0x21c6d0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x21c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_21c6d4:
    // 0x21c6d4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_21c6d8:
    // 0x21c6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c6dc:
    // 0x21c6dc: 0x0  nop
    ctx->pc = 0x21c6dcu;
    // NOP
label_21c6e0:
    // 0x21c6e0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x21c6e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_21c6e4:
    // 0x21c6e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21c6e8:
    // 0x21c6e8: 0x0  nop
    ctx->pc = 0x21c6e8u;
    // NOP
label_21c6ec:
    // 0x21c6ec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_21c6f0:
    if (ctx->pc == 0x21C6F0u) {
        ctx->pc = 0x21C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6ECu;
        // 0x21c6f0: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C6F4u;
        goto label_21c6f4;
    }
    ctx->pc = 0x21C6ECu;
    {
        const bool branch_taken_0x21c6ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6ECu;
        // 0x21c6f0: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6ec) {
            ctx->pc = 0x21C708u;
            goto label_21c708;
        }
    }
    ctx->pc = 0x21C6F4u;
label_21c6f4:
    // 0x21c6f4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_21c6f8:
    // 0x21c6f8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_21c6fc:
    // 0x21c6fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c700:
    // 0x21c700: 0x1000000d  b           . + 4 + (0xD << 2)
label_21c704:
    if (ctx->pc == 0x21C704u) {
        ctx->pc = 0x21C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C700u;
        // 0x21c704: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C708u;
        goto label_21c708;
    }
    ctx->pc = 0x21C700u;
    {
        const bool branch_taken_0x21c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C700u;
        // 0x21c704: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c700) {
            ctx->pc = 0x21C738u;
            goto label_21c738;
        }
    }
    ctx->pc = 0x21C708u;
label_21c708:
    // 0x21c708: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_21c70c:
    // 0x21c70c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c70cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c710:
    // 0x21c710: 0x0  nop
    ctx->pc = 0x21c710u;
    // NOP
label_21c714:
    // 0x21c714: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21c718:
    // 0x21c718: 0x0  nop
    ctx->pc = 0x21c718u;
    // NOP
label_21c71c:
    // 0x21c71c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_21c720:
    if (ctx->pc == 0x21C720u) {
        ctx->pc = 0x21C724u;
        goto label_21c724;
    }
    ctx->pc = 0x21C71Cu;
    {
        const bool branch_taken_0x21c71c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c71c) {
            ctx->pc = 0x21C738u;
            goto label_21c738;
        }
    }
    ctx->pc = 0x21C724u;
label_21c724:
    // 0x21c724: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_21c728:
    // 0x21c728: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_21c72c:
    // 0x21c72c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c72cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c730:
    // 0x21c730: 0x10000001  b           . + 4 + (0x1 << 2)
label_21c734:
    if (ctx->pc == 0x21C734u) {
        ctx->pc = 0x21C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C730u;
        // 0x21c734: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C738u;
        goto label_21c738;
    }
    ctx->pc = 0x21C730u;
    {
        const bool branch_taken_0x21c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C730u;
        // 0x21c734: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c730) {
            ctx->pc = 0x21C738u;
            goto label_21c738;
        }
    }
    ctx->pc = 0x21C738u;
label_21c738:
    // 0x21c738: 0x10000024  b           . + 4 + (0x24 << 2)
label_21c73c:
    if (ctx->pc == 0x21C73Cu) {
        ctx->pc = 0x21C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C738u;
        // 0x21c73c: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C740u;
        goto label_21c740;
    }
    ctx->pc = 0x21C738u;
    {
        const bool branch_taken_0x21c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C738u;
        // 0x21c73c: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c738) {
            ctx->pc = 0x21C7CCu;
            goto label_21c7cc;
        }
    }
    ctx->pc = 0x21C740u;
label_21c740:
    // 0x21c740: 0xdf8387d0  ld          $v1, -0x7830($gp)
    ctx->pc = 0x21c740u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_21c744:
    // 0x21c744: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x21c744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_21c748:
    // 0x21c748: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_21c74c:
    if (ctx->pc == 0x21C74Cu) {
        ctx->pc = 0x21C750u;
        goto label_21c750;
    }
    ctx->pc = 0x21C748u;
    {
        const bool branch_taken_0x21c748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c748) {
            ctx->pc = 0x21C7CCu;
            goto label_21c7cc;
        }
    }
    ctx->pc = 0x21C750u;
label_21c750:
    // 0x21c750: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x21c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21c754:
    // 0x21c754: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x21c754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
label_21c758:
    // 0x21c758: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x21c758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_21c75c:
    // 0x21c75c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21c75cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21c760:
    // 0x21c760: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x21c760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_21c764:
    // 0x21c764: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_21c768:
    // 0x21c768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c76c:
    // 0x21c76c: 0x0  nop
    ctx->pc = 0x21c76cu;
    // NOP
label_21c770:
    // 0x21c770: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x21c770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_21c774:
    // 0x21c774: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21c778:
    // 0x21c778: 0x0  nop
    ctx->pc = 0x21c778u;
    // NOP
label_21c77c:
    // 0x21c77c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_21c780:
    if (ctx->pc == 0x21C780u) {
        ctx->pc = 0x21C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C77Cu;
        // 0x21c780: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C784u;
        goto label_21c784;
    }
    ctx->pc = 0x21C77Cu;
    {
        const bool branch_taken_0x21c77c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C77Cu;
        // 0x21c780: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c77c) {
            ctx->pc = 0x21C798u;
            goto label_21c798;
        }
    }
    ctx->pc = 0x21C784u;
label_21c784:
    // 0x21c784: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_21c788:
    // 0x21c788: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_21c78c:
    // 0x21c78c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c790:
    // 0x21c790: 0x1000000d  b           . + 4 + (0xD << 2)
label_21c794:
    if (ctx->pc == 0x21C794u) {
        ctx->pc = 0x21C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C790u;
        // 0x21c794: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C798u;
        goto label_21c798;
    }
    ctx->pc = 0x21C790u;
    {
        const bool branch_taken_0x21c790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C790u;
        // 0x21c794: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c790) {
            ctx->pc = 0x21C7C8u;
            goto label_21c7c8;
        }
    }
    ctx->pc = 0x21C798u;
label_21c798:
    // 0x21c798: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_21c79c:
    // 0x21c79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c7a0:
    // 0x21c7a0: 0x0  nop
    ctx->pc = 0x21c7a0u;
    // NOP
label_21c7a4:
    // 0x21c7a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c7a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21c7a8:
    // 0x21c7a8: 0x0  nop
    ctx->pc = 0x21c7a8u;
    // NOP
label_21c7ac:
    // 0x21c7ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_21c7b0:
    if (ctx->pc == 0x21C7B0u) {
        ctx->pc = 0x21C7B4u;
        goto label_21c7b4;
    }
    ctx->pc = 0x21C7ACu;
    {
        const bool branch_taken_0x21c7ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c7ac) {
            ctx->pc = 0x21C7C8u;
            goto label_21c7c8;
        }
    }
    ctx->pc = 0x21C7B4u;
label_21c7b4:
    // 0x21c7b4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_21c7b8:
    // 0x21c7b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_21c7bc:
    // 0x21c7bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c7bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21c7c0:
    // 0x21c7c0: 0x10000001  b           . + 4 + (0x1 << 2)
label_21c7c4:
    if (ctx->pc == 0x21C7C4u) {
        ctx->pc = 0x21C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7C0u;
        // 0x21c7c4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C7C8u;
        goto label_21c7c8;
    }
    ctx->pc = 0x21C7C0u;
    {
        const bool branch_taken_0x21c7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7C0u;
        // 0x21c7c4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7c0) {
            ctx->pc = 0x21C7C8u;
            goto label_21c7c8;
        }
    }
    ctx->pc = 0x21C7C8u;
label_21c7c8:
    // 0x21c7c8: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x21c7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_21c7cc:
    // 0x21c7cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21c7d0:
    // 0x21c7d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21c7d4:
    // 0x21c7d4: 0x3e00008  jr          $ra
label_21c7d8:
    if (ctx->pc == 0x21C7D8u) {
        ctx->pc = 0x21C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7D4u;
        // 0x21c7d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C7DCu;
        goto label_21c7dc;
    }
    ctx->pc = 0x21C7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7D4u;
        // 0x21c7d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C7DCu;
label_21c7dc:
    // 0x21c7dc: 0x0  nop
    ctx->pc = 0x21c7dcu;
    // NOP
label_21c7e0:
    // 0x21c7e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x21c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_21c7e4:
    // 0x21c7e4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x21c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_21c7e8:
    // 0x21c7e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_21c7ec:
    // 0x21c7ec: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x21c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
label_21c7f0:
    // 0x21c7f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_21c7f4:
    // 0x21c7f4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x21c7f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_21c7f8:
    // 0x21c7f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x21c7f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_21c7fc:
    // 0x21c7fc: 0xc044a9c  jal         func_112A70
label_21c800:
    if (ctx->pc == 0x21C800u) {
        ctx->pc = 0x21C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7FCu;
        // 0x21c800: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C804u;
        goto label_21c804;
    }
    ctx->pc = 0x21C7FCu;
    SET_GPR_U32(ctx, 31, 0x21C804u);
    ctx->pc = 0x21C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C7FCu;
    // 0x21c800: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x112A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A70u, 0x21C7FCu, 0x21C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C804u;
label_21c804:
    // 0x21c804: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x21c804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_21c808:
    // 0x21c808: 0xc044bf4  jal         func_112FD0
label_21c80c:
    if (ctx->pc == 0x21C80Cu) {
        ctx->pc = 0x21C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C808u;
        // 0x21c80c: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C810u;
        goto label_21c810;
    }
    ctx->pc = 0x21C808u;
    SET_GPR_U32(ctx, 31, 0x21C810u);
    ctx->pc = 0x21C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C808u;
    // 0x21c80c: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112FD0u, 0x21C808u, 0x21C810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C810u;
label_21c810:
    // 0x21c810: 0xc0655bc  jal         func_1956F0
label_21c814:
    if (ctx->pc == 0x21C814u) {
        ctx->pc = 0x21C818u;
        goto label_21c818;
    }
    ctx->pc = 0x21C810u;
    SET_GPR_U32(ctx, 31, 0x21C818u);
    ctx->pc = 0x1956F0u;
    { ctx->pc = 0x1956f0; return; }
    ctx->pc = 0x21C818u;
label_21c818:
    // 0x21c818: 0xc045924  jal         func_116490
label_21c81c:
    if (ctx->pc == 0x21C81Cu) {
        ctx->pc = 0x21C820u;
        goto label_21c820;
    }
    ctx->pc = 0x21C818u;
    SET_GPR_U32(ctx, 31, 0x21C820u);
    ctx->pc = 0x116490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116490u, 0x21C818u, 0x21C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C820u;
label_21c820:
    // 0x21c820: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x21c820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_21c824:
    // 0x21c824: 0xc0456d4  jal         func_115B50
label_21c828:
    if (ctx->pc == 0x21C828u) {
        ctx->pc = 0x21C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C824u;
        // 0x21c828: 0x24843c00  addiu       $a0, $a0, 0x3C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C82Cu;
        goto label_21c82c;
    }
    ctx->pc = 0x21C824u;
    SET_GPR_U32(ctx, 31, 0x21C82Cu);
    ctx->pc = 0x21C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C824u;
    // 0x21c828: 0x24843c00  addiu       $a0, $a0, 0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B50u, 0x21C824u, 0x21C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C82Cu;
label_21c82c:
    // 0x21c82c: 0xc045b68  jal         func_116DA0
label_21c830:
    if (ctx->pc == 0x21C830u) {
        ctx->pc = 0x21C834u;
        goto label_21c834;
    }
    ctx->pc = 0x21C82Cu;
    SET_GPR_U32(ctx, 31, 0x21C834u);
    ctx->pc = 0x116DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116DA0u, 0x21C82Cu, 0x21C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C834u;
label_21c834:
    // 0x21c834: 0xc045a80  jal         func_116A00
label_21c838:
    if (ctx->pc == 0x21C838u) {
        ctx->pc = 0x21C83Cu;
        goto label_21c83c;
    }
    ctx->pc = 0x21C834u;
    SET_GPR_U32(ctx, 31, 0x21C83Cu);
    ctx->pc = 0x116A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116A00u, 0x21C834u, 0x21C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C83Cu;
label_21c83c:
    // 0x21c83c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_21c840:
    // 0x21c840: 0x3c090029  lui         $t1, 0x29
    ctx->pc = 0x21c840u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)41 << 16));
label_21c844:
    // 0x21c844: 0x2442d8e0  addiu       $v0, $v0, -0x2720
    ctx->pc = 0x21c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957280));
label_21c848:
    // 0x21c848: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x21c848u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_21c84c:
    // 0x21c84c: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x21c84cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21c850:
    // 0x21c850: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x21c850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_21c854:
    // 0x21c854: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x21c854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_21c858:
    // 0x21c858: 0x2529d8f0  addiu       $t1, $t1, -0x2710
    ctx->pc = 0x21c858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957296));
label_21c85c:
    // 0x21c85c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x21c85cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_21c860:
    // 0x21c860: 0x24e7d900  addiu       $a3, $a3, -0x2700
    ctx->pc = 0x21c860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957312));
label_21c864:
    // 0x21c864: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x21c864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_21c868:
    // 0x21c868: 0x24a5d910  addiu       $a1, $a1, -0x26F0
    ctx->pc = 0x21c868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957328));
label_21c86c:
    // 0x21c86c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x21c86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_21c870:
    // 0x21c870: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x21c870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_21c874:
    // 0x21c874: 0x7c8b0000  sq          $t3, 0x0($a0)
    ctx->pc = 0x21c874u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 11));
label_21c878:
    // 0x21c878: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21c878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_21c87c:
    // 0x21c87c: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x21c87cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_21c880:
    // 0x21c880: 0x2442d920  addiu       $v0, $v0, -0x26E0
    ctx->pc = 0x21c880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957344));
label_21c884:
    // 0x21c884: 0x7d490000  sq          $t1, 0x0($t2)
    ctx->pc = 0x21c884u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 9));
label_21c888:
    // 0x21c888: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x21c888u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_21c88c:
    // 0x21c88c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x21c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_21c890:
    // 0x21c890: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x21c890u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21c894:
    // 0x21c894: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x21c894u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_21c898:
    // 0x21c898: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x21c898u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_21c89c:
    // 0x21c89c: 0xc0554dc  jal         func_155370
label_21c8a0:
    if (ctx->pc == 0x21C8A0u) {
        ctx->pc = 0x21C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C89Cu;
        // 0x21c8a0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8A4u;
        goto label_21c8a4;
    }
    ctx->pc = 0x21C89Cu;
    SET_GPR_U32(ctx, 31, 0x21C8A4u);
    ctx->pc = 0x21C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C89Cu;
    // 0x21c8a0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155370u;
    { ctx->pc = 0x155370; return; }
    ctx->pc = 0x21C8A4u;
label_21c8a4:
    // 0x21c8a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c8a8:
    // 0x21c8a8: 0xc0554f8  jal         func_1553E0
label_21c8ac:
    if (ctx->pc == 0x21C8ACu) {
        ctx->pc = 0x21C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8A8u;
        // 0x21c8ac: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8B0u;
        goto label_21c8b0;
    }
    ctx->pc = 0x21C8A8u;
    SET_GPR_U32(ctx, 31, 0x21C8B0u);
    ctx->pc = 0x21C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8A8u;
    // 0x21c8ac: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553E0u;
    { ctx->pc = 0x1553e0; return; }
    ctx->pc = 0x21C8B0u;
label_21c8b0:
    // 0x21c8b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c8b4:
    // 0x21c8b4: 0xc05551c  jal         func_155470
label_21c8b8:
    if (ctx->pc == 0x21C8B8u) {
        ctx->pc = 0x21C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8B4u;
        // 0x21c8b8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8BCu;
        goto label_21c8bc;
    }
    ctx->pc = 0x21C8B4u;
    SET_GPR_U32(ctx, 31, 0x21C8BCu);
    ctx->pc = 0x21C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8B4u;
    // 0x21c8b8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    { ctx->pc = 0x155470; return; }
    ctx->pc = 0x21C8BCu;
label_21c8bc:
    // 0x21c8bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21c8c0:
    // 0x21c8c0: 0xc0554f8  jal         func_1553E0
label_21c8c4:
    if (ctx->pc == 0x21C8C4u) {
        ctx->pc = 0x21C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8C0u;
        // 0x21c8c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8C8u;
        goto label_21c8c8;
    }
    ctx->pc = 0x21C8C0u;
    SET_GPR_U32(ctx, 31, 0x21C8C8u);
    ctx->pc = 0x21C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8C0u;
    // 0x21c8c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553E0u;
    { ctx->pc = 0x1553e0; return; }
    ctx->pc = 0x21C8C8u;
label_21c8c8:
    // 0x21c8c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21c8cc:
    // 0x21c8cc: 0xc05551c  jal         func_155470
label_21c8d0:
    if (ctx->pc == 0x21C8D0u) {
        ctx->pc = 0x21C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8CCu;
        // 0x21c8d0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8D4u;
        goto label_21c8d4;
    }
    ctx->pc = 0x21C8CCu;
    SET_GPR_U32(ctx, 31, 0x21C8D4u);
    ctx->pc = 0x21C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8CCu;
    // 0x21c8d0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    { ctx->pc = 0x155470; return; }
    ctx->pc = 0x21C8D4u;
label_21c8d4:
    // 0x21c8d4: 0xc07f218  jal         func_1FC860
label_21c8d8:
    if (ctx->pc == 0x21C8D8u) {
        ctx->pc = 0x21C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8D4u;
        // 0x21c8d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8DCu;
        goto label_21c8dc;
    }
    ctx->pc = 0x21C8D4u;
    SET_GPR_U32(ctx, 31, 0x21C8DCu);
    ctx->pc = 0x21C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8D4u;
    // 0x21c8d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC860u;
    { ctx->pc = 0x1fc860; return; }
    ctx->pc = 0x21C8DCu;
label_21c8dc:
    // 0x21c8dc: 0x8f8792d0  lw          $a3, -0x6D30($gp)
    ctx->pc = 0x21c8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939344)));
label_21c8e0:
    // 0x21c8e0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x21c8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_21c8e4:
    // 0x21c8e4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x21c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_21c8e8:
    // 0x21c8e8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x21c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_21c8ec:
    // 0x21c8ec: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x21c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_21c8f0:
    // 0x21c8f0: 0x24a53b82  addiu       $a1, $a1, 0x3B82
    ctx->pc = 0x21c8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15234));
label_21c8f4:
    // 0x21c8f4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c8f8:
    // 0x21c8f8: 0x24633b84  addiu       $v1, $v1, 0x3B84
    ctx->pc = 0x21c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15236));
label_21c8fc:
    // 0x21c8fc: 0x24423b8d  addiu       $v0, $v0, 0x3B8D
    ctx->pc = 0x21c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15245));
label_21c900:
    // 0x21c900: 0x24848d00  addiu       $a0, $a0, -0x7300
    ctx->pc = 0x21c900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
label_21c904:
    // 0x21c904: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x21c904u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_21c908:
    // 0x21c908: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x21c908u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_21c90c:
    // 0x21c90c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x21c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21c910:
    // 0x21c910: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x21c910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_21c914:
    // 0x21c914: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x21c914u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21c918:
    // 0x21c918: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21c918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_21c91c:
    // 0x21c91c: 0xa0258f42  sb          $a1, -0x70BE($at)
    ctx->pc = 0x21c91cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938434), (uint8_t)GPR_U32(ctx, 5));
label_21c920:
    // 0x21c920: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c924:
    // 0x21c924: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x21c924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_21c928:
    // 0x21c928: 0x90268f42  lbu         $a2, -0x70BE($at)
    ctx->pc = 0x21c928u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938434)));
label_21c92c:
    // 0x21c92c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c930:
    // 0x21c930: 0xa0238f44  sb          $v1, -0x70BC($at)
    ctx->pc = 0x21c930u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938436), (uint8_t)GPR_U32(ctx, 3));
label_21c934:
    // 0x21c934: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c938:
    // 0x21c938: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21c938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21c93c:
    // 0x21c93c: 0x90258f44  lbu         $a1, -0x70BC($at)
    ctx->pc = 0x21c93cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938436)));
label_21c940:
    // 0x21c940: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c944:
    // 0x21c944: 0xc045784  jal         func_115E10
label_21c948:
    if (ctx->pc == 0x21C948u) {
        ctx->pc = 0x21C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C944u;
        // 0x21c948: 0xa0228f47  sb          $v0, -0x70B9($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294938439), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C94Cu;
        goto label_21c94c;
    }
    ctx->pc = 0x21C944u;
    SET_GPR_U32(ctx, 31, 0x21C94Cu);
    ctx->pc = 0x21C948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C944u;
    // 0x21c948: 0xa0228f47  sb          $v0, -0x70B9($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938439), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115E10u, 0x21C944u, 0x21C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C94Cu;
label_21c94c:
    // 0x21c94c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c950:
    // 0x21c950: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x21c950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_21c954:
    // 0x21c954: 0xac208d50  sw          $zero, -0x72B0($at)
    ctx->pc = 0x21c954u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937936), GPR_U32(ctx, 0));
label_21c958:
    // 0x21c958: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x21c958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_21c95c:
    // 0x21c95c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c960:
    // 0x21c960: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x21c960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_21c964:
    // 0x21c964: 0xac208d54  sw          $zero, -0x72AC($at)
    ctx->pc = 0x21c964u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937940), GPR_U32(ctx, 0));
label_21c968:
    // 0x21c968: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c96c:
    // 0x21c96c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c970:
    // 0x21c970: 0x24a58d00  addiu       $a1, $a1, -0x7300
    ctx->pc = 0x21c970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937856));
label_21c974:
    // 0x21c974: 0xac228d44  sw          $v0, -0x72BC($at)
    ctx->pc = 0x21c974u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937924), GPR_U32(ctx, 2));
label_21c978:
    // 0x21c978: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c97c:
    // 0x21c97c: 0xac208d58  sw          $zero, -0x72A8($at)
    ctx->pc = 0x21c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937944), GPR_U32(ctx, 0));
label_21c980:
    // 0x21c980: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c984:
    // 0x21c984: 0xac208d5c  sw          $zero, -0x72A4($at)
    ctx->pc = 0x21c984u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937948), GPR_U32(ctx, 0));
label_21c988:
    // 0x21c988: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c98c:
    // 0x21c98c: 0xac208d40  sw          $zero, -0x72C0($at)
    ctx->pc = 0x21c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937920), GPR_U32(ctx, 0));
label_21c990:
    // 0x21c990: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c994:
    // 0x21c994: 0xac208d48  sw          $zero, -0x72B8($at)
    ctx->pc = 0x21c994u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937928), GPR_U32(ctx, 0));
label_21c998:
    // 0x21c998: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c99c:
    // 0x21c99c: 0xc045460  jal         func_115180
label_21c9a0:
    if (ctx->pc == 0x21C9A0u) {
        ctx->pc = 0x21C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C99Cu;
        // 0x21c9a0: 0xac208d4c  sw          $zero, -0x72B4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9A4u;
        goto label_21c9a4;
    }
    ctx->pc = 0x21C99Cu;
    SET_GPR_U32(ctx, 31, 0x21C9A4u);
    ctx->pc = 0x21C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C99Cu;
    // 0x21c9a0: 0xac208d4c  sw          $zero, -0x72B4($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937932), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115180u, 0x21C99Cu, 0x21C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C9A4u;
label_21c9a4:
    // 0x21c9a4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21c9a8:
    // 0x21c9a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_21c9ac:
    // 0x21c9ac: 0x90258f42  lbu         $a1, -0x70BE($at)
    ctx->pc = 0x21c9acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938434)));
label_21c9b0:
    // 0x21c9b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21c9b4:
    // 0x21c9b4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x21c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_21c9b8:
    // 0x21c9b8: 0x2463b258  addiu       $v1, $v1, -0x4DA8
    ctx->pc = 0x21c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947416));
label_21c9bc:
    // 0x21c9bc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x21c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_21c9c0:
    // 0x21c9c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21c9c4:
    // 0x21c9c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_21c9c8:
    // 0x21c9c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21c9cc:
    // 0x21c9cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21c9d0:
    // 0x21c9d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21c9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_21c9d4:
    // 0x21c9d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21c9d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_21c9d8:
    // 0x21c9d8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x21c9d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_21c9dc:
    // 0x21c9dc: 0xc064654  jal         func_191950
label_21c9e0:
    if (ctx->pc == 0x21C9E0u) {
        ctx->pc = 0x21C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9DCu;
        // 0x21c9e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9E4u;
        goto label_21c9e4;
    }
    ctx->pc = 0x21C9DCu;
    SET_GPR_U32(ctx, 31, 0x21C9E4u);
    ctx->pc = 0x21C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C9DCu;
    // 0x21c9e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191950u;
    { ctx->pc = 0x191950; return; }
    ctx->pc = 0x21C9E4u;
label_21c9e4:
    // 0x21c9e4: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x21c9e4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21c9e8:
    // 0x21c9e8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x21c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_21c9ec:
    // 0x21c9ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21c9f0:
    // 0x21c9f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c9f4:
    // 0x21c9f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x21c9f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_21c9f8:
    // 0x21c9f8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x21c9f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_21c9fc:
    // 0x21c9fc: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x21c9fcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_21ca00:
    // 0x21ca00: 0x0  nop
    ctx->pc = 0x21ca00u;
    // NOP
label_21ca04:
    // 0x21ca04: 0x0  nop
    ctx->pc = 0x21ca04u;
    // NOP
label_21ca08:
    // 0x21ca08: 0xc064654  jal         func_191950
label_21ca0c:
    if (ctx->pc == 0x21CA0Cu) {
        ctx->pc = 0x21CA10u;
        goto label_21ca10;
    }
    ctx->pc = 0x21CA08u;
    SET_GPR_U32(ctx, 31, 0x21CA10u);
    ctx->pc = 0x191950u;
    { ctx->pc = 0x191950; return; }
    ctx->pc = 0x21CA10u;
label_21ca10:
    // 0x21ca10: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x21ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_21ca14:
    // 0x21ca14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ca18:
    // 0x21ca18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21ca18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21ca1c:
    // 0x21ca1c: 0x0  nop
    ctx->pc = 0x21ca1cu;
    // NOP
label_21ca20:
    // 0x21ca20: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x21ca20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_21ca24:
    // 0x21ca24: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x21ca24u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_21ca28:
    // 0x21ca28: 0x0  nop
    ctx->pc = 0x21ca28u;
    // NOP
label_21ca2c:
    // 0x21ca2c: 0x0  nop
    ctx->pc = 0x21ca2cu;
    // NOP
label_21ca30:
    // 0x21ca30: 0xc064654  jal         func_191950
label_21ca34:
    if (ctx->pc == 0x21CA34u) {
        ctx->pc = 0x21CA38u;
        goto label_21ca38;
    }
    ctx->pc = 0x21CA30u;
    SET_GPR_U32(ctx, 31, 0x21CA38u);
    ctx->pc = 0x191950u;
    { ctx->pc = 0x191950; return; }
    ctx->pc = 0x21CA38u;
label_21ca38:
    // 0x21ca38: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x21ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_21ca3c:
    // 0x21ca3c: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x21ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_21ca40:
    // 0x21ca40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21ca40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21ca44:
    // 0x21ca44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ca44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ca48:
    // 0x21ca48: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x21ca48u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
label_21ca4c:
    // 0x21ca4c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x21ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_21ca50:
    // 0x21ca50: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x21ca50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_21ca54:
    // 0x21ca54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_21ca58:
    // 0x21ca58: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x21ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_21ca5c:
    // 0x21ca5c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x21ca5cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_21ca60:
    // 0x21ca60: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x21ca60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_21ca64:
    // 0x21ca64: 0x0  nop
    ctx->pc = 0x21ca64u;
    // NOP
label_21ca68:
    // 0x21ca68: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x21ca68u;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
label_21ca6c:
    // 0x21ca6c: 0xc064558  jal         func_191560
label_21ca70:
    if (ctx->pc == 0x21CA70u) {
        ctx->pc = 0x21CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA6Cu;
        // 0x21ca70: 0xe7b60094  swc1        $f22, 0x94($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA74u;
        goto label_21ca74;
    }
    ctx->pc = 0x21CA6Cu;
    SET_GPR_U32(ctx, 31, 0x21CA74u);
    ctx->pc = 0x21CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA6Cu;
    // 0x21ca70: 0xe7b60094  swc1        $f22, 0x94($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191560u;
    { ctx->pc = 0x191560; return; }
    ctx->pc = 0x21CA74u;
label_21ca74:
    // 0x21ca74: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x21ca74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_21ca78:
    // 0x21ca78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_21ca7c:
    // 0x21ca7c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x21ca7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_21ca80:
    // 0x21ca80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ca80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ca84:
    // 0x21ca84: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x21ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_21ca88:
    // 0x21ca88: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x21ca88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_21ca8c:
    // 0x21ca8c: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x21ca8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_21ca90:
    // 0x21ca90: 0xc0645a4  jal         func_191690
label_21ca94:
    if (ctx->pc == 0x21CA94u) {
        ctx->pc = 0x21CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA90u;
        // 0x21ca94: 0xe7b60084  swc1        $f22, 0x84($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA98u;
        goto label_21ca98;
    }
    ctx->pc = 0x21CA90u;
    SET_GPR_U32(ctx, 31, 0x21CA98u);
    ctx->pc = 0x21CA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA90u;
    // 0x21ca94: 0xe7b60084  swc1        $f22, 0x84($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191690u;
    { ctx->pc = 0x191690; return; }
    ctx->pc = 0x21CA98u;
label_21ca98:
    // 0x21ca98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ca98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ca9c:
    // 0x21ca9c: 0xc051dc0  jal         func_147700
label_21caa0:
    if (ctx->pc == 0x21CAA0u) {
        ctx->pc = 0x21CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA9Cu;
        // 0x21caa0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAA4u;
        goto label_21caa4;
    }
    ctx->pc = 0x21CA9Cu;
    SET_GPR_U32(ctx, 31, 0x21CAA4u);
    ctx->pc = 0x21CAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA9Cu;
    // 0x21caa0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147700u, 0x21CA9Cu, 0x21CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAA4u;
label_21caa4:
    // 0x21caa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21caa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21caa8:
    // 0x21caa8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x21caa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_21caac:
    // 0x21caac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21caacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21cab0:
    // 0x21cab0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x21cab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_21cab4:
    // 0x21cab4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x21cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21cab8:
    // 0x21cab8: 0x3e00008  jr          $ra
label_21cabc:
    if (ctx->pc == 0x21CABCu) {
        ctx->pc = 0x21CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAB8u;
        // 0x21cabc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAC0u;
        goto label_21cac0;
    }
    ctx->pc = 0x21CAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAB8u;
        // 0x21cabc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CAC0u;
label_21cac0:
    // 0x21cac0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x21cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_21cac4:
    // 0x21cac4: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x21cac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_21cac8:
    // 0x21cac8: 0x24c6d940  addiu       $a2, $a2, -0x26C0
    ctx->pc = 0x21cac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957376));
label_21cacc:
    // 0x21cacc: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x21caccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_21cad0:
    // 0x21cad0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x21cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_21cad4:
    // 0x21cad4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x21cad4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_21cad8:
    // 0x21cad8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21cadc:
    // 0x21cadc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x21cadcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_21cae0:
    // 0x21cae0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x21cae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_21cae4:
    // 0x21cae4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x21cae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_21cae8:
    // 0x21cae8: 0x0  nop
    ctx->pc = 0x21cae8u;
    // NOP
label_21caec:
    // 0x21caec: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
label_21caf0:
    if (ctx->pc == 0x21CAF0u) {
        ctx->pc = 0x21CAF4u;
        goto label_21caf4;
    }
    ctx->pc = 0x21CAECu;
    {
        const bool branch_taken_0x21caec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x21caec) {
            ctx->pc = 0x21CAD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cad4;
        }
    }
    ctx->pc = 0x21CAF4u;
label_21caf4:
    // 0x21caf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21caf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21caf8:
    // 0x21caf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21caf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cafc:
    // 0x21cafc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21cafcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cb00:
    // 0x21cb00: 0xdc840270  ld          $a0, 0x270($a0)
    ctx->pc = 0x21cb00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 624)));
label_21cb04:
    // 0x21cb04: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x21cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_21cb08:
    // 0x21cb08: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x21cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_21cb0c:
    // 0x21cb0c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x21cb0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_21cb10:
    // 0x21cb10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x21cb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_21cb14:
    // 0x21cb14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_21cb18:
    if (ctx->pc == 0x21CB18u) {
        ctx->pc = 0x21CB1Cu;
        goto label_21cb1c;
    }
    ctx->pc = 0x21CB14u;
    {
        const bool branch_taken_0x21cb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cb14) {
            ctx->pc = 0x21CB24u;
            goto label_21cb24;
        }
    }
    ctx->pc = 0x21CB1Cu;
label_21cb1c:
    // 0x21cb1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_21cb20:
    if (ctx->pc == 0x21CB20u) {
        ctx->pc = 0x21CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB1Cu;
        // 0x21cb20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB24u;
        goto label_21cb24;
    }
    ctx->pc = 0x21CB1Cu;
    {
        const bool branch_taken_0x21cb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB1Cu;
        // 0x21cb20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb1c) {
            ctx->pc = 0x21CB34u;
            goto label_21cb34;
        }
    }
    ctx->pc = 0x21CB24u;
label_21cb24:
    // 0x21cb24: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21cb24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21cb28:
    // 0x21cb28: 0x28c30026  slti        $v1, $a2, 0x26
    ctx->pc = 0x21cb28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)38) ? 1 : 0);
label_21cb2c:
    // 0x21cb2c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_21cb30:
    if (ctx->pc == 0x21CB30u) {
        ctx->pc = 0x21CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB2Cu;
        // 0x21cb30: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB34u;
        goto label_21cb34;
    }
    ctx->pc = 0x21CB2Cu;
    {
        const bool branch_taken_0x21cb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB2Cu;
        // 0x21cb30: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb2c) {
            ctx->pc = 0x21CB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cb08;
        }
    }
    ctx->pc = 0x21CB34u;
label_21cb34:
    // 0x21cb34: 0x0  nop
    ctx->pc = 0x21cb34u;
    // NOP
label_21cb38:
    // 0x21cb38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21cb3c:
    // 0x21cb3c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_21cb40:
    if (ctx->pc == 0x21CB40u) {
        ctx->pc = 0x21CB44u;
        goto label_21cb44;
    }
    ctx->pc = 0x21CB3Cu;
    {
        const bool branch_taken_0x21cb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21cb3c) {
            ctx->pc = 0x21CB4Cu;
            goto label_21cb4c;
        }
    }
    ctx->pc = 0x21CB44u;
label_21cb44:
    // 0x21cb44: 0x10000002  b           . + 4 + (0x2 << 2)
label_21cb48:
    if (ctx->pc == 0x21CB48u) {
        ctx->pc = 0x21CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB44u;
        // 0x21cb48: 0xaf8392d4  sw          $v1, -0x6D2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB4Cu;
        goto label_21cb4c;
    }
    ctx->pc = 0x21CB44u;
    {
        const bool branch_taken_0x21cb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB44u;
        // 0x21cb48: 0xaf8392d4  sw          $v1, -0x6D2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb44) {
            ctx->pc = 0x21CB50u;
            goto label_21cb50;
        }
    }
    ctx->pc = 0x21CB4Cu;
label_21cb4c:
    // 0x21cb4c: 0xaf8092d4  sw          $zero, -0x6D2C($gp)
    ctx->pc = 0x21cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939348), GPR_U32(ctx, 0));
label_21cb50:
    // 0x21cb50: 0x3e00008  jr          $ra
label_21cb54:
    if (ctx->pc == 0x21CB54u) {
        ctx->pc = 0x21CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB50u;
        // 0x21cb54: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB58u;
        goto label_21cb58;
    }
    ctx->pc = 0x21CB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB50u;
        // 0x21cb54: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CB58u;
label_21cb58:
    // 0x21cb58: 0x0  nop
    ctx->pc = 0x21cb58u;
    // NOP
label_21cb5c:
    // 0x21cb5c: 0x0  nop
    ctx->pc = 0x21cb5cu;
    // NOP
label_21cb60:
    // 0x21cb60: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_21cb64:
    if (ctx->pc == 0x21CB64u) {
        ctx->pc = 0x21CB68u;
        goto label_21cb68;
    }
    ctx->pc = 0x21CB60u;
    {
        const bool branch_taken_0x21cb60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cb60) {
            ctx->pc = 0x21CB98u;
            goto label_21cb98;
        }
    }
    ctx->pc = 0x21CB68u;
label_21cb68:
    // 0x21cb68: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21cb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21cb6c:
    // 0x21cb6c: 0x94228f90  lhu         $v0, -0x7070($at)
    ctx->pc = 0x21cb6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938512)));
label_21cb70:
    // 0x21cb70: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x21cb70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_21cb74:
    // 0x21cb74: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21cb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21cb78:
    // 0x21cb78: 0x94228f94  lhu         $v0, -0x706C($at)
    ctx->pc = 0x21cb78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938516)));
label_21cb7c:
    // 0x21cb7c: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x21cb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
label_21cb80:
    // 0x21cb80: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21cb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21cb84:
    // 0x21cb84: 0x90228f98  lbu         $v0, -0x7068($at)
    ctx->pc = 0x21cb84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938520)));
label_21cb88:
    // 0x21cb88: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x21cb88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
label_21cb8c:
    // 0x21cb8c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21cb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21cb90:
    // 0x21cb90: 0x90228f9c  lbu         $v0, -0x7064($at)
    ctx->pc = 0x21cb90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938524)));
label_21cb94:
    // 0x21cb94: 0xa0820005  sb          $v0, 0x5($a0)
    ctx->pc = 0x21cb94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 2));
label_21cb98:
    // 0x21cb98: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21cb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21cb9c:
    // 0x21cb9c: 0x3e00008  jr          $ra
label_21cba0:
    if (ctx->pc == 0x21CBA0u) {
        ctx->pc = 0x21CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB9Cu;
        // 0x21cba0: 0xc4208fa0  lwc1        $f0, -0x7060($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294938528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CBA4u;
        goto label_21cba4;
    }
    ctx->pc = 0x21CB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB9Cu;
        // 0x21cba0: 0xc4208fa0  lwc1        $f0, -0x7060($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294938528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CBA4u;
label_21cba4:
    // 0x21cba4: 0x0  nop
    ctx->pc = 0x21cba4u;
    // NOP
label_21cba8:
    // 0x21cba8: 0x0  nop
    ctx->pc = 0x21cba8u;
    // NOP
label_21cbac:
    // 0x21cbac: 0x0  nop
    ctx->pc = 0x21cbacu;
    // NOP
label_21cbb0:
    // 0x21cbb0: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x21cbb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
label_21cbb4:
    // 0x21cbb4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21cbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21cbb8:
    // 0x21cbb8: 0xac238f90  sw          $v1, -0x7070($at)
    ctx->pc = 0x21cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938512), GPR_U32(ctx, 3));
label_21cbbc:
    // 0x21cbbc: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x21cbbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
label_21cbc0:
    // 0x21cbc0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21cbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21cbc4:
    // 0x21cbc4: 0xac238f94  sw          $v1, -0x706C($at)
    ctx->pc = 0x21cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938516), GPR_U32(ctx, 3));
label_21cbc8:
    // 0x21cbc8: 0x9083024a  lbu         $v1, 0x24A($a0)
    ctx->pc = 0x21cbc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
label_21cbcc:
    // 0x21cbcc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21cbccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21cbd0:
    // 0x21cbd0: 0xac238f98  sw          $v1, -0x7068($at)
    ctx->pc = 0x21cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938520), GPR_U32(ctx, 3));
label_21cbd4:
    // 0x21cbd4: 0x9083024b  lbu         $v1, 0x24B($a0)
    ctx->pc = 0x21cbd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
label_21cbd8:
    // 0x21cbd8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21cbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21cbdc:
    // 0x21cbdc: 0xac238f9c  sw          $v1, -0x7064($at)
    ctx->pc = 0x21cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938524), GPR_U32(ctx, 3));
label_21cbe0:
    // 0x21cbe0: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x21cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_21cbe4:
    // 0x21cbe4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_21cbe8:
    if (ctx->pc == 0x21CBE8u) {
        ctx->pc = 0x21CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBE4u;
        // 0x21cbe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CBECu;
        goto label_21cbec;
    }
    ctx->pc = 0x21CBE4u;
    {
        const bool branch_taken_0x21cbe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBE4u;
        // 0x21cbe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cbe4) {
            ctx->pc = 0x21CC08u;
            goto label_21cc08;
        }
    }
    ctx->pc = 0x21CBECu;
label_21cbec:
    // 0x21cbec: 0x8ca3020c  lw          $v1, 0x20C($a1)
    ctx->pc = 0x21cbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
label_21cbf0:
    // 0x21cbf0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_21cbf4:
    if (ctx->pc == 0x21CBF4u) {
        ctx->pc = 0x21CBF8u;
        goto label_21cbf8;
    }
    ctx->pc = 0x21CBF0u;
    {
        const bool branch_taken_0x21cbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cbf0) {
            ctx->pc = 0x21CC08u;
            goto label_21cc08;
        }
    }
    ctx->pc = 0x21CBF8u;
label_21cbf8:
    // 0x21cbf8: 0xc4a00214  lwc1        $f0, 0x214($a1)
    ctx->pc = 0x21cbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21cbfc:
    // 0x21cbfc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21cbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21cc00:
    // 0x21cc00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21cc00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cc04:
    // 0x21cc04: 0xe4208fa0  swc1        $f0, -0x7060($at)
    ctx->pc = 0x21cc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294938528), bits); }
label_21cc08:
    // 0x21cc08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21cc0c:
    if (ctx->pc == 0x21CC0Cu) {
        ctx->pc = 0x21CC10u;
        goto label_21cc10;
    }
    ctx->pc = 0x21CC08u;
    {
        const bool branch_taken_0x21cc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cc08) {
            ctx->pc = 0x21CC1Cu;
            goto label_21cc1c;
        }
    }
    ctx->pc = 0x21CC10u;
label_21cc10:
    // 0x21cc10: 0xc48001e4  lwc1        $f0, 0x1E4($a0)
    ctx->pc = 0x21cc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21cc14:
    // 0x21cc14: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21cc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21cc18:
    // 0x21cc18: 0xe4208fa0  swc1        $f0, -0x7060($at)
    ctx->pc = 0x21cc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294938528), bits); }
label_21cc1c:
    // 0x21cc1c: 0x3e00008  jr          $ra
label_21cc20:
    if (ctx->pc == 0x21CC20u) {
        ctx->pc = 0x21CC24u;
        goto label_21cc24;
    }
    ctx->pc = 0x21CC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CC24u;
label_21cc24:
    // 0x21cc24: 0x0  nop
    ctx->pc = 0x21cc24u;
    // NOP
label_21cc28:
    // 0x21cc28: 0x0  nop
    ctx->pc = 0x21cc28u;
    // NOP
label_21cc2c:
    // 0x21cc2c: 0x0  nop
    ctx->pc = 0x21cc2cu;
    // NOP
label_21cc30:
    // 0x21cc30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_21cc34:
    // 0x21cc34: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x21cc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_21cc38:
    // 0x21cc38: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x21cc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_21cc3c:
    // 0x21cc3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21cc40:
    // 0x21cc40: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21cc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_21cc44:
    // 0x21cc44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_21cc48:
    // 0x21cc48: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x21cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_21cc4c:
    // 0x21cc4c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_21cc50:
    // 0x21cc50: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x21cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_21cc54:
    // 0x21cc54: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_21cc58:
    if (ctx->pc == 0x21CC58u) {
        ctx->pc = 0x21CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC54u;
        // 0x21cc58: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CC5Cu;
        goto label_21cc5c;
    }
    ctx->pc = 0x21CC54u;
    {
        const bool branch_taken_0x21cc54 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x21CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC54u;
        // 0x21cc58: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc54) {
            ctx->pc = 0x21CC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cc3c;
        }
    }
    ctx->pc = 0x21CC5Cu;
label_21cc5c:
    // 0x21cc5c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x21cc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_21cc60:
    // 0x21cc60: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x21cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_21cc64:
    // 0x21cc64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21cc68:
    // 0x21cc68: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_21cc6c:
    // 0x21cc6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_21cc70:
    // 0x21cc70: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x21cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_21cc74:
    // 0x21cc74: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x21cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_21cc78:
    // 0x21cc78: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x21cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_21cc7c:
    // 0x21cc7c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21cc80u;
    return;
}
