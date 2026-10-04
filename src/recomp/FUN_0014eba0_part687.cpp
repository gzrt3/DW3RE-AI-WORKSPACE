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


void FUN_0014eba0_part687(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29db00u: goto label_29db00;
        case 0x29db04u: goto label_29db04;
        case 0x29db08u: goto label_29db08;
        case 0x29db0cu: goto label_29db0c;
        case 0x29db10u: goto label_29db10;
        case 0x29db14u: goto label_29db14;
        case 0x29db18u: goto label_29db18;
        case 0x29db1cu: goto label_29db1c;
        case 0x29db20u: goto label_29db20;
        case 0x29db24u: goto label_29db24;
        case 0x29db28u: goto label_29db28;
        case 0x29db2cu: goto label_29db2c;
        case 0x29db30u: goto label_29db30;
        case 0x29db34u: goto label_29db34;
        case 0x29db38u: goto label_29db38;
        case 0x29db3cu: goto label_29db3c;
        case 0x29db40u: goto label_29db40;
        case 0x29db44u: goto label_29db44;
        case 0x29db48u: goto label_29db48;
        case 0x29db4cu: goto label_29db4c;
        case 0x29db50u: goto label_29db50;
        case 0x29db54u: goto label_29db54;
        case 0x29db58u: goto label_29db58;
        case 0x29db5cu: goto label_29db5c;
        case 0x29db60u: goto label_29db60;
        case 0x29db64u: goto label_29db64;
        case 0x29db68u: goto label_29db68;
        case 0x29db6cu: goto label_29db6c;
        case 0x29db70u: goto label_29db70;
        case 0x29db74u: goto label_29db74;
        case 0x29db78u: goto label_29db78;
        case 0x29db7cu: goto label_29db7c;
        case 0x29db80u: goto label_29db80;
        case 0x29db84u: goto label_29db84;
        case 0x29db88u: goto label_29db88;
        case 0x29db8cu: goto label_29db8c;
        case 0x29db90u: goto label_29db90;
        case 0x29db94u: goto label_29db94;
        case 0x29db98u: goto label_29db98;
        case 0x29db9cu: goto label_29db9c;
        case 0x29dba0u: goto label_29dba0;
        case 0x29dba4u: goto label_29dba4;
        case 0x29dba8u: goto label_29dba8;
        case 0x29dbacu: goto label_29dbac;
        case 0x29dbb0u: goto label_29dbb0;
        case 0x29dbb4u: goto label_29dbb4;
        case 0x29dbb8u: goto label_29dbb8;
        case 0x29dbbcu: goto label_29dbbc;
        case 0x29dbc0u: goto label_29dbc0;
        case 0x29dbc4u: goto label_29dbc4;
        case 0x29dbc8u: goto label_29dbc8;
        case 0x29dbccu: goto label_29dbcc;
        case 0x29dbd0u: goto label_29dbd0;
        case 0x29dbd4u: goto label_29dbd4;
        case 0x29dbd8u: goto label_29dbd8;
        case 0x29dbdcu: goto label_29dbdc;
        case 0x29dbe0u: goto label_29dbe0;
        case 0x29dbe4u: goto label_29dbe4;
        case 0x29dbe8u: goto label_29dbe8;
        case 0x29dbecu: goto label_29dbec;
        case 0x29dbf0u: goto label_29dbf0;
        case 0x29dbf4u: goto label_29dbf4;
        case 0x29dbf8u: goto label_29dbf8;
        case 0x29dbfcu: goto label_29dbfc;
        case 0x29dc00u: goto label_29dc00;
        case 0x29dc04u: goto label_29dc04;
        case 0x29dc08u: goto label_29dc08;
        case 0x29dc0cu: goto label_29dc0c;
        case 0x29dc10u: goto label_29dc10;
        case 0x29dc14u: goto label_29dc14;
        case 0x29dc18u: goto label_29dc18;
        case 0x29dc1cu: goto label_29dc1c;
        case 0x29dc20u: goto label_29dc20;
        case 0x29dc24u: goto label_29dc24;
        case 0x29dc28u: goto label_29dc28;
        case 0x29dc2cu: goto label_29dc2c;
        case 0x29dc30u: goto label_29dc30;
        case 0x29dc34u: goto label_29dc34;
        case 0x29dc38u: goto label_29dc38;
        case 0x29dc3cu: goto label_29dc3c;
        case 0x29dc40u: goto label_29dc40;
        case 0x29dc44u: goto label_29dc44;
        case 0x29dc48u: goto label_29dc48;
        case 0x29dc4cu: goto label_29dc4c;
        case 0x29dc50u: goto label_29dc50;
        case 0x29dc54u: goto label_29dc54;
        case 0x29dc58u: goto label_29dc58;
        case 0x29dc5cu: goto label_29dc5c;
        case 0x29dc60u: goto label_29dc60;
        case 0x29dc64u: goto label_29dc64;
        case 0x29dc68u: goto label_29dc68;
        case 0x29dc6cu: goto label_29dc6c;
        case 0x29dc70u: goto label_29dc70;
        case 0x29dc74u: goto label_29dc74;
        case 0x29dc78u: goto label_29dc78;
        case 0x29dc7cu: goto label_29dc7c;
        case 0x29dc80u: goto label_29dc80;
        case 0x29dc84u: goto label_29dc84;
        case 0x29dc88u: goto label_29dc88;
        case 0x29dc8cu: goto label_29dc8c;
        case 0x29dc90u: goto label_29dc90;
        case 0x29dc94u: goto label_29dc94;
        case 0x29dc98u: goto label_29dc98;
        case 0x29dc9cu: goto label_29dc9c;
        case 0x29dca0u: goto label_29dca0;
        case 0x29dca4u: goto label_29dca4;
        case 0x29dca8u: goto label_29dca8;
        case 0x29dcacu: goto label_29dcac;
        case 0x29dcb0u: goto label_29dcb0;
        case 0x29dcb4u: goto label_29dcb4;
        case 0x29dcb8u: goto label_29dcb8;
        case 0x29dcbcu: goto label_29dcbc;
        case 0x29dcc0u: goto label_29dcc0;
        case 0x29dcc4u: goto label_29dcc4;
        case 0x29dcc8u: goto label_29dcc8;
        case 0x29dcccu: goto label_29dccc;
        case 0x29dcd0u: goto label_29dcd0;
        case 0x29dcd4u: goto label_29dcd4;
        case 0x29dcd8u: goto label_29dcd8;
        case 0x29dcdcu: goto label_29dcdc;
        case 0x29dce0u: goto label_29dce0;
        case 0x29dce4u: goto label_29dce4;
        case 0x29dce8u: goto label_29dce8;
        case 0x29dcecu: goto label_29dcec;
        case 0x29dcf0u: goto label_29dcf0;
        case 0x29dcf4u: goto label_29dcf4;
        case 0x29dcf8u: goto label_29dcf8;
        case 0x29dcfcu: goto label_29dcfc;
        case 0x29dd00u: goto label_29dd00;
        case 0x29dd04u: goto label_29dd04;
        case 0x29dd08u: goto label_29dd08;
        case 0x29dd0cu: goto label_29dd0c;
        case 0x29dd10u: goto label_29dd10;
        case 0x29dd14u: goto label_29dd14;
        case 0x29dd18u: goto label_29dd18;
        case 0x29dd1cu: goto label_29dd1c;
        case 0x29dd20u: goto label_29dd20;
        case 0x29dd24u: goto label_29dd24;
        case 0x29dd28u: goto label_29dd28;
        case 0x29dd2cu: goto label_29dd2c;
        case 0x29dd30u: goto label_29dd30;
        case 0x29dd34u: goto label_29dd34;
        case 0x29dd38u: goto label_29dd38;
        case 0x29dd3cu: goto label_29dd3c;
        case 0x29dd40u: goto label_29dd40;
        case 0x29dd44u: goto label_29dd44;
        case 0x29dd48u: goto label_29dd48;
        case 0x29dd4cu: goto label_29dd4c;
        case 0x29dd50u: goto label_29dd50;
        case 0x29dd54u: goto label_29dd54;
        case 0x29dd58u: goto label_29dd58;
        case 0x29dd5cu: goto label_29dd5c;
        case 0x29dd60u: goto label_29dd60;
        case 0x29dd64u: goto label_29dd64;
        case 0x29dd68u: goto label_29dd68;
        case 0x29dd6cu: goto label_29dd6c;
        case 0x29dd70u: goto label_29dd70;
        case 0x29dd74u: goto label_29dd74;
        case 0x29dd78u: goto label_29dd78;
        case 0x29dd7cu: goto label_29dd7c;
        case 0x29dd80u: goto label_29dd80;
        case 0x29dd84u: goto label_29dd84;
        case 0x29dd88u: goto label_29dd88;
        case 0x29dd8cu: goto label_29dd8c;
        case 0x29dd90u: goto label_29dd90;
        case 0x29dd94u: goto label_29dd94;
        case 0x29dd98u: goto label_29dd98;
        case 0x29dd9cu: goto label_29dd9c;
        case 0x29dda0u: goto label_29dda0;
        case 0x29dda4u: goto label_29dda4;
        case 0x29dda8u: goto label_29dda8;
        case 0x29ddacu: goto label_29ddac;
        case 0x29ddb0u: goto label_29ddb0;
        case 0x29ddb4u: goto label_29ddb4;
        case 0x29ddb8u: goto label_29ddb8;
        case 0x29ddbcu: goto label_29ddbc;
        case 0x29ddc0u: goto label_29ddc0;
        case 0x29ddc4u: goto label_29ddc4;
        case 0x29ddc8u: goto label_29ddc8;
        case 0x29ddccu: goto label_29ddcc;
        case 0x29ddd0u: goto label_29ddd0;
        case 0x29ddd4u: goto label_29ddd4;
        case 0x29ddd8u: goto label_29ddd8;
        case 0x29dddcu: goto label_29dddc;
        case 0x29dde0u: goto label_29dde0;
        case 0x29dde4u: goto label_29dde4;
        case 0x29dde8u: goto label_29dde8;
        case 0x29ddecu: goto label_29ddec;
        case 0x29ddf0u: goto label_29ddf0;
        case 0x29ddf4u: goto label_29ddf4;
        case 0x29ddf8u: goto label_29ddf8;
        case 0x29ddfcu: goto label_29ddfc;
        case 0x29de00u: goto label_29de00;
        case 0x29de04u: goto label_29de04;
        case 0x29de08u: goto label_29de08;
        case 0x29de0cu: goto label_29de0c;
        case 0x29de10u: goto label_29de10;
        case 0x29de14u: goto label_29de14;
        case 0x29de18u: goto label_29de18;
        case 0x29de1cu: goto label_29de1c;
        case 0x29de20u: goto label_29de20;
        case 0x29de24u: goto label_29de24;
        case 0x29de28u: goto label_29de28;
        case 0x29de2cu: goto label_29de2c;
        case 0x29de30u: goto label_29de30;
        case 0x29de34u: goto label_29de34;
        case 0x29de38u: goto label_29de38;
        case 0x29de3cu: goto label_29de3c;
        case 0x29de40u: goto label_29de40;
        case 0x29de44u: goto label_29de44;
        case 0x29de48u: goto label_29de48;
        case 0x29de4cu: goto label_29de4c;
        case 0x29de50u: goto label_29de50;
        case 0x29de54u: goto label_29de54;
        case 0x29de58u: goto label_29de58;
        case 0x29de5cu: goto label_29de5c;
        case 0x29de60u: goto label_29de60;
        case 0x29de64u: goto label_29de64;
        case 0x29de68u: goto label_29de68;
        case 0x29de6cu: goto label_29de6c;
        case 0x29de70u: goto label_29de70;
        case 0x29de74u: goto label_29de74;
        case 0x29de78u: goto label_29de78;
        case 0x29de7cu: goto label_29de7c;
        case 0x29de80u: goto label_29de80;
        case 0x29de84u: goto label_29de84;
        case 0x29de88u: goto label_29de88;
        case 0x29de8cu: goto label_29de8c;
        case 0x29de90u: goto label_29de90;
        case 0x29de94u: goto label_29de94;
        case 0x29de98u: goto label_29de98;
        case 0x29de9cu: goto label_29de9c;
        case 0x29dea0u: goto label_29dea0;
        case 0x29dea4u: goto label_29dea4;
        case 0x29dea8u: goto label_29dea8;
        case 0x29deacu: goto label_29deac;
        case 0x29deb0u: goto label_29deb0;
        case 0x29deb4u: goto label_29deb4;
        case 0x29deb8u: goto label_29deb8;
        case 0x29debcu: goto label_29debc;
        case 0x29dec0u: goto label_29dec0;
        case 0x29dec4u: goto label_29dec4;
        case 0x29dec8u: goto label_29dec8;
        case 0x29deccu: goto label_29decc;
        case 0x29ded0u: goto label_29ded0;
        case 0x29ded4u: goto label_29ded4;
        case 0x29ded8u: goto label_29ded8;
        case 0x29dedcu: goto label_29dedc;
        case 0x29dee0u: goto label_29dee0;
        case 0x29dee4u: goto label_29dee4;
        case 0x29dee8u: goto label_29dee8;
        case 0x29deecu: goto label_29deec;
        case 0x29def0u: goto label_29def0;
        case 0x29def4u: goto label_29def4;
        case 0x29def8u: goto label_29def8;
        case 0x29defcu: goto label_29defc;
        case 0x29df00u: goto label_29df00;
        case 0x29df04u: goto label_29df04;
        case 0x29df08u: goto label_29df08;
        case 0x29df0cu: goto label_29df0c;
        case 0x29df10u: goto label_29df10;
        case 0x29df14u: goto label_29df14;
        case 0x29df18u: goto label_29df18;
        case 0x29df1cu: goto label_29df1c;
        case 0x29df20u: goto label_29df20;
        case 0x29df24u: goto label_29df24;
        case 0x29df28u: goto label_29df28;
        case 0x29df2cu: goto label_29df2c;
        case 0x29df30u: goto label_29df30;
        case 0x29df34u: goto label_29df34;
        case 0x29df38u: goto label_29df38;
        case 0x29df3cu: goto label_29df3c;
        case 0x29df40u: goto label_29df40;
        case 0x29df44u: goto label_29df44;
        case 0x29df48u: goto label_29df48;
        case 0x29df4cu: goto label_29df4c;
        case 0x29df50u: goto label_29df50;
        case 0x29df54u: goto label_29df54;
        case 0x29df58u: goto label_29df58;
        case 0x29df5cu: goto label_29df5c;
        case 0x29df60u: goto label_29df60;
        case 0x29df64u: goto label_29df64;
        case 0x29df68u: goto label_29df68;
        case 0x29df6cu: goto label_29df6c;
        case 0x29df70u: goto label_29df70;
        case 0x29df74u: goto label_29df74;
        case 0x29df78u: goto label_29df78;
        case 0x29df7cu: goto label_29df7c;
        case 0x29df80u: goto label_29df80;
        case 0x29df84u: goto label_29df84;
        case 0x29df88u: goto label_29df88;
        case 0x29df8cu: goto label_29df8c;
        case 0x29df90u: goto label_29df90;
        case 0x29df94u: goto label_29df94;
        case 0x29df98u: goto label_29df98;
        case 0x29df9cu: goto label_29df9c;
        case 0x29dfa0u: goto label_29dfa0;
        case 0x29dfa4u: goto label_29dfa4;
        case 0x29dfa8u: goto label_29dfa8;
        case 0x29dfacu: goto label_29dfac;
        case 0x29dfb0u: goto label_29dfb0;
        case 0x29dfb4u: goto label_29dfb4;
        case 0x29dfb8u: goto label_29dfb8;
        case 0x29dfbcu: goto label_29dfbc;
        case 0x29dfc0u: goto label_29dfc0;
        case 0x29dfc4u: goto label_29dfc4;
        case 0x29dfc8u: goto label_29dfc8;
        case 0x29dfccu: goto label_29dfcc;
        case 0x29dfd0u: goto label_29dfd0;
        case 0x29dfd4u: goto label_29dfd4;
        case 0x29dfd8u: goto label_29dfd8;
        case 0x29dfdcu: goto label_29dfdc;
        case 0x29dfe0u: goto label_29dfe0;
        case 0x29dfe4u: goto label_29dfe4;
        case 0x29dfe8u: goto label_29dfe8;
        case 0x29dfecu: goto label_29dfec;
        case 0x29dff0u: goto label_29dff0;
        case 0x29dff4u: goto label_29dff4;
        case 0x29dff8u: goto label_29dff8;
        case 0x29dffcu: goto label_29dffc;
        case 0x29e000u: goto label_29e000;
        case 0x29e004u: goto label_29e004;
        case 0x29e008u: goto label_29e008;
        case 0x29e00cu: goto label_29e00c;
        case 0x29e010u: goto label_29e010;
        case 0x29e014u: goto label_29e014;
        case 0x29e018u: goto label_29e018;
        case 0x29e01cu: goto label_29e01c;
        case 0x29e020u: goto label_29e020;
        case 0x29e024u: goto label_29e024;
        case 0x29e028u: goto label_29e028;
        case 0x29e02cu: goto label_29e02c;
        case 0x29e030u: goto label_29e030;
        case 0x29e034u: goto label_29e034;
        case 0x29e038u: goto label_29e038;
        case 0x29e03cu: goto label_29e03c;
        case 0x29e040u: goto label_29e040;
        case 0x29e044u: goto label_29e044;
        case 0x29e048u: goto label_29e048;
        case 0x29e04cu: goto label_29e04c;
        case 0x29e050u: goto label_29e050;
        case 0x29e054u: goto label_29e054;
        case 0x29e058u: goto label_29e058;
        case 0x29e05cu: goto label_29e05c;
        case 0x29e060u: goto label_29e060;
        case 0x29e064u: goto label_29e064;
        case 0x29e068u: goto label_29e068;
        case 0x29e06cu: goto label_29e06c;
        case 0x29e070u: goto label_29e070;
        case 0x29e074u: goto label_29e074;
        case 0x29e078u: goto label_29e078;
        case 0x29e07cu: goto label_29e07c;
        case 0x29e080u: goto label_29e080;
        case 0x29e084u: goto label_29e084;
        case 0x29e088u: goto label_29e088;
        case 0x29e08cu: goto label_29e08c;
        case 0x29e090u: goto label_29e090;
        case 0x29e094u: goto label_29e094;
        case 0x29e098u: goto label_29e098;
        case 0x29e09cu: goto label_29e09c;
        case 0x29e0a0u: goto label_29e0a0;
        case 0x29e0a4u: goto label_29e0a4;
        case 0x29e0a8u: goto label_29e0a8;
        case 0x29e0acu: goto label_29e0ac;
        case 0x29e0b0u: goto label_29e0b0;
        case 0x29e0b4u: goto label_29e0b4;
        case 0x29e0b8u: goto label_29e0b8;
        case 0x29e0bcu: goto label_29e0bc;
        case 0x29e0c0u: goto label_29e0c0;
        case 0x29e0c4u: goto label_29e0c4;
        case 0x29e0c8u: goto label_29e0c8;
        case 0x29e0ccu: goto label_29e0cc;
        case 0x29e0d0u: goto label_29e0d0;
        case 0x29e0d4u: goto label_29e0d4;
        case 0x29e0d8u: goto label_29e0d8;
        case 0x29e0dcu: goto label_29e0dc;
        case 0x29e0e0u: goto label_29e0e0;
        case 0x29e0e4u: goto label_29e0e4;
        case 0x29e0e8u: goto label_29e0e8;
        case 0x29e0ecu: goto label_29e0ec;
        case 0x29e0f0u: goto label_29e0f0;
        case 0x29e0f4u: goto label_29e0f4;
        case 0x29e0f8u: goto label_29e0f8;
        case 0x29e0fcu: goto label_29e0fc;
        case 0x29e100u: goto label_29e100;
        case 0x29e104u: goto label_29e104;
        case 0x29e108u: goto label_29e108;
        case 0x29e10cu: goto label_29e10c;
        case 0x29e110u: goto label_29e110;
        case 0x29e114u: goto label_29e114;
        case 0x29e118u: goto label_29e118;
        case 0x29e11cu: goto label_29e11c;
        case 0x29e120u: goto label_29e120;
        case 0x29e124u: goto label_29e124;
        case 0x29e128u: goto label_29e128;
        case 0x29e12cu: goto label_29e12c;
        case 0x29e130u: goto label_29e130;
        case 0x29e134u: goto label_29e134;
        case 0x29e138u: goto label_29e138;
        case 0x29e13cu: goto label_29e13c;
        case 0x29e140u: goto label_29e140;
        case 0x29e144u: goto label_29e144;
        case 0x29e148u: goto label_29e148;
        case 0x29e14cu: goto label_29e14c;
        case 0x29e150u: goto label_29e150;
        case 0x29e154u: goto label_29e154;
        case 0x29e158u: goto label_29e158;
        case 0x29e15cu: goto label_29e15c;
        case 0x29e160u: goto label_29e160;
        case 0x29e164u: goto label_29e164;
        case 0x29e168u: goto label_29e168;
        case 0x29e16cu: goto label_29e16c;
        case 0x29e170u: goto label_29e170;
        case 0x29e174u: goto label_29e174;
        case 0x29e178u: goto label_29e178;
        case 0x29e17cu: goto label_29e17c;
        case 0x29e180u: goto label_29e180;
        case 0x29e184u: goto label_29e184;
        case 0x29e188u: goto label_29e188;
        case 0x29e18cu: goto label_29e18c;
        case 0x29e190u: goto label_29e190;
        case 0x29e194u: goto label_29e194;
        case 0x29e198u: goto label_29e198;
        case 0x29e19cu: goto label_29e19c;
        case 0x29e1a0u: goto label_29e1a0;
        case 0x29e1a4u: goto label_29e1a4;
        case 0x29e1a8u: goto label_29e1a8;
        case 0x29e1acu: goto label_29e1ac;
        case 0x29e1b0u: goto label_29e1b0;
        case 0x29e1b4u: goto label_29e1b4;
        case 0x29e1b8u: goto label_29e1b8;
        case 0x29e1bcu: goto label_29e1bc;
        case 0x29e1c0u: goto label_29e1c0;
        case 0x29e1c4u: goto label_29e1c4;
        case 0x29e1c8u: goto label_29e1c8;
        case 0x29e1ccu: goto label_29e1cc;
        case 0x29e1d0u: goto label_29e1d0;
        case 0x29e1d4u: goto label_29e1d4;
        case 0x29e1d8u: goto label_29e1d8;
        case 0x29e1dcu: goto label_29e1dc;
        case 0x29e1e0u: goto label_29e1e0;
        case 0x29e1e4u: goto label_29e1e4;
        case 0x29e1e8u: goto label_29e1e8;
        case 0x29e1ecu: goto label_29e1ec;
        case 0x29e1f0u: goto label_29e1f0;
        case 0x29e1f4u: goto label_29e1f4;
        case 0x29e1f8u: goto label_29e1f8;
        case 0x29e1fcu: goto label_29e1fc;
        case 0x29e200u: goto label_29e200;
        case 0x29e204u: goto label_29e204;
        case 0x29e208u: goto label_29e208;
        case 0x29e20cu: goto label_29e20c;
        case 0x29e210u: goto label_29e210;
        case 0x29e214u: goto label_29e214;
        case 0x29e218u: goto label_29e218;
        case 0x29e21cu: goto label_29e21c;
        case 0x29e220u: goto label_29e220;
        case 0x29e224u: goto label_29e224;
        case 0x29e228u: goto label_29e228;
        case 0x29e22cu: goto label_29e22c;
        case 0x29e230u: goto label_29e230;
        case 0x29e234u: goto label_29e234;
        case 0x29e238u: goto label_29e238;
        case 0x29e23cu: goto label_29e23c;
        case 0x29e240u: goto label_29e240;
        case 0x29e244u: goto label_29e244;
        case 0x29e248u: goto label_29e248;
        case 0x29e24cu: goto label_29e24c;
        case 0x29e250u: goto label_29e250;
        case 0x29e254u: goto label_29e254;
        case 0x29e258u: goto label_29e258;
        case 0x29e25cu: goto label_29e25c;
        case 0x29e260u: goto label_29e260;
        case 0x29e264u: goto label_29e264;
        case 0x29e268u: goto label_29e268;
        case 0x29e26cu: goto label_29e26c;
        case 0x29e270u: goto label_29e270;
        case 0x29e274u: goto label_29e274;
        case 0x29e278u: goto label_29e278;
        case 0x29e27cu: goto label_29e27c;
        case 0x29e280u: goto label_29e280;
        case 0x29e284u: goto label_29e284;
        case 0x29e288u: goto label_29e288;
        case 0x29e28cu: goto label_29e28c;
        case 0x29e290u: goto label_29e290;
        case 0x29e294u: goto label_29e294;
        case 0x29e298u: goto label_29e298;
        case 0x29e29cu: goto label_29e29c;
        case 0x29e2a0u: goto label_29e2a0;
        case 0x29e2a4u: goto label_29e2a4;
        case 0x29e2a8u: goto label_29e2a8;
        case 0x29e2acu: goto label_29e2ac;
        case 0x29e2b0u: goto label_29e2b0;
        case 0x29e2b4u: goto label_29e2b4;
        case 0x29e2b8u: goto label_29e2b8;
        case 0x29e2bcu: goto label_29e2bc;
        case 0x29e2c0u: goto label_29e2c0;
        case 0x29e2c4u: goto label_29e2c4;
        case 0x29e2c8u: goto label_29e2c8;
        case 0x29e2ccu: goto label_29e2cc;
        default: return;
    }

