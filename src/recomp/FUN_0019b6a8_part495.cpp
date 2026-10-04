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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part495(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28ca08u: goto label_28ca08;
        case 0x28ca0cu: goto label_28ca0c;
        case 0x28ca10u: goto label_28ca10;
        case 0x28ca14u: goto label_28ca14;
        case 0x28ca18u: goto label_28ca18;
        case 0x28ca1cu: goto label_28ca1c;
        case 0x28ca20u: goto label_28ca20;
        case 0x28ca24u: goto label_28ca24;
        case 0x28ca28u: goto label_28ca28;
        case 0x28ca2cu: goto label_28ca2c;
        case 0x28ca30u: goto label_28ca30;
        case 0x28ca34u: goto label_28ca34;
        case 0x28ca38u: goto label_28ca38;
        case 0x28ca3cu: goto label_28ca3c;
        case 0x28ca40u: goto label_28ca40;
        case 0x28ca44u: goto label_28ca44;
        case 0x28ca48u: goto label_28ca48;
        case 0x28ca4cu: goto label_28ca4c;
        case 0x28ca50u: goto label_28ca50;
        case 0x28ca54u: goto label_28ca54;
        case 0x28ca58u: goto label_28ca58;
        case 0x28ca5cu: goto label_28ca5c;
        case 0x28ca60u: goto label_28ca60;
        case 0x28ca64u: goto label_28ca64;
        case 0x28ca68u: goto label_28ca68;
        case 0x28ca6cu: goto label_28ca6c;
        case 0x28ca70u: goto label_28ca70;
        case 0x28ca74u: goto label_28ca74;
        case 0x28ca78u: goto label_28ca78;
        case 0x28ca7cu: goto label_28ca7c;
        case 0x28ca80u: goto label_28ca80;
        case 0x28ca84u: goto label_28ca84;
        case 0x28ca88u: goto label_28ca88;
        case 0x28ca8cu: goto label_28ca8c;
        case 0x28ca90u: goto label_28ca90;
        case 0x28ca94u: goto label_28ca94;
        case 0x28ca98u: goto label_28ca98;
        case 0x28ca9cu: goto label_28ca9c;
        case 0x28caa0u: goto label_28caa0;
        case 0x28caa4u: goto label_28caa4;
        case 0x28caa8u: goto label_28caa8;
        case 0x28caacu: goto label_28caac;
        case 0x28cab0u: goto label_28cab0;
        case 0x28cab4u: goto label_28cab4;
        case 0x28cab8u: goto label_28cab8;
        case 0x28cabcu: goto label_28cabc;
        case 0x28cac0u: goto label_28cac0;
        case 0x28cac4u: goto label_28cac4;
        case 0x28cac8u: goto label_28cac8;
        case 0x28caccu: goto label_28cacc;
        case 0x28cad0u: goto label_28cad0;
        case 0x28cad4u: goto label_28cad4;
        case 0x28cad8u: goto label_28cad8;
        case 0x28cadcu: goto label_28cadc;
        case 0x28cae0u: goto label_28cae0;
        case 0x28cae4u: goto label_28cae4;
        case 0x28cae8u: goto label_28cae8;
        case 0x28caecu: goto label_28caec;
        case 0x28caf0u: goto label_28caf0;
        case 0x28caf4u: goto label_28caf4;
        case 0x28caf8u: goto label_28caf8;
        case 0x28cafcu: goto label_28cafc;
        case 0x28cb00u: goto label_28cb00;
        case 0x28cb04u: goto label_28cb04;
        case 0x28cb08u: goto label_28cb08;
        case 0x28cb0cu: goto label_28cb0c;
        case 0x28cb10u: goto label_28cb10;
        case 0x28cb14u: goto label_28cb14;
        case 0x28cb18u: goto label_28cb18;
        case 0x28cb1cu: goto label_28cb1c;
        case 0x28cb20u: goto label_28cb20;
        case 0x28cb24u: goto label_28cb24;
        case 0x28cb28u: goto label_28cb28;
        case 0x28cb2cu: goto label_28cb2c;
        case 0x28cb30u: goto label_28cb30;
        case 0x28cb34u: goto label_28cb34;
        case 0x28cb38u: goto label_28cb38;
        case 0x28cb3cu: goto label_28cb3c;
        case 0x28cb40u: goto label_28cb40;
        case 0x28cb44u: goto label_28cb44;
        case 0x28cb48u: goto label_28cb48;
        case 0x28cb4cu: goto label_28cb4c;
        case 0x28cb50u: goto label_28cb50;
        case 0x28cb54u: goto label_28cb54;
        case 0x28cb58u: goto label_28cb58;
        case 0x28cb5cu: goto label_28cb5c;
        case 0x28cb60u: goto label_28cb60;
        case 0x28cb64u: goto label_28cb64;
        case 0x28cb68u: goto label_28cb68;
        case 0x28cb6cu: goto label_28cb6c;
        case 0x28cb70u: goto label_28cb70;
        case 0x28cb74u: goto label_28cb74;
        case 0x28cb78u: goto label_28cb78;
        case 0x28cb7cu: goto label_28cb7c;
        case 0x28cb80u: goto label_28cb80;
        case 0x28cb84u: goto label_28cb84;
        case 0x28cb88u: goto label_28cb88;
        case 0x28cb8cu: goto label_28cb8c;
        case 0x28cb90u: goto label_28cb90;
        case 0x28cb94u: goto label_28cb94;
        case 0x28cb98u: goto label_28cb98;
        case 0x28cb9cu: goto label_28cb9c;
        case 0x28cba0u: goto label_28cba0;
        case 0x28cba4u: goto label_28cba4;
        case 0x28cba8u: goto label_28cba8;
        case 0x28cbacu: goto label_28cbac;
        case 0x28cbb0u: goto label_28cbb0;
        case 0x28cbb4u: goto label_28cbb4;
        case 0x28cbb8u: goto label_28cbb8;
        case 0x28cbbcu: goto label_28cbbc;
        case 0x28cbc0u: goto label_28cbc0;
        case 0x28cbc4u: goto label_28cbc4;
        case 0x28cbc8u: goto label_28cbc8;
        case 0x28cbccu: goto label_28cbcc;
        case 0x28cbd0u: goto label_28cbd0;
        case 0x28cbd4u: goto label_28cbd4;
        case 0x28cbd8u: goto label_28cbd8;
        case 0x28cbdcu: goto label_28cbdc;
        case 0x28cbe0u: goto label_28cbe0;
        case 0x28cbe4u: goto label_28cbe4;
        case 0x28cbe8u: goto label_28cbe8;
        case 0x28cbecu: goto label_28cbec;
        case 0x28cbf0u: goto label_28cbf0;
        case 0x28cbf4u: goto label_28cbf4;
        case 0x28cbf8u: goto label_28cbf8;
        case 0x28cbfcu: goto label_28cbfc;
        case 0x28cc00u: goto label_28cc00;
        case 0x28cc04u: goto label_28cc04;
        case 0x28cc08u: goto label_28cc08;
        case 0x28cc0cu: goto label_28cc0c;
        case 0x28cc10u: goto label_28cc10;
        case 0x28cc14u: goto label_28cc14;
        case 0x28cc18u: goto label_28cc18;
        case 0x28cc1cu: goto label_28cc1c;
        case 0x28cc20u: goto label_28cc20;
        case 0x28cc24u: goto label_28cc24;
        case 0x28cc28u: goto label_28cc28;
        case 0x28cc2cu: goto label_28cc2c;
        case 0x28cc30u: goto label_28cc30;
        case 0x28cc34u: goto label_28cc34;
        case 0x28cc38u: goto label_28cc38;
        case 0x28cc3cu: goto label_28cc3c;
        case 0x28cc40u: goto label_28cc40;
        case 0x28cc44u: goto label_28cc44;
        case 0x28cc48u: goto label_28cc48;
        case 0x28cc4cu: goto label_28cc4c;
        case 0x28cc50u: goto label_28cc50;
        case 0x28cc54u: goto label_28cc54;
        case 0x28cc58u: goto label_28cc58;
        case 0x28cc5cu: goto label_28cc5c;
        case 0x28cc60u: goto label_28cc60;
        case 0x28cc64u: goto label_28cc64;
        case 0x28cc68u: goto label_28cc68;
        case 0x28cc6cu: goto label_28cc6c;
        case 0x28cc70u: goto label_28cc70;
        case 0x28cc74u: goto label_28cc74;
        case 0x28cc78u: goto label_28cc78;
        case 0x28cc7cu: goto label_28cc7c;
        case 0x28cc80u: goto label_28cc80;
        case 0x28cc84u: goto label_28cc84;
        case 0x28cc88u: goto label_28cc88;
        case 0x28cc8cu: goto label_28cc8c;
        case 0x28cc90u: goto label_28cc90;
        case 0x28cc94u: goto label_28cc94;
        case 0x28cc98u: goto label_28cc98;
        case 0x28cc9cu: goto label_28cc9c;
        case 0x28cca0u: goto label_28cca0;
        case 0x28cca4u: goto label_28cca4;
        case 0x28cca8u: goto label_28cca8;
        case 0x28ccacu: goto label_28ccac;
        case 0x28ccb0u: goto label_28ccb0;
        case 0x28ccb4u: goto label_28ccb4;
        case 0x28ccb8u: goto label_28ccb8;
        case 0x28ccbcu: goto label_28ccbc;
        case 0x28ccc0u: goto label_28ccc0;
        case 0x28ccc4u: goto label_28ccc4;
        case 0x28ccc8u: goto label_28ccc8;
        case 0x28ccccu: goto label_28cccc;
        case 0x28ccd0u: goto label_28ccd0;
        case 0x28ccd4u: goto label_28ccd4;
        case 0x28ccd8u: goto label_28ccd8;
        case 0x28ccdcu: goto label_28ccdc;
        case 0x28cce0u: goto label_28cce0;
        case 0x28cce4u: goto label_28cce4;
        case 0x28cce8u: goto label_28cce8;
        case 0x28ccecu: goto label_28ccec;
        case 0x28ccf0u: goto label_28ccf0;
        case 0x28ccf4u: goto label_28ccf4;
        case 0x28ccf8u: goto label_28ccf8;
        case 0x28ccfcu: goto label_28ccfc;
        case 0x28cd00u: goto label_28cd00;
        case 0x28cd04u: goto label_28cd04;
        case 0x28cd08u: goto label_28cd08;
        case 0x28cd0cu: goto label_28cd0c;
        case 0x28cd10u: goto label_28cd10;
        case 0x28cd14u: goto label_28cd14;
        case 0x28cd18u: goto label_28cd18;
        case 0x28cd1cu: goto label_28cd1c;
        case 0x28cd20u: goto label_28cd20;
        case 0x28cd24u: goto label_28cd24;
        case 0x28cd28u: goto label_28cd28;
        case 0x28cd2cu: goto label_28cd2c;
        case 0x28cd30u: goto label_28cd30;
        case 0x28cd34u: goto label_28cd34;
        case 0x28cd38u: goto label_28cd38;
        case 0x28cd3cu: goto label_28cd3c;
        case 0x28cd40u: goto label_28cd40;
        case 0x28cd44u: goto label_28cd44;
        case 0x28cd48u: goto label_28cd48;
        case 0x28cd4cu: goto label_28cd4c;
        case 0x28cd50u: goto label_28cd50;
        case 0x28cd54u: goto label_28cd54;
        case 0x28cd58u: goto label_28cd58;
        case 0x28cd5cu: goto label_28cd5c;
        case 0x28cd60u: goto label_28cd60;
        case 0x28cd64u: goto label_28cd64;
        case 0x28cd68u: goto label_28cd68;
        case 0x28cd6cu: goto label_28cd6c;
        case 0x28cd70u: goto label_28cd70;
        case 0x28cd74u: goto label_28cd74;
        case 0x28cd78u: goto label_28cd78;
        case 0x28cd7cu: goto label_28cd7c;
        case 0x28cd80u: goto label_28cd80;
        case 0x28cd84u: goto label_28cd84;
        case 0x28cd88u: goto label_28cd88;
        case 0x28cd8cu: goto label_28cd8c;
        case 0x28cd90u: goto label_28cd90;
        case 0x28cd94u: goto label_28cd94;
        case 0x28cd98u: goto label_28cd98;
        case 0x28cd9cu: goto label_28cd9c;
        case 0x28cda0u: goto label_28cda0;
        case 0x28cda4u: goto label_28cda4;
        case 0x28cda8u: goto label_28cda8;
        case 0x28cdacu: goto label_28cdac;
        case 0x28cdb0u: goto label_28cdb0;
        case 0x28cdb4u: goto label_28cdb4;
        case 0x28cdb8u: goto label_28cdb8;
        case 0x28cdbcu: goto label_28cdbc;
        case 0x28cdc0u: goto label_28cdc0;
        case 0x28cdc4u: goto label_28cdc4;
        case 0x28cdc8u: goto label_28cdc8;
        case 0x28cdccu: goto label_28cdcc;
        case 0x28cdd0u: goto label_28cdd0;
        case 0x28cdd4u: goto label_28cdd4;
        case 0x28cdd8u: goto label_28cdd8;
        case 0x28cddcu: goto label_28cddc;
        case 0x28cde0u: goto label_28cde0;
        case 0x28cde4u: goto label_28cde4;
        case 0x28cde8u: goto label_28cde8;
        case 0x28cdecu: goto label_28cdec;
        case 0x28cdf0u: goto label_28cdf0;
        case 0x28cdf4u: goto label_28cdf4;
        case 0x28cdf8u: goto label_28cdf8;
        case 0x28cdfcu: goto label_28cdfc;
        case 0x28ce00u: goto label_28ce00;
        case 0x28ce04u: goto label_28ce04;
        case 0x28ce08u: goto label_28ce08;
        case 0x28ce0cu: goto label_28ce0c;
        case 0x28ce10u: goto label_28ce10;
        case 0x28ce14u: goto label_28ce14;
        case 0x28ce18u: goto label_28ce18;
        case 0x28ce1cu: goto label_28ce1c;
        case 0x28ce20u: goto label_28ce20;
        case 0x28ce24u: goto label_28ce24;
        case 0x28ce28u: goto label_28ce28;
        case 0x28ce2cu: goto label_28ce2c;
        case 0x28ce30u: goto label_28ce30;
        case 0x28ce34u: goto label_28ce34;
        case 0x28ce38u: goto label_28ce38;
        case 0x28ce3cu: goto label_28ce3c;
        case 0x28ce40u: goto label_28ce40;
        case 0x28ce44u: goto label_28ce44;
        case 0x28ce48u: goto label_28ce48;
        case 0x28ce4cu: goto label_28ce4c;
        case 0x28ce50u: goto label_28ce50;
        case 0x28ce54u: goto label_28ce54;
        case 0x28ce58u: goto label_28ce58;
        case 0x28ce5cu: goto label_28ce5c;
        case 0x28ce60u: goto label_28ce60;
        case 0x28ce64u: goto label_28ce64;
        case 0x28ce68u: goto label_28ce68;
        case 0x28ce6cu: goto label_28ce6c;
        case 0x28ce70u: goto label_28ce70;
        case 0x28ce74u: goto label_28ce74;
        case 0x28ce78u: goto label_28ce78;
        case 0x28ce7cu: goto label_28ce7c;
        case 0x28ce80u: goto label_28ce80;
        case 0x28ce84u: goto label_28ce84;
        case 0x28ce88u: goto label_28ce88;
        case 0x28ce8cu: goto label_28ce8c;
        case 0x28ce90u: goto label_28ce90;
        case 0x28ce94u: goto label_28ce94;
        case 0x28ce98u: goto label_28ce98;
        case 0x28ce9cu: goto label_28ce9c;
        case 0x28cea0u: goto label_28cea0;
        case 0x28cea4u: goto label_28cea4;
        case 0x28cea8u: goto label_28cea8;
        case 0x28ceacu: goto label_28ceac;
        case 0x28ceb0u: goto label_28ceb0;
        case 0x28ceb4u: goto label_28ceb4;
        case 0x28ceb8u: goto label_28ceb8;
        case 0x28cebcu: goto label_28cebc;
        case 0x28cec0u: goto label_28cec0;
        case 0x28cec4u: goto label_28cec4;
        case 0x28cec8u: goto label_28cec8;
        case 0x28ceccu: goto label_28cecc;
        case 0x28ced0u: goto label_28ced0;
        case 0x28ced4u: goto label_28ced4;
        case 0x28ced8u: goto label_28ced8;
        case 0x28cedcu: goto label_28cedc;
        case 0x28cee0u: goto label_28cee0;
        case 0x28cee4u: goto label_28cee4;
        case 0x28cee8u: goto label_28cee8;
        case 0x28ceecu: goto label_28ceec;
        case 0x28cef0u: goto label_28cef0;
        case 0x28cef4u: goto label_28cef4;
        case 0x28cef8u: goto label_28cef8;
        case 0x28cefcu: goto label_28cefc;
        case 0x28cf00u: goto label_28cf00;
        case 0x28cf04u: goto label_28cf04;
        case 0x28cf08u: goto label_28cf08;
        case 0x28cf0cu: goto label_28cf0c;
        case 0x28cf10u: goto label_28cf10;
        case 0x28cf14u: goto label_28cf14;
        case 0x28cf18u: goto label_28cf18;
        case 0x28cf1cu: goto label_28cf1c;
        case 0x28cf20u: goto label_28cf20;
        case 0x28cf24u: goto label_28cf24;
        case 0x28cf28u: goto label_28cf28;
        case 0x28cf2cu: goto label_28cf2c;
        case 0x28cf30u: goto label_28cf30;
        case 0x28cf34u: goto label_28cf34;
        case 0x28cf38u: goto label_28cf38;
        case 0x28cf3cu: goto label_28cf3c;
        case 0x28cf40u: goto label_28cf40;
        case 0x28cf44u: goto label_28cf44;
        case 0x28cf48u: goto label_28cf48;
        case 0x28cf4cu: goto label_28cf4c;
        case 0x28cf50u: goto label_28cf50;
        case 0x28cf54u: goto label_28cf54;
        case 0x28cf58u: goto label_28cf58;
        case 0x28cf5cu: goto label_28cf5c;
        case 0x28cf60u: goto label_28cf60;
        case 0x28cf64u: goto label_28cf64;
        case 0x28cf68u: goto label_28cf68;
        case 0x28cf6cu: goto label_28cf6c;
        case 0x28cf70u: goto label_28cf70;
        case 0x28cf74u: goto label_28cf74;
        case 0x28cf78u: goto label_28cf78;
        case 0x28cf7cu: goto label_28cf7c;
        case 0x28cf80u: goto label_28cf80;
        case 0x28cf84u: goto label_28cf84;
        case 0x28cf88u: goto label_28cf88;
        case 0x28cf8cu: goto label_28cf8c;
        case 0x28cf90u: goto label_28cf90;
        case 0x28cf94u: goto label_28cf94;
        case 0x28cf98u: goto label_28cf98;
        case 0x28cf9cu: goto label_28cf9c;
        case 0x28cfa0u: goto label_28cfa0;
        case 0x28cfa4u: goto label_28cfa4;
        case 0x28cfa8u: goto label_28cfa8;
        case 0x28cfacu: goto label_28cfac;
        case 0x28cfb0u: goto label_28cfb0;
        case 0x28cfb4u: goto label_28cfb4;
        case 0x28cfb8u: goto label_28cfb8;
        case 0x28cfbcu: goto label_28cfbc;
        case 0x28cfc0u: goto label_28cfc0;
        case 0x28cfc4u: goto label_28cfc4;
        case 0x28cfc8u: goto label_28cfc8;
        case 0x28cfccu: goto label_28cfcc;
        case 0x28cfd0u: goto label_28cfd0;
        case 0x28cfd4u: goto label_28cfd4;
        case 0x28cfd8u: goto label_28cfd8;
        case 0x28cfdcu: goto label_28cfdc;
        case 0x28cfe0u: goto label_28cfe0;
        case 0x28cfe4u: goto label_28cfe4;
        case 0x28cfe8u: goto label_28cfe8;
        case 0x28cfecu: goto label_28cfec;
        case 0x28cff0u: goto label_28cff0;
        case 0x28cff4u: goto label_28cff4;
        case 0x28cff8u: goto label_28cff8;
        case 0x28cffcu: goto label_28cffc;
        case 0x28d000u: goto label_28d000;
        case 0x28d004u: goto label_28d004;
        case 0x28d008u: goto label_28d008;
        case 0x28d00cu: goto label_28d00c;
        case 0x28d010u: goto label_28d010;
        case 0x28d014u: goto label_28d014;
        case 0x28d018u: goto label_28d018;
        case 0x28d01cu: goto label_28d01c;
        case 0x28d020u: goto label_28d020;
        case 0x28d024u: goto label_28d024;
        case 0x28d028u: goto label_28d028;
        case 0x28d02cu: goto label_28d02c;
        case 0x28d030u: goto label_28d030;
        case 0x28d034u: goto label_28d034;
        case 0x28d038u: goto label_28d038;
        case 0x28d03cu: goto label_28d03c;
        case 0x28d040u: goto label_28d040;
        case 0x28d044u: goto label_28d044;
        case 0x28d048u: goto label_28d048;
        case 0x28d04cu: goto label_28d04c;
        case 0x28d050u: goto label_28d050;
        case 0x28d054u: goto label_28d054;
        case 0x28d058u: goto label_28d058;
        case 0x28d05cu: goto label_28d05c;
        case 0x28d060u: goto label_28d060;
        case 0x28d064u: goto label_28d064;
        case 0x28d068u: goto label_28d068;
        case 0x28d06cu: goto label_28d06c;
        case 0x28d070u: goto label_28d070;
        case 0x28d074u: goto label_28d074;
        case 0x28d078u: goto label_28d078;
        case 0x28d07cu: goto label_28d07c;
        case 0x28d080u: goto label_28d080;
        case 0x28d084u: goto label_28d084;
        case 0x28d088u: goto label_28d088;
        case 0x28d08cu: goto label_28d08c;
        case 0x28d090u: goto label_28d090;
        case 0x28d094u: goto label_28d094;
        case 0x28d098u: goto label_28d098;
        case 0x28d09cu: goto label_28d09c;
        case 0x28d0a0u: goto label_28d0a0;
        case 0x28d0a4u: goto label_28d0a4;
        case 0x28d0a8u: goto label_28d0a8;
        case 0x28d0acu: goto label_28d0ac;
        case 0x28d0b0u: goto label_28d0b0;
        case 0x28d0b4u: goto label_28d0b4;
        case 0x28d0b8u: goto label_28d0b8;
        case 0x28d0bcu: goto label_28d0bc;
        case 0x28d0c0u: goto label_28d0c0;
        case 0x28d0c4u: goto label_28d0c4;
        case 0x28d0c8u: goto label_28d0c8;
        case 0x28d0ccu: goto label_28d0cc;
        case 0x28d0d0u: goto label_28d0d0;
        case 0x28d0d4u: goto label_28d0d4;
        case 0x28d0d8u: goto label_28d0d8;
        case 0x28d0dcu: goto label_28d0dc;
        case 0x28d0e0u: goto label_28d0e0;
        case 0x28d0e4u: goto label_28d0e4;
        case 0x28d0e8u: goto label_28d0e8;
        case 0x28d0ecu: goto label_28d0ec;
        case 0x28d0f0u: goto label_28d0f0;
        case 0x28d0f4u: goto label_28d0f4;
        case 0x28d0f8u: goto label_28d0f8;
        case 0x28d0fcu: goto label_28d0fc;
        case 0x28d100u: goto label_28d100;
        case 0x28d104u: goto label_28d104;
        case 0x28d108u: goto label_28d108;
        case 0x28d10cu: goto label_28d10c;
        case 0x28d110u: goto label_28d110;
        case 0x28d114u: goto label_28d114;
        case 0x28d118u: goto label_28d118;
        case 0x28d11cu: goto label_28d11c;
        case 0x28d120u: goto label_28d120;
        case 0x28d124u: goto label_28d124;
        case 0x28d128u: goto label_28d128;
        case 0x28d12cu: goto label_28d12c;
        case 0x28d130u: goto label_28d130;
        case 0x28d134u: goto label_28d134;
        case 0x28d138u: goto label_28d138;
        case 0x28d13cu: goto label_28d13c;
        case 0x28d140u: goto label_28d140;
        case 0x28d144u: goto label_28d144;
        case 0x28d148u: goto label_28d148;
        case 0x28d14cu: goto label_28d14c;
        case 0x28d150u: goto label_28d150;
        case 0x28d154u: goto label_28d154;
        case 0x28d158u: goto label_28d158;
        case 0x28d15cu: goto label_28d15c;
        case 0x28d160u: goto label_28d160;
        case 0x28d164u: goto label_28d164;
        case 0x28d168u: goto label_28d168;
        case 0x28d16cu: goto label_28d16c;
        case 0x28d170u: goto label_28d170;
        case 0x28d174u: goto label_28d174;
        case 0x28d178u: goto label_28d178;
        case 0x28d17cu: goto label_28d17c;
        case 0x28d180u: goto label_28d180;
        case 0x28d184u: goto label_28d184;
        case 0x28d188u: goto label_28d188;
        case 0x28d18cu: goto label_28d18c;
        case 0x28d190u: goto label_28d190;
        case 0x28d194u: goto label_28d194;
        case 0x28d198u: goto label_28d198;
        case 0x28d19cu: goto label_28d19c;
        case 0x28d1a0u: goto label_28d1a0;
        case 0x28d1a4u: goto label_28d1a4;
        case 0x28d1a8u: goto label_28d1a8;
        case 0x28d1acu: goto label_28d1ac;
        case 0x28d1b0u: goto label_28d1b0;
        case 0x28d1b4u: goto label_28d1b4;
        case 0x28d1b8u: goto label_28d1b8;
        case 0x28d1bcu: goto label_28d1bc;
        case 0x28d1c0u: goto label_28d1c0;
        case 0x28d1c4u: goto label_28d1c4;
        case 0x28d1c8u: goto label_28d1c8;
        case 0x28d1ccu: goto label_28d1cc;
        case 0x28d1d0u: goto label_28d1d0;
        case 0x28d1d4u: goto label_28d1d4;
        default: return;
    }

