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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part76(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20db10u: goto label_20db10;
        case 0x20db14u: goto label_20db14;
        case 0x20db18u: goto label_20db18;
        case 0x20db1cu: goto label_20db1c;
        case 0x20db20u: goto label_20db20;
        case 0x20db24u: goto label_20db24;
        case 0x20db28u: goto label_20db28;
        case 0x20db2cu: goto label_20db2c;
        case 0x20db30u: goto label_20db30;
        case 0x20db34u: goto label_20db34;
        case 0x20db38u: goto label_20db38;
        case 0x20db3cu: goto label_20db3c;
        case 0x20db40u: goto label_20db40;
        case 0x20db44u: goto label_20db44;
        case 0x20db48u: goto label_20db48;
        case 0x20db4cu: goto label_20db4c;
        case 0x20db50u: goto label_20db50;
        case 0x20db54u: goto label_20db54;
        case 0x20db58u: goto label_20db58;
        case 0x20db5cu: goto label_20db5c;
        case 0x20db60u: goto label_20db60;
        case 0x20db64u: goto label_20db64;
        case 0x20db68u: goto label_20db68;
        case 0x20db6cu: goto label_20db6c;
        case 0x20db70u: goto label_20db70;
        case 0x20db74u: goto label_20db74;
        case 0x20db78u: goto label_20db78;
        case 0x20db7cu: goto label_20db7c;
        case 0x20db80u: goto label_20db80;
        case 0x20db84u: goto label_20db84;
        case 0x20db88u: goto label_20db88;
        case 0x20db8cu: goto label_20db8c;
        case 0x20db90u: goto label_20db90;
        case 0x20db94u: goto label_20db94;
        case 0x20db98u: goto label_20db98;
        case 0x20db9cu: goto label_20db9c;
        case 0x20dba0u: goto label_20dba0;
        case 0x20dba4u: goto label_20dba4;
        case 0x20dba8u: goto label_20dba8;
        case 0x20dbacu: goto label_20dbac;
        case 0x20dbb0u: goto label_20dbb0;
        case 0x20dbb4u: goto label_20dbb4;
        case 0x20dbb8u: goto label_20dbb8;
        case 0x20dbbcu: goto label_20dbbc;
        case 0x20dbc0u: goto label_20dbc0;
        case 0x20dbc4u: goto label_20dbc4;
        case 0x20dbc8u: goto label_20dbc8;
        case 0x20dbccu: goto label_20dbcc;
        case 0x20dbd0u: goto label_20dbd0;
        case 0x20dbd4u: goto label_20dbd4;
        case 0x20dbd8u: goto label_20dbd8;
        case 0x20dbdcu: goto label_20dbdc;
        case 0x20dbe0u: goto label_20dbe0;
        case 0x20dbe4u: goto label_20dbe4;
        case 0x20dbe8u: goto label_20dbe8;
        case 0x20dbecu: goto label_20dbec;
        case 0x20dbf0u: goto label_20dbf0;
        case 0x20dbf4u: goto label_20dbf4;
        case 0x20dbf8u: goto label_20dbf8;
        case 0x20dbfcu: goto label_20dbfc;
        case 0x20dc00u: goto label_20dc00;
        case 0x20dc04u: goto label_20dc04;
        case 0x20dc08u: goto label_20dc08;
        case 0x20dc0cu: goto label_20dc0c;
        case 0x20dc10u: goto label_20dc10;
        case 0x20dc14u: goto label_20dc14;
        case 0x20dc18u: goto label_20dc18;
        case 0x20dc1cu: goto label_20dc1c;
        case 0x20dc20u: goto label_20dc20;
        case 0x20dc24u: goto label_20dc24;
        case 0x20dc28u: goto label_20dc28;
        case 0x20dc2cu: goto label_20dc2c;
        case 0x20dc30u: goto label_20dc30;
        case 0x20dc34u: goto label_20dc34;
        case 0x20dc38u: goto label_20dc38;
        case 0x20dc3cu: goto label_20dc3c;
        case 0x20dc40u: goto label_20dc40;
        case 0x20dc44u: goto label_20dc44;
        case 0x20dc48u: goto label_20dc48;
        case 0x20dc4cu: goto label_20dc4c;
        case 0x20dc50u: goto label_20dc50;
        case 0x20dc54u: goto label_20dc54;
        case 0x20dc58u: goto label_20dc58;
        case 0x20dc5cu: goto label_20dc5c;
        case 0x20dc60u: goto label_20dc60;
        case 0x20dc64u: goto label_20dc64;
        case 0x20dc68u: goto label_20dc68;
        case 0x20dc6cu: goto label_20dc6c;
        case 0x20dc70u: goto label_20dc70;
        case 0x20dc74u: goto label_20dc74;
        case 0x20dc78u: goto label_20dc78;
        case 0x20dc7cu: goto label_20dc7c;
        case 0x20dc80u: goto label_20dc80;
        case 0x20dc84u: goto label_20dc84;
        case 0x20dc88u: goto label_20dc88;
        case 0x20dc8cu: goto label_20dc8c;
        case 0x20dc90u: goto label_20dc90;
        case 0x20dc94u: goto label_20dc94;
        case 0x20dc98u: goto label_20dc98;
        case 0x20dc9cu: goto label_20dc9c;
        case 0x20dca0u: goto label_20dca0;
        case 0x20dca4u: goto label_20dca4;
        case 0x20dca8u: goto label_20dca8;
        case 0x20dcacu: goto label_20dcac;
        case 0x20dcb0u: goto label_20dcb0;
        case 0x20dcb4u: goto label_20dcb4;
        case 0x20dcb8u: goto label_20dcb8;
        case 0x20dcbcu: goto label_20dcbc;
        case 0x20dcc0u: goto label_20dcc0;
        case 0x20dcc4u: goto label_20dcc4;
        case 0x20dcc8u: goto label_20dcc8;
        case 0x20dcccu: goto label_20dccc;
        case 0x20dcd0u: goto label_20dcd0;
        case 0x20dcd4u: goto label_20dcd4;
        case 0x20dcd8u: goto label_20dcd8;
        case 0x20dcdcu: goto label_20dcdc;
        case 0x20dce0u: goto label_20dce0;
        case 0x20dce4u: goto label_20dce4;
        case 0x20dce8u: goto label_20dce8;
        case 0x20dcecu: goto label_20dcec;
        case 0x20dcf0u: goto label_20dcf0;
        case 0x20dcf4u: goto label_20dcf4;
        case 0x20dcf8u: goto label_20dcf8;
        case 0x20dcfcu: goto label_20dcfc;
        case 0x20dd00u: goto label_20dd00;
        case 0x20dd04u: goto label_20dd04;
        case 0x20dd08u: goto label_20dd08;
        case 0x20dd0cu: goto label_20dd0c;
        case 0x20dd10u: goto label_20dd10;
        case 0x20dd14u: goto label_20dd14;
        case 0x20dd18u: goto label_20dd18;
        case 0x20dd1cu: goto label_20dd1c;
        case 0x20dd20u: goto label_20dd20;
        case 0x20dd24u: goto label_20dd24;
        case 0x20dd28u: goto label_20dd28;
        case 0x20dd2cu: goto label_20dd2c;
        case 0x20dd30u: goto label_20dd30;
        case 0x20dd34u: goto label_20dd34;
        case 0x20dd38u: goto label_20dd38;
        case 0x20dd3cu: goto label_20dd3c;
        case 0x20dd40u: goto label_20dd40;
        case 0x20dd44u: goto label_20dd44;
        case 0x20dd48u: goto label_20dd48;
        case 0x20dd4cu: goto label_20dd4c;
        case 0x20dd50u: goto label_20dd50;
        case 0x20dd54u: goto label_20dd54;
        case 0x20dd58u: goto label_20dd58;
        case 0x20dd5cu: goto label_20dd5c;
        case 0x20dd60u: goto label_20dd60;
        case 0x20dd64u: goto label_20dd64;
        case 0x20dd68u: goto label_20dd68;
        case 0x20dd6cu: goto label_20dd6c;
        case 0x20dd70u: goto label_20dd70;
        case 0x20dd74u: goto label_20dd74;
        case 0x20dd78u: goto label_20dd78;
        case 0x20dd7cu: goto label_20dd7c;
        case 0x20dd80u: goto label_20dd80;
        case 0x20dd84u: goto label_20dd84;
        case 0x20dd88u: goto label_20dd88;
        case 0x20dd8cu: goto label_20dd8c;
        case 0x20dd90u: goto label_20dd90;
        case 0x20dd94u: goto label_20dd94;
        case 0x20dd98u: goto label_20dd98;
        case 0x20dd9cu: goto label_20dd9c;
        case 0x20dda0u: goto label_20dda0;
        case 0x20dda4u: goto label_20dda4;
        case 0x20dda8u: goto label_20dda8;
        case 0x20ddacu: goto label_20ddac;
        case 0x20ddb0u: goto label_20ddb0;
        case 0x20ddb4u: goto label_20ddb4;
        case 0x20ddb8u: goto label_20ddb8;
        case 0x20ddbcu: goto label_20ddbc;
        case 0x20ddc0u: goto label_20ddc0;
        case 0x20ddc4u: goto label_20ddc4;
        case 0x20ddc8u: goto label_20ddc8;
        case 0x20ddccu: goto label_20ddcc;
        case 0x20ddd0u: goto label_20ddd0;
        case 0x20ddd4u: goto label_20ddd4;
        case 0x20ddd8u: goto label_20ddd8;
        case 0x20dddcu: goto label_20dddc;
        case 0x20dde0u: goto label_20dde0;
        case 0x20dde4u: goto label_20dde4;
        case 0x20dde8u: goto label_20dde8;
        case 0x20ddecu: goto label_20ddec;
        case 0x20ddf0u: goto label_20ddf0;
        case 0x20ddf4u: goto label_20ddf4;
        case 0x20ddf8u: goto label_20ddf8;
        case 0x20ddfcu: goto label_20ddfc;
        case 0x20de00u: goto label_20de00;
        case 0x20de04u: goto label_20de04;
        case 0x20de08u: goto label_20de08;
        case 0x20de0cu: goto label_20de0c;
        case 0x20de10u: goto label_20de10;
        case 0x20de14u: goto label_20de14;
        case 0x20de18u: goto label_20de18;
        case 0x20de1cu: goto label_20de1c;
        case 0x20de20u: goto label_20de20;
        case 0x20de24u: goto label_20de24;
        case 0x20de28u: goto label_20de28;
        case 0x20de2cu: goto label_20de2c;
        case 0x20de30u: goto label_20de30;
        case 0x20de34u: goto label_20de34;
        case 0x20de38u: goto label_20de38;
        case 0x20de3cu: goto label_20de3c;
        case 0x20de40u: goto label_20de40;
        case 0x20de44u: goto label_20de44;
        case 0x20de48u: goto label_20de48;
        case 0x20de4cu: goto label_20de4c;
        case 0x20de50u: goto label_20de50;
        case 0x20de54u: goto label_20de54;
        case 0x20de58u: goto label_20de58;
        case 0x20de5cu: goto label_20de5c;
        case 0x20de60u: goto label_20de60;
        case 0x20de64u: goto label_20de64;
        case 0x20de68u: goto label_20de68;
        case 0x20de6cu: goto label_20de6c;
        case 0x20de70u: goto label_20de70;
        case 0x20de74u: goto label_20de74;
        case 0x20de78u: goto label_20de78;
        case 0x20de7cu: goto label_20de7c;
        case 0x20de80u: goto label_20de80;
        case 0x20de84u: goto label_20de84;
        case 0x20de88u: goto label_20de88;
        case 0x20de8cu: goto label_20de8c;
        case 0x20de90u: goto label_20de90;
        case 0x20de94u: goto label_20de94;
        case 0x20de98u: goto label_20de98;
        case 0x20de9cu: goto label_20de9c;
        case 0x20dea0u: goto label_20dea0;
        case 0x20dea4u: goto label_20dea4;
        case 0x20dea8u: goto label_20dea8;
        case 0x20deacu: goto label_20deac;
        case 0x20deb0u: goto label_20deb0;
        case 0x20deb4u: goto label_20deb4;
        case 0x20deb8u: goto label_20deb8;
        case 0x20debcu: goto label_20debc;
        case 0x20dec0u: goto label_20dec0;
        case 0x20dec4u: goto label_20dec4;
        case 0x20dec8u: goto label_20dec8;
        case 0x20deccu: goto label_20decc;
        case 0x20ded0u: goto label_20ded0;
        case 0x20ded4u: goto label_20ded4;
        case 0x20ded8u: goto label_20ded8;
        case 0x20dedcu: goto label_20dedc;
        case 0x20dee0u: goto label_20dee0;
        case 0x20dee4u: goto label_20dee4;
        case 0x20dee8u: goto label_20dee8;
        case 0x20deecu: goto label_20deec;
        case 0x20def0u: goto label_20def0;
        case 0x20def4u: goto label_20def4;
        case 0x20def8u: goto label_20def8;
        case 0x20defcu: goto label_20defc;
        case 0x20df00u: goto label_20df00;
        case 0x20df04u: goto label_20df04;
        case 0x20df08u: goto label_20df08;
        case 0x20df0cu: goto label_20df0c;
        case 0x20df10u: goto label_20df10;
        case 0x20df14u: goto label_20df14;
        case 0x20df18u: goto label_20df18;
        case 0x20df1cu: goto label_20df1c;
        case 0x20df20u: goto label_20df20;
        case 0x20df24u: goto label_20df24;
        case 0x20df28u: goto label_20df28;
        case 0x20df2cu: goto label_20df2c;
        case 0x20df30u: goto label_20df30;
        case 0x20df34u: goto label_20df34;
        case 0x20df38u: goto label_20df38;
        case 0x20df3cu: goto label_20df3c;
        case 0x20df40u: goto label_20df40;
        case 0x20df44u: goto label_20df44;
        case 0x20df48u: goto label_20df48;
        case 0x20df4cu: goto label_20df4c;
        case 0x20df50u: goto label_20df50;
        case 0x20df54u: goto label_20df54;
        case 0x20df58u: goto label_20df58;
        case 0x20df5cu: goto label_20df5c;
        case 0x20df60u: goto label_20df60;
        case 0x20df64u: goto label_20df64;
        case 0x20df68u: goto label_20df68;
        case 0x20df6cu: goto label_20df6c;
        case 0x20df70u: goto label_20df70;
        case 0x20df74u: goto label_20df74;
        case 0x20df78u: goto label_20df78;
        case 0x20df7cu: goto label_20df7c;
        case 0x20df80u: goto label_20df80;
        case 0x20df84u: goto label_20df84;
        case 0x20df88u: goto label_20df88;
        case 0x20df8cu: goto label_20df8c;
        case 0x20df90u: goto label_20df90;
        case 0x20df94u: goto label_20df94;
        case 0x20df98u: goto label_20df98;
        case 0x20df9cu: goto label_20df9c;
        case 0x20dfa0u: goto label_20dfa0;
        case 0x20dfa4u: goto label_20dfa4;
        case 0x20dfa8u: goto label_20dfa8;
        case 0x20dfacu: goto label_20dfac;
        case 0x20dfb0u: goto label_20dfb0;
        case 0x20dfb4u: goto label_20dfb4;
        case 0x20dfb8u: goto label_20dfb8;
        case 0x20dfbcu: goto label_20dfbc;
        case 0x20dfc0u: goto label_20dfc0;
        case 0x20dfc4u: goto label_20dfc4;
        case 0x20dfc8u: goto label_20dfc8;
        case 0x20dfccu: goto label_20dfcc;
        case 0x20dfd0u: goto label_20dfd0;
        case 0x20dfd4u: goto label_20dfd4;
        case 0x20dfd8u: goto label_20dfd8;
        case 0x20dfdcu: goto label_20dfdc;
        case 0x20dfe0u: goto label_20dfe0;
        case 0x20dfe4u: goto label_20dfe4;
        case 0x20dfe8u: goto label_20dfe8;
        case 0x20dfecu: goto label_20dfec;
        case 0x20dff0u: goto label_20dff0;
        case 0x20dff4u: goto label_20dff4;
        case 0x20dff8u: goto label_20dff8;
        case 0x20dffcu: goto label_20dffc;
        case 0x20e000u: goto label_20e000;
        case 0x20e004u: goto label_20e004;
        case 0x20e008u: goto label_20e008;
        case 0x20e00cu: goto label_20e00c;
        case 0x20e010u: goto label_20e010;
        case 0x20e014u: goto label_20e014;
        case 0x20e018u: goto label_20e018;
        case 0x20e01cu: goto label_20e01c;
        case 0x20e020u: goto label_20e020;
        case 0x20e024u: goto label_20e024;
        case 0x20e028u: goto label_20e028;
        case 0x20e02cu: goto label_20e02c;
        case 0x20e030u: goto label_20e030;
        case 0x20e034u: goto label_20e034;
        case 0x20e038u: goto label_20e038;
        case 0x20e03cu: goto label_20e03c;
        case 0x20e040u: goto label_20e040;
        case 0x20e044u: goto label_20e044;
        case 0x20e048u: goto label_20e048;
        case 0x20e04cu: goto label_20e04c;
        case 0x20e050u: goto label_20e050;
        case 0x20e054u: goto label_20e054;
        case 0x20e058u: goto label_20e058;
        case 0x20e05cu: goto label_20e05c;
        case 0x20e060u: goto label_20e060;
        case 0x20e064u: goto label_20e064;
        case 0x20e068u: goto label_20e068;
        case 0x20e06cu: goto label_20e06c;
        case 0x20e070u: goto label_20e070;
        case 0x20e074u: goto label_20e074;
        case 0x20e078u: goto label_20e078;
        case 0x20e07cu: goto label_20e07c;
        case 0x20e080u: goto label_20e080;
        case 0x20e084u: goto label_20e084;
        case 0x20e088u: goto label_20e088;
        case 0x20e08cu: goto label_20e08c;
        case 0x20e090u: goto label_20e090;
        case 0x20e094u: goto label_20e094;
        case 0x20e098u: goto label_20e098;
        case 0x20e09cu: goto label_20e09c;
        case 0x20e0a0u: goto label_20e0a0;
        case 0x20e0a4u: goto label_20e0a4;
        case 0x20e0a8u: goto label_20e0a8;
        case 0x20e0acu: goto label_20e0ac;
        case 0x20e0b0u: goto label_20e0b0;
        case 0x20e0b4u: goto label_20e0b4;
        case 0x20e0b8u: goto label_20e0b8;
        case 0x20e0bcu: goto label_20e0bc;
        case 0x20e0c0u: goto label_20e0c0;
        case 0x20e0c4u: goto label_20e0c4;
        case 0x20e0c8u: goto label_20e0c8;
        case 0x20e0ccu: goto label_20e0cc;
        case 0x20e0d0u: goto label_20e0d0;
        case 0x20e0d4u: goto label_20e0d4;
        case 0x20e0d8u: goto label_20e0d8;
        case 0x20e0dcu: goto label_20e0dc;
        case 0x20e0e0u: goto label_20e0e0;
        case 0x20e0e4u: goto label_20e0e4;
        case 0x20e0e8u: goto label_20e0e8;
        case 0x20e0ecu: goto label_20e0ec;
        case 0x20e0f0u: goto label_20e0f0;
        case 0x20e0f4u: goto label_20e0f4;
        case 0x20e0f8u: goto label_20e0f8;
        case 0x20e0fcu: goto label_20e0fc;
        case 0x20e100u: goto label_20e100;
        case 0x20e104u: goto label_20e104;
        case 0x20e108u: goto label_20e108;
        case 0x20e10cu: goto label_20e10c;
        case 0x20e110u: goto label_20e110;
        case 0x20e114u: goto label_20e114;
        case 0x20e118u: goto label_20e118;
        case 0x20e11cu: goto label_20e11c;
        case 0x20e120u: goto label_20e120;
        case 0x20e124u: goto label_20e124;
        case 0x20e128u: goto label_20e128;
        case 0x20e12cu: goto label_20e12c;
        case 0x20e130u: goto label_20e130;
        case 0x20e134u: goto label_20e134;
        case 0x20e138u: goto label_20e138;
        case 0x20e13cu: goto label_20e13c;
        case 0x20e140u: goto label_20e140;
        case 0x20e144u: goto label_20e144;
        case 0x20e148u: goto label_20e148;
        case 0x20e14cu: goto label_20e14c;
        case 0x20e150u: goto label_20e150;
        case 0x20e154u: goto label_20e154;
        case 0x20e158u: goto label_20e158;
        case 0x20e15cu: goto label_20e15c;
        case 0x20e160u: goto label_20e160;
        case 0x20e164u: goto label_20e164;
        case 0x20e168u: goto label_20e168;
        case 0x20e16cu: goto label_20e16c;
        case 0x20e170u: goto label_20e170;
        case 0x20e174u: goto label_20e174;
        case 0x20e178u: goto label_20e178;
        case 0x20e17cu: goto label_20e17c;
        case 0x20e180u: goto label_20e180;
        case 0x20e184u: goto label_20e184;
        case 0x20e188u: goto label_20e188;
        case 0x20e18cu: goto label_20e18c;
        case 0x20e190u: goto label_20e190;
        case 0x20e194u: goto label_20e194;
        case 0x20e198u: goto label_20e198;
        case 0x20e19cu: goto label_20e19c;
        case 0x20e1a0u: goto label_20e1a0;
        case 0x20e1a4u: goto label_20e1a4;
        case 0x20e1a8u: goto label_20e1a8;
        case 0x20e1acu: goto label_20e1ac;
        case 0x20e1b0u: goto label_20e1b0;
        case 0x20e1b4u: goto label_20e1b4;
        case 0x20e1b8u: goto label_20e1b8;
        case 0x20e1bcu: goto label_20e1bc;
        case 0x20e1c0u: goto label_20e1c0;
        case 0x20e1c4u: goto label_20e1c4;
        case 0x20e1c8u: goto label_20e1c8;
        case 0x20e1ccu: goto label_20e1cc;
        case 0x20e1d0u: goto label_20e1d0;
        case 0x20e1d4u: goto label_20e1d4;
        case 0x20e1d8u: goto label_20e1d8;
        case 0x20e1dcu: goto label_20e1dc;
        case 0x20e1e0u: goto label_20e1e0;
        case 0x20e1e4u: goto label_20e1e4;
        case 0x20e1e8u: goto label_20e1e8;
        case 0x20e1ecu: goto label_20e1ec;
        case 0x20e1f0u: goto label_20e1f0;
        case 0x20e1f4u: goto label_20e1f4;
        case 0x20e1f8u: goto label_20e1f8;
        case 0x20e1fcu: goto label_20e1fc;
        case 0x20e200u: goto label_20e200;
        case 0x20e204u: goto label_20e204;
        case 0x20e208u: goto label_20e208;
        case 0x20e20cu: goto label_20e20c;
        case 0x20e210u: goto label_20e210;
        case 0x20e214u: goto label_20e214;
        case 0x20e218u: goto label_20e218;
        case 0x20e21cu: goto label_20e21c;
        case 0x20e220u: goto label_20e220;
        case 0x20e224u: goto label_20e224;
        case 0x20e228u: goto label_20e228;
        case 0x20e22cu: goto label_20e22c;
        case 0x20e230u: goto label_20e230;
        case 0x20e234u: goto label_20e234;
        case 0x20e238u: goto label_20e238;
        case 0x20e23cu: goto label_20e23c;
        case 0x20e240u: goto label_20e240;
        case 0x20e244u: goto label_20e244;
        case 0x20e248u: goto label_20e248;
        case 0x20e24cu: goto label_20e24c;
        case 0x20e250u: goto label_20e250;
        case 0x20e254u: goto label_20e254;
        case 0x20e258u: goto label_20e258;
        case 0x20e25cu: goto label_20e25c;
        case 0x20e260u: goto label_20e260;
        case 0x20e264u: goto label_20e264;
        case 0x20e268u: goto label_20e268;
        case 0x20e26cu: goto label_20e26c;
        case 0x20e270u: goto label_20e270;
        case 0x20e274u: goto label_20e274;
        case 0x20e278u: goto label_20e278;
        case 0x20e27cu: goto label_20e27c;
        case 0x20e280u: goto label_20e280;
        case 0x20e284u: goto label_20e284;
        case 0x20e288u: goto label_20e288;
        case 0x20e28cu: goto label_20e28c;
        case 0x20e290u: goto label_20e290;
        case 0x20e294u: goto label_20e294;
        case 0x20e298u: goto label_20e298;
        case 0x20e29cu: goto label_20e29c;
        case 0x20e2a0u: goto label_20e2a0;
        case 0x20e2a4u: goto label_20e2a4;
        case 0x20e2a8u: goto label_20e2a8;
        case 0x20e2acu: goto label_20e2ac;
        case 0x20e2b0u: goto label_20e2b0;
        case 0x20e2b4u: goto label_20e2b4;
        case 0x20e2b8u: goto label_20e2b8;
        case 0x20e2bcu: goto label_20e2bc;
        case 0x20e2c0u: goto label_20e2c0;
        case 0x20e2c4u: goto label_20e2c4;
        case 0x20e2c8u: goto label_20e2c8;
        case 0x20e2ccu: goto label_20e2cc;
        case 0x20e2d0u: goto label_20e2d0;
        case 0x20e2d4u: goto label_20e2d4;
        case 0x20e2d8u: goto label_20e2d8;
        case 0x20e2dcu: goto label_20e2dc;
        default: return;
    }

