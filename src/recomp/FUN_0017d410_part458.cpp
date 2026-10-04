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


void FUN_0017d410_part458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25c660u: goto label_25c660;
        case 0x25c664u: goto label_25c664;
        case 0x25c668u: goto label_25c668;
        case 0x25c66cu: goto label_25c66c;
        case 0x25c670u: goto label_25c670;
        case 0x25c674u: goto label_25c674;
        case 0x25c678u: goto label_25c678;
        case 0x25c67cu: goto label_25c67c;
        case 0x25c680u: goto label_25c680;
        case 0x25c684u: goto label_25c684;
        case 0x25c688u: goto label_25c688;
        case 0x25c68cu: goto label_25c68c;
        case 0x25c690u: goto label_25c690;
        case 0x25c694u: goto label_25c694;
        case 0x25c698u: goto label_25c698;
        case 0x25c69cu: goto label_25c69c;
        case 0x25c6a0u: goto label_25c6a0;
        case 0x25c6a4u: goto label_25c6a4;
        case 0x25c6a8u: goto label_25c6a8;
        case 0x25c6acu: goto label_25c6ac;
        case 0x25c6b0u: goto label_25c6b0;
        case 0x25c6b4u: goto label_25c6b4;
        case 0x25c6b8u: goto label_25c6b8;
        case 0x25c6bcu: goto label_25c6bc;
        case 0x25c6c0u: goto label_25c6c0;
        case 0x25c6c4u: goto label_25c6c4;
        case 0x25c6c8u: goto label_25c6c8;
        case 0x25c6ccu: goto label_25c6cc;
        case 0x25c6d0u: goto label_25c6d0;
        case 0x25c6d4u: goto label_25c6d4;
        case 0x25c6d8u: goto label_25c6d8;
        case 0x25c6dcu: goto label_25c6dc;
        case 0x25c6e0u: goto label_25c6e0;
        case 0x25c6e4u: goto label_25c6e4;
        case 0x25c6e8u: goto label_25c6e8;
        case 0x25c6ecu: goto label_25c6ec;
        case 0x25c6f0u: goto label_25c6f0;
        case 0x25c6f4u: goto label_25c6f4;
        case 0x25c6f8u: goto label_25c6f8;
        case 0x25c6fcu: goto label_25c6fc;
        case 0x25c700u: goto label_25c700;
        case 0x25c704u: goto label_25c704;
        case 0x25c708u: goto label_25c708;
        case 0x25c70cu: goto label_25c70c;
        case 0x25c710u: goto label_25c710;
        case 0x25c714u: goto label_25c714;
        case 0x25c718u: goto label_25c718;
        case 0x25c71cu: goto label_25c71c;
        case 0x25c720u: goto label_25c720;
        case 0x25c724u: goto label_25c724;
        case 0x25c728u: goto label_25c728;
        case 0x25c72cu: goto label_25c72c;
        case 0x25c730u: goto label_25c730;
        case 0x25c734u: goto label_25c734;
        case 0x25c738u: goto label_25c738;
        case 0x25c73cu: goto label_25c73c;
        case 0x25c740u: goto label_25c740;
        case 0x25c744u: goto label_25c744;
        case 0x25c748u: goto label_25c748;
        case 0x25c74cu: goto label_25c74c;
        case 0x25c750u: goto label_25c750;
        case 0x25c754u: goto label_25c754;
        case 0x25c758u: goto label_25c758;
        case 0x25c75cu: goto label_25c75c;
        case 0x25c760u: goto label_25c760;
        case 0x25c764u: goto label_25c764;
        case 0x25c768u: goto label_25c768;
        case 0x25c76cu: goto label_25c76c;
        case 0x25c770u: goto label_25c770;
        case 0x25c774u: goto label_25c774;
        case 0x25c778u: goto label_25c778;
        case 0x25c77cu: goto label_25c77c;
        case 0x25c780u: goto label_25c780;
        case 0x25c784u: goto label_25c784;
        case 0x25c788u: goto label_25c788;
        case 0x25c78cu: goto label_25c78c;
        case 0x25c790u: goto label_25c790;
        case 0x25c794u: goto label_25c794;
        case 0x25c798u: goto label_25c798;
        case 0x25c79cu: goto label_25c79c;
        case 0x25c7a0u: goto label_25c7a0;
        case 0x25c7a4u: goto label_25c7a4;
        case 0x25c7a8u: goto label_25c7a8;
        case 0x25c7acu: goto label_25c7ac;
        case 0x25c7b0u: goto label_25c7b0;
        case 0x25c7b4u: goto label_25c7b4;
        case 0x25c7b8u: goto label_25c7b8;
        case 0x25c7bcu: goto label_25c7bc;
        case 0x25c7c0u: goto label_25c7c0;
        case 0x25c7c4u: goto label_25c7c4;
        case 0x25c7c8u: goto label_25c7c8;
        case 0x25c7ccu: goto label_25c7cc;
        case 0x25c7d0u: goto label_25c7d0;
        case 0x25c7d4u: goto label_25c7d4;
        case 0x25c7d8u: goto label_25c7d8;
        case 0x25c7dcu: goto label_25c7dc;
        case 0x25c7e0u: goto label_25c7e0;
        case 0x25c7e4u: goto label_25c7e4;
        case 0x25c7e8u: goto label_25c7e8;
        case 0x25c7ecu: goto label_25c7ec;
        case 0x25c7f0u: goto label_25c7f0;
        case 0x25c7f4u: goto label_25c7f4;
        case 0x25c7f8u: goto label_25c7f8;
        case 0x25c7fcu: goto label_25c7fc;
        case 0x25c800u: goto label_25c800;
        case 0x25c804u: goto label_25c804;
        case 0x25c808u: goto label_25c808;
        case 0x25c80cu: goto label_25c80c;
        case 0x25c810u: goto label_25c810;
        case 0x25c814u: goto label_25c814;
        case 0x25c818u: goto label_25c818;
        case 0x25c81cu: goto label_25c81c;
        case 0x25c820u: goto label_25c820;
        case 0x25c824u: goto label_25c824;
        case 0x25c828u: goto label_25c828;
        case 0x25c82cu: goto label_25c82c;
        case 0x25c830u: goto label_25c830;
        case 0x25c834u: goto label_25c834;
        case 0x25c838u: goto label_25c838;
        case 0x25c83cu: goto label_25c83c;
        case 0x25c840u: goto label_25c840;
        case 0x25c844u: goto label_25c844;
        case 0x25c848u: goto label_25c848;
        case 0x25c84cu: goto label_25c84c;
        case 0x25c850u: goto label_25c850;
        case 0x25c854u: goto label_25c854;
        case 0x25c858u: goto label_25c858;
        case 0x25c85cu: goto label_25c85c;
        case 0x25c860u: goto label_25c860;
        case 0x25c864u: goto label_25c864;
        case 0x25c868u: goto label_25c868;
        case 0x25c86cu: goto label_25c86c;
        case 0x25c870u: goto label_25c870;
        case 0x25c874u: goto label_25c874;
        case 0x25c878u: goto label_25c878;
        case 0x25c87cu: goto label_25c87c;
        case 0x25c880u: goto label_25c880;
        case 0x25c884u: goto label_25c884;
        case 0x25c888u: goto label_25c888;
        case 0x25c88cu: goto label_25c88c;
        case 0x25c890u: goto label_25c890;
        case 0x25c894u: goto label_25c894;
        case 0x25c898u: goto label_25c898;
        case 0x25c89cu: goto label_25c89c;
        case 0x25c8a0u: goto label_25c8a0;
        case 0x25c8a4u: goto label_25c8a4;
        case 0x25c8a8u: goto label_25c8a8;
        case 0x25c8acu: goto label_25c8ac;
        case 0x25c8b0u: goto label_25c8b0;
        case 0x25c8b4u: goto label_25c8b4;
        case 0x25c8b8u: goto label_25c8b8;
        case 0x25c8bcu: goto label_25c8bc;
        case 0x25c8c0u: goto label_25c8c0;
        case 0x25c8c4u: goto label_25c8c4;
        case 0x25c8c8u: goto label_25c8c8;
        case 0x25c8ccu: goto label_25c8cc;
        case 0x25c8d0u: goto label_25c8d0;
        case 0x25c8d4u: goto label_25c8d4;
        case 0x25c8d8u: goto label_25c8d8;
        case 0x25c8dcu: goto label_25c8dc;
        case 0x25c8e0u: goto label_25c8e0;
        case 0x25c8e4u: goto label_25c8e4;
        case 0x25c8e8u: goto label_25c8e8;
        case 0x25c8ecu: goto label_25c8ec;
        case 0x25c8f0u: goto label_25c8f0;
        case 0x25c8f4u: goto label_25c8f4;
        case 0x25c8f8u: goto label_25c8f8;
        case 0x25c8fcu: goto label_25c8fc;
        case 0x25c900u: goto label_25c900;
        case 0x25c904u: goto label_25c904;
        case 0x25c908u: goto label_25c908;
        case 0x25c90cu: goto label_25c90c;
        case 0x25c910u: goto label_25c910;
        case 0x25c914u: goto label_25c914;
        case 0x25c918u: goto label_25c918;
        case 0x25c91cu: goto label_25c91c;
        case 0x25c920u: goto label_25c920;
        case 0x25c924u: goto label_25c924;
        case 0x25c928u: goto label_25c928;
        case 0x25c92cu: goto label_25c92c;
        case 0x25c930u: goto label_25c930;
        case 0x25c934u: goto label_25c934;
        case 0x25c938u: goto label_25c938;
        case 0x25c93cu: goto label_25c93c;
        case 0x25c940u: goto label_25c940;
        case 0x25c944u: goto label_25c944;
        case 0x25c948u: goto label_25c948;
        case 0x25c94cu: goto label_25c94c;
        case 0x25c950u: goto label_25c950;
        case 0x25c954u: goto label_25c954;
        case 0x25c958u: goto label_25c958;
        case 0x25c95cu: goto label_25c95c;
        case 0x25c960u: goto label_25c960;
        case 0x25c964u: goto label_25c964;
        case 0x25c968u: goto label_25c968;
        case 0x25c96cu: goto label_25c96c;
        case 0x25c970u: goto label_25c970;
        case 0x25c974u: goto label_25c974;
        case 0x25c978u: goto label_25c978;
        case 0x25c97cu: goto label_25c97c;
        case 0x25c980u: goto label_25c980;
        case 0x25c984u: goto label_25c984;
        case 0x25c988u: goto label_25c988;
        case 0x25c98cu: goto label_25c98c;
        case 0x25c990u: goto label_25c990;
        case 0x25c994u: goto label_25c994;
        case 0x25c998u: goto label_25c998;
        case 0x25c99cu: goto label_25c99c;
        case 0x25c9a0u: goto label_25c9a0;
        case 0x25c9a4u: goto label_25c9a4;
        case 0x25c9a8u: goto label_25c9a8;
        case 0x25c9acu: goto label_25c9ac;
        case 0x25c9b0u: goto label_25c9b0;
        case 0x25c9b4u: goto label_25c9b4;
        case 0x25c9b8u: goto label_25c9b8;
        case 0x25c9bcu: goto label_25c9bc;
        case 0x25c9c0u: goto label_25c9c0;
        case 0x25c9c4u: goto label_25c9c4;
        case 0x25c9c8u: goto label_25c9c8;
        case 0x25c9ccu: goto label_25c9cc;
        case 0x25c9d0u: goto label_25c9d0;
        case 0x25c9d4u: goto label_25c9d4;
        case 0x25c9d8u: goto label_25c9d8;
        case 0x25c9dcu: goto label_25c9dc;
        case 0x25c9e0u: goto label_25c9e0;
        case 0x25c9e4u: goto label_25c9e4;
        case 0x25c9e8u: goto label_25c9e8;
        case 0x25c9ecu: goto label_25c9ec;
        case 0x25c9f0u: goto label_25c9f0;
        case 0x25c9f4u: goto label_25c9f4;
        case 0x25c9f8u: goto label_25c9f8;
        case 0x25c9fcu: goto label_25c9fc;
        case 0x25ca00u: goto label_25ca00;
        case 0x25ca04u: goto label_25ca04;
        case 0x25ca08u: goto label_25ca08;
        case 0x25ca0cu: goto label_25ca0c;
        case 0x25ca10u: goto label_25ca10;
        case 0x25ca14u: goto label_25ca14;
        case 0x25ca18u: goto label_25ca18;
        case 0x25ca1cu: goto label_25ca1c;
        case 0x25ca20u: goto label_25ca20;
        case 0x25ca24u: goto label_25ca24;
        case 0x25ca28u: goto label_25ca28;
        case 0x25ca2cu: goto label_25ca2c;
        case 0x25ca30u: goto label_25ca30;
        case 0x25ca34u: goto label_25ca34;
        case 0x25ca38u: goto label_25ca38;
        case 0x25ca3cu: goto label_25ca3c;
        case 0x25ca40u: goto label_25ca40;
        case 0x25ca44u: goto label_25ca44;
        case 0x25ca48u: goto label_25ca48;
        case 0x25ca4cu: goto label_25ca4c;
        case 0x25ca50u: goto label_25ca50;
        case 0x25ca54u: goto label_25ca54;
        case 0x25ca58u: goto label_25ca58;
        case 0x25ca5cu: goto label_25ca5c;
        case 0x25ca60u: goto label_25ca60;
        case 0x25ca64u: goto label_25ca64;
        case 0x25ca68u: goto label_25ca68;
        case 0x25ca6cu: goto label_25ca6c;
        case 0x25ca70u: goto label_25ca70;
        case 0x25ca74u: goto label_25ca74;
        case 0x25ca78u: goto label_25ca78;
        case 0x25ca7cu: goto label_25ca7c;
        case 0x25ca80u: goto label_25ca80;
        case 0x25ca84u: goto label_25ca84;
        case 0x25ca88u: goto label_25ca88;
        case 0x25ca8cu: goto label_25ca8c;
        case 0x25ca90u: goto label_25ca90;
        case 0x25ca94u: goto label_25ca94;
        case 0x25ca98u: goto label_25ca98;
        case 0x25ca9cu: goto label_25ca9c;
        case 0x25caa0u: goto label_25caa0;
        case 0x25caa4u: goto label_25caa4;
        case 0x25caa8u: goto label_25caa8;
        case 0x25caacu: goto label_25caac;
        case 0x25cab0u: goto label_25cab0;
        case 0x25cab4u: goto label_25cab4;
        case 0x25cab8u: goto label_25cab8;
        case 0x25cabcu: goto label_25cabc;
        case 0x25cac0u: goto label_25cac0;
        case 0x25cac4u: goto label_25cac4;
        case 0x25cac8u: goto label_25cac8;
        case 0x25caccu: goto label_25cacc;
        case 0x25cad0u: goto label_25cad0;
        case 0x25cad4u: goto label_25cad4;
        case 0x25cad8u: goto label_25cad8;
        case 0x25cadcu: goto label_25cadc;
        case 0x25cae0u: goto label_25cae0;
        case 0x25cae4u: goto label_25cae4;
        case 0x25cae8u: goto label_25cae8;
        case 0x25caecu: goto label_25caec;
        case 0x25caf0u: goto label_25caf0;
        case 0x25caf4u: goto label_25caf4;
        case 0x25caf8u: goto label_25caf8;
        case 0x25cafcu: goto label_25cafc;
        case 0x25cb00u: goto label_25cb00;
        case 0x25cb04u: goto label_25cb04;
        case 0x25cb08u: goto label_25cb08;
        case 0x25cb0cu: goto label_25cb0c;
        case 0x25cb10u: goto label_25cb10;
        case 0x25cb14u: goto label_25cb14;
        case 0x25cb18u: goto label_25cb18;
        case 0x25cb1cu: goto label_25cb1c;
        case 0x25cb20u: goto label_25cb20;
        case 0x25cb24u: goto label_25cb24;
        case 0x25cb28u: goto label_25cb28;
        case 0x25cb2cu: goto label_25cb2c;
        case 0x25cb30u: goto label_25cb30;
        case 0x25cb34u: goto label_25cb34;
        case 0x25cb38u: goto label_25cb38;
        case 0x25cb3cu: goto label_25cb3c;
        case 0x25cb40u: goto label_25cb40;
        case 0x25cb44u: goto label_25cb44;
        case 0x25cb48u: goto label_25cb48;
        case 0x25cb4cu: goto label_25cb4c;
        case 0x25cb50u: goto label_25cb50;
        case 0x25cb54u: goto label_25cb54;
        case 0x25cb58u: goto label_25cb58;
        case 0x25cb5cu: goto label_25cb5c;
        case 0x25cb60u: goto label_25cb60;
        case 0x25cb64u: goto label_25cb64;
        case 0x25cb68u: goto label_25cb68;
        case 0x25cb6cu: goto label_25cb6c;
        case 0x25cb70u: goto label_25cb70;
        case 0x25cb74u: goto label_25cb74;
        case 0x25cb78u: goto label_25cb78;
        case 0x25cb7cu: goto label_25cb7c;
        case 0x25cb80u: goto label_25cb80;
        case 0x25cb84u: goto label_25cb84;
        case 0x25cb88u: goto label_25cb88;
        case 0x25cb8cu: goto label_25cb8c;
        case 0x25cb90u: goto label_25cb90;
        case 0x25cb94u: goto label_25cb94;
        case 0x25cb98u: goto label_25cb98;
        case 0x25cb9cu: goto label_25cb9c;
        case 0x25cba0u: goto label_25cba0;
        case 0x25cba4u: goto label_25cba4;
        case 0x25cba8u: goto label_25cba8;
        case 0x25cbacu: goto label_25cbac;
        case 0x25cbb0u: goto label_25cbb0;
        case 0x25cbb4u: goto label_25cbb4;
        case 0x25cbb8u: goto label_25cbb8;
        case 0x25cbbcu: goto label_25cbbc;
        case 0x25cbc0u: goto label_25cbc0;
        case 0x25cbc4u: goto label_25cbc4;
        case 0x25cbc8u: goto label_25cbc8;
        case 0x25cbccu: goto label_25cbcc;
        case 0x25cbd0u: goto label_25cbd0;
        case 0x25cbd4u: goto label_25cbd4;
        case 0x25cbd8u: goto label_25cbd8;
        case 0x25cbdcu: goto label_25cbdc;
        case 0x25cbe0u: goto label_25cbe0;
        case 0x25cbe4u: goto label_25cbe4;
        case 0x25cbe8u: goto label_25cbe8;
        case 0x25cbecu: goto label_25cbec;
        case 0x25cbf0u: goto label_25cbf0;
        case 0x25cbf4u: goto label_25cbf4;
        case 0x25cbf8u: goto label_25cbf8;
        case 0x25cbfcu: goto label_25cbfc;
        case 0x25cc00u: goto label_25cc00;
        case 0x25cc04u: goto label_25cc04;
        case 0x25cc08u: goto label_25cc08;
        case 0x25cc0cu: goto label_25cc0c;
        case 0x25cc10u: goto label_25cc10;
        case 0x25cc14u: goto label_25cc14;
        case 0x25cc18u: goto label_25cc18;
        case 0x25cc1cu: goto label_25cc1c;
        case 0x25cc20u: goto label_25cc20;
        case 0x25cc24u: goto label_25cc24;
        case 0x25cc28u: goto label_25cc28;
        case 0x25cc2cu: goto label_25cc2c;
        case 0x25cc30u: goto label_25cc30;
        case 0x25cc34u: goto label_25cc34;
        case 0x25cc38u: goto label_25cc38;
        case 0x25cc3cu: goto label_25cc3c;
        case 0x25cc40u: goto label_25cc40;
        case 0x25cc44u: goto label_25cc44;
        case 0x25cc48u: goto label_25cc48;
        case 0x25cc4cu: goto label_25cc4c;
        case 0x25cc50u: goto label_25cc50;
        case 0x25cc54u: goto label_25cc54;
        case 0x25cc58u: goto label_25cc58;
        case 0x25cc5cu: goto label_25cc5c;
        case 0x25cc60u: goto label_25cc60;
        case 0x25cc64u: goto label_25cc64;
        case 0x25cc68u: goto label_25cc68;
        case 0x25cc6cu: goto label_25cc6c;
        case 0x25cc70u: goto label_25cc70;
        case 0x25cc74u: goto label_25cc74;
        case 0x25cc78u: goto label_25cc78;
        case 0x25cc7cu: goto label_25cc7c;
        case 0x25cc80u: goto label_25cc80;
        case 0x25cc84u: goto label_25cc84;
        case 0x25cc88u: goto label_25cc88;
        case 0x25cc8cu: goto label_25cc8c;
        case 0x25cc90u: goto label_25cc90;
        case 0x25cc94u: goto label_25cc94;
        case 0x25cc98u: goto label_25cc98;
        case 0x25cc9cu: goto label_25cc9c;
        case 0x25cca0u: goto label_25cca0;
        case 0x25cca4u: goto label_25cca4;
        case 0x25cca8u: goto label_25cca8;
        case 0x25ccacu: goto label_25ccac;
        case 0x25ccb0u: goto label_25ccb0;
        case 0x25ccb4u: goto label_25ccb4;
        case 0x25ccb8u: goto label_25ccb8;
        case 0x25ccbcu: goto label_25ccbc;
        case 0x25ccc0u: goto label_25ccc0;
        case 0x25ccc4u: goto label_25ccc4;
        case 0x25ccc8u: goto label_25ccc8;
        case 0x25ccccu: goto label_25cccc;
        case 0x25ccd0u: goto label_25ccd0;
        case 0x25ccd4u: goto label_25ccd4;
        case 0x25ccd8u: goto label_25ccd8;
        case 0x25ccdcu: goto label_25ccdc;
        case 0x25cce0u: goto label_25cce0;
        case 0x25cce4u: goto label_25cce4;
        case 0x25cce8u: goto label_25cce8;
        case 0x25ccecu: goto label_25ccec;
        case 0x25ccf0u: goto label_25ccf0;
        case 0x25ccf4u: goto label_25ccf4;
        case 0x25ccf8u: goto label_25ccf8;
        case 0x25ccfcu: goto label_25ccfc;
        case 0x25cd00u: goto label_25cd00;
        case 0x25cd04u: goto label_25cd04;
        case 0x25cd08u: goto label_25cd08;
        case 0x25cd0cu: goto label_25cd0c;
        case 0x25cd10u: goto label_25cd10;
        case 0x25cd14u: goto label_25cd14;
        case 0x25cd18u: goto label_25cd18;
        case 0x25cd1cu: goto label_25cd1c;
        case 0x25cd20u: goto label_25cd20;
        case 0x25cd24u: goto label_25cd24;
        case 0x25cd28u: goto label_25cd28;
        case 0x25cd2cu: goto label_25cd2c;
        case 0x25cd30u: goto label_25cd30;
        case 0x25cd34u: goto label_25cd34;
        case 0x25cd38u: goto label_25cd38;
        case 0x25cd3cu: goto label_25cd3c;
        case 0x25cd40u: goto label_25cd40;
        case 0x25cd44u: goto label_25cd44;
        case 0x25cd48u: goto label_25cd48;
        case 0x25cd4cu: goto label_25cd4c;
        case 0x25cd50u: goto label_25cd50;
        case 0x25cd54u: goto label_25cd54;
        case 0x25cd58u: goto label_25cd58;
        case 0x25cd5cu: goto label_25cd5c;
        case 0x25cd60u: goto label_25cd60;
        case 0x25cd64u: goto label_25cd64;
        case 0x25cd68u: goto label_25cd68;
        case 0x25cd6cu: goto label_25cd6c;
        case 0x25cd70u: goto label_25cd70;
        case 0x25cd74u: goto label_25cd74;
        case 0x25cd78u: goto label_25cd78;
        case 0x25cd7cu: goto label_25cd7c;
        case 0x25cd80u: goto label_25cd80;
        case 0x25cd84u: goto label_25cd84;
        case 0x25cd88u: goto label_25cd88;
        case 0x25cd8cu: goto label_25cd8c;
        case 0x25cd90u: goto label_25cd90;
        case 0x25cd94u: goto label_25cd94;
        case 0x25cd98u: goto label_25cd98;
        case 0x25cd9cu: goto label_25cd9c;
        case 0x25cda0u: goto label_25cda0;
        case 0x25cda4u: goto label_25cda4;
        case 0x25cda8u: goto label_25cda8;
        case 0x25cdacu: goto label_25cdac;
        case 0x25cdb0u: goto label_25cdb0;
        case 0x25cdb4u: goto label_25cdb4;
        case 0x25cdb8u: goto label_25cdb8;
        case 0x25cdbcu: goto label_25cdbc;
        case 0x25cdc0u: goto label_25cdc0;
        case 0x25cdc4u: goto label_25cdc4;
        case 0x25cdc8u: goto label_25cdc8;
        case 0x25cdccu: goto label_25cdcc;
        case 0x25cdd0u: goto label_25cdd0;
        case 0x25cdd4u: goto label_25cdd4;
        case 0x25cdd8u: goto label_25cdd8;
        case 0x25cddcu: goto label_25cddc;
        case 0x25cde0u: goto label_25cde0;
        case 0x25cde4u: goto label_25cde4;
        case 0x25cde8u: goto label_25cde8;
        case 0x25cdecu: goto label_25cdec;
        case 0x25cdf0u: goto label_25cdf0;
        case 0x25cdf4u: goto label_25cdf4;
        case 0x25cdf8u: goto label_25cdf8;
        case 0x25cdfcu: goto label_25cdfc;
        case 0x25ce00u: goto label_25ce00;
        case 0x25ce04u: goto label_25ce04;
        case 0x25ce08u: goto label_25ce08;
        case 0x25ce0cu: goto label_25ce0c;
        case 0x25ce10u: goto label_25ce10;
        case 0x25ce14u: goto label_25ce14;
        case 0x25ce18u: goto label_25ce18;
        case 0x25ce1cu: goto label_25ce1c;
        case 0x25ce20u: goto label_25ce20;
        case 0x25ce24u: goto label_25ce24;
        case 0x25ce28u: goto label_25ce28;
        case 0x25ce2cu: goto label_25ce2c;
        default: return;
    }

