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


void FUN_0014eba0_part455(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22c680u: goto label_22c680;
        case 0x22c684u: goto label_22c684;
        case 0x22c688u: goto label_22c688;
        case 0x22c68cu: goto label_22c68c;
        case 0x22c690u: goto label_22c690;
        case 0x22c694u: goto label_22c694;
        case 0x22c698u: goto label_22c698;
        case 0x22c69cu: goto label_22c69c;
        case 0x22c6a0u: goto label_22c6a0;
        case 0x22c6a4u: goto label_22c6a4;
        case 0x22c6a8u: goto label_22c6a8;
        case 0x22c6acu: goto label_22c6ac;
        case 0x22c6b0u: goto label_22c6b0;
        case 0x22c6b4u: goto label_22c6b4;
        case 0x22c6b8u: goto label_22c6b8;
        case 0x22c6bcu: goto label_22c6bc;
        case 0x22c6c0u: goto label_22c6c0;
        case 0x22c6c4u: goto label_22c6c4;
        case 0x22c6c8u: goto label_22c6c8;
        case 0x22c6ccu: goto label_22c6cc;
        case 0x22c6d0u: goto label_22c6d0;
        case 0x22c6d4u: goto label_22c6d4;
        case 0x22c6d8u: goto label_22c6d8;
        case 0x22c6dcu: goto label_22c6dc;
        case 0x22c6e0u: goto label_22c6e0;
        case 0x22c6e4u: goto label_22c6e4;
        case 0x22c6e8u: goto label_22c6e8;
        case 0x22c6ecu: goto label_22c6ec;
        case 0x22c6f0u: goto label_22c6f0;
        case 0x22c6f4u: goto label_22c6f4;
        case 0x22c6f8u: goto label_22c6f8;
        case 0x22c6fcu: goto label_22c6fc;
        case 0x22c700u: goto label_22c700;
        case 0x22c704u: goto label_22c704;
        case 0x22c708u: goto label_22c708;
        case 0x22c70cu: goto label_22c70c;
        case 0x22c710u: goto label_22c710;
        case 0x22c714u: goto label_22c714;
        case 0x22c718u: goto label_22c718;
        case 0x22c71cu: goto label_22c71c;
        case 0x22c720u: goto label_22c720;
        case 0x22c724u: goto label_22c724;
        case 0x22c728u: goto label_22c728;
        case 0x22c72cu: goto label_22c72c;
        case 0x22c730u: goto label_22c730;
        case 0x22c734u: goto label_22c734;
        case 0x22c738u: goto label_22c738;
        case 0x22c73cu: goto label_22c73c;
        case 0x22c740u: goto label_22c740;
        case 0x22c744u: goto label_22c744;
        case 0x22c748u: goto label_22c748;
        case 0x22c74cu: goto label_22c74c;
        case 0x22c750u: goto label_22c750;
        case 0x22c754u: goto label_22c754;
        case 0x22c758u: goto label_22c758;
        case 0x22c75cu: goto label_22c75c;
        case 0x22c760u: goto label_22c760;
        case 0x22c764u: goto label_22c764;
        case 0x22c768u: goto label_22c768;
        case 0x22c76cu: goto label_22c76c;
        case 0x22c770u: goto label_22c770;
        case 0x22c774u: goto label_22c774;
        case 0x22c778u: goto label_22c778;
        case 0x22c77cu: goto label_22c77c;
        case 0x22c780u: goto label_22c780;
        case 0x22c784u: goto label_22c784;
        case 0x22c788u: goto label_22c788;
        case 0x22c78cu: goto label_22c78c;
        case 0x22c790u: goto label_22c790;
        case 0x22c794u: goto label_22c794;
        case 0x22c798u: goto label_22c798;
        case 0x22c79cu: goto label_22c79c;
        case 0x22c7a0u: goto label_22c7a0;
        case 0x22c7a4u: goto label_22c7a4;
        case 0x22c7a8u: goto label_22c7a8;
        case 0x22c7acu: goto label_22c7ac;
        case 0x22c7b0u: goto label_22c7b0;
        case 0x22c7b4u: goto label_22c7b4;
        case 0x22c7b8u: goto label_22c7b8;
        case 0x22c7bcu: goto label_22c7bc;
        case 0x22c7c0u: goto label_22c7c0;
        case 0x22c7c4u: goto label_22c7c4;
        case 0x22c7c8u: goto label_22c7c8;
        case 0x22c7ccu: goto label_22c7cc;
        case 0x22c7d0u: goto label_22c7d0;
        case 0x22c7d4u: goto label_22c7d4;
        case 0x22c7d8u: goto label_22c7d8;
        case 0x22c7dcu: goto label_22c7dc;
        case 0x22c7e0u: goto label_22c7e0;
        case 0x22c7e4u: goto label_22c7e4;
        case 0x22c7e8u: goto label_22c7e8;
        case 0x22c7ecu: goto label_22c7ec;
        case 0x22c7f0u: goto label_22c7f0;
        case 0x22c7f4u: goto label_22c7f4;
        case 0x22c7f8u: goto label_22c7f8;
        case 0x22c7fcu: goto label_22c7fc;
        case 0x22c800u: goto label_22c800;
        case 0x22c804u: goto label_22c804;
        case 0x22c808u: goto label_22c808;
        case 0x22c80cu: goto label_22c80c;
        case 0x22c810u: goto label_22c810;
        case 0x22c814u: goto label_22c814;
        case 0x22c818u: goto label_22c818;
        case 0x22c81cu: goto label_22c81c;
        case 0x22c820u: goto label_22c820;
        case 0x22c824u: goto label_22c824;
        case 0x22c828u: goto label_22c828;
        case 0x22c82cu: goto label_22c82c;
        case 0x22c830u: goto label_22c830;
        case 0x22c834u: goto label_22c834;
        case 0x22c838u: goto label_22c838;
        case 0x22c83cu: goto label_22c83c;
        case 0x22c840u: goto label_22c840;
        case 0x22c844u: goto label_22c844;
        case 0x22c848u: goto label_22c848;
        case 0x22c84cu: goto label_22c84c;
        case 0x22c850u: goto label_22c850;
        case 0x22c854u: goto label_22c854;
        case 0x22c858u: goto label_22c858;
        case 0x22c85cu: goto label_22c85c;
        case 0x22c860u: goto label_22c860;
        case 0x22c864u: goto label_22c864;
        case 0x22c868u: goto label_22c868;
        case 0x22c86cu: goto label_22c86c;
        case 0x22c870u: goto label_22c870;
        case 0x22c874u: goto label_22c874;
        case 0x22c878u: goto label_22c878;
        case 0x22c87cu: goto label_22c87c;
        case 0x22c880u: goto label_22c880;
        case 0x22c884u: goto label_22c884;
        case 0x22c888u: goto label_22c888;
        case 0x22c88cu: goto label_22c88c;
        case 0x22c890u: goto label_22c890;
        case 0x22c894u: goto label_22c894;
        case 0x22c898u: goto label_22c898;
        case 0x22c89cu: goto label_22c89c;
        case 0x22c8a0u: goto label_22c8a0;
        case 0x22c8a4u: goto label_22c8a4;
        case 0x22c8a8u: goto label_22c8a8;
        case 0x22c8acu: goto label_22c8ac;
        case 0x22c8b0u: goto label_22c8b0;
        case 0x22c8b4u: goto label_22c8b4;
        case 0x22c8b8u: goto label_22c8b8;
        case 0x22c8bcu: goto label_22c8bc;
        case 0x22c8c0u: goto label_22c8c0;
        case 0x22c8c4u: goto label_22c8c4;
        case 0x22c8c8u: goto label_22c8c8;
        case 0x22c8ccu: goto label_22c8cc;
        case 0x22c8d0u: goto label_22c8d0;
        case 0x22c8d4u: goto label_22c8d4;
        case 0x22c8d8u: goto label_22c8d8;
        case 0x22c8dcu: goto label_22c8dc;
        case 0x22c8e0u: goto label_22c8e0;
        case 0x22c8e4u: goto label_22c8e4;
        case 0x22c8e8u: goto label_22c8e8;
        case 0x22c8ecu: goto label_22c8ec;
        case 0x22c8f0u: goto label_22c8f0;
        case 0x22c8f4u: goto label_22c8f4;
        case 0x22c8f8u: goto label_22c8f8;
        case 0x22c8fcu: goto label_22c8fc;
        case 0x22c900u: goto label_22c900;
        case 0x22c904u: goto label_22c904;
        case 0x22c908u: goto label_22c908;
        case 0x22c90cu: goto label_22c90c;
        case 0x22c910u: goto label_22c910;
        case 0x22c914u: goto label_22c914;
        case 0x22c918u: goto label_22c918;
        case 0x22c91cu: goto label_22c91c;
        case 0x22c920u: goto label_22c920;
        case 0x22c924u: goto label_22c924;
        case 0x22c928u: goto label_22c928;
        case 0x22c92cu: goto label_22c92c;
        case 0x22c930u: goto label_22c930;
        case 0x22c934u: goto label_22c934;
        case 0x22c938u: goto label_22c938;
        case 0x22c93cu: goto label_22c93c;
        case 0x22c940u: goto label_22c940;
        case 0x22c944u: goto label_22c944;
        case 0x22c948u: goto label_22c948;
        case 0x22c94cu: goto label_22c94c;
        case 0x22c950u: goto label_22c950;
        case 0x22c954u: goto label_22c954;
        case 0x22c958u: goto label_22c958;
        case 0x22c95cu: goto label_22c95c;
        case 0x22c960u: goto label_22c960;
        case 0x22c964u: goto label_22c964;
        case 0x22c968u: goto label_22c968;
        case 0x22c96cu: goto label_22c96c;
        case 0x22c970u: goto label_22c970;
        case 0x22c974u: goto label_22c974;
        case 0x22c978u: goto label_22c978;
        case 0x22c97cu: goto label_22c97c;
        case 0x22c980u: goto label_22c980;
        case 0x22c984u: goto label_22c984;
        case 0x22c988u: goto label_22c988;
        case 0x22c98cu: goto label_22c98c;
        case 0x22c990u: goto label_22c990;
        case 0x22c994u: goto label_22c994;
        case 0x22c998u: goto label_22c998;
        case 0x22c99cu: goto label_22c99c;
        case 0x22c9a0u: goto label_22c9a0;
        case 0x22c9a4u: goto label_22c9a4;
        case 0x22c9a8u: goto label_22c9a8;
        case 0x22c9acu: goto label_22c9ac;
        case 0x22c9b0u: goto label_22c9b0;
        case 0x22c9b4u: goto label_22c9b4;
        case 0x22c9b8u: goto label_22c9b8;
        case 0x22c9bcu: goto label_22c9bc;
        case 0x22c9c0u: goto label_22c9c0;
        case 0x22c9c4u: goto label_22c9c4;
        case 0x22c9c8u: goto label_22c9c8;
        case 0x22c9ccu: goto label_22c9cc;
        case 0x22c9d0u: goto label_22c9d0;
        case 0x22c9d4u: goto label_22c9d4;
        case 0x22c9d8u: goto label_22c9d8;
        case 0x22c9dcu: goto label_22c9dc;
        case 0x22c9e0u: goto label_22c9e0;
        case 0x22c9e4u: goto label_22c9e4;
        case 0x22c9e8u: goto label_22c9e8;
        case 0x22c9ecu: goto label_22c9ec;
        case 0x22c9f0u: goto label_22c9f0;
        case 0x22c9f4u: goto label_22c9f4;
        case 0x22c9f8u: goto label_22c9f8;
        case 0x22c9fcu: goto label_22c9fc;
        case 0x22ca00u: goto label_22ca00;
        case 0x22ca04u: goto label_22ca04;
        case 0x22ca08u: goto label_22ca08;
        case 0x22ca0cu: goto label_22ca0c;
        case 0x22ca10u: goto label_22ca10;
        case 0x22ca14u: goto label_22ca14;
        case 0x22ca18u: goto label_22ca18;
        case 0x22ca1cu: goto label_22ca1c;
        case 0x22ca20u: goto label_22ca20;
        case 0x22ca24u: goto label_22ca24;
        case 0x22ca28u: goto label_22ca28;
        case 0x22ca2cu: goto label_22ca2c;
        case 0x22ca30u: goto label_22ca30;
        case 0x22ca34u: goto label_22ca34;
        case 0x22ca38u: goto label_22ca38;
        case 0x22ca3cu: goto label_22ca3c;
        case 0x22ca40u: goto label_22ca40;
        case 0x22ca44u: goto label_22ca44;
        case 0x22ca48u: goto label_22ca48;
        case 0x22ca4cu: goto label_22ca4c;
        case 0x22ca50u: goto label_22ca50;
        case 0x22ca54u: goto label_22ca54;
        case 0x22ca58u: goto label_22ca58;
        case 0x22ca5cu: goto label_22ca5c;
        case 0x22ca60u: goto label_22ca60;
        case 0x22ca64u: goto label_22ca64;
        case 0x22ca68u: goto label_22ca68;
        case 0x22ca6cu: goto label_22ca6c;
        case 0x22ca70u: goto label_22ca70;
        case 0x22ca74u: goto label_22ca74;
        case 0x22ca78u: goto label_22ca78;
        case 0x22ca7cu: goto label_22ca7c;
        case 0x22ca80u: goto label_22ca80;
        case 0x22ca84u: goto label_22ca84;
        case 0x22ca88u: goto label_22ca88;
        case 0x22ca8cu: goto label_22ca8c;
        case 0x22ca90u: goto label_22ca90;
        case 0x22ca94u: goto label_22ca94;
        case 0x22ca98u: goto label_22ca98;
        case 0x22ca9cu: goto label_22ca9c;
        case 0x22caa0u: goto label_22caa0;
        case 0x22caa4u: goto label_22caa4;
        case 0x22caa8u: goto label_22caa8;
        case 0x22caacu: goto label_22caac;
        case 0x22cab0u: goto label_22cab0;
        case 0x22cab4u: goto label_22cab4;
        case 0x22cab8u: goto label_22cab8;
        case 0x22cabcu: goto label_22cabc;
        case 0x22cac0u: goto label_22cac0;
        case 0x22cac4u: goto label_22cac4;
        case 0x22cac8u: goto label_22cac8;
        case 0x22caccu: goto label_22cacc;
        case 0x22cad0u: goto label_22cad0;
        case 0x22cad4u: goto label_22cad4;
        case 0x22cad8u: goto label_22cad8;
        case 0x22cadcu: goto label_22cadc;
        case 0x22cae0u: goto label_22cae0;
        case 0x22cae4u: goto label_22cae4;
        case 0x22cae8u: goto label_22cae8;
        case 0x22caecu: goto label_22caec;
        case 0x22caf0u: goto label_22caf0;
        case 0x22caf4u: goto label_22caf4;
        case 0x22caf8u: goto label_22caf8;
        case 0x22cafcu: goto label_22cafc;
        case 0x22cb00u: goto label_22cb00;
        case 0x22cb04u: goto label_22cb04;
        case 0x22cb08u: goto label_22cb08;
        case 0x22cb0cu: goto label_22cb0c;
        case 0x22cb10u: goto label_22cb10;
        case 0x22cb14u: goto label_22cb14;
        case 0x22cb18u: goto label_22cb18;
        case 0x22cb1cu: goto label_22cb1c;
        case 0x22cb20u: goto label_22cb20;
        case 0x22cb24u: goto label_22cb24;
        case 0x22cb28u: goto label_22cb28;
        case 0x22cb2cu: goto label_22cb2c;
        case 0x22cb30u: goto label_22cb30;
        case 0x22cb34u: goto label_22cb34;
        case 0x22cb38u: goto label_22cb38;
        case 0x22cb3cu: goto label_22cb3c;
        case 0x22cb40u: goto label_22cb40;
        case 0x22cb44u: goto label_22cb44;
        case 0x22cb48u: goto label_22cb48;
        case 0x22cb4cu: goto label_22cb4c;
        case 0x22cb50u: goto label_22cb50;
        case 0x22cb54u: goto label_22cb54;
        case 0x22cb58u: goto label_22cb58;
        case 0x22cb5cu: goto label_22cb5c;
        case 0x22cb60u: goto label_22cb60;
        case 0x22cb64u: goto label_22cb64;
        case 0x22cb68u: goto label_22cb68;
        case 0x22cb6cu: goto label_22cb6c;
        case 0x22cb70u: goto label_22cb70;
        case 0x22cb74u: goto label_22cb74;
        case 0x22cb78u: goto label_22cb78;
        case 0x22cb7cu: goto label_22cb7c;
        case 0x22cb80u: goto label_22cb80;
        case 0x22cb84u: goto label_22cb84;
        case 0x22cb88u: goto label_22cb88;
        case 0x22cb8cu: goto label_22cb8c;
        case 0x22cb90u: goto label_22cb90;
        case 0x22cb94u: goto label_22cb94;
        case 0x22cb98u: goto label_22cb98;
        case 0x22cb9cu: goto label_22cb9c;
        case 0x22cba0u: goto label_22cba0;
        case 0x22cba4u: goto label_22cba4;
        case 0x22cba8u: goto label_22cba8;
        case 0x22cbacu: goto label_22cbac;
        case 0x22cbb0u: goto label_22cbb0;
        case 0x22cbb4u: goto label_22cbb4;
        case 0x22cbb8u: goto label_22cbb8;
        case 0x22cbbcu: goto label_22cbbc;
        case 0x22cbc0u: goto label_22cbc0;
        case 0x22cbc4u: goto label_22cbc4;
        case 0x22cbc8u: goto label_22cbc8;
        case 0x22cbccu: goto label_22cbcc;
        case 0x22cbd0u: goto label_22cbd0;
        case 0x22cbd4u: goto label_22cbd4;
        case 0x22cbd8u: goto label_22cbd8;
        case 0x22cbdcu: goto label_22cbdc;
        case 0x22cbe0u: goto label_22cbe0;
        case 0x22cbe4u: goto label_22cbe4;
        case 0x22cbe8u: goto label_22cbe8;
        case 0x22cbecu: goto label_22cbec;
        case 0x22cbf0u: goto label_22cbf0;
        case 0x22cbf4u: goto label_22cbf4;
        case 0x22cbf8u: goto label_22cbf8;
        case 0x22cbfcu: goto label_22cbfc;
        case 0x22cc00u: goto label_22cc00;
        case 0x22cc04u: goto label_22cc04;
        case 0x22cc08u: goto label_22cc08;
        case 0x22cc0cu: goto label_22cc0c;
        case 0x22cc10u: goto label_22cc10;
        case 0x22cc14u: goto label_22cc14;
        case 0x22cc18u: goto label_22cc18;
        case 0x22cc1cu: goto label_22cc1c;
        case 0x22cc20u: goto label_22cc20;
        case 0x22cc24u: goto label_22cc24;
        case 0x22cc28u: goto label_22cc28;
        case 0x22cc2cu: goto label_22cc2c;
        case 0x22cc30u: goto label_22cc30;
        case 0x22cc34u: goto label_22cc34;
        case 0x22cc38u: goto label_22cc38;
        case 0x22cc3cu: goto label_22cc3c;
        case 0x22cc40u: goto label_22cc40;
        case 0x22cc44u: goto label_22cc44;
        case 0x22cc48u: goto label_22cc48;
        case 0x22cc4cu: goto label_22cc4c;
        case 0x22cc50u: goto label_22cc50;
        case 0x22cc54u: goto label_22cc54;
        case 0x22cc58u: goto label_22cc58;
        case 0x22cc5cu: goto label_22cc5c;
        case 0x22cc60u: goto label_22cc60;
        case 0x22cc64u: goto label_22cc64;
        case 0x22cc68u: goto label_22cc68;
        case 0x22cc6cu: goto label_22cc6c;
        case 0x22cc70u: goto label_22cc70;
        case 0x22cc74u: goto label_22cc74;
        case 0x22cc78u: goto label_22cc78;
        case 0x22cc7cu: goto label_22cc7c;
        case 0x22cc80u: goto label_22cc80;
        case 0x22cc84u: goto label_22cc84;
        case 0x22cc88u: goto label_22cc88;
        case 0x22cc8cu: goto label_22cc8c;
        case 0x22cc90u: goto label_22cc90;
        case 0x22cc94u: goto label_22cc94;
        case 0x22cc98u: goto label_22cc98;
        case 0x22cc9cu: goto label_22cc9c;
        case 0x22cca0u: goto label_22cca0;
        case 0x22cca4u: goto label_22cca4;
        case 0x22cca8u: goto label_22cca8;
        case 0x22ccacu: goto label_22ccac;
        case 0x22ccb0u: goto label_22ccb0;
        case 0x22ccb4u: goto label_22ccb4;
        case 0x22ccb8u: goto label_22ccb8;
        case 0x22ccbcu: goto label_22ccbc;
        case 0x22ccc0u: goto label_22ccc0;
        case 0x22ccc4u: goto label_22ccc4;
        case 0x22ccc8u: goto label_22ccc8;
        case 0x22ccccu: goto label_22cccc;
        case 0x22ccd0u: goto label_22ccd0;
        case 0x22ccd4u: goto label_22ccd4;
        case 0x22ccd8u: goto label_22ccd8;
        case 0x22ccdcu: goto label_22ccdc;
        case 0x22cce0u: goto label_22cce0;
        case 0x22cce4u: goto label_22cce4;
        case 0x22cce8u: goto label_22cce8;
        case 0x22ccecu: goto label_22ccec;
        case 0x22ccf0u: goto label_22ccf0;
        case 0x22ccf4u: goto label_22ccf4;
        case 0x22ccf8u: goto label_22ccf8;
        case 0x22ccfcu: goto label_22ccfc;
        case 0x22cd00u: goto label_22cd00;
        case 0x22cd04u: goto label_22cd04;
        case 0x22cd08u: goto label_22cd08;
        case 0x22cd0cu: goto label_22cd0c;
        case 0x22cd10u: goto label_22cd10;
        case 0x22cd14u: goto label_22cd14;
        case 0x22cd18u: goto label_22cd18;
        case 0x22cd1cu: goto label_22cd1c;
        case 0x22cd20u: goto label_22cd20;
        case 0x22cd24u: goto label_22cd24;
        case 0x22cd28u: goto label_22cd28;
        case 0x22cd2cu: goto label_22cd2c;
        case 0x22cd30u: goto label_22cd30;
        case 0x22cd34u: goto label_22cd34;
        case 0x22cd38u: goto label_22cd38;
        case 0x22cd3cu: goto label_22cd3c;
        case 0x22cd40u: goto label_22cd40;
        case 0x22cd44u: goto label_22cd44;
        case 0x22cd48u: goto label_22cd48;
        case 0x22cd4cu: goto label_22cd4c;
        case 0x22cd50u: goto label_22cd50;
        case 0x22cd54u: goto label_22cd54;
        case 0x22cd58u: goto label_22cd58;
        case 0x22cd5cu: goto label_22cd5c;
        case 0x22cd60u: goto label_22cd60;
        case 0x22cd64u: goto label_22cd64;
        case 0x22cd68u: goto label_22cd68;
        case 0x22cd6cu: goto label_22cd6c;
        case 0x22cd70u: goto label_22cd70;
        case 0x22cd74u: goto label_22cd74;
        case 0x22cd78u: goto label_22cd78;
        case 0x22cd7cu: goto label_22cd7c;
        case 0x22cd80u: goto label_22cd80;
        case 0x22cd84u: goto label_22cd84;
        case 0x22cd88u: goto label_22cd88;
        case 0x22cd8cu: goto label_22cd8c;
        case 0x22cd90u: goto label_22cd90;
        case 0x22cd94u: goto label_22cd94;
        case 0x22cd98u: goto label_22cd98;
        case 0x22cd9cu: goto label_22cd9c;
        case 0x22cda0u: goto label_22cda0;
        case 0x22cda4u: goto label_22cda4;
        case 0x22cda8u: goto label_22cda8;
        case 0x22cdacu: goto label_22cdac;
        case 0x22cdb0u: goto label_22cdb0;
        case 0x22cdb4u: goto label_22cdb4;
        case 0x22cdb8u: goto label_22cdb8;
        case 0x22cdbcu: goto label_22cdbc;
        case 0x22cdc0u: goto label_22cdc0;
        case 0x22cdc4u: goto label_22cdc4;
        case 0x22cdc8u: goto label_22cdc8;
        case 0x22cdccu: goto label_22cdcc;
        case 0x22cdd0u: goto label_22cdd0;
        case 0x22cdd4u: goto label_22cdd4;
        case 0x22cdd8u: goto label_22cdd8;
        case 0x22cddcu: goto label_22cddc;
        case 0x22cde0u: goto label_22cde0;
        case 0x22cde4u: goto label_22cde4;
        case 0x22cde8u: goto label_22cde8;
        case 0x22cdecu: goto label_22cdec;
        case 0x22cdf0u: goto label_22cdf0;
        case 0x22cdf4u: goto label_22cdf4;
        case 0x22cdf8u: goto label_22cdf8;
        case 0x22cdfcu: goto label_22cdfc;
        case 0x22ce00u: goto label_22ce00;
        case 0x22ce04u: goto label_22ce04;
        case 0x22ce08u: goto label_22ce08;
        case 0x22ce0cu: goto label_22ce0c;
        case 0x22ce10u: goto label_22ce10;
        case 0x22ce14u: goto label_22ce14;
        case 0x22ce18u: goto label_22ce18;
        case 0x22ce1cu: goto label_22ce1c;
        case 0x22ce20u: goto label_22ce20;
        case 0x22ce24u: goto label_22ce24;
        case 0x22ce28u: goto label_22ce28;
        case 0x22ce2cu: goto label_22ce2c;
        case 0x22ce30u: goto label_22ce30;
        case 0x22ce34u: goto label_22ce34;
        case 0x22ce38u: goto label_22ce38;
        case 0x22ce3cu: goto label_22ce3c;
        case 0x22ce40u: goto label_22ce40;
        case 0x22ce44u: goto label_22ce44;
        case 0x22ce48u: goto label_22ce48;
        case 0x22ce4cu: goto label_22ce4c;
        default: return;
    }