label_20db10:
    // 0x20db10: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x20db10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_20db14:
    // 0x20db14: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x20db14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_20db18:
    // 0x20db18: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_20db1c:
    if (ctx->pc == 0x20DB1Cu) {
        ctx->pc = 0x20DB20u;
        goto label_20db20;
    }
    ctx->pc = 0x20DB18u;
    {
        const bool branch_taken_0x20db18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db18) {
            ctx->pc = 0x20DB38u;
            goto label_20db38;
        }
    }
    ctx->pc = 0x20DB20u;
label_20db20:
    // 0x20db20: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
label_20db24:
    if (ctx->pc == 0x20DB24u) {
        ctx->pc = 0x20DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB20u;
        // 0x20db24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB28u;
        goto label_20db28;
    }
    ctx->pc = 0x20DB20u;
    {
        const bool branch_taken_0x20db20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x20DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB20u;
        // 0x20db24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db20) {
            ctx->pc = 0x20DB38u;
            goto label_20db38;
        }
    }
    ctx->pc = 0x20DB28u;
label_20db28:
    // 0x20db28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_20db2c:
    if (ctx->pc == 0x20DB2Cu) {
        ctx->pc = 0x20DB30u;
        goto label_20db30;
    }
    ctx->pc = 0x20DB28u;
    {
        const bool branch_taken_0x20db28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20db28) {
            ctx->pc = 0x20DB38u;
            goto label_20db38;
        }
    }
    ctx->pc = 0x20DB30u;
