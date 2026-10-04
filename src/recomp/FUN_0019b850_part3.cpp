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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part3(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19c7f0u: goto label_19c7f0;
        case 0x19c7f4u: goto label_19c7f4;
        case 0x19c7f8u: goto label_19c7f8;
        case 0x19c7fcu: goto label_19c7fc;
        case 0x19c800u: goto label_19c800;
        case 0x19c804u: goto label_19c804;
        case 0x19c808u: goto label_19c808;
        case 0x19c80cu: goto label_19c80c;
        case 0x19c810u: goto label_19c810;
        case 0x19c814u: goto label_19c814;
        case 0x19c818u: goto label_19c818;
        case 0x19c81cu: goto label_19c81c;
        case 0x19c820u: goto label_19c820;
        case 0x19c824u: goto label_19c824;
        case 0x19c828u: goto label_19c828;
        case 0x19c82cu: goto label_19c82c;
        case 0x19c830u: goto label_19c830;
        case 0x19c834u: goto label_19c834;
        case 0x19c838u: goto label_19c838;
        case 0x19c83cu: goto label_19c83c;
        case 0x19c840u: goto label_19c840;
        case 0x19c844u: goto label_19c844;
        case 0x19c848u: goto label_19c848;
        case 0x19c84cu: goto label_19c84c;
        case 0x19c850u: goto label_19c850;
        case 0x19c854u: goto label_19c854;
        case 0x19c858u: goto label_19c858;
        case 0x19c85cu: goto label_19c85c;
        case 0x19c860u: goto label_19c860;
        case 0x19c864u: goto label_19c864;
        case 0x19c868u: goto label_19c868;
        case 0x19c86cu: goto label_19c86c;
        case 0x19c870u: goto label_19c870;
        case 0x19c874u: goto label_19c874;
        case 0x19c878u: goto label_19c878;
        case 0x19c87cu: goto label_19c87c;
        case 0x19c880u: goto label_19c880;
        case 0x19c884u: goto label_19c884;
        case 0x19c888u: goto label_19c888;
        case 0x19c88cu: goto label_19c88c;
        case 0x19c890u: goto label_19c890;
        case 0x19c894u: goto label_19c894;
        case 0x19c898u: goto label_19c898;
        case 0x19c89cu: goto label_19c89c;
        case 0x19c8a0u: goto label_19c8a0;
        case 0x19c8a4u: goto label_19c8a4;
        case 0x19c8a8u: goto label_19c8a8;
        case 0x19c8acu: goto label_19c8ac;
        case 0x19c8b0u: goto label_19c8b0;
        case 0x19c8b4u: goto label_19c8b4;
        case 0x19c8b8u: goto label_19c8b8;
        case 0x19c8bcu: goto label_19c8bc;
        case 0x19c8c0u: goto label_19c8c0;
        case 0x19c8c4u: goto label_19c8c4;
        case 0x19c8c8u: goto label_19c8c8;
        case 0x19c8ccu: goto label_19c8cc;
        case 0x19c8d0u: goto label_19c8d0;
        case 0x19c8d4u: goto label_19c8d4;
        case 0x19c8d8u: goto label_19c8d8;
        case 0x19c8dcu: goto label_19c8dc;
        case 0x19c8e0u: goto label_19c8e0;
        case 0x19c8e4u: goto label_19c8e4;
        case 0x19c8e8u: goto label_19c8e8;
        case 0x19c8ecu: goto label_19c8ec;
        case 0x19c8f0u: goto label_19c8f0;
        case 0x19c8f4u: goto label_19c8f4;
        case 0x19c8f8u: goto label_19c8f8;
        case 0x19c8fcu: goto label_19c8fc;
        case 0x19c900u: goto label_19c900;
        case 0x19c904u: goto label_19c904;
        case 0x19c908u: goto label_19c908;
        case 0x19c90cu: goto label_19c90c;
        case 0x19c910u: goto label_19c910;
        case 0x19c914u: goto label_19c914;
        case 0x19c918u: goto label_19c918;
        case 0x19c91cu: goto label_19c91c;
        case 0x19c920u: goto label_19c920;
        case 0x19c924u: goto label_19c924;
        case 0x19c928u: goto label_19c928;
        case 0x19c92cu: goto label_19c92c;
        case 0x19c930u: goto label_19c930;
        case 0x19c934u: goto label_19c934;
        case 0x19c938u: goto label_19c938;
        case 0x19c93cu: goto label_19c93c;
        case 0x19c940u: goto label_19c940;
        case 0x19c944u: goto label_19c944;
        case 0x19c948u: goto label_19c948;
        case 0x19c94cu: goto label_19c94c;
        case 0x19c950u: goto label_19c950;
        case 0x19c954u: goto label_19c954;
        case 0x19c958u: goto label_19c958;
        case 0x19c95cu: goto label_19c95c;
        case 0x19c960u: goto label_19c960;
        case 0x19c964u: goto label_19c964;
        case 0x19c968u: goto label_19c968;
        case 0x19c96cu: goto label_19c96c;
        case 0x19c970u: goto label_19c970;
        case 0x19c974u: goto label_19c974;
        case 0x19c978u: goto label_19c978;
        case 0x19c97cu: goto label_19c97c;
        case 0x19c980u: goto label_19c980;
        case 0x19c984u: goto label_19c984;
        case 0x19c988u: goto label_19c988;
        case 0x19c98cu: goto label_19c98c;
        case 0x19c990u: goto label_19c990;
        case 0x19c994u: goto label_19c994;
        case 0x19c998u: goto label_19c998;
        case 0x19c99cu: goto label_19c99c;
        case 0x19c9a0u: goto label_19c9a0;
        case 0x19c9a4u: goto label_19c9a4;
        case 0x19c9a8u: goto label_19c9a8;
        case 0x19c9acu: goto label_19c9ac;
        case 0x19c9b0u: goto label_19c9b0;
        case 0x19c9b4u: goto label_19c9b4;
        case 0x19c9b8u: goto label_19c9b8;
        case 0x19c9bcu: goto label_19c9bc;
        case 0x19c9c0u: goto label_19c9c0;
        case 0x19c9c4u: goto label_19c9c4;
        case 0x19c9c8u: goto label_19c9c8;
        case 0x19c9ccu: goto label_19c9cc;
        case 0x19c9d0u: goto label_19c9d0;
        case 0x19c9d4u: goto label_19c9d4;
        case 0x19c9d8u: goto label_19c9d8;
        case 0x19c9dcu: goto label_19c9dc;
        case 0x19c9e0u: goto label_19c9e0;
        case 0x19c9e4u: goto label_19c9e4;
        case 0x19c9e8u: goto label_19c9e8;
        case 0x19c9ecu: goto label_19c9ec;
        case 0x19c9f0u: goto label_19c9f0;
        case 0x19c9f4u: goto label_19c9f4;
        case 0x19c9f8u: goto label_19c9f8;
        case 0x19c9fcu: goto label_19c9fc;
        case 0x19ca00u: goto label_19ca00;
        case 0x19ca04u: goto label_19ca04;
        case 0x19ca08u: goto label_19ca08;
        case 0x19ca0cu: goto label_19ca0c;
        case 0x19ca10u: goto label_19ca10;
        case 0x19ca14u: goto label_19ca14;
        case 0x19ca18u: goto label_19ca18;
        case 0x19ca1cu: goto label_19ca1c;
        case 0x19ca20u: goto label_19ca20;
        case 0x19ca24u: goto label_19ca24;
        case 0x19ca28u: goto label_19ca28;
        case 0x19ca2cu: goto label_19ca2c;
        case 0x19ca30u: goto label_19ca30;
        case 0x19ca34u: goto label_19ca34;
        case 0x19ca38u: goto label_19ca38;
        case 0x19ca3cu: goto label_19ca3c;
        case 0x19ca40u: goto label_19ca40;
        case 0x19ca44u: goto label_19ca44;
        case 0x19ca48u: goto label_19ca48;
        case 0x19ca4cu: goto label_19ca4c;
        case 0x19ca50u: goto label_19ca50;
        case 0x19ca54u: goto label_19ca54;
        case 0x19ca58u: goto label_19ca58;
        case 0x19ca5cu: goto label_19ca5c;
        case 0x19ca60u: goto label_19ca60;
        case 0x19ca64u: goto label_19ca64;
        case 0x19ca68u: goto label_19ca68;
        case 0x19ca6cu: goto label_19ca6c;
        case 0x19ca70u: goto label_19ca70;
        case 0x19ca74u: goto label_19ca74;
        case 0x19ca78u: goto label_19ca78;
        case 0x19ca7cu: goto label_19ca7c;
        case 0x19ca80u: goto label_19ca80;
        case 0x19ca84u: goto label_19ca84;
        case 0x19ca88u: goto label_19ca88;
        case 0x19ca8cu: goto label_19ca8c;
        case 0x19ca90u: goto label_19ca90;
        case 0x19ca94u: goto label_19ca94;
        case 0x19ca98u: goto label_19ca98;
        case 0x19ca9cu: goto label_19ca9c;
        case 0x19caa0u: goto label_19caa0;
        case 0x19caa4u: goto label_19caa4;
        case 0x19caa8u: goto label_19caa8;
        case 0x19caacu: goto label_19caac;
        case 0x19cab0u: goto label_19cab0;
        case 0x19cab4u: goto label_19cab4;
        case 0x19cab8u: goto label_19cab8;
        case 0x19cabcu: goto label_19cabc;
        case 0x19cac0u: goto label_19cac0;
        case 0x19cac4u: goto label_19cac4;
        case 0x19cac8u: goto label_19cac8;
        case 0x19caccu: goto label_19cacc;
        case 0x19cad0u: goto label_19cad0;
        case 0x19cad4u: goto label_19cad4;
        case 0x19cad8u: goto label_19cad8;
        case 0x19cadcu: goto label_19cadc;
        case 0x19cae0u: goto label_19cae0;
        case 0x19cae4u: goto label_19cae4;
        case 0x19cae8u: goto label_19cae8;
        case 0x19caecu: goto label_19caec;
        case 0x19caf0u: goto label_19caf0;
        case 0x19caf4u: goto label_19caf4;
        case 0x19caf8u: goto label_19caf8;
        case 0x19cafcu: goto label_19cafc;
        case 0x19cb00u: goto label_19cb00;
        case 0x19cb04u: goto label_19cb04;
        case 0x19cb08u: goto label_19cb08;
        case 0x19cb0cu: goto label_19cb0c;
        case 0x19cb10u: goto label_19cb10;
        case 0x19cb14u: goto label_19cb14;
        case 0x19cb18u: goto label_19cb18;
        case 0x19cb1cu: goto label_19cb1c;
        case 0x19cb20u: goto label_19cb20;
        case 0x19cb24u: goto label_19cb24;
        case 0x19cb28u: goto label_19cb28;
        case 0x19cb2cu: goto label_19cb2c;
        case 0x19cb30u: goto label_19cb30;
        case 0x19cb34u: goto label_19cb34;
        case 0x19cb38u: goto label_19cb38;
        case 0x19cb3cu: goto label_19cb3c;
        case 0x19cb40u: goto label_19cb40;
        case 0x19cb44u: goto label_19cb44;
        case 0x19cb48u: goto label_19cb48;
        case 0x19cb4cu: goto label_19cb4c;
        case 0x19cb50u: goto label_19cb50;
        case 0x19cb54u: goto label_19cb54;
        case 0x19cb58u: goto label_19cb58;
        case 0x19cb5cu: goto label_19cb5c;
        case 0x19cb60u: goto label_19cb60;
        case 0x19cb64u: goto label_19cb64;
        case 0x19cb68u: goto label_19cb68;
        case 0x19cb6cu: goto label_19cb6c;
        case 0x19cb70u: goto label_19cb70;
        case 0x19cb74u: goto label_19cb74;
        case 0x19cb78u: goto label_19cb78;
        case 0x19cb7cu: goto label_19cb7c;
        case 0x19cb80u: goto label_19cb80;
        case 0x19cb84u: goto label_19cb84;
        case 0x19cb88u: goto label_19cb88;
        case 0x19cb8cu: goto label_19cb8c;
        case 0x19cb90u: goto label_19cb90;
        case 0x19cb94u: goto label_19cb94;
        case 0x19cb98u: goto label_19cb98;
        case 0x19cb9cu: goto label_19cb9c;
        case 0x19cba0u: goto label_19cba0;
        case 0x19cba4u: goto label_19cba4;
        case 0x19cba8u: goto label_19cba8;
        case 0x19cbacu: goto label_19cbac;
        case 0x19cbb0u: goto label_19cbb0;
        case 0x19cbb4u: goto label_19cbb4;
        case 0x19cbb8u: goto label_19cbb8;
        case 0x19cbbcu: goto label_19cbbc;
        case 0x19cbc0u: goto label_19cbc0;
        case 0x19cbc4u: goto label_19cbc4;
        case 0x19cbc8u: goto label_19cbc8;
        case 0x19cbccu: goto label_19cbcc;
        case 0x19cbd0u: goto label_19cbd0;
        case 0x19cbd4u: goto label_19cbd4;
        case 0x19cbd8u: goto label_19cbd8;
        case 0x19cbdcu: goto label_19cbdc;
        case 0x19cbe0u: goto label_19cbe0;
        case 0x19cbe4u: goto label_19cbe4;
        case 0x19cbe8u: goto label_19cbe8;
        case 0x19cbecu: goto label_19cbec;
        case 0x19cbf0u: goto label_19cbf0;
        case 0x19cbf4u: goto label_19cbf4;
        case 0x19cbf8u: goto label_19cbf8;
        case 0x19cbfcu: goto label_19cbfc;
        case 0x19cc00u: goto label_19cc00;
        case 0x19cc04u: goto label_19cc04;
        case 0x19cc08u: goto label_19cc08;
        case 0x19cc0cu: goto label_19cc0c;
        case 0x19cc10u: goto label_19cc10;
        case 0x19cc14u: goto label_19cc14;
        case 0x19cc18u: goto label_19cc18;
        case 0x19cc1cu: goto label_19cc1c;
        case 0x19cc20u: goto label_19cc20;
        case 0x19cc24u: goto label_19cc24;
        case 0x19cc28u: goto label_19cc28;
        case 0x19cc2cu: goto label_19cc2c;
        case 0x19cc30u: goto label_19cc30;
        case 0x19cc34u: goto label_19cc34;
        case 0x19cc38u: goto label_19cc38;
        case 0x19cc3cu: goto label_19cc3c;
        case 0x19cc40u: goto label_19cc40;
        case 0x19cc44u: goto label_19cc44;
        case 0x19cc48u: goto label_19cc48;
        case 0x19cc4cu: goto label_19cc4c;
        case 0x19cc50u: goto label_19cc50;
        case 0x19cc54u: goto label_19cc54;
        case 0x19cc58u: goto label_19cc58;
        case 0x19cc5cu: goto label_19cc5c;
        case 0x19cc60u: goto label_19cc60;
        case 0x19cc64u: goto label_19cc64;
        case 0x19cc68u: goto label_19cc68;
        case 0x19cc6cu: goto label_19cc6c;
        case 0x19cc70u: goto label_19cc70;
        case 0x19cc74u: goto label_19cc74;
        case 0x19cc78u: goto label_19cc78;
        case 0x19cc7cu: goto label_19cc7c;
        case 0x19cc80u: goto label_19cc80;
        case 0x19cc84u: goto label_19cc84;
        case 0x19cc88u: goto label_19cc88;
        case 0x19cc8cu: goto label_19cc8c;
        case 0x19cc90u: goto label_19cc90;
        case 0x19cc94u: goto label_19cc94;
        case 0x19cc98u: goto label_19cc98;
        case 0x19cc9cu: goto label_19cc9c;
        case 0x19cca0u: goto label_19cca0;
        case 0x19cca4u: goto label_19cca4;
        case 0x19cca8u: goto label_19cca8;
        case 0x19ccacu: goto label_19ccac;
        case 0x19ccb0u: goto label_19ccb0;
        case 0x19ccb4u: goto label_19ccb4;
        case 0x19ccb8u: goto label_19ccb8;
        case 0x19ccbcu: goto label_19ccbc;
        case 0x19ccc0u: goto label_19ccc0;
        case 0x19ccc4u: goto label_19ccc4;
        case 0x19ccc8u: goto label_19ccc8;
        case 0x19ccccu: goto label_19cccc;
        case 0x19ccd0u: goto label_19ccd0;
        case 0x19ccd4u: goto label_19ccd4;
        case 0x19ccd8u: goto label_19ccd8;
        case 0x19ccdcu: goto label_19ccdc;
        case 0x19cce0u: goto label_19cce0;
        case 0x19cce4u: goto label_19cce4;
        case 0x19cce8u: goto label_19cce8;
        case 0x19ccecu: goto label_19ccec;
        case 0x19ccf0u: goto label_19ccf0;
        case 0x19ccf4u: goto label_19ccf4;
        case 0x19ccf8u: goto label_19ccf8;
        case 0x19ccfcu: goto label_19ccfc;
        case 0x19cd00u: goto label_19cd00;
        case 0x19cd04u: goto label_19cd04;
        case 0x19cd08u: goto label_19cd08;
        case 0x19cd0cu: goto label_19cd0c;
        case 0x19cd10u: goto label_19cd10;
        case 0x19cd14u: goto label_19cd14;
        case 0x19cd18u: goto label_19cd18;
        case 0x19cd1cu: goto label_19cd1c;
        case 0x19cd20u: goto label_19cd20;
        case 0x19cd24u: goto label_19cd24;
        case 0x19cd28u: goto label_19cd28;
        case 0x19cd2cu: goto label_19cd2c;
        case 0x19cd30u: goto label_19cd30;
        case 0x19cd34u: goto label_19cd34;
        case 0x19cd38u: goto label_19cd38;
        case 0x19cd3cu: goto label_19cd3c;
        case 0x19cd40u: goto label_19cd40;
        case 0x19cd44u: goto label_19cd44;
        case 0x19cd48u: goto label_19cd48;
        case 0x19cd4cu: goto label_19cd4c;
        case 0x19cd50u: goto label_19cd50;
        case 0x19cd54u: goto label_19cd54;
        case 0x19cd58u: goto label_19cd58;
        case 0x19cd5cu: goto label_19cd5c;
        case 0x19cd60u: goto label_19cd60;
        case 0x19cd64u: goto label_19cd64;
        case 0x19cd68u: goto label_19cd68;
        case 0x19cd6cu: goto label_19cd6c;
        case 0x19cd70u: goto label_19cd70;
        case 0x19cd74u: goto label_19cd74;
        case 0x19cd78u: goto label_19cd78;
        case 0x19cd7cu: goto label_19cd7c;
        case 0x19cd80u: goto label_19cd80;
        case 0x19cd84u: goto label_19cd84;
        case 0x19cd88u: goto label_19cd88;
        case 0x19cd8cu: goto label_19cd8c;
        case 0x19cd90u: goto label_19cd90;
        case 0x19cd94u: goto label_19cd94;
        case 0x19cd98u: goto label_19cd98;
        case 0x19cd9cu: goto label_19cd9c;
        case 0x19cda0u: goto label_19cda0;
        case 0x19cda4u: goto label_19cda4;
        case 0x19cda8u: goto label_19cda8;
        case 0x19cdacu: goto label_19cdac;
        case 0x19cdb0u: goto label_19cdb0;
        case 0x19cdb4u: goto label_19cdb4;
        case 0x19cdb8u: goto label_19cdb8;
        case 0x19cdbcu: goto label_19cdbc;
        case 0x19cdc0u: goto label_19cdc0;
        case 0x19cdc4u: goto label_19cdc4;
        case 0x19cdc8u: goto label_19cdc8;
        case 0x19cdccu: goto label_19cdcc;
        case 0x19cdd0u: goto label_19cdd0;
        case 0x19cdd4u: goto label_19cdd4;
        case 0x19cdd8u: goto label_19cdd8;
        case 0x19cddcu: goto label_19cddc;
        case 0x19cde0u: goto label_19cde0;
        case 0x19cde4u: goto label_19cde4;
        case 0x19cde8u: goto label_19cde8;
        case 0x19cdecu: goto label_19cdec;
        case 0x19cdf0u: goto label_19cdf0;
        case 0x19cdf4u: goto label_19cdf4;
        case 0x19cdf8u: goto label_19cdf8;
        case 0x19cdfcu: goto label_19cdfc;
        case 0x19ce00u: goto label_19ce00;
        case 0x19ce04u: goto label_19ce04;
        case 0x19ce08u: goto label_19ce08;
        case 0x19ce0cu: goto label_19ce0c;
        case 0x19ce10u: goto label_19ce10;
        case 0x19ce14u: goto label_19ce14;
        case 0x19ce18u: goto label_19ce18;
        case 0x19ce1cu: goto label_19ce1c;
        case 0x19ce20u: goto label_19ce20;
        case 0x19ce24u: goto label_19ce24;
        case 0x19ce28u: goto label_19ce28;
        case 0x19ce2cu: goto label_19ce2c;
        case 0x19ce30u: goto label_19ce30;
        case 0x19ce34u: goto label_19ce34;
        case 0x19ce38u: goto label_19ce38;
        case 0x19ce3cu: goto label_19ce3c;
        case 0x19ce40u: goto label_19ce40;
        case 0x19ce44u: goto label_19ce44;
        case 0x19ce48u: goto label_19ce48;
        case 0x19ce4cu: goto label_19ce4c;
        case 0x19ce50u: goto label_19ce50;
        case 0x19ce54u: goto label_19ce54;
        case 0x19ce58u: goto label_19ce58;
        case 0x19ce5cu: goto label_19ce5c;
        case 0x19ce60u: goto label_19ce60;
        case 0x19ce64u: goto label_19ce64;
        case 0x19ce68u: goto label_19ce68;
        case 0x19ce6cu: goto label_19ce6c;
        case 0x19ce70u: goto label_19ce70;
        case 0x19ce74u: goto label_19ce74;
        case 0x19ce78u: goto label_19ce78;
        case 0x19ce7cu: goto label_19ce7c;
        case 0x19ce80u: goto label_19ce80;
        case 0x19ce84u: goto label_19ce84;
        case 0x19ce88u: goto label_19ce88;
        case 0x19ce8cu: goto label_19ce8c;
        case 0x19ce90u: goto label_19ce90;
        case 0x19ce94u: goto label_19ce94;
        case 0x19ce98u: goto label_19ce98;
        case 0x19ce9cu: goto label_19ce9c;
        case 0x19cea0u: goto label_19cea0;
        case 0x19cea4u: goto label_19cea4;
        case 0x19cea8u: goto label_19cea8;
        case 0x19ceacu: goto label_19ceac;
        case 0x19ceb0u: goto label_19ceb0;
        case 0x19ceb4u: goto label_19ceb4;
        case 0x19ceb8u: goto label_19ceb8;
        case 0x19cebcu: goto label_19cebc;
        case 0x19cec0u: goto label_19cec0;
        case 0x19cec4u: goto label_19cec4;
        case 0x19cec8u: goto label_19cec8;
        case 0x19ceccu: goto label_19cecc;
        case 0x19ced0u: goto label_19ced0;
        case 0x19ced4u: goto label_19ced4;
        case 0x19ced8u: goto label_19ced8;
        case 0x19cedcu: goto label_19cedc;
        case 0x19cee0u: goto label_19cee0;
        case 0x19cee4u: goto label_19cee4;
        case 0x19cee8u: goto label_19cee8;
        case 0x19ceecu: goto label_19ceec;
        case 0x19cef0u: goto label_19cef0;
        case 0x19cef4u: goto label_19cef4;
        case 0x19cef8u: goto label_19cef8;
        case 0x19cefcu: goto label_19cefc;
        case 0x19cf00u: goto label_19cf00;
        case 0x19cf04u: goto label_19cf04;
        case 0x19cf08u: goto label_19cf08;
        case 0x19cf0cu: goto label_19cf0c;
        case 0x19cf10u: goto label_19cf10;
        case 0x19cf14u: goto label_19cf14;
        case 0x19cf18u: goto label_19cf18;
        case 0x19cf1cu: goto label_19cf1c;
        case 0x19cf20u: goto label_19cf20;
        case 0x19cf24u: goto label_19cf24;
        case 0x19cf28u: goto label_19cf28;
        case 0x19cf2cu: goto label_19cf2c;
        case 0x19cf30u: goto label_19cf30;
        case 0x19cf34u: goto label_19cf34;
        case 0x19cf38u: goto label_19cf38;
        case 0x19cf3cu: goto label_19cf3c;
        case 0x19cf40u: goto label_19cf40;
        case 0x19cf44u: goto label_19cf44;
        case 0x19cf48u: goto label_19cf48;
        case 0x19cf4cu: goto label_19cf4c;
        case 0x19cf50u: goto label_19cf50;
        case 0x19cf54u: goto label_19cf54;
        case 0x19cf58u: goto label_19cf58;
        case 0x19cf5cu: goto label_19cf5c;
        case 0x19cf60u: goto label_19cf60;
        case 0x19cf64u: goto label_19cf64;
        case 0x19cf68u: goto label_19cf68;
        case 0x19cf6cu: goto label_19cf6c;
        case 0x19cf70u: goto label_19cf70;
        case 0x19cf74u: goto label_19cf74;
        case 0x19cf78u: goto label_19cf78;
        case 0x19cf7cu: goto label_19cf7c;
        case 0x19cf80u: goto label_19cf80;
        case 0x19cf84u: goto label_19cf84;
        case 0x19cf88u: goto label_19cf88;
        case 0x19cf8cu: goto label_19cf8c;
        case 0x19cf90u: goto label_19cf90;
        case 0x19cf94u: goto label_19cf94;
        case 0x19cf98u: goto label_19cf98;
        case 0x19cf9cu: goto label_19cf9c;
        case 0x19cfa0u: goto label_19cfa0;
        case 0x19cfa4u: goto label_19cfa4;
        case 0x19cfa8u: goto label_19cfa8;
        case 0x19cfacu: goto label_19cfac;
        case 0x19cfb0u: goto label_19cfb0;
        case 0x19cfb4u: goto label_19cfb4;
        case 0x19cfb8u: goto label_19cfb8;
        case 0x19cfbcu: goto label_19cfbc;
        default: return;
    }

