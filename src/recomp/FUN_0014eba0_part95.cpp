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


void FUN_0014eba0_part95(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17ca00u: goto label_17ca00;
        case 0x17ca04u: goto label_17ca04;
        case 0x17ca08u: goto label_17ca08;
        case 0x17ca0cu: goto label_17ca0c;
        case 0x17ca10u: goto label_17ca10;
        case 0x17ca14u: goto label_17ca14;
        case 0x17ca18u: goto label_17ca18;
        case 0x17ca1cu: goto label_17ca1c;
        case 0x17ca20u: goto label_17ca20;
        case 0x17ca24u: goto label_17ca24;
        case 0x17ca28u: goto label_17ca28;
        case 0x17ca2cu: goto label_17ca2c;
        case 0x17ca30u: goto label_17ca30;
        case 0x17ca34u: goto label_17ca34;
        case 0x17ca38u: goto label_17ca38;
        case 0x17ca3cu: goto label_17ca3c;
        case 0x17ca40u: goto label_17ca40;
        case 0x17ca44u: goto label_17ca44;
        case 0x17ca48u: goto label_17ca48;
        case 0x17ca4cu: goto label_17ca4c;
        case 0x17ca50u: goto label_17ca50;
        case 0x17ca54u: goto label_17ca54;
        case 0x17ca58u: goto label_17ca58;
        case 0x17ca5cu: goto label_17ca5c;
        case 0x17ca60u: goto label_17ca60;
        case 0x17ca64u: goto label_17ca64;
        case 0x17ca68u: goto label_17ca68;
        case 0x17ca6cu: goto label_17ca6c;
        case 0x17ca70u: goto label_17ca70;
        case 0x17ca74u: goto label_17ca74;
        case 0x17ca78u: goto label_17ca78;
        case 0x17ca7cu: goto label_17ca7c;
        case 0x17ca80u: goto label_17ca80;
        case 0x17ca84u: goto label_17ca84;
        case 0x17ca88u: goto label_17ca88;
        case 0x17ca8cu: goto label_17ca8c;
        case 0x17ca90u: goto label_17ca90;
        case 0x17ca94u: goto label_17ca94;
        case 0x17ca98u: goto label_17ca98;
        case 0x17ca9cu: goto label_17ca9c;
        case 0x17caa0u: goto label_17caa0;
        case 0x17caa4u: goto label_17caa4;
        case 0x17caa8u: goto label_17caa8;
        case 0x17caacu: goto label_17caac;
        case 0x17cab0u: goto label_17cab0;
        case 0x17cab4u: goto label_17cab4;
        case 0x17cab8u: goto label_17cab8;
        case 0x17cabcu: goto label_17cabc;
        case 0x17cac0u: goto label_17cac0;
        case 0x17cac4u: goto label_17cac4;
        case 0x17cac8u: goto label_17cac8;
        case 0x17caccu: goto label_17cacc;
        case 0x17cad0u: goto label_17cad0;
        case 0x17cad4u: goto label_17cad4;
        case 0x17cad8u: goto label_17cad8;
        case 0x17cadcu: goto label_17cadc;
        case 0x17cae0u: goto label_17cae0;
        case 0x17cae4u: goto label_17cae4;
        case 0x17cae8u: goto label_17cae8;
        case 0x17caecu: goto label_17caec;
        case 0x17caf0u: goto label_17caf0;
        case 0x17caf4u: goto label_17caf4;
        case 0x17caf8u: goto label_17caf8;
        case 0x17cafcu: goto label_17cafc;
        case 0x17cb00u: goto label_17cb00;
        case 0x17cb04u: goto label_17cb04;
        case 0x17cb08u: goto label_17cb08;
        case 0x17cb0cu: goto label_17cb0c;
        case 0x17cb10u: goto label_17cb10;
        case 0x17cb14u: goto label_17cb14;
        case 0x17cb18u: goto label_17cb18;
        case 0x17cb1cu: goto label_17cb1c;
        case 0x17cb20u: goto label_17cb20;
        case 0x17cb24u: goto label_17cb24;
        case 0x17cb28u: goto label_17cb28;
        case 0x17cb2cu: goto label_17cb2c;
        case 0x17cb30u: goto label_17cb30;
        case 0x17cb34u: goto label_17cb34;
        case 0x17cb38u: goto label_17cb38;
        case 0x17cb3cu: goto label_17cb3c;
        case 0x17cb40u: goto label_17cb40;
        case 0x17cb44u: goto label_17cb44;
        case 0x17cb48u: goto label_17cb48;
        case 0x17cb4cu: goto label_17cb4c;
        case 0x17cb50u: goto label_17cb50;
        case 0x17cb54u: goto label_17cb54;
        case 0x17cb58u: goto label_17cb58;
        case 0x17cb5cu: goto label_17cb5c;
        case 0x17cb60u: goto label_17cb60;
        case 0x17cb64u: goto label_17cb64;
        case 0x17cb68u: goto label_17cb68;
        case 0x17cb6cu: goto label_17cb6c;
        case 0x17cb70u: goto label_17cb70;
        case 0x17cb74u: goto label_17cb74;
        case 0x17cb78u: goto label_17cb78;
        case 0x17cb7cu: goto label_17cb7c;
        case 0x17cb80u: goto label_17cb80;
        case 0x17cb84u: goto label_17cb84;
        case 0x17cb88u: goto label_17cb88;
        case 0x17cb8cu: goto label_17cb8c;
        case 0x17cb90u: goto label_17cb90;
        case 0x17cb94u: goto label_17cb94;
        case 0x17cb98u: goto label_17cb98;
        case 0x17cb9cu: goto label_17cb9c;
        case 0x17cba0u: goto label_17cba0;
        case 0x17cba4u: goto label_17cba4;
        case 0x17cba8u: goto label_17cba8;
        case 0x17cbacu: goto label_17cbac;
        case 0x17cbb0u: goto label_17cbb0;
        case 0x17cbb4u: goto label_17cbb4;
        case 0x17cbb8u: goto label_17cbb8;
        case 0x17cbbcu: goto label_17cbbc;
        case 0x17cbc0u: goto label_17cbc0;
        case 0x17cbc4u: goto label_17cbc4;
        case 0x17cbc8u: goto label_17cbc8;
        case 0x17cbccu: goto label_17cbcc;
        case 0x17cbd0u: goto label_17cbd0;
        case 0x17cbd4u: goto label_17cbd4;
        case 0x17cbd8u: goto label_17cbd8;
        case 0x17cbdcu: goto label_17cbdc;
        case 0x17cbe0u: goto label_17cbe0;
        case 0x17cbe4u: goto label_17cbe4;
        case 0x17cbe8u: goto label_17cbe8;
        case 0x17cbecu: goto label_17cbec;
        case 0x17cbf0u: goto label_17cbf0;
        case 0x17cbf4u: goto label_17cbf4;
        case 0x17cbf8u: goto label_17cbf8;
        case 0x17cbfcu: goto label_17cbfc;
        case 0x17cc00u: goto label_17cc00;
        case 0x17cc04u: goto label_17cc04;
        case 0x17cc08u: goto label_17cc08;
        case 0x17cc0cu: goto label_17cc0c;
        case 0x17cc10u: goto label_17cc10;
        case 0x17cc14u: goto label_17cc14;
        case 0x17cc18u: goto label_17cc18;
        case 0x17cc1cu: goto label_17cc1c;
        case 0x17cc20u: goto label_17cc20;
        case 0x17cc24u: goto label_17cc24;
        case 0x17cc28u: goto label_17cc28;
        case 0x17cc2cu: goto label_17cc2c;
        case 0x17cc30u: goto label_17cc30;
        case 0x17cc34u: goto label_17cc34;
        case 0x17cc38u: goto label_17cc38;
        case 0x17cc3cu: goto label_17cc3c;
        case 0x17cc40u: goto label_17cc40;
        case 0x17cc44u: goto label_17cc44;
        case 0x17cc48u: goto label_17cc48;
        case 0x17cc4cu: goto label_17cc4c;
        case 0x17cc50u: goto label_17cc50;
        case 0x17cc54u: goto label_17cc54;
        case 0x17cc58u: goto label_17cc58;
        case 0x17cc5cu: goto label_17cc5c;
        case 0x17cc60u: goto label_17cc60;
        case 0x17cc64u: goto label_17cc64;
        case 0x17cc68u: goto label_17cc68;
        case 0x17cc6cu: goto label_17cc6c;
        case 0x17cc70u: goto label_17cc70;
        case 0x17cc74u: goto label_17cc74;
        case 0x17cc78u: goto label_17cc78;
        case 0x17cc7cu: goto label_17cc7c;
        case 0x17cc80u: goto label_17cc80;
        case 0x17cc84u: goto label_17cc84;
        case 0x17cc88u: goto label_17cc88;
        case 0x17cc8cu: goto label_17cc8c;
        case 0x17cc90u: goto label_17cc90;
        case 0x17cc94u: goto label_17cc94;
        case 0x17cc98u: goto label_17cc98;
        case 0x17cc9cu: goto label_17cc9c;
        case 0x17cca0u: goto label_17cca0;
        case 0x17cca4u: goto label_17cca4;
        case 0x17cca8u: goto label_17cca8;
        case 0x17ccacu: goto label_17ccac;
        case 0x17ccb0u: goto label_17ccb0;
        case 0x17ccb4u: goto label_17ccb4;
        case 0x17ccb8u: goto label_17ccb8;
        case 0x17ccbcu: goto label_17ccbc;
        case 0x17ccc0u: goto label_17ccc0;
        case 0x17ccc4u: goto label_17ccc4;
        case 0x17ccc8u: goto label_17ccc8;
        case 0x17ccccu: goto label_17cccc;
        case 0x17ccd0u: goto label_17ccd0;
        case 0x17ccd4u: goto label_17ccd4;
        case 0x17ccd8u: goto label_17ccd8;
        case 0x17ccdcu: goto label_17ccdc;
        case 0x17cce0u: goto label_17cce0;
        case 0x17cce4u: goto label_17cce4;
        case 0x17cce8u: goto label_17cce8;
        case 0x17ccecu: goto label_17ccec;
        case 0x17ccf0u: goto label_17ccf0;
        case 0x17ccf4u: goto label_17ccf4;
        case 0x17ccf8u: goto label_17ccf8;
        case 0x17ccfcu: goto label_17ccfc;
        case 0x17cd00u: goto label_17cd00;
        case 0x17cd04u: goto label_17cd04;
        case 0x17cd08u: goto label_17cd08;
        case 0x17cd0cu: goto label_17cd0c;
        case 0x17cd10u: goto label_17cd10;
        case 0x17cd14u: goto label_17cd14;
        case 0x17cd18u: goto label_17cd18;
        case 0x17cd1cu: goto label_17cd1c;
        case 0x17cd20u: goto label_17cd20;
        case 0x17cd24u: goto label_17cd24;
        case 0x17cd28u: goto label_17cd28;
        case 0x17cd2cu: goto label_17cd2c;
        case 0x17cd30u: goto label_17cd30;
        case 0x17cd34u: goto label_17cd34;
        case 0x17cd38u: goto label_17cd38;
        case 0x17cd3cu: goto label_17cd3c;
        case 0x17cd40u: goto label_17cd40;
        case 0x17cd44u: goto label_17cd44;
        case 0x17cd48u: goto label_17cd48;
        case 0x17cd4cu: goto label_17cd4c;
        case 0x17cd50u: goto label_17cd50;
        case 0x17cd54u: goto label_17cd54;
        case 0x17cd58u: goto label_17cd58;
        case 0x17cd5cu: goto label_17cd5c;
        case 0x17cd60u: goto label_17cd60;
        case 0x17cd64u: goto label_17cd64;
        case 0x17cd68u: goto label_17cd68;
        case 0x17cd6cu: goto label_17cd6c;
        case 0x17cd70u: goto label_17cd70;
        case 0x17cd74u: goto label_17cd74;
        case 0x17cd78u: goto label_17cd78;
        case 0x17cd7cu: goto label_17cd7c;
        case 0x17cd80u: goto label_17cd80;
        case 0x17cd84u: goto label_17cd84;
        case 0x17cd88u: goto label_17cd88;
        case 0x17cd8cu: goto label_17cd8c;
        case 0x17cd90u: goto label_17cd90;
        case 0x17cd94u: goto label_17cd94;
        case 0x17cd98u: goto label_17cd98;
        case 0x17cd9cu: goto label_17cd9c;
        case 0x17cda0u: goto label_17cda0;
        case 0x17cda4u: goto label_17cda4;
        case 0x17cda8u: goto label_17cda8;
        case 0x17cdacu: goto label_17cdac;
        case 0x17cdb0u: goto label_17cdb0;
        case 0x17cdb4u: goto label_17cdb4;
        case 0x17cdb8u: goto label_17cdb8;
        case 0x17cdbcu: goto label_17cdbc;
        case 0x17cdc0u: goto label_17cdc0;
        case 0x17cdc4u: goto label_17cdc4;
        case 0x17cdc8u: goto label_17cdc8;
        case 0x17cdccu: goto label_17cdcc;
        case 0x17cdd0u: goto label_17cdd0;
        case 0x17cdd4u: goto label_17cdd4;
        case 0x17cdd8u: goto label_17cdd8;
        case 0x17cddcu: goto label_17cddc;
        case 0x17cde0u: goto label_17cde0;
        case 0x17cde4u: goto label_17cde4;
        case 0x17cde8u: goto label_17cde8;
        case 0x17cdecu: goto label_17cdec;
        case 0x17cdf0u: goto label_17cdf0;
        case 0x17cdf4u: goto label_17cdf4;
        case 0x17cdf8u: goto label_17cdf8;
        case 0x17cdfcu: goto label_17cdfc;
        case 0x17ce00u: goto label_17ce00;
        case 0x17ce04u: goto label_17ce04;
        case 0x17ce08u: goto label_17ce08;
        case 0x17ce0cu: goto label_17ce0c;
        case 0x17ce10u: goto label_17ce10;
        case 0x17ce14u: goto label_17ce14;
        case 0x17ce18u: goto label_17ce18;
        case 0x17ce1cu: goto label_17ce1c;
        case 0x17ce20u: goto label_17ce20;
        case 0x17ce24u: goto label_17ce24;
        case 0x17ce28u: goto label_17ce28;
        case 0x17ce2cu: goto label_17ce2c;
        case 0x17ce30u: goto label_17ce30;
        case 0x17ce34u: goto label_17ce34;
        case 0x17ce38u: goto label_17ce38;
        case 0x17ce3cu: goto label_17ce3c;
        case 0x17ce40u: goto label_17ce40;
        case 0x17ce44u: goto label_17ce44;
        case 0x17ce48u: goto label_17ce48;
        case 0x17ce4cu: goto label_17ce4c;
        case 0x17ce50u: goto label_17ce50;
        case 0x17ce54u: goto label_17ce54;
        case 0x17ce58u: goto label_17ce58;
        case 0x17ce5cu: goto label_17ce5c;
        case 0x17ce60u: goto label_17ce60;
        case 0x17ce64u: goto label_17ce64;
        case 0x17ce68u: goto label_17ce68;
        case 0x17ce6cu: goto label_17ce6c;
        case 0x17ce70u: goto label_17ce70;
        case 0x17ce74u: goto label_17ce74;
        case 0x17ce78u: goto label_17ce78;
        case 0x17ce7cu: goto label_17ce7c;
        case 0x17ce80u: goto label_17ce80;
        case 0x17ce84u: goto label_17ce84;
        case 0x17ce88u: goto label_17ce88;
        case 0x17ce8cu: goto label_17ce8c;
        case 0x17ce90u: goto label_17ce90;
        case 0x17ce94u: goto label_17ce94;
        case 0x17ce98u: goto label_17ce98;
        case 0x17ce9cu: goto label_17ce9c;
        case 0x17cea0u: goto label_17cea0;
        case 0x17cea4u: goto label_17cea4;
        case 0x17cea8u: goto label_17cea8;
        case 0x17ceacu: goto label_17ceac;
        case 0x17ceb0u: goto label_17ceb0;
        case 0x17ceb4u: goto label_17ceb4;
        case 0x17ceb8u: goto label_17ceb8;
        case 0x17cebcu: goto label_17cebc;
        case 0x17cec0u: goto label_17cec0;
        case 0x17cec4u: goto label_17cec4;
        case 0x17cec8u: goto label_17cec8;
        case 0x17ceccu: goto label_17cecc;
        case 0x17ced0u: goto label_17ced0;
        case 0x17ced4u: goto label_17ced4;
        case 0x17ced8u: goto label_17ced8;
        case 0x17cedcu: goto label_17cedc;
        case 0x17cee0u: goto label_17cee0;
        case 0x17cee4u: goto label_17cee4;
        case 0x17cee8u: goto label_17cee8;
        case 0x17ceecu: goto label_17ceec;
        case 0x17cef0u: goto label_17cef0;
        case 0x17cef4u: goto label_17cef4;
        case 0x17cef8u: goto label_17cef8;
        case 0x17cefcu: goto label_17cefc;
        case 0x17cf00u: goto label_17cf00;
        case 0x17cf04u: goto label_17cf04;
        case 0x17cf08u: goto label_17cf08;
        case 0x17cf0cu: goto label_17cf0c;
        case 0x17cf10u: goto label_17cf10;
        case 0x17cf14u: goto label_17cf14;
        case 0x17cf18u: goto label_17cf18;
        case 0x17cf1cu: goto label_17cf1c;
        case 0x17cf20u: goto label_17cf20;
        case 0x17cf24u: goto label_17cf24;
        case 0x17cf28u: goto label_17cf28;
        case 0x17cf2cu: goto label_17cf2c;
        case 0x17cf30u: goto label_17cf30;
        case 0x17cf34u: goto label_17cf34;
        case 0x17cf38u: goto label_17cf38;
        case 0x17cf3cu: goto label_17cf3c;
        case 0x17cf40u: goto label_17cf40;
        case 0x17cf44u: goto label_17cf44;
        case 0x17cf48u: goto label_17cf48;
        case 0x17cf4cu: goto label_17cf4c;
        case 0x17cf50u: goto label_17cf50;
        case 0x17cf54u: goto label_17cf54;
        case 0x17cf58u: goto label_17cf58;
        case 0x17cf5cu: goto label_17cf5c;
        case 0x17cf60u: goto label_17cf60;
        case 0x17cf64u: goto label_17cf64;
        case 0x17cf68u: goto label_17cf68;
        case 0x17cf6cu: goto label_17cf6c;
        case 0x17cf70u: goto label_17cf70;
        case 0x17cf74u: goto label_17cf74;
        case 0x17cf78u: goto label_17cf78;
        case 0x17cf7cu: goto label_17cf7c;
        case 0x17cf80u: goto label_17cf80;
        case 0x17cf84u: goto label_17cf84;
        case 0x17cf88u: goto label_17cf88;
        case 0x17cf8cu: goto label_17cf8c;
        case 0x17cf90u: goto label_17cf90;
        case 0x17cf94u: goto label_17cf94;
        case 0x17cf98u: goto label_17cf98;
        case 0x17cf9cu: goto label_17cf9c;
        case 0x17cfa0u: goto label_17cfa0;
        case 0x17cfa4u: goto label_17cfa4;
        case 0x17cfa8u: goto label_17cfa8;
        case 0x17cfacu: goto label_17cfac;
        case 0x17cfb0u: goto label_17cfb0;
        case 0x17cfb4u: goto label_17cfb4;
        case 0x17cfb8u: goto label_17cfb8;
        case 0x17cfbcu: goto label_17cfbc;
        case 0x17cfc0u: goto label_17cfc0;
        case 0x17cfc4u: goto label_17cfc4;
        case 0x17cfc8u: goto label_17cfc8;
        case 0x17cfccu: goto label_17cfcc;
        case 0x17cfd0u: goto label_17cfd0;
        case 0x17cfd4u: goto label_17cfd4;
        case 0x17cfd8u: goto label_17cfd8;
        case 0x17cfdcu: goto label_17cfdc;
        case 0x17cfe0u: goto label_17cfe0;
        case 0x17cfe4u: goto label_17cfe4;
        case 0x17cfe8u: goto label_17cfe8;
        case 0x17cfecu: goto label_17cfec;
        case 0x17cff0u: goto label_17cff0;
        case 0x17cff4u: goto label_17cff4;
        case 0x17cff8u: goto label_17cff8;
        case 0x17cffcu: goto label_17cffc;
        case 0x17d000u: goto label_17d000;
        case 0x17d004u: goto label_17d004;
        case 0x17d008u: goto label_17d008;
        case 0x17d00cu: goto label_17d00c;
        case 0x17d010u: goto label_17d010;
        case 0x17d014u: goto label_17d014;
        case 0x17d018u: goto label_17d018;
        case 0x17d01cu: goto label_17d01c;
        case 0x17d020u: goto label_17d020;
        case 0x17d024u: goto label_17d024;
        case 0x17d028u: goto label_17d028;
        case 0x17d02cu: goto label_17d02c;
        case 0x17d030u: goto label_17d030;
        case 0x17d034u: goto label_17d034;
        case 0x17d038u: goto label_17d038;
        case 0x17d03cu: goto label_17d03c;
        case 0x17d040u: goto label_17d040;
        case 0x17d044u: goto label_17d044;
        case 0x17d048u: goto label_17d048;
        case 0x17d04cu: goto label_17d04c;
        case 0x17d050u: goto label_17d050;
        case 0x17d054u: goto label_17d054;
        case 0x17d058u: goto label_17d058;
        case 0x17d05cu: goto label_17d05c;
        case 0x17d060u: goto label_17d060;
        case 0x17d064u: goto label_17d064;
        case 0x17d068u: goto label_17d068;
        case 0x17d06cu: goto label_17d06c;
        case 0x17d070u: goto label_17d070;
        case 0x17d074u: goto label_17d074;
        case 0x17d078u: goto label_17d078;
        case 0x17d07cu: goto label_17d07c;
        case 0x17d080u: goto label_17d080;
        case 0x17d084u: goto label_17d084;
        case 0x17d088u: goto label_17d088;
        case 0x17d08cu: goto label_17d08c;
        case 0x17d090u: goto label_17d090;
        case 0x17d094u: goto label_17d094;
        case 0x17d098u: goto label_17d098;
        case 0x17d09cu: goto label_17d09c;
        case 0x17d0a0u: goto label_17d0a0;
        case 0x17d0a4u: goto label_17d0a4;
        case 0x17d0a8u: goto label_17d0a8;
        case 0x17d0acu: goto label_17d0ac;
        case 0x17d0b0u: goto label_17d0b0;
        case 0x17d0b4u: goto label_17d0b4;
        case 0x17d0b8u: goto label_17d0b8;
        case 0x17d0bcu: goto label_17d0bc;
        case 0x17d0c0u: goto label_17d0c0;
        case 0x17d0c4u: goto label_17d0c4;
        case 0x17d0c8u: goto label_17d0c8;
        case 0x17d0ccu: goto label_17d0cc;
        case 0x17d0d0u: goto label_17d0d0;
        case 0x17d0d4u: goto label_17d0d4;
        case 0x17d0d8u: goto label_17d0d8;
        case 0x17d0dcu: goto label_17d0dc;
        case 0x17d0e0u: goto label_17d0e0;
        case 0x17d0e4u: goto label_17d0e4;
        case 0x17d0e8u: goto label_17d0e8;
        case 0x17d0ecu: goto label_17d0ec;
        case 0x17d0f0u: goto label_17d0f0;
        case 0x17d0f4u: goto label_17d0f4;
        case 0x17d0f8u: goto label_17d0f8;
        case 0x17d0fcu: goto label_17d0fc;
        case 0x17d100u: goto label_17d100;
        case 0x17d104u: goto label_17d104;
        case 0x17d108u: goto label_17d108;
        case 0x17d10cu: goto label_17d10c;
        case 0x17d110u: goto label_17d110;
        case 0x17d114u: goto label_17d114;
        case 0x17d118u: goto label_17d118;
        case 0x17d11cu: goto label_17d11c;
        case 0x17d120u: goto label_17d120;
        case 0x17d124u: goto label_17d124;
        case 0x17d128u: goto label_17d128;
        case 0x17d12cu: goto label_17d12c;
        case 0x17d130u: goto label_17d130;
        case 0x17d134u: goto label_17d134;
        case 0x17d138u: goto label_17d138;
        case 0x17d13cu: goto label_17d13c;
        case 0x17d140u: goto label_17d140;
        case 0x17d144u: goto label_17d144;
        case 0x17d148u: goto label_17d148;
        case 0x17d14cu: goto label_17d14c;
        case 0x17d150u: goto label_17d150;
        case 0x17d154u: goto label_17d154;
        case 0x17d158u: goto label_17d158;
        case 0x17d15cu: goto label_17d15c;
        case 0x17d160u: goto label_17d160;
        case 0x17d164u: goto label_17d164;
        case 0x17d168u: goto label_17d168;
        case 0x17d16cu: goto label_17d16c;
        case 0x17d170u: goto label_17d170;
        case 0x17d174u: goto label_17d174;
        case 0x17d178u: goto label_17d178;
        case 0x17d17cu: goto label_17d17c;
        case 0x17d180u: goto label_17d180;
        case 0x17d184u: goto label_17d184;
        case 0x17d188u: goto label_17d188;
        case 0x17d18cu: goto label_17d18c;
        case 0x17d190u: goto label_17d190;
        case 0x17d194u: goto label_17d194;
        case 0x17d198u: goto label_17d198;
        case 0x17d19cu: goto label_17d19c;
        case 0x17d1a0u: goto label_17d1a0;
        case 0x17d1a4u: goto label_17d1a4;
        case 0x17d1a8u: goto label_17d1a8;
        case 0x17d1acu: goto label_17d1ac;
        case 0x17d1b0u: goto label_17d1b0;
        case 0x17d1b4u: goto label_17d1b4;
        case 0x17d1b8u: goto label_17d1b8;
        case 0x17d1bcu: goto label_17d1bc;
        case 0x17d1c0u: goto label_17d1c0;
        case 0x17d1c4u: goto label_17d1c4;
        case 0x17d1c8u: goto label_17d1c8;
        case 0x17d1ccu: goto label_17d1cc;
        default: return;
    }