label_25c660:
    // 0x25c660: 0x5d43  sra         $t3, $zero, 21
    ctx->pc = 0x25c660u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 0), 21));
label_25c664:
    // 0x25c664: 0x10480  sll         $zero, $at, 18
    ctx->pc = 0x25c664u;
    
label_25c668:
    // 0x25c668: 0x0  nop
    ctx->pc = 0x25c668u;
    // NOP
label_25c66c:
    // 0x25c66c: 0x0  nop
    ctx->pc = 0x25c66cu;
    // NOP
label_25c670:
    // 0x25c670: 0x5d64  .word       0x00005D64                   # and         $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c670u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25c674:
    // 0x25c674: 0x71a0  .word       0x000071A0                   # add         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25c678:
    // 0x25c678: 0x0  nop
    ctx->pc = 0x25c678u;
    // NOP
label_25c67c:
    // 0x25c67c: 0x0  nop
    ctx->pc = 0x25c67cu;
    // NOP
label_25c680:
    // 0x25c680: 0x5d73  tltu        $zero, $zero, 373
    ctx->pc = 0x25c680u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c684:
    // 0x25c684: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c684u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25c688:
    // 0x25c688: 0x0  nop
    ctx->pc = 0x25c688u;
    // NOP
label_25c68c:
    // 0x25c68c: 0x0  nop
    ctx->pc = 0x25c68cu;
    // NOP
