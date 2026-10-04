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


void FUN_0014eba0_part62(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16c830u: goto label_16c830;
        case 0x16c834u: goto label_16c834;
        case 0x16c838u: goto label_16c838;
        case 0x16c83cu: goto label_16c83c;
        case 0x16c840u: goto label_16c840;
        case 0x16c844u: goto label_16c844;
        case 0x16c848u: goto label_16c848;
        case 0x16c84cu: goto label_16c84c;
        case 0x16c850u: goto label_16c850;
        case 0x16c854u: goto label_16c854;
        case 0x16c858u: goto label_16c858;
        case 0x16c85cu: goto label_16c85c;
        case 0x16c860u: goto label_16c860;
        case 0x16c864u: goto label_16c864;
        case 0x16c868u: goto label_16c868;
        case 0x16c86cu: goto label_16c86c;
        case 0x16c870u: goto label_16c870;
        case 0x16c874u: goto label_16c874;
        case 0x16c878u: goto label_16c878;
        case 0x16c87cu: goto label_16c87c;
        case 0x16c880u: goto label_16c880;
        case 0x16c884u: goto label_16c884;
        case 0x16c888u: goto label_16c888;
        case 0x16c88cu: goto label_16c88c;
        case 0x16c890u: goto label_16c890;
        case 0x16c894u: goto label_16c894;
        case 0x16c898u: goto label_16c898;
        case 0x16c89cu: goto label_16c89c;
        case 0x16c8a0u: goto label_16c8a0;
        case 0x16c8a4u: goto label_16c8a4;
        case 0x16c8a8u: goto label_16c8a8;
        case 0x16c8acu: goto label_16c8ac;
        case 0x16c8b0u: goto label_16c8b0;
        case 0x16c8b4u: goto label_16c8b4;
        case 0x16c8b8u: goto label_16c8b8;
        case 0x16c8bcu: goto label_16c8bc;
        case 0x16c8c0u: goto label_16c8c0;
        case 0x16c8c4u: goto label_16c8c4;
        case 0x16c8c8u: goto label_16c8c8;
        case 0x16c8ccu: goto label_16c8cc;
        case 0x16c8d0u: goto label_16c8d0;
        case 0x16c8d4u: goto label_16c8d4;
        case 0x16c8d8u: goto label_16c8d8;
        case 0x16c8dcu: goto label_16c8dc;
        case 0x16c8e0u: goto label_16c8e0;
        case 0x16c8e4u: goto label_16c8e4;
        case 0x16c8e8u: goto label_16c8e8;
        case 0x16c8ecu: goto label_16c8ec;
        case 0x16c8f0u: goto label_16c8f0;
        case 0x16c8f4u: goto label_16c8f4;
        case 0x16c8f8u: goto label_16c8f8;
        case 0x16c8fcu: goto label_16c8fc;
        case 0x16c900u: goto label_16c900;
        case 0x16c904u: goto label_16c904;
        case 0x16c908u: goto label_16c908;
        case 0x16c90cu: goto label_16c90c;
        case 0x16c910u: goto label_16c910;
        case 0x16c914u: goto label_16c914;
        case 0x16c918u: goto label_16c918;
        case 0x16c91cu: goto label_16c91c;
        case 0x16c920u: goto label_16c920;
        case 0x16c924u: goto label_16c924;
        case 0x16c928u: goto label_16c928;
        case 0x16c92cu: goto label_16c92c;
        case 0x16c930u: goto label_16c930;
        case 0x16c934u: goto label_16c934;
        case 0x16c938u: goto label_16c938;
        case 0x16c93cu: goto label_16c93c;
        case 0x16c940u: goto label_16c940;
        case 0x16c944u: goto label_16c944;
        case 0x16c948u: goto label_16c948;
        case 0x16c94cu: goto label_16c94c;
        case 0x16c950u: goto label_16c950;
        case 0x16c954u: goto label_16c954;
        case 0x16c958u: goto label_16c958;
        case 0x16c95cu: goto label_16c95c;
        case 0x16c960u: goto label_16c960;
        case 0x16c964u: goto label_16c964;
        case 0x16c968u: goto label_16c968;
        case 0x16c96cu: goto label_16c96c;
        case 0x16c970u: goto label_16c970;
        case 0x16c974u: goto label_16c974;
        case 0x16c978u: goto label_16c978;
        case 0x16c97cu: goto label_16c97c;
        case 0x16c980u: goto label_16c980;
        case 0x16c984u: goto label_16c984;
        case 0x16c988u: goto label_16c988;
        case 0x16c98cu: goto label_16c98c;
        case 0x16c990u: goto label_16c990;
        case 0x16c994u: goto label_16c994;
        case 0x16c998u: goto label_16c998;
        case 0x16c99cu: goto label_16c99c;
        case 0x16c9a0u: goto label_16c9a0;
        case 0x16c9a4u: goto label_16c9a4;
        case 0x16c9a8u: goto label_16c9a8;
        case 0x16c9acu: goto label_16c9ac;
        case 0x16c9b0u: goto label_16c9b0;
        case 0x16c9b4u: goto label_16c9b4;
        case 0x16c9b8u: goto label_16c9b8;
        case 0x16c9bcu: goto label_16c9bc;
        case 0x16c9c0u: goto label_16c9c0;
        case 0x16c9c4u: goto label_16c9c4;
        case 0x16c9c8u: goto label_16c9c8;
        case 0x16c9ccu: goto label_16c9cc;
        case 0x16c9d0u: goto label_16c9d0;
        case 0x16c9d4u: goto label_16c9d4;
        case 0x16c9d8u: goto label_16c9d8;
        case 0x16c9dcu: goto label_16c9dc;
        case 0x16c9e0u: goto label_16c9e0;
        case 0x16c9e4u: goto label_16c9e4;
        case 0x16c9e8u: goto label_16c9e8;
        case 0x16c9ecu: goto label_16c9ec;
        case 0x16c9f0u: goto label_16c9f0;
        case 0x16c9f4u: goto label_16c9f4;
        case 0x16c9f8u: goto label_16c9f8;
        case 0x16c9fcu: goto label_16c9fc;
        case 0x16ca00u: goto label_16ca00;
        case 0x16ca04u: goto label_16ca04;
        case 0x16ca08u: goto label_16ca08;
        case 0x16ca0cu: goto label_16ca0c;
        case 0x16ca10u: goto label_16ca10;
        case 0x16ca14u: goto label_16ca14;
        case 0x16ca18u: goto label_16ca18;
        case 0x16ca1cu: goto label_16ca1c;
        case 0x16ca20u: goto label_16ca20;
        case 0x16ca24u: goto label_16ca24;
        case 0x16ca28u: goto label_16ca28;
        case 0x16ca2cu: goto label_16ca2c;
        case 0x16ca30u: goto label_16ca30;
        case 0x16ca34u: goto label_16ca34;
        case 0x16ca38u: goto label_16ca38;
        case 0x16ca3cu: goto label_16ca3c;
        case 0x16ca40u: goto label_16ca40;
        case 0x16ca44u: goto label_16ca44;
        case 0x16ca48u: goto label_16ca48;
        case 0x16ca4cu: goto label_16ca4c;
        case 0x16ca50u: goto label_16ca50;
        case 0x16ca54u: goto label_16ca54;
        case 0x16ca58u: goto label_16ca58;
        case 0x16ca5cu: goto label_16ca5c;
        case 0x16ca60u: goto label_16ca60;
        case 0x16ca64u: goto label_16ca64;
        case 0x16ca68u: goto label_16ca68;
        case 0x16ca6cu: goto label_16ca6c;
        case 0x16ca70u: goto label_16ca70;
        case 0x16ca74u: goto label_16ca74;
        case 0x16ca78u: goto label_16ca78;
        case 0x16ca7cu: goto label_16ca7c;
        case 0x16ca80u: goto label_16ca80;
        case 0x16ca84u: goto label_16ca84;
        case 0x16ca88u: goto label_16ca88;
        case 0x16ca8cu: goto label_16ca8c;
        case 0x16ca90u: goto label_16ca90;
        case 0x16ca94u: goto label_16ca94;
        case 0x16ca98u: goto label_16ca98;
        case 0x16ca9cu: goto label_16ca9c;
        case 0x16caa0u: goto label_16caa0;
        case 0x16caa4u: goto label_16caa4;
        case 0x16caa8u: goto label_16caa8;
        case 0x16caacu: goto label_16caac;
        case 0x16cab0u: goto label_16cab0;
        case 0x16cab4u: goto label_16cab4;
        case 0x16cab8u: goto label_16cab8;
        case 0x16cabcu: goto label_16cabc;
        case 0x16cac0u: goto label_16cac0;
        case 0x16cac4u: goto label_16cac4;
        case 0x16cac8u: goto label_16cac8;
        case 0x16caccu: goto label_16cacc;
        case 0x16cad0u: goto label_16cad0;
        case 0x16cad4u: goto label_16cad4;
        case 0x16cad8u: goto label_16cad8;
        case 0x16cadcu: goto label_16cadc;
        case 0x16cae0u: goto label_16cae0;
        case 0x16cae4u: goto label_16cae4;
        case 0x16cae8u: goto label_16cae8;
        case 0x16caecu: goto label_16caec;
        case 0x16caf0u: goto label_16caf0;
        case 0x16caf4u: goto label_16caf4;
        case 0x16caf8u: goto label_16caf8;
        case 0x16cafcu: goto label_16cafc;
        case 0x16cb00u: goto label_16cb00;
        case 0x16cb04u: goto label_16cb04;
        case 0x16cb08u: goto label_16cb08;
        case 0x16cb0cu: goto label_16cb0c;
        case 0x16cb10u: goto label_16cb10;
        case 0x16cb14u: goto label_16cb14;
        case 0x16cb18u: goto label_16cb18;
        case 0x16cb1cu: goto label_16cb1c;
        case 0x16cb20u: goto label_16cb20;
        case 0x16cb24u: goto label_16cb24;
        case 0x16cb28u: goto label_16cb28;
        case 0x16cb2cu: goto label_16cb2c;
        case 0x16cb30u: goto label_16cb30;
        case 0x16cb34u: goto label_16cb34;
        case 0x16cb38u: goto label_16cb38;
        case 0x16cb3cu: goto label_16cb3c;
        case 0x16cb40u: goto label_16cb40;
        case 0x16cb44u: goto label_16cb44;
        case 0x16cb48u: goto label_16cb48;
        case 0x16cb4cu: goto label_16cb4c;
        case 0x16cb50u: goto label_16cb50;
        case 0x16cb54u: goto label_16cb54;
        case 0x16cb58u: goto label_16cb58;
        case 0x16cb5cu: goto label_16cb5c;
        case 0x16cb60u: goto label_16cb60;
        case 0x16cb64u: goto label_16cb64;
        case 0x16cb68u: goto label_16cb68;
        case 0x16cb6cu: goto label_16cb6c;
        case 0x16cb70u: goto label_16cb70;
        case 0x16cb74u: goto label_16cb74;
        case 0x16cb78u: goto label_16cb78;
        case 0x16cb7cu: goto label_16cb7c;
        case 0x16cb80u: goto label_16cb80;
        case 0x16cb84u: goto label_16cb84;
        case 0x16cb88u: goto label_16cb88;
        case 0x16cb8cu: goto label_16cb8c;
        case 0x16cb90u: goto label_16cb90;
        case 0x16cb94u: goto label_16cb94;
        case 0x16cb98u: goto label_16cb98;
        case 0x16cb9cu: goto label_16cb9c;
        case 0x16cba0u: goto label_16cba0;
        case 0x16cba4u: goto label_16cba4;
        case 0x16cba8u: goto label_16cba8;
        case 0x16cbacu: goto label_16cbac;
        case 0x16cbb0u: goto label_16cbb0;
        case 0x16cbb4u: goto label_16cbb4;
        case 0x16cbb8u: goto label_16cbb8;
        case 0x16cbbcu: goto label_16cbbc;
        case 0x16cbc0u: goto label_16cbc0;
        case 0x16cbc4u: goto label_16cbc4;
        case 0x16cbc8u: goto label_16cbc8;
        case 0x16cbccu: goto label_16cbcc;
        case 0x16cbd0u: goto label_16cbd0;
        case 0x16cbd4u: goto label_16cbd4;
        case 0x16cbd8u: goto label_16cbd8;
        case 0x16cbdcu: goto label_16cbdc;
        case 0x16cbe0u: goto label_16cbe0;
        case 0x16cbe4u: goto label_16cbe4;
        case 0x16cbe8u: goto label_16cbe8;
        case 0x16cbecu: goto label_16cbec;
        case 0x16cbf0u: goto label_16cbf0;
        case 0x16cbf4u: goto label_16cbf4;
        case 0x16cbf8u: goto label_16cbf8;
        case 0x16cbfcu: goto label_16cbfc;
        case 0x16cc00u: goto label_16cc00;
        case 0x16cc04u: goto label_16cc04;
        case 0x16cc08u: goto label_16cc08;
        case 0x16cc0cu: goto label_16cc0c;
        case 0x16cc10u: goto label_16cc10;
        case 0x16cc14u: goto label_16cc14;
        case 0x16cc18u: goto label_16cc18;
        case 0x16cc1cu: goto label_16cc1c;
        case 0x16cc20u: goto label_16cc20;
        case 0x16cc24u: goto label_16cc24;
        case 0x16cc28u: goto label_16cc28;
        case 0x16cc2cu: goto label_16cc2c;
        case 0x16cc30u: goto label_16cc30;
        case 0x16cc34u: goto label_16cc34;
        case 0x16cc38u: goto label_16cc38;
        case 0x16cc3cu: goto label_16cc3c;
        case 0x16cc40u: goto label_16cc40;
        case 0x16cc44u: goto label_16cc44;
        case 0x16cc48u: goto label_16cc48;
        case 0x16cc4cu: goto label_16cc4c;
        case 0x16cc50u: goto label_16cc50;
        case 0x16cc54u: goto label_16cc54;
        case 0x16cc58u: goto label_16cc58;
        case 0x16cc5cu: goto label_16cc5c;
        case 0x16cc60u: goto label_16cc60;
        case 0x16cc64u: goto label_16cc64;
        case 0x16cc68u: goto label_16cc68;
        case 0x16cc6cu: goto label_16cc6c;
        case 0x16cc70u: goto label_16cc70;
        case 0x16cc74u: goto label_16cc74;
        case 0x16cc78u: goto label_16cc78;
        case 0x16cc7cu: goto label_16cc7c;
        case 0x16cc80u: goto label_16cc80;
        case 0x16cc84u: goto label_16cc84;
        case 0x16cc88u: goto label_16cc88;
        case 0x16cc8cu: goto label_16cc8c;
        case 0x16cc90u: goto label_16cc90;
        case 0x16cc94u: goto label_16cc94;
        case 0x16cc98u: goto label_16cc98;
        case 0x16cc9cu: goto label_16cc9c;
        case 0x16cca0u: goto label_16cca0;
        case 0x16cca4u: goto label_16cca4;
        case 0x16cca8u: goto label_16cca8;
        case 0x16ccacu: goto label_16ccac;
        case 0x16ccb0u: goto label_16ccb0;
        case 0x16ccb4u: goto label_16ccb4;
        case 0x16ccb8u: goto label_16ccb8;
        case 0x16ccbcu: goto label_16ccbc;
        case 0x16ccc0u: goto label_16ccc0;
        case 0x16ccc4u: goto label_16ccc4;
        case 0x16ccc8u: goto label_16ccc8;
        case 0x16ccccu: goto label_16cccc;
        case 0x16ccd0u: goto label_16ccd0;
        case 0x16ccd4u: goto label_16ccd4;
        case 0x16ccd8u: goto label_16ccd8;
        case 0x16ccdcu: goto label_16ccdc;
        case 0x16cce0u: goto label_16cce0;
        case 0x16cce4u: goto label_16cce4;
        case 0x16cce8u: goto label_16cce8;
        case 0x16ccecu: goto label_16ccec;
        case 0x16ccf0u: goto label_16ccf0;
        case 0x16ccf4u: goto label_16ccf4;
        case 0x16ccf8u: goto label_16ccf8;
        case 0x16ccfcu: goto label_16ccfc;
        case 0x16cd00u: goto label_16cd00;
        case 0x16cd04u: goto label_16cd04;
        case 0x16cd08u: goto label_16cd08;
        case 0x16cd0cu: goto label_16cd0c;
        case 0x16cd10u: goto label_16cd10;
        case 0x16cd14u: goto label_16cd14;
        case 0x16cd18u: goto label_16cd18;
        case 0x16cd1cu: goto label_16cd1c;
        case 0x16cd20u: goto label_16cd20;
        case 0x16cd24u: goto label_16cd24;
        case 0x16cd28u: goto label_16cd28;
        case 0x16cd2cu: goto label_16cd2c;
        case 0x16cd30u: goto label_16cd30;
        case 0x16cd34u: goto label_16cd34;
        case 0x16cd38u: goto label_16cd38;
        case 0x16cd3cu: goto label_16cd3c;
        case 0x16cd40u: goto label_16cd40;
        case 0x16cd44u: goto label_16cd44;
        case 0x16cd48u: goto label_16cd48;
        case 0x16cd4cu: goto label_16cd4c;
        case 0x16cd50u: goto label_16cd50;
        case 0x16cd54u: goto label_16cd54;
        case 0x16cd58u: goto label_16cd58;
        case 0x16cd5cu: goto label_16cd5c;
        case 0x16cd60u: goto label_16cd60;
        case 0x16cd64u: goto label_16cd64;
        case 0x16cd68u: goto label_16cd68;
        case 0x16cd6cu: goto label_16cd6c;
        case 0x16cd70u: goto label_16cd70;
        case 0x16cd74u: goto label_16cd74;
        case 0x16cd78u: goto label_16cd78;
        case 0x16cd7cu: goto label_16cd7c;
        case 0x16cd80u: goto label_16cd80;
        case 0x16cd84u: goto label_16cd84;
        case 0x16cd88u: goto label_16cd88;
        case 0x16cd8cu: goto label_16cd8c;
        case 0x16cd90u: goto label_16cd90;
        case 0x16cd94u: goto label_16cd94;
        case 0x16cd98u: goto label_16cd98;
        case 0x16cd9cu: goto label_16cd9c;
        case 0x16cda0u: goto label_16cda0;
        case 0x16cda4u: goto label_16cda4;
        case 0x16cda8u: goto label_16cda8;
        case 0x16cdacu: goto label_16cdac;
        case 0x16cdb0u: goto label_16cdb0;
        case 0x16cdb4u: goto label_16cdb4;
        case 0x16cdb8u: goto label_16cdb8;
        case 0x16cdbcu: goto label_16cdbc;
        case 0x16cdc0u: goto label_16cdc0;
        case 0x16cdc4u: goto label_16cdc4;
        case 0x16cdc8u: goto label_16cdc8;
        case 0x16cdccu: goto label_16cdcc;
        case 0x16cdd0u: goto label_16cdd0;
        case 0x16cdd4u: goto label_16cdd4;
        case 0x16cdd8u: goto label_16cdd8;
        case 0x16cddcu: goto label_16cddc;
        case 0x16cde0u: goto label_16cde0;
        case 0x16cde4u: goto label_16cde4;
        case 0x16cde8u: goto label_16cde8;
        case 0x16cdecu: goto label_16cdec;
        case 0x16cdf0u: goto label_16cdf0;
        case 0x16cdf4u: goto label_16cdf4;
        case 0x16cdf8u: goto label_16cdf8;
        case 0x16cdfcu: goto label_16cdfc;
        case 0x16ce00u: goto label_16ce00;
        case 0x16ce04u: goto label_16ce04;
        case 0x16ce08u: goto label_16ce08;
        case 0x16ce0cu: goto label_16ce0c;
        case 0x16ce10u: goto label_16ce10;
        case 0x16ce14u: goto label_16ce14;
        case 0x16ce18u: goto label_16ce18;
        case 0x16ce1cu: goto label_16ce1c;
        case 0x16ce20u: goto label_16ce20;
        case 0x16ce24u: goto label_16ce24;
        case 0x16ce28u: goto label_16ce28;
        case 0x16ce2cu: goto label_16ce2c;
        case 0x16ce30u: goto label_16ce30;
        case 0x16ce34u: goto label_16ce34;
        case 0x16ce38u: goto label_16ce38;
        case 0x16ce3cu: goto label_16ce3c;
        case 0x16ce40u: goto label_16ce40;
        case 0x16ce44u: goto label_16ce44;
        case 0x16ce48u: goto label_16ce48;
        case 0x16ce4cu: goto label_16ce4c;
        case 0x16ce50u: goto label_16ce50;
        case 0x16ce54u: goto label_16ce54;
        case 0x16ce58u: goto label_16ce58;
        case 0x16ce5cu: goto label_16ce5c;
        case 0x16ce60u: goto label_16ce60;
        case 0x16ce64u: goto label_16ce64;
        case 0x16ce68u: goto label_16ce68;
        case 0x16ce6cu: goto label_16ce6c;
        case 0x16ce70u: goto label_16ce70;
        case 0x16ce74u: goto label_16ce74;
        case 0x16ce78u: goto label_16ce78;
        case 0x16ce7cu: goto label_16ce7c;
        case 0x16ce80u: goto label_16ce80;
        case 0x16ce84u: goto label_16ce84;
        case 0x16ce88u: goto label_16ce88;
        case 0x16ce8cu: goto label_16ce8c;
        case 0x16ce90u: goto label_16ce90;
        case 0x16ce94u: goto label_16ce94;
        case 0x16ce98u: goto label_16ce98;
        case 0x16ce9cu: goto label_16ce9c;
        case 0x16cea0u: goto label_16cea0;
        case 0x16cea4u: goto label_16cea4;
        case 0x16cea8u: goto label_16cea8;
        case 0x16ceacu: goto label_16ceac;
        case 0x16ceb0u: goto label_16ceb0;
        case 0x16ceb4u: goto label_16ceb4;
        case 0x16ceb8u: goto label_16ceb8;
        case 0x16cebcu: goto label_16cebc;
        case 0x16cec0u: goto label_16cec0;
        case 0x16cec4u: goto label_16cec4;
        case 0x16cec8u: goto label_16cec8;
        case 0x16ceccu: goto label_16cecc;
        case 0x16ced0u: goto label_16ced0;
        case 0x16ced4u: goto label_16ced4;
        case 0x16ced8u: goto label_16ced8;
        case 0x16cedcu: goto label_16cedc;
        case 0x16cee0u: goto label_16cee0;
        case 0x16cee4u: goto label_16cee4;
        case 0x16cee8u: goto label_16cee8;
        case 0x16ceecu: goto label_16ceec;
        case 0x16cef0u: goto label_16cef0;
        case 0x16cef4u: goto label_16cef4;
        case 0x16cef8u: goto label_16cef8;
        case 0x16cefcu: goto label_16cefc;
        case 0x16cf00u: goto label_16cf00;
        case 0x16cf04u: goto label_16cf04;
        case 0x16cf08u: goto label_16cf08;
        case 0x16cf0cu: goto label_16cf0c;
        case 0x16cf10u: goto label_16cf10;
        case 0x16cf14u: goto label_16cf14;
        case 0x16cf18u: goto label_16cf18;
        case 0x16cf1cu: goto label_16cf1c;
        case 0x16cf20u: goto label_16cf20;
        case 0x16cf24u: goto label_16cf24;
        case 0x16cf28u: goto label_16cf28;
        case 0x16cf2cu: goto label_16cf2c;
        case 0x16cf30u: goto label_16cf30;
        case 0x16cf34u: goto label_16cf34;
        case 0x16cf38u: goto label_16cf38;
        case 0x16cf3cu: goto label_16cf3c;
        case 0x16cf40u: goto label_16cf40;
        case 0x16cf44u: goto label_16cf44;
        case 0x16cf48u: goto label_16cf48;
        case 0x16cf4cu: goto label_16cf4c;
        case 0x16cf50u: goto label_16cf50;
        case 0x16cf54u: goto label_16cf54;
        case 0x16cf58u: goto label_16cf58;
        case 0x16cf5cu: goto label_16cf5c;
        case 0x16cf60u: goto label_16cf60;
        case 0x16cf64u: goto label_16cf64;
        case 0x16cf68u: goto label_16cf68;
        case 0x16cf6cu: goto label_16cf6c;
        case 0x16cf70u: goto label_16cf70;
        case 0x16cf74u: goto label_16cf74;
        case 0x16cf78u: goto label_16cf78;
        case 0x16cf7cu: goto label_16cf7c;
        case 0x16cf80u: goto label_16cf80;
        case 0x16cf84u: goto label_16cf84;
        case 0x16cf88u: goto label_16cf88;
        case 0x16cf8cu: goto label_16cf8c;
        case 0x16cf90u: goto label_16cf90;
        case 0x16cf94u: goto label_16cf94;
        case 0x16cf98u: goto label_16cf98;
        case 0x16cf9cu: goto label_16cf9c;
        case 0x16cfa0u: goto label_16cfa0;
        case 0x16cfa4u: goto label_16cfa4;
        case 0x16cfa8u: goto label_16cfa8;
        case 0x16cfacu: goto label_16cfac;
        case 0x16cfb0u: goto label_16cfb0;
        case 0x16cfb4u: goto label_16cfb4;
        case 0x16cfb8u: goto label_16cfb8;
        case 0x16cfbcu: goto label_16cfbc;
        case 0x16cfc0u: goto label_16cfc0;
        case 0x16cfc4u: goto label_16cfc4;
        case 0x16cfc8u: goto label_16cfc8;
        case 0x16cfccu: goto label_16cfcc;
        case 0x16cfd0u: goto label_16cfd0;
        case 0x16cfd4u: goto label_16cfd4;
        case 0x16cfd8u: goto label_16cfd8;
        case 0x16cfdcu: goto label_16cfdc;
        case 0x16cfe0u: goto label_16cfe0;
        case 0x16cfe4u: goto label_16cfe4;
        case 0x16cfe8u: goto label_16cfe8;
        case 0x16cfecu: goto label_16cfec;
        case 0x16cff0u: goto label_16cff0;
        case 0x16cff4u: goto label_16cff4;
        case 0x16cff8u: goto label_16cff8;
        case 0x16cffcu: goto label_16cffc;
        default: return;
    }

