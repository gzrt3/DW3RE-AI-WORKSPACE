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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part331(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23c838u: goto label_23c838;
        case 0x23c83cu: goto label_23c83c;
        case 0x23c840u: goto label_23c840;
        case 0x23c844u: goto label_23c844;
        case 0x23c848u: goto label_23c848;
        case 0x23c84cu: goto label_23c84c;
        case 0x23c850u: goto label_23c850;
        case 0x23c854u: goto label_23c854;
        case 0x23c858u: goto label_23c858;
        case 0x23c85cu: goto label_23c85c;
        case 0x23c860u: goto label_23c860;
        case 0x23c864u: goto label_23c864;
        case 0x23c868u: goto label_23c868;
        case 0x23c86cu: goto label_23c86c;
        case 0x23c870u: goto label_23c870;
        case 0x23c874u: goto label_23c874;
        case 0x23c878u: goto label_23c878;
        case 0x23c87cu: goto label_23c87c;
        case 0x23c880u: goto label_23c880;
        case 0x23c884u: goto label_23c884;
        case 0x23c888u: goto label_23c888;
        case 0x23c88cu: goto label_23c88c;
        case 0x23c890u: goto label_23c890;
        case 0x23c894u: goto label_23c894;
        case 0x23c898u: goto label_23c898;
        case 0x23c89cu: goto label_23c89c;
        case 0x23c8a0u: goto label_23c8a0;
        case 0x23c8a4u: goto label_23c8a4;
        case 0x23c8a8u: goto label_23c8a8;
        case 0x23c8acu: goto label_23c8ac;
        case 0x23c8b0u: goto label_23c8b0;
        case 0x23c8b4u: goto label_23c8b4;
        case 0x23c8b8u: goto label_23c8b8;
        case 0x23c8bcu: goto label_23c8bc;
        case 0x23c8c0u: goto label_23c8c0;
        case 0x23c8c4u: goto label_23c8c4;
        case 0x23c8c8u: goto label_23c8c8;
        case 0x23c8ccu: goto label_23c8cc;
        case 0x23c8d0u: goto label_23c8d0;
        case 0x23c8d4u: goto label_23c8d4;
        case 0x23c8d8u: goto label_23c8d8;
        case 0x23c8dcu: goto label_23c8dc;
        case 0x23c8e0u: goto label_23c8e0;
        case 0x23c8e4u: goto label_23c8e4;
        case 0x23c8e8u: goto label_23c8e8;
        case 0x23c8ecu: goto label_23c8ec;
        case 0x23c8f0u: goto label_23c8f0;
        case 0x23c8f4u: goto label_23c8f4;
        case 0x23c8f8u: goto label_23c8f8;
        case 0x23c8fcu: goto label_23c8fc;
        case 0x23c900u: goto label_23c900;
        case 0x23c904u: goto label_23c904;
        case 0x23c908u: goto label_23c908;
        case 0x23c90cu: goto label_23c90c;
        case 0x23c910u: goto label_23c910;
        case 0x23c914u: goto label_23c914;
        case 0x23c918u: goto label_23c918;
        case 0x23c91cu: goto label_23c91c;
        case 0x23c920u: goto label_23c920;
        case 0x23c924u: goto label_23c924;
        case 0x23c928u: goto label_23c928;
        case 0x23c92cu: goto label_23c92c;
        case 0x23c930u: goto label_23c930;
        case 0x23c934u: goto label_23c934;
        case 0x23c938u: goto label_23c938;
        case 0x23c93cu: goto label_23c93c;
        case 0x23c940u: goto label_23c940;
        case 0x23c944u: goto label_23c944;
        case 0x23c948u: goto label_23c948;
        case 0x23c94cu: goto label_23c94c;
        case 0x23c950u: goto label_23c950;
        case 0x23c954u: goto label_23c954;
        case 0x23c958u: goto label_23c958;
        case 0x23c95cu: goto label_23c95c;
        case 0x23c960u: goto label_23c960;
        case 0x23c964u: goto label_23c964;
        case 0x23c968u: goto label_23c968;
        case 0x23c96cu: goto label_23c96c;
        case 0x23c970u: goto label_23c970;
        case 0x23c974u: goto label_23c974;
        case 0x23c978u: goto label_23c978;
        case 0x23c97cu: goto label_23c97c;
        case 0x23c980u: goto label_23c980;
        case 0x23c984u: goto label_23c984;
        case 0x23c988u: goto label_23c988;
        case 0x23c98cu: goto label_23c98c;
        case 0x23c990u: goto label_23c990;
        case 0x23c994u: goto label_23c994;
        case 0x23c998u: goto label_23c998;
        case 0x23c99cu: goto label_23c99c;
        case 0x23c9a0u: goto label_23c9a0;
        case 0x23c9a4u: goto label_23c9a4;
        case 0x23c9a8u: goto label_23c9a8;
        case 0x23c9acu: goto label_23c9ac;
        case 0x23c9b0u: goto label_23c9b0;
        case 0x23c9b4u: goto label_23c9b4;
        case 0x23c9b8u: goto label_23c9b8;
        case 0x23c9bcu: goto label_23c9bc;
        case 0x23c9c0u: goto label_23c9c0;
        case 0x23c9c4u: goto label_23c9c4;
        case 0x23c9c8u: goto label_23c9c8;
        case 0x23c9ccu: goto label_23c9cc;
        case 0x23c9d0u: goto label_23c9d0;
        case 0x23c9d4u: goto label_23c9d4;
        case 0x23c9d8u: goto label_23c9d8;
        case 0x23c9dcu: goto label_23c9dc;
        case 0x23c9e0u: goto label_23c9e0;
        case 0x23c9e4u: goto label_23c9e4;
        case 0x23c9e8u: goto label_23c9e8;
        case 0x23c9ecu: goto label_23c9ec;
        case 0x23c9f0u: goto label_23c9f0;
        case 0x23c9f4u: goto label_23c9f4;
        case 0x23c9f8u: goto label_23c9f8;
        case 0x23c9fcu: goto label_23c9fc;
        case 0x23ca00u: goto label_23ca00;
        case 0x23ca04u: goto label_23ca04;
        case 0x23ca08u: goto label_23ca08;
        case 0x23ca0cu: goto label_23ca0c;
        case 0x23ca10u: goto label_23ca10;
        case 0x23ca14u: goto label_23ca14;
        case 0x23ca18u: goto label_23ca18;
        case 0x23ca1cu: goto label_23ca1c;
        case 0x23ca20u: goto label_23ca20;
        case 0x23ca24u: goto label_23ca24;
        case 0x23ca28u: goto label_23ca28;
        case 0x23ca2cu: goto label_23ca2c;
        case 0x23ca30u: goto label_23ca30;
        case 0x23ca34u: goto label_23ca34;
        case 0x23ca38u: goto label_23ca38;
        case 0x23ca3cu: goto label_23ca3c;
        case 0x23ca40u: goto label_23ca40;
        case 0x23ca44u: goto label_23ca44;
        case 0x23ca48u: goto label_23ca48;
        case 0x23ca4cu: goto label_23ca4c;
        case 0x23ca50u: goto label_23ca50;
        case 0x23ca54u: goto label_23ca54;
        case 0x23ca58u: goto label_23ca58;
        case 0x23ca5cu: goto label_23ca5c;
        case 0x23ca60u: goto label_23ca60;
        case 0x23ca64u: goto label_23ca64;
        case 0x23ca68u: goto label_23ca68;
        case 0x23ca6cu: goto label_23ca6c;
        case 0x23ca70u: goto label_23ca70;
        case 0x23ca74u: goto label_23ca74;
        case 0x23ca78u: goto label_23ca78;
        case 0x23ca7cu: goto label_23ca7c;
        case 0x23ca80u: goto label_23ca80;
        case 0x23ca84u: goto label_23ca84;
        case 0x23ca88u: goto label_23ca88;
        case 0x23ca8cu: goto label_23ca8c;
        case 0x23ca90u: goto label_23ca90;
        case 0x23ca94u: goto label_23ca94;
        case 0x23ca98u: goto label_23ca98;
        case 0x23ca9cu: goto label_23ca9c;
        case 0x23caa0u: goto label_23caa0;
        case 0x23caa4u: goto label_23caa4;
        case 0x23caa8u: goto label_23caa8;
        case 0x23caacu: goto label_23caac;
        case 0x23cab0u: goto label_23cab0;
        case 0x23cab4u: goto label_23cab4;
        case 0x23cab8u: goto label_23cab8;
        case 0x23cabcu: goto label_23cabc;
        case 0x23cac0u: goto label_23cac0;
        case 0x23cac4u: goto label_23cac4;
        case 0x23cac8u: goto label_23cac8;
        case 0x23caccu: goto label_23cacc;
        case 0x23cad0u: goto label_23cad0;
        case 0x23cad4u: goto label_23cad4;
        case 0x23cad8u: goto label_23cad8;
        case 0x23cadcu: goto label_23cadc;
        case 0x23cae0u: goto label_23cae0;
        case 0x23cae4u: goto label_23cae4;
        case 0x23cae8u: goto label_23cae8;
        case 0x23caecu: goto label_23caec;
        case 0x23caf0u: goto label_23caf0;
        case 0x23caf4u: goto label_23caf4;
        case 0x23caf8u: goto label_23caf8;
        case 0x23cafcu: goto label_23cafc;
        case 0x23cb00u: goto label_23cb00;
        case 0x23cb04u: goto label_23cb04;
        case 0x23cb08u: goto label_23cb08;
        case 0x23cb0cu: goto label_23cb0c;
        case 0x23cb10u: goto label_23cb10;
        case 0x23cb14u: goto label_23cb14;
        case 0x23cb18u: goto label_23cb18;
        case 0x23cb1cu: goto label_23cb1c;
        case 0x23cb20u: goto label_23cb20;
        case 0x23cb24u: goto label_23cb24;
        case 0x23cb28u: goto label_23cb28;
        case 0x23cb2cu: goto label_23cb2c;
        case 0x23cb30u: goto label_23cb30;
        case 0x23cb34u: goto label_23cb34;
        case 0x23cb38u: goto label_23cb38;
        case 0x23cb3cu: goto label_23cb3c;
        case 0x23cb40u: goto label_23cb40;
        case 0x23cb44u: goto label_23cb44;
        case 0x23cb48u: goto label_23cb48;
        case 0x23cb4cu: goto label_23cb4c;
        case 0x23cb50u: goto label_23cb50;
        case 0x23cb54u: goto label_23cb54;
        case 0x23cb58u: goto label_23cb58;
        case 0x23cb5cu: goto label_23cb5c;
        case 0x23cb60u: goto label_23cb60;
        case 0x23cb64u: goto label_23cb64;
        case 0x23cb68u: goto label_23cb68;
        case 0x23cb6cu: goto label_23cb6c;
        case 0x23cb70u: goto label_23cb70;
        case 0x23cb74u: goto label_23cb74;
        case 0x23cb78u: goto label_23cb78;
        case 0x23cb7cu: goto label_23cb7c;
        case 0x23cb80u: goto label_23cb80;
        case 0x23cb84u: goto label_23cb84;
        case 0x23cb88u: goto label_23cb88;
        case 0x23cb8cu: goto label_23cb8c;
        case 0x23cb90u: goto label_23cb90;
        case 0x23cb94u: goto label_23cb94;
        case 0x23cb98u: goto label_23cb98;
        case 0x23cb9cu: goto label_23cb9c;
        case 0x23cba0u: goto label_23cba0;
        case 0x23cba4u: goto label_23cba4;
        case 0x23cba8u: goto label_23cba8;
        case 0x23cbacu: goto label_23cbac;
        case 0x23cbb0u: goto label_23cbb0;
        case 0x23cbb4u: goto label_23cbb4;
        case 0x23cbb8u: goto label_23cbb8;
        case 0x23cbbcu: goto label_23cbbc;
        case 0x23cbc0u: goto label_23cbc0;
        case 0x23cbc4u: goto label_23cbc4;
        case 0x23cbc8u: goto label_23cbc8;
        case 0x23cbccu: goto label_23cbcc;
        case 0x23cbd0u: goto label_23cbd0;
        case 0x23cbd4u: goto label_23cbd4;
        case 0x23cbd8u: goto label_23cbd8;
        case 0x23cbdcu: goto label_23cbdc;
        case 0x23cbe0u: goto label_23cbe0;
        case 0x23cbe4u: goto label_23cbe4;
        case 0x23cbe8u: goto label_23cbe8;
        case 0x23cbecu: goto label_23cbec;
        case 0x23cbf0u: goto label_23cbf0;
        case 0x23cbf4u: goto label_23cbf4;
        case 0x23cbf8u: goto label_23cbf8;
        case 0x23cbfcu: goto label_23cbfc;
        case 0x23cc00u: goto label_23cc00;
        case 0x23cc04u: goto label_23cc04;
        case 0x23cc08u: goto label_23cc08;
        case 0x23cc0cu: goto label_23cc0c;
        case 0x23cc10u: goto label_23cc10;
        case 0x23cc14u: goto label_23cc14;
        case 0x23cc18u: goto label_23cc18;
        case 0x23cc1cu: goto label_23cc1c;
        case 0x23cc20u: goto label_23cc20;
        case 0x23cc24u: goto label_23cc24;
        case 0x23cc28u: goto label_23cc28;
        case 0x23cc2cu: goto label_23cc2c;
        case 0x23cc30u: goto label_23cc30;
        case 0x23cc34u: goto label_23cc34;
        case 0x23cc38u: goto label_23cc38;
        case 0x23cc3cu: goto label_23cc3c;
        case 0x23cc40u: goto label_23cc40;
        case 0x23cc44u: goto label_23cc44;
        case 0x23cc48u: goto label_23cc48;
        case 0x23cc4cu: goto label_23cc4c;
        case 0x23cc50u: goto label_23cc50;
        case 0x23cc54u: goto label_23cc54;
        case 0x23cc58u: goto label_23cc58;
        case 0x23cc5cu: goto label_23cc5c;
        case 0x23cc60u: goto label_23cc60;
        case 0x23cc64u: goto label_23cc64;
        case 0x23cc68u: goto label_23cc68;
        case 0x23cc6cu: goto label_23cc6c;
        case 0x23cc70u: goto label_23cc70;
        case 0x23cc74u: goto label_23cc74;
        case 0x23cc78u: goto label_23cc78;
        case 0x23cc7cu: goto label_23cc7c;
        case 0x23cc80u: goto label_23cc80;
        case 0x23cc84u: goto label_23cc84;
        case 0x23cc88u: goto label_23cc88;
        case 0x23cc8cu: goto label_23cc8c;
        case 0x23cc90u: goto label_23cc90;
        case 0x23cc94u: goto label_23cc94;
        case 0x23cc98u: goto label_23cc98;
        case 0x23cc9cu: goto label_23cc9c;
        case 0x23cca0u: goto label_23cca0;
        case 0x23cca4u: goto label_23cca4;
        case 0x23cca8u: goto label_23cca8;
        case 0x23ccacu: goto label_23ccac;
        case 0x23ccb0u: goto label_23ccb0;
        case 0x23ccb4u: goto label_23ccb4;
        case 0x23ccb8u: goto label_23ccb8;
        case 0x23ccbcu: goto label_23ccbc;
        case 0x23ccc0u: goto label_23ccc0;
        case 0x23ccc4u: goto label_23ccc4;
        case 0x23ccc8u: goto label_23ccc8;
        case 0x23ccccu: goto label_23cccc;
        case 0x23ccd0u: goto label_23ccd0;
        case 0x23ccd4u: goto label_23ccd4;
        case 0x23ccd8u: goto label_23ccd8;
        case 0x23ccdcu: goto label_23ccdc;
        case 0x23cce0u: goto label_23cce0;
        case 0x23cce4u: goto label_23cce4;
        case 0x23cce8u: goto label_23cce8;
        case 0x23ccecu: goto label_23ccec;
        case 0x23ccf0u: goto label_23ccf0;
        case 0x23ccf4u: goto label_23ccf4;
        case 0x23ccf8u: goto label_23ccf8;
        case 0x23ccfcu: goto label_23ccfc;
        case 0x23cd00u: goto label_23cd00;
        case 0x23cd04u: goto label_23cd04;
        case 0x23cd08u: goto label_23cd08;
        case 0x23cd0cu: goto label_23cd0c;
        case 0x23cd10u: goto label_23cd10;
        case 0x23cd14u: goto label_23cd14;
        case 0x23cd18u: goto label_23cd18;
        case 0x23cd1cu: goto label_23cd1c;
        case 0x23cd20u: goto label_23cd20;
        case 0x23cd24u: goto label_23cd24;
        case 0x23cd28u: goto label_23cd28;
        case 0x23cd2cu: goto label_23cd2c;
        case 0x23cd30u: goto label_23cd30;
        case 0x23cd34u: goto label_23cd34;
        case 0x23cd38u: goto label_23cd38;
        case 0x23cd3cu: goto label_23cd3c;
        case 0x23cd40u: goto label_23cd40;
        case 0x23cd44u: goto label_23cd44;
        case 0x23cd48u: goto label_23cd48;
        case 0x23cd4cu: goto label_23cd4c;
        case 0x23cd50u: goto label_23cd50;
        case 0x23cd54u: goto label_23cd54;
        case 0x23cd58u: goto label_23cd58;
        case 0x23cd5cu: goto label_23cd5c;
        case 0x23cd60u: goto label_23cd60;
        case 0x23cd64u: goto label_23cd64;
        case 0x23cd68u: goto label_23cd68;
        case 0x23cd6cu: goto label_23cd6c;
        case 0x23cd70u: goto label_23cd70;
        case 0x23cd74u: goto label_23cd74;
        case 0x23cd78u: goto label_23cd78;
        case 0x23cd7cu: goto label_23cd7c;
        case 0x23cd80u: goto label_23cd80;
        case 0x23cd84u: goto label_23cd84;
        case 0x23cd88u: goto label_23cd88;
        case 0x23cd8cu: goto label_23cd8c;
        case 0x23cd90u: goto label_23cd90;
        case 0x23cd94u: goto label_23cd94;
        case 0x23cd98u: goto label_23cd98;
        case 0x23cd9cu: goto label_23cd9c;
        case 0x23cda0u: goto label_23cda0;
        case 0x23cda4u: goto label_23cda4;
        case 0x23cda8u: goto label_23cda8;
        case 0x23cdacu: goto label_23cdac;
        case 0x23cdb0u: goto label_23cdb0;
        case 0x23cdb4u: goto label_23cdb4;
        case 0x23cdb8u: goto label_23cdb8;
        case 0x23cdbcu: goto label_23cdbc;
        case 0x23cdc0u: goto label_23cdc0;
        case 0x23cdc4u: goto label_23cdc4;
        case 0x23cdc8u: goto label_23cdc8;
        case 0x23cdccu: goto label_23cdcc;
        case 0x23cdd0u: goto label_23cdd0;
        case 0x23cdd4u: goto label_23cdd4;
        case 0x23cdd8u: goto label_23cdd8;
        case 0x23cddcu: goto label_23cddc;
        case 0x23cde0u: goto label_23cde0;
        case 0x23cde4u: goto label_23cde4;
        case 0x23cde8u: goto label_23cde8;
        case 0x23cdecu: goto label_23cdec;
        case 0x23cdf0u: goto label_23cdf0;
        case 0x23cdf4u: goto label_23cdf4;
        case 0x23cdf8u: goto label_23cdf8;
        case 0x23cdfcu: goto label_23cdfc;
        case 0x23ce00u: goto label_23ce00;
        case 0x23ce04u: goto label_23ce04;
        case 0x23ce08u: goto label_23ce08;
        case 0x23ce0cu: goto label_23ce0c;
        case 0x23ce10u: goto label_23ce10;
        case 0x23ce14u: goto label_23ce14;
        case 0x23ce18u: goto label_23ce18;
        case 0x23ce1cu: goto label_23ce1c;
        case 0x23ce20u: goto label_23ce20;
        case 0x23ce24u: goto label_23ce24;
        case 0x23ce28u: goto label_23ce28;
        case 0x23ce2cu: goto label_23ce2c;
        case 0x23ce30u: goto label_23ce30;
        case 0x23ce34u: goto label_23ce34;
        case 0x23ce38u: goto label_23ce38;
        case 0x23ce3cu: goto label_23ce3c;
        case 0x23ce40u: goto label_23ce40;
        case 0x23ce44u: goto label_23ce44;
        case 0x23ce48u: goto label_23ce48;
        case 0x23ce4cu: goto label_23ce4c;
        case 0x23ce50u: goto label_23ce50;
        case 0x23ce54u: goto label_23ce54;
        case 0x23ce58u: goto label_23ce58;
        case 0x23ce5cu: goto label_23ce5c;
        case 0x23ce60u: goto label_23ce60;
        case 0x23ce64u: goto label_23ce64;
        case 0x23ce68u: goto label_23ce68;
        case 0x23ce6cu: goto label_23ce6c;
        case 0x23ce70u: goto label_23ce70;
        case 0x23ce74u: goto label_23ce74;
        case 0x23ce78u: goto label_23ce78;
        case 0x23ce7cu: goto label_23ce7c;
        case 0x23ce80u: goto label_23ce80;
        case 0x23ce84u: goto label_23ce84;
        case 0x23ce88u: goto label_23ce88;
        case 0x23ce8cu: goto label_23ce8c;
        case 0x23ce90u: goto label_23ce90;
        case 0x23ce94u: goto label_23ce94;
        case 0x23ce98u: goto label_23ce98;
        case 0x23ce9cu: goto label_23ce9c;
        case 0x23cea0u: goto label_23cea0;
        case 0x23cea4u: goto label_23cea4;
        case 0x23cea8u: goto label_23cea8;
        case 0x23ceacu: goto label_23ceac;
        case 0x23ceb0u: goto label_23ceb0;
        case 0x23ceb4u: goto label_23ceb4;
        case 0x23ceb8u: goto label_23ceb8;
        case 0x23cebcu: goto label_23cebc;
        case 0x23cec0u: goto label_23cec0;
        case 0x23cec4u: goto label_23cec4;
        case 0x23cec8u: goto label_23cec8;
        case 0x23ceccu: goto label_23cecc;
        case 0x23ced0u: goto label_23ced0;
        case 0x23ced4u: goto label_23ced4;
        case 0x23ced8u: goto label_23ced8;
        case 0x23cedcu: goto label_23cedc;
        case 0x23cee0u: goto label_23cee0;
        case 0x23cee4u: goto label_23cee4;
        case 0x23cee8u: goto label_23cee8;
        case 0x23ceecu: goto label_23ceec;
        case 0x23cef0u: goto label_23cef0;
        case 0x23cef4u: goto label_23cef4;
        case 0x23cef8u: goto label_23cef8;
        case 0x23cefcu: goto label_23cefc;
        case 0x23cf00u: goto label_23cf00;
        case 0x23cf04u: goto label_23cf04;
        case 0x23cf08u: goto label_23cf08;
        case 0x23cf0cu: goto label_23cf0c;
        case 0x23cf10u: goto label_23cf10;
        case 0x23cf14u: goto label_23cf14;
        case 0x23cf18u: goto label_23cf18;
        case 0x23cf1cu: goto label_23cf1c;
        case 0x23cf20u: goto label_23cf20;
        case 0x23cf24u: goto label_23cf24;
        case 0x23cf28u: goto label_23cf28;
        case 0x23cf2cu: goto label_23cf2c;
        case 0x23cf30u: goto label_23cf30;
        case 0x23cf34u: goto label_23cf34;
        case 0x23cf38u: goto label_23cf38;
        case 0x23cf3cu: goto label_23cf3c;
        case 0x23cf40u: goto label_23cf40;
        case 0x23cf44u: goto label_23cf44;
        case 0x23cf48u: goto label_23cf48;
        case 0x23cf4cu: goto label_23cf4c;
        case 0x23cf50u: goto label_23cf50;
        case 0x23cf54u: goto label_23cf54;
        case 0x23cf58u: goto label_23cf58;
        case 0x23cf5cu: goto label_23cf5c;
        case 0x23cf60u: goto label_23cf60;
        case 0x23cf64u: goto label_23cf64;
        case 0x23cf68u: goto label_23cf68;
        case 0x23cf6cu: goto label_23cf6c;
        case 0x23cf70u: goto label_23cf70;
        case 0x23cf74u: goto label_23cf74;
        case 0x23cf78u: goto label_23cf78;
        case 0x23cf7cu: goto label_23cf7c;
        case 0x23cf80u: goto label_23cf80;
        case 0x23cf84u: goto label_23cf84;
        case 0x23cf88u: goto label_23cf88;
        case 0x23cf8cu: goto label_23cf8c;
        case 0x23cf90u: goto label_23cf90;
        case 0x23cf94u: goto label_23cf94;
        case 0x23cf98u: goto label_23cf98;
        case 0x23cf9cu: goto label_23cf9c;
        case 0x23cfa0u: goto label_23cfa0;
        case 0x23cfa4u: goto label_23cfa4;
        case 0x23cfa8u: goto label_23cfa8;
        case 0x23cfacu: goto label_23cfac;
        case 0x23cfb0u: goto label_23cfb0;
        case 0x23cfb4u: goto label_23cfb4;
        case 0x23cfb8u: goto label_23cfb8;
        case 0x23cfbcu: goto label_23cfbc;
        case 0x23cfc0u: goto label_23cfc0;
        case 0x23cfc4u: goto label_23cfc4;
        case 0x23cfc8u: goto label_23cfc8;
        case 0x23cfccu: goto label_23cfcc;
        case 0x23cfd0u: goto label_23cfd0;
        case 0x23cfd4u: goto label_23cfd4;
        case 0x23cfd8u: goto label_23cfd8;
        case 0x23cfdcu: goto label_23cfdc;
        case 0x23cfe0u: goto label_23cfe0;
        case 0x23cfe4u: goto label_23cfe4;
        case 0x23cfe8u: goto label_23cfe8;
        case 0x23cfecu: goto label_23cfec;
        case 0x23cff0u: goto label_23cff0;
        case 0x23cff4u: goto label_23cff4;
        case 0x23cff8u: goto label_23cff8;
        case 0x23cffcu: goto label_23cffc;
        case 0x23d000u: goto label_23d000;
        case 0x23d004u: goto label_23d004;
        default: return;
    }