label_20db30:
    // 0x20db30: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x20db30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20db34:
    // 0x20db34: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x20db34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_20db38:
    // 0x20db38: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x20db38u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_20db3c:
    // 0x20db3c: 0x3c068888  lui         $a2, 0x8888
    ctx->pc = 0x20db3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34952 << 16));
label_20db40:
    // 0x20db40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20db40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20db44:
    // 0x20db44: 0x34c98889  ori         $t1, $a2, 0x8889
    ctx->pc = 0x20db44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)34953);
label_20db48:
    // 0x20db48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20db48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20db4c:
    // 0x20db4c: 0xae67000c  sw          $a3, 0xC($s3)
    ctx->pc = 0x20db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 7));
label_20db50:
    // 0x20db50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20db50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20db54:
    // 0x20db54: 0x92860001  lbu         $a2, 0x1($s4)
    ctx->pc = 0x20db54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_20db58:
    // 0x20db58: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x20db58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
label_20db5c:
    // 0x20db5c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x20db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_20db60:
    // 0x20db60: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x20db60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_20db64:
    // 0x20db64: 0x1000001a  b           . + 4 + (0x1A << 2)
label_20db68:
    if (ctx->pc == 0x20DB68u) {
        ctx->pc = 0x20DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB64u;
        // 0x20db68: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB6Cu;
        goto label_20db6c;
    }
    ctx->pc = 0x20DB64u;
    {
        const bool branch_taken_0x20db64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB64u;
        // 0x20db68: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db64) {
            ctx->pc = 0x20DBD0u;
            goto label_20dbd0;
        }
    }
    ctx->pc = 0x20DB6Cu;
label_20db6c:
    // 0x20db6c: 0x0  nop
    ctx->pc = 0x20db6cu;
    // NOP
label_20db70:
    // 0x20db70: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x20db70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_20db74:
    // 0x20db74: 0x8cc6006c  lw          $a2, 0x6C($a2)
    ctx->pc = 0x20db74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
label_20db78:
    // 0x20db78: 0x2854021  addu        $t0, $s4, $a1
    ctx->pc = 0x20db78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_20db7c:
    // 0x20db7c: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x20db7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_20db80:
    // 0x20db80: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20db80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_20db84:
    // 0x20db84: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x20db84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_20db88:
    // 0x20db88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20db88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20db8c:
    // 0x20db8c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x20db8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_20db90:
    // 0x20db90: 0xae660014  sw          $a2, 0x14($s3)
    ctx->pc = 0x20db90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
label_20db94:
    // 0x20db94: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x20db94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_20db98:
    // 0x20db98: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x20db98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_20db9c:
    // 0x20db9c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x20db9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_20dba0:
    // 0x20dba0: 0xae660018  sw          $a2, 0x18($s3)
    ctx->pc = 0x20dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 6));
label_20dba4:
    // 0x20dba4: 0x8d0a0030  lw          $t2, 0x30($t0)
    ctx->pc = 0x20dba4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_20dba8:
    // 0x20dba8: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x20dba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_20dbac:
    // 0x20dbac: 0x12a0018  mult        $zero, $t1, $t2
    ctx->pc = 0x20dbacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20dbb0:
    // 0x20dbb0: 0xa47c2  srl         $t0, $t2, 31
    ctx->pc = 0x20dbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_20dbb4:
    // 0x20dbb4: 0x0  nop
    ctx->pc = 0x20dbb4u;
    // NOP
label_20dbb8:
    // 0x20dbb8: 0x3810  mfhi        $a3
    ctx->pc = 0x20dbb8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_20dbbc:
    // 0x20dbbc: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x20dbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_20dbc0:
    // 0x20dbc0: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x20dbc0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
label_20dbc4:
    // 0x20dbc4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x20dbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_20dbc8:
    // 0x20dbc8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20dbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_20dbcc:
    // 0x20dbcc: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x20dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
label_20dbd0:
    // 0x20dbd0: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x20dbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_20dbd4:
    // 0x20dbd4: 0x46302a  slt         $a2, $v0, $a2
    ctx->pc = 0x20dbd4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20dbd8:
    // 0x20dbd8: 0x14c0ffe4  bnez        $a2, . + 4 + (-0x1C << 2)
label_20dbdc:
    if (ctx->pc == 0x20DBDCu) {
        ctx->pc = 0x20DBE0u;
        goto label_20dbe0;
    }
    ctx->pc = 0x20DBD8u;
    {
        const bool branch_taken_0x20dbd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dbd8) {
            ctx->pc = 0x20DB6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20db6c;
        }
    }
    ctx->pc = 0x20DBE0u;
label_20dbe0:
    // 0x20dbe0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x20dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_20dbe4:
    // 0x20dbe4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_20dbe8:
    // 0x20dbe8: 0x34428696  ori         $v0, $v0, 0x8696
    ctx->pc = 0x20dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34454);
label_20dbec:
    // 0x20dbec: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x20dbecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_20dbf0:
    // 0x20dbf0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20dbf4:
    if (ctx->pc == 0x20DBF4u) {
        ctx->pc = 0x20DBF8u;
        goto label_20dbf8;
    }
    ctx->pc = 0x20DBF0u;
    {
        const bool branch_taken_0x20dbf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dbf0) {
            ctx->pc = 0x20DBFCu;
            goto label_20dbfc;
        }
    }
    ctx->pc = 0x20DBF8u;
label_20dbf8:
    // 0x20dbf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20dbf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dbfc:
    // 0x20dbfc: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x20dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_20dc00:
    // 0x20dc00: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_20dc04:
    // 0x20dc04: 0x3443869f  ori         $v1, $v0, 0x869F
    ctx->pc = 0x20dc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_20dc08:
    // 0x20dc08: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x20dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_20dc0c:
    // 0x20dc0c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x20dc0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20dc10:
    // 0x20dc10: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20dc14:
    if (ctx->pc == 0x20DC14u) {
        ctx->pc = 0x20DC18u;
        goto label_20dc18;
    }
    ctx->pc = 0x20DC10u;
    {
        const bool branch_taken_0x20dc10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc10) {
            ctx->pc = 0x20DC1Cu;
            goto label_20dc1c;
        }
    }
    ctx->pc = 0x20DC18u;
label_20dc18:
    // 0x20dc18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20dc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20dc1c:
    // 0x20dc1c: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x20dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
label_20dc20:
    // 0x20dc20: 0x3403d2f0  ori         $v1, $zero, 0xD2F0
    ctx->pc = 0x20dc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54000);
label_20dc24:
    // 0x20dc24: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x20dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_20dc28:
    // 0x20dc28: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x20dc28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20dc2c:
    // 0x20dc2c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20dc30:
    if (ctx->pc == 0x20DC30u) {
        ctx->pc = 0x20DC34u;
        goto label_20dc34;
    }
    ctx->pc = 0x20DC2Cu;
    {
        const bool branch_taken_0x20dc2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dc2c) {
            ctx->pc = 0x20DC38u;
            goto label_20dc38;
        }
    }
    ctx->pc = 0x20DC34u;