label_22c680:
    // 0x22c680: 0xc066e14  jal         func_19B850
label_22c684:
    if (ctx->pc == 0x22C684u) {
        ctx->pc = 0x22C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C680u;
        // 0x22c684: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C688u;
        goto label_22c688;
    }
    ctx->pc = 0x22C680u;
    SET_GPR_U32(ctx, 31, 0x22C688u);
    ctx->pc = 0x22C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C680u;
    // 0x22c684: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x22C688u;
label_22c688:
    // 0x22c688: 0x8e15005c  lw          $s5, 0x5C($s0)
    ctx->pc = 0x22c688u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_22c68c:
    // 0x22c68c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22c690:
    // 0x22c690: 0xc066e26  jal         func_19B898
label_22c694:
    if (ctx->pc == 0x22C694u) {
        ctx->pc = 0x22C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C690u;
        // 0x22c694: 0x26a40040  addiu       $a0, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C698u;
        goto label_22c698;
    }
    ctx->pc = 0x22C690u;
    SET_GPR_U32(ctx, 31, 0x22C698u);
    ctx->pc = 0x22C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C690u;
    // 0x22c694: 0x26a40040  addiu       $a0, $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22C698u;
label_22c698:
    // 0x22c698: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x22c698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_22c69c:
    // 0x22c69c: 0xc066e26  jal         func_19B898