label_17ca00:
    // 0x17ca00: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x17ca00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
label_17ca04:
    // 0x17ca04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17ca04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17ca08:
    // 0x17ca08: 0xc066da0  jal         func_19B680
label_17ca0c:
    if (ctx->pc == 0x17CA0Cu) {
        ctx->pc = 0x17CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA08u;
        // 0x17ca0c: 0x26a50080  addiu       $a1, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CA10u;
        goto label_17ca10;
    }
    ctx->pc = 0x17CA08u;
    SET_GPR_U32(ctx, 31, 0x17CA10u);
    ctx->pc = 0x17CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA08u;
    // 0x17ca0c: 0x26a50080  addiu       $a1, $s5, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x17CA10u;
label_17ca10:
    // 0x17ca10: 0xc6a20014  lwc1        $f2, 0x14($s5)
    ctx->pc = 0x17ca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17ca14:
    // 0x17ca14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17ca14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17ca18:
    // 0x17ca18: 0x0  nop
    ctx->pc = 0x17ca18u;
    // NOP
label_17ca1c:
    // 0x17ca1c: 0x46020501  sub.s       $f20, $f0, $f2
    ctx->pc = 0x17ca1cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_17ca20:
    // 0x17ca20: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x17ca20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17ca24:
    // 0x17ca24: 0x0  nop
    ctx->pc = 0x17ca24u;
    // NOP