label_19c7f0:
    // 0x19c7f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19c7f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c7f4:
    // 0x19c7f4: 0x10000092  b           . + 4 + (0x92 << 2)
label_19c7f8:
    if (ctx->pc == 0x19C7F8u) {
        ctx->pc = 0x19C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7F4u;
        // 0x19c7f8: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7FCu;
        goto label_19c7fc;
    }
    ctx->pc = 0x19C7F4u;
    {
        const bool branch_taken_0x19c7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7F4u;
        // 0x19c7f8: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7f4) {
            ctx->pc = 0x19CA40u;
            goto label_19ca40;
        }
    }
    ctx->pc = 0x19C7FCu;
label_19c7fc:
    // 0x19c7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c800:
    // 0x19c800: 0x24a59fd0  addiu       $a1, $a1, -0x6030
    ctx->pc = 0x19c800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942672));
label_19c804:
    // 0x19c804: 0xc068d1e  jal         func_1A3478
label_19c808:
    if (ctx->pc == 0x19C808u) {
        ctx->pc = 0x19C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C804u;
        // 0x19c808: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C80Cu;
        goto label_19c80c;
    }
    ctx->pc = 0x19C804u;
    SET_GPR_U32(ctx, 31, 0x19C80Cu);
    ctx->pc = 0x19C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C804u;
    // 0x19c808: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    { ctx->pc = 0x1a3478; return; }
    ctx->pc = 0x19C80Cu;