label_16c830:
    // 0x16c830: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_16c834:
    if (ctx->pc == 0x16C834u) {
        ctx->pc = 0x16C838u;
        goto label_16c838;
    }
    ctx->pc = 0x16C830u;
    {
        const bool branch_taken_0x16c830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c830) {
            ctx->pc = 0x16C7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x16c7b0; return; }
        }
    }
    ctx->pc = 0x16C838u;
label_16c838:
    // 0x16c838: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c83c:
    // 0x16c83c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_16c840:
    if (ctx->pc == 0x16C840u) {
        ctx->pc = 0x16C844u;
        goto label_16c844;
    }
    ctx->pc = 0x16C83Cu;
    {
        const bool branch_taken_0x16c83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c83c) {
            ctx->pc = 0x16C868u;
            goto label_16c868;
        }
    }
    ctx->pc = 0x16C844u;
label_16c844:
    // 0x16c844: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c848:
    // 0x16c848: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c848u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c84c:
    // 0x16c84c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c850:
    // 0x16c850: 0xc08d61c  jal         func_235870
label_16c854:
    if (ctx->pc == 0x16C854u) {
        ctx->pc = 0x16C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C850u;
        // 0x16c854: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C858u;
        goto label_16c858;
    }
    ctx->pc = 0x16C850u;
    SET_GPR_U32(ctx, 31, 0x16C858u);
    ctx->pc = 0x16C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C850u;
    // 0x16c854: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C858u;