label_17ca28:
    // 0x17ca28: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_17ca2c:
    if (ctx->pc == 0x17CA2Cu) {
        ctx->pc = 0x17CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA28u;
        // 0x17ca2c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CA30u;
        goto label_17ca30;
    }
    ctx->pc = 0x17CA28u;
    {
        const bool branch_taken_0x17ca28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA28u;
        // 0x17ca2c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca28) {
            ctx->pc = 0x17CA4Cu;
            goto label_17ca4c;
        }
    }
    ctx->pc = 0x17CA30u;
label_17ca30:
    // 0x17ca30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17ca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17ca34:
    // 0x17ca34: 0xc066da0  jal         func_19B680
label_17ca38:
    if (ctx->pc == 0x17CA38u) {
        ctx->pc = 0x17CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA34u;
        // 0x17ca38: 0x26a50080  addiu       $a1, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CA3Cu;
        goto label_17ca3c;
    }
    ctx->pc = 0x17CA34u;
    SET_GPR_U32(ctx, 31, 0x17CA3Cu);
    ctx->pc = 0x17CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA34u;
    // 0x17ca38: 0x26a50080  addiu       $a1, $s5, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x17CA3Cu;
label_17ca3c:
    // 0x17ca3c: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x17ca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17ca40:
    // 0x17ca40: 0x10000003  b           . + 4 + (0x3 << 2)
label_17ca44:
    if (ctx->pc == 0x17CA44u) {
        ctx->pc = 0x17CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA40u;
        // 0x17ca44: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CA48u;
        goto label_17ca48;
    }
    ctx->pc = 0x17CA40u;
    {
        const bool branch_taken_0x17ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA40u;
        // 0x17ca44: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca40) {
            ctx->pc = 0x17CA50u;
            goto label_17ca50;
        }
    }
    ctx->pc = 0x17CA48u;
label_17ca48:
    // 0x17ca48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17ca4c:
    // 0x17ca4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17ca4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17ca50:
    // 0x17ca50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ca50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ca54:
    // 0x17ca54: 0x0  nop
    ctx->pc = 0x17ca54u;
    // NOP
label_17ca58:
    // 0x17ca58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17ca58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17ca5c:
    // 0x17ca5c: 0x0  nop
    ctx->pc = 0x17ca5cu;
    // NOP
label_17ca60:
    // 0x17ca60: 0x45010061  bc1t        . + 4 + (0x61 << 2)
label_17ca64:
    if (ctx->pc == 0x17CA64u) {
        ctx->pc = 0x17CA68u;
        goto label_17ca68;
    }
    ctx->pc = 0x17CA60u;
    {
        const bool branch_taken_0x17ca60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ca60) {
            ctx->pc = 0x17CBE8u;
            goto label_17cbe8;
        }
    }
    ctx->pc = 0x17CA68u;
label_17ca68:
    // 0x17ca68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17ca68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17ca6c:
    // 0x17ca6c: 0x0  nop
    ctx->pc = 0x17ca6cu;
    // NOP
label_17ca70:
    // 0x17ca70: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
label_17ca74:
    if (ctx->pc == 0x17CA74u) {
        ctx->pc = 0x17CA78u;
        goto label_17ca78;
    }
    ctx->pc = 0x17CA70u;
    {
        const bool branch_taken_0x17ca70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ca70) {
            ctx->pc = 0x17CBE8u;
            goto label_17cbe8;
        }
    }
    ctx->pc = 0x17CA78u;
label_17ca78:
    // 0x17ca78: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x17ca78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_17ca7c:
    // 0x17ca7c: 0x26a40040  addiu       $a0, $s5, 0x40
    ctx->pc = 0x17ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_17ca80:
    // 0x17ca80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17ca80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17ca84:
    // 0x17ca84: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x17ca84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17ca88:
    // 0x17ca88: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x17ca88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_17ca8c:
    // 0x17ca8c: 0x0  nop
    ctx->pc = 0x17ca8cu;
    // NOP
label_17ca90:
    // 0x17ca90: 0x0  nop
    ctx->pc = 0x17ca90u;
    // NOP
label_17ca94:
    // 0x17ca94: 0xc067054  jal         func_19C150
label_17ca98:
    if (ctx->pc == 0x17CA98u) {
        ctx->pc = 0x17CA9Cu;
        goto label_17ca9c;
    }
    ctx->pc = 0x17CA94u;
    SET_GPR_U32(ctx, 31, 0x17CA9Cu);
    ctx->pc = 0x19C150u;
    { ctx->pc = 0x19c150; return; }
    ctx->pc = 0x17CA9Cu;
label_17ca9c:
    // 0x17ca9c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x17ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_17caa0:
    // 0x17caa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_17caa4:
    // 0x17caa4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17caa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_17caa8:
    // 0x17caa8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_17caac:
    if (ctx->pc == 0x17CAACu) {
        ctx->pc = 0x17CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAA8u;
        // 0x17caac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CAB0u;
        goto label_17cab0;
    }
    ctx->pc = 0x17CAA8u;
    {
        const bool branch_taken_0x17caa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAA8u;
        // 0x17caac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17caa8) {
            ctx->pc = 0x17CB20u;
            goto label_17cb20;
        }
    }
    ctx->pc = 0x17CAB0u;
label_17cab0:
    // 0x17cab0: 0xc6a10050  lwc1        $f1, 0x50($s5)
    ctx->pc = 0x17cab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cab4:
    // 0x17cab4: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x17cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cab8:
    // 0x17cab8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17cab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cabc:
    // 0x17cabc: 0x0  nop
    ctx->pc = 0x17cabcu;
    // NOP
label_17cac0:
    // 0x17cac0: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_17cac4:
    if (ctx->pc == 0x17CAC4u) {
        ctx->pc = 0x17CAC8u;
        goto label_17cac8;
    }
    ctx->pc = 0x17CAC0u;
    {
        const bool branch_taken_0x17cac0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cac0) {
            ctx->pc = 0x17CBA8u;
            goto label_17cba8;
        }
    }
    ctx->pc = 0x17CAC8u;
label_17cac8:
    // 0x17cac8: 0xc6a10060  lwc1        $f1, 0x60($s5)
    ctx->pc = 0x17cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cacc:
    // 0x17cacc: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x17caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cad0:
    // 0x17cad0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17cad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cad4:
    // 0x17cad4: 0x0  nop
    ctx->pc = 0x17cad4u;
    // NOP
label_17cad8:
    // 0x17cad8: 0x45010033  bc1t        . + 4 + (0x33 << 2)
label_17cadc:
    if (ctx->pc == 0x17CADCu) {
        ctx->pc = 0x17CAE0u;
        goto label_17cae0;
    }
    ctx->pc = 0x17CAD8u;
    {
        const bool branch_taken_0x17cad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cad8) {
            ctx->pc = 0x17CBA8u;
            goto label_17cba8;
        }
    }
    ctx->pc = 0x17CAE0u;
label_17cae0:
    // 0x17cae0: 0xc6a10058  lwc1        $f1, 0x58($s5)
    ctx->pc = 0x17cae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cae4:
    // 0x17cae4: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x17cae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cae8:
    // 0x17cae8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17cae8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17caec:
    // 0x17caec: 0x0  nop
    ctx->pc = 0x17caecu;
    // NOP
