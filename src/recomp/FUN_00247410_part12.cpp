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

// Function: FUN_00247410
// Address: 0x247410 - 0x2874a4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_00247410_part12(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24ca00u: goto label_24ca00;
        case 0x24ca04u: goto label_24ca04;
        case 0x24ca08u: goto label_24ca08;
        case 0x24ca0cu: goto label_24ca0c;
        case 0x24ca10u: goto label_24ca10;
        case 0x24ca14u: goto label_24ca14;
        case 0x24ca18u: goto label_24ca18;
        case 0x24ca1cu: goto label_24ca1c;
        case 0x24ca20u: goto label_24ca20;
        case 0x24ca24u: goto label_24ca24;
        case 0x24ca28u: goto label_24ca28;
        case 0x24ca2cu: goto label_24ca2c;
        case 0x24ca30u: goto label_24ca30;
        case 0x24ca34u: goto label_24ca34;
        case 0x24ca38u: goto label_24ca38;
        case 0x24ca3cu: goto label_24ca3c;
        case 0x24ca40u: goto label_24ca40;
        case 0x24ca44u: goto label_24ca44;
        case 0x24ca48u: goto label_24ca48;
        case 0x24ca4cu: goto label_24ca4c;
        case 0x24ca50u: goto label_24ca50;
        case 0x24ca54u: goto label_24ca54;
        case 0x24ca58u: goto label_24ca58;
        case 0x24ca5cu: goto label_24ca5c;
        case 0x24ca60u: goto label_24ca60;
        case 0x24ca64u: goto label_24ca64;
        case 0x24ca68u: goto label_24ca68;
        case 0x24ca6cu: goto label_24ca6c;
        case 0x24ca70u: goto label_24ca70;
        case 0x24ca74u: goto label_24ca74;
        case 0x24ca78u: goto label_24ca78;
        case 0x24ca7cu: goto label_24ca7c;
        case 0x24ca80u: goto label_24ca80;
        case 0x24ca84u: goto label_24ca84;
        case 0x24ca88u: goto label_24ca88;
        case 0x24ca8cu: goto label_24ca8c;
        case 0x24ca90u: goto label_24ca90;
        case 0x24ca94u: goto label_24ca94;
        case 0x24ca98u: goto label_24ca98;
        case 0x24ca9cu: goto label_24ca9c;
        case 0x24caa0u: goto label_24caa0;
        case 0x24caa4u: goto label_24caa4;
        case 0x24caa8u: goto label_24caa8;
        case 0x24caacu: goto label_24caac;
        case 0x24cab0u: goto label_24cab0;
        case 0x24cab4u: goto label_24cab4;
        case 0x24cab8u: goto label_24cab8;
        case 0x24cabcu: goto label_24cabc;
        case 0x24cac0u: goto label_24cac0;
        case 0x24cac4u: goto label_24cac4;
        case 0x24cac8u: goto label_24cac8;
        case 0x24caccu: goto label_24cacc;
        case 0x24cad0u: goto label_24cad0;
        case 0x24cad4u: goto label_24cad4;
        case 0x24cad8u: goto label_24cad8;
        case 0x24cadcu: goto label_24cadc;
        case 0x24cae0u: goto label_24cae0;
        case 0x24cae4u: goto label_24cae4;
        case 0x24cae8u: goto label_24cae8;
        case 0x24caecu: goto label_24caec;
        case 0x24caf0u: goto label_24caf0;
        case 0x24caf4u: goto label_24caf4;
        case 0x24caf8u: goto label_24caf8;
        case 0x24cafcu: goto label_24cafc;
        case 0x24cb00u: goto label_24cb00;
        case 0x24cb04u: goto label_24cb04;
        case 0x24cb08u: goto label_24cb08;
        case 0x24cb0cu: goto label_24cb0c;
        case 0x24cb10u: goto label_24cb10;
        case 0x24cb14u: goto label_24cb14;
        case 0x24cb18u: goto label_24cb18;
        case 0x24cb1cu: goto label_24cb1c;
        case 0x24cb20u: goto label_24cb20;
        case 0x24cb24u: goto label_24cb24;
        case 0x24cb28u: goto label_24cb28;
        case 0x24cb2cu: goto label_24cb2c;
        case 0x24cb30u: goto label_24cb30;
        case 0x24cb34u: goto label_24cb34;
        case 0x24cb38u: goto label_24cb38;
        case 0x24cb3cu: goto label_24cb3c;
        case 0x24cb40u: goto label_24cb40;
        case 0x24cb44u: goto label_24cb44;
        case 0x24cb48u: goto label_24cb48;
        case 0x24cb4cu: goto label_24cb4c;
        case 0x24cb50u: goto label_24cb50;
        case 0x24cb54u: goto label_24cb54;
        case 0x24cb58u: goto label_24cb58;
        case 0x24cb5cu: goto label_24cb5c;
        case 0x24cb60u: goto label_24cb60;
        case 0x24cb64u: goto label_24cb64;
        case 0x24cb68u: goto label_24cb68;
        case 0x24cb6cu: goto label_24cb6c;
        case 0x24cb70u: goto label_24cb70;
        case 0x24cb74u: goto label_24cb74;
        case 0x24cb78u: goto label_24cb78;
        case 0x24cb7cu: goto label_24cb7c;
        case 0x24cb80u: goto label_24cb80;
        case 0x24cb84u: goto label_24cb84;
        case 0x24cb88u: goto label_24cb88;
        case 0x24cb8cu: goto label_24cb8c;
        case 0x24cb90u: goto label_24cb90;
        case 0x24cb94u: goto label_24cb94;
        case 0x24cb98u: goto label_24cb98;
        case 0x24cb9cu: goto label_24cb9c;
        case 0x24cba0u: goto label_24cba0;
        case 0x24cba4u: goto label_24cba4;
        case 0x24cba8u: goto label_24cba8;
        case 0x24cbacu: goto label_24cbac;
        case 0x24cbb0u: goto label_24cbb0;
        case 0x24cbb4u: goto label_24cbb4;
        case 0x24cbb8u: goto label_24cbb8;
        case 0x24cbbcu: goto label_24cbbc;
        case 0x24cbc0u: goto label_24cbc0;
        case 0x24cbc4u: goto label_24cbc4;
        case 0x24cbc8u: goto label_24cbc8;
        case 0x24cbccu: goto label_24cbcc;
        case 0x24cbd0u: goto label_24cbd0;
        case 0x24cbd4u: goto label_24cbd4;
        case 0x24cbd8u: goto label_24cbd8;
        case 0x24cbdcu: goto label_24cbdc;
        case 0x24cbe0u: goto label_24cbe0;
        case 0x24cbe4u: goto label_24cbe4;
        case 0x24cbe8u: goto label_24cbe8;
        case 0x24cbecu: goto label_24cbec;
        case 0x24cbf0u: goto label_24cbf0;
        case 0x24cbf4u: goto label_24cbf4;
        case 0x24cbf8u: goto label_24cbf8;
        case 0x24cbfcu: goto label_24cbfc;
        case 0x24cc00u: goto label_24cc00;
        case 0x24cc04u: goto label_24cc04;
        case 0x24cc08u: goto label_24cc08;
        case 0x24cc0cu: goto label_24cc0c;
        case 0x24cc10u: goto label_24cc10;
        case 0x24cc14u: goto label_24cc14;
        case 0x24cc18u: goto label_24cc18;
        case 0x24cc1cu: goto label_24cc1c;
        case 0x24cc20u: goto label_24cc20;
        case 0x24cc24u: goto label_24cc24;
        case 0x24cc28u: goto label_24cc28;
        case 0x24cc2cu: goto label_24cc2c;
        case 0x24cc30u: goto label_24cc30;
        case 0x24cc34u: goto label_24cc34;
        case 0x24cc38u: goto label_24cc38;
        case 0x24cc3cu: goto label_24cc3c;
        case 0x24cc40u: goto label_24cc40;
        case 0x24cc44u: goto label_24cc44;
        case 0x24cc48u: goto label_24cc48;
        case 0x24cc4cu: goto label_24cc4c;
        case 0x24cc50u: goto label_24cc50;
        case 0x24cc54u: goto label_24cc54;
        case 0x24cc58u: goto label_24cc58;
        case 0x24cc5cu: goto label_24cc5c;
        case 0x24cc60u: goto label_24cc60;
        case 0x24cc64u: goto label_24cc64;
        case 0x24cc68u: goto label_24cc68;
        case 0x24cc6cu: goto label_24cc6c;
        case 0x24cc70u: goto label_24cc70;
        case 0x24cc74u: goto label_24cc74;
        case 0x24cc78u: goto label_24cc78;
        case 0x24cc7cu: goto label_24cc7c;
        case 0x24cc80u: goto label_24cc80;
        case 0x24cc84u: goto label_24cc84;
        case 0x24cc88u: goto label_24cc88;
        case 0x24cc8cu: goto label_24cc8c;
        case 0x24cc90u: goto label_24cc90;
        case 0x24cc94u: goto label_24cc94;
        case 0x24cc98u: goto label_24cc98;
        case 0x24cc9cu: goto label_24cc9c;
        case 0x24cca0u: goto label_24cca0;
        case 0x24cca4u: goto label_24cca4;
        case 0x24cca8u: goto label_24cca8;
        case 0x24ccacu: goto label_24ccac;
        case 0x24ccb0u: goto label_24ccb0;
        case 0x24ccb4u: goto label_24ccb4;
        case 0x24ccb8u: goto label_24ccb8;
        case 0x24ccbcu: goto label_24ccbc;
        case 0x24ccc0u: goto label_24ccc0;
        case 0x24ccc4u: goto label_24ccc4;
        case 0x24ccc8u: goto label_24ccc8;
        case 0x24ccccu: goto label_24cccc;
        case 0x24ccd0u: goto label_24ccd0;
        case 0x24ccd4u: goto label_24ccd4;
        case 0x24ccd8u: goto label_24ccd8;
        case 0x24ccdcu: goto label_24ccdc;
        case 0x24cce0u: goto label_24cce0;
        case 0x24cce4u: goto label_24cce4;
        case 0x24cce8u: goto label_24cce8;
        case 0x24ccecu: goto label_24ccec;
        case 0x24ccf0u: goto label_24ccf0;
        case 0x24ccf4u: goto label_24ccf4;
        case 0x24ccf8u: goto label_24ccf8;
        case 0x24ccfcu: goto label_24ccfc;
        case 0x24cd00u: goto label_24cd00;
        case 0x24cd04u: goto label_24cd04;
        case 0x24cd08u: goto label_24cd08;
        case 0x24cd0cu: goto label_24cd0c;
        case 0x24cd10u: goto label_24cd10;
        case 0x24cd14u: goto label_24cd14;
        case 0x24cd18u: goto label_24cd18;
        case 0x24cd1cu: goto label_24cd1c;
        case 0x24cd20u: goto label_24cd20;
        case 0x24cd24u: goto label_24cd24;
        case 0x24cd28u: goto label_24cd28;
        case 0x24cd2cu: goto label_24cd2c;
        case 0x24cd30u: goto label_24cd30;
        case 0x24cd34u: goto label_24cd34;
        case 0x24cd38u: goto label_24cd38;
        case 0x24cd3cu: goto label_24cd3c;
        case 0x24cd40u: goto label_24cd40;
        case 0x24cd44u: goto label_24cd44;
        case 0x24cd48u: goto label_24cd48;
        case 0x24cd4cu: goto label_24cd4c;
        case 0x24cd50u: goto label_24cd50;
        case 0x24cd54u: goto label_24cd54;
        case 0x24cd58u: goto label_24cd58;
        case 0x24cd5cu: goto label_24cd5c;
        case 0x24cd60u: goto label_24cd60;
        case 0x24cd64u: goto label_24cd64;
        case 0x24cd68u: goto label_24cd68;
        case 0x24cd6cu: goto label_24cd6c;
        case 0x24cd70u: goto label_24cd70;
        case 0x24cd74u: goto label_24cd74;
        case 0x24cd78u: goto label_24cd78;
        case 0x24cd7cu: goto label_24cd7c;
        case 0x24cd80u: goto label_24cd80;
        case 0x24cd84u: goto label_24cd84;
        case 0x24cd88u: goto label_24cd88;
        case 0x24cd8cu: goto label_24cd8c;
        case 0x24cd90u: goto label_24cd90;
        case 0x24cd94u: goto label_24cd94;
        case 0x24cd98u: goto label_24cd98;
        case 0x24cd9cu: goto label_24cd9c;
        case 0x24cda0u: goto label_24cda0;
        case 0x24cda4u: goto label_24cda4;
        case 0x24cda8u: goto label_24cda8;
        case 0x24cdacu: goto label_24cdac;
        case 0x24cdb0u: goto label_24cdb0;
        case 0x24cdb4u: goto label_24cdb4;
        case 0x24cdb8u: goto label_24cdb8;
        case 0x24cdbcu: goto label_24cdbc;
        case 0x24cdc0u: goto label_24cdc0;
        case 0x24cdc4u: goto label_24cdc4;
        case 0x24cdc8u: goto label_24cdc8;
        case 0x24cdccu: goto label_24cdcc;
        case 0x24cdd0u: goto label_24cdd0;
        case 0x24cdd4u: goto label_24cdd4;
        case 0x24cdd8u: goto label_24cdd8;
        case 0x24cddcu: goto label_24cddc;
        case 0x24cde0u: goto label_24cde0;
        case 0x24cde4u: goto label_24cde4;
        case 0x24cde8u: goto label_24cde8;
        case 0x24cdecu: goto label_24cdec;
        case 0x24cdf0u: goto label_24cdf0;
        case 0x24cdf4u: goto label_24cdf4;
        case 0x24cdf8u: goto label_24cdf8;
        case 0x24cdfcu: goto label_24cdfc;
        case 0x24ce00u: goto label_24ce00;
        case 0x24ce04u: goto label_24ce04;
        case 0x24ce08u: goto label_24ce08;
        case 0x24ce0cu: goto label_24ce0c;
        case 0x24ce10u: goto label_24ce10;
        case 0x24ce14u: goto label_24ce14;
        case 0x24ce18u: goto label_24ce18;
        case 0x24ce1cu: goto label_24ce1c;
        case 0x24ce20u: goto label_24ce20;
        case 0x24ce24u: goto label_24ce24;
        case 0x24ce28u: goto label_24ce28;
        case 0x24ce2cu: goto label_24ce2c;
        case 0x24ce30u: goto label_24ce30;
        case 0x24ce34u: goto label_24ce34;
        case 0x24ce38u: goto label_24ce38;
        case 0x24ce3cu: goto label_24ce3c;
        case 0x24ce40u: goto label_24ce40;
        case 0x24ce44u: goto label_24ce44;
        case 0x24ce48u: goto label_24ce48;
        case 0x24ce4cu: goto label_24ce4c;
        case 0x24ce50u: goto label_24ce50;
        case 0x24ce54u: goto label_24ce54;
        case 0x24ce58u: goto label_24ce58;
        case 0x24ce5cu: goto label_24ce5c;
        case 0x24ce60u: goto label_24ce60;
        case 0x24ce64u: goto label_24ce64;
        case 0x24ce68u: goto label_24ce68;
        case 0x24ce6cu: goto label_24ce6c;
        case 0x24ce70u: goto label_24ce70;
        case 0x24ce74u: goto label_24ce74;
        case 0x24ce78u: goto label_24ce78;
        case 0x24ce7cu: goto label_24ce7c;
        case 0x24ce80u: goto label_24ce80;
        case 0x24ce84u: goto label_24ce84;
        case 0x24ce88u: goto label_24ce88;
        case 0x24ce8cu: goto label_24ce8c;
        case 0x24ce90u: goto label_24ce90;
        case 0x24ce94u: goto label_24ce94;
        case 0x24ce98u: goto label_24ce98;
        case 0x24ce9cu: goto label_24ce9c;
        case 0x24cea0u: goto label_24cea0;
        case 0x24cea4u: goto label_24cea4;
        case 0x24cea8u: goto label_24cea8;
        case 0x24ceacu: goto label_24ceac;
        case 0x24ceb0u: goto label_24ceb0;
        case 0x24ceb4u: goto label_24ceb4;
        case 0x24ceb8u: goto label_24ceb8;
        case 0x24cebcu: goto label_24cebc;
        case 0x24cec0u: goto label_24cec0;
        case 0x24cec4u: goto label_24cec4;
        case 0x24cec8u: goto label_24cec8;
        case 0x24ceccu: goto label_24cecc;
        case 0x24ced0u: goto label_24ced0;
        case 0x24ced4u: goto label_24ced4;
        case 0x24ced8u: goto label_24ced8;
        case 0x24cedcu: goto label_24cedc;
        case 0x24cee0u: goto label_24cee0;
        case 0x24cee4u: goto label_24cee4;
        case 0x24cee8u: goto label_24cee8;
        case 0x24ceecu: goto label_24ceec;
        case 0x24cef0u: goto label_24cef0;
        case 0x24cef4u: goto label_24cef4;
        case 0x24cef8u: goto label_24cef8;
        case 0x24cefcu: goto label_24cefc;
        case 0x24cf00u: goto label_24cf00;
        case 0x24cf04u: goto label_24cf04;
        case 0x24cf08u: goto label_24cf08;
        case 0x24cf0cu: goto label_24cf0c;
        case 0x24cf10u: goto label_24cf10;
        case 0x24cf14u: goto label_24cf14;
        case 0x24cf18u: goto label_24cf18;
        case 0x24cf1cu: goto label_24cf1c;
        case 0x24cf20u: goto label_24cf20;
        case 0x24cf24u: goto label_24cf24;
        case 0x24cf28u: goto label_24cf28;
        case 0x24cf2cu: goto label_24cf2c;
        case 0x24cf30u: goto label_24cf30;
        case 0x24cf34u: goto label_24cf34;
        case 0x24cf38u: goto label_24cf38;
        case 0x24cf3cu: goto label_24cf3c;
        case 0x24cf40u: goto label_24cf40;
        case 0x24cf44u: goto label_24cf44;
        case 0x24cf48u: goto label_24cf48;
        case 0x24cf4cu: goto label_24cf4c;
        case 0x24cf50u: goto label_24cf50;
        case 0x24cf54u: goto label_24cf54;
        case 0x24cf58u: goto label_24cf58;
        case 0x24cf5cu: goto label_24cf5c;
        case 0x24cf60u: goto label_24cf60;
        case 0x24cf64u: goto label_24cf64;
        case 0x24cf68u: goto label_24cf68;
        case 0x24cf6cu: goto label_24cf6c;
        case 0x24cf70u: goto label_24cf70;
        case 0x24cf74u: goto label_24cf74;
        case 0x24cf78u: goto label_24cf78;
        case 0x24cf7cu: goto label_24cf7c;
        case 0x24cf80u: goto label_24cf80;
        case 0x24cf84u: goto label_24cf84;
        case 0x24cf88u: goto label_24cf88;
        case 0x24cf8cu: goto label_24cf8c;
        case 0x24cf90u: goto label_24cf90;
        case 0x24cf94u: goto label_24cf94;
        case 0x24cf98u: goto label_24cf98;
        case 0x24cf9cu: goto label_24cf9c;
        case 0x24cfa0u: goto label_24cfa0;
        case 0x24cfa4u: goto label_24cfa4;
        case 0x24cfa8u: goto label_24cfa8;
        case 0x24cfacu: goto label_24cfac;
        case 0x24cfb0u: goto label_24cfb0;
        case 0x24cfb4u: goto label_24cfb4;
        case 0x24cfb8u: goto label_24cfb8;
        case 0x24cfbcu: goto label_24cfbc;
        case 0x24cfc0u: goto label_24cfc0;
        case 0x24cfc4u: goto label_24cfc4;
        case 0x24cfc8u: goto label_24cfc8;
        case 0x24cfccu: goto label_24cfcc;
        case 0x24cfd0u: goto label_24cfd0;
        case 0x24cfd4u: goto label_24cfd4;
        case 0x24cfd8u: goto label_24cfd8;
        case 0x24cfdcu: goto label_24cfdc;
        case 0x24cfe0u: goto label_24cfe0;
        case 0x24cfe4u: goto label_24cfe4;
        case 0x24cfe8u: goto label_24cfe8;
        case 0x24cfecu: goto label_24cfec;
        case 0x24cff0u: goto label_24cff0;
        case 0x24cff4u: goto label_24cff4;
        case 0x24cff8u: goto label_24cff8;
        case 0x24cffcu: goto label_24cffc;
        case 0x24d000u: goto label_24d000;
        case 0x24d004u: goto label_24d004;
        case 0x24d008u: goto label_24d008;
        case 0x24d00cu: goto label_24d00c;
        case 0x24d010u: goto label_24d010;
        case 0x24d014u: goto label_24d014;
        case 0x24d018u: goto label_24d018;
        case 0x24d01cu: goto label_24d01c;
        case 0x24d020u: goto label_24d020;
        case 0x24d024u: goto label_24d024;
        case 0x24d028u: goto label_24d028;
        case 0x24d02cu: goto label_24d02c;
        case 0x24d030u: goto label_24d030;
        case 0x24d034u: goto label_24d034;
        case 0x24d038u: goto label_24d038;
        case 0x24d03cu: goto label_24d03c;
        case 0x24d040u: goto label_24d040;
        case 0x24d044u: goto label_24d044;
        case 0x24d048u: goto label_24d048;
        case 0x24d04cu: goto label_24d04c;
        case 0x24d050u: goto label_24d050;
        case 0x24d054u: goto label_24d054;
        case 0x24d058u: goto label_24d058;
        case 0x24d05cu: goto label_24d05c;
        case 0x24d060u: goto label_24d060;
        case 0x24d064u: goto label_24d064;
        case 0x24d068u: goto label_24d068;
        case 0x24d06cu: goto label_24d06c;
        case 0x24d070u: goto label_24d070;
        case 0x24d074u: goto label_24d074;
        case 0x24d078u: goto label_24d078;
        case 0x24d07cu: goto label_24d07c;
        case 0x24d080u: goto label_24d080;
        case 0x24d084u: goto label_24d084;
        case 0x24d088u: goto label_24d088;
        case 0x24d08cu: goto label_24d08c;
        case 0x24d090u: goto label_24d090;
        case 0x24d094u: goto label_24d094;
        case 0x24d098u: goto label_24d098;
        case 0x24d09cu: goto label_24d09c;
        case 0x24d0a0u: goto label_24d0a0;
        case 0x24d0a4u: goto label_24d0a4;
        case 0x24d0a8u: goto label_24d0a8;
        case 0x24d0acu: goto label_24d0ac;
        case 0x24d0b0u: goto label_24d0b0;
        case 0x24d0b4u: goto label_24d0b4;
        case 0x24d0b8u: goto label_24d0b8;
        case 0x24d0bcu: goto label_24d0bc;
        case 0x24d0c0u: goto label_24d0c0;
        case 0x24d0c4u: goto label_24d0c4;
        case 0x24d0c8u: goto label_24d0c8;
        case 0x24d0ccu: goto label_24d0cc;
        case 0x24d0d0u: goto label_24d0d0;
        case 0x24d0d4u: goto label_24d0d4;
        case 0x24d0d8u: goto label_24d0d8;
        case 0x24d0dcu: goto label_24d0dc;
        case 0x24d0e0u: goto label_24d0e0;
        case 0x24d0e4u: goto label_24d0e4;
        case 0x24d0e8u: goto label_24d0e8;
        case 0x24d0ecu: goto label_24d0ec;
        case 0x24d0f0u: goto label_24d0f0;
        case 0x24d0f4u: goto label_24d0f4;
        case 0x24d0f8u: goto label_24d0f8;
        case 0x24d0fcu: goto label_24d0fc;
        case 0x24d100u: goto label_24d100;
        case 0x24d104u: goto label_24d104;
        case 0x24d108u: goto label_24d108;
        case 0x24d10cu: goto label_24d10c;
        case 0x24d110u: goto label_24d110;
        case 0x24d114u: goto label_24d114;
        case 0x24d118u: goto label_24d118;
        case 0x24d11cu: goto label_24d11c;
        case 0x24d120u: goto label_24d120;
        case 0x24d124u: goto label_24d124;
        case 0x24d128u: goto label_24d128;
        case 0x24d12cu: goto label_24d12c;
        case 0x24d130u: goto label_24d130;
        case 0x24d134u: goto label_24d134;
        case 0x24d138u: goto label_24d138;
        case 0x24d13cu: goto label_24d13c;
        case 0x24d140u: goto label_24d140;
        case 0x24d144u: goto label_24d144;
        case 0x24d148u: goto label_24d148;
        case 0x24d14cu: goto label_24d14c;
        case 0x24d150u: goto label_24d150;
        case 0x24d154u: goto label_24d154;
        case 0x24d158u: goto label_24d158;
        case 0x24d15cu: goto label_24d15c;
        case 0x24d160u: goto label_24d160;
        case 0x24d164u: goto label_24d164;
        case 0x24d168u: goto label_24d168;
        case 0x24d16cu: goto label_24d16c;
        case 0x24d170u: goto label_24d170;
        case 0x24d174u: goto label_24d174;
        case 0x24d178u: goto label_24d178;
        case 0x24d17cu: goto label_24d17c;
        case 0x24d180u: goto label_24d180;
        case 0x24d184u: goto label_24d184;
        case 0x24d188u: goto label_24d188;
        case 0x24d18cu: goto label_24d18c;
        case 0x24d190u: goto label_24d190;
        case 0x24d194u: goto label_24d194;
        case 0x24d198u: goto label_24d198;
        case 0x24d19cu: goto label_24d19c;
        case 0x24d1a0u: goto label_24d1a0;
        case 0x24d1a4u: goto label_24d1a4;
        case 0x24d1a8u: goto label_24d1a8;
        case 0x24d1acu: goto label_24d1ac;
        case 0x24d1b0u: goto label_24d1b0;
        case 0x24d1b4u: goto label_24d1b4;
        case 0x24d1b8u: goto label_24d1b8;
        case 0x24d1bcu: goto label_24d1bc;
        case 0x24d1c0u: goto label_24d1c0;
        case 0x24d1c4u: goto label_24d1c4;
        case 0x24d1c8u: goto label_24d1c8;
        case 0x24d1ccu: goto label_24d1cc;
        default: return;
    }

