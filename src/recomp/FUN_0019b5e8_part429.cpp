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


void FUN_0019b5e8_part429(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26c5a8u: goto label_26c5a8;
        case 0x26c5acu: goto label_26c5ac;
        case 0x26c5b0u: goto label_26c5b0;
        case 0x26c5b4u: goto label_26c5b4;
        case 0x26c5b8u: goto label_26c5b8;
        case 0x26c5bcu: goto label_26c5bc;
        case 0x26c5c0u: goto label_26c5c0;
        case 0x26c5c4u: goto label_26c5c4;
        case 0x26c5c8u: goto label_26c5c8;
        case 0x26c5ccu: goto label_26c5cc;
        case 0x26c5d0u: goto label_26c5d0;
        case 0x26c5d4u: goto label_26c5d4;
        case 0x26c5d8u: goto label_26c5d8;
        case 0x26c5dcu: goto label_26c5dc;
        case 0x26c5e0u: goto label_26c5e0;
        case 0x26c5e4u: goto label_26c5e4;
        case 0x26c5e8u: goto label_26c5e8;
        case 0x26c5ecu: goto label_26c5ec;
        case 0x26c5f0u: goto label_26c5f0;
        case 0x26c5f4u: goto label_26c5f4;
        case 0x26c5f8u: goto label_26c5f8;
        case 0x26c5fcu: goto label_26c5fc;
        case 0x26c600u: goto label_26c600;
        case 0x26c604u: goto label_26c604;
        case 0x26c608u: goto label_26c608;
        case 0x26c60cu: goto label_26c60c;
        case 0x26c610u: goto label_26c610;
        case 0x26c614u: goto label_26c614;
        case 0x26c618u: goto label_26c618;
        case 0x26c61cu: goto label_26c61c;
        case 0x26c620u: goto label_26c620;
        case 0x26c624u: goto label_26c624;
        case 0x26c628u: goto label_26c628;
        case 0x26c62cu: goto label_26c62c;
        case 0x26c630u: goto label_26c630;
        case 0x26c634u: goto label_26c634;
        case 0x26c638u: goto label_26c638;
        case 0x26c63cu: goto label_26c63c;
        case 0x26c640u: goto label_26c640;
        case 0x26c644u: goto label_26c644;
        case 0x26c648u: goto label_26c648;
        case 0x26c64cu: goto label_26c64c;
        case 0x26c650u: goto label_26c650;
        case 0x26c654u: goto label_26c654;
        case 0x26c658u: goto label_26c658;
        case 0x26c65cu: goto label_26c65c;
        case 0x26c660u: goto label_26c660;
        case 0x26c664u: goto label_26c664;
        case 0x26c668u: goto label_26c668;
        case 0x26c66cu: goto label_26c66c;
        case 0x26c670u: goto label_26c670;
        case 0x26c674u: goto label_26c674;
        case 0x26c678u: goto label_26c678;
        case 0x26c67cu: goto label_26c67c;
        case 0x26c680u: goto label_26c680;
        case 0x26c684u: goto label_26c684;
        case 0x26c688u: goto label_26c688;
        case 0x26c68cu: goto label_26c68c;
        case 0x26c690u: goto label_26c690;
        case 0x26c694u: goto label_26c694;
        case 0x26c698u: goto label_26c698;
        case 0x26c69cu: goto label_26c69c;
        case 0x26c6a0u: goto label_26c6a0;
        case 0x26c6a4u: goto label_26c6a4;
        case 0x26c6a8u: goto label_26c6a8;
        case 0x26c6acu: goto label_26c6ac;
        case 0x26c6b0u: goto label_26c6b0;
        case 0x26c6b4u: goto label_26c6b4;
        case 0x26c6b8u: goto label_26c6b8;
        case 0x26c6bcu: goto label_26c6bc;
        case 0x26c6c0u: goto label_26c6c0;
        case 0x26c6c4u: goto label_26c6c4;
        case 0x26c6c8u: goto label_26c6c8;
        case 0x26c6ccu: goto label_26c6cc;
        case 0x26c6d0u: goto label_26c6d0;
        case 0x26c6d4u: goto label_26c6d4;
        case 0x26c6d8u: goto label_26c6d8;
        case 0x26c6dcu: goto label_26c6dc;
        case 0x26c6e0u: goto label_26c6e0;
        case 0x26c6e4u: goto label_26c6e4;
        case 0x26c6e8u: goto label_26c6e8;
        case 0x26c6ecu: goto label_26c6ec;
        case 0x26c6f0u: goto label_26c6f0;
        case 0x26c6f4u: goto label_26c6f4;
        case 0x26c6f8u: goto label_26c6f8;
        case 0x26c6fcu: goto label_26c6fc;
        case 0x26c700u: goto label_26c700;
        case 0x26c704u: goto label_26c704;
        case 0x26c708u: goto label_26c708;
        case 0x26c70cu: goto label_26c70c;
        case 0x26c710u: goto label_26c710;
        case 0x26c714u: goto label_26c714;
        case 0x26c718u: goto label_26c718;
        case 0x26c71cu: goto label_26c71c;
        case 0x26c720u: goto label_26c720;
        case 0x26c724u: goto label_26c724;
        case 0x26c728u: goto label_26c728;
        case 0x26c72cu: goto label_26c72c;
        case 0x26c730u: goto label_26c730;
        case 0x26c734u: goto label_26c734;
        case 0x26c738u: goto label_26c738;
        case 0x26c73cu: goto label_26c73c;
        case 0x26c740u: goto label_26c740;
        case 0x26c744u: goto label_26c744;
        case 0x26c748u: goto label_26c748;
        case 0x26c74cu: goto label_26c74c;
        case 0x26c750u: goto label_26c750;
        case 0x26c754u: goto label_26c754;
        case 0x26c758u: goto label_26c758;
        case 0x26c75cu: goto label_26c75c;
        case 0x26c760u: goto label_26c760;
        case 0x26c764u: goto label_26c764;
        case 0x26c768u: goto label_26c768;
        case 0x26c76cu: goto label_26c76c;
        case 0x26c770u: goto label_26c770;
        case 0x26c774u: goto label_26c774;
        case 0x26c778u: goto label_26c778;
        case 0x26c77cu: goto label_26c77c;
        case 0x26c780u: goto label_26c780;
        case 0x26c784u: goto label_26c784;
        case 0x26c788u: goto label_26c788;
        case 0x26c78cu: goto label_26c78c;
        case 0x26c790u: goto label_26c790;
        case 0x26c794u: goto label_26c794;
        case 0x26c798u: goto label_26c798;
        case 0x26c79cu: goto label_26c79c;
        case 0x26c7a0u: goto label_26c7a0;
        case 0x26c7a4u: goto label_26c7a4;
        case 0x26c7a8u: goto label_26c7a8;
        case 0x26c7acu: goto label_26c7ac;
        case 0x26c7b0u: goto label_26c7b0;
        case 0x26c7b4u: goto label_26c7b4;
        case 0x26c7b8u: goto label_26c7b8;
        case 0x26c7bcu: goto label_26c7bc;
        case 0x26c7c0u: goto label_26c7c0;
        case 0x26c7c4u: goto label_26c7c4;
        case 0x26c7c8u: goto label_26c7c8;
        case 0x26c7ccu: goto label_26c7cc;
        case 0x26c7d0u: goto label_26c7d0;
        case 0x26c7d4u: goto label_26c7d4;
        case 0x26c7d8u: goto label_26c7d8;
        case 0x26c7dcu: goto label_26c7dc;
        case 0x26c7e0u: goto label_26c7e0;
        case 0x26c7e4u: goto label_26c7e4;
        case 0x26c7e8u: goto label_26c7e8;
        case 0x26c7ecu: goto label_26c7ec;
        case 0x26c7f0u: goto label_26c7f0;
        case 0x26c7f4u: goto label_26c7f4;
        case 0x26c7f8u: goto label_26c7f8;
        case 0x26c7fcu: goto label_26c7fc;
        case 0x26c800u: goto label_26c800;
        case 0x26c804u: goto label_26c804;
        case 0x26c808u: goto label_26c808;
        case 0x26c80cu: goto label_26c80c;
        case 0x26c810u: goto label_26c810;
        case 0x26c814u: goto label_26c814;
        case 0x26c818u: goto label_26c818;
        case 0x26c81cu: goto label_26c81c;
        case 0x26c820u: goto label_26c820;
        case 0x26c824u: goto label_26c824;
        case 0x26c828u: goto label_26c828;
        case 0x26c82cu: goto label_26c82c;
        case 0x26c830u: goto label_26c830;
        case 0x26c834u: goto label_26c834;
        case 0x26c838u: goto label_26c838;
        case 0x26c83cu: goto label_26c83c;
        case 0x26c840u: goto label_26c840;
        case 0x26c844u: goto label_26c844;
        case 0x26c848u: goto label_26c848;
        case 0x26c84cu: goto label_26c84c;
        case 0x26c850u: goto label_26c850;
        case 0x26c854u: goto label_26c854;
        case 0x26c858u: goto label_26c858;
        case 0x26c85cu: goto label_26c85c;
        case 0x26c860u: goto label_26c860;
        case 0x26c864u: goto label_26c864;
        case 0x26c868u: goto label_26c868;
        case 0x26c86cu: goto label_26c86c;
        case 0x26c870u: goto label_26c870;
        case 0x26c874u: goto label_26c874;
        case 0x26c878u: goto label_26c878;
        case 0x26c87cu: goto label_26c87c;
        case 0x26c880u: goto label_26c880;
        case 0x26c884u: goto label_26c884;
        case 0x26c888u: goto label_26c888;
        case 0x26c88cu: goto label_26c88c;
        case 0x26c890u: goto label_26c890;
        case 0x26c894u: goto label_26c894;
        case 0x26c898u: goto label_26c898;
        case 0x26c89cu: goto label_26c89c;
        case 0x26c8a0u: goto label_26c8a0;
        case 0x26c8a4u: goto label_26c8a4;
        case 0x26c8a8u: goto label_26c8a8;
        case 0x26c8acu: goto label_26c8ac;
        case 0x26c8b0u: goto label_26c8b0;
        case 0x26c8b4u: goto label_26c8b4;
        case 0x26c8b8u: goto label_26c8b8;
        case 0x26c8bcu: goto label_26c8bc;
        case 0x26c8c0u: goto label_26c8c0;
        case 0x26c8c4u: goto label_26c8c4;
        case 0x26c8c8u: goto label_26c8c8;
        case 0x26c8ccu: goto label_26c8cc;
        case 0x26c8d0u: goto label_26c8d0;
        case 0x26c8d4u: goto label_26c8d4;
        case 0x26c8d8u: goto label_26c8d8;
        case 0x26c8dcu: goto label_26c8dc;
        case 0x26c8e0u: goto label_26c8e0;
        case 0x26c8e4u: goto label_26c8e4;
        case 0x26c8e8u: goto label_26c8e8;
        case 0x26c8ecu: goto label_26c8ec;
        case 0x26c8f0u: goto label_26c8f0;
        case 0x26c8f4u: goto label_26c8f4;
        case 0x26c8f8u: goto label_26c8f8;
        case 0x26c8fcu: goto label_26c8fc;
        case 0x26c900u: goto label_26c900;
        case 0x26c904u: goto label_26c904;
        case 0x26c908u: goto label_26c908;
        case 0x26c90cu: goto label_26c90c;
        case 0x26c910u: goto label_26c910;
        case 0x26c914u: goto label_26c914;
        case 0x26c918u: goto label_26c918;
        case 0x26c91cu: goto label_26c91c;
        case 0x26c920u: goto label_26c920;
        case 0x26c924u: goto label_26c924;
        case 0x26c928u: goto label_26c928;
        case 0x26c92cu: goto label_26c92c;
        case 0x26c930u: goto label_26c930;
        case 0x26c934u: goto label_26c934;
        case 0x26c938u: goto label_26c938;
        case 0x26c93cu: goto label_26c93c;
        case 0x26c940u: goto label_26c940;
        case 0x26c944u: goto label_26c944;
        case 0x26c948u: goto label_26c948;
        case 0x26c94cu: goto label_26c94c;
        case 0x26c950u: goto label_26c950;
        case 0x26c954u: goto label_26c954;
        case 0x26c958u: goto label_26c958;
        case 0x26c95cu: goto label_26c95c;
        case 0x26c960u: goto label_26c960;
        case 0x26c964u: goto label_26c964;
        case 0x26c968u: goto label_26c968;
        case 0x26c96cu: goto label_26c96c;
        case 0x26c970u: goto label_26c970;
        case 0x26c974u: goto label_26c974;
        case 0x26c978u: goto label_26c978;
        case 0x26c97cu: goto label_26c97c;
        case 0x26c980u: goto label_26c980;
        case 0x26c984u: goto label_26c984;
        case 0x26c988u: goto label_26c988;
        case 0x26c98cu: goto label_26c98c;
        case 0x26c990u: goto label_26c990;
        case 0x26c994u: goto label_26c994;
        case 0x26c998u: goto label_26c998;
        case 0x26c99cu: goto label_26c99c;
        case 0x26c9a0u: goto label_26c9a0;
        case 0x26c9a4u: goto label_26c9a4;
        case 0x26c9a8u: goto label_26c9a8;
        case 0x26c9acu: goto label_26c9ac;
        case 0x26c9b0u: goto label_26c9b0;
        case 0x26c9b4u: goto label_26c9b4;
        case 0x26c9b8u: goto label_26c9b8;
        case 0x26c9bcu: goto label_26c9bc;
        case 0x26c9c0u: goto label_26c9c0;
        case 0x26c9c4u: goto label_26c9c4;
        case 0x26c9c8u: goto label_26c9c8;
        case 0x26c9ccu: goto label_26c9cc;
        case 0x26c9d0u: goto label_26c9d0;
        case 0x26c9d4u: goto label_26c9d4;
        case 0x26c9d8u: goto label_26c9d8;
        case 0x26c9dcu: goto label_26c9dc;
        case 0x26c9e0u: goto label_26c9e0;
        case 0x26c9e4u: goto label_26c9e4;
        case 0x26c9e8u: goto label_26c9e8;
        case 0x26c9ecu: goto label_26c9ec;
        case 0x26c9f0u: goto label_26c9f0;
        case 0x26c9f4u: goto label_26c9f4;
        case 0x26c9f8u: goto label_26c9f8;
        case 0x26c9fcu: goto label_26c9fc;
        case 0x26ca00u: goto label_26ca00;
        case 0x26ca04u: goto label_26ca04;
        case 0x26ca08u: goto label_26ca08;
        case 0x26ca0cu: goto label_26ca0c;
        case 0x26ca10u: goto label_26ca10;
        case 0x26ca14u: goto label_26ca14;
        case 0x26ca18u: goto label_26ca18;
        case 0x26ca1cu: goto label_26ca1c;
        case 0x26ca20u: goto label_26ca20;
        case 0x26ca24u: goto label_26ca24;
        case 0x26ca28u: goto label_26ca28;
        case 0x26ca2cu: goto label_26ca2c;
        case 0x26ca30u: goto label_26ca30;
        case 0x26ca34u: goto label_26ca34;
        case 0x26ca38u: goto label_26ca38;
        case 0x26ca3cu: goto label_26ca3c;
        case 0x26ca40u: goto label_26ca40;
        case 0x26ca44u: goto label_26ca44;
        case 0x26ca48u: goto label_26ca48;
        case 0x26ca4cu: goto label_26ca4c;
        case 0x26ca50u: goto label_26ca50;
        case 0x26ca54u: goto label_26ca54;
        case 0x26ca58u: goto label_26ca58;
        case 0x26ca5cu: goto label_26ca5c;
        case 0x26ca60u: goto label_26ca60;
        case 0x26ca64u: goto label_26ca64;
        case 0x26ca68u: goto label_26ca68;
        case 0x26ca6cu: goto label_26ca6c;
        case 0x26ca70u: goto label_26ca70;
        case 0x26ca74u: goto label_26ca74;
        case 0x26ca78u: goto label_26ca78;
        case 0x26ca7cu: goto label_26ca7c;
        case 0x26ca80u: goto label_26ca80;
        case 0x26ca84u: goto label_26ca84;
        case 0x26ca88u: goto label_26ca88;
        case 0x26ca8cu: goto label_26ca8c;
        case 0x26ca90u: goto label_26ca90;
        case 0x26ca94u: goto label_26ca94;
        case 0x26ca98u: goto label_26ca98;
        case 0x26ca9cu: goto label_26ca9c;
        case 0x26caa0u: goto label_26caa0;
        case 0x26caa4u: goto label_26caa4;
        case 0x26caa8u: goto label_26caa8;
        case 0x26caacu: goto label_26caac;
        case 0x26cab0u: goto label_26cab0;
        case 0x26cab4u: goto label_26cab4;
        case 0x26cab8u: goto label_26cab8;
        case 0x26cabcu: goto label_26cabc;
        case 0x26cac0u: goto label_26cac0;
        case 0x26cac4u: goto label_26cac4;
        case 0x26cac8u: goto label_26cac8;
        case 0x26caccu: goto label_26cacc;
        case 0x26cad0u: goto label_26cad0;
        case 0x26cad4u: goto label_26cad4;
        case 0x26cad8u: goto label_26cad8;
        case 0x26cadcu: goto label_26cadc;
        case 0x26cae0u: goto label_26cae0;
        case 0x26cae4u: goto label_26cae4;
        case 0x26cae8u: goto label_26cae8;
        case 0x26caecu: goto label_26caec;
        case 0x26caf0u: goto label_26caf0;
        case 0x26caf4u: goto label_26caf4;
        case 0x26caf8u: goto label_26caf8;
        case 0x26cafcu: goto label_26cafc;
        case 0x26cb00u: goto label_26cb00;
        case 0x26cb04u: goto label_26cb04;
        case 0x26cb08u: goto label_26cb08;
        case 0x26cb0cu: goto label_26cb0c;
        case 0x26cb10u: goto label_26cb10;
        case 0x26cb14u: goto label_26cb14;
        case 0x26cb18u: goto label_26cb18;
        case 0x26cb1cu: goto label_26cb1c;
        case 0x26cb20u: goto label_26cb20;
        case 0x26cb24u: goto label_26cb24;
        case 0x26cb28u: goto label_26cb28;
        case 0x26cb2cu: goto label_26cb2c;
        case 0x26cb30u: goto label_26cb30;
        case 0x26cb34u: goto label_26cb34;
        case 0x26cb38u: goto label_26cb38;
        case 0x26cb3cu: goto label_26cb3c;
        case 0x26cb40u: goto label_26cb40;
        case 0x26cb44u: goto label_26cb44;
        case 0x26cb48u: goto label_26cb48;
        case 0x26cb4cu: goto label_26cb4c;
        case 0x26cb50u: goto label_26cb50;
        case 0x26cb54u: goto label_26cb54;
        case 0x26cb58u: goto label_26cb58;
        case 0x26cb5cu: goto label_26cb5c;
        case 0x26cb60u: goto label_26cb60;
        case 0x26cb64u: goto label_26cb64;
        case 0x26cb68u: goto label_26cb68;
        case 0x26cb6cu: goto label_26cb6c;
        case 0x26cb70u: goto label_26cb70;
        case 0x26cb74u: goto label_26cb74;
        case 0x26cb78u: goto label_26cb78;
        case 0x26cb7cu: goto label_26cb7c;
        case 0x26cb80u: goto label_26cb80;
        case 0x26cb84u: goto label_26cb84;
        case 0x26cb88u: goto label_26cb88;
        case 0x26cb8cu: goto label_26cb8c;
        case 0x26cb90u: goto label_26cb90;
        case 0x26cb94u: goto label_26cb94;
        case 0x26cb98u: goto label_26cb98;
        case 0x26cb9cu: goto label_26cb9c;
        case 0x26cba0u: goto label_26cba0;
        case 0x26cba4u: goto label_26cba4;
        case 0x26cba8u: goto label_26cba8;
        case 0x26cbacu: goto label_26cbac;
        case 0x26cbb0u: goto label_26cbb0;
        case 0x26cbb4u: goto label_26cbb4;
        case 0x26cbb8u: goto label_26cbb8;
        case 0x26cbbcu: goto label_26cbbc;
        case 0x26cbc0u: goto label_26cbc0;
        case 0x26cbc4u: goto label_26cbc4;
        case 0x26cbc8u: goto label_26cbc8;
        case 0x26cbccu: goto label_26cbcc;
        case 0x26cbd0u: goto label_26cbd0;
        case 0x26cbd4u: goto label_26cbd4;
        case 0x26cbd8u: goto label_26cbd8;
        case 0x26cbdcu: goto label_26cbdc;
        case 0x26cbe0u: goto label_26cbe0;
        case 0x26cbe4u: goto label_26cbe4;
        case 0x26cbe8u: goto label_26cbe8;
        case 0x26cbecu: goto label_26cbec;
        case 0x26cbf0u: goto label_26cbf0;
        case 0x26cbf4u: goto label_26cbf4;
        case 0x26cbf8u: goto label_26cbf8;
        case 0x26cbfcu: goto label_26cbfc;
        case 0x26cc00u: goto label_26cc00;
        case 0x26cc04u: goto label_26cc04;
        case 0x26cc08u: goto label_26cc08;
        case 0x26cc0cu: goto label_26cc0c;
        case 0x26cc10u: goto label_26cc10;
        case 0x26cc14u: goto label_26cc14;
        case 0x26cc18u: goto label_26cc18;
        case 0x26cc1cu: goto label_26cc1c;
        case 0x26cc20u: goto label_26cc20;
        case 0x26cc24u: goto label_26cc24;
        case 0x26cc28u: goto label_26cc28;
        case 0x26cc2cu: goto label_26cc2c;
        case 0x26cc30u: goto label_26cc30;
        case 0x26cc34u: goto label_26cc34;
        case 0x26cc38u: goto label_26cc38;
        case 0x26cc3cu: goto label_26cc3c;
        case 0x26cc40u: goto label_26cc40;
        case 0x26cc44u: goto label_26cc44;
        case 0x26cc48u: goto label_26cc48;
        case 0x26cc4cu: goto label_26cc4c;
        case 0x26cc50u: goto label_26cc50;
        case 0x26cc54u: goto label_26cc54;
        case 0x26cc58u: goto label_26cc58;
        case 0x26cc5cu: goto label_26cc5c;
        case 0x26cc60u: goto label_26cc60;
        case 0x26cc64u: goto label_26cc64;
        case 0x26cc68u: goto label_26cc68;
        case 0x26cc6cu: goto label_26cc6c;
        case 0x26cc70u: goto label_26cc70;
        case 0x26cc74u: goto label_26cc74;
        case 0x26cc78u: goto label_26cc78;
        case 0x26cc7cu: goto label_26cc7c;
        case 0x26cc80u: goto label_26cc80;
        case 0x26cc84u: goto label_26cc84;
        case 0x26cc88u: goto label_26cc88;
        case 0x26cc8cu: goto label_26cc8c;
        case 0x26cc90u: goto label_26cc90;
        case 0x26cc94u: goto label_26cc94;
        case 0x26cc98u: goto label_26cc98;
        case 0x26cc9cu: goto label_26cc9c;
        case 0x26cca0u: goto label_26cca0;
        case 0x26cca4u: goto label_26cca4;
        case 0x26cca8u: goto label_26cca8;
        case 0x26ccacu: goto label_26ccac;
        case 0x26ccb0u: goto label_26ccb0;
        case 0x26ccb4u: goto label_26ccb4;
        case 0x26ccb8u: goto label_26ccb8;
        case 0x26ccbcu: goto label_26ccbc;
        case 0x26ccc0u: goto label_26ccc0;
        case 0x26ccc4u: goto label_26ccc4;
        case 0x26ccc8u: goto label_26ccc8;
        case 0x26ccccu: goto label_26cccc;
        case 0x26ccd0u: goto label_26ccd0;
        case 0x26ccd4u: goto label_26ccd4;
        case 0x26ccd8u: goto label_26ccd8;
        case 0x26ccdcu: goto label_26ccdc;
        case 0x26cce0u: goto label_26cce0;
        case 0x26cce4u: goto label_26cce4;
        case 0x26cce8u: goto label_26cce8;
        case 0x26ccecu: goto label_26ccec;
        case 0x26ccf0u: goto label_26ccf0;
        case 0x26ccf4u: goto label_26ccf4;
        case 0x26ccf8u: goto label_26ccf8;
        case 0x26ccfcu: goto label_26ccfc;
        case 0x26cd00u: goto label_26cd00;
        case 0x26cd04u: goto label_26cd04;
        case 0x26cd08u: goto label_26cd08;
        case 0x26cd0cu: goto label_26cd0c;
        case 0x26cd10u: goto label_26cd10;
        case 0x26cd14u: goto label_26cd14;
        case 0x26cd18u: goto label_26cd18;
        case 0x26cd1cu: goto label_26cd1c;
        case 0x26cd20u: goto label_26cd20;
        case 0x26cd24u: goto label_26cd24;
        case 0x26cd28u: goto label_26cd28;
        case 0x26cd2cu: goto label_26cd2c;
        case 0x26cd30u: goto label_26cd30;
        case 0x26cd34u: goto label_26cd34;
        case 0x26cd38u: goto label_26cd38;
        case 0x26cd3cu: goto label_26cd3c;
        case 0x26cd40u: goto label_26cd40;
        case 0x26cd44u: goto label_26cd44;
        case 0x26cd48u: goto label_26cd48;
        case 0x26cd4cu: goto label_26cd4c;
        case 0x26cd50u: goto label_26cd50;
        case 0x26cd54u: goto label_26cd54;
        case 0x26cd58u: goto label_26cd58;
        case 0x26cd5cu: goto label_26cd5c;
        case 0x26cd60u: goto label_26cd60;
        case 0x26cd64u: goto label_26cd64;
        case 0x26cd68u: goto label_26cd68;
        case 0x26cd6cu: goto label_26cd6c;
        case 0x26cd70u: goto label_26cd70;
        case 0x26cd74u: goto label_26cd74;
        default: return;
    }

