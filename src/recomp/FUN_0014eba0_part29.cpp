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


void FUN_0014eba0_part29(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15c660u: goto label_15c660;
        case 0x15c664u: goto label_15c664;
        case 0x15c668u: goto label_15c668;
        case 0x15c66cu: goto label_15c66c;
        case 0x15c670u: goto label_15c670;
        case 0x15c674u: goto label_15c674;
        case 0x15c678u: goto label_15c678;
        case 0x15c67cu: goto label_15c67c;
        case 0x15c680u: goto label_15c680;
        case 0x15c684u: goto label_15c684;
        case 0x15c688u: goto label_15c688;
        case 0x15c68cu: goto label_15c68c;
        case 0x15c690u: goto label_15c690;
        case 0x15c694u: goto label_15c694;
        case 0x15c698u: goto label_15c698;
        case 0x15c69cu: goto label_15c69c;
        case 0x15c6a0u: goto label_15c6a0;
        case 0x15c6a4u: goto label_15c6a4;
        case 0x15c6a8u: goto label_15c6a8;
        case 0x15c6acu: goto label_15c6ac;
        case 0x15c6b0u: goto label_15c6b0;
        case 0x15c6b4u: goto label_15c6b4;
        case 0x15c6b8u: goto label_15c6b8;
        case 0x15c6bcu: goto label_15c6bc;
        case 0x15c6c0u: goto label_15c6c0;
        case 0x15c6c4u: goto label_15c6c4;
        case 0x15c6c8u: goto label_15c6c8;
        case 0x15c6ccu: goto label_15c6cc;
        case 0x15c6d0u: goto label_15c6d0;
        case 0x15c6d4u: goto label_15c6d4;
        case 0x15c6d8u: goto label_15c6d8;
        case 0x15c6dcu: goto label_15c6dc;
        case 0x15c6e0u: goto label_15c6e0;
        case 0x15c6e4u: goto label_15c6e4;
        case 0x15c6e8u: goto label_15c6e8;
        case 0x15c6ecu: goto label_15c6ec;
        case 0x15c6f0u: goto label_15c6f0;
        case 0x15c6f4u: goto label_15c6f4;
        case 0x15c6f8u: goto label_15c6f8;
        case 0x15c6fcu: goto label_15c6fc;
        case 0x15c700u: goto label_15c700;
        case 0x15c704u: goto label_15c704;
        case 0x15c708u: goto label_15c708;
        case 0x15c70cu: goto label_15c70c;
        case 0x15c710u: goto label_15c710;
        case 0x15c714u: goto label_15c714;
        case 0x15c718u: goto label_15c718;
        case 0x15c71cu: goto label_15c71c;
        case 0x15c720u: goto label_15c720;
        case 0x15c724u: goto label_15c724;
        case 0x15c728u: goto label_15c728;
        case 0x15c72cu: goto label_15c72c;
        case 0x15c730u: goto label_15c730;
        case 0x15c734u: goto label_15c734;
        case 0x15c738u: goto label_15c738;
        case 0x15c73cu: goto label_15c73c;
        case 0x15c740u: goto label_15c740;
        case 0x15c744u: goto label_15c744;
        case 0x15c748u: goto label_15c748;
        case 0x15c74cu: goto label_15c74c;
        case 0x15c750u: goto label_15c750;
        case 0x15c754u: goto label_15c754;
        case 0x15c758u: goto label_15c758;
        case 0x15c75cu: goto label_15c75c;
        case 0x15c760u: goto label_15c760;
        case 0x15c764u: goto label_15c764;
        case 0x15c768u: goto label_15c768;
        case 0x15c76cu: goto label_15c76c;
        case 0x15c770u: goto label_15c770;
        case 0x15c774u: goto label_15c774;
        case 0x15c778u: goto label_15c778;
        case 0x15c77cu: goto label_15c77c;
        case 0x15c780u: goto label_15c780;
        case 0x15c784u: goto label_15c784;
        case 0x15c788u: goto label_15c788;
        case 0x15c78cu: goto label_15c78c;
        case 0x15c790u: goto label_15c790;
        case 0x15c794u: goto label_15c794;
        case 0x15c798u: goto label_15c798;
        case 0x15c79cu: goto label_15c79c;
        case 0x15c7a0u: goto label_15c7a0;
        case 0x15c7a4u: goto label_15c7a4;
        case 0x15c7a8u: goto label_15c7a8;
        case 0x15c7acu: goto label_15c7ac;
        case 0x15c7b0u: goto label_15c7b0;
        case 0x15c7b4u: goto label_15c7b4;
        case 0x15c7b8u: goto label_15c7b8;
        case 0x15c7bcu: goto label_15c7bc;
        case 0x15c7c0u: goto label_15c7c0;
        case 0x15c7c4u: goto label_15c7c4;
        case 0x15c7c8u: goto label_15c7c8;
        case 0x15c7ccu: goto label_15c7cc;
        case 0x15c7d0u: goto label_15c7d0;
        case 0x15c7d4u: goto label_15c7d4;
        case 0x15c7d8u: goto label_15c7d8;
        case 0x15c7dcu: goto label_15c7dc;
        case 0x15c7e0u: goto label_15c7e0;
        case 0x15c7e4u: goto label_15c7e4;
        case 0x15c7e8u: goto label_15c7e8;
        case 0x15c7ecu: goto label_15c7ec;
        case 0x15c7f0u: goto label_15c7f0;
        case 0x15c7f4u: goto label_15c7f4;
        case 0x15c7f8u: goto label_15c7f8;
        case 0x15c7fcu: goto label_15c7fc;
        case 0x15c800u: goto label_15c800;
        case 0x15c804u: goto label_15c804;
        case 0x15c808u: goto label_15c808;
        case 0x15c80cu: goto label_15c80c;
        case 0x15c810u: goto label_15c810;
        case 0x15c814u: goto label_15c814;
        case 0x15c818u: goto label_15c818;
        case 0x15c81cu: goto label_15c81c;
        case 0x15c820u: goto label_15c820;
        case 0x15c824u: goto label_15c824;
        case 0x15c828u: goto label_15c828;
        case 0x15c82cu: goto label_15c82c;
        case 0x15c830u: goto label_15c830;
        case 0x15c834u: goto label_15c834;
        case 0x15c838u: goto label_15c838;
        case 0x15c83cu: goto label_15c83c;
        case 0x15c840u: goto label_15c840;
        case 0x15c844u: goto label_15c844;
        case 0x15c848u: goto label_15c848;
        case 0x15c84cu: goto label_15c84c;
        case 0x15c850u: goto label_15c850;
        case 0x15c854u: goto label_15c854;
        case 0x15c858u: goto label_15c858;
        case 0x15c85cu: goto label_15c85c;
        case 0x15c860u: goto label_15c860;
        case 0x15c864u: goto label_15c864;
        case 0x15c868u: goto label_15c868;
        case 0x15c86cu: goto label_15c86c;
        case 0x15c870u: goto label_15c870;
        case 0x15c874u: goto label_15c874;
        case 0x15c878u: goto label_15c878;
        case 0x15c87cu: goto label_15c87c;
        case 0x15c880u: goto label_15c880;
        case 0x15c884u: goto label_15c884;
        case 0x15c888u: goto label_15c888;
        case 0x15c88cu: goto label_15c88c;
        case 0x15c890u: goto label_15c890;
        case 0x15c894u: goto label_15c894;
        case 0x15c898u: goto label_15c898;
        case 0x15c89cu: goto label_15c89c;
        case 0x15c8a0u: goto label_15c8a0;
        case 0x15c8a4u: goto label_15c8a4;
        case 0x15c8a8u: goto label_15c8a8;
        case 0x15c8acu: goto label_15c8ac;
        case 0x15c8b0u: goto label_15c8b0;
        case 0x15c8b4u: goto label_15c8b4;
        case 0x15c8b8u: goto label_15c8b8;
        case 0x15c8bcu: goto label_15c8bc;
        case 0x15c8c0u: goto label_15c8c0;
        case 0x15c8c4u: goto label_15c8c4;
        case 0x15c8c8u: goto label_15c8c8;
        case 0x15c8ccu: goto label_15c8cc;
        case 0x15c8d0u: goto label_15c8d0;
        case 0x15c8d4u: goto label_15c8d4;
        case 0x15c8d8u: goto label_15c8d8;
        case 0x15c8dcu: goto label_15c8dc;
        case 0x15c8e0u: goto label_15c8e0;
        case 0x15c8e4u: goto label_15c8e4;
        case 0x15c8e8u: goto label_15c8e8;
        case 0x15c8ecu: goto label_15c8ec;
        case 0x15c8f0u: goto label_15c8f0;
        case 0x15c8f4u: goto label_15c8f4;
        case 0x15c8f8u: goto label_15c8f8;
        case 0x15c8fcu: goto label_15c8fc;
        case 0x15c900u: goto label_15c900;
        case 0x15c904u: goto label_15c904;
        case 0x15c908u: goto label_15c908;
        case 0x15c90cu: goto label_15c90c;
        case 0x15c910u: goto label_15c910;
        case 0x15c914u: goto label_15c914;
        case 0x15c918u: goto label_15c918;
        case 0x15c91cu: goto label_15c91c;
        case 0x15c920u: goto label_15c920;
        case 0x15c924u: goto label_15c924;
        case 0x15c928u: goto label_15c928;
        case 0x15c92cu: goto label_15c92c;
        case 0x15c930u: goto label_15c930;
        case 0x15c934u: goto label_15c934;
        case 0x15c938u: goto label_15c938;
        case 0x15c93cu: goto label_15c93c;
        case 0x15c940u: goto label_15c940;
        case 0x15c944u: goto label_15c944;
        case 0x15c948u: goto label_15c948;
        case 0x15c94cu: goto label_15c94c;
        case 0x15c950u: goto label_15c950;
        case 0x15c954u: goto label_15c954;
        case 0x15c958u: goto label_15c958;
        case 0x15c95cu: goto label_15c95c;
        case 0x15c960u: goto label_15c960;
        case 0x15c964u: goto label_15c964;
        case 0x15c968u: goto label_15c968;
        case 0x15c96cu: goto label_15c96c;
        case 0x15c970u: goto label_15c970;
        case 0x15c974u: goto label_15c974;
        case 0x15c978u: goto label_15c978;
        case 0x15c97cu: goto label_15c97c;
        case 0x15c980u: goto label_15c980;
        case 0x15c984u: goto label_15c984;
        case 0x15c988u: goto label_15c988;
        case 0x15c98cu: goto label_15c98c;
        case 0x15c990u: goto label_15c990;
        case 0x15c994u: goto label_15c994;
        case 0x15c998u: goto label_15c998;
        case 0x15c99cu: goto label_15c99c;
        case 0x15c9a0u: goto label_15c9a0;
        case 0x15c9a4u: goto label_15c9a4;
        case 0x15c9a8u: goto label_15c9a8;
        case 0x15c9acu: goto label_15c9ac;
        case 0x15c9b0u: goto label_15c9b0;
        case 0x15c9b4u: goto label_15c9b4;
        case 0x15c9b8u: goto label_15c9b8;
        case 0x15c9bcu: goto label_15c9bc;
        case 0x15c9c0u: goto label_15c9c0;
        case 0x15c9c4u: goto label_15c9c4;
        case 0x15c9c8u: goto label_15c9c8;
        case 0x15c9ccu: goto label_15c9cc;
        case 0x15c9d0u: goto label_15c9d0;
        case 0x15c9d4u: goto label_15c9d4;
        case 0x15c9d8u: goto label_15c9d8;
        case 0x15c9dcu: goto label_15c9dc;
        case 0x15c9e0u: goto label_15c9e0;
        case 0x15c9e4u: goto label_15c9e4;
        case 0x15c9e8u: goto label_15c9e8;
        case 0x15c9ecu: goto label_15c9ec;
        case 0x15c9f0u: goto label_15c9f0;
        case 0x15c9f4u: goto label_15c9f4;
        case 0x15c9f8u: goto label_15c9f8;
        case 0x15c9fcu: goto label_15c9fc;
        case 0x15ca00u: goto label_15ca00;
        case 0x15ca04u: goto label_15ca04;
        case 0x15ca08u: goto label_15ca08;
        case 0x15ca0cu: goto label_15ca0c;
        case 0x15ca10u: goto label_15ca10;
        case 0x15ca14u: goto label_15ca14;
        case 0x15ca18u: goto label_15ca18;
        case 0x15ca1cu: goto label_15ca1c;
        case 0x15ca20u: goto label_15ca20;
        case 0x15ca24u: goto label_15ca24;
        case 0x15ca28u: goto label_15ca28;
        case 0x15ca2cu: goto label_15ca2c;
        case 0x15ca30u: goto label_15ca30;
        case 0x15ca34u: goto label_15ca34;
        case 0x15ca38u: goto label_15ca38;
        case 0x15ca3cu: goto label_15ca3c;
        case 0x15ca40u: goto label_15ca40;
        case 0x15ca44u: goto label_15ca44;
        case 0x15ca48u: goto label_15ca48;
        case 0x15ca4cu: goto label_15ca4c;
        case 0x15ca50u: goto label_15ca50;
        case 0x15ca54u: goto label_15ca54;
        case 0x15ca58u: goto label_15ca58;
        case 0x15ca5cu: goto label_15ca5c;
        case 0x15ca60u: goto label_15ca60;
        case 0x15ca64u: goto label_15ca64;
        case 0x15ca68u: goto label_15ca68;
        case 0x15ca6cu: goto label_15ca6c;
        case 0x15ca70u: goto label_15ca70;
        case 0x15ca74u: goto label_15ca74;
        case 0x15ca78u: goto label_15ca78;
        case 0x15ca7cu: goto label_15ca7c;
        case 0x15ca80u: goto label_15ca80;
        case 0x15ca84u: goto label_15ca84;
        case 0x15ca88u: goto label_15ca88;
        case 0x15ca8cu: goto label_15ca8c;
        case 0x15ca90u: goto label_15ca90;
        case 0x15ca94u: goto label_15ca94;
        case 0x15ca98u: goto label_15ca98;
        case 0x15ca9cu: goto label_15ca9c;
        case 0x15caa0u: goto label_15caa0;
        case 0x15caa4u: goto label_15caa4;
        case 0x15caa8u: goto label_15caa8;
        case 0x15caacu: goto label_15caac;
        case 0x15cab0u: goto label_15cab0;
        case 0x15cab4u: goto label_15cab4;
        case 0x15cab8u: goto label_15cab8;
        case 0x15cabcu: goto label_15cabc;
        case 0x15cac0u: goto label_15cac0;
        case 0x15cac4u: goto label_15cac4;
        case 0x15cac8u: goto label_15cac8;
        case 0x15caccu: goto label_15cacc;
        case 0x15cad0u: goto label_15cad0;
        case 0x15cad4u: goto label_15cad4;
        case 0x15cad8u: goto label_15cad8;
        case 0x15cadcu: goto label_15cadc;
        case 0x15cae0u: goto label_15cae0;
        case 0x15cae4u: goto label_15cae4;
        case 0x15cae8u: goto label_15cae8;
        case 0x15caecu: goto label_15caec;
        case 0x15caf0u: goto label_15caf0;
        case 0x15caf4u: goto label_15caf4;
        case 0x15caf8u: goto label_15caf8;
        case 0x15cafcu: goto label_15cafc;
        case 0x15cb00u: goto label_15cb00;
        case 0x15cb04u: goto label_15cb04;
        case 0x15cb08u: goto label_15cb08;
        case 0x15cb0cu: goto label_15cb0c;
        case 0x15cb10u: goto label_15cb10;
        case 0x15cb14u: goto label_15cb14;
        case 0x15cb18u: goto label_15cb18;
        case 0x15cb1cu: goto label_15cb1c;
        case 0x15cb20u: goto label_15cb20;
        case 0x15cb24u: goto label_15cb24;
        case 0x15cb28u: goto label_15cb28;
        case 0x15cb2cu: goto label_15cb2c;
        case 0x15cb30u: goto label_15cb30;
        case 0x15cb34u: goto label_15cb34;
        case 0x15cb38u: goto label_15cb38;
        case 0x15cb3cu: goto label_15cb3c;
        case 0x15cb40u: goto label_15cb40;
        case 0x15cb44u: goto label_15cb44;
        case 0x15cb48u: goto label_15cb48;
        case 0x15cb4cu: goto label_15cb4c;
        case 0x15cb50u: goto label_15cb50;
        case 0x15cb54u: goto label_15cb54;
        case 0x15cb58u: goto label_15cb58;
        case 0x15cb5cu: goto label_15cb5c;
        case 0x15cb60u: goto label_15cb60;
        case 0x15cb64u: goto label_15cb64;
        case 0x15cb68u: goto label_15cb68;
        case 0x15cb6cu: goto label_15cb6c;
        case 0x15cb70u: goto label_15cb70;
        case 0x15cb74u: goto label_15cb74;
        case 0x15cb78u: goto label_15cb78;
        case 0x15cb7cu: goto label_15cb7c;
        case 0x15cb80u: goto label_15cb80;
        case 0x15cb84u: goto label_15cb84;
        case 0x15cb88u: goto label_15cb88;
        case 0x15cb8cu: goto label_15cb8c;
        case 0x15cb90u: goto label_15cb90;
        case 0x15cb94u: goto label_15cb94;
        case 0x15cb98u: goto label_15cb98;
        case 0x15cb9cu: goto label_15cb9c;
        case 0x15cba0u: goto label_15cba0;
        case 0x15cba4u: goto label_15cba4;
        case 0x15cba8u: goto label_15cba8;
        case 0x15cbacu: goto label_15cbac;
        case 0x15cbb0u: goto label_15cbb0;
        case 0x15cbb4u: goto label_15cbb4;
        case 0x15cbb8u: goto label_15cbb8;
        case 0x15cbbcu: goto label_15cbbc;
        case 0x15cbc0u: goto label_15cbc0;
        case 0x15cbc4u: goto label_15cbc4;
        case 0x15cbc8u: goto label_15cbc8;
        case 0x15cbccu: goto label_15cbcc;
        case 0x15cbd0u: goto label_15cbd0;
        case 0x15cbd4u: goto label_15cbd4;
        case 0x15cbd8u: goto label_15cbd8;
        case 0x15cbdcu: goto label_15cbdc;
        case 0x15cbe0u: goto label_15cbe0;
        case 0x15cbe4u: goto label_15cbe4;
        case 0x15cbe8u: goto label_15cbe8;
        case 0x15cbecu: goto label_15cbec;
        case 0x15cbf0u: goto label_15cbf0;
        case 0x15cbf4u: goto label_15cbf4;
        case 0x15cbf8u: goto label_15cbf8;
        case 0x15cbfcu: goto label_15cbfc;
        case 0x15cc00u: goto label_15cc00;
        case 0x15cc04u: goto label_15cc04;
        case 0x15cc08u: goto label_15cc08;
        case 0x15cc0cu: goto label_15cc0c;
        case 0x15cc10u: goto label_15cc10;
        case 0x15cc14u: goto label_15cc14;
        case 0x15cc18u: goto label_15cc18;
        case 0x15cc1cu: goto label_15cc1c;
        case 0x15cc20u: goto label_15cc20;
        case 0x15cc24u: goto label_15cc24;
        case 0x15cc28u: goto label_15cc28;
        case 0x15cc2cu: goto label_15cc2c;
        case 0x15cc30u: goto label_15cc30;
        case 0x15cc34u: goto label_15cc34;
        case 0x15cc38u: goto label_15cc38;
        case 0x15cc3cu: goto label_15cc3c;
        case 0x15cc40u: goto label_15cc40;
        case 0x15cc44u: goto label_15cc44;
        case 0x15cc48u: goto label_15cc48;
        case 0x15cc4cu: goto label_15cc4c;
        case 0x15cc50u: goto label_15cc50;
        case 0x15cc54u: goto label_15cc54;
        case 0x15cc58u: goto label_15cc58;
        case 0x15cc5cu: goto label_15cc5c;
        case 0x15cc60u: goto label_15cc60;
        case 0x15cc64u: goto label_15cc64;
        case 0x15cc68u: goto label_15cc68;
        case 0x15cc6cu: goto label_15cc6c;
        case 0x15cc70u: goto label_15cc70;
        case 0x15cc74u: goto label_15cc74;
        case 0x15cc78u: goto label_15cc78;
        case 0x15cc7cu: goto label_15cc7c;
        case 0x15cc80u: goto label_15cc80;
        case 0x15cc84u: goto label_15cc84;
        case 0x15cc88u: goto label_15cc88;
        case 0x15cc8cu: goto label_15cc8c;
        case 0x15cc90u: goto label_15cc90;
        case 0x15cc94u: goto label_15cc94;
        case 0x15cc98u: goto label_15cc98;
        case 0x15cc9cu: goto label_15cc9c;
        case 0x15cca0u: goto label_15cca0;
        case 0x15cca4u: goto label_15cca4;
        case 0x15cca8u: goto label_15cca8;
        case 0x15ccacu: goto label_15ccac;
        case 0x15ccb0u: goto label_15ccb0;
        case 0x15ccb4u: goto label_15ccb4;
        case 0x15ccb8u: goto label_15ccb8;
        case 0x15ccbcu: goto label_15ccbc;
        case 0x15ccc0u: goto label_15ccc0;
        case 0x15ccc4u: goto label_15ccc4;
        case 0x15ccc8u: goto label_15ccc8;
        case 0x15ccccu: goto label_15cccc;
        case 0x15ccd0u: goto label_15ccd0;
        case 0x15ccd4u: goto label_15ccd4;
        case 0x15ccd8u: goto label_15ccd8;
        case 0x15ccdcu: goto label_15ccdc;
        case 0x15cce0u: goto label_15cce0;
        case 0x15cce4u: goto label_15cce4;
        case 0x15cce8u: goto label_15cce8;
        case 0x15ccecu: goto label_15ccec;
        case 0x15ccf0u: goto label_15ccf0;
        case 0x15ccf4u: goto label_15ccf4;
        case 0x15ccf8u: goto label_15ccf8;
        case 0x15ccfcu: goto label_15ccfc;
        case 0x15cd00u: goto label_15cd00;
        case 0x15cd04u: goto label_15cd04;
        case 0x15cd08u: goto label_15cd08;
        case 0x15cd0cu: goto label_15cd0c;
        case 0x15cd10u: goto label_15cd10;
        case 0x15cd14u: goto label_15cd14;
        case 0x15cd18u: goto label_15cd18;
        case 0x15cd1cu: goto label_15cd1c;
        case 0x15cd20u: goto label_15cd20;
        case 0x15cd24u: goto label_15cd24;
        case 0x15cd28u: goto label_15cd28;
        case 0x15cd2cu: goto label_15cd2c;
        case 0x15cd30u: goto label_15cd30;
        case 0x15cd34u: goto label_15cd34;
        case 0x15cd38u: goto label_15cd38;
        case 0x15cd3cu: goto label_15cd3c;
        case 0x15cd40u: goto label_15cd40;
        case 0x15cd44u: goto label_15cd44;
        case 0x15cd48u: goto label_15cd48;
        case 0x15cd4cu: goto label_15cd4c;
        case 0x15cd50u: goto label_15cd50;
        case 0x15cd54u: goto label_15cd54;
        case 0x15cd58u: goto label_15cd58;
        case 0x15cd5cu: goto label_15cd5c;
        case 0x15cd60u: goto label_15cd60;
        case 0x15cd64u: goto label_15cd64;
        case 0x15cd68u: goto label_15cd68;
        case 0x15cd6cu: goto label_15cd6c;
        case 0x15cd70u: goto label_15cd70;
        case 0x15cd74u: goto label_15cd74;
        case 0x15cd78u: goto label_15cd78;
        case 0x15cd7cu: goto label_15cd7c;
        case 0x15cd80u: goto label_15cd80;
        case 0x15cd84u: goto label_15cd84;
        case 0x15cd88u: goto label_15cd88;
        case 0x15cd8cu: goto label_15cd8c;
        case 0x15cd90u: goto label_15cd90;
        case 0x15cd94u: goto label_15cd94;
        case 0x15cd98u: goto label_15cd98;
        case 0x15cd9cu: goto label_15cd9c;
        case 0x15cda0u: goto label_15cda0;
        case 0x15cda4u: goto label_15cda4;
        case 0x15cda8u: goto label_15cda8;
        case 0x15cdacu: goto label_15cdac;
        case 0x15cdb0u: goto label_15cdb0;
        case 0x15cdb4u: goto label_15cdb4;
        case 0x15cdb8u: goto label_15cdb8;
        case 0x15cdbcu: goto label_15cdbc;
        case 0x15cdc0u: goto label_15cdc0;
        case 0x15cdc4u: goto label_15cdc4;
        case 0x15cdc8u: goto label_15cdc8;
        case 0x15cdccu: goto label_15cdcc;
        case 0x15cdd0u: goto label_15cdd0;
        case 0x15cdd4u: goto label_15cdd4;
        case 0x15cdd8u: goto label_15cdd8;
        case 0x15cddcu: goto label_15cddc;
        case 0x15cde0u: goto label_15cde0;
        case 0x15cde4u: goto label_15cde4;
        case 0x15cde8u: goto label_15cde8;
        case 0x15cdecu: goto label_15cdec;
        case 0x15cdf0u: goto label_15cdf0;
        case 0x15cdf4u: goto label_15cdf4;
        case 0x15cdf8u: goto label_15cdf8;
        case 0x15cdfcu: goto label_15cdfc;
        case 0x15ce00u: goto label_15ce00;
        case 0x15ce04u: goto label_15ce04;
        case 0x15ce08u: goto label_15ce08;
        case 0x15ce0cu: goto label_15ce0c;
        case 0x15ce10u: goto label_15ce10;
        case 0x15ce14u: goto label_15ce14;
        case 0x15ce18u: goto label_15ce18;
        case 0x15ce1cu: goto label_15ce1c;
        case 0x15ce20u: goto label_15ce20;
        case 0x15ce24u: goto label_15ce24;
        case 0x15ce28u: goto label_15ce28;
        case 0x15ce2cu: goto label_15ce2c;
        default: return;
    }