label_17caf0:
    // 0x17caf0: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_17caf4:
    if (ctx->pc == 0x17CAF4u) {
        ctx->pc = 0x17CAF8u;
        goto label_17caf8;
    }
    ctx->pc = 0x17CAF0u;
    {
        const bool branch_taken_0x17caf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17caf0) {
            ctx->pc = 0x17CBA8u;
            goto label_17cba8;
        }
    }
    ctx->pc = 0x17CAF8u;
label_17caf8:
    // 0x17caf8: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x17caf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cafc:
    // 0x17cafc: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x17cafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cb00:
    // 0x17cb00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17cb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cb04:
    // 0x17cb04: 0x0  nop
    ctx->pc = 0x17cb04u;
    // NOP
label_17cb08:
    // 0x17cb08: 0x45010027  bc1t        . + 4 + (0x27 << 2)
label_17cb0c:
    if (ctx->pc == 0x17CB0Cu) {
        ctx->pc = 0x17CB10u;
        goto label_17cb10;
    }
    ctx->pc = 0x17CB08u;
    {
        const bool branch_taken_0x17cb08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cb08) {
            ctx->pc = 0x17CBA8u;
            goto label_17cba8;
        }
    }
    ctx->pc = 0x17CB10u;
label_17cb10:
    // 0x17cb10: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x17cb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cb14:
    // 0x17cb14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17cb18:
    // 0x17cb18: 0x10000023  b           . + 4 + (0x23 << 2)
label_17cb1c:
    if (ctx->pc == 0x17CB1Cu) {
        ctx->pc = 0x17CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB18u;
        // 0x17cb1c: 0xe6a00044  swc1        $f0, 0x44($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CB20u;
        goto label_17cb20;
    }
    ctx->pc = 0x17CB18u;
    {
        const bool branch_taken_0x17cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB18u;
        // 0x17cb1c: 0xe6a00044  swc1        $f0, 0x44($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb18) {
            ctx->pc = 0x17CBA8u;
            goto label_17cba8;
        }
    }
    ctx->pc = 0x17CB20u;
label_17cb20:
    // 0x17cb20: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x17cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cb24:
    // 0x17cb24: 0xc6a10044  lwc1        $f1, 0x44($s5)
    ctx->pc = 0x17cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cb28:
    // 0x17cb28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17cb28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cb2c:
    // 0x17cb2c: 0x0  nop
    ctx->pc = 0x17cb2cu;
    // NOP
label_17cb30:
    // 0x17cb30: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_17cb34:
    if (ctx->pc == 0x17CB34u) {
        ctx->pc = 0x17CB38u;
        goto label_17cb38;
    }
    ctx->pc = 0x17CB30u;
    {
        const bool branch_taken_0x17cb30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cb30) {
            ctx->pc = 0x17CBA8u;
            goto label_17cba8;
        }
    }
    ctx->pc = 0x17CB38u;
label_17cb38:
    // 0x17cb38: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x17cb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cb3c:
    // 0x17cb3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17cb3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cb40:
    // 0x17cb40: 0x0  nop
    ctx->pc = 0x17cb40u;
    // NOP
label_17cb44:
    // 0x17cb44: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_17cb48:
    if (ctx->pc == 0x17CB48u) {
        ctx->pc = 0x17CB4Cu;
        goto label_17cb4c;
    }
    ctx->pc = 0x17CB44u;
    {
        const bool branch_taken_0x17cb44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cb44) {
            ctx->pc = 0x17CBA8u;
            goto label_17cba8;
        }
    }
    ctx->pc = 0x17CB4Cu;
label_17cb4c:
    // 0x17cb4c: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x17cb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cb50:
    // 0x17cb50: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x17cb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cb54:
    // 0x17cb54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17cb54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cb58:
    // 0x17cb58: 0x0  nop
    ctx->pc = 0x17cb58u;
    // NOP
label_17cb5c:
    // 0x17cb5c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_17cb60:
    if (ctx->pc == 0x17CB60u) {
        ctx->pc = 0x17CB64u;
        goto label_17cb64;
    }
    ctx->pc = 0x17CB5Cu;
    {
        const bool branch_taken_0x17cb5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cb5c) {
            ctx->pc = 0x17CBA8u;
            goto label_17cba8;
        }
    }
    ctx->pc = 0x17CB64u;
label_17cb64:
    // 0x17cb64: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x17cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cb68:
    // 0x17cb68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17cb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cb6c:
    // 0x17cb6c: 0x0  nop
    ctx->pc = 0x17cb6cu;
    // NOP
label_17cb70:
    // 0x17cb70: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_17cb74:
    if (ctx->pc == 0x17CB74u) {
        ctx->pc = 0x17CB78u;
        goto label_17cb78;
    }
    ctx->pc = 0x17CB70u;
    {
        const bool branch_taken_0x17cb70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cb70) {
            ctx->pc = 0x17CBA8u;
            goto label_17cba8;
        }
    }
    ctx->pc = 0x17CB78u;
label_17cb78:
    // 0x17cb78: 0xc6a00058  lwc1        $f0, 0x58($s5)
    ctx->pc = 0x17cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cb7c:
    // 0x17cb7c: 0xc6a10048  lwc1        $f1, 0x48($s5)
    ctx->pc = 0x17cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cb80:
    // 0x17cb80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17cb80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cb84:
    // 0x17cb84: 0x0  nop
    ctx->pc = 0x17cb84u;
    // NOP
label_17cb88:
    // 0x17cb88: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_17cb8c:
    if (ctx->pc == 0x17CB8Cu) {
        ctx->pc = 0x17CB90u;
        goto label_17cb90;
    }
    ctx->pc = 0x17CB88u;
    {
        const bool branch_taken_0x17cb88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cb88) {
            ctx->pc = 0x17CBA8u;
            goto label_17cba8;
        }
    }
    ctx->pc = 0x17CB90u;
label_17cb90:
    // 0x17cb90: 0xc6a00068  lwc1        $f0, 0x68($s5)
    ctx->pc = 0x17cb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cb94:
    // 0x17cb94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17cb94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cb98:
    // 0x17cb98: 0x0  nop
    ctx->pc = 0x17cb98u;
    // NOP
label_17cb9c:
    // 0x17cb9c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17cba0:
    if (ctx->pc == 0x17CBA0u) {
        ctx->pc = 0x17CBA4u;
        goto label_17cba4;
    }
    ctx->pc = 0x17CB9Cu;
    {
        const bool branch_taken_0x17cb9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cb9c) {
            ctx->pc = 0x17CBA8u;
            goto label_17cba8;
        }
    }
    ctx->pc = 0x17CBA4u;
label_17cba4:
    // 0x17cba4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17cba8:
    // 0x17cba8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_17cbac:
    if (ctx->pc == 0x17CBACu) {
        ctx->pc = 0x17CBB0u;
        goto label_17cbb0;
    }
    ctx->pc = 0x17CBA8u;
    {
        const bool branch_taken_0x17cba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cba8) {
            ctx->pc = 0x17CBE8u;
            goto label_17cbe8;
        }
    }
    ctx->pc = 0x17CBB0u;
label_17cbb0:
    // 0x17cbb0: 0xc6a30040  lwc1        $f3, 0x40($s5)
    ctx->pc = 0x17cbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17cbb4:
    // 0x17cbb4: 0xc6a20050  lwc1        $f2, 0x50($s5)
    ctx->pc = 0x17cbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17cbb8:
    // 0x17cbb8: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x17cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cbbc:
    // 0x17cbbc: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x17cbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cbc0:
    // 0x17cbc0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x17cbc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_17cbc4:
    // 0x17cbc4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17cbc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17cbc8:
    // 0x17cbc8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17cbc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cbcc:
    // 0x17cbcc: 0x0  nop
    ctx->pc = 0x17cbccu;
    // NOP
label_17cbd0:
    // 0x17cbd0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_17cbd4:
    if (ctx->pc == 0x17CBD4u) {
        ctx->pc = 0x17CBD8u;
        goto label_17cbd8;
    }
    ctx->pc = 0x17CBD0u;
    {
        const bool branch_taken_0x17cbd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cbd0) {
            ctx->pc = 0x17CBE8u;
            goto label_17cbe8;
        }
    }
    ctx->pc = 0x17CBD8u;
label_17cbd8:
    // 0x17cbd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17cbdc:
    // 0x17cbdc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17cbdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17cbe0:
    // 0x17cbe0: 0x10000004  b           . + 4 + (0x4 << 2)
label_17cbe4:
    if (ctx->pc == 0x17CBE4u) {
        ctx->pc = 0x17CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBE0u;
        // 0x17cbe4: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CBE8u;
        goto label_17cbe8;
    }
    ctx->pc = 0x17CBE0u;
    {
        const bool branch_taken_0x17cbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBE0u;
        // 0x17cbe4: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbe0) {
            ctx->pc = 0x17CBF4u;
            goto label_17cbf4;
        }
    }
    ctx->pc = 0x17CBE8u;
label_17cbe8:
    // 0x17cbe8: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x17cbe8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_17cbec:
    // 0x17cbec: 0x16a0fed8  bnez        $s5, . + 4 + (-0x128 << 2)
label_17cbf0:
    if (ctx->pc == 0x17CBF0u) {
        ctx->pc = 0x17CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBECu;
        // 0x17cbf0: 0x3c0343fa  lui         $v1, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CBF4u;
        goto label_17cbf4;
    }
    ctx->pc = 0x17CBECu;
    {
        const bool branch_taken_0x17cbec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBECu;
        // 0x17cbf0: 0x3c0343fa  lui         $v1, 0x43FA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbec) {
            ctx->pc = 0x17C750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17c750; return; }
        }
    }
    ctx->pc = 0x17CBF4u;
label_17cbf4:
    // 0x17cbf4: 0x0  nop
    ctx->pc = 0x17cbf4u;
    // NOP
label_17cbf8:
    // 0x17cbf8: 0x10a80a  movz        $s5, $zero, $s0
    ctx->pc = 0x17cbf8u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_17cbfc:
    // 0x17cbfc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x17cbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17cc00:
    // 0x17cc00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17cc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17cc04:
    // 0x17cc04: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17cc04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17cc08:
    // 0x17cc08: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17cc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17cc0c:
    // 0x17cc0c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17cc0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17cc10:
    // 0x17cc10: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17cc10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17cc14:
    // 0x17cc14: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17cc14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17cc18:
    // 0x17cc18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17cc18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17cc1c:
    // 0x17cc1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17cc1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17cc20:
    // 0x17cc20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17cc20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17cc24:
    // 0x17cc24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17cc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17cc28:
    // 0x17cc28: 0x3e00008  jr          $ra
label_17cc2c:
    if (ctx->pc == 0x17CC2Cu) {
        ctx->pc = 0x17CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC28u;
        // 0x17cc2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CC30u;
        goto label_17cc30;
    }
    ctx->pc = 0x17CC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC28u;
        // 0x17cc2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CC30u;
label_17cc30:
    // 0x17cc30: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x17cc30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_17cc34:
    // 0x17cc34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17cc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cc38:
    // 0x17cc38: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x17cc38u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17cc3c:
    // 0x17cc3c: 0x3c0c7000  lui         $t4, 0x7000
    ctx->pc = 0x17cc3cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)28672 << 16));
label_17cc40:
    // 0x17cc40: 0x1420006b  bnez        $at, . + 4 + (0x6B << 2)