label_26c5a8:
    // 0x26c5a8: 0x0  nop
    ctx->pc = 0x26c5a8u;
    // NOP
label_26c5ac:
    // 0x26c5ac: 0x0  nop
    ctx->pc = 0x26c5acu;
    // NOP
label_26c5b0:
    // 0x26c5b0: 0x2717  .word       0x00002717                   # dsrav       $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c5b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c5b4:
    // 0x26c5b4: 0x8d90  .word       0x00008D90                   # mfhi        $s1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c5b4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26c5b8:
    // 0x26c5b8: 0x0  nop
    ctx->pc = 0x26c5b8u;
    // NOP
label_26c5bc:
    // 0x26c5bc: 0x0  nop
    ctx->pc = 0x26c5bcu;
    // NOP
label_26c5c0:
    // 0x26c5c0: 0x2729  .word       0x00002729                   # mtsa        $zero # 00002700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26c5c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26c5c4:
    // 0x26c5c4: 0x8d60  .word       0x00008D60                   # add         $s1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c5c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26c5c8:
    // 0x26c5c8: 0x0  nop
    ctx->pc = 0x26c5c8u;
    // NOP
label_26c5cc:
    // 0x26c5cc: 0x0  nop
    ctx->pc = 0x26c5ccu;
    // NOP