label_15c660:
    // 0x15c660: 0xffa30060  sd          $v1, 0x60($sp)
    ctx->pc = 0x15c660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 3));
label_15c664:
    // 0x15c664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c668:
    // 0x15c668: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x15c668u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_15c66c:
    // 0x15c66c: 0xc066d5c  jal         func_19B570
label_15c670:
    if (ctx->pc == 0x15C670u) {
        ctx->pc = 0x15C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C66Cu;
        // 0x15c670: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C674u;
        goto label_15c674;
    }
    ctx->pc = 0x15C66Cu;
    SET_GPR_U32(ctx, 31, 0x15C674u);
    ctx->pc = 0x15C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C66Cu;
    // 0x15c670: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15C674u;
label_15c674:
    // 0x15c674: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x15c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_15c678:
    // 0x15c678: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x15c678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_15c67c:
    // 0x15c67c: 0xffa30060  sd          $v1, 0x60($sp)
    ctx->pc = 0x15c67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 3));
label_15c680:
    // 0x15c680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c684:
    // 0x15c684: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x15c684u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_15c688:
    // 0x15c688: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15c68c:
    // 0x15c68c: 0xc066d5c  jal         func_19B570
label_15c690:
    if (ctx->pc == 0x15C690u) {
        ctx->pc = 0x15C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C68Cu;
        // 0x15c690: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C694u;
        goto label_15c694;
    }
    ctx->pc = 0x15C68Cu;
    SET_GPR_U32(ctx, 31, 0x15C694u);
    ctx->pc = 0x15C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C68Cu;
    // 0x15c690: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15C694u;