label_29db00:
    // 0x29db00: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29db00u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29db04:
    // 0x29db04: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29db04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29db08:
    // 0x29db08: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29db08u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29db0c:
    // 0x29db0c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29db0cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29db10:
    // 0x29db10: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29db10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29db14:
    // 0x29db14: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29db14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29db18:
    // 0x29db18: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29db18u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29db1c:
    // 0x29db1c: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29db1cu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29db20:
    // 0x29db20: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29db20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29db24:
    // 0x29db24: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29db24u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29db28:
    // 0x29db28: 0x19  multu       $zero, $zero
    ctx->pc = 0x29db28u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29db2c:
    // 0x29db2c: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29db2cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29db30:
    // 0x29db30: 0x8  jr          $zero
label_29db34:
    if (ctx->pc == 0x29DB34u) {
        ctx->pc = 0x29DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB30u;
        // 0x29db34: 0x3c  dsll32      $zero, $zero, 0 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB38u;
        goto label_29db38;
    }
    ctx->pc = 0x29DB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB30u;
        // 0x29db34: 0x3c  dsll32      $zero, $zero, 0 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DB30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29DB38u;
label_29db38:
    // 0x29db38: 0xf  sync
    ctx->pc = 0x29db38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29db3c:
    // 0x29db3c: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x29db3cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29db40:
    // 0x29db40: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29db40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29db44:
    // 0x29db44: 0x28  mfsa        $zero
    ctx->pc = 0x29db44u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29db48:
    // 0x29db48: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29db48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29db4c:
    // 0x29db4c: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29db4cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29DB4C raw=0x0000001E");
 /* MITIGATED */