label_26c5d0:
    // 0x26c5d0: 0x273b  dsra        $a0, $zero, 28
    ctx->pc = 0x26c5d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> 28);
label_26c5d4:
    // 0x26c5d4: 0x8b70  tge         $zero, $zero, 557
    ctx->pc = 0x26c5d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c5d8:
    // 0x26c5d8: 0x0  nop
    ctx->pc = 0x26c5d8u;
    // NOP
label_26c5dc:
    // 0x26c5dc: 0x0  nop
    ctx->pc = 0x26c5dcu;
    // NOP
label_26c5e0:
    // 0x26c5e0: 0x274d  break       0, 157
    ctx->pc = 0x26c5e0u;
    runtime->handleBreak(rdram, ctx);
label_26c5e4:
    // 0x26c5e4: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x26c5e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c5e8:
    // 0x26c5e8: 0x0  nop
    ctx->pc = 0x26c5e8u;
    // NOP
label_26c5ec:
    // 0x26c5ec: 0x0  nop
    ctx->pc = 0x26c5ecu;
    // NOP
label_26c5f0:
    // 0x26c5f0: 0x275c  .word       0x0000275C                   # dmult       $zero, $zero # 00002740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c5f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26C5F0 raw=0x0000275C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c5f4:
    // 0x26c5f4: 0x9350  .word       0x00009350                   # mfhi        $s2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c5f4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26c5f8:
    // 0x26c5f8: 0x0  nop
    ctx->pc = 0x26c5f8u;
    // NOP
label_26c5fc:
    // 0x26c5fc: 0x0  nop
    ctx->pc = 0x26c5fcu;
    // NOP
label_26c600:
    // 0x26c600: 0x276f  .word       0x0000276F                   # dsubu       $a0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26c604:
    // 0x26c604: 0x6c30  tge         $zero, $zero, 432
    ctx->pc = 0x26c604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c608:
    // 0x26c608: 0x0  nop
    ctx->pc = 0x26c608u;
    // NOP
label_26c60c:
    // 0x26c60c: 0x0  nop
    ctx->pc = 0x26c60cu;
    // NOP
label_26c610:
    // 0x26c610: 0x277d  .word       0x0000277D                   # INVALID     $zero, $zero, 0x277D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26C610 raw=0x0000277D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c614:
    // 0x26c614: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x26c614u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26c618:
    // 0x26c618: 0x0  nop
    ctx->pc = 0x26c618u;
    // NOP
label_26c61c:
    // 0x26c61c: 0x0  nop
    ctx->pc = 0x26c61cu;
    // NOP
label_26c620:
    // 0x26c620: 0x278f  .word       0x0000278F                   # sync.p # 00002000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c620u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26c624:
    // 0x26c624: 0x7af0  tge         $zero, $zero, 491
    ctx->pc = 0x26c624u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c628:
    // 0x26c628: 0x0  nop
    ctx->pc = 0x26c628u;
    // NOP
label_26c62c:
    // 0x26c62c: 0x0  nop
    ctx->pc = 0x26c62cu;
    // NOP
label_26c630:
    // 0x26c630: 0x279f  .word       0x0000279F                   # ddivu       $a0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26C630 raw=0x0000279F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c634:
    // 0x26c634: 0x7d50  .word       0x00007D50                   # mfhi        $t7 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c634u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26c638:
    // 0x26c638: 0x0  nop
    ctx->pc = 0x26c638u;
    // NOP
label_26c63c:
    // 0x26c63c: 0x0  nop
    ctx->pc = 0x26c63cu;
    // NOP
label_26c640:
    // 0x26c640: 0x27af  .word       0x000027AF                   # dsubu       $a0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26c644:
    // 0x26c644: 0xa8d0  .word       0x0000A8D0                   # mfhi        $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c644u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26c648:
    // 0x26c648: 0x0  nop
    ctx->pc = 0x26c648u;
    // NOP
label_26c64c:
    // 0x26c64c: 0x0  nop
    ctx->pc = 0x26c64cu;
    // NOP
label_26c650:
    // 0x26c650: 0x27c5  .word       0x000027C5                   # INVALID     $zero, $zero, 0x27C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26C650 raw=0x000027C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c654:
    // 0x26c654: 0xb8c0  sll         $s7, $zero, 3
    ctx->pc = 0x26c654u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26c658:
    // 0x26c658: 0x0  nop
    ctx->pc = 0x26c658u;
    // NOP
label_26c65c:
    // 0x26c65c: 0x0  nop
    ctx->pc = 0x26c65cu;
    // NOP
label_26c660:
    // 0x26c660: 0x27dd  .word       0x000027DD                   # dmultu      $zero, $zero # 000027C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c660u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26C660 raw=0x000027DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c664:
    // 0x26c664: 0xf3d0  .word       0x0000F3D0                   # mfhi        $fp # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c664u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_26c668:
    // 0x26c668: 0x0  nop
    ctx->pc = 0x26c668u;
    // NOP
label_26c66c:
    // 0x26c66c: 0x0  nop
    ctx->pc = 0x26c66cu;
    // NOP
label_26c670:
    // 0x26c670: 0x27fc  dsll32      $a0, $zero, 31
    ctx->pc = 0x26c670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 31));
label_26c674:
    // 0x26c674: 0xaec0  sll         $s5, $zero, 27
    ctx->pc = 0x26c674u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26c678:
    // 0x26c678: 0x0  nop
    ctx->pc = 0x26c678u;
    // NOP
label_26c67c:
    // 0x26c67c: 0x0  nop
    ctx->pc = 0x26c67cu;
    // NOP
label_26c680:
    // 0x26c680: 0x2812  mflo        $a1
    ctx->pc = 0x26c680u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_26c684:
    // 0x26c684: 0x9530  tge         $zero, $zero, 596
    ctx->pc = 0x26c684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c688:
    // 0x26c688: 0x0  nop
    ctx->pc = 0x26c688u;
    // NOP
label_26c68c:
    // 0x26c68c: 0x0  nop
    ctx->pc = 0x26c68cu;
    // NOP
label_26c690:
    // 0x26c690: 0x2825  move        $a1, $zero
    ctx->pc = 0x26c690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26c694:
    // 0x26c694: 0xaae0  .word       0x0000AAE0                   # add         $s5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26c698:
    // 0x26c698: 0x0  nop
    ctx->pc = 0x26c698u;
    // NOP