label_23c838:
    // 0x23c838: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23c83c:
    // 0x23c83c: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23c83cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_23c840:
    // 0x23c840: 0x8c4d0818  lw          $t5, 0x818($v0)
    ctx->pc = 0x23c840u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23c844:
    // 0x23c844: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x23c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_23c848:
    // 0x23c848: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x23c848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_23c84c:
    // 0x23c84c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x23c84cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c850:
    // 0x23c850: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23c850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_23c854:
    // 0x23c854: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x23c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
label_23c858:
    // 0x23c858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23c858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23c85c:
    // 0x23c85c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x23c85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23c860:
    // 0x23c860: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_23c864:
    // 0x23c864: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x23c864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_23c868:
    // 0x23c868: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x23c868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_23c86c:
    // 0x23c86c: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x23c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
label_23c870:
    // 0x23c870: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x23c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
label_23c874:
    // 0x23c874: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x23c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
label_23c878:
    // 0x23c878: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x23c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
label_23c87c:
    // 0x23c87c: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x23c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
label_23c880:
    // 0x23c880: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x23c880u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_23c884:
    // 0x23c884: 0xe7ad0074  swc1        $f13, 0x74($sp)
    ctx->pc = 0x23c884u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_23c888:
    // 0x23c888: 0xe7ae0078  swc1        $f14, 0x78($sp)
    ctx->pc = 0x23c888u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_23c88c:
    // 0x23c88c: 0xe7af007c  swc1        $f15, 0x7C($sp)
    ctx->pc = 0x23c88cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_23c890:
    // 0x23c890: 0xe7b00080  swc1        $f16, 0x80($sp)
    ctx->pc = 0x23c890u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_23c894:
    // 0x23c894: 0xe7b10084  swc1        $f17, 0x84($sp)
    ctx->pc = 0x23c894u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_23c898:
    // 0x23c898: 0xe7b20088  swc1        $f18, 0x88($sp)
    ctx->pc = 0x23c898u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_23c89c:
    // 0x23c89c: 0xe7b3008c  swc1        $f19, 0x8C($sp)
    ctx->pc = 0x23c89cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_23c8a0:
    // 0x23c8a0: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x23c8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