label_24ca00:
    // 0x24ca00: 0x0  nop
    ctx->pc = 0x24ca00u;
    // NOP
label_24ca04:
    // 0x24ca04: 0x0  nop
    ctx->pc = 0x24ca04u;
    // NOP
label_24ca08:
    // 0x24ca08: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x24ca08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca0c:
    // 0x24ca0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ca0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ca10:
    // 0x24ca10: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca10u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CA10 raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca14:
    // 0x24ca14: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24ca18:
    if (ctx->pc == 0x24CA18u) {
        ctx->pc = 0x24CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA14u;
        // 0x24ca18: 0x40000000  mfc0        $zero, Index (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CA1Cu;
        goto label_24ca1c;
    }
    ctx->pc = 0x24CA14u;
    {
        const bool branch_taken_0x24ca14 = (false);
        ctx->pc = 0x24CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA14u;
        // 0x24ca18: 0x40000000  mfc0        $zero, Index (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca14) {
            ctx->pc = 0x24CA18u;
            goto label_24ca18;
        }
    }
    ctx->pc = 0x24CA1Cu;
label_24ca1c:
    // 0x24ca1c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24CA1C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca20:
    // 0x24ca20: 0x0  nop
    ctx->pc = 0x24ca20u;
    // NOP