label_26c69c:
    // 0x26c69c: 0x0  nop
    ctx->pc = 0x26c69cu;
    // NOP
label_26c6a0:
    // 0x26c6a0: 0x283b  dsra        $a1, $zero, 0
    ctx->pc = 0x26c6a0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> 0);
label_26c6a4:
    // 0x26c6a4: 0x6160  .word       0x00006160                   # add         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c6a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26c6a8:
    // 0x26c6a8: 0x0  nop
    ctx->pc = 0x26c6a8u;
    // NOP
label_26c6ac:
    // 0x26c6ac: 0x0  nop
    ctx->pc = 0x26c6acu;
    // NOP
label_26c6b0:
    // 0x26c6b0: 0x2848  .word       0x00002848                   # jr          $zero # 00002840 <InstrIdType: CPU_SPECIAL>
label_26c6b4:
    if (ctx->pc == 0x26C6B4u) {
        ctx->pc = 0x26C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6B0u;
        // 0x26c6b4: 0x8d90  .word       0x00008D90                   # mfhi        $s1 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C6B8u;
        goto label_26c6b8;
    }
    ctx->pc = 0x26C6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6B0u;
        // 0x26c6b4: 0x8d90  .word       0x00008D90                   # mfhi        $s1 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C6B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C6B8u;
label_26c6b8:
    // 0x26c6b8: 0x0  nop
    ctx->pc = 0x26c6b8u;
    // NOP
label_26c6bc:
    // 0x26c6bc: 0x0  nop
    ctx->pc = 0x26c6bcu;
    // NOP
label_26c6c0:
    // 0x26c6c0: 0x285a  .word       0x0000285A                   # div         $a1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c6c0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26c6c4:
    // 0x26c6c4: 0xcf70  tge         $zero, $zero, 829
    ctx->pc = 0x26c6c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c6c8:
    // 0x26c6c8: 0x0  nop
    ctx->pc = 0x26c6c8u;
    // NOP
label_26c6cc:
    // 0x26c6cc: 0x0  nop
    ctx->pc = 0x26c6ccu;
    // NOP
label_26c6d0:
    // 0x26c6d0: 0x2874  teq         $zero, $zero, 161
    ctx->pc = 0x26c6d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c6d4:
    // 0x26c6d4: 0xc350  .word       0x0000C350                   # mfhi        $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c6d4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26c6d8:
    // 0x26c6d8: 0x0  nop
    ctx->pc = 0x26c6d8u;
    // NOP
label_26c6dc:
    // 0x26c6dc: 0x0  nop
    ctx->pc = 0x26c6dcu;
    // NOP
label_26c6e0:
    // 0x26c6e0: 0x288d  break       0, 162
    ctx->pc = 0x26c6e0u;
    runtime->handleBreak(rdram, ctx);
label_26c6e4:
    // 0x26c6e4: 0x8a70  tge         $zero, $zero, 553
    ctx->pc = 0x26c6e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c6e8:
    // 0x26c6e8: 0x0  nop
    ctx->pc = 0x26c6e8u;
    // NOP
label_26c6ec:
    // 0x26c6ec: 0x0  nop
    ctx->pc = 0x26c6ecu;
    // NOP
label_26c6f0:
    // 0x26c6f0: 0x289f  .word       0x0000289F                   # ddivu       $a1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c6f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26C6F0 raw=0x0000289F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c6f4:
    // 0x26c6f4: 0xb680  sll         $s6, $zero, 26
    ctx->pc = 0x26c6f4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26c6f8:
    // 0x26c6f8: 0x0  nop
    ctx->pc = 0x26c6f8u;
    // NOP
label_26c6fc:
    // 0x26c6fc: 0x0  nop
    ctx->pc = 0x26c6fcu;
    // NOP
label_26c700:
    // 0x26c700: 0x28b6  tne         $zero, $zero, 162
    ctx->pc = 0x26c700u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c704:
    // 0x26c704: 0xa560  .word       0x0000A560                   # add         $s4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c704u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26c708:
    // 0x26c708: 0x0  nop
    ctx->pc = 0x26c708u;
    // NOP
label_26c70c:
    // 0x26c70c: 0x0  nop
    ctx->pc = 0x26c70cu;
    // NOP
label_26c710:
    // 0x26c710: 0x28cb  .word       0x000028CB                   # movn        $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c710u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_26c714:
    // 0x26c714: 0x7d10  .word       0x00007D10                   # mfhi        $t7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c714u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26c718:
    // 0x26c718: 0x0  nop
    ctx->pc = 0x26c718u;
    // NOP
label_26c71c:
    // 0x26c71c: 0x0  nop
    ctx->pc = 0x26c71cu;
    // NOP
label_26c720:
    // 0x26c720: 0x28db  .word       0x000028DB                   # divu        $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c720u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26c724:
    // 0x26c724: 0x9070  tge         $zero, $zero, 577
    ctx->pc = 0x26c724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c728:
    // 0x26c728: 0x0  nop
    ctx->pc = 0x26c728u;
    // NOP
label_26c72c:
    // 0x26c72c: 0x0  nop
    ctx->pc = 0x26c72cu;
    // NOP
label_26c730:
    // 0x26c730: 0x28ee  .word       0x000028EE                   # dsub        $a1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c730u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_26c734:
    // 0x26c734: 0x9bf0  tge         $zero, $zero, 623
    ctx->pc = 0x26c734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c738:
    // 0x26c738: 0x0  nop
    ctx->pc = 0x26c738u;
    // NOP
label_26c73c:
    // 0x26c73c: 0x0  nop
    ctx->pc = 0x26c73cu;
    // NOP
label_26c740:
    // 0x26c740: 0x2902  srl         $a1, $zero, 4
    ctx->pc = 0x26c740u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_26c744:
    // 0x26c744: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26c748:
    // 0x26c748: 0x0  nop
    ctx->pc = 0x26c748u;
    // NOP
label_26c74c:
    // 0x26c74c: 0x0  nop
    ctx->pc = 0x26c74cu;
    // NOP
label_26c750:
    // 0x26c750: 0x2917  .word       0x00002917                   # dsrav       $a1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c750u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c754:
    // 0x26c754: 0x8d30  tge         $zero, $zero, 564
    ctx->pc = 0x26c754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c758:
    // 0x26c758: 0x0  nop
    ctx->pc = 0x26c758u;
    // NOP
label_26c75c:
    // 0x26c75c: 0x0  nop
    ctx->pc = 0x26c75cu;
    // NOP
label_26c760:
    // 0x26c760: 0x2929  .word       0x00002929                   # mtsa        $zero # 00002900 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26c760u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26c764:
    // 0x26c764: 0x14a70  tge         $zero, $at, 297
    ctx->pc = 0x26c764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26c768:
    // 0x26c768: 0x0  nop
    ctx->pc = 0x26c768u;
    // NOP
label_26c76c:
    // 0x26c76c: 0x0  nop
    ctx->pc = 0x26c76cu;
    // NOP
label_26c770:
    // 0x26c770: 0x2953  .word       0x00002953                   # mtlo        $zero # 00002940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c770u;
    ctx->lo = GPR_U64(ctx, 0);
label_26c774:
    // 0x26c774: 0x97d0  .word       0x000097D0                   # mfhi        $s2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c774u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26c778:
    // 0x26c778: 0x0  nop
    ctx->pc = 0x26c778u;
    // NOP
label_26c77c:
    // 0x26c77c: 0x0  nop
    ctx->pc = 0x26c77cu;
    // NOP
label_26c780:
    // 0x26c780: 0x2966  .word       0x00002966                   # xor         $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26c784:
    // 0x26c784: 0xc5e0  .word       0x0000C5E0                   # add         $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_26c788:
    // 0x26c788: 0x0  nop
    ctx->pc = 0x26c788u;
    // NOP
label_26c78c:
    // 0x26c78c: 0x0  nop
    ctx->pc = 0x26c78cu;
    // NOP
label_26c790:
    // 0x26c790: 0x297f  dsra32      $a1, $zero, 5
    ctx->pc = 0x26c790u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (32 + 5));
label_26c794:
    // 0x26c794: 0xad20  .word       0x0000AD20                   # add         $s5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26c798:
    // 0x26c798: 0x0  nop
    ctx->pc = 0x26c798u;
    // NOP
label_26c79c:
    // 0x26c79c: 0x0  nop
    ctx->pc = 0x26c79cu;
    // NOP
label_26c7a0:
    // 0x26c7a0: 0x2995  .word       0x00002995                   # INVALID     $zero, $zero, 0x2995 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26C7A0 raw=0x00002995"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c7a4:
    // 0x26c7a4: 0x8700  sll         $s0, $zero, 28
    ctx->pc = 0x26c7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26c7a8:
    // 0x26c7a8: 0x0  nop
    ctx->pc = 0x26c7a8u;
    // NOP
label_26c7ac:
    // 0x26c7ac: 0x0  nop
    ctx->pc = 0x26c7acu;
    // NOP
label_26c7b0:
    // 0x26c7b0: 0x29a6  .word       0x000029A6                   # xor         $a1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26c7b4:
    // 0x26c7b4: 0x89e0  .word       0x000089E0                   # add         $s1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26c7b8:
    // 0x26c7b8: 0x0  nop
    ctx->pc = 0x26c7b8u;
    // NOP
label_26c7bc:
    // 0x26c7bc: 0x0  nop
    ctx->pc = 0x26c7bcu;
    // NOP
label_26c7c0:
    // 0x26c7c0: 0x29b8  dsll        $a1, $zero, 6
    ctx->pc = 0x26c7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 6);
label_26c7c4:
    // 0x26c7c4: 0x8830  tge         $zero, $zero, 544
    ctx->pc = 0x26c7c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c7c8:
    // 0x26c7c8: 0x0  nop
    ctx->pc = 0x26c7c8u;
    // NOP
label_26c7cc:
    // 0x26c7cc: 0x0  nop
    ctx->pc = 0x26c7ccu;
    // NOP
label_26c7d0:
    // 0x26c7d0: 0x29ca  .word       0x000029CA                   # movz        $a1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7d0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_26c7d4:
    // 0x26c7d4: 0x10790  .word       0x00010790                   # mfhi        $zero # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7d4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_26c7d8:
    // 0x26c7d8: 0x0  nop
    ctx->pc = 0x26c7d8u;
    // NOP
label_26c7dc:
    // 0x26c7dc: 0x0  nop
    ctx->pc = 0x26c7dcu;
    // NOP
label_26c7e0:
    // 0x26c7e0: 0x29eb  .word       0x000029EB                   # sltu        $a1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7e0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26c7e4:
    // 0x26c7e4: 0xa950  .word       0x0000A950                   # mfhi        $s5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7e4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26c7e8:
    // 0x26c7e8: 0x0  nop
    ctx->pc = 0x26c7e8u;
    // NOP
label_26c7ec:
    // 0x26c7ec: 0x0  nop
    ctx->pc = 0x26c7ecu;
    // NOP
label_26c7f0:
    // 0x26c7f0: 0x2a01  .word       0x00002A01                   # INVALID     $zero, $zero, 0x2A01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c7f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26C7F0 raw=0x00002A01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c7f4:
    // 0x26c7f4: 0xa880  sll         $s5, $zero, 2
    ctx->pc = 0x26c7f4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26c7f8:
    // 0x26c7f8: 0x0  nop
    ctx->pc = 0x26c7f8u;
    // NOP
