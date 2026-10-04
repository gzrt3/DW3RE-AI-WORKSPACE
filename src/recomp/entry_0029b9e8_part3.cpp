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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part3(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29c988u: goto label_29c988;
        case 0x29c98cu: goto label_29c98c;
        case 0x29c990u: goto label_29c990;
        case 0x29c994u: goto label_29c994;
        case 0x29c998u: goto label_29c998;
        case 0x29c99cu: goto label_29c99c;
        case 0x29c9a0u: goto label_29c9a0;
        case 0x29c9a4u: goto label_29c9a4;
        case 0x29c9a8u: goto label_29c9a8;
        case 0x29c9acu: goto label_29c9ac;
        case 0x29c9b0u: goto label_29c9b0;
        case 0x29c9b4u: goto label_29c9b4;
        case 0x29c9b8u: goto label_29c9b8;
        case 0x29c9bcu: goto label_29c9bc;
        case 0x29c9c0u: goto label_29c9c0;
        case 0x29c9c4u: goto label_29c9c4;
        case 0x29c9c8u: goto label_29c9c8;
        case 0x29c9ccu: goto label_29c9cc;
        case 0x29c9d0u: goto label_29c9d0;
        case 0x29c9d4u: goto label_29c9d4;
        case 0x29c9d8u: goto label_29c9d8;
        case 0x29c9dcu: goto label_29c9dc;
        case 0x29c9e0u: goto label_29c9e0;
        case 0x29c9e4u: goto label_29c9e4;
        case 0x29c9e8u: goto label_29c9e8;
        case 0x29c9ecu: goto label_29c9ec;
        case 0x29c9f0u: goto label_29c9f0;
        case 0x29c9f4u: goto label_29c9f4;
        case 0x29c9f8u: goto label_29c9f8;
        case 0x29c9fcu: goto label_29c9fc;
        case 0x29ca00u: goto label_29ca00;
        case 0x29ca04u: goto label_29ca04;
        case 0x29ca08u: goto label_29ca08;
        case 0x29ca0cu: goto label_29ca0c;
        case 0x29ca10u: goto label_29ca10;
        case 0x29ca14u: goto label_29ca14;
        case 0x29ca18u: goto label_29ca18;
        case 0x29ca1cu: goto label_29ca1c;
        case 0x29ca20u: goto label_29ca20;
        case 0x29ca24u: goto label_29ca24;
        case 0x29ca28u: goto label_29ca28;
        case 0x29ca2cu: goto label_29ca2c;
        case 0x29ca30u: goto label_29ca30;
        case 0x29ca34u: goto label_29ca34;
        case 0x29ca38u: goto label_29ca38;
        case 0x29ca3cu: goto label_29ca3c;
        case 0x29ca40u: goto label_29ca40;
        case 0x29ca44u: goto label_29ca44;
        case 0x29ca48u: goto label_29ca48;
        case 0x29ca4cu: goto label_29ca4c;
        case 0x29ca50u: goto label_29ca50;
        case 0x29ca54u: goto label_29ca54;
        case 0x29ca58u: goto label_29ca58;
        case 0x29ca5cu: goto label_29ca5c;
        case 0x29ca60u: goto label_29ca60;
        case 0x29ca64u: goto label_29ca64;
        case 0x29ca68u: goto label_29ca68;
        case 0x29ca6cu: goto label_29ca6c;
        case 0x29ca70u: goto label_29ca70;
        case 0x29ca74u: goto label_29ca74;
        case 0x29ca78u: goto label_29ca78;
        case 0x29ca7cu: goto label_29ca7c;
        case 0x29ca80u: goto label_29ca80;
        case 0x29ca84u: goto label_29ca84;
        case 0x29ca88u: goto label_29ca88;
        case 0x29ca8cu: goto label_29ca8c;
        case 0x29ca90u: goto label_29ca90;
        case 0x29ca94u: goto label_29ca94;
        case 0x29ca98u: goto label_29ca98;
        case 0x29ca9cu: goto label_29ca9c;
        case 0x29caa0u: goto label_29caa0;
        case 0x29caa4u: goto label_29caa4;
        case 0x29caa8u: goto label_29caa8;
        case 0x29caacu: goto label_29caac;
        case 0x29cab0u: goto label_29cab0;
        case 0x29cab4u: goto label_29cab4;
        case 0x29cab8u: goto label_29cab8;
        case 0x29cabcu: goto label_29cabc;
        case 0x29cac0u: goto label_29cac0;
        case 0x29cac4u: goto label_29cac4;
        case 0x29cac8u: goto label_29cac8;
        case 0x29caccu: goto label_29cacc;
        case 0x29cad0u: goto label_29cad0;
        case 0x29cad4u: goto label_29cad4;
        case 0x29cad8u: goto label_29cad8;
        case 0x29cadcu: goto label_29cadc;
        case 0x29cae0u: goto label_29cae0;
        case 0x29cae4u: goto label_29cae4;
        case 0x29cae8u: goto label_29cae8;
        case 0x29caecu: goto label_29caec;
        case 0x29caf0u: goto label_29caf0;
        case 0x29caf4u: goto label_29caf4;
        case 0x29caf8u: goto label_29caf8;
        case 0x29cafcu: goto label_29cafc;
        case 0x29cb00u: goto label_29cb00;
        case 0x29cb04u: goto label_29cb04;
        case 0x29cb08u: goto label_29cb08;
        case 0x29cb0cu: goto label_29cb0c;
        case 0x29cb10u: goto label_29cb10;
        case 0x29cb14u: goto label_29cb14;
        case 0x29cb18u: goto label_29cb18;
        case 0x29cb1cu: goto label_29cb1c;
        case 0x29cb20u: goto label_29cb20;
        case 0x29cb24u: goto label_29cb24;
        case 0x29cb28u: goto label_29cb28;
        case 0x29cb2cu: goto label_29cb2c;
        case 0x29cb30u: goto label_29cb30;
        case 0x29cb34u: goto label_29cb34;
        case 0x29cb38u: goto label_29cb38;
        case 0x29cb3cu: goto label_29cb3c;
        case 0x29cb40u: goto label_29cb40;
        case 0x29cb44u: goto label_29cb44;
        case 0x29cb48u: goto label_29cb48;
        case 0x29cb4cu: goto label_29cb4c;
        case 0x29cb50u: goto label_29cb50;
        case 0x29cb54u: goto label_29cb54;
        case 0x29cb58u: goto label_29cb58;
        case 0x29cb5cu: goto label_29cb5c;
        case 0x29cb60u: goto label_29cb60;
        case 0x29cb64u: goto label_29cb64;
        case 0x29cb68u: goto label_29cb68;
        case 0x29cb6cu: goto label_29cb6c;
        case 0x29cb70u: goto label_29cb70;
        case 0x29cb74u: goto label_29cb74;
        case 0x29cb78u: goto label_29cb78;
        case 0x29cb7cu: goto label_29cb7c;
        case 0x29cb80u: goto label_29cb80;
        case 0x29cb84u: goto label_29cb84;
        case 0x29cb88u: goto label_29cb88;
        case 0x29cb8cu: goto label_29cb8c;
        case 0x29cb90u: goto label_29cb90;
        case 0x29cb94u: goto label_29cb94;
        case 0x29cb98u: goto label_29cb98;
        case 0x29cb9cu: goto label_29cb9c;
        case 0x29cba0u: goto label_29cba0;
        case 0x29cba4u: goto label_29cba4;
        case 0x29cba8u: goto label_29cba8;
        case 0x29cbacu: goto label_29cbac;
        case 0x29cbb0u: goto label_29cbb0;
        case 0x29cbb4u: goto label_29cbb4;
        case 0x29cbb8u: goto label_29cbb8;
        case 0x29cbbcu: goto label_29cbbc;
        case 0x29cbc0u: goto label_29cbc0;
        case 0x29cbc4u: goto label_29cbc4;
        case 0x29cbc8u: goto label_29cbc8;
        case 0x29cbccu: goto label_29cbcc;
        case 0x29cbd0u: goto label_29cbd0;
        case 0x29cbd4u: goto label_29cbd4;
        case 0x29cbd8u: goto label_29cbd8;
        case 0x29cbdcu: goto label_29cbdc;
        case 0x29cbe0u: goto label_29cbe0;
        case 0x29cbe4u: goto label_29cbe4;
        case 0x29cbe8u: goto label_29cbe8;
        case 0x29cbecu: goto label_29cbec;
        case 0x29cbf0u: goto label_29cbf0;
        case 0x29cbf4u: goto label_29cbf4;
        case 0x29cbf8u: goto label_29cbf8;
        case 0x29cbfcu: goto label_29cbfc;
        case 0x29cc00u: goto label_29cc00;
        case 0x29cc04u: goto label_29cc04;
        case 0x29cc08u: goto label_29cc08;
        case 0x29cc0cu: goto label_29cc0c;
        case 0x29cc10u: goto label_29cc10;
        case 0x29cc14u: goto label_29cc14;
        case 0x29cc18u: goto label_29cc18;
        case 0x29cc1cu: goto label_29cc1c;
        case 0x29cc20u: goto label_29cc20;
        case 0x29cc24u: goto label_29cc24;
        case 0x29cc28u: goto label_29cc28;
        case 0x29cc2cu: goto label_29cc2c;
        case 0x29cc30u: goto label_29cc30;
        case 0x29cc34u: goto label_29cc34;
        case 0x29cc38u: goto label_29cc38;
        case 0x29cc3cu: goto label_29cc3c;
        case 0x29cc40u: goto label_29cc40;
        case 0x29cc44u: goto label_29cc44;
        case 0x29cc48u: goto label_29cc48;
        case 0x29cc4cu: goto label_29cc4c;
        case 0x29cc50u: goto label_29cc50;
        case 0x29cc54u: goto label_29cc54;
        case 0x29cc58u: goto label_29cc58;
        case 0x29cc5cu: goto label_29cc5c;
        case 0x29cc60u: goto label_29cc60;
        case 0x29cc64u: goto label_29cc64;
        case 0x29cc68u: goto label_29cc68;
        case 0x29cc6cu: goto label_29cc6c;
        case 0x29cc70u: goto label_29cc70;
        case 0x29cc74u: goto label_29cc74;
        case 0x29cc78u: goto label_29cc78;
        case 0x29cc7cu: goto label_29cc7c;
        case 0x29cc80u: goto label_29cc80;
        case 0x29cc84u: goto label_29cc84;
        case 0x29cc88u: goto label_29cc88;
        case 0x29cc8cu: goto label_29cc8c;
        case 0x29cc90u: goto label_29cc90;
        case 0x29cc94u: goto label_29cc94;
        case 0x29cc98u: goto label_29cc98;
        case 0x29cc9cu: goto label_29cc9c;
        case 0x29cca0u: goto label_29cca0;
        case 0x29cca4u: goto label_29cca4;
        case 0x29cca8u: goto label_29cca8;
        case 0x29ccacu: goto label_29ccac;
        case 0x29ccb0u: goto label_29ccb0;
        case 0x29ccb4u: goto label_29ccb4;
        case 0x29ccb8u: goto label_29ccb8;
        case 0x29ccbcu: goto label_29ccbc;
        case 0x29ccc0u: goto label_29ccc0;
        case 0x29ccc4u: goto label_29ccc4;
        case 0x29ccc8u: goto label_29ccc8;
        case 0x29ccccu: goto label_29cccc;
        case 0x29ccd0u: goto label_29ccd0;
        case 0x29ccd4u: goto label_29ccd4;
        case 0x29ccd8u: goto label_29ccd8;
        case 0x29ccdcu: goto label_29ccdc;
        case 0x29cce0u: goto label_29cce0;
        case 0x29cce4u: goto label_29cce4;
        case 0x29cce8u: goto label_29cce8;
        case 0x29ccecu: goto label_29ccec;
        case 0x29ccf0u: goto label_29ccf0;
        case 0x29ccf4u: goto label_29ccf4;
        case 0x29ccf8u: goto label_29ccf8;
        case 0x29ccfcu: goto label_29ccfc;
        case 0x29cd00u: goto label_29cd00;
        case 0x29cd04u: goto label_29cd04;
        case 0x29cd08u: goto label_29cd08;
        case 0x29cd0cu: goto label_29cd0c;
        case 0x29cd10u: goto label_29cd10;
        case 0x29cd14u: goto label_29cd14;
        case 0x29cd18u: goto label_29cd18;
        case 0x29cd1cu: goto label_29cd1c;
        case 0x29cd20u: goto label_29cd20;
        case 0x29cd24u: goto label_29cd24;
        case 0x29cd28u: goto label_29cd28;
        case 0x29cd2cu: goto label_29cd2c;
        case 0x29cd30u: goto label_29cd30;
        case 0x29cd34u: goto label_29cd34;
        case 0x29cd38u: goto label_29cd38;
        case 0x29cd3cu: goto label_29cd3c;
        case 0x29cd40u: goto label_29cd40;
        case 0x29cd44u: goto label_29cd44;
        case 0x29cd48u: goto label_29cd48;
        case 0x29cd4cu: goto label_29cd4c;
        case 0x29cd50u: goto label_29cd50;
        case 0x29cd54u: goto label_29cd54;
        case 0x29cd58u: goto label_29cd58;
        case 0x29cd5cu: goto label_29cd5c;
        case 0x29cd60u: goto label_29cd60;
        case 0x29cd64u: goto label_29cd64;
        case 0x29cd68u: goto label_29cd68;
        case 0x29cd6cu: goto label_29cd6c;
        case 0x29cd70u: goto label_29cd70;
        case 0x29cd74u: goto label_29cd74;
        case 0x29cd78u: goto label_29cd78;
        case 0x29cd7cu: goto label_29cd7c;
        case 0x29cd80u: goto label_29cd80;
        case 0x29cd84u: goto label_29cd84;
        case 0x29cd88u: goto label_29cd88;
        case 0x29cd8cu: goto label_29cd8c;
        case 0x29cd90u: goto label_29cd90;
        case 0x29cd94u: goto label_29cd94;
        case 0x29cd98u: goto label_29cd98;
        case 0x29cd9cu: goto label_29cd9c;
        case 0x29cda0u: goto label_29cda0;
        case 0x29cda4u: goto label_29cda4;
        case 0x29cda8u: goto label_29cda8;
        case 0x29cdacu: goto label_29cdac;
        case 0x29cdb0u: goto label_29cdb0;
        case 0x29cdb4u: goto label_29cdb4;
        case 0x29cdb8u: goto label_29cdb8;
        case 0x29cdbcu: goto label_29cdbc;
        case 0x29cdc0u: goto label_29cdc0;
        case 0x29cdc4u: goto label_29cdc4;
        case 0x29cdc8u: goto label_29cdc8;
        case 0x29cdccu: goto label_29cdcc;
        case 0x29cdd0u: goto label_29cdd0;
        case 0x29cdd4u: goto label_29cdd4;
        case 0x29cdd8u: goto label_29cdd8;
        case 0x29cddcu: goto label_29cddc;
        case 0x29cde0u: goto label_29cde0;
        case 0x29cde4u: goto label_29cde4;
        case 0x29cde8u: goto label_29cde8;
        case 0x29cdecu: goto label_29cdec;
        case 0x29cdf0u: goto label_29cdf0;
        case 0x29cdf4u: goto label_29cdf4;
        case 0x29cdf8u: goto label_29cdf8;
        case 0x29cdfcu: goto label_29cdfc;
        case 0x29ce00u: goto label_29ce00;
        case 0x29ce04u: goto label_29ce04;
        case 0x29ce08u: goto label_29ce08;
        case 0x29ce0cu: goto label_29ce0c;
        case 0x29ce10u: goto label_29ce10;
        case 0x29ce14u: goto label_29ce14;
        case 0x29ce18u: goto label_29ce18;
        case 0x29ce1cu: goto label_29ce1c;
        case 0x29ce20u: goto label_29ce20;
        case 0x29ce24u: goto label_29ce24;
        case 0x29ce28u: goto label_29ce28;
        case 0x29ce2cu: goto label_29ce2c;
        case 0x29ce30u: goto label_29ce30;
        case 0x29ce34u: goto label_29ce34;
        case 0x29ce38u: goto label_29ce38;
        case 0x29ce3cu: goto label_29ce3c;
        case 0x29ce40u: goto label_29ce40;
        case 0x29ce44u: goto label_29ce44;
        case 0x29ce48u: goto label_29ce48;
        case 0x29ce4cu: goto label_29ce4c;
        case 0x29ce50u: goto label_29ce50;
        case 0x29ce54u: goto label_29ce54;
        case 0x29ce58u: goto label_29ce58;
        case 0x29ce5cu: goto label_29ce5c;
        case 0x29ce60u: goto label_29ce60;
        case 0x29ce64u: goto label_29ce64;
        case 0x29ce68u: goto label_29ce68;
        case 0x29ce6cu: goto label_29ce6c;
        case 0x29ce70u: goto label_29ce70;
        case 0x29ce74u: goto label_29ce74;
        case 0x29ce78u: goto label_29ce78;
        case 0x29ce7cu: goto label_29ce7c;
        case 0x29ce80u: goto label_29ce80;
        case 0x29ce84u: goto label_29ce84;
        case 0x29ce88u: goto label_29ce88;
        case 0x29ce8cu: goto label_29ce8c;
        case 0x29ce90u: goto label_29ce90;
        case 0x29ce94u: goto label_29ce94;
        case 0x29ce98u: goto label_29ce98;
        case 0x29ce9cu: goto label_29ce9c;
        case 0x29cea0u: goto label_29cea0;
        case 0x29cea4u: goto label_29cea4;
        case 0x29cea8u: goto label_29cea8;
        case 0x29ceacu: goto label_29ceac;
        case 0x29ceb0u: goto label_29ceb0;
        case 0x29ceb4u: goto label_29ceb4;
        case 0x29ceb8u: goto label_29ceb8;
        case 0x29cebcu: goto label_29cebc;
        case 0x29cec0u: goto label_29cec0;
        case 0x29cec4u: goto label_29cec4;
        case 0x29cec8u: goto label_29cec8;
        case 0x29ceccu: goto label_29cecc;
        case 0x29ced0u: goto label_29ced0;
        case 0x29ced4u: goto label_29ced4;
        case 0x29ced8u: goto label_29ced8;
        case 0x29cedcu: goto label_29cedc;
        case 0x29cee0u: goto label_29cee0;
        case 0x29cee4u: goto label_29cee4;
        case 0x29cee8u: goto label_29cee8;
        case 0x29ceecu: goto label_29ceec;
        case 0x29cef0u: goto label_29cef0;
        case 0x29cef4u: goto label_29cef4;
        case 0x29cef8u: goto label_29cef8;
        case 0x29cefcu: goto label_29cefc;
        case 0x29cf00u: goto label_29cf00;
        case 0x29cf04u: goto label_29cf04;
        case 0x29cf08u: goto label_29cf08;
        case 0x29cf0cu: goto label_29cf0c;
        case 0x29cf10u: goto label_29cf10;
        case 0x29cf14u: goto label_29cf14;
        case 0x29cf18u: goto label_29cf18;
        case 0x29cf1cu: goto label_29cf1c;
        case 0x29cf20u: goto label_29cf20;
        case 0x29cf24u: goto label_29cf24;
        case 0x29cf28u: goto label_29cf28;
        case 0x29cf2cu: goto label_29cf2c;
        case 0x29cf30u: goto label_29cf30;
        case 0x29cf34u: goto label_29cf34;
        case 0x29cf38u: goto label_29cf38;
        case 0x29cf3cu: goto label_29cf3c;
        case 0x29cf40u: goto label_29cf40;
        case 0x29cf44u: goto label_29cf44;
        case 0x29cf48u: goto label_29cf48;
        case 0x29cf4cu: goto label_29cf4c;
        case 0x29cf50u: goto label_29cf50;
        case 0x29cf54u: goto label_29cf54;
        case 0x29cf58u: goto label_29cf58;
        case 0x29cf5cu: goto label_29cf5c;
        case 0x29cf60u: goto label_29cf60;
        case 0x29cf64u: goto label_29cf64;
        case 0x29cf68u: goto label_29cf68;
        case 0x29cf6cu: goto label_29cf6c;
        case 0x29cf70u: goto label_29cf70;
        case 0x29cf74u: goto label_29cf74;
        case 0x29cf78u: goto label_29cf78;
        case 0x29cf7cu: goto label_29cf7c;
        case 0x29cf80u: goto label_29cf80;
        case 0x29cf84u: goto label_29cf84;
        case 0x29cf88u: goto label_29cf88;
        case 0x29cf8cu: goto label_29cf8c;
        case 0x29cf90u: goto label_29cf90;
        case 0x29cf94u: goto label_29cf94;
        case 0x29cf98u: goto label_29cf98;
        case 0x29cf9cu: goto label_29cf9c;
        case 0x29cfa0u: goto label_29cfa0;
        case 0x29cfa4u: goto label_29cfa4;
        case 0x29cfa8u: goto label_29cfa8;
        case 0x29cfacu: goto label_29cfac;
        case 0x29cfb0u: goto label_29cfb0;
        case 0x29cfb4u: goto label_29cfb4;
        case 0x29cfb8u: goto label_29cfb8;
        case 0x29cfbcu: goto label_29cfbc;
        case 0x29cfc0u: goto label_29cfc0;
        case 0x29cfc4u: goto label_29cfc4;
        case 0x29cfc8u: goto label_29cfc8;
        case 0x29cfccu: goto label_29cfcc;
        case 0x29cfd0u: goto label_29cfd0;
        case 0x29cfd4u: goto label_29cfd4;
        case 0x29cfd8u: goto label_29cfd8;
        case 0x29cfdcu: goto label_29cfdc;
        case 0x29cfe0u: goto label_29cfe0;
        case 0x29cfe4u: goto label_29cfe4;
        case 0x29cfe8u: goto label_29cfe8;
        case 0x29cfecu: goto label_29cfec;
        case 0x29cff0u: goto label_29cff0;
        case 0x29cff4u: goto label_29cff4;
        case 0x29cff8u: goto label_29cff8;
        case 0x29cffcu: goto label_29cffc;
        case 0x29d000u: goto label_29d000;
        case 0x29d004u: goto label_29d004;
        case 0x29d008u: goto label_29d008;
        case 0x29d00cu: goto label_29d00c;
        case 0x29d010u: goto label_29d010;
        case 0x29d014u: goto label_29d014;
        case 0x29d018u: goto label_29d018;
        case 0x29d01cu: goto label_29d01c;
        case 0x29d020u: goto label_29d020;
        case 0x29d024u: goto label_29d024;
        case 0x29d028u: goto label_29d028;
        case 0x29d02cu: goto label_29d02c;
        case 0x29d030u: goto label_29d030;
        case 0x29d034u: goto label_29d034;
        case 0x29d038u: goto label_29d038;
        case 0x29d03cu: goto label_29d03c;
        case 0x29d040u: goto label_29d040;
        case 0x29d044u: goto label_29d044;
        case 0x29d048u: goto label_29d048;
        case 0x29d04cu: goto label_29d04c;
        case 0x29d050u: goto label_29d050;
        case 0x29d054u: goto label_29d054;
        case 0x29d058u: goto label_29d058;
        case 0x29d05cu: goto label_29d05c;
        case 0x29d060u: goto label_29d060;
        case 0x29d064u: goto label_29d064;
        case 0x29d068u: goto label_29d068;
        case 0x29d06cu: goto label_29d06c;
        case 0x29d070u: goto label_29d070;
        case 0x29d074u: goto label_29d074;
        case 0x29d078u: goto label_29d078;
        case 0x29d07cu: goto label_29d07c;
        case 0x29d080u: goto label_29d080;
        case 0x29d084u: goto label_29d084;
        case 0x29d088u: goto label_29d088;
        case 0x29d08cu: goto label_29d08c;
        case 0x29d090u: goto label_29d090;
        case 0x29d094u: goto label_29d094;
        case 0x29d098u: goto label_29d098;
        case 0x29d09cu: goto label_29d09c;
        case 0x29d0a0u: goto label_29d0a0;
        case 0x29d0a4u: goto label_29d0a4;
        case 0x29d0a8u: goto label_29d0a8;
        case 0x29d0acu: goto label_29d0ac;
        case 0x29d0b0u: goto label_29d0b0;
        case 0x29d0b4u: goto label_29d0b4;
        case 0x29d0b8u: goto label_29d0b8;
        case 0x29d0bcu: goto label_29d0bc;
        case 0x29d0c0u: goto label_29d0c0;
        case 0x29d0c4u: goto label_29d0c4;
        case 0x29d0c8u: goto label_29d0c8;
        case 0x29d0ccu: goto label_29d0cc;
        case 0x29d0d0u: goto label_29d0d0;
        case 0x29d0d4u: goto label_29d0d4;
        case 0x29d0d8u: goto label_29d0d8;
        case 0x29d0dcu: goto label_29d0dc;
        case 0x29d0e0u: goto label_29d0e0;
        case 0x29d0e4u: goto label_29d0e4;
        case 0x29d0e8u: goto label_29d0e8;
        case 0x29d0ecu: goto label_29d0ec;
        case 0x29d0f0u: goto label_29d0f0;
        case 0x29d0f4u: goto label_29d0f4;
        case 0x29d0f8u: goto label_29d0f8;
        case 0x29d0fcu: goto label_29d0fc;
        case 0x29d100u: goto label_29d100;
        case 0x29d104u: goto label_29d104;
        case 0x29d108u: goto label_29d108;
        case 0x29d10cu: goto label_29d10c;
        case 0x29d110u: goto label_29d110;
        case 0x29d114u: goto label_29d114;
        case 0x29d118u: goto label_29d118;
        case 0x29d11cu: goto label_29d11c;
        case 0x29d120u: goto label_29d120;
        case 0x29d124u: goto label_29d124;
        case 0x29d128u: goto label_29d128;
        case 0x29d12cu: goto label_29d12c;
        case 0x29d130u: goto label_29d130;
        case 0x29d134u: goto label_29d134;
        case 0x29d138u: goto label_29d138;
        case 0x29d13cu: goto label_29d13c;
        case 0x29d140u: goto label_29d140;
        case 0x29d144u: goto label_29d144;
        case 0x29d148u: goto label_29d148;
        case 0x29d14cu: goto label_29d14c;
        case 0x29d150u: goto label_29d150;
        case 0x29d154u: goto label_29d154;
        default: return;
    }