label_20dc34:
    // 0x20dc34: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20dc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20dc38:
    // 0x20dc38: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x20dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_20dc3c:
    // 0x20dc3c: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x20dc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_20dc40:
    // 0x20dc40: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x20dc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_20dc44:
    // 0x20dc44: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x20dc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_20dc48:
    // 0x20dc48: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x20dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_20dc4c:
    // 0x20dc4c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x20dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_20dc50:
    // 0x20dc50: 0xc056a04  jal         func_15A810
label_20dc54:
    if (ctx->pc == 0x20DC54u) {
        ctx->pc = 0x20DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC50u;
        // 0x20dc54: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DC58u;
        goto label_20dc58;
    }
    ctx->pc = 0x20DC50u;
    SET_GPR_U32(ctx, 31, 0x20DC58u);
    ctx->pc = 0x20DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DC50u;
    // 0x20dc54: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x20DC50u, 0x20DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DC58u;
label_20dc58:
    // 0x20dc58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_20dc5c:
    // 0x20dc5c: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x20dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
label_20dc60:
    // 0x20dc60: 0x928301a0  lbu         $v1, 0x1A0($s4)
    ctx->pc = 0x20dc60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 416)));
label_20dc64:
    // 0x20dc64: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x20dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
label_20dc68:
    // 0x20dc68: 0x928301a1  lbu         $v1, 0x1A1($s4)
    ctx->pc = 0x20dc68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 417)));
label_20dc6c:
    // 0x20dc6c: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x20dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_20dc70:
    // 0x20dc70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20dc70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20dc74:
    // 0x20dc74: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x20dc74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_20dc78:
    // 0x20dc78: 0x261001a8  addiu       $s0, $s0, 0x1A8
    ctx->pc = 0x20dc78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 424));
label_20dc7c:
    // 0x20dc7c: 0x1460ff7e  bnez        $v1, . + 4 + (-0x82 << 2)
label_20dc80:
    if (ctx->pc == 0x20DC80u) {
        ctx->pc = 0x20DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC7Cu;
        // 0x20dc80: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DC84u;
        goto label_20dc84;
    }
    ctx->pc = 0x20DC7Cu;
    {
        const bool branch_taken_0x20dc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC7Cu;
        // 0x20dc80: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc7c) {
            ctx->pc = 0x20DA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20da78; return; }
        }
    }
    ctx->pc = 0x20DC84u;
label_20dc84:
    // 0x20dc84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20dc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20dc88:
    // 0x20dc88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20dc88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20dc8c:
    // 0x20dc8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20dc8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20dc90:
    // 0x20dc90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20dc90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20dc94:
    // 0x20dc94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20dc94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20dc98:
    // 0x20dc98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20dc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20dc9c:
    // 0x20dc9c: 0x3e00008  jr          $ra
label_20dca0:
    if (ctx->pc == 0x20DCA0u) {
        ctx->pc = 0x20DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC9Cu;
        // 0x20dca0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DCA4u;
        goto label_20dca4;
    }
    ctx->pc = 0x20DC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC9Cu;
        // 0x20dca0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DCA4u;
label_20dca4:
    // 0x20dca4: 0x0  nop
    ctx->pc = 0x20dca4u;
    // NOP
label_20dca8:
    // 0x20dca8: 0x0  nop
    ctx->pc = 0x20dca8u;
    // NOP
label_20dcac:
    // 0x20dcac: 0x0  nop
    ctx->pc = 0x20dcacu;
    // NOP
label_20dcb0:
    // 0x20dcb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x20dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_20dcb4:
    // 0x20dcb4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x20dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_20dcb8:
    // 0x20dcb8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_20dcbc:
    // 0x20dcbc: 0x2463d400  addiu       $v1, $v1, -0x2C00
    ctx->pc = 0x20dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956032));
label_20dcc0:
    // 0x20dcc0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x20dcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_20dcc4:
    // 0x20dcc4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x20dcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_20dcc8:
    // 0x20dcc8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20dcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_20dccc:
    // 0x20dccc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20dcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_20dcd0:
    // 0x20dcd0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20dcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_20dcd4:
    // 0x20dcd4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20dcd8:
    // 0x20dcd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20dcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20dcdc:
    // 0x20dcdc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20dcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20dce0:
    // 0x20dce0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20dce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20dce4:
    // 0x20dce4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20dce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20dce8:
    // 0x20dce8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x20dce8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20dcec:
    // 0x20dcec: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x20dcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20dcf0:
    // 0x20dcf0: 0x84640014  lh          $a0, 0x14($v1)
    ctx->pc = 0x20dcf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_20dcf4:
    // 0x20dcf4: 0x90630016  lbu         $v1, 0x16($v1)
    ctx->pc = 0x20dcf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
label_20dcf8:
    // 0x20dcf8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x20dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_20dcfc:
    // 0x20dcfc: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x20dcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_20dd00:
    // 0x20dd00: 0xa4c40014  sh          $a0, 0x14($a2)
    ctx->pc = 0x20dd00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 4));
label_20dd04:
    // 0x20dd04: 0xa0c30016  sb          $v1, 0x16($a2)
    ctx->pc = 0x20dd04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 22), (uint8_t)GPR_U32(ctx, 3));
label_20dd08:
    // 0x20dd08: 0x8f839130  lw          $v1, -0x6ED0($gp)
    ctx->pc = 0x20dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
label_20dd0c:
    // 0x20dd0c: 0x1060025d  beqz        $v1, . + 4 + (0x25D << 2)
label_20dd10:
    if (ctx->pc == 0x20DD10u) {
        ctx->pc = 0x20DD14u;
        goto label_20dd14;
    }
    ctx->pc = 0x20DD0Cu;
    {
        const bool branch_taken_0x20dd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd0c) {
            ctx->pc = 0x20E684u;
            { ctx->pc = 0x20e684; return; }
        }
    }
    ctx->pc = 0x20DD14u;
label_20dd14:
    // 0x20dd14: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_20dd18:
    // 0x20dd18: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_20dd1c:
    // 0x20dd1c: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x20dd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_20dd20:
    // 0x20dd20: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x20dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_20dd24:
    // 0x20dd24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20dd28:
    // 0x20dd28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20dd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dd2c:
    // 0x20dd2c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x20dd2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dd30:
    // 0x20dd30: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20dd30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dd34:
    // 0x20dd34: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20dd34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dd38:
    // 0x20dd38: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x20dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20dd3c:
    // 0x20dd3c: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x20dd3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20dd40:
    // 0x20dd40: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20dd44:
    // 0x20dd44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20dd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20dd48:
    // 0x20dd48: 0x24427430  addiu       $v0, $v0, 0x7430
    ctx->pc = 0x20dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29744));
label_20dd4c:
    // 0x20dd4c: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x20dd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20dd50:
    // 0x20dd50: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x20dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_20dd54:
    // 0x20dd54: 0x24650000  addiu       $a1, $v1, 0x0
    ctx->pc = 0x20dd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_20dd58:
    // 0x20dd58: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20dd5c:
    // 0x20dd5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20dd60:
    // 0x20dd60: 0x244273a0  addiu       $v0, $v0, 0x73A0
    ctx->pc = 0x20dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29600));
label_20dd64:
    // 0x20dd64: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x20dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_20dd68:
    // 0x20dd68: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x20dd68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20dd6c:
    // 0x20dd6c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_20dd70:
    // 0x20dd70: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20dd74:
    // 0x20dd74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20dd78:
    // 0x20dd78: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x20dd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20dd7c:
    // 0x20dd7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20dd80:
    // 0x20dd80: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x20dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_20dd84:
    // 0x20dd84: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x20dd84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20dd88:
    // 0x20dd88: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x20dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20dd8c:
    // 0x20dd8c: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x20dd8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_20dd90:
    // 0x20dd90: 0x1280a  movz        $a1, $zero, $at
    ctx->pc = 0x20dd90u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_20dd94:
    // 0x20dd94: 0x28a10014  slti        $at, $a1, 0x14
    ctx->pc = 0x20dd94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
label_20dd98:
    // 0x20dd98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20dd9c:
    if (ctx->pc == 0x20DD9Cu) {
        ctx->pc = 0x20DDA0u;
        goto label_20dda0;
    }
    ctx->pc = 0x20DD98u;
    {
        const bool branch_taken_0x20dd98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd98) {
            ctx->pc = 0x20DDA8u;
            goto label_20dda8;
        }
    }
    ctx->pc = 0x20DDA0u;
label_20dda0:
    // 0x20dda0: 0x10000003  b           . + 4 + (0x3 << 2)
label_20dda4:
    if (ctx->pc == 0x20DDA4u) {
        ctx->pc = 0x20DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDA0u;
        // 0x20dda4: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DDA8u;
        goto label_20dda8;
    }
    ctx->pc = 0x20DDA0u;
    {
        const bool branch_taken_0x20dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDA0u;
        // 0x20dda4: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dda0) {
            ctx->pc = 0x20DDB0u;
            goto label_20ddb0;
        }
    }
    ctx->pc = 0x20DDA8u;
label_20dda8:
    // 0x20dda8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20ddac:
    // 0x20ddac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20ddb0:
    // 0x20ddb0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x20ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_20ddb4:
    // 0x20ddb4: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x20ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20ddb8:
    // 0x20ddb8: 0x26b20034  addiu       $s2, $s5, 0x34
    ctx->pc = 0x20ddb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
label_20ddbc:
    // 0x20ddbc: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x20ddbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_20ddc0:
    // 0x20ddc0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x20ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_20ddc4:
    // 0x20ddc4: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x20ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20ddc8:
    // 0x20ddc8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20ddcc:
    // 0x20ddcc: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x20ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_20ddd0:
    // 0x20ddd0: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x20ddd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20ddd4:
    // 0x20ddd4: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x20ddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_20ddd8:
    // 0x20ddd8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x20ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_20dddc:
    // 0x20dddc: 0x26430080  addiu       $v1, $s2, 0x80
    ctx->pc = 0x20dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_20dde0:
    // 0x20dde0: 0x24040384  addiu       $a0, $zero, 0x384
    ctx->pc = 0x20dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20dde4:
    // 0x20dde4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x20dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20dde8:
    // 0x20dde8: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x20dde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_20ddec:
    // 0x20ddec: 0x1810  mfhi        $v1
    ctx->pc = 0x20ddecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_20ddf0:
    // 0x20ddf0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x20ddf0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_20ddf4:
    // 0x20ddf4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20ddf8:
    // 0x20ddf8: 0x2471fd90  addiu       $s1, $v1, -0x270
    ctx->pc = 0x20ddf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966672));
label_20ddfc:
    // 0x20ddfc: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x20ddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_20de00:
    // 0x20de00: 0x26230238  addiu       $v1, $s1, 0x238
    ctx->pc = 0x20de00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 568));
label_20de04:
    // 0x20de04: 0x24a76c00  addiu       $a3, $a1, 0x6C00
    ctx->pc = 0x20de04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_20de08:
    // 0x20de08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20de08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20de0c:
    // 0x20de0c: 0xa6670090  sh          $a3, 0x90($s3)
    ctx->pc = 0x20de0cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 7));