label_23c8a4:
    // 0x23c8a4: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x23c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
label_23c8a8:
    // 0x23c8a8: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x23c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
label_23c8ac:
    // 0x23c8ac: 0xc08f650  jal         func_23D940
label_23c8b0:
    if (ctx->pc == 0x23C8B0u) {
        ctx->pc = 0x23C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8ACu;
        // 0x23c8b0: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8B4u;
        goto label_23c8b4;
    }
    ctx->pc = 0x23C8ACu;
    SET_GPR_U32(ctx, 31, 0x23C8B4u);
    ctx->pc = 0x23C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8ACu;
    // 0x23c8b0: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D940u;
    { ctx->pc = 0x23d940; return; }
    ctx->pc = 0x23C8B4u;
label_23c8b4:
    // 0x23c8b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23c8b8:
    // 0x23c8b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23c8bc:
    // 0x23c8bc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x23c8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_23c8c0:
    // 0x23c8c0: 0x3e00008  jr          $ra
label_23c8c4:
    if (ctx->pc == 0x23C8C4u) {
        ctx->pc = 0x23C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8C0u;
        // 0x23c8c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8C8u;
        goto label_23c8c8;
    }
    ctx->pc = 0x23C8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8C0u;
        // 0x23c8c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C8C8u;
label_23c8c8:
    // 0x23c8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c8cc:
    // 0x23c8cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23c8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23c8d0:
    // 0x23c8d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c8d4:
    // 0x23c8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c8d8:
    // 0x23c8d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23c8dc:
    // 0x23c8dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23c8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c8e0:
    // 0x23c8e0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23c8e4:
    // 0x23c8e4: 0xc08f0e6  jal         func_23C398
label_23c8e8:
    if (ctx->pc == 0x23C8E8u) {
        ctx->pc = 0x23C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8E4u;
        // 0x23c8e8: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8ECu;
        goto label_23c8ec;
    }
    ctx->pc = 0x23C8E4u;
    SET_GPR_U32(ctx, 31, 0x23C8ECu);
    ctx->pc = 0x23C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8E4u;
    // 0x23c8e8: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C398u;
    { ctx->pc = 0x23c398; return; }
    ctx->pc = 0x23C8ECu;
label_23c8ec:
    // 0x23c8ec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x23c8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_23c8f0:
    // 0x23c8f0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x23c8f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_23c8f4:
    // 0x23c8f4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_23c8f8:
    if (ctx->pc == 0x23C8F8u) {
        ctx->pc = 0x23C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8F4u;
        // 0x23c8f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C8FCu;
        goto label_23c8fc;
    }
    ctx->pc = 0x23C8F4u;
    {
        const bool branch_taken_0x23c8f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8F4u;
        // 0x23c8f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c8f4) {
            ctx->pc = 0x23C910u;
            goto label_23c910;
        }
    }
    ctx->pc = 0x23C8FCu;
label_23c8fc:
    // 0x23c8fc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x23c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_23c900:
    // 0x23c900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23c900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23c904:
    // 0x23c904: 0x10000005  b           . + 4 + (0x5 << 2)
label_23c908:
    if (ctx->pc == 0x23C908u) {
        ctx->pc = 0x23C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C904u;
        // 0x23c908: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C90Cu;
        goto label_23c90c;
    }
    ctx->pc = 0x23C904u;
    {
        const bool branch_taken_0x23c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C904u;
        // 0x23c908: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c904) {
            ctx->pc = 0x23C91Cu;
            goto label_23c91c;
        }
    }
    ctx->pc = 0x23C90Cu;
label_23c90c:
    // 0x23c90c: 0x0  nop
    ctx->pc = 0x23c90cu;
    // NOP
label_23c910:
    // 0x23c910: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x23c910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_23c914:
    // 0x23c914: 0x3063efff  andi        $v1, $v1, 0xEFFF
    ctx->pc = 0x23c914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