label_15c694:
    // 0x15c694: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x15c694u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_15c698:
    // 0x15c698: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15c69c:
    // 0x15c69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c6a0:
    // 0x15c6a0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15c6a4:
    // 0x15c6a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15c6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c6a8:
    // 0x15c6a8: 0xffa30060  sd          $v1, 0x60($sp)
    ctx->pc = 0x15c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 3));
label_15c6ac:
    // 0x15c6ac: 0xc066d5c  jal         func_19B570
label_15c6b0:
    if (ctx->pc == 0x15C6B0u) {
        ctx->pc = 0x15C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6ACu;
        // 0x15c6b0: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6B4u;
        goto label_15c6b4;
    }
    ctx->pc = 0x15C6ACu;
    SET_GPR_U32(ctx, 31, 0x15C6B4u);
    ctx->pc = 0x15C6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C6ACu;
    // 0x15c6b0: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15C6B4u;
label_15c6b4:
    // 0x15c6b4: 0x2e410080  sltiu       $at, $s2, 0x80
    ctx->pc = 0x15c6b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_15c6b8:
    // 0x15c6b8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_15c6bc:
    if (ctx->pc == 0x15C6BCu) {
        ctx->pc = 0x15C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6B8u;
        // 0x15c6bc: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6C0u;
        goto label_15c6c0;
    }
    ctx->pc = 0x15C6B8u;
    {
        const bool branch_taken_0x15c6b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6B8u;
        // 0x15c6bc: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6b8) {
            ctx->pc = 0x15C6D0u;
            goto label_15c6d0;
        }
    }
    ctx->pc = 0x15C6C0u;
label_15c6c0:
    // 0x15c6c0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x15c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_15c6c4:
    // 0x15c6c4: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x15c6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_15c6c8:
    // 0x15c6c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_15c6cc:
    if (ctx->pc == 0x15C6CCu) {
        ctx->pc = 0x15C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6C8u;
        // 0x15c6cc: 0xffa20060  sd          $v0, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6D0u;
        goto label_15c6d0;
    }
    ctx->pc = 0x15C6C8u;
    {
        const bool branch_taken_0x15c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6C8u;
        // 0x15c6cc: 0xffa20060  sd          $v0, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6c8) {
            ctx->pc = 0x15C6D8u;
            goto label_15c6d8;
        }
    }
    ctx->pc = 0x15C6D0u;
label_15c6d0:
    // 0x15c6d0: 0x344217fb  ori         $v0, $v0, 0x17FB
    ctx->pc = 0x15c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6139);
label_15c6d4:
    // 0x15c6d4: 0xffa20060  sd          $v0, 0x60($sp)
    ctx->pc = 0x15c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
label_15c6d8:
    // 0x15c6d8: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x15c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_15c6dc:
    // 0x15c6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c6e0:
    // 0x15c6e0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x15c6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_15c6e4:
    // 0x15c6e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15c6e8:
    // 0x15c6e8: 0xc066d5c  jal         func_19B570
label_15c6ec:
    if (ctx->pc == 0x15C6ECu) {
        ctx->pc = 0x15C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6E8u;
        // 0x15c6ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6F0u;
        goto label_15c6f0;
    }
    ctx->pc = 0x15C6E8u;
    SET_GPR_U32(ctx, 31, 0x15C6F0u);
    ctx->pc = 0x15C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C6E8u;
    // 0x15c6ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15C6F0u;
label_15c6f0:
    // 0x15c6f0: 0xc066cfe  jal         func_19B3F8
label_15c6f4:
    if (ctx->pc == 0x15C6F4u) {
        ctx->pc = 0x15C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6F0u;
        // 0x15c6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6F8u;
        goto label_15c6f8;
    }
    ctx->pc = 0x15C6F0u;
    SET_GPR_U32(ctx, 31, 0x15C6F8u);
    ctx->pc = 0x15C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C6F0u;
    // 0x15c6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3F8u;
    { ctx->pc = 0x19b3f8; return; }
    ctx->pc = 0x15C6F8u;
label_15c6f8:
    // 0x15c6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c6fc:
    // 0x15c6fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c700:
    // 0x15c700: 0xc066d10  jal         func_19B440
label_15c704:
    if (ctx->pc == 0x15C704u) {
        ctx->pc = 0x15C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C700u;
        // 0x15c704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C708u;
        goto label_15c708;
    }
    ctx->pc = 0x15C700u;
    SET_GPR_U32(ctx, 31, 0x15C708u);
    ctx->pc = 0x15C704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C700u;
    // 0x15c704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15C708u;
label_15c708:
    // 0x15c708: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x15c708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15c70c:
    // 0x15c70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c710:
    // 0x15c710: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x15c710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_15c714:
    // 0x15c714: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x15c714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_15c718:
    // 0x15c718: 0xc066cae  jal         func_19B2B8
label_15c71c:
    if (ctx->pc == 0x15C71Cu) {
        ctx->pc = 0x15C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C718u;
        // 0x15c71c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C720u;
        goto label_15c720;
    }
    ctx->pc = 0x15C718u;
    SET_GPR_U32(ctx, 31, 0x15C720u);
    ctx->pc = 0x15C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C718u;
    // 0x15c71c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B2B8u;
    { ctx->pc = 0x19b2b8; return; }
    ctx->pc = 0x15C720u;
label_15c720:
    // 0x15c720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c724:
    // 0x15c724: 0xc066d46  jal         func_19B518
label_15c728:
    if (ctx->pc == 0x15C728u) {
        ctx->pc = 0x15C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C724u;
        // 0x15c728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C72Cu;
        goto label_15c72c;
    }
    ctx->pc = 0x15C724u;
    SET_GPR_U32(ctx, 31, 0x15C72Cu);
    ctx->pc = 0x15C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C724u;
    // 0x15c728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15C72Cu;
label_15c72c:
    // 0x15c72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c730:
    // 0x15c730: 0xc066d46  jal         func_19B518
label_15c734:
    if (ctx->pc == 0x15C734u) {
        ctx->pc = 0x15C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C730u;
        // 0x15c734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C738u;
        goto label_15c738;
    }
    ctx->pc = 0x15C730u;
    SET_GPR_U32(ctx, 31, 0x15C738u);
    ctx->pc = 0x15C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C730u;
    // 0x15c734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15C738u;
label_15c738:
    // 0x15c738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c73c:
    // 0x15c73c: 0xc066d46  jal         func_19B518
label_15c740:
    if (ctx->pc == 0x15C740u) {
        ctx->pc = 0x15C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C73Cu;
        // 0x15c740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C744u;
        goto label_15c744;
    }
    ctx->pc = 0x15C73Cu;
    SET_GPR_U32(ctx, 31, 0x15C744u);
    ctx->pc = 0x15C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C73Cu;
    // 0x15c740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15C744u;
label_15c744:
    // 0x15c744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15c744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c748:
    // 0x15c748: 0xc066d46  jal         func_19B518
label_15c74c:
    if (ctx->pc == 0x15C74Cu) {
        ctx->pc = 0x15C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C748u;
        // 0x15c74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C750u;
        goto label_15c750;
    }
    ctx->pc = 0x15C748u;
    SET_GPR_U32(ctx, 31, 0x15C750u);
    ctx->pc = 0x15C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C748u;
    // 0x15c74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15C750u;
label_15c750:
    // 0x15c750: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15c750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c754:
    // 0x15c754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c758:
    // 0x15c758: 0xc066d4c  jal         func_19B530
label_15c75c:
    if (ctx->pc == 0x15C75Cu) {
        ctx->pc = 0x15C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C758u;
        // 0x15c75c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C760u;
        goto label_15c760;
    }
    ctx->pc = 0x15C758u;
    SET_GPR_U32(ctx, 31, 0x15C760u);
    ctx->pc = 0x15C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C758u;
    // 0x15c75c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B530u;
    { ctx->pc = 0x19b530; return; }
    ctx->pc = 0x15C760u;
label_15c760:
    // 0x15c760: 0xc066cd2  jal         func_19B348