label_28ca08:
    // 0x28ca08: 0x3ea3d70a  .word       0x3EA3D70A                   # lui         $v1, 0xD70A # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28ca0c:
    // 0x28ca0c: 0x0  nop
    ctx->pc = 0x28ca0cu;
    // NOP
label_28ca10:
    // 0x28ca10: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28ca14:
    // 0x28ca14: 0x3f63d70a  .word       0x3F63D70A                   # lui         $v1, 0xD70A # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28ca18:
    // 0x28ca18: 0x3f547ae1  .word       0x3F547AE1                   # lui         $s4, 0x7AE1 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31457 << 16));
label_28ca1c:
    // 0x28ca1c: 0x0  nop
    ctx->pc = 0x28ca1cu;
    // NOP
label_28ca20:
    // 0x28ca20: 0x6e6ec8  .word       0x006E6EC8                   # jr          $v1 # 000E6EC0 <InstrIdType: CPU_SPECIAL>
label_28ca24:
    if (ctx->pc == 0x28CA24u) {
        ctx->pc = 0x28CA28u;
        goto label_28ca28;
    }
    ctx->pc = 0x28CA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CA20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28CA28u;
label_28ca28:
    // 0x28ca28: 0x85  .word       0x00000085                   # INVALID     $zero, $zero, 0x85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ca28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28CA28 raw=0x00000085"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ca2c:
    // 0x28ca2c: 0x0  nop
    ctx->pc = 0x28ca2cu;
    // NOP