label_16c858:
    // 0x16c858: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c85c:
    // 0x16c85c: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c860:
    if (ctx->pc == 0x16C860u) {
        ctx->pc = 0x16C864u;
        goto label_16c864;
    }
    ctx->pc = 0x16C85Cu;
    {
        const bool branch_taken_0x16c85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c85c) {
            ctx->pc = 0x16C844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c844;
        }
    }
    ctx->pc = 0x16C864u;
label_16c864:
    // 0x16c864: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c868:
    // 0x16c868: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16c868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16c86c:
    // 0x16c86c: 0xac201ed8  sw          $zero, 0x1ED8($at)
    ctx->pc = 0x16c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 0));
label_16c870:
    // 0x16c870: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16c870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16c874:
    // 0x16c874: 0xac201edc  sw          $zero, 0x1EDC($at)
    ctx->pc = 0x16c874u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7900), GPR_U32(ctx, 0));
label_16c878:
    // 0x16c878: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16c878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16c87c:
    // 0x16c87c: 0xac201ee0  sw          $zero, 0x1EE0($at)
    ctx->pc = 0x16c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7904), GPR_U32(ctx, 0));
label_16c880:
    // 0x16c880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16c884:
    // 0x16c884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c888:
    // 0x16c888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c88c:
    // 0x16c88c: 0x3e00008  jr          $ra
label_16c890:
    if (ctx->pc == 0x16C890u) {
        ctx->pc = 0x16C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C88Cu;
        // 0x16c890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C894u;
        goto label_16c894;
    }
    ctx->pc = 0x16C88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C88Cu;
        // 0x16c890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C894u;