label_23c918:
    // 0x23c918: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x23c918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_23c91c:
    // 0x23c91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c920:
    // 0x23c920: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c924:
    // 0x23c924: 0x3e00008  jr          $ra
label_23c928:
    if (ctx->pc == 0x23C928u) {
        ctx->pc = 0x23C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C924u;
        // 0x23c928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C92Cu;
        goto label_23c92c;
    }
    ctx->pc = 0x23C924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C924u;
        // 0x23c928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C92Cu;
label_23c92c:
    // 0x23c92c: 0x0  nop
    ctx->pc = 0x23c92cu;
    // NOP
label_23c930:
    // 0x23c930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23c934:
    // 0x23c934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c938:
    // 0x23c938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c93c:
    // 0x23c93c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23c940:
    // 0x23c940: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c944:
    // 0x23c944: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23c944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23c948:
    // 0x23c948: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23c948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23c94c:
    // 0x23c94c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23c94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_23c950:
    // 0x23c950: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x23c950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_23c954:
    // 0x23c954: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x23c954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_23c958:
    // 0x23c958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23c95c:
    if (ctx->pc == 0x23C95Cu) {
        ctx->pc = 0x23C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C958u;
        // 0x23c95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C960u;
        goto label_23c960;
    }
    ctx->pc = 0x23C958u;
    {
        const bool branch_taken_0x23c958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C958u;
        // 0x23c95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c958) {
            ctx->pc = 0x23C970u;
            goto label_23c970;
        }
    }
    ctx->pc = 0x23C960u;
label_23c960:
    // 0x23c960: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23c960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23c964:
    // 0x23c964: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x23c964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23c968:
    // 0x23c968: 0xc08e550  jal         func_239540
label_23c96c:
    if (ctx->pc == 0x23C96Cu) {
        ctx->pc = 0x23C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C968u;
        // 0x23c96c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C970u;
        goto label_23c970;
    }
    ctx->pc = 0x23C968u;
    SET_GPR_U32(ctx, 31, 0x23C970u);
    ctx->pc = 0x23C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C968u;
    // 0x23c96c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239540u;
    { ctx->pc = 0x239540; return; }
    ctx->pc = 0x23C970u;
label_23c970:
    // 0x23c970: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x23c970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_23c974:
    // 0x23c974: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23c974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23c978:
    // 0x23c978: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x23c978u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_23c97c:
    // 0x23c97c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23c97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23c980:
    // 0x23c980: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x23c980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
label_23c984:
    // 0x23c984: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23c984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23c988:
    // 0x23c988: 0xc08fcae  jal         func_23F2B8
label_23c98c:
    if (ctx->pc == 0x23C98Cu) {
        ctx->pc = 0x23C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C988u;
        // 0x23c98c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C990u;
        goto label_23c990;
    }
    ctx->pc = 0x23C988u;
    SET_GPR_U32(ctx, 31, 0x23C990u);
    ctx->pc = 0x23C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C988u;
    // 0x23c98c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F2B8u;
    { ctx->pc = 0x23f2b8; return; }
    ctx->pc = 0x23C990u;
label_23c990:
    // 0x23c990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23c994:
    // 0x23c994: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23c998:
    // 0x23c998: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23c998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23c99c:
    // 0x23c99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23c9a0:
    // 0x23c9a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c9a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23c9a4:
    // 0x23c9a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23c9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23c9a8:
    // 0x23c9a8: 0x3e00008  jr          $ra
label_23c9ac:
    if (ctx->pc == 0x23C9ACu) {
        ctx->pc = 0x23C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9A8u;
        // 0x23c9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9B0u;
        goto label_23c9b0;
    }
    ctx->pc = 0x23C9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9A8u;
        // 0x23c9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C9B0u;
label_23c9b0:
    // 0x23c9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23c9b4:
    // 0x23c9b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23c9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23c9b8:
    // 0x23c9b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23c9bc:
    // 0x23c9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c9c0:
    // 0x23c9c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23c9c4:
    // 0x23c9c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23c9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23c9c8:
    // 0x23c9c8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23c9cc:
    // 0x23c9cc: 0xc08e550  jal         func_239540
label_23c9d0:
    if (ctx->pc == 0x23C9D0u) {
        ctx->pc = 0x23C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9CCu;
        // 0x23c9d0: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9D4u;
        goto label_23c9d4;
    }
    ctx->pc = 0x23C9CCu;
    SET_GPR_U32(ctx, 31, 0x23C9D4u);
    ctx->pc = 0x23C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9CCu;
    // 0x23c9d0: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239540u;
    { ctx->pc = 0x239540; return; }
    ctx->pc = 0x23C9D4u;
label_23c9d4:
    // 0x23c9d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c9d8:
    // 0x23c9d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23c9d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23c9dc:
    // 0x23c9dc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x23c9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_23c9e0:
    // 0x23c9e0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x23c9e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_23c9e4:
    // 0x23c9e4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_23c9e8:
    if (ctx->pc == 0x23C9E8u) {
        ctx->pc = 0x23C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9E4u;
        // 0x23c9e8: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9ECu;
        goto label_23c9ec;
    }
    ctx->pc = 0x23C9E4u;
    {
        const bool branch_taken_0x23c9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9E4u;
        // 0x23c9e8: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9e4) {
            ctx->pc = 0x23C9F8u;
            goto label_23c9f8;
        }
    }
    ctx->pc = 0x23C9ECu;
label_23c9ec:
    // 0x23c9ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_23c9f0:
    if (ctx->pc == 0x23C9F0u) {
        ctx->pc = 0x23C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9ECu;
        // 0x23c9f0: 0x3063efff  andi        $v1, $v1, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23C9F4u;
        goto label_23c9f4;
    }
    ctx->pc = 0x23C9ECu;
    {
        const bool branch_taken_0x23c9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C9ECu;
        // 0x23c9f0: 0x3063efff  andi        $v1, $v1, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c9ec) {
            ctx->pc = 0x23CA00u;
            goto label_23ca00;
        }
    }
    ctx->pc = 0x23C9F4u;
label_23c9f4:
    // 0x23c9f4: 0x0  nop
    ctx->pc = 0x23c9f4u;
    // NOP
label_23c9f8:
    // 0x23c9f8: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x23c9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
label_23c9fc:
    // 0x23c9fc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x23c9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_23ca00:
    // 0x23ca00: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x23ca00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_23ca04:
    // 0x23ca04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ca04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ca08:
    // 0x23ca08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ca08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23ca0c:
    // 0x23ca0c: 0x3e00008  jr          $ra
label_23ca10:
    if (ctx->pc == 0x23CA10u) {
        ctx->pc = 0x23CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA0Cu;
        // 0x23ca10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA14u;
        goto label_23ca14;
    }
    ctx->pc = 0x23CA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA0Cu;
        // 0x23ca10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CA14u;
label_23ca14:
    // 0x23ca14: 0x0  nop
    ctx->pc = 0x23ca14u;
    // NOP
label_23ca18:
    // 0x23ca18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ca18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23ca1c:
    // 0x23ca1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23ca20:
    // 0x23ca20: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x23ca20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_23ca24:
    // 0x23ca24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ca24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ca28:
    // 0x23ca28: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x23ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_23ca2c:
    // 0x23ca2c: 0x808dc92  j           func_237248
label_23ca30:
    if (ctx->pc == 0x23CA30u) {
        ctx->pc = 0x23CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA2Cu;
        // 0x23ca30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA34u;
        goto label_23ca34;
    }
    ctx->pc = 0x23CA2Cu;
    ctx->pc = 0x23CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CA2Cu;
    // 0x23ca30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237248u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x237248; return; }
    ctx->pc = 0x23CA34u;
label_23ca34:
    // 0x23ca34: 0x0  nop
    ctx->pc = 0x23ca34u;
    // NOP
label_23ca38:
    // 0x23ca38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23ca3c:
    // 0x23ca3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23ca40:
    // 0x23ca40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ca40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ca44:
    // 0x23ca44: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x23ca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_23ca48:
    // 0x23ca48: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_23ca4c:
    if (ctx->pc == 0x23CA4Cu) {
        ctx->pc = 0x23CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA48u;
        // 0x23ca4c: 0x7fbf0010  sq          $ra, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA50u;
        goto label_23ca50;
    }
    ctx->pc = 0x23CA48u;
    {
        const bool branch_taken_0x23ca48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA48u;
        // 0x23ca4c: 0x7fbf0010  sq          $ra, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca48) {
            ctx->pc = 0x23CB2Cu;
            goto label_23cb2c;
        }
    }
    ctx->pc = 0x23CA50u;
label_23ca50:
    // 0x23ca50: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x23ca50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_23ca54:
    // 0x23ca54: 0x3c030101  lui         $v1, 0x101
    ctx->pc = 0x23ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)257 << 16));
label_23ca58:
    // 0x23ca58: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x23ca58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
label_23ca5c:
    // 0x23ca5c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x23ca5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_23ca60:
    // 0x23ca60: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x23ca60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
label_23ca64:
    // 0x23ca64: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x23ca64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_23ca68:
    // 0x23ca68: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x23ca68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
label_23ca6c:
    // 0x23ca6c: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x23ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
label_23ca70:
    // 0x23ca70: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ca70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
label_23ca74:
    // 0x23ca74: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23ca74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_23ca78:
    // 0x23ca78: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ca78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
label_23ca7c:
    // 0x23ca7c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23ca7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_23ca80:
    // 0x23ca80: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ca80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
label_23ca84:
    // 0x23ca84: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_23ca88:
    if (ctx->pc == 0x23CA88u) {
        ctx->pc = 0x23CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA84u;
        // 0x23ca88: 0xde060000  ld          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA8Cu;
        goto label_23ca8c;
    }
    ctx->pc = 0x23CA84u;
    {
        const bool branch_taken_0x23ca84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA84u;
        // 0x23ca88: 0xde060000  ld          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca84) {
            ctx->pc = 0x23CAE8u;
            goto label_23cae8;
        }
    }
    ctx->pc = 0x23CA8Cu;
label_23ca8c:
    // 0x23ca8c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x23ca8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_23ca90:
    // 0x23ca90: 0x70633b89  pcpyld      $a3, $v1, $v1
    ctx->pc = 0x23ca90u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_23ca94:
    // 0x23ca94: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x23ca94u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
label_23ca98:
    // 0x23ca98: 0x70471a48  psubb       $v1, $v0, $a3
    ctx->pc = 0x23ca98u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_23ca9c:
    // 0x23ca9c: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x23ca9cu;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_23caa0:
    // 0x23caa0: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x23caa0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_23caa4:
    // 0x23caa4: 0x70681c89  pand        $v1, $v1, $t0
    ctx->pc = 0x23caa4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