label_20de10:
    // 0x20de10: 0x24656c00  addiu       $a1, $v1, 0x6C00
    ctx->pc = 0x20de10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_20de14:
    // 0x20de14: 0xa6620092  sh          $v0, 0x92($s3)
    ctx->pc = 0x20de14u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 2));
label_20de18:
    // 0x20de18: 0x26230270  addiu       $v1, $s1, 0x270
    ctx->pc = 0x20de18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_20de1c:
    // 0x20de1c: 0xae640094  sw          $a0, 0x94($s3)
    ctx->pc = 0x20de1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 4));
label_20de20:
    // 0x20de20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20de20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20de24:
    // 0x20de24: 0xa66500a0  sh          $a1, 0xA0($s3)
    ctx->pc = 0x20de24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 160), (uint16_t)GPR_U32(ctx, 5));
label_20de28:
    // 0x20de28: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x20de28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_20de2c:
    // 0x20de2c: 0xa66600a2  sh          $a2, 0xA2($s3)
    ctx->pc = 0x20de2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 162), (uint16_t)GPR_U32(ctx, 6));
label_20de30:
    // 0x20de30: 0xae6400a4  sw          $a0, 0xA4($s3)
    ctx->pc = 0x20de30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 4));
label_20de34:
    // 0x20de34: 0xa6650130  sh          $a1, 0x130($s3)
    ctx->pc = 0x20de34u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 304), (uint16_t)GPR_U32(ctx, 5));
label_20de38:
    // 0x20de38: 0xa6620132  sh          $v0, 0x132($s3)
    ctx->pc = 0x20de38u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 2));
label_20de3c:
    // 0x20de3c: 0xae640134  sw          $a0, 0x134($s3)
    ctx->pc = 0x20de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 4));
label_20de40:
    // 0x20de40: 0xa6630140  sh          $v1, 0x140($s3)
    ctx->pc = 0x20de40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 320), (uint16_t)GPR_U32(ctx, 3));
label_20de44:
    // 0x20de44: 0xa6660142  sh          $a2, 0x142($s3)
    ctx->pc = 0x20de44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 322), (uint16_t)GPR_U32(ctx, 6));
label_20de48:
    // 0x20de48: 0xae640144  sw          $a0, 0x144($s3)
    ctx->pc = 0x20de48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 4));
label_20de4c:
    // 0x20de4c: 0xa66716a0  sh          $a3, 0x16A0($s3)
    ctx->pc = 0x20de4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5792), (uint16_t)GPR_U32(ctx, 7));
label_20de50:
    // 0x20de50: 0xa66216a2  sh          $v0, 0x16A2($s3)
    ctx->pc = 0x20de50u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5794), (uint16_t)GPR_U32(ctx, 2));
label_20de54:
    // 0x20de54: 0xae6416a4  sw          $a0, 0x16A4($s3)
    ctx->pc = 0x20de54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5796), GPR_U32(ctx, 4));
label_20de58:
    // 0x20de58: 0xa66516b0  sh          $a1, 0x16B0($s3)
    ctx->pc = 0x20de58u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5808), (uint16_t)GPR_U32(ctx, 5));
label_20de5c:
    // 0x20de5c: 0xa66616b2  sh          $a2, 0x16B2($s3)
    ctx->pc = 0x20de5cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5810), (uint16_t)GPR_U32(ctx, 6));
label_20de60:
    // 0x20de60: 0xae6416b4  sw          $a0, 0x16B4($s3)
    ctx->pc = 0x20de60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5812), GPR_U32(ctx, 4));
label_20de64:
    // 0x20de64: 0xa6651740  sh          $a1, 0x1740($s3)
    ctx->pc = 0x20de64u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5952), (uint16_t)GPR_U32(ctx, 5));
label_20de68:
    // 0x20de68: 0xa6621742  sh          $v0, 0x1742($s3)
    ctx->pc = 0x20de68u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5954), (uint16_t)GPR_U32(ctx, 2));
label_20de6c:
    // 0x20de6c: 0xae641744  sw          $a0, 0x1744($s3)
    ctx->pc = 0x20de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5956), GPR_U32(ctx, 4));
label_20de70:
    // 0x20de70: 0xa6631750  sh          $v1, 0x1750($s3)
    ctx->pc = 0x20de70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5968), (uint16_t)GPR_U32(ctx, 3));
label_20de74:
    // 0x20de74: 0xa6661752  sh          $a2, 0x1752($s3)
    ctx->pc = 0x20de74u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5970), (uint16_t)GPR_U32(ctx, 6));
label_20de78:
    // 0x20de78: 0xae641754  sw          $a0, 0x1754($s3)
    ctx->pc = 0x20de78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5972), GPR_U32(ctx, 4));
label_20de7c:
    // 0x20de7c: 0x8f829124  lw          $v0, -0x6EDC($gp)
    ctx->pc = 0x20de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
label_20de80:
    // 0x20de80: 0x14500029  bne         $v0, $s0, . + 4 + (0x29 << 2)
label_20de84:
    if (ctx->pc == 0x20DE84u) {
        ctx->pc = 0x20DE88u;
        goto label_20de88;
    }
    ctx->pc = 0x20DE80u;
    {
        const bool branch_taken_0x20de80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x20de80) {
            ctx->pc = 0x20DF28u;
            goto label_20df28;
        }
    }
    ctx->pc = 0x20DE88u;
label_20de88:
    // 0x20de88: 0x8f859120  lw          $a1, -0x6EE0($gp)
    ctx->pc = 0x20de88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938912)));
label_20de8c:
    // 0x20de8c: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
label_20de90:
    if (ctx->pc == 0x20DE90u) {
        ctx->pc = 0x20DE94u;
        goto label_20de94;
    }
    ctx->pc = 0x20DE8Cu;
    {
        const bool branch_taken_0x20de8c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x20de8c) {
            ctx->pc = 0x20DE9Cu;
            goto label_20de9c;
        }
    }
    ctx->pc = 0x20DE94u;
label_20de94:
    // 0x20de94: 0x10000015  b           . + 4 + (0x15 << 2)
label_20de98:
    if (ctx->pc == 0x20DE98u) {
        ctx->pc = 0x20DE9Cu;
        goto label_20de9c;
    }
    ctx->pc = 0x20DE94u;
    {
        const bool branch_taken_0x20de94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20de94) {
            ctx->pc = 0x20DEECu;
            goto label_20deec;
        }
    }
    ctx->pc = 0x20DE9Cu;
label_20de9c:
    // 0x20de9c: 0x0  nop
    ctx->pc = 0x20de9cu;
    // NOP
label_20dea0:
    // 0x20dea0: 0x8f839128  lw          $v1, -0x6ED8($gp)
    ctx->pc = 0x20dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
label_20dea4:
    // 0x20dea4: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x20dea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_20dea8:
    // 0x20dea8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20deac:
    if (ctx->pc == 0x20DEACu) {
        ctx->pc = 0x20DEB0u;
        goto label_20deb0;
    }
    ctx->pc = 0x20DEA8u;
    {
        const bool branch_taken_0x20dea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dea8) {
            ctx->pc = 0x20DECCu;
            goto label_20decc;
        }
    }
    ctx->pc = 0x20DEB0u;
label_20deb0:
    // 0x20deb0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x20deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20deb4:
    // 0x20deb4: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_20deb8:
    if (ctx->pc == 0x20DEB8u) {
        ctx->pc = 0x20DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEB4u;
        // 0x20deb8: 0x22983  sra         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DEBCu;
        goto label_20debc;
    }
    ctx->pc = 0x20DEB4u;
    {
        const bool branch_taken_0x20deb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEB4u;
        // 0x20deb8: 0x22983  sra         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20deb4) {
            ctx->pc = 0x20DEECu;
            goto label_20deec;
        }
    }
    ctx->pc = 0x20DEBCu;
label_20debc:
    // 0x20debc: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x20debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_20dec0:
    // 0x20dec0: 0x22983  sra         $a1, $v0, 6
    ctx->pc = 0x20dec0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
label_20dec4:
    // 0x20dec4: 0x10000009  b           . + 4 + (0x9 << 2)
label_20dec8:
    if (ctx->pc == 0x20DEC8u) {
        ctx->pc = 0x20DECCu;
        goto label_20decc;
    }
    ctx->pc = 0x20DEC4u;
    {
        const bool branch_taken_0x20dec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dec4) {
            ctx->pc = 0x20DEECu;
            goto label_20deec;
        }
    }
    ctx->pc = 0x20DECCu;
label_20decc:
    // 0x20decc: 0x0  nop
    ctx->pc = 0x20deccu;
    // NOP
label_20ded0:
    // 0x20ded0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20ded4:
    // 0x20ded4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ded8:
    // 0x20ded8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20dedc:
    // 0x20dedc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_20dee0:
    if (ctx->pc == 0x20DEE0u) {
        ctx->pc = 0x20DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEDCu;
        // 0x20dee0: 0x22983  sra         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DEE4u;
        goto label_20dee4;
    }
    ctx->pc = 0x20DEDCu;
    {
        const bool branch_taken_0x20dedc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEDCu;
        // 0x20dee0: 0x22983  sra         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dedc) {
            ctx->pc = 0x20DEECu;
            goto label_20deec;
        }
    }
    ctx->pc = 0x20DEE4u;
label_20dee4:
    // 0x20dee4: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x20dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_20dee8:
    // 0x20dee8: 0x22983  sra         $a1, $v0, 6
    ctx->pc = 0x20dee8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 6));
label_20deec:
    // 0x20deec: 0x0  nop
    ctx->pc = 0x20deecu;
    // NOP
label_20def0:
    // 0x20def0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x20def0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20def4:
    // 0x20def4: 0xa2641690  sb          $a0, 0x1690($s3)
    ctx->pc = 0x20def4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5776), (uint8_t)GPR_U32(ctx, 4));
label_20def8:
    // 0x20def8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x20def8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20defc:
    // 0x20defc: 0xa2641691  sb          $a0, 0x1691($s3)
    ctx->pc = 0x20defcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5777), (uint8_t)GPR_U32(ctx, 4));
label_20df00:
    // 0x20df00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20df04:
    // 0x20df04: 0xa2631692  sb          $v1, 0x1692($s3)
    ctx->pc = 0x20df04u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5778), (uint8_t)GPR_U32(ctx, 3));
label_20df08:
    // 0x20df08: 0xa2651693  sb          $a1, 0x1693($s3)
    ctx->pc = 0x20df08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5779), (uint8_t)GPR_U32(ctx, 5));
label_20df0c:
    // 0x20df0c: 0xae621694  sw          $v0, 0x1694($s3)
    ctx->pc = 0x20df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5780), GPR_U32(ctx, 2));
label_20df10:
    // 0x20df10: 0xa2641730  sb          $a0, 0x1730($s3)
    ctx->pc = 0x20df10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5936), (uint8_t)GPR_U32(ctx, 4));
label_20df14:
    // 0x20df14: 0xa2641731  sb          $a0, 0x1731($s3)
    ctx->pc = 0x20df14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5937), (uint8_t)GPR_U32(ctx, 4));
label_20df18:
    // 0x20df18: 0xa2631732  sb          $v1, 0x1732($s3)
    ctx->pc = 0x20df18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5938), (uint8_t)GPR_U32(ctx, 3));