label_22c6a0:
    if (ctx->pc == 0x22C6A0u) {
        ctx->pc = 0x22C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C69Cu;
        // 0x22c6a0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6A4u;
        goto label_22c6a4;
    }
    ctx->pc = 0x22C69Cu;
    SET_GPR_U32(ctx, 31, 0x22C6A4u);
    ctx->pc = 0x22C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C69Cu;
    // 0x22c6a0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22C6A4u;
label_22c6a4:
    // 0x22c6a4: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x22c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_22c6a8:
    // 0x22c6a8: 0xc066e26  jal         func_19B898
label_22c6ac:
    if (ctx->pc == 0x22C6ACu) {
        ctx->pc = 0x22C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6A8u;
        // 0x22c6ac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6B0u;
        goto label_22c6b0;
    }
    ctx->pc = 0x22C6A8u;
    SET_GPR_U32(ctx, 31, 0x22C6B0u);
    ctx->pc = 0x22C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C6A8u;
    // 0x22c6ac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22C6B0u;
label_22c6b0:
    // 0x22c6b0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x22c6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_22c6b4:
    // 0x22c6b4: 0xc066e26  jal         func_19B898
label_22c6b8:
    if (ctx->pc == 0x22C6B8u) {
        ctx->pc = 0x22C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6B4u;
        // 0x22c6b8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6BCu;
        goto label_22c6bc;
    }
    ctx->pc = 0x22C6B4u;
    SET_GPR_U32(ctx, 31, 0x22C6BCu);
    ctx->pc = 0x22C6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C6B4u;
    // 0x22c6b8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22C6BCu;
label_22c6bc:
    // 0x22c6bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c6c0:
    // 0x22c6c0: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x22c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_22c6c4:
    // 0x22c6c4: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x22c6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
label_22c6c8:
    // 0x22c6c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22c6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22c6cc:
    // 0x22c6cc: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x22c6ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_22c6d0:
    // 0x22c6d0: 0x2484c830  addiu       $a0, $a0, -0x37D0
    ctx->pc = 0x22c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953008));
label_22c6d4:
    // 0x22c6d4: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x22c6d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_22c6d8:
    // 0x22c6d8: 0xa6050018  sh          $a1, 0x18($s0)
    ctx->pc = 0x22c6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 5));
label_22c6dc:
    // 0x22c6dc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x22c6dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_22c6e0:
    // 0x22c6e0: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x22c6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_22c6e4:
    // 0x22c6e4: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
label_22c6e8:
    if (ctx->pc == 0x22C6E8u) {
        ctx->pc = 0x22C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6E4u;
        // 0x22c6e8: 0xae04001c  sw          $a0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6ECu;
        goto label_22c6ec;
    }
    ctx->pc = 0x22C6E4u;
    {
        const bool branch_taken_0x22c6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6E4u;
        // 0x22c6e8: 0xae04001c  sw          $a0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6e4) {
            ctx->pc = 0x22C564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x22c564; return; }
        }
    }
    ctx->pc = 0x22C6ECu;
label_22c6ec:
    // 0x22c6ec: 0x0  nop
    ctx->pc = 0x22c6ecu;
    // NOP
label_22c6f0:
    // 0x22c6f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22c6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22c6f4:
    // 0x22c6f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22c6f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22c6f8:
    // 0x22c6f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22c6f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22c6fc:
    // 0x22c6fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22c6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22c700:
    // 0x22c700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c704:
    // 0x22c704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c708:
    // 0x22c708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22c70c:
    // 0x22c70c: 0x3e00008  jr          $ra
label_22c710:
    if (ctx->pc == 0x22C710u) {
        ctx->pc = 0x22C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C70Cu;
        // 0x22c710: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C714u;
        goto label_22c714;
    }
    ctx->pc = 0x22C70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C70Cu;
        // 0x22c710: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C714u;
label_22c714:
    // 0x22c714: 0x0  nop
    ctx->pc = 0x22c714u;
    // NOP
label_22c718:
    // 0x22c718: 0x0  nop
    ctx->pc = 0x22c718u;
    // NOP
label_22c71c:
    // 0x22c71c: 0x0  nop
    ctx->pc = 0x22c71cu;
    // NOP
label_22c720:
    // 0x22c720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22c724:
    // 0x22c724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22c728:
    // 0x22c728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22c72c:
    // 0x22c72c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c730:
    // 0x22c730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22c734:
    // 0x22c734: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22c734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22c738:
    // 0x22c738: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x22c738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_22c73c:
    // 0x22c73c: 0x90900014  lbu         $s0, 0x14($a0)
    ctx->pc = 0x22c73cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_22c740:
    // 0x22c740: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_22c744:
    if (ctx->pc == 0x22C744u) {
        ctx->pc = 0x22C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C740u;
        // 0x22c744: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C748u;
        goto label_22c748;
    }
    ctx->pc = 0x22C740u;
    {
        const bool branch_taken_0x22c740 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C740u;
        // 0x22c744: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c740) {
            ctx->pc = 0x22C774u;
            goto label_22c774;
        }
    }
    ctx->pc = 0x22C748u;
label_22c748:
    // 0x22c748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c74c:
    // 0x22c74c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x22c74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_22c750:
    // 0x22c750: 0x90c30096  lbu         $v1, 0x96($a2)
    ctx->pc = 0x22c750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 150)));