label_15c764:
    if (ctx->pc == 0x15C764u) {
        ctx->pc = 0x15C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C760u;
        // 0x15c764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C768u;
        goto label_15c768;
    }
    ctx->pc = 0x15C760u;
    SET_GPR_U32(ctx, 31, 0x15C768u);
    ctx->pc = 0x15C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C760u;
    // 0x15c764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B348u;
    { ctx->pc = 0x19b348; return; }
    ctx->pc = 0x15C768u;
label_15c768:
    // 0x15c768: 0xc066c46  jal         func_19B118
label_15c76c:
    if (ctx->pc == 0x15C76Cu) {
        ctx->pc = 0x15C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C768u;
        // 0x15c76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C770u;
        goto label_15c770;
    }
    ctx->pc = 0x15C768u;
    SET_GPR_U32(ctx, 31, 0x15C770u);
    ctx->pc = 0x15C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C768u;
    // 0x15c76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x15C770u;
label_15c770:
    // 0x15c770: 0x8e9100c0  lw          $s1, 0xC0($s4)
    ctx->pc = 0x15c770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_15c774:
    // 0x15c774: 0x1000000e  b           . + 4 + (0xE << 2)
label_15c778:
    if (ctx->pc == 0x15C778u) {
        ctx->pc = 0x15C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C774u;
        // 0x15c778: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C77Cu;
        goto label_15c77c;
    }
    ctx->pc = 0x15C774u;
    {
        const bool branch_taken_0x15c774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C774u;
        // 0x15c778: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c774) {
            ctx->pc = 0x15C7B0u;
            goto label_15c7b0;
        }
    }
    ctx->pc = 0x15C77Cu;
label_15c77c:
    // 0x15c77c: 0x0  nop
    ctx->pc = 0x15c77cu;
    // NOP
label_15c780:
    // 0x15c780: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x15c780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15c784:
    // 0x15c784: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c788:
    if (ctx->pc == 0x15C788u) {
        ctx->pc = 0x15C78Cu;
        goto label_15c78c;
    }
    ctx->pc = 0x15C784u;
    {
        const bool branch_taken_0x15c784 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c784) {
            ctx->pc = 0x15C7A4u;
            goto label_15c7a4;
        }
    }
    ctx->pc = 0x15C78Cu;
label_15c78c:
    // 0x15c78c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x15c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_15c790:
    // 0x15c790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c794:
    // 0x15c794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15c794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c798:
    // 0x15c798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15c798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c79c:
    // 0x15c79c: 0xc066c72  jal         func_19B1C8
label_15c7a0:
    if (ctx->pc == 0x15C7A0u) {
        ctx->pc = 0x15C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C79Cu;
        // 0x15c7a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7A4u;
        goto label_15c7a4;
    }
    ctx->pc = 0x15C79Cu;
    SET_GPR_U32(ctx, 31, 0x15C7A4u);
    ctx->pc = 0x15C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C79Cu;
    // 0x15c7a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15C7A4u;
label_15c7a4:
    // 0x15c7a4: 0x0  nop
    ctx->pc = 0x15c7a4u;
    // NOP
label_15c7a8:
    // 0x15c7a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15c7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15c7ac:
    // 0x15c7ac: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15c7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15c7b0:
    // 0x15c7b0: 0x828300be  lb          $v1, 0xBE($s4)
    ctx->pc = 0x15c7b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 190)));
label_15c7b4:
    // 0x15c7b4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x15c7b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15c7b8:
    // 0x15c7b8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_15c7bc:
    if (ctx->pc == 0x15C7BCu) {
        ctx->pc = 0x15C7C0u;
        goto label_15c7c0;
    }
    ctx->pc = 0x15C7B8u;
    {
        const bool branch_taken_0x15c7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c7b8) {
            ctx->pc = 0x15C77Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c77c;
        }
    }
    ctx->pc = 0x15C7C0u;
label_15c7c0:
    // 0x15c7c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15c7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15c7c4:
    // 0x15c7c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c7c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15c7c8:
    // 0x15c7c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c7c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15c7cc:
    // 0x15c7cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c7ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15c7d0:
    // 0x15c7d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15c7d4:
    // 0x15c7d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15c7d8:
    // 0x15c7d8: 0x3e00008  jr          $ra
label_15c7dc:
    if (ctx->pc == 0x15C7DCu) {
        ctx->pc = 0x15C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7D8u;
        // 0x15c7dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7E0u;
        goto label_15c7e0;
    }
    ctx->pc = 0x15C7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7D8u;
        // 0x15c7dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C7E0u;
label_15c7e0:
    // 0x15c7e0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x15c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_15c7e4:
    // 0x15c7e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15c7e8:
    // 0x15c7e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15c7ec:
    // 0x15c7ec: 0x278280d0  addiu       $v0, $gp, -0x7F30
    ctx->pc = 0x15c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934736));
label_15c7f0:
    // 0x15c7f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15c7f4:
    // 0x15c7f4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c7f8:
    // 0x15c7f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15c7fc:
    // 0x15c7fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15c800:
    // 0x15c800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15c804:
    // 0x15c804: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15c808:
    // 0x15c808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15c80c:
    // 0x15c80c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x15c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15c810:
    // 0x15c810: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x15c810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15c814:
    // 0x15c814: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x15c814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_15c818:
    // 0x15c818: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_15c81c:
    if (ctx->pc == 0x15C81Cu) {
        ctx->pc = 0x15C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C818u;
        // 0x15c81c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C820u;
        goto label_15c820;
    }
    ctx->pc = 0x15C818u;
    {
        const bool branch_taken_0x15c818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C818u;
        // 0x15c81c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c818) {
            ctx->pc = 0x15C85Cu;
            goto label_15c85c;
        }
    }
    ctx->pc = 0x15C820u;
label_15c820:
    // 0x15c820: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x15c820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_15c824:
    // 0x15c824: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x15c824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_15c828:
    // 0x15c828: 0x552823  subu        $a1, $v0, $s5
    ctx->pc = 0x15c828u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_15c82c:
    // 0x15c82c: 0x246303c4  addiu       $v1, $v1, 0x3C4
    ctx->pc = 0x15c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 964));
label_15c830:
    // 0x15c830: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15c830u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15c834:
    // 0x15c834: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15c834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_15c838:
    // 0x15c838: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15c838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15c83c:
    // 0x15c83c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15c840:
    // 0x15c840: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x15c840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15c844:
    // 0x15c844: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15c844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15c848:
    // 0x15c848: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15c84c:
    // 0x15c84c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c850:
    if (ctx->pc == 0x15C850u) {
        ctx->pc = 0x15C854u;
        goto label_15c854;
    }
    ctx->pc = 0x15C84Cu;
    {
        const bool branch_taken_0x15c84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c84c) {
            ctx->pc = 0x15C85Cu;
            goto label_15c85c;
        }
    }
    ctx->pc = 0x15C854u;
label_15c854:
    // 0x15c854: 0xc07aef8  jal         func_1EBBE0
label_15c858:
    if (ctx->pc == 0x15C858u) {
        ctx->pc = 0x15C85Cu;
        goto label_15c85c;
    }
    ctx->pc = 0x15C854u;
    SET_GPR_U32(ctx, 31, 0x15C85Cu);
    ctx->pc = 0x1EBBE0u;
    { ctx->pc = 0x1ebbe0; return; }
    ctx->pc = 0x15C85Cu;
label_15c85c:
    // 0x15c85c: 0xc057a44  jal         func_15E910
label_15c860:
    if (ctx->pc == 0x15C860u) {
        ctx->pc = 0x15C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C85Cu;
        // 0x15c860: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C864u;
        goto label_15c864;
    }
    ctx->pc = 0x15C85Cu;
    SET_GPR_U32(ctx, 31, 0x15C864u);
    ctx->pc = 0x15C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C85Cu;
    // 0x15c860: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E910u;
    { ctx->pc = 0x15e910; return; }
    ctx->pc = 0x15C864u;
label_15c864:
    // 0x15c864: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15c864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c868:
    // 0x15c868: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x15c868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c86c:
    // 0x15c86c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15c86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c870:
    // 0x15c870: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15c870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c874:
    // 0x15c874: 0x0  nop
    ctx->pc = 0x15c874u;
    // NOP
label_15c878:
    // 0x15c878: 0x82220028  lb          $v0, 0x28($s1)
    ctx->pc = 0x15c878u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_15c87c:
    // 0x15c87c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_15c880:
    if (ctx->pc == 0x15C880u) {
        ctx->pc = 0x15C884u;
        goto label_15c884;
    }
    ctx->pc = 0x15C87Cu;
    {
        const bool branch_taken_0x15c87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c87c) {
            ctx->pc = 0x15C8FCu;
            goto label_15c8fc;
        }
    }
    ctx->pc = 0x15C884u;
label_15c884:
    // 0x15c884: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15c884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15c888:
    // 0x15c888: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x15c888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_15c88c:
    // 0x15c88c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c890:
    if (ctx->pc == 0x15C890u) {
        ctx->pc = 0x15C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C88Cu;
        // 0x15c890: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C894u;
        goto label_15c894;
    }
    ctx->pc = 0x15C88Cu;
    {
        const bool branch_taken_0x15c88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C88Cu;
        // 0x15c890: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c88c) {
            ctx->pc = 0x15C89Cu;
            goto label_15c89c;
        }
    }
    ctx->pc = 0x15C894u;
label_15c894:
    // 0x15c894: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_15c898:
    if (ctx->pc == 0x15C898u) {
        ctx->pc = 0x15C89Cu;
        goto label_15c89c;
    }
    ctx->pc = 0x15C894u;
    {
        const bool branch_taken_0x15c894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c894) {
            ctx->pc = 0x15C8E8u;
            goto label_15c8e8;
        }
    }
    ctx->pc = 0x15C89Cu;
label_15c89c:
    // 0x15c89c: 0x0  nop
    ctx->pc = 0x15c89cu;
    // NOP
label_15c8a0:
    // 0x15c8a0: 0x8222002a  lb          $v0, 0x2A($s1)
    ctx->pc = 0x15c8a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_15c8a4:
    // 0x15c8a4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_15c8a8:
    if (ctx->pc == 0x15C8A8u) {
        ctx->pc = 0x15C8ACu;
        goto label_15c8ac;
    }
    ctx->pc = 0x15C8A4u;
    {
        const bool branch_taken_0x15c8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c8a4) {
            ctx->pc = 0x15C8E8u;
            goto label_15c8e8;
        }
    }
    ctx->pc = 0x15C8ACu;
label_15c8ac:
    // 0x15c8ac: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x15c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_15c8b0:
    // 0x15c8b0: 0x90820232  lbu         $v0, 0x232($a0)
    ctx->pc = 0x15c8b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_15c8b4:
    // 0x15c8b4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_15c8b8:
    if (ctx->pc == 0x15C8B8u) {
        ctx->pc = 0x15C8BCu;
        goto label_15c8bc;
    }
    ctx->pc = 0x15C8B4u;
    {
        const bool branch_taken_0x15c8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c8b4) {
            ctx->pc = 0x15C8E8u;
            goto label_15c8e8;
        }
    }
    ctx->pc = 0x15C8BCu;
label_15c8bc:
    // 0x15c8bc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x15c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_15c8c0:
    // 0x15c8c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_15c8c4:
    // 0x15c8c4: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x15c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15c8c8:
    // 0x15c8c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15c8cc:
    // 0x15c8cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15c8d0:
    // 0x15c8d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15c8d4:
    if (ctx->pc == 0x15C8D4u) {
        ctx->pc = 0x15C8D8u;
        goto label_15c8d8;
    }
    ctx->pc = 0x15C8D0u;
    {
        const bool branch_taken_0x15c8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8d0) {
            ctx->pc = 0x15C8E8u;
            goto label_15c8e8;
        }
    }
    ctx->pc = 0x15C8D8u;
label_15c8d8:
    // 0x15c8d8: 0xc0439cc  jal         func_10E730