label_29c988:
    // 0x29c988: 0x0  nop
    ctx->pc = 0x29c988u;
    // NOP
label_29c98c:
    // 0x29c98c: 0x0  nop
    ctx->pc = 0x29c98cu;
    // NOP
label_29c990:
    // 0x29c990: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c990u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29c994:
    // 0x29c994: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c994u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29C994 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c998:
    // 0x29c998: 0x0  nop
    ctx->pc = 0x29c998u;
    // NOP
label_29c99c:
    // 0x29c99c: 0x0  nop
    ctx->pc = 0x29c99cu;
    // NOP
label_29c9a0:
    // 0x29c9a0: 0x0  nop
    ctx->pc = 0x29c9a0u;
    // NOP
label_29c9a4:
    // 0x29c9a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c9a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29C9A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c9a8:
    // 0x29c9a8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29c9a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29C9A8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29c9ac:
    // 0x29c9ac: 0x0  nop
    ctx->pc = 0x29c9acu;
    // NOP
label_29c9b0:
    // 0x29c9b0: 0xf  sync
    ctx->pc = 0x29c9b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29c9b4:
    // 0x29c9b4: 0xf  sync
    ctx->pc = 0x29c9b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29c9b8:
    // 0x29c9b8: 0x0  nop
    ctx->pc = 0x29c9b8u;
    // NOP
