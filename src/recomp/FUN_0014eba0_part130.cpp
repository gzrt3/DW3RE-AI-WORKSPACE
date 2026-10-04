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


void FUN_0014eba0_part130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18db70u: goto label_18db70;
        case 0x18db74u: goto label_18db74;
        case 0x18db78u: goto label_18db78;
        case 0x18db7cu: goto label_18db7c;
        case 0x18db80u: goto label_18db80;
        case 0x18db84u: goto label_18db84;
        case 0x18db88u: goto label_18db88;
        case 0x18db8cu: goto label_18db8c;
        case 0x18db90u: goto label_18db90;
        case 0x18db94u: goto label_18db94;
        case 0x18db98u: goto label_18db98;
        case 0x18db9cu: goto label_18db9c;
        case 0x18dba0u: goto label_18dba0;
        case 0x18dba4u: goto label_18dba4;
        case 0x18dba8u: goto label_18dba8;
        case 0x18dbacu: goto label_18dbac;
        case 0x18dbb0u: goto label_18dbb0;
        case 0x18dbb4u: goto label_18dbb4;
        case 0x18dbb8u: goto label_18dbb8;
        case 0x18dbbcu: goto label_18dbbc;
        case 0x18dbc0u: goto label_18dbc0;
        case 0x18dbc4u: goto label_18dbc4;
        case 0x18dbc8u: goto label_18dbc8;
        case 0x18dbccu: goto label_18dbcc;
        case 0x18dbd0u: goto label_18dbd0;
        case 0x18dbd4u: goto label_18dbd4;
        case 0x18dbd8u: goto label_18dbd8;
        case 0x18dbdcu: goto label_18dbdc;
        case 0x18dbe0u: goto label_18dbe0;
        case 0x18dbe4u: goto label_18dbe4;
        case 0x18dbe8u: goto label_18dbe8;
        case 0x18dbecu: goto label_18dbec;
        case 0x18dbf0u: goto label_18dbf0;
        case 0x18dbf4u: goto label_18dbf4;
        case 0x18dbf8u: goto label_18dbf8;
        case 0x18dbfcu: goto label_18dbfc;
        case 0x18dc00u: goto label_18dc00;
        case 0x18dc04u: goto label_18dc04;
        case 0x18dc08u: goto label_18dc08;
        case 0x18dc0cu: goto label_18dc0c;
        case 0x18dc10u: goto label_18dc10;
        case 0x18dc14u: goto label_18dc14;
        case 0x18dc18u: goto label_18dc18;
        case 0x18dc1cu: goto label_18dc1c;
        case 0x18dc20u: goto label_18dc20;
        case 0x18dc24u: goto label_18dc24;
        case 0x18dc28u: goto label_18dc28;
        case 0x18dc2cu: goto label_18dc2c;
        case 0x18dc30u: goto label_18dc30;
        case 0x18dc34u: goto label_18dc34;
        case 0x18dc38u: goto label_18dc38;
        case 0x18dc3cu: goto label_18dc3c;
        case 0x18dc40u: goto label_18dc40;
        case 0x18dc44u: goto label_18dc44;
        case 0x18dc48u: goto label_18dc48;
        case 0x18dc4cu: goto label_18dc4c;
        case 0x18dc50u: goto label_18dc50;
        case 0x18dc54u: goto label_18dc54;
        case 0x18dc58u: goto label_18dc58;
        case 0x18dc5cu: goto label_18dc5c;
        case 0x18dc60u: goto label_18dc60;
        case 0x18dc64u: goto label_18dc64;
        case 0x18dc68u: goto label_18dc68;
        case 0x18dc6cu: goto label_18dc6c;
        case 0x18dc70u: goto label_18dc70;
        case 0x18dc74u: goto label_18dc74;
        case 0x18dc78u: goto label_18dc78;
        case 0x18dc7cu: goto label_18dc7c;
        case 0x18dc80u: goto label_18dc80;
        case 0x18dc84u: goto label_18dc84;
        case 0x18dc88u: goto label_18dc88;
        case 0x18dc8cu: goto label_18dc8c;
        case 0x18dc90u: goto label_18dc90;
        case 0x18dc94u: goto label_18dc94;
        case 0x18dc98u: goto label_18dc98;
        case 0x18dc9cu: goto label_18dc9c;
        case 0x18dca0u: goto label_18dca0;
        case 0x18dca4u: goto label_18dca4;
        case 0x18dca8u: goto label_18dca8;
        case 0x18dcacu: goto label_18dcac;
        case 0x18dcb0u: goto label_18dcb0;
        case 0x18dcb4u: goto label_18dcb4;
        case 0x18dcb8u: goto label_18dcb8;
        case 0x18dcbcu: goto label_18dcbc;
        case 0x18dcc0u: goto label_18dcc0;
        case 0x18dcc4u: goto label_18dcc4;
        case 0x18dcc8u: goto label_18dcc8;
        case 0x18dcccu: goto label_18dccc;
        case 0x18dcd0u: goto label_18dcd0;
        case 0x18dcd4u: goto label_18dcd4;
        case 0x18dcd8u: goto label_18dcd8;
        case 0x18dcdcu: goto label_18dcdc;
        case 0x18dce0u: goto label_18dce0;
        case 0x18dce4u: goto label_18dce4;
        case 0x18dce8u: goto label_18dce8;
        case 0x18dcecu: goto label_18dcec;
        case 0x18dcf0u: goto label_18dcf0;
        case 0x18dcf4u: goto label_18dcf4;
        case 0x18dcf8u: goto label_18dcf8;
        case 0x18dcfcu: goto label_18dcfc;
        case 0x18dd00u: goto label_18dd00;
        case 0x18dd04u: goto label_18dd04;
        case 0x18dd08u: goto label_18dd08;
        case 0x18dd0cu: goto label_18dd0c;
        case 0x18dd10u: goto label_18dd10;
        case 0x18dd14u: goto label_18dd14;
        case 0x18dd18u: goto label_18dd18;
        case 0x18dd1cu: goto label_18dd1c;
        case 0x18dd20u: goto label_18dd20;
        case 0x18dd24u: goto label_18dd24;
        case 0x18dd28u: goto label_18dd28;
        case 0x18dd2cu: goto label_18dd2c;
        case 0x18dd30u: goto label_18dd30;
        case 0x18dd34u: goto label_18dd34;
        case 0x18dd38u: goto label_18dd38;
        case 0x18dd3cu: goto label_18dd3c;
        case 0x18dd40u: goto label_18dd40;
        case 0x18dd44u: goto label_18dd44;
        case 0x18dd48u: goto label_18dd48;
        case 0x18dd4cu: goto label_18dd4c;
        case 0x18dd50u: goto label_18dd50;
        case 0x18dd54u: goto label_18dd54;
        case 0x18dd58u: goto label_18dd58;
        case 0x18dd5cu: goto label_18dd5c;
        case 0x18dd60u: goto label_18dd60;
        case 0x18dd64u: goto label_18dd64;
        case 0x18dd68u: goto label_18dd68;
        case 0x18dd6cu: goto label_18dd6c;
        case 0x18dd70u: goto label_18dd70;
        case 0x18dd74u: goto label_18dd74;
        case 0x18dd78u: goto label_18dd78;
        case 0x18dd7cu: goto label_18dd7c;
        case 0x18dd80u: goto label_18dd80;
        case 0x18dd84u: goto label_18dd84;
        case 0x18dd88u: goto label_18dd88;
        case 0x18dd8cu: goto label_18dd8c;
        case 0x18dd90u: goto label_18dd90;
        case 0x18dd94u: goto label_18dd94;
        case 0x18dd98u: goto label_18dd98;
        case 0x18dd9cu: goto label_18dd9c;
        case 0x18dda0u: goto label_18dda0;
        case 0x18dda4u: goto label_18dda4;
        case 0x18dda8u: goto label_18dda8;
        case 0x18ddacu: goto label_18ddac;
        case 0x18ddb0u: goto label_18ddb0;
        case 0x18ddb4u: goto label_18ddb4;
        case 0x18ddb8u: goto label_18ddb8;
        case 0x18ddbcu: goto label_18ddbc;
        case 0x18ddc0u: goto label_18ddc0;
        case 0x18ddc4u: goto label_18ddc4;
        case 0x18ddc8u: goto label_18ddc8;
        case 0x18ddccu: goto label_18ddcc;
        case 0x18ddd0u: goto label_18ddd0;
        case 0x18ddd4u: goto label_18ddd4;
        case 0x18ddd8u: goto label_18ddd8;
        case 0x18dddcu: goto label_18dddc;
        case 0x18dde0u: goto label_18dde0;
        case 0x18dde4u: goto label_18dde4;
        case 0x18dde8u: goto label_18dde8;
        case 0x18ddecu: goto label_18ddec;
        case 0x18ddf0u: goto label_18ddf0;
        case 0x18ddf4u: goto label_18ddf4;
        case 0x18ddf8u: goto label_18ddf8;
        case 0x18ddfcu: goto label_18ddfc;
        case 0x18de00u: goto label_18de00;
        case 0x18de04u: goto label_18de04;
        case 0x18de08u: goto label_18de08;
        case 0x18de0cu: goto label_18de0c;
        case 0x18de10u: goto label_18de10;
        case 0x18de14u: goto label_18de14;
        case 0x18de18u: goto label_18de18;
        case 0x18de1cu: goto label_18de1c;
        case 0x18de20u: goto label_18de20;
        case 0x18de24u: goto label_18de24;
        case 0x18de28u: goto label_18de28;
        case 0x18de2cu: goto label_18de2c;
        case 0x18de30u: goto label_18de30;
        case 0x18de34u: goto label_18de34;
        case 0x18de38u: goto label_18de38;
        case 0x18de3cu: goto label_18de3c;
        case 0x18de40u: goto label_18de40;
        case 0x18de44u: goto label_18de44;
        case 0x18de48u: goto label_18de48;
        case 0x18de4cu: goto label_18de4c;
        case 0x18de50u: goto label_18de50;
        case 0x18de54u: goto label_18de54;
        case 0x18de58u: goto label_18de58;
        case 0x18de5cu: goto label_18de5c;
        case 0x18de60u: goto label_18de60;
        case 0x18de64u: goto label_18de64;
        case 0x18de68u: goto label_18de68;
        case 0x18de6cu: goto label_18de6c;
        case 0x18de70u: goto label_18de70;
        case 0x18de74u: goto label_18de74;
        case 0x18de78u: goto label_18de78;
        case 0x18de7cu: goto label_18de7c;
        case 0x18de80u: goto label_18de80;
        case 0x18de84u: goto label_18de84;
        case 0x18de88u: goto label_18de88;
        case 0x18de8cu: goto label_18de8c;
        case 0x18de90u: goto label_18de90;
        case 0x18de94u: goto label_18de94;
        case 0x18de98u: goto label_18de98;
        case 0x18de9cu: goto label_18de9c;
        case 0x18dea0u: goto label_18dea0;
        case 0x18dea4u: goto label_18dea4;
        case 0x18dea8u: goto label_18dea8;
        case 0x18deacu: goto label_18deac;
        case 0x18deb0u: goto label_18deb0;
        case 0x18deb4u: goto label_18deb4;
        case 0x18deb8u: goto label_18deb8;
        case 0x18debcu: goto label_18debc;
        case 0x18dec0u: goto label_18dec0;
        case 0x18dec4u: goto label_18dec4;
        case 0x18dec8u: goto label_18dec8;
        case 0x18deccu: goto label_18decc;
        case 0x18ded0u: goto label_18ded0;
        case 0x18ded4u: goto label_18ded4;
        case 0x18ded8u: goto label_18ded8;
        case 0x18dedcu: goto label_18dedc;
        case 0x18dee0u: goto label_18dee0;
        case 0x18dee4u: goto label_18dee4;
        case 0x18dee8u: goto label_18dee8;
        case 0x18deecu: goto label_18deec;
        case 0x18def0u: goto label_18def0;
        case 0x18def4u: goto label_18def4;
        case 0x18def8u: goto label_18def8;
        case 0x18defcu: goto label_18defc;
        case 0x18df00u: goto label_18df00;
        case 0x18df04u: goto label_18df04;
        case 0x18df08u: goto label_18df08;
        case 0x18df0cu: goto label_18df0c;
        case 0x18df10u: goto label_18df10;
        case 0x18df14u: goto label_18df14;
        case 0x18df18u: goto label_18df18;
        case 0x18df1cu: goto label_18df1c;
        case 0x18df20u: goto label_18df20;
        case 0x18df24u: goto label_18df24;
        case 0x18df28u: goto label_18df28;
        case 0x18df2cu: goto label_18df2c;
        case 0x18df30u: goto label_18df30;
        case 0x18df34u: goto label_18df34;
        case 0x18df38u: goto label_18df38;
        case 0x18df3cu: goto label_18df3c;
        case 0x18df40u: goto label_18df40;
        case 0x18df44u: goto label_18df44;
        case 0x18df48u: goto label_18df48;
        case 0x18df4cu: goto label_18df4c;
        case 0x18df50u: goto label_18df50;
        case 0x18df54u: goto label_18df54;
        case 0x18df58u: goto label_18df58;
        case 0x18df5cu: goto label_18df5c;
        case 0x18df60u: goto label_18df60;
        case 0x18df64u: goto label_18df64;
        case 0x18df68u: goto label_18df68;
        case 0x18df6cu: goto label_18df6c;
        case 0x18df70u: goto label_18df70;
        case 0x18df74u: goto label_18df74;
        case 0x18df78u: goto label_18df78;
        case 0x18df7cu: goto label_18df7c;
        case 0x18df80u: goto label_18df80;
        case 0x18df84u: goto label_18df84;
        case 0x18df88u: goto label_18df88;
        case 0x18df8cu: goto label_18df8c;
        case 0x18df90u: goto label_18df90;
        case 0x18df94u: goto label_18df94;
        case 0x18df98u: goto label_18df98;
        case 0x18df9cu: goto label_18df9c;
        case 0x18dfa0u: goto label_18dfa0;
        case 0x18dfa4u: goto label_18dfa4;
        case 0x18dfa8u: goto label_18dfa8;
        case 0x18dfacu: goto label_18dfac;
        case 0x18dfb0u: goto label_18dfb0;
        case 0x18dfb4u: goto label_18dfb4;
        case 0x18dfb8u: goto label_18dfb8;
        case 0x18dfbcu: goto label_18dfbc;
        case 0x18dfc0u: goto label_18dfc0;
        case 0x18dfc4u: goto label_18dfc4;
        case 0x18dfc8u: goto label_18dfc8;
        case 0x18dfccu: goto label_18dfcc;
        case 0x18dfd0u: goto label_18dfd0;
        case 0x18dfd4u: goto label_18dfd4;
        case 0x18dfd8u: goto label_18dfd8;
        case 0x18dfdcu: goto label_18dfdc;
        case 0x18dfe0u: goto label_18dfe0;
        case 0x18dfe4u: goto label_18dfe4;
        case 0x18dfe8u: goto label_18dfe8;
        case 0x18dfecu: goto label_18dfec;
        case 0x18dff0u: goto label_18dff0;
        case 0x18dff4u: goto label_18dff4;
        case 0x18dff8u: goto label_18dff8;
        case 0x18dffcu: goto label_18dffc;
        case 0x18e000u: goto label_18e000;
        case 0x18e004u: goto label_18e004;
        case 0x18e008u: goto label_18e008;
        case 0x18e00cu: goto label_18e00c;
        case 0x18e010u: goto label_18e010;
        case 0x18e014u: goto label_18e014;
        case 0x18e018u: goto label_18e018;
        case 0x18e01cu: goto label_18e01c;
        case 0x18e020u: goto label_18e020;
        case 0x18e024u: goto label_18e024;
        case 0x18e028u: goto label_18e028;
        case 0x18e02cu: goto label_18e02c;
        case 0x18e030u: goto label_18e030;
        case 0x18e034u: goto label_18e034;
        case 0x18e038u: goto label_18e038;
        case 0x18e03cu: goto label_18e03c;
        case 0x18e040u: goto label_18e040;
        case 0x18e044u: goto label_18e044;
        case 0x18e048u: goto label_18e048;
        case 0x18e04cu: goto label_18e04c;
        case 0x18e050u: goto label_18e050;
        case 0x18e054u: goto label_18e054;
        case 0x18e058u: goto label_18e058;
        case 0x18e05cu: goto label_18e05c;
        case 0x18e060u: goto label_18e060;
        case 0x18e064u: goto label_18e064;
        case 0x18e068u: goto label_18e068;
        case 0x18e06cu: goto label_18e06c;
        case 0x18e070u: goto label_18e070;
        case 0x18e074u: goto label_18e074;
        case 0x18e078u: goto label_18e078;
        case 0x18e07cu: goto label_18e07c;
        case 0x18e080u: goto label_18e080;
        case 0x18e084u: goto label_18e084;
        case 0x18e088u: goto label_18e088;
        case 0x18e08cu: goto label_18e08c;
        case 0x18e090u: goto label_18e090;
        case 0x18e094u: goto label_18e094;
        case 0x18e098u: goto label_18e098;
        case 0x18e09cu: goto label_18e09c;
        case 0x18e0a0u: goto label_18e0a0;
        case 0x18e0a4u: goto label_18e0a4;
        case 0x18e0a8u: goto label_18e0a8;
        case 0x18e0acu: goto label_18e0ac;
        case 0x18e0b0u: goto label_18e0b0;
        case 0x18e0b4u: goto label_18e0b4;
        case 0x18e0b8u: goto label_18e0b8;
        case 0x18e0bcu: goto label_18e0bc;
        case 0x18e0c0u: goto label_18e0c0;
        case 0x18e0c4u: goto label_18e0c4;
        case 0x18e0c8u: goto label_18e0c8;
        case 0x18e0ccu: goto label_18e0cc;
        case 0x18e0d0u: goto label_18e0d0;
        case 0x18e0d4u: goto label_18e0d4;
        case 0x18e0d8u: goto label_18e0d8;
        case 0x18e0dcu: goto label_18e0dc;
        case 0x18e0e0u: goto label_18e0e0;
        case 0x18e0e4u: goto label_18e0e4;
        case 0x18e0e8u: goto label_18e0e8;
        case 0x18e0ecu: goto label_18e0ec;
        case 0x18e0f0u: goto label_18e0f0;
        case 0x18e0f4u: goto label_18e0f4;
        case 0x18e0f8u: goto label_18e0f8;
        case 0x18e0fcu: goto label_18e0fc;
        case 0x18e100u: goto label_18e100;
        case 0x18e104u: goto label_18e104;
        case 0x18e108u: goto label_18e108;
        case 0x18e10cu: goto label_18e10c;
        case 0x18e110u: goto label_18e110;
        case 0x18e114u: goto label_18e114;
        case 0x18e118u: goto label_18e118;
        case 0x18e11cu: goto label_18e11c;
        case 0x18e120u: goto label_18e120;
        case 0x18e124u: goto label_18e124;
        case 0x18e128u: goto label_18e128;
        case 0x18e12cu: goto label_18e12c;
        case 0x18e130u: goto label_18e130;
        case 0x18e134u: goto label_18e134;
        case 0x18e138u: goto label_18e138;
        case 0x18e13cu: goto label_18e13c;
        case 0x18e140u: goto label_18e140;
        case 0x18e144u: goto label_18e144;
        case 0x18e148u: goto label_18e148;
        case 0x18e14cu: goto label_18e14c;
        case 0x18e150u: goto label_18e150;
        case 0x18e154u: goto label_18e154;
        case 0x18e158u: goto label_18e158;
        case 0x18e15cu: goto label_18e15c;
        case 0x18e160u: goto label_18e160;
        case 0x18e164u: goto label_18e164;
        case 0x18e168u: goto label_18e168;
        case 0x18e16cu: goto label_18e16c;
        case 0x18e170u: goto label_18e170;
        case 0x18e174u: goto label_18e174;
        case 0x18e178u: goto label_18e178;
        case 0x18e17cu: goto label_18e17c;
        case 0x18e180u: goto label_18e180;
        case 0x18e184u: goto label_18e184;
        case 0x18e188u: goto label_18e188;
        case 0x18e18cu: goto label_18e18c;
        case 0x18e190u: goto label_18e190;
        case 0x18e194u: goto label_18e194;
        case 0x18e198u: goto label_18e198;
        case 0x18e19cu: goto label_18e19c;
        case 0x18e1a0u: goto label_18e1a0;
        case 0x18e1a4u: goto label_18e1a4;
        case 0x18e1a8u: goto label_18e1a8;
        case 0x18e1acu: goto label_18e1ac;
        case 0x18e1b0u: goto label_18e1b0;
        case 0x18e1b4u: goto label_18e1b4;
        case 0x18e1b8u: goto label_18e1b8;
        case 0x18e1bcu: goto label_18e1bc;
        case 0x18e1c0u: goto label_18e1c0;
        case 0x18e1c4u: goto label_18e1c4;
        case 0x18e1c8u: goto label_18e1c8;
        case 0x18e1ccu: goto label_18e1cc;
        case 0x18e1d0u: goto label_18e1d0;
        case 0x18e1d4u: goto label_18e1d4;
        case 0x18e1d8u: goto label_18e1d8;
        case 0x18e1dcu: goto label_18e1dc;
        case 0x18e1e0u: goto label_18e1e0;
        case 0x18e1e4u: goto label_18e1e4;
        case 0x18e1e8u: goto label_18e1e8;
        case 0x18e1ecu: goto label_18e1ec;
        case 0x18e1f0u: goto label_18e1f0;
        case 0x18e1f4u: goto label_18e1f4;
        case 0x18e1f8u: goto label_18e1f8;
        case 0x18e1fcu: goto label_18e1fc;
        case 0x18e200u: goto label_18e200;
        case 0x18e204u: goto label_18e204;
        case 0x18e208u: goto label_18e208;
        case 0x18e20cu: goto label_18e20c;
        case 0x18e210u: goto label_18e210;
        case 0x18e214u: goto label_18e214;
        case 0x18e218u: goto label_18e218;
        case 0x18e21cu: goto label_18e21c;
        case 0x18e220u: goto label_18e220;
        case 0x18e224u: goto label_18e224;
        case 0x18e228u: goto label_18e228;
        case 0x18e22cu: goto label_18e22c;
        case 0x18e230u: goto label_18e230;
        case 0x18e234u: goto label_18e234;
        case 0x18e238u: goto label_18e238;
        case 0x18e23cu: goto label_18e23c;
        case 0x18e240u: goto label_18e240;
        case 0x18e244u: goto label_18e244;
        case 0x18e248u: goto label_18e248;
        case 0x18e24cu: goto label_18e24c;
        case 0x18e250u: goto label_18e250;
        case 0x18e254u: goto label_18e254;
        case 0x18e258u: goto label_18e258;
        case 0x18e25cu: goto label_18e25c;
        case 0x18e260u: goto label_18e260;
        case 0x18e264u: goto label_18e264;
        case 0x18e268u: goto label_18e268;
        case 0x18e26cu: goto label_18e26c;
        case 0x18e270u: goto label_18e270;
        case 0x18e274u: goto label_18e274;
        case 0x18e278u: goto label_18e278;
        case 0x18e27cu: goto label_18e27c;
        case 0x18e280u: goto label_18e280;
        case 0x18e284u: goto label_18e284;
        case 0x18e288u: goto label_18e288;
        case 0x18e28cu: goto label_18e28c;
        case 0x18e290u: goto label_18e290;
        case 0x18e294u: goto label_18e294;
        case 0x18e298u: goto label_18e298;
        case 0x18e29cu: goto label_18e29c;
        case 0x18e2a0u: goto label_18e2a0;
        case 0x18e2a4u: goto label_18e2a4;
        case 0x18e2a8u: goto label_18e2a8;
        case 0x18e2acu: goto label_18e2ac;
        case 0x18e2b0u: goto label_18e2b0;
        case 0x18e2b4u: goto label_18e2b4;
        case 0x18e2b8u: goto label_18e2b8;
        case 0x18e2bcu: goto label_18e2bc;
        case 0x18e2c0u: goto label_18e2c0;
        case 0x18e2c4u: goto label_18e2c4;
        case 0x18e2c8u: goto label_18e2c8;
        case 0x18e2ccu: goto label_18e2cc;
        case 0x18e2d0u: goto label_18e2d0;
        case 0x18e2d4u: goto label_18e2d4;
        case 0x18e2d8u: goto label_18e2d8;
        case 0x18e2dcu: goto label_18e2dc;
        case 0x18e2e0u: goto label_18e2e0;
        case 0x18e2e4u: goto label_18e2e4;
        case 0x18e2e8u: goto label_18e2e8;
        case 0x18e2ecu: goto label_18e2ec;
        case 0x18e2f0u: goto label_18e2f0;
        case 0x18e2f4u: goto label_18e2f4;
        case 0x18e2f8u: goto label_18e2f8;
        case 0x18e2fcu: goto label_18e2fc;
        case 0x18e300u: goto label_18e300;
        case 0x18e304u: goto label_18e304;
        case 0x18e308u: goto label_18e308;
        case 0x18e30cu: goto label_18e30c;
        case 0x18e310u: goto label_18e310;
        case 0x18e314u: goto label_18e314;
        case 0x18e318u: goto label_18e318;
        case 0x18e31cu: goto label_18e31c;
        case 0x18e320u: goto label_18e320;
        case 0x18e324u: goto label_18e324;
        case 0x18e328u: goto label_18e328;
        case 0x18e32cu: goto label_18e32c;
        case 0x18e330u: goto label_18e330;
        case 0x18e334u: goto label_18e334;
        case 0x18e338u: goto label_18e338;
        case 0x18e33cu: goto label_18e33c;
        default: return;
    }

