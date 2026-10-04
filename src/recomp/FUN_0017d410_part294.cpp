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


void FUN_0017d410_part294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x20ca68u: goto label_20ca68;
        case 0x20ca6cu: goto label_20ca6c;
        case 0x20ca70u: goto label_20ca70;
        case 0x20ca74u: goto label_20ca74;
        case 0x20ca78u: goto label_20ca78;
        case 0x20ca7cu: goto label_20ca7c;
        case 0x20ca80u: goto label_20ca80;
        case 0x20ca84u: goto label_20ca84;
        case 0x20ca88u: goto label_20ca88;
        case 0x20ca8cu: goto label_20ca8c;
        case 0x20ca90u: goto label_20ca90;
        case 0x20ca94u: goto label_20ca94;
        case 0x20ca98u: goto label_20ca98;
        case 0x20ca9cu: goto label_20ca9c;
        case 0x20caa0u: goto label_20caa0;
        case 0x20caa4u: goto label_20caa4;
        case 0x20caa8u: goto label_20caa8;
        case 0x20caacu: goto label_20caac;
        case 0x20cab0u: goto label_20cab0;
        case 0x20cab4u: goto label_20cab4;
        case 0x20cab8u: goto label_20cab8;
        case 0x20cabcu: goto label_20cabc;
        case 0x20cac0u: goto label_20cac0;
        case 0x20cac4u: goto label_20cac4;
        case 0x20cac8u: goto label_20cac8;
        case 0x20caccu: goto label_20cacc;
        case 0x20cad0u: goto label_20cad0;
        case 0x20cad4u: goto label_20cad4;
        case 0x20cad8u: goto label_20cad8;
        case 0x20cadcu: goto label_20cadc;
        case 0x20cae0u: goto label_20cae0;
        case 0x20cae4u: goto label_20cae4;
        case 0x20cae8u: goto label_20cae8;
        case 0x20caecu: goto label_20caec;
        case 0x20caf0u: goto label_20caf0;
        case 0x20caf4u: goto label_20caf4;
        case 0x20caf8u: goto label_20caf8;
        case 0x20cafcu: goto label_20cafc;
        case 0x20cb00u: goto label_20cb00;
        case 0x20cb04u: goto label_20cb04;
        case 0x20cb08u: goto label_20cb08;
        case 0x20cb0cu: goto label_20cb0c;
        case 0x20cb10u: goto label_20cb10;
        case 0x20cb14u: goto label_20cb14;
        case 0x20cb18u: goto label_20cb18;
        case 0x20cb1cu: goto label_20cb1c;
        case 0x20cb20u: goto label_20cb20;
        case 0x20cb24u: goto label_20cb24;
        case 0x20cb28u: goto label_20cb28;
        case 0x20cb2cu: goto label_20cb2c;
        case 0x20cb30u: goto label_20cb30;
        case 0x20cb34u: goto label_20cb34;
        case 0x20cb38u: goto label_20cb38;
        case 0x20cb3cu: goto label_20cb3c;
        case 0x20cb40u: goto label_20cb40;
        case 0x20cb44u: goto label_20cb44;
        case 0x20cb48u: goto label_20cb48;
        case 0x20cb4cu: goto label_20cb4c;
        case 0x20cb50u: goto label_20cb50;
        case 0x20cb54u: goto label_20cb54;
        case 0x20cb58u: goto label_20cb58;
        case 0x20cb5cu: goto label_20cb5c;
        case 0x20cb60u: goto label_20cb60;
        case 0x20cb64u: goto label_20cb64;
        case 0x20cb68u: goto label_20cb68;
        case 0x20cb6cu: goto label_20cb6c;
        case 0x20cb70u: goto label_20cb70;
        case 0x20cb74u: goto label_20cb74;
        case 0x20cb78u: goto label_20cb78;
        case 0x20cb7cu: goto label_20cb7c;
        case 0x20cb80u: goto label_20cb80;
        case 0x20cb84u: goto label_20cb84;
        case 0x20cb88u: goto label_20cb88;
        case 0x20cb8cu: goto label_20cb8c;
        case 0x20cb90u: goto label_20cb90;
        case 0x20cb94u: goto label_20cb94;
        case 0x20cb98u: goto label_20cb98;
        case 0x20cb9cu: goto label_20cb9c;
        case 0x20cba0u: goto label_20cba0;
        case 0x20cba4u: goto label_20cba4;
        case 0x20cba8u: goto label_20cba8;
        case 0x20cbacu: goto label_20cbac;
        case 0x20cbb0u: goto label_20cbb0;
        case 0x20cbb4u: goto label_20cbb4;
        case 0x20cbb8u: goto label_20cbb8;
        case 0x20cbbcu: goto label_20cbbc;
        case 0x20cbc0u: goto label_20cbc0;
        case 0x20cbc4u: goto label_20cbc4;
        case 0x20cbc8u: goto label_20cbc8;
        case 0x20cbccu: goto label_20cbcc;
        case 0x20cbd0u: goto label_20cbd0;
        case 0x20cbd4u: goto label_20cbd4;
        case 0x20cbd8u: goto label_20cbd8;
        case 0x20cbdcu: goto label_20cbdc;
        case 0x20cbe0u: goto label_20cbe0;
        case 0x20cbe4u: goto label_20cbe4;
        case 0x20cbe8u: goto label_20cbe8;
        case 0x20cbecu: goto label_20cbec;
        case 0x20cbf0u: goto label_20cbf0;
        case 0x20cbf4u: goto label_20cbf4;
        case 0x20cbf8u: goto label_20cbf8;
        case 0x20cbfcu: goto label_20cbfc;
        case 0x20cc00u: goto label_20cc00;
        case 0x20cc04u: goto label_20cc04;
        case 0x20cc08u: goto label_20cc08;
        case 0x20cc0cu: goto label_20cc0c;
        case 0x20cc10u: goto label_20cc10;
        case 0x20cc14u: goto label_20cc14;
        case 0x20cc18u: goto label_20cc18;
        case 0x20cc1cu: goto label_20cc1c;
        case 0x20cc20u: goto label_20cc20;
        case 0x20cc24u: goto label_20cc24;
        case 0x20cc28u: goto label_20cc28;
        case 0x20cc2cu: goto label_20cc2c;
        case 0x20cc30u: goto label_20cc30;
        case 0x20cc34u: goto label_20cc34;
        case 0x20cc38u: goto label_20cc38;
        case 0x20cc3cu: goto label_20cc3c;
        case 0x20cc40u: goto label_20cc40;
        case 0x20cc44u: goto label_20cc44;
        case 0x20cc48u: goto label_20cc48;
        case 0x20cc4cu: goto label_20cc4c;
        case 0x20cc50u: goto label_20cc50;
        case 0x20cc54u: goto label_20cc54;
        case 0x20cc58u: goto label_20cc58;
        case 0x20cc5cu: goto label_20cc5c;
        case 0x20cc60u: goto label_20cc60;
        case 0x20cc64u: goto label_20cc64;
        case 0x20cc68u: goto label_20cc68;
        case 0x20cc6cu: goto label_20cc6c;
        case 0x20cc70u: goto label_20cc70;
        case 0x20cc74u: goto label_20cc74;
        case 0x20cc78u: goto label_20cc78;
        case 0x20cc7cu: goto label_20cc7c;
        case 0x20cc80u: goto label_20cc80;
        case 0x20cc84u: goto label_20cc84;
        case 0x20cc88u: goto label_20cc88;
        case 0x20cc8cu: goto label_20cc8c;
        case 0x20cc90u: goto label_20cc90;
        case 0x20cc94u: goto label_20cc94;
        case 0x20cc98u: goto label_20cc98;
        case 0x20cc9cu: goto label_20cc9c;
        case 0x20cca0u: goto label_20cca0;
        case 0x20cca4u: goto label_20cca4;
        case 0x20cca8u: goto label_20cca8;
        case 0x20ccacu: goto label_20ccac;
        case 0x20ccb0u: goto label_20ccb0;
        case 0x20ccb4u: goto label_20ccb4;
        case 0x20ccb8u: goto label_20ccb8;
        case 0x20ccbcu: goto label_20ccbc;
        case 0x20ccc0u: goto label_20ccc0;
        case 0x20ccc4u: goto label_20ccc4;
        case 0x20ccc8u: goto label_20ccc8;
        case 0x20ccccu: goto label_20cccc;
        case 0x20ccd0u: goto label_20ccd0;
        case 0x20ccd4u: goto label_20ccd4;
        case 0x20ccd8u: goto label_20ccd8;
        case 0x20ccdcu: goto label_20ccdc;
        case 0x20cce0u: goto label_20cce0;
        case 0x20cce4u: goto label_20cce4;
        case 0x20cce8u: goto label_20cce8;
        case 0x20ccecu: goto label_20ccec;
        default: return;
    }

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
    { ctx->pc = 0x19b1c8; return; }
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
    { ctx->pc = 0x19b1c8; return; }
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
    { ctx->pc = 0x19b1c8; return; }
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
    { ctx->pc = 0x180960; return; }
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
            { ctx->pc = 0x20c518; return; }
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
            goto label_20cce8;
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
            goto label_20ca88;
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
            goto label_20ca88;
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
            goto label_20ca88;
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
            goto label_20ca88;
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
            goto label_20ca88;
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
            goto label_20ca88;
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
            goto label_20ca88;
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
            goto label_20ca88;
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
            goto label_20ca88;
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
            goto label_20ca88;
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
            goto label_20ca88;
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
            goto label_20cce8;
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
            goto label_20ca88;
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
            goto label_20ca88;
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
            goto label_20ca68;
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
            goto label_20ca88;
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
            goto label_20cce8;
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
            goto label_20ca88;
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
        goto label_20ca68;
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
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20CA68u;
label_20ca68:
    // 0x20ca68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20ca6c:
    // 0x20ca6c: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_20ca70:
    if (ctx->pc == 0x20CA70u) {
        ctx->pc = 0x20CA74u;
        goto label_20ca74;
    }
    ctx->pc = 0x20CA6Cu;
    {
        const bool branch_taken_0x20ca6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ca6c) {
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20CA74u;
label_20ca74:
    // 0x20ca74: 0xc07ab38  jal         func_1EACE0
label_20ca78:
    if (ctx->pc == 0x20CA78u) {
        ctx->pc = 0x20CA7Cu;
        goto label_20ca7c;
    }
    ctx->pc = 0x20CA74u;
    SET_GPR_U32(ctx, 31, 0x20CA7Cu);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x20CA7Cu;
label_20ca7c:
    // 0x20ca7c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_20ca80:
    if (ctx->pc == 0x20CA80u) {
        ctx->pc = 0x20CA84u;
        goto label_20ca84;
    }
    ctx->pc = 0x20CA7Cu;
    {
        const bool branch_taken_0x20ca7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ca7c) {
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20CA84u;
label_20ca84:
    // 0x20ca84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20ca84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ca88:
    // 0x20ca88: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
label_20ca8c:
    // 0x20ca8c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_20ca90:
    if (ctx->pc == 0x20CA90u) {
        ctx->pc = 0x20CA94u;
        goto label_20ca94;
    }
    ctx->pc = 0x20CA8Cu;
    {
        const bool branch_taken_0x20ca8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ca8c) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CA94u;
label_20ca94:
    // 0x20ca94: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
label_20ca98:
    // 0x20ca98: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20ca9c:
    // 0x20ca9c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_20caa0:
    if (ctx->pc == 0x20CAA0u) {
        ctx->pc = 0x20CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA9Cu;
        // 0x20caa0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CAA4u;
        goto label_20caa4;
    }
    ctx->pc = 0x20CA9Cu;
    {
        const bool branch_taken_0x20ca9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA9Cu;
        // 0x20caa0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca9c) {
            ctx->pc = 0x20CAB0u;
            goto label_20cab0;
        }
    }
    ctx->pc = 0x20CAA4u;
label_20caa4:
    // 0x20caa4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20caa8:
    if (ctx->pc == 0x20CAA8u) {
        ctx->pc = 0x20CAACu;
        goto label_20caac;
    }
    ctx->pc = 0x20CAA4u;
    {
        const bool branch_taken_0x20caa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20caa4) {
            ctx->pc = 0x20CAB0u;
            goto label_20cab0;
        }
    }
    ctx->pc = 0x20CAACu;