label_24ca24:
    // 0x24ca24: 0x0  nop
    ctx->pc = 0x24ca24u;
    // NOP
label_24ca28:
    // 0x24ca28: 0x0  nop
    ctx->pc = 0x24ca28u;
    // NOP
label_24ca2c:
    // 0x24ca2c: 0x0  nop
    ctx->pc = 0x24ca2cu;
    // NOP
label_24ca30:
    // 0x24ca30: 0x0  nop
    ctx->pc = 0x24ca30u;
    // NOP
label_24ca34:
    // 0x24ca34: 0x0  nop
    ctx->pc = 0x24ca34u;
    // NOP
label_24ca38:
    // 0x24ca38: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ca38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca3c:
    // 0x24ca3c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ca3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca40:
    // 0x24ca40: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ca40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca44:
    // 0x24ca44: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CA44 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca48:
    // 0x24ca48: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ca48u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CA48 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca4c:
    // 0x24ca4c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ca4cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CA4C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca50:
    // 0x24ca50: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ca50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca54:
    // 0x24ca54: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ca54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca58:
    // 0x24ca58: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ca58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca5c:
    // 0x24ca5c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CA5C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca60:
    // 0x24ca60: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ca60u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CA60 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca64:
    // 0x24ca64: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ca64u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CA64 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca68:
    // 0x24ca68: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ca68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca6c:
    // 0x24ca6c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24ca6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca70:
    // 0x24ca70: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24ca70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca74:
    // 0x24ca74: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca74u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CA74 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca78:
    // 0x24ca78: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ca78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CA78 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca7c:
    // 0x24ca7c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24CA7C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca80:
    // 0x24ca80: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ca80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca84:
    // 0x24ca84: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24ca84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca88:
    // 0x24ca88: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ca88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca8c:
    // 0x24ca8c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CA8C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca90:
    // 0x24ca90: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca90u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24CA90 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca94:
    // 0x24ca94: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ca94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CA94 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ca98:
    // 0x24ca98: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24ca98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ca9c:
    // 0x24ca9c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24ca9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24caa0:
    // 0x24caa0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24caa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24caa4:
    // 0x24caa4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24caa4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24CAA4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24caa8:
    // 0x24caa8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24caa8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24CAA8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24caac:
    // 0x24caac: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24caacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24CAAC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cab0:
    // 0x24cab0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24cab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cab4:
    // 0x24cab4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cab8:
    // 0x24cab8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cabc:
    // 0x24cabc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cabcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CABC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cac0:
    // 0x24cac0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cac0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CAC0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cac4:
    // 0x24cac4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cac4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24CAC4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cac8:
    // 0x24cac8: 0x42e7d1ec  .word       0x42E7D1EC                   # INVALID     $s7, $a3, -0x2E14 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cac8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24CAC8 raw=0x42E7D1EC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cacc:
    // 0x24cacc: 0x170009  .word       0x00170009                   # jalr        $zero, $zero # 00170000 <InstrIdType: CPU_SPECIAL>