label_18db70:
    if (ctx->pc == 0x18DB70u) {
        ctx->pc = 0x18DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB6Cu;
        // 0x18db70: 0x24a562e0  addiu       $a1, $a1, 0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB74u;
        goto label_18db74;
    }
    ctx->pc = 0x18DB6Cu;
    SET_GPR_U32(ctx, 31, 0x18DB74u);
    ctx->pc = 0x18DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB6Cu;
    // 0x18db70: 0x24a562e0  addiu       $a1, $a1, 0x62E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18DB74u;
label_18db74:
    // 0x18db74: 0x10000598  b           . + 4 + (0x598 << 2)
label_18db78:
    if (ctx->pc == 0x18DB78u) {
        ctx->pc = 0x18DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB74u;
        // 0x18db78: 0x4600bd06  mov.s       $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB7Cu;
        goto label_18db7c;
    }
    ctx->pc = 0x18DB74u;
    {
        const bool branch_taken_0x18db74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB74u;
        // 0x18db78: 0x4600bd06  mov.s       $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db74) {
            ctx->pc = 0x18F1D8u;
            { ctx->pc = 0x18f1d8; return; }
        }
    }
    ctx->pc = 0x18DB7Cu;
label_18db7c:
    // 0x18db7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18db80:
    // 0x18db80: 0x1624000c  bne         $s1, $a0, . + 4 + (0xC << 2)