label_16c894:
    // 0x16c894: 0x0  nop
    ctx->pc = 0x16c894u;
    // NOP
label_16c898:
    // 0x16c898: 0x0  nop
    ctx->pc = 0x16c898u;
    // NOP
label_16c89c:
    // 0x16c89c: 0x0  nop
    ctx->pc = 0x16c89cu;
    // NOP
label_16c8a0:
    // 0x16c8a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16c8a4:
    // 0x16c8a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16c8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16c8a8:
    // 0x16c8a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16c8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16c8ac:
    // 0x16c8ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16c8b0:
    // 0x16c8b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c8b4:
    // 0x16c8b4: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16c8b8:
    // 0x16c8b8: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_16c8bc:
    if (ctx->pc == 0x16C8BCu) {
        ctx->pc = 0x16C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8B8u;
        // 0x16c8bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8C0u;
        goto label_16c8c0;
    }
    ctx->pc = 0x16C8B8u;
    {
        const bool branch_taken_0x16c8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8B8u;
        // 0x16c8bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8b8) {
            ctx->pc = 0x16C970u;
            goto label_16c970;
        }
    }
    ctx->pc = 0x16C8C0u;
label_16c8c0:
    // 0x16c8c0: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x16c8c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_16c8c4:
    // 0x16c8c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c8c8:
    // 0x16c8c8: 0xc08d2c6  jal         func_234B18
label_16c8cc:
    if (ctx->pc == 0x16C8CCu) {
        ctx->pc = 0x16C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8C8u;
        // 0x16c8cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8D0u;
        goto label_16c8d0;
    }
    ctx->pc = 0x16C8C8u;
    SET_GPR_U32(ctx, 31, 0x16C8D0u);
    ctx->pc = 0x16C8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8C8u;
    // 0x16c8cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234B18u;
    { ctx->pc = 0x234b18; return; }
    ctx->pc = 0x16C8D0u;
label_16c8d0:
    // 0x16c8d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16c8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c8d4:
    // 0x16c8d4: 0x10000022  b           . + 4 + (0x22 << 2)
label_16c8d8:
    if (ctx->pc == 0x16C8D8u) {
        ctx->pc = 0x16C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8D4u;
        // 0x16c8d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C8DCu;
        goto label_16c8dc;
    }
    ctx->pc = 0x16C8D4u;
    {
        const bool branch_taken_0x16c8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8D4u;
        // 0x16c8d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8d4) {
            ctx->pc = 0x16C960u;
            goto label_16c960;
        }
    }
    ctx->pc = 0x16C8DCu;
label_16c8dc:
    // 0x16c8dc: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c8e0:
    // 0x16c8e0: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c8e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c8e4:
    // 0x16c8e4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16c8e8:
    if (ctx->pc == 0x16C8E8u) {
        ctx->pc = 0x16C8ECu;
        goto label_16c8ec;
    }
    ctx->pc = 0x16C8E4u;
    {
        const bool branch_taken_0x16c8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c8e4) {
            ctx->pc = 0x16C914u;
            goto label_16c914;
        }
    }
    ctx->pc = 0x16C8ECu;
label_16c8ec:
    // 0x16c8ec: 0x0  nop
    ctx->pc = 0x16c8ecu;
    // NOP
label_16c8f0:
    // 0x16c8f0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c8f4:
    // 0x16c8f4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c8f8:
    // 0x16c8f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c8fc:
    // 0x16c8fc: 0xc08d61c  jal         func_235870
label_16c900:
    if (ctx->pc == 0x16C900u) {
        ctx->pc = 0x16C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8FCu;
        // 0x16c900: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C904u;
        goto label_16c904;
    }
    ctx->pc = 0x16C8FCu;
    SET_GPR_U32(ctx, 31, 0x16C904u);
    ctx->pc = 0x16C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C8FCu;
    // 0x16c900: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C904u;
label_16c904:
    // 0x16c904: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c908:
    // 0x16c908: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
label_16c90c:
    if (ctx->pc == 0x16C90Cu) {
        ctx->pc = 0x16C910u;
        goto label_16c910;
    }
    ctx->pc = 0x16C908u;
    {
        const bool branch_taken_0x16c908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c908) {
            ctx->pc = 0x16C8ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c8ec;
        }
    }
    ctx->pc = 0x16C910u;
label_16c910:
    // 0x16c910: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c914:
    // 0x16c914: 0x0  nop
    ctx->pc = 0x16c914u;
    // NOP
label_16c918:
    // 0x16c918: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x16c918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_16c91c:
    // 0x16c91c: 0x2232025  or          $a0, $s1, $v1
    ctx->pc = 0x16c91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_16c920:
    // 0x16c920: 0x8f868710  lw          $a2, -0x78F0($gp)
    ctx->pc = 0x16c920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c924:
    // 0x16c924: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x16c924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_16c928:
    // 0x16c928: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16c928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16c92c:
    // 0x16c92c: 0x2431825  or          $v1, $s2, $v1
    ctx->pc = 0x16c92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_16c930:
    // 0x16c930: 0x24a53ef0  addiu       $a1, $a1, 0x3EF0
    ctx->pc = 0x16c930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16112));
label_16c934:
    // 0x16c934: 0x833825  or          $a3, $a0, $v1
    ctx->pc = 0x16c934u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16c938:
    // 0x16c938: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x16c938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16c93c:
    // 0x16c93c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x16c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_16c940:
    // 0x16c940: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x16c940u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16c944:
    // 0x16c944: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x16c944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_16c948:
    // 0x16c948: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x16c948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_16c94c:
    // 0x16c94c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_16c950:
    // 0x16c950: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x16c950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_16c954:
    // 0x16c954: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c958:
    // 0x16c958: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16c95c:
    // 0x16c95c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16c960:
    // 0x16c960: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16c960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16c964:
    // 0x16c964: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x16c964u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_16c968:
    // 0x16c968: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_16c96c:
    if (ctx->pc == 0x16C96Cu) {
        ctx->pc = 0x16C970u;
        goto label_16c970;
    }
    ctx->pc = 0x16C968u;
    {
        const bool branch_taken_0x16c968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c968) {
            ctx->pc = 0x16C8DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c8dc;
        }
    }
    ctx->pc = 0x16C970u;
label_16c970:
    // 0x16c970: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16c970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16c974:
    // 0x16c974: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16c974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c978:
    // 0x16c978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c97c:
    // 0x16c97c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16c980:
    // 0x16c980: 0x3e00008  jr          $ra
label_16c984:
    if (ctx->pc == 0x16C984u) {
        ctx->pc = 0x16C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C980u;
        // 0x16c984: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C988u;
        goto label_16c988;
    }
    ctx->pc = 0x16C980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C980u;
        // 0x16c984: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C988u;
label_16c988:
    // 0x16c988: 0x0  nop
    ctx->pc = 0x16c988u;
    // NOP
label_16c98c:
    // 0x16c98c: 0x0  nop
    ctx->pc = 0x16c98cu;
    // NOP
label_16c990:
    // 0x16c990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16c990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16c994:
    // 0x16c994: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16c998:
    // 0x16c998: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16c998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16c99c:
    // 0x16c99c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16c99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16c9a0:
    // 0x16c9a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16c9a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c9a4:
    // 0x16c9a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16c9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16c9a8:
    // 0x16c9a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16c9a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c9ac:
    // 0x16c9ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16c9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16c9b0:
    // 0x16c9b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16c9b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16c9b4:
    // 0x16c9b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16c9b8:
    // 0x16c9b8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x16c9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16c9bc:
    // 0x16c9bc: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16c9c0:
    // 0x16c9c0: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_16c9c4:
    if (ctx->pc == 0x16C9C4u) {
        ctx->pc = 0x16C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9C0u;
        // 0x16c9c4: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9C8u;
        goto label_16c9c8;
    }
    ctx->pc = 0x16C9C0u;
    {
        const bool branch_taken_0x16c9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9C0u;
        // 0x16c9c4: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9c0) {
            ctx->pc = 0x16CAB8u;
            goto label_16cab8;
        }
    }
    ctx->pc = 0x16C9C8u;
label_16c9c8:
    // 0x16c9c8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c9cc:
    // 0x16c9cc: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16c9ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16c9d0:
    // 0x16c9d0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16c9d4:
    if (ctx->pc == 0x16C9D4u) {
        ctx->pc = 0x16C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9D0u;
        // 0x16c9d4: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9D8u;
        goto label_16c9d8;
    }
    ctx->pc = 0x16C9D0u;
    {
        const bool branch_taken_0x16c9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9D0u;
        // 0x16c9d4: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9d0) {
            ctx->pc = 0x16CA00u;
            goto label_16ca00;
        }
    }
    ctx->pc = 0x16C9D8u;
label_16c9d8:
    // 0x16c9d8: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16c9dc:
    // 0x16c9dc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16c9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16c9e0:
    // 0x16c9e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16c9e4:
    // 0x16c9e4: 0xc08d61c  jal         func_235870
label_16c9e8:
    if (ctx->pc == 0x16C9E8u) {
        ctx->pc = 0x16C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9E4u;
        // 0x16c9e8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C9ECu;
        goto label_16c9ec;
    }
    ctx->pc = 0x16C9E4u;
    SET_GPR_U32(ctx, 31, 0x16C9ECu);
    ctx->pc = 0x16C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9E4u;
    // 0x16c9e8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16C9ECu;
label_16c9ec:
    // 0x16c9ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16c9f0:
    // 0x16c9f0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16c9f4:
    if (ctx->pc == 0x16C9F4u) {
        ctx->pc = 0x16C9F8u;
        goto label_16c9f8;
    }
    ctx->pc = 0x16C9F0u;
    {
        const bool branch_taken_0x16c9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c9f0) {
            ctx->pc = 0x16C9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c9d8;
        }
    }
    ctx->pc = 0x16C9F8u;