label_19c80c:
    // 0x19c80c: 0x10000095  b           . + 4 + (0x95 << 2)
label_19c810:
    if (ctx->pc == 0x19C810u) {
        ctx->pc = 0x19C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C80Cu;
        // 0x19c810: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C814u;
        goto label_19c814;
    }
    ctx->pc = 0x19C80Cu;
    {
        const bool branch_taken_0x19c80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C80Cu;
        // 0x19c810: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c80c) {
            ctx->pc = 0x19CA64u;
            goto label_19ca64;
        }
    }
    ctx->pc = 0x19C814u;
label_19c814:
    // 0x19c814: 0x8e2701c8  lw          $a3, 0x1C8($s1)
    ctx->pc = 0x19c814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_19c818:
    // 0x19c818: 0x8e2501d8  lw          $a1, 0x1D8($s1)
    ctx->pc = 0x19c818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
label_19c81c:
    // 0x19c81c: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x19c81cu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19c820:
    // 0x19c820: 0x8e2401cc  lw          $a0, 0x1CC($s1)
    ctx->pc = 0x19c820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
label_19c824:
    // 0x19c824: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19c824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19c828:
    // 0x19c828: 0x8e2301dc  lw          $v1, 0x1DC($s1)
    ctx->pc = 0x19c828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_19c82c:
    // 0x19c82c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19c82cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c830:
    // 0x19c830: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x19c830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_19c834:
    // 0x19c834: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x19c834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
label_19c838:
    // 0x19c838: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x19c838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_19c83c:
    // 0x19c83c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x19c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_19c840:
    // 0x19c840: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
label_19c844:
    if (ctx->pc == 0x19C844u) {
        ctx->pc = 0x19C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C840u;
        // 0x19c844: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C848u;
        goto label_19c848;
    }
    ctx->pc = 0x19C840u;
    {
        const bool branch_taken_0x19c840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x19C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C840u;
        // 0x19c844: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c840) {
            ctx->pc = 0x19C860u;
            goto label_19c860;
        }
    }
    ctx->pc = 0x19C848u;
label_19c848:
    // 0x19c848: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x19c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_19c84c:
    // 0x19c84c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19c850:
    if (ctx->pc == 0x19C850u) {
        ctx->pc = 0x19C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C84Cu;
        // 0x19c850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C854u;
        goto label_19c854;
    }
    ctx->pc = 0x19C84Cu;
    {
        const bool branch_taken_0x19c84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C84Cu;
        // 0x19c850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c84c) {
            ctx->pc = 0x19C864u;
            goto label_19c864;
        }
    }
    ctx->pc = 0x19C854u;
label_19c854:
    // 0x19c854: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x19c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_19c858:
    // 0x19c858: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x19c858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