label_28ca30:
    // 0x28ca30: 0x0  nop
    ctx->pc = 0x28ca30u;
    // NOP
label_28ca34:
    // 0x28ca34: 0x0  nop
    ctx->pc = 0x28ca34u;
    // NOP
label_28ca38:
    // 0x28ca38: 0x0  nop
    ctx->pc = 0x28ca38u;
    // NOP
label_28ca3c:
    // 0x28ca3c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ca3cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CA3C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ca40:
    // 0x28ca40: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ca40u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CA40 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ca44:
    // 0x28ca44: 0x0  nop
    ctx->pc = 0x28ca44u;
    // NOP
label_28ca48:
    // 0x28ca48: 0x0  nop
    ctx->pc = 0x28ca48u;
    // NOP
label_28ca4c:
    // 0x28ca4c: 0x0  nop
    ctx->pc = 0x28ca4cu;
    // NOP
label_28ca50:
    // 0x28ca50: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28ca54:
    // 0x28ca54: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca54u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28ca58:
    // 0x28ca58: 0x0  nop
    ctx->pc = 0x28ca58u;
    // NOP
label_28ca5c:
    // 0x28ca5c: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28ca60:
    // 0x28ca60: 0x3e8a3d71  .word       0x3E8A3D71                   # lui         $t2, 0x3D71 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28ca64:
    // 0x28ca64: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28ca68:
    // 0x28ca68: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca68u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28ca6c:
    // 0x28ca6c: 0x0  nop
    ctx->pc = 0x28ca6cu;
    // NOP
label_28ca70:
    // 0x28ca70: 0x3f0a3d71  .word       0x3F0A3D71                   # lui         $t2, 0x3D71 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28ca74:
    // 0x28ca74: 0x3e8f5c29  .word       0x3E8F5C29                   # lui         $t7, 0x5C29 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_28ca78:
    // 0x28ca78: 0x3e6147ae  .word       0x3E6147AE                   # lui         $at, 0x47AE # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ca78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18350 << 16));
label_28ca7c:
    // 0x28ca7c: 0x0  nop
    ctx->pc = 0x28ca7cu;
    // NOP
label_28ca80:
    // 0x28ca80: 0x191932  tlt         $zero, $t9, 100
    ctx->pc = 0x28ca80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_28ca84:
    // 0x28ca84: 0x0  nop
    ctx->pc = 0x28ca84u;
    // NOP
label_28ca88:
    // 0x28ca88: 0xb1  tgeu        $zero, $zero, 2
    ctx->pc = 0x28ca88u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ca8c:
    // 0x28ca8c: 0x0  nop
    ctx->pc = 0x28ca8cu;
    // NOP
label_28ca90:
    // 0x28ca90: 0x0  nop
    ctx->pc = 0x28ca90u;
    // NOP
label_28ca94:
    // 0x28ca94: 0x0  nop
    ctx->pc = 0x28ca94u;
    // NOP
label_28ca98:
    // 0x28ca98: 0x0  nop
    ctx->pc = 0x28ca98u;
    // NOP
label_28ca9c:
    // 0x28ca9c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ca9cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CA9C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28caa0:
    // 0x28caa0: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28caa0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CAA0 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28caa4:
    // 0x28caa4: 0x0  nop
    ctx->pc = 0x28caa4u;
    // NOP
label_28caa8:
    // 0x28caa8: 0x0  nop
    ctx->pc = 0x28caa8u;
    // NOP
label_28caac:
    // 0x28caac: 0x0  nop
    ctx->pc = 0x28caacu;
    // NOP
label_28cab0:
    // 0x28cab0: 0x3e0f5c29  .word       0x3E0F5C29                   # lui         $t7, 0x5C29 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cab0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_28cab4:
    // 0x28cab4: 0x3e2e147b  .word       0x3E2E147B                   # lui         $t6, 0x147B # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cab4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28cab8:
    // 0x28cab8: 0x3e2e147b  .word       0x3E2E147B                   # lui         $t6, 0x147B # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cab8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28cabc:
    // 0x28cabc: 0x0  nop
    ctx->pc = 0x28cabcu;
    // NOP
label_28cac0:
    // 0x28cac0: 0x3f0f5c29  .word       0x3F0F5C29                   # lui         $t7, 0x5C29 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cac0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_28cac4:
    // 0x28cac4: 0x3f0f5c29  .word       0x3F0F5C29                   # lui         $t7, 0x5C29 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cac4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_28cac8:
    // 0x28cac8: 0x3f028f5c  .word       0x3F028F5C                   # lui         $v0, 0x8F5C # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36700 << 16));
label_28cacc:
    // 0x28cacc: 0x0  nop
    ctx->pc = 0x28caccu;
    // NOP
label_28cad0:
    // 0x28cad0: 0x3f6b851f  .word       0x3F6B851F                   # lui         $t3, 0x851F # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cad0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)34079 << 16));