label_16c9f8:
    // 0x16c9f8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16c9fc:
    // 0x16c9fc: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x16c9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16ca00:
    // 0x16ca00: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16ca00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16ca04:
    // 0x16ca04: 0x42380  sll         $a0, $a0, 14
    ctx->pc = 0x16ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
label_16ca08:
    // 0x16ca08: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x16ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_16ca0c:
    // 0x16ca0c: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x16ca0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16ca10:
    // 0x16ca10: 0x148e00  sll         $s1, $s4, 24
    ctx->pc = 0x16ca10u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
label_16ca14:
    // 0x16ca14: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ca18:
    // 0x16ca18: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x16ca18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_16ca1c:
    // 0x16ca1c: 0x703025  or          $a2, $v1, $s0
    ctx->pc = 0x16ca1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_16ca20:
    // 0x16ca20: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x16ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_16ca24:
    // 0x16ca24: 0x2232825  or          $a1, $s1, $v1
    ctx->pc = 0x16ca24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_16ca28:
    // 0x16ca28: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16ca2c:
    // 0x16ca2c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x16ca2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_16ca30:
    // 0x16ca30: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16ca34:
    // 0x16ca34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16ca38:
    // 0x16ca38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16ca3c:
    // 0x16ca3c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16ca40:
    // 0x16ca40: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ca44:
    // 0x16ca44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16ca48:
    // 0x16ca48: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16ca4c:
    // 0x16ca4c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ca50:
    // 0x16ca50: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16ca50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16ca54:
    // 0x16ca54: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16ca58:
    if (ctx->pc == 0x16CA58u) {
        ctx->pc = 0x16CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA54u;
        // 0x16ca58: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA5Cu;
        goto label_16ca5c;
    }
    ctx->pc = 0x16CA54u;
    {
        const bool branch_taken_0x16ca54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA54u;
        // 0x16ca58: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca54) {
            ctx->pc = 0x16CA84u;
            goto label_16ca84;
        }
    }
    ctx->pc = 0x16CA5Cu;
label_16ca5c:
    // 0x16ca5c: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16ca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ca60:
    // 0x16ca60: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16ca60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16ca64:
    // 0x16ca64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16ca68:
    // 0x16ca68: 0xc08d61c  jal         func_235870
label_16ca6c:
    if (ctx->pc == 0x16CA6Cu) {
        ctx->pc = 0x16CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA68u;
        // 0x16ca6c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CA70u;
        goto label_16ca70;
    }
    ctx->pc = 0x16CA68u;
    SET_GPR_U32(ctx, 31, 0x16CA70u);
    ctx->pc = 0x16CA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA68u;
    // 0x16ca6c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16CA70u;
label_16ca70:
    // 0x16ca70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ca74:
    // 0x16ca74: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16ca78:
    if (ctx->pc == 0x16CA78u) {
        ctx->pc = 0x16CA7Cu;
        goto label_16ca7c;
    }
    ctx->pc = 0x16CA74u;
    {
        const bool branch_taken_0x16ca74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ca74) {
            ctx->pc = 0x16CA5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ca5c;
        }
    }
    ctx->pc = 0x16CA7Cu;
label_16ca7c:
    // 0x16ca7c: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16ca80:
    // 0x16ca80: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x16ca80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_16ca84:
    // 0x16ca84: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x16ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
label_16ca88:
    // 0x16ca88: 0x2242025  or          $a0, $s1, $a0
    ctx->pc = 0x16ca88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_16ca8c:
    // 0x16ca8c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x16ca8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_16ca90:
    // 0x16ca90: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x16ca90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16ca94:
    // 0x16ca94: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ca98:
    // 0x16ca98: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16ca9c:
    // 0x16ca9c: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16caa0:
    // 0x16caa0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16caa4:
    // 0x16caa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16caa8:
    // 0x16caa8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16caac:
    // 0x16caac: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cab0:
    // 0x16cab0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16cab4:
    // 0x16cab4: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16cab8:
    // 0x16cab8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16cab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16cabc:
    // 0x16cabc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16cabcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16cac0:
    // 0x16cac0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16cac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16cac4:
    // 0x16cac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16cac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16cac8:
    // 0x16cac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16cac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16cacc:
    // 0x16cacc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16caccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16cad0:
    // 0x16cad0: 0x3e00008  jr          $ra
label_16cad4:
    if (ctx->pc == 0x16CAD4u) {
        ctx->pc = 0x16CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAD0u;
        // 0x16cad4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CAD8u;
        goto label_16cad8;
    }
    ctx->pc = 0x16CAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAD0u;
        // 0x16cad4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CAD8u;
label_16cad8:
    // 0x16cad8: 0x0  nop
    ctx->pc = 0x16cad8u;
    // NOP
label_16cadc:
    // 0x16cadc: 0x0  nop
    ctx->pc = 0x16cadcu;
    // NOP
label_16cae0:
    // 0x16cae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16cae4:
    // 0x16cae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16cae8:
    // 0x16cae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16cae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16caec:
    // 0x16caec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16caecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16caf0:
    // 0x16caf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16caf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16caf4:
    // 0x16caf4: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16caf8:
    // 0x16caf8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_16cafc:
    if (ctx->pc == 0x16CAFCu) {
        ctx->pc = 0x16CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAF8u;
        // 0x16cafc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB00u;
        goto label_16cb00;
    }
    ctx->pc = 0x16CAF8u;
    {
        const bool branch_taken_0x16caf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAF8u;
        // 0x16cafc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16caf8) {
            ctx->pc = 0x16CB78u;
            goto label_16cb78;
        }
    }
    ctx->pc = 0x16CB00u;
label_16cb00:
    // 0x16cb00: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cb04:
    // 0x16cb04: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16cb04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16cb08:
    // 0x16cb08: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16cb0c:
    if (ctx->pc == 0x16CB0Cu) {
        ctx->pc = 0x16CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB08u;
        // 0x16cb0c: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB10u;
        goto label_16cb10;
    }
    ctx->pc = 0x16CB08u;
    {
        const bool branch_taken_0x16cb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB08u;
        // 0x16cb0c: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cb08) {
            ctx->pc = 0x16CB38u;
            goto label_16cb38;
        }
    }
    ctx->pc = 0x16CB10u;
label_16cb10:
    // 0x16cb10: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16cb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cb14:
    // 0x16cb14: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16cb14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16cb18:
    // 0x16cb18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16cb1c:
    // 0x16cb1c: 0xc08d61c  jal         func_235870
label_16cb20:
    if (ctx->pc == 0x16CB20u) {
        ctx->pc = 0x16CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB1Cu;
        // 0x16cb20: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB24u;
        goto label_16cb24;
    }
    ctx->pc = 0x16CB1Cu;
    SET_GPR_U32(ctx, 31, 0x16CB24u);
    ctx->pc = 0x16CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB1Cu;
    // 0x16cb20: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16CB24u;
label_16cb24:
    // 0x16cb24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16cb28:
    // 0x16cb28: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16cb2c:
    if (ctx->pc == 0x16CB2Cu) {
        ctx->pc = 0x16CB30u;
        goto label_16cb30;
    }
    ctx->pc = 0x16CB28u;
    {
        const bool branch_taken_0x16cb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cb28) {
            ctx->pc = 0x16CB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cb10;
        }
    }
    ctx->pc = 0x16CB30u;
label_16cb30:
    // 0x16cb30: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16cb34:
    // 0x16cb34: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16cb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16cb38:
    // 0x16cb38: 0x112e00  sll         $a1, $s1, 24
    ctx->pc = 0x16cb38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
label_16cb3c:
    // 0x16cb3c: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x16cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_16cb40:
    // 0x16cb40: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_16cb44:
    // 0x16cb44: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16cb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16cb48:
    // 0x16cb48: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x16cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_16cb4c:
    // 0x16cb4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16cb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16cb50:
    // 0x16cb50: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cb54:
    // 0x16cb54: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16cb54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16cb58:
    // 0x16cb58: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16cb5c:
    // 0x16cb5c: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16cb60:
    // 0x16cb60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16cb64:
    // 0x16cb64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16cb68:
    // 0x16cb68: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16cb6c:
    // 0x16cb6c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cb70:
    // 0x16cb70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16cb74:
    // 0x16cb74: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16cb78:
    // 0x16cb78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16cb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16cb7c:
    // 0x16cb7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16cb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16cb80:
    // 0x16cb80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16cb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16cb84:
    // 0x16cb84: 0x3e00008  jr          $ra
label_16cb88:
    if (ctx->pc == 0x16CB88u) {
        ctx->pc = 0x16CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB84u;
        // 0x16cb88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CB8Cu;
        goto label_16cb8c;
    }
    ctx->pc = 0x16CB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB84u;
        // 0x16cb88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CB8Cu;
label_16cb8c:
    // 0x16cb8c: 0x0  nop
    ctx->pc = 0x16cb8cu;
    // NOP
label_16cb90:
    // 0x16cb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16cb94:
    // 0x16cb94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16cb98:
    // 0x16cb98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16cb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16cb9c:
    // 0x16cb9c: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16cba0:
    // 0x16cba0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_16cba4:
    if (ctx->pc == 0x16CBA4u) {
        ctx->pc = 0x16CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBA0u;
        // 0x16cba4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CBA8u;
        goto label_16cba8;
    }
    ctx->pc = 0x16CBA0u;
    {
        const bool branch_taken_0x16cba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBA0u;
        // 0x16cba4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cba0) {
            ctx->pc = 0x16CC10u;
            goto label_16cc10;
        }
    }
    ctx->pc = 0x16CBA8u;