label_29c9bc:
    // 0x29c9bc: 0x0  nop
    ctx->pc = 0x29c9bcu;
    // NOP
label_29c9c0:
    // 0x29c9c0: 0x0  nop
    ctx->pc = 0x29c9c0u;
    // NOP
label_29c9c4:
    // 0x29c9c4: 0x0  nop
    ctx->pc = 0x29c9c4u;
    // NOP
label_29c9c8:
    // 0x29c9c8: 0x0  nop
    ctx->pc = 0x29c9c8u;
    // NOP
label_29c9cc:
    // 0x29c9cc: 0x0  nop
    ctx->pc = 0x29c9ccu;
    // NOP
label_29c9d0:
    // 0x29c9d0: 0x0  nop
    ctx->pc = 0x29c9d0u;
    // NOP
label_29c9d4:
    // 0x29c9d4: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x29c9d4u;
    
label_29c9d8:
    // 0x29c9d8: 0x0  nop
    ctx->pc = 0x29c9d8u;
    // NOP
label_29c9dc:
    // 0x29c9dc: 0x0  nop
    ctx->pc = 0x29c9dcu;
    // NOP
label_29c9e0:
    // 0x29c9e0: 0x0  nop
    ctx->pc = 0x29c9e0u;
    // NOP
label_29c9e4:
    // 0x29c9e4: 0x0  nop
    ctx->pc = 0x29c9e4u;
    // NOP
label_29c9e8:
    // 0x29c9e8: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x29c9e8u;
    