label_26c7fc:
    // 0x26c7fc: 0x0  nop
    ctx->pc = 0x26c7fcu;
    // NOP
label_26c800:
    // 0x26c800: 0x2a17  .word       0x00002A17                   # dsrav       $a1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c800u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c804:
    // 0x26c804: 0x9b30  tge         $zero, $zero, 620
    ctx->pc = 0x26c804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c808:
    // 0x26c808: 0x0  nop
    ctx->pc = 0x26c808u;
    // NOP
label_26c80c:
    // 0x26c80c: 0x0  nop
    ctx->pc = 0x26c80cu;
    // NOP
label_26c810:
    // 0x26c810: 0x2a2b  .word       0x00002A2B                   # sltu        $a1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c810u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26c814:
    // 0x26c814: 0x76c0  sll         $t6, $zero, 27
    ctx->pc = 0x26c814u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26c818:
    // 0x26c818: 0x0  nop
    ctx->pc = 0x26c818u;
    // NOP
label_26c81c:
    // 0x26c81c: 0x0  nop
    ctx->pc = 0x26c81cu;
    // NOP
label_26c820:
    // 0x26c820: 0x2a3a  dsrl        $a1, $zero, 8
    ctx->pc = 0x26c820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) >> 8);
label_26c824:
    // 0x26c824: 0x79f0  tge         $zero, $zero, 487
    ctx->pc = 0x26c824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c828:
    // 0x26c828: 0x0  nop
    ctx->pc = 0x26c828u;
    // NOP
label_26c82c:
    // 0x26c82c: 0x0  nop
    ctx->pc = 0x26c82cu;
    // NOP
label_26c830:
    // 0x26c830: 0x2a4a  .word       0x00002A4A                   # movz        $a1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c830u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_26c834:
    // 0x26c834: 0x8110  .word       0x00008110                   # mfhi        $s0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c834u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26c838:
    // 0x26c838: 0x0  nop
    ctx->pc = 0x26c838u;
    // NOP
label_26c83c:
    // 0x26c83c: 0x0  nop
    ctx->pc = 0x26c83cu;
    // NOP
label_26c840:
    // 0x26c840: 0x2a5b  .word       0x00002A5B                   # divu        $a1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c840u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26c844:
    // 0x26c844: 0x1e70  tge         $zero, $zero, 121
    ctx->pc = 0x26c844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c848:
    // 0x26c848: 0x0  nop
    ctx->pc = 0x26c848u;
    // NOP
label_26c84c:
    // 0x26c84c: 0x0  nop
    ctx->pc = 0x26c84cu;
    // NOP
label_26c850:
    // 0x26c850: 0x2a5f  .word       0x00002A5F                   # ddivu       $a1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c850u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26C850 raw=0x00002A5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c854:
    // 0x26c854: 0x17a0  .word       0x000017A0                   # add         $v0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26c858:
    // 0x26c858: 0x0  nop
    ctx->pc = 0x26c858u;
    // NOP
label_26c85c:
    // 0x26c85c: 0x0  nop
    ctx->pc = 0x26c85cu;
    // NOP
label_26c860:
    // 0x26c860: 0x2a62  .word       0x00002A62                   # neg         $a1, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c860u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_26c864:
    // 0x26c864: 0x20d0  .word       0x000020D0                   # mfhi        $a0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c864u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_26c868:
    // 0x26c868: 0x0  nop
    ctx->pc = 0x26c868u;
    // NOP
label_26c86c:
    // 0x26c86c: 0x0  nop
    ctx->pc = 0x26c86cu;
    // NOP
label_26c870:
    // 0x26c870: 0x2a67  .word       0x00002A67                   # not         $a1, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c870u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26c874:
    // 0x26c874: 0x1ff0  tge         $zero, $zero, 127
    ctx->pc = 0x26c874u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c878:
    // 0x26c878: 0x0  nop
    ctx->pc = 0x26c878u;
    // NOP
label_26c87c:
    // 0x26c87c: 0x0  nop
    ctx->pc = 0x26c87cu;
    // NOP
label_26c880:
    // 0x26c880: 0x2a6b  .word       0x00002A6B                   # sltu        $a1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c880u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26c884:
    // 0x26c884: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x26c884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26c888:
    // 0x26c888: 0x0  nop
    ctx->pc = 0x26c888u;
    // NOP
label_26c88c:
    // 0x26c88c: 0x0  nop
    ctx->pc = 0x26c88cu;
    // NOP
label_26c890:
    // 0x26c890: 0x2a6f  .word       0x00002A6F                   # dsubu       $a1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26c894:
    // 0x26c894: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26c898:
    // 0x26c898: 0x0  nop
    ctx->pc = 0x26c898u;
    // NOP
label_26c89c:
    // 0x26c89c: 0x0  nop
    ctx->pc = 0x26c89cu;
    // NOP
label_26c8a0:
    // 0x26c8a0: 0x2a76  tne         $zero, $zero, 169
    ctx->pc = 0x26c8a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c8a4:
    // 0x26c8a4: 0x2ac0  sll         $a1, $zero, 11
    ctx->pc = 0x26c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26c8a8:
    // 0x26c8a8: 0x0  nop
    ctx->pc = 0x26c8a8u;
    // NOP
label_26c8ac:
    // 0x26c8ac: 0x0  nop
    ctx->pc = 0x26c8acu;
    // NOP
label_26c8b0:
    // 0x26c8b0: 0x2a7c  dsll32      $a1, $zero, 9
    ctx->pc = 0x26c8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (32 + 9));
label_26c8b4:
    // 0x26c8b4: 0x12d0  .word       0x000012D0                   # mfhi        $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c8b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_26c8b8:
    // 0x26c8b8: 0x0  nop
    ctx->pc = 0x26c8b8u;
    // NOP
label_26c8bc:
    // 0x26c8bc: 0x0  nop
    ctx->pc = 0x26c8bcu;
    // NOP
label_26c8c0:
    // 0x26c8c0: 0x2a7f  dsra32      $a1, $zero, 9
    ctx->pc = 0x26c8c0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (32 + 9));
label_26c8c4:
    // 0x26c8c4: 0x1620  .word       0x00001620                   # add         $v0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c8c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26c8c8:
    // 0x26c8c8: 0x0  nop
    ctx->pc = 0x26c8c8u;
    // NOP
label_26c8cc:
    // 0x26c8cc: 0x0  nop
    ctx->pc = 0x26c8ccu;
    // NOP
label_26c8d0:
    // 0x26c8d0: 0x2a82  srl         $a1, $zero, 10
    ctx->pc = 0x26c8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 0), 10));
label_26c8d4:
    // 0x26c8d4: 0x1550  .word       0x00001550                   # mfhi        $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c8d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_26c8d8:
    // 0x26c8d8: 0x0  nop
    ctx->pc = 0x26c8d8u;
    // NOP
label_26c8dc:
    // 0x26c8dc: 0x0  nop
    ctx->pc = 0x26c8dcu;
    // NOP
label_26c8e0:
    // 0x26c8e0: 0x2a85  .word       0x00002A85                   # INVALID     $zero, $zero, 0x2A85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c8e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26C8E0 raw=0x00002A85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c8e4:
    // 0x26c8e4: 0x1b90  .word       0x00001B90                   # mfhi        $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c8e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26c8e8:
    // 0x26c8e8: 0x0  nop
    ctx->pc = 0x26c8e8u;
    // NOP
label_26c8ec:
    // 0x26c8ec: 0x0  nop
    ctx->pc = 0x26c8ecu;
    // NOP
label_26c8f0:
    // 0x26c8f0: 0x2a89  .word       0x00002A89                   # jalr        $a1, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_26c8f4:
    if (ctx->pc == 0x26C8F4u) {
        ctx->pc = 0x26C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8F0u;
        // 0x26c8f4: 0x1a70  tge         $zero, $zero, 105 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8F8u;
        goto label_26c8f8;
    }
    ctx->pc = 0x26C8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x26C8F8u);
        ctx->pc = 0x26C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8F0u;
        // 0x26c8f4: 0x1a70  tge         $zero, $zero, 105 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C8F0u, 0x26C8F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C8F8u;
label_26c8f8:
    // 0x26c8f8: 0x0  nop
    ctx->pc = 0x26c8f8u;
    // NOP
label_26c8fc:
    // 0x26c8fc: 0x0  nop
    ctx->pc = 0x26c8fcu;
    // NOP
label_26c900:
    // 0x26c900: 0x2a8d  break       0, 170
    ctx->pc = 0x26c900u;
    runtime->handleBreak(rdram, ctx);
label_26c904:
    // 0x26c904: 0x3090  .word       0x00003090                   # mfhi        $a2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c904u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26c908:
    // 0x26c908: 0x0  nop
    ctx->pc = 0x26c908u;
    // NOP
label_26c90c:
    // 0x26c90c: 0x0  nop
    ctx->pc = 0x26c90cu;
    // NOP
label_26c910:
    // 0x26c910: 0x2a94  .word       0x00002A94                   # dsllv       $a1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26c914:
    // 0x26c914: 0x2b10  .word       0x00002B10                   # mfhi        $a1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c914u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26c918:
    // 0x26c918: 0x0  nop
    ctx->pc = 0x26c918u;
    // NOP
label_26c91c:
    // 0x26c91c: 0x0  nop
    ctx->pc = 0x26c91cu;
    // NOP
label_26c920:
    // 0x26c920: 0x2a9a  .word       0x00002A9A                   # div         $a1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c920u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26c924:
    // 0x26c924: 0x1650  .word       0x00001650                   # mfhi        $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c924u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_26c928:
    // 0x26c928: 0x0  nop
    ctx->pc = 0x26c928u;
    // NOP
label_26c92c:
    // 0x26c92c: 0x0  nop
    ctx->pc = 0x26c92cu;
    // NOP
label_26c930:
    // 0x26c930: 0x2a9d  .word       0x00002A9D                   # dmultu      $zero, $zero # 00002A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26C930 raw=0x00002A9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c934:
    // 0x26c934: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26c934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26c938:
    // 0x26c938: 0x0  nop
    ctx->pc = 0x26c938u;
    // NOP
label_26c93c:
    // 0x26c93c: 0x0  nop
    ctx->pc = 0x26c93cu;
    // NOP
label_26c940:
    // 0x26c940: 0x2aae  .word       0x00002AAE                   # dsub        $a1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c940u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_26c944:
    // 0x26c944: 0x1f00  sll         $v1, $zero, 28
    ctx->pc = 0x26c944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26c948:
    // 0x26c948: 0x0  nop
    ctx->pc = 0x26c948u;
    // NOP
label_26c94c:
    // 0x26c94c: 0x0  nop
    ctx->pc = 0x26c94cu;
    // NOP
label_26c950:
    // 0x26c950: 0x2ab2  tlt         $zero, $zero, 170
    ctx->pc = 0x26c950u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c954:
    // 0x26c954: 0x2560  .word       0x00002560                   # add         $a0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26c958:
    // 0x26c958: 0x0  nop
    ctx->pc = 0x26c958u;
    // NOP