label_18db84:
    if (ctx->pc == 0x18DB84u) {
        ctx->pc = 0x18DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB80u;
        // 0x18db84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB88u;
        goto label_18db88;
    }
    ctx->pc = 0x18DB80u;
    {
        const bool branch_taken_0x18db80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x18DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB80u;
        // 0x18db84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db80) {
            ctx->pc = 0x18DBB4u;
            goto label_18dbb4;
        }
    }
    ctx->pc = 0x18DB88u;
label_18db88:
    // 0x18db88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18db8c:
    // 0x18db8c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_18db90:
    if (ctx->pc == 0x18DB90u) {
        ctx->pc = 0x18DB94u;
        goto label_18db94;
    }
    ctx->pc = 0x18DB8Cu;
    {
        const bool branch_taken_0x18db8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18db8c) {
            ctx->pc = 0x18DBB0u;
            goto label_18dbb0;
        }
    }
    ctx->pc = 0x18DB94u;
label_18db94:
    // 0x18db94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18db94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18db98:
    // 0x18db98: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18db98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18db9c:
    // 0x18db9c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18dba0:
    // 0x18dba0: 0xc066e26  jal         func_19B898
label_18dba4:
    if (ctx->pc == 0x18DBA4u) {
        ctx->pc = 0x18DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBA0u;
        // 0x18dba4: 0x24a562e0  addiu       $a1, $a1, 0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBA8u;
        goto label_18dba8;
    }
    ctx->pc = 0x18DBA0u;
    SET_GPR_U32(ctx, 31, 0x18DBA8u);
    ctx->pc = 0x18DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBA0u;
    // 0x18dba4: 0x24a562e0  addiu       $a1, $a1, 0x62E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18DBA8u;
label_18dba8:
    // 0x18dba8: 0x1000058a  b           . + 4 + (0x58A << 2)
label_18dbac:
    if (ctx->pc == 0x18DBACu) {
        ctx->pc = 0x18DBB0u;
        goto label_18dbb0;
    }
    ctx->pc = 0x18DBA8u;
    {
        const bool branch_taken_0x18dba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dba8) {
            ctx->pc = 0x18F1D4u;
            { ctx->pc = 0x18f1d4; return; }
        }
    }
    ctx->pc = 0x18DBB0u;
label_18dbb0:
    // 0x18dbb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dbb4:
    // 0x18dbb4: 0x162301fa  bne         $s1, $v1, . + 4 + (0x1FA << 2)
label_18dbb8:
    if (ctx->pc == 0x18DBB8u) {
        ctx->pc = 0x18DBBCu;
        goto label_18dbbc;
    }
    ctx->pc = 0x18DBB4u;
    {
        const bool branch_taken_0x18dbb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x18dbb4) {
            ctx->pc = 0x18E3A0u;
            { ctx->pc = 0x18e3a0; return; }
        }
    }
    ctx->pc = 0x18DBBCu;
label_18dbbc:
    // 0x18dbbc: 0x144301f8  bne         $v0, $v1, . + 4 + (0x1F8 << 2)
label_18dbc0:
    if (ctx->pc == 0x18DBC0u) {
        ctx->pc = 0x18DBC4u;
        goto label_18dbc4;
    }
    ctx->pc = 0x18DBBCu;
    {
        const bool branch_taken_0x18dbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18dbbc) {
            ctx->pc = 0x18E3A0u;
            { ctx->pc = 0x18e3a0; return; }
        }
    }
    ctx->pc = 0x18DBC4u;
label_18dbc4:
    // 0x18dbc4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x18dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_18dbc8:
    // 0x18dbc8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18dbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18dbcc:
    // 0x18dbcc: 0x248461a0  addiu       $a0, $a0, 0x61A0
    ctx->pc = 0x18dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24992));
label_18dbd0:
    // 0x18dbd0: 0xc066da0  jal         func_19B680
label_18dbd4:
    if (ctx->pc == 0x18DBD4u) {
        ctx->pc = 0x18DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBD0u;
        // 0x18dbd4: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBD8u;
        goto label_18dbd8;
    }
    ctx->pc = 0x18DBD0u;
    SET_GPR_U32(ctx, 31, 0x18DBD8u);
    ctx->pc = 0x18DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBD0u;
    // 0x18dbd4: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x18DBD8u;
label_18dbd8:
    // 0x18dbd8: 0xc06d448  jal         func_1B5120
label_18dbdc:
    if (ctx->pc == 0x18DBDCu) {
        ctx->pc = 0x18DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBD8u;
        // 0x18dbdc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DBE0u;
        goto label_18dbe0;
    }
    ctx->pc = 0x18DBD8u;
    SET_GPR_U32(ctx, 31, 0x18DBE0u);
    ctx->pc = 0x18DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DBD8u;
    // 0x18dbdc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18DBE0u;
label_18dbe0:
    // 0x18dbe0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x18dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_18dbe4:
    // 0x18dbe4: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x18dbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
label_18dbe8:
    // 0x18dbe8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18dbe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18dbec:
    // 0x18dbec: 0x0  nop
    ctx->pc = 0x18dbecu;
    // NOP
label_18dbf0:
    // 0x18dbf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18dbf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18dbf4:
    // 0x18dbf4: 0x0  nop
    ctx->pc = 0x18dbf4u;
    // NOP
label_18dbf8:
    // 0x18dbf8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_18dbfc:
    if (ctx->pc == 0x18DBFCu) {
        ctx->pc = 0x18DC00u;
        goto label_18dc00;
    }
    ctx->pc = 0x18DBF8u;
    {
        const bool branch_taken_0x18dbf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18dbf8) {
            ctx->pc = 0x18DC20u;
            goto label_18dc20;
        }
    }
    ctx->pc = 0x18DC00u;
label_18dc00:
    // 0x18dc00: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18dc00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18dc04:
    // 0x18dc04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18dc08:
    // 0x18dc08: 0x24a562e0  addiu       $a1, $a1, 0x62E0
    ctx->pc = 0x18dc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
label_18dc0c:
    // 0x18dc0c: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_18dc10:
    // 0x18dc10: 0xc066e26  jal         func_19B898
label_18dc14:
    if (ctx->pc == 0x18DC14u) {
        ctx->pc = 0x18DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC10u;
        // 0x18dc14: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DC18u;
        goto label_18dc18;
    }
    ctx->pc = 0x18DC10u;
    SET_GPR_U32(ctx, 31, 0x18DC18u);
    ctx->pc = 0x18DC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC10u;
    // 0x18dc14: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18DC18u;
label_18dc18:
    // 0x18dc18: 0x1000056e  b           . + 4 + (0x56E << 2)
label_18dc1c:
    if (ctx->pc == 0x18DC1Cu) {
        ctx->pc = 0x18DC20u;
        goto label_18dc20;
    }
    ctx->pc = 0x18DC18u;
    {
        const bool branch_taken_0x18dc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dc18) {
            ctx->pc = 0x18F1D4u;
            { ctx->pc = 0x18f1d4; return; }
        }
    }
    ctx->pc = 0x18DC20u;
label_18dc20:
    // 0x18dc20: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x18dc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_18dc24:
    // 0x18dc24: 0x3c02bf7d  lui         $v0, 0xBF7D
    ctx->pc = 0x18dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49021 << 16));
label_18dc28:
    // 0x18dc28: 0xc4216244  lwc1        $f1, 0x6244($at)
    ctx->pc = 0x18dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 25156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dc2c:
    // 0x18dc2c: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x18dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
label_18dc30:
    // 0x18dc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18dc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dc34:
    // 0x18dc34: 0x0  nop
    ctx->pc = 0x18dc34u;
    // NOP
label_18dc38:
    // 0x18dc38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18dc38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18dc3c:
    // 0x18dc3c: 0x0  nop
    ctx->pc = 0x18dc3cu;
    // NOP
label_18dc40:
    // 0x18dc40: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
label_18dc44:
    if (ctx->pc == 0x18DC44u) {
        ctx->pc = 0x18DC48u;
        goto label_18dc48;
    }
    ctx->pc = 0x18DC40u;
    {
        const bool branch_taken_0x18dc40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18dc40) {
            ctx->pc = 0x18DD38u;
            goto label_18dd38;
        }
    }
    ctx->pc = 0x18DC48u;
label_18dc48:
    // 0x18dc48: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18dc4c:
    // 0x18dc4c: 0x24a562e0  addiu       $a1, $a1, 0x62E0
    ctx->pc = 0x18dc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