label_29c9ec:
    // 0x29c9ec: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x29c9ecu;
    
label_29c9f0:
    // 0x29c9f0: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x29c9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29c9f4:
    // 0x29c9f4: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x29c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29c9f8:
    // 0x29c9f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29c9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29c9fc:
    // 0x29c9fc: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x29c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca00:
    // 0x29ca00: 0x8000  sll         $s0, $zero, 0
    ctx->pc = 0x29ca00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca04:
    // 0x29ca04: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x29ca04u;
    
label_29ca08:
    // 0x29ca08: 0x0  nop
    ctx->pc = 0x29ca08u;
    // NOP
label_29ca0c:
    // 0x29ca0c: 0x0  nop
    ctx->pc = 0x29ca0cu;
    // NOP
label_29ca10:
    // 0x29ca10: 0x0  nop
    ctx->pc = 0x29ca10u;
    // NOP
label_29ca14:
    // 0x29ca14: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x29ca14u;
    
label_29ca18:
    // 0x29ca18: 0x0  nop
    ctx->pc = 0x29ca18u;
    // NOP
label_29ca1c:
    // 0x29ca1c: 0x0  nop
    ctx->pc = 0x29ca1cu;
    // NOP
label_29ca20:
    // 0x29ca20: 0x0  nop
    ctx->pc = 0x29ca20u;
    // NOP
label_29ca24:
    // 0x29ca24: 0x0  nop
    ctx->pc = 0x29ca24u;
    // NOP
label_29ca28:
    // 0x29ca28: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x29ca28u;
    
label_29ca2c:
    // 0x29ca2c: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x29ca2cu;
    
label_29ca30:
    // 0x29ca30: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x29ca30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca34:
    // 0x29ca34: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x29ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca38:
    // 0x29ca38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29ca38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca3c:
    // 0x29ca3c: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x29ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca40:
    // 0x29ca40: 0x8000  sll         $s0, $zero, 0
    ctx->pc = 0x29ca40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ca44:
    // 0x29ca44: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x29ca44u;
    
label_29ca48:
    // 0x29ca48: 0x0  nop
    ctx->pc = 0x29ca48u;
    // NOP
label_29ca4c:
    // 0x29ca4c: 0x0  nop
    ctx->pc = 0x29ca4cu;
    // NOP
label_29ca50:
    // 0x29ca50: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29ca50u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ca54:
    // 0x29ca54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ca54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CA54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ca58:
    // 0x29ca58: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29ca58u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29ca5c:
    // 0x29ca5c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ca5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CA5C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ca60:
    // 0x29ca60: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29ca60u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29ca64:
    // 0x29ca64: 0x0  nop
    ctx->pc = 0x29ca64u;
    // NOP
label_29ca68:
    // 0x29ca68: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ca68u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ca6c:
    // 0x29ca6c: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29ca6cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CA6C raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ca70:
    // 0x29ca70: 0x8  jr          $zero
label_29ca74:
    if (ctx->pc == 0x29CA74u) {
        ctx->pc = 0x29CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA70u;
        // 0x29ca74: 0x1f  ddivu       $zero, $zero, $zero (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CA74 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CA78u;
        goto label_29ca78;
    }
    ctx->pc = 0x29CA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA70u;
        // 0x29ca74: 0x1f  ddivu       $zero, $zero, $zero (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CA74 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CA78u;
label_29ca78:
    // 0x29ca78: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29ca78u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29ca7c:
    // 0x29ca7c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29ca7cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29ca80:
    // 0x29ca80: 0xd  break       0
    ctx->pc = 0x29ca80u;
    runtime->handleBreak(rdram, ctx);
label_29ca84:
    // 0x29ca84: 0xd  break       0
    ctx->pc = 0x29ca84u;
    runtime->handleBreak(rdram, ctx);
label_29ca88:
    // 0x29ca88: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ca88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CA88 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ca8c:
    // 0x29ca8c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29ca8cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ca90:
    // 0x29ca90: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29ca90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CA90 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ca94:
    // 0x29ca94: 0x11  mthi        $zero
    ctx->pc = 0x29ca94u;
    ctx->hi = GPR_U64(ctx, 0);
label_29ca98:
    // 0x29ca98: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29ca98u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29ca9c:
    // 0x29ca9c: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29ca9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CA9C raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29caa0:
    // 0x29caa0: 0xf  sync
    ctx->pc = 0x29caa0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29caa4:
    // 0x29caa4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29caa4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CAA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29caa8:
    // 0x29caa8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29caa8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29caac:
    // 0x29caac: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29caacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29cab0:
    // 0x29cab0: 0xd  break       0
    ctx->pc = 0x29cab0u;
    runtime->handleBreak(rdram, ctx);
label_29cab4:
    // 0x29cab4: 0x19  multu       $zero, $zero
    ctx->pc = 0x29cab4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29cab8:
    // 0x29cab8: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x29cab8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29cabc:
    // 0x29cabc: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29cabcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CABC raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cac0:
    // 0x29cac0: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29cac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29CAC0 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cac4:
    // 0x29cac4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29cac4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CAC4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cac8:
    // 0x29cac8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29cac8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cacc:
    // 0x29cacc: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29caccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CACC raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cad0:
    // 0x29cad0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29cad0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29cad4:
    // 0x29cad4: 0x0  nop
    ctx->pc = 0x29cad4u;
    // NOP
label_29cad8:
    // 0x29cad8: 0x22  neg         $zero, $zero
    ctx->pc = 0x29cad8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29cadc:
    // 0x29cadc: 0x23  negu        $zero, $zero
    ctx->pc = 0x29cadcu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29cae0:
    // 0x29cae0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CAE0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cae4:
    // 0x29cae4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29cae4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29cae8:
    // 0x29cae8: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29cae8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29caec:
    // 0x29caec: 0x0  nop
    ctx->pc = 0x29caecu;
    // NOP
label_29caf0:
    // 0x29caf0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29caf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CAF0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29caf4:
    // 0x29caf4: 0x0  nop
    ctx->pc = 0x29caf4u;
    // NOP
label_29caf8:
    // 0x29caf8: 0x258  .word       0x00000258                   # mult        $zero, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29caf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29cafc:
    // 0x29cafc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cafcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CAFC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cb00:
    // 0x29cb00: 0x226  .word       0x00000226                   # xor         $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb00u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29cb04:
    // 0x29cb04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29cb04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29cb08:
    // 0x29cb08: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29cb08u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cb0c:
    // 0x29cb0c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29cb0cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29cb10:
    // 0x29cb10: 0x1c2  srl         $zero, $zero, 7
    ctx->pc = 0x29cb10u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 7));
label_29cb14:
    // 0x29cb14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29cb14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cb18:
    // 0x29cb18: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb18u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29cb1c:
    // 0x29cb1c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29cb1cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CB1C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cb20:
    // 0x29cb20: 0x15e  .word       0x0000015E                   # ddiv        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29CB20 raw=0x0000015E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cb24:
    // 0x29cb24: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29cb24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cb28:
    // 0x29cb28: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb28u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29cb2c:
    // 0x29cb2c: 0xd  break       0
    ctx->pc = 0x29cb2cu;
    runtime->handleBreak(rdram, ctx);
label_29cb30:
    // 0x29cb30: 0xfa  dsrl        $zero, $zero, 3
    ctx->pc = 0x29cb30u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 3);
label_29cb34:
    // 0x29cb34: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29cb34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CB34 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cb38:
    // 0x29cb38: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29cb3c:
    if (ctx->pc == 0x29CB3Cu) {
        ctx->pc = 0x29CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB38u;
        // 0x29cb3c: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB40u;
        goto label_29cb40;
    }
    ctx->pc = 0x29CB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB38u;
        // 0x29cb3c: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CB38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CB40u;
label_29cb40:
    // 0x29cb40: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29cb44:
    // 0x29cb44: 0x0  nop
    ctx->pc = 0x29cb44u;
    // NOP
label_29cb48:
    // 0x29cb48: 0x5460  .word       0x00005460                   # add         $t2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_29cb4c:
    // 0x29cb4c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb4cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CB4C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cb50:
    // 0x29cb50: 0x6270  tge         $zero, $zero, 393
    ctx->pc = 0x29cb50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cb54:
    // 0x29cb54: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29cb54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29cb58:
    // 0x29cb58: 0x7080  sll         $t6, $zero, 2
    ctx->pc = 0x29cb58u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_29cb5c:
    // 0x29cb5c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29cb5cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29cb60:
    // 0x29cb60: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb60u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29cb64:
    // 0x29cb64: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29cb64u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cb68:
    // 0x29cb68: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29cb6c:
    // 0x29cb6c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29cb6cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CB6C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cb70:
    // 0x29cb70: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29cb70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cb74:
    // 0x29cb74: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29cb74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cb78:
    // 0x29cb78: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29cb78u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29cb7c:
    // 0x29cb7c: 0xd  break       0
    ctx->pc = 0x29cb7cu;
    runtime->handleBreak(rdram, ctx);
label_29cb80:
    // 0x29cb80: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb80u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29cb84:
    // 0x29cb84: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29cb84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CB84 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cb88:
    // 0x29cb88: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cb88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29cb8c:
    // 0x29cb8c: 0x9  jalr        $zero, $zero
label_29cb90:
    if (ctx->pc == 0x29CB90u) {
        ctx->pc = 0x29CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB8Cu;
        // 0x29cb90: 0xd2f0  tge         $zero, $zero, 843 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB94u;
        goto label_29cb94;
    }
    ctx->pc = 0x29CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB8Cu;
        // 0x29cb90: 0xd2f0  tge         $zero, $zero, 843 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CB8Cu, 0x29CB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CB94u;