label_26c95c:
    // 0x26c95c: 0x0  nop
    ctx->pc = 0x26c95cu;
    // NOP
label_26c960:
    // 0x26c960: 0x2ab7  .word       0x00002AB7                   # INVALID     $zero, $zero, 0x2AB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26C960 raw=0x00002AB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26c964:
    // 0x26c964: 0x23f0  tge         $zero, $zero, 143
    ctx->pc = 0x26c964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c968:
    // 0x26c968: 0x0  nop
    ctx->pc = 0x26c968u;
    // NOP
label_26c96c:
    // 0x26c96c: 0x0  nop
    ctx->pc = 0x26c96cu;
    // NOP
label_26c970:
    // 0x26c970: 0x2abc  dsll32      $a1, $zero, 10
    ctx->pc = 0x26c970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (32 + 10));
label_26c974:
    // 0x26c974: 0x1070  tge         $zero, $zero, 65
    ctx->pc = 0x26c974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c978:
    // 0x26c978: 0x0  nop
    ctx->pc = 0x26c978u;
    // NOP
label_26c97c:
    // 0x26c97c: 0x0  nop
    ctx->pc = 0x26c97cu;
    // NOP
label_26c980:
    // 0x26c980: 0x2abf  dsra32      $a1, $zero, 10
    ctx->pc = 0x26c980u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (32 + 10));
label_26c984:
    // 0x26c984: 0x2670  tge         $zero, $zero, 153
    ctx->pc = 0x26c984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26c988:
    // 0x26c988: 0x0  nop
    ctx->pc = 0x26c988u;
    // NOP
label_26c98c:
    // 0x26c98c: 0x0  nop
    ctx->pc = 0x26c98cu;
    // NOP
label_26c990:
    // 0x26c990: 0x2ac4  .word       0x00002AC4                   # sllv        $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c990u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26c994:
    // 0x26c994: 0x1c50  .word       0x00001C50                   # mfhi        $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c994u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26c998:
    // 0x26c998: 0x0  nop
    ctx->pc = 0x26c998u;
    // NOP
label_26c99c:
    // 0x26c99c: 0x0  nop
    ctx->pc = 0x26c99cu;
    // NOP
label_26c9a0:
    // 0x26c9a0: 0x2ac8  .word       0x00002AC8                   # jr          $zero # 00002AC0 <InstrIdType: CPU_SPECIAL>
label_26c9a4:
    if (ctx->pc == 0x26C9A4u) {
        ctx->pc = 0x26C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9A0u;
        // 0x26c9a4: 0x1070  tge         $zero, $zero, 65 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9A8u;
        goto label_26c9a8;
    }
    ctx->pc = 0x26C9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9A0u;
        // 0x26c9a4: 0x1070  tge         $zero, $zero, 65 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C9A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26C9A8u;
label_26c9a8:
    // 0x26c9a8: 0x0  nop
    ctx->pc = 0x26c9a8u;
    // NOP
label_26c9ac:
    // 0x26c9ac: 0x0  nop
    ctx->pc = 0x26c9acu;
    // NOP
label_26c9b0:
    // 0x26c9b0: 0x2acb  .word       0x00002ACB                   # movn        $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c9b0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_26c9b4:
    // 0x26c9b4: 0x1a90  .word       0x00001A90                   # mfhi        $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c9b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26c9b8:
    // 0x26c9b8: 0x0  nop
    ctx->pc = 0x26c9b8u;
    // NOP
label_26c9bc:
    // 0x26c9bc: 0x0  nop
    ctx->pc = 0x26c9bcu;
    // NOP
label_26c9c0:
    // 0x26c9c0: 0x2acf  .word       0x00002ACF                   # sync # 00002800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c9c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26c9c4:
    // 0x26c9c4: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c9c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26c9c8:
    // 0x26c9c8: 0x0  nop
    ctx->pc = 0x26c9c8u;
    // NOP
label_26c9cc:
    // 0x26c9cc: 0x0  nop
    ctx->pc = 0x26c9ccu;
    // NOP
label_26c9d0:
    // 0x26c9d0: 0x2ad3  .word       0x00002AD3                   # mtlo        $zero # 00002AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c9d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_26c9d4:
    // 0x26c9d4: 0x1c10  .word       0x00001C10                   # mfhi        $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c9d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26c9d8:
    // 0x26c9d8: 0x0  nop
    ctx->pc = 0x26c9d8u;
    // NOP
label_26c9dc:
    // 0x26c9dc: 0x0  nop
    ctx->pc = 0x26c9dcu;
    // NOP
label_26c9e0:
    // 0x26c9e0: 0x2ad7  .word       0x00002AD7                   # dsrav       $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c9e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26c9e4:
    // 0x26c9e4: 0x16d0  .word       0x000016D0                   # mfhi        $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c9e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_26c9e8:
    // 0x26c9e8: 0x0  nop
    ctx->pc = 0x26c9e8u;
    // NOP
label_26c9ec:
    // 0x26c9ec: 0x0  nop
    ctx->pc = 0x26c9ecu;
    // NOP
label_26c9f0:
    // 0x26c9f0: 0x2ada  .word       0x00002ADA                   # div         $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26c9f0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26c9f4:
    // 0x26c9f4: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x26c9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26c9f8:
    // 0x26c9f8: 0x0  nop
    ctx->pc = 0x26c9f8u;
    // NOP
label_26c9fc:
    // 0x26c9fc: 0x0  nop
    ctx->pc = 0x26c9fcu;
    // NOP
label_26ca00:
    // 0x26ca00: 0x2ae1  .word       0x00002AE1                   # addu        $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26ca04:
    // 0x26ca04: 0xf80  sll         $at, $zero, 30
    ctx->pc = 0x26ca04u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26ca08:
    // 0x26ca08: 0x0  nop
    ctx->pc = 0x26ca08u;
    // NOP
label_26ca0c:
    // 0x26ca0c: 0x0  nop
    ctx->pc = 0x26ca0cu;
    // NOP
label_26ca10:
    // 0x26ca10: 0x2ae3  .word       0x00002AE3                   # negu        $a1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26ca14:
    // 0x26ca14: 0x1ac0  sll         $v1, $zero, 11
    ctx->pc = 0x26ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26ca18:
    // 0x26ca18: 0x0  nop
    ctx->pc = 0x26ca18u;
    // NOP
label_26ca1c:
    // 0x26ca1c: 0x0  nop
    ctx->pc = 0x26ca1cu;
    // NOP
label_26ca20:
    // 0x26ca20: 0x2ae7  .word       0x00002AE7                   # not         $a1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca20u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26ca24:
    // 0x26ca24: 0x13c0  sll         $v0, $zero, 15
    ctx->pc = 0x26ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_26ca28:
    // 0x26ca28: 0x0  nop
    ctx->pc = 0x26ca28u;
    // NOP
label_26ca2c:
    // 0x26ca2c: 0x0  nop
    ctx->pc = 0x26ca2cu;
    // NOP
label_26ca30:
    // 0x26ca30: 0x2aea  .word       0x00002AEA                   # slt         $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca30u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26ca34:
    // 0x26ca34: 0x1b90  .word       0x00001B90                   # mfhi        $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26ca38:
    // 0x26ca38: 0x0  nop
    ctx->pc = 0x26ca38u;
    // NOP
label_26ca3c:
    // 0x26ca3c: 0x0  nop
    ctx->pc = 0x26ca3cu;
    // NOP
label_26ca40:
    // 0x26ca40: 0x2aee  .word       0x00002AEE                   # dsub        $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_26ca44:
    // 0x26ca44: 0x1990  .word       0x00001990                   # mfhi        $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca44u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26ca48:
    // 0x26ca48: 0x0  nop
    ctx->pc = 0x26ca48u;
    // NOP
label_26ca4c:
    // 0x26ca4c: 0x0  nop
    ctx->pc = 0x26ca4cu;
    // NOP
label_26ca50:
    // 0x26ca50: 0x2af2  tlt         $zero, $zero, 171
    ctx->pc = 0x26ca50u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ca54:
    // 0x26ca54: 0x3430  tge         $zero, $zero, 208
    ctx->pc = 0x26ca54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ca58:
    // 0x26ca58: 0x0  nop
    ctx->pc = 0x26ca58u;
    // NOP
label_26ca5c:
    // 0x26ca5c: 0x0  nop
    ctx->pc = 0x26ca5cu;
    // NOP
label_26ca60:
    // 0x26ca60: 0x2af9  .word       0x00002AF9                   # INVALID     $zero, $zero, 0x2AF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26CA60 raw=0x00002AF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ca64:
    // 0x26ca64: 0x2850  .word       0x00002850                   # mfhi        $a1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca64u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26ca68:
    // 0x26ca68: 0x0  nop
    ctx->pc = 0x26ca68u;
    // NOP
label_26ca6c:
    // 0x26ca6c: 0x0  nop
    ctx->pc = 0x26ca6cu;
    // NOP
label_26ca70:
    // 0x26ca70: 0x2aff  dsra32      $a1, $zero, 11
    ctx->pc = 0x26ca70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (32 + 11));
label_26ca74:
    // 0x26ca74: 0x2590  .word       0x00002590                   # mfhi        $a0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_26ca78:
    // 0x26ca78: 0x0  nop
    ctx->pc = 0x26ca78u;
    // NOP
label_26ca7c:
    // 0x26ca7c: 0x0  nop
    ctx->pc = 0x26ca7cu;
    // NOP
label_26ca80:
    // 0x26ca80: 0x2b04  .word       0x00002B04                   # sllv        $a1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26ca84:
    // 0x26ca84: 0x1600  sll         $v0, $zero, 24
    ctx->pc = 0x26ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_26ca88:
    // 0x26ca88: 0x0  nop
    ctx->pc = 0x26ca88u;
    // NOP
label_26ca8c:
    // 0x26ca8c: 0x0  nop
    ctx->pc = 0x26ca8cu;
    // NOP
label_26ca90:
    // 0x26ca90: 0x2b07  .word       0x00002B07                   # srav        $a1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26ca94:
    // 0x26ca94: 0x1da0  .word       0x00001DA0                   # add         $v1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ca94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26ca98:
    // 0x26ca98: 0x0  nop
    ctx->pc = 0x26ca98u;
    // NOP
label_26ca9c:
    // 0x26ca9c: 0x0  nop
    ctx->pc = 0x26ca9cu;
    // NOP
label_26caa0:
    // 0x26caa0: 0x2b0b  .word       0x00002B0B                   # movn        $a1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26caa0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_26caa4:
    // 0x26caa4: 0x1b20  .word       0x00001B20                   # add         $v1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26caa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26caa8:
    // 0x26caa8: 0x0  nop
    ctx->pc = 0x26caa8u;
    // NOP
label_26caac:
    // 0x26caac: 0x0  nop
    ctx->pc = 0x26caacu;
    // NOP
label_26cab0:
    // 0x26cab0: 0x2b0f  .word       0x00002B0F                   # sync # 00002800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cab0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26cab4:
    // 0x26cab4: 0x15b0  tge         $zero, $zero, 86
    ctx->pc = 0x26cab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cab8:
    // 0x26cab8: 0x0  nop
    ctx->pc = 0x26cab8u;
    // NOP
label_26cabc:
    // 0x26cabc: 0x0  nop
    ctx->pc = 0x26cabcu;
    // NOP