label_15c8dc:
    if (ctx->pc == 0x15C8DCu) {
        ctx->pc = 0x15C8E0u;
        goto label_15c8e0;
    }
    ctx->pc = 0x15C8D8u;
    SET_GPR_U32(ctx, 31, 0x15C8E0u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x15C8D8u, 0x15C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8E0u;
label_15c8e0:
    // 0x15c8e0: 0x10550006  beq         $v0, $s5, . + 4 + (0x6 << 2)
label_15c8e4:
    if (ctx->pc == 0x15C8E4u) {
        ctx->pc = 0x15C8E8u;
        goto label_15c8e8;
    }
    ctx->pc = 0x15C8E0u;
    {
        const bool branch_taken_0x15c8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x15c8e0) {
            ctx->pc = 0x15C8FCu;
            goto label_15c8fc;
        }
    }
    ctx->pc = 0x15C8E8u;
label_15c8e8:
    // 0x15c8e8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x15c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15c8ec:
    // 0x15c8ec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_15c8f0:
    // 0x15c8f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15c8f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15c8f4:
    // 0x15c8f4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x15c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_15c8f8:
    // 0x15c8f8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x15c8f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_15c8fc:
    // 0x15c8fc: 0x0  nop
    ctx->pc = 0x15c8fcu;
    // NOP
label_15c900:
    // 0x15c900: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15c904:
    // 0x15c904: 0x2a42002f  slti        $v0, $s2, 0x2F
    ctx->pc = 0x15c904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)47) ? 1 : 0);
label_15c908:
    // 0x15c908: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_15c90c:
    if (ctx->pc == 0x15C90Cu) {
        ctx->pc = 0x15C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C908u;
        // 0x15c90c: 0x26312150  addiu       $s1, $s1, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C910u;
        goto label_15c910;
    }
    ctx->pc = 0x15C908u;
    {
        const bool branch_taken_0x15c908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C908u;
        // 0x15c90c: 0x26312150  addiu       $s1, $s1, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c908) {
            ctx->pc = 0x15C874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c874;
        }
    }
    ctx->pc = 0x15C910u;
label_15c910:
    // 0x15c910: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x15c910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_15c914:
    // 0x15c914: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x15c914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15c918:
    // 0x15c918: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_15c91c:
    if (ctx->pc == 0x15C91Cu) {
        ctx->pc = 0x15C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C918u;
        // 0x15c91c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C920u;
        goto label_15c920;
    }
    ctx->pc = 0x15C918u;
    {
        const bool branch_taken_0x15c918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C918u;
        // 0x15c91c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c918) {
            ctx->pc = 0x15C9B8u;
            goto label_15c9b8;
        }
    }
    ctx->pc = 0x15C920u;
label_15c920:
    // 0x15c920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c924:
    // 0x15c924: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x15c924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15c928:
    // 0x15c928: 0x25640001  addiu       $a0, $t3, 0x1
    ctx->pc = 0x15c928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_15c92c:
    // 0x15c92c: 0x93082a  slt         $at, $a0, $s3
    ctx->pc = 0x15c92cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_15c930:
    // 0x15c930: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_15c934:
    if (ctx->pc == 0x15C934u) {
        ctx->pc = 0x15C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C930u;
        // 0x15c934: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C938u;
        goto label_15c938;
    }
    ctx->pc = 0x15C930u;
    {
        const bool branch_taken_0x15c930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C930u;
        // 0x15c934: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c930) {
            ctx->pc = 0x15C9A8u;
            goto label_15c9a8;
        }
    }
    ctx->pc = 0x15C938u;
label_15c938:
    // 0x15c938: 0x464821  addu        $t1, $v0, $a2
    ctx->pc = 0x15c938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15c93c:
    // 0x15c93c: 0x0  nop
    ctx->pc = 0x15c93cu;
    // NOP
label_15c940:
    // 0x15c940: 0x455021  addu        $t2, $v0, $a1
    ctx->pc = 0x15c940u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15c944:
    // 0x15c944: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x15c944u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_15c948:
    // 0x15c948: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x15c948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_15c94c:
    // 0x15c94c: 0x8d120024  lw          $s2, 0x24($t0)
    ctx->pc = 0x15c94cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_15c950:
    // 0x15c950: 0x8cee0024  lw          $t6, 0x24($a3)
    ctx->pc = 0x15c950u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_15c954:
    // 0x15c954: 0x810f002a  lb          $t7, 0x2A($t0)
    ctx->pc = 0x15c954u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 42)));
label_15c958:
    // 0x15c958: 0x80ec002a  lb          $t4, 0x2A($a3)
    ctx->pc = 0x15c958u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 42)));
label_15c95c:
    // 0x15c95c: 0x8111002b  lb          $s1, 0x2B($t0)
    ctx->pc = 0x15c95cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 43)));
label_15c960:
    // 0x15c960: 0x80ed002b  lb          $t5, 0x2B($a3)
    ctx->pc = 0x15c960u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 43)));
label_15c964:
    // 0x15c964: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x15c964u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_15c968:
    // 0x15c968: 0xe7200  sll         $t6, $t6, 8
    ctx->pc = 0x15c968u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
label_15c96c:
    // 0x15c96c: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x15c96cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_15c970:
    // 0x15c970: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x15c970u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_15c974:
    // 0x15c974: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x15c974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_15c978:
    // 0x15c978: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x15c978u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_15c97c:
    // 0x15c97c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x15c97cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
label_15c980:
    // 0x15c980: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x15c980u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_15c984:
    // 0x15c984: 0x18f082a  slt         $at, $t4, $t7
    ctx->pc = 0x15c984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
label_15c988:
    // 0x15c988: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15c98c:
    if (ctx->pc == 0x15C98Cu) {
        ctx->pc = 0x15C990u;
        goto label_15c990;
    }
    ctx->pc = 0x15C988u;
    {
        const bool branch_taken_0x15c988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c988) {
            ctx->pc = 0x15C998u;
            goto label_15c998;
        }
    }
    ctx->pc = 0x15C990u;
label_15c990:
    // 0x15c990: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x15c990u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
label_15c994:
    // 0x15c994: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x15c994u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
label_15c998:
    // 0x15c998: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15c99c:
    // 0x15c99c: 0x93382a  slt         $a3, $a0, $s3
    ctx->pc = 0x15c99cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_15c9a0:
    // 0x15c9a0: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
label_15c9a4:
    if (ctx->pc == 0x15C9A4u) {
        ctx->pc = 0x15C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9A0u;
        // 0x15c9a4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9A8u;
        goto label_15c9a8;
    }
    ctx->pc = 0x15C9A0u;
    {
        const bool branch_taken_0x15c9a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9A0u;
        // 0x15c9a4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9a0) {
            ctx->pc = 0x15C93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c93c;
        }
    }
    ctx->pc = 0x15C9A8u;
label_15c9a8:
    // 0x15c9a8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x15c9a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_15c9ac:
    // 0x15c9ac: 0x163202a  slt         $a0, $t3, $v1
    ctx->pc = 0x15c9acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15c9b0:
    // 0x15c9b0: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
label_15c9b4:
    if (ctx->pc == 0x15C9B4u) {
        ctx->pc = 0x15C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9B0u;
        // 0x15c9b4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9B8u;
        goto label_15c9b8;
    }
    ctx->pc = 0x15C9B0u;
    {
        const bool branch_taken_0x15c9b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9B0u;
        // 0x15c9b4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9b0) {
            ctx->pc = 0x15C928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c928;
        }
    }
    ctx->pc = 0x15C9B8u;
label_15c9b8:
    // 0x15c9b8: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x15c9b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_15c9bc:
    // 0x15c9bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15c9bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c9c0:
    // 0x15c9c0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x15c9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_15c9c4:
    // 0x15c9c4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_15c9c8:
    if (ctx->pc == 0x15C9C8u) {
        ctx->pc = 0x15C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9C4u;
        // 0x15c9c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9CCu;
        goto label_15c9cc;
    }
    ctx->pc = 0x15C9C4u;
    {
        const bool branch_taken_0x15c9c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9C4u;
        // 0x15c9c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9c4) {
            ctx->pc = 0x15CA30u;
            goto label_15ca30;
        }
    }
    ctx->pc = 0x15C9CCu;
label_15c9cc:
    // 0x15c9cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15c9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c9d0:
    // 0x15c9d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c9d4:
    // 0x15c9d4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15c9d8:
    // 0x15c9d8: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x15c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_15c9dc:
    // 0x15c9dc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x15c9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15c9e0:
    // 0x15c9e0: 0x8d020024  lw          $v0, 0x24($t0)
    ctx->pc = 0x15c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_15c9e4:
    // 0x15c9e4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_15c9e8:
    if (ctx->pc == 0x15C9E8u) {
        ctx->pc = 0x15C9ECu;
        goto label_15c9ec;
    }
    ctx->pc = 0x15C9E4u;
    {
        const bool branch_taken_0x15c9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15c9e4) {
            ctx->pc = 0x15C9F8u;
            goto label_15c9f8;
        }
    }
    ctx->pc = 0x15C9ECu;
label_15c9ec:
    // 0x15c9ec: 0xa1040030  sb          $a0, 0x30($t0)
    ctx->pc = 0x15c9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 48), (uint8_t)GPR_U32(ctx, 4));
label_15c9f0:
    // 0x15c9f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_15c9f4:
    if (ctx->pc == 0x15C9F4u) {
        ctx->pc = 0x15C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9F0u;
        // 0x15c9f4: 0xa1040031  sb          $a0, 0x31($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 49), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9F8u;
        goto label_15c9f8;
    }
    ctx->pc = 0x15C9F0u;
    {
        const bool branch_taken_0x15c9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9F0u;
        // 0x15c9f4: 0xa1040031  sb          $a0, 0x31($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 49), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9f0) {
            ctx->pc = 0x15CA18u;
            goto label_15ca18;
        }
    }
    ctx->pc = 0x15C9F8u;
label_15c9f8:
    // 0x15c9f8: 0xa1000030  sb          $zero, 0x30($t0)
    ctx->pc = 0x15c9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 48), (uint8_t)GPR_U32(ctx, 0));
label_15c9fc:
    // 0x15c9fc: 0x8103002b  lb          $v1, 0x2B($t0)
    ctx->pc = 0x15c9fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 43)));
label_15ca00:
    // 0x15ca00: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x15ca00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_15ca04:
    // 0x15ca04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15ca04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15ca08:
    // 0x15ca08: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_15ca0c:
    if (ctx->pc == 0x15CA0Cu) {
        ctx->pc = 0x15CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA08u;
        // 0x15ca0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA10u;
        goto label_15ca10;
    }
    ctx->pc = 0x15CA08u;
    {
        const bool branch_taken_0x15ca08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA08u;
        // 0x15ca0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca08) {
            ctx->pc = 0x15CA14u;
            goto label_15ca14;
        }
    }
    ctx->pc = 0x15CA10u;
label_15ca10:
    // 0x15ca10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15ca10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ca14:
    // 0x15ca14: 0xa1020031  sb          $v0, 0x31($t0)
    ctx->pc = 0x15ca14u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 49), (uint8_t)GPR_U32(ctx, 2));
label_15ca18:
    // 0x15ca18: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x15ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_15ca1c:
    // 0x15ca1c: 0x8106002b  lb          $a2, 0x2B($t0)
    ctx->pc = 0x15ca1cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 43)));
label_15ca20:
    // 0x15ca20: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x15ca20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_15ca24:
    // 0x15ca24: 0x133102a  slt         $v0, $t1, $s3
    ctx->pc = 0x15ca24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_15ca28:
    // 0x15ca28: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_15ca2c:
    if (ctx->pc == 0x15CA2Cu) {
        ctx->pc = 0x15CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA28u;
        // 0x15ca2c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA30u;
        goto label_15ca30;
    }
    ctx->pc = 0x15CA28u;
    {
        const bool branch_taken_0x15ca28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA28u;
        // 0x15ca2c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca28) {
            ctx->pc = 0x15C9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c9d8;
        }
    }
    ctx->pc = 0x15CA30u;