label_29db50:
    // 0x29db50: 0x10  mfhi        $zero
    ctx->pc = 0x29db50u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29db54:
    // 0x29db54: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29db54u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29db58:
    // 0x29db58: 0xd  break       0
    ctx->pc = 0x29db58u;
    runtime->handleBreak(rdram, ctx);
label_29db5c:
    // 0x29db5c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29db5cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29db60:
    // 0x29db60: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29db60u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29db64:
    // 0x29db64: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29db64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29db68:
    // 0x29db68: 0x23  negu        $zero, $zero
    ctx->pc = 0x29db68u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29db6c:
    // 0x29db6c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29db70:
    // 0x29db70: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29db70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29db74:
    // 0x29db74: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29db74u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29db78:
    // 0x29db78: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29db78u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29db7c:
    // 0x29db7c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29db7cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29db80:
    // 0x29db80: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29db80u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29db84:
    // 0x29db84: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29db84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29db88:
    // 0x29db88: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29db88u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29db8c:
    // 0x29db8c: 0x23280  sll         $a2, $v0, 10
    ctx->pc = 0x29db8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_29db90:
    // 0x29db90: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29db90u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29db94:
    // 0x29db94: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29db94u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29db98:
    // 0x29db98: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29db98u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DB98 raw=0x0000000E");
 /* MITIGATED */