label_24cad0:
    if (ctx->pc == 0x24CAD0u) {
        ctx->pc = 0x24CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CACCu;
        // 0x24cad0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CAD4u;
        goto label_24cad4;
    }
    ctx->pc = 0x24CACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CACCu;
        // 0x24cad0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CACCu, 0x24CAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CAD4u;
label_24cad4:
    // 0x24cad4: 0xa600a6  .word       0x00A600A6                   # xor         $zero, $a1, $a2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cad4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
label_24cad8:
    // 0x24cad8: 0x83d0056  j           func_F40158
label_24cadc:
    if (ctx->pc == 0x24CADCu) {
        ctx->pc = 0x24CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAD8u;
        // 0x24cadc: 0x86a011c  j           func_1A80470 (Delay Slot)
        // J 0x1A80470 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CAE0u;
        goto label_24cae0;
    }
    ctx->pc = 0x24CAD8u;
    ctx->pc = 0x24CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CAD8u;
    // 0x24cadc: 0x86a011c  j           func_1A80470 (Delay Slot)
    // J 0x1A80470 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xF40158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xF40158u, 0x24CAD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24CAE0u;
label_24cae0:
    // 0x24cae0: 0x2010200  .word       0x02010200                   # sll         $zero, $at, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cae0u;
    
label_24cae4:
    // 0x24cae4: 0x17e0155  .word       0x017E0155                   # INVALID     $t3, $fp, 0x155 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cae4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24CAE4 raw=0x017E0155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cae8:
    // 0x24cae8: 0x4000a7  .word       0x004000A7                   # not         $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cae8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_24caec:
    // 0x24caec: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x24caecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_24caf0:
    // 0x24caf0: 0x0  nop
    ctx->pc = 0x24caf0u;
    // NOP
label_24caf4:
    // 0x24caf4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24caf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24caf8:
    // 0x24caf8: 0x0  nop
    ctx->pc = 0x24caf8u;
    // NOP
label_24cafc:
    // 0x24cafc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cafcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cb00:
    // 0x24cb00: 0x429a0000  .word       0x429A0000                   # INVALID     $s4, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CB00 raw=0x429A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb04:
    // 0x24cb04: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24CB04 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb08:
    // 0x24cb08: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb08u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24CB08 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb0c:
    // 0x24cb0c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb0cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24CB0C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb10:
    // 0x24cb10: 0x0  nop
    ctx->pc = 0x24cb10u;
    // NOP
label_24cb14:
    // 0x24cb14: 0x0  nop
    ctx->pc = 0x24cb14u;
    // NOP
label_24cb18:
    // 0x24cb18: 0x0  nop
    ctx->pc = 0x24cb18u;
    // NOP
label_24cb1c:
    // 0x24cb1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cb1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cb20:
    // 0x24cb20: 0x0  nop
    ctx->pc = 0x24cb20u;
    // NOP
label_24cb24:
    // 0x24cb24: 0x0  nop
    ctx->pc = 0x24cb24u;
    // NOP
label_24cb28:
    // 0x24cb28: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24cb28u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24cb2c:
    // 0x24cb2c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb2cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24CB2C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb30:
    // 0x24cb30: 0x0  nop
    ctx->pc = 0x24cb30u;
    // NOP
label_24cb34:
    // 0x24cb34: 0x0  nop
    ctx->pc = 0x24cb34u;
    // NOP
label_24cb38:
    // 0x24cb38: 0x0  nop
    ctx->pc = 0x24cb38u;
    // NOP
label_24cb3c:
    // 0x24cb3c: 0x0  nop
    ctx->pc = 0x24cb3cu;
    // NOP
label_24cb40:
    // 0x24cb40: 0x0  nop
    ctx->pc = 0x24cb40u;
    // NOP
label_24cb44:
    // 0x24cb44: 0x0  nop
    ctx->pc = 0x24cb44u;
    // NOP
label_24cb48:
    // 0x24cb48: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb4c:
    // 0x24cb4c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24cb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb50:
    // 0x24cb50: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb54:
    // 0x24cb54: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CB54 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb58:
    // 0x24cb58: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cb58u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CB58 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb5c:
    // 0x24cb5c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cb5cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CB5C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb60:
    // 0x24cb60: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb64:
    // 0x24cb64: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24cb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb68:
    // 0x24cb68: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb6c:
    // 0x24cb6c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb6cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CB6C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb70:
    // 0x24cb70: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cb70u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CB70 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb74:
    // 0x24cb74: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cb74u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CB74 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb78:
    // 0x24cb78: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb7c:
    // 0x24cb7c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24cb7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb80:
    // 0x24cb80: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24cb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb84:
    // 0x24cb84: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CB84 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb88:
    // 0x24cb88: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cb88u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CB88 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb8c:
    // 0x24cb8c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24CB8C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cb90:
    // 0x24cb90: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb94:
    // 0x24cb94: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24cb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb98:
    // 0x24cb98: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cb9c:
    // 0x24cb9c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cb9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CB9C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cba0:
    // 0x24cba0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cba0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24CBA0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cba4:
    // 0x24cba4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cba4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CBA4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cba8:
    // 0x24cba8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24cba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbac:
    // 0x24cbac: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24cbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbb0:
    // 0x24cbb0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24cbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbb4:
    // 0x24cbb4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cbb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24CBB4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbb8:
    // 0x24cbb8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cbb8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24CBB8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbbc:
    // 0x24cbbc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cbbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24CBBC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbc0:
    // 0x24cbc0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24cbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbc4:
    // 0x24cbc4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbc8:
    // 0x24cbc8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cbcc:
    // 0x24cbcc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cbccu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CBCC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbd0:
    // 0x24cbd0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cbd0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CBD0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbd4:
    // 0x24cbd4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cbd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24CBD4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbd8:
    // 0x24cbd8: 0x42e8dc29  .word       0x42E8DC29                   # INVALID     $s7, $t0, -0x23D7 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cbd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24CBD8 raw=0x42E8DC29"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cbdc:
    // 0x24cbdc: 0x180009  .word       0x00180009                   # jalr        $zero, $zero # 00180000 <InstrIdType: CPU_SPECIAL>