label_25c690:
    // 0x25c690: 0x5d80  sll         $t3, $zero, 22
    ctx->pc = 0x25c690u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25c694:
    // 0x25c694: 0xe430  tge         $zero, $zero, 912
    ctx->pc = 0x25c694u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c698:
    // 0x25c698: 0x0  nop
    ctx->pc = 0x25c698u;
    // NOP
label_25c69c:
    // 0x25c69c: 0x0  nop
    ctx->pc = 0x25c69cu;
    // NOP
label_25c6a0:
    // 0x25c6a0: 0x5d9d  .word       0x00005D9D                   # dmultu      $zero, $zero # 00005D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c6a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25C6A0 raw=0x00005D9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c6a4:
    // 0x25c6a4: 0x5c80  sll         $t3, $zero, 18
    ctx->pc = 0x25c6a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_25c6a8:
    // 0x25c6a8: 0x0  nop
    ctx->pc = 0x25c6a8u;
    // NOP
label_25c6ac:
    // 0x25c6ac: 0x0  nop
    ctx->pc = 0x25c6acu;
    // NOP
label_25c6b0:
    // 0x25c6b0: 0x5da9  .word       0x00005DA9                   # mtsa        $zero # 00005D80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25c6b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25c6b4:
    // 0x25c6b4: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x25c6b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25c6b8:
    // 0x25c6b8: 0x0  nop
    ctx->pc = 0x25c6b8u;
    // NOP
label_25c6bc:
    // 0x25c6bc: 0x0  nop
    ctx->pc = 0x25c6bcu;
    // NOP
label_25c6c0:
    // 0x25c6c0: 0x5db7  .word       0x00005DB7                   # INVALID     $zero, $zero, 0x5DB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c6c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25C6C0 raw=0x00005DB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c6c4:
    // 0x25c6c4: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x25c6c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c6c8:
    // 0x25c6c8: 0x0  nop
    ctx->pc = 0x25c6c8u;
    // NOP
label_25c6cc:
    // 0x25c6cc: 0x0  nop
    ctx->pc = 0x25c6ccu;
    // NOP
label_25c6d0:
    // 0x25c6d0: 0x5dc2  srl         $t3, $zero, 23
    ctx->pc = 0x25c6d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 0), 23));
label_25c6d4:
    // 0x25c6d4: 0xb4e0  .word       0x0000B4E0                   # add         $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c6d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_25c6d8:
    // 0x25c6d8: 0x0  nop
    ctx->pc = 0x25c6d8u;
    // NOP
label_25c6dc:
    // 0x25c6dc: 0x0  nop
    ctx->pc = 0x25c6dcu;
    // NOP
label_25c6e0:
    // 0x25c6e0: 0x5dd9  .word       0x00005DD9                   # multu       $zero, $zero # 00005DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c6e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_25c6e4:
    // 0x25c6e4: 0x7690  .word       0x00007690                   # mfhi        $t6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c6e4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25c6e8:
    // 0x25c6e8: 0x0  nop
    ctx->pc = 0x25c6e8u;
    // NOP
label_25c6ec:
    // 0x25c6ec: 0x0  nop
    ctx->pc = 0x25c6ecu;
    // NOP
label_25c6f0:
    // 0x25c6f0: 0x5de8  .word       0x00005DE8                   # mfsa        $t3 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25c6f0u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_25c6f4:
    // 0x25c6f4: 0xbf10  .word       0x0000BF10                   # mfhi        $s7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c6f4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_25c6f8:
    // 0x25c6f8: 0x0  nop
    ctx->pc = 0x25c6f8u;
    // NOP
label_25c6fc:
    // 0x25c6fc: 0x0  nop
    ctx->pc = 0x25c6fcu;
    // NOP
label_25c700:
    // 0x25c700: 0x5e00  sll         $t3, $zero, 24
    ctx->pc = 0x25c700u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25c704:
    // 0x25c704: 0x91a0  .word       0x000091A0                   # add         $s2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c704u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25c708:
    // 0x25c708: 0x0  nop
    ctx->pc = 0x25c708u;
    // NOP
label_25c70c:
    // 0x25c70c: 0x0  nop
    ctx->pc = 0x25c70cu;
    // NOP
label_25c710:
    // 0x25c710: 0x5e13  .word       0x00005E13                   # mtlo        $zero # 00005E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c710u;
    ctx->lo = GPR_U64(ctx, 0);
label_25c714:
    // 0x25c714: 0x86b0  tge         $zero, $zero, 538
    ctx->pc = 0x25c714u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c718:
    // 0x25c718: 0x0  nop
    ctx->pc = 0x25c718u;
    // NOP
label_25c71c:
    // 0x25c71c: 0x0  nop
    ctx->pc = 0x25c71cu;
    // NOP
label_25c720:
    // 0x25c720: 0x5e24  .word       0x00005E24                   # and         $t3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c720u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25c724:
    // 0x25c724: 0xa070  tge         $zero, $zero, 641
    ctx->pc = 0x25c724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c728:
    // 0x25c728: 0x0  nop
    ctx->pc = 0x25c728u;
    // NOP
label_25c72c:
    // 0x25c72c: 0x0  nop
    ctx->pc = 0x25c72cu;
    // NOP
label_25c730:
    // 0x25c730: 0x5e39  .word       0x00005E39                   # INVALID     $zero, $zero, 0x5E39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25C730 raw=0x00005E39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c734:
    // 0x25c734: 0x6e80  sll         $t5, $zero, 26
    ctx->pc = 0x25c734u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_25c738:
    // 0x25c738: 0x0  nop
    ctx->pc = 0x25c738u;
    // NOP
label_25c73c:
    // 0x25c73c: 0x0  nop
    ctx->pc = 0x25c73cu;
    // NOP
label_25c740:
    // 0x25c740: 0x5e47  .word       0x00005E47                   # srav        $t3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c740u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25c744:
    // 0x25c744: 0xcfe0  .word       0x0000CFE0                   # add         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25c748:
    // 0x25c748: 0x0  nop
    ctx->pc = 0x25c748u;
    // NOP
label_25c74c:
    // 0x25c74c: 0x0  nop
    ctx->pc = 0x25c74cu;
    // NOP