label_26cac0:
    // 0x26cac0: 0x2b12  .word       0x00002B12                   # mflo        $a1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cac0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_26cac4:
    // 0x26cac4: 0x10c0  sll         $v0, $zero, 3
    ctx->pc = 0x26cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26cac8:
    // 0x26cac8: 0x0  nop
    ctx->pc = 0x26cac8u;
    // NOP
label_26cacc:
    // 0x26cacc: 0x0  nop
    ctx->pc = 0x26caccu;
    // NOP
label_26cad0:
    // 0x26cad0: 0x2b15  .word       0x00002B15                   # INVALID     $zero, $zero, 0x2B15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26CAD0 raw=0x00002B15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26cad4:
    // 0x26cad4: 0x4d50  .word       0x00004D50                   # mfhi        $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cad4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26cad8:
    // 0x26cad8: 0x0  nop
    ctx->pc = 0x26cad8u;
    // NOP
label_26cadc:
    // 0x26cadc: 0x0  nop
    ctx->pc = 0x26cadcu;
    // NOP
label_26cae0:
    // 0x26cae0: 0x2b1f  .word       0x00002B1F                   # ddivu       $a1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26CAE0 raw=0x00002B1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26cae4:
    // 0x26cae4: 0x53a0  .word       0x000053A0                   # add         $t2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26cae8:
    // 0x26cae8: 0x0  nop
    ctx->pc = 0x26cae8u;
    // NOP
label_26caec:
    // 0x26caec: 0x0  nop
    ctx->pc = 0x26caecu;
    // NOP
label_26caf0:
    // 0x26caf0: 0x2b2a  .word       0x00002B2A                   # slt         $a1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26caf0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26caf4:
    // 0x26caf4: 0x5850  .word       0x00005850                   # mfhi        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26caf4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26caf8:
    // 0x26caf8: 0x0  nop
    ctx->pc = 0x26caf8u;
    // NOP
label_26cafc:
    // 0x26cafc: 0x0  nop
    ctx->pc = 0x26cafcu;
    // NOP
label_26cb00:
    // 0x26cb00: 0x2b36  tne         $zero, $zero, 172
    ctx->pc = 0x26cb00u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cb04:
    // 0x26cb04: 0x3070  tge         $zero, $zero, 193
    ctx->pc = 0x26cb04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cb08:
    // 0x26cb08: 0x0  nop
    ctx->pc = 0x26cb08u;
    // NOP
label_26cb0c:
    // 0x26cb0c: 0x0  nop
    ctx->pc = 0x26cb0cu;
    // NOP
label_26cb10:
    // 0x26cb10: 0x2b3d  .word       0x00002B3D                   # INVALID     $zero, $zero, 0x2B3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cb10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26CB10 raw=0x00002B3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26cb14:
    // 0x26cb14: 0x4110  .word       0x00004110                   # mfhi        $t0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cb14u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26cb18:
    // 0x26cb18: 0x0  nop
    ctx->pc = 0x26cb18u;
    // NOP
label_26cb1c:
    // 0x26cb1c: 0x0  nop
    ctx->pc = 0x26cb1cu;
    // NOP
label_26cb20:
    // 0x26cb20: 0x2b46  .word       0x00002B46                   # srlv        $a1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26cb24:
    // 0x26cb24: 0x5ee0  .word       0x00005EE0                   # add         $t3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cb24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26cb28:
    // 0x26cb28: 0x0  nop
    ctx->pc = 0x26cb28u;
    // NOP
label_26cb2c:
    // 0x26cb2c: 0x0  nop
    ctx->pc = 0x26cb2cu;
    // NOP
label_26cb30:
    // 0x26cb30: 0x2b52  .word       0x00002B52                   # mflo        $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cb30u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_26cb34:
    // 0x26cb34: 0x4020  add         $t0, $zero, $zero
    ctx->pc = 0x26cb34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26cb38:
    // 0x26cb38: 0x0  nop
    ctx->pc = 0x26cb38u;
    // NOP
label_26cb3c:
    // 0x26cb3c: 0x0  nop
    ctx->pc = 0x26cb3cu;
    // NOP
label_26cb40:
    // 0x26cb40: 0x2b5b  .word       0x00002B5B                   # divu        $a1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cb40u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26cb44:
    // 0x26cb44: 0x3d10  .word       0x00003D10                   # mfhi        $a3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cb44u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26cb48:
    // 0x26cb48: 0x0  nop
    ctx->pc = 0x26cb48u;
    // NOP
label_26cb4c:
    // 0x26cb4c: 0x0  nop
    ctx->pc = 0x26cb4cu;
    // NOP
label_26cb50:
    // 0x26cb50: 0x2b63  .word       0x00002B63                   # negu        $a1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26cb54:
    // 0x26cb54: 0x54c0  sll         $t2, $zero, 19
    ctx->pc = 0x26cb54u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26cb58:
    // 0x26cb58: 0x0  nop
    ctx->pc = 0x26cb58u;
    // NOP
label_26cb5c:
    // 0x26cb5c: 0x0  nop
    ctx->pc = 0x26cb5cu;
    // NOP
label_26cb60:
    // 0x26cb60: 0x2b6e  .word       0x00002B6E                   # dsub        $a1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cb60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_26cb64:
    // 0x26cb64: 0x4480  sll         $t0, $zero, 18
    ctx->pc = 0x26cb64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26cb68:
    // 0x26cb68: 0x0  nop
    ctx->pc = 0x26cb68u;
    // NOP
label_26cb6c:
    // 0x26cb6c: 0x0  nop
    ctx->pc = 0x26cb6cu;
    // NOP
label_26cb70:
    // 0x26cb70: 0x2b77  .word       0x00002B77                   # INVALID     $zero, $zero, 0x2B77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cb70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26CB70 raw=0x00002B77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26cb74:
    // 0x26cb74: 0x5cd0  .word       0x00005CD0                   # mfhi        $t3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cb74u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26cb78:
    // 0x26cb78: 0x0  nop
    ctx->pc = 0x26cb78u;
    // NOP
label_26cb7c:
    // 0x26cb7c: 0x0  nop
    ctx->pc = 0x26cb7cu;
    // NOP
label_26cb80:
    // 0x26cb80: 0x2b83  sra         $a1, $zero, 14
    ctx->pc = 0x26cb80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 0), 14));
label_26cb84:
    // 0x26cb84: 0x4630  tge         $zero, $zero, 280
    ctx->pc = 0x26cb84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cb88:
    // 0x26cb88: 0x0  nop
    ctx->pc = 0x26cb88u;
    // NOP
label_26cb8c:
    // 0x26cb8c: 0x0  nop
    ctx->pc = 0x26cb8cu;
    // NOP
label_26cb90:
    // 0x26cb90: 0x2b8c  syscall     174
    ctx->pc = 0x26cb90u;
    ctx->pc = 0x26CB94u;
runtime->handleSyscall(rdram, ctx, 0xAEu);
label_26cb94:
    // 0x26cb94: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x26cb94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26cb98:
    // 0x26cb98: 0x0  nop
    ctx->pc = 0x26cb98u;
    // NOP
label_26cb9c:
    // 0x26cb9c: 0x0  nop
    ctx->pc = 0x26cb9cu;
    // NOP
label_26cba0:
    // 0x26cba0: 0x2b94  .word       0x00002B94                   # dsllv       $a1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26cba4:
    // 0x26cba4: 0x4630  tge         $zero, $zero, 280
    ctx->pc = 0x26cba4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cba8:
    // 0x26cba8: 0x0  nop
    ctx->pc = 0x26cba8u;
    // NOP
label_26cbac:
    // 0x26cbac: 0x0  nop
    ctx->pc = 0x26cbacu;
    // NOP
label_26cbb0:
    // 0x26cbb0: 0x2b9d  .word       0x00002B9D                   # dmultu      $zero, $zero # 00002B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cbb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26CBB0 raw=0x00002B9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26cbb4:
    // 0x26cbb4: 0x4af0  tge         $zero, $zero, 299
    ctx->pc = 0x26cbb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cbb8:
    // 0x26cbb8: 0x0  nop
    ctx->pc = 0x26cbb8u;
    // NOP
label_26cbbc:
    // 0x26cbbc: 0x0  nop
    ctx->pc = 0x26cbbcu;
    // NOP
label_26cbc0:
    // 0x26cbc0: 0x2ba7  .word       0x00002BA7                   # not         $a1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cbc0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26cbc4:
    // 0x26cbc4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26cbc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26cbc8:
    // 0x26cbc8: 0x0  nop
    ctx->pc = 0x26cbc8u;
    // NOP
label_26cbcc:
    // 0x26cbcc: 0x0  nop
    ctx->pc = 0x26cbccu;
    // NOP
label_26cbd0:
    // 0x26cbd0: 0x2bb8  dsll        $a1, $zero, 14
    ctx->pc = 0x26cbd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 14);
label_26cbd4:
    // 0x26cbd4: 0x4ce0  .word       0x00004CE0                   # add         $t1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cbd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26cbd8:
    // 0x26cbd8: 0x0  nop
    ctx->pc = 0x26cbd8u;
    // NOP
label_26cbdc:
    // 0x26cbdc: 0x0  nop
    ctx->pc = 0x26cbdcu;
    // NOP
label_26cbe0:
    // 0x26cbe0: 0x2bc2  srl         $a1, $zero, 15
    ctx->pc = 0x26cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_26cbe4:
    // 0x26cbe4: 0x74e0  .word       0x000074E0                   # add         $t6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cbe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26cbe8:
    // 0x26cbe8: 0x0  nop
    ctx->pc = 0x26cbe8u;
    // NOP
label_26cbec:
    // 0x26cbec: 0x0  nop
    ctx->pc = 0x26cbecu;
    // NOP
label_26cbf0:
    // 0x26cbf0: 0x2bd1  .word       0x00002BD1                   # mthi        $zero # 00002BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cbf0u;
    ctx->hi = GPR_U64(ctx, 0);
label_26cbf4:
    // 0x26cbf4: 0x3950  .word       0x00003950                   # mfhi        $a3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cbf4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26cbf8:
    // 0x26cbf8: 0x0  nop
    ctx->pc = 0x26cbf8u;
    // NOP
label_26cbfc:
    // 0x26cbfc: 0x0  nop
    ctx->pc = 0x26cbfcu;
    // NOP
label_26cc00:
    // 0x26cc00: 0x2bd9  .word       0x00002BD9                   # multu       $zero, $zero # 00002BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cc00u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_26cc04:
    // 0x26cc04: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cc04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26cc08:
    // 0x26cc08: 0x0  nop
    ctx->pc = 0x26cc08u;
    // NOP
label_26cc0c:
    // 0x26cc0c: 0x0  nop
    ctx->pc = 0x26cc0cu;
    // NOP
label_26cc10:
    // 0x26cc10: 0x2be0  .word       0x00002BE0                   # add         $a1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cc10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26cc14:
    // 0x26cc14: 0x8720  .word       0x00008720                   # add         $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cc14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26cc18:
    // 0x26cc18: 0x0  nop
    ctx->pc = 0x26cc18u;
    // NOP
label_26cc1c:
    // 0x26cc1c: 0x0  nop
    ctx->pc = 0x26cc1cu;
    // NOP