label_28cad4:
    // 0x28cad4: 0x3f68f5c3  .word       0x3F68F5C3                   # lui         $t0, 0xF5C3 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cad4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62915 << 16));
label_28cad8:
    // 0x28cad8: 0x3f666666  .word       0x3F666666                   # lui         $a2, 0x6666 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_28cadc:
    // 0x28cadc: 0x0  nop
    ctx->pc = 0x28cadcu;
    // NOP
label_28cae0:
    // 0x28cae0: 0xd4d4d4  .word       0x00D4D4D4                   # dsllv       $k0, $s4, $a2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cae0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 20) << (GPR_U32(ctx, 6) & 0x3F));
label_28cae4:
    // 0x28cae4: 0x0  nop
    ctx->pc = 0x28cae4u;
    // NOP
label_28cae8:
    // 0x28cae8: 0x85  .word       0x00000085                   # INVALID     $zero, $zero, 0x85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cae8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28CAE8 raw=0x00000085"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28caec:
    // 0x28caec: 0x0  nop
    ctx->pc = 0x28caecu;
    // NOP
label_28caf0:
    // 0x28caf0: 0x0  nop
    ctx->pc = 0x28caf0u;
    // NOP
label_28caf4:
    // 0x28caf4: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28caf4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28caf8:
    // 0x28caf8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28caf8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28CAF8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cafc:
    // 0x28cafc: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cafcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x28CAFC raw=0x447A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cb00:
    // 0x28cb00: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cb00u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CB00 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cb04:
    // 0x28cb04: 0x0  nop
    ctx->pc = 0x28cb04u;
    // NOP
label_28cb08:
    // 0x28cb08: 0x0  nop
    ctx->pc = 0x28cb08u;
    // NOP
label_28cb0c:
    // 0x28cb0c: 0x0  nop
    ctx->pc = 0x28cb0cu;
    // NOP
label_28cb10:
    // 0x28cb10: 0x3e0f5c29  .word       0x3E0F5C29                   # lui         $t7, 0x5C29 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_28cb14:
    // 0x28cb14: 0x3e2e147b  .word       0x3E2E147B                   # lui         $t6, 0x147B # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb14u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28cb18:
    // 0x28cb18: 0x3e2e147b  .word       0x3E2E147B                   # lui         $t6, 0x147B # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb18u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28cb1c:
    // 0x28cb1c: 0x0  nop
    ctx->pc = 0x28cb1cu;
    // NOP
label_28cb20:
    // 0x28cb20: 0x3f0f5c29  .word       0x3F0F5C29                   # lui         $t7, 0x5C29 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_28cb24:
    // 0x28cb24: 0x3f0f5c29  .word       0x3F0F5C29                   # lui         $t7, 0x5C29 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_28cb28:
    // 0x28cb28: 0x3f028f5c  .word       0x3F028F5C                   # lui         $v0, 0x8F5C # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36700 << 16));
label_28cb2c:
    // 0x28cb2c: 0x0  nop
    ctx->pc = 0x28cb2cu;
    // NOP
label_28cb30:
    // 0x28cb30: 0x3f6b851f  .word       0x3F6B851F                   # lui         $t3, 0x851F # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb30u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)34079 << 16));
label_28cb34:
    // 0x28cb34: 0x3f68f5c3  .word       0x3F68F5C3                   # lui         $t0, 0xF5C3 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62915 << 16));
label_28cb38:
    // 0x28cb38: 0x3f666666  .word       0x3F666666                   # lui         $a2, 0x6666 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_28cb3c:
    // 0x28cb3c: 0x0  nop
    ctx->pc = 0x28cb3cu;
    // NOP
label_28cb40:
    // 0x28cb40: 0xd4d4d4  .word       0x00D4D4D4                   # dsllv       $k0, $s4, $a2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cb40u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 20) << (GPR_U32(ctx, 6) & 0x3F));
label_28cb44:
    // 0x28cb44: 0x0  nop
    ctx->pc = 0x28cb44u;
    // NOP
label_28cb48:
    // 0x28cb48: 0x81  .word       0x00000081                   # INVALID     $zero, $zero, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cb48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28CB48 raw=0x00000081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cb4c:
    // 0x28cb4c: 0x0  nop
    ctx->pc = 0x28cb4cu;
    // NOP
label_28cb50:
    // 0x28cb50: 0x0  nop
    ctx->pc = 0x28cb50u;
    // NOP
label_28cb54:
    // 0x28cb54: 0x0  nop
    ctx->pc = 0x28cb54u;
    // NOP
label_28cb58:
    // 0x28cb58: 0x0  nop
    ctx->pc = 0x28cb58u;
    // NOP
label_28cb5c:
    // 0x28cb5c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cb5cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CB5C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cb60:
    // 0x28cb60: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cb60u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CB60 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cb64:
    // 0x28cb64: 0x0  nop
    ctx->pc = 0x28cb64u;
    // NOP
label_28cb68:
    // 0x28cb68: 0x0  nop
    ctx->pc = 0x28cb68u;
    // NOP
label_28cb6c:
    // 0x28cb6c: 0x0  nop
    ctx->pc = 0x28cb6cu;
    // NOP
label_28cb70:
    // 0x28cb70: 0x3f59999a  .word       0x3F59999A                   # lui         $t9, 0x999A # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb70u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cb74:
    // 0x28cb74: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb74u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_28cb78:
    // 0x28cb78: 0x3f23d70a  .word       0x3F23D70A                   # lui         $v1, 0xD70A # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cb7c:
    // 0x28cb7c: 0x0  nop
    ctx->pc = 0x28cb7cu;
    // NOP
label_28cb80:
    // 0x28cb80: 0x3e9eb852  .word       0x3E9EB852                   # lui         $fp, 0xB852 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb80u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47186 << 16));
label_28cb84:
    // 0x28cb84: 0x3e8f5c29  .word       0x3E8F5C29                   # lui         $t7, 0x5C29 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_28cb88:
    // 0x28cb88: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb88u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cb8c:
    // 0x28cb8c: 0x0  nop
    ctx->pc = 0x28cb8cu;
    // NOP
label_28cb90:
    // 0x28cb90: 0x3f666666  .word       0x3F666666                   # lui         $a2, 0x6666 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_28cb94:
    // 0x28cb94: 0x3f666666  .word       0x3F666666                   # lui         $a2, 0x6666 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_28cb98:
    // 0x28cb98: 0x3f59999a  .word       0x3F59999A                   # lui         $t9, 0x999A # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cb98u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cb9c:
    // 0x28cb9c: 0x0  nop
    ctx->pc = 0x28cb9cu;
    // NOP
label_28cba0:
    // 0x28cba0: 0xb0a0e  .word       0x000B0A0E                   # INVALID     $zero, $t3, 0xA0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28CBA0 raw=0x000B0A0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cba4:
    // 0x28cba4: 0x0  nop
    ctx->pc = 0x28cba4u;
    // NOP
label_28cba8:
    // 0x28cba8: 0xc1  .word       0x000000C1                   # INVALID     $zero, $zero, 0xC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cba8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28CBA8 raw=0x000000C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cbac:
    // 0x28cbac: 0x0  nop
    ctx->pc = 0x28cbacu;
    // NOP
label_28cbb0:
    // 0x28cbb0: 0x0  nop
    ctx->pc = 0x28cbb0u;
    // NOP
label_28cbb4:
    // 0x28cbb4: 0x0  nop
    ctx->pc = 0x28cbb4u;
    // NOP
label_28cbb8:
    // 0x28cbb8: 0x0  nop
    ctx->pc = 0x28cbb8u;
    // NOP
label_28cbbc:
    // 0x28cbbc: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cbbcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CBBC raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cbc0:
    // 0x28cbc0: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cbc0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CBC0 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cbc4:
    // 0x28cbc4: 0x0  nop
    ctx->pc = 0x28cbc4u;
    // NOP
label_28cbc8:
    // 0x28cbc8: 0x0  nop
    ctx->pc = 0x28cbc8u;
    // NOP
label_28cbcc:
    // 0x28cbcc: 0x0  nop
    ctx->pc = 0x28cbccu;
    // NOP
label_28cbd0:
    // 0x28cbd0: 0x0  nop
    ctx->pc = 0x28cbd0u;
    // NOP
label_28cbd4:
    // 0x28cbd4: 0x0  nop
    ctx->pc = 0x28cbd4u;
    // NOP
label_28cbd8:
    // 0x28cbd8: 0x0  nop
    ctx->pc = 0x28cbd8u;
    // NOP
label_28cbdc:
    // 0x28cbdc: 0x0  nop
    ctx->pc = 0x28cbdcu;
    // NOP
label_28cbe0:
    // 0x28cbe0: 0x0  nop
    ctx->pc = 0x28cbe0u;
    // NOP
label_28cbe4:
    // 0x28cbe4: 0x0  nop
    ctx->pc = 0x28cbe4u;
    // NOP
label_28cbe8:
    // 0x28cbe8: 0x0  nop
    ctx->pc = 0x28cbe8u;
    // NOP
label_28cbec:
    // 0x28cbec: 0x0  nop
    ctx->pc = 0x28cbecu;
    // NOP
label_28cbf0:
    // 0x28cbf0: 0x0  nop
    ctx->pc = 0x28cbf0u;
    // NOP
label_28cbf4:
    // 0x28cbf4: 0x0  nop
    ctx->pc = 0x28cbf4u;
    // NOP
label_28cbf8:
    // 0x28cbf8: 0x0  nop
    ctx->pc = 0x28cbf8u;
    // NOP
label_28cbfc:
    // 0x28cbfc: 0x0  nop
    ctx->pc = 0x28cbfcu;
    // NOP
label_28cc00:
    // 0x28cc00: 0x283647  .word       0x00283647                   # srav        $a2, $t0, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cc00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 1) & 0x1F));
label_28cc04:
    // 0x28cc04: 0x0  nop
    ctx->pc = 0x28cc04u;
    // NOP
label_28cc08:
    // 0x28cc08: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cc08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28CC08 raw=0x00000041"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cc0c:
    // 0x28cc0c: 0x0  nop
    ctx->pc = 0x28cc0cu;
    // NOP
label_28cc10:
    // 0x28cc10: 0x0  nop
    ctx->pc = 0x28cc10u;
    // NOP
label_28cc14:
    // 0x28cc14: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cc14u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28cc18:
    // 0x28cc18: 0x0  nop
    ctx->pc = 0x28cc18u;
    // NOP
label_28cc1c:
    // 0x28cc1c: 0x45dac000  .word       0x45DAC000                   # INVALID     $t6, $k0, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cc1cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xE, function 0x0 at 0x28CC1C raw=0x45DAC000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cc20:
    // 0x28cc20: 0x45fa0000  .word       0x45FA0000                   # INVALID     $t7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cc20u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xF, function 0x0 at 0x28CC20 raw=0x45FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cc24:
    // 0x28cc24: 0x0  nop
    ctx->pc = 0x28cc24u;
    // NOP