label_25c750:
    // 0x25c750: 0x5e61  .word       0x00005E61                   # addu        $t3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c750u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25c754:
    // 0x25c754: 0xd240  sll         $k0, $zero, 9
    ctx->pc = 0x25c754u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25c758:
    // 0x25c758: 0x0  nop
    ctx->pc = 0x25c758u;
    // NOP
label_25c75c:
    // 0x25c75c: 0x0  nop
    ctx->pc = 0x25c75cu;
    // NOP
label_25c760:
    // 0x25c760: 0x5e7c  dsll32      $t3, $zero, 25
    ctx->pc = 0x25c760u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << (32 + 25));
label_25c764:
    // 0x25c764: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c764u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25c768:
    // 0x25c768: 0x0  nop
    ctx->pc = 0x25c768u;
    // NOP
label_25c76c:
    // 0x25c76c: 0x0  nop
    ctx->pc = 0x25c76cu;
    // NOP
label_25c770:
    // 0x25c770: 0x5e87  .word       0x00005E87                   # srav        $t3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c770u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25c774:
    // 0x25c774: 0xa970  tge         $zero, $zero, 677
    ctx->pc = 0x25c774u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c778:
    // 0x25c778: 0x0  nop
    ctx->pc = 0x25c778u;
    // NOP
label_25c77c:
    // 0x25c77c: 0x0  nop
    ctx->pc = 0x25c77cu;
    // NOP
label_25c780:
    // 0x25c780: 0x5e9d  .word       0x00005E9D                   # dmultu      $zero, $zero # 00005E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25C780 raw=0x00005E9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c784:
    // 0x25c784: 0x7c10  .word       0x00007C10                   # mfhi        $t7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c784u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25c788:
    // 0x25c788: 0x0  nop
    ctx->pc = 0x25c788u;
    // NOP
label_25c78c:
    // 0x25c78c: 0x0  nop
    ctx->pc = 0x25c78cu;
    // NOP
label_25c790:
    // 0x25c790: 0x5ead  .word       0x00005EAD                   # daddu       $t3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c790u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c794:
    // 0x25c794: 0xb1b0  tge         $zero, $zero, 710
    ctx->pc = 0x25c794u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c798:
    // 0x25c798: 0x0  nop
    ctx->pc = 0x25c798u;
    // NOP
label_25c79c:
    // 0x25c79c: 0x0  nop
    ctx->pc = 0x25c79cu;
    // NOP
label_25c7a0:
    // 0x25c7a0: 0x5ec4  .word       0x00005EC4                   # sllv        $t3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c7a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25c7a4:
    // 0x25c7a4: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x25c7a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25c7a8:
    // 0x25c7a8: 0x0  nop
    ctx->pc = 0x25c7a8u;
    // NOP
label_25c7ac:
    // 0x25c7ac: 0x0  nop
    ctx->pc = 0x25c7acu;
    // NOP
label_25c7b0:
    // 0x25c7b0: 0x5ed1  .word       0x00005ED1                   # mthi        $zero # 00005EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c7b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25c7b4:
    // 0x25c7b4: 0x8070  tge         $zero, $zero, 513
    ctx->pc = 0x25c7b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c7b8:
    // 0x25c7b8: 0x0  nop
    ctx->pc = 0x25c7b8u;
    // NOP
label_25c7bc:
    // 0x25c7bc: 0x0  nop
    ctx->pc = 0x25c7bcu;
    // NOP
label_25c7c0:
    // 0x25c7c0: 0x5ee2  .word       0x00005EE2                   # neg         $t3, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c7c0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_25c7c4:
    // 0x25c7c4: 0xf7e0  .word       0x0000F7E0                   # add         $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_25c7c8:
    // 0x25c7c8: 0x0  nop
    ctx->pc = 0x25c7c8u;
    // NOP
label_25c7cc:
    // 0x25c7cc: 0x0  nop
    ctx->pc = 0x25c7ccu;
    // NOP
label_25c7d0:
    // 0x25c7d0: 0x5f01  .word       0x00005F01                   # INVALID     $zero, $zero, 0x5F01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c7d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25C7D0 raw=0x00005F01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c7d4:
    // 0x25c7d4: 0xed50  .word       0x0000ED50                   # mfhi        $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c7d4u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_25c7d8:
    // 0x25c7d8: 0x0  nop
    ctx->pc = 0x25c7d8u;
    // NOP
label_25c7dc:
    // 0x25c7dc: 0x0  nop
    ctx->pc = 0x25c7dcu;
    // NOP
label_25c7e0:
    // 0x25c7e0: 0x5f1f  .word       0x00005F1F                   # ddivu       $t3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c7e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25C7E0 raw=0x00005F1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c7e4:
    // 0x25c7e4: 0xa970  tge         $zero, $zero, 677
    ctx->pc = 0x25c7e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c7e8:
    // 0x25c7e8: 0x0  nop
    ctx->pc = 0x25c7e8u;
    // NOP
label_25c7ec:
    // 0x25c7ec: 0x0  nop
    ctx->pc = 0x25c7ecu;
    // NOP
label_25c7f0:
    // 0x25c7f0: 0x5f35  .word       0x00005F35                   # INVALID     $zero, $zero, 0x5F35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c7f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25C7F0 raw=0x00005F35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c7f4:
    // 0x25c7f4: 0xa340  sll         $s4, $zero, 13
    ctx->pc = 0x25c7f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25c7f8:
    // 0x25c7f8: 0x0  nop
    ctx->pc = 0x25c7f8u;
    // NOP
label_25c7fc:
    // 0x25c7fc: 0x0  nop
    ctx->pc = 0x25c7fcu;
    // NOP
label_25c800:
    // 0x25c800: 0x5f4a  .word       0x00005F4A                   # movz        $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c800u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_25c804:
    // 0x25c804: 0xd470  tge         $zero, $zero, 849
    ctx->pc = 0x25c804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c808:
    // 0x25c808: 0x0  nop
    ctx->pc = 0x25c808u;
    // NOP
label_25c80c:
    // 0x25c80c: 0x0  nop
    ctx->pc = 0x25c80cu;
    // NOP
label_25c810:
    // 0x25c810: 0x5f65  .word       0x00005F65                   # move        $t3, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c810u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25c814:
    // 0x25c814: 0xa8e0  .word       0x0000A8E0                   # add         $s5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25c818:
    // 0x25c818: 0x0  nop
    ctx->pc = 0x25c818u;
    // NOP
label_25c81c:
    // 0x25c81c: 0x0  nop
    ctx->pc = 0x25c81cu;
    // NOP
label_25c820:
    // 0x25c820: 0x5f7b  dsra        $t3, $zero, 29
    ctx->pc = 0x25c820u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> 29);
label_25c824:
    // 0x25c824: 0xc6c0  sll         $t8, $zero, 27
    ctx->pc = 0x25c824u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25c828:
    // 0x25c828: 0x0  nop
    ctx->pc = 0x25c828u;
    // NOP
label_25c82c:
    // 0x25c82c: 0x0  nop
    ctx->pc = 0x25c82cu;
    // NOP
label_25c830:
    // 0x25c830: 0x5f94  .word       0x00005F94                   # dsllv       $t3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c830u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25c834:
    // 0x25c834: 0x9390  .word       0x00009390                   # mfhi        $s2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c834u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25c838:
    // 0x25c838: 0x0  nop
    ctx->pc = 0x25c838u;
    // NOP
label_25c83c:
    // 0x25c83c: 0x0  nop
    ctx->pc = 0x25c83cu;
    // NOP
label_25c840:
    // 0x25c840: 0x5fa7  .word       0x00005FA7                   # not         $t3, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c840u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25c844:
    // 0x25c844: 0xc0a0  .word       0x0000C0A0                   # add         $t8, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25c848:
    // 0x25c848: 0x0  nop
    ctx->pc = 0x25c848u;
    // NOP
label_25c84c:
    // 0x25c84c: 0x0  nop
    ctx->pc = 0x25c84cu;
    // NOP
label_25c850:
    // 0x25c850: 0x5fc0  sll         $t3, $zero, 31
    ctx->pc = 0x25c850u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25c854:
    // 0x25c854: 0xe740  sll         $gp, $zero, 29
    ctx->pc = 0x25c854u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_25c858:
    // 0x25c858: 0x0  nop
    ctx->pc = 0x25c858u;
    // NOP
label_25c85c:
    // 0x25c85c: 0x0  nop
    ctx->pc = 0x25c85cu;
    // NOP
label_25c860:
    // 0x25c860: 0x5fdd  .word       0x00005FDD                   # dmultu      $zero, $zero # 00005FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25C860 raw=0x00005FDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c864:
    // 0x25c864: 0xed80  sll         $sp, $zero, 22
    ctx->pc = 0x25c864u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25c868:
    // 0x25c868: 0x0  nop
    ctx->pc = 0x25c868u;
    // NOP
label_25c86c:
    // 0x25c86c: 0x0  nop
    ctx->pc = 0x25c86cu;
    // NOP
label_25c870:
    // 0x25c870: 0x5ffb  dsra        $t3, $zero, 31
    ctx->pc = 0x25c870u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> 31);
label_25c874:
    // 0x25c874: 0x9810  mfhi        $s3
    ctx->pc = 0x25c874u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_25c878:
    // 0x25c878: 0x0  nop
    ctx->pc = 0x25c878u;
    // NOP
label_25c87c:
    // 0x25c87c: 0x0  nop
    ctx->pc = 0x25c87cu;
    // NOP
label_25c880:
    // 0x25c880: 0x600f  .word       0x0000600F                   # sync # 00006000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c880u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25c884:
    // 0x25c884: 0xb440  sll         $s6, $zero, 17
    ctx->pc = 0x25c884u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_25c888:
    // 0x25c888: 0x0  nop
    ctx->pc = 0x25c888u;
    // NOP
label_25c88c:
    // 0x25c88c: 0x0  nop
    ctx->pc = 0x25c88cu;
    // NOP
label_25c890:
    // 0x25c890: 0x6026  xor         $t4, $zero, $zero
    ctx->pc = 0x25c890u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25c894:
    // 0x25c894: 0xf750  .word       0x0000F750                   # mfhi        $fp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c894u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_25c898:
    // 0x25c898: 0x0  nop
    ctx->pc = 0x25c898u;
    // NOP
label_25c89c:
    // 0x25c89c: 0x0  nop
    ctx->pc = 0x25c89cu;
    // NOP
label_25c8a0:
    // 0x25c8a0: 0x6045  .word       0x00006045                   # INVALID     $zero, $zero, 0x6045 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25C8A0 raw=0x00006045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c8a4:
    // 0x25c8a4: 0xb670  tge         $zero, $zero, 729
    ctx->pc = 0x25c8a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c8a8:
    // 0x25c8a8: 0x0  nop
    ctx->pc = 0x25c8a8u;
    // NOP
label_25c8ac:
    // 0x25c8ac: 0x0  nop
    ctx->pc = 0x25c8acu;
    // NOP
label_25c8b0:
    // 0x25c8b0: 0x605c  .word       0x0000605C                   # dmult       $zero, $zero # 00006040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c8b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25C8B0 raw=0x0000605C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c8b4:
    // 0x25c8b4: 0xd1e0  .word       0x0000D1E0                   # add         $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_25c8b8:
    // 0x25c8b8: 0x0  nop
    ctx->pc = 0x25c8b8u;
    // NOP
label_25c8bc:
    // 0x25c8bc: 0x0  nop
    ctx->pc = 0x25c8bcu;
    // NOP