label_19c85c:
    // 0x19c85c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x19c85cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19c860:
    // 0x19c860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c864:
    // 0x19c864: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
label_19c868:
    if (ctx->pc == 0x19C868u) {
        ctx->pc = 0x19C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C864u;
        // 0x19c868: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C86Cu;
        goto label_19c86c;
    }
    ctx->pc = 0x19C864u;
    {
        const bool branch_taken_0x19c864 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c864) {
            ctx->pc = 0x19C868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C864u;
            // 0x19c868: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C878u;
            goto label_19c878;
        }
    }
    ctx->pc = 0x19C86Cu;
label_19c86c:
    // 0x19c86c: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
label_19c870:
    if (ctx->pc == 0x19C870u) {
        ctx->pc = 0x19C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C86Cu;
        // 0x19c870: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C874u;
        goto label_19c874;
    }
    ctx->pc = 0x19C86Cu;
    {
        const bool branch_taken_0x19c86c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C86Cu;
        // 0x19c870: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c86c) {
            ctx->pc = 0x19C8B4u;
            goto label_19c8b4;
        }
    }
    ctx->pc = 0x19C874u;
label_19c874:
    // 0x19c874: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x19c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_19c878:
    // 0x19c878: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x19c878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_19c87c:
    // 0x19c87c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x19c87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19c880:
    // 0x19c880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c884:
    // 0x19c884: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x19c884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19c888:
    // 0x19c888: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19c88c:
    // 0x19c88c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x19c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_19c890:
    // 0x19c890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19c894:
    // 0x19c894: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x19c894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_19c898:
    // 0x19c898: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x19c898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_19c89c:
    // 0x19c89c: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x19c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_19c8a0:
    // 0x19c8a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c8a4:
    // 0x19c8a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19c8a8:
    // 0x19c8a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c8ac:
    // 0x19c8ac: 0x10000061  b           . + 4 + (0x61 << 2)
label_19c8b0:
    if (ctx->pc == 0x19C8B0u) {
        ctx->pc = 0x19C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8ACu;
        // 0x19c8b0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C8B4u;
        goto label_19c8b4;
    }
    ctx->pc = 0x19C8ACu;
    {
        const bool branch_taken_0x19c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8ACu;
        // 0x19c8b0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8ac) {
            ctx->pc = 0x19CA34u;
            goto label_19ca34;
        }
    }
    ctx->pc = 0x19C8B4u;
label_19c8b4:
    // 0x19c8b4: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
label_19c8b8:
    if (ctx->pc == 0x19C8B8u) {
        ctx->pc = 0x19C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8B4u;
        // 0x19c8b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C8BCu;
        goto label_19c8bc;
    }
    ctx->pc = 0x19C8B4u;
    {
        const bool branch_taken_0x19c8b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8B4u;
        // 0x19c8b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8b4) {
            ctx->pc = 0x19C984u;
            goto label_19c984;
        }
    }
    ctx->pc = 0x19C8BCu;
label_19c8bc:
    // 0x19c8bc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x19c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_19c8c0:
    // 0x19c8c0: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x19c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_19c8c4:
    // 0x19c8c4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x19c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19c8c8:
    // 0x19c8c8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x19c8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19c8cc:
    // 0x19c8cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19c8d0:
    // 0x19c8d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19c8d4:
    // 0x19c8d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19c8d8:
    // 0x19c8d8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x19c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_19c8dc:
    // 0x19c8dc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19c8e0:
    // 0x19c8e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19c8e4:
    // 0x19c8e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c8e8:
    // 0x19c8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c8ec:
    // 0x19c8ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c8f0:
    // 0x19c8f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c8f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c8f4:
    // 0x19c8f4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19c8f8:
    // 0x19c8f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c8f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c8fc:
    // 0x19c8fc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x19c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_19c900:
    // 0x19c900: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19c900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19c904:
    // 0x19c904: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19c904u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c908:
    // 0x19c908: 0xc067322  jal         func_19CC88
label_19c90c:
    if (ctx->pc == 0x19C90Cu) {
        ctx->pc = 0x19C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C908u;
        // 0x19c90c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C910u;
        goto label_19c910;
    }
    ctx->pc = 0x19C908u;
    SET_GPR_U32(ctx, 31, 0x19C910u);
    ctx->pc = 0x19C90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C908u;
    // 0x19c90c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    goto label_19cc88;
    ctx->pc = 0x19C910u;
label_19c910:
    // 0x19c910: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x19c910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_19c914:
    // 0x19c914: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
label_19c918:
    if (ctx->pc == 0x19C918u) {
        ctx->pc = 0x19C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C914u;
        // 0x19c918: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C91Cu;
        goto label_19c91c;
    }
    ctx->pc = 0x19C914u;
    {
        const bool branch_taken_0x19c914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x19C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C914u;
        // 0x19c918: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c914) {
            ctx->pc = 0x19C938u;
            goto label_19c938;
        }
    }
    ctx->pc = 0x19C91Cu;
label_19c91c:
    // 0x19c91c: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x19c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_19c920:
    // 0x19c920: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19c924:
    if (ctx->pc == 0x19C924u) {
        ctx->pc = 0x19C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C920u;
        // 0x19c924: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C928u;
        goto label_19c928;
    }
    ctx->pc = 0x19C920u;
    {
        const bool branch_taken_0x19c920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C920u;
        // 0x19c924: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c920) {
            ctx->pc = 0x19C93Cu;
            goto label_19c93c;
        }
    }
    ctx->pc = 0x19C928u;
label_19c928:
    // 0x19c928: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19c928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c92c:
    // 0x19c92c: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x19c92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
label_19c930:
    // 0x19c930: 0x10000002  b           . + 4 + (0x2 << 2)
label_19c934:
    if (ctx->pc == 0x19C934u) {
        ctx->pc = 0x19C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C930u;
        // 0x19c934: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C938u;
        goto label_19c938;
    }
    ctx->pc = 0x19C930u;
    {
        const bool branch_taken_0x19c930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C930u;
        // 0x19c934: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c930) {
            ctx->pc = 0x19C93Cu;
            goto label_19c93c;
        }
    }
    ctx->pc = 0x19C938u;
label_19c938:
    // 0x19c938: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x19c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_19c93c:
    // 0x19c93c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c940:
    // 0x19c940: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x19c940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_19c944:
    // 0x19c944: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x19c944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_19c948:
    // 0x19c948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c94c:
    // 0x19c94c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19c950:
    // 0x19c950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c954:
    // 0x19c954: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19c954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19c958:
    // 0x19c958: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x19c958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_19c95c:
    // 0x19c95c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c960:
    // 0x19c960: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x19c960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19c964:
    // 0x19c964: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x19c964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_19c968:
    // 0x19c968: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19c968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19c96c:
    // 0x19c96c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c970:
    // 0x19c970: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x19c970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_19c974:
    // 0x19c974: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19c974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19c978:
    // 0x19c978: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19c978u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c97c:
    // 0x19c97c: 0x10000030  b           . + 4 + (0x30 << 2)
label_19c980:
    if (ctx->pc == 0x19C980u) {
        ctx->pc = 0x19C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C97Cu;
        // 0x19c980: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C984u;
        goto label_19c984;
    }
    ctx->pc = 0x19C97Cu;
    {
        const bool branch_taken_0x19c97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C97Cu;
        // 0x19c980: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c97c) {
            ctx->pc = 0x19CA40u;
            goto label_19ca40;
        }
    }
    ctx->pc = 0x19C984u;
label_19c984:
    // 0x19c984: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
label_19c988:
    if (ctx->pc == 0x19C988u) {
        ctx->pc = 0x19C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C984u;
        // 0x19c988: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C98Cu;
        goto label_19c98c;
    }
    ctx->pc = 0x19C984u;
    {
        const bool branch_taken_0x19c984 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C984u;
        // 0x19c988: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c984) {
            ctx->pc = 0x19CA50u;
            goto label_19ca50;
        }
    }
    ctx->pc = 0x19C98Cu;
label_19c98c:
    // 0x19c98c: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x19c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_19c990:
    // 0x19c990: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19c990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c994:
    // 0x19c994: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x19c994u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19c998:
    // 0x19c998: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x19c998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_19c99c:
    // 0x19c99c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x19c99cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19c9a0:
    // 0x19c9a0: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x19c9a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_19c9a4:
    // 0x19c9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c9a8:
    // 0x19c9a8: 0xc0678ac  jal         func_19E2B0
label_19c9ac:
    if (ctx->pc == 0x19C9ACu) {
        ctx->pc = 0x19C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9A8u;
        // 0x19c9ac: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9B0u;
        goto label_19c9b0;
    }
    ctx->pc = 0x19C9A8u;
    SET_GPR_U32(ctx, 31, 0x19C9B0u);
    ctx->pc = 0x19C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9A8u;
    // 0x19c9ac: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E2B0u;
    { ctx->pc = 0x19e2b0; return; }
    ctx->pc = 0x19C9B0u;
label_19c9b0:
    // 0x19c9b0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x19c9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19c9b4:
    // 0x19c9b4: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x19c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_19c9b8:
    // 0x19c9b8: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x19c9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19c9bc:
    // 0x19c9bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19c9c0:
    // 0x19c9c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19c9c4:
    // 0x19c9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c9c8:
    // 0x19c9c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19c9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c9cc:
    // 0x19c9cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c9d0:
    // 0x19c9d0: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x19c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_19c9d4:
    // 0x19c9d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c9d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c9d8:
    // 0x19c9d8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19c9dc:
    // 0x19c9dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c9e0:
    // 0x19c9e0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19c9e4:
    // 0x19c9e4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x19c9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19c9e8:
    // 0x19c9e8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x19c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_19c9ec:
    // 0x19c9ec: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19c9ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c9f0:
    // 0x19c9f0: 0xc067322  jal         func_19CC88
label_19c9f4:
    if (ctx->pc == 0x19C9F4u) {
        ctx->pc = 0x19C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9F0u;
        // 0x19c9f4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9F8u;
        goto label_19c9f8;
    }
    ctx->pc = 0x19C9F0u;
    SET_GPR_U32(ctx, 31, 0x19C9F8u);
    ctx->pc = 0x19C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9F0u;
    // 0x19c9f4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    goto label_19cc88;
    ctx->pc = 0x19C9F8u;