label_20df1c:
    // 0x20df1c: 0xa2651733  sb          $a1, 0x1733($s3)
    ctx->pc = 0x20df1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5939), (uint8_t)GPR_U32(ctx, 5));
label_20df20:
    // 0x20df20: 0x1000000d  b           . + 4 + (0xD << 2)
label_20df24:
    if (ctx->pc == 0x20DF24u) {
        ctx->pc = 0x20DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF20u;
        // 0x20df24: 0xae621734  sw          $v0, 0x1734($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DF28u;
        goto label_20df28;
    }
    ctx->pc = 0x20DF20u;
    {
        const bool branch_taken_0x20df20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF20u;
        // 0x20df24: 0xae621734  sw          $v0, 0x1734($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df20) {
            ctx->pc = 0x20DF58u;
            goto label_20df58;
        }
    }
    ctx->pc = 0x20DF28u;
label_20df28:
    // 0x20df28: 0xa2601690  sb          $zero, 0x1690($s3)
    ctx->pc = 0x20df28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5776), (uint8_t)GPR_U32(ctx, 0));
label_20df2c:
    // 0x20df2c: 0xa2601691  sb          $zero, 0x1691($s3)
    ctx->pc = 0x20df2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5777), (uint8_t)GPR_U32(ctx, 0));
label_20df30:
    // 0x20df30: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x20df30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20df34:
    // 0x20df34: 0xa2601692  sb          $zero, 0x1692($s3)
    ctx->pc = 0x20df34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5778), (uint8_t)GPR_U32(ctx, 0));
label_20df38:
    // 0x20df38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20df38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20df3c:
    // 0x20df3c: 0xa2631693  sb          $v1, 0x1693($s3)
    ctx->pc = 0x20df3cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5779), (uint8_t)GPR_U32(ctx, 3));
label_20df40:
    // 0x20df40: 0xae621694  sw          $v0, 0x1694($s3)
    ctx->pc = 0x20df40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5780), GPR_U32(ctx, 2));
label_20df44:
    // 0x20df44: 0xa2601730  sb          $zero, 0x1730($s3)
    ctx->pc = 0x20df44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5936), (uint8_t)GPR_U32(ctx, 0));
label_20df48:
    // 0x20df48: 0xa2601731  sb          $zero, 0x1731($s3)
    ctx->pc = 0x20df48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5937), (uint8_t)GPR_U32(ctx, 0));
label_20df4c:
    // 0x20df4c: 0xa2601732  sb          $zero, 0x1732($s3)
    ctx->pc = 0x20df4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5938), (uint8_t)GPR_U32(ctx, 0));
label_20df50:
    // 0x20df50: 0xa2631733  sb          $v1, 0x1733($s3)
    ctx->pc = 0x20df50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5939), (uint8_t)GPR_U32(ctx, 3));
label_20df54:
    // 0x20df54: 0xae621734  sw          $v0, 0x1734($s3)
    ctx->pc = 0x20df54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5940), GPR_U32(ctx, 2));
label_20df58:
    // 0x20df58: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x20df58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20df5c:
    // 0x20df5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20df60:
    if (ctx->pc == 0x20DF60u) {
        ctx->pc = 0x20DF64u;
        goto label_20df64;
    }
    ctx->pc = 0x20DF5Cu;
    {
        const bool branch_taken_0x20df5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20df5c) {
            ctx->pc = 0x20DF70u;
            goto label_20df70;
        }
    }
    ctx->pc = 0x20DF64u;
label_20df64:
    // 0x20df64: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20df64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20df68:
    // 0x20df68: 0x10000003  b           . + 4 + (0x3 << 2)
label_20df6c:
    if (ctx->pc == 0x20DF6Cu) {
        ctx->pc = 0x20DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF68u;
        // 0x20df6c: 0x240701c0  addiu       $a3, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DF70u;
        goto label_20df70;
    }
    ctx->pc = 0x20DF68u;
    {
        const bool branch_taken_0x20df68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF68u;
        // 0x20df6c: 0x240701c0  addiu       $a3, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df68) {
            ctx->pc = 0x20DF78u;
            goto label_20df78;
        }
    }
    ctx->pc = 0x20DF70u;
label_20df70:
    // 0x20df70: 0x262600ec  addiu       $a2, $s1, 0xEC
    ctx->pc = 0x20df70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
label_20df74:
    // 0x20df74: 0x26470034  addiu       $a3, $s2, 0x34
    ctx->pc = 0x20df74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_20df78:
    // 0x20df78: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x20df78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20df7c:
    // 0x20df7c: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x20df7cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_20df80:
    // 0x20df80: 0x266411c0  addiu       $a0, $s3, 0x11C0
    ctx->pc = 0x20df80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4544));
label_20df84:
    // 0x20df84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20df84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20df88:
    // 0x20df88: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20df88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20df8c:
    // 0x20df8c: 0x256be0a0  addiu       $t3, $t3, -0x1F60
    ctx->pc = 0x20df8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959264));
label_20df90:
    // 0x20df90: 0xc0708ac  jal         func_1C22B0
label_20df94:
    if (ctx->pc == 0x20DF94u) {
        ctx->pc = 0x20DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF90u;
        // 0x20df94: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DF98u;
        goto label_20df98;
    }
    ctx->pc = 0x20DF90u;
    SET_GPR_U32(ctx, 31, 0x20DF98u);
    ctx->pc = 0x20DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF90u;
    // 0x20df94: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x20DF90u, 0x20DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF98u;
label_20df98:
    // 0x20df98: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x20df98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20df9c:
    // 0x20df9c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_20dfa0:
    if (ctx->pc == 0x20DFA0u) {
        ctx->pc = 0x20DFA4u;
        goto label_20dfa4;
    }
    ctx->pc = 0x20DF9Cu;
    {
        const bool branch_taken_0x20df9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20df9c) {
            ctx->pc = 0x20E058u;
            goto label_20e058;
        }
    }
    ctx->pc = 0x20DFA4u;
label_20dfa4:
    // 0x20dfa4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x20dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_20dfa8:
    // 0x20dfa8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x20dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20dfac:
    // 0x20dfac: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
label_20dfb0:
    if (ctx->pc == 0x20DFB0u) {
        ctx->pc = 0x20DFB4u;
        goto label_20dfb4;
    }
    ctx->pc = 0x20DFACu;
    {
        const bool branch_taken_0x20dfac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20dfac) {
            ctx->pc = 0x20DFF8u;
            goto label_20dff8;
        }
    }
    ctx->pc = 0x20DFB4u;
label_20dfb4:
    // 0x20dfb4: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x20dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_20dfb8:
    // 0x20dfb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20dfbc:
    // 0x20dfbc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_20dfc0:
    if (ctx->pc == 0x20DFC0u) {
        ctx->pc = 0x20DFC4u;
        goto label_20dfc4;
    }
    ctx->pc = 0x20DFBCu;
    {
        const bool branch_taken_0x20dfbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20dfbc) {
            ctx->pc = 0x20DFE8u;
            goto label_20dfe8;
        }
    }
    ctx->pc = 0x20DFC4u;
label_20dfc4:
    // 0x20dfc4: 0x8f849158  lw          $a0, -0x6EA8($gp)
    ctx->pc = 0x20dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938968)));
label_20dfc8:
    // 0x20dfc8: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x20dfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_20dfcc:
    // 0x20dfcc: 0xc070ea8  jal         func_1C3AA0
label_20dfd0:
    if (ctx->pc == 0x20DFD0u) {
        ctx->pc = 0x20DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFCCu;
        // 0x20dfd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DFD4u;
        goto label_20dfd4;
    }
    ctx->pc = 0x20DFCCu;
    SET_GPR_U32(ctx, 31, 0x20DFD4u);
    ctx->pc = 0x20DFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFCCu;
    // 0x20dfd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x20DFCCu, 0x20DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFD4u;
label_20dfd4:
    // 0x20dfd4: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x20dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_20dfd8:
    // 0x20dfd8: 0xc070e2c  jal         func_1C38B0
label_20dfdc:
    if (ctx->pc == 0x20DFDCu) {
        ctx->pc = 0x20DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFD8u;
        // 0x20dfdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DFE0u;
        goto label_20dfe0;
    }
    ctx->pc = 0x20DFD8u;
    SET_GPR_U32(ctx, 31, 0x20DFE0u);
    ctx->pc = 0x20DFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFD8u;
    // 0x20dfdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x20DFD8u, 0x20DFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFE0u;
label_20dfe0:
    // 0x20dfe0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_20dfe4:
    if (ctx->pc == 0x20DFE4u) {
        ctx->pc = 0x20DFE8u;
        goto label_20dfe8;
    }
    ctx->pc = 0x20DFE0u;
    {
        const bool branch_taken_0x20dfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dfe0) {
            ctx->pc = 0x20E060u;
            goto label_20e060;
        }
    }
    ctx->pc = 0x20DFE8u;
label_20dfe8:
    // 0x20dfe8: 0xc070e2c  jal         func_1C38B0
label_20dfec:
    if (ctx->pc == 0x20DFECu) {
        ctx->pc = 0x20DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFE8u;
        // 0x20dfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DFF0u;
        goto label_20dff0;
    }
    ctx->pc = 0x20DFE8u;
    SET_GPR_U32(ctx, 31, 0x20DFF0u);
    ctx->pc = 0x20DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFE8u;
    // 0x20dfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x20DFE8u, 0x20DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFF0u;
label_20dff0:
    // 0x20dff0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_20dff4:
    if (ctx->pc == 0x20DFF4u) {
        ctx->pc = 0x20DFF8u;
        goto label_20dff8;
    }
    ctx->pc = 0x20DFF0u;
    {
        const bool branch_taken_0x20dff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dff0) {
            ctx->pc = 0x20E060u;
            goto label_20e060;
        }
    }
    ctx->pc = 0x20DFF8u;
label_20dff8:
    // 0x20dff8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x20dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_20dffc:
    // 0x20dffc: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
label_20e000:
    if (ctx->pc == 0x20E000u) {
        ctx->pc = 0x20E004u;
        goto label_20e004;
    }
    ctx->pc = 0x20DFFCu;
    {
        const bool branch_taken_0x20dffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20dffc) {
            ctx->pc = 0x20E048u;
            goto label_20e048;
        }
    }
    ctx->pc = 0x20E004u;
label_20e004:
    // 0x20e004: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x20e004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_20e008:
    // 0x20e008: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20e00c:
    // 0x20e00c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_20e010:
    if (ctx->pc == 0x20E010u) {
        ctx->pc = 0x20E014u;
        goto label_20e014;
    }
    ctx->pc = 0x20E00Cu;
    {
        const bool branch_taken_0x20e00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e00c) {
            ctx->pc = 0x20E038u;
            goto label_20e038;
        }
    }
    ctx->pc = 0x20E014u;
label_20e014:
    // 0x20e014: 0x8f849158  lw          $a0, -0x6EA8($gp)
    ctx->pc = 0x20e014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938968)));
label_20e018:
    // 0x20e018: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x20e018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20e01c:
    // 0x20e01c: 0xc070ea8  jal         func_1C3AA0
label_20e020:
    if (ctx->pc == 0x20E020u) {
        ctx->pc = 0x20E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E01Cu;
        // 0x20e020: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E024u;
        goto label_20e024;
    }
    ctx->pc = 0x20E01Cu;
    SET_GPR_U32(ctx, 31, 0x20E024u);
    ctx->pc = 0x20E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E01Cu;
    // 0x20e020: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x20E01Cu, 0x20E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E024u;