label_17cc44:
    if (ctx->pc == 0x17CC44u) {
        ctx->pc = 0x17CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC40u;
        // 0x17cc44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CC48u;
        goto label_17cc48;
    }
    ctx->pc = 0x17CC40u;
    {
        const bool branch_taken_0x17cc40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC40u;
        // 0x17cc44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc40) {
            ctx->pc = 0x17CDF0u;
            goto label_17cdf0;
        }
    }
    ctx->pc = 0x17CC48u;
label_17cc48:
    // 0x17cc48: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x17cc48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_17cc4c:
    // 0x17cc4c: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x17cc4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_17cc50:
    // 0x17cc50: 0x80082a  slt         $at, $a0, $zero
    ctx->pc = 0x17cc50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_17cc54:
    // 0x17cc54: 0x14200062  bnez        $at, . + 4 + (0x62 << 2)
label_17cc58:
    if (ctx->pc == 0x17CC58u) {
        ctx->pc = 0x17CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC54u;
        // 0x17cc58: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CC5Cu;
        goto label_17cc5c;
    }
    ctx->pc = 0x17CC54u;
    {
        const bool branch_taken_0x17cc54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC54u;
        // 0x17cc58: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc54) {
            ctx->pc = 0x17CDE0u;
            goto label_17cde0;
        }
    }
    ctx->pc = 0x17CC5Cu;
label_17cc5c:
    // 0x17cc5c: 0x0  nop
    ctx->pc = 0x17cc5cu;
    // NOP
label_17cc60:
    // 0x17cc60: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x17cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_17cc64:
    // 0x17cc64: 0x10690059  beq         $v1, $t1, . + 4 + (0x59 << 2)
label_17cc68:
    if (ctx->pc == 0x17CC68u) {
        ctx->pc = 0x17CC6Cu;
        goto label_17cc6c;
    }
    ctx->pc = 0x17CC64u;
    {
        const bool branch_taken_0x17cc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x17cc64) {
            ctx->pc = 0x17CDCCu;
            goto label_17cdcc;
        }
    }
    ctx->pc = 0x17CC6Cu;
label_17cc6c:
    // 0x17cc6c: 0x8d830020  lw          $v1, 0x20($t4)
    ctx->pc = 0x17cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
label_17cc70:
    // 0x17cc70: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x17cc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cc74:
    // 0x17cc74: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x17cc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
label_17cc78:
    // 0x17cc78: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x17cc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_17cc7c:
    // 0x17cc7c: 0xc5810054  lwc1        $f1, 0x54($t4)
    ctx->pc = 0x17cc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cc80:
    // 0x17cc80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17cc80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cc84:
    // 0x17cc84: 0x0  nop
    ctx->pc = 0x17cc84u;
    // NOP
label_17cc88:
    // 0x17cc88: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17cc8c:
    if (ctx->pc == 0x17CC8Cu) {
        ctx->pc = 0x17CC90u;
        goto label_17cc90;
    }
    ctx->pc = 0x17CC88u;
    {
        const bool branch_taken_0x17cc88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cc88) {
            ctx->pc = 0x17CC94u;
            goto label_17cc94;
        }
    }
    ctx->pc = 0x17CC90u;
label_17cc90:
    // 0x17cc90: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x17cc90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_17cc94:
    // 0x17cc94: 0x0  nop
    ctx->pc = 0x17cc94u;
    // NOP
label_17cc98:
    // 0x17cc98: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x17cc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cc9c:
    // 0x17cc9c: 0xc5810054  lwc1        $f1, 0x54($t4)
    ctx->pc = 0x17cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cca0:
    // 0x17cca0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17cca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cca4:
    // 0x17cca4: 0x0  nop
    ctx->pc = 0x17cca4u;
    // NOP
label_17cca8:
    // 0x17cca8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17ccac:
    if (ctx->pc == 0x17CCACu) {
        ctx->pc = 0x17CCB0u;
        goto label_17ccb0;
    }
    ctx->pc = 0x17CCA8u;
    {
        const bool branch_taken_0x17cca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cca8) {
            ctx->pc = 0x17CCB4u;
            goto label_17ccb4;
        }
    }
    ctx->pc = 0x17CCB0u;
label_17ccb0:
    // 0x17ccb0: 0xe581000c  swc1        $f1, 0xC($t4)
    ctx->pc = 0x17ccb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
label_17ccb4:
    // 0x17ccb4: 0x0  nop
    ctx->pc = 0x17ccb4u;
    // NOP
label_17ccb8:
    // 0x17ccb8: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x17ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17ccbc:
    // 0x17ccbc: 0xc5810064  lwc1        $f1, 0x64($t4)
    ctx->pc = 0x17ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17ccc0:
    // 0x17ccc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17ccc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17ccc4:
    // 0x17ccc4: 0x0  nop
    ctx->pc = 0x17ccc4u;
    // NOP
label_17ccc8:
    // 0x17ccc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17cccc:
    if (ctx->pc == 0x17CCCCu) {
        ctx->pc = 0x17CCD0u;
        goto label_17ccd0;
    }
    ctx->pc = 0x17CCC8u;
    {
        const bool branch_taken_0x17ccc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ccc8) {
            ctx->pc = 0x17CCD4u;
            goto label_17ccd4;
        }
    }
    ctx->pc = 0x17CCD0u;
label_17ccd0:
    // 0x17ccd0: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x17ccd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_17ccd4:
    // 0x17ccd4: 0x0  nop
    ctx->pc = 0x17ccd4u;
    // NOP
label_17ccd8:
    // 0x17ccd8: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x17ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17ccdc:
    // 0x17ccdc: 0xc5810064  lwc1        $f1, 0x64($t4)
    ctx->pc = 0x17ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cce0:
    // 0x17cce0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17cce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cce4:
    // 0x17cce4: 0x0  nop
    ctx->pc = 0x17cce4u;
    // NOP
label_17cce8:
    // 0x17cce8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17ccec:
    if (ctx->pc == 0x17CCECu) {
        ctx->pc = 0x17CCF0u;
        goto label_17ccf0;
    }
    ctx->pc = 0x17CCE8u;
    {
        const bool branch_taken_0x17cce8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cce8) {
            ctx->pc = 0x17CCF4u;
            goto label_17ccf4;
        }
    }
    ctx->pc = 0x17CCF0u;
label_17ccf0:
    // 0x17ccf0: 0xe581000c  swc1        $f1, 0xC($t4)
    ctx->pc = 0x17ccf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
label_17ccf4:
    // 0x17ccf4: 0x0  nop
    ctx->pc = 0x17ccf4u;
    // NOP
label_17ccf8:
    // 0x17ccf8: 0x8d830024  lw          $v1, 0x24($t4)
    ctx->pc = 0x17ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 36)));
label_17ccfc:
    // 0x17ccfc: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x17ccfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cd00:
    // 0x17cd00: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cd04:
    // 0x17cd04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17cd04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cd08:
    // 0x17cd08: 0x0  nop
    ctx->pc = 0x17cd08u;
    // NOP
label_17cd0c:
    // 0x17cd0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17cd10:
    if (ctx->pc == 0x17CD10u) {
        ctx->pc = 0x17CD14u;
        goto label_17cd14;
    }
    ctx->pc = 0x17CD0Cu;
    {
        const bool branch_taken_0x17cd0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cd0c) {
            ctx->pc = 0x17CD18u;
            goto label_17cd18;
        }
    }
    ctx->pc = 0x17CD14u;
label_17cd14:
    // 0x17cd14: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x17cd14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_17cd18:
    // 0x17cd18: 0x8d830024  lw          $v1, 0x24($t4)
    ctx->pc = 0x17cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 36)));
label_17cd1c:
    // 0x17cd1c: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x17cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cd20:
    // 0x17cd20: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cd24:
    // 0x17cd24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17cd24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cd28:
    // 0x17cd28: 0x0  nop
    ctx->pc = 0x17cd28u;
    // NOP
label_17cd2c:
    // 0x17cd2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17cd30:
    if (ctx->pc == 0x17CD30u) {
        ctx->pc = 0x17CD34u;
        goto label_17cd34;
    }
    ctx->pc = 0x17CD2Cu;
    {
        const bool branch_taken_0x17cd2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cd2c) {
            ctx->pc = 0x17CD38u;
            goto label_17cd38;
        }
    }
    ctx->pc = 0x17CD34u;
label_17cd34:
    // 0x17cd34: 0xe581000c  swc1        $f1, 0xC($t4)
    ctx->pc = 0x17cd34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
label_17cd38:
    // 0x17cd38: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x17cd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cd3c:
    // 0x17cd3c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x17cd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17cd40:
    // 0x17cd40: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x17cd40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cd44:
    // 0x17cd44: 0x0  nop
    ctx->pc = 0x17cd44u;
    // NOP
label_17cd48:
    // 0x17cd48: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_17cd4c:
    if (ctx->pc == 0x17CD4Cu) {
        ctx->pc = 0x17CD50u;
        goto label_17cd50;
    }
    ctx->pc = 0x17CD48u;
    {
        const bool branch_taken_0x17cd48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cd48) {
            ctx->pc = 0x17CD64u;
            goto label_17cd64;
        }
    }
    ctx->pc = 0x17CD50u;
label_17cd50:
    // 0x17cd50: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x17cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cd54:
    // 0x17cd54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17cd54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cd58:
    // 0x17cd58: 0x0  nop
    ctx->pc = 0x17cd58u;
    // NOP
label_17cd5c:
    // 0x17cd5c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_17cd60:
    if (ctx->pc == 0x17CD60u) {
        ctx->pc = 0x17CD64u;
        goto label_17cd64;
    }
    ctx->pc = 0x17CD5Cu;
    {
        const bool branch_taken_0x17cd5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cd5c) {
            ctx->pc = 0x17CDCCu;
            goto label_17cdcc;
        }
    }
    ctx->pc = 0x17CD64u;
label_17cd64:
    // 0x17cd64: 0x0  nop
    ctx->pc = 0x17cd64u;
    // NOP
label_17cd68:
    // 0x17cd68: 0xc5830008  lwc1        $f3, 0x8($t4)
    ctx->pc = 0x17cd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17cd6c:
    // 0x17cd6c: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x17cd6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cd70:
    // 0x17cd70: 0x0  nop
    ctx->pc = 0x17cd70u;
    // NOP
label_17cd74:
    // 0x17cd74: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_17cd78:
    if (ctx->pc == 0x17CD78u) {
        ctx->pc = 0x17CD7Cu;
        goto label_17cd7c;
    }
    ctx->pc = 0x17CD74u;
    {
        const bool branch_taken_0x17cd74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cd74) {
            ctx->pc = 0x17CD90u;
            goto label_17cd90;
        }
    }
    ctx->pc = 0x17CD7Cu;
label_17cd7c:
    // 0x17cd7c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x17cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cd80:
    // 0x17cd80: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x17cd80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cd84:
    // 0x17cd84: 0x0  nop
    ctx->pc = 0x17cd84u;
    // NOP
label_17cd88:
    // 0x17cd88: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_17cd8c:
    if (ctx->pc == 0x17CD8Cu) {
        ctx->pc = 0x17CD90u;
        goto label_17cd90;
    }
    ctx->pc = 0x17CD88u;
    {
        const bool branch_taken_0x17cd88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cd88) {
            ctx->pc = 0x17CDCCu;
            goto label_17cdcc;
        }
    }
    ctx->pc = 0x17CD90u;
label_17cd90:
    // 0x17cd90: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x17cd90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cd94:
    // 0x17cd94: 0x0  nop
    ctx->pc = 0x17cd94u;
    // NOP