label_29cb94:
    // 0x29cb94: 0xc  syscall     0
    ctx->pc = 0x29cb94u;
    ctx->pc = 0x29CB98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29cb98:
    // 0x29cb98: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cb98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29cb9c:
    // 0x29cb9c: 0x12  mflo        $zero
    ctx->pc = 0x29cb9cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29cba0:
    // 0x29cba0: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x29cba0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cba4:
    // 0x29cba4: 0x11  mthi        $zero
    ctx->pc = 0x29cba4u;
    ctx->hi = GPR_U64(ctx, 0);
label_29cba8:
    // 0x29cba8: 0x19c8  .word       0x000019C8                   # jr          $zero # 000019C0 <InstrIdType: CPU_SPECIAL>
label_29cbac:
    if (ctx->pc == 0x29CBACu) {
        ctx->pc = 0x29CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBA8u;
        // 0x29cbac: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CBB0u;
        goto label_29cbb0;
    }
    ctx->pc = 0x29CBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBA8u;
        // 0x29cbac: 0x9  jalr        $zero, $zero (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CBA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CBB0u;
label_29cbb0:
    // 0x29cbb0: 0x1c20  .word       0x00001C20                   # add         $v1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cbb0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29cbb4:
    // 0x29cbb4: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29cbb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29cbb8:
    // 0x29cbb8: 0x1e78  dsll        $v1, $zero, 25
    ctx->pc = 0x29cbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 25);
label_29cbbc:
    // 0x29cbbc: 0x23  negu        $zero, $zero
    ctx->pc = 0x29cbbcu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29cbc0:
    // 0x29cbc0: 0x20d0  .word       0x000020D0                   # mfhi        $a0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cbc0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_29cbc4:
    // 0x29cbc4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29cbc4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29cbc8:
    // 0x29cbc8: 0x2328  .word       0x00002328                   # mfsa        $a0 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cbc8u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_29cbcc:
    // 0x29cbcc: 0x13  mtlo        $zero
    ctx->pc = 0x29cbccu;
    ctx->lo = GPR_U64(ctx, 0);
label_29cbd0:
    // 0x29cbd0: 0x2580  sll         $a0, $zero, 22
    ctx->pc = 0x29cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_29cbd4:
    // 0x29cbd4: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29cbd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29cbd8:
    // 0x29cbd8: 0x27d8  .word       0x000027D8                   # mult        $a0, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cbd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29cbdc:
    // 0x29cbdc: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cbdcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29CBDC raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cbe0:
    // 0x29cbe0: 0x2a30  tge         $zero, $zero, 168
    ctx->pc = 0x29cbe0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cbe4:
    // 0x29cbe4: 0xc  syscall     0
    ctx->pc = 0x29cbe4u;
    ctx->pc = 0x29CBE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29cbe8:
    // 0x29cbe8: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cbe8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29cbec:
    // 0x29cbec: 0x11  mthi        $zero
    ctx->pc = 0x29cbecu;
    ctx->hi = GPR_U64(ctx, 0);
label_29cbf0:
    // 0x29cbf0: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cbf0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29cbf4:
    // 0x29cbf4: 0x23  negu        $zero, $zero
    ctx->pc = 0x29cbf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29cbf8:
    // 0x29cbf8: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cbf8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29cbfc:
    // 0x29cbfc: 0x12  mflo        $zero
    ctx->pc = 0x29cbfcu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29cc00:
    // 0x29cc00: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cc00u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cc04:
    // 0x29cc04: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29cc04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29cc08:
    // 0x29cc08: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x29cc08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_29cc0c:
    // 0x29cc0c: 0x9  jalr        $zero, $zero
label_29cc10:
    if (ctx->pc == 0x29CC10u) {
        ctx->pc = 0x29CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC0Cu;
        // 0x29cc10: 0x32  tlt         $zero, $zero, 0 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC14u;
        goto label_29cc14;
    }
    ctx->pc = 0x29CC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC0Cu;
        // 0x29cc10: 0x32  tlt         $zero, $zero, 0 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC0Cu, 0x29CC14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CC14u;
label_29cc14:
    // 0x29cc14: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29cc14u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29cc18:
    // 0x29cc18: 0x28  mfsa        $zero
    ctx->pc = 0x29cc18u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29cc1c:
    // 0x29cc1c: 0x19  multu       $zero, $zero
    ctx->pc = 0x29cc1cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29cc20:
    // 0x29cc20: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29cc20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29CC20 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cc24:
    // 0x29cc24: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cc24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29CC24 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cc28:
    // 0x29cc28: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29cc28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29cc2c:
    // 0x29cc2c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29cc2cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29cc30:
    // 0x29cc30: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29cc30u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29cc34:
    // 0x29cc34: 0x9  jalr        $zero, $zero
label_29cc38:
    if (ctx->pc == 0x29CC38u) {
        ctx->pc = 0x29CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC34u;
        // 0x29cc38: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC3Cu;
        goto label_29cc3c;
    }
    ctx->pc = 0x29CC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC34u;
        // 0x29cc38: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC34u, 0x29CC3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CC3Cu;
label_29cc3c:
    // 0x29cc3c: 0xc  syscall     0
    ctx->pc = 0x29cc3cu;
    ctx->pc = 0x29CC40u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29cc40:
    // 0x29cc40: 0x384  .word       0x00000384                   # sllv        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cc40u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cc44:
    // 0x29cc44: 0x12  mflo        $zero
    ctx->pc = 0x29cc44u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29cc48:
    // 0x29cc48: 0x320  .word       0x00000320                   # add         $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cc48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29cc4c:
    // 0x29cc4c: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29cc4cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29cc50:
    // 0x29cc50: 0x2bc  dsll32      $zero, $zero, 10
    ctx->pc = 0x29cc50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 10));
label_29cc54:
    // 0x29cc54: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29cc54u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29cc58:
    // 0x29cc58: 0x258  .word       0x00000258                   # mult        $zero, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cc58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29cc5c:
    // 0x29cc5c: 0x11  mthi        $zero
    ctx->pc = 0x29cc5cu;
    ctx->hi = GPR_U64(ctx, 0);
label_29cc60:
    // 0x29cc60: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29cc60u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cc64:
    // 0x29cc64: 0x23  negu        $zero, $zero
    ctx->pc = 0x29cc64u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29cc68:
    // 0x29cc68: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cc68u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29cc6c:
    // 0x29cc6c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29cc6cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CC6C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cc70:
    // 0x29cc70: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cc70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29cc74:
    // 0x29cc74: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29cc74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cc78:
    // 0x29cc78: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29cc7c:
    if (ctx->pc == 0x29CC7Cu) {
        ctx->pc = 0x29CC80u;
        goto label_29cc80;
    }
    ctx->pc = 0x29CC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CC80u;
label_29cc80:
    // 0x29cc80: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cc80u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29cc84:
    // 0x29cc84: 0xc  syscall     0
    ctx->pc = 0x29cc84u;
    ctx->pc = 0x29CC88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29cc88:
    // 0x29cc88: 0x15e  .word       0x0000015E                   # ddiv        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cc88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29CC88 raw=0x0000015E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cc8c:
    // 0x29cc8c: 0x9  jalr        $zero, $zero
label_29cc90:
    if (ctx->pc == 0x29CC90u) {
        ctx->pc = 0x29CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC8Cu;
        // 0x29cc90: 0x140  sll         $zero, $zero, 5 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC94u;
        goto label_29cc94;
    }
    ctx->pc = 0x29CC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC8Cu;
        // 0x29cc90: 0x140  sll         $zero, $zero, 5 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CC8Cu, 0x29CC94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CC94u;
label_29cc94:
    // 0x29cc94: 0x11  mthi        $zero
    ctx->pc = 0x29cc94u;
    ctx->hi = GPR_U64(ctx, 0);
label_29cc98:
    // 0x29cc98: 0x122  .word       0x00000122                   # neg         $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cc98u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29cc9c:
    // 0x29cc9c: 0x12  mflo        $zero
    ctx->pc = 0x29cc9cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29cca0:
    // 0x29cca0: 0x104  .word       0x00000104                   # sllv        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cca0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cca4:
    // 0x29cca4: 0x23  negu        $zero, $zero
    ctx->pc = 0x29cca4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29cca8:
    // 0x29cca8: 0xe6  .word       0x000000E6                   # xor         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cca8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29ccac:
    // 0x29ccac: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29ccacu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29ccb0:
    // 0x29ccb0: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29ccb4:
    if (ctx->pc == 0x29CCB4u) {
        ctx->pc = 0x29CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCB0u;
        // 0x29ccb4: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCB8u;
        goto label_29ccb8;
    }
    ctx->pc = 0x29CCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCB0u;
        // 0x29ccb4: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CCB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CCB8u;
label_29ccb8:
    // 0x29ccb8: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ccb8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29ccbc:
    // 0x29ccbc: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29ccbcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29ccc0:
    // 0x29ccc0: 0x8c  syscall     2
    ctx->pc = 0x29ccc0u;
    ctx->pc = 0x29CCC4u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29ccc4:
    // 0x29ccc4: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ccc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CCC4 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ccc8:
    // 0x29ccc8: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ccc8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29cccc:
    // 0x29cccc: 0xf  sync
    ctx->pc = 0x29ccccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29ccd0:
    // 0x29ccd0: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ccd0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ccd4:
    // 0x29ccd4: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ccd4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29ccd8:
    // 0x29ccd8: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ccd8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29ccdc:
    // 0x29ccdc: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ccdcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29cce0:
    // 0x29cce0: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cce0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29cce4:
    // 0x29cce4: 0x0  nop
    ctx->pc = 0x29cce4u;
    // NOP
label_29cce8:
    // 0x29cce8: 0x0  nop
    ctx->pc = 0x29cce8u;
    // NOP
label_29ccec:
    // 0x29ccec: 0x0  nop
    ctx->pc = 0x29ccecu;
    // NOP
label_29ccf0:
    // 0x29ccf0: 0x0  nop
    ctx->pc = 0x29ccf0u;
    // NOP