label_20caac:
    // 0x20caac: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_20cab0:
    // 0x20cab0: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
label_20cab4:
    // 0x20cab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cab8:
    // 0x20cab8: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_20cabc:
    if (ctx->pc == 0x20CABCu) {
        ctx->pc = 0x20CAC0u;
        goto label_20cac0;
    }
    ctx->pc = 0x20CAB8u;
    {
        const bool branch_taken_0x20cab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20cab8) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CAC0u;
label_20cac0:
    // 0x20cac0: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20cac4:
    // 0x20cac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20cac8:
    // 0x20cac8: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
label_20cacc:
    // 0x20cacc: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20caccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20cad0:
    // 0x20cad0: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20cad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
label_20cad4:
    // 0x20cad4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20cad8:
    if (ctx->pc == 0x20CAD8u) {
        ctx->pc = 0x20CADCu;
        goto label_20cadc;
    }
    ctx->pc = 0x20CAD4u;
    {
        const bool branch_taken_0x20cad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cad4) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CADCu;
label_20cadc:
    // 0x20cadc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20cae0:
    // 0x20cae0: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
label_20cae4:
    // 0x20cae4: 0x0  nop
    ctx->pc = 0x20cae4u;
    // NOP
label_20cae8:
    // 0x20cae8: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20caec:
    // 0x20caec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20caf0:
    // 0x20caf0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_20caf4:
    if (ctx->pc == 0x20CAF4u) {
        ctx->pc = 0x20CAF8u;
        goto label_20caf8;
    }
    ctx->pc = 0x20CAF0u;
    {
        const bool branch_taken_0x20caf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20caf0) {
            ctx->pc = 0x20CB30u;
            goto label_20cb30;
        }
    }
    ctx->pc = 0x20CAF8u;