label_24cbe0:
    if (ctx->pc == 0x24CBE0u) {
        ctx->pc = 0x24CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBDCu;
        // 0x24cbe0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBE4u;
        goto label_24cbe4;
    }
    ctx->pc = 0x24CBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBDCu;
        // 0x24cbe0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CBDCu, 0x24CBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CBE4u;
label_24cbe4:
    // 0x24cbe4: 0xa800a8  .word       0x00A800A8                   # mfsa        $zero # 00A80080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24cbe4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_24cbe8:
    // 0x24cbe8: 0x83e0057  j           func_F8015C
label_24cbec:
    if (ctx->pc == 0x24CBECu) {
        ctx->pc = 0x24CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBE8u;
        // 0x24cbec: 0x86b011d  j           func_1AC0474 (Delay Slot)
        // J 0x1AC0474 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CBF0u;
        goto label_24cbf0;
    }
    ctx->pc = 0x24CBE8u;
    ctx->pc = 0x24CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBE8u;
    // 0x24cbec: 0x86b011d  j           func_1AC0474 (Delay Slot)
    // J 0x1AC0474 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xF8015Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xF8015Cu, 0x24CBE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24CBF0u;
label_24cbf0:
    // 0x24cbf0: 0x2130212  .word       0x02130212                   # mflo        $zero # 02130200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cbf0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24cbf4:
    // 0x24cbf4: 0x17f0156  .word       0x017F0156                   # dsrlv       $zero, $ra, $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cbf4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) >> (GPR_U32(ctx, 11) & 0x3F));
label_24cbf8:
    // 0x24cbf8: 0x5200a9  .word       0x005200A9                   # mtsa        $v0 # 00120080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24cbf8u;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_24cbfc:
    // 0x24cbfc: 0x8  jr          $zero
label_24cc00:
    if (ctx->pc == 0x24CC00u) {
        ctx->pc = 0x24CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBFCu;
        // 0x24cc00: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24CC00 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CC04u;
        goto label_24cc04;
    }
    ctx->pc = 0x24CBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBFCu;
        // 0x24cc00: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24CC00 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CBFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24CC04u;
label_24cc04:
    // 0x24cc04: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24CC04 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc08:
    // 0x24cc08: 0x0  nop
    ctx->pc = 0x24cc08u;
    // NOP
label_24cc0c:
    // 0x24cc0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cc0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cc10:
    // 0x24cc10: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cc10u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CC10 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc14:
    // 0x24cc14: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CC14 raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc18:
    // 0x24cc18: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cc18u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cc1c:
    // 0x24cc1c: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x24cc1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x24CC1C raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc20:
    // 0x24cc20: 0x0  nop
    ctx->pc = 0x24cc20u;
    // NOP
label_24cc24:
    // 0x24cc24: 0x0  nop
    ctx->pc = 0x24cc24u;
    // NOP
label_24cc28:
    // 0x24cc28: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cc28u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CC28 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc2c:
    // 0x24cc2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cc2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cc30:
    // 0x24cc30: 0x42300000  .word       0x42300000                   # INVALID     $s1, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc30u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24CC30 raw=0x42300000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc34:
    // 0x24cc34: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cc34u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CC34 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc38:
    // 0x24cc38: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24cc38u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24cc3c:
    // 0x24cc3c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24CC3C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc40:
    // 0x24cc40: 0x0  nop
    ctx->pc = 0x24cc40u;
    // NOP
label_24cc44:
    // 0x24cc44: 0x0  nop
    ctx->pc = 0x24cc44u;
    // NOP
label_24cc48:
    // 0x24cc48: 0x0  nop
    ctx->pc = 0x24cc48u;
    // NOP
label_24cc4c:
    // 0x24cc4c: 0x0  nop
    ctx->pc = 0x24cc4cu;
    // NOP
label_24cc50:
    // 0x24cc50: 0x0  nop
    ctx->pc = 0x24cc50u;
    // NOP
label_24cc54:
    // 0x24cc54: 0x0  nop
    ctx->pc = 0x24cc54u;
    // NOP
label_24cc58:
    // 0x24cc58: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cc5c:
    // 0x24cc5c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24cc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cc60:
    // 0x24cc60: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cc64:
    // 0x24cc64: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc64u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CC64 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc68:
    // 0x24cc68: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cc68u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CC68 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc6c:
    // 0x24cc6c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cc6cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CC6C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc70:
    // 0x24cc70: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cc74:
    // 0x24cc74: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24cc74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cc78:
    // 0x24cc78: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cc7c:
    // 0x24cc7c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CC7C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc80:
    // 0x24cc80: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cc80u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CC80 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc84:
    // 0x24cc84: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cc84u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CC84 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc88:
    // 0x24cc88: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cc8c:
    // 0x24cc8c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24cc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cc90:
    // 0x24cc90: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24cc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cc94:
    // 0x24cc94: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CC94 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc98:
    // 0x24cc98: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cc98u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CC98 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cc9c:
    // 0x24cc9c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cc9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24CC9C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cca0:
    // 0x24cca0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cca4:
    // 0x24cca4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24cca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cca8:
    // 0x24cca8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ccac:
    // 0x24ccac: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ccacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CCAC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ccb0:
    // 0x24ccb0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ccb0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24CCB0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ccb4:
    // 0x24ccb4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ccb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CCB4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ccb8:
    // 0x24ccb8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24ccb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ccbc:
    // 0x24ccbc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24ccbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ccc0:
    // 0x24ccc0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24ccc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ccc4:
    // 0x24ccc4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ccc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24CCC4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ccc8:
    // 0x24ccc8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ccc8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24CCC8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cccc:
    // 0x24cccc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ccccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24CCCC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ccd0:
    // 0x24ccd0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24ccd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ccd4:
    // 0x24ccd4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ccd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ccd8:
    // 0x24ccd8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ccd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ccdc:
    // 0x24ccdc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ccdcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CCDC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cce0:
    // 0x24cce0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cce0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CCE0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cce4:
    // 0x24cce4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cce4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24CCE4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cce8:
    // 0x24cce8: 0x42ef199a  .word       0x42EF199A                   # INVALID     $s7, $t7, 0x199A # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cce8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24CCE8 raw=0x42EF199A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ccec:
    // 0x24ccec: 0x190009  .word       0x00190009                   # jalr        $zero, $zero # 00190000 <InstrIdType: CPU_SPECIAL>
label_24ccf0:
    if (ctx->pc == 0x24CCF0u) {
        ctx->pc = 0x24CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCECu;
        // 0x24ccf0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CCF4u;
        goto label_24ccf4;
    }
    ctx->pc = 0x24CCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCECu;
        // 0x24ccf0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CCECu, 0x24CCF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CCF4u;
label_24ccf4:
    // 0x24ccf4: 0xaa00aa  .word       0x00AA00AA                   # slt         $zero, $a1, $t2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ccf4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_24ccf8:
    // 0x24ccf8: 0x83f0058  j           func_FC0160
label_24ccfc:
    if (ctx->pc == 0x24CCFCu) {
        ctx->pc = 0x24CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCF8u;
        // 0x24ccfc: 0x86c011e  j           func_1B00478 (Delay Slot)
        // J 0x1B00478 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD00u;
        goto label_24cd00;
    }
    ctx->pc = 0x24CCF8u;
    ctx->pc = 0x24CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCF8u;
    // 0x24ccfc: 0x86c011e  j           func_1B00478 (Delay Slot)
    // J 0x1B00478 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xFC0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xFC0160u, 0x24CCF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24CD00u;
label_24cd00:
    // 0x24cd00: 0x2150214  .word       0x02150214                   # dsllv       $zero, $s5, $s0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cd00u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 21) << (GPR_U32(ctx, 16) & 0x3F));
label_24cd04:
    // 0x24cd04: 0x1800157  .word       0x01800157                   # dsrav       $zero, $zero, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cd04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 12) & 0x3F));
label_24cd08:
    // 0x24cd08: 0x4f00ab  .word       0x004F00AB                   # sltu        $zero, $v0, $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cd08u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_24cd0c:
    // 0x24cd0c: 0x0  nop
    ctx->pc = 0x24cd0cu;
    // NOP
label_24cd10:
    // 0x24cd10: 0x0  nop
    ctx->pc = 0x24cd10u;
    // NOP