label_16cba8:
    // 0x16cba8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cbac:
    // 0x16cbac: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16cbacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16cbb0:
    // 0x16cbb0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16cbb4:
    if (ctx->pc == 0x16CBB4u) {
        ctx->pc = 0x16CBB8u;
        goto label_16cbb8;
    }
    ctx->pc = 0x16CBB0u;
    {
        const bool branch_taken_0x16cbb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cbb0) {
            ctx->pc = 0x16CBDCu;
            goto label_16cbdc;
        }
    }
    ctx->pc = 0x16CBB8u;
label_16cbb8:
    // 0x16cbb8: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16cbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cbbc:
    // 0x16cbbc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16cbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16cbc0:
    // 0x16cbc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16cbc4:
    // 0x16cbc4: 0xc08d61c  jal         func_235870
label_16cbc8:
    if (ctx->pc == 0x16CBC8u) {
        ctx->pc = 0x16CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBC4u;
        // 0x16cbc8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CBCCu;
        goto label_16cbcc;
    }
    ctx->pc = 0x16CBC4u;
    SET_GPR_U32(ctx, 31, 0x16CBCCu);
    ctx->pc = 0x16CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CBC4u;
    // 0x16cbc8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16CBCCu;
label_16cbcc:
    // 0x16cbcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16cbd0:
    // 0x16cbd0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16cbd4:
    if (ctx->pc == 0x16CBD4u) {
        ctx->pc = 0x16CBD8u;
        goto label_16cbd8;
    }
    ctx->pc = 0x16CBD0u;
    {
        const bool branch_taken_0x16cbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cbd0) {
            ctx->pc = 0x16CBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cbb8;
        }
    }
    ctx->pc = 0x16CBD8u;
label_16cbd8:
    // 0x16cbd8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16cbdc:
    // 0x16cbdc: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cbe0:
    // 0x16cbe0: 0x3c03400f  lui         $v1, 0x400F
    ctx->pc = 0x16cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16399 << 16));
label_16cbe4:
    // 0x16cbe4: 0x102e00  sll         $a1, $s0, 24
    ctx->pc = 0x16cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
label_16cbe8:
    // 0x16cbe8: 0x34633f80  ori         $v1, $v1, 0x3F80
    ctx->pc = 0x16cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16256);
label_16cbec:
    // 0x16cbec: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16cbecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16cbf0:
    // 0x16cbf0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16cbf4:
    // 0x16cbf4: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16cbf8:
    // 0x16cbf8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16cbfc:
    // 0x16cbfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16cc00:
    // 0x16cc00: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16cc04:
    // 0x16cc04: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cc08:
    // 0x16cc08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16cc0c:
    // 0x16cc0c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16cc10:
    // 0x16cc10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16cc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16cc14:
    // 0x16cc14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16cc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16cc18:
    // 0x16cc18: 0x3e00008  jr          $ra
label_16cc1c:
    if (ctx->pc == 0x16CC1Cu) {
        ctx->pc = 0x16CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC18u;
        // 0x16cc1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CC20u;
        goto label_16cc20;
    }
    ctx->pc = 0x16CC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC18u;
        // 0x16cc1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CC20u;
label_16cc20:
    // 0x16cc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16cc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16cc24:
    // 0x16cc24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16cc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16cc28:
    // 0x16cc28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16cc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16cc2c:
    // 0x16cc2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cc30:
    // 0x16cc30: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16cc34:
    // 0x16cc34: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
label_16cc38:
    if (ctx->pc == 0x16CC38u) {
        ctx->pc = 0x16CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC34u;
        // 0x16cc38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CC3Cu;
        goto label_16cc3c;
    }
    ctx->pc = 0x16CC34u;
    {
        const bool branch_taken_0x16cc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x16CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC34u;
        // 0x16cc38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc34) {
            ctx->pc = 0x16CC4Cu;
            goto label_16cc4c;
        }
    }
    ctx->pc = 0x16CC3Cu;
label_16cc3c:
    // 0x16cc3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16cc40:
    // 0x16cc40: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_16cc44:
    if (ctx->pc == 0x16CC44u) {
        ctx->pc = 0x16CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC40u;
        // 0x16cc44: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CC48u;
        goto label_16cc48;
    }
    ctx->pc = 0x16CC40u;
    {
        const bool branch_taken_0x16cc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC40u;
        // 0x16cc44: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc40) {
            ctx->pc = 0x16CC54u;
            goto label_16cc54;
        }
    }
    ctx->pc = 0x16CC48u;
label_16cc48:
    // 0x16cc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cc4c:
    // 0x16cc4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_16cc50:
    if (ctx->pc == 0x16CC50u) {
        ctx->pc = 0x16CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC4Cu;
        // 0x16cc50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CC54u;
        goto label_16cc54;
    }
    ctx->pc = 0x16CC4Cu;
    {
        const bool branch_taken_0x16cc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC4Cu;
        // 0x16cc50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc4c) {
            ctx->pc = 0x16CC6Cu;
            goto label_16cc6c;
        }
    }
    ctx->pc = 0x16CC54u;
label_16cc54:
    // 0x16cc54: 0xc08d3be  jal         func_234EF8
label_16cc58:
    if (ctx->pc == 0x16CC58u) {
        ctx->pc = 0x16CC5Cu;
        goto label_16cc5c;
    }
    ctx->pc = 0x16CC54u;
    SET_GPR_U32(ctx, 31, 0x16CC5Cu);
    ctx->pc = 0x234EF8u;
    { ctx->pc = 0x234ef8; return; }
    ctx->pc = 0x16CC5Cu;
label_16cc5c:
    // 0x16cc5c: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x16cc5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_16cc60:
    // 0x16cc60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cc64:
    // 0x16cc64: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x16cc64u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_16cc68:
    // 0x16cc68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16cc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16cc6c:
    // 0x16cc6c: 0x3e00008  jr          $ra
label_16cc70:
    if (ctx->pc == 0x16CC70u) {
        ctx->pc = 0x16CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC6Cu;
        // 0x16cc70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CC74u;
        goto label_16cc74;
    }
    ctx->pc = 0x16CC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC6Cu;
        // 0x16cc70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CC74u;
label_16cc74:
    // 0x16cc74: 0x0  nop
    ctx->pc = 0x16cc74u;
    // NOP
label_16cc78:
    // 0x16cc78: 0x0  nop
    ctx->pc = 0x16cc78u;
    // NOP
label_16cc7c:
    // 0x16cc7c: 0x0  nop
    ctx->pc = 0x16cc7cu;
    // NOP
label_16cc80:
    // 0x16cc80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16cc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16cc84:
    // 0x16cc84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16cc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16cc88:
    // 0x16cc88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16cc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16cc8c:
    // 0x16cc8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16cc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16cc90:
    // 0x16cc90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16cc90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16cc94:
    // 0x16cc94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16cc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16cc98:
    // 0x16cc98: 0x2a81000f  slti        $at, $s4, 0xF
    ctx->pc = 0x16cc98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)15) ? 1 : 0);
label_16cc9c:
    // 0x16cc9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16cc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16cca0:
    // 0x16cca0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16cca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16cca4:
    // 0x16cca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16cca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16cca8:
    // 0x16cca8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x16cca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16ccac:
    // 0x16ccac: 0x1020005a  beqz        $at, . + 4 + (0x5A << 2)
label_16ccb0:
    if (ctx->pc == 0x16CCB0u) {
        ctx->pc = 0x16CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCACu;
        // 0x16ccb0: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCB4u;
        goto label_16ccb4;
    }
    ctx->pc = 0x16CCACu;
    {
        const bool branch_taken_0x16ccac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCACu;
        // 0x16ccb0: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccac) {
            ctx->pc = 0x16CE18u;
            goto label_16ce18;
        }
    }
    ctx->pc = 0x16CCB4u;
label_16ccb4:
    // 0x16ccb4: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x16ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16ccb8:
    // 0x16ccb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ccbc:
    // 0x16ccbc: 0x10a40056  beq         $a1, $a0, . + 4 + (0x56 << 2)
label_16ccc0:
    if (ctx->pc == 0x16CCC0u) {
        ctx->pc = 0x16CCC4u;
        goto label_16ccc4;
    }
    ctx->pc = 0x16CCBCu;
    {
        const bool branch_taken_0x16ccbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x16ccbc) {
            ctx->pc = 0x16CE18u;
            goto label_16ce18;
        }
    }
    ctx->pc = 0x16CCC4u;
label_16ccc4:
    // 0x16ccc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16ccc8:
    // 0x16ccc8: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_16cccc:
    if (ctx->pc == 0x16CCCCu) {
        ctx->pc = 0x16CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCC8u;
        // 0x16cccc: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCD0u;
        goto label_16ccd0;
    }
    ctx->pc = 0x16CCC8u;
    {
        const bool branch_taken_0x16ccc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCC8u;
        // 0x16cccc: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccc8) {
            ctx->pc = 0x16CCDCu;
            goto label_16ccdc;
        }
    }
    ctx->pc = 0x16CCD0u;
label_16ccd0:
    // 0x16ccd0: 0x10000052  b           . + 4 + (0x52 << 2)
label_16ccd4:
    if (ctx->pc == 0x16CCD4u) {
        ctx->pc = 0x16CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCD0u;
        // 0x16ccd4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCD8u;
        goto label_16ccd8;
    }
    ctx->pc = 0x16CCD0u;
    {
        const bool branch_taken_0x16ccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCD0u;
        // 0x16ccd4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccd0) {
            ctx->pc = 0x16CE1Cu;
            goto label_16ce1c;
        }
    }
    ctx->pc = 0x16CCD8u;
label_16ccd8:
    // 0x16ccd8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16ccdc:
    // 0x16ccdc: 0x1283000b  beq         $s4, $v1, . + 4 + (0xB << 2)
label_16cce0:
    if (ctx->pc == 0x16CCE0u) {
        ctx->pc = 0x16CCE4u;
        goto label_16cce4;
    }
    ctx->pc = 0x16CCDCu;
    {
        const bool branch_taken_0x16ccdc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ccdc) {
            ctx->pc = 0x16CD0Cu;
            goto label_16cd0c;
        }
    }
    ctx->pc = 0x16CCE4u;