label_29db9c:
    // 0x29db9c: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29db9cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29dba0:
    // 0x29dba0: 0xf  sync
    ctx->pc = 0x29dba0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29dba4:
    // 0x29dba4: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29dba4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29dba8:
    // 0x29dba8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dba8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DBA8 raw=0x00000001");
 /* MITIGATED */
label_29dbac:
    // 0x29dbac: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29dbacu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29dbb0:
    // 0x29dbb0: 0xc  syscall     0
    ctx->pc = 0x29dbb0u;
    ctx->pc = 0x29DBB4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29dbb4:
    // 0x29dbb4: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29dbb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dbb8:
    // 0x29dbb8: 0x11  mthi        $zero
    ctx->pc = 0x29dbb8u;
    ctx->hi = GPR_U64(ctx, 0);
label_29dbbc:
    // 0x29dbbc: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29dbc0:
    // 0x29dbc0: 0x12  mflo        $zero
    ctx->pc = 0x29dbc0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29dbc4:
    // 0x29dbc4: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dbc4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29dbc8:
    // 0x29dbc8: 0x23  negu        $zero, $zero
    ctx->pc = 0x29dbc8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29dbcc:
    // 0x29dbcc: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dbccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29dbd0:
    // 0x29dbd0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29dbd0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29dbd4:
    // 0x29dbd4: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29dbd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29dbd8:
    // 0x29dbd8: 0x9  jalr        $zero, $zero
label_29dbdc:
    if (ctx->pc == 0x29DBDCu) {
        ctx->pc = 0x29DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBD8u;
        // 0x29dbdc: 0x23280  sll         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBE0u;
        goto label_29dbe0;
    }
    ctx->pc = 0x29DBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBD8u;
        // 0x29dbdc: 0x23280  sll         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DBD8u, 0x29DBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DBE0u;
label_29dbe0:
    // 0x29dbe0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dbe0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DBE0 raw=0x0000000E");
 /* MITIGATED */
label_29dbe4:
    // 0x29dbe4: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dbe4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29dbe8:
    // 0x29dbe8: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29dbe8u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29dbec:
    // 0x29dbec: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dbecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29dbf0:
    // 0x29dbf0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dbf0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DBF0 raw=0x00000001");
 /* MITIGATED */
label_29dbf4:
    // 0x29dbf4: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29dbf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29dbf8:
    // 0x29dbf8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29dbf8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29dbfc:
    // 0x29dbfc: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29dbfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29dc00:
    // 0x29dc00: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29dc00u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29dc04:
    // 0x29dc04: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29dc08:
    // 0x29dc08: 0xf  sync
    ctx->pc = 0x29dc08u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29dc0c:
    // 0x29dc0c: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29dc0cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dc10:
    // 0x29dc10: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29dc10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29dc14:
    // 0x29dc14: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29dc14u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29dc18:
    // 0x29dc18: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29dc18u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29DC18 raw=0x0000001F");
 /* MITIGATED */
label_29dc1c:
    // 0x29dc1c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc1cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29dc20:
    // 0x29dc20: 0x25  move        $zero, $zero
    ctx->pc = 0x29dc20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29dc24:
    // 0x29dc24: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29dc28:
    // 0x29dc28: 0x10  mfhi        $zero
    ctx->pc = 0x29dc28u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29dc2c:
    // 0x29dc2c: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29dc2cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dc30:
    // 0x29dc30: 0xd  break       0
    ctx->pc = 0x29dc30u;
    runtime->handleBreak(rdram, ctx);
label_29dc34:
    // 0x29dc34: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29dc34u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29dc38:
    // 0x29dc38: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29dc38u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29dc3c:
    // 0x29dc3c: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc3cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29dc40:
    // 0x29dc40: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29dc40u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29dc44:
    // 0x29dc44: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29dc48:
    // 0x29dc48: 0x8  jr          $zero
label_29dc4c:
    if (ctx->pc == 0x29DC4Cu) {
        ctx->pc = 0x29DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC48u;
        // 0x29dc4c: 0x11940  sll         $v1, $at, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC50u;
        goto label_29dc50;
    }
    ctx->pc = 0x29DC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC48u;
        // 0x29dc4c: 0x11940  sll         $v1, $at, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DC48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29DC50u;
label_29dc50:
    // 0x29dc50: 0xc  syscall     0
    ctx->pc = 0x29dc50u;
    ctx->pc = 0x29DC54u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29dc54:
    // 0x29dc54: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29dc58:
    // 0x29dc58: 0x11  mthi        $zero
    ctx->pc = 0x29dc58u;
    ctx->hi = GPR_U64(ctx, 0);
label_29dc5c:
    // 0x29dc5c: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29dc5cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dc60:
    // 0x29dc60: 0x9  jalr        $zero, $zero
label_29dc64:
    if (ctx->pc == 0x29DC64u) {
        ctx->pc = 0x29DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC60u;
        // 0x29dc64: 0xa8c0  sll         $s5, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC68u;
        goto label_29dc68;
    }
    ctx->pc = 0x29DC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC60u;
        // 0x29dc64: 0xa8c0  sll         $s5, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DC60u, 0x29DC68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DC68u;
label_29dc68:
    // 0x29dc68: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29dc68u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29dc6c:
    // 0x29dc6c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc6cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29dc70:
    // 0x29dc70: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DC70 raw=0x0000000E");
 /* MITIGATED */
label_29dc74:
    // 0x29dc74: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29dc78:
    // 0x29dc78: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc78u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DC78 raw=0x00000001");
 /* MITIGATED */