label_18dc50:
    // 0x18dc50: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18dc50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18dc54:
    // 0x18dc54: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18dc54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18dc58:
    // 0x18dc58: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18dc58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18dc5c:
    // 0x18dc5c: 0x4a0002ff  vnop
    ctx->pc = 0x18dc5cu;
    // NOP operation, no action needed for VU0
label_18dc60:
    // 0x18dc60: 0x4a0002ff  vnop
    ctx->pc = 0x18dc60u;
    // NOP operation, no action needed for VU0
label_18dc64:
    // 0x18dc64: 0x4a0002ff  vnop
    ctx->pc = 0x18dc64u;
    // NOP operation, no action needed for VU0
label_18dc68:
    // 0x18dc68: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18dc68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18dc6c:
    // 0x18dc6c: 0x4a0002ff  vnop
    ctx->pc = 0x18dc6cu;
    // NOP operation, no action needed for VU0
label_18dc70:
    // 0x18dc70: 0x4a0002ff  vnop
    ctx->pc = 0x18dc70u;
    // NOP operation, no action needed for VU0
label_18dc74:
    // 0x18dc74: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18dc74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18dc78:
    // 0x18dc78: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18dc78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18dc7c:
    // 0x18dc7c: 0x4a0002ff  vnop
    ctx->pc = 0x18dc7cu;
    // NOP operation, no action needed for VU0
label_18dc80:
    // 0x18dc80: 0x4a0002ff  vnop
    ctx->pc = 0x18dc80u;
    // NOP operation, no action needed for VU0
label_18dc84:
    // 0x18dc84: 0x4a0002ff  vnop
    ctx->pc = 0x18dc84u;
    // NOP operation, no action needed for VU0
label_18dc88:
    // 0x18dc88: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18dc88u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18dc8c:
    // 0x18dc8c: 0x4a0003bf  vwaitq
    ctx->pc = 0x18dc8cu;
    // VWAITQ (Q already resolved in this runtime)
label_18dc90:
    // 0x18dc90: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18dc90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18dc94:
    // 0x18dc94: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x18dc94u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_18dc98:
    // 0x18dc98: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x18dc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_18dc9c:
    // 0x18dc9c: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x18dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
label_18dca0:
    // 0x18dca0: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x18dca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18dca4:
    // 0x18dca4: 0xc4216384  lwc1        $f1, 0x6384($at)
    ctx->pc = 0x18dca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 25476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dca8:
    // 0x18dca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18dca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dcac:
    // 0x18dcac: 0x0  nop
    ctx->pc = 0x18dcacu;
    // NOP
label_18dcb0:
    // 0x18dcb0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x18dcb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_18dcb4:
    // 0x18dcb4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x18dcb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_18dcb8:
    // 0x18dcb8: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x18dcb8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
label_18dcbc:
    // 0x18dcbc: 0x0  nop
    ctx->pc = 0x18dcbcu;
    // NOP
label_18dcc0:
    // 0x18dcc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18dcc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18dcc4:
    // 0x18dcc4: 0x0  nop
    ctx->pc = 0x18dcc4u;
    // NOP
label_18dcc8:
    // 0x18dcc8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_18dccc:
    if (ctx->pc == 0x18DCCCu) {
        ctx->pc = 0x18DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCC8u;
        // 0x18dccc: 0xe7818878  swc1        $f1, -0x7788($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936696), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCD0u;
        goto label_18dcd0;
    }
    ctx->pc = 0x18DCC8u;
    {
        const bool branch_taken_0x18dcc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCC8u;
        // 0x18dccc: 0xe7818878  swc1        $f1, -0x7788($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcc8) {
            ctx->pc = 0x18DCE0u;
            goto label_18dce0;
        }
    }
    ctx->pc = 0x18DCD0u;
label_18dcd0:
    // 0x18dcd0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18dcd4:
    // 0x18dcd4: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_18dcd8:
    // 0x18dcd8: 0xc066e26  jal         func_19B898
label_18dcdc:
    if (ctx->pc == 0x18DCDCu) {
        ctx->pc = 0x18DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCD8u;
        // 0x18dcdc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DCE0u;
        goto label_18dce0;
    }
    ctx->pc = 0x18DCD8u;
    SET_GPR_U32(ctx, 31, 0x18DCE0u);
    ctx->pc = 0x18DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCD8u;
    // 0x18dcdc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18DCE0u;
label_18dce0:
    // 0x18dce0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18dce4:
    // 0x18dce4: 0x27a2028c  addiu       $v0, $sp, 0x28C
    ctx->pc = 0x18dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 652));
label_18dce8:
    // 0x18dce8: 0xafa3028c  sw          $v1, 0x28C($sp)
    ctx->pc = 0x18dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 3));
label_18dcec:
    // 0x18dcec: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x18dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18dcf0:
    // 0x18dcf0: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x18dcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
label_18dcf4:
    // 0x18dcf4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x18dcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_18dcf8:
    // 0x18dcf8: 0x27a60288  addiu       $a2, $sp, 0x288
    ctx->pc = 0x18dcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_18dcfc:
    // 0x18dcfc: 0xc05f3d0  jal         func_17CF40
label_18dd00:
    if (ctx->pc == 0x18DD00u) {
        ctx->pc = 0x18DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCFCu;
        // 0x18dd00: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD04u;
        goto label_18dd04;
    }
    ctx->pc = 0x18DCFCu;
    SET_GPR_U32(ctx, 31, 0x18DD04u);
    ctx->pc = 0x18DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCFCu;
    // 0x18dd00: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x18DD04u;
label_18dd04:
    // 0x18dd04: 0xc6830094  lwc1        $f3, 0x94($s4)
    ctx->pc = 0x18dd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18dd08:
    // 0x18dd08: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x18dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_18dd0c:
    // 0x18dd0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18dd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18dd10:
    // 0x18dd10: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x18dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dd14:
    // 0x18dd14: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x18dd14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_18dd18:
    // 0x18dd18: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x18dd18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_18dd1c:
    // 0x18dd1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18dd1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18dd20:
    // 0x18dd20: 0x0  nop
    ctx->pc = 0x18dd20u;
    // NOP
label_18dd24:
    // 0x18dd24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_18dd28:
    if (ctx->pc == 0x18DD28u) {
        ctx->pc = 0x18DD2Cu;
        goto label_18dd2c;
    }
    ctx->pc = 0x18DD24u;
    {
        const bool branch_taken_0x18dd24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18dd24) {
            ctx->pc = 0x18DD30u;
            goto label_18dd30;
        }
    }
    ctx->pc = 0x18DD2Cu;
label_18dd2c:
    // 0x18dd2c: 0xe6800034  swc1        $f0, 0x34($s4)
    ctx->pc = 0x18dd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_18dd30:
    // 0x18dd30: 0x10000528  b           . + 4 + (0x528 << 2)
label_18dd34:
    if (ctx->pc == 0x18DD34u) {
        ctx->pc = 0x18DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD30u;
        // 0x18dd34: 0xae800020  sw          $zero, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD38u;
        goto label_18dd38;
    }
    ctx->pc = 0x18DD30u;
    {
        const bool branch_taken_0x18dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD30u;
        // 0x18dd34: 0xae800020  sw          $zero, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd30) {
            ctx->pc = 0x18F1D4u;
            { ctx->pc = 0x18f1d4; return; }
        }
    }
    ctx->pc = 0x18DD38u;
label_18dd38:
    // 0x18dd38: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x18dd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_18dd3c:
    // 0x18dd3c: 0xc42c61a0  lwc1        $f12, 0x61A0($at)
    ctx->pc = 0x18dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 24992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18dd40:
    // 0x18dd40: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x18dd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_18dd44:
    // 0x18dd44: 0xc06d51e  jal         func_1B5478
label_18dd48:
    if (ctx->pc == 0x18DD48u) {
        ctx->pc = 0x18DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD44u;
        // 0x18dd48: 0xc42d61a8  lwc1        $f13, 0x61A8($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 25000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD4Cu;
        goto label_18dd4c;
    }
    ctx->pc = 0x18DD44u;
    SET_GPR_U32(ctx, 31, 0x18DD4Cu);
    ctx->pc = 0x18DD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD44u;
    // 0x18dd48: 0xc42d61a8  lwc1        $f13, 0x61A8($at) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 25000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18DD4Cu;
label_18dd4c:
    // 0x18dd4c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x18dd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_18dd50:
    // 0x18dd50: 0xc42c6240  lwc1        $f12, 0x6240($at)
    ctx->pc = 0x18dd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 25152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18dd54:
    // 0x18dd54: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x18dd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_18dd58:
    // 0x18dd58: 0xc42d6248  lwc1        $f13, 0x6248($at)
    ctx->pc = 0x18dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 25160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18dd5c:
    // 0x18dd5c: 0xc06d51e  jal         func_1B5478
label_18dd60:
    if (ctx->pc == 0x18DD60u) {
        ctx->pc = 0x18DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD5Cu;
        // 0x18dd60: 0xe7808874  swc1        $f0, -0x778C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936692), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD64u;
        goto label_18dd64;
    }
    ctx->pc = 0x18DD5Cu;
    SET_GPR_U32(ctx, 31, 0x18DD64u);
    ctx->pc = 0x18DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD5Cu;
    // 0x18dd60: 0xe7808874  swc1        $f0, -0x778C($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936692), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18DD64u;
label_18dd64:
    // 0x18dd64: 0xe7808870  swc1        $f0, -0x7790($gp)
    ctx->pc = 0x18dd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936688), bits); }
label_18dd68:
    // 0x18dd68: 0xc7818874  lwc1        $f1, -0x778C($gp)
    ctx->pc = 0x18dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dd6c:
    // 0x18dd6c: 0xc7808870  lwc1        $f0, -0x7790($gp)
    ctx->pc = 0x18dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18dd70:
    // 0x18dd70: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x18dd70u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18dd74:
    // 0x18dd74: 0xc06d448  jal         func_1B5120
label_18dd78:
    if (ctx->pc == 0x18DD78u) {
        ctx->pc = 0x18DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD74u;
        // 0x18dd78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD7Cu;
        goto label_18dd7c;
    }
    ctx->pc = 0x18DD74u;
    SET_GPR_U32(ctx, 31, 0x18DD7Cu);
    ctx->pc = 0x18DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD74u;
    // 0x18dd78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18DD7Cu;
label_18dd7c:
    // 0x18dd7c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18dd80:
    // 0x18dd80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18dd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18dd84:
    // 0x18dd84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18dd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18dd88:
    // 0x18dd88: 0x0  nop
    ctx->pc = 0x18dd88u;
    // NOP
label_18dd8c:
    // 0x18dd8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18dd8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18dd90:
    // 0x18dd90: 0x0  nop
    ctx->pc = 0x18dd90u;
    // NOP
label_18dd94:
    // 0x18dd94: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_18dd98:
    if (ctx->pc == 0x18DD98u) {
        ctx->pc = 0x18DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD94u;
        // 0x18dd98: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DD9Cu;
        goto label_18dd9c;
    }
    ctx->pc = 0x18DD94u;
    {
        const bool branch_taken_0x18dd94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD94u;
        // 0x18dd98: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd94) {
            ctx->pc = 0x18DDBCu;
            goto label_18ddbc;
        }
    }
    ctx->pc = 0x18DD9Cu;
label_18dd9c:
    // 0x18dd9c: 0x0  nop
    ctx->pc = 0x18dd9cu;
    // NOP
label_18dda0:
    // 0x18dda0: 0x0  nop
    ctx->pc = 0x18dda0u;
    // NOP
label_18dda4:
    // 0x18dda4: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x18dda4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