label_29ccf4:
    // 0x29ccf4: 0x0  nop
    ctx->pc = 0x29ccf4u;
    // NOP
label_29ccf8:
    // 0x29ccf8: 0x0  nop
    ctx->pc = 0x29ccf8u;
    // NOP
label_29ccfc:
    // 0x29ccfc: 0x0  nop
    ctx->pc = 0x29ccfcu;
    // NOP
label_29cd00:
    // 0x29cd00: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29cd00u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29cd04:
    // 0x29cd04: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x29cd04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cd08:
    // 0x29cd08: 0x23  negu        $zero, $zero
    ctx->pc = 0x29cd08u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29cd0c:
    // 0x29cd0c: 0x16a8  .word       0x000016A8                   # mfsa        $v0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cd0cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29cd10:
    // 0x29cd10: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29cd10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29cd14:
    // 0x29cd14: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cd14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29cd18:
    // 0x29cd18: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29cd18u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29cd1c:
    // 0x29cd1c: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cd1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29cd20:
    // 0x29cd20: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29cd20u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29cd24:
    // 0x29cd24: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cd24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29cd28:
    // 0x29cd28: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29cd28u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cd2c:
    // 0x29cd2c: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL>
label_29cd30:
    if (ctx->pc == 0x29CD30u) {
        ctx->pc = 0x29CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD2Cu;
        // 0x29cd30: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD34u;
        goto label_29cd34;
    }
    ctx->pc = 0x29CD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD2Cu;
        // 0x29cd30: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CD2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CD34u;
label_29cd34:
    // 0x29cd34: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x29cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29cd38:
    // 0x29cd38: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cd38u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CD38 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cd3c:
    // 0x29cd3c: 0x11f8  dsll        $v0, $zero, 7
    ctx->pc = 0x29cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 7);
label_29cd40:
    // 0x29cd40: 0xf  sync
    ctx->pc = 0x29cd40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29cd44:
    // 0x29cd44: 0x1130  tge         $zero, $zero, 68
    ctx->pc = 0x29cd44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cd48:
    // 0x29cd48: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cd48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CD48 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cd4c:
    // 0x29cd4c: 0x1068  .word       0x00001068                   # mfsa        $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cd4cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29cd50:
    // 0x29cd50: 0xc  syscall     0
    ctx->pc = 0x29cd50u;
    ctx->pc = 0x29CD54u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29cd54:
    // 0x29cd54: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x29cd54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cd58:
    // 0x29cd58: 0x11  mthi        $zero
    ctx->pc = 0x29cd58u;
    ctx->hi = GPR_U64(ctx, 0);
label_29cd5c:
    // 0x29cd5c: 0x16a8  .word       0x000016A8                   # mfsa        $v0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cd5cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29cd60:
    // 0x29cd60: 0x12  mflo        $zero
    ctx->pc = 0x29cd60u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29cd64:
    // 0x29cd64: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cd64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29cd68:
    // 0x29cd68: 0x23  negu        $zero, $zero
    ctx->pc = 0x29cd68u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29cd6c:
    // 0x29cd6c: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cd6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29cd70:
    // 0x29cd70: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29cd70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29cd74:
    // 0x29cd74: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cd74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29cd78:
    // 0x29cd78: 0x9  jalr        $zero, $zero
label_29cd7c:
    if (ctx->pc == 0x29CD7Cu) {
        ctx->pc = 0x29CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD78u;
        // 0x29cd7c: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD80u;
        goto label_29cd80;
    }
    ctx->pc = 0x29CD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD78u;
        // 0x29cd7c: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CD78u, 0x29CD80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CD80u;
label_29cd80:
    // 0x29cd80: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cd80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CD80 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cd84:
    // 0x29cd84: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x29cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29cd88:
    // 0x29cd88: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29cd88u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29cd8c:
    // 0x29cd8c: 0x11f8  dsll        $v0, $zero, 7
    ctx->pc = 0x29cd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 7);
label_29cd90:
    // 0x29cd90: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cd90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CD90 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cd94:
    // 0x29cd94: 0x1130  tge         $zero, $zero, 68
    ctx->pc = 0x29cd94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cd98:
    // 0x29cd98: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29cd98u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29cd9c:
    // 0x29cd9c: 0x1068  .word       0x00001068                   # mfsa        $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cd9cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29cda0:
    // 0x29cda0: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29cda0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29cda4:
    // 0x29cda4: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cda4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29cda8:
    // 0x29cda8: 0xf  sync
    ctx->pc = 0x29cda8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29cdac:
    // 0x29cdac: 0xed8  .word       0x00000ED8                   # mult        $at, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cdacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29cdb0:
    // 0x29cdb0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29cdb0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29cdb4:
    // 0x29cdb4: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cdb4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29cdb8:
    // 0x29cdb8: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29cdb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CDB8 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cdbc:
    // 0x29cdbc: 0xd48  .word       0x00000D48                   # jr          $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
label_29cdc0:
    if (ctx->pc == 0x29CDC0u) {
        ctx->pc = 0x29CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDBCu;
        // 0x29cdc0: 0x25  move        $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDC4u;
        goto label_29cdc4;
    }
    ctx->pc = 0x29CDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDBCu;
        // 0x29cdc0: 0x25  move        $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CDBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CDC4u;
label_29cdc4:
    // 0x29cdc4: 0xc80  sll         $at, $zero, 18
    ctx->pc = 0x29cdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29cdc8:
    // 0x29cdc8: 0x10  mfhi        $zero
    ctx->pc = 0x29cdc8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29cdcc:
    // 0x29cdcc: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x29cdccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_29cdd0:
    // 0x29cdd0: 0xd  break       0
    ctx->pc = 0x29cdd0u;
    runtime->handleBreak(rdram, ctx);
label_29cdd4:
    // 0x29cdd4: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x29cdd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cdd8:
    // 0x29cdd8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29cdd8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cddc:
    // 0x29cddc: 0xa28  .word       0x00000A28                   # mfsa        $at # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cddcu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29cde0:
    // 0x29cde0: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29cde0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cde4:
    // 0x29cde4: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cde4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29cde8:
    // 0x29cde8: 0x8  jr          $zero
label_29cdec:
    if (ctx->pc == 0x29CDECu) {
        ctx->pc = 0x29CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDE8u;
        // 0x29cdec: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDF0u;
        goto label_29cdf0;
    }
    ctx->pc = 0x29CDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDE8u;
        // 0x29cdec: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CDE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CDF0u;
label_29cdf0:
    // 0x29cdf0: 0xc  syscall     0
    ctx->pc = 0x29cdf0u;
    ctx->pc = 0x29CDF4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29cdf4:
    // 0x29cdf4: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cdf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29cdf8:
    // 0x29cdf8: 0x11  mthi        $zero
    ctx->pc = 0x29cdf8u;
    ctx->hi = GPR_U64(ctx, 0);
label_29cdfc:
    // 0x29cdfc: 0xed8  .word       0x00000ED8                   # mult        $at, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cdfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29ce00:
    // 0x29ce00: 0x9  jalr        $zero, $zero
label_29ce04:
    if (ctx->pc == 0x29CE04u) {
        ctx->pc = 0x29CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE00u;
        // 0x29ce04: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE08u;
        goto label_29ce08;
    }
    ctx->pc = 0x29CE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE00u;
        // 0x29ce04: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE00u, 0x29CE08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CE08u;
label_29ce08:
    // 0x29ce08: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29ce08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29ce0c:
    // 0x29ce0c: 0xd48  .word       0x00000D48                   # jr          $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
label_29ce10:
    if (ctx->pc == 0x29CE10u) {
        ctx->pc = 0x29CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE0Cu;
        // 0x29ce10: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CE10 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE14u;
        goto label_29ce14;
    }
    ctx->pc = 0x29CE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE0Cu;
        // 0x29ce10: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CE10 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CE14u;
label_29ce14:
    // 0x29ce14: 0xc80  sll         $at, $zero, 18
    ctx->pc = 0x29ce14u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29ce18:
    // 0x29ce18: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ce18u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CE18 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ce1c:
    // 0x29ce1c: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x29ce1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_29ce20:
    // 0x29ce20: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29ce20u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29ce24:
    // 0x29ce24: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x29ce24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ce28:
    // 0x29ce28: 0x0  nop
    ctx->pc = 0x29ce28u;
    // NOP
label_29ce2c:
    // 0x29ce2c: 0xa28  .word       0x00000A28                   # mfsa        $at # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ce2cu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29ce30:
    // 0x29ce30: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ce30u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ce34:
    // 0x29ce34: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ce34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29ce38:
    // 0x29ce38: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29ce38u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29ce3c:
    // 0x29ce3c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ce3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29ce40:
    // 0x29ce40: 0x23  negu        $zero, $zero
    ctx->pc = 0x29ce40u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29ce44:
    // 0x29ce44: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ce44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29ce48:
    // 0x29ce48: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29ce48u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29ce4c:
    // 0x29ce4c: 0xed8  .word       0x00000ED8                   # mult        $at, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ce4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29ce50:
    // 0x29ce50: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29ce50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29ce54:
    // 0x29ce54: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ce54u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29ce58:
    // 0x29ce58: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29ce58u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ce5c:
    // 0x29ce5c: 0xd48  .word       0x00000D48                   # jr          $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