label_29dc7c:
    // 0x29dc7c: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29dc7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dc80:
    // 0x29dc80: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29dc80u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29dc84:
    // 0x29dc84: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29dc84u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29dc88:
    // 0x29dc88: 0x0  nop
    ctx->pc = 0x29dc88u;
    // NOP
label_29dc8c:
    // 0x29dc8c: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc8cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29dc90:
    // 0x29dc90: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29dc90u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29dc94:
    // 0x29dc94: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29dc98:
    // 0x29dc98: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29dc98u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29dc9c:
    // 0x29dc9c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29dca0:
    // 0x29dca0: 0x23  negu        $zero, $zero
    ctx->pc = 0x29dca0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29dca4:
    // 0x29dca4: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29dca8:
    // 0x29dca8: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29dca8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29dcac:
    // 0x29dcac: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29dcacu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dcb0:
    // 0x29dcb0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29dcb0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29dcb4:
    // 0x29dcb4: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29dcb4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29dcb8:
    // 0x29dcb8: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29dcb8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29dcbc:
    // 0x29dcbc: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dcbcu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29dcc0:
    // 0x29dcc0: 0x19  multu       $zero, $zero
    ctx->pc = 0x29dcc0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29dcc4:
    // 0x29dcc4: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dcc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29dcc8:
    // 0x29dcc8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29dcc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29dccc:
    // 0x29dccc: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29dcccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dcd0:
    // 0x29dcd0: 0x8  jr          $zero
label_29dcd4:
    if (ctx->pc == 0x29DCD4u) {
        ctx->pc = 0x29DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCD0u;
        // 0x29dcd4: 0xe100  sll         $gp, $zero, 4 (Delay Slot)
        SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DCD8u;
        goto label_29dcd8;
    }
    ctx->pc = 0x29DCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCD0u;
        // 0x29dcd4: 0xe100  sll         $gp, $zero, 4 (Delay Slot)
        SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DCD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29DCD8u;
label_29dcd8:
    // 0x29dcd8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29dcd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29dcdc:
    // 0x29dcdc: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dcdcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29dce0:
    // 0x29dce0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29dce0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29dce4:
    // 0x29dce4: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29dce8:
    // 0x29dce8: 0x10  mfhi        $zero
    ctx->pc = 0x29dce8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29dcec:
    // 0x29dcec: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29dcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29dcf0:
    // 0x29dcf0: 0x12  mflo        $zero
    ctx->pc = 0x29dcf0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29dcf4:
    // 0x29dcf4: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29dcf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dcf8:
    // 0x29dcf8: 0xc  syscall     0
    ctx->pc = 0x29dcf8u;
    ctx->pc = 0x29DCFCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29dcfc:
    // 0x29dcfc: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29dd00:
    // 0x29dd00: 0x11  mthi        $zero
    ctx->pc = 0x29dd00u;
    ctx->hi = GPR_U64(ctx, 0);
label_29dd04:
    // 0x29dd04: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dd04u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29dd08:
    // 0x29dd08: 0x9  jalr        $zero, $zero
label_29dd0c:
    if (ctx->pc == 0x29DD0Cu) {
        ctx->pc = 0x29DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD08u;
        // 0x29dd0c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD10u;
        goto label_29dd10;
    }
    ctx->pc = 0x29DD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD08u;
        // 0x29dd0c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DD08u, 0x29DD10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DD10u;
label_29dd10:
    // 0x29dd10: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29dd10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29dd14:
    // 0x29dd14: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29dd14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29dd18:
    // 0x29dd18: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dd18u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DD18 raw=0x00000001");
 /* MITIGATED */
label_29dd1c:
    // 0x29dd1c: 0x23280  sll         $a2, $v0, 10
    ctx->pc = 0x29dd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_29dd20:
    // 0x29dd20: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29dd20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29dd24:
    // 0x29dd24: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dd24u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29dd28:
    // 0x29dd28: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29dd28u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29DD28 raw=0x0000001D");
 /* MITIGATED */
label_29dd2c:
    // 0x29dd2c: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dd2cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29dd30:
    // 0x29dd30: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29dd30u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29dd34:
    // 0x29dd34: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29dd34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29dd38:
    // 0x29dd38: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dd38u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29DD38 raw=0x00000015");
 /* MITIGATED */
label_29dd3c:
    // 0x29dd3c: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29dd3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29dd40:
    // 0x29dd40: 0x9  jalr        $zero, $zero
label_29dd44:
    if (ctx->pc == 0x29DD44u) {
        ctx->pc = 0x29DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD40u;
        // 0x29dd44: 0x11940  sll         $v1, $at, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DD48u;
        goto label_29dd48;
    }
    ctx->pc = 0x29DD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DD40u;
        // 0x29dd44: 0x11940  sll         $v1, $at, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DD40u, 0x29DD48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DD48u;
label_29dd48:
    // 0x29dd48: 0xc  syscall     0
    ctx->pc = 0x29dd48u;
    ctx->pc = 0x29DD4Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29dd4c:
    // 0x29dd4c: 0x12750  .word       0x00012750                   # mfhi        $a0 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dd4cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_29dd50:
    // 0x29dd50: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29dd50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29dd54:
    // 0x29dd54: 0x13560  .word       0x00013560                   # add         $a2, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dd54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_29dd58:
    // 0x29dd58: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dd58u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DD58 raw=0x00000001");
 /* MITIGATED */
label_29dd5c:
    // 0x29dd5c: 0x14370  tge         $zero, $at, 269
    ctx->pc = 0x29dd5cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29dd60:
    // 0x29dd60: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29dd60u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29dd64:
    // 0x29dd64: 0x15180  sll         $t2, $at, 6
    ctx->pc = 0x29dd64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_29dd68:
    // 0x29dd68: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29dd68u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29dd6c:
    // 0x29dd6c: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dd6cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29dd70:
    // 0x29dd70: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29dd70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29DD70 raw=0x0000001D");
 /* MITIGATED */
label_29dd74:
    // 0x29dd74: 0x16da0  .word       0x00016DA0                   # add         $t5, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dd74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_29dd78:
    // 0x29dd78: 0x19  multu       $zero, $zero
    ctx->pc = 0x29dd78u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29dd7c:
    // 0x29dd7c: 0x17bb0  tge         $zero, $at, 494
    ctx->pc = 0x29dd7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29dd80:
    // 0x29dd80: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29dd80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29DD80 raw=0x0000001F");
 /* MITIGATED */
label_29dd84:
    // 0x29dd84: 0x189c0  sll         $s1, $at, 7
    ctx->pc = 0x29dd84u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 7));
label_29dd88:
    // 0x29dd88: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29dd88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29dd8c:
    // 0x29dd8c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dd8cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29dd90:
    // 0x29dd90: 0xc  syscall     0
    ctx->pc = 0x29dd90u;
    ctx->pc = 0x29DD94u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29dd94:
    // 0x29dd94: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29dd94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dd98:
    // 0x29dd98: 0x12  mflo        $zero
    ctx->pc = 0x29dd98u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29dd9c:
    // 0x29dd9c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29dda0:
    // 0x29dda0: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29dda0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29dda4:
    // 0x29dda4: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dda4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29dda8:
    // 0x29dda8: 0x23  negu        $zero, $zero
    ctx->pc = 0x29dda8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29ddac:
    // 0x29ddac: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ddacu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29ddb0:
    // 0x29ddb0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29ddb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29ddb4:
    // 0x29ddb4: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29ddb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29ddb8:
    // 0x29ddb8: 0x9  jalr        $zero, $zero
label_29ddbc:
    if (ctx->pc == 0x29DDBCu) {
        ctx->pc = 0x29DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDB8u;
        // 0x29ddbc: 0x23280  sll         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DDC0u;
        goto label_29ddc0;
    }
    ctx->pc = 0x29DDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDB8u;
        // 0x29ddbc: 0x23280  sll         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DDB8u, 0x29DDC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DDC0u;
label_29ddc0:
    // 0x29ddc0: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29ddc0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29DDC0 raw=0x0000001D");
 /* MITIGATED */
label_29ddc4:
    // 0x29ddc4: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ddc4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29ddc8:
    // 0x29ddc8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ddc8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DDC8 raw=0x0000000E");
 /* MITIGATED */
label_29ddcc:
    // 0x29ddcc: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ddccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29ddd0:
    // 0x29ddd0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ddd0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DDD0 raw=0x00000001");
 /* MITIGATED */