label_16cce4:
    // 0x16cce4: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x16cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
label_16cce8:
    // 0x16cce8: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x16cce8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_16ccec:
    // 0x16ccec: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_16ccf0:
    if (ctx->pc == 0x16CCF0u) {
        ctx->pc = 0x16CCF4u;
        goto label_16ccf4;
    }
    ctx->pc = 0x16CCECu;
    {
        const bool branch_taken_0x16ccec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ccec) {
            ctx->pc = 0x16CD0Cu;
            goto label_16cd0c;
        }
    }
    ctx->pc = 0x16CCF4u;
label_16ccf4:
    // 0x16ccf4: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x16ccf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16ccf8:
    // 0x16ccf8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_16ccfc:
    if (ctx->pc == 0x16CCFCu) {
        ctx->pc = 0x16CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCF8u;
        // 0x16ccfc: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD00u;
        goto label_16cd00;
    }
    ctx->pc = 0x16CCF8u;
    {
        const bool branch_taken_0x16ccf8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCF8u;
        // 0x16ccfc: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccf8) {
            ctx->pc = 0x16CD08u;
            goto label_16cd08;
        }
    }
    ctx->pc = 0x16CD00u;
label_16cd00:
    // 0x16cd00: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x16cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16cd04:
    // 0x16cd04: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x16cd04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_16cd08:
    // 0x16cd08: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x16cd08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16cd0c:
    // 0x16cd0c: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16cd10:
    // 0x16cd10: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_16cd14:
    if (ctx->pc == 0x16CD14u) {
        ctx->pc = 0x16CD18u;
        goto label_16cd18;
    }
    ctx->pc = 0x16CD10u;
    {
        const bool branch_taken_0x16cd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cd10) {
            ctx->pc = 0x16CE18u;
            goto label_16ce18;
        }
    }
    ctx->pc = 0x16CD18u;
label_16cd18:
    // 0x16cd18: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cd1c:
    // 0x16cd1c: 0x24c4003c  addiu       $a0, $a2, 0x3C
    ctx->pc = 0x16cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
label_16cd20:
    // 0x16cd20: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16cd20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16cd24:
    // 0x16cd24: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16cd28:
    if (ctx->pc == 0x16CD28u) {
        ctx->pc = 0x16CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD24u;
        // 0x16cd28: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD2Cu;
        goto label_16cd2c;
    }
    ctx->pc = 0x16CD24u;
    {
        const bool branch_taken_0x16cd24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD24u;
        // 0x16cd28: 0x309000ff  andi        $s0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd24) {
            ctx->pc = 0x16CD50u;
            goto label_16cd50;
        }
    }
    ctx->pc = 0x16CD2Cu;
label_16cd2c:
    // 0x16cd2c: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cd30:
    // 0x16cd30: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16cd30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16cd34:
    // 0x16cd34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16cd38:
    // 0x16cd38: 0xc08d61c  jal         func_235870
label_16cd3c:
    if (ctx->pc == 0x16CD3Cu) {
        ctx->pc = 0x16CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD38u;
        // 0x16cd3c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CD40u;
        goto label_16cd40;
    }
    ctx->pc = 0x16CD38u;
    SET_GPR_U32(ctx, 31, 0x16CD40u);
    ctx->pc = 0x16CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD38u;
    // 0x16cd3c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16CD40u;
label_16cd40:
    // 0x16cd40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16cd44:
    // 0x16cd44: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16cd48:
    if (ctx->pc == 0x16CD48u) {
        ctx->pc = 0x16CD4Cu;
        goto label_16cd4c;
    }
    ctx->pc = 0x16CD44u;
    {
        const bool branch_taken_0x16cd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cd44) {
            ctx->pc = 0x16CD2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cd2c;
        }
    }
    ctx->pc = 0x16CD4Cu;
label_16cd4c:
    // 0x16cd4c: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16cd50:
    // 0x16cd50: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x16cd50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16cd54:
    // 0x16cd54: 0x133380  sll         $a2, $s3, 14
    ctx->pc = 0x16cd54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 14));
label_16cd58:
    // 0x16cd58: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_16cd5c:
    // 0x16cd5c: 0x1129c0  sll         $a1, $s1, 7
    ctx->pc = 0x16cd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_16cd60:
    // 0x16cd60: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x16cd60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_16cd64:
    // 0x16cd64: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x16cd64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_16cd68:
    // 0x16cd68: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x16cd68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_16cd6c:
    // 0x16cd6c: 0x149600  sll         $s2, $s4, 24
    ctx->pc = 0x16cd6cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
label_16cd70:
    // 0x16cd70: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x16cd70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_16cd74:
    // 0x16cd74: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_16cd78:
    // 0x16cd78: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cd7c:
    // 0x16cd7c: 0x2431825  or          $v1, $s2, $v1
    ctx->pc = 0x16cd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_16cd80:
    // 0x16cd80: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x16cd80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_16cd84:
    // 0x16cd84: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16cd88:
    // 0x16cd88: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16cd8c:
    // 0x16cd8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16cd90:
    // 0x16cd90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16cd94:
    // 0x16cd94: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16cd98:
    // 0x16cd98: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cd9c:
    // 0x16cd9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16cda0:
    // 0x16cda0: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16cda4:
    // 0x16cda4: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cda8:
    // 0x16cda8: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16cda8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16cdac:
    // 0x16cdac: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16cdb0:
    if (ctx->pc == 0x16CDB0u) {
        ctx->pc = 0x16CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDACu;
        // 0x16cdb0: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CDB4u;
        goto label_16cdb4;
    }
    ctx->pc = 0x16CDACu;
    {
        const bool branch_taken_0x16cdac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDACu;
        // 0x16cdb0: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cdac) {
            ctx->pc = 0x16CDDCu;
            goto label_16cddc;
        }
    }
    ctx->pc = 0x16CDB4u;
label_16cdb4:
    // 0x16cdb4: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16cdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cdb8:
    // 0x16cdb8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16cdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16cdbc:
    // 0x16cdbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16cdc0:
    // 0x16cdc0: 0xc08d61c  jal         func_235870
label_16cdc4:
    if (ctx->pc == 0x16CDC4u) {
        ctx->pc = 0x16CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDC0u;
        // 0x16cdc4: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CDC8u;
        goto label_16cdc8;
    }
    ctx->pc = 0x16CDC0u;
    SET_GPR_U32(ctx, 31, 0x16CDC8u);
    ctx->pc = 0x16CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CDC0u;
    // 0x16cdc4: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16CDC8u;
label_16cdc8:
    // 0x16cdc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16cdcc:
    // 0x16cdcc: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16cdd0:
    if (ctx->pc == 0x16CDD0u) {
        ctx->pc = 0x16CDD4u;
        goto label_16cdd4;
    }
    ctx->pc = 0x16CDCCu;
    {
        const bool branch_taken_0x16cdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cdcc) {
            ctx->pc = 0x16CDB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cdb4;
        }
    }
    ctx->pc = 0x16CDD4u;
label_16cdd4:
    // 0x16cdd4: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16cdd8:
    // 0x16cdd8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_16cddc:
    // 0x16cddc: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x16cddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16cde0:
    // 0x16cde0: 0x2432825  or          $a1, $s2, $v1
    ctx->pc = 0x16cde0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_16cde4:
    // 0x16cde4: 0x41b80  sll         $v1, $a0, 14
    ctx->pc = 0x16cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
label_16cde8:
    // 0x16cde8: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cdec:
    // 0x16cdec: 0x34633f80  ori         $v1, $v1, 0x3F80
    ctx->pc = 0x16cdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16256);
label_16cdf0:
    // 0x16cdf0: 0x713025  or          $a2, $v1, $s1
    ctx->pc = 0x16cdf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_16cdf4:
    // 0x16cdf4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16cdf8:
    // 0x16cdf8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x16cdf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_16cdfc:
    // 0x16cdfc: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16ce00:
    // 0x16ce00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16ce04:
    // 0x16ce04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16ce08:
    // 0x16ce08: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16ce0c:
    // 0x16ce0c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ce10:
    // 0x16ce10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16ce14:
    // 0x16ce14: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16ce18:
    // 0x16ce18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16ce18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16ce1c:
    // 0x16ce1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16ce1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16ce20:
    // 0x16ce20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16ce20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16ce24:
    // 0x16ce24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16ce24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16ce28:
    // 0x16ce28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16ce28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16ce2c:
    // 0x16ce2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ce2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16ce30:
    // 0x16ce30: 0x3e00008  jr          $ra
label_16ce34:
    if (ctx->pc == 0x16CE34u) {
        ctx->pc = 0x16CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE30u;
        // 0x16ce34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CE38u;
        goto label_16ce38;
    }
    ctx->pc = 0x16CE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE30u;
        // 0x16ce34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CE38u;
label_16ce38:
    // 0x16ce38: 0x0  nop
    ctx->pc = 0x16ce38u;
    // NOP
label_16ce3c:
    // 0x16ce3c: 0x0  nop
    ctx->pc = 0x16ce3cu;
    // NOP
label_16ce40:
    // 0x16ce40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_16ce44:
    // 0x16ce44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16ce48:
    // 0x16ce48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16ce4c:
    // 0x16ce4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16ce50:
    // 0x16ce50: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x16ce50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16ce54:
    // 0x16ce54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16ce54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16ce58:
    // 0x16ce58: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x16ce58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16ce5c:
    // 0x16ce5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16ce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16ce60:
    // 0x16ce60: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16ce60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16ce64:
    // 0x16ce64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16ce68:
    // 0x16ce68: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x16ce68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_16ce6c:
    // 0x16ce6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16ce70:
    // 0x16ce70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16ce70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16ce74:
    // 0x16ce74: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16ce78:
    // 0x16ce78: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