label_26cc20:
    // 0x26cc20: 0x2bf1  tgeu        $zero, $zero, 175
    ctx->pc = 0x26cc20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cc24:
    // 0x26cc24: 0x6010  mfhi        $t4
    ctx->pc = 0x26cc24u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26cc28:
    // 0x26cc28: 0x0  nop
    ctx->pc = 0x26cc28u;
    // NOP
label_26cc2c:
    // 0x26cc2c: 0x0  nop
    ctx->pc = 0x26cc2cu;
    // NOP
label_26cc30:
    // 0x26cc30: 0x2bfe  dsrl32      $a1, $zero, 15
    ctx->pc = 0x26cc30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) >> (32 + 15));
label_26cc34:
    // 0x26cc34: 0x3e80  sll         $a3, $zero, 26
    ctx->pc = 0x26cc34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26cc38:
    // 0x26cc38: 0x0  nop
    ctx->pc = 0x26cc38u;
    // NOP
label_26cc3c:
    // 0x26cc3c: 0x0  nop
    ctx->pc = 0x26cc3cu;
    // NOP
label_26cc40:
    // 0x26cc40: 0x2c06  .word       0x00002C06                   # srlv        $a1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cc40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26cc44:
    // 0x26cc44: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cc44u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26cc48:
    // 0x26cc48: 0x0  nop
    ctx->pc = 0x26cc48u;
    // NOP
label_26cc4c:
    // 0x26cc4c: 0x0  nop
    ctx->pc = 0x26cc4cu;
    // NOP
label_26cc50:
    // 0x26cc50: 0x2c0f  .word       0x00002C0F                   # sync.p # 00002800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cc50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26cc54:
    // 0x26cc54: 0x68c0  sll         $t5, $zero, 3
    ctx->pc = 0x26cc54u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26cc58:
    // 0x26cc58: 0x0  nop
    ctx->pc = 0x26cc58u;
    // NOP
label_26cc5c:
    // 0x26cc5c: 0x0  nop
    ctx->pc = 0x26cc5cu;
    // NOP
label_26cc60:
    // 0x26cc60: 0x2c1d  .word       0x00002C1D                   # dmultu      $zero, $zero # 00002C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cc60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26CC60 raw=0x00002C1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26cc64:
    // 0x26cc64: 0x4a70  tge         $zero, $zero, 297
    ctx->pc = 0x26cc64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cc68:
    // 0x26cc68: 0x0  nop
    ctx->pc = 0x26cc68u;
    // NOP
label_26cc6c:
    // 0x26cc6c: 0x0  nop
    ctx->pc = 0x26cc6cu;
    // NOP
label_26cc70:
    // 0x26cc70: 0x2c27  .word       0x00002C27                   # not         $a1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cc70u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26cc74:
    // 0x26cc74: 0x4cf0  tge         $zero, $zero, 307
    ctx->pc = 0x26cc74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cc78:
    // 0x26cc78: 0x0  nop
    ctx->pc = 0x26cc78u;
    // NOP
label_26cc7c:
    // 0x26cc7c: 0x0  nop
    ctx->pc = 0x26cc7cu;
    // NOP
label_26cc80:
    // 0x26cc80: 0x2c31  tgeu        $zero, $zero, 176
    ctx->pc = 0x26cc80u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cc84:
    // 0x26cc84: 0x6cd0  .word       0x00006CD0                   # mfhi        $t5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cc84u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26cc88:
    // 0x26cc88: 0x0  nop
    ctx->pc = 0x26cc88u;
    // NOP
label_26cc8c:
    // 0x26cc8c: 0x0  nop
    ctx->pc = 0x26cc8cu;
    // NOP
label_26cc90:
    // 0x26cc90: 0x2c3f  dsra32      $a1, $zero, 16
    ctx->pc = 0x26cc90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> (32 + 16));
label_26cc94:
    // 0x26cc94: 0x4240  sll         $t0, $zero, 9
    ctx->pc = 0x26cc94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26cc98:
    // 0x26cc98: 0x0  nop
    ctx->pc = 0x26cc98u;
    // NOP
label_26cc9c:
    // 0x26cc9c: 0x0  nop
    ctx->pc = 0x26cc9cu;
    // NOP
label_26cca0:
    // 0x26cca0: 0x2c48  .word       0x00002C48                   # jr          $zero # 00002C40 <InstrIdType: CPU_SPECIAL>
label_26cca4:
    if (ctx->pc == 0x26CCA4u) {
        ctx->pc = 0x26CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCA0u;
        // 0x26cca4: 0x2d50  .word       0x00002D50                   # mfhi        $a1 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CCA8u;
        goto label_26cca8;
    }
    ctx->pc = 0x26CCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CCA0u;
        // 0x26cca4: 0x2d50  .word       0x00002D50                   # mfhi        $a1 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CCA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26CCA8u;
label_26cca8:
    // 0x26cca8: 0x0  nop
    ctx->pc = 0x26cca8u;
    // NOP
label_26ccac:
    // 0x26ccac: 0x0  nop
    ctx->pc = 0x26ccacu;
    // NOP
label_26ccb0:
    // 0x26ccb0: 0x2c4e  .word       0x00002C4E                   # INVALID     $zero, $zero, 0x2C4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ccb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26CCB0 raw=0x00002C4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ccb4:
    // 0x26ccb4: 0x3f20  .word       0x00003F20                   # add         $a3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ccb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26ccb8:
    // 0x26ccb8: 0x0  nop
    ctx->pc = 0x26ccb8u;
    // NOP
label_26ccbc:
    // 0x26ccbc: 0x0  nop
    ctx->pc = 0x26ccbcu;
    // NOP
label_26ccc0:
    // 0x26ccc0: 0x2c56  .word       0x00002C56                   # dsrlv       $a1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ccc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26ccc4:
    // 0x26ccc4: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ccc4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26ccc8:
    // 0x26ccc8: 0x0  nop
    ctx->pc = 0x26ccc8u;
    // NOP
label_26cccc:
    // 0x26cccc: 0x0  nop
    ctx->pc = 0x26ccccu;
    // NOP
label_26ccd0:
    // 0x26ccd0: 0x2c64  .word       0x00002C64                   # and         $a1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ccd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26ccd4:
    // 0x26ccd4: 0x3a30  tge         $zero, $zero, 232
    ctx->pc = 0x26ccd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ccd8:
    // 0x26ccd8: 0x0  nop
    ctx->pc = 0x26ccd8u;
    // NOP
label_26ccdc:
    // 0x26ccdc: 0x0  nop
    ctx->pc = 0x26ccdcu;
    // NOP
label_26cce0:
    // 0x26cce0: 0x2c6c  .word       0x00002C6C                   # dadd        $a1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cce0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_26cce4:
    // 0x26cce4: 0x4ea0  .word       0x00004EA0                   # add         $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26cce8:
    // 0x26cce8: 0x0  nop
    ctx->pc = 0x26cce8u;
    // NOP
label_26ccec:
    // 0x26ccec: 0x0  nop
    ctx->pc = 0x26ccecu;
    // NOP
label_26ccf0:
    // 0x26ccf0: 0x2c76  tne         $zero, $zero, 177
    ctx->pc = 0x26ccf0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ccf4:
    // 0x26ccf4: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x26ccf4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26ccf8:
    // 0x26ccf8: 0x0  nop
    ctx->pc = 0x26ccf8u;
    // NOP
label_26ccfc:
    // 0x26ccfc: 0x0  nop
    ctx->pc = 0x26ccfcu;
    // NOP
label_26cd00:
    // 0x26cd00: 0x2c83  sra         $a1, $zero, 18
    ctx->pc = 0x26cd00u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 0), 18));
label_26cd04:
    // 0x26cd04: 0x5da0  .word       0x00005DA0                   # add         $t3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cd04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26cd08:
    // 0x26cd08: 0x0  nop
    ctx->pc = 0x26cd08u;
    // NOP
label_26cd0c:
    // 0x26cd0c: 0x0  nop
    ctx->pc = 0x26cd0cu;
    // NOP
label_26cd10:
    // 0x26cd10: 0x2c8f  .word       0x00002C8F                   # sync.p # 00002800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cd10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26cd14:
    // 0x26cd14: 0x5430  tge         $zero, $zero, 336
    ctx->pc = 0x26cd14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cd18:
    // 0x26cd18: 0x0  nop
    ctx->pc = 0x26cd18u;
    // NOP
label_26cd1c:
    // 0x26cd1c: 0x0  nop
    ctx->pc = 0x26cd1cu;
    // NOP
label_26cd20:
    // 0x26cd20: 0x2c9a  .word       0x00002C9A                   # div         $a1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cd20u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26cd24:
    // 0x26cd24: 0x4660  .word       0x00004660                   # add         $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cd24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26cd28:
    // 0x26cd28: 0x0  nop
    ctx->pc = 0x26cd28u;
    // NOP
label_26cd2c:
    // 0x26cd2c: 0x0  nop
    ctx->pc = 0x26cd2cu;
    // NOP
label_26cd30:
    // 0x26cd30: 0x2ca3  .word       0x00002CA3                   # negu        $a1, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26cd34:
    // 0x26cd34: 0x47f0  tge         $zero, $zero, 287
    ctx->pc = 0x26cd34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cd38:
    // 0x26cd38: 0x0  nop
    ctx->pc = 0x26cd38u;
    // NOP
label_26cd3c:
    // 0x26cd3c: 0x0  nop
    ctx->pc = 0x26cd3cu;
    // NOP
label_26cd40:
    // 0x26cd40: 0x2cac  .word       0x00002CAC                   # dadd        $a1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cd40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_26cd44:
    // 0x26cd44: 0x3d20  .word       0x00003D20                   # add         $a3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cd44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26cd48:
    // 0x26cd48: 0x0  nop
    ctx->pc = 0x26cd48u;
    // NOP
label_26cd4c:
    // 0x26cd4c: 0x0  nop
    ctx->pc = 0x26cd4cu;
    // NOP
label_26cd50:
    // 0x26cd50: 0x2cb4  teq         $zero, $zero, 178
    ctx->pc = 0x26cd50u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cd54:
    // 0x26cd54: 0x48b0  tge         $zero, $zero, 290
    ctx->pc = 0x26cd54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26cd58:
    // 0x26cd58: 0x0  nop
    ctx->pc = 0x26cd58u;
    // NOP
label_26cd5c:
    // 0x26cd5c: 0x0  nop
    ctx->pc = 0x26cd5cu;
    // NOP
label_26cd60:
    // 0x26cd60: 0x2cbe  dsrl32      $a1, $zero, 18
    ctx->pc = 0x26cd60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) >> (32 + 18));
label_26cd64:
    // 0x26cd64: 0xa990  .word       0x0000A990                   # mfhi        $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cd64u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26cd68:
    // 0x26cd68: 0x0  nop
    ctx->pc = 0x26cd68u;
    // NOP
label_26cd6c:
    // 0x26cd6c: 0x0  nop
    ctx->pc = 0x26cd6cu;
    // NOP
label_26cd70:
    // 0x26cd70: 0x2cd4  .word       0x00002CD4                   # dsllv       $a1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26cd70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26cd74:
    // 0x26cd74: 0xa600  sll         $s4, $zero, 24
    ctx->pc = 0x26cd74u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x26cd78u;
    return;
}