label_25c8c0:
    // 0x25c8c0: 0x6077  .word       0x00006077                   # INVALID     $zero, $zero, 0x6077 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c8c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25C8C0 raw=0x00006077"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c8c4:
    // 0x25c8c4: 0xb6c0  sll         $s6, $zero, 27
    ctx->pc = 0x25c8c4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25c8c8:
    // 0x25c8c8: 0x0  nop
    ctx->pc = 0x25c8c8u;
    // NOP
label_25c8cc:
    // 0x25c8cc: 0x0  nop
    ctx->pc = 0x25c8ccu;
    // NOP
label_25c8d0:
    // 0x25c8d0: 0x608e  .word       0x0000608E                   # INVALID     $zero, $zero, 0x608E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c8d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25C8D0 raw=0x0000608E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c8d4:
    // 0x25c8d4: 0xd5e0  .word       0x0000D5E0                   # add         $k0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c8d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_25c8d8:
    // 0x25c8d8: 0x0  nop
    ctx->pc = 0x25c8d8u;
    // NOP
label_25c8dc:
    // 0x25c8dc: 0x0  nop
    ctx->pc = 0x25c8dcu;
    // NOP
label_25c8e0:
    // 0x25c8e0: 0x60a9  .word       0x000060A9                   # mtsa        $zero # 00006080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25c8e0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25c8e4:
    // 0x25c8e4: 0xc200  sll         $t8, $zero, 8
    ctx->pc = 0x25c8e4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25c8e8:
    // 0x25c8e8: 0x0  nop
    ctx->pc = 0x25c8e8u;
    // NOP
label_25c8ec:
    // 0x25c8ec: 0x0  nop
    ctx->pc = 0x25c8ecu;
    // NOP
label_25c8f0:
    // 0x25c8f0: 0x60c2  srl         $t4, $zero, 3
    ctx->pc = 0x25c8f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 0), 3));
label_25c8f4:
    // 0x25c8f4: 0xd670  tge         $zero, $zero, 857
    ctx->pc = 0x25c8f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c8f8:
    // 0x25c8f8: 0x0  nop
    ctx->pc = 0x25c8f8u;
    // NOP
label_25c8fc:
    // 0x25c8fc: 0x0  nop
    ctx->pc = 0x25c8fcu;
    // NOP
label_25c900:
    // 0x25c900: 0x60dd  .word       0x000060DD                   # dmultu      $zero, $zero # 000060C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25C900 raw=0x000060DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c904:
    // 0x25c904: 0xb020  add         $s6, $zero, $zero
    ctx->pc = 0x25c904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_25c908:
    // 0x25c908: 0x0  nop
    ctx->pc = 0x25c908u;
    // NOP
label_25c90c:
    // 0x25c90c: 0x0  nop
    ctx->pc = 0x25c90cu;
    // NOP
label_25c910:
    // 0x25c910: 0x60f4  teq         $zero, $zero, 387
    ctx->pc = 0x25c910u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c914:
    // 0x25c914: 0xc4f0  tge         $zero, $zero, 787
    ctx->pc = 0x25c914u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c918:
    // 0x25c918: 0x0  nop
    ctx->pc = 0x25c918u;
    // NOP
label_25c91c:
    // 0x25c91c: 0x0  nop
    ctx->pc = 0x25c91cu;
    // NOP
label_25c920:
    // 0x25c920: 0x610d  break       0, 388
    ctx->pc = 0x25c920u;
    runtime->handleBreak(rdram, ctx);
label_25c924:
    // 0x25c924: 0xd940  sll         $k1, $zero, 5
    ctx->pc = 0x25c924u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_25c928:
    // 0x25c928: 0x0  nop
    ctx->pc = 0x25c928u;
    // NOP
label_25c92c:
    // 0x25c92c: 0x0  nop
    ctx->pc = 0x25c92cu;
    // NOP
label_25c930:
    // 0x25c930: 0x6129  .word       0x00006129                   # mtsa        $zero # 00006100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25c930u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25c934:
    // 0x25c934: 0x9e20  .word       0x00009E20                   # add         $s3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_25c938:
    // 0x25c938: 0x0  nop
    ctx->pc = 0x25c938u;
    // NOP
label_25c93c:
    // 0x25c93c: 0x0  nop
    ctx->pc = 0x25c93cu;
    // NOP
label_25c940:
    // 0x25c940: 0x613d  .word       0x0000613D                   # INVALID     $zero, $zero, 0x613D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25C940 raw=0x0000613D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c944:
    // 0x25c944: 0x8c50  .word       0x00008C50                   # mfhi        $s1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c944u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25c948:
    // 0x25c948: 0x0  nop
    ctx->pc = 0x25c948u;
    // NOP
label_25c94c:
    // 0x25c94c: 0x0  nop
    ctx->pc = 0x25c94cu;
    // NOP
label_25c950:
    // 0x25c950: 0x614f  .word       0x0000614F                   # sync # 00006000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c950u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25c954:
    // 0x25c954: 0xb270  tge         $zero, $zero, 713
    ctx->pc = 0x25c954u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c958:
    // 0x25c958: 0x0  nop
    ctx->pc = 0x25c958u;
    // NOP
label_25c95c:
    // 0x25c95c: 0x0  nop
    ctx->pc = 0x25c95cu;
    // NOP
label_25c960:
    // 0x25c960: 0x6166  .word       0x00006166                   # xor         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c960u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25c964:
    // 0x25c964: 0x9f70  tge         $zero, $zero, 637
    ctx->pc = 0x25c964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c968:
    // 0x25c968: 0x0  nop
    ctx->pc = 0x25c968u;
    // NOP
label_25c96c:
    // 0x25c96c: 0x0  nop
    ctx->pc = 0x25c96cu;
    // NOP
label_25c970:
    // 0x25c970: 0x617a  dsrl        $t4, $zero, 5
    ctx->pc = 0x25c970u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) >> 5);
label_25c974:
    // 0x25c974: 0xc470  tge         $zero, $zero, 785
    ctx->pc = 0x25c974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c978:
    // 0x25c978: 0x0  nop
    ctx->pc = 0x25c978u;
    // NOP
label_25c97c:
    // 0x25c97c: 0x0  nop
    ctx->pc = 0x25c97cu;
    // NOP
label_25c980:
    // 0x25c980: 0x6193  .word       0x00006193                   # mtlo        $zero # 00006180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c980u;
    ctx->lo = GPR_U64(ctx, 0);
label_25c984:
    // 0x25c984: 0xb670  tge         $zero, $zero, 729
    ctx->pc = 0x25c984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c988:
    // 0x25c988: 0x0  nop
    ctx->pc = 0x25c988u;
    // NOP
label_25c98c:
    // 0x25c98c: 0x0  nop
    ctx->pc = 0x25c98cu;
    // NOP
label_25c990:
    // 0x25c990: 0x61aa  .word       0x000061AA                   # slt         $t4, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c990u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25c994:
    // 0x25c994: 0xd550  .word       0x0000D550                   # mfhi        $k0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c994u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25c998:
    // 0x25c998: 0x0  nop
    ctx->pc = 0x25c998u;
    // NOP
label_25c99c:
    // 0x25c99c: 0x0  nop
    ctx->pc = 0x25c99cu;
    // NOP
label_25c9a0:
    // 0x25c9a0: 0x61c5  .word       0x000061C5                   # INVALID     $zero, $zero, 0x61C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c9a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25C9A0 raw=0x000061C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c9a4:
    // 0x25c9a4: 0xac70  tge         $zero, $zero, 689
    ctx->pc = 0x25c9a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c9a8:
    // 0x25c9a8: 0x0  nop
    ctx->pc = 0x25c9a8u;
    // NOP
label_25c9ac:
    // 0x25c9ac: 0x0  nop
    ctx->pc = 0x25c9acu;
    // NOP
label_25c9b0:
    // 0x25c9b0: 0x61db  .word       0x000061DB                   # divu        $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c9b0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25c9b4:
    // 0x25c9b4: 0xb370  tge         $zero, $zero, 717
    ctx->pc = 0x25c9b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c9b8:
    // 0x25c9b8: 0x0  nop
    ctx->pc = 0x25c9b8u;
    // NOP
label_25c9bc:
    // 0x25c9bc: 0x0  nop
    ctx->pc = 0x25c9bcu;
    // NOP
label_25c9c0:
    // 0x25c9c0: 0x61f2  tlt         $zero, $zero, 391
    ctx->pc = 0x25c9c0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c9c4:
    // 0x25c9c4: 0xca50  .word       0x0000CA50                   # mfhi        $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c9c4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25c9c8:
    // 0x25c9c8: 0x0  nop
    ctx->pc = 0x25c9c8u;
    // NOP
label_25c9cc:
    // 0x25c9cc: 0x0  nop
    ctx->pc = 0x25c9ccu;
    // NOP
label_25c9d0:
    // 0x25c9d0: 0x620c  syscall     392
    ctx->pc = 0x25c9d0u;
    ctx->pc = 0x25C9D4u;
runtime->handleSyscall(rdram, ctx, 0x188u);
label_25c9d4:
    // 0x25c9d4: 0xa4c0  sll         $s4, $zero, 19
    ctx->pc = 0x25c9d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25c9d8:
    // 0x25c9d8: 0x0  nop
    ctx->pc = 0x25c9d8u;
    // NOP
label_25c9dc:
    // 0x25c9dc: 0x0  nop
    ctx->pc = 0x25c9dcu;
    // NOP
label_25c9e0:
    // 0x25c9e0: 0x6221  .word       0x00006221                   # addu        $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c9e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25c9e4:
    // 0x25c9e4: 0x9df0  tge         $zero, $zero, 631
    ctx->pc = 0x25c9e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25c9e8:
    // 0x25c9e8: 0x0  nop
    ctx->pc = 0x25c9e8u;
    // NOP
label_25c9ec:
    // 0x25c9ec: 0x0  nop
    ctx->pc = 0x25c9ecu;
    // NOP
label_25c9f0:
    // 0x25c9f0: 0x6235  .word       0x00006235                   # INVALID     $zero, $zero, 0x6235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25c9f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25C9F0 raw=0x00006235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25c9f4:
    // 0x25c9f4: 0x8f00  sll         $s1, $zero, 28
    ctx->pc = 0x25c9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_25c9f8:
    // 0x25c9f8: 0x0  nop
    ctx->pc = 0x25c9f8u;
    // NOP
label_25c9fc:
    // 0x25c9fc: 0x0  nop
    ctx->pc = 0x25c9fcu;
    // NOP
label_25ca00:
    // 0x25ca00: 0x6247  .word       0x00006247                   # srav        $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ca00u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25ca04:
    // 0x25ca04: 0xb250  .word       0x0000B250                   # mfhi        $s6 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ca04u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_25ca08:
    // 0x25ca08: 0x0  nop
    ctx->pc = 0x25ca08u;
    // NOP
label_25ca0c:
    // 0x25ca0c: 0x0  nop
    ctx->pc = 0x25ca0cu;
    // NOP
label_25ca10:
    // 0x25ca10: 0x625e  .word       0x0000625E                   # ddiv        $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ca10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25CA10 raw=0x0000625E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ca14:
    // 0x25ca14: 0xb220  .word       0x0000B220                   # add         $s6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ca14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_25ca18:
    // 0x25ca18: 0x0  nop
    ctx->pc = 0x25ca18u;
    // NOP