label_20caf8:
    // 0x20caf8: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20cafc:
    // 0x20cafc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20cb00:
    // 0x20cb00: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20cb00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20cb04:
    // 0x20cb04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20cb08:
    if (ctx->pc == 0x20CB08u) {
        ctx->pc = 0x20CB0Cu;
        goto label_20cb0c;
    }
    ctx->pc = 0x20CB04u;
    {
        const bool branch_taken_0x20cb04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cb04) {
            ctx->pc = 0x20CB14u;
            goto label_20cb14;
        }
    }
    ctx->pc = 0x20CB0Cu;
label_20cb0c:
    // 0x20cb0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_20cb10:
    if (ctx->pc == 0x20CB10u) {
        ctx->pc = 0x20CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB0Cu;
        // 0x20cb10: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB14u;
        goto label_20cb14;
    }
    ctx->pc = 0x20CB0Cu;
    {
        const bool branch_taken_0x20cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB0Cu;
        // 0x20cb10: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb0c) {
            ctx->pc = 0x20CB1Cu;
            goto label_20cb1c;
        }
    }
    ctx->pc = 0x20CB14u;
label_20cb14:
    // 0x20cb14: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_20cb18:
    // 0x20cb18: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
label_20cb1c:
    // 0x20cb1c: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20cb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20cb20:
    // 0x20cb20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20cb24:
    if (ctx->pc == 0x20CB24u) {
        ctx->pc = 0x20CB28u;
        goto label_20cb28;
    }
    ctx->pc = 0x20CB20u;
    {
        const bool branch_taken_0x20cb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cb20) {
            ctx->pc = 0x20CB30u;
            goto label_20cb30;
        }
    }
    ctx->pc = 0x20CB28u;