label_23caa8:
    // 0x23caa8: 0x706313a9  pcpyud      $v0, $v1, $v1
    ctx->pc = 0x23caa8u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_23caac:
    // 0x23caac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x23caacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23cab0:
    // 0x23cab0: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_23cab4:
    if (ctx->pc == 0x23CAB4u) {
        ctx->pc = 0x23CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAB0u;
        // 0x23cab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAB8u;
        goto label_23cab8;
    }
    ctx->pc = 0x23CAB0u;
    {
        const bool branch_taken_0x23cab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAB0u;
        // 0x23cab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cab0) {
            ctx->pc = 0x23CB2Cu;
            goto label_23cb2c;
        }
    }
    ctx->pc = 0x23CAB8u;
label_23cab8:
    // 0x23cab8: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x23cab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_23cabc:
    // 0x23cabc: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x23cabcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_23cac0:
    // 0x23cac0: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x23cac0u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_23cac4:
    // 0x23cac4: 0x70471248  psubb       $v0, $v0, $a3
    ctx->pc = 0x23cac4u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_23cac8:
    // 0x23cac8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23cac8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23cacc:
    // 0x23cacc: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x23caccu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
label_23cad0:
    // 0x23cad0: 0x70421ba9  pcpyud      $v1, $v0, $v0
    ctx->pc = 0x23cad0u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_23cad4:
    // 0x23cad4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23cad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23cad8:
    // 0x23cad8: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_23cadc:
    if (ctx->pc == 0x23CADCu) {
        ctx->pc = 0x23CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAD8u;
        // 0x23cadc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAE0u;
        goto label_23cae0;
    }
    ctx->pc = 0x23CAD8u;
    {
        const bool branch_taken_0x23cad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cad8) {
            ctx->pc = 0x23CADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CAD8u;
            // 0x23cadc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cabc;
        }
    }
    ctx->pc = 0x23CAE0u;
label_23cae0:
    // 0x23cae0: 0x10000012  b           . + 4 + (0x12 << 2)
label_23cae4:
    if (ctx->pc == 0x23CAE4u) {
        ctx->pc = 0x23CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAE0u;
        // 0x23cae4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAE8u;
        goto label_23cae8;
    }
    ctx->pc = 0x23CAE0u;
    {
        const bool branch_taken_0x23cae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAE0u;
        // 0x23cae4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cae0) {
            ctx->pc = 0x23CB2Cu;
            goto label_23cb2c;
        }
    }
    ctx->pc = 0x23CAE8u;
label_23cae8:
    // 0x23cae8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23cae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23caec:
    // 0x23caec: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23caecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23caf0:
    // 0x23caf0: 0xc3182f  dsubu       $v1, $a2, $v1
    ctx->pc = 0x23caf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
label_23caf4:
    // 0x23caf4: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x23caf4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_23caf8:
    // 0x23caf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23caf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23cafc:
    // 0x23cafc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23cafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_23cb00:
    // 0x23cb00: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_23cb04:
    if (ctx->pc == 0x23CB04u) {
        ctx->pc = 0x23CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB00u;
        // 0x23cb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB08u;
        goto label_23cb08;
    }
    ctx->pc = 0x23CB00u;
    {
        const bool branch_taken_0x23cb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB00u;
        // 0x23cb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb00) {
            ctx->pc = 0x23CB2Cu;
            goto label_23cb2c;
        }
    }
    ctx->pc = 0x23CB08u;
label_23cb08:
    // 0x23cb08: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x23cb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_23cb0c:
    // 0x23cb0c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x23cb0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_23cb10:
    // 0x23cb10: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23cb10u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23cb14:
    // 0x23cb14: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x23cb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
label_23cb18:
    // 0x23cb18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23cb1c:
    // 0x23cb1c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23cb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_23cb20:
    // 0x23cb20: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
label_23cb24:
    if (ctx->pc == 0x23CB24u) {
        ctx->pc = 0x23CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB20u;
        // 0x23cb24: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB28u;
        goto label_23cb28;
    }
    ctx->pc = 0x23CB20u;
    {
        const bool branch_taken_0x23cb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb20) {
            ctx->pc = 0x23CB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB20u;
            // 0x23cb24: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cb0c;
        }
    }
    ctx->pc = 0x23CB28u;
label_23cb28:
    // 0x23cb28: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x23cb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23cb2c:
    // 0x23cb2c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x23cb2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23cb30:
    // 0x23cb30: 0x0  nop
    ctx->pc = 0x23cb30u;
    // NOP
label_23cb34:
    // 0x23cb34: 0x0  nop
    ctx->pc = 0x23cb34u;
    // NOP
label_23cb38:
    // 0x23cb38: 0x0  nop
    ctx->pc = 0x23cb38u;
    // NOP
label_23cb3c:
    // 0x23cb3c: 0x0  nop
    ctx->pc = 0x23cb3cu;
    // NOP
label_23cb40:
    // 0x23cb40: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_23cb44:
    if (ctx->pc == 0x23CB44u) {
        ctx->pc = 0x23CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB40u;
        // 0x23cb44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB48u;
        goto label_23cb48;
    }
    ctx->pc = 0x23CB40u;
    {
        const bool branch_taken_0x23cb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cb40) {
            ctx->pc = 0x23CB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB40u;
            // 0x23cb44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CB2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cb2c;
        }
    }
    ctx->pc = 0x23CB48u;
label_23cb48:
    // 0x23cb48: 0xc08f390  jal         func_23CE40
label_23cb4c:
    if (ctx->pc == 0x23CB4Cu) {
        ctx->pc = 0x23CB50u;
        goto label_23cb50;
    }
    ctx->pc = 0x23CB48u;
    SET_GPR_U32(ctx, 31, 0x23CB50u);
    ctx->pc = 0x23CE40u;
    goto label_23ce40;
    ctx->pc = 0x23CB50u;
label_23cb50:
    // 0x23cb50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23cb50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23cb54:
    // 0x23cb54: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x23cb54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23cb58:
    // 0x23cb58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23cb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23cb5c:
    // 0x23cb5c: 0x3e00008  jr          $ra
label_23cb60:
    if (ctx->pc == 0x23CB60u) {
        ctx->pc = 0x23CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB5Cu;
        // 0x23cb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB64u;
        goto label_23cb64;
    }
    ctx->pc = 0x23CB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB5Cu;
        // 0x23cb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CB64u;
label_23cb64:
    // 0x23cb64: 0x0  nop
    ctx->pc = 0x23cb64u;
    // NOP
label_23cb68:
    // 0x23cb68: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x23cb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_23cb6c:
    // 0x23cb6c: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_23cb70:
    if (ctx->pc == 0x23CB70u) {
        ctx->pc = 0x23CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB6Cu;
        // 0x23cb70: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB74u;
        goto label_23cb74;
    }
    ctx->pc = 0x23CB6Cu;
    {
        const bool branch_taken_0x23cb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB6Cu;
        // 0x23cb70: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb6c) {
            ctx->pc = 0x23CCD8u;
            goto label_23ccd8;
        }
    }
    ctx->pc = 0x23CB74u;
label_23cb74:
    // 0x23cb74: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x23cb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
label_23cb78:
    // 0x23cb78: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x23cb78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
label_23cb7c:
    // 0x23cb7c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cb7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
label_23cb80:
    // 0x23cb80: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23cb80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_23cb84:
    // 0x23cb84: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cb84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
label_23cb88:
    // 0x23cb88: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23cb88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_23cb8c:
    // 0x23cb8c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cb8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
label_23cb90:
    // 0x23cb90: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x23cb90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_23cb94:
    // 0x23cb94: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x23cb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_23cb98:
    // 0x23cb98: 0xa1438  dsll        $v0, $t2, 16
    ctx->pc = 0x23cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << 16);
label_23cb9c:
    // 0x23cb9c: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x23cb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
label_23cba0:
    // 0x23cba0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cba0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
label_23cba4:
    // 0x23cba4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23cba4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
label_23cba8:
    // 0x23cba8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cba8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
label_23cbac:
    // 0x23cbac: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23cbacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
label_23cbb0:
    // 0x23cbb0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cbb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
label_23cbb4:
    // 0x23cbb4: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x23cbb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
label_23cbb8:
    // 0x23cbb8: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x23cbb8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
label_23cbbc:
    // 0x23cbbc: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_23cbc0:
    if (ctx->pc == 0x23CBC0u) {
        ctx->pc = 0x23CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBBCu;
        // 0x23cbc0: 0x4a382d  daddu       $a3, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBC4u;
        goto label_23cbc4;
    }
    ctx->pc = 0x23CBBCu;
    {
        const bool branch_taken_0x23cbbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBBCu;
        // 0x23cbc0: 0x4a382d  daddu       $a3, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbbc) {
            ctx->pc = 0x23CC50u;
            goto label_23cc50;
        }
    }
    ctx->pc = 0x23CBC4u;
label_23cbc4:
    // 0x23cbc4: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x23cbc4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_23cbc8:
    // 0x23cbc8: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x23cbc8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
label_23cbcc:
    // 0x23cbcc: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x23cbccu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
label_23cbd0:
    // 0x23cbd0: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x23cbd0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
label_23cbd4:
    // 0x23cbd4: 0x71083389  pcpyld      $a2, $t0, $t0
    ctx->pc = 0x23cbd4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
label_23cbd8:
    // 0x23cbd8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23cbd8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23cbdc:
    // 0x23cbdc: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x23cbdcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
label_23cbe0:
    // 0x23cbe0: 0x70461489  pand        $v0, $v0, $a2
    ctx->pc = 0x23cbe0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_23cbe4:
    // 0x23cbe4: 0x70471ba9  pcpyud      $v1, $v0, $a3
    ctx->pc = 0x23cbe4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_23cbe8:
    // 0x23cbe8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x23cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23cbec:
    // 0x23cbec: 0x5460003b  bnel        $v1, $zero, . + 4 + (0x3B << 2)
label_23cbf0:
    if (ctx->pc == 0x23CBF0u) {
        ctx->pc = 0x23CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBECu;
        // 0x23cbf0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBF4u;
        goto label_23cbf4;
    }
    ctx->pc = 0x23CBECu;
    {
        const bool branch_taken_0x23cbec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cbec) {
            ctx->pc = 0x23CBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CBECu;
            // 0x23cbf0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCDCu;
            goto label_23ccdc;
        }
    }
    ctx->pc = 0x23CBF4u;
label_23cbf4:
    // 0x23cbf4: 0x712814c9  pxor        $v0, $t1, $t0
    ctx->pc = 0x23cbf4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_23cbf8:
    // 0x23cbf8: 0x704a1a48  psubb       $v1, $v0, $t2
    ctx->pc = 0x23cbf8u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
label_23cbfc:
    // 0x23cbfc: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x23cbfcu;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_23cc00:
    // 0x23cc00: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x23cc00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
label_23cc04:
    // 0x23cc04: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cc04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
label_23cc08:
    // 0x23cc08: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23cc08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
label_23cc0c:
    // 0x23cc0c: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cc0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