label_25ca1c:
    // 0x25ca1c: 0x0  nop
    ctx->pc = 0x25ca1cu;
    // NOP
label_25ca20:
    // 0x25ca20: 0x6275  .word       0x00006275                   # INVALID     $zero, $zero, 0x6275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ca20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25CA20 raw=0x00006275"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ca24:
    // 0x25ca24: 0x9940  sll         $s3, $zero, 5
    ctx->pc = 0x25ca24u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_25ca28:
    // 0x25ca28: 0x0  nop
    ctx->pc = 0x25ca28u;
    // NOP
label_25ca2c:
    // 0x25ca2c: 0x0  nop
    ctx->pc = 0x25ca2cu;
    // NOP
label_25ca30:
    // 0x25ca30: 0x6289  .word       0x00006289                   # jalr        $t4, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_25ca34:
    if (ctx->pc == 0x25CA34u) {
        ctx->pc = 0x25CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA30u;
        // 0x25ca34: 0xca60  .word       0x0000CA60                   # add         $t9, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA38u;
        goto label_25ca38;
    }
    ctx->pc = 0x25CA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 12, 0x25CA38u);
        ctx->pc = 0x25CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA30u;
        // 0x25ca34: 0xca60  .word       0x0000CA60                   # add         $t9, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CA30u, 0x25CA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CA38u;
label_25ca38:
    // 0x25ca38: 0x0  nop
    ctx->pc = 0x25ca38u;
    // NOP
label_25ca3c:
    // 0x25ca3c: 0x0  nop
    ctx->pc = 0x25ca3cu;
    // NOP
label_25ca40:
    // 0x25ca40: 0x62a3  .word       0x000062A3                   # negu        $t4, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ca40u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25ca44:
    // 0x25ca44: 0xa680  sll         $s4, $zero, 26
    ctx->pc = 0x25ca44u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_25ca48:
    // 0x25ca48: 0x0  nop
    ctx->pc = 0x25ca48u;
    // NOP
label_25ca4c:
    // 0x25ca4c: 0x0  nop
    ctx->pc = 0x25ca4cu;
    // NOP
label_25ca50:
    // 0x25ca50: 0x62b8  dsll        $t4, $zero, 10
    ctx->pc = 0x25ca50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << 10);
label_25ca54:
    // 0x25ca54: 0xb870  tge         $zero, $zero, 737
    ctx->pc = 0x25ca54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ca58:
    // 0x25ca58: 0x0  nop
    ctx->pc = 0x25ca58u;
    // NOP
label_25ca5c:
    // 0x25ca5c: 0x0  nop
    ctx->pc = 0x25ca5cu;
    // NOP
label_25ca60:
    // 0x25ca60: 0x62d0  .word       0x000062D0                   # mfhi        $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ca60u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25ca64:
    // 0x25ca64: 0xbf60  .word       0x0000BF60                   # add         $s7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ca64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25ca68:
    // 0x25ca68: 0x0  nop
    ctx->pc = 0x25ca68u;
    // NOP
label_25ca6c:
    // 0x25ca6c: 0x0  nop
    ctx->pc = 0x25ca6cu;
    // NOP
label_25ca70:
    // 0x25ca70: 0x62e8  .word       0x000062E8                   # mfsa        $t4 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ca70u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_25ca74:
    // 0x25ca74: 0xccc0  sll         $t9, $zero, 19
    ctx->pc = 0x25ca74u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25ca78:
    // 0x25ca78: 0x0  nop
    ctx->pc = 0x25ca78u;
    // NOP
label_25ca7c:
    // 0x25ca7c: 0x0  nop
    ctx->pc = 0x25ca7cu;
    // NOP
label_25ca80:
    // 0x25ca80: 0x6302  srl         $t4, $zero, 12
    ctx->pc = 0x25ca80u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_25ca84:
    // 0x25ca84: 0xc7f0  tge         $zero, $zero, 799
    ctx->pc = 0x25ca84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ca88:
    // 0x25ca88: 0x0  nop
    ctx->pc = 0x25ca88u;
    // NOP
label_25ca8c:
    // 0x25ca8c: 0x0  nop
    ctx->pc = 0x25ca8cu;
    // NOP
label_25ca90:
    // 0x25ca90: 0x631b  .word       0x0000631B                   # divu        $t4, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ca90u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25ca94:
    // 0x25ca94: 0x9490  .word       0x00009490                   # mfhi        $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ca94u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25ca98:
    // 0x25ca98: 0x0  nop
    ctx->pc = 0x25ca98u;
    // NOP
label_25ca9c:
    // 0x25ca9c: 0x0  nop
    ctx->pc = 0x25ca9cu;
    // NOP
label_25caa0:
    // 0x25caa0: 0x632e  .word       0x0000632E                   # dsub        $t4, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25caa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_25caa4:
    // 0x25caa4: 0x107f0  tge         $zero, $at, 31
    ctx->pc = 0x25caa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_25caa8:
    // 0x25caa8: 0x0  nop
    ctx->pc = 0x25caa8u;
    // NOP
label_25caac:
    // 0x25caac: 0x0  nop
    ctx->pc = 0x25caacu;
    // NOP
label_25cab0:
    // 0x25cab0: 0x634f  .word       0x0000634F                   # sync # 00006000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cab0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25cab4:
    // 0x25cab4: 0x8ec0  sll         $s1, $zero, 27
    ctx->pc = 0x25cab4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25cab8:
    // 0x25cab8: 0x0  nop
    ctx->pc = 0x25cab8u;
    // NOP
label_25cabc:
    // 0x25cabc: 0x0  nop
    ctx->pc = 0x25cabcu;
    // NOP
label_25cac0:
    // 0x25cac0: 0x6361  .word       0x00006361                   # addu        $t4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cac0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25cac4:
    // 0x25cac4: 0x16770  tge         $zero, $at, 413
    ctx->pc = 0x25cac4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_25cac8:
    // 0x25cac8: 0x0  nop
    ctx->pc = 0x25cac8u;
    // NOP
label_25cacc:
    // 0x25cacc: 0x0  nop
    ctx->pc = 0x25caccu;
    // NOP
label_25cad0:
    // 0x25cad0: 0x638e  .word       0x0000638E                   # INVALID     $zero, $zero, 0x638E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25CAD0 raw=0x0000638E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cad4:
    // 0x25cad4: 0xf7e0  .word       0x0000F7E0                   # add         $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_25cad8:
    // 0x25cad8: 0x0  nop
    ctx->pc = 0x25cad8u;
    // NOP
label_25cadc:
    // 0x25cadc: 0x0  nop
    ctx->pc = 0x25cadcu;
    // NOP
label_25cae0:
    // 0x25cae0: 0x63ad  .word       0x000063AD                   # daddu       $t4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cae0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cae4:
    // 0x25cae4: 0xdde0  .word       0x0000DDE0                   # add         $k1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25cae8:
    // 0x25cae8: 0x0  nop
    ctx->pc = 0x25cae8u;
    // NOP
label_25caec:
    // 0x25caec: 0x0  nop
    ctx->pc = 0x25caecu;
    // NOP
label_25caf0:
    // 0x25caf0: 0x63c9  .word       0x000063C9                   # jalr        $t4, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
label_25caf4:
    if (ctx->pc == 0x25CAF4u) {
        ctx->pc = 0x25CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAF0u;
        // 0x25caf4: 0xd230  tge         $zero, $zero, 840 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CAF8u;
        goto label_25caf8;
    }
    ctx->pc = 0x25CAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 12, 0x25CAF8u);
        ctx->pc = 0x25CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAF0u;
        // 0x25caf4: 0xd230  tge         $zero, $zero, 840 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CAF0u, 0x25CAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CAF8u;
label_25caf8:
    // 0x25caf8: 0x0  nop
    ctx->pc = 0x25caf8u;
    // NOP
label_25cafc:
    // 0x25cafc: 0x0  nop
    ctx->pc = 0x25cafcu;
    // NOP
label_25cb00:
    // 0x25cb00: 0x63e4  .word       0x000063E4                   # and         $t4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cb00u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25cb04:
    // 0x25cb04: 0xedc0  sll         $sp, $zero, 23
    ctx->pc = 0x25cb04u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25cb08:
    // 0x25cb08: 0x0  nop
    ctx->pc = 0x25cb08u;
    // NOP
label_25cb0c:
    // 0x25cb0c: 0x0  nop
    ctx->pc = 0x25cb0cu;
    // NOP
label_25cb10:
    // 0x25cb10: 0x6402  srl         $t4, $zero, 16
    ctx->pc = 0x25cb10u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
label_25cb14:
    // 0x25cb14: 0xd6c0  sll         $k0, $zero, 27
    ctx->pc = 0x25cb14u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25cb18:
    // 0x25cb18: 0x0  nop
    ctx->pc = 0x25cb18u;
    // NOP
label_25cb1c:
    // 0x25cb1c: 0x0  nop
    ctx->pc = 0x25cb1cu;
    // NOP
label_25cb20:
    // 0x25cb20: 0x641d  .word       0x0000641D                   # dmultu      $zero, $zero # 00006400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cb20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25CB20 raw=0x0000641D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cb24:
    // 0x25cb24: 0x15620  .word       0x00015620                   # add         $t2, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cb24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25cb28:
    // 0x25cb28: 0x0  nop
    ctx->pc = 0x25cb28u;
    // NOP
label_25cb2c:
    // 0x25cb2c: 0x0  nop
    ctx->pc = 0x25cb2cu;
    // NOP
label_25cb30:
    // 0x25cb30: 0x6448  .word       0x00006448                   # jr          $zero # 00006440 <InstrIdType: CPU_SPECIAL>
label_25cb34:
    if (ctx->pc == 0x25CB34u) {
        ctx->pc = 0x25CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB30u;
        // 0x25cb34: 0xede0  .word       0x0000EDE0                   # add         $sp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB38u;
        goto label_25cb38;
    }
    ctx->pc = 0x25CB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB30u;
        // 0x25cb34: 0xede0  .word       0x0000EDE0                   # add         $sp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25CB38u;
label_25cb38:
    // 0x25cb38: 0x0  nop
    ctx->pc = 0x25cb38u;
    // NOP
label_25cb3c:
    // 0x25cb3c: 0x0  nop
    ctx->pc = 0x25cb3cu;
    // NOP
label_25cb40:
    // 0x25cb40: 0x6466  .word       0x00006466                   # xor         $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cb40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25cb44:
    // 0x25cb44: 0xf430  tge         $zero, $zero, 976
    ctx->pc = 0x25cb44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cb48:
    // 0x25cb48: 0x0  nop
    ctx->pc = 0x25cb48u;
    // NOP
label_25cb4c:
    // 0x25cb4c: 0x0  nop
    ctx->pc = 0x25cb4cu;
    // NOP
label_25cb50:
    // 0x25cb50: 0x6485  .word       0x00006485                   # INVALID     $zero, $zero, 0x6485 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cb50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25CB50 raw=0x00006485"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cb54:
    // 0x25cb54: 0xbc70  tge         $zero, $zero, 753
    ctx->pc = 0x25cb54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cb58:
    // 0x25cb58: 0x0  nop
    ctx->pc = 0x25cb58u;
    // NOP
label_25cb5c:
    // 0x25cb5c: 0x0  nop
    ctx->pc = 0x25cb5cu;
    // NOP