label_19c9f8:
    // 0x19c9f8: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x19c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_19c9fc:
    // 0x19c9fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ca00:
    // 0x19ca00: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x19ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_19ca04:
    // 0x19ca04: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x19ca04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_19ca08:
    // 0x19ca08: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x19ca08u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_19ca0c:
    // 0x19ca0c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_19ca10:
    // 0x19ca10: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x19ca10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19ca14:
    // 0x19ca14: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x19ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_19ca18:
    // 0x19ca18: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x19ca18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ca1c:
    // 0x19ca1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ca20:
    // 0x19ca20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ca24:
    // 0x19ca24: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x19ca24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_19ca28:
    // 0x19ca28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19ca28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ca2c:
    // 0x19ca2c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19ca30:
    // 0x19ca30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ca30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ca34:
    // 0x19ca34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19ca34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ca38:
    // 0x19ca38: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x19ca38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19ca3c:
    // 0x19ca3c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19ca3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19ca40:
    // 0x19ca40: 0xc067322  jal         func_19CC88
label_19ca44:
    if (ctx->pc == 0x19CA44u) {
        ctx->pc = 0x19CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA40u;
        // 0x19ca44: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA48u;
        goto label_19ca48;
    }
    ctx->pc = 0x19CA40u;
    SET_GPR_U32(ctx, 31, 0x19CA48u);
    ctx->pc = 0x19CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA40u;
    // 0x19ca44: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    goto label_19cc88;
    ctx->pc = 0x19CA48u;
label_19ca48:
    // 0x19ca48: 0x10000006  b           . + 4 + (0x6 << 2)
label_19ca4c:
    if (ctx->pc == 0x19CA4Cu) {
        ctx->pc = 0x19CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA48u;
        // 0x19ca4c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA50u;
        goto label_19ca50;
    }
    ctx->pc = 0x19CA48u;
    {
        const bool branch_taken_0x19ca48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA48u;
        // 0x19ca4c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca48) {
            ctx->pc = 0x19CA64u;
            goto label_19ca64;
        }
    }
    ctx->pc = 0x19CA50u;
label_19ca50:
    // 0x19ca50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ca54:
    // 0x19ca54: 0x24a59ff0  addiu       $a1, $a1, -0x6010
    ctx->pc = 0x19ca54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942704));
label_19ca58:
    // 0x19ca58: 0xc068d1e  jal         func_1A3478
label_19ca5c:
    if (ctx->pc == 0x19CA5Cu) {
        ctx->pc = 0x19CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA58u;
        // 0x19ca5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA60u;
        goto label_19ca60;
    }
    ctx->pc = 0x19CA58u;
    SET_GPR_U32(ctx, 31, 0x19CA60u);
    ctx->pc = 0x19CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA58u;
    // 0x19ca5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    { ctx->pc = 0x1a3478; return; }
    ctx->pc = 0x19CA60u;
label_19ca60:
    // 0x19ca60: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19ca60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ca64:
    // 0x19ca64: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19ca68:
    // 0x19ca68: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x19ca68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_19ca6c:
    // 0x19ca6c: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_19ca70:
    if (ctx->pc == 0x19CA70u) {
        ctx->pc = 0x19CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA6Cu;
        // 0x19ca70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA74u;
        goto label_19ca74;
    }
    ctx->pc = 0x19CA6Cu;
    {
        const bool branch_taken_0x19ca6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA6Cu;
        // 0x19ca70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca6c) {
            ctx->pc = 0x19CC54u;
            goto label_19cc54;
        }
    }
    ctx->pc = 0x19CA74u;
label_19ca74:
    // 0x19ca74: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x19ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_19ca78:
    // 0x19ca78: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
label_19ca7c:
    if (ctx->pc == 0x19CA7Cu) {
        ctx->pc = 0x19CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA78u;
        // 0x19ca7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA80u;
        goto label_19ca80;
    }
    ctx->pc = 0x19CA78u;
    {
        const bool branch_taken_0x19ca78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA78u;
        // 0x19ca7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca78) {
            ctx->pc = 0x19CB4Cu;
            goto label_19cb4c;
        }
    }
    ctx->pc = 0x19CA80u;
label_19ca80:
    // 0x19ca80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ca84:
    // 0x19ca84: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
label_19ca88:
    if (ctx->pc == 0x19CA88u) {
        ctx->pc = 0x19CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA84u;
        // 0x19ca88: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA8Cu;
        goto label_19ca8c;
    }
    ctx->pc = 0x19CA84u;
    {
        const bool branch_taken_0x19ca84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA84u;
        // 0x19ca88: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca84) {
            ctx->pc = 0x19CAC4u;
            goto label_19cac4;
        }
    }
    ctx->pc = 0x19CA8Cu;
label_19ca8c:
    // 0x19ca8c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x19ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_19ca90:
    // 0x19ca90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ca90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ca94:
    // 0x19ca94: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x19ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19ca98:
    // 0x19ca98: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19ca98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19ca9c:
    // 0x19ca9c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_19caa0:
    // 0x19caa0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x19caa0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19caa4:
    // 0x19caa4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19caa8:
    // 0x19caa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19caa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19caac:
    // 0x19caac: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x19caacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_19cab0:
    // 0x19cab0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19cab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cab4:
    // 0x19cab4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19cab8:
    // 0x19cab8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19cab8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cabc:
    // 0x19cabc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_19cac0:
    if (ctx->pc == 0x19CAC0u) {
        ctx->pc = 0x19CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CABCu;
        // 0x19cac0: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAC4u;
        goto label_19cac4;
    }
    ctx->pc = 0x19CABCu;
    {
        const bool branch_taken_0x19cabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CABCu;
        // 0x19cac0: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cabc) {
            ctx->pc = 0x19CB3Cu;
            goto label_19cb3c;
        }
    }
    ctx->pc = 0x19CAC4u;
label_19cac4:
    // 0x19cac4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x19cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_19cac8:
    // 0x19cac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19cac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19cacc:
    // 0x19cacc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x19caccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19cad0:
    // 0x19cad0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19cad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cad4:
    // 0x19cad4: 0x8e2501bc  lw          $a1, 0x1BC($s1)
    ctx->pc = 0x19cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_19cad8:
    // 0x19cad8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19cad8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19cadc:
    // 0x19cadc: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x19cadcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_19cae0:
    // 0x19cae0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19cae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cae4:
    // 0x19cae4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19cae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19cae8:
    // 0x19cae8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19cae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19caec:
    // 0x19caec: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19caecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_19caf0:
    // 0x19caf0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19caf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19caf4:
    // 0x19caf4: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x19caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
label_19caf8:
    // 0x19caf8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x19caf8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19cafc:
    // 0x19cafc: 0xc067322  jal         func_19CC88
label_19cb00:
    if (ctx->pc == 0x19CB00u) {
        ctx->pc = 0x19CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAFCu;
        // 0x19cb00: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB04u;
        goto label_19cb04;
    }
    ctx->pc = 0x19CAFCu;
    SET_GPR_U32(ctx, 31, 0x19CB04u);
    ctx->pc = 0x19CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAFCu;
    // 0x19cb00: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    goto label_19cc88;
    ctx->pc = 0x19CB04u;
label_19cb04:
    // 0x19cb04: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x19cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_19cb08:
    // 0x19cb08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19cb0c:
    // 0x19cb0c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x19cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_19cb10:
    // 0x19cb10: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19cb10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19cb14:
    // 0x19cb14: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19cb14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19cb18:
    // 0x19cb18: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x19cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
label_19cb1c:
    // 0x19cb1c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19cb20:
    // 0x19cb20: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x19cb20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19cb24:
    // 0x19cb24: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_19cb28:
    // 0x19cb28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19cb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cb2c:
    // 0x19cb2c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x19cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_19cb30:
    // 0x19cb30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19cb30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cb34:
    // 0x19cb34: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19cb34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19cb38:
    // 0x19cb38: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x19cb38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_19cb3c:
    // 0x19cb3c: 0xc067322  jal         func_19CC88
label_19cb40:
    if (ctx->pc == 0x19CB40u) {
        ctx->pc = 0x19CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB3Cu;
        // 0x19cb40: 0x8c8501bc  lw          $a1, 0x1BC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB44u;
        goto label_19cb44;
    }
    ctx->pc = 0x19CB3Cu;
    SET_GPR_U32(ctx, 31, 0x19CB44u);
    ctx->pc = 0x19CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB3Cu;
    // 0x19cb40: 0x8c8501bc  lw          $a1, 0x1BC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    goto label_19cc88;
    ctx->pc = 0x19CB44u;
label_19cb44:
    // 0x19cb44: 0x10000044  b           . + 4 + (0x44 << 2)
label_19cb48:
    if (ctx->pc == 0x19CB48u) {
        ctx->pc = 0x19CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB44u;
        // 0x19cb48: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB4Cu;
        goto label_19cb4c;
    }
    ctx->pc = 0x19CB44u;
    {
        const bool branch_taken_0x19cb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB44u;
        // 0x19cb48: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb44) {
            ctx->pc = 0x19CC58u;
            goto label_19cc58;
        }
    }
    ctx->pc = 0x19CB4Cu;
label_19cb4c:
    // 0x19cb4c: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
label_19cb50:
    if (ctx->pc == 0x19CB50u) {
        ctx->pc = 0x19CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB4Cu;
        // 0x19cb50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB54u;
        goto label_19cb54;
    }
    ctx->pc = 0x19CB4Cu;
    {
        const bool branch_taken_0x19cb4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB4Cu;
        // 0x19cb50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb4c) {
            ctx->pc = 0x19CBA4u;
            goto label_19cba4;
        }
    }
    ctx->pc = 0x19CB54u;
label_19cb54:
    // 0x19cb54: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x19cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_19cb58:
    // 0x19cb58: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_19cb5c:
    if (ctx->pc == 0x19CB5Cu) {
        ctx->pc = 0x19CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB58u;
        // 0x19cb5c: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB60u;
        goto label_19cb60;
    }
    ctx->pc = 0x19CB58u;
    {
        const bool branch_taken_0x19cb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cb58) {
            ctx->pc = 0x19CB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CB58u;
            // 0x19cb5c: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CB64u;
            goto label_19cb64;
        }
    }
    ctx->pc = 0x19CB60u;