label_28cc28:
    // 0x28cc28: 0x0  nop
    ctx->pc = 0x28cc28u;
    // NOP
label_28cc2c:
    // 0x28cc2c: 0x0  nop
    ctx->pc = 0x28cc2cu;
    // NOP
label_28cc30:
    // 0x28cc30: 0x0  nop
    ctx->pc = 0x28cc30u;
    // NOP
label_28cc34:
    // 0x28cc34: 0x0  nop
    ctx->pc = 0x28cc34u;
    // NOP
label_28cc38:
    // 0x28cc38: 0x0  nop
    ctx->pc = 0x28cc38u;
    // NOP
label_28cc3c:
    // 0x28cc3c: 0x0  nop
    ctx->pc = 0x28cc3cu;
    // NOP
label_28cc40:
    // 0x28cc40: 0x0  nop
    ctx->pc = 0x28cc40u;
    // NOP
label_28cc44:
    // 0x28cc44: 0x0  nop
    ctx->pc = 0x28cc44u;
    // NOP
label_28cc48:
    // 0x28cc48: 0x0  nop
    ctx->pc = 0x28cc48u;
    // NOP
label_28cc4c:
    // 0x28cc4c: 0x0  nop
    ctx->pc = 0x28cc4cu;
    // NOP
label_28cc50:
    // 0x28cc50: 0x0  nop
    ctx->pc = 0x28cc50u;
    // NOP
label_28cc54:
    // 0x28cc54: 0x0  nop
    ctx->pc = 0x28cc54u;
    // NOP
label_28cc58:
    // 0x28cc58: 0x0  nop
    ctx->pc = 0x28cc58u;
    // NOP
label_28cc5c:
    // 0x28cc5c: 0x0  nop
    ctx->pc = 0x28cc5cu;
    // NOP
label_28cc60:
    // 0x28cc60: 0x0  nop
    ctx->pc = 0x28cc60u;
    // NOP
label_28cc64:
    // 0x28cc64: 0x0  nop
    ctx->pc = 0x28cc64u;
    // NOP
label_28cc68:
    // 0x28cc68: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28cc68u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28cc6c:
    // 0x28cc6c: 0x0  nop
    ctx->pc = 0x28cc6cu;
    // NOP
label_28cc70:
    // 0x28cc70: 0x0  nop
    ctx->pc = 0x28cc70u;
    // NOP
label_28cc74:
    // 0x28cc74: 0x0  nop
    ctx->pc = 0x28cc74u;
    // NOP
label_28cc78:
    // 0x28cc78: 0x0  nop
    ctx->pc = 0x28cc78u;
    // NOP
label_28cc7c:
    // 0x28cc7c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cc7cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CC7C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cc80:
    // 0x28cc80: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cc80u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CC80 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cc84:
    // 0x28cc84: 0x0  nop
    ctx->pc = 0x28cc84u;
    // NOP
label_28cc88:
    // 0x28cc88: 0x0  nop
    ctx->pc = 0x28cc88u;
    // NOP
label_28cc8c:
    // 0x28cc8c: 0x0  nop
    ctx->pc = 0x28cc8cu;
    // NOP
label_28cc90:
    // 0x28cc90: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cc94:
    // 0x28cc94: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cc94u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28cc98:
    // 0x28cc98: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cc98u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28cc9c:
    // 0x28cc9c: 0x0  nop
    ctx->pc = 0x28cc9cu;
    // NOP
label_28cca0:
    // 0x28cca0: 0x3e8a3d71  .word       0x3E8A3D71                   # lui         $t2, 0x3D71 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cca0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cca4:
    // 0x28cca4: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cca8:
    // 0x28cca8: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cca8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28ccac:
    // 0x28ccac: 0x0  nop
    ctx->pc = 0x28ccacu;
    // NOP
label_28ccb0:
    // 0x28ccb0: 0x3f570a3d  .word       0x3F570A3D                   # lui         $s7, 0xA3D # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccb0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)2621 << 16));
label_28ccb4:
    // 0x28ccb4: 0x3f147ae1  .word       0x3F147AE1                   # lui         $s4, 0x7AE1 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccb4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31457 << 16));
label_28ccb8:
    // 0x28ccb8: 0x3f051eb8  .word       0x3F051EB8                   # lui         $a1, 0x1EB8 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7864 << 16));
label_28ccbc:
    // 0x28ccbc: 0x0  nop
    ctx->pc = 0x28ccbcu;
    // NOP
label_28ccc0:
    // 0x28ccc0: 0x191932  tlt         $zero, $t9, 100
    ctx->pc = 0x28ccc0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_28ccc4:
    // 0x28ccc4: 0x0  nop
    ctx->pc = 0x28ccc4u;
    // NOP
label_28ccc8:
    // 0x28ccc8: 0x6b1  tgeu        $zero, $zero, 26
    ctx->pc = 0x28ccc8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cccc:
    // 0x28cccc: 0x0  nop
    ctx->pc = 0x28ccccu;
    // NOP
label_28ccd0:
    // 0x28ccd0: 0x0  nop
    ctx->pc = 0x28ccd0u;
    // NOP
label_28ccd4:
    // 0x28ccd4: 0x0  nop
    ctx->pc = 0x28ccd4u;
    // NOP
label_28ccd8:
    // 0x28ccd8: 0x0  nop
    ctx->pc = 0x28ccd8u;
    // NOP
label_28ccdc:
    // 0x28ccdc: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ccdcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CCDC raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cce0:
    // 0x28cce0: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cce0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CCE0 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cce4:
    // 0x28cce4: 0x0  nop
    ctx->pc = 0x28cce4u;
    // NOP
label_28cce8:
    // 0x28cce8: 0x0  nop
    ctx->pc = 0x28cce8u;
    // NOP
label_28ccec:
    // 0x28ccec: 0x0  nop
    ctx->pc = 0x28ccecu;
    // NOP
label_28ccf0:
    // 0x28ccf0: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28ccf4:
    // 0x28ccf4: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccf4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28ccf8:
    // 0x28ccf8: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccf8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28ccfc:
    // 0x28ccfc: 0x0  nop
    ctx->pc = 0x28ccfcu;
    // NOP
label_28cd00:
    // 0x28cd00: 0x3e8a3d71  .word       0x3E8A3D71                   # lui         $t2, 0x3D71 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cd04:
    // 0x28cd04: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cd08:
    // 0x28cd08: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd08u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cd0c:
    // 0x28cd0c: 0x0  nop
    ctx->pc = 0x28cd0cu;
    // NOP
label_28cd10:
    // 0x28cd10: 0x3f28f5c3  .word       0x3F28F5C3                   # lui         $t0, 0xF5C3 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62915 << 16));
label_28cd14:
    // 0x28cd14: 0x3ef5c28f  .word       0x3EF5C28F                   # lui         $s5, 0xC28F # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd14u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_28cd18:
    // 0x28cd18: 0x3ed1eb85  .word       0x3ED1EB85                   # lui         $s1, 0xEB85 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60293 << 16));
label_28cd1c:
    // 0x28cd1c: 0x0  nop
    ctx->pc = 0x28cd1cu;
    // NOP
label_28cd20:
    // 0x28cd20: 0x191932  tlt         $zero, $t9, 100
    ctx->pc = 0x28cd20u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_28cd24:
    // 0x28cd24: 0x0  nop
    ctx->pc = 0x28cd24u;
    // NOP
label_28cd28:
    // 0x28cd28: 0x6b1  tgeu        $zero, $zero, 26
    ctx->pc = 0x28cd28u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cd2c:
    // 0x28cd2c: 0x0  nop
    ctx->pc = 0x28cd2cu;
    // NOP
label_28cd30:
    // 0x28cd30: 0x0  nop
    ctx->pc = 0x28cd30u;
    // NOP
label_28cd34:
    // 0x28cd34: 0x0  nop
    ctx->pc = 0x28cd34u;
    // NOP
label_28cd38:
    // 0x28cd38: 0x0  nop
    ctx->pc = 0x28cd38u;
    // NOP
label_28cd3c:
    // 0x28cd3c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cd3cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CD3C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cd40:
    // 0x28cd40: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cd40u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CD40 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cd44:
    // 0x28cd44: 0x0  nop
    ctx->pc = 0x28cd44u;
    // NOP
label_28cd48:
    // 0x28cd48: 0x0  nop
    ctx->pc = 0x28cd48u;
    // NOP
label_28cd4c:
    // 0x28cd4c: 0x0  nop
    ctx->pc = 0x28cd4cu;
    // NOP
label_28cd50:
    // 0x28cd50: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cd54:
    // 0x28cd54: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd54u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28cd58:
    // 0x28cd58: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd58u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28cd5c:
    // 0x28cd5c: 0x0  nop
    ctx->pc = 0x28cd5cu;
    // NOP
label_28cd60:
    // 0x28cd60: 0x3e8a3d71  .word       0x3E8A3D71                   # lui         $t2, 0x3D71 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cd64:
    // 0x28cd64: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cd68:
    // 0x28cd68: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd68u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cd6c:
    // 0x28cd6c: 0x0  nop
    ctx->pc = 0x28cd6cu;
    // NOP
label_28cd70:
    // 0x28cd70: 0x3f0a3d71  .word       0x3F0A3D71                   # lui         $t2, 0x3D71 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cd74:
    // 0x28cd74: 0x3e8f5c29  .word       0x3E8F5C29                   # lui         $t7, 0x5C29 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_28cd78:
    // 0x28cd78: 0x3e6147ae  .word       0x3E6147AE                   # lui         $at, 0x47AE # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18350 << 16));
label_28cd7c:
    // 0x28cd7c: 0x0  nop
    ctx->pc = 0x28cd7cu;
    // NOP
label_28cd80:
    // 0x28cd80: 0x191932  tlt         $zero, $t9, 100
    ctx->pc = 0x28cd80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_28cd84:
    // 0x28cd84: 0x0  nop
    ctx->pc = 0x28cd84u;
    // NOP
label_28cd88:
    // 0x28cd88: 0x6b1  tgeu        $zero, $zero, 26
    ctx->pc = 0x28cd88u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cd8c:
    // 0x28cd8c: 0x0  nop
    ctx->pc = 0x28cd8cu;
    // NOP
label_28cd90:
    // 0x28cd90: 0x0  nop
    ctx->pc = 0x28cd90u;
    // NOP
label_28cd94:
    // 0x28cd94: 0x0  nop
    ctx->pc = 0x28cd94u;
    // NOP
label_28cd98:
    // 0x28cd98: 0x0  nop
    ctx->pc = 0x28cd98u;
    // NOP
label_28cd9c:
    // 0x28cd9c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cd9cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CD9C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cda0:
    // 0x28cda0: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cda0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CDA0 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cda4:
    // 0x28cda4: 0x0  nop
    ctx->pc = 0x28cda4u;
    // NOP