label_20cb28:
    // 0x20cb28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20cb2c:
    // 0x20cb2c: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
label_20cb30:
    // 0x20cb30: 0xc078030  jal         func_1E00C0
label_20cb34:
    if (ctx->pc == 0x20CB34u) {
        ctx->pc = 0x20CB38u;
        goto label_20cb38;
    }
    ctx->pc = 0x20CB30u;
    SET_GPR_U32(ctx, 31, 0x20CB38u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x20CB38u;
label_20cb38:
    // 0x20cb38: 0xc07a9d8  jal         func_1EA760
label_20cb3c:
    if (ctx->pc == 0x20CB3Cu) {
        ctx->pc = 0x20CB40u;
        goto label_20cb40;
    }
    ctx->pc = 0x20CB38u;
    SET_GPR_U32(ctx, 31, 0x20CB40u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x20CB40u;
label_20cb40:
    // 0x20cb40: 0xc04e168  jal         func_1385A0
label_20cb44:
    if (ctx->pc == 0x20CB44u) {
        ctx->pc = 0x20CB48u;
        goto label_20cb48;
    }
    ctx->pc = 0x20CB40u;
    SET_GPR_U32(ctx, 31, 0x20CB48u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20CB40u, 0x20CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB48u;
label_20cb48:
    // 0x20cb48: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_20cb4c:
    // 0x20cb4c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20cb50:
    // 0x20cb50: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x20cb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_20cb54:
    // 0x20cb54: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20cb58:
    // 0x20cb58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20cb5c:
    // 0x20cb5c: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20cb60:
    // 0x20cb60: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20cb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20cb64:
    // 0x20cb64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20cb64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cb68:
    // 0x20cb68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cb68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cb6c:
    // 0x20cb6c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20cb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20cb70:
    // 0x20cb70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20cb74:
    // 0x20cb74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20cb78:
    // 0x20cb78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20cb7c:
    // 0x20cb7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20cb80:
    // 0x20cb80: 0xc066c72  jal         func_19B1C8
label_20cb84:
    if (ctx->pc == 0x20CB84u) {
        ctx->pc = 0x20CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB80u;
        // 0x20cb84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB88u;
        goto label_20cb88;
    }
    ctx->pc = 0x20CB80u;
    SET_GPR_U32(ctx, 31, 0x20CB88u);
    ctx->pc = 0x20CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB80u;
    // 0x20cb84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x20CB88u;
label_20cb88:
    // 0x20cb88: 0xc08372c  jal         func_20DCB0
label_20cb8c:
    if (ctx->pc == 0x20CB8Cu) {
        ctx->pc = 0x20CB90u;
        goto label_20cb90;
    }
    ctx->pc = 0x20CB88u;
    SET_GPR_U32(ctx, 31, 0x20CB90u);
    ctx->pc = 0x20DCB0u;
    { ctx->pc = 0x20dcb0; return; }
    ctx->pc = 0x20CB90u;
label_20cb90:
    // 0x20cb90: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20cb94:
    // 0x20cb94: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_20cb98:
    if (ctx->pc == 0x20CB98u) {
        ctx->pc = 0x20CB9Cu;
        goto label_20cb9c;
    }
    ctx->pc = 0x20CB94u;
    {
        const bool branch_taken_0x20cb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cb94) {
            ctx->pc = 0x20CC60u;
            goto label_20cc60;
        }
    }
    ctx->pc = 0x20CB9Cu;
label_20cb9c:
    // 0x20cb9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20cb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20cba0:
    // 0x20cba0: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20cba0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20cba4:
    // 0x20cba4: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20cba4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20cba8:
    // 0x20cba8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_20cbac:
    // 0x20cbac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20cbb0:
    // 0x20cbb0: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20cbb4:
    // 0x20cbb4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20cbb8:
    // 0x20cbb8: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20cbb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_20cbbc:
    // 0x20cbbc: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_20cbc0:
    // 0x20cbc0: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20cbc4:
    // 0x20cbc4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20cbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20cbc8:
    // 0x20cbc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20cbc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cbcc:
    // 0x20cbcc: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20cbccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
label_20cbd0:
    // 0x20cbd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cbd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cbd4:
    // 0x20cbd4: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20cbd4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_20cbd8:
    // 0x20cbd8: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20cbd8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20cbdc:
    // 0x20cbdc: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20cbdcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_20cbe0:
    // 0x20cbe0: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20cbe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20cbe4:
    // 0x20cbe4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_20cbe8:
    // 0x20cbe8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20cbe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cbec:
    // 0x20cbec: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20cbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20cbf0:
    // 0x20cbf0: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_20cbf4:
    // 0x20cbf4: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20cbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
label_20cbf8:
    // 0x20cbf8: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20cbf8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20cbfc:
    // 0x20cbfc: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20cbfcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20cc00:
    // 0x20cc00: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20cc00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20cc04:
    // 0x20cc04: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20cc04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
label_20cc08:
    // 0x20cc08: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20cc08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
label_20cc0c:
    // 0x20cc0c: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20cc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
label_20cc10:
    // 0x20cc10: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_20cc14:
    // 0x20cc14: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_20cc18:
    // 0x20cc18: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20cc18u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20cc1c:
    // 0x20cc1c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_20cc20:
    // 0x20cc20: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20cc20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20cc24:
    // 0x20cc24: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
label_20cc28:
    // 0x20cc28: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20cc28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
label_20cc2c:
    // 0x20cc2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20cc30:
    // 0x20cc30: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20cc30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
label_20cc34:
    // 0x20cc34: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20cc38:
    // 0x20cc38: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20cc38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
label_20cc3c:
    // 0x20cc3c: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20cc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
label_20cc40:
    // 0x20cc40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20cc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20cc44:
    // 0x20cc44: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
label_20cc48:
    // 0x20cc48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20cc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20cc4c:
    // 0x20cc4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20cc4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20cc50:
    // 0x20cc50: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20cc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_20cc54:
    // 0x20cc54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20cc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20cc58:
    // 0x20cc58: 0xc066c72  jal         func_19B1C8
label_20cc5c:
    if (ctx->pc == 0x20CC5Cu) {
        ctx->pc = 0x20CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC58u;
        // 0x20cc5c: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC60u;
        goto label_20cc60;
    }
    ctx->pc = 0x20CC58u;
    SET_GPR_U32(ctx, 31, 0x20CC60u);
    ctx->pc = 0x20CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC58u;
    // 0x20cc5c: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x20CC60u;
label_20cc60:
    // 0x20cc60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20cc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20cc64:
    // 0x20cc64: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20cc68:
    // 0x20cc68: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20cc6c:
    // 0x20cc6c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20cc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20cc70:
    // 0x20cc70: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20cc74:
    // 0x20cc74: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20cc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20cc78:
    // 0x20cc78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20cc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cc7c:
    // 0x20cc7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cc7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cc80:
    // 0x20cc80: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20cc84:
    // 0x20cc84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20cc88:
    // 0x20cc88: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20cc8c:
    // 0x20cc8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20cc90:
    // 0x20cc90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20cc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20cc94:
    // 0x20cc94: 0xc066c72  jal         func_19B1C8
label_20cc98:
    if (ctx->pc == 0x20CC98u) {
        ctx->pc = 0x20CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC94u;
        // 0x20cc98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC9Cu;
        goto label_20cc9c;
    }
    ctx->pc = 0x20CC94u;
    SET_GPR_U32(ctx, 31, 0x20CC9Cu);
    ctx->pc = 0x20CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC94u;
    // 0x20cc98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x20CC9Cu;
label_20cc9c:
    // 0x20cc9c: 0xc077fc4  jal         func_1DFF10
label_20cca0:
    if (ctx->pc == 0x20CCA0u) {
        ctx->pc = 0x20CCA4u;
        goto label_20cca4;
    }
    ctx->pc = 0x20CC9Cu;
    SET_GPR_U32(ctx, 31, 0x20CCA4u);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x20CCA4u;
label_20cca4:
    // 0x20cca4: 0xc07a86c  jal         func_1EA1B0
label_20cca8:
    if (ctx->pc == 0x20CCA8u) {
        ctx->pc = 0x20CCACu;
        goto label_20ccac;
    }
    ctx->pc = 0x20CCA4u;
    SET_GPR_U32(ctx, 31, 0x20CCACu);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x20CCACu;
label_20ccac:
    // 0x20ccac: 0xc04e120  jal         func_138480
label_20ccb0:
    if (ctx->pc == 0x20CCB0u) {
        ctx->pc = 0x20CCB4u;
        goto label_20ccb4;
    }
    ctx->pc = 0x20CCACu;
    SET_GPR_U32(ctx, 31, 0x20CCB4u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20CCACu, 0x20CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCB4u;
label_20ccb4:
    // 0x20ccb4: 0xc05b578  jal         func_16D5E0
label_20ccb8:
    if (ctx->pc == 0x20CCB8u) {
        ctx->pc = 0x20CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCB4u;
        // 0x20ccb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCBCu;
        goto label_20ccbc;
    }
    ctx->pc = 0x20CCB4u;
    SET_GPR_U32(ctx, 31, 0x20CCBCu);
    ctx->pc = 0x20CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCB4u;
    // 0x20ccb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20CCB4u, 0x20CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCBCu;
label_20ccbc:
    // 0x20ccbc: 0xc060258  jal         func_180960
label_20ccc0:
    if (ctx->pc == 0x20CCC0u) {
        ctx->pc = 0x20CCC4u;
        goto label_20ccc4;
    }
    ctx->pc = 0x20CCBCu;
    SET_GPR_U32(ctx, 31, 0x20CCC4u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x20CCC4u;
label_20ccc4:
    // 0x20ccc4: 0x8f829164  lw          $v0, -0x6E9C($gp)
    ctx->pc = 0x20ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20ccc8:
    // 0x20ccc8: 0x1040fcba  beqz        $v0, . + 4 + (-0x346 << 2)
label_20cccc:
    if (ctx->pc == 0x20CCCCu) {
        ctx->pc = 0x20CCD0u;
        goto label_20ccd0;
    }
    ctx->pc = 0x20CCC8u;
    {
        const bool branch_taken_0x20ccc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ccc8) {
            ctx->pc = 0x20BFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20bfb4; return; }
        }
    }
    ctx->pc = 0x20CCD0u;
label_20ccd0:
    // 0x20ccd0: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_20ccd4:
    // 0x20ccd4: 0x1040fcb7  beqz        $v0, . + 4 + (-0x349 << 2)
label_20ccd8:
    if (ctx->pc == 0x20CCD8u) {
        ctx->pc = 0x20CCDCu;
        goto label_20ccdc;
    }
    ctx->pc = 0x20CCD4u;
    {
        const bool branch_taken_0x20ccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ccd4) {
            ctx->pc = 0x20BFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20bfb4; return; }
        }
    }
    ctx->pc = 0x20CCDCu;
label_20ccdc:
    // 0x20ccdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cce0:
    // 0x20cce0: 0x1000fcb4  b           . + 4 + (-0x34C << 2)
label_20cce4:
    if (ctx->pc == 0x20CCE4u) {
        ctx->pc = 0x20CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCE0u;
        // 0x20cce4: 0xaf829168  sw          $v0, -0x6E98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCE8u;
        goto label_20cce8;
    }
    ctx->pc = 0x20CCE0u;
    {
        const bool branch_taken_0x20cce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCE0u;
        // 0x20cce4: 0xaf829168  sw          $v0, -0x6E98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cce0) {
            ctx->pc = 0x20BFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20bfb4; return; }
        }
    }
    ctx->pc = 0x20CCE8u;
label_20cce8:
    // 0x20cce8: 0xc078078  jal         func_1E01E0
label_20ccec:
    if (ctx->pc == 0x20CCECu) {
        ctx->pc = 0x20CCF0u;
        { ctx->pc = 0x20ccf0; return; }
    }
    ctx->pc = 0x20CCE8u;
    SET_GPR_U32(ctx, 31, 0x20CCF0u);
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x20CCF0u;
    ctx->pc = 0x20ccf0u;
    return;
}