label_23cc10:
    // 0x23cc10: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23cc10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
label_23cc14:
    // 0x23cc14: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cc14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
label_23cc18:
    // 0x23cc18: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x23cc18u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_23cc1c:
    // 0x23cc1c: 0x70661c89  pand        $v1, $v1, $a2
    ctx->pc = 0x23cc1cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_23cc20:
    // 0x23cc20: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x23cc20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
label_23cc24:
    // 0x23cc24: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cc24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
label_23cc28:
    // 0x23cc28: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23cc28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_23cc2c:
    // 0x23cc2c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cc2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
label_23cc30:
    // 0x23cc30: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23cc30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_23cc34:
    // 0x23cc34: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cc34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
label_23cc38:
    // 0x23cc38: 0x706513a9  pcpyud      $v0, $v1, $a1
    ctx->pc = 0x23cc38u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
label_23cc3c:
    // 0x23cc3c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x23cc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23cc40:
    // 0x23cc40: 0x5060ffe0  beql        $v1, $zero, . + 4 + (-0x20 << 2)
label_23cc44:
    if (ctx->pc == 0x23CC44u) {
        ctx->pc = 0x23CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC40u;
        // 0x23cc44: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC48u;
        goto label_23cc48;
    }
    ctx->pc = 0x23CC40u;
    {
        const bool branch_taken_0x23cc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc40) {
            ctx->pc = 0x23CC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC40u;
            // 0x23cc44: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cbc4;
        }
    }
    ctx->pc = 0x23CC48u;
label_23cc48:
    // 0x23cc48: 0x10000024  b           . + 4 + (0x24 << 2)
label_23cc4c:
    if (ctx->pc == 0x23CC4Cu) {
        ctx->pc = 0x23CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC48u;
        // 0x23cc4c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC50u;
        goto label_23cc50;
    }
    ctx->pc = 0x23CC48u;
    {
        const bool branch_taken_0x23cc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC48u;
        // 0x23cc4c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc48) {
            ctx->pc = 0x23CCDCu;
            goto label_23ccdc;
        }
    }
    ctx->pc = 0x23CC50u;
label_23cc50:
    // 0x23cc50: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x23cc50u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23cc54:
    // 0x23cc54: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x23cc54u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
label_23cc58:
    // 0x23cc58: 0x126102f  dsubu       $v0, $t1, $a2
    ctx->pc = 0x23cc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) - GPR_U64(ctx, 6));
label_23cc5c:
    // 0x23cc5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23cc60:
    // 0x23cc60: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_23cc64:
    // 0x23cc64: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_23cc68:
    if (ctx->pc == 0x23CC68u) {
        ctx->pc = 0x23CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC64u;
        // 0x23cc68: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC6Cu;
        goto label_23cc6c;
    }
    ctx->pc = 0x23CC64u;
    {
        const bool branch_taken_0x23cc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc64) {
            ctx->pc = 0x23CC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC64u;
            // 0x23cc68: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCDCu;
            goto label_23ccdc;
        }
    }
    ctx->pc = 0x23CC6Cu;
label_23cc6c:
    // 0x23cc6c: 0x1271026  xor         $v0, $t1, $a3
    ctx->pc = 0x23cc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
label_23cc70:
    // 0x23cc70: 0x46182f  dsubu       $v1, $v0, $a2
    ctx->pc = 0x23cc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
label_23cc74:
    // 0x23cc74: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23cc74u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23cc78:
    // 0x23cc78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23cc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23cc7c:
    // 0x23cc7c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x23cc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_23cc80:
    // 0x23cc80: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
label_23cc84:
    if (ctx->pc == 0x23CC84u) {
        ctx->pc = 0x23CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC80u;
        // 0x23cc84: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC88u;
        goto label_23cc88;
    }
    ctx->pc = 0x23CC80u;
    {
        const bool branch_taken_0x23cc80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc80) {
            ctx->pc = 0x23CC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC80u;
            // 0x23cc84: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCDCu;
            goto label_23ccdc;
        }
    }
    ctx->pc = 0x23CC88u;
label_23cc88:
    // 0x23cc88: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x23cc88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23cc8c:
    // 0x23cc8c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_23cc90:
    // 0x23cc90: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x23cc90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23cc94:
    // 0x23cc94: 0xc9102f  dsubu       $v0, $a2, $t1
    ctx->pc = 0x23cc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 9));
label_23cc98:
    // 0x23cc98: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x23cc98u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_23cc9c:
    // 0x23cc9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23cca0:
    // 0x23cca0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23cca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_23cca4:
    // 0x23cca4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_23cca8:
    if (ctx->pc == 0x23CCA8u) {
        ctx->pc = 0x23CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCA4u;
        // 0x23cca8: 0xc71026  xor         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCACu;
        goto label_23ccac;
    }
    ctx->pc = 0x23CCA4u;
    {
        const bool branch_taken_0x23cca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCA4u;
        // 0x23cca8: 0xc71026  xor         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cca4) {
            ctx->pc = 0x23CCD8u;
            goto label_23ccd8;
        }
    }
    ctx->pc = 0x23CCACu;
label_23ccac:
    // 0x23ccac: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23ccacu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23ccb0:
    // 0x23ccb0: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x23ccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
label_23ccb4:
    // 0x23ccb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23ccb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23ccb8:
    // 0x23ccb8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23ccb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_23ccbc:
    // 0x23ccbc: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
label_23ccc0:
    if (ctx->pc == 0x23CCC0u) {
        ctx->pc = 0x23CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCBCu;
        // 0x23ccc0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCC4u;
        goto label_23ccc4;
    }
    ctx->pc = 0x23CCBCu;
    {
        const bool branch_taken_0x23ccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ccbc) {
            ctx->pc = 0x23CCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCBCu;
            // 0x23ccc0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cc90;
        }
    }
    ctx->pc = 0x23CCC4u;
label_23ccc4:
    // 0x23ccc4: 0x10000005  b           . + 4 + (0x5 << 2)
label_23ccc8:
    if (ctx->pc == 0x23CCC8u) {
        ctx->pc = 0x23CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCC4u;
        // 0x23ccc8: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCCCu;
        goto label_23cccc;
    }
    ctx->pc = 0x23CCC4u;
    {
        const bool branch_taken_0x23ccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCC4u;
        // 0x23ccc8: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccc4) {
            ctx->pc = 0x23CCDCu;
            goto label_23ccdc;
        }
    }
    ctx->pc = 0x23CCCCu;
label_23cccc:
    // 0x23cccc: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
label_23ccd0:
    if (ctx->pc == 0x23CCD0u) {
        ctx->pc = 0x23CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCCCu;
        // 0x23ccd0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCD4u;
        goto label_23ccd4;
    }
    ctx->pc = 0x23CCCCu;
    {
        const bool branch_taken_0x23cccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x23cccc) {
            ctx->pc = 0x23CCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCCCu;
            // 0x23ccd0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCE8u;
            goto label_23cce8;
        }
    }
    ctx->pc = 0x23CCD4u;
label_23ccd4:
    // 0x23ccd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23ccd8:
    // 0x23ccd8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x23ccd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23ccdc:
    // 0x23ccdc: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_23cce0:
    if (ctx->pc == 0x23CCE0u) {
        ctx->pc = 0x23CCE4u;
        goto label_23cce4;
    }
    ctx->pc = 0x23CCDCu;
    {
        const bool branch_taken_0x23ccdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ccdc) {
            ctx->pc = 0x23CCCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23CCE4u;
label_23cce4:
    // 0x23cce4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x23cce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23cce8:
    // 0x23cce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23cce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ccec:
    // 0x23ccec: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x23ccecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
label_23ccf0:
    // 0x23ccf0: 0x3e00008  jr          $ra
label_23ccf4:
    if (ctx->pc == 0x23CCF4u) {
        ctx->pc = 0x23CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF0u;
        // 0x23ccf4: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCF8u;
        goto label_23ccf8;
    }
    ctx->pc = 0x23CCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF0u;
        // 0x23ccf4: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CCF8u;
label_23ccf8:
    // 0x23ccf8: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x23ccf8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_23ccfc:
    // 0x23ccfc: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x23ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
label_23cd00:
    // 0x23cd00: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_23cd04:
    if (ctx->pc == 0x23CD04u) {
        ctx->pc = 0x23CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD00u;
        // 0x23cd04: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD08u;
        goto label_23cd08;
    }
    ctx->pc = 0x23CD00u;
    {
        const bool branch_taken_0x23cd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cd00) {
            ctx->pc = 0x23CD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CD00u;
            // 0x23cd04: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CE28u;
            goto label_23ce28;
        }
    }
    ctx->pc = 0x23CD08u;
label_23cd08:
    // 0x23cd08: 0x3109000f  andi        $t1, $t0, 0xF
    ctx->pc = 0x23cd08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_23cd0c:
    // 0x23cd0c: 0x3c070101  lui         $a3, 0x101
    ctx->pc = 0x23cd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)257 << 16));
label_23cd10:
    // 0x23cd10: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23cd10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
label_23cd14:
    // 0x23cd14: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23cd14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_23cd18:
    // 0x23cd18: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23cd18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
label_23cd1c:
    // 0x23cd1c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23cd1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_23cd20:
    // 0x23cd20: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23cd20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
label_23cd24:
    // 0x23cd24: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x23cd24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
label_23cd28:
    // 0x23cd28: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x23cd28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
label_23cd2c:
    // 0x23cd2c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23cd2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_23cd30:
    // 0x23cd30: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x23cd30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
label_23cd34:
    // 0x23cd34: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23cd34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_23cd38:
    // 0x23cd38: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x23cd38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
label_23cd3c:
    // 0x23cd3c: 0x1520001f  bnez        $t1, . + 4 + (0x1F << 2)
label_23cd40:
    if (ctx->pc == 0x23CD40u) {
        ctx->pc = 0x23CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD3Cu;
        // 0x23cd40: 0xdca20000  ld          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD44u;
        goto label_23cd44;
    }
    ctx->pc = 0x23CD3Cu;
    {
        const bool branch_taken_0x23cd3c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD3Cu;
        // 0x23cd40: 0xdca20000  ld          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd3c) {
            ctx->pc = 0x23CDBCu;
            goto label_23cdbc;
        }
    }
    ctx->pc = 0x23CD44u;
label_23cd44:
    // 0x23cd44: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x23cd44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_23cd48:
    // 0x23cd48: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x23cd48u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
label_23cd4c:
    // 0x23cd4c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23cd4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23cd50:
    // 0x23cd50: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x23cd50u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
label_23cd54:
    // 0x23cd54: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x23cd54u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23cd58:
    // 0x23cd58: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x23cd58u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
label_23cd5c:
    // 0x23cd5c: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x23cd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_23cd60:
    // 0x23cd60: 0x54600031  bnel        $v1, $zero, . + 4 + (0x31 << 2)