label_28cda8:
    // 0x28cda8: 0x0  nop
    ctx->pc = 0x28cda8u;
    // NOP
label_28cdac:
    // 0x28cdac: 0x0  nop
    ctx->pc = 0x28cdacu;
    // NOP
label_28cdb0:
    // 0x28cdb0: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cdb4:
    // 0x28cdb4: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdb4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28cdb8:
    // 0x28cdb8: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdb8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28cdbc:
    // 0x28cdbc: 0x0  nop
    ctx->pc = 0x28cdbcu;
    // NOP
label_28cdc0:
    // 0x28cdc0: 0x3e8a3d71  .word       0x3E8A3D71                   # lui         $t2, 0x3D71 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdc0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cdc4:
    // 0x28cdc4: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cdc8:
    // 0x28cdc8: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdc8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cdcc:
    // 0x28cdcc: 0x0  nop
    ctx->pc = 0x28cdccu;
    // NOP
label_28cdd0:
    // 0x28cdd0: 0x3f5eb852  .word       0x3F5EB852                   # lui         $fp, 0xB852 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdd0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47186 << 16));
label_28cdd4:
    // 0x28cdd4: 0x3f0a3d71  .word       0x3F0A3D71                   # lui         $t2, 0x3D71 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdd4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cdd8:
    // 0x28cdd8: 0x3ef5c28f  .word       0x3EF5C28F                   # lui         $s5, 0xC28F # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdd8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_28cddc:
    // 0x28cddc: 0x0  nop
    ctx->pc = 0x28cddcu;
    // NOP
label_28cde0:
    // 0x28cde0: 0x191932  tlt         $zero, $t9, 100
    ctx->pc = 0x28cde0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_28cde4:
    // 0x28cde4: 0x0  nop
    ctx->pc = 0x28cde4u;
    // NOP
label_28cde8:
    // 0x28cde8: 0x681  .word       0x00000681                   # INVALID     $zero, $zero, 0x681 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cde8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28CDE8 raw=0x00000681"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cdec:
    // 0x28cdec: 0x0  nop
    ctx->pc = 0x28cdecu;
    // NOP
label_28cdf0:
    // 0x28cdf0: 0x0  nop
    ctx->pc = 0x28cdf0u;
    // NOP
label_28cdf4:
    // 0x28cdf4: 0x0  nop
    ctx->pc = 0x28cdf4u;
    // NOP
label_28cdf8:
    // 0x28cdf8: 0x0  nop
    ctx->pc = 0x28cdf8u;
    // NOP
label_28cdfc:
    // 0x28cdfc: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cdfcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CDFC raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ce00:
    // 0x28ce00: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ce00u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CE00 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ce04:
    // 0x28ce04: 0x0  nop
    ctx->pc = 0x28ce04u;
    // NOP
label_28ce08:
    // 0x28ce08: 0x0  nop
    ctx->pc = 0x28ce08u;
    // NOP
label_28ce0c:
    // 0x28ce0c: 0x0  nop
    ctx->pc = 0x28ce0cu;
    // NOP
label_28ce10:
    // 0x28ce10: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28ce14:
    // 0x28ce14: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce14u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28ce18:
    // 0x28ce18: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce18u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28ce1c:
    // 0x28ce1c: 0x0  nop
    ctx->pc = 0x28ce1cu;
    // NOP
label_28ce20:
    // 0x28ce20: 0x3ee66666  .word       0x3EE66666                   # lui         $a2, 0x6666 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_28ce24:
    // 0x28ce24: 0x3e851eb8  .word       0x3E851EB8                   # lui         $a1, 0x1EB8 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7864 << 16));
label_28ce28:
    // 0x28ce28: 0x3e6b851f  .word       0x3E6B851F                   # lui         $t3, 0x851F # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce28u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)34079 << 16));
label_28ce2c:
    // 0x28ce2c: 0x0  nop
    ctx->pc = 0x28ce2cu;
    // NOP
label_28ce30:
    // 0x28ce30: 0x3f5eb852  .word       0x3F5EB852                   # lui         $fp, 0xB852 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce30u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47186 << 16));
label_28ce34:
    // 0x28ce34: 0x3f0a3d71  .word       0x3F0A3D71                   # lui         $t2, 0x3D71 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28ce38:
    // 0x28ce38: 0x3ef5c28f  .word       0x3EF5C28F                   # lui         $s5, 0xC28F # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce38u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_28ce3c:
    // 0x28ce3c: 0x0  nop
    ctx->pc = 0x28ce3cu;
    // NOP
label_28ce40:
    // 0x28ce40: 0x234280  .word       0x00234280                   # sll         $t0, $v1, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ce40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_28ce44:
    // 0x28ce44: 0x0  nop
    ctx->pc = 0x28ce44u;
    // NOP
label_28ce48:
    // 0x28ce48: 0x681  .word       0x00000681                   # INVALID     $zero, $zero, 0x681 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ce48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28CE48 raw=0x00000681"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ce4c:
    // 0x28ce4c: 0x0  nop
    ctx->pc = 0x28ce4cu;
    // NOP
label_28ce50:
    // 0x28ce50: 0x0  nop
    ctx->pc = 0x28ce50u;
    // NOP
label_28ce54:
    // 0x28ce54: 0x0  nop
    ctx->pc = 0x28ce54u;
    // NOP
label_28ce58:
    // 0x28ce58: 0x0  nop
    ctx->pc = 0x28ce58u;
    // NOP
label_28ce5c:
    // 0x28ce5c: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ce5cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x28CE5C raw=0x447A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ce60:
    // 0x28ce60: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ce60u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CE60 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ce64:
    // 0x28ce64: 0x0  nop
    ctx->pc = 0x28ce64u;
    // NOP
label_28ce68:
    // 0x28ce68: 0x0  nop
    ctx->pc = 0x28ce68u;
    // NOP
label_28ce6c:
    // 0x28ce6c: 0x0  nop
    ctx->pc = 0x28ce6cu;
    // NOP
label_28ce70:
    // 0x28ce70: 0x0  nop
    ctx->pc = 0x28ce70u;
    // NOP
label_28ce74:
    // 0x28ce74: 0x0  nop
    ctx->pc = 0x28ce74u;
    // NOP
label_28ce78:
    // 0x28ce78: 0x0  nop
    ctx->pc = 0x28ce78u;
    // NOP
label_28ce7c:
    // 0x28ce7c: 0x0  nop
    ctx->pc = 0x28ce7cu;
    // NOP
label_28ce80:
    // 0x28ce80: 0x0  nop
    ctx->pc = 0x28ce80u;
    // NOP
label_28ce84:
    // 0x28ce84: 0x0  nop
    ctx->pc = 0x28ce84u;
    // NOP
label_28ce88:
    // 0x28ce88: 0x0  nop
    ctx->pc = 0x28ce88u;
    // NOP
label_28ce8c:
    // 0x28ce8c: 0x0  nop
    ctx->pc = 0x28ce8cu;
    // NOP
label_28ce90:
    // 0x28ce90: 0x0  nop
    ctx->pc = 0x28ce90u;
    // NOP
label_28ce94:
    // 0x28ce94: 0x0  nop
    ctx->pc = 0x28ce94u;
    // NOP
label_28ce98:
    // 0x28ce98: 0x0  nop
    ctx->pc = 0x28ce98u;
    // NOP
label_28ce9c:
    // 0x28ce9c: 0x0  nop
    ctx->pc = 0x28ce9cu;
    // NOP
label_28cea0:
    // 0x28cea0: 0x0  nop
    ctx->pc = 0x28cea0u;
    // NOP
label_28cea4:
    // 0x28cea4: 0x0  nop
    ctx->pc = 0x28cea4u;
    // NOP
label_28cea8:
    // 0x28cea8: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x28cea8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ceac:
    // 0x28ceac: 0x0  nop
    ctx->pc = 0x28ceacu;
    // NOP
label_28ceb0:
    // 0x28ceb0: 0x0  nop
    ctx->pc = 0x28ceb0u;
    // NOP
label_28ceb4:
    // 0x28ceb4: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ceb4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28ceb8:
    // 0x28ceb8: 0x0  nop
    ctx->pc = 0x28ceb8u;
    // NOP
label_28cebc:
    // 0x28cebc: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cebcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CEBC raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cec0:
    // 0x28cec0: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cec0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CEC0 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cec4:
    // 0x28cec4: 0x0  nop
    ctx->pc = 0x28cec4u;
    // NOP
label_28cec8:
    // 0x28cec8: 0x0  nop
    ctx->pc = 0x28cec8u;
    // NOP
label_28cecc:
    // 0x28cecc: 0x0  nop
    ctx->pc = 0x28ceccu;
    // NOP
label_28ced0:
    // 0x28ced0: 0x0  nop
    ctx->pc = 0x28ced0u;
    // NOP
label_28ced4:
    // 0x28ced4: 0x0  nop
    ctx->pc = 0x28ced4u;
    // NOP
label_28ced8:
    // 0x28ced8: 0x0  nop
    ctx->pc = 0x28ced8u;
    // NOP
label_28cedc:
    // 0x28cedc: 0x0  nop
    ctx->pc = 0x28cedcu;
    // NOP
label_28cee0:
    // 0x28cee0: 0x0  nop
    ctx->pc = 0x28cee0u;
    // NOP
label_28cee4:
    // 0x28cee4: 0x0  nop
    ctx->pc = 0x28cee4u;
    // NOP
label_28cee8:
    // 0x28cee8: 0x0  nop
    ctx->pc = 0x28cee8u;
    // NOP
label_28ceec:
    // 0x28ceec: 0x0  nop
    ctx->pc = 0x28ceecu;
    // NOP
label_28cef0:
    // 0x28cef0: 0x0  nop
    ctx->pc = 0x28cef0u;
    // NOP
label_28cef4:
    // 0x28cef4: 0x0  nop
    ctx->pc = 0x28cef4u;
    // NOP
label_28cef8:
    // 0x28cef8: 0x0  nop
    ctx->pc = 0x28cef8u;
    // NOP
label_28cefc:
    // 0x28cefc: 0x0  nop
    ctx->pc = 0x28cefcu;
    // NOP
label_28cf00:
    // 0x28cf00: 0x0  nop
    ctx->pc = 0x28cf00u;
    // NOP
label_28cf04:
    // 0x28cf04: 0x0  nop
    ctx->pc = 0x28cf04u;
    // NOP
label_28cf08:
    // 0x28cf08: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x28cf08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cf0c:
    // 0x28cf0c: 0x0  nop
    ctx->pc = 0x28cf0cu;
    // NOP
label_28cf10:
    // 0x28cf10: 0x0  nop
    ctx->pc = 0x28cf10u;
    // NOP
label_28cf14:
    // 0x28cf14: 0x0  nop
    ctx->pc = 0x28cf14u;
    // NOP