label_25cb60:
    // 0x25cb60: 0x649d  .word       0x0000649D                   # dmultu      $zero, $zero # 00006480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cb60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25CB60 raw=0x0000649D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cb64:
    // 0x25cb64: 0xb200  sll         $s6, $zero, 8
    ctx->pc = 0x25cb64u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25cb68:
    // 0x25cb68: 0x0  nop
    ctx->pc = 0x25cb68u;
    // NOP
label_25cb6c:
    // 0x25cb6c: 0x0  nop
    ctx->pc = 0x25cb6cu;
    // NOP
label_25cb70:
    // 0x25cb70: 0x64b4  teq         $zero, $zero, 402
    ctx->pc = 0x25cb70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cb74:
    // 0x25cb74: 0xc2d0  .word       0x0000C2D0                   # mfhi        $t8 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cb74u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25cb78:
    // 0x25cb78: 0x0  nop
    ctx->pc = 0x25cb78u;
    // NOP
label_25cb7c:
    // 0x25cb7c: 0x0  nop
    ctx->pc = 0x25cb7cu;
    // NOP
label_25cb80:
    // 0x25cb80: 0x64cd  break       0, 403
    ctx->pc = 0x25cb80u;
    runtime->handleBreak(rdram, ctx);
label_25cb84:
    // 0x25cb84: 0x10f50  .word       0x00010F50                   # mfhi        $at # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cb84u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_25cb88:
    // 0x25cb88: 0x0  nop
    ctx->pc = 0x25cb88u;
    // NOP
label_25cb8c:
    // 0x25cb8c: 0x0  nop
    ctx->pc = 0x25cb8cu;
    // NOP
label_25cb90:
    // 0x25cb90: 0x64ef  .word       0x000064EF                   # dsubu       $t4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cb90u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25cb94:
    // 0x25cb94: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cb94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25cb98:
    // 0x25cb98: 0x0  nop
    ctx->pc = 0x25cb98u;
    // NOP
label_25cb9c:
    // 0x25cb9c: 0x0  nop
    ctx->pc = 0x25cb9cu;
    // NOP
label_25cba0:
    // 0x25cba0: 0x64fe  dsrl32      $t4, $zero, 19
    ctx->pc = 0x25cba0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) >> (32 + 19));
label_25cba4:
    // 0x25cba4: 0xdde0  .word       0x0000DDE0                   # add         $k1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25cba8:
    // 0x25cba8: 0x0  nop
    ctx->pc = 0x25cba8u;
    // NOP
label_25cbac:
    // 0x25cbac: 0x0  nop
    ctx->pc = 0x25cbacu;
    // NOP
label_25cbb0:
    // 0x25cbb0: 0x651a  .word       0x0000651A                   # div         $t4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cbb0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25cbb4:
    // 0x25cbb4: 0x12e20  .word       0x00012E20                   # add         $a1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cbb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25cbb8:
    // 0x25cbb8: 0x0  nop
    ctx->pc = 0x25cbb8u;
    // NOP
label_25cbbc:
    // 0x25cbbc: 0x0  nop
    ctx->pc = 0x25cbbcu;
    // NOP
label_25cbc0:
    // 0x25cbc0: 0x6540  sll         $t4, $zero, 21
    ctx->pc = 0x25cbc0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_25cbc4:
    // 0x25cbc4: 0xc430  tge         $zero, $zero, 784
    ctx->pc = 0x25cbc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cbc8:
    // 0x25cbc8: 0x0  nop
    ctx->pc = 0x25cbc8u;
    // NOP
label_25cbcc:
    // 0x25cbcc: 0x0  nop
    ctx->pc = 0x25cbccu;
    // NOP
label_25cbd0:
    // 0x25cbd0: 0x6559  .word       0x00006559                   # multu       $zero, $zero # 00006540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cbd0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_25cbd4:
    // 0x25cbd4: 0xcf90  .word       0x0000CF90                   # mfhi        $t9 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cbd4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25cbd8:
    // 0x25cbd8: 0x0  nop
    ctx->pc = 0x25cbd8u;
    // NOP
label_25cbdc:
    // 0x25cbdc: 0x0  nop
    ctx->pc = 0x25cbdcu;
    // NOP
label_25cbe0:
    // 0x25cbe0: 0x6573  tltu        $zero, $zero, 405
    ctx->pc = 0x25cbe0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cbe4:
    // 0x25cbe4: 0xe9e0  .word       0x0000E9E0                   # add         $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cbe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25cbe8:
    // 0x25cbe8: 0x0  nop
    ctx->pc = 0x25cbe8u;
    // NOP
label_25cbec:
    // 0x25cbec: 0x0  nop
    ctx->pc = 0x25cbecu;
    // NOP
label_25cbf0:
    // 0x25cbf0: 0x6591  .word       0x00006591                   # mthi        $zero # 00006580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cbf0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25cbf4:
    // 0x25cbf4: 0x11ba0  .word       0x00011BA0                   # add         $v1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cbf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25cbf8:
    // 0x25cbf8: 0x0  nop
    ctx->pc = 0x25cbf8u;
    // NOP
label_25cbfc:
    // 0x25cbfc: 0x0  nop
    ctx->pc = 0x25cbfcu;
    // NOP
label_25cc00:
    // 0x25cc00: 0x65b5  .word       0x000065B5                   # INVALID     $zero, $zero, 0x65B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25CC00 raw=0x000065B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cc04:
    // 0x25cc04: 0x100c0  sll         $zero, $at, 3
    ctx->pc = 0x25cc04u;
    
label_25cc08:
    // 0x25cc08: 0x0  nop
    ctx->pc = 0x25cc08u;
    // NOP
label_25cc0c:
    // 0x25cc0c: 0x0  nop
    ctx->pc = 0x25cc0cu;
    // NOP
label_25cc10:
    // 0x25cc10: 0x65d6  .word       0x000065D6                   # dsrlv       $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc10u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25cc14:
    // 0x25cc14: 0xd390  .word       0x0000D390                   # mfhi        $k0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc14u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25cc18:
    // 0x25cc18: 0x0  nop
    ctx->pc = 0x25cc18u;
    // NOP
label_25cc1c:
    // 0x25cc1c: 0x0  nop
    ctx->pc = 0x25cc1cu;
    // NOP
label_25cc20:
    // 0x25cc20: 0x65f1  tgeu        $zero, $zero, 407
    ctx->pc = 0x25cc20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cc24:
    // 0x25cc24: 0x10520  .word       0x00010520                   # add         $zero, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_25cc28:
    // 0x25cc28: 0x0  nop
    ctx->pc = 0x25cc28u;
    // NOP
label_25cc2c:
    // 0x25cc2c: 0x0  nop
    ctx->pc = 0x25cc2cu;
    // NOP
label_25cc30:
    // 0x25cc30: 0x6612  .word       0x00006612                   # mflo        $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc30u;
    SET_GPR_U64(ctx, 12, ctx->lo);
label_25cc34:
    // 0x25cc34: 0xc300  sll         $t8, $zero, 12
    ctx->pc = 0x25cc34u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25cc38:
    // 0x25cc38: 0x0  nop
    ctx->pc = 0x25cc38u;
    // NOP
label_25cc3c:
    // 0x25cc3c: 0x0  nop
    ctx->pc = 0x25cc3cu;
    // NOP
label_25cc40:
    // 0x25cc40: 0x662b  .word       0x0000662B                   # sltu        $t4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc40u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25cc44:
    // 0x25cc44: 0xad50  .word       0x0000AD50                   # mfhi        $s5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc44u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25cc48:
    // 0x25cc48: 0x0  nop
    ctx->pc = 0x25cc48u;
    // NOP
label_25cc4c:
    // 0x25cc4c: 0x0  nop
    ctx->pc = 0x25cc4cu;
    // NOP
label_25cc50:
    // 0x25cc50: 0x6641  .word       0x00006641                   # INVALID     $zero, $zero, 0x6641 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25CC50 raw=0x00006641"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cc54:
    // 0x25cc54: 0xf300  sll         $fp, $zero, 12
    ctx->pc = 0x25cc54u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25cc58:
    // 0x25cc58: 0x0  nop
    ctx->pc = 0x25cc58u;
    // NOP
label_25cc5c:
    // 0x25cc5c: 0x0  nop
    ctx->pc = 0x25cc5cu;
    // NOP
label_25cc60:
    // 0x25cc60: 0x6660  .word       0x00006660                   # add         $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25cc64:
    // 0x25cc64: 0xd700  sll         $k0, $zero, 28
    ctx->pc = 0x25cc64u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_25cc68:
    // 0x25cc68: 0x0  nop
    ctx->pc = 0x25cc68u;
    // NOP
label_25cc6c:
    // 0x25cc6c: 0x0  nop
    ctx->pc = 0x25cc6cu;
    // NOP
label_25cc70:
    // 0x25cc70: 0x667b  dsra        $t4, $zero, 25
    ctx->pc = 0x25cc70u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> 25);
label_25cc74:
    // 0x25cc74: 0xc340  sll         $t8, $zero, 13
    ctx->pc = 0x25cc74u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25cc78:
    // 0x25cc78: 0x0  nop
    ctx->pc = 0x25cc78u;
    // NOP
label_25cc7c:
    // 0x25cc7c: 0x0  nop
    ctx->pc = 0x25cc7cu;
    // NOP
label_25cc80:
    // 0x25cc80: 0x6694  .word       0x00006694                   # dsllv       $t4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25cc84:
    // 0x25cc84: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x25cc84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25cc88:
    // 0x25cc88: 0x0  nop
    ctx->pc = 0x25cc88u;
    // NOP
label_25cc8c:
    // 0x25cc8c: 0x0  nop
    ctx->pc = 0x25cc8cu;
    // NOP
label_25cc90:
    // 0x25cc90: 0x66a2  .word       0x000066A2                   # neg         $t4, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc90u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_25cc94:
    // 0x25cc94: 0x11420  .word       0x00011420                   # add         $v0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_25cc98:
    // 0x25cc98: 0x0  nop
    ctx->pc = 0x25cc98u;
    // NOP
label_25cc9c:
    // 0x25cc9c: 0x0  nop
    ctx->pc = 0x25cc9cu;
    // NOP
label_25cca0:
    // 0x25cca0: 0x66c5  .word       0x000066C5                   # INVALID     $zero, $zero, 0x66C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cca0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25CCA0 raw=0x000066C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cca4:
    // 0x25cca4: 0xa270  tge         $zero, $zero, 649
    ctx->pc = 0x25cca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cca8:
    // 0x25cca8: 0x0  nop
    ctx->pc = 0x25cca8u;
    // NOP
label_25ccac:
    // 0x25ccac: 0x0  nop
    ctx->pc = 0x25ccacu;
    // NOP
label_25ccb0:
    // 0x25ccb0: 0x66da  .word       0x000066DA                   # div         $t4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ccb0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25ccb4:
    // 0x25ccb4: 0xdf50  .word       0x0000DF50                   # mfhi        $k1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ccb4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25ccb8:
    // 0x25ccb8: 0x0  nop
    ctx->pc = 0x25ccb8u;
    // NOP
label_25ccbc:
    // 0x25ccbc: 0x0  nop
    ctx->pc = 0x25ccbcu;
    // NOP