label_29ce60:
    if (ctx->pc == 0x29CE60u) {
        ctx->pc = 0x29CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE5Cu;
        // 0x29ce60: 0x19  multu       $zero, $zero (Delay Slot)
        { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE64u;
        goto label_29ce64;
    }
    ctx->pc = 0x29CE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE5Cu;
        // 0x29ce60: 0x19  multu       $zero, $zero (Delay Slot)
        { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CE64u;
label_29ce64:
    // 0x29ce64: 0xc80  sll         $at, $zero, 18
    ctx->pc = 0x29ce64u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29ce68:
    // 0x29ce68: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29ce68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29ce6c:
    // 0x29ce6c: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x29ce6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_29ce70:
    // 0x29ce70: 0x8  jr          $zero
label_29ce74:
    if (ctx->pc == 0x29CE74u) {
        ctx->pc = 0x29CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE70u;
        // 0x29ce74: 0xaf0  tge         $zero, $zero, 43 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE78u;
        goto label_29ce78;
    }
    ctx->pc = 0x29CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE70u;
        // 0x29ce74: 0xaf0  tge         $zero, $zero, 43 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CE78u;
label_29ce78:
    // 0x29ce78: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29ce78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29ce7c:
    // 0x29ce7c: 0xa28  .word       0x00000A28                   # mfsa        $at # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ce7cu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29ce80:
    // 0x29ce80: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29ce80u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ce84:
    // 0x29ce84: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ce84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29ce88:
    // 0x29ce88: 0x10  mfhi        $zero
    ctx->pc = 0x29ce88u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ce8c:
    // 0x29ce8c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ce8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29ce90:
    // 0x29ce90: 0x12  mflo        $zero
    ctx->pc = 0x29ce90u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29ce94:
    // 0x29ce94: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x29ce94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ce98:
    // 0x29ce98: 0xc  syscall     0
    ctx->pc = 0x29ce98u;
    ctx->pc = 0x29CE9Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29ce9c:
    // 0x29ce9c: 0x16a8  .word       0x000016A8                   # mfsa        $v0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ce9cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29cea0:
    // 0x29cea0: 0x11  mthi        $zero
    ctx->pc = 0x29cea0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29cea4:
    // 0x29cea4: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29cea8:
    // 0x29cea8: 0x9  jalr        $zero, $zero
label_29ceac:
    if (ctx->pc == 0x29CEACu) {
        ctx->pc = 0x29CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEA8u;
        // 0x29ceac: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEB0u;
        goto label_29ceb0;
    }
    ctx->pc = 0x29CEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEA8u;
        // 0x29ceac: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CEA8u, 0x29CEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CEB0u;
label_29ceb0:
    // 0x29ceb0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29ceb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29ceb4:
    // 0x29ceb4: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ceb4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29ceb8:
    // 0x29ceb8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ceb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CEB8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cebc:
    // 0x29cebc: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL>
label_29cec0:
    if (ctx->pc == 0x29CEC0u) {
        ctx->pc = 0x29CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEBCu;
        // 0x29cec0: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEC4u;
        goto label_29cec4;
    }
    ctx->pc = 0x29CEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEBCu;
        // 0x29cec0: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CEBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CEC4u;
label_29cec4:
    // 0x29cec4: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x29cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29cec8:
    // 0x29cec8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29cec8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CEC8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cecc:
    // 0x29cecc: 0x11f8  dsll        $v0, $zero, 7
    ctx->pc = 0x29ceccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 7);
label_29ced0:
    // 0x29ced0: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29ced0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29ced4:
    // 0x29ced4: 0x1130  tge         $zero, $zero, 68
    ctx->pc = 0x29ced4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ced8:
    // 0x29ced8: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ced8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29CED8 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cedc:
    // 0x29cedc: 0x1068  .word       0x00001068                   # mfsa        $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cedcu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29cee0:
    // 0x29cee0: 0x9  jalr        $zero, $zero
label_29cee4:
    if (ctx->pc == 0x29CEE4u) {
        ctx->pc = 0x29CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEE0u;
        // 0x29cee4: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEE8u;
        goto label_29cee8;
    }
    ctx->pc = 0x29CEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEE0u;
        // 0x29cee4: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CEE0u, 0x29CEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CEE8u;
label_29cee8:
    // 0x29cee8: 0xc  syscall     0
    ctx->pc = 0x29cee8u;
    ctx->pc = 0x29CEECu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29ceec:
    // 0x29ceec: 0xed8  .word       0x00000ED8                   # mult        $at, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ceecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29cef0:
    // 0x29cef0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29cef0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29cef4:
    // 0x29cef4: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cef4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29cef8:
    // 0x29cef8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cef8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CEF8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cefc:
    // 0x29cefc: 0xd48  .word       0x00000D48                   # jr          $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
label_29cf00:
    if (ctx->pc == 0x29CF00u) {
        ctx->pc = 0x29CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEFCu;
        // 0x29cf00: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF04u;
        goto label_29cf04;
    }
    ctx->pc = 0x29CEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEFCu;
        // 0x29cf00: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CEFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CF04u;
label_29cf04:
    // 0x29cf04: 0xc80  sll         $at, $zero, 18
    ctx->pc = 0x29cf04u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29cf08:
    // 0x29cf08: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29cf08u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29cf0c:
    // 0x29cf0c: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x29cf0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_29cf10:
    // 0x29cf10: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29cf10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CF10 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cf14:
    // 0x29cf14: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x29cf14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cf18:
    // 0x29cf18: 0x19  multu       $zero, $zero
    ctx->pc = 0x29cf18u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29cf1c:
    // 0x29cf1c: 0xa28  .word       0x00000A28                   # mfsa        $at # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cf1cu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29cf20:
    // 0x29cf20: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29cf20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29CF20 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cf24:
    // 0x29cf24: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cf24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29cf28:
    // 0x29cf28: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29cf28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29cf2c:
    // 0x29cf2c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cf2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29cf30:
    // 0x29cf30: 0xc  syscall     0
    ctx->pc = 0x29cf30u;
    ctx->pc = 0x29CF34u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29cf34:
    // 0x29cf34: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x29cf34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cf38:
    // 0x29cf38: 0x12  mflo        $zero
    ctx->pc = 0x29cf38u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29cf3c:
    // 0x29cf3c: 0x16a8  .word       0x000016A8                   # mfsa        $v0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cf3cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29cf40:
    // 0x29cf40: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29cf40u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29cf44:
    // 0x29cf44: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cf44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29cf48:
    // 0x29cf48: 0x23  negu        $zero, $zero
    ctx->pc = 0x29cf48u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29cf4c:
    // 0x29cf4c: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cf4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29cf50:
    // 0x29cf50: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29cf50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29cf54:
    // 0x29cf54: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cf54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29cf58:
    // 0x29cf58: 0x9  jalr        $zero, $zero
label_29cf5c:
    if (ctx->pc == 0x29CF5Cu) {
        ctx->pc = 0x29CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF58u;
        // 0x29cf5c: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF60u;
        goto label_29cf60;
    }
    ctx->pc = 0x29CF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF58u;
        // 0x29cf5c: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CF58u, 0x29CF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CF60u;
label_29cf60:
    // 0x29cf60: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29cf60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29CF60 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cf64:
    // 0x29cf64: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x29cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29cf68:
    // 0x29cf68: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cf68u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CF68 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cf6c:
    // 0x29cf6c: 0x11f8  dsll        $v0, $zero, 7
    ctx->pc = 0x29cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 7);
label_29cf70:
    // 0x29cf70: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cf70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29CF70 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29cf74:
    // 0x29cf74: 0x1130  tge         $zero, $zero, 68
    ctx->pc = 0x29cf74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cf78:
    // 0x29cf78: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29cf78u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29cf7c:
    // 0x29cf7c: 0x1068  .word       0x00001068                   # mfsa        $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cf7cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29cf80:
    // 0x29cf80: 0x11  mthi        $zero
    ctx->pc = 0x29cf80u;
    ctx->hi = GPR_U64(ctx, 0);
label_29cf84:
    // 0x29cf84: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x29cf84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cf88:
    // 0x29cf88: 0xc  syscall     0
    ctx->pc = 0x29cf88u;
    ctx->pc = 0x29CF8Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29cf8c:
    // 0x29cf8c: 0x16a8  .word       0x000016A8                   # mfsa        $v0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cf8cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29cf90:
    // 0x29cf90: 0x9  jalr        $zero, $zero
label_29cf94:
    if (ctx->pc == 0x29CF94u) {
        ctx->pc = 0x29CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF90u;
        // 0x29cf94: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF98u;
        goto label_29cf98;
    }
    ctx->pc = 0x29CF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF90u;
        // 0x29cf94: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CF90u, 0x29CF98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CF98u;
label_29cf98:
    // 0x29cf98: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29cf98u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29cf9c:
    // 0x29cf9c: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cf9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29cfa0:
    // 0x29cfa0: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29cfa0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29cfa4:
    // 0x29cfa4: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cfa4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29cfa8:
    // 0x29cfa8: 0xf  sync
    ctx->pc = 0x29cfa8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29cfac:
    // 0x29cfac: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL>
label_29cfb0:
    if (ctx->pc == 0x29CFB0u) {
        ctx->pc = 0x29CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFACu;
        // 0x29cfb0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CFB0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFB4u;
        goto label_29cfb4;
    }
    ctx->pc = 0x29CFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFACu;
        // 0x29cfb0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CFB0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CFACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CFB4u;
label_29cfb4:
    // 0x29cfb4: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x29cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29cfb8:
    // 0x29cfb8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29cfb8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29cfbc:
    // 0x29cfbc: 0x11f8  dsll        $v0, $zero, 7
    ctx->pc = 0x29cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 7);
label_29cfc0:
    // 0x29cfc0: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29cfc0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29cfc4:
    // 0x29cfc4: 0x1130  tge         $zero, $zero, 68
    ctx->pc = 0x29cfc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29cfc8:
    // 0x29cfc8: 0x0  nop
    ctx->pc = 0x29cfc8u;
    // NOP