label_24cd14:
    // 0x24cd14: 0x0  nop
    ctx->pc = 0x24cd14u;
    // NOP
label_24cd18:
    // 0x24cd18: 0x0  nop
    ctx->pc = 0x24cd18u;
    // NOP
label_24cd1c:
    // 0x24cd1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cd1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cd20:
    // 0x24cd20: 0x0  nop
    ctx->pc = 0x24cd20u;
    // NOP
label_24cd24:
    // 0x24cd24: 0x0  nop
    ctx->pc = 0x24cd24u;
    // NOP
label_24cd28:
    // 0x24cd28: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24cd28u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24cd2c:
    // 0x24cd2c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cd2cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24CD2C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cd30:
    // 0x24cd30: 0x0  nop
    ctx->pc = 0x24cd30u;
    // NOP
label_24cd34:
    // 0x24cd34: 0x0  nop
    ctx->pc = 0x24cd34u;
    // NOP
label_24cd38:
    // 0x24cd38: 0x0  nop
    ctx->pc = 0x24cd38u;
    // NOP
label_24cd3c:
    // 0x24cd3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cd3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cd40:
    // 0x24cd40: 0x0  nop
    ctx->pc = 0x24cd40u;
    // NOP
label_24cd44:
    // 0x24cd44: 0x0  nop
    ctx->pc = 0x24cd44u;
    // NOP
label_24cd48:
    // 0x24cd48: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24cd48u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24cd4c:
    // 0x24cd4c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cd4cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24CD4C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cd50:
    // 0x24cd50: 0x0  nop
    ctx->pc = 0x24cd50u;
    // NOP
label_24cd54:
    // 0x24cd54: 0x0  nop
    ctx->pc = 0x24cd54u;
    // NOP
label_24cd58:
    // 0x24cd58: 0x0  nop
    ctx->pc = 0x24cd58u;
    // NOP
label_24cd5c:
    // 0x24cd5c: 0x0  nop
    ctx->pc = 0x24cd5cu;
    // NOP
label_24cd60:
    // 0x24cd60: 0x0  nop
    ctx->pc = 0x24cd60u;
    // NOP
label_24cd64:
    // 0x24cd64: 0x0  nop
    ctx->pc = 0x24cd64u;
    // NOP
label_24cd68:
    // 0x24cd68: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cd6c:
    // 0x24cd6c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24cd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cd70:
    // 0x24cd70: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cd74:
    // 0x24cd74: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cd74u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CD74 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cd78:
    // 0x24cd78: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cd78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CD78 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cd7c:
    // 0x24cd7c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cd7cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CD7C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cd80:
    // 0x24cd80: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cd84:
    // 0x24cd84: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24cd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cd88:
    // 0x24cd88: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cd8c:
    // 0x24cd8c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cd8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CD8C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cd90:
    // 0x24cd90: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cd90u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CD90 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cd94:
    // 0x24cd94: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cd94u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CD94 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cd98:
    // 0x24cd98: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cd9c:
    // 0x24cd9c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24cd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cda0:
    // 0x24cda0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24cda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cda4:
    // 0x24cda4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cda4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CDA4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cda8:
    // 0x24cda8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cda8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CDA8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cdac:
    // 0x24cdac: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cdacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24CDAC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cdb0:
    // 0x24cdb0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cdb4:
    // 0x24cdb4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24cdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cdb8:
    // 0x24cdb8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cdbc:
    // 0x24cdbc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cdbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CDBC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cdc0:
    // 0x24cdc0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cdc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24CDC0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cdc4:
    // 0x24cdc4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cdc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CDC4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cdc8:
    // 0x24cdc8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24cdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cdcc:
    // 0x24cdcc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24cdccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cdd0:
    // 0x24cdd0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24cdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cdd4:
    // 0x24cdd4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cdd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24CDD4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cdd8:
    // 0x24cdd8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cdd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24CDD8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cddc:
    // 0x24cddc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cddcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24CDDC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cde0:
    // 0x24cde0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24cde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cde4:
    // 0x24cde4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cde8:
    // 0x24cde8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cdec:
    // 0x24cdec: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cdecu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CDEC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cdf0:
    // 0x24cdf0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cdf0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CDF0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cdf4:
    // 0x24cdf4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cdf4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24CDF4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cdf8:
    // 0x24cdf8: 0x42ed0f5c  .word       0x42ED0F5C                   # INVALID     $s7, $t5, 0xF5C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cdf8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24CDF8 raw=0x42ED0F5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cdfc:
    // 0x24cdfc: 0x1a0009  .word       0x001A0009                   # jalr        $zero, $zero # 001A0000 <InstrIdType: CPU_SPECIAL>
label_24ce00:
    if (ctx->pc == 0x24CE00u) {
        ctx->pc = 0x24CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDFCu;
        // 0x24ce00: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE04u;
        goto label_24ce04;
    }
    ctx->pc = 0x24CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDFCu;
        // 0x24ce00: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CDFCu, 0x24CE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CE04u;