label_22c754:
    // 0x22c754: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_22c758:
    if (ctx->pc == 0x22C758u) {
        ctx->pc = 0x22C75Cu;
        goto label_22c75c;
    }
    ctx->pc = 0x22C754u;
    {
        const bool branch_taken_0x22c754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22c754) {
            ctx->pc = 0x22C768u;
            goto label_22c768;
        }
    }
    ctx->pc = 0x22C75Cu;
label_22c75c:
    // 0x22c75c: 0x90c30094  lbu         $v1, 0x94($a2)
    ctx->pc = 0x22c75cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 148)));
label_22c760:
    // 0x22c760: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_22c764:
    if (ctx->pc == 0x22C764u) {
        ctx->pc = 0x22C768u;
        goto label_22c768;
    }
    ctx->pc = 0x22C760u;
    {
        const bool branch_taken_0x22c760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22c760) {
            ctx->pc = 0x22C774u;
            goto label_22c774;
        }
    }
    ctx->pc = 0x22C768u;
label_22c768:
    // 0x22c768: 0x8cc60084  lw          $a2, 0x84($a2)
    ctx->pc = 0x22c768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_22c76c:
    // 0x22c76c: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_22c770:
    if (ctx->pc == 0x22C770u) {
        ctx->pc = 0x22C774u;
        goto label_22c774;
    }
    ctx->pc = 0x22C76Cu;
    {
        const bool branch_taken_0x22c76c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c76c) {
            ctx->pc = 0x22C750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c750;
        }
    }
    ctx->pc = 0x22C774u;
label_22c774:
    // 0x22c774: 0x0  nop
    ctx->pc = 0x22c774u;
    // NOP
label_22c778:
    // 0x22c778: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_22c77c:
    if (ctx->pc == 0x22C77Cu) {
        ctx->pc = 0x22C780u;
        goto label_22c780;
    }
    ctx->pc = 0x22C778u;
    {
        const bool branch_taken_0x22c778 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c778) {
            ctx->pc = 0x22C790u;
            goto label_22c790;
        }
    }
    ctx->pc = 0x22C780u;
label_22c780:
    // 0x22c780: 0xae46005c  sw          $a2, 0x5C($s2)
    ctx->pc = 0x22c780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 6));
label_22c784:
    // 0x22c784: 0x8cc20084  lw          $v0, 0x84($a2)
    ctx->pc = 0x22c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_22c788:
    // 0x22c788: 0x10000003  b           . + 4 + (0x3 << 2)
label_22c78c:
    if (ctx->pc == 0x22C78Cu) {
        ctx->pc = 0x22C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C788u;
        // 0x22c78c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C790u;
        goto label_22c790;
    }
    ctx->pc = 0x22C788u;
    {
        const bool branch_taken_0x22c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C788u;
        // 0x22c78c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c788) {
            ctx->pc = 0x22C798u;
            goto label_22c798;
        }
    }
    ctx->pc = 0x22C790u;
label_22c790:
    // 0x22c790: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x22c790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_22c794:
    // 0x22c794: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x22c794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_22c798:
    // 0x22c798: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x22c798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_22c79c:
    // 0x22c79c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c7a0:
    // 0x22c7a0: 0xc08e9ac  jal         func_23A6B0
label_22c7a4:
    if (ctx->pc == 0x22C7A4u) {
        ctx->pc = 0x22C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7A0u;
        // 0x22c7a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7A8u;
        goto label_22c7a8;
    }
    ctx->pc = 0x22C7A0u;
    SET_GPR_U32(ctx, 31, 0x22C7A8u);
    ctx->pc = 0x22C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C7A0u;
    // 0x22c7a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x22C7A8u;
label_22c7a8:
    // 0x22c7a8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x22c7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c7ac:
    // 0x22c7ac: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_22c7b0:
    if (ctx->pc == 0x22C7B0u) {
        ctx->pc = 0x22C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7ACu;
        // 0x22c7b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7B4u;
        goto label_22c7b4;
    }
    ctx->pc = 0x22C7ACu;
    {
        const bool branch_taken_0x22c7ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7ACu;
        // 0x22c7b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7ac) {
            ctx->pc = 0x22C7F4u;
            goto label_22c7f4;
        }
    }
    ctx->pc = 0x22C7B4u;
label_22c7b4:
    // 0x22c7b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22c7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c7b8:
    // 0x22c7b8: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x22c7b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_22c7bc:
    // 0x22c7bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22c7c0:
    // 0x22c7c0: 0x90c30096  lbu         $v1, 0x96($a2)
    ctx->pc = 0x22c7c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 150)));
label_22c7c4:
    // 0x22c7c4: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
label_22c7c8:
    if (ctx->pc == 0x22C7C8u) {
        ctx->pc = 0x22C7CCu;
        goto label_22c7cc;
    }
    ctx->pc = 0x22C7C4u;
    {
        const bool branch_taken_0x22c7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x22c7c4) {
            ctx->pc = 0x22C7E8u;
            goto label_22c7e8;
        }
    }
    ctx->pc = 0x22C7CCu;
label_22c7cc:
    // 0x22c7cc: 0x90c30094  lbu         $v1, 0x94($a2)
    ctx->pc = 0x22c7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 148)));
label_22c7d0:
    // 0x22c7d0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_22c7d4:
    if (ctx->pc == 0x22C7D4u) {
        ctx->pc = 0x22C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7D0u;
        // 0x22c7d4: 0x2481821  addu        $v1, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7D8u;
        goto label_22c7d8;
    }
    ctx->pc = 0x22C7D0u;
    {
        const bool branch_taken_0x22c7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7D0u;
        // 0x22c7d4: 0x2481821  addu        $v1, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7d0) {
            ctx->pc = 0x22C7E8u;
            goto label_22c7e8;
        }
    }
    ctx->pc = 0x22C7D8u;
label_22c7d8:
    // 0x22c7d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22c7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22c7dc:
    // 0x22c7dc: 0xac660030  sw          $a2, 0x30($v1)
    ctx->pc = 0x22c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
label_22c7e0:
    // 0x22c7e0: 0x10e40004  beq         $a3, $a0, . + 4 + (0x4 << 2)
label_22c7e4:
    if (ctx->pc == 0x22C7E4u) {
        ctx->pc = 0x22C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7E0u;
        // 0x22c7e4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7E8u;
        goto label_22c7e8;
    }
    ctx->pc = 0x22C7E0u;
    {
        const bool branch_taken_0x22c7e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x22C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7E0u;
        // 0x22c7e4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7e0) {
            ctx->pc = 0x22C7F4u;
            goto label_22c7f4;
        }
    }
    ctx->pc = 0x22C7E8u;
label_22c7e8:
    // 0x22c7e8: 0x8cc60084  lw          $a2, 0x84($a2)
    ctx->pc = 0x22c7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_22c7ec:
    // 0x22c7ec: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
label_22c7f0:
    if (ctx->pc == 0x22C7F0u) {
        ctx->pc = 0x22C7F4u;
        goto label_22c7f4;
    }
    ctx->pc = 0x22C7ECu;
    {
        const bool branch_taken_0x22c7ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c7ec) {
            ctx->pc = 0x22C7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c7c0;
        }
    }
    ctx->pc = 0x22C7F4u;
label_22c7f4:
    // 0x22c7f4: 0x0  nop
    ctx->pc = 0x22c7f4u;
    // NOP
label_22c7f8:
    // 0x22c7f8: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_22c7fc:
    if (ctx->pc == 0x22C7FCu) {
        ctx->pc = 0x22C800u;
        goto label_22c800;
    }
    ctx->pc = 0x22C7F8u;
    {
        const bool branch_taken_0x22c7f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c7f8) {
            ctx->pc = 0x22C80Cu;
            goto label_22c80c;
        }
    }
    ctx->pc = 0x22C800u;
label_22c800:
    // 0x22c800: 0x8cc30084  lw          $v1, 0x84($a2)
    ctx->pc = 0x22c800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_22c804:
    // 0x22c804: 0x10000002  b           . + 4 + (0x2 << 2)
label_22c808:
    if (ctx->pc == 0x22C808u) {
        ctx->pc = 0x22C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C804u;
        // 0x22c808: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C80Cu;
        goto label_22c80c;
    }
    ctx->pc = 0x22C804u;
    {
        const bool branch_taken_0x22c804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C804u;
        // 0x22c808: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c804) {
            ctx->pc = 0x22C810u;
            goto label_22c810;
        }
    }
    ctx->pc = 0x22C80Cu;
label_22c80c:
    // 0x22c80c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_22c810:
    // 0x22c810: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22c810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22c814:
    // 0x22c814: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c818:
    // 0x22c818: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c81c:
    // 0x22c81c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22c820:
    // 0x22c820: 0x3e00008  jr          $ra
label_22c824:
    if (ctx->pc == 0x22C824u) {
        ctx->pc = 0x22C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C820u;
        // 0x22c824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C828u;
        goto label_22c828;
    }
    ctx->pc = 0x22C820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C820u;
        // 0x22c824: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C828u;
label_22c828:
    // 0x22c828: 0x0  nop
    ctx->pc = 0x22c828u;
    // NOP
label_22c82c:
    // 0x22c82c: 0x0  nop
    ctx->pc = 0x22c82cu;
    // NOP
label_22c830:
    // 0x22c830: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_22c834:
    // 0x22c834: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22c834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22c838:
    // 0x22c838: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22c838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22c83c:
    // 0x22c83c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22c840:
    // 0x22c840: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22c840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_22c844:
    // 0x22c844: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22c844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_22c848:
    // 0x22c848: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22c84c:
    // 0x22c84c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22c84cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c850:
    // 0x22c850: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22c850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22c854:
    // 0x22c854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22c854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22c858:
    // 0x22c858: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22c858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22c85c:
    // 0x22c85c: 0x9024a3ea  lbu         $a0, -0x5C16($at)
    ctx->pc = 0x22c85cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22c860:
    // 0x22c860: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_22c864:
    if (ctx->pc == 0x22C864u) {
        ctx->pc = 0x22C868u;
        goto label_22c868;
    }
    ctx->pc = 0x22C860u;
    {
        const bool branch_taken_0x22c860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22c860) {
            ctx->pc = 0x22C870u;
            goto label_22c870;
        }
    }
    ctx->pc = 0x22C868u;
label_22c868:
    // 0x22c868: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_22c86c:
    if (ctx->pc == 0x22C86Cu) {
        ctx->pc = 0x22C870u;
        goto label_22c870;
    }
    ctx->pc = 0x22C868u;
    {
        const bool branch_taken_0x22c868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c868) {
            ctx->pc = 0x22C880u;
            goto label_22c880;
        }
    }
    ctx->pc = 0x22C870u;
label_22c870:
    // 0x22c870: 0xc0591f4  jal         func_1647D0
label_22c874:
    if (ctx->pc == 0x22C874u) {
        ctx->pc = 0x22C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C870u;
        // 0x22c874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C878u;
        goto label_22c878;
    }
    ctx->pc = 0x22C870u;
    SET_GPR_U32(ctx, 31, 0x22C878u);
    ctx->pc = 0x22C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C870u;
    // 0x22c874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    { ctx->pc = 0x1647d0; return; }
    ctx->pc = 0x22C878u;