label_29ddd4:
    // 0x29ddd4: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29ddd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29ddd8:
    // 0x29ddd8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29ddd8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29dddc:
    // 0x29dddc: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29dddcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29dde0:
    // 0x29dde0: 0x11  mthi        $zero
    ctx->pc = 0x29dde0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29dde4:
    // 0x29dde4: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29dde4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dde8:
    // 0x29dde8: 0xc  syscall     0
    ctx->pc = 0x29dde8u;
    ctx->pc = 0x29DDECu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29ddec:
    // 0x29ddec: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29ddf0:
    // 0x29ddf0: 0x9  jalr        $zero, $zero
label_29ddf4:
    if (ctx->pc == 0x29DDF4u) {
        ctx->pc = 0x29DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDF0u;
        // 0x29ddf4: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DDF8u;
        goto label_29ddf8;
    }
    ctx->pc = 0x29DDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDF0u;
        // 0x29ddf4: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DDF0u, 0x29DDF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DDF8u;
label_29ddf8:
    // 0x29ddf8: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29ddf8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29ddfc:
    // 0x29ddfc: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ddfcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29de00:
    // 0x29de00: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29de00u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29de04:
    // 0x29de04: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29de04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29de08:
    // 0x29de08: 0xf  sync
    ctx->pc = 0x29de08u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29de0c:
    // 0x29de0c: 0x23280  sll         $a2, $v0, 10
    ctx->pc = 0x29de0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_29de10:
    // 0x29de10: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DE10 raw=0x0000000E");
 /* MITIGATED */
label_29de14:
    // 0x29de14: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de14u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29de18:
    // 0x29de18: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29de18u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29de1c:
    // 0x29de1c: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de1cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29de20:
    // 0x29de20: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29de20u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29de24:
    // 0x29de24: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29de24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29de28:
    // 0x29de28: 0x0  nop
    ctx->pc = 0x29de28u;
    // NOP
label_29de2c:
    // 0x29de2c: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29de2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29de30:
    // 0x29de30: 0x23  negu        $zero, $zero
    ctx->pc = 0x29de30u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29de34:
    // 0x29de34: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29de38:
    // 0x29de38: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29de38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29de3c:
    // 0x29de3c: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29de3cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29de40:
    // 0x29de40: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29de40u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29de44:
    // 0x29de44: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29de44u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29de48:
    // 0x29de48: 0x22  neg         $zero, $zero
    ctx->pc = 0x29de48u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29de4c:
    // 0x29de4c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de4cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29de50:
    // 0x29de50: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DE50 raw=0x0000000E");
 /* MITIGATED */
label_29de54:
    // 0x29de54: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29de58:
    // 0x29de58: 0x0  nop
    ctx->pc = 0x29de58u;
    // NOP
label_29de5c:
    // 0x29de5c: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29de5cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29de60:
    // 0x29de60: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de60u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DE60 raw=0x00000001");
 /* MITIGATED */
label_29de64:
    // 0x29de64: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29de64u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29de68:
    // 0x29de68: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29de68u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29de6c:
    // 0x29de6c: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de6cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29de70:
    // 0x29de70: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29de70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29de74:
    // 0x29de74: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29de78:
    // 0x29de78: 0x13  mtlo        $zero
    ctx->pc = 0x29de78u;
    ctx->lo = GPR_U64(ctx, 0);
label_29de7c:
    // 0x29de7c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29de80:
    // 0x29de80: 0x11  mthi        $zero
    ctx->pc = 0x29de80u;
    ctx->hi = GPR_U64(ctx, 0);
label_29de84:
    // 0x29de84: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29de88:
    // 0x29de88: 0x13  mtlo        $zero
    ctx->pc = 0x29de88u;
    ctx->lo = GPR_U64(ctx, 0);
label_29de8c:
    // 0x29de8c: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29de8cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29de90:
    // 0x29de90: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29de90u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29de94:
    // 0x29de94: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29de94u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29de98:
    // 0x29de98: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de98u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29DE98 raw=0x00000005");
 /* MITIGATED */
label_29de9c:
    // 0x29de9c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de9cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29dea0:
    // 0x29dea0: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29dea0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29DEA0 raw=0x0000001C");
 /* MITIGATED */
label_29dea4:
    // 0x29dea4: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29dea8:
    // 0x29dea8: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29dea8u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29deac:
    // 0x29deac: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29deacu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29deb0:
    // 0x29deb0: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29deb0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29deb4:
    // 0x29deb4: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29deb4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29deb8:
    // 0x29deb8: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29deb8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29DEB8 raw=0x00000015");
 /* MITIGATED */
label_29debc:
    // 0x29debc: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29debcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29dec0:
    // 0x29dec0: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29dec0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29DEC0 raw=0x0000001D");
 /* MITIGATED */
label_29dec4:
    // 0x29dec4: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dec4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29dec8:
    // 0x29dec8: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29dec8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29decc:
    // 0x29decc: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29deccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29ded0:
    // 0x29ded0: 0x11  mthi        $zero
    ctx->pc = 0x29ded0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29ded4:
    // 0x29ded4: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29ded4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ded8:
    // 0x29ded8: 0x12  mflo        $zero
    ctx->pc = 0x29ded8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29dedc:
    // 0x29dedc: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29dee0:
    // 0x29dee0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29dee0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29dee4:
    // 0x29dee4: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dee4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29dee8:
    // 0x29dee8: 0x23  negu        $zero, $zero
    ctx->pc = 0x29dee8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29deec:
    // 0x29deec: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29deecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29def0:
    // 0x29def0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29def0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29def4:
    // 0x29def4: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29def4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29def8:
    // 0x29def8: 0x10  mfhi        $zero
    ctx->pc = 0x29def8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29defc:
    // 0x29defc: 0x23280  sll         $a2, $v0, 10
    ctx->pc = 0x29defcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_29df00:
    // 0x29df00: 0x25  move        $zero, $zero
    ctx->pc = 0x29df00u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29df04:
    // 0x29df04: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29df04u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29df08:
    // 0x29df08: 0x19  multu       $zero, $zero
    ctx->pc = 0x29df08u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29df0c:
    // 0x29df0c: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29df0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29df10:
    // 0x29df10: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29df10u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29df14:
    // 0x29df14: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29df14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29df18:
    // 0x29df18: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29df18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29df1c:
    // 0x29df1c: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29df1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29df20:
    // 0x29df20: 0x12  mflo        $zero
    ctx->pc = 0x29df20u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29df24:
    // 0x29df24: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29df24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29df28:
    // 0x29df28: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29df28u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DF28 raw=0x00000001");
 /* MITIGATED */
label_29df2c:
    // 0x29df2c: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29df2cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29df30:
    // 0x29df30: 0x10  mfhi        $zero
    ctx->pc = 0x29df30u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29df34:
    // 0x29df34: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29df34u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29df38:
    // 0x29df38: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29df38u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29DF38 raw=0x0000001D");
 /* MITIGATED */
label_29df3c:
    // 0x29df3c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29df3cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29df40:
    // 0x29df40: 0x19  multu       $zero, $zero
    ctx->pc = 0x29df40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29df44:
    // 0x29df44: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29df44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29df48:
    // 0x29df48: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29df48u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29df4c:
    // 0x29df4c: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29df4cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29df50:
    // 0x29df50: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29df50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29df54:
    // 0x29df54: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29df54u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29df58:
    // 0x29df58: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29df58u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29DF58 raw=0x0000001C");
 /* MITIGATED */
label_29df5c:
    // 0x29df5c: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29df5cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29df60:
    // 0x29df60: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29df60u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29df64:
    // 0x29df64: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29df64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29df68:
    // 0x29df68: 0x8  jr          $zero
label_29df6c:
    if (ctx->pc == 0x29DF6Cu) {
        ctx->pc = 0x29DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF68u;
        // 0x29df6c: 0x11940  sll         $v1, $at, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DF70u;
        goto label_29df70;
    }
    ctx->pc = 0x29DF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF68u;
        // 0x29df6c: 0x11940  sll         $v1, $at, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DF68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29DF70u;
label_29df70:
    // 0x29df70: 0x9  jalr        $zero, $zero
label_29df74:
    if (ctx->pc == 0x29DF74u) {
        ctx->pc = 0x29DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF70u;
        // 0x29df74: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DF78u;
        goto label_29df78;
    }
    ctx->pc = 0x29DF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DF70u;
        // 0x29df74: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DF70u, 0x29DF78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DF78u;
label_29df78:
    // 0x29df78: 0xc  syscall     0
    ctx->pc = 0x29df78u;
    ctx->pc = 0x29DF7Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29df7c:
    // 0x29df7c: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29df7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29df80:
    // 0x29df80: 0x11  mthi        $zero
    ctx->pc = 0x29df80u;
    ctx->hi = GPR_U64(ctx, 0);