label_19cb60:
    // 0x19cb60: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x19cb60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_19cb64:
    // 0x19cb64: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x19cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_19cb68:
    // 0x19cb68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19cb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19cb6c:
    // 0x19cb6c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x19cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19cb70:
    // 0x19cb70: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19cb70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19cb74:
    // 0x19cb74: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_19cb78:
    // 0x19cb78: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x19cb78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19cb7c:
    // 0x19cb7c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19cb80:
    // 0x19cb80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cb84:
    // 0x19cb84: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x19cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_19cb88:
    // 0x19cb88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19cb88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cb8c:
    // 0x19cb8c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19cb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19cb90:
    // 0x19cb90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19cb90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cb94:
    // 0x19cb94: 0xc067322  jal         func_19CC88
label_19cb98:
    if (ctx->pc == 0x19CB98u) {
        ctx->pc = 0x19CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB94u;
        // 0x19cb98: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB9Cu;
        goto label_19cb9c;
    }
    ctx->pc = 0x19CB94u;
    SET_GPR_U32(ctx, 31, 0x19CB9Cu);
    ctx->pc = 0x19CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CB94u;
    // 0x19cb98: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    goto label_19cc88;
    ctx->pc = 0x19CB9Cu;
label_19cb9c:
    // 0x19cb9c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_19cba0:
    if (ctx->pc == 0x19CBA0u) {
        ctx->pc = 0x19CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB9Cu;
        // 0x19cba0: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBA4u;
        goto label_19cba4;
    }
    ctx->pc = 0x19CB9Cu;
    {
        const bool branch_taken_0x19cb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB9Cu;
        // 0x19cba0: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb9c) {
            ctx->pc = 0x19CC58u;
            goto label_19cc58;
        }
    }
    ctx->pc = 0x19CBA4u;
label_19cba4:
    // 0x19cba4: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
label_19cba8:
    if (ctx->pc == 0x19CBA8u) {
        ctx->pc = 0x19CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBA4u;
        // 0x19cba8: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBACu;
        goto label_19cbac;
    }
    ctx->pc = 0x19CBA4u;
    {
        const bool branch_taken_0x19cba4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBA4u;
        // 0x19cba8: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cba4) {
            ctx->pc = 0x19CC44u;
            goto label_19cc44;
        }
    }
    ctx->pc = 0x19CBACu;
label_19cbac:
    // 0x19cbac: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x19cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_19cbb0:
    // 0x19cbb0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_19cbb4:
    if (ctx->pc == 0x19CBB4u) {
        ctx->pc = 0x19CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBB0u;
        // 0x19cbb4: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBB8u;
        goto label_19cbb8;
    }
    ctx->pc = 0x19CBB0u;
    {
        const bool branch_taken_0x19cbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cbb0) {
            ctx->pc = 0x19CBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CBB0u;
            // 0x19cbb4: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CBBCu;
            goto label_19cbbc;
        }
    }
    ctx->pc = 0x19CBB8u;
label_19cbb8:
    // 0x19cbb8: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x19cbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_19cbbc:
    // 0x19cbbc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x19cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19cbc0:
    // 0x19cbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19cbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19cbc4:
    // 0x19cbc4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x19cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_19cbc8:
    // 0x19cbc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cbcc:
    // 0x19cbcc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_19cbd0:
    // 0x19cbd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19cbd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cbd4:
    // 0x19cbd4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x19cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_19cbd8:
    // 0x19cbd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19cbd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cbdc:
    // 0x19cbdc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19cbe0:
    // 0x19cbe0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x19cbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19cbe4:
    // 0x19cbe4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x19cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_19cbe8:
    // 0x19cbe8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19cbe8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19cbec:
    // 0x19cbec: 0xc067322  jal         func_19CC88
label_19cbf0:
    if (ctx->pc == 0x19CBF0u) {
        ctx->pc = 0x19CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBECu;
        // 0x19cbf0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBF4u;
        goto label_19cbf4;
    }
    ctx->pc = 0x19CBECu;
    SET_GPR_U32(ctx, 31, 0x19CBF4u);
    ctx->pc = 0x19CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CBECu;
    // 0x19cbf0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    goto label_19cc88;
    ctx->pc = 0x19CBF4u;
label_19cbf4:
    // 0x19cbf4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x19cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_19cbf8:
    // 0x19cbf8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_19cbfc:
    if (ctx->pc == 0x19CBFCu) {
        ctx->pc = 0x19CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBF8u;
        // 0x19cbfc: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC00u;
        goto label_19cc00;
    }
    ctx->pc = 0x19CBF8u;
    {
        const bool branch_taken_0x19cbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cbf8) {
            ctx->pc = 0x19CBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CBF8u;
            // 0x19cbfc: 0x8e2501cc  lw          $a1, 0x1CC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CC04u;
            goto label_19cc04;
        }
    }
    ctx->pc = 0x19CC00u;
label_19cc00:
    // 0x19cc00: 0x8e2501dc  lw          $a1, 0x1DC($s1)
    ctx->pc = 0x19cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_19cc04:
    // 0x19cc04: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x19cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_19cc08:
    // 0x19cc08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19cc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19cc0c:
    // 0x19cc0c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x19cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_19cc10:
    // 0x19cc10: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x19cc10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19cc14:
    // 0x19cc14: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_19cc18:
    // 0x19cc18: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x19cc18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19cc1c:
    // 0x19cc1c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19cc20:
    // 0x19cc20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cc20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cc24:
    // 0x19cc24: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x19cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_19cc28:
    // 0x19cc28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19cc28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cc2c:
    // 0x19cc2c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19cc30:
    // 0x19cc30: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x19cc30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19cc34:
    // 0x19cc34: 0xc067322  jal         func_19CC88
label_19cc38:
    if (ctx->pc == 0x19CC38u) {
        ctx->pc = 0x19CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC34u;
        // 0x19cc38: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC3Cu;
        goto label_19cc3c;
    }
    ctx->pc = 0x19CC34u;
    SET_GPR_U32(ctx, 31, 0x19CC3Cu);
    ctx->pc = 0x19CC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC34u;
    // 0x19cc38: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CC88u;
    goto label_19cc88;
    ctx->pc = 0x19CC3Cu;
label_19cc3c:
    // 0x19cc3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_19cc40:
    if (ctx->pc == 0x19CC40u) {
        ctx->pc = 0x19CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC3Cu;
        // 0x19cc40: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC44u;
        goto label_19cc44;
    }
    ctx->pc = 0x19CC3Cu;
    {
        const bool branch_taken_0x19cc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC3Cu;
        // 0x19cc40: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc3c) {
            ctx->pc = 0x19CC58u;
            goto label_19cc58;
        }
    }
    ctx->pc = 0x19CC44u;
label_19cc44:
    // 0x19cc44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19cc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19cc48:
    // 0x19cc48: 0x24a5a010  addiu       $a1, $a1, -0x5FF0
    ctx->pc = 0x19cc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942736));
label_19cc4c:
    // 0x19cc4c: 0xc068d1e  jal         func_1A3478
label_19cc50:
    if (ctx->pc == 0x19CC50u) {
        ctx->pc = 0x19CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC4Cu;
        // 0x19cc50: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC54u;
        goto label_19cc54;
    }
    ctx->pc = 0x19CC4Cu;
    SET_GPR_U32(ctx, 31, 0x19CC54u);
    ctx->pc = 0x19CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CC4Cu;
    // 0x19cc50: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    { ctx->pc = 0x1a3478; return; }
    ctx->pc = 0x19CC54u;
label_19cc54:
    // 0x19cc54: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x19cc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_19cc58:
    // 0x19cc58: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x19cc58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_19cc5c:
    // 0x19cc5c: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x19cc5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_19cc60:
    // 0x19cc60: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x19cc60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_19cc64:
    // 0x19cc64: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x19cc64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19cc68:
    // 0x19cc68: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x19cc68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19cc6c:
    // 0x19cc6c: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x19cc6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19cc70:
    // 0x19cc70: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x19cc70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19cc74:
    // 0x19cc74: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x19cc74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19cc78:
    // 0x19cc78: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x19cc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19cc7c:
    // 0x19cc7c: 0x3e00008  jr          $ra
label_19cc80:
    if (ctx->pc == 0x19CC80u) {
        ctx->pc = 0x19CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC7Cu;
        // 0x19cc80: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CC84u;
        goto label_19cc84;
    }
    ctx->pc = 0x19CC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC7Cu;
        // 0x19cc80: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CC84u;
label_19cc84:
    // 0x19cc84: 0x0  nop
    ctx->pc = 0x19cc84u;
    // NOP
label_19cc88:
    // 0x19cc88: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x19cc88u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19cc8c:
    // 0x19cc8c: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19cc8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19cc90:
    // 0x19cc90: 0x270206bc  addiu       $v0, $t8, 0x6BC
    ctx->pc = 0x19cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 1724));
label_19cc94:
    // 0x19cc94: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x19cc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_19cc98:
    // 0x19cc98: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x19cc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_19cc9c:
    // 0x19cc9c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19cca0:
    // 0x19cca0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x19cca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_19cca4:
    // 0x19cca4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x19cca4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19cca8:
    // 0x19cca8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x19cca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_19ccac:
    // 0x19ccac: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x19ccacu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_19ccb0:
    // 0x19ccb0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19ccb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_19ccb4:
    // 0x19ccb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19ccb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19ccb8:
    // 0x19ccb8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x19ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_19ccbc:
    // 0x19ccbc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x19ccbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19ccc0:
    // 0x19ccc0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x19ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_19ccc4:
    // 0x19ccc4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x19ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_19ccc8:
    // 0x19ccc8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x19ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_19cccc:
    // 0x19cccc: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x19ccccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_19ccd0:
    // 0x19ccd0: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x19ccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_19ccd4:
    // 0x19ccd4: 0x8f04081c  lw          $a0, 0x81C($t8)
    ctx->pc = 0x19ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2076)));
label_19ccd8:
    // 0x19ccd8: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x19ccd8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_19ccdc:
    // 0x19ccdc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x19ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_19cce0:
    // 0x19cce0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x19cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_19cce4:
    // 0x19cce4: 0x8fad00c0  lw          $t5, 0xC0($sp)
    ctx->pc = 0x19cce4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_19cce8:
    // 0x19cce8: 0x8f020810  lw          $v0, 0x810($t8)
    ctx->pc = 0x19cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