label_22c878:
    // 0x22c878: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_22c87c:
    if (ctx->pc == 0x22C87Cu) {
        ctx->pc = 0x22C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C878u;
        // 0x22c87c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C880u;
        goto label_22c880;
    }
    ctx->pc = 0x22C878u;
    {
        const bool branch_taken_0x22c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C878u;
        // 0x22c87c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c878) {
            ctx->pc = 0x22CBE0u;
            goto label_22cbe0;
        }
    }
    ctx->pc = 0x22C880u;
label_22c880:
    // 0x22c880: 0x96640012  lhu         $a0, 0x12($s3)
    ctx->pc = 0x22c880u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_22c884:
    // 0x22c884: 0x8e71005c  lw          $s1, 0x5C($s3)
    ctx->pc = 0x22c884u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_22c888:
    // 0x22c888: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x22c888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22c88c:
    // 0x22c88c: 0xa6630012  sh          $v1, 0x12($s3)
    ctx->pc = 0x22c88cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 3));
label_22c890:
    // 0x22c890: 0x96630018  lhu         $v1, 0x18($s3)
    ctx->pc = 0x22c890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_22c894:
    // 0x22c894: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x22c894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22c898:
    // 0x22c898: 0x146000d0  bnez        $v1, . + 4 + (0xD0 << 2)
label_22c89c:
    if (ctx->pc == 0x22C89Cu) {
        ctx->pc = 0x22C8A0u;
        goto label_22c8a0;
    }
    ctx->pc = 0x22C898u;
    {
        const bool branch_taken_0x22c898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c898) {
            ctx->pc = 0x22CBDCu;
            goto label_22cbdc;
        }
    }
    ctx->pc = 0x22C8A0u;
label_22c8a0:
    // 0x22c8a0: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x22c8a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_22c8a4:
    // 0x22c8a4: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
label_22c8a8:
    if (ctx->pc == 0x22C8A8u) {
        ctx->pc = 0x22C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8A4u;
        // 0x22c8a8: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8ACu;
        goto label_22c8ac;
    }
    ctx->pc = 0x22C8A4u;
    {
        const bool branch_taken_0x22c8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8A4u;
        // 0x22c8a8: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8a4) {
            ctx->pc = 0x22CBDCu;
            goto label_22cbdc;
        }
    }
    ctx->pc = 0x22C8ACu;
label_22c8ac:
    // 0x22c8ac: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x22c8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_22c8b0:
    // 0x22c8b0: 0xc066e02  jal         func_19B808
label_22c8b4:
    if (ctx->pc == 0x22C8B4u) {
        ctx->pc = 0x22C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8B0u;
        // 0x22c8b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8B8u;
        goto label_22c8b8;
    }
    ctx->pc = 0x22C8B0u;
    SET_GPR_U32(ctx, 31, 0x22C8B8u);
    ctx->pc = 0x22C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8B0u;
    // 0x22c8b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22C8B8u;
label_22c8b8:
    // 0x22c8b8: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x22c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_22c8bc:
    // 0x22c8bc: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x22c8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_22c8c0:
    // 0x22c8c0: 0xc066e02  jal         func_19B808
label_22c8c4:
    if (ctx->pc == 0x22C8C4u) {
        ctx->pc = 0x22C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8C0u;
        // 0x22c8c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8C8u;
        goto label_22c8c8;
    }
    ctx->pc = 0x22C8C0u;
    SET_GPR_U32(ctx, 31, 0x22C8C8u);
    ctx->pc = 0x22C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8C0u;
    // 0x22c8c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22C8C8u;
label_22c8c8:
    // 0x22c8c8: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x22c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_22c8cc:
    // 0x22c8cc: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x22c8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_22c8d0:
    // 0x22c8d0: 0xc066e02  jal         func_19B808
label_22c8d4:
    if (ctx->pc == 0x22C8D4u) {
        ctx->pc = 0x22C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8D0u;
        // 0x22c8d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8D8u;
        goto label_22c8d8;
    }
    ctx->pc = 0x22C8D0u;
    SET_GPR_U32(ctx, 31, 0x22C8D8u);
    ctx->pc = 0x22C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8D0u;
    // 0x22c8d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22C8D8u;
label_22c8d8:
    // 0x22c8d8: 0xc6630024  lwc1        $f3, 0x24($s3)
    ctx->pc = 0x22c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22c8dc:
    // 0x22c8dc: 0x3c023f09  lui         $v0, 0x3F09
    ctx->pc = 0x22c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16137 << 16));
label_22c8e0:
    // 0x22c8e0: 0x34431870  ori         $v1, $v0, 0x1870
    ctx->pc = 0x22c8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6256);
label_22c8e4:
    // 0x22c8e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22c8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22c8e8:
    // 0x22c8e8: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x22c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_22c8ec:
    // 0x22c8ec: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x22c8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_22c8f0:
    // 0x22c8f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c8f4:
    // 0x22c8f4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x22c8f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_22c8f8:
    // 0x22c8f8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22c8fc:
    // 0x22c8fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22c900:
    // 0x22c900: 0xe6620024  swc1        $f2, 0x24($s3)
    ctx->pc = 0x22c900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_22c904:
    // 0x22c904: 0xc6220050  lwc1        $f2, 0x50($s1)
    ctx->pc = 0x22c904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c908:
    // 0x22c908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c90c:
    // 0x22c90c: 0x0  nop
    ctx->pc = 0x22c90cu;
    // NOP
label_22c910:
    // 0x22c910: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22c910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_22c914:
    // 0x22c914: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c918:
    // 0x22c918: 0x0  nop
    ctx->pc = 0x22c918u;
    // NOP
label_22c91c:
    // 0x22c91c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22c920:
    if (ctx->pc == 0x22C920u) {
        ctx->pc = 0x22C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C91Cu;
        // 0x22c920: 0xe6210050  swc1        $f1, 0x50($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C924u;
        goto label_22c924;
    }
    ctx->pc = 0x22C91Cu;
    {
        const bool branch_taken_0x22c91c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C91Cu;
        // 0x22c920: 0xe6210050  swc1        $f1, 0x50($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c91c) {
            ctx->pc = 0x22C938u;
            goto label_22c938;
        }
    }
    ctx->pc = 0x22C924u;
label_22c924:
    // 0x22c924: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22c924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22c928:
    // 0x22c928: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22c92c:
    // 0x22c92c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c930:
    // 0x22c930: 0x1000000d  b           . + 4 + (0xD << 2)
label_22c934:
    if (ctx->pc == 0x22C934u) {
        ctx->pc = 0x22C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C930u;
        // 0x22c934: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C938u;
        goto label_22c938;
    }
    ctx->pc = 0x22C930u;
    {
        const bool branch_taken_0x22c930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C930u;
        // 0x22c934: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c930) {
            ctx->pc = 0x22C968u;
            goto label_22c968;
        }
    }
    ctx->pc = 0x22C938u;
label_22c938:
    // 0x22c938: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22c938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_22c93c:
    // 0x22c93c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22c940:
    // 0x22c940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c944:
    // 0x22c944: 0x0  nop
    ctx->pc = 0x22c944u;
    // NOP
label_22c948:
    // 0x22c948: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c94c:
    // 0x22c94c: 0x0  nop
    ctx->pc = 0x22c94cu;
    // NOP
label_22c950:
    // 0x22c950: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22c954:
    if (ctx->pc == 0x22C954u) {
        ctx->pc = 0x22C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C950u;
        // 0x22c954: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C958u;
        goto label_22c958;
    }
    ctx->pc = 0x22C950u;
    {
        const bool branch_taken_0x22c950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C950u;
        // 0x22c954: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c950) {
            ctx->pc = 0x22C968u;
            goto label_22c968;
        }
    }
    ctx->pc = 0x22C958u;
label_22c958:
    // 0x22c958: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22c95c:
    // 0x22c95c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c960:
    // 0x22c960: 0x10000001  b           . + 4 + (0x1 << 2)
label_22c964:
    if (ctx->pc == 0x22C964u) {
        ctx->pc = 0x22C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C960u;
        // 0x22c964: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C968u;
        goto label_22c968;
    }
    ctx->pc = 0x22C960u;
    {
        const bool branch_taken_0x22c960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C960u;
        // 0x22c964: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c960) {
            ctx->pc = 0x22C968u;
            goto label_22c968;
        }
    }
    ctx->pc = 0x22C968u;
label_22c968:
    // 0x22c968: 0xe6210050  swc1        $f1, 0x50($s1)
    ctx->pc = 0x22c968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_22c96c:
    // 0x22c96c: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x22c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_22c970:
    // 0x22c970: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x22c970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22c974:
    // 0x22c974: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x22c974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_22c978:
    // 0x22c978: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22c97c:
    // 0x22c97c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22c980:
    // 0x22c980: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22c984:
    // 0x22c984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c988:
    // 0x22c988: 0x0  nop
    ctx->pc = 0x22c988u;
    // NOP
label_22c98c:
    // 0x22c98c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22c98cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_22c990:
    // 0x22c990: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c994:
    // 0x22c994: 0x0  nop
    ctx->pc = 0x22c994u;
    // NOP
label_22c998:
    // 0x22c998: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22c99c:
    if (ctx->pc == 0x22C99Cu) {
        ctx->pc = 0x22C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C998u;
        // 0x22c99c: 0xe6210054  swc1        $f1, 0x54($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9A0u;
        goto label_22c9a0;
    }
    ctx->pc = 0x22C998u;
    {
        const bool branch_taken_0x22c998 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C998u;
        // 0x22c99c: 0xe6210054  swc1        $f1, 0x54($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c998) {
            ctx->pc = 0x22C9B4u;
            goto label_22c9b4;
        }
    }
    ctx->pc = 0x22C9A0u;
label_22c9a0:
    // 0x22c9a0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22c9a4:
    // 0x22c9a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22c9a8:
    // 0x22c9a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c9ac:
    // 0x22c9ac: 0x1000000d  b           . + 4 + (0xD << 2)
label_22c9b0:
    if (ctx->pc == 0x22C9B0u) {
        ctx->pc = 0x22C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9ACu;
        // 0x22c9b0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9B4u;
        goto label_22c9b4;
    }
    ctx->pc = 0x22C9ACu;
    {
        const bool branch_taken_0x22c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9ACu;
        // 0x22c9b0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9ac) {
            ctx->pc = 0x22C9E4u;
            goto label_22c9e4;
        }
    }
    ctx->pc = 0x22C9B4u;
label_22c9b4:
    // 0x22c9b4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_22c9b8:
    // 0x22c9b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22c9bc:
    // 0x22c9bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c9c0:
    // 0x22c9c0: 0x0  nop
    ctx->pc = 0x22c9c0u;
    // NOP
label_22c9c4:
    // 0x22c9c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c9c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22c9c8:
    // 0x22c9c8: 0x0  nop
    ctx->pc = 0x22c9c8u;
    // NOP