label_28cf18:
    // 0x28cf18: 0x0  nop
    ctx->pc = 0x28cf18u;
    // NOP
label_28cf1c:
    // 0x28cf1c: 0x0  nop
    ctx->pc = 0x28cf1cu;
    // NOP
label_28cf20:
    // 0x28cf20: 0x0  nop
    ctx->pc = 0x28cf20u;
    // NOP
label_28cf24:
    // 0x28cf24: 0x0  nop
    ctx->pc = 0x28cf24u;
    // NOP
label_28cf28:
    // 0x28cf28: 0x0  nop
    ctx->pc = 0x28cf28u;
    // NOP
label_28cf2c:
    // 0x28cf2c: 0x0  nop
    ctx->pc = 0x28cf2cu;
    // NOP
label_28cf30:
    // 0x28cf30: 0x0  nop
    ctx->pc = 0x28cf30u;
    // NOP
label_28cf34:
    // 0x28cf34: 0x0  nop
    ctx->pc = 0x28cf34u;
    // NOP
label_28cf38:
    // 0x28cf38: 0x0  nop
    ctx->pc = 0x28cf38u;
    // NOP
label_28cf3c:
    // 0x28cf3c: 0x0  nop
    ctx->pc = 0x28cf3cu;
    // NOP
label_28cf40:
    // 0x28cf40: 0x44325350  .word       0x44325350                   # dmfc1       $s2, $f10 # 00000350 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cf40u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x10 at 0x28CF40 raw=0x44325350"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cf44:
    // 0x28cf44: 0x200000  .word       0x00200000                   # sll         $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cf44u;
    // NOP
label_28cf48:
    // 0x28cf48: 0x0  nop
    ctx->pc = 0x28cf48u;
    // NOP
label_28cf4c:
    // 0x28cf4c: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x28cf4cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cf50:
    // 0x28cf50: 0x0  nop
    ctx->pc = 0x28cf50u;
    // NOP
label_28cf54:
    // 0x28cf54: 0x0  nop
    ctx->pc = 0x28cf54u;
    // NOP
label_28cf58:
    // 0x28cf58: 0x0  nop
    ctx->pc = 0x28cf58u;
    // NOP
label_28cf5c:
    // 0x28cf5c: 0x0  nop
    ctx->pc = 0x28cf5cu;
    // NOP
label_28cf60:
    // 0x28cf60: 0x0  nop
    ctx->pc = 0x28cf60u;
    // NOP
label_28cf64:
    // 0x28cf64: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x28cf64u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cf68:
    // 0x28cf68: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28cf68u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28CF68 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cf6c:
    // 0x28cf6c: 0x0  nop
    ctx->pc = 0x28cf6cu;
    // NOP
label_28cf70:
    // 0x28cf70: 0x0  nop
    ctx->pc = 0x28cf70u;
    // NOP
label_28cf74:
    // 0x28cf74: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cf74u;
    ctx->lo = GPR_U64(ctx, 0);
label_28cf78:
    // 0x28cf78: 0x28  mfsa        $zero
    ctx->pc = 0x28cf78u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28cf7c:
    // 0x28cf7c: 0x0  nop
    ctx->pc = 0x28cf7cu;
    // NOP
label_28cf80:
    // 0x28cf80: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28cf80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28cf84:
    // 0x28cf84: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cf84u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28cf88:
    // 0x28cf88: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x28cf88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_28cf8c:
    // 0x28cf8c: 0x0  nop
    ctx->pc = 0x28cf8cu;
    // NOP
label_28cf90:
    // 0x28cf90: 0x3f1ac13c  .word       0x3F1AC13C                   # lui         $k0, 0xC13C # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cf90u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)49468 << 16));
label_28cf94:
    // 0x28cf94: 0x3ec86d72  .word       0x3EC86D72                   # lui         $t0, 0x6D72 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cf94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28018 << 16));
label_28cf98:
    // 0x28cf98: 0x3f319b5f  .word       0x3F319B5F                   # lui         $s1, 0x9B5F # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cf98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)39775 << 16));
label_28cf9c:
    // 0x28cf9c: 0x0  nop
    ctx->pc = 0x28cf9cu;
    // NOP
label_28cfa0:
    // 0x28cfa0: 0xbf3ad395  cache       0x1A, -0x2C6B($t9)
    ctx->pc = 0x28cfa0u;
    // CACHE instruction (ignored)
label_28cfa4:
    // 0x28cfa4: 0x3e792d99  .word       0x3E792D99                   # lui         $t9, 0x2D99 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfa4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)11673 << 16));
label_28cfa8:
    // 0x28cfa8: 0xbf238ed2  cache       0x03, -0x712E($t9)
    ctx->pc = 0x28cfa8u;
    // CACHE instruction (ignored)
label_28cfac:
    // 0x28cfac: 0x0  nop
    ctx->pc = 0x28cfacu;
    // NOP
label_28cfb0:
    // 0x28cfb0: 0x0  nop
    ctx->pc = 0x28cfb0u;
    // NOP
label_28cfb4:
    // 0x28cfb4: 0x0  nop
    ctx->pc = 0x28cfb4u;
    // NOP
label_28cfb8:
    // 0x28cfb8: 0x0  nop
    ctx->pc = 0x28cfb8u;
    // NOP
label_28cfbc:
    // 0x28cfbc: 0x0  nop
    ctx->pc = 0x28cfbcu;
    // NOP
label_28cfc0:
    // 0x28cfc0: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfc0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cfc4:
    // 0x28cfc4: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfc4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cfc8:
    // 0x28cfc8: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfc8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28cfcc:
    // 0x28cfcc: 0x0  nop
    ctx->pc = 0x28cfccu;
    // NOP
label_28cfd0:
    // 0x28cfd0: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfd0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cfd4:
    // 0x28cfd4: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfd4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cfd8:
    // 0x28cfd8: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfd8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cfdc:
    // 0x28cfdc: 0x0  nop
    ctx->pc = 0x28cfdcu;
    // NOP
label_28cfe0:
    // 0x28cfe0: 0x0  nop
    ctx->pc = 0x28cfe0u;
    // NOP
label_28cfe4:
    // 0x28cfe4: 0x0  nop
    ctx->pc = 0x28cfe4u;
    // NOP
label_28cfe8:
    // 0x28cfe8: 0x0  nop
    ctx->pc = 0x28cfe8u;
    // NOP
label_28cfec:
    // 0x28cfec: 0x0  nop
    ctx->pc = 0x28cfecu;
    // NOP
label_28cff0:
    // 0x28cff0: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cff0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cff4:
    // 0x28cff4: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cff4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cff8:
    // 0x28cff8: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cff8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cffc:
    // 0x28cffc: 0x0  nop
    ctx->pc = 0x28cffcu;
    // NOP
label_28d000:
    // 0x28d000: 0x99826382  lwr         $v0, 0x6382($t4)
    ctx->pc = 0x28d000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 25474); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_28d004:
    // 0x28d004: 0x81828e82  lb          $v0, -0x717E($t4)
    ctx->pc = 0x28d004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294938242)));
label_28d008:
    // 0x28d008: 0x94829382  lhu         $v0, -0x6C7E($a0)
    ctx->pc = 0x28d008u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294939522)));
label_28d00c:
    // 0x28d00c: 0x40819982  .word       0x40819982                   # mtc0        $at, WatchHi # 00000182 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d00cu;
    // Unimplemented MTC0 to COP0 19
label_28d010:
    // 0x28d010: 0x81827682  lb          $v0, 0x7682($t4)
    ctx->pc = 0x28d010u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 30338)));
label_28d014:
    // 0x28d014: 0x92829282  lbu         $v0, -0x6D7E($s4)
    ctx->pc = 0x28d014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294939266)));
label_28d018:
    // 0x28d018: 0x8f828982  lw          $v0, -0x767E($gp)
    ctx->pc = 0x28d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936962)));
label_28d01c:
    // 0x28d01c: 0x93829282  lbu         $v0, -0x6D7E($gp)
    ctx->pc = 0x28d01cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939266)));
label_28d020:
    // 0x28d020: 0x40815282  .word       0x40815282                   # mtc0        $at, EntryHi # 00000282 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d020u;
    ctx->cop0_entryhi = GPR_U32(ctx, 1) & 0xC00000FF;
label_28d024:
    // 0x28d024: 0x94827782  lhu         $v0, 0x7782($a0)
    ctx->pc = 0x28d024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30594)));
label_28d028:
    // 0x28d028: 0x85829282  lh          $v0, -0x6D7E($t4)
    ctx->pc = 0x28d028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4294939266)));
label_28d02c:
    // 0x28d02c: 0x85828d82  lh          $v0, -0x727E($t4)
    ctx->pc = 0x28d02cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4294937986)));
label_28d030:
    // 0x28d030: 0x6b824081  ldl         $v0, 0x4081($gp)
    ctx->pc = 0x28d030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 16513); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_28d034:
    // 0x28d034: 0x87828582  lh          $v0, -0x7A7E($gp)
    ctx->pc = 0x28d034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935938)));
label_28d038:
    // 0x28d038: 0x8e828582  lw          $v0, -0x7A7E($s4)
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935938)));
label_28d03c:
    // 0x28d03c: 0x93828482  lbu         $v0, -0x7B7E($gp)
    ctx->pc = 0x28d03cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935682)));
label_28d040:
    // 0x28d040: 0x0  nop
    ctx->pc = 0x28d040u;
    // NOP
label_28d044:
    // 0x28d044: 0x6f73756d  ldr         $s3, 0x756D($k1)
    ctx->pc = 0x28d044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30061); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_28d048:
    // 0x28d048: 0x63692e75  daddi       $t1, $k1, 0x2E75
    ctx->pc = 0x28d048u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)11893; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_28d04c:
    // 0x28d04c: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d04cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28d050:
    // 0x28d050: 0x0  nop
    ctx->pc = 0x28d050u;
    // NOP
label_28d054:
    // 0x28d054: 0x0  nop
    ctx->pc = 0x28d054u;
    // NOP
label_28d058:
    // 0x28d058: 0x0  nop
    ctx->pc = 0x28d058u;
    // NOP
label_28d05c:
    // 0x28d05c: 0x0  nop
    ctx->pc = 0x28d05cu;
    // NOP
label_28d060:
    // 0x28d060: 0x0  nop
    ctx->pc = 0x28d060u;
    // NOP
label_28d064:
    // 0x28d064: 0x0  nop
    ctx->pc = 0x28d064u;
    // NOP
label_28d068:
    // 0x28d068: 0x0  nop
    ctx->pc = 0x28d068u;
    // NOP
label_28d06c:
    // 0x28d06c: 0x0  nop
    ctx->pc = 0x28d06cu;
    // NOP
label_28d070:
    // 0x28d070: 0x0  nop
    ctx->pc = 0x28d070u;
    // NOP
label_28d074:
    // 0x28d074: 0x0  nop
    ctx->pc = 0x28d074u;
    // NOP