label_19ccec:
    // 0x19ccec: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x19ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
label_19ccf0:
    // 0x19ccf0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x19ccf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_19ccf4:
    // 0x19ccf4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x19ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_19ccf8:
    // 0x19ccf8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x19ccf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_19ccfc:
    // 0x19ccfc: 0x165043  sra         $t2, $s6, 1
    ctx->pc = 0x19ccfcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 22), 1));
label_19cd00:
    // 0x19cd00: 0x8fb200b8  lw          $s2, 0xB8($sp)
    ctx->pc = 0x19cd00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_19cd04:
    // 0x19cd04: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x19cd04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_19cd08:
    // 0x19cd08: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x19cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_19cd0c:
    // 0x19cd0c: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x19cd0cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19cd10:
    // 0x19cd10: 0x24420590  addiu       $v0, $v0, 0x590
    ctx->pc = 0x19cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1424));
label_19cd14:
    // 0x19cd14: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x19cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
label_19cd18:
    // 0x19cd18: 0x2e42018  mult        $a0, $s7, $a0
    ctx->pc = 0x19cd18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19cd1c:
    // 0x19cd1c: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x19cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
label_19cd20:
    // 0x19cd20: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x19cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_19cd24:
    // 0x19cd24: 0x437821  addu        $t7, $v0, $v1
    ctx->pc = 0x19cd24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19cd28:
    // 0x19cd28: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
label_19cd2c:
    if (ctx->pc == 0x19CD2Cu) {
        ctx->pc = 0x19CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD28u;
        // 0x19cd2c: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD30u;
        goto label_19cd30;
    }
    ctx->pc = 0x19CD28u;
    {
        const bool branch_taken_0x19cd28 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD28u;
        // 0x19cd2c: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd28) {
            ctx->pc = 0x19CD40u;
            goto label_19cd40;
        }
    }
    ctx->pc = 0x19CD30u;
label_19cd30:
    // 0x19cd30: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x19cd30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
label_19cd34:
    // 0x19cd34: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x19cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_19cd38:
    // 0x19cd38: 0x10000003  b           . + 4 + (0x3 << 2)
label_19cd3c:
    if (ctx->pc == 0x19CD3Cu) {
        ctx->pc = 0x19CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD38u;
        // 0x19cd3c: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD40u;
        goto label_19cd40;
    }
    ctx->pc = 0x19CD38u;
    {
        const bool branch_taken_0x19cd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD38u;
        // 0x19cd3c: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd38) {
            ctx->pc = 0x19CD48u;
            goto label_19cd48;
        }
    }
    ctx->pc = 0x19CD40u;
label_19cd40:
    // 0x19cd40: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x19cd40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
label_19cd44:
    // 0x19cd44: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x19cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_19cd48:
    // 0x19cd48: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x19cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_19cd4c:
    // 0x19cd4c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x19cd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19cd50:
    // 0x19cd50: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x19cd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_19cd54:
    // 0x19cd54: 0x8a103  sra         $s4, $t0, 4
    ctx->pc = 0x19cd54u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), 4));
label_19cd58:
    // 0x19cd58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19cd5c:
    // 0x19cd5c: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x19cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_19cd60:
    // 0x19cd60: 0x2852818  mult        $a1, $s4, $a1
    ctx->pc = 0x19cd60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19cd64:
    // 0x19cd64: 0x6a903  sra         $s5, $a2, 4
    ctx->pc = 0x19cd64u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 4));
label_19cd68:
    // 0x19cd68: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x19cd68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_19cd6c:
    // 0x19cd6c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_19cd70:
    // 0x19cd70: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x19cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_19cd74:
    // 0x19cd74: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x19cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_19cd78:
    // 0x19cd78: 0xad830004  sw          $v1, 0x4($t4)
    ctx->pc = 0x19cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
label_19cd7c:
    // 0x19cd7c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x19cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_19cd80:
    // 0x19cd80: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x19cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_19cd84:
    // 0x19cd84: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x19cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_19cd88:
    // 0x19cd88: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x19cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_19cd8c:
    // 0x19cd8c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x19cd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_19cd90:
    // 0x19cd90: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x19cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
label_19cd94:
    // 0x19cd94: 0x32590001  andi        $t9, $s2, 0x1
    ctx->pc = 0x19cd94u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_19cd98:
    // 0x19cd98: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
label_19cd9c:
    if (ctx->pc == 0x19CD9Cu) {
        ctx->pc = 0x19CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD98u;
        // 0x19cd9c: 0x32d30001  andi        $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDA0u;
        goto label_19cda0;
    }
    ctx->pc = 0x19CD98u;
    {
        const bool branch_taken_0x19cd98 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD98u;
        // 0x19cd9c: 0x32d30001  andi        $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd98) {
            ctx->pc = 0x19CDD8u;
            goto label_19cdd8;
        }
    }
    ctx->pc = 0x19CDA0u;
label_19cda0:
    // 0x19cda0: 0x1ae1004  sllv        $v0, $t6, $t5
    ctx->pc = 0x19cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
label_19cda4:
    // 0x19cda4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x19cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_19cda8:
    // 0x19cda8: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x19cda8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_19cdac:
    // 0x19cdac: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_19cdb0:
    if (ctx->pc == 0x19CDB0u) {
        ctx->pc = 0x19CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDACu;
        // 0x19cdb0: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDB4u;
        goto label_19cdb4;
    }
    ctx->pc = 0x19CDACu;
    {
        const bool branch_taken_0x19cdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cdac) {
            ctx->pc = 0x19CDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CDACu;
            // 0x19cdb0: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CE0Cu;
            goto label_19ce0c;
        }
    }
    ctx->pc = 0x19CDB4u;
label_19cdb4:
    // 0x19cdb4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19cdb8:
    // 0x19cdb8: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x19cdb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
label_19cdbc:
    // 0x19cdbc: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x19cdbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
label_19cdc0:
    // 0x19cdc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19cdc4:
    // 0x19cdc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19cdc8:
    // 0x19cdc8: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x19cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_19cdcc:
    // 0x19cdcc: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x19cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
label_19cdd0:
    // 0x19cdd0: 0x1000000f  b           . + 4 + (0xF << 2)
label_19cdd4:
    if (ctx->pc == 0x19CDD4u) {
        ctx->pc = 0x19CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDD0u;
        // 0x19cdd4: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDD8u;
        goto label_19cdd8;
    }
    ctx->pc = 0x19CDD0u;
    {
        const bool branch_taken_0x19cdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDD0u;
        // 0x19cdd4: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdd0) {
            ctx->pc = 0x19CE10u;
            goto label_19ce10;
        }
    }
    ctx->pc = 0x19CDD8u;
label_19cdd8:
    // 0x19cdd8: 0x1ae1004  sllv        $v0, $t6, $t5
    ctx->pc = 0x19cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
label_19cddc:
    // 0x19cddc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x19cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_19cde0:
    // 0x19cde0: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x19cde0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
label_19cde4:
    // 0x19cde4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_19cde8:
    if (ctx->pc == 0x19CDE8u) {
        ctx->pc = 0x19CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDE4u;
        // 0x19cde8: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDECu;
        goto label_19cdec;
    }
    ctx->pc = 0x19CDE4u;
    {
        const bool branch_taken_0x19cde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cde4) {
            ctx->pc = 0x19CDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CDE4u;
            // 0x19cde8: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CE0Cu;
            goto label_19ce0c;
        }
    }
    ctx->pc = 0x19CDECu;
label_19cdec:
    // 0x19cdec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19cdf0:
    // 0x19cdf0: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x19cdf0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
label_19cdf4:
    // 0x19cdf4: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x19cdf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
label_19cdf8:
    // 0x19cdf8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19cdfc:
    // 0x19cdfc: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x19cdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_19ce00:
    // 0x19ce00: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x19ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
label_19ce04:
    // 0x19ce04: 0x10000002  b           . + 4 + (0x2 << 2)
label_19ce08:
    if (ctx->pc == 0x19CE08u) {
        ctx->pc = 0x19CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE04u;
        // 0x19ce08: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE0Cu;
        goto label_19ce0c;
    }
    ctx->pc = 0x19CE04u;
    {
        const bool branch_taken_0x19ce04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE04u;
        // 0x19ce08: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce04) {
            ctx->pc = 0x19CE10u;
            goto label_19ce10;
        }
    }
    ctx->pc = 0x19CE0Cu;
label_19ce0c:
    // 0x19ce0c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x19ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_19ce10:
    // 0x19ce10: 0x8f050810  lw          $a1, 0x810($t8)
    ctx->pc = 0x19ce10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
label_19ce14:
    // 0x19ce14: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x19ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19ce18:
    // 0x19ce18: 0x24070600  addiu       $a3, $zero, 0x600
    ctx->pc = 0x19ce18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_19ce1c:
    // 0x19ce1c: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x19ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_19ce20:
    // 0x19ce20: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x19ce20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19ce24:
    // 0x19ce24: 0x2e73818  mult        $a3, $s7, $a3
    ctx->pc = 0x19ce24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_19ce28:
    // 0x19ce28: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x19ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_19ce2c:
    // 0x19ce2c: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x19ce2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_19ce30:
    // 0x19ce30: 0x252a0300  addiu       $t2, $t1, 0x300
    ctx->pc = 0x19ce30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 768));
label_19ce34:
    // 0x19ce34: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19ce34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19ce38:
    // 0x19ce38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19ce3c:
    // 0x19ce3c: 0x1a63004  sllv        $a2, $a2, $t5
    ctx->pc = 0x19ce3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
label_19ce40:
    // 0x19ce40: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x19ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_19ce44:
    // 0x19ce44: 0x782821  addu        $a1, $v1, $t8
    ctx->pc = 0x19ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
label_19ce48:
    // 0x19ce48: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x19ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_19ce4c:
    // 0x19ce4c: 0x161fc2  srl         $v1, $s6, 31
    ctx->pc = 0x19ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
label_19ce50:
    // 0x19ce50: 0x8ca80590  lw          $t0, 0x590($a1)
    ctx->pc = 0x19ce50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1424)));