label_22c9cc:
    // 0x22c9cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22c9d0:
    if (ctx->pc == 0x22C9D0u) {
        ctx->pc = 0x22C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9CCu;
        // 0x22c9d0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9D4u;
        goto label_22c9d4;
    }
    ctx->pc = 0x22C9CCu;
    {
        const bool branch_taken_0x22c9cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9CCu;
        // 0x22c9d0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9cc) {
            ctx->pc = 0x22C9E4u;
            goto label_22c9e4;
        }
    }
    ctx->pc = 0x22C9D4u;
label_22c9d4:
    // 0x22c9d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22c9d8:
    // 0x22c9d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22c9dc:
    // 0x22c9dc: 0x10000001  b           . + 4 + (0x1 << 2)
label_22c9e0:
    if (ctx->pc == 0x22C9E0u) {
        ctx->pc = 0x22C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9DCu;
        // 0x22c9e0: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9E4u;
        goto label_22c9e4;
    }
    ctx->pc = 0x22C9DCu;
    {
        const bool branch_taken_0x22c9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9DCu;
        // 0x22c9e0: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9dc) {
            ctx->pc = 0x22C9E4u;
            goto label_22c9e4;
        }
    }
    ctx->pc = 0x22C9E4u;
label_22c9e4:
    // 0x22c9e4: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x22c9e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_22c9e8:
    // 0x22c9e8: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x22c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_22c9ec:
    // 0x22c9ec: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x22c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22c9f0:
    // 0x22c9f0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22c9f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22c9f4:
    // 0x22c9f4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22c9f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22c9f8:
    // 0x22c9f8: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22c9f8u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22c9fc:
    // 0x22c9fc: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22c9fcu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22ca00:
    // 0x22ca00: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x22ca00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22ca04:
    // 0x22ca04: 0xfa310010  sqc2        $vf17, 0x10($s1)
    ctx->pc = 0x22ca04u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22ca08:
    // 0x22ca08: 0xfa320020  sqc2        $vf18, 0x20($s1)
    ctx->pc = 0x22ca08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22ca0c:
    // 0x22ca0c: 0xfa330030  sqc2        $vf19, 0x30($s1)
    ctx->pc = 0x22ca0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22ca10:
    // 0x22ca10: 0xc05ff64  jal         func_17FD90
label_22ca14:
    if (ctx->pc == 0x22CA14u) {
        ctx->pc = 0x22CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA10u;
        // 0x22ca14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA18u;
        goto label_22ca18;
    }
    ctx->pc = 0x22CA10u;
    SET_GPR_U32(ctx, 31, 0x22CA18u);
    ctx->pc = 0x22CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA10u;
    // 0x22ca14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD90u;
    { ctx->pc = 0x17fd90; return; }
    ctx->pc = 0x22CA18u;
label_22ca18:
    // 0x22ca18: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x22ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22ca1c:
    // 0x22ca1c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x22ca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22ca20:
    // 0x22ca20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ca20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ca24:
    // 0x22ca24: 0xc05f3d0  jal         func_17CF40
label_22ca28:
    if (ctx->pc == 0x22CA28u) {
        ctx->pc = 0x22CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA24u;
        // 0x22ca28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA2Cu;
        goto label_22ca2c;
    }
    ctx->pc = 0x22CA24u;
    SET_GPR_U32(ctx, 31, 0x22CA2Cu);
    ctx->pc = 0x22CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA24u;
    // 0x22ca28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x22CA2Cu;
label_22ca2c:
    // 0x22ca2c: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x22ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22ca30:
    // 0x22ca30: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x22ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_22ca34:
    // 0x22ca34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22ca34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_22ca38:
    // 0x22ca38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ca38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ca3c:
    // 0x22ca3c: 0x0  nop
    ctx->pc = 0x22ca3cu;
    // NOP
label_22ca40:
    // 0x22ca40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22ca40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22ca44:
    // 0x22ca44: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22ca44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22ca48:
    // 0x22ca48: 0x0  nop
    ctx->pc = 0x22ca48u;
    // NOP
label_22ca4c:
    // 0x22ca4c: 0x45000063  bc1f        . + 4 + (0x63 << 2)
label_22ca50:
    if (ctx->pc == 0x22CA50u) {
        ctx->pc = 0x22CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA4Cu;
        // 0x22ca50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA54u;
        goto label_22ca54;
    }
    ctx->pc = 0x22CA4Cu;
    {
        const bool branch_taken_0x22ca4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA4Cu;
        // 0x22ca50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca4c) {
            ctx->pc = 0x22CBDCu;
            goto label_22cbdc;
        }
    }
    ctx->pc = 0x22CA54u;
label_22ca54:
    // 0x22ca54: 0x10000053  b           . + 4 + (0x53 << 2)
label_22ca58:
    if (ctx->pc == 0x22CA58u) {
        ctx->pc = 0x22CA5Cu;
        goto label_22ca5c;
    }
    ctx->pc = 0x22CA54u;
    {
        const bool branch_taken_0x22ca54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ca54) {
            ctx->pc = 0x22CBA4u;
            goto label_22cba4;
        }
    }
    ctx->pc = 0x22CA5Cu;
label_22ca5c:
    // 0x22ca5c: 0xc08f0cc  jal         func_23C330
label_22ca60:
    if (ctx->pc == 0x22CA60u) {
        ctx->pc = 0x22CA64u;
        goto label_22ca64;
    }
    ctx->pc = 0x22CA5Cu;
    SET_GPR_U32(ctx, 31, 0x22CA64u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22CA64u;
label_22ca64:
    // 0x22ca64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22ca64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22ca68:
    // 0x22ca68: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22ca6c:
    // 0x22ca6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22ca6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22ca70:
    // 0x22ca70: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x22ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_22ca74:
    // 0x22ca74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ca74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ca78:
    // 0x22ca78: 0x0  nop
    ctx->pc = 0x22ca78u;
    // NOP
label_22ca7c:
    // 0x22ca7c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x22ca7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22ca80:
    // 0x22ca80: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x22ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
label_22ca84:
    // 0x22ca84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ca84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22ca88:
    // 0x22ca88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ca88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ca8c:
    // 0x22ca8c: 0x0  nop
    ctx->pc = 0x22ca8cu;
    // NOP
label_22ca90:
    // 0x22ca90: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22ca90u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22ca94:
    // 0x22ca94: 0x0  nop
    ctx->pc = 0x22ca94u;
    // NOP
label_22ca98:
    // 0x22ca98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22ca98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22ca9c:
    // 0x22ca9c: 0xc08f0cc  jal         func_23C330
label_22caa0:
    if (ctx->pc == 0x22CAA0u) {
        ctx->pc = 0x22CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA9Cu;
        // 0x22caa0: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CAA4u;
        goto label_22caa4;
    }
    ctx->pc = 0x22CA9Cu;
    SET_GPR_U32(ctx, 31, 0x22CAA4u);
    ctx->pc = 0x22CAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA9Cu;
    // 0x22caa0: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22CAA4u;
label_22caa4:
    // 0x22caa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22caa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22caa8:
    // 0x22caa8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22caac:
    // 0x22caac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22caacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22cab0:
    // 0x22cab0: 0x0  nop
    ctx->pc = 0x22cab0u;
    // NOP
label_22cab4:
    // 0x22cab4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22cab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22cab8:
    // 0x22cab8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x22cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_22cabc:
    // 0x22cabc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x22cabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22cac0:
    // 0x22cac0: 0x0  nop
    ctx->pc = 0x22cac0u;
    // NOP
label_22cac4:
    // 0x22cac4: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x22cac4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_22cac8:
    // 0x22cac8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x22cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_22cacc:
    // 0x22cacc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22caccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22cad0:
    // 0x22cad0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x22cad0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_22cad4:
    // 0x22cad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cad8:
    // 0x22cad8: 0x0  nop
    ctx->pc = 0x22cad8u;
    // NOP
label_22cadc:
    // 0x22cadc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22cadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22cae0:
    // 0x22cae0: 0xc08f0cc  jal         func_23C330
label_22cae4:
    if (ctx->pc == 0x22CAE4u) {
        ctx->pc = 0x22CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAE0u;
        // 0x22cae4: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CAE8u;
        goto label_22cae8;
    }
    ctx->pc = 0x22CAE0u;
    SET_GPR_U32(ctx, 31, 0x22CAE8u);
    ctx->pc = 0x22CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CAE0u;
    // 0x22cae4: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22CAE8u;
label_22cae8:
    // 0x22cae8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22caec:
    // 0x22caec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22caecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_22caf0:
    // 0x22caf0: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x22caf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_22caf4:
    // 0x22caf4: 0x3c04c0c0  lui         $a0, 0xC0C0
    ctx->pc = 0x22caf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49344 << 16));
label_22caf8:
    // 0x22caf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22caf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22cafc:
    // 0x22cafc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x22cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_22cb00:
    // 0x22cb00: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x22cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_22cb04:
    // 0x22cb04: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x22cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22cb08:
    // 0x22cb08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cb0c:
    // 0x22cb0c: 0x0  nop
    ctx->pc = 0x22cb0cu;
    // NOP
label_22cb10:
    // 0x22cb10: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x22cb10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22cb14:
    // 0x22cb14: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_22cb18:
    // 0x22cb18: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x22cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_22cb1c:
    // 0x22cb1c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x22cb1cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22cb20:
    // 0x22cb20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22cb20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cb24:
    // 0x22cb24: 0x0  nop
    ctx->pc = 0x22cb24u;
    // NOP
label_22cb28:
    // 0x22cb28: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22cb28u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22cb2c:
    // 0x22cb2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22cb2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22cb30:
    // 0x22cb30: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x22cb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_22cb34:
    // 0x22cb34: 0x8c540030  lw          $s4, 0x30($v0)
    ctx->pc = 0x22cb34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_22cb38:
    // 0x22cb38: 0xc066e26  jal         func_19B898
label_22cb3c:
    if (ctx->pc == 0x22CB3Cu) {
        ctx->pc = 0x22CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB38u;
        // 0x22cb3c: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB40u;
        goto label_22cb40;
    }
    ctx->pc = 0x22CB38u;
    SET_GPR_U32(ctx, 31, 0x22CB40u);
    ctx->pc = 0x22CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB38u;
    // 0x22cb3c: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22CB40u;
label_22cb40:
    // 0x22cb40: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x22cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_22cb44:
    // 0x22cb44: 0xc066e26  jal         func_19B898
label_22cb48:
    if (ctx->pc == 0x22CB48u) {
        ctx->pc = 0x22CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB44u;
        // 0x22cb48: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB4Cu;
        goto label_22cb4c;
    }
    ctx->pc = 0x22CB44u;
    SET_GPR_U32(ctx, 31, 0x22CB4Cu);
    ctx->pc = 0x22CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB44u;
    // 0x22cb48: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22CB4Cu;
label_22cb4c:
    // 0x22cb4c: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x22cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_22cb50:
    // 0x22cb50: 0xc066e26  jal         func_19B898