label_15ca30:
    // 0x15ca30: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x15ca30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_15ca34:
    // 0x15ca34: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
label_15ca38:
    if (ctx->pc == 0x15CA38u) {
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA3Cu;
        goto label_15ca3c;
    }
    ctx->pc = 0x15CA34u;
    {
        const bool branch_taken_0x15ca34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca34) {
            ctx->pc = 0x15CBC8u;
            goto label_15cbc8;
        }
    }
    ctx->pc = 0x15CA3Cu;
label_15ca3c:
    // 0x15ca3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15ca3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ca40:
    // 0x15ca40: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x15ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15ca44:
    // 0x15ca44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15ca44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15ca48:
    // 0x15ca48: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x15ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_15ca4c:
    // 0x15ca4c: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x15ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15ca50:
    // 0x15ca50: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x15ca50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15ca54:
    // 0x15ca54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15ca58:
    // 0x15ca58: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x15ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_15ca5c:
    // 0x15ca5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ca5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15ca60:
    // 0x15ca60: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x15ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_15ca64:
    // 0x15ca64: 0x84a60016  lh          $a2, 0x16($a1)
    ctx->pc = 0x15ca64u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
label_15ca68:
    // 0x15ca68: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_15ca6c:
    // 0x15ca6c: 0x8c6801f0  lw          $t0, 0x1F0($v1)
    ctx->pc = 0x15ca6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
label_15ca70:
    // 0x15ca70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ca70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15ca74:
    // 0x15ca74: 0xc0577c8  jal         func_15DF20
label_15ca78:
    if (ctx->pc == 0x15CA78u) {
        ctx->pc = 0x15CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA74u;
        // 0x15ca78: 0x24670150  addiu       $a3, $v1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA7Cu;
        goto label_15ca7c;
    }
    ctx->pc = 0x15CA74u;
    SET_GPR_U32(ctx, 31, 0x15CA7Cu);
    ctx->pc = 0x15CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA74u;
    // 0x15ca78: 0x24670150  addiu       $a3, $v1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15DF20u;
    { ctx->pc = 0x15df20; return; }
    ctx->pc = 0x15CA7Cu;
label_15ca7c:
    // 0x15ca7c: 0x8242002a  lb          $v0, 0x2A($s2)
    ctx->pc = 0x15ca7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 42)));
label_15ca80:
    // 0x15ca80: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
label_15ca84:
    if (ctx->pc == 0x15CA84u) {
        ctx->pc = 0x15CA88u;
        goto label_15ca88;
    }
    ctx->pc = 0x15CA80u;
    {
        const bool branch_taken_0x15ca80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ca80) {
            ctx->pc = 0x15CBB4u;
            goto label_15cbb4;
        }
    }
    ctx->pc = 0x15CA88u;
label_15ca88:
    // 0x15ca88: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x15ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_15ca8c:
    // 0x15ca8c: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x15ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_15ca90:
    // 0x15ca90: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_15ca94:
    if (ctx->pc == 0x15CA94u) {
        ctx->pc = 0x15CA98u;
        goto label_15ca98;
    }
    ctx->pc = 0x15CA90u;
    {
        const bool branch_taken_0x15ca90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ca90) {
            ctx->pc = 0x15CAA8u;
            goto label_15caa8;
        }
    }
    ctx->pc = 0x15CA98u;
label_15ca98:
    // 0x15ca98: 0x8064021f  lb          $a0, 0x21F($v1)
    ctx->pc = 0x15ca98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 543)));
label_15ca9c:
    // 0x15ca9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15caa0:
    // 0x15caa0: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
label_15caa4:
    if (ctx->pc == 0x15CAA4u) {
        ctx->pc = 0x15CAA8u;
        goto label_15caa8;
    }
    ctx->pc = 0x15CAA0u;
    {
        const bool branch_taken_0x15caa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15caa0) {
            ctx->pc = 0x15CBB4u;
            goto label_15cbb4;
        }
    }
    ctx->pc = 0x15CAA8u;
label_15caa8:
    // 0x15caa8: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x15caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_15caac:
    // 0x15caac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15caacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_15cab0:
    // 0x15cab0: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x15cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_15cab4:
    // 0x15cab4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15cab8:
    // 0x15cab8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15cab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_15cabc:
    // 0x15cabc: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_15cac0:
    if (ctx->pc == 0x15CAC0u) {
        ctx->pc = 0x15CAC4u;
        goto label_15cac4;
    }
    ctx->pc = 0x15CABCu;
    {
        const bool branch_taken_0x15cabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cabc) {
            ctx->pc = 0x15CB68u;
            goto label_15cb68;
        }
    }
    ctx->pc = 0x15CAC4u;
label_15cac4:
    // 0x15cac4: 0x84a4003c  lh          $a0, 0x3C($a1)
    ctx->pc = 0x15cac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
label_15cac8:
    // 0x15cac8: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x15cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_15cacc:
    // 0x15cacc: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_15cad0:
    if (ctx->pc == 0x15CAD0u) {
        ctx->pc = 0x15CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CACCu;
        // 0x15cad0: 0x28830043  slti        $v1, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAD4u;
        goto label_15cad4;
    }
    ctx->pc = 0x15CACCu;
    {
        const bool branch_taken_0x15cacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CACCu;
        // 0x15cad0: 0x28830043  slti        $v1, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cacc) {
            ctx->pc = 0x15CB10u;
            goto label_15cb10;
        }
    }
    ctx->pc = 0x15CAD4u;
label_15cad4:
    // 0x15cad4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_15cad8:
    if (ctx->pc == 0x15CAD8u) {
        ctx->pc = 0x15CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAD4u;
        // 0x15cad8: 0x28810047  slti        $at, $a0, 0x47 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)71) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CADCu;
        goto label_15cadc;
    }
    ctx->pc = 0x15CAD4u;
    {
        const bool branch_taken_0x15cad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAD4u;
        // 0x15cad8: 0x28810047  slti        $at, $a0, 0x47 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)71) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cad4) {
            ctx->pc = 0x15CAE4u;
            goto label_15cae4;
        }
    }
    ctx->pc = 0x15CADCu;
label_15cadc:
    // 0x15cadc: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_15cae0:
    if (ctx->pc == 0x15CAE0u) {
        ctx->pc = 0x15CAE4u;
        goto label_15cae4;
    }
    ctx->pc = 0x15CADCu;
    {
        const bool branch_taken_0x15cadc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cadc) {
            ctx->pc = 0x15CB10u;
            goto label_15cb10;
        }
    }
    ctx->pc = 0x15CAE4u;
label_15cae4:
    // 0x15cae4: 0x0  nop
    ctx->pc = 0x15cae4u;
    // NOP
label_15cae8:
    // 0x15cae8: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x15cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_15caec:
    // 0x15caec: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_15caf0:
    if (ctx->pc == 0x15CAF0u) {
        ctx->pc = 0x15CAF4u;
        goto label_15caf4;
    }
    ctx->pc = 0x15CAECu;
    {
        const bool branch_taken_0x15caec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15caec) {
            ctx->pc = 0x15CB38u;
            goto label_15cb38;
        }
    }
    ctx->pc = 0x15CAF4u;
label_15caf4:
    // 0x15caf4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x15caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15caf8:
    // 0x15caf8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15caf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15cafc:
    // 0x15cafc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15cafcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15cb00:
    // 0x15cb00: 0x0  nop
    ctx->pc = 0x15cb00u;
    // NOP
label_15cb04:
    // 0x15cb04: 0x28630013  slti        $v1, $v1, 0x13
    ctx->pc = 0x15cb04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
label_15cb08:
    // 0x15cb08: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_15cb0c:
    if (ctx->pc == 0x15CB0Cu) {
        ctx->pc = 0x15CB10u;
        goto label_15cb10;
    }
    ctx->pc = 0x15CB08u;
    {
        const bool branch_taken_0x15cb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cb08) {
            ctx->pc = 0x15CB38u;
            goto label_15cb38;
        }
    }
    ctx->pc = 0x15CB10u;
label_15cb10:
    // 0x15cb10: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15cb14:
    // 0x15cb14: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x15cb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_15cb18:
    // 0x15cb18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_15cb1c:
    if (ctx->pc == 0x15CB1Cu) {
        ctx->pc = 0x15CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB18u;
        // 0x15cb1c: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB20u;
        goto label_15cb20;
    }
    ctx->pc = 0x15CB18u;
    {
        const bool branch_taken_0x15cb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB18u;
        // 0x15cb1c: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb18) {
            ctx->pc = 0x15CB2Cu;
            goto label_15cb2c;
        }
    }
    ctx->pc = 0x15CB20u;
label_15cb20:
    // 0x15cb20: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x15cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_15cb24:
    // 0x15cb24: 0x10000002  b           . + 4 + (0x2 << 2)
label_15cb28:
    if (ctx->pc == 0x15CB28u) {
        ctx->pc = 0x15CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB24u;
        // 0x15cb28: 0x2484e728  addiu       $a0, $a0, -0x18D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB2Cu;
        goto label_15cb2c;
    }
    ctx->pc = 0x15CB24u;
    {
        const bool branch_taken_0x15cb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB24u;
        // 0x15cb28: 0x2484e728  addiu       $a0, $a0, -0x18D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb24) {
            ctx->pc = 0x15CB30u;
            goto label_15cb30;
        }
    }
    ctx->pc = 0x15CB2Cu;
label_15cb2c:
    // 0x15cb2c: 0x2484e7f0  addiu       $a0, $a0, -0x1810
    ctx->pc = 0x15cb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961136));
label_15cb30:
    // 0x15cb30: 0x10000002  b           . + 4 + (0x2 << 2)
label_15cb34:
    if (ctx->pc == 0x15CB34u) {
        ctx->pc = 0x15CB38u;
        goto label_15cb38;
    }
    ctx->pc = 0x15CB30u;
    {
        const bool branch_taken_0x15cb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb30) {
            ctx->pc = 0x15CB3Cu;
            goto label_15cb3c;
        }
    }
    ctx->pc = 0x15CB38u;
label_15cb38:
    // 0x15cb38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15cb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cb3c:
    // 0x15cb3c: 0x0  nop
    ctx->pc = 0x15cb3cu;
    // NOP
label_15cb40:
    // 0x15cb40: 0x90430244  lbu         $v1, 0x244($v0)
    ctx->pc = 0x15cb40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 580)));
label_15cb44:
    // 0x15cb44: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x15cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_15cb48:
    // 0x15cb48: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_15cb4c:
    if (ctx->pc == 0x15CB4Cu) {
        ctx->pc = 0x15CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB48u;
        // 0x15cb4c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB50u;
        goto label_15cb50;
    }
    ctx->pc = 0x15CB48u;
    {
        const bool branch_taken_0x15cb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB48u;
        // 0x15cb4c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb48) {
            ctx->pc = 0x15CB5Cu;
            goto label_15cb5c;
        }
    }
    ctx->pc = 0x15CB50u;
label_15cb50:
    // 0x15cb50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x15cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_15cb54:
    // 0x15cb54: 0x10000002  b           . + 4 + (0x2 << 2)
label_15cb58:
    if (ctx->pc == 0x15CB58u) {
        ctx->pc = 0x15CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB54u;
        // 0x15cb58: 0x24a5e660  addiu       $a1, $a1, -0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB5Cu;
        goto label_15cb5c;
    }
    ctx->pc = 0x15CB54u;
    {
        const bool branch_taken_0x15cb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB54u;
        // 0x15cb58: 0x24a5e660  addiu       $a1, $a1, -0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb54) {
            ctx->pc = 0x15CB60u;
            goto label_15cb60;
        }
    }
    ctx->pc = 0x15CB5Cu;
label_15cb5c:
    // 0x15cb5c: 0x24a5e598  addiu       $a1, $a1, -0x1A68
    ctx->pc = 0x15cb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960536));