label_20e024:
    // 0x20e024: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x20e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20e028:
    // 0x20e028: 0xc070e2c  jal         func_1C38B0
label_20e02c:
    if (ctx->pc == 0x20E02Cu) {
        ctx->pc = 0x20E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E028u;
        // 0x20e02c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E030u;
        goto label_20e030;
    }
    ctx->pc = 0x20E028u;
    SET_GPR_U32(ctx, 31, 0x20E030u);
    ctx->pc = 0x20E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E028u;
    // 0x20e02c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x20E028u, 0x20E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E030u;
label_20e030:
    // 0x20e030: 0x1000000b  b           . + 4 + (0xB << 2)
label_20e034:
    if (ctx->pc == 0x20E034u) {
        ctx->pc = 0x20E038u;
        goto label_20e038;
    }
    ctx->pc = 0x20E030u;
    {
        const bool branch_taken_0x20e030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e030) {
            ctx->pc = 0x20E060u;
            goto label_20e060;
        }
    }
    ctx->pc = 0x20E038u;
label_20e038:
    // 0x20e038: 0xc070e2c  jal         func_1C38B0
label_20e03c:
    if (ctx->pc == 0x20E03Cu) {
        ctx->pc = 0x20E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E038u;
        // 0x20e03c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E040u;
        goto label_20e040;
    }
    ctx->pc = 0x20E038u;
    SET_GPR_U32(ctx, 31, 0x20E040u);
    ctx->pc = 0x20E03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E038u;
    // 0x20e03c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x20E038u, 0x20E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E040u;
label_20e040:
    // 0x20e040: 0x10000007  b           . + 4 + (0x7 << 2)
label_20e044:
    if (ctx->pc == 0x20E044u) {
        ctx->pc = 0x20E048u;
        goto label_20e048;
    }
    ctx->pc = 0x20E040u;
    {
        const bool branch_taken_0x20e040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e040) {
            ctx->pc = 0x20E060u;
            goto label_20e060;
        }
    }
    ctx->pc = 0x20E048u;
label_20e048:
    // 0x20e048: 0xc070e2c  jal         func_1C38B0
label_20e04c:
    if (ctx->pc == 0x20E04Cu) {
        ctx->pc = 0x20E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E048u;
        // 0x20e04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E050u;
        goto label_20e050;
    }
    ctx->pc = 0x20E048u;
    SET_GPR_U32(ctx, 31, 0x20E050u);
    ctx->pc = 0x20E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E048u;
    // 0x20e04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x20E048u, 0x20E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E050u;
label_20e050:
    // 0x20e050: 0x10000003  b           . + 4 + (0x3 << 2)
label_20e054:
    if (ctx->pc == 0x20E054u) {
        ctx->pc = 0x20E058u;
        goto label_20e058;
    }
    ctx->pc = 0x20E050u;
    {
        const bool branch_taken_0x20e050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e050) {
            ctx->pc = 0x20E060u;
            goto label_20e060;
        }
    }
    ctx->pc = 0x20E058u;
label_20e058:
    // 0x20e058: 0x24110280  addiu       $s1, $zero, 0x280
    ctx->pc = 0x20e058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20e05c:
    // 0x20e05c: 0x241201c0  addiu       $s2, $zero, 0x1C0
    ctx->pc = 0x20e05cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20e060:
    // 0x20e060: 0x26240098  addiu       $a0, $s1, 0x98
    ctx->pc = 0x20e060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_20e064:
    // 0x20e064: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x20e064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20e068:
    // 0x20e068: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x20e068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_20e06c:
    // 0x20e06c: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x20e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20e070:
    // 0x20e070: 0x26460038  addiu       $a2, $s2, 0x38
    ctx->pc = 0x20e070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_20e074:
    // 0x20e074: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x20e074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_20e078:
    // 0x20e078: 0xa66301d0  sh          $v1, 0x1D0($s3)
    ctx->pc = 0x20e078u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 464), (uint16_t)GPR_U32(ctx, 3));
label_20e07c:
    // 0x20e07c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e080:
    // 0x20e080: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x20e080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20e084:
    // 0x20e084: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x20e084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_20e088:
    // 0x20e088: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x20e088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_20e08c:
    // 0x20e08c: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x20e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_20e090:
    // 0x20e090: 0xa66401d2  sh          $a0, 0x1D2($s3)
    ctx->pc = 0x20e090u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 466), (uint16_t)GPR_U32(ctx, 4));
label_20e094:
    // 0x20e094: 0x24050384  addiu       $a1, $zero, 0x384
    ctx->pc = 0x20e094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20e098:
    // 0x20e098: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20e098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20e09c:
    // 0x20e09c: 0xae6501d4  sw          $a1, 0x1D4($s3)
    ctx->pc = 0x20e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 5));
label_20e0a0:
    // 0x20e0a0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x20e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_20e0a4:
    // 0x20e0a4: 0xa66301e0  sh          $v1, 0x1E0($s3)
    ctx->pc = 0x20e0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 480), (uint16_t)GPR_U32(ctx, 3));
label_20e0a8:
    // 0x20e0a8: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x20e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_20e0ac:
    // 0x20e0ac: 0xa66201e2  sh          $v0, 0x1E2($s3)
    ctx->pc = 0x20e0acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 482), (uint16_t)GPR_U32(ctx, 2));
label_20e0b0:
    // 0x20e0b0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x20e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20e0b4:
    // 0x20e0b4: 0xae6501e4  sw          $a1, 0x1E4($s3)
    ctx->pc = 0x20e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 484), GPR_U32(ctx, 5));
label_20e0b8:
    // 0x20e0b8: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x20e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20e0bc:
    // 0x20e0bc: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x20e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_20e0c0:
    // 0x20e0c0: 0xa6630270  sh          $v1, 0x270($s3)
    ctx->pc = 0x20e0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 624), (uint16_t)GPR_U32(ctx, 3));
label_20e0c4:
    // 0x20e0c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e0c8:
    // 0x20e0c8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x20e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20e0cc:
    // 0x20e0cc: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x20e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20e0d0:
    // 0x20e0d0: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x20e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_20e0d4:
    // 0x20e0d4: 0x24c20030  addiu       $v0, $a2, 0x30
    ctx->pc = 0x20e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_20e0d8:
    // 0x20e0d8: 0xa6640272  sh          $a0, 0x272($s3)
    ctx->pc = 0x20e0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 626), (uint16_t)GPR_U32(ctx, 4));
label_20e0dc:
    // 0x20e0dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20e0e0:
    // 0x20e0e0: 0xae650274  sw          $a1, 0x274($s3)
    ctx->pc = 0x20e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 628), GPR_U32(ctx, 5));
label_20e0e4:
    // 0x20e0e4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x20e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_20e0e8:
    // 0x20e0e8: 0xa6630280  sh          $v1, 0x280($s3)
    ctx->pc = 0x20e0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 640), (uint16_t)GPR_U32(ctx, 3));
label_20e0ec:
    // 0x20e0ec: 0xa6620282  sh          $v0, 0x282($s3)
    ctx->pc = 0x20e0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 642), (uint16_t)GPR_U32(ctx, 2));
label_20e0f0:
    // 0x20e0f0: 0xae650284  sw          $a1, 0x284($s3)
    ctx->pc = 0x20e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 644), GPR_U32(ctx, 5));
label_20e0f4:
    // 0x20e0f4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x20e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_20e0f8:
    // 0x20e0f8: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x20e0f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_20e0fc:
    // 0x20e0fc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_20e100:
    if (ctx->pc == 0x20E100u) {
        ctx->pc = 0x20E104u;
        goto label_20e104;
    }
    ctx->pc = 0x20E0FCu;
    {
        const bool branch_taken_0x20e0fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e0fc) {
            ctx->pc = 0x20E128u;
            goto label_20e128;
        }
    }
    ctx->pc = 0x20E104u;
label_20e104:
    // 0x20e104: 0xc070834  jal         func_1C20D0
label_20e108:
    if (ctx->pc == 0x20E108u) {
        ctx->pc = 0x20E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E104u;
        // 0x20e108: 0x2444001b  addiu       $a0, $v0, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E10Cu;
        goto label_20e10c;
    }
    ctx->pc = 0x20E104u;
    SET_GPR_U32(ctx, 31, 0x20E10Cu);
    ctx->pc = 0x20E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E104u;
    // 0x20e108: 0x2444001b  addiu       $a0, $v0, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x20E104u, 0x20E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E10Cu;
label_20e10c:
    // 0x20e10c: 0xfe620250  sd          $v0, 0x250($s3)
    ctx->pc = 0x20e10cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 592), GPR_U64(ctx, 2));
label_20e110:
    // 0x20e110: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x20e110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_20e114:
    // 0x20e114: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20e114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20e118:
    // 0x20e118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e11c:
    // 0x20e11c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e120:
    // 0x20e120: 0x10000005  b           . + 4 + (0x5 << 2)
label_20e124:
    if (ctx->pc == 0x20E124u) {
        ctx->pc = 0x20E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E120u;
        // 0x20e124: 0x24440320  addiu       $a0, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E128u;
        goto label_20e128;
    }
    ctx->pc = 0x20E120u;
    {
        const bool branch_taken_0x20e120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E120u;
        // 0x20e124: 0x24440320  addiu       $a0, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e120) {
            ctx->pc = 0x20E138u;
            goto label_20e138;
        }
    }
    ctx->pc = 0x20E128u;
label_20e128:
    // 0x20e128: 0xc070834  jal         func_1C20D0
label_20e12c:
    if (ctx->pc == 0x20E12Cu) {
        ctx->pc = 0x20E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E128u;
        // 0x20e12c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E130u;
        goto label_20e130;
    }
    ctx->pc = 0x20E128u;
    SET_GPR_U32(ctx, 31, 0x20E130u);
    ctx->pc = 0x20E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E128u;
    // 0x20e12c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x20E128u, 0x20E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E130u;
label_20e130:
    // 0x20e130: 0xfe620250  sd          $v0, 0x250($s3)
    ctx->pc = 0x20e130u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 592), GPR_U64(ctx, 2));
label_20e134:
    // 0x20e134: 0x240403b0  addiu       $a0, $zero, 0x3B0
    ctx->pc = 0x20e134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
label_20e138:
    // 0x20e138: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x20e138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20e13c:
    // 0x20e13c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x20e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_20e140:
    // 0x20e140: 0x24030a08  addiu       $v1, $zero, 0xA08
    ctx->pc = 0x20e140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2568));
label_20e144:
    // 0x20e144: 0xa6620268  sh          $v0, 0x268($s3)
    ctx->pc = 0x20e144u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 616), (uint16_t)GPR_U32(ctx, 2));
label_20e148:
    // 0x20e148: 0x26270058  addiu       $a3, $s1, 0x58
    ctx->pc = 0x20e148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_20e14c:
    // 0x20e14c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x20e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_20e150:
    // 0x20e150: 0xa663026a  sh          $v1, 0x26A($s3)
    ctx->pc = 0x20e150u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 618), (uint16_t)GPR_U32(ctx, 3));