label_22cb54:
    if (ctx->pc == 0x22CB54u) {
        ctx->pc = 0x22CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB50u;
        // 0x22cb54: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB58u;
        goto label_22cb58;
    }
    ctx->pc = 0x22CB50u;
    SET_GPR_U32(ctx, 31, 0x22CB58u);
    ctx->pc = 0x22CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB50u;
    // 0x22cb54: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22CB58u;
label_22cb58:
    // 0x22cb58: 0xc0590dc  jal         func_164370
label_22cb5c:
    if (ctx->pc == 0x22CB5Cu) {
        ctx->pc = 0x22CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB58u;
        // 0x22cb5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB60u;
        goto label_22cb60;
    }
    ctx->pc = 0x22CB58u;
    SET_GPR_U32(ctx, 31, 0x22CB60u);
    ctx->pc = 0x22CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB58u;
    // 0x22cb5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x22CB60u;
label_22cb60:
    // 0x22cb60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22cb60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22cb64:
    // 0x22cb64: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_22cb68:
    if (ctx->pc == 0x22CB68u) {
        ctx->pc = 0x22CB6Cu;
        goto label_22cb6c;
    }
    ctx->pc = 0x22CB64u;
    {
        const bool branch_taken_0x22cb64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cb64) {
            ctx->pc = 0x22CBA0u;
            goto label_22cba0;
        }
    }
    ctx->pc = 0x22CB6Cu;
label_22cb6c:
    // 0x22cb6c: 0xa6400014  sh          $zero, 0x14($s2)
    ctx->pc = 0x22cb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 0));
label_22cb70:
    // 0x22cb70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22cb74:
    // 0x22cb74: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x22cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_22cb78:
    // 0x22cb78: 0xae54005c  sw          $s4, 0x5C($s2)
    ctx->pc = 0x22cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 20));
label_22cb7c:
    // 0x22cb7c: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x22cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
label_22cb80:
    // 0x22cb80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22cb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22cb84:
    // 0x22cb84: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x22cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_22cb88:
    // 0x22cb88: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x22cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22cb8c:
    // 0x22cb8c: 0xc066e14  jal         func_19B850
label_22cb90:
    if (ctx->pc == 0x22CB90u) {
        ctx->pc = 0x22CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB8Cu;
        // 0x22cb90: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB94u;
        goto label_22cb94;
    }
    ctx->pc = 0x22CB8Cu;
    SET_GPR_U32(ctx, 31, 0x22CB94u);
    ctx->pc = 0x22CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB8Cu;
    // 0x22cb90: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x22CB94u;
label_22cb94:
    // 0x22cb94: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x22cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_22cb98:
    // 0x22cb98: 0x2442cc00  addiu       $v0, $v0, -0x3400
    ctx->pc = 0x22cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953984));
label_22cb9c:
    // 0x22cb9c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x22cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_22cba0:
    // 0x22cba0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22cba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22cba4:
    // 0x22cba4: 0x0  nop
    ctx->pc = 0x22cba4u;
    // NOP
label_22cba8:
    // 0x22cba8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x22cba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_22cbac:
    // 0x22cbac: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_22cbb0:
    if (ctx->pc == 0x22CBB0u) {
        ctx->pc = 0x22CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBACu;
        // 0x22cbb0: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBB4u;
        goto label_22cbb4;
    }
    ctx->pc = 0x22CBACu;
    {
        const bool branch_taken_0x22cbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBACu;
        // 0x22cbb0: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbac) {
            ctx->pc = 0x22CA5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ca5c;
        }
    }
    ctx->pc = 0x22CBB4u;
label_22cbb4:
    // 0x22cbb4: 0xc066e26  jal         func_19B898
label_22cbb8:
    if (ctx->pc == 0x22CBB8u) {
        ctx->pc = 0x22CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBB4u;
        // 0x22cbb8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBBCu;
        goto label_22cbbc;
    }
    ctx->pc = 0x22CBB4u;
    SET_GPR_U32(ctx, 31, 0x22CBBCu);
    ctx->pc = 0x22CBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CBB4u;
    // 0x22cbb8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22CBBCu;
label_22cbbc:
    // 0x22cbbc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_22cbc0:
    // 0x22cbc0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22cbc4:
    // 0x22cbc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cbc8:
    // 0x22cbc8: 0x0  nop
    ctx->pc = 0x22cbc8u;
    // NOP
label_22cbcc:
    // 0x22cbcc: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x22cbccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_22cbd0:
    // 0x22cbd0: 0xc04a0a4  jal         func_128290
label_22cbd4:
    if (ctx->pc == 0x22CBD4u) {
        ctx->pc = 0x22CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBD0u;
        // 0x22cbd4: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CBD8u;
        goto label_22cbd8;
    }
    ctx->pc = 0x22CBD0u;
    SET_GPR_U32(ctx, 31, 0x22CBD8u);
    ctx->pc = 0x22CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CBD0u;
    // 0x22cbd4: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x128290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128290u, 0x22CBD0u, 0x22CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBD8u;
label_22cbd8:
    // 0x22cbd8: 0xa6600016  sh          $zero, 0x16($s3)
    ctx->pc = 0x22cbd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 0));
label_22cbdc:
    // 0x22cbdc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22cbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22cbe0:
    // 0x22cbe0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22cbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22cbe4:
    // 0x22cbe4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x22cbe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22cbe8:
    // 0x22cbe8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22cbe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22cbec:
    // 0x22cbec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22cbecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22cbf0:
    // 0x22cbf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22cbf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22cbf4:
    // 0x22cbf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22cbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22cbf8:
    // 0x22cbf8: 0x3e00008  jr          $ra
label_22cbfc:
    if (ctx->pc == 0x22CBFCu) {
        ctx->pc = 0x22CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBF8u;
        // 0x22cbfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC00u;
        goto label_22cc00;
    }
    ctx->pc = 0x22CBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBF8u;
        // 0x22cbfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CC00u;
label_22cc00:
    // 0x22cc00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_22cc04:
    // 0x22cc04: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22cc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22cc08:
    // 0x22cc08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22cc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22cc0c:
    // 0x22cc0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22cc10:
    // 0x22cc10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22cc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_22cc14:
    // 0x22cc14: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22cc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22cc18:
    // 0x22cc18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22cc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22cc1c:
    // 0x22cc1c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x22cc1cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_22cc20:
    // 0x22cc20: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x22cc20u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_22cc24:
    // 0x22cc24: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x22cc24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22cc28:
    // 0x22cc28: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22cc28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_22cc2c:
    // 0x22cc2c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22cc2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22cc30:
    // 0x22cc30: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x22cc30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22cc34:
    // 0x22cc34: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22cc38:
    if (ctx->pc == 0x22CC38u) {
        ctx->pc = 0x22CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC34u;
        // 0x22cc38: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC3Cu;
        goto label_22cc3c;
    }
    ctx->pc = 0x22CC34u;
    {
        const bool branch_taken_0x22cc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC34u;
        // 0x22cc38: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc34) {
            ctx->pc = 0x22CC44u;
            goto label_22cc44;
        }
    }
    ctx->pc = 0x22CC3Cu;
label_22cc3c:
    // 0x22cc3c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_22cc40:
    if (ctx->pc == 0x22CC40u) {
        ctx->pc = 0x22CC44u;
        goto label_22cc44;
    }
    ctx->pc = 0x22CC3Cu;
    {
        const bool branch_taken_0x22cc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cc3c) {
            ctx->pc = 0x22CC54u;
            goto label_22cc54;
        }
    }
    ctx->pc = 0x22CC44u;
label_22cc44:
    // 0x22cc44: 0xc0591f4  jal         func_1647D0
label_22cc48:
    if (ctx->pc == 0x22CC48u) {
        ctx->pc = 0x22CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC44u;
        // 0x22cc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC4Cu;
        goto label_22cc4c;
    }
    ctx->pc = 0x22CC44u;
    SET_GPR_U32(ctx, 31, 0x22CC4Cu);
    ctx->pc = 0x22CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC44u;
    // 0x22cc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    { ctx->pc = 0x1647d0; return; }
    ctx->pc = 0x22CC4Cu;
label_22cc4c:
    // 0x22cc4c: 0x100000dc  b           . + 4 + (0xDC << 2)
label_22cc50:
    if (ctx->pc == 0x22CC50u) {
        ctx->pc = 0x22CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC4Cu;
        // 0x22cc50: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC54u;
        goto label_22cc54;
    }
    ctx->pc = 0x22CC4Cu;
    {
        const bool branch_taken_0x22cc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC4Cu;
        // 0x22cc50: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc4c) {
            ctx->pc = 0x22CFC0u;
            { ctx->pc = 0x22cfc0; return; }
        }
    }
    ctx->pc = 0x22CC54u;
label_22cc54:
    // 0x22cc54: 0x96420014  lhu         $v0, 0x14($s2)
    ctx->pc = 0x22cc54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_22cc58:
    // 0x22cc58: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x22cc58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_22cc5c:
    // 0x22cc5c: 0x102000d5  beqz        $at, . + 4 + (0xD5 << 2)
label_22cc60:
    if (ctx->pc == 0x22CC60u) {
        ctx->pc = 0x22CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC5Cu;
        // 0x22cc60: 0x8e50005c  lw          $s0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC64u;
        goto label_22cc64;
    }
    ctx->pc = 0x22CC5Cu;
    {
        const bool branch_taken_0x22cc5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC5Cu;
        // 0x22cc60: 0x8e50005c  lw          $s0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc5c) {
            ctx->pc = 0x22CFB4u;
            { ctx->pc = 0x22cfb4; return; }
        }
    }
    ctx->pc = 0x22CC64u;
label_22cc64:
    // 0x22cc64: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x22cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22cc68:
    // 0x22cc68: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22cc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22cc6c:
    // 0x22cc6c: 0xc066e02  jal         func_19B808
label_22cc70:
    if (ctx->pc == 0x22CC70u) {
        ctx->pc = 0x22CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC6Cu;
        // 0x22cc70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC74u;
        goto label_22cc74;
    }
    ctx->pc = 0x22CC6Cu;
    SET_GPR_U32(ctx, 31, 0x22CC74u);
    ctx->pc = 0x22CC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC6Cu;
    // 0x22cc70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22CC74u;
label_22cc74:
    // 0x22cc74: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x22cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_22cc78:
    // 0x22cc78: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22cc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22cc7c:
    // 0x22cc7c: 0xc066e02  jal         func_19B808
label_22cc80:
    if (ctx->pc == 0x22CC80u) {
        ctx->pc = 0x22CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC7Cu;
        // 0x22cc80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC84u;
        goto label_22cc84;
    }
    ctx->pc = 0x22CC7Cu;
    SET_GPR_U32(ctx, 31, 0x22CC84u);
    ctx->pc = 0x22CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC7Cu;
    // 0x22cc80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22CC84u;
label_22cc84:
    // 0x22cc84: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x22cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_22cc88:
    // 0x22cc88: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22cc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22cc8c:
    // 0x22cc8c: 0xc066e02  jal         func_19B808