label_28d078:
    // 0x28d078: 0x0  nop
    ctx->pc = 0x28d078u;
    // NOP
label_28d07c:
    // 0x28d07c: 0x0  nop
    ctx->pc = 0x28d07cu;
    // NOP
label_28d080:
    // 0x28d080: 0x0  nop
    ctx->pc = 0x28d080u;
    // NOP
label_28d084:
    // 0x28d084: 0x6f73756d  ldr         $s3, 0x756D($k1)
    ctx->pc = 0x28d084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30061); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_28d088:
    // 0x28d088: 0x63692e75  daddi       $t1, $k1, 0x2E75
    ctx->pc = 0x28d088u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)11893; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_28d08c:
    // 0x28d08c: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d08cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28d090:
    // 0x28d090: 0x0  nop
    ctx->pc = 0x28d090u;
    // NOP
label_28d094:
    // 0x28d094: 0x0  nop
    ctx->pc = 0x28d094u;
    // NOP
label_28d098:
    // 0x28d098: 0x0  nop
    ctx->pc = 0x28d098u;
    // NOP
label_28d09c:
    // 0x28d09c: 0x0  nop
    ctx->pc = 0x28d09cu;
    // NOP
label_28d0a0:
    // 0x28d0a0: 0x0  nop
    ctx->pc = 0x28d0a0u;
    // NOP
label_28d0a4:
    // 0x28d0a4: 0x0  nop
    ctx->pc = 0x28d0a4u;
    // NOP
label_28d0a8:
    // 0x28d0a8: 0x0  nop
    ctx->pc = 0x28d0a8u;
    // NOP
label_28d0ac:
    // 0x28d0ac: 0x0  nop
    ctx->pc = 0x28d0acu;
    // NOP
label_28d0b0:
    // 0x28d0b0: 0x0  nop
    ctx->pc = 0x28d0b0u;
    // NOP
label_28d0b4:
    // 0x28d0b4: 0x0  nop
    ctx->pc = 0x28d0b4u;
    // NOP
label_28d0b8:
    // 0x28d0b8: 0x0  nop
    ctx->pc = 0x28d0b8u;
    // NOP
label_28d0bc:
    // 0x28d0bc: 0x0  nop
    ctx->pc = 0x28d0bcu;
    // NOP
label_28d0c0:
    // 0x28d0c0: 0x0  nop
    ctx->pc = 0x28d0c0u;
    // NOP
label_28d0c4:
    // 0x28d0c4: 0x6f73756d  ldr         $s3, 0x756D($k1)
    ctx->pc = 0x28d0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30061); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_28d0c8:
    // 0x28d0c8: 0x63692e75  daddi       $t1, $k1, 0x2E75
    ctx->pc = 0x28d0c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)11893; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_28d0cc:
    // 0x28d0cc: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d0ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28d0d0:
    // 0x28d0d0: 0x0  nop
    ctx->pc = 0x28d0d0u;
    // NOP
label_28d0d4:
    // 0x28d0d4: 0x0  nop
    ctx->pc = 0x28d0d4u;
    // NOP
label_28d0d8:
    // 0x28d0d8: 0x0  nop
    ctx->pc = 0x28d0d8u;
    // NOP
label_28d0dc:
    // 0x28d0dc: 0x0  nop
    ctx->pc = 0x28d0dcu;
    // NOP
label_28d0e0:
    // 0x28d0e0: 0x0  nop
    ctx->pc = 0x28d0e0u;
    // NOP
label_28d0e4:
    // 0x28d0e4: 0x0  nop
    ctx->pc = 0x28d0e4u;
    // NOP
label_28d0e8:
    // 0x28d0e8: 0x0  nop
    ctx->pc = 0x28d0e8u;
    // NOP
label_28d0ec:
    // 0x28d0ec: 0x0  nop
    ctx->pc = 0x28d0ecu;
    // NOP
label_28d0f0:
    // 0x28d0f0: 0x0  nop
    ctx->pc = 0x28d0f0u;
    // NOP
label_28d0f4:
    // 0x28d0f4: 0x0  nop
    ctx->pc = 0x28d0f4u;
    // NOP
label_28d0f8:
    // 0x28d0f8: 0x0  nop
    ctx->pc = 0x28d0f8u;
    // NOP
label_28d0fc:
    // 0x28d0fc: 0x0  nop
    ctx->pc = 0x28d0fcu;
    // NOP
label_28d100:
    // 0x28d100: 0x0  nop
    ctx->pc = 0x28d100u;
    // NOP
label_28d104:
    // 0x28d104: 0x0  nop
    ctx->pc = 0x28d104u;
    // NOP
label_28d108:
    // 0x28d108: 0x0  nop
    ctx->pc = 0x28d108u;
    // NOP
label_28d10c:
    // 0x28d10c: 0x0  nop
    ctx->pc = 0x28d10cu;
    // NOP
label_28d110:
    // 0x28d110: 0x0  nop
    ctx->pc = 0x28d110u;
    // NOP
label_28d114:
    // 0x28d114: 0x0  nop
    ctx->pc = 0x28d114u;
    // NOP
label_28d118:
    // 0x28d118: 0x0  nop
    ctx->pc = 0x28d118u;
    // NOP
label_28d11c:
    // 0x28d11c: 0x0  nop
    ctx->pc = 0x28d11cu;
    // NOP
label_28d120:
    // 0x28d120: 0x0  nop
    ctx->pc = 0x28d120u;
    // NOP
label_28d124:
    // 0x28d124: 0x0  nop
    ctx->pc = 0x28d124u;
    // NOP
label_28d128:
    // 0x28d128: 0x0  nop
    ctx->pc = 0x28d128u;
    // NOP
label_28d12c:
    // 0x28d12c: 0x0  nop
    ctx->pc = 0x28d12cu;
    // NOP
label_28d130:
    // 0x28d130: 0x0  nop
    ctx->pc = 0x28d130u;
    // NOP
label_28d134:
    // 0x28d134: 0x0  nop
    ctx->pc = 0x28d134u;
    // NOP
label_28d138:
    // 0x28d138: 0x0  nop
    ctx->pc = 0x28d138u;
    // NOP
label_28d13c:
    // 0x28d13c: 0x0  nop
    ctx->pc = 0x28d13cu;
    // NOP
label_28d140:
    // 0x28d140: 0x0  nop
    ctx->pc = 0x28d140u;
    // NOP
label_28d144:
    // 0x28d144: 0x0  nop
    ctx->pc = 0x28d144u;
    // NOP
label_28d148:
    // 0x28d148: 0x0  nop
    ctx->pc = 0x28d148u;
    // NOP
label_28d14c:
    // 0x28d14c: 0x0  nop
    ctx->pc = 0x28d14cu;
    // NOP
label_28d150:
    // 0x28d150: 0x0  nop
    ctx->pc = 0x28d150u;
    // NOP
label_28d154:
    // 0x28d154: 0x0  nop
    ctx->pc = 0x28d154u;
    // NOP
label_28d158:
    // 0x28d158: 0x0  nop
    ctx->pc = 0x28d158u;
    // NOP
label_28d15c:
    // 0x28d15c: 0x0  nop
    ctx->pc = 0x28d15cu;
    // NOP
label_28d160:
    // 0x28d160: 0x0  nop
    ctx->pc = 0x28d160u;
    // NOP
label_28d164:
    // 0x28d164: 0x0  nop
    ctx->pc = 0x28d164u;
    // NOP
label_28d168:
    // 0x28d168: 0x0  nop
    ctx->pc = 0x28d168u;
    // NOP
label_28d16c:
    // 0x28d16c: 0x0  nop
    ctx->pc = 0x28d16cu;
    // NOP
label_28d170:
    // 0x28d170: 0x0  nop
    ctx->pc = 0x28d170u;
    // NOP
label_28d174:
    // 0x28d174: 0x0  nop
    ctx->pc = 0x28d174u;
    // NOP
label_28d178:
    // 0x28d178: 0x0  nop
    ctx->pc = 0x28d178u;
    // NOP
label_28d17c:
    // 0x28d17c: 0x0  nop
    ctx->pc = 0x28d17cu;
    // NOP
label_28d180:
    // 0x28d180: 0x0  nop
    ctx->pc = 0x28d180u;
    // NOP
label_28d184:
    // 0x28d184: 0x0  nop
    ctx->pc = 0x28d184u;
    // NOP
label_28d188:
    // 0x28d188: 0x0  nop
    ctx->pc = 0x28d188u;
    // NOP
label_28d18c:
    // 0x28d18c: 0x0  nop
    ctx->pc = 0x28d18cu;
    // NOP
label_28d190:
    // 0x28d190: 0x0  nop
    ctx->pc = 0x28d190u;
    // NOP
label_28d194:
    // 0x28d194: 0x0  nop
    ctx->pc = 0x28d194u;
    // NOP
label_28d198:
    // 0x28d198: 0x0  nop
    ctx->pc = 0x28d198u;
    // NOP
label_28d19c:
    // 0x28d19c: 0x0  nop
    ctx->pc = 0x28d19cu;
    // NOP
label_28d1a0:
    // 0x28d1a0: 0x0  nop
    ctx->pc = 0x28d1a0u;
    // NOP
label_28d1a4:
    // 0x28d1a4: 0x0  nop
    ctx->pc = 0x28d1a4u;
    // NOP
label_28d1a8:
    // 0x28d1a8: 0x0  nop
    ctx->pc = 0x28d1a8u;
    // NOP
label_28d1ac:
    // 0x28d1ac: 0x0  nop
    ctx->pc = 0x28d1acu;
    // NOP
label_28d1b0:
    // 0x28d1b0: 0x0  nop
    ctx->pc = 0x28d1b0u;
    // NOP
label_28d1b4:
    // 0x28d1b4: 0x0  nop
    ctx->pc = 0x28d1b4u;
    // NOP
label_28d1b8:
    // 0x28d1b8: 0x0  nop
    ctx->pc = 0x28d1b8u;
    // NOP
label_28d1bc:
    // 0x28d1bc: 0x0  nop
    ctx->pc = 0x28d1bcu;
    // NOP
label_28d1c0:
    // 0x28d1c0: 0x0  nop
    ctx->pc = 0x28d1c0u;
    // NOP
label_28d1c4:
    // 0x28d1c4: 0x0  nop
    ctx->pc = 0x28d1c4u;
    // NOP
label_28d1c8:
    // 0x28d1c8: 0x0  nop
    ctx->pc = 0x28d1c8u;
    // NOP
label_28d1cc:
    // 0x28d1cc: 0x0  nop
    ctx->pc = 0x28d1ccu;
    // NOP
label_28d1d0:
    // 0x28d1d0: 0x0  nop
    ctx->pc = 0x28d1d0u;
    // NOP
label_28d1d4:
    // 0x28d1d4: 0x0  nop
    ctx->pc = 0x28d1d4u;
    // NOP
    ctx->pc = 0x28d1d8u;
    return;
}