label_16ce7c:
    if (ctx->pc == 0x16CE7Cu) {
        ctx->pc = 0x16CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE78u;
        // 0x16ce7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CE80u;
        goto label_16ce80;
    }
    ctx->pc = 0x16CE78u;
    {
        const bool branch_taken_0x16ce78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE78u;
        // 0x16ce7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce78) {
            ctx->pc = 0x16D050u;
            { ctx->pc = 0x16d050; return; }
        }
    }
    ctx->pc = 0x16CE80u;
label_16ce80:
    // 0x16ce80: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ce84:
    // 0x16ce84: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16ce84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16ce88:
    // 0x16ce88: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16ce8c:
    if (ctx->pc == 0x16CE8Cu) {
        ctx->pc = 0x16CE90u;
        goto label_16ce90;
    }
    ctx->pc = 0x16CE88u;
    {
        const bool branch_taken_0x16ce88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ce88) {
            ctx->pc = 0x16CEB4u;
            goto label_16ceb4;
        }
    }
    ctx->pc = 0x16CE90u;
label_16ce90:
    // 0x16ce90: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16ce90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ce94:
    // 0x16ce94: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16ce94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16ce98:
    // 0x16ce98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16ce9c:
    // 0x16ce9c: 0xc08d61c  jal         func_235870
label_16cea0:
    if (ctx->pc == 0x16CEA0u) {
        ctx->pc = 0x16CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE9Cu;
        // 0x16cea0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CEA4u;
        goto label_16cea4;
    }
    ctx->pc = 0x16CE9Cu;
    SET_GPR_U32(ctx, 31, 0x16CEA4u);
    ctx->pc = 0x16CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE9Cu;
    // 0x16cea0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16CEA4u;
label_16cea4:
    // 0x16cea4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16cea8:
    // 0x16cea8: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16ceac:
    if (ctx->pc == 0x16CEACu) {
        ctx->pc = 0x16CEB0u;
        goto label_16ceb0;
    }
    ctx->pc = 0x16CEA8u;
    {
        const bool branch_taken_0x16cea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cea8) {
            ctx->pc = 0x16CE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ce90;
        }
    }
    ctx->pc = 0x16CEB0u;
label_16ceb0:
    // 0x16ceb0: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16ceb4:
    // 0x16ceb4: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x16ceb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16ceb8:
    // 0x16ceb8: 0x152b80  sll         $a1, $s5, 14
    ctx->pc = 0x16ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 14));
label_16cebc:
    // 0x16cebc: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x16cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_16cec0:
    // 0x16cec0: 0x1121c0  sll         $a0, $s1, 7
    ctx->pc = 0x16cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_16cec4:
    // 0x16cec4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16cec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16cec8:
    // 0x16cec8: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x16cec8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_16cecc:
    // 0x16cecc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x16ceccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_16ced0:
    // 0x16ced0: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x16ced0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
label_16ced4:
    // 0x16ced4: 0x2642825  or          $a1, $s3, $a0
    ctx->pc = 0x16ced4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
label_16ced8:
    // 0x16ced8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_16cedc:
    // 0x16cedc: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cee0:
    // 0x16cee0: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x16cee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16cee4:
    // 0x16cee4: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x16cee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_16cee8:
    // 0x16cee8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16ceec:
    // 0x16ceec: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16cef0:
    // 0x16cef0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16cef4:
    // 0x16cef4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16cef8:
    // 0x16cef8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16cefc:
    // 0x16cefc: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cf00:
    // 0x16cf00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16cf04:
    // 0x16cf04: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16cf08:
    // 0x16cf08: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cf0c:
    // 0x16cf0c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16cf0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16cf10:
    // 0x16cf10: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16cf14:
    if (ctx->pc == 0x16CF14u) {
        ctx->pc = 0x16CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF10u;
        // 0x16cf14: 0x328400ff  andi        $a0, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF18u;
        goto label_16cf18;
    }
    ctx->pc = 0x16CF10u;
    {
        const bool branch_taken_0x16cf10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF10u;
        // 0x16cf14: 0x328400ff  andi        $a0, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf10) {
            ctx->pc = 0x16CF40u;
            goto label_16cf40;
        }
    }
    ctx->pc = 0x16CF18u;
label_16cf18:
    // 0x16cf18: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cf1c:
    // 0x16cf1c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16cf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16cf20:
    // 0x16cf20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16cf24:
    // 0x16cf24: 0xc08d61c  jal         func_235870
label_16cf28:
    if (ctx->pc == 0x16CF28u) {
        ctx->pc = 0x16CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF24u;
        // 0x16cf28: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF2Cu;
        goto label_16cf2c;
    }
    ctx->pc = 0x16CF24u;
    SET_GPR_U32(ctx, 31, 0x16CF2Cu);
    ctx->pc = 0x16CF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF24u;
    // 0x16cf28: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16CF2Cu;
label_16cf2c:
    // 0x16cf2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16cf30:
    // 0x16cf30: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16cf34:
    if (ctx->pc == 0x16CF34u) {
        ctx->pc = 0x16CF38u;
        goto label_16cf38;
    }
    ctx->pc = 0x16CF30u;
    {
        const bool branch_taken_0x16cf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cf30) {
            ctx->pc = 0x16CF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cf18;
        }
    }
    ctx->pc = 0x16CF38u;
label_16cf38:
    // 0x16cf38: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16cf3c:
    // 0x16cf3c: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x16cf3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_16cf40:
    // 0x16cf40: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x16cf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_16cf44:
    // 0x16cf44: 0x42380  sll         $a0, $a0, 14
    ctx->pc = 0x16cf44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
label_16cf48:
    // 0x16cf48: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x16cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_16cf4c:
    // 0x16cf4c: 0x839025  or          $s2, $a0, $v1
    ctx->pc = 0x16cf4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16cf50:
    // 0x16cf50: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cf54:
    // 0x16cf54: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_16cf58:
    // 0x16cf58: 0x2328825  or          $s1, $s1, $s2
    ctx->pc = 0x16cf58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
label_16cf5c:
    // 0x16cf5c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x16cf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16cf60:
    // 0x16cf60: 0x712825  or          $a1, $v1, $s1
    ctx->pc = 0x16cf60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_16cf64:
    // 0x16cf64: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16cf68:
    // 0x16cf68: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16cf6c:
    // 0x16cf6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16cf70:
    // 0x16cf70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16cf74:
    // 0x16cf74: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16cf74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16cf78:
    // 0x16cf78: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cf7c:
    // 0x16cf7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16cf80:
    // 0x16cf80: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16cf84:
    // 0x16cf84: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cf88:
    // 0x16cf88: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16cf88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16cf8c:
    // 0x16cf8c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16cf90:
    if (ctx->pc == 0x16CF90u) {
        ctx->pc = 0x16CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF8Cu;
        // 0x16cf90: 0x3c046000  lui         $a0, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CF94u;
        goto label_16cf94;
    }
    ctx->pc = 0x16CF8Cu;
    {
        const bool branch_taken_0x16cf8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF8Cu;
        // 0x16cf90: 0x3c046000  lui         $a0, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf8c) {
            ctx->pc = 0x16CFBCu;
            goto label_16cfbc;
        }
    }
    ctx->pc = 0x16CF94u;
label_16cf94:
    // 0x16cf94: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16cf94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cf98:
    // 0x16cf98: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16cf98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16cf9c:
    // 0x16cf9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16cfa0:
    // 0x16cfa0: 0xc08d61c  jal         func_235870
label_16cfa4:
    if (ctx->pc == 0x16CFA4u) {
        ctx->pc = 0x16CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFA0u;
        // 0x16cfa4: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CFA8u;
        goto label_16cfa8;
    }
    ctx->pc = 0x16CFA0u;
    SET_GPR_U32(ctx, 31, 0x16CFA8u);
    ctx->pc = 0x16CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CFA0u;
    // 0x16cfa4: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16CFA8u;
label_16cfa8:
    // 0x16cfa8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16cfac:
    // 0x16cfac: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16cfb0:
    if (ctx->pc == 0x16CFB0u) {
        ctx->pc = 0x16CFB4u;
        goto label_16cfb4;
    }
    ctx->pc = 0x16CFACu;
    {
        const bool branch_taken_0x16cfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16cfac) {
            ctx->pc = 0x16CF94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16cf94;
        }
    }
    ctx->pc = 0x16CFB4u;
label_16cfb4:
    // 0x16cfb4: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16cfb8:
    // 0x16cfb8: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x16cfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
label_16cfbc:
    // 0x16cfbc: 0x2721825  or          $v1, $s3, $s2
    ctx->pc = 0x16cfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
label_16cfc0:
    // 0x16cfc0: 0x2042825  or          $a1, $s0, $a0
    ctx->pc = 0x16cfc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_16cfc4:
    // 0x16cfc4: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cfc8:
    // 0x16cfc8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16cfc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16cfcc:
    // 0x16cfcc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16cfd0:
    // 0x16cfd0: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16cfd4:
    // 0x16cfd4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16cfd8:
    // 0x16cfd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16cfdc:
    // 0x16cfdc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16cfe0:
    // 0x16cfe0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cfe4:
    // 0x16cfe4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16cfe8:
    // 0x16cfe8: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16cfec:
    // 0x16cfec: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16cff0:
    // 0x16cff0: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16cff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16cff4:
    // 0x16cff4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16cff8:
    if (ctx->pc == 0x16CFF8u) {
        ctx->pc = 0x16CFFCu;
        goto label_16cffc;
    }
    ctx->pc = 0x16CFF4u;
    {
        const bool branch_taken_0x16cff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cff4) {
            ctx->pc = 0x16D020u;
            { ctx->pc = 0x16d020; return; }
        }
    }
    ctx->pc = 0x16CFFCu;
label_16cffc:
    // 0x16cffc: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    ctx->pc = 0x16d000u;
    return;
}