label_15cb60:
    // 0x15cb60: 0x10000010  b           . + 4 + (0x10 << 2)
label_15cb64:
    if (ctx->pc == 0x15CB64u) {
        ctx->pc = 0x15CB68u;
        goto label_15cb68;
    }
    ctx->pc = 0x15CB60u;
    {
        const bool branch_taken_0x15cb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb60) {
            ctx->pc = 0x15CBA4u;
            goto label_15cba4;
        }
    }
    ctx->pc = 0x15CB68u;
label_15cb68:
    // 0x15cb68: 0x8e442120  lw          $a0, 0x2120($s2)
    ctx->pc = 0x15cb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8480)));
label_15cb6c:
    // 0x15cb6c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_15cb70:
    if (ctx->pc == 0x15CB70u) {
        ctx->pc = 0x15CB74u;
        goto label_15cb74;
    }
    ctx->pc = 0x15CB6Cu;
    {
        const bool branch_taken_0x15cb6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb6c) {
            ctx->pc = 0x15CB84u;
            goto label_15cb84;
        }
    }
    ctx->pc = 0x15CB74u;
label_15cb74:
    // 0x15cb74: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15cb78:
    // 0x15cb78: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_15cb7c:
    if (ctx->pc == 0x15CB7Cu) {
        ctx->pc = 0x15CB80u;
        goto label_15cb80;
    }
    ctx->pc = 0x15CB78u;
    {
        const bool branch_taken_0x15cb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cb78) {
            ctx->pc = 0x15CB84u;
            goto label_15cb84;
        }
    }
    ctx->pc = 0x15CB80u;
label_15cb80:
    // 0x15cb80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15cb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cb84:
    // 0x15cb84: 0x0  nop
    ctx->pc = 0x15cb84u;
    // NOP
label_15cb88:
    // 0x15cb88: 0x8e452124  lw          $a1, 0x2124($s2)
    ctx->pc = 0x15cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8484)));
label_15cb8c:
    // 0x15cb8c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_15cb90:
    if (ctx->pc == 0x15CB90u) {
        ctx->pc = 0x15CB94u;
        goto label_15cb94;
    }
    ctx->pc = 0x15CB8Cu;
    {
        const bool branch_taken_0x15cb8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb8c) {
            ctx->pc = 0x15CBA4u;
            goto label_15cba4;
        }
    }
    ctx->pc = 0x15CB94u;
label_15cb94:
    // 0x15cb94: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15cb98:
    // 0x15cb98: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_15cb9c:
    if (ctx->pc == 0x15CB9Cu) {
        ctx->pc = 0x15CBA0u;
        goto label_15cba0;
    }
    ctx->pc = 0x15CB98u;
    {
        const bool branch_taken_0x15cb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cb98) {
            ctx->pc = 0x15CBA4u;
            goto label_15cba4;
        }
    }
    ctx->pc = 0x15CBA0u;
label_15cba0:
    // 0x15cba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cba4:
    // 0x15cba4: 0x0  nop
    ctx->pc = 0x15cba4u;
    // NOP
label_15cba8:
    // 0x15cba8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x15cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_15cbac:
    // 0x15cbac: 0xc0576dc  jal         func_15DB70
label_15cbb0:
    if (ctx->pc == 0x15CBB0u) {
        ctx->pc = 0x15CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBACu;
        // 0x15cbb0: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBB4u;
        goto label_15cbb4;
    }
    ctx->pc = 0x15CBACu;
    SET_GPR_U32(ctx, 31, 0x15CBB4u);
    ctx->pc = 0x15CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBACu;
    // 0x15cbb0: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15DB70u;
    { ctx->pc = 0x15db70; return; }
    ctx->pc = 0x15CBB4u;
label_15cbb4:
    // 0x15cbb4: 0x0  nop
    ctx->pc = 0x15cbb4u;
    // NOP
label_15cbb8:
    // 0x15cbb8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15cbb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15cbbc:
    // 0x15cbbc: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x15cbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_15cbc0:
    // 0x15cbc0: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
label_15cbc4:
    if (ctx->pc == 0x15CBC4u) {
        ctx->pc = 0x15CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBC0u;
        // 0x15cbc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBC8u;
        goto label_15cbc8;
    }
    ctx->pc = 0x15CBC0u;
    {
        const bool branch_taken_0x15cbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBC0u;
        // 0x15cbc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbc0) {
            ctx->pc = 0x15CA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ca40;
        }
    }
    ctx->pc = 0x15CBC8u;
label_15cbc8:
    // 0x15cbc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15cbc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cbcc:
    // 0x15cbcc: 0x0  nop
    ctx->pc = 0x15cbccu;
    // NOP
label_15cbd0:
    // 0x15cbd0: 0x82020028  lb          $v0, 0x28($s0)
    ctx->pc = 0x15cbd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_15cbd4:
    // 0x15cbd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_15cbd8:
    if (ctx->pc == 0x15CBD8u) {
        ctx->pc = 0x15CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBD4u;
        // 0x15cbd8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBDCu;
        goto label_15cbdc;
    }
    ctx->pc = 0x15CBD4u;
    {
        const bool branch_taken_0x15cbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBD4u;
        // 0x15cbd8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbd4) {
            ctx->pc = 0x15CC00u;
            goto label_15cc00;
        }
    }
    ctx->pc = 0x15CBDCu;
label_15cbdc:
    // 0x15cbdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15cbdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cbe0:
    // 0x15cbe0: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x15cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_15cbe4:
    // 0x15cbe4: 0x244503b0  addiu       $a1, $v0, 0x3B0
    ctx->pc = 0x15cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
label_15cbe8:
    // 0x15cbe8: 0xc055878  jal         func_1561E0
label_15cbec:
    if (ctx->pc == 0x15CBECu) {
        ctx->pc = 0x15CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBE8u;
        // 0x15cbec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBF0u;
        goto label_15cbf0;
    }
    ctx->pc = 0x15CBE8u;
    SET_GPR_U32(ctx, 31, 0x15CBF0u);
    ctx->pc = 0x15CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBE8u;
    // 0x15cbec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561E0u;
    { ctx->pc = 0x1561e0; return; }
    ctx->pc = 0x15CBF0u;
label_15cbf0:
    // 0x15cbf0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15cbf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15cbf4:
    // 0x15cbf4: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x15cbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_15cbf8:
    // 0x15cbf8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_15cbfc:
    if (ctx->pc == 0x15CBFCu) {
        ctx->pc = 0x15CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBF8u;
        // 0x15cbfc: 0x26520eb0  addiu       $s2, $s2, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC00u;
        goto label_15cc00;
    }
    ctx->pc = 0x15CBF8u;
    {
        const bool branch_taken_0x15cbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBF8u;
        // 0x15cbfc: 0x26520eb0  addiu       $s2, $s2, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbf8) {
            ctx->pc = 0x15CBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cbe0;
        }
    }
    ctx->pc = 0x15CC00u;
label_15cc00:
    // 0x15cc00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15cc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15cc04:
    // 0x15cc04: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x15cc04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
label_15cc08:
    // 0x15cc08: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_15cc0c:
    if (ctx->pc == 0x15CC0Cu) {
        ctx->pc = 0x15CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC08u;
        // 0x15cc0c: 0x26102150  addiu       $s0, $s0, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC10u;
        goto label_15cc10;
    }
    ctx->pc = 0x15CC08u;
    {
        const bool branch_taken_0x15cc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC08u;
        // 0x15cc0c: 0x26102150  addiu       $s0, $s0, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc08) {
            ctx->pc = 0x15CBCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cbcc;
        }
    }
    ctx->pc = 0x15CC10u;
label_15cc10:
    // 0x15cc10: 0xc08bf9c  jal         func_22FE70
label_15cc14:
    if (ctx->pc == 0x15CC14u) {
        ctx->pc = 0x15CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC10u;
        // 0x15cc14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC18u;
        goto label_15cc18;
    }
    ctx->pc = 0x15CC10u;
    SET_GPR_U32(ctx, 31, 0x15CC18u);
    ctx->pc = 0x15CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CC10u;
    // 0x15cc14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE70u;
    { ctx->pc = 0x22fe70; return; }
    ctx->pc = 0x15CC18u;
label_15cc18:
    // 0x15cc18: 0xc057314  jal         func_15CC50
label_15cc1c:
    if (ctx->pc == 0x15CC1Cu) {
        ctx->pc = 0x15CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC18u;
        // 0x15cc1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC20u;
        goto label_15cc20;
    }
    ctx->pc = 0x15CC18u;
    SET_GPR_U32(ctx, 31, 0x15CC20u);
    ctx->pc = 0x15CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CC18u;
    // 0x15cc1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CC50u;
    goto label_15cc50;
    ctx->pc = 0x15CC20u;
label_15cc20:
    // 0x15cc20: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15cc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15cc24:
    // 0x15cc24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15cc24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15cc28:
    // 0x15cc28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15cc28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15cc2c:
    // 0x15cc2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15cc2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15cc30:
    // 0x15cc30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15cc30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15cc34:
    // 0x15cc34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cc34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15cc38:
    // 0x15cc38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cc38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15cc3c:
    // 0x15cc3c: 0x3e00008  jr          $ra
label_15cc40:
    if (ctx->pc == 0x15CC40u) {
        ctx->pc = 0x15CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC3Cu;
        // 0x15cc40: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC44u;
        goto label_15cc44;
    }
    ctx->pc = 0x15CC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC3Cu;
        // 0x15cc40: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CC44u;
label_15cc44:
    // 0x15cc44: 0x0  nop
    ctx->pc = 0x15cc44u;
    // NOP
label_15cc48:
    // 0x15cc48: 0x0  nop
    ctx->pc = 0x15cc48u;
    // NOP
label_15cc4c:
    // 0x15cc4c: 0x0  nop
    ctx->pc = 0x15cc4cu;
    // NOP
label_15cc50:
    // 0x15cc50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15cc54:
    // 0x15cc54: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_15cc58:
    // 0x15cc58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15cc5c:
    // 0x15cc5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15cc60:
    // 0x15cc60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15cc64:
    // 0x15cc64: 0x278280d0  addiu       $v0, $gp, -0x7F30
    ctx->pc = 0x15cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934736));
label_15cc68:
    // 0x15cc68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15cc6c:
    // 0x15cc6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15cc70:
    // 0x15cc70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15cc74:
    // 0x15cc74: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15cc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15cc78:
    // 0x15cc78: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15cc7c:
    // 0x15cc7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15cc7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15cc80:
    // 0x15cc80: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15cc84:
    // 0x15cc84: 0x24a55600  addiu       $a1, $a1, 0x5600
    ctx->pc = 0x15cc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22016));
label_15cc88:
    // 0x15cc88: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15cc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15cc8c:
    // 0x15cc8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15cc8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cc90:
    // 0x15cc90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15cc90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cc94:
    // 0x15cc94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15cc94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cc98:
    // 0x15cc98: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x15cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_15cc9c:
    // 0x15cc9c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x15cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_15cca0:
    // 0x15cca0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x15cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_15cca4:
    // 0x15cca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15cca8:
    // 0x15cca8: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x15cca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
label_15ccac:
    // 0x15ccac: 0xc066c72  jal         func_19B1C8
label_15ccb0:
    if (ctx->pc == 0x15CCB0u) {
        ctx->pc = 0x15CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCACu;
        // 0x15ccb0: 0x4213e  dsrl32      $a0, $a0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCB4u;
        goto label_15ccb4;
    }
    ctx->pc = 0x15CCACu;
    SET_GPR_U32(ctx, 31, 0x15CCB4u);
    ctx->pc = 0x15CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCACu;
    // 0x15ccb0: 0x4213e  dsrl32      $a0, $a0, 4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15CCB4u;
label_15ccb4:
    // 0x15ccb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15ccb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ccb8:
    // 0x15ccb8: 0x0  nop
    ctx->pc = 0x15ccb8u;
    // NOP