label_18dda8:
    // 0x18dda8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18dda8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18ddac:
    // 0x18ddac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18ddacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18ddb0:
    // 0x18ddb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18ddb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18ddb4:
    // 0x18ddb4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x18ddb4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_18ddb8:
    // 0x18ddb8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18ddbc:
    // 0x18ddbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ddbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ddc0:
    // 0x18ddc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ddc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ddc4:
    // 0x18ddc4: 0x0  nop
    ctx->pc = 0x18ddc4u;
    // NOP
label_18ddc8:
    // 0x18ddc8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x18ddc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ddcc:
    // 0x18ddcc: 0x0  nop
    ctx->pc = 0x18ddccu;
    // NOP
label_18ddd0:
    // 0x18ddd0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_18ddd4:
    if (ctx->pc == 0x18DDD4u) {
        ctx->pc = 0x18DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDD0u;
        // 0x18ddd4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDD8u;
        goto label_18ddd8;
    }
    ctx->pc = 0x18DDD0u;
    {
        const bool branch_taken_0x18ddd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDD0u;
        // 0x18ddd4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ddd0) {
            ctx->pc = 0x18DDF0u;
            goto label_18ddf0;
        }
    }
    ctx->pc = 0x18DDD8u;
label_18ddd8:
    // 0x18ddd8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18dddc:
    // 0x18dddc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18dddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18dde0:
    // 0x18dde0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18dde0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dde4:
    // 0x18dde4: 0x1000000e  b           . + 4 + (0xE << 2)
label_18dde8:
    if (ctx->pc == 0x18DDE8u) {
        ctx->pc = 0x18DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDE4u;
        // 0x18dde8: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DDECu;
        goto label_18ddec;
    }
    ctx->pc = 0x18DDE4u;
    {
        const bool branch_taken_0x18dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DDE4u;
        // 0x18dde8: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dde4) {
            ctx->pc = 0x18DE20u;
            goto label_18de20;
        }
    }
    ctx->pc = 0x18DDECu;
label_18ddec:
    // 0x18ddec: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18ddf0:
    // 0x18ddf0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ddf4:
    // 0x18ddf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ddf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ddf8:
    // 0x18ddf8: 0x0  nop
    ctx->pc = 0x18ddf8u;
    // NOP
label_18ddfc:
    // 0x18ddfc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18ddfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18de00:
    // 0x18de00: 0x0  nop
    ctx->pc = 0x18de00u;
    // NOP
label_18de04:
    // 0x18de04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18de08:
    if (ctx->pc == 0x18DE08u) {
        ctx->pc = 0x18DE0Cu;
        goto label_18de0c;
    }
    ctx->pc = 0x18DE04u;
    {
        const bool branch_taken_0x18de04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18de04) {
            ctx->pc = 0x18DE20u;
            goto label_18de20;
        }
    }
    ctx->pc = 0x18DE0Cu;
label_18de0c:
    // 0x18de0c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18de10:
    // 0x18de10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18de10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18de14:
    // 0x18de14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18de14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18de18:
    // 0x18de18: 0x0  nop
    ctx->pc = 0x18de18u;
    // NOP
label_18de1c:
    // 0x18de1c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x18de1cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_18de20:
    // 0x18de20: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18de20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18de24:
    // 0x18de24: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x18de24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_18de28:
    // 0x18de28: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18de28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18de2c:
    // 0x18de2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18de2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18de30:
    // 0x18de30: 0x24c661a0  addiu       $a2, $a2, 0x61A0
    ctx->pc = 0x18de30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24992));
label_18de34:
    // 0x18de34: 0xaf808860  sw          $zero, -0x77A0($gp)
    ctx->pc = 0x18de34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936672), GPR_U32(ctx, 0));
label_18de38:
    // 0x18de38: 0xe7948868  swc1        $f20, -0x7798($gp)
    ctx->pc = 0x18de38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936680), bits); }
label_18de3c:
    // 0x18de3c: 0xc066d98  jal         func_19B660
label_18de40:
    if (ctx->pc == 0x18DE40u) {
        ctx->pc = 0x18DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE3Cu;
        // 0x18de40: 0xaf80885c  sw          $zero, -0x77A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DE44u;
        goto label_18de44;
    }
    ctx->pc = 0x18DE3Cu;
    SET_GPR_U32(ctx, 31, 0x18DE44u);
    ctx->pc = 0x18DE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE3Cu;
    // 0x18de40: 0xaf80885c  sw          $zero, -0x77A4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936668), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x18DE44u;
label_18de44:
    // 0x18de44: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18de44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18de48:
    // 0x18de48: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18de4c:
    // 0x18de4c: 0xc066daa  jal         func_19B6A8
label_18de50:
    if (ctx->pc == 0x18DE50u) {
        ctx->pc = 0x18DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE4Cu;
        // 0x18de50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DE54u;
        goto label_18de54;
    }
    ctx->pc = 0x18DE4Cu;
    SET_GPR_U32(ctx, 31, 0x18DE54u);
    ctx->pc = 0x18DE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE4Cu;
    // 0x18de50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18DE54u;
label_18de54:
    // 0x18de54: 0xc7818868  lwc1        $f1, -0x7798($gp)
    ctx->pc = 0x18de54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18de58:
    // 0x18de58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18de58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18de5c:
    // 0x18de5c: 0x0  nop
    ctx->pc = 0x18de5cu;
    // NOP
label_18de60:
    // 0x18de60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18de60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18de64:
    // 0x18de64: 0x0  nop
    ctx->pc = 0x18de64u;
    // NOP
label_18de68:
    // 0x18de68: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_18de6c:
    if (ctx->pc == 0x18DE6Cu) {
        ctx->pc = 0x18DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE68u;
        // 0x18de6c: 0x3c02c396  lui         $v0, 0xC396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DE70u;
        goto label_18de70;
    }
    ctx->pc = 0x18DE68u;
    {
        const bool branch_taken_0x18de68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE68u;
        // 0x18de6c: 0x3c02c396  lui         $v0, 0xC396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de68) {
            ctx->pc = 0x18DE94u;
            goto label_18de94;
        }
    }
    ctx->pc = 0x18DE70u;
label_18de70:
    // 0x18de70: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x18de70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_18de74:
    // 0x18de74: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18de74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18de78:
    // 0x18de78: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18de78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18de7c:
    // 0x18de7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18de7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18de80:
    // 0x18de80: 0xc066e14  jal         func_19B850
label_18de84:
    if (ctx->pc == 0x18DE84u) {
        ctx->pc = 0x18DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE80u;
        // 0x18de84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DE88u;
        goto label_18de88;
    }
    ctx->pc = 0x18DE80u;
    SET_GPR_U32(ctx, 31, 0x18DE88u);
    ctx->pc = 0x18DE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE80u;
    // 0x18de84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18DE88u;
label_18de88:
    // 0x18de88: 0x10000008  b           . + 4 + (0x8 << 2)
label_18de8c:
    if (ctx->pc == 0x18DE8Cu) {
        ctx->pc = 0x18DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE88u;
        // 0x18de8c: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DE90u;
        goto label_18de90;
    }
    ctx->pc = 0x18DE88u;
    {
        const bool branch_taken_0x18de88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DE88u;
        // 0x18de8c: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de88) {
            ctx->pc = 0x18DEACu;
            goto label_18deac;
        }
    }
    ctx->pc = 0x18DE90u;
label_18de90:
    // 0x18de90: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x18de90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_18de94:
    // 0x18de94: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18de94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18de98:
    // 0x18de98: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18de98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18de9c:
    // 0x18de9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18de9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18dea0:
    // 0x18dea0: 0xc066e14  jal         func_19B850
label_18dea4:
    if (ctx->pc == 0x18DEA4u) {
        ctx->pc = 0x18DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEA0u;
        // 0x18dea4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DEA8u;
        goto label_18dea8;
    }
    ctx->pc = 0x18DEA0u;
    SET_GPR_U32(ctx, 31, 0x18DEA8u);
    ctx->pc = 0x18DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEA0u;
    // 0x18dea4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18DEA8u;
label_18dea8:
    // 0x18dea8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_18deac:
    // 0x18deac: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18deacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18deb0:
    // 0x18deb0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18deb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18deb4:
    // 0x18deb4: 0x24849950  addiu       $a0, $a0, -0x66B0
    ctx->pc = 0x18deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941008));
label_18deb8:
    // 0x18deb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18deb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18debc:
    // 0x18debc: 0xc066e14  jal         func_19B850
label_18dec0:
    if (ctx->pc == 0x18DEC0u) {
        ctx->pc = 0x18DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEBCu;
        // 0x18dec0: 0x24a561a0  addiu       $a1, $a1, 0x61A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DEC4u;
        goto label_18dec4;
    }
    ctx->pc = 0x18DEBCu;
    SET_GPR_U32(ctx, 31, 0x18DEC4u);
    ctx->pc = 0x18DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEBCu;
    // 0x18dec0: 0x24a561a0  addiu       $a1, $a1, 0x61A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18DEC4u;
label_18dec4:
    // 0x18dec4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18dec8:
    // 0x18dec8: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x18dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_18decc:
    // 0x18decc: 0x24849950  addiu       $a0, $a0, -0x66B0
    ctx->pc = 0x18deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941008));
label_18ded0:
    // 0x18ded0: 0x24c662e0  addiu       $a2, $a2, 0x62E0
    ctx->pc = 0x18ded0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25312));
label_18ded4:
    // 0x18ded4: 0xc066e02  jal         func_19B808
label_18ded8:
    if (ctx->pc == 0x18DED8u) {
        ctx->pc = 0x18DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DED4u;
        // 0x18ded8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DEDCu;
        goto label_18dedc;
    }
    ctx->pc = 0x18DED4u;
    SET_GPR_U32(ctx, 31, 0x18DEDCu);
    ctx->pc = 0x18DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DED4u;
    // 0x18ded8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18DEDCu;
label_18dedc:
    // 0x18dedc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18dedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18dee0:
    // 0x18dee0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18dee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18dee4:
    // 0x18dee4: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18dee8:
    // 0x18dee8: 0x24c69950  addiu       $a2, $a2, -0x66B0
    ctx->pc = 0x18dee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941008));
label_18deec:
    // 0x18deec: 0xc066e02  jal         func_19B808
label_18def0:
    if (ctx->pc == 0x18DEF0u) {
        ctx->pc = 0x18DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEECu;
        // 0x18def0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DEF4u;
        goto label_18def4;
    }
    ctx->pc = 0x18DEECu;
    SET_GPR_U32(ctx, 31, 0x18DEF4u);
    ctx->pc = 0x18DEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEECu;
    // 0x18def0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18DEF4u;
label_18def4:
    // 0x18def4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18def4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18def8:
    // 0x18def8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18def8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_18defc:
    // 0x18defc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18defcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18df00:
    // 0x18df00: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x18df00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_18df04:
    // 0x18df04: 0x24849950  addiu       $a0, $a0, -0x66B0
    ctx->pc = 0x18df04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941008));
label_18df08:
    // 0x18df08: 0x24a59980  addiu       $a1, $a1, -0x6680
    ctx->pc = 0x18df08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941056));
label_18df0c:
    // 0x18df0c: 0x24c69970  addiu       $a2, $a2, -0x6690
    ctx->pc = 0x18df0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941040));
label_18df10:
    // 0x18df10: 0x24e79960  addiu       $a3, $a3, -0x66A0
    ctx->pc = 0x18df10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941024));
label_18df14:
    // 0x18df14: 0xc064978  jal         func_1925E0
label_18df18:
    if (ctx->pc == 0x18DF18u) {
        ctx->pc = 0x18DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF14u;
        // 0x18df18: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF1Cu;
        goto label_18df1c;
    }
    ctx->pc = 0x18DF14u;
    SET_GPR_U32(ctx, 31, 0x18DF1Cu);
    ctx->pc = 0x18DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF14u;
    // 0x18df18: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x18DF1Cu;