label_29df84:
    // 0x29df84: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29df84u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29df88:
    // 0x29df88: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29df88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29df8c:
    // 0x29df8c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29df8cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29df90:
    // 0x29df90: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29df90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DF90 raw=0x0000000E");
 /* MITIGATED */
label_29df94:
    // 0x29df94: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29df94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29df98:
    // 0x29df98: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29df98u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29df9c:
    // 0x29df9c: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29df9cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dfa0:
    // 0x29dfa0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29dfa0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29dfa4:
    // 0x29dfa4: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29dfa4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29dfa8:
    // 0x29dfa8: 0x0  nop
    ctx->pc = 0x29dfa8u;
    // NOP
label_29dfac:
    // 0x29dfac: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dfacu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29dfb0:
    // 0x29dfb0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29dfb0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29dfb4:
    // 0x29dfb4: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dfb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29dfb8:
    // 0x29dfb8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dfb8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DFB8 raw=0x00000001");
 /* MITIGATED */
label_29dfbc:
    // 0x29dfbc: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29dfc0:
    // 0x29dfc0: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29dfc0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29dfc4:
    // 0x29dfc4: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29dfc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dfc8:
    // 0x29dfc8: 0x23  negu        $zero, $zero
    ctx->pc = 0x29dfc8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29dfcc:
    // 0x29dfcc: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29dfd0:
    // 0x29dfd0: 0x9  jalr        $zero, $zero
label_29dfd4:
    if (ctx->pc == 0x29DFD4u) {
        ctx->pc = 0x29DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFD0u;
        // 0x29dfd4: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DFD8u;
        goto label_29dfd8;
    }
    ctx->pc = 0x29DFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFD0u;
        // 0x29dfd4: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DFD0u, 0x29DFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DFD8u;
label_29dfd8:
    // 0x29dfd8: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29dfd8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29dfdc:
    // 0x29dfdc: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dfdcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29dfe0:
    // 0x29dfe0: 0xc  syscall     0
    ctx->pc = 0x29dfe0u;
    ctx->pc = 0x29DFE4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29dfe4:
    // 0x29dfe4: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29dfe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29dfe8:
    // 0x29dfe8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dfe8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DFE8 raw=0x0000000E");
 /* MITIGATED */
label_29dfec:
    // 0x29dfec: 0x23280  sll         $a2, $v0, 10
    ctx->pc = 0x29dfecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_29dff0:
    // 0x29dff0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29dff0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29dff4:
    // 0x29dff4: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dff4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29dff8:
    // 0x29dff8: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29dff8u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29dffc:
    // 0x29dffc: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dffcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29e000:
    // 0x29e000: 0x0  nop
    ctx->pc = 0x29e000u;
    // NOP
label_29e004:
    // 0x29e004: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29e004u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29e008:
    // 0x29e008: 0x13  mtlo        $zero
    ctx->pc = 0x29e008u;
    ctx->lo = GPR_U64(ctx, 0);
label_29e00c:
    // 0x29e00c: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29e00cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29e010:
    // 0x29e010: 0x23  negu        $zero, $zero
    ctx->pc = 0x29e010u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29e014:
    // 0x29e014: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29e014u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e018:
    // 0x29e018: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29e018u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29e01c:
    // 0x29e01c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e020:
    // 0x29e020: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29e020u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29e024:
    // 0x29e024: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e024u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29e028:
    // 0x29e028: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29e028u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29e02c:
    // 0x29e02c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e02cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29e030:
    // 0x29e030: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e030u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29E030 raw=0x0000000E");
 /* MITIGATED */
label_29e034:
    // 0x29e034: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29e034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29e038:
    // 0x29e038: 0xd  break       0
    ctx->pc = 0x29e038u;
    runtime->handleBreak(rdram, ctx);
label_29e03c:
    // 0x29e03c: 0x23280  sll         $a2, $v0, 10
    ctx->pc = 0x29e03cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_29e040:
    // 0x29e040: 0x13  mtlo        $zero
    ctx->pc = 0x29e040u;
    ctx->lo = GPR_U64(ctx, 0);
label_29e044:
    // 0x29e044: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e044u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29e048:
    // 0x29e048: 0x0  nop
    ctx->pc = 0x29e048u;
    // NOP
label_29e04c:
    // 0x29e04c: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e04cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29e050:
    // 0x29e050: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29e050u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29e054:
    // 0x29e054: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29e054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29e058:
    // 0x29e058: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e058u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29E058 raw=0x00000001");
 /* MITIGATED */
label_29e05c:
    // 0x29e05c: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29e05cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29e060:
    // 0x29e060: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29e060u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29E060 raw=0x0000001D");
 /* MITIGATED */
label_29e064:
    // 0x29e064: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29e068:
    // 0x29e068: 0x12  mflo        $zero
    ctx->pc = 0x29e068u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29e06c:
    // 0x29e06c: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29e06cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e070:
    // 0x29e070: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29e070u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29e074:
    // 0x29e074: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29e074u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29e078:
    // 0x29e078: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29e078u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29E078 raw=0x0000001E");
 /* MITIGATED */
label_29e07c:
    // 0x29e07c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e07cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29e080:
    // 0x29e080: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29e080u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29e084:
    // 0x29e084: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29e088:
    // 0x29e088: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e088u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29E088 raw=0x00000015");
 /* MITIGATED */
label_29e08c:
    // 0x29e08c: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29e08cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e090:
    // 0x29e090: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29e090u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29e094:
    // 0x29e094: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29e094u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29e098:
    // 0x29e098: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29e098u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e09c:
    // 0x29e09c: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e09cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29e0a0:
    // 0x29e0a0: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e0a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29E0A0 raw=0x00000005");
 /* MITIGATED */
label_29e0a4:
    // 0x29e0a4: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29e0a8:
    // 0x29e0a8: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29e0a8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29E0A8 raw=0x0000001C");
 /* MITIGATED */
label_29e0ac:
    // 0x29e0ac: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e0b0:
    // 0x29e0b0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29e0b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29e0b4:
    // 0x29e0b4: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e0b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29e0b8:
    // 0x29e0b8: 0x23  negu        $zero, $zero
    ctx->pc = 0x29e0b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29e0bc:
    // 0x29e0bc: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29e0bcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e0c0:
    // 0x29e0c0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29e0c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29e0c4:
    // 0x29e0c4: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29e0c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29e0c8:
    // 0x29e0c8: 0x25  move        $zero, $zero
    ctx->pc = 0x29e0c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29e0cc:
    // 0x29e0cc: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e0ccu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29e0d0:
    // 0x29e0d0: 0x19  multu       $zero, $zero
    ctx->pc = 0x29e0d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29e0d4:
    // 0x29e0d4: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e0d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29e0d8:
    // 0x29e0d8: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29e0d8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e0dc:
    // 0x29e0dc: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29e0dcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e0e0:
    // 0x29e0e0: 0xd  break       0
    ctx->pc = 0x29e0e0u;
    runtime->handleBreak(rdram, ctx);
label_29e0e4:
    // 0x29e0e4: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29e0e4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29e0e8:
    // 0x29e0e8: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29e0e8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29e0ec:
    // 0x29e0ec: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e0ecu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29e0f0:
    // 0x29e0f0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29e0f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e0f4:
    // 0x29e0f4: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e0f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29e0f8:
    // 0x29e0f8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29e0f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29e0fc:
    // 0x29e0fc: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e100:
    // 0x29e100: 0xc  syscall     0
    ctx->pc = 0x29e100u;
    ctx->pc = 0x29E104u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29e104:
    // 0x29e104: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29e104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e108:
    // 0x29e108: 0x23  negu        $zero, $zero
    ctx->pc = 0x29e108u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29e10c:
    // 0x29e10c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e110:
    // 0x29e110: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29e110u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29e114:
    // 0x29e114: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e114u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29e118:
    // 0x29e118: 0x9  jalr        $zero, $zero
label_29e11c:
    if (ctx->pc == 0x29E11Cu) {
        ctx->pc = 0x29E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E118u;
        // 0x29e11c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E120u;
        goto label_29e120;
    }
    ctx->pc = 0x29E118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E118u;
        // 0x29e11c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E118u, 0x29E120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29E120u;
label_29e120:
    // 0x29e120: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29e120u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29e124:
    // 0x29e124: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29e124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29e128:
    // 0x29e128: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29e128u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29e12c:
    // 0x29e12c: 0x23280  sll         $a2, $v0, 10
    ctx->pc = 0x29e12cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_29e130:
    // 0x29e130: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29e130u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e134:
    // 0x29e134: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e134u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29e138:
    // 0x29e138: 0x19  multu       $zero, $zero
    ctx->pc = 0x29e138u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29e13c:
    // 0x29e13c: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e13cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29e140:
    // 0x29e140: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29e140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29e144:
    // 0x29e144: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29e144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29e148:
    // 0x29e148: 0xd  break       0
    ctx->pc = 0x29e148u;
    runtime->handleBreak(rdram, ctx);