label_15ccbc:
    // 0x15ccbc: 0x82020028  lb          $v0, 0x28($s0)
    ctx->pc = 0x15ccbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_15ccc0:
    // 0x15ccc0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_15ccc4:
    if (ctx->pc == 0x15CCC4u) {
        ctx->pc = 0x15CCC8u;
        goto label_15ccc8;
    }
    ctx->pc = 0x15CCC0u;
    {
        const bool branch_taken_0x15ccc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ccc0) {
            ctx->pc = 0x15CD60u;
            goto label_15cd60;
        }
    }
    ctx->pc = 0x15CCC8u;
label_15ccc8:
    // 0x15ccc8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x15ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15cccc:
    // 0x15cccc: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x15ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_15ccd0:
    // 0x15ccd0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_15ccd4:
    if (ctx->pc == 0x15CCD4u) {
        ctx->pc = 0x15CCD8u;
        goto label_15ccd8;
    }
    ctx->pc = 0x15CCD0u;
    {
        const bool branch_taken_0x15ccd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ccd0) {
            ctx->pc = 0x15CD60u;
            goto label_15cd60;
        }
    }
    ctx->pc = 0x15CCD8u;
label_15ccd8:
    // 0x15ccd8: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x15ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15ccdc:
    // 0x15ccdc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15ccdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_15cce0:
    // 0x15cce0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_15cce4:
    if (ctx->pc == 0x15CCE4u) {
        ctx->pc = 0x15CCE8u;
        goto label_15cce8;
    }
    ctx->pc = 0x15CCE0u;
    {
        const bool branch_taken_0x15cce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cce0) {
            ctx->pc = 0x15CD20u;
            goto label_15cd20;
        }
    }
    ctx->pc = 0x15CCE8u;
label_15cce8:
    // 0x15cce8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x15cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ccec:
    // 0x15ccec: 0x90820232  lbu         $v0, 0x232($a0)
    ctx->pc = 0x15ccecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_15ccf0:
    // 0x15ccf0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_15ccf4:
    if (ctx->pc == 0x15CCF4u) {
        ctx->pc = 0x15CCF8u;
        goto label_15ccf8;
    }
    ctx->pc = 0x15CCF0u;
    {
        const bool branch_taken_0x15ccf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ccf0) {
            ctx->pc = 0x15CD20u;
            goto label_15cd20;
        }
    }
    ctx->pc = 0x15CCF8u;
label_15ccf8:
    // 0x15ccf8: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x15ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15ccfc:
    // 0x15ccfc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_15cd00:
    // 0x15cd00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15cd04:
    // 0x15cd04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15cd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15cd08:
    // 0x15cd08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15cd0c:
    if (ctx->pc == 0x15CD0Cu) {
        ctx->pc = 0x15CD10u;
        goto label_15cd10;
    }
    ctx->pc = 0x15CD08u;
    {
        const bool branch_taken_0x15cd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd08) {
            ctx->pc = 0x15CD20u;
            goto label_15cd20;
        }
    }
    ctx->pc = 0x15CD10u;
label_15cd10:
    // 0x15cd10: 0xc0439cc  jal         func_10E730
label_15cd14:
    if (ctx->pc == 0x15CD14u) {
        ctx->pc = 0x15CD18u;
        goto label_15cd18;
    }
    ctx->pc = 0x15CD10u;
    SET_GPR_U32(ctx, 31, 0x15CD18u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x15CD10u, 0x15CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD18u;
label_15cd18:
    // 0x15cd18: 0x10520011  beq         $v0, $s2, . + 4 + (0x11 << 2)
label_15cd1c:
    if (ctx->pc == 0x15CD1Cu) {
        ctx->pc = 0x15CD20u;
        goto label_15cd20;
    }
    ctx->pc = 0x15CD18u;
    {
        const bool branch_taken_0x15cd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x15cd18) {
            ctx->pc = 0x15CD60u;
            goto label_15cd60;
        }
    }
    ctx->pc = 0x15CD20u;
label_15cd20:
    // 0x15cd20: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15cd24:
    // 0x15cd24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15cd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15cd28:
    // 0x15cd28: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x15cd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15cd2c:
    // 0x15cd2c: 0xc4400150  lwc1        $f0, 0x150($v0)
    ctx->pc = 0x15cd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15cd30:
    // 0x15cd30: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x15cd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_15cd34:
    // 0x15cd34: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15cd38:
    // 0x15cd38: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x15cd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15cd3c:
    // 0x15cd3c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x15cd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_15cd40:
    // 0x15cd40: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15cd44:
    // 0x15cd44: 0xc4400158  lwc1        $f0, 0x158($v0)
    ctx->pc = 0x15cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15cd48:
    // 0x15cd48: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x15cd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_15cd4c:
    // 0x15cd4c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15cd50:
    // 0x15cd50: 0xc44c01b8  lwc1        $f12, 0x1B8($v0)
    ctx->pc = 0x15cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15cd54:
    // 0x15cd54: 0xc44d0044  lwc1        $f13, 0x44($v0)
    ctx->pc = 0x15cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_15cd58:
    // 0x15cd58: 0xc05ced8  jal         func_173B60
label_15cd5c:
    if (ctx->pc == 0x15CD5Cu) {
        ctx->pc = 0x15CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD58u;
        // 0x15cd5c: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD60u;
        goto label_15cd60;
    }
    ctx->pc = 0x15CD58u;
    SET_GPR_U32(ctx, 31, 0x15CD60u);
    ctx->pc = 0x15CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD58u;
    // 0x15cd5c: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173B60u;
    { ctx->pc = 0x173b60; return; }
    ctx->pc = 0x15CD60u;
label_15cd60:
    // 0x15cd60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15cd60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15cd64:
    // 0x15cd64: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x15cd64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
label_15cd68:
    // 0x15cd68: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_15cd6c:
    if (ctx->pc == 0x15CD6Cu) {
        ctx->pc = 0x15CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD68u;
        // 0x15cd6c: 0x26102150  addiu       $s0, $s0, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD70u;
        goto label_15cd70;
    }
    ctx->pc = 0x15CD68u;
    {
        const bool branch_taken_0x15cd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD68u;
        // 0x15cd6c: 0x26102150  addiu       $s0, $s0, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd68) {
            ctx->pc = 0x15CCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ccb8;
        }
    }
    ctx->pc = 0x15CD70u;
label_15cd70:
    // 0x15cd70: 0x2a21002f  slti        $at, $s1, 0x2F
    ctx->pc = 0x15cd70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)47) ? 1 : 0);
label_15cd74:
    // 0x15cd74: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_15cd78:
    if (ctx->pc == 0x15CD78u) {
        ctx->pc = 0x15CD7Cu;
        goto label_15cd7c;
    }
    ctx->pc = 0x15CD74u;
    {
        const bool branch_taken_0x15cd74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd74) {
            ctx->pc = 0x15CDE0u;
            goto label_15cde0;
        }
    }
    ctx->pc = 0x15CD7Cu;
label_15cd7c:
    // 0x15cd7c: 0x0  nop
    ctx->pc = 0x15cd7cu;
    // NOP
label_15cd80:
    // 0x15cd80: 0x82020028  lb          $v0, 0x28($s0)
    ctx->pc = 0x15cd80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_15cd84:
    // 0x15cd84: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_15cd88:
    if (ctx->pc == 0x15CD88u) {
        ctx->pc = 0x15CD8Cu;
        goto label_15cd8c;
    }
    ctx->pc = 0x15CD84u;
    {
        const bool branch_taken_0x15cd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd84) {
            ctx->pc = 0x15CDCCu;
            goto label_15cdcc;
        }
    }
    ctx->pc = 0x15CD8Cu;
label_15cd8c:
    // 0x15cd8c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15cd90:
    // 0x15cd90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15cd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15cd94:
    // 0x15cd94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x15cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15cd98:
    // 0x15cd98: 0xc4400150  lwc1        $f0, 0x150($v0)
    ctx->pc = 0x15cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15cd9c:
    // 0x15cd9c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x15cd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_15cda0:
    // 0x15cda0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15cda4:
    // 0x15cda4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x15cda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15cda8:
    // 0x15cda8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x15cda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_15cdac:
    // 0x15cdac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15cdb0:
    // 0x15cdb0: 0xc4400158  lwc1        $f0, 0x158($v0)
    ctx->pc = 0x15cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15cdb4:
    // 0x15cdb4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x15cdb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_15cdb8:
    // 0x15cdb8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_15cdbc:
    // 0x15cdbc: 0xc44c01b8  lwc1        $f12, 0x1B8($v0)
    ctx->pc = 0x15cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15cdc0:
    // 0x15cdc0: 0xc44d0044  lwc1        $f13, 0x44($v0)
    ctx->pc = 0x15cdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_15cdc4:
    // 0x15cdc4: 0xc05ce00  jal         func_173800
label_15cdc8:
    if (ctx->pc == 0x15CDC8u) {
        ctx->pc = 0x15CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDC4u;
        // 0x15cdc8: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDCCu;
        goto label_15cdcc;
    }
    ctx->pc = 0x15CDC4u;
    SET_GPR_U32(ctx, 31, 0x15CDCCu);
    ctx->pc = 0x15CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CDC4u;
    // 0x15cdc8: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173800u;
    { ctx->pc = 0x173800; return; }
    ctx->pc = 0x15CDCCu;
label_15cdcc:
    // 0x15cdcc: 0x0  nop
    ctx->pc = 0x15cdccu;
    // NOP
label_15cdd0:
    // 0x15cdd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15cdd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15cdd4:
    // 0x15cdd4: 0x2a22002f  slti        $v0, $s1, 0x2F
    ctx->pc = 0x15cdd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)47) ? 1 : 0);
label_15cdd8:
    // 0x15cdd8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_15cddc:
    if (ctx->pc == 0x15CDDCu) {
        ctx->pc = 0x15CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDD8u;
        // 0x15cddc: 0x26102150  addiu       $s0, $s0, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDE0u;
        goto label_15cde0;
    }
    ctx->pc = 0x15CDD8u;
    {
        const bool branch_taken_0x15cdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDD8u;
        // 0x15cddc: 0x26102150  addiu       $s0, $s0, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdd8) {
            ctx->pc = 0x15CD7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cd7c;
        }
    }
    ctx->pc = 0x15CDE0u;
label_15cde0:
    // 0x15cde0: 0xc08bf74  jal         func_22FDD0
label_15cde4:
    if (ctx->pc == 0x15CDE4u) {
        ctx->pc = 0x15CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDE0u;
        // 0x15cde4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDE8u;
        goto label_15cde8;
    }
    ctx->pc = 0x15CDE0u;
    SET_GPR_U32(ctx, 31, 0x15CDE8u);
    ctx->pc = 0x15CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CDE0u;
    // 0x15cde4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDD0u;
    { ctx->pc = 0x22fdd0; return; }
    ctx->pc = 0x15CDE8u;
label_15cde8:
    // 0x15cde8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15cde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15cdec:
    // 0x15cdec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15cdecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15cdf0:
    // 0x15cdf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cdf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15cdf4:
    // 0x15cdf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cdf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15cdf8:
    // 0x15cdf8: 0x3e00008  jr          $ra
label_15cdfc:
    if (ctx->pc == 0x15CDFCu) {
        ctx->pc = 0x15CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDF8u;
        // 0x15cdfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE00u;
        goto label_15ce00;
    }
    ctx->pc = 0x15CDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDF8u;
        // 0x15cdfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CE00u;
label_15ce00:
    // 0x15ce00: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x15ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_15ce04:
    // 0x15ce04: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ce04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ce08:
    // 0x15ce08: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15ce08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_15ce0c:
    // 0x15ce0c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_15ce10:
    // 0x15ce10: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15ce14:
    // 0x15ce14: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15ce18:
    // 0x15ce18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15ce1c:
    // 0x15ce1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15ce20:
    // 0x15ce20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15ce24:
    // 0x15ce24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ce24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15ce28:
    // 0x15ce28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15ce2c:
    // 0x15ce2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x15ce30u;
    return;
}