label_18df1c:
    // 0x18df1c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_18df20:
    if (ctx->pc == 0x18DF20u) {
        ctx->pc = 0x18DF24u;
        goto label_18df24;
    }
    ctx->pc = 0x18DF1Cu;
    {
        const bool branch_taken_0x18df1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18df1c) {
            ctx->pc = 0x18DF54u;
            goto label_18df54;
        }
    }
    ctx->pc = 0x18DF24u;
label_18df24:
    // 0x18df24: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18df24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18df28:
    // 0x18df28: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18df28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_18df2c:
    // 0x18df2c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18df2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18df30:
    // 0x18df30: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x18df30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_18df34:
    // 0x18df34: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18df34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18df38:
    // 0x18df38: 0x24a59950  addiu       $a1, $a1, -0x66B0
    ctx->pc = 0x18df38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941008));
label_18df3c:
    // 0x18df3c: 0x24c69970  addiu       $a2, $a2, -0x6690
    ctx->pc = 0x18df3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941040));
label_18df40:
    // 0x18df40: 0x24e79960  addiu       $a3, $a3, -0x66A0
    ctx->pc = 0x18df40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941024));
label_18df44:
    // 0x18df44: 0xc064978  jal         func_1925E0
label_18df48:
    if (ctx->pc == 0x18DF48u) {
        ctx->pc = 0x18DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF44u;
        // 0x18df48: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF4Cu;
        goto label_18df4c;
    }
    ctx->pc = 0x18DF44u;
    SET_GPR_U32(ctx, 31, 0x18DF4Cu);
    ctx->pc = 0x18DF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF44u;
    // 0x18df48: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x18DF4Cu;
label_18df4c:
    // 0x18df4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18df50:
    if (ctx->pc == 0x18DF50u) {
        ctx->pc = 0x18DF54u;
        goto label_18df54;
    }
    ctx->pc = 0x18DF4Cu;
    {
        const bool branch_taken_0x18df4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18df4c) {
            ctx->pc = 0x18DF60u;
            goto label_18df60;
        }
    }
    ctx->pc = 0x18DF54u;
label_18df54:
    // 0x18df54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18df54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18df58:
    // 0x18df58: 0x1000004d  b           . + 4 + (0x4D << 2)
label_18df5c:
    if (ctx->pc == 0x18DF5Cu) {
        ctx->pc = 0x18DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF58u;
        // 0x18df5c: 0xaf828860  sw          $v0, -0x77A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF60u;
        goto label_18df60;
    }
    ctx->pc = 0x18DF58u;
    {
        const bool branch_taken_0x18df58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF58u;
        // 0x18df5c: 0xaf828860  sw          $v0, -0x77A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df58) {
            ctx->pc = 0x18E090u;
            goto label_18e090;
        }
    }
    ctx->pc = 0x18DF60u;
label_18df60:
    // 0x18df60: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18df60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18df64:
    // 0x18df64: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x18df64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_18df68:
    // 0x18df68: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18df68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18df6c:
    // 0x18df6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18df6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18df70:
    // 0x18df70: 0xc066d98  jal         func_19B660
label_18df74:
    if (ctx->pc == 0x18DF74u) {
        ctx->pc = 0x18DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF70u;
        // 0x18df74: 0x24c66240  addiu       $a2, $a2, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF78u;
        goto label_18df78;
    }
    ctx->pc = 0x18DF70u;
    SET_GPR_U32(ctx, 31, 0x18DF78u);
    ctx->pc = 0x18DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF70u;
    // 0x18df74: 0x24c66240  addiu       $a2, $a2, 0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x18DF78u;
label_18df78:
    // 0x18df78: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18df78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18df7c:
    // 0x18df7c: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18df80:
    // 0x18df80: 0xc066daa  jal         func_19B6A8
label_18df84:
    if (ctx->pc == 0x18DF84u) {
        ctx->pc = 0x18DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF80u;
        // 0x18df84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF88u;
        goto label_18df88;
    }
    ctx->pc = 0x18DF80u;
    SET_GPR_U32(ctx, 31, 0x18DF88u);
    ctx->pc = 0x18DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF80u;
    // 0x18df84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18DF88u;
label_18df88:
    // 0x18df88: 0xc7818868  lwc1        $f1, -0x7798($gp)
    ctx->pc = 0x18df88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18df8c:
    // 0x18df8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18df8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18df90:
    // 0x18df90: 0x0  nop
    ctx->pc = 0x18df90u;
    // NOP
label_18df94:
    // 0x18df94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18df94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18df98:
    // 0x18df98: 0x0  nop
    ctx->pc = 0x18df98u;
    // NOP
label_18df9c:
    // 0x18df9c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_18dfa0:
    if (ctx->pc == 0x18DFA0u) {
        ctx->pc = 0x18DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF9Cu;
        // 0x18dfa0: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFA4u;
        goto label_18dfa4;
    }
    ctx->pc = 0x18DF9Cu;
    {
        const bool branch_taken_0x18df9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF9Cu;
        // 0x18dfa0: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df9c) {
            ctx->pc = 0x18DFC8u;
            goto label_18dfc8;
        }
    }
    ctx->pc = 0x18DFA4u;
label_18dfa4:
    // 0x18dfa4: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x18dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_18dfa8:
    // 0x18dfa8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18dfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18dfac:
    // 0x18dfac: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18dfb0:
    // 0x18dfb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18dfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18dfb4:
    // 0x18dfb4: 0xc066e14  jal         func_19B850
label_18dfb8:
    if (ctx->pc == 0x18DFB8u) {
        ctx->pc = 0x18DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFB4u;
        // 0x18dfb8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFBCu;
        goto label_18dfbc;
    }
    ctx->pc = 0x18DFB4u;
    SET_GPR_U32(ctx, 31, 0x18DFBCu);
    ctx->pc = 0x18DFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFB4u;
    // 0x18dfb8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18DFBCu;
label_18dfbc:
    // 0x18dfbc: 0x10000008  b           . + 4 + (0x8 << 2)
label_18dfc0:
    if (ctx->pc == 0x18DFC0u) {
        ctx->pc = 0x18DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFBCu;
        // 0x18dfc0: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFC4u;
        goto label_18dfc4;
    }
    ctx->pc = 0x18DFBCu;
    {
        const bool branch_taken_0x18dfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFBCu;
        // 0x18dfc0: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfbc) {
            ctx->pc = 0x18DFE0u;
            goto label_18dfe0;
        }
    }
    ctx->pc = 0x18DFC4u;
label_18dfc4:
    // 0x18dfc4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x18dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_18dfc8:
    // 0x18dfc8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18dfcc:
    // 0x18dfcc: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18dfd0:
    // 0x18dfd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18dfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18dfd4:
    // 0x18dfd4: 0xc066e14  jal         func_19B850
label_18dfd8:
    if (ctx->pc == 0x18DFD8u) {
        ctx->pc = 0x18DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFD4u;
        // 0x18dfd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFDCu;
        goto label_18dfdc;
    }
    ctx->pc = 0x18DFD4u;
    SET_GPR_U32(ctx, 31, 0x18DFDCu);
    ctx->pc = 0x18DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFD4u;
    // 0x18dfd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18DFDCu;
label_18dfdc:
    // 0x18dfdc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_18dfe0:
    // 0x18dfe0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18dfe4:
    // 0x18dfe4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18dfe8:
    // 0x18dfe8: 0x24849950  addiu       $a0, $a0, -0x66B0
    ctx->pc = 0x18dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941008));
label_18dfec:
    // 0x18dfec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18dfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18dff0:
    // 0x18dff0: 0xc066e14  jal         func_19B850
label_18dff4:
    if (ctx->pc == 0x18DFF4u) {
        ctx->pc = 0x18DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFF0u;
        // 0x18dff4: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFF8u;
        goto label_18dff8;
    }
    ctx->pc = 0x18DFF0u;
    SET_GPR_U32(ctx, 31, 0x18DFF8u);
    ctx->pc = 0x18DFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFF0u;
    // 0x18dff4: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18DFF8u;
label_18dff8:
    // 0x18dff8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18dff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18dffc:
    // 0x18dffc: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x18dffcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_18e000:
    // 0x18e000: 0x24849950  addiu       $a0, $a0, -0x66B0
    ctx->pc = 0x18e000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941008));
label_18e004:
    // 0x18e004: 0x24c66380  addiu       $a2, $a2, 0x6380
    ctx->pc = 0x18e004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25472));
label_18e008:
    // 0x18e008: 0xc066e02  jal         func_19B808
label_18e00c:
    if (ctx->pc == 0x18E00Cu) {
        ctx->pc = 0x18E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E008u;
        // 0x18e00c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E010u;
        goto label_18e010;
    }
    ctx->pc = 0x18E008u;
    SET_GPR_U32(ctx, 31, 0x18E010u);
    ctx->pc = 0x18E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E008u;
    // 0x18e00c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18E010u;
label_18e010:
    // 0x18e010: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e014:
    // 0x18e014: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18e014u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18e018:
    // 0x18e018: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18e018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18e01c:
    // 0x18e01c: 0x24c69950  addiu       $a2, $a2, -0x66B0
    ctx->pc = 0x18e01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941008));
label_18e020:
    // 0x18e020: 0xc066e02  jal         func_19B808
label_18e024:
    if (ctx->pc == 0x18E024u) {
        ctx->pc = 0x18E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E020u;
        // 0x18e024: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E028u;
        goto label_18e028;
    }
    ctx->pc = 0x18E020u;
    SET_GPR_U32(ctx, 31, 0x18E028u);
    ctx->pc = 0x18E024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E020u;
    // 0x18e024: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18E028u;
label_18e028:
    // 0x18e028: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e02c:
    // 0x18e02c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18e02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_18e030:
    // 0x18e030: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18e030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18e034:
    // 0x18e034: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x18e034u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_18e038:
    // 0x18e038: 0x24849950  addiu       $a0, $a0, -0x66B0
    ctx->pc = 0x18e038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941008));
label_18e03c:
    // 0x18e03c: 0x24a59980  addiu       $a1, $a1, -0x6680
    ctx->pc = 0x18e03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941056));
label_18e040:
    // 0x18e040: 0x24c69970  addiu       $a2, $a2, -0x6690
    ctx->pc = 0x18e040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941040));
label_18e044:
    // 0x18e044: 0x24e79960  addiu       $a3, $a3, -0x66A0
    ctx->pc = 0x18e044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941024));
label_18e048:
    // 0x18e048: 0xc064978  jal         func_1925E0
label_18e04c:
    if (ctx->pc == 0x18E04Cu) {
        ctx->pc = 0x18E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E048u;
        // 0x18e04c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E050u;
        goto label_18e050;
    }
    ctx->pc = 0x18E048u;
    SET_GPR_U32(ctx, 31, 0x18E050u);
    ctx->pc = 0x18E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E048u;
    // 0x18e04c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x18E050u;
label_18e050:
    // 0x18e050: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_18e054:
    if (ctx->pc == 0x18E054u) {
        ctx->pc = 0x18E058u;
        goto label_18e058;
    }
    ctx->pc = 0x18E050u;
    {
        const bool branch_taken_0x18e050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e050) {
            ctx->pc = 0x18E088u;
            goto label_18e088;
        }
    }
    ctx->pc = 0x18E058u;
label_18e058:
    // 0x18e058: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e05c:
    // 0x18e05c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_18e060:
    // 0x18e060: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18e060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18e064:
    // 0x18e064: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x18e064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_18e068:
    // 0x18e068: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x18e068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
label_18e06c:
    // 0x18e06c: 0x24a59950  addiu       $a1, $a1, -0x66B0
    ctx->pc = 0x18e06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941008));
label_18e070:
    // 0x18e070: 0x24c69970  addiu       $a2, $a2, -0x6690
    ctx->pc = 0x18e070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941040));
label_18e074:
    // 0x18e074: 0x24e79960  addiu       $a3, $a3, -0x66A0
    ctx->pc = 0x18e074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941024));
label_18e078:
    // 0x18e078: 0xc064978  jal         func_1925E0