label_22cc90:
    if (ctx->pc == 0x22CC90u) {
        ctx->pc = 0x22CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC8Cu;
        // 0x22cc90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CC94u;
        goto label_22cc94;
    }
    ctx->pc = 0x22CC8Cu;
    SET_GPR_U32(ctx, 31, 0x22CC94u);
    ctx->pc = 0x22CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC8Cu;
    // 0x22cc90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22CC94u;
label_22cc94:
    // 0x22cc94: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x22cc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22cc98:
    // 0x22cc98: 0x3c023f09  lui         $v0, 0x3F09
    ctx->pc = 0x22cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16137 << 16));
label_22cc9c:
    // 0x22cc9c: 0x34421870  ori         $v0, $v0, 0x1870
    ctx->pc = 0x22cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6256);
label_22cca0:
    // 0x22cca0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x22cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22cca4:
    // 0x22cca4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22cca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22cca8:
    // 0x22cca8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22ccac:
    // 0x22ccac: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x22ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ccb0:
    // 0x22ccb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ccb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ccb4:
    // 0x22ccb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22ccb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ccb8:
    // 0x22ccb8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x22ccb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_22ccbc:
    // 0x22ccbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22ccbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22ccc0:
    // 0x22ccc0: 0xc05f3d0  jal         func_17CF40
label_22ccc4:
    if (ctx->pc == 0x22CCC4u) {
        ctx->pc = 0x22CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCC0u;
        // 0x22ccc4: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CCC8u;
        goto label_22ccc8;
    }
    ctx->pc = 0x22CCC0u;
    SET_GPR_U32(ctx, 31, 0x22CCC8u);
    ctx->pc = 0x22CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCC0u;
    // 0x22ccc4: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x22CCC8u;
label_22ccc8:
    // 0x22ccc8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22ccc8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_22cccc:
    // 0x22cccc: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x22ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22ccd0:
    // 0x22ccd0: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x22ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ccd4:
    // 0x22ccd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ccd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22ccd8:
    // 0x22ccd8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22ccd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22ccdc:
    // 0x22ccdc: 0x0  nop
    ctx->pc = 0x22ccdcu;
    // NOP
label_22cce0:
    // 0x22cce0: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
label_22cce4:
    if (ctx->pc == 0x22CCE4u) {
        ctx->pc = 0x22CCE8u;
        goto label_22cce8;
    }
    ctx->pc = 0x22CCE0u;
    {
        const bool branch_taken_0x22cce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cce0) {
            ctx->pc = 0x22CE54u;
            { ctx->pc = 0x22ce54; return; }
        }
    }
    ctx->pc = 0x22CCE8u;
label_22cce8:
    // 0x22cce8: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x22cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22ccec:
    // 0x22ccec: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x22ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_22ccf0:
    // 0x22ccf0: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x22ccf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22ccf4:
    // 0x22ccf4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22ccf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22ccf8:
    // 0x22ccf8: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x22ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
label_22ccfc:
    // 0x22ccfc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22cd00:
    // 0x22cd00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22cd04:
    // 0x22cd04: 0x0  nop
    ctx->pc = 0x22cd04u;
    // NOP
label_22cd08:
    // 0x22cd08: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22cd08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_22cd0c:
    // 0x22cd0c: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x22cd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_22cd10:
    // 0x22cd10: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x22cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22cd14:
    // 0x22cd14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22cd14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22cd18:
    // 0x22cd18: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x22cd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_22cd1c:
    // 0x22cd1c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x22cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22cd20:
    // 0x22cd20: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x22cd20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_22cd24:
    // 0x22cd24: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x22cd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_22cd28:
    // 0x22cd28: 0x96420014  lhu         $v0, 0x14($s2)
    ctx->pc = 0x22cd28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_22cd2c:
    // 0x22cd2c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_22cd30:
    if (ctx->pc == 0x22CD30u) {
        ctx->pc = 0x22CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD2Cu;
        // 0x22cd30: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CD34u;
        goto label_22cd34;
    }
    ctx->pc = 0x22CD2Cu;
    {
        const bool branch_taken_0x22cd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD2Cu;
        // 0x22cd30: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd2c) {
            ctx->pc = 0x22CE44u;
            goto label_22ce44;
        }
    }
    ctx->pc = 0x22CD34u;
label_22cd34:
    // 0x22cd34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22cd34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cd38:
    // 0x22cd38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22cd3c:
    // 0x22cd3c: 0xc6420050  lwc1        $f2, 0x50($s2)
    ctx->pc = 0x22cd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22cd40:
    // 0x22cd40: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x22cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_22cd44:
    // 0x22cd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cd48:
    // 0x22cd48: 0x0  nop
    ctx->pc = 0x22cd48u;
    // NOP
label_22cd4c:
    // 0x22cd4c: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x22cd4cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22cd50:
    // 0x22cd50: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x22cd50u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_22cd54:
    // 0x22cd54: 0xc08f0cc  jal         func_23C330
label_22cd58:
    if (ctx->pc == 0x22CD58u) {
        ctx->pc = 0x22CD5Cu;
        goto label_22cd5c;
    }
    ctx->pc = 0x22CD54u;
    SET_GPR_U32(ctx, 31, 0x22CD5Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22CD5Cu;
label_22cd5c:
    // 0x22cd5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cd60:
    // 0x22cd60: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22cd64:
    // 0x22cd64: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22cd64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22cd68:
    // 0x22cd68: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_22cd6c:
    // 0x22cd6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22cd70:
    // 0x22cd70: 0x0  nop
    ctx->pc = 0x22cd70u;
    // NOP
label_22cd74:
    // 0x22cd74: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22cd74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22cd78:
    // 0x22cd78: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x22cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_22cd7c:
    // 0x22cd7c: 0x46160dc2  mul.s       $f23, $f1, $f22
    ctx->pc = 0x22cd7cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_22cd80:
    // 0x22cd80: 0x4602b882  mul.s       $f2, $f23, $f2
    ctx->pc = 0x22cd80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
label_22cd84:
    // 0x22cd84: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x22cd84u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_22cd88:
    // 0x22cd88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22cd8c:
    // 0x22cd8c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x22cd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22cd90:
    // 0x22cd90: 0x46160e02  mul.s       $f24, $f1, $f22
    ctx->pc = 0x22cd90u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_22cd94:
    // 0x22cd94: 0x4602c040  add.s       $f1, $f24, $f2
    ctx->pc = 0x22cd94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
label_22cd98:
    // 0x22cd98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22cd98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22cd9c:
    // 0x22cd9c: 0xc08f0cc  jal         func_23C330
label_22cda0:
    if (ctx->pc == 0x22CDA0u) {
        ctx->pc = 0x22CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD9Cu;
        // 0x22cda0: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDA4u;
        goto label_22cda4;
    }
    ctx->pc = 0x22CD9Cu;
    SET_GPR_U32(ctx, 31, 0x22CDA4u);
    ctx->pc = 0x22CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD9Cu;
    // 0x22cda0: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22CDA4u;
label_22cda4:
    // 0x22cda4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22cda8:
    // 0x22cda8: 0x0  nop
    ctx->pc = 0x22cda8u;
    // NOP
label_22cdac:
    // 0x22cdac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22cdacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22cdb0:
    // 0x22cdb0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x22cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_22cdb4:
    // 0x22cdb4: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x22cdb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
label_22cdb8:
    // 0x22cdb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cdb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cdbc:
    // 0x22cdbc: 0x0  nop
    ctx->pc = 0x22cdbcu;
    // NOP
label_22cdc0:
    // 0x22cdc0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x22cdc0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_22cdc4:
    // 0x22cdc4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_22cdc8:
    // 0x22cdc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cdc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22cdcc:
    // 0x22cdcc: 0x0  nop
    ctx->pc = 0x22cdccu;
    // NOP
label_22cdd0:
    // 0x22cdd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22cdd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22cdd4:
    // 0x22cdd4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x22cdd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_22cdd8:
    // 0x22cdd8: 0xc08f0cc  jal         func_23C330
label_22cddc:
    if (ctx->pc == 0x22CDDCu) {
        ctx->pc = 0x22CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDD8u;
        // 0x22cddc: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CDE0u;
        goto label_22cde0;
    }
    ctx->pc = 0x22CDD8u;
    SET_GPR_U32(ctx, 31, 0x22CDE0u);
    ctx->pc = 0x22CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CDD8u;
    // 0x22cddc: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22CDE0u;
label_22cde0:
    // 0x22cde0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22cde0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22cde4:
    // 0x22cde4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cde8:
    // 0x22cde8: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x22cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22cdec:
    // 0x22cdec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22cdf0:
    // 0x22cdf0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22cdf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22cdf4:
    // 0x22cdf4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x22cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_22cdf8:
    // 0x22cdf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22cdf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cdfc:
    // 0x22cdfc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22cdfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22ce00:
    // 0x22ce00: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x22ce00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_22ce04:
    // 0x22ce04: 0x4602b882  mul.s       $f2, $f23, $f2
    ctx->pc = 0x22ce04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
label_22ce08:
    // 0x22ce08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22ce08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22ce0c:
    // 0x22ce0c: 0x0  nop
    ctx->pc = 0x22ce0cu;
    // NOP
label_22ce10:
    // 0x22ce10: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22ce10u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22ce14:
    // 0x22ce14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22ce18:
    // 0x22ce18: 0x4601c040  add.s       $f1, $f24, $f1
    ctx->pc = 0x22ce18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_22ce1c:
    // 0x22ce1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22ce1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22ce20:
    // 0x22ce20: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x22ce20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_22ce24:
    // 0x22ce24: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22ce24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22ce28:
    // 0x22ce28: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x22ce28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_22ce2c:
    // 0x22ce2c: 0xc04bc90  jal         func_12F240
label_22ce30:
    if (ctx->pc == 0x22CE30u) {
        ctx->pc = 0x22CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE2Cu;
        // 0x22ce30: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CE34u;
        goto label_22ce34;
    }
    ctx->pc = 0x22CE2Cu;
    SET_GPR_U32(ctx, 31, 0x22CE34u);
    ctx->pc = 0x22CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE2Cu;
    // 0x22ce30: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F240u, 0x22CE2Cu, 0x22CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE34u;
label_22ce34:
    // 0x22ce34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22ce34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22ce38:
    // 0x22ce38: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x22ce38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_22ce3c:
    // 0x22ce3c: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_22ce40:
    if (ctx->pc == 0x22CE40u) {
        ctx->pc = 0x22CE44u;
        goto label_22ce44;
    }
    ctx->pc = 0x22CE3Cu;
    {
        const bool branch_taken_0x22ce3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ce3c) {
            ctx->pc = 0x22CD54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cd54;
        }
    }
    ctx->pc = 0x22CE44u;
label_22ce44:
    // 0x22ce44: 0x0  nop
    ctx->pc = 0x22ce44u;
    // NOP
label_22ce48:
    // 0x22ce48: 0x96420014  lhu         $v0, 0x14($s2)
    ctx->pc = 0x22ce48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_22ce4c:
    // 0x22ce4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x22ce50u;
    return;
}