label_17cd98:
    // 0x17cd98: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_17cd9c:
    if (ctx->pc == 0x17CD9Cu) {
        ctx->pc = 0x17CDA0u;
        goto label_17cda0;
    }
    ctx->pc = 0x17CD98u;
    {
        const bool branch_taken_0x17cd98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cd98) {
            ctx->pc = 0x17CDACu;
            goto label_17cdac;
        }
    }
    ctx->pc = 0x17CDA0u;
label_17cda0:
    // 0x17cda0: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x17cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_17cda4:
    // 0x17cda4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x17cda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_17cda8:
    // 0x17cda8: 0xad830004  sw          $v1, 0x4($t4)
    ctx->pc = 0x17cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
label_17cdac:
    // 0x17cdac: 0x0  nop
    ctx->pc = 0x17cdacu;
    // NOP
label_17cdb0:
    // 0x17cdb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17cdb4:
    if (ctx->pc == 0x17CDB4u) {
        ctx->pc = 0x17CDB8u;
        goto label_17cdb8;
    }
    ctx->pc = 0x17CDB0u;
    {
        const bool branch_taken_0x17cdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cdb0) {
            ctx->pc = 0x17CDC0u;
            goto label_17cdc0;
        }
    }
    ctx->pc = 0x17CDB8u;
label_17cdb8:
    // 0x17cdb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_17cdbc:
    if (ctx->pc == 0x17CDBCu) {
        ctx->pc = 0x17CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDB8u;
        // 0x17cdbc: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CDC0u;
        goto label_17cdc0;
    }
    ctx->pc = 0x17CDB8u;
    {
        const bool branch_taken_0x17cdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDB8u;
        // 0x17cdbc: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdb8) {
            ctx->pc = 0x17CDC4u;
            goto label_17cdc4;
        }
    }
    ctx->pc = 0x17CDC0u;
label_17cdc0:
    // 0x17cdc0: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x17cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
label_17cdc4:
    // 0x17cdc4: 0x0  nop
    ctx->pc = 0x17cdc4u;
    // NOP
label_17cdc8:
    // 0x17cdc8: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x17cdc8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_17cdcc:
    // 0x17cdcc: 0x0  nop
    ctx->pc = 0x17cdccu;
    // NOP
label_17cdd0:
    // 0x17cdd0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x17cdd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_17cdd4:
    // 0x17cdd4: 0x8a082a  slt         $at, $a0, $t2
    ctx->pc = 0x17cdd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_17cdd8:
    // 0x17cdd8: 0x1020ffa0  beqz        $at, . + 4 + (-0x60 << 2)
label_17cddc:
    if (ctx->pc == 0x17CDDCu) {
        ctx->pc = 0x17CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDD8u;
        // 0x17cddc: 0x258c0090  addiu       $t4, $t4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CDE0u;
        goto label_17cde0;
    }
    ctx->pc = 0x17CDD8u;
    {
        const bool branch_taken_0x17cdd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDD8u;
        // 0x17cddc: 0x258c0090  addiu       $t4, $t4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdd8) {
            ctx->pc = 0x17CC5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17CDE0u;
label_17cde0:
    // 0x17cde0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x17cde0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_17cde4:
    // 0x17cde4: 0xab082a  slt         $at, $a1, $t3
    ctx->pc = 0x17cde4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_17cde8:
    // 0x17cde8: 0x1020ff9a  beqz        $at, . + 4 + (-0x66 << 2)
label_17cdec:
    if (ctx->pc == 0x17CDECu) {
        ctx->pc = 0x17CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDE8u;
        // 0x17cdec: 0x80082a  slt         $at, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CDF0u;
        goto label_17cdf0;
    }
    ctx->pc = 0x17CDE8u;
    {
        const bool branch_taken_0x17cde8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDE8u;
        // 0x17cdec: 0x80082a  slt         $at, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cde8) {
            ctx->pc = 0x17CC54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17cc54;
        }
    }
    ctx->pc = 0x17CDF0u;
label_17cdf0:
    // 0x17cdf0: 0x11a00002  beqz        $t5, . + 4 + (0x2 << 2)
label_17cdf4:
    if (ctx->pc == 0x17CDF4u) {
        ctx->pc = 0x17CDF8u;
        goto label_17cdf8;
    }
    ctx->pc = 0x17CDF0u;
    {
        const bool branch_taken_0x17cdf0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cdf0) {
            ctx->pc = 0x17CDFCu;
            goto label_17cdfc;
        }
    }
    ctx->pc = 0x17CDF8u;
label_17cdf8:
    // 0x17cdf8: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x17cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
label_17cdfc:
    // 0x17cdfc: 0x3e00008  jr          $ra
label_17ce00:
    if (ctx->pc == 0x17CE00u) {
        ctx->pc = 0x17CE04u;
        goto label_17ce04;
    }
    ctx->pc = 0x17CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CE04u;
label_17ce04:
    // 0x17ce04: 0x0  nop
    ctx->pc = 0x17ce04u;
    // NOP
label_17ce08:
    // 0x17ce08: 0x0  nop
    ctx->pc = 0x17ce08u;
    // NOP
label_17ce0c:
    // 0x17ce0c: 0x0  nop
    ctx->pc = 0x17ce0cu;
    // NOP
label_17ce10:
    // 0x17ce10: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x17ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17ce14:
    // 0x17ce14: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x17ce14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_17ce18:
    // 0x17ce18: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x17ce18u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
label_17ce1c:
    // 0x17ce1c: 0x14200044  bnez        $at, . + 4 + (0x44 << 2)
label_17ce20:
    if (ctx->pc == 0x17CE20u) {
        ctx->pc = 0x17CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE1Cu;
        // 0x17ce20: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CE24u;
        goto label_17ce24;
    }
    ctx->pc = 0x17CE1Cu;
    {
        const bool branch_taken_0x17ce1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE1Cu;
        // 0x17ce20: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce1c) {
            ctx->pc = 0x17CF30u;
            goto label_17cf30;
        }
    }
    ctx->pc = 0x17CE24u;
label_17ce24:
    // 0x17ce24: 0x3c0c43fa  lui         $t4, 0x43FA
    ctx->pc = 0x17ce24u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17402 << 16));
label_17ce28:
    // 0x17ce28: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17ce28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_17ce2c:
    // 0x17ce2c: 0x448c2800  mtc1        $t4, $f5
    ctx->pc = 0x17ce2cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_17ce30:
    // 0x17ce30: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x17ce30u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
label_17ce34:
    // 0x17ce34: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x17ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_17ce38:
    // 0x17ce38: 0x80082a  slt         $at, $a0, $zero
    ctx->pc = 0x17ce38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_17ce3c:
    // 0x17ce3c: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x17ce3cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17ce40:
    // 0x17ce40: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
label_17ce44:
    if (ctx->pc == 0x17CE44u) {
        ctx->pc = 0x17CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE40u;
        // 0x17ce44: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CE48u;
        goto label_17ce48;
    }
    ctx->pc = 0x17CE40u;
    {
        const bool branch_taken_0x17ce40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE40u;
        // 0x17ce44: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce40) {
            ctx->pc = 0x17CEF4u;
            goto label_17cef4;
        }
    }
    ctx->pc = 0x17CE48u;
label_17ce48:
    // 0x17ce48: 0x46032840  add.s       $f1, $f5, $f3
    ctx->pc = 0x17ce48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_17ce4c:
    // 0x17ce4c: 0x0  nop
    ctx->pc = 0x17ce4cu;
    // NOP
label_17ce50:
    // 0x17ce50: 0xe5640050  swc1        $f4, 0x50($t3)
    ctx->pc = 0x17ce50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 80), bits); }
label_17ce54:
    // 0x17ce54: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x17ce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17ce58:
    // 0x17ce58: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x17ce58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_17ce5c:
    // 0x17ce5c: 0xe5620054  swc1        $f2, 0x54($t3)
    ctx->pc = 0x17ce5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 84), bits); }
label_17ce60:
    // 0x17ce60: 0xe5630058  swc1        $f3, 0x58($t3)
    ctx->pc = 0x17ce60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 88), bits); }
label_17ce64:
    // 0x17ce64: 0xad6a005c  sw          $t2, 0x5C($t3)
    ctx->pc = 0x17ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 92), GPR_U32(ctx, 10));
label_17ce68:
    // 0x17ce68: 0xad6e0020  sw          $t6, 0x20($t3)
    ctx->pc = 0x17ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 14));
label_17ce6c:
    // 0x17ce6c: 0x8f8f8448  lw          $t7, -0x7BB8($gp)
    ctx->pc = 0x17ce6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17ce70:
    // 0x17ce70: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x17ce70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_17ce74:
    // 0x17ce74: 0x25f80001  addiu       $t8, $t7, 0x1
    ctx->pc = 0x17ce74u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_17ce78:
    // 0x17ce78: 0x187840  sll         $t7, $t8, 1
    ctx->pc = 0x17ce78u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
label_17ce7c:
    // 0x17ce7c: 0x1f87821  addu        $t7, $t7, $t8
    ctx->pc = 0x17ce7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_17ce80:
    // 0x17ce80: 0xf78c0  sll         $t7, $t7, 3
    ctx->pc = 0x17ce80u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
label_17ce84:
    // 0x17ce84: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x17ce84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_17ce88:
    // 0x17ce88: 0xad6f0024  sw          $t7, 0x24($t3)
    ctx->pc = 0x17ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 15));
label_17ce8c:
    // 0x17ce8c: 0xe5600060  swc1        $f0, 0x60($t3)
    ctx->pc = 0x17ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 96), bits); }
label_17ce90:
    // 0x17ce90: 0x8d6f0024  lw          $t7, 0x24($t3)
    ctx->pc = 0x17ce90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
label_17ce94:
    // 0x17ce94: 0xc5e00018  lwc1        $f0, 0x18($t7)
    ctx->pc = 0x17ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17ce98:
    // 0x17ce98: 0xe5600064  swc1        $f0, 0x64($t3)
    ctx->pc = 0x17ce98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 100), bits); }
label_17ce9c:
    // 0x17ce9c: 0xe5610068  swc1        $f1, 0x68($t3)
    ctx->pc = 0x17ce9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 104), bits); }
label_17cea0:
    // 0x17cea0: 0xad6a006c  sw          $t2, 0x6C($t3)
    ctx->pc = 0x17cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 108), GPR_U32(ctx, 10));
label_17cea4:
    // 0x17cea4: 0x8dcf000c  lw          $t7, 0xC($t6)
    ctx->pc = 0x17cea4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
label_17cea8:
    // 0x17cea8: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x17cea8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
label_17ceac:
    // 0x17ceac: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
label_17ceb0:
    if (ctx->pc == 0x17CEB0u) {
        ctx->pc = 0x17CEB4u;
        goto label_17ceb4;
    }
    ctx->pc = 0x17CEACu;
    {
        const bool branch_taken_0x17ceac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ceac) {
            ctx->pc = 0x17CEBCu;
            goto label_17cebc;
        }
    }
    ctx->pc = 0x17CEB4u;
label_17ceb4:
    // 0x17ceb4: 0x10000003  b           . + 4 + (0x3 << 2)
label_17ceb8:
    if (ctx->pc == 0x17CEB8u) {
        ctx->pc = 0x17CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CEB4u;
        // 0x17ceb8: 0xad630004  sw          $v1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CEBCu;
        goto label_17cebc;
    }
    ctx->pc = 0x17CEB4u;
    {
        const bool branch_taken_0x17ceb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CEB4u;
        // 0x17ceb8: 0xad630004  sw          $v1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ceb4) {
            ctx->pc = 0x17CEC4u;
            goto label_17cec4;
        }
    }
    ctx->pc = 0x17CEBCu;
label_17cebc:
    // 0x17cebc: 0x0  nop
    ctx->pc = 0x17cebcu;
    // NOP