label_20e154:
    // 0x20e154: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e158:
    // 0x20e158: 0x24030d08  addiu       $v1, $zero, 0xD08
    ctx->pc = 0x20e158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3336));
label_20e15c:
    // 0x20e15c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x20e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_20e160:
    // 0x20e160: 0x2648001c  addiu       $t0, $s2, 0x1C
    ctx->pc = 0x20e160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_20e164:
    // 0x20e164: 0xa6620278  sh          $v0, 0x278($s3)
    ctx->pc = 0x20e164u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 632), (uint16_t)GPR_U32(ctx, 2));
label_20e168:
    // 0x20e168: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x20e168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20e16c:
    // 0x20e16c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x20e16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_20e170:
    // 0x20e170: 0xa663027a  sh          $v1, 0x27A($s3)
    ctx->pc = 0x20e170u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 634), (uint16_t)GPR_U32(ctx, 3));
label_20e174:
    // 0x20e174: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20e174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20e178:
    // 0x20e178: 0x24090384  addiu       $t1, $zero, 0x384
    ctx->pc = 0x20e178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20e17c:
    // 0x20e17c: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x20e17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_20e180:
    // 0x20e180: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x20e180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_20e184:
    // 0x20e184: 0x3445000a  ori         $a1, $v0, 0xA
    ctx->pc = 0x20e184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_20e188:
    // 0x20e188: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x20e188u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20e18c:
    // 0x20e18c: 0x2482002f  addiu       $v0, $a0, 0x2F
    ctx->pc = 0x20e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 47));
label_20e190:
    // 0x20e190: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x20e190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_20e194:
    // 0x20e194: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20e194u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_20e198:
    // 0x20e198: 0x2402033c  addiu       $v0, $zero, 0x33C
    ctx->pc = 0x20e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 828));
label_20e19c:
    // 0x20e19c: 0x323b8  dsll        $a0, $v1, 14
    ctx->pc = 0x20e19cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 14);
label_20e1a0:
    // 0x20e1a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x20e1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_20e1a4:
    // 0x20e1a4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x20e1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_20e1a8:
    // 0x20e1a8: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x20e1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_20e1ac:
    // 0x20e1ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x20e1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_20e1b0:
    // 0x20e1b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20e1b4:
    // 0x20e1b4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x20e1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_20e1b8:
    // 0x20e1b8: 0x26630290  addiu       $v1, $s3, 0x290
    ctx->pc = 0x20e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
label_20e1bc:
    // 0x20e1bc: 0xfe620230  sd          $v0, 0x230($s3)
    ctx->pc = 0x20e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 560), GPR_U64(ctx, 2));
label_20e1c0:
    // 0x20e1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e1c4:
    // 0x20e1c4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x20e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_20e1c8:
    // 0x20e1c8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20e1cc:
    // 0x20e1cc: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x20e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_20e1d0:
    // 0x20e1d0: 0xc054c60  jal         func_153180
label_20e1d4:
    if (ctx->pc == 0x20E1D4u) {
        ctx->pc = 0x20E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1D0u;
        // 0x20e1d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E1D8u;
        goto label_20e1d8;
    }
    ctx->pc = 0x20E1D0u;
    SET_GPR_U32(ctx, 31, 0x20E1D8u);
    ctx->pc = 0x20E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E1D0u;
    // 0x20e1d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x20E1D0u, 0x20E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E1D8u;
label_20e1d8:
    // 0x20e1d8: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x20e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_20e1dc:
    // 0x20e1dc: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x20e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_20e1e0:
    // 0x20e1e0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x20e1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e1e4:
    // 0x20e1e4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x20e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_20e1e8:
    // 0x20e1e8: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x20e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_20e1ec:
    // 0x20e1ec: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x20e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_20e1f0:
    // 0x20e1f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e1f4:
    // 0x20e1f4: 0xa66303e0  sh          $v1, 0x3E0($s3)
    ctx->pc = 0x20e1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 992), (uint16_t)GPR_U32(ctx, 3));
label_20e1f8:
    // 0x20e1f8: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x20e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20e1fc:
    // 0x20e1fc: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x20e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_20e200:
    // 0x20e200: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x20e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_20e204:
    // 0x20e204: 0xa66403e2  sh          $a0, 0x3E2($s3)
    ctx->pc = 0x20e204u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 994), (uint16_t)GPR_U32(ctx, 4));
label_20e208:
    // 0x20e208: 0x24060384  addiu       $a2, $zero, 0x384
    ctx->pc = 0x20e208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20e20c:
    // 0x20e20c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20e210:
    // 0x20e210: 0xae6603e4  sw          $a2, 0x3E4($s3)
    ctx->pc = 0x20e210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 996), GPR_U32(ctx, 6));
label_20e214:
    // 0x20e214: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x20e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_20e218:
    // 0x20e218: 0xa66303f0  sh          $v1, 0x3F0($s3)
    ctx->pc = 0x20e218u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1008), (uint16_t)GPR_U32(ctx, 3));
label_20e21c:
    // 0x20e21c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x20e21cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_20e220:
    // 0x20e220: 0xa66203f2  sh          $v0, 0x3F2($s3)
    ctx->pc = 0x20e220u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1010), (uint16_t)GPR_U32(ctx, 2));
label_20e224:
    // 0x20e224: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x20e224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20e228:
    // 0x20e228: 0xae6603f4  sw          $a2, 0x3F4($s3)
    ctx->pc = 0x20e228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1012), GPR_U32(ctx, 6));
label_20e22c:
    // 0x20e22c: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x20e22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_20e230:
    // 0x20e230: 0xc08f20e  jal         func_23C838
label_20e234:
    if (ctx->pc == 0x20E234u) {
        ctx->pc = 0x20E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E230u;
        // 0x20e234: 0x24a5e0a8  addiu       $a1, $a1, -0x1F58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E238u;
        goto label_20e238;
    }
    ctx->pc = 0x20E230u;
    SET_GPR_U32(ctx, 31, 0x20E238u);
    ctx->pc = 0x20E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E230u;
    // 0x20e234: 0x24a5e0a8  addiu       $a1, $a1, -0x1F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x20E230u, 0x20E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E238u;
label_20e238:
    // 0x20e238: 0x26260178  addiu       $a2, $s1, 0x178
    ctx->pc = 0x20e238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
label_20e23c:
    // 0x20e23c: 0x26470018  addiu       $a3, $s2, 0x18
    ctx->pc = 0x20e23cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_20e240:
    // 0x20e240: 0x26640400  addiu       $a0, $s3, 0x400
    ctx->pc = 0x20e240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
label_20e244:
    // 0x20e244: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20e244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20e248:
    // 0x20e248: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20e248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20e24c:
    // 0x20e24c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20e24cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20e250:
    // 0x20e250: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x20e250u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20e254:
    // 0x20e254: 0xc0708ac  jal         func_1C22B0
label_20e258:
    if (ctx->pc == 0x20E258u) {
        ctx->pc = 0x20E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E254u;
        // 0x20e258: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E25Cu;
        goto label_20e25c;
    }
    ctx->pc = 0x20E254u;
    SET_GPR_U32(ctx, 31, 0x20E25Cu);
    ctx->pc = 0x20E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E254u;
    // 0x20e258: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x20E254u, 0x20E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E25Cu;
label_20e25c:
    // 0x20e25c: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x20e25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_20e260:
    // 0x20e260: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x20e260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_20e264:
    // 0x20e264: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x20e264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20e268:
    // 0x20e268: 0xc08f20e  jal         func_23C838
label_20e26c:
    if (ctx->pc == 0x20E26Cu) {
        ctx->pc = 0x20E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E268u;
        // 0x20e26c: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E270u;
        goto label_20e270;
    }
    ctx->pc = 0x20E268u;
    SET_GPR_U32(ctx, 31, 0x20E270u);
    ctx->pc = 0x20E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E268u;
    // 0x20e26c: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x20E268u, 0x20E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E270u;
label_20e270:
    // 0x20e270: 0x26260148  addiu       $a2, $s1, 0x148
    ctx->pc = 0x20e270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
label_20e274:
    // 0x20e274: 0x2647002c  addiu       $a3, $s2, 0x2C
    ctx->pc = 0x20e274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_20e278:
    // 0x20e278: 0x26640540  addiu       $a0, $s3, 0x540
    ctx->pc = 0x20e278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1344));
label_20e27c:
    // 0x20e27c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20e280:
    // 0x20e280: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20e280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20e284:
    // 0x20e284: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20e284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20e288:
    // 0x20e288: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x20e288u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20e28c:
    // 0x20e28c: 0xc0708ac  jal         func_1C22B0
label_20e290:
    if (ctx->pc == 0x20E290u) {
        ctx->pc = 0x20E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E28Cu;
        // 0x20e290: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E294u;
        goto label_20e294;
    }
    ctx->pc = 0x20E28Cu;
    SET_GPR_U32(ctx, 31, 0x20E294u);
    ctx->pc = 0x20E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E28Cu;
    // 0x20e290: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x20E28Cu, 0x20E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E294u;
label_20e294:
    // 0x20e294: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x20e294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_20e298:
    // 0x20e298: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x20e298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_20e29c:
    // 0x20e29c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x20e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20e2a0:
    // 0x20e2a0: 0xc08f20e  jal         func_23C838
label_20e2a4:
    if (ctx->pc == 0x20E2A4u) {
        ctx->pc = 0x20E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2A0u;
        // 0x20e2a4: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E2A8u;
        goto label_20e2a8;
    }
    ctx->pc = 0x20E2A0u;
    SET_GPR_U32(ctx, 31, 0x20E2A8u);
    ctx->pc = 0x20E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E2A0u;
    // 0x20e2a4: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x20E2A0u, 0x20E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E2A8u;
label_20e2a8:
    // 0x20e2a8: 0x26260148  addiu       $a2, $s1, 0x148
    ctx->pc = 0x20e2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
label_20e2ac:
    // 0x20e2ac: 0x26470040  addiu       $a3, $s2, 0x40
    ctx->pc = 0x20e2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_20e2b0:
    // 0x20e2b0: 0x26640860  addiu       $a0, $s3, 0x860
    ctx->pc = 0x20e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2144));
label_20e2b4:
    // 0x20e2b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20e2b8:
    // 0x20e2b8: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20e2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20e2bc:
    // 0x20e2bc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20e2bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20e2c0:
    // 0x20e2c0: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x20e2c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20e2c4:
    // 0x20e2c4: 0xc0708ac  jal         func_1C22B0
label_20e2c8:
    if (ctx->pc == 0x20E2C8u) {
        ctx->pc = 0x20E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2C4u;
        // 0x20e2c8: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E2CCu;
        goto label_20e2cc;
    }
    ctx->pc = 0x20E2C4u;
    SET_GPR_U32(ctx, 31, 0x20E2CCu);
    ctx->pc = 0x20E2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E2C4u;
    // 0x20e2c8: 0x27ab00d0  addiu       $t3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x20E2C4u, 0x20E2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E2CCu;
label_20e2cc:
    // 0x20e2cc: 0x8e87001c  lw          $a3, 0x1C($s4)
    ctx->pc = 0x20e2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_20e2d0:
    // 0x20e2d0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x20e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_20e2d4:
    // 0x20e2d4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x20e2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_20e2d8:
    // 0x20e2d8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x20e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_20e2dc:
    // 0x20e2dc: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x20e2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x20e2e0u;
    return;
}