label_18e07c:
    if (ctx->pc == 0x18E07Cu) {
        ctx->pc = 0x18E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E078u;
        // 0x18e07c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E080u;
        goto label_18e080;
    }
    ctx->pc = 0x18E078u;
    SET_GPR_U32(ctx, 31, 0x18E080u);
    ctx->pc = 0x18E07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E078u;
    // 0x18e07c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x18E080u;
label_18e080:
    // 0x18e080: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18e084:
    if (ctx->pc == 0x18E084u) {
        ctx->pc = 0x18E088u;
        goto label_18e088;
    }
    ctx->pc = 0x18E080u;
    {
        const bool branch_taken_0x18e080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e080) {
            ctx->pc = 0x18E090u;
            goto label_18e090;
        }
    }
    ctx->pc = 0x18E088u;
label_18e088:
    // 0x18e088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e08c:
    // 0x18e08c: 0xaf82885c  sw          $v0, -0x77A4($gp)
    ctx->pc = 0x18e08cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936668), GPR_U32(ctx, 2));
label_18e090:
    // 0x18e090: 0x8f828860  lw          $v0, -0x77A0($gp)
    ctx->pc = 0x18e090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936672)));
label_18e094:
    // 0x18e094: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_18e098:
    if (ctx->pc == 0x18E098u) {
        ctx->pc = 0x18E09Cu;
        goto label_18e09c;
    }
    ctx->pc = 0x18E094u;
    {
        const bool branch_taken_0x18e094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e094) {
            ctx->pc = 0x18E0A8u;
            goto label_18e0a8;
        }
    }
    ctx->pc = 0x18E09Cu;
label_18e09c:
    // 0x18e09c: 0x8f82885c  lw          $v0, -0x77A4($gp)
    ctx->pc = 0x18e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936668)));
label_18e0a0:
    // 0x18e0a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18e0a4:
    if (ctx->pc == 0x18E0A4u) {
        ctx->pc = 0x18E0A8u;
        goto label_18e0a8;
    }
    ctx->pc = 0x18E0A0u;
    {
        const bool branch_taken_0x18e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0a0) {
            ctx->pc = 0x18E0C8u;
            goto label_18e0c8;
        }
    }
    ctx->pc = 0x18E0A8u;
label_18e0a8:
    // 0x18e0a8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18e0ac:
    // 0x18e0ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18e0b0:
    // 0x18e0b0: 0x24a562e0  addiu       $a1, $a1, 0x62E0
    ctx->pc = 0x18e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
label_18e0b4:
    // 0x18e0b4: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_18e0b8:
    // 0x18e0b8: 0xc066e26  jal         func_19B898
label_18e0bc:
    if (ctx->pc == 0x18E0BCu) {
        ctx->pc = 0x18E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0B8u;
        // 0x18e0bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E0C0u;
        goto label_18e0c0;
    }
    ctx->pc = 0x18E0B8u;
    SET_GPR_U32(ctx, 31, 0x18E0C0u);
    ctx->pc = 0x18E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E0B8u;
    // 0x18e0bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18E0C0u;
label_18e0c0:
    // 0x18e0c0: 0x10000444  b           . + 4 + (0x444 << 2)
label_18e0c4:
    if (ctx->pc == 0x18E0C4u) {
        ctx->pc = 0x18E0C8u;
        goto label_18e0c8;
    }
    ctx->pc = 0x18E0C0u;
    {
        const bool branch_taken_0x18e0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e0c0) {
            ctx->pc = 0x18F1D4u;
            { ctx->pc = 0x18f1d4; return; }
        }
    }
    ctx->pc = 0x18E0C8u;
label_18e0c8:
    // 0x18e0c8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e0cc:
    // 0x18e0cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18e0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18e0d0:
    // 0x18e0d0: 0x24849990  addiu       $a0, $a0, -0x6670
    ctx->pc = 0x18e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941072));
label_18e0d4:
    // 0x18e0d4: 0xc066e08  jal         func_19B820
label_18e0d8:
    if (ctx->pc == 0x18E0D8u) {
        ctx->pc = 0x18E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0D4u;
        // 0x18e0d8: 0x26860070  addiu       $a2, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E0DCu;
        goto label_18e0dc;
    }
    ctx->pc = 0x18E0D4u;
    SET_GPR_U32(ctx, 31, 0x18E0DCu);
    ctx->pc = 0x18E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E0D4u;
    // 0x18e0d8: 0x26860070  addiu       $a2, $s4, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18E0DCu;
label_18e0dc:
    // 0x18e0dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18e0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18e0e0:
    // 0x18e0e0: 0xc42c9990  lwc1        $f12, -0x6670($at)
    ctx->pc = 0x18e0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18e0e4:
    // 0x18e0e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18e0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18e0e8:
    // 0x18e0e8: 0xc06d51e  jal         func_1B5478
label_18e0ec:
    if (ctx->pc == 0x18E0ECu) {
        ctx->pc = 0x18E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0E8u;
        // 0x18e0ec: 0xc42d9998  lwc1        $f13, -0x6668($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E0F0u;
        goto label_18e0f0;
    }
    ctx->pc = 0x18E0E8u;
    SET_GPR_U32(ctx, 31, 0x18E0F0u);
    ctx->pc = 0x18E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E0E8u;
    // 0x18e0ec: 0xc42d9998  lwc1        $f13, -0x6668($at) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18E0F0u;
label_18e0f0:
    // 0x18e0f0: 0xe780886c  swc1        $f0, -0x7794($gp)
    ctx->pc = 0x18e0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936684), bits); }
label_18e0f4:
    // 0x18e0f4: 0xc7818874  lwc1        $f1, -0x778C($gp)
    ctx->pc = 0x18e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e0f8:
    // 0x18e0f8: 0xc780886c  lwc1        $f0, -0x7794($gp)
    ctx->pc = 0x18e0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e0fc:
    // 0x18e0fc: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x18e0fcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18e100:
    // 0x18e100: 0xc06d448  jal         func_1B5120
label_18e104:
    if (ctx->pc == 0x18E104u) {
        ctx->pc = 0x18E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E100u;
        // 0x18e104: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E108u;
        goto label_18e108;
    }
    ctx->pc = 0x18E100u;
    SET_GPR_U32(ctx, 31, 0x18E108u);
    ctx->pc = 0x18E104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E100u;
    // 0x18e104: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18E108u;
label_18e108:
    // 0x18e108: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18e108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18e10c:
    // 0x18e10c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e110:
    // 0x18e110: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e114:
    // 0x18e114: 0x0  nop
    ctx->pc = 0x18e114u;
    // NOP
label_18e118:
    // 0x18e118: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18e118u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e11c:
    // 0x18e11c: 0x0  nop
    ctx->pc = 0x18e11cu;
    // NOP
label_18e120:
    // 0x18e120: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_18e124:
    if (ctx->pc == 0x18E124u) {
        ctx->pc = 0x18E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E120u;
        // 0x18e124: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E128u;
        goto label_18e128;
    }
    ctx->pc = 0x18E120u;
    {
        const bool branch_taken_0x18e120 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E120u;
        // 0x18e124: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e120) {
            ctx->pc = 0x18E148u;
            goto label_18e148;
        }
    }
    ctx->pc = 0x18E128u;
label_18e128:
    // 0x18e128: 0x0  nop
    ctx->pc = 0x18e128u;
    // NOP
label_18e12c:
    // 0x18e12c: 0x0  nop
    ctx->pc = 0x18e12cu;
    // NOP
label_18e130:
    // 0x18e130: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x18e130u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
label_18e134:
    // 0x18e134: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e134u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18e138:
    // 0x18e138: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18e13c:
    // 0x18e13c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18e13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18e140:
    // 0x18e140: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x18e140u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_18e144:
    // 0x18e144: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18e144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18e148:
    // 0x18e148: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e14c:
    // 0x18e14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e150:
    // 0x18e150: 0x0  nop
    ctx->pc = 0x18e150u;
    // NOP
label_18e154:
    // 0x18e154: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x18e154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e158:
    // 0x18e158: 0x0  nop
    ctx->pc = 0x18e158u;
    // NOP
label_18e15c:
    // 0x18e15c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_18e160:
    if (ctx->pc == 0x18E160u) {
        ctx->pc = 0x18E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E15Cu;
        // 0x18e160: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E164u;
        goto label_18e164;
    }
    ctx->pc = 0x18E15Cu;
    {
        const bool branch_taken_0x18e15c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E15Cu;
        // 0x18e160: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e15c) {
            ctx->pc = 0x18E17Cu;
            goto label_18e17c;
        }
    }
    ctx->pc = 0x18E164u;
label_18e164:
    // 0x18e164: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18e164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18e168:
    // 0x18e168: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e16c:
    // 0x18e16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e170:
    // 0x18e170: 0x1000000e  b           . + 4 + (0xE << 2)
label_18e174:
    if (ctx->pc == 0x18E174u) {
        ctx->pc = 0x18E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E170u;
        // 0x18e174: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E178u;
        goto label_18e178;
    }
    ctx->pc = 0x18E170u;
    {
        const bool branch_taken_0x18e170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E170u;
        // 0x18e174: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e170) {
            ctx->pc = 0x18E1ACu;
            goto label_18e1ac;
        }
    }
    ctx->pc = 0x18E178u;
label_18e178:
    // 0x18e178: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18e17c:
    // 0x18e17c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e180:
    // 0x18e180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e184:
    // 0x18e184: 0x0  nop
    ctx->pc = 0x18e184u;
    // NOP
label_18e188:
    // 0x18e188: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18e188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e18c:
    // 0x18e18c: 0x0  nop
    ctx->pc = 0x18e18cu;
    // NOP
label_18e190:
    // 0x18e190: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18e194:
    if (ctx->pc == 0x18E194u) {
        ctx->pc = 0x18E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E190u;
        // 0x18e194: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E198u;
        goto label_18e198;
    }
    ctx->pc = 0x18E190u;
    {
        const bool branch_taken_0x18e190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E190u;
        // 0x18e194: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e190) {
            ctx->pc = 0x18E1B0u;
            goto label_18e1b0;
        }
    }
    ctx->pc = 0x18E198u;
label_18e198:
    // 0x18e198: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18e198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18e19c:
    // 0x18e19c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e1a0:
    // 0x18e1a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e1a4:
    // 0x18e1a4: 0x0  nop
    ctx->pc = 0x18e1a4u;
    // NOP
label_18e1a8:
    // 0x18e1a8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x18e1a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_18e1ac:
    // 0x18e1ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18e1acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_18e1b0:
    // 0x18e1b0: 0xc06d448  jal         func_1B5120
label_18e1b4:
    if (ctx->pc == 0x18E1B4u) {
        ctx->pc = 0x18E1B8u;
        goto label_18e1b8;
    }
    ctx->pc = 0x18E1B0u;
    SET_GPR_U32(ctx, 31, 0x18E1B8u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18E1B8u;
label_18e1b8:
    // 0x18e1b8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e1bc:
    // 0x18e1bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18e1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18e1c0:
    // 0x18e1c0: 0xe7808864  swc1        $f0, -0x779C($gp)
    ctx->pc = 0x18e1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936676), bits); }
label_18e1c4:
    // 0x18e1c4: 0xc066e26  jal         func_19B898
label_18e1c8:
    if (ctx->pc == 0x18E1C8u) {
        ctx->pc = 0x18E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1C4u;
        // 0x18e1c8: 0x248499a0  addiu       $a0, $a0, -0x6660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1CCu;
        goto label_18e1cc;
    }
    ctx->pc = 0x18E1C4u;
    SET_GPR_U32(ctx, 31, 0x18E1CCu);
    ctx->pc = 0x18E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E1C4u;
    // 0x18e1c8: 0x248499a0  addiu       $a0, $a0, -0x6660 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18E1CCu;