label_24ce04:
    // 0x24ce04: 0xac00ac  .word       0x00AC00AC                   # dadd        $zero, $a1, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ce04u;
    { int64_t a = (int64_t)GPR_S64(ctx, 5); int64_t b = (int64_t)GPR_S64(ctx, 12); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24ce08:
    // 0x24ce08: 0x8400059  j           func_1000164
label_24ce0c:
    if (ctx->pc == 0x24CE0Cu) {
        ctx->pc = 0x24CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE08u;
        // 0x24ce0c: 0x86d011f  j           func_1B4047C (Delay Slot)
        // J 0x1B4047C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CE10u;
        goto label_24ce10;
    }
    ctx->pc = 0x24CE08u;
    ctx->pc = 0x24CE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE08u;
    // 0x24ce0c: 0x86d011f  j           func_1B4047C (Delay Slot)
    // J 0x1B4047C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1000164u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1000164u, 0x24CE08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24CE10u;
label_24ce10:
    // 0x24ce10: 0x2190218  .word       0x02190218                   # mult        $zero, $s0, $t9 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24ce10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24ce14:
    // 0x24ce14: 0x1810158  .word       0x01810158                   # mult        $zero, $t4, $at # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24ce14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24ce18:
    // 0x24ce18: 0x5100ad  .word       0x005100AD                   # daddu       $zero, $v0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ce18u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_24ce1c:
    // 0x24ce1c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x24ce1cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ce20:
    // 0x24ce20: 0x0  nop
    ctx->pc = 0x24ce20u;
    // NOP
label_24ce24:
    // 0x24ce24: 0x0  nop
    ctx->pc = 0x24ce24u;
    // NOP
label_24ce28:
    // 0x24ce28: 0x0  nop
    ctx->pc = 0x24ce28u;
    // NOP
label_24ce2c:
    // 0x24ce2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ce2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ce30:
    // 0x24ce30: 0x0  nop
    ctx->pc = 0x24ce30u;
    // NOP
label_24ce34:
    // 0x24ce34: 0x0  nop
    ctx->pc = 0x24ce34u;
    // NOP
label_24ce38:
    // 0x24ce38: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24ce38u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24ce3c:
    // 0x24ce3c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ce3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24CE3C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ce40:
    // 0x24ce40: 0x0  nop
    ctx->pc = 0x24ce40u;
    // NOP
label_24ce44:
    // 0x24ce44: 0x0  nop
    ctx->pc = 0x24ce44u;
    // NOP
label_24ce48:
    // 0x24ce48: 0x0  nop
    ctx->pc = 0x24ce48u;
    // NOP
label_24ce4c:
    // 0x24ce4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ce4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ce50:
    // 0x24ce50: 0x0  nop
    ctx->pc = 0x24ce50u;
    // NOP
label_24ce54:
    // 0x24ce54: 0x0  nop
    ctx->pc = 0x24ce54u;
    // NOP
label_24ce58:
    // 0x24ce58: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24ce58u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24ce5c:
    // 0x24ce5c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ce5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24CE5C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ce60:
    // 0x24ce60: 0x0  nop
    ctx->pc = 0x24ce60u;
    // NOP
label_24ce64:
    // 0x24ce64: 0x0  nop
    ctx->pc = 0x24ce64u;
    // NOP
label_24ce68:
    // 0x24ce68: 0x0  nop
    ctx->pc = 0x24ce68u;
    // NOP
label_24ce6c:
    // 0x24ce6c: 0x0  nop
    ctx->pc = 0x24ce6cu;
    // NOP
label_24ce70:
    // 0x24ce70: 0x0  nop
    ctx->pc = 0x24ce70u;
    // NOP
label_24ce74:
    // 0x24ce74: 0x0  nop
    ctx->pc = 0x24ce74u;
    // NOP
label_24ce78:
    // 0x24ce78: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ce78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ce7c:
    // 0x24ce7c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ce7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ce80:
    // 0x24ce80: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ce80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ce84:
    // 0x24ce84: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ce84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CE84 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ce88:
    // 0x24ce88: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ce88u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CE88 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ce8c:
    // 0x24ce8c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ce8cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CE8C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ce90:
    // 0x24ce90: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ce90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ce94:
    // 0x24ce94: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ce94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ce98:
    // 0x24ce98: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ce98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ce9c:
    // 0x24ce9c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ce9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CE9C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cea0:
    // 0x24cea0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cea0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CEA0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cea4:
    // 0x24cea4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cea4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CEA4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cea8:
    // 0x24cea8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ceac:
    // 0x24ceac: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24ceacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ceb0:
    // 0x24ceb0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24ceb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ceb4:
    // 0x24ceb4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ceb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CEB4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ceb8:
    // 0x24ceb8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ceb8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CEB8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cebc:
    // 0x24cebc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cebcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24CEBC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cec0:
    // 0x24cec0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cec4:
    // 0x24cec4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24cec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cec8:
    // 0x24cec8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cecc:
    // 0x24cecc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ceccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CECC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ced0:
    // 0x24ced0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ced0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24CED0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ced4:
    // 0x24ced4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ced4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CED4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ced8:
    // 0x24ced8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24ced8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cedc:
    // 0x24cedc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24cedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cee0:
    // 0x24cee0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24cee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cee4:
    // 0x24cee4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cee4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24CEE4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cee8:
    // 0x24cee8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cee8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24CEE8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ceec:
    // 0x24ceec: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ceecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24CEEC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cef0:
    // 0x24cef0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24cef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cef4:
    // 0x24cef4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cef8:
    // 0x24cef8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cefc:
    // 0x24cefc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cefcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CEFC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cf00:
    // 0x24cf00: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cf00u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CF00 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cf04:
    // 0x24cf04: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cf04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24CF04 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cf08:
    // 0x24cf08: 0x42eba8f6  .word       0x42EBA8F6                   # INVALID     $s7, $t3, -0x570A # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cf08u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24CF08 raw=0x42EBA8F6"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cf0c:
    // 0x24cf0c: 0x1b0009  .word       0x001B0009                   # jalr        $zero, $zero # 001B0000 <InstrIdType: CPU_SPECIAL>
label_24cf10:
    if (ctx->pc == 0x24CF10u) {
        ctx->pc = 0x24CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF0Cu;
        // 0x24cf10: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF14u;
        goto label_24cf14;
    }
    ctx->pc = 0x24CF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF0Cu;
        // 0x24cf10: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CF0Cu, 0x24CF14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CF14u;
label_24cf14:
    // 0x24cf14: 0xae00ae  .word       0x00AE00AE                   # dsub        $zero, $a1, $t6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cf14u;
    { int64_t a = (int64_t)GPR_S64(ctx, 5); int64_t b = (int64_t)GPR_S64(ctx, 14); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24cf18:
    // 0x24cf18: 0x841005a  j           func_1040168
label_24cf1c:
    if (ctx->pc == 0x24CF1Cu) {
        ctx->pc = 0x24CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF18u;
        // 0x24cf1c: 0x86e0120  j           func_1B80480 (Delay Slot)
        // J 0x1B80480 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF20u;
        goto label_24cf20;
    }
    ctx->pc = 0x24CF18u;
    ctx->pc = 0x24CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF18u;
    // 0x24cf1c: 0x86e0120  j           func_1B80480 (Delay Slot)
    // J 0x1B80480 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040168u, 0x24CF18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24CF20u;
label_24cf20:
    // 0x24cf20: 0x2170216  .word       0x02170216                   # dsrlv       $zero, $s7, $s0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cf20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 23) >> (GPR_U32(ctx, 16) & 0x3F));
label_24cf24:
    // 0x24cf24: 0x1820159  .word       0x01820159                   # multu       $t4, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cf24u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 12) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24cf28:
    // 0x24cf28: 0x4100af  .word       0x004100AF                   # dsubu       $zero, $v0, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24cf28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) - GPR_U64(ctx, 1));
label_24cf2c:
    // 0x24cf2c: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x24cf2cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_24cf30:
    // 0x24cf30: 0x0  nop
    ctx->pc = 0x24cf30u;
    // NOP
label_24cf34:
    // 0x24cf34: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cf34u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24CF34 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cf38:
    // 0x24cf38: 0x0  nop
    ctx->pc = 0x24cf38u;
    // NOP
label_24cf3c:
    // 0x24cf3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cf3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cf40:
    // 0x24cf40: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cf40u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24CF40 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cf44:
    // 0x24cf44: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cf44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24CF44 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cf48:
    // 0x24cf48: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24cf48u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24cf4c:
    // 0x24cf4c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cf4cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24CF4C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cf50:
    // 0x24cf50: 0x0  nop
    ctx->pc = 0x24cf50u;
    // NOP
label_24cf54:
    // 0x24cf54: 0x0  nop
    ctx->pc = 0x24cf54u;
    // NOP
label_24cf58:
    // 0x24cf58: 0x0  nop
    ctx->pc = 0x24cf58u;
    // NOP
label_24cf5c:
    // 0x24cf5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24cf5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24cf60:
    // 0x24cf60: 0x0  nop
    ctx->pc = 0x24cf60u;
    // NOP
label_24cf64:
    // 0x24cf64: 0x0  nop
    ctx->pc = 0x24cf64u;
    // NOP
label_24cf68:
    // 0x24cf68: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24cf68u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24cf6c:
    // 0x24cf6c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cf6cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24CF6C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cf70:
    // 0x24cf70: 0x0  nop
    ctx->pc = 0x24cf70u;
    // NOP
label_24cf74:
    // 0x24cf74: 0x0  nop
    ctx->pc = 0x24cf74u;
    // NOP
label_24cf78:
    // 0x24cf78: 0x0  nop
    ctx->pc = 0x24cf78u;
    // NOP
label_24cf7c:
    // 0x24cf7c: 0x0  nop
    ctx->pc = 0x24cf7cu;
    // NOP
label_24cf80:
    // 0x24cf80: 0x0  nop
    ctx->pc = 0x24cf80u;
    // NOP
label_24cf84:
    // 0x24cf84: 0x0  nop
    ctx->pc = 0x24cf84u;
    // NOP
label_24cf88:
    // 0x24cf88: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cf88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cf8c:
    // 0x24cf8c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24cf8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cf90:
    // 0x24cf90: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cf90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cf94:
    // 0x24cf94: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cf94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CF94 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cf98:
    // 0x24cf98: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cf98u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CF98 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cf9c:
    // 0x24cf9c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cf9cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CF9C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cfa0:
    // 0x24cfa0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cfa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cfa4:
    // 0x24cfa4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24cfa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cfa8:
    // 0x24cfa8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24cfa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cfac:
    // 0x24cfac: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cfacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CFAC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cfb0:
    // 0x24cfb0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cfb0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CFB0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cfb4:
    // 0x24cfb4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cfb4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CFB4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cfb8:
    // 0x24cfb8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cfb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cfbc:
    // 0x24cfbc: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24cfbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cfc0:
    // 0x24cfc0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24cfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cfc4:
    // 0x24cfc4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cfc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CFC4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cfc8:
    // 0x24cfc8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24cfc8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24CFC8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cfcc:
    // 0x24cfcc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cfccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24CFCC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cfd0:
    // 0x24cfd0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24cfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cfd4:
    // 0x24cfd4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24cfd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cfd8:
    // 0x24cfd8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24cfd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cfdc:
    // 0x24cfdc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cfdcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24CFDC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cfe0:
    // 0x24cfe0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cfe0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24CFE0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cfe4:
    // 0x24cfe4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cfe4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24CFE4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cfe8:
    // 0x24cfe8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24cfe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cfec:
    // 0x24cfec: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24cfecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cff0:
    // 0x24cff0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24cff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24cff4:
    // 0x24cff4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cff4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24CFF4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cff8:
    // 0x24cff8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cff8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24CFF8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24cffc:
    // 0x24cffc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24cffcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24CFFC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d000:
    // 0x24d000: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d004:
    // 0x24d004: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d008:
    // 0x24d008: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d00c:
    // 0x24d00c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d00cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D00C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d010:
    // 0x24d010: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d010u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D010 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d014:
    // 0x24d014: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d014u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D014 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d018:
    // 0x24d018: 0x42ed2e14  .word       0x42ED2E14                   # INVALID     $s7, $t5, 0x2E14 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d018u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D018 raw=0x42ED2E14"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d01c:
    // 0x24d01c: 0x1c0009  .word       0x001C0009                   # jalr        $zero, $zero # 001C0000 <InstrIdType: CPU_SPECIAL>
label_24d020:
    if (ctx->pc == 0x24D020u) {
        ctx->pc = 0x24D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D01Cu;
        // 0x24d020: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D024u;
        goto label_24d024;
    }
    ctx->pc = 0x24D01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D01Cu;
        // 0x24d020: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D01Cu, 0x24D024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D024u;
label_24d024:
    // 0x24d024: 0xba00ba  .word       0x00BA00BA                   # dsrl        $zero, $k0, 2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d024u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 26) >> 2);
label_24d028:
    // 0x24d028: 0x842005b  j           func_108016C
label_24d02c:
    if (ctx->pc == 0x24D02Cu) {
        ctx->pc = 0x24D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D028u;
        // 0x24d02c: 0x86f0128  j           func_1BC04A0 (Delay Slot)
        // J 0x1BC04A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D030u;
        goto label_24d030;
    }
    ctx->pc = 0x24D028u;
    ctx->pc = 0x24D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D028u;
    // 0x24d02c: 0x86f0128  j           func_1BC04A0 (Delay Slot)
    // J 0x1BC04A0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x108016Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108016Cu, 0x24D028u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D030u;
label_24d030:
    // 0x24d030: 0x1dc01db  .word       0x01DC01DB                   # divu        $zero, $t6, $gp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d030u;
    { uint32_t divisor = GPR_U32(ctx, 28); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
label_24d034:
    // 0x24d034: 0x183015a  .word       0x0183015A                   # div         $zero, $t4, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d034u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24d038:
    // 0x24d038: 0x4200bb  .word       0x004200BB                   # dsra        $zero, $v0, 2 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d038u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> 2);
label_24d03c:
    // 0x24d03c: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x24d03cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24d040:
    // 0x24d040: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d040u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D040 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d044:
    // 0x24d044: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d044u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D044 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d048:
    // 0x24d048: 0x0  nop
    ctx->pc = 0x24d048u;
    // NOP
label_24d04c:
    // 0x24d04c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d04cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d050:
    // 0x24d050: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d050u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D050 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d054:
    // 0x24d054: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d054u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D054 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d058:
    // 0x24d058: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d058u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d05c:
    // 0x24d05c: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24d05cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24D05C raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d060:
    // 0x24d060: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d060u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D060 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d064:
    // 0x24d064: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d064u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D064 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d068:
    // 0x24d068: 0x0  nop
    ctx->pc = 0x24d068u;
    // NOP
label_24d06c:
    // 0x24d06c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d06cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d070:
    // 0x24d070: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d070u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D070 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d074:
    // 0x24d074: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d074u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D074 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d078:
    // 0x24d078: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d078u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d07c:
    // 0x24d07c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d07cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24D07C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d080:
    // 0x24d080: 0x0  nop
    ctx->pc = 0x24d080u;
    // NOP
label_24d084:
    // 0x24d084: 0x0  nop
    ctx->pc = 0x24d084u;
    // NOP
label_24d088:
    // 0x24d088: 0x0  nop
    ctx->pc = 0x24d088u;
    // NOP
label_24d08c:
    // 0x24d08c: 0x0  nop
    ctx->pc = 0x24d08cu;
    // NOP
label_24d090:
    // 0x24d090: 0x0  nop
    ctx->pc = 0x24d090u;
    // NOP
label_24d094:
    // 0x24d094: 0x0  nop
    ctx->pc = 0x24d094u;
    // NOP
label_24d098:
    // 0x24d098: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d09c:
    // 0x24d09c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0a0:
    // 0x24d0a0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0a4:
    // 0x24d0a4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d0a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D0A4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0a8:
    // 0x24d0a8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d0a8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D0A8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0ac:
    // 0x24d0ac: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d0acu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D0AC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0b0:
    // 0x24d0b0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0b4:
    // 0x24d0b4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0b8:
    // 0x24d0b8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0bc:
    // 0x24d0bc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d0bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D0BC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0c0:
    // 0x24d0c0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d0c0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D0C0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0c4:
    // 0x24d0c4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d0c4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D0C4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0c8:
    // 0x24d0c8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0cc:
    // 0x24d0cc: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0d0:
    // 0x24d0d0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0d4:
    // 0x24d0d4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d0d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D0D4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0d8:
    // 0x24d0d8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d0d8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D0D8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0dc:
    // 0x24d0dc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d0dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D0DC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0e0:
    // 0x24d0e0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0e4:
    // 0x24d0e4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0e8:
    // 0x24d0e8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0ec:
    // 0x24d0ec: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d0ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D0EC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0f0:
    // 0x24d0f0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d0f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D0F0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0f4:
    // 0x24d0f4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d0f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D0F4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d0f8:
    // 0x24d0f8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d0fc:
    // 0x24d0fc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d100:
    // 0x24d100: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d104:
    // 0x24d104: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d104u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D104 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d108:
    // 0x24d108: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d108u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D108 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d10c:
    // 0x24d10c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d10cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D10C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d110:
    // 0x24d110: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d114:
    // 0x24d114: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d118:
    // 0x24d118: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d11c:
    // 0x24d11c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d11cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D11C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d120:
    // 0x24d120: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d120u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D120 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d124:
    // 0x24d124: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d124u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D124 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d128:
    // 0x24d128: 0x42ed570a  .word       0x42ED570A                   # INVALID     $s7, $t5, 0x570A # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d128u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D128 raw=0x42ED570A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d12c:
    // 0x24d12c: 0x1d0009  .word       0x001D0009                   # jalr        $zero, $zero # 001D0000 <InstrIdType: CPU_SPECIAL>
label_24d130:
    if (ctx->pc == 0x24D130u) {
        ctx->pc = 0x24D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D12Cu;
        // 0x24d130: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D134u;
        goto label_24d134;
    }
    ctx->pc = 0x24D12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D12Cu;
        // 0x24d130: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D12Cu, 0x24D134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D134u;
label_24d134:
    // 0x24d134: 0xbe00be  .word       0x00BE00BE                   # dsrl32      $zero, $fp, 2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d134u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 2));
label_24d138:
    // 0x24d138: 0x843005c  j           func_10C0170
label_24d13c:
    if (ctx->pc == 0x24D13Cu) {
        ctx->pc = 0x24D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D138u;
        // 0x24d13c: 0x871012a  j           func_1C404A8 (Delay Slot)
        // J 0x1C404A8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D140u;
        goto label_24d140;
    }
    ctx->pc = 0x24D138u;
    ctx->pc = 0x24D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D138u;
    // 0x24d13c: 0x871012a  j           func_1C404A8 (Delay Slot)
    // J 0x1C404A8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C0170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C0170u, 0x24D138u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D140u;
label_24d140:
    // 0x24d140: 0x1df01de  .word       0x01DF01DE                   # ddiv        $zero, $t6, $ra # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24D140 raw=0x01DF01DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d144:
    // 0x24d144: 0x184015b  .word       0x0184015B                   # divu        $zero, $t4, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d144u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
label_24d148:
    // 0x24d148: 0x4300bf  .word       0x004300BF                   # dsra32      $zero, $v1, 2 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d148u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (32 + 2));
label_24d14c:
    // 0x24d14c: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x24d14cu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24d150:
    // 0x24d150: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d150u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D150 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d154:
    // 0x24d154: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d154u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D154 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d158:
    // 0x24d158: 0x0  nop
    ctx->pc = 0x24d158u;
    // NOP
label_24d15c:
    // 0x24d15c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d15cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d160:
    // 0x24d160: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d160u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D160 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d164:
    // 0x24d164: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d164u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D164 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d168:
    // 0x24d168: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d168u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d16c:
    // 0x24d16c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d16cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24D16C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d170:
    // 0x24d170: 0x0  nop
    ctx->pc = 0x24d170u;
    // NOP
label_24d174:
    // 0x24d174: 0x0  nop
    ctx->pc = 0x24d174u;
    // NOP
label_24d178:
    // 0x24d178: 0x0  nop
    ctx->pc = 0x24d178u;
    // NOP
label_24d17c:
    // 0x24d17c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d17cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d180:
    // 0x24d180: 0x0  nop
    ctx->pc = 0x24d180u;
    // NOP
label_24d184:
    // 0x24d184: 0x0  nop
    ctx->pc = 0x24d184u;
    // NOP
label_24d188:
    // 0x24d188: 0x0  nop
    ctx->pc = 0x24d188u;
    // NOP
label_24d18c:
    // 0x24d18c: 0x0  nop
    ctx->pc = 0x24d18cu;
    // NOP
label_24d190:
    // 0x24d190: 0x0  nop
    ctx->pc = 0x24d190u;
    // NOP
label_24d194:
    // 0x24d194: 0x0  nop
    ctx->pc = 0x24d194u;
    // NOP
label_24d198:
    // 0x24d198: 0x0  nop
    ctx->pc = 0x24d198u;
    // NOP
label_24d19c:
    // 0x24d19c: 0x0  nop
    ctx->pc = 0x24d19cu;
    // NOP
label_24d1a0:
    // 0x24d1a0: 0x0  nop
    ctx->pc = 0x24d1a0u;
    // NOP
label_24d1a4:
    // 0x24d1a4: 0x0  nop
    ctx->pc = 0x24d1a4u;
    // NOP
label_24d1a8:
    // 0x24d1a8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d1ac:
    // 0x24d1ac: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d1b0:
    // 0x24d1b0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d1b4:
    // 0x24d1b4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d1b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D1B4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d1b8:
    // 0x24d1b8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d1b8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D1B8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d1bc:
    // 0x24d1bc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d1bcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D1BC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d1c0:
    // 0x24d1c0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d1c4:
    // 0x24d1c4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d1c8:
    // 0x24d1c8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d1cc:
    // 0x24d1cc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d1ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D1CC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x24d1d0u;
    return;
}