label_29cfcc:
    // 0x29cfcc: 0x1068  .word       0x00001068                   # mfsa        $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cfccu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29cfd0:
    // 0x29cfd0: 0x23  negu        $zero, $zero
    ctx->pc = 0x29cfd0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29cfd4:
    // 0x29cfd4: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cfd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29cfd8:
    // 0x29cfd8: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29cfd8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29cfdc:
    // 0x29cfdc: 0xed8  .word       0x00000ED8                   # mult        $at, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29cfdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29cfe0:
    // 0x29cfe0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29cfe0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29cfe4:
    // 0x29cfe4: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29cfe4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29cfe8:
    // 0x29cfe8: 0x22  neg         $zero, $zero
    ctx->pc = 0x29cfe8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29cfec:
    // 0x29cfec: 0xd48  .word       0x00000D48                   # jr          $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
label_29cff0:
    if (ctx->pc == 0x29CFF0u) {
        ctx->pc = 0x29CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFECu;
        // 0x29cff0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CFF0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFF4u;
        goto label_29cff4;
    }
    ctx->pc = 0x29CFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFECu;
        // 0x29cff0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29CFF0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CFECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29CFF4u;
label_29cff4:
    // 0x29cff4: 0xc80  sll         $at, $zero, 18
    ctx->pc = 0x29cff4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29cff8:
    // 0x29cff8: 0x0  nop
    ctx->pc = 0x29cff8u;
    // NOP
label_29cffc:
    // 0x29cffc: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x29cffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_29d000:
    // 0x29d000: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D000 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d004:
    // 0x29d004: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x29d004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d008:
    // 0x29d008: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d008u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d00c:
    // 0x29d00c: 0xa28  .word       0x00000A28                   # mfsa        $at # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d00cu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29d010:
    // 0x29d010: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29d010u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d014:
    // 0x29d014: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d018:
    // 0x29d018: 0x13  mtlo        $zero
    ctx->pc = 0x29d018u;
    ctx->lo = GPR_U64(ctx, 0);
label_29d01c:
    // 0x29d01c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d01cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d020:
    // 0x29d020: 0x11  mthi        $zero
    ctx->pc = 0x29d020u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d024:
    // 0x29d024: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d024u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d028:
    // 0x29d028: 0x13  mtlo        $zero
    ctx->pc = 0x29d028u;
    ctx->lo = GPR_U64(ctx, 0);
label_29d02c:
    // 0x29d02c: 0xed8  .word       0x00000ED8                   # mult        $at, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d02cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d030:
    // 0x29d030: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d030u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d034:
    // 0x29d034: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d034u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29d038:
    // 0x29d038: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d038u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29D038 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d03c:
    // 0x29d03c: 0xd48  .word       0x00000D48                   # jr          $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
label_29d040:
    if (ctx->pc == 0x29D040u) {
        ctx->pc = 0x29D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D03Cu;
        // 0x29d040: 0x1c  dmult       $zero, $zero (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29D040 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D044u;
        goto label_29d044;
    }
    ctx->pc = 0x29D03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D03Cu;
        // 0x29d040: 0x1c  dmult       $zero, $zero (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29D040 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D03Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D044u;
label_29d044:
    // 0x29d044: 0xc80  sll         $at, $zero, 18
    ctx->pc = 0x29d044u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29d048:
    // 0x29d048: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d048u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d04c:
    // 0x29d04c: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x29d04cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_29d050:
    // 0x29d050: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29d050u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29d054:
    // 0x29d054: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x29d054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d058:
    // 0x29d058: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d058u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29D058 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d05c:
    // 0x29d05c: 0xa28  .word       0x00000A28                   # mfsa        $at # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d05cu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29d060:
    // 0x29d060: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D060 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d064:
    // 0x29d064: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d068:
    // 0x29d068: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d068u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d06c:
    // 0x29d06c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d070:
    // 0x29d070: 0x11  mthi        $zero
    ctx->pc = 0x29d070u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d074:
    // 0x29d074: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x29d074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d078:
    // 0x29d078: 0x12  mflo        $zero
    ctx->pc = 0x29d078u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d07c:
    // 0x29d07c: 0x16a8  .word       0x000016A8                   # mfsa        $v0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d07cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29d080:
    // 0x29d080: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d080u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d084:
    // 0x29d084: 0x15e0  .word       0x000015E0                   # add         $v0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29d088:
    // 0x29d088: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d088u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d08c:
    // 0x29d08c: 0x1518  .word       0x00001518                   # mult        $v0, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d08cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29d090:
    // 0x29d090: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29d090u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d094:
    // 0x29d094: 0x1450  .word       0x00001450                   # mfhi        $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d094u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29d098:
    // 0x29d098: 0x10  mfhi        $zero
    ctx->pc = 0x29d098u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d09c:
    // 0x29d09c: 0x1388  .word       0x00001388                   # jr          $zero # 00001380 <InstrIdType: CPU_SPECIAL>
label_29d0a0:
    if (ctx->pc == 0x29D0A0u) {
        ctx->pc = 0x29D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D09Cu;
        // 0x29d0a0: 0x25  move        $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0A4u;
        goto label_29d0a4;
    }
    ctx->pc = 0x29D09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D09Cu;
        // 0x29d0a0: 0x25  move        $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D09Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D0A4u;
label_29d0a4:
    // 0x29d0a4: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x29d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29d0a8:
    // 0x29d0a8: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d0a8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d0ac:
    // 0x29d0ac: 0x11f8  dsll        $v0, $zero, 7
    ctx->pc = 0x29d0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 7);
label_29d0b0:
    // 0x29d0b0: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d0b0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d0b4:
    // 0x29d0b4: 0x1130  tge         $zero, $zero, 68
    ctx->pc = 0x29d0b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d0b8:
    // 0x29d0b8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d0b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d0bc:
    // 0x29d0bc: 0x1068  .word       0x00001068                   # mfsa        $v0 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d0bcu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_29d0c0:
    // 0x29d0c0: 0x12  mflo        $zero
    ctx->pc = 0x29d0c0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d0c4:
    // 0x29d0c4: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d0c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d0c8:
    // 0x29d0c8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d0c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D0C8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d0cc:
    // 0x29d0cc: 0xed8  .word       0x00000ED8                   # mult        $at, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d0ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d0d0:
    // 0x29d0d0: 0x10  mfhi        $zero
    ctx->pc = 0x29d0d0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d0d4:
    // 0x29d0d4: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d0d4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29d0d8:
    // 0x29d0d8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d0d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D0D8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d0dc:
    // 0x29d0dc: 0xd48  .word       0x00000D48                   # jr          $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
label_29d0e0:
    if (ctx->pc == 0x29D0E0u) {
        ctx->pc = 0x29D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0DCu;
        // 0x29d0e0: 0x19  multu       $zero, $zero (Delay Slot)
        { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0E4u;
        goto label_29d0e4;
    }
    ctx->pc = 0x29D0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0DCu;
        // 0x29d0e0: 0x19  multu       $zero, $zero (Delay Slot)
        { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D0DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D0E4u;
label_29d0e4:
    // 0x29d0e4: 0xc80  sll         $at, $zero, 18
    ctx->pc = 0x29d0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29d0e8:
    // 0x29d0e8: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d0e8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d0ec:
    // 0x29d0ec: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x29d0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_29d0f0:
    // 0x29d0f0: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d0f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d0f4:
    // 0x29d0f4: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x29d0f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d0f8:
    // 0x29d0f8: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29d0f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29D0F8 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d0fc:
    // 0x29d0fc: 0xa28  .word       0x00000A28                   # mfsa        $at # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d0fcu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29d100:
    // 0x29d100: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d100u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d104:
    // 0x29d104: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d104u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29d108:
    // 0x29d108: 0x8  jr          $zero
label_29d10c:
    if (ctx->pc == 0x29D10Cu) {
        ctx->pc = 0x29D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D108u;
        // 0x29d10c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D110u;
        goto label_29d110;
    }
    ctx->pc = 0x29D108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D108u;
        // 0x29d10c: 0x898  .word       0x00000898                   # mult        $at, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D110u;
label_29d110:
    // 0x29d110: 0x9  jalr        $zero, $zero
label_29d114:
    if (ctx->pc == 0x29D114u) {
        ctx->pc = 0x29D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D110u;
        // 0x29d114: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D118u;
        goto label_29d118;
    }
    ctx->pc = 0x29D110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D110u;
        // 0x29d114: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D110u, 0x29D118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D118u;
label_29d118:
    // 0x29d118: 0xc  syscall     0
    ctx->pc = 0x29d118u;
    ctx->pc = 0x29D11Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d11c:
    // 0x29d11c: 0xed8  .word       0x00000ED8                   # mult        $at, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29d120:
    // 0x29d120: 0x11  mthi        $zero
    ctx->pc = 0x29d120u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d124:
    // 0x29d124: 0xe10  .word       0x00000E10                   # mfhi        $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d124u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29d128:
    // 0x29d128: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29d128u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d12c:
    // 0x29d12c: 0xd48  .word       0x00000D48                   # jr          $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
label_29d130:
    if (ctx->pc == 0x29D130u) {
        ctx->pc = 0x29D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D12Cu;
        // 0x29d130: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D130 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D134u;
        goto label_29d134;
    }
    ctx->pc = 0x29D12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D12Cu;
        // 0x29d130: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D130 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D12Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D134u;
label_29d134:
    // 0x29d134: 0xc80  sll         $at, $zero, 18
    ctx->pc = 0x29d134u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29d138:
    // 0x29d138: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d138u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d13c:
    // 0x29d13c: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x29d13cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_29d140:
    // 0x29d140: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d140u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d144:
    // 0x29d144: 0xaf0  tge         $zero, $zero, 43
    ctx->pc = 0x29d144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d148:
    // 0x29d148: 0x0  nop
    ctx->pc = 0x29d148u;
    // NOP
label_29d14c:
    // 0x29d14c: 0xa28  .word       0x00000A28                   # mfsa        $at # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d14cu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29d150:
    // 0x29d150: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d150u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d154:
    // 0x29d154: 0x960  .word       0x00000960                   # add         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    ctx->pc = 0x29d158u;
    return;
}