label_17cec0:
    // 0x17cec0: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x17cec0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
label_17cec4:
    // 0x17cec4: 0x0  nop
    ctx->pc = 0x17cec4u;
    // NOP
label_17cec8:
    // 0x17cec8: 0x8d380000  lw          $t8, 0x0($t1)
    ctx->pc = 0x17cec8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_17cecc:
    // 0x17cecc: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x17ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17ced0:
    // 0x17ced0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x17ced0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_17ced4:
    // 0x17ced4: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x17ced4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_17ced8:
    // 0x17ced8: 0x256b0090  addiu       $t3, $t3, 0x90
    ctx->pc = 0x17ced8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 144));
label_17cedc:
    // 0x17cedc: 0x187840  sll         $t7, $t8, 1
    ctx->pc = 0x17cedcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
label_17cee0:
    // 0x17cee0: 0x1f87821  addu        $t7, $t7, $t8
    ctx->pc = 0x17cee0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_17cee4:
    // 0x17cee4: 0xf78c0  sll         $t7, $t7, 3
    ctx->pc = 0x17cee4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
label_17cee8:
    // 0x17cee8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x17cee8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_17ceec:
    // 0x17ceec: 0x1020ffd7  beqz        $at, . + 4 + (-0x29 << 2)
label_17cef0:
    if (ctx->pc == 0x17CEF0u) {
        ctx->pc = 0x17CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CEECu;
        // 0x17cef0: 0x1cf7021  addu        $t6, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CEF4u;
        goto label_17cef4;
    }
    ctx->pc = 0x17CEECu;
    {
        const bool branch_taken_0x17ceec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CEECu;
        // 0x17cef0: 0x1cf7021  addu        $t6, $t6, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ceec) {
            ctx->pc = 0x17CE4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ce4c;
        }
    }
    ctx->pc = 0x17CEF4u;
label_17cef4:
    // 0x17cef4: 0x0  nop
    ctx->pc = 0x17cef4u;
    // NOP
label_17cef8:
    // 0x17cef8: 0x8f8e8448  lw          $t6, -0x7BB8($gp)
    ctx->pc = 0x17cef8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17cefc:
    // 0x17cefc: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x17cefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17cf00:
    // 0x17cf00: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x17cf00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_17cf04:
    // 0x17cf04: 0x8d2c0008  lw          $t4, 0x8($t1)
    ctx->pc = 0x17cf04u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_17cf08:
    // 0x17cf08: 0xad082a  slt         $at, $a1, $t5
    ctx->pc = 0x17cf08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_17cf0c:
    // 0x17cf0c: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x17cf0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_17cf10:
    // 0x17cf10: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x17cf10u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_17cf14:
    // 0x17cf14: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x17cf14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_17cf18:
    // 0x17cf18: 0x1cc7018  mult        $t6, $t6, $t4
    ctx->pc = 0x17cf18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_17cf1c:
    // 0x17cf1c: 0xe6040  sll         $t4, $t6, 1
    ctx->pc = 0x17cf1cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
label_17cf20:
    // 0x17cf20: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x17cf20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
label_17cf24:
    // 0x17cf24: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x17cf24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_17cf28:
    // 0x17cf28: 0x1020ffc2  beqz        $at, . + 4 + (-0x3E << 2)
label_17cf2c:
    if (ctx->pc == 0x17CF2Cu) {
        ctx->pc = 0x17CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF28u;
        // 0x17cf2c: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CF30u;
        goto label_17cf30;
    }
    ctx->pc = 0x17CF28u;
    {
        const bool branch_taken_0x17cf28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF28u;
        // 0x17cf2c: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf28) {
            ctx->pc = 0x17CE34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ce34;
        }
    }
    ctx->pc = 0x17CF30u;
label_17cf30:
    // 0x17cf30: 0x3e00008  jr          $ra
label_17cf34:
    if (ctx->pc == 0x17CF34u) {
        ctx->pc = 0x17CF38u;
        goto label_17cf38;
    }
    ctx->pc = 0x17CF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CF38u;
label_17cf38:
    // 0x17cf38: 0x0  nop
    ctx->pc = 0x17cf38u;
    // NOP
label_17cf3c:
    // 0x17cf3c: 0x0  nop
    ctx->pc = 0x17cf3cu;
    // NOP
label_17cf40:
    // 0x17cf40: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x17cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_17cf44:
    // 0x17cf44: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_17cf48:
    // 0x17cf48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x17cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_17cf4c:
    // 0x17cf4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cf4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17cf50:
    // 0x17cf50: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17cf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_17cf54:
    // 0x17cf54: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17cf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_17cf58:
    // 0x17cf58: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x17cf58u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17cf5c:
    // 0x17cf5c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17cf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_17cf60:
    // 0x17cf60: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17cf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_17cf64:
    // 0x17cf64: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17cf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_17cf68:
    // 0x17cf68: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x17cf68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17cf6c:
    // 0x17cf6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17cf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_17cf70:
    // 0x17cf70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17cf70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17cf74:
    // 0x17cf74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17cf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_17cf78:
    // 0x17cf78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17cf7c:
    // 0x17cf7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17cf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17cf80:
    // 0x17cf80: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17cf80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17cf84:
    // 0x17cf84: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17cf84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17cf88:
    // 0x17cf88: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17cf88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17cf8c:
    // 0x17cf8c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x17cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_17cf90:
    // 0x17cf90: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x17cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_17cf94:
    // 0x17cf94: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x17cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_17cf98:
    // 0x17cf98: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x17cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_17cf9c:
    // 0x17cf9c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x17cf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17cfa0:
    // 0x17cfa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17cfa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cfa4:
    // 0x17cfa4: 0x0  nop
    ctx->pc = 0x17cfa4u;
    // NOP
label_17cfa8:
    // 0x17cfa8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_17cfac:
    if (ctx->pc == 0x17CFACu) {
        ctx->pc = 0x17CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFA8u;
        // 0x17cfac: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CFB0u;
        goto label_17cfb0;
    }
    ctx->pc = 0x17CFA8u;
    {
        const bool branch_taken_0x17cfa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFA8u;
        // 0x17cfac: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfa8) {
            ctx->pc = 0x17CFC4u;
            goto label_17cfc4;
        }
    }
    ctx->pc = 0x17CFB0u;
label_17cfb0:
    // 0x17cfb0: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x17cfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17cfb4:
    // 0x17cfb4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17cfb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17cfb8:
    // 0x17cfb8: 0x0  nop
    ctx->pc = 0x17cfb8u;
    // NOP
label_17cfbc:
    // 0x17cfbc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_17cfc0:
    if (ctx->pc == 0x17CFC0u) {
        ctx->pc = 0x17CFC4u;
        goto label_17cfc4;
    }
    ctx->pc = 0x17CFBCu;
    {
        const bool branch_taken_0x17cfbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cfbc) {
            ctx->pc = 0x17CFD0u;
            goto label_17cfd0;
        }
    }
    ctx->pc = 0x17CFC4u;
label_17cfc4:
    // 0x17cfc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cfc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17cfc8:
    // 0x17cfc8: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_17cfcc:
    if (ctx->pc == 0x17CFCCu) {
        ctx->pc = 0x17CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFC8u;
        // 0x17cfcc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CFD0u;
        goto label_17cfd0;
    }
    ctx->pc = 0x17CFC8u;
    {
        const bool branch_taken_0x17cfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFC8u;
        // 0x17cfcc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfc8) {
            ctx->pc = 0x17D320u;
            { ctx->pc = 0x17d320; return; }
        }
    }
    ctx->pc = 0x17CFD0u;
label_17cfd0:
    // 0x17cfd0: 0x8f848448  lw          $a0, -0x7BB8($gp)
    ctx->pc = 0x17cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17cfd4:
    // 0x17cfd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17cfd8:
    // 0x17cfd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17cfdc:
    // 0x17cfdc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_17cfe0:
    if (ctx->pc == 0x17CFE0u) {
        ctx->pc = 0x17CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFDCu;
        // 0x17cfe0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CFE4u;
        goto label_17cfe4;
    }
    ctx->pc = 0x17CFDCu;
    {
        const bool branch_taken_0x17cfdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFDCu;
        // 0x17cfe0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfdc) {
            ctx->pc = 0x17CFF0u;
            goto label_17cff0;
        }
    }
    ctx->pc = 0x17CFE4u;
label_17cfe4:
    // 0x17cfe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cfe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17cfe8:
    // 0x17cfe8: 0x10000007  b           . + 4 + (0x7 << 2)
label_17cfec:
    if (ctx->pc == 0x17CFECu) {
        ctx->pc = 0x17CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFE8u;
        // 0x17cfec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17CFF0u;
        goto label_17cff0;
    }
    ctx->pc = 0x17CFE8u;
    {
        const bool branch_taken_0x17cfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFE8u;
        // 0x17cfec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfe8) {
            ctx->pc = 0x17D008u;
            goto label_17d008;
        }
    }
    ctx->pc = 0x17CFF0u;
label_17cff0:
    // 0x17cff0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17cff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17cff4:
    // 0x17cff4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17cff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17cff8:
    // 0x17cff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17cff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17cffc:
    // 0x17cffc: 0x0  nop
    ctx->pc = 0x17cffcu;
    // NOP
label_17d000:
    // 0x17d000: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17d004:
    // 0x17d004: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17d004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17d008:
    // 0x17d008: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x17d008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_17d00c:
    // 0x17d00c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x17d00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17d010:
    // 0x17d010: 0x0  nop
    ctx->pc = 0x17d010u;
    // NOP
label_17d014:
    // 0x17d014: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x17d014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_17d018:
    // 0x17d018: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17d018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17d01c:
    // 0x17d01c: 0x0  nop
    ctx->pc = 0x17d01cu;
    // NOP
label_17d020:
    // 0x17d020: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_17d024:
    if (ctx->pc == 0x17D024u) {
        ctx->pc = 0x17D028u;
        goto label_17d028;
    }
    ctx->pc = 0x17D020u;
    {
        const bool branch_taken_0x17d020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17d020) {
            ctx->pc = 0x17D07Cu;
            goto label_17d07c;
        }
    }
    ctx->pc = 0x17D028u;
label_17d028:
    // 0x17d028: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17d028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17d02c:
    // 0x17d02c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17d030:
    // 0x17d030: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_17d034:
    if (ctx->pc == 0x17D034u) {
        ctx->pc = 0x17D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D030u;
        // 0x17d034: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D038u;
        goto label_17d038;
    }
    ctx->pc = 0x17D030u;
    {
        const bool branch_taken_0x17d030 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D030u;
        // 0x17d034: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d030) {
            ctx->pc = 0x17D044u;
            goto label_17d044;
        }
    }
    ctx->pc = 0x17D038u;
label_17d038:
    // 0x17d038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17d03c:
    // 0x17d03c: 0x10000007  b           . + 4 + (0x7 << 2)
label_17d040:
    if (ctx->pc == 0x17D040u) {
        ctx->pc = 0x17D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D03Cu;
        // 0x17d040: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D044u;
        goto label_17d044;
    }
    ctx->pc = 0x17D03Cu;
    {
        const bool branch_taken_0x17d03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D03Cu;
        // 0x17d040: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d03c) {
            ctx->pc = 0x17D05Cu;
            goto label_17d05c;
        }
    }
    ctx->pc = 0x17D044u;
label_17d044:
    // 0x17d044: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17d048:
    // 0x17d048: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17d048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17d04c:
    // 0x17d04c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17d050:
    // 0x17d050: 0x0  nop
    ctx->pc = 0x17d050u;
    // NOP