label_18e1cc:
    // 0x18e1cc: 0xc7818868  lwc1        $f1, -0x7798($gp)
    ctx->pc = 0x18e1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e1d0:
    // 0x18e1d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18e1d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e1d4:
    // 0x18e1d4: 0x0  nop
    ctx->pc = 0x18e1d4u;
    // NOP
label_18e1d8:
    // 0x18e1d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18e1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e1dc:
    // 0x18e1dc: 0x0  nop
    ctx->pc = 0x18e1dcu;
    // NOP
label_18e1e0:
    // 0x18e1e0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_18e1e4:
    if (ctx->pc == 0x18E1E4u) {
        ctx->pc = 0x18E1E8u;
        goto label_18e1e8;
    }
    ctx->pc = 0x18E1E0u;
    {
        const bool branch_taken_0x18e1e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e1e0) {
            ctx->pc = 0x18E20Cu;
            goto label_18e20c;
        }
    }
    ctx->pc = 0x18E1E8u;
label_18e1e8:
    // 0x18e1e8: 0xc7818874  lwc1        $f1, -0x778C($gp)
    ctx->pc = 0x18e1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e1ec:
    // 0x18e1ec: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x18e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_18e1f0:
    // 0x18e1f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e1f4:
    // 0x18e1f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18e1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18e1f8:
    // 0x18e1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e1fc:
    // 0x18e1fc: 0x0  nop
    ctx->pc = 0x18e1fcu;
    // NOP
label_18e200:
    // 0x18e200: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18e200u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18e204:
    // 0x18e204: 0x10000009  b           . + 4 + (0x9 << 2)
label_18e208:
    if (ctx->pc == 0x18E208u) {
        ctx->pc = 0x18E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E204u;
        // 0x18e208: 0xe42099a4  swc1        $f0, -0x665C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941092), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E20Cu;
        goto label_18e20c;
    }
    ctx->pc = 0x18E204u;
    {
        const bool branch_taken_0x18e204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E204u;
        // 0x18e208: 0xe42099a4  swc1        $f0, -0x665C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e204) {
            ctx->pc = 0x18E22Cu;
            goto label_18e22c;
        }
    }
    ctx->pc = 0x18E20Cu;
label_18e20c:
    // 0x18e20c: 0xc7808874  lwc1        $f0, -0x778C($gp)
    ctx->pc = 0x18e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e210:
    // 0x18e210: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x18e210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_18e214:
    // 0x18e214: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e218:
    // 0x18e218: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18e218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18e21c:
    // 0x18e21c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e220:
    // 0x18e220: 0x0  nop
    ctx->pc = 0x18e220u;
    // NOP
label_18e224:
    // 0x18e224: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18e224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18e228:
    // 0x18e228: 0xe42099a4  swc1        $f0, -0x665C($at)
    ctx->pc = 0x18e228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941092), bits); }
label_18e22c:
    // 0x18e22c: 0xc7818864  lwc1        $f1, -0x779C($gp)
    ctx->pc = 0x18e22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e230:
    // 0x18e230: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x18e230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_18e234:
    // 0x18e234: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18e234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_18e238:
    // 0x18e238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e23c:
    // 0x18e23c: 0x0  nop
    ctx->pc = 0x18e23cu;
    // NOP
label_18e240:
    // 0x18e240: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18e240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e244:
    // 0x18e244: 0x0  nop
    ctx->pc = 0x18e244u;
    // NOP
label_18e248:
    // 0x18e248: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_18e24c:
    if (ctx->pc == 0x18E24Cu) {
        ctx->pc = 0x18E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E248u;
        // 0x18e24c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E250u;
        goto label_18e250;
    }
    ctx->pc = 0x18E248u;
    {
        const bool branch_taken_0x18e248 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E248u;
        // 0x18e24c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e248) {
            ctx->pc = 0x18E258u;
            goto label_18e258;
        }
    }
    ctx->pc = 0x18E250u;
label_18e250:
    // 0x18e250: 0xe7808864  swc1        $f0, -0x779C($gp)
    ctx->pc = 0x18e250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936676), bits); }
label_18e254:
    // 0x18e254: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x18e254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_18e258:
    // 0x18e258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e25c:
    // 0x18e25c: 0x0  nop
    ctx->pc = 0x18e25cu;
    // NOP
label_18e260:
    // 0x18e260: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x18e260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e264:
    // 0x18e264: 0x0  nop
    ctx->pc = 0x18e264u;
    // NOP
label_18e268:
    // 0x18e268: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_18e26c:
    if (ctx->pc == 0x18E26Cu) {
        ctx->pc = 0x18E270u;
        goto label_18e270;
    }
    ctx->pc = 0x18E268u;
    {
        const bool branch_taken_0x18e268 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e268) {
            ctx->pc = 0x18E2B0u;
            goto label_18e2b0;
        }
    }
    ctx->pc = 0x18E270u;
label_18e270:
    // 0x18e270: 0xc7808864  lwc1        $f0, -0x779C($gp)
    ctx->pc = 0x18e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e274:
    // 0x18e274: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x18e274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
label_18e278:
    // 0x18e278: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18e278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_18e27c:
    // 0x18e27c: 0x34428880  ori         $v0, $v0, 0x8880
    ctx->pc = 0x18e27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34944);
label_18e280:
    // 0x18e280: 0x4616b8c0  add.s       $f3, $f23, $f22
    ctx->pc = 0x18e280u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_18e284:
    // 0x18e284: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18e284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18e288:
    // 0x18e288: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18e288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18e28c:
    // 0x18e28c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18e28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18e290:
    // 0x18e290: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x18e290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
label_18e294:
    // 0x18e294: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18e294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18e298:
    // 0x18e298: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e29c:
    // 0x18e29c: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x18e29cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_18e2a0:
    // 0x18e2a0: 0xc063d10  jal         func_18F440
label_18e2a4:
    if (ctx->pc == 0x18E2A4u) {
        ctx->pc = 0x18E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2A0u;
        // 0x18e2a4: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2A8u;
        goto label_18e2a8;
    }
    ctx->pc = 0x18E2A0u;
    SET_GPR_U32(ctx, 31, 0x18E2A8u);
    ctx->pc = 0x18E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2A0u;
    // 0x18e2a4: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F440u;
    { ctx->pc = 0x18f440; return; }
    ctx->pc = 0x18E2A8u;
label_18e2a8:
    // 0x18e2a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_18e2ac:
    if (ctx->pc == 0x18E2ACu) {
        ctx->pc = 0x18E2B0u;
        goto label_18e2b0;
    }
    ctx->pc = 0x18E2A8u;
    {
        const bool branch_taken_0x18e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e2a8) {
            ctx->pc = 0x18E2E8u;
            goto label_18e2e8;
        }
    }
    ctx->pc = 0x18E2B0u;
label_18e2b0:
    // 0x18e2b0: 0xc7808864  lwc1        $f0, -0x779C($gp)
    ctx->pc = 0x18e2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e2b4:
    // 0x18e2b4: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x18e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
label_18e2b8:
    // 0x18e2b8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_18e2bc:
    // 0x18e2bc: 0x34428880  ori         $v0, $v0, 0x8880
    ctx->pc = 0x18e2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34944);
label_18e2c0:
    // 0x18e2c0: 0x4616b8c0  add.s       $f3, $f23, $f22
    ctx->pc = 0x18e2c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_18e2c4:
    // 0x18e2c4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18e2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18e2c8:
    // 0x18e2c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18e2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18e2cc:
    // 0x18e2cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18e2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18e2d0:
    // 0x18e2d0: 0x24c699a0  addiu       $a2, $a2, -0x6660
    ctx->pc = 0x18e2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941088));
label_18e2d4:
    // 0x18e2d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18e2d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18e2d8:
    // 0x18e2d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e2dc:
    // 0x18e2dc: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x18e2dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_18e2e0:
    // 0x18e2e0: 0xc063d10  jal         func_18F440
label_18e2e4:
    if (ctx->pc == 0x18E2E4u) {
        ctx->pc = 0x18E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2E0u;
        // 0x18e2e4: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2E8u;
        goto label_18e2e8;
    }
    ctx->pc = 0x18E2E0u;
    SET_GPR_U32(ctx, 31, 0x18E2E8u);
    ctx->pc = 0x18E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2E0u;
    // 0x18e2e4: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F440u;
    { ctx->pc = 0x18f440; return; }
    ctx->pc = 0x18E2E8u;
label_18e2e8:
    // 0x18e2e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18e2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_18e2ec:
    // 0x18e2ec: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x18e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_18e2f0:
    // 0x18e2f0: 0xc066e26  jal         func_19B898
label_18e2f4:
    if (ctx->pc == 0x18E2F4u) {
        ctx->pc = 0x18E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2F0u;
        // 0x18e2f4: 0x24a599a0  addiu       $a1, $a1, -0x6660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2F8u;
        goto label_18e2f8;
    }
    ctx->pc = 0x18E2F0u;
    SET_GPR_U32(ctx, 31, 0x18E2F8u);
    ctx->pc = 0x18E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2F0u;
    // 0x18e2f4: 0x24a599a0  addiu       $a1, $a1, -0x6660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18E2F8u;
label_18e2f8:
    // 0x18e2f8: 0xc7808864  lwc1        $f0, -0x779C($gp)
    ctx->pc = 0x18e2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e2fc:
    // 0x18e2fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_18e300:
    // 0x18e300: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x18e300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_18e304:
    // 0x18e304: 0xe6800090  swc1        $f0, 0x90($s4)
    ctx->pc = 0x18e304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 144), bits); }
label_18e308:
    // 0x18e308: 0xc066e44  jal         func_19B910
label_18e30c:
    if (ctx->pc == 0x18E30Cu) {
        ctx->pc = 0x18E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E308u;
        // 0x18e30c: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E310u;
        goto label_18e310;
    }
    ctx->pc = 0x18E308u;
    SET_GPR_U32(ctx, 31, 0x18E310u);
    ctx->pc = 0x18E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E308u;
    // 0x18e30c: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x18E310u;
label_18e310:
    // 0x18e310: 0xc68c0028  lwc1        $f12, 0x28($s4)
    ctx->pc = 0x18e310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18e314:
    // 0x18e314: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x18e314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_18e318:
    // 0x18e318: 0xc066e6c  jal         func_19B9B0
label_18e31c:
    if (ctx->pc == 0x18E31Cu) {
        ctx->pc = 0x18E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E318u;
        // 0x18e31c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E320u;
        goto label_18e320;
    }
    ctx->pc = 0x18E318u;
    SET_GPR_U32(ctx, 31, 0x18E320u);
    ctx->pc = 0x18E31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E318u;
    // 0x18e31c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x18E320u;
label_18e320:
    // 0x18e320: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x18e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18e324:
    // 0x18e324: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x18e324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_18e328:
    // 0x18e328: 0xc066e96  jal         func_19BA58
label_18e32c:
    if (ctx->pc == 0x18E32Cu) {
        ctx->pc = 0x18E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E328u;
        // 0x18e32c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E330u;
        goto label_18e330;
    }
    ctx->pc = 0x18E328u;
    SET_GPR_U32(ctx, 31, 0x18E330u);
    ctx->pc = 0x18E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E328u;
    // 0x18e32c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x18E330u;
label_18e330:
    // 0x18e330: 0xc68c0024  lwc1        $f12, 0x24($s4)
    ctx->pc = 0x18e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18e334:
    // 0x18e334: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x18e334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_18e338:
    // 0x18e338: 0xc066ec0  jal         func_19BB00
label_18e33c:
    if (ctx->pc == 0x18E33Cu) {
        ctx->pc = 0x18E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E338u;
        // 0x18e33c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E340u;
        { ctx->pc = 0x18e340; return; }
    }
    ctx->pc = 0x18E338u;
    SET_GPR_U32(ctx, 31, 0x18E340u);
    ctx->pc = 0x18E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E338u;
    // 0x18e33c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x18E340u;
    ctx->pc = 0x18e340u;
    return;
}