label_19ce54:
    // 0x19ce54: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x19ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_19ce58:
    // 0x19ce58: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x19ce58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_19ce5c:
    // 0x19ce5c: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x19ce5cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
label_19ce60:
    // 0x19ce60: 0x1079021  addu        $s2, $t0, $a3
    ctx->pc = 0x19ce60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_19ce64:
    // 0x19ce64: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19ce64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_19ce68:
    // 0x19ce68: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x19ce68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_19ce6c:
    // 0x19ce6c: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x19ce6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_19ce70:
    // 0x19ce70: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x19ce70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_19ce74:
    // 0x19ce74: 0x5b043  sra         $s6, $a1, 1
    ctx->pc = 0x19ce74u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 1));
label_19ce78:
    // 0x19ce78: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x19ce78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_19ce7c:
    // 0x19ce7c: 0x992025  or          $a0, $a0, $t9
    ctx->pc = 0x19ce7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 25));
label_19ce80:
    // 0x19ce80: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x19ce80u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
label_19ce84:
    // 0x19ce84: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x19ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_19ce88:
    // 0x19ce88: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x19ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_19ce8c:
    // 0x19ce8c: 0xad890014  sw          $t1, 0x14($t4)
    ctx->pc = 0x19ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 9));
label_19ce90:
    // 0x19ce90: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x19ce90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
label_19ce94:
    // 0x19ce94: 0xad860010  sw          $a2, 0x10($t4)
    ctx->pc = 0x19ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 6));
label_19ce98:
    // 0x19ce98: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x19ce98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19ce9c:
    // 0x19ce9c: 0xad8a0018  sw          $t2, 0x18($t4)
    ctx->pc = 0x19ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 10));
label_19cea0:
    // 0x19cea0: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
label_19cea4:
    if (ctx->pc == 0x19CEA4u) {
        ctx->pc = 0x19CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEA0u;
        // 0x19cea4: 0xe4843  sra         $t1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEA8u;
        goto label_19cea8;
    }
    ctx->pc = 0x19CEA0u;
    {
        const bool branch_taken_0x19cea0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEA0u;
        // 0x19cea4: 0xe4843  sra         $t1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cea0) {
            ctx->pc = 0x19CEC4u;
            goto label_19cec4;
        }
    }
    ctx->pc = 0x19CEA8u;
label_19cea8:
    // 0x19cea8: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x19cea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
label_19ceac:
    // 0x19ceac: 0xb2043  sra         $a0, $t3, 1
    ctx->pc = 0x19ceacu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 1));
label_19ceb0:
    // 0x19ceb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_19ceb4:
    // 0x19ceb4: 0xf11821  addu        $v1, $a3, $s1
    ctx->pc = 0x19ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_19ceb8:
    // 0x19ceb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19cebc:
    // 0x19cebc: 0x10000006  b           . + 4 + (0x6 << 2)
label_19cec0:
    if (ctx->pc == 0x19CEC0u) {
        ctx->pc = 0x19CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEBCu;
        // 0x19cec0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEC4u;
        goto label_19cec4;
    }
    ctx->pc = 0x19CEBCu;
    {
        const bool branch_taken_0x19cebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEBCu;
        // 0x19cec0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cebc) {
            ctx->pc = 0x19CED8u;
            goto label_19ced8;
        }
    }
    ctx->pc = 0x19CEC4u;
label_19cec4:
    // 0x19cec4: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x19cec4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
label_19cec8:
    // 0x19cec8: 0xb1843  sra         $v1, $t3, 1
    ctx->pc = 0x19cec8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 1));
label_19cecc:
    // 0x19cecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19ced0:
    // 0x19ced0: 0xf12021  addu        $a0, $a3, $s1
    ctx->pc = 0x19ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_19ced4:
    // 0x19ced4: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x19ced4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19ced8:
    // 0x19ced8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19ced8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19cedc:
    // 0x19cedc: 0x650c3  sra         $t2, $a2, 3
    ctx->pc = 0x19cedcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 3));
label_19cee0:
    // 0x19cee0: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_19cee4:
    // 0x19cee4: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x19cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_19cee8:
    // 0x19cee8: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x19cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_19ceec:
    // 0x19ceec: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x19ceecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_19cef0:
    // 0x19cef0: 0x838c3  sra         $a3, $t0, 3
    ctx->pc = 0x19cef0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 3));
label_19cef4:
    // 0x19cef4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19cef8:
    // 0x19cef8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x19cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_19cefc:
    // 0x19cefc: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x19cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_19cf00:
    // 0x19cf00: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x19cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_19cf04:
    // 0x19cf04: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x19cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_19cf08:
    // 0x19cf08: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x19cf08u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_19cf0c:
    // 0x19cf0c: 0x32d90001  andi        $t9, $s6, 0x1
    ctx->pc = 0x19cf0cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_19cf10:
    // 0x19cf10: 0xade30004  sw          $v1, 0x4($t7)
    ctx->pc = 0x19cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 3));
label_19cf14:
    // 0x19cf14: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
label_19cf18:
    if (ctx->pc == 0x19CF18u) {
        ctx->pc = 0x19CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF14u;
        // 0x19cf18: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF1Cu;
        goto label_19cf1c;
    }
    ctx->pc = 0x19CF14u;
    {
        const bool branch_taken_0x19cf14 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF14u;
        // 0x19cf18: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf14) {
            ctx->pc = 0x19CF54u;
            goto label_19cf54;
        }
    }
    ctx->pc = 0x19CF1Cu;
label_19cf1c:
    // 0x19cf1c: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x19cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
label_19cf20:
    // 0x19cf20: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x19cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_19cf24:
    // 0x19cf24: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x19cf24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_19cf28:
    // 0x19cf28: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_19cf2c:
    if (ctx->pc == 0x19CF2Cu) {
        ctx->pc = 0x19CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF28u;
        // 0x19cf2c: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF30u;
        goto label_19cf30;
    }
    ctx->pc = 0x19CF28u;
    {
        const bool branch_taken_0x19cf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cf28) {
            ctx->pc = 0x19CF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CF28u;
            // 0x19cf2c: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CF88u;
            goto label_19cf88;
        }
    }
    ctx->pc = 0x19CF30u;
label_19cf30:
    // 0x19cf30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19cf34:
    // 0x19cf34: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x19cf34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
label_19cf38:
    // 0x19cf38: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x19cf38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
label_19cf3c:
    // 0x19cf3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19cf40:
    // 0x19cf40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19cf44:
    // 0x19cf44: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x19cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_19cf48:
    // 0x19cf48: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x19cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
label_19cf4c:
    // 0x19cf4c: 0x1000000f  b           . + 4 + (0xF << 2)
label_19cf50:
    if (ctx->pc == 0x19CF50u) {
        ctx->pc = 0x19CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF4Cu;
        // 0x19cf50: 0xade3000c  sw          $v1, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF54u;
        goto label_19cf54;
    }
    ctx->pc = 0x19CF4Cu;
    {
        const bool branch_taken_0x19cf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF4Cu;
        // 0x19cf50: 0xade3000c  sw          $v1, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf4c) {
            ctx->pc = 0x19CF8Cu;
            goto label_19cf8c;
        }
    }
    ctx->pc = 0x19CF54u;
label_19cf54:
    // 0x19cf54: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x19cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
label_19cf58:
    // 0x19cf58: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x19cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_19cf5c:
    // 0x19cf5c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x19cf5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_19cf60:
    // 0x19cf60: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_19cf64:
    if (ctx->pc == 0x19CF64u) {
        ctx->pc = 0x19CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF60u;
        // 0x19cf64: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF68u;
        goto label_19cf68;
    }
    ctx->pc = 0x19CF60u;
    {
        const bool branch_taken_0x19cf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cf60) {
            ctx->pc = 0x19CF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CF60u;
            // 0x19cf64: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CF88u;
            goto label_19cf88;
        }
    }
    ctx->pc = 0x19CF68u;
label_19cf68:
    // 0x19cf68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19cf6c:
    // 0x19cf6c: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x19cf6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
label_19cf70:
    // 0x19cf70: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x19cf70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
label_19cf74:
    // 0x19cf74: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19cf78:
    // 0x19cf78: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x19cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_19cf7c:
    // 0x19cf7c: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x19cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
label_19cf80:
    // 0x19cf80: 0x10000002  b           . + 4 + (0x2 << 2)
label_19cf84:
    if (ctx->pc == 0x19CF84u) {
        ctx->pc = 0x19CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF80u;
        // 0x19cf84: 0xade4000c  sw          $a0, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF88u;
        goto label_19cf88;
    }
    ctx->pc = 0x19CF80u;
    {
        const bool branch_taken_0x19cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF80u;
        // 0x19cf84: 0xade4000c  sw          $a0, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf80) {
            ctx->pc = 0x19CF8Cu;
            goto label_19cf8c;
        }
    }
    ctx->pc = 0x19CF88u;
label_19cf88:
    // 0x19cf88: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x19cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
label_19cf8c:
    // 0x19cf8c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19cf90:
    // 0x19cf90: 0xf42023  subu        $a0, $a3, $s4
    ctx->pc = 0x19cf90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_19cf94:
    // 0x19cf94: 0x1a21004  sllv        $v0, $v0, $t5
    ctx->pc = 0x19cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
label_19cf98:
    // 0x19cf98: 0x1551823  subu        $v1, $t2, $s5
    ctx->pc = 0x19cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
label_19cf9c:
    // 0x19cf9c: 0xade20010  sw          $v0, 0x10($t7)
    ctx->pc = 0x19cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 2));
label_19cfa0:
    // 0x19cfa0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x19cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_19cfa4:
    // 0x19cfa4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19cfa8:
    // 0x19cfa8: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x19cfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19cfac:
    // 0x19cfac: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x19cfacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_19cfb0:
    // 0x19cfb0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x19cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_19cfb4:
    // 0x19cfb4: 0x8f080810  lw          $t0, 0x810($t8)
    ctx->pc = 0x19cfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
label_19cfb8:
    // 0x19cfb8: 0x240a0180  addiu       $t2, $zero, 0x180
    ctx->pc = 0x19cfb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_19cfbc:
    // 0x19cfbc: 0x8fac0010  lw          $t4, 0x10($sp)
    ctx->pc = 0x19cfbcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x19cfc0u;
    return;
}