label_23cd64:
    if (ctx->pc == 0x23CD64u) {
        ctx->pc = 0x23CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD60u;
        // 0x23cd64: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD68u;
        goto label_23cd68;
    }
    ctx->pc = 0x23CD60u;
    {
        const bool branch_taken_0x23cd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cd60) {
            ctx->pc = 0x23CD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CD60u;
            // 0x23cd64: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CE28u;
            goto label_23ce28;
        }
    }
    ctx->pc = 0x23CD68u;
label_23cd68:
    // 0x23cd68: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x23cd68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_23cd6c:
    // 0x23cd6c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x23cd6cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_23cd70:
    // 0x23cd70: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x23cd70u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
label_23cd74:
    // 0x23cd74: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23cd74u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23cd78:
    // 0x23cd78: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x23cd78u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
label_23cd7c:
    // 0x23cd7c: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x23cd7cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_23cd80:
    // 0x23cd80: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x23cd80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23cd84:
    // 0x23cd84: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_23cd88:
    if (ctx->pc == 0x23CD88u) {
        ctx->pc = 0x23CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD84u;
        // 0x23cd88: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD8Cu;
        goto label_23cd8c;
    }
    ctx->pc = 0x23CD84u;
    {
        const bool branch_taken_0x23cd84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD84u;
        // 0x23cd88: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd84) {
            ctx->pc = 0x23CD94u;
            goto label_23cd94;
        }
    }
    ctx->pc = 0x23CD8Cu;
label_23cd8c:
    // 0x23cd8c: 0x3e00008  jr          $ra
label_23cd90:
    if (ctx->pc == 0x23CD90u) {
        ctx->pc = 0x23CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD8Cu;
        // 0x23cd90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD94u;
        goto label_23cd94;
    }
    ctx->pc = 0x23CD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD8Cu;
        // 0x23cd90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CD94u;
label_23cd94:
    // 0x23cd94: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23cd98:
    // 0x23cd98: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x23cd98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_23cd9c:
    // 0x23cd9c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23cd9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23cda0:
    // 0x23cda0: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x23cda0u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23cda4:
    // 0x23cda4: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x23cda4u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
label_23cda8:
    // 0x23cda8: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x23cda8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_23cdac:
    // 0x23cdac: 0x5120fff0  beql        $t1, $zero, . + 4 + (-0x10 << 2)
label_23cdb0:
    if (ctx->pc == 0x23CDB0u) {
        ctx->pc = 0x23CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDACu;
        // 0x23cdb0: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CDB4u;
        goto label_23cdb4;
    }
    ctx->pc = 0x23CDACu;
    {
        const bool branch_taken_0x23cdac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cdac) {
            ctx->pc = 0x23CDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CDACu;
            // 0x23cdb0: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
            SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cd70;
        }
    }
    ctx->pc = 0x23CDB4u;
label_23cdb4:
    // 0x23cdb4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_23cdb8:
    if (ctx->pc == 0x23CDB8u) {
        ctx->pc = 0x23CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDB4u;
        // 0x23cdb8: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CDBCu;
        goto label_23cdbc;
    }
    ctx->pc = 0x23CDB4u;
    {
        const bool branch_taken_0x23cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDB4u;
        // 0x23cdb8: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cdb4) {
            ctx->pc = 0x23CE28u;
            goto label_23ce28;
        }
    }
    ctx->pc = 0x23CDBCu;
label_23cdbc:
    // 0x23cdbc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x23cdbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23cdc0:
    // 0x23cdc0: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
label_23cdc4:
    if (ctx->pc == 0x23CDC4u) {
        ctx->pc = 0x23CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDC0u;
        // 0x23cdc4: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CDC8u;
        goto label_23cdc8;
    }
    ctx->pc = 0x23CDC0u;
    {
        const bool branch_taken_0x23cdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cdc0) {
            ctx->pc = 0x23CDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CDC0u;
            // 0x23cdc4: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CE28u;
            goto label_23ce28;
        }
    }
    ctx->pc = 0x23CDC8u;
label_23cdc8:
    // 0x23cdc8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x23cdc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23cdcc:
    // 0x23cdcc: 0x24027  nor         $t0, $zero, $v0
    ctx->pc = 0x23cdccu;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23cdd0:
    // 0x23cdd0: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x23cdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
label_23cdd4:
    // 0x23cdd4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23cdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_23cdd8:
    // 0x23cdd8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x23cdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_23cddc:
    // 0x23cddc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23cde0:
    if (ctx->pc == 0x23CDE0u) {
        ctx->pc = 0x23CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDDCu;
        // 0x23cde0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CDE4u;
        goto label_23cde4;
    }
    ctx->pc = 0x23CDDCu;
    {
        const bool branch_taken_0x23cddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDDCu;
        // 0x23cde0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cddc) {
            ctx->pc = 0x23CDECu;
            goto label_23cdec;
        }
    }
    ctx->pc = 0x23CDE4u;
label_23cde4:
    // 0x23cde4: 0x3e00008  jr          $ra
label_23cde8:
    if (ctx->pc == 0x23CDE8u) {
        ctx->pc = 0x23CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDE4u;
        // 0x23cde8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CDECu;
        goto label_23cdec;
    }
    ctx->pc = 0x23CDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDE4u;
        // 0x23cde8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CDECu;
label_23cdec:
    // 0x23cdec: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23cdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23cdf0:
    // 0x23cdf0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x23cdf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23cdf4:
    // 0x23cdf4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23cdf4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23cdf8:
    // 0x23cdf8: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
label_23cdfc:
    if (ctx->pc == 0x23CDFCu) {
        ctx->pc = 0x23CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CDF8u;
        // 0x23cdfc: 0x24027  nor         $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE00u;
        goto label_23ce00;
    }
    ctx->pc = 0x23CDF8u;
    {
        const bool branch_taken_0x23cdf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cdf8) {
            ctx->pc = 0x23CDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CDF8u;
            // 0x23cdfc: 0x24027  nor         $t0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cdd0;
        }
    }
    ctx->pc = 0x23CE00u;
label_23ce00:
    // 0x23ce00: 0x10000009  b           . + 4 + (0x9 << 2)
label_23ce04:
    if (ctx->pc == 0x23CE04u) {
        ctx->pc = 0x23CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE00u;
        // 0x23ce04: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE08u;
        goto label_23ce08;
    }
    ctx->pc = 0x23CE00u;
    {
        const bool branch_taken_0x23ce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE00u;
        // 0x23ce04: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce00) {
            ctx->pc = 0x23CE28u;
            goto label_23ce28;
        }
    }
    ctx->pc = 0x23CE08u;
label_23ce08:
    // 0x23ce08: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x23ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_23ce0c:
    // 0x23ce0c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x23ce0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23ce10:
    // 0x23ce10: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x23ce10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_23ce14:
    // 0x23ce14: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_23ce18:
    if (ctx->pc == 0x23CE18u) {
        ctx->pc = 0x23CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE14u;
        // 0x23ce18: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE1Cu;
        goto label_23ce1c;
    }
    ctx->pc = 0x23CE14u;
    {
        const bool branch_taken_0x23ce14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23ce14) {
            ctx->pc = 0x23CE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CE14u;
            // 0x23ce18: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CE30u;
            goto label_23ce30;
        }
    }
    ctx->pc = 0x23CE1Cu;
label_23ce1c:
    // 0x23ce1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23ce20:
    // 0x23ce20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23ce20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23ce24:
    // 0x23ce24: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x23ce24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23ce28:
    // 0x23ce28: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_23ce2c:
    if (ctx->pc == 0x23CE2Cu) {
        ctx->pc = 0x23CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE28u;
        // 0x23ce2c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE30u;
        goto label_23ce30;
    }
    ctx->pc = 0x23CE28u;
    {
        const bool branch_taken_0x23ce28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE28u;
        // 0x23ce2c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce28) {
            ctx->pc = 0x23CE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ce08;
        }
    }
    ctx->pc = 0x23CE30u;
label_23ce30:
    // 0x23ce30: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23ce30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23ce34:
    // 0x23ce34: 0x3e00008  jr          $ra
label_23ce38:
    if (ctx->pc == 0x23CE38u) {
        ctx->pc = 0x23CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE34u;
        // 0x23ce38: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE3Cu;
        goto label_23ce3c;
    }
    ctx->pc = 0x23CE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE34u;
        // 0x23ce38: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CE3Cu;
label_23ce3c:
    // 0x23ce3c: 0x0  nop
    ctx->pc = 0x23ce3cu;
    // NOP
label_23ce40:
    // 0x23ce40: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x23ce40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ce44:
    // 0x23ce44: 0xa74025  or          $t0, $a1, $a3
    ctx->pc = 0x23ce44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_23ce48:
    // 0x23ce48: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x23ce48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
label_23ce4c:
    // 0x23ce4c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_23ce50:
    if (ctx->pc == 0x23CE50u) {
        ctx->pc = 0x23CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE4Cu;
        // 0x23ce50: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE54u;
        goto label_23ce54;
    }
    ctx->pc = 0x23CE4Cu;
    {
        const bool branch_taken_0x23ce4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE4Cu;
        // 0x23ce50: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce4c) {
            ctx->pc = 0x23CF30u;
            goto label_23cf30;
        }
    }
    ctx->pc = 0x23CE54u;
label_23ce54:
    // 0x23ce54: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x23ce54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_23ce58:
    // 0x23ce58: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x23ce58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
label_23ce5c:
    // 0x23ce5c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23ce5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
label_23ce60:
    // 0x23ce60: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23ce60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
label_23ce64:
    // 0x23ce64: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23ce64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
label_23ce68:
    // 0x23ce68: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23ce68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
label_23ce6c:
    // 0x23ce6c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23ce6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
label_23ce70:
    // 0x23ce70: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x23ce70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
label_23ce74:
    // 0x23ce74: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ce74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
label_23ce78:
    // 0x23ce78: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23ce78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_23ce7c:
    // 0x23ce7c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ce7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
label_23ce80:
    // 0x23ce80: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23ce80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_23ce84:
    // 0x23ce84: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ce84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
label_23ce88:
    // 0x23ce88: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_23ce8c:
    if (ctx->pc == 0x23CE8Cu) {
        ctx->pc = 0x23CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE88u;
        // 0x23ce8c: 0xdcaa0000  ld          $t2, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE90u;
        goto label_23ce90;
    }
    ctx->pc = 0x23CE88u;
    {
        const bool branch_taken_0x23ce88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ce88) {
            ctx->pc = 0x23CE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CE88u;
            // 0x23ce8c: 0xdcaa0000  ld          $t2, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CEF0u;
            goto label_23cef0;
        }
    }
    ctx->pc = 0x23CE90u;
label_23ce90:
    // 0x23ce90: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x23ce90u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
label_23ce94:
    // 0x23ce94: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x23ce94u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23ce98:
    // 0x23ce98: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x23ce98u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