label_17d054:
    // 0x17d054: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17d054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17d058:
    // 0x17d058: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17d058u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17d05c:
    // 0x17d05c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x17d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_17d060:
    // 0x17d060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17d064:
    // 0x17d064: 0x0  nop
    ctx->pc = 0x17d064u;
    // NOP
label_17d068:
    // 0x17d068: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17d068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17d06c:
    // 0x17d06c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x17d06cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17d070:
    // 0x17d070: 0x0  nop
    ctx->pc = 0x17d070u;
    // NOP
label_17d074:
    // 0x17d074: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_17d078:
    if (ctx->pc == 0x17D078u) {
        ctx->pc = 0x17D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D074u;
        // 0x17d078: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D07Cu;
        goto label_17d07c;
    }
    ctx->pc = 0x17D074u;
    {
        const bool branch_taken_0x17d074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D074u;
        // 0x17d078: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d074) {
            ctx->pc = 0x17D088u;
            goto label_17d088;
        }
    }
    ctx->pc = 0x17D07Cu;
label_17d07c:
    // 0x17d07c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d07cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17d080:
    // 0x17d080: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_17d084:
    if (ctx->pc == 0x17D084u) {
        ctx->pc = 0x17D088u;
        goto label_17d088;
    }
    ctx->pc = 0x17D080u;
    {
        const bool branch_taken_0x17d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d080) {
            ctx->pc = 0x17D31Cu;
            { ctx->pc = 0x17d31c; return; }
        }
    }
    ctx->pc = 0x17D088u;
label_17d088:
    // 0x17d088: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17d088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17d08c:
    // 0x17d08c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x17d08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_17d090:
    // 0x17d090: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17d090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17d094:
    // 0x17d094: 0xc066e14  jal         func_19B850
label_17d098:
    if (ctx->pc == 0x17D098u) {
        ctx->pc = 0x17D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D094u;
        // 0x17d098: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D09Cu;
        goto label_17d09c;
    }
    ctx->pc = 0x17D094u;
    SET_GPR_U32(ctx, 31, 0x17D09Cu);
    ctx->pc = 0x17D098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D094u;
    // 0x17d098: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x17D09Cu;
label_17d09c:
    // 0x17d09c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x17d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_17d0a0:
    // 0x17d0a0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x17d0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_17d0a4:
    // 0x17d0a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x17d0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_17d0a8:
    // 0x17d0a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17d0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17d0ac:
    // 0x17d0ac: 0xc066e14  jal         func_19B850
label_17d0b0:
    if (ctx->pc == 0x17D0B0u) {
        ctx->pc = 0x17D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0ACu;
        // 0x17d0b0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D0B4u;
        goto label_17d0b4;
    }
    ctx->pc = 0x17D0ACu;
    SET_GPR_U32(ctx, 31, 0x17D0B4u);
    ctx->pc = 0x17D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0ACu;
    // 0x17d0b0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x17D0B4u;
label_17d0b4:
    // 0x17d0b4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_17d0b8:
    // 0x17d0b8: 0xc066e38  jal         func_19B8E0
label_17d0bc:
    if (ctx->pc == 0x17D0BCu) {
        ctx->pc = 0x17D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0B8u;
        // 0x17d0bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D0C0u;
        goto label_17d0c0;
    }
    ctx->pc = 0x17D0B8u;
    SET_GPR_U32(ctx, 31, 0x17D0C0u);
    ctx->pc = 0x17D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0B8u;
    // 0x17d0bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8E0u;
    { ctx->pc = 0x19b8e0; return; }
    ctx->pc = 0x17D0C0u;
label_17d0c0:
    // 0x17d0c0: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x17d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_17d0c4:
    // 0x17d0c4: 0x8fb700f0  lw          $s7, 0xF0($sp)
    ctx->pc = 0x17d0c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_17d0c8:
    // 0x17d0c8: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x17d0c8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17d0cc:
    // 0x17d0cc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17d0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_17d0d0:
    // 0x17d0d0: 0xc066e38  jal         func_19B8E0
label_17d0d4:
    if (ctx->pc == 0x17D0D4u) {
        ctx->pc = 0x17D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0D0u;
        // 0x17d0d4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D0D8u;
        goto label_17d0d8;
    }
    ctx->pc = 0x17D0D0u;
    SET_GPR_U32(ctx, 31, 0x17D0D8u);
    ctx->pc = 0x17D0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0D0u;
    // 0x17d0d4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8E0u;
    { ctx->pc = 0x19b8e0; return; }
    ctx->pc = 0x17D0D8u;
label_17d0d8:
    // 0x17d0d8: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x17d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_17d0dc:
    // 0x17d0dc: 0x8fb000f0  lw          $s0, 0xF0($sp)
    ctx->pc = 0x17d0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_17d0e0:
    // 0x17d0e0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x17d0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17d0e4:
    // 0x17d0e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x17d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_17d0e8:
    // 0x17d0e8: 0xc066e38  jal         func_19B8E0
label_17d0ec:
    if (ctx->pc == 0x17D0ECu) {
        ctx->pc = 0x17D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0E8u;
        // 0x17d0ec: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D0F0u;
        goto label_17d0f0;
    }
    ctx->pc = 0x17D0E8u;
    SET_GPR_U32(ctx, 31, 0x17D0F0u);
    ctx->pc = 0x17D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0E8u;
    // 0x17d0ec: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8E0u;
    { ctx->pc = 0x19b8e0; return; }
    ctx->pc = 0x17D0F0u;
label_17d0f0:
    // 0x17d0f0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_17d0f4:
    // 0x17d0f4: 0x8f92844c  lw          $s2, -0x7BB4($gp)
    ctx->pc = 0x17d0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935628)));
label_17d0f8:
    // 0x17d0f8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x17d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_17d0fc:
    // 0x17d0fc: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x17d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_17d100:
    // 0x17d100: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17d104:
    // 0x17d104: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x17d104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_17d108:
    // 0x17d108: 0x8f828448  lw          $v0, -0x7BB8($gp)
    ctx->pc = 0x17d108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17d10c:
    // 0x17d10c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17d110:
    // 0x17d110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17d114:
    // 0x17d114: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x17d114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_17d118:
    // 0x17d118: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x17d118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17d11c:
    // 0x17d11c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_17d120:
    // 0x17d120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17d124:
    // 0x17d124: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17d124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_17d128:
    // 0x17d128: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_17d12c:
    if (ctx->pc == 0x17D12Cu) {
        ctx->pc = 0x17D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D128u;
        // 0x17d12c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D130u;
        goto label_17d130;
    }
    ctx->pc = 0x17D128u;
    {
        const bool branch_taken_0x17d128 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D128u;
        // 0x17d12c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d128) {
            ctx->pc = 0x17D164u;
            goto label_17d164;
        }
    }
    ctx->pc = 0x17D130u;
label_17d130:
    // 0x17d130: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x17d130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_17d134:
    // 0x17d134: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x17d134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_17d138:
    // 0x17d138: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x17d138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17d13c:
    // 0x17d13c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x17d13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17d140:
    // 0x17d140: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x17d140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17d144:
    // 0x17d144: 0xc0428f8  jal         func_10A3E0
label_17d148:
    if (ctx->pc == 0x17D148u) {
        ctx->pc = 0x17D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D144u;
        // 0x17d148: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D14Cu;
        goto label_17d14c;
    }
    ctx->pc = 0x17D144u;
    SET_GPR_U32(ctx, 31, 0x17D14Cu);
    ctx->pc = 0x17D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D144u;
    // 0x17d148: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A3E0u, 0x17D144u, 0x17D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D14Cu;
label_17d14c:
    // 0x17d14c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17d150:
    if (ctx->pc == 0x17D150u) {
        ctx->pc = 0x17D154u;
        goto label_17d154;
    }
    ctx->pc = 0x17D14Cu;
    {
        const bool branch_taken_0x17d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d14c) {
            ctx->pc = 0x17D160u;
            goto label_17d160;
        }
    }
    ctx->pc = 0x17D154u;
label_17d154:
    // 0x17d154: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x17d154u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_17d158:
    // 0x17d158: 0x10000070  b           . + 4 + (0x70 << 2)
label_17d15c:
    if (ctx->pc == 0x17D15Cu) {
        ctx->pc = 0x17D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D158u;
        // 0x17d15c: 0xc7a00104  lwc1        $f0, 0x104($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D160u;
        goto label_17d160;
    }
    ctx->pc = 0x17D158u;
    {
        const bool branch_taken_0x17d158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D158u;
        // 0x17d15c: 0xc7a00104  lwc1        $f0, 0x104($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d158) {
            ctx->pc = 0x17D31Cu;
            { ctx->pc = 0x17d31c; return; }
        }
    }
    ctx->pc = 0x17D160u;
label_17d160:
    // 0x17d160: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x17d160u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_17d164:
    // 0x17d164: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x17d164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_17d168:
    // 0x17d168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17d16c:
    // 0x17d16c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_17d170:
    if (ctx->pc == 0x17D170u) {
        ctx->pc = 0x17D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D16Cu;
        // 0x17d170: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D174u;
        goto label_17d174;
    }
    ctx->pc = 0x17D16Cu;
    {
        const bool branch_taken_0x17d16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D16Cu;
        // 0x17d170: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d16c) {
            ctx->pc = 0x17D194u;
            goto label_17d194;
        }
    }
    ctx->pc = 0x17D174u;
label_17d174:
    // 0x17d174: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x17d174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_17d178:
    // 0x17d178: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x17d178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17d17c:
    // 0x17d17c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x17d17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17d180:
    // 0x17d180: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x17d180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17d184:
    // 0x17d184: 0xc043674  jal         func_10D9D0
label_17d188:
    if (ctx->pc == 0x17D188u) {
        ctx->pc = 0x17D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D184u;
        // 0x17d188: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D18Cu;
        goto label_17d18c;
    }
    ctx->pc = 0x17D184u;
    SET_GPR_U32(ctx, 31, 0x17D18Cu);
    ctx->pc = 0x17D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D184u;
    // 0x17d188: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D9D0u, 0x17D184u, 0x17D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D18Cu;
label_17d18c:
    // 0x17d18c: 0x10000063  b           . + 4 + (0x63 << 2)
label_17d190:
    if (ctx->pc == 0x17D190u) {
        ctx->pc = 0x17D194u;
        goto label_17d194;
    }
    ctx->pc = 0x17D18Cu;
    {
        const bool branch_taken_0x17d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d18c) {
            ctx->pc = 0x17D31Cu;
            { ctx->pc = 0x17d31c; return; }
        }
    }
    ctx->pc = 0x17D194u;
label_17d194:
    // 0x17d194: 0x8f848448  lw          $a0, -0x7BB8($gp)
    ctx->pc = 0x17d194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17d198:
    // 0x17d198: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x17d198u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_17d19c:
    // 0x17d19c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x17d19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_17d1a0:
    // 0x17d1a0: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x17d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_17d1a4:
    // 0x17d1a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17d1a8:
    // 0x17d1a8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x17d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17d1ac:
    // 0x17d1ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_17d1b0:
    // 0x17d1b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17d1b4:
    // 0x17d1b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17d1b8:
    // 0x17d1b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_17d1bc:
    // 0x17d1bc: 0x2e3b823  subu        $s7, $s7, $v1
    ctx->pc = 0x17d1bcu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_17d1c0:
    // 0x17d1c0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x17d1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17d1c4:
    // 0x17d1c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17d1c8:
    // 0x17d1c8: 0x2c6b023  subu        $s6, $s6, $a2
    ctx->pc = 0x17d1c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
label_17d1cc:
    // 0x17d1cc: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x17d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    ctx->pc = 0x17d1d0u;
    return;
}