label_25ccc0:
    // 0x25ccc0: 0x66f6  tne         $zero, $zero, 411
    ctx->pc = 0x25ccc0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ccc4:
    // 0x25ccc4: 0xc350  .word       0x0000C350                   # mfhi        $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ccc4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25ccc8:
    // 0x25ccc8: 0x0  nop
    ctx->pc = 0x25ccc8u;
    // NOP
label_25cccc:
    // 0x25cccc: 0x0  nop
    ctx->pc = 0x25ccccu;
    // NOP
label_25ccd0:
    // 0x25ccd0: 0x670f  .word       0x0000670F                   # sync.p # 00006000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ccd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25ccd4:
    // 0x25ccd4: 0xb770  tge         $zero, $zero, 733
    ctx->pc = 0x25ccd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ccd8:
    // 0x25ccd8: 0x0  nop
    ctx->pc = 0x25ccd8u;
    // NOP
label_25ccdc:
    // 0x25ccdc: 0x0  nop
    ctx->pc = 0x25ccdcu;
    // NOP
label_25cce0:
    // 0x25cce0: 0x6726  .word       0x00006726                   # xor         $t4, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cce0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25cce4:
    // 0x25cce4: 0xc9a0  .word       0x0000C9A0                   # add         $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25cce8:
    // 0x25cce8: 0x0  nop
    ctx->pc = 0x25cce8u;
    // NOP
label_25ccec:
    // 0x25ccec: 0x0  nop
    ctx->pc = 0x25ccecu;
    // NOP
label_25ccf0:
    // 0x25ccf0: 0x6740  sll         $t4, $zero, 29
    ctx->pc = 0x25ccf0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_25ccf4:
    // 0x25ccf4: 0xce00  sll         $t9, $zero, 24
    ctx->pc = 0x25ccf4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25ccf8:
    // 0x25ccf8: 0x0  nop
    ctx->pc = 0x25ccf8u;
    // NOP
label_25ccfc:
    // 0x25ccfc: 0x0  nop
    ctx->pc = 0x25ccfcu;
    // NOP
label_25cd00:
    // 0x25cd00: 0x675a  .word       0x0000675A                   # div         $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd00u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25cd04:
    // 0x25cd04: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd04u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25cd08:
    // 0x25cd08: 0x0  nop
    ctx->pc = 0x25cd08u;
    // NOP
label_25cd0c:
    // 0x25cd0c: 0x0  nop
    ctx->pc = 0x25cd0cu;
    // NOP
label_25cd10:
    // 0x25cd10: 0x6769  .word       0x00006769                   # mtsa        $zero # 00006740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cd10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25cd14:
    // 0x25cd14: 0x6b30  tge         $zero, $zero, 428
    ctx->pc = 0x25cd14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cd18:
    // 0x25cd18: 0x0  nop
    ctx->pc = 0x25cd18u;
    // NOP
label_25cd1c:
    // 0x25cd1c: 0x0  nop
    ctx->pc = 0x25cd1cu;
    // NOP
label_25cd20:
    // 0x25cd20: 0x6777  .word       0x00006777                   # INVALID     $zero, $zero, 0x6777 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25CD20 raw=0x00006777"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cd24:
    // 0x25cd24: 0x6b40  sll         $t5, $zero, 13
    ctx->pc = 0x25cd24u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25cd28:
    // 0x25cd28: 0x0  nop
    ctx->pc = 0x25cd28u;
    // NOP
label_25cd2c:
    // 0x25cd2c: 0x0  nop
    ctx->pc = 0x25cd2cu;
    // NOP
label_25cd30:
    // 0x25cd30: 0x6785  .word       0x00006785                   # INVALID     $zero, $zero, 0x6785 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25CD30 raw=0x00006785"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cd34:
    // 0x25cd34: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x25cd34u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25cd38:
    // 0x25cd38: 0x0  nop
    ctx->pc = 0x25cd38u;
    // NOP
label_25cd3c:
    // 0x25cd3c: 0x0  nop
    ctx->pc = 0x25cd3cu;
    // NOP
label_25cd40:
    // 0x25cd40: 0x6794  .word       0x00006794                   # dsllv       $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25cd44:
    // 0x25cd44: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x25cd44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25cd48:
    // 0x25cd48: 0x0  nop
    ctx->pc = 0x25cd48u;
    // NOP
label_25cd4c:
    // 0x25cd4c: 0x0  nop
    ctx->pc = 0x25cd4cu;
    // NOP
label_25cd50:
    // 0x25cd50: 0x67a2  .word       0x000067A2                   # neg         $t4, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd50u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_25cd54:
    // 0x25cd54: 0x5f30  tge         $zero, $zero, 380
    ctx->pc = 0x25cd54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cd58:
    // 0x25cd58: 0x0  nop
    ctx->pc = 0x25cd58u;
    // NOP
label_25cd5c:
    // 0x25cd5c: 0x0  nop
    ctx->pc = 0x25cd5cu;
    // NOP
label_25cd60:
    // 0x25cd60: 0x67ae  .word       0x000067AE                   # dsub        $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_25cd64:
    // 0x25cd64: 0x75d0  .word       0x000075D0                   # mfhi        $t6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd64u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25cd68:
    // 0x25cd68: 0x0  nop
    ctx->pc = 0x25cd68u;
    // NOP
label_25cd6c:
    // 0x25cd6c: 0x0  nop
    ctx->pc = 0x25cd6cu;
    // NOP
label_25cd70:
    // 0x25cd70: 0x67bd  .word       0x000067BD                   # INVALID     $zero, $zero, 0x67BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25CD70 raw=0x000067BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cd74:
    // 0x25cd74: 0x75d0  .word       0x000075D0                   # mfhi        $t6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd74u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25cd78:
    // 0x25cd78: 0x0  nop
    ctx->pc = 0x25cd78u;
    // NOP
label_25cd7c:
    // 0x25cd7c: 0x0  nop
    ctx->pc = 0x25cd7cu;
    // NOP
label_25cd80:
    // 0x25cd80: 0x67cc  syscall     415
    ctx->pc = 0x25cd80u;
    ctx->pc = 0x25CD84u;
runtime->handleSyscall(rdram, ctx, 0x19Fu);
label_25cd84:
    // 0x25cd84: 0x7250  .word       0x00007250                   # mfhi        $t6 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd84u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25cd88:
    // 0x25cd88: 0x0  nop
    ctx->pc = 0x25cd88u;
    // NOP
label_25cd8c:
    // 0x25cd8c: 0x0  nop
    ctx->pc = 0x25cd8cu;
    // NOP
label_25cd90:
    // 0x25cd90: 0x67db  .word       0x000067DB                   # divu        $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd90u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25cd94:
    // 0x25cd94: 0x7bd0  .word       0x00007BD0                   # mfhi        $t7 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd94u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25cd98:
    // 0x25cd98: 0x0  nop
    ctx->pc = 0x25cd98u;
    // NOP
label_25cd9c:
    // 0x25cd9c: 0x0  nop
    ctx->pc = 0x25cd9cu;
    // NOP
label_25cda0:
    // 0x25cda0: 0x67eb  .word       0x000067EB                   # sltu        $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cda0u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25cda4:
    // 0x25cda4: 0x7a10  .word       0x00007A10                   # mfhi        $t7 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cda4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25cda8:
    // 0x25cda8: 0x0  nop
    ctx->pc = 0x25cda8u;
    // NOP
label_25cdac:
    // 0x25cdac: 0x0  nop
    ctx->pc = 0x25cdacu;
    // NOP
label_25cdb0:
    // 0x25cdb0: 0x67fb  dsra        $t4, $zero, 31
    ctx->pc = 0x25cdb0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> 31);
label_25cdb4:
    // 0x25cdb4: 0x7020  add         $t6, $zero, $zero
    ctx->pc = 0x25cdb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25cdb8:
    // 0x25cdb8: 0x0  nop
    ctx->pc = 0x25cdb8u;
    // NOP
label_25cdbc:
    // 0x25cdbc: 0x0  nop
    ctx->pc = 0x25cdbcu;
    // NOP
label_25cdc0:
    // 0x25cdc0: 0x680a  movz        $t5, $zero, $zero
    ctx->pc = 0x25cdc0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_25cdc4:
    // 0x25cdc4: 0x7c20  .word       0x00007C20                   # add         $t7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cdc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25cdc8:
    // 0x25cdc8: 0x0  nop
    ctx->pc = 0x25cdc8u;
    // NOP
label_25cdcc:
    // 0x25cdcc: 0x0  nop
    ctx->pc = 0x25cdccu;
    // NOP
label_25cdd0:
    // 0x25cdd0: 0x681a  div         $t5, $zero, $zero
    ctx->pc = 0x25cdd0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25cdd4:
    // 0x25cdd4: 0x75e0  .word       0x000075E0                   # add         $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cdd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25cdd8:
    // 0x25cdd8: 0x0  nop
    ctx->pc = 0x25cdd8u;
    // NOP
label_25cddc:
    // 0x25cddc: 0x0  nop
    ctx->pc = 0x25cddcu;
    // NOP
label_25cde0:
    // 0x25cde0: 0x6829  .word       0x00006829                   # mtsa        $zero # 00006800 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cde0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25cde4:
    // 0x25cde4: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x25cde4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25cde8:
    // 0x25cde8: 0x0  nop
    ctx->pc = 0x25cde8u;
    // NOP
label_25cdec:
    // 0x25cdec: 0x0  nop
    ctx->pc = 0x25cdecu;
    // NOP
label_25cdf0:
    // 0x25cdf0: 0x6839  .word       0x00006839                   # INVALID     $zero, $zero, 0x6839 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cdf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25CDF0 raw=0x00006839"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cdf4:
    // 0x25cdf4: 0x6890  .word       0x00006890                   # mfhi        $t5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cdf4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25cdf8:
    // 0x25cdf8: 0x0  nop
    ctx->pc = 0x25cdf8u;
    // NOP
label_25cdfc:
    // 0x25cdfc: 0x0  nop
    ctx->pc = 0x25cdfcu;
    // NOP
label_25ce00:
    // 0x25ce00: 0x6847  .word       0x00006847                   # srav        $t5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce00u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25ce04:
    // 0x25ce04: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x25ce04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25ce08:
    // 0x25ce08: 0x0  nop
    ctx->pc = 0x25ce08u;
    // NOP
label_25ce0c:
    // 0x25ce0c: 0x0  nop
    ctx->pc = 0x25ce0cu;
    // NOP
label_25ce10:
    // 0x25ce10: 0x6857  .word       0x00006857                   # dsrav       $t5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce10u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25ce14:
    // 0x25ce14: 0x8080  sll         $s0, $zero, 2
    ctx->pc = 0x25ce14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_25ce18:
    // 0x25ce18: 0x0  nop
    ctx->pc = 0x25ce18u;
    // NOP
label_25ce1c:
    // 0x25ce1c: 0x0  nop
    ctx->pc = 0x25ce1cu;
    // NOP
label_25ce20:
    // 0x25ce20: 0x6868  .word       0x00006868                   # mfsa        $t5 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ce20u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_25ce24:
    // 0x25ce24: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25ce28:
    // 0x25ce28: 0x0  nop
    ctx->pc = 0x25ce28u;
    // NOP
label_25ce2c:
    // 0x25ce2c: 0x0  nop
    ctx->pc = 0x25ce2cu;
    // NOP
    ctx->pc = 0x25ce30u;
    return;
}