label_23ce9c:
    // 0x23ce9c: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x23ce9cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
label_23cea0:
    // 0x23cea0: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x23cea0u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
label_23cea4:
    // 0x23cea4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23cea4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23cea8:
    // 0x23cea8: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x23cea8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
label_23ceac:
    // 0x23ceac: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x23ceacu;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
label_23ceb0:
    // 0x23ceb0: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x23ceb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23ceb4:
    // 0x23ceb4: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_23ceb8:
    if (ctx->pc == 0x23CEB8u) {
        ctx->pc = 0x23CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEB4u;
        // 0x23ceb8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEBCu;
        goto label_23cebc;
    }
    ctx->pc = 0x23CEB4u;
    {
        const bool branch_taken_0x23ceb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEB4u;
        // 0x23ceb8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ceb4) {
            ctx->pc = 0x23CF2Cu;
            goto label_23cf2c;
        }
    }
    ctx->pc = 0x23CEBCu;
label_23cebc:
    // 0x23cebc: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x23cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
label_23cec0:
    // 0x23cec0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23cec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23cec4:
    // 0x23cec4: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x23cec4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23cec8:
    // 0x23cec8: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x23cec8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
label_23cecc:
    // 0x23cecc: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x23ceccu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
label_23ced0:
    // 0x23ced0: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23ced0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23ced4:
    // 0x23ced4: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x23ced4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
label_23ced8:
    // 0x23ced8: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x23ced8u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
label_23cedc:
    // 0x23cedc: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x23cedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23cee0:
    // 0x23cee0: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
label_23cee4:
    if (ctx->pc == 0x23CEE4u) {
        ctx->pc = 0x23CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEE0u;
        // 0x23cee4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEE8u;
        goto label_23cee8;
    }
    ctx->pc = 0x23CEE0u;
    {
        const bool branch_taken_0x23cee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEE0u;
        // 0x23cee4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cee0) {
            ctx->pc = 0x23CEBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cebc;
        }
    }
    ctx->pc = 0x23CEE8u;
label_23cee8:
    // 0x23cee8: 0x10000011  b           . + 4 + (0x11 << 2)
label_23ceec:
    if (ctx->pc == 0x23CEECu) {
        ctx->pc = 0x23CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEE8u;
        // 0x23ceec: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEF0u;
        goto label_23cef0;
    }
    ctx->pc = 0x23CEE8u;
    {
        const bool branch_taken_0x23cee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEE8u;
        // 0x23ceec: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cee8) {
            ctx->pc = 0x23CF30u;
            goto label_23cf30;
        }
    }
    ctx->pc = 0x23CEF0u;
label_23cef0:
    // 0x23cef0: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x23cef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
label_23cef4:
    // 0x23cef4: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x23cef4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
label_23cef8:
    // 0x23cef8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23cefc:
    // 0x23cefc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23cefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_23cf00:
    // 0x23cf00: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23cf04:
    if (ctx->pc == 0x23CF04u) {
        ctx->pc = 0x23CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF00u;
        // 0x23cf04: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF08u;
        goto label_23cf08;
    }
    ctx->pc = 0x23CF00u;
    {
        const bool branch_taken_0x23cf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF00u;
        // 0x23cf04: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf00) {
            ctx->pc = 0x23CF2Cu;
            goto label_23cf2c;
        }
    }
    ctx->pc = 0x23CF08u;
label_23cf08:
    // 0x23cf08: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x23cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
label_23cf0c:
    // 0x23cf0c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23cf10:
    // 0x23cf10: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x23cf10u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23cf14:
    // 0x23cf14: 0xa1027  nor         $v0, $zero, $t2
    ctx->pc = 0x23cf14u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
label_23cf18:
    // 0x23cf18: 0x149182f  dsubu       $v1, $t2, $t1
    ctx->pc = 0x23cf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
label_23cf1c:
    // 0x23cf1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23cf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23cf20:
    // 0x23cf20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23cf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_23cf24:
    // 0x23cf24: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
label_23cf28:
    if (ctx->pc == 0x23CF28u) {
        ctx->pc = 0x23CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF24u;
        // 0x23cf28: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF2Cu;
        goto label_23cf2c;
    }
    ctx->pc = 0x23CF24u;
    {
        const bool branch_taken_0x23cf24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF24u;
        // 0x23cf28: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf24) {
            ctx->pc = 0x23CF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cf08;
        }
    }
    ctx->pc = 0x23CF2Cu;
label_23cf2c:
    // 0x23cf2c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x23cf2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23cf30:
    // 0x23cf30: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23cf30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23cf34:
    // 0x23cf34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23cf38:
    // 0x23cf38: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23cf38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23cf3c:
    // 0x23cf3c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_23cf40:
    // 0x23cf40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23cf44:
    // 0x23cf44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23cf48:
    if (ctx->pc == 0x23CF48u) {
        ctx->pc = 0x23CF4Cu;
        goto label_23cf4c;
    }
    ctx->pc = 0x23CF44u;
    {
        const bool branch_taken_0x23cf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cf44) {
            ctx->pc = 0x23CF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cf30;
        }
    }
    ctx->pc = 0x23CF4Cu;
label_23cf4c:
    // 0x23cf4c: 0x3e00008  jr          $ra
label_23cf50:
    if (ctx->pc == 0x23CF50u) {
        ctx->pc = 0x23CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF4Cu;
        // 0x23cf50: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF54u;
        goto label_23cf54;
    }
    ctx->pc = 0x23CF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF4Cu;
        // 0x23cf50: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CF54u;
label_23cf54:
    // 0x23cf54: 0x0  nop
    ctx->pc = 0x23cf54u;
    // NOP
label_23cf58:
    // 0x23cf58: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x23cf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_23cf5c:
    // 0x23cf5c: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_23cf60:
    if (ctx->pc == 0x23CF60u) {
        ctx->pc = 0x23CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF5Cu;
        // 0x23cf60: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF64u;
        goto label_23cf64;
    }
    ctx->pc = 0x23CF5Cu;
    {
        const bool branch_taken_0x23cf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF5Cu;
        // 0x23cf60: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf5c) {
            ctx->pc = 0x23D06Cu;
            { ctx->pc = 0x23d06c; return; }
        }
    }
    ctx->pc = 0x23CF64u;
label_23cf64:
    // 0x23cf64: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x23cf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_23cf68:
    // 0x23cf68: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x23cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
label_23cf6c:
    // 0x23cf6c: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x23cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_23cf70:
    // 0x23cf70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23cf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23cf74:
    // 0x23cf74: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x23cf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_23cf78:
    // 0x23cf78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23cf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23cf7c:
    // 0x23cf7c: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x23cf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_23cf80:
    // 0x23cf80: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_23cf84:
    if (ctx->pc == 0x23CF84u) {
        ctx->pc = 0x23CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF80u;
        // 0x23cf84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF88u;
        goto label_23cf88;
    }
    ctx->pc = 0x23CF80u;
    {
        const bool branch_taken_0x23cf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF80u;
        // 0x23cf84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf80) {
            ctx->pc = 0x23CFFCu;
            goto label_23cffc;
        }
    }
    ctx->pc = 0x23CF88u;
label_23cf88:
    // 0x23cf88: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23cf88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23cf8c:
    // 0x23cf8c: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x23cf8cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_23cf90:
    // 0x23cf90: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x23cf90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
label_23cf94:
    // 0x23cf94: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23cf94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
label_23cf98:
    // 0x23cf98: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23cf98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_23cf9c:
    // 0x23cf9c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23cf9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
label_23cfa0:
    // 0x23cfa0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23cfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_23cfa4:
    // 0x23cfa4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23cfa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
label_23cfa8:
    // 0x23cfa8: 0x70681248  psubb       $v0, $v1, $t0
    ctx->pc = 0x23cfa8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
label_23cfac:
    // 0x23cfac: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x23cfacu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_23cfb0:
    // 0x23cfb0: 0x70844b89  pcpyld      $t1, $a0, $a0
    ctx->pc = 0x23cfb0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
label_23cfb4:
    // 0x23cfb4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23cfb4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23cfb8:
    // 0x23cfb8: 0x70491489  pand        $v0, $v0, $t1
    ctx->pc = 0x23cfb8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
label_23cfbc:
    // 0x23cfbc: 0x70481ba9  pcpyud      $v1, $v0, $t0
    ctx->pc = 0x23cfbcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
label_23cfc0:
    // 0x23cfc0: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x23cfc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23cfc4:
    // 0x23cfc4: 0x54c00029  bnel        $a2, $zero, . + 4 + (0x29 << 2)
label_23cfc8:
    if (ctx->pc == 0x23CFC8u) {
        ctx->pc = 0x23CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFC4u;
        // 0x23cfc8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CFCCu;
        goto label_23cfcc;
    }
    ctx->pc = 0x23CFC4u;
    {
        const bool branch_taken_0x23cfc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cfc4) {
            ctx->pc = 0x23CFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CFC4u;
            // 0x23cfc8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D06Cu;
            { ctx->pc = 0x23d06c; return; }
        }
    }
    ctx->pc = 0x23CFCCu;
label_23cfcc:
    // 0x23cfcc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23cfd0:
    // 0x23cfd0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23cfd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23cfd4:
    // 0x23cfd4: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x23cfd4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_23cfd8:
    // 0x23cfd8: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x23cfd8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
label_23cfdc:
    // 0x23cfdc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23cfdcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23cfe0:
    // 0x23cfe0: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x23cfe0u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
label_23cfe4:
    // 0x23cfe4: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x23cfe4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
label_23cfe8:
    // 0x23cfe8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23cfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_23cfec:
    // 0x23cfec: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
label_23cff0:
    if (ctx->pc == 0x23CFF0u) {
        ctx->pc = 0x23CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFECu;
        // 0x23cff0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CFF4u;
        goto label_23cff4;
    }
    ctx->pc = 0x23CFECu;
    {
        const bool branch_taken_0x23cfec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cfec) {
            ctx->pc = 0x23CFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CFECu;
            // 0x23cff0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cfd0;
        }
    }
    ctx->pc = 0x23CFF4u;
label_23cff4:
    // 0x23cff4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_23cff8:
    if (ctx->pc == 0x23CFF8u) {
        ctx->pc = 0x23CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFF4u;
        // 0x23cff8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CFFCu;
        goto label_23cffc;
    }
    ctx->pc = 0x23CFF4u;
    {
        const bool branch_taken_0x23cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFF4u;
        // 0x23cff8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cff4) {
            ctx->pc = 0x23D06Cu;
            { ctx->pc = 0x23d06c; return; }
        }
    }
    ctx->pc = 0x23CFFCu;
label_23cffc:
    // 0x23cffc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23cffcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23d000:
    // 0x23d000: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x23d000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
label_23d004:
    // 0x23d004: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    ctx->pc = 0x23d008u;
    return;
}