label_29e14c:
    // 0x29e14c: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29e14cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29e150:
    // 0x29e150: 0x12  mflo        $zero
    ctx->pc = 0x29e150u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29e154:
    // 0x29e154: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29e154u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e158:
    // 0x29e158: 0x11  mthi        $zero
    ctx->pc = 0x29e158u;
    ctx->hi = GPR_U64(ctx, 0);
label_29e15c:
    // 0x29e15c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e160:
    // 0x29e160: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29e160u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29E160 raw=0x0000001D");
 /* MITIGATED */
label_29e164:
    // 0x29e164: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e164u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29e168:
    // 0x29e168: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29e168u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29e16c:
    // 0x29e16c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e16cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29e170:
    // 0x29e170: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29e170u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29e174:
    // 0x29e174: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29e174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29e178:
    // 0x29e178: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29e178u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29e17c:
    // 0x29e17c: 0x23280  sll         $a2, $v0, 10
    ctx->pc = 0x29e17cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_29e180:
    // 0x29e180: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x29e180u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29e184:
    // 0x29e184: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e184u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29e188:
    // 0x29e188: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29e188u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29e18c:
    // 0x29e18c: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e18cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29e190:
    // 0x29e190: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e190u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29E190 raw=0x0000000E");
 /* MITIGATED */
label_29e194:
    // 0x29e194: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29e194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29e198:
    // 0x29e198: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29e198u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e19c:
    // 0x29e19c: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29e19cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29e1a0:
    // 0x29e1a0: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29e1a0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29e1a4:
    // 0x29e1a4: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29e1a8:
    // 0x29e1a8: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29e1a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29e1ac:
    // 0x29e1ac: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29e1acu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e1b0:
    // 0x29e1b0: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29E1B0 raw=0x00000005");
 /* MITIGATED */
label_29e1b4:
    // 0x29e1b4: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29e1b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29e1b8:
    // 0x29e1b8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29e1b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e1bc:
    // 0x29e1bc: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1bcu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29e1c0:
    // 0x29e1c0: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29e1c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29e1c4:
    // 0x29e1c4: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29e1c8:
    // 0x29e1c8: 0xd  break       0
    ctx->pc = 0x29e1c8u;
    runtime->handleBreak(rdram, ctx);
label_29e1cc:
    // 0x29e1cc: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29e1ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e1d0:
    // 0x29e1d0: 0x22  neg         $zero, $zero
    ctx->pc = 0x29e1d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29e1d4:
    // 0x29e1d4: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29e1d4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29e1d8:
    // 0x29e1d8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29e1d8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29e1dc:
    // 0x29e1dc: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1dcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29e1e0:
    // 0x29e1e0: 0x13  mtlo        $zero
    ctx->pc = 0x29e1e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_29e1e4:
    // 0x29e1e4: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29e1e8:
    // 0x29e1e8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1e8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29E1E8 raw=0x0000000E");
 /* MITIGATED */
label_29e1ec:
    // 0x29e1ec: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e1f0:
    // 0x29e1f0: 0x11  mthi        $zero
    ctx->pc = 0x29e1f0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29e1f4:
    // 0x29e1f4: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29e1f8:
    // 0x29e1f8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29e1f8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e1fc:
    // 0x29e1fc: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29e1fcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e200:
    // 0x29e200: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e200u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29E200 raw=0x00000005");
 /* MITIGATED */
label_29e204:
    // 0x29e204: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29e204u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29e208:
    // 0x29e208: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e208u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29E208 raw=0x00000015");
 /* MITIGATED */
label_29e20c:
    // 0x29e20c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e20cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29e210:
    // 0x29e210: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29e210u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29E210 raw=0x0000001E");
 /* MITIGATED */
label_29e214:
    // 0x29e214: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29e218:
    // 0x29e218: 0x8  jr          $zero
label_29e21c:
    if (ctx->pc == 0x29E21Cu) {
        ctx->pc = 0x29E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E218u;
        // 0x29e21c: 0xd2f0  tge         $zero, $zero, 843 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E220u;
        goto label_29e220;
    }
    ctx->pc = 0x29E218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E218u;
        // 0x29e21c: 0xd2f0  tge         $zero, $zero, 843 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E218u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29E220u;
label_29e220:
    // 0x29e220: 0x10  mfhi        $zero
    ctx->pc = 0x29e220u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29e224:
    // 0x29e224: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29e224u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29e228:
    // 0x29e228: 0xd  break       0
    ctx->pc = 0x29e228u;
    runtime->handleBreak(rdram, ctx);
label_29e22c:
    // 0x29e22c: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e22cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29e230:
    // 0x29e230: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29e230u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29e234:
    // 0x29e234: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29e238:
    // 0x29e238: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29e238u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29e23c:
    // 0x29e23c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e240:
    // 0x29e240: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29e240u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29e244:
    // 0x29e244: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29e248:
    // 0x29e248: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29e248u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e24c:
    // 0x29e24c: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29e24cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e250:
    // 0x29e250: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29e250u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29e254:
    // 0x29e254: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29e254u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29e258:
    // 0x29e258: 0x19  multu       $zero, $zero
    ctx->pc = 0x29e258u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29e25c:
    // 0x29e25c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e25cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29e260:
    // 0x29e260: 0x8  jr          $zero
label_29e264:
    if (ctx->pc == 0x29E264u) {
        ctx->pc = 0x29E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E260u;
        // 0x29e264: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E268u;
        goto label_29e268;
    }
    ctx->pc = 0x29E260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E260u;
        // 0x29e264: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E260u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29E268u;
label_29e268:
    // 0x29e268: 0xf  sync
    ctx->pc = 0x29e268u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29e26c:
    // 0x29e26c: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29e26cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e270:
    // 0x29e270: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29e270u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29e274:
    // 0x29e274: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29e274u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29e278:
    // 0x29e278: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29e278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29e27c:
    // 0x29e27c: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e27cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29e280:
    // 0x29e280: 0x10  mfhi        $zero
    ctx->pc = 0x29e280u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29e284:
    // 0x29e284: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29e288:
    // 0x29e288: 0xd  break       0
    ctx->pc = 0x29e288u;
    runtime->handleBreak(rdram, ctx);
label_29e28c:
    // 0x29e28c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e290:
    // 0x29e290: 0x0  nop
    ctx->pc = 0x29e290u;
    // NOP
label_29e294:
    // 0x29e294: 0x0  nop
    ctx->pc = 0x29e294u;
    // NOP
label_29e298:
    // 0x29e298: 0x0  nop
    ctx->pc = 0x29e298u;
    // NOP
label_29e29c:
    // 0x29e29c: 0x0  nop
    ctx->pc = 0x29e29cu;
    // NOP
label_29e2a0:
    // 0x29e2a0: 0x0  nop
    ctx->pc = 0x29e2a0u;
    // NOP
label_29e2a4:
    // 0x29e2a4: 0x0  nop
    ctx->pc = 0x29e2a4u;
    // NOP
label_29e2a8:
    // 0x29e2a8: 0x0  nop
    ctx->pc = 0x29e2a8u;
    // NOP
label_29e2ac:
    // 0x29e2ac: 0x0  nop
    ctx->pc = 0x29e2acu;
    // NOP
label_29e2b0:
    // 0x29e2b0: 0x0  nop
    ctx->pc = 0x29e2b0u;
    // NOP
label_29e2b4:
    // 0x29e2b4: 0x0  nop
    ctx->pc = 0x29e2b4u;
    // NOP
label_29e2b8:
    // 0x29e2b8: 0x0  nop
    ctx->pc = 0x29e2b8u;
    // NOP
label_29e2bc:
    // 0x29e2bc: 0x0  nop
    ctx->pc = 0x29e2bcu;
    // NOP
label_29e2c0:
    // 0x29e2c0: 0x0  nop
    ctx->pc = 0x29e2c0u;
    // NOP
label_29e2c4:
    // 0x29e2c4: 0x0  nop
    ctx->pc = 0x29e2c4u;
    // NOP
label_29e2c8:
    // 0x29e2c8: 0x0  nop
    ctx->pc = 0x29e2c8u;
    // NOP
label_29e2cc:
    // 0x29e2cc: 0x0  nop
    ctx->pc = 0x29e2ccu;
    // NOP
    ctx->pc = 0x29e2d0u;
    return;
}
