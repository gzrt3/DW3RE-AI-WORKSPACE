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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28daf0u: goto label_28daf0;
        case 0x28daf4u: goto label_28daf4;
        case 0x28daf8u: goto label_28daf8;
        case 0x28dafcu: goto label_28dafc;
        case 0x28db00u: goto label_28db00;
        case 0x28db04u: goto label_28db04;
        case 0x28db08u: goto label_28db08;
        case 0x28db0cu: goto label_28db0c;
        case 0x28db10u: goto label_28db10;
        case 0x28db14u: goto label_28db14;
        case 0x28db18u: goto label_28db18;
        case 0x28db1cu: goto label_28db1c;
        case 0x28db20u: goto label_28db20;
        case 0x28db24u: goto label_28db24;
        case 0x28db28u: goto label_28db28;
        case 0x28db2cu: goto label_28db2c;
        case 0x28db30u: goto label_28db30;
        case 0x28db34u: goto label_28db34;
        case 0x28db38u: goto label_28db38;
        case 0x28db3cu: goto label_28db3c;
        case 0x28db40u: goto label_28db40;
        case 0x28db44u: goto label_28db44;
        case 0x28db48u: goto label_28db48;
        case 0x28db4cu: goto label_28db4c;
        case 0x28db50u: goto label_28db50;
        case 0x28db54u: goto label_28db54;
        case 0x28db58u: goto label_28db58;
        case 0x28db5cu: goto label_28db5c;
        case 0x28db60u: goto label_28db60;
        case 0x28db64u: goto label_28db64;
        case 0x28db68u: goto label_28db68;
        case 0x28db6cu: goto label_28db6c;
        case 0x28db70u: goto label_28db70;
        case 0x28db74u: goto label_28db74;
        case 0x28db78u: goto label_28db78;
        case 0x28db7cu: goto label_28db7c;
        case 0x28db80u: goto label_28db80;
        case 0x28db84u: goto label_28db84;
        case 0x28db88u: goto label_28db88;
        case 0x28db8cu: goto label_28db8c;
        case 0x28db90u: goto label_28db90;
        case 0x28db94u: goto label_28db94;
        case 0x28db98u: goto label_28db98;
        case 0x28db9cu: goto label_28db9c;
        case 0x28dba0u: goto label_28dba0;
        case 0x28dba4u: goto label_28dba4;
        case 0x28dba8u: goto label_28dba8;
        case 0x28dbacu: goto label_28dbac;
        case 0x28dbb0u: goto label_28dbb0;
        case 0x28dbb4u: goto label_28dbb4;
        case 0x28dbb8u: goto label_28dbb8;
        case 0x28dbbcu: goto label_28dbbc;
        case 0x28dbc0u: goto label_28dbc0;
        case 0x28dbc4u: goto label_28dbc4;
        case 0x28dbc8u: goto label_28dbc8;
        case 0x28dbccu: goto label_28dbcc;
        case 0x28dbd0u: goto label_28dbd0;
        case 0x28dbd4u: goto label_28dbd4;
        case 0x28dbd8u: goto label_28dbd8;
        case 0x28dbdcu: goto label_28dbdc;
        case 0x28dbe0u: goto label_28dbe0;
        case 0x28dbe4u: goto label_28dbe4;
        case 0x28dbe8u: goto label_28dbe8;
        case 0x28dbecu: goto label_28dbec;
        case 0x28dbf0u: goto label_28dbf0;
        case 0x28dbf4u: goto label_28dbf4;
        case 0x28dbf8u: goto label_28dbf8;
        case 0x28dbfcu: goto label_28dbfc;
        case 0x28dc00u: goto label_28dc00;
        case 0x28dc04u: goto label_28dc04;
        case 0x28dc08u: goto label_28dc08;
        case 0x28dc0cu: goto label_28dc0c;
        case 0x28dc10u: goto label_28dc10;
        case 0x28dc14u: goto label_28dc14;
        case 0x28dc18u: goto label_28dc18;
        case 0x28dc1cu: goto label_28dc1c;
        case 0x28dc20u: goto label_28dc20;
        case 0x28dc24u: goto label_28dc24;
        case 0x28dc28u: goto label_28dc28;
        case 0x28dc2cu: goto label_28dc2c;
        case 0x28dc30u: goto label_28dc30;
        case 0x28dc34u: goto label_28dc34;
        case 0x28dc38u: goto label_28dc38;
        case 0x28dc3cu: goto label_28dc3c;
        case 0x28dc40u: goto label_28dc40;
        case 0x28dc44u: goto label_28dc44;
        case 0x28dc48u: goto label_28dc48;
        case 0x28dc4cu: goto label_28dc4c;
        case 0x28dc50u: goto label_28dc50;
        case 0x28dc54u: goto label_28dc54;
        case 0x28dc58u: goto label_28dc58;
        case 0x28dc5cu: goto label_28dc5c;
        case 0x28dc60u: goto label_28dc60;
        case 0x28dc64u: goto label_28dc64;
        case 0x28dc68u: goto label_28dc68;
        case 0x28dc6cu: goto label_28dc6c;
        case 0x28dc70u: goto label_28dc70;
        case 0x28dc74u: goto label_28dc74;
        case 0x28dc78u: goto label_28dc78;
        case 0x28dc7cu: goto label_28dc7c;
        case 0x28dc80u: goto label_28dc80;
        case 0x28dc84u: goto label_28dc84;
        case 0x28dc88u: goto label_28dc88;
        case 0x28dc8cu: goto label_28dc8c;
        case 0x28dc90u: goto label_28dc90;
        case 0x28dc94u: goto label_28dc94;
        case 0x28dc98u: goto label_28dc98;
        case 0x28dc9cu: goto label_28dc9c;
        case 0x28dca0u: goto label_28dca0;
        case 0x28dca4u: goto label_28dca4;
        case 0x28dca8u: goto label_28dca8;
        case 0x28dcacu: goto label_28dcac;
        case 0x28dcb0u: goto label_28dcb0;
        case 0x28dcb4u: goto label_28dcb4;
        case 0x28dcb8u: goto label_28dcb8;
        case 0x28dcbcu: goto label_28dcbc;
        case 0x28dcc0u: goto label_28dcc0;
        case 0x28dcc4u: goto label_28dcc4;
        case 0x28dcc8u: goto label_28dcc8;
        case 0x28dcccu: goto label_28dccc;
        case 0x28dcd0u: goto label_28dcd0;
        case 0x28dcd4u: goto label_28dcd4;
        case 0x28dcd8u: goto label_28dcd8;
        case 0x28dcdcu: goto label_28dcdc;
        case 0x28dce0u: goto label_28dce0;
        case 0x28dce4u: goto label_28dce4;
        case 0x28dce8u: goto label_28dce8;
        case 0x28dcecu: goto label_28dcec;
        case 0x28dcf0u: goto label_28dcf0;
        case 0x28dcf4u: goto label_28dcf4;
        case 0x28dcf8u: goto label_28dcf8;
        case 0x28dcfcu: goto label_28dcfc;
        case 0x28dd00u: goto label_28dd00;
        case 0x28dd04u: goto label_28dd04;
        case 0x28dd08u: goto label_28dd08;
        case 0x28dd0cu: goto label_28dd0c;
        case 0x28dd10u: goto label_28dd10;
        case 0x28dd14u: goto label_28dd14;
        case 0x28dd18u: goto label_28dd18;
        case 0x28dd1cu: goto label_28dd1c;
        case 0x28dd20u: goto label_28dd20;
        case 0x28dd24u: goto label_28dd24;
        case 0x28dd28u: goto label_28dd28;
        case 0x28dd2cu: goto label_28dd2c;
        case 0x28dd30u: goto label_28dd30;
        case 0x28dd34u: goto label_28dd34;
        case 0x28dd38u: goto label_28dd38;
        case 0x28dd3cu: goto label_28dd3c;
        case 0x28dd40u: goto label_28dd40;
        case 0x28dd44u: goto label_28dd44;
        case 0x28dd48u: goto label_28dd48;
        case 0x28dd4cu: goto label_28dd4c;
        case 0x28dd50u: goto label_28dd50;
        case 0x28dd54u: goto label_28dd54;
        case 0x28dd58u: goto label_28dd58;
        case 0x28dd5cu: goto label_28dd5c;
        case 0x28dd60u: goto label_28dd60;
        case 0x28dd64u: goto label_28dd64;
        case 0x28dd68u: goto label_28dd68;
        case 0x28dd6cu: goto label_28dd6c;
        case 0x28dd70u: goto label_28dd70;
        case 0x28dd74u: goto label_28dd74;
        case 0x28dd78u: goto label_28dd78;
        case 0x28dd7cu: goto label_28dd7c;
        case 0x28dd80u: goto label_28dd80;
        case 0x28dd84u: goto label_28dd84;
        case 0x28dd88u: goto label_28dd88;
        case 0x28dd8cu: goto label_28dd8c;
        case 0x28dd90u: goto label_28dd90;
        case 0x28dd94u: goto label_28dd94;
        case 0x28dd98u: goto label_28dd98;
        case 0x28dd9cu: goto label_28dd9c;
        case 0x28dda0u: goto label_28dda0;
        case 0x28dda4u: goto label_28dda4;
        case 0x28dda8u: goto label_28dda8;
        case 0x28ddacu: goto label_28ddac;
        case 0x28ddb0u: goto label_28ddb0;
        case 0x28ddb4u: goto label_28ddb4;
        case 0x28ddb8u: goto label_28ddb8;
        case 0x28ddbcu: goto label_28ddbc;
        case 0x28ddc0u: goto label_28ddc0;
        case 0x28ddc4u: goto label_28ddc4;
        case 0x28ddc8u: goto label_28ddc8;
        case 0x28ddccu: goto label_28ddcc;
        case 0x28ddd0u: goto label_28ddd0;
        case 0x28ddd4u: goto label_28ddd4;
        case 0x28ddd8u: goto label_28ddd8;
        case 0x28dddcu: goto label_28dddc;
        case 0x28dde0u: goto label_28dde0;
        case 0x28dde4u: goto label_28dde4;
        case 0x28dde8u: goto label_28dde8;
        case 0x28ddecu: goto label_28ddec;
        case 0x28ddf0u: goto label_28ddf0;
        case 0x28ddf4u: goto label_28ddf4;
        case 0x28ddf8u: goto label_28ddf8;
        case 0x28ddfcu: goto label_28ddfc;
        case 0x28de00u: goto label_28de00;
        case 0x28de04u: goto label_28de04;
        case 0x28de08u: goto label_28de08;
        case 0x28de0cu: goto label_28de0c;
        case 0x28de10u: goto label_28de10;
        case 0x28de14u: goto label_28de14;
        case 0x28de18u: goto label_28de18;
        case 0x28de1cu: goto label_28de1c;
        case 0x28de20u: goto label_28de20;
        case 0x28de24u: goto label_28de24;
        case 0x28de28u: goto label_28de28;
        case 0x28de2cu: goto label_28de2c;
        case 0x28de30u: goto label_28de30;
        case 0x28de34u: goto label_28de34;
        case 0x28de38u: goto label_28de38;
        case 0x28de3cu: goto label_28de3c;
        case 0x28de40u: goto label_28de40;
        case 0x28de44u: goto label_28de44;
        case 0x28de48u: goto label_28de48;
        case 0x28de4cu: goto label_28de4c;
        case 0x28de50u: goto label_28de50;
        case 0x28de54u: goto label_28de54;
        case 0x28de58u: goto label_28de58;
        case 0x28de5cu: goto label_28de5c;
        case 0x28de60u: goto label_28de60;
        case 0x28de64u: goto label_28de64;
        case 0x28de68u: goto label_28de68;
        case 0x28de6cu: goto label_28de6c;
        case 0x28de70u: goto label_28de70;
        case 0x28de74u: goto label_28de74;
        case 0x28de78u: goto label_28de78;
        case 0x28de7cu: goto label_28de7c;
        case 0x28de80u: goto label_28de80;
        case 0x28de84u: goto label_28de84;
        case 0x28de88u: goto label_28de88;
        case 0x28de8cu: goto label_28de8c;
        case 0x28de90u: goto label_28de90;
        case 0x28de94u: goto label_28de94;
        case 0x28de98u: goto label_28de98;
        case 0x28de9cu: goto label_28de9c;
        case 0x28dea0u: goto label_28dea0;
        case 0x28dea4u: goto label_28dea4;
        case 0x28dea8u: goto label_28dea8;
        case 0x28deacu: goto label_28deac;
        case 0x28deb0u: goto label_28deb0;
        case 0x28deb4u: goto label_28deb4;
        case 0x28deb8u: goto label_28deb8;
        case 0x28debcu: goto label_28debc;
        case 0x28dec0u: goto label_28dec0;
        case 0x28dec4u: goto label_28dec4;
        case 0x28dec8u: goto label_28dec8;
        case 0x28deccu: goto label_28decc;
        case 0x28ded0u: goto label_28ded0;
        case 0x28ded4u: goto label_28ded4;
        case 0x28ded8u: goto label_28ded8;
        case 0x28dedcu: goto label_28dedc;
        case 0x28dee0u: goto label_28dee0;
        case 0x28dee4u: goto label_28dee4;
        case 0x28dee8u: goto label_28dee8;
        case 0x28deecu: goto label_28deec;
        case 0x28def0u: goto label_28def0;
        case 0x28def4u: goto label_28def4;
        case 0x28def8u: goto label_28def8;
        case 0x28defcu: goto label_28defc;
        case 0x28df00u: goto label_28df00;
        case 0x28df04u: goto label_28df04;
        case 0x28df08u: goto label_28df08;
        case 0x28df0cu: goto label_28df0c;
        case 0x28df10u: goto label_28df10;
        case 0x28df14u: goto label_28df14;
        case 0x28df18u: goto label_28df18;
        case 0x28df1cu: goto label_28df1c;
        case 0x28df20u: goto label_28df20;
        case 0x28df24u: goto label_28df24;
        case 0x28df28u: goto label_28df28;
        case 0x28df2cu: goto label_28df2c;
        case 0x28df30u: goto label_28df30;
        case 0x28df34u: goto label_28df34;
        case 0x28df38u: goto label_28df38;
        case 0x28df3cu: goto label_28df3c;
        case 0x28df40u: goto label_28df40;
        case 0x28df44u: goto label_28df44;
        case 0x28df48u: goto label_28df48;
        case 0x28df4cu: goto label_28df4c;
        case 0x28df50u: goto label_28df50;
        case 0x28df54u: goto label_28df54;
        case 0x28df58u: goto label_28df58;
        case 0x28df5cu: goto label_28df5c;
        case 0x28df60u: goto label_28df60;
        case 0x28df64u: goto label_28df64;
        case 0x28df68u: goto label_28df68;
        case 0x28df6cu: goto label_28df6c;
        case 0x28df70u: goto label_28df70;
        case 0x28df74u: goto label_28df74;
        case 0x28df78u: goto label_28df78;
        case 0x28df7cu: goto label_28df7c;
        case 0x28df80u: goto label_28df80;
        case 0x28df84u: goto label_28df84;
        case 0x28df88u: goto label_28df88;
        case 0x28df8cu: goto label_28df8c;
        case 0x28df90u: goto label_28df90;
        case 0x28df94u: goto label_28df94;
        case 0x28df98u: goto label_28df98;
        case 0x28df9cu: goto label_28df9c;
        case 0x28dfa0u: goto label_28dfa0;
        case 0x28dfa4u: goto label_28dfa4;
        case 0x28dfa8u: goto label_28dfa8;
        case 0x28dfacu: goto label_28dfac;
        case 0x28dfb0u: goto label_28dfb0;
        case 0x28dfb4u: goto label_28dfb4;
        case 0x28dfb8u: goto label_28dfb8;
        case 0x28dfbcu: goto label_28dfbc;
        case 0x28dfc0u: goto label_28dfc0;
        case 0x28dfc4u: goto label_28dfc4;
        case 0x28dfc8u: goto label_28dfc8;
        case 0x28dfccu: goto label_28dfcc;
        case 0x28dfd0u: goto label_28dfd0;
        case 0x28dfd4u: goto label_28dfd4;
        case 0x28dfd8u: goto label_28dfd8;
        case 0x28dfdcu: goto label_28dfdc;
        case 0x28dfe0u: goto label_28dfe0;
        case 0x28dfe4u: goto label_28dfe4;
        case 0x28dfe8u: goto label_28dfe8;
        case 0x28dfecu: goto label_28dfec;
        case 0x28dff0u: goto label_28dff0;
        case 0x28dff4u: goto label_28dff4;
        case 0x28dff8u: goto label_28dff8;
        case 0x28dffcu: goto label_28dffc;
        case 0x28e000u: goto label_28e000;
        case 0x28e004u: goto label_28e004;
        case 0x28e008u: goto label_28e008;
        case 0x28e00cu: goto label_28e00c;
        case 0x28e010u: goto label_28e010;
        case 0x28e014u: goto label_28e014;
        case 0x28e018u: goto label_28e018;
        case 0x28e01cu: goto label_28e01c;
        case 0x28e020u: goto label_28e020;
        case 0x28e024u: goto label_28e024;
        case 0x28e028u: goto label_28e028;
        case 0x28e02cu: goto label_28e02c;
        case 0x28e030u: goto label_28e030;
        case 0x28e034u: goto label_28e034;
        case 0x28e038u: goto label_28e038;
        case 0x28e03cu: goto label_28e03c;
        case 0x28e040u: goto label_28e040;
        case 0x28e044u: goto label_28e044;
        case 0x28e048u: goto label_28e048;
        case 0x28e04cu: goto label_28e04c;
        case 0x28e050u: goto label_28e050;
        case 0x28e054u: goto label_28e054;
        case 0x28e058u: goto label_28e058;
        case 0x28e05cu: goto label_28e05c;
        case 0x28e060u: goto label_28e060;
        case 0x28e064u: goto label_28e064;
        case 0x28e068u: goto label_28e068;
        case 0x28e06cu: goto label_28e06c;
        case 0x28e070u: goto label_28e070;
        case 0x28e074u: goto label_28e074;
        case 0x28e078u: goto label_28e078;
        case 0x28e07cu: goto label_28e07c;
        case 0x28e080u: goto label_28e080;
        case 0x28e084u: goto label_28e084;
        case 0x28e088u: goto label_28e088;
        case 0x28e08cu: goto label_28e08c;
        case 0x28e090u: goto label_28e090;
        case 0x28e094u: goto label_28e094;
        case 0x28e098u: goto label_28e098;
        case 0x28e09cu: goto label_28e09c;
        case 0x28e0a0u: goto label_28e0a0;
        case 0x28e0a4u: goto label_28e0a4;
        case 0x28e0a8u: goto label_28e0a8;
        case 0x28e0acu: goto label_28e0ac;
        case 0x28e0b0u: goto label_28e0b0;
        case 0x28e0b4u: goto label_28e0b4;
        case 0x28e0b8u: goto label_28e0b8;
        case 0x28e0bcu: goto label_28e0bc;
        case 0x28e0c0u: goto label_28e0c0;
        case 0x28e0c4u: goto label_28e0c4;
        case 0x28e0c8u: goto label_28e0c8;
        case 0x28e0ccu: goto label_28e0cc;
        case 0x28e0d0u: goto label_28e0d0;
        case 0x28e0d4u: goto label_28e0d4;
        case 0x28e0d8u: goto label_28e0d8;
        case 0x28e0dcu: goto label_28e0dc;
        case 0x28e0e0u: goto label_28e0e0;
        case 0x28e0e4u: goto label_28e0e4;
        case 0x28e0e8u: goto label_28e0e8;
        case 0x28e0ecu: goto label_28e0ec;
        case 0x28e0f0u: goto label_28e0f0;
        case 0x28e0f4u: goto label_28e0f4;
        case 0x28e0f8u: goto label_28e0f8;
        case 0x28e0fcu: goto label_28e0fc;
        case 0x28e100u: goto label_28e100;
        case 0x28e104u: goto label_28e104;
        case 0x28e108u: goto label_28e108;
        case 0x28e10cu: goto label_28e10c;
        case 0x28e110u: goto label_28e110;
        case 0x28e114u: goto label_28e114;
        case 0x28e118u: goto label_28e118;
        case 0x28e11cu: goto label_28e11c;
        case 0x28e120u: goto label_28e120;
        case 0x28e124u: goto label_28e124;
        case 0x28e128u: goto label_28e128;
        case 0x28e12cu: goto label_28e12c;
        case 0x28e130u: goto label_28e130;
        case 0x28e134u: goto label_28e134;
        case 0x28e138u: goto label_28e138;
        case 0x28e13cu: goto label_28e13c;
        case 0x28e140u: goto label_28e140;
        case 0x28e144u: goto label_28e144;
        case 0x28e148u: goto label_28e148;
        case 0x28e14cu: goto label_28e14c;
        case 0x28e150u: goto label_28e150;
        case 0x28e154u: goto label_28e154;
        case 0x28e158u: goto label_28e158;
        case 0x28e15cu: goto label_28e15c;
        case 0x28e160u: goto label_28e160;
        case 0x28e164u: goto label_28e164;
        case 0x28e168u: goto label_28e168;
        case 0x28e16cu: goto label_28e16c;
        case 0x28e170u: goto label_28e170;
        case 0x28e174u: goto label_28e174;
        case 0x28e178u: goto label_28e178;
        case 0x28e17cu: goto label_28e17c;
        case 0x28e180u: goto label_28e180;
        case 0x28e184u: goto label_28e184;
        case 0x28e188u: goto label_28e188;
        case 0x28e18cu: goto label_28e18c;
        case 0x28e190u: goto label_28e190;
        case 0x28e194u: goto label_28e194;
        case 0x28e198u: goto label_28e198;
        case 0x28e19cu: goto label_28e19c;
        case 0x28e1a0u: goto label_28e1a0;
        case 0x28e1a4u: goto label_28e1a4;
        case 0x28e1a8u: goto label_28e1a8;
        case 0x28e1acu: goto label_28e1ac;
        case 0x28e1b0u: goto label_28e1b0;
        case 0x28e1b4u: goto label_28e1b4;
        case 0x28e1b8u: goto label_28e1b8;
        case 0x28e1bcu: goto label_28e1bc;
        case 0x28e1c0u: goto label_28e1c0;
        case 0x28e1c4u: goto label_28e1c4;
        case 0x28e1c8u: goto label_28e1c8;
        case 0x28e1ccu: goto label_28e1cc;
        case 0x28e1d0u: goto label_28e1d0;
        case 0x28e1d4u: goto label_28e1d4;
        case 0x28e1d8u: goto label_28e1d8;
        case 0x28e1dcu: goto label_28e1dc;
        case 0x28e1e0u: goto label_28e1e0;
        case 0x28e1e4u: goto label_28e1e4;
        case 0x28e1e8u: goto label_28e1e8;
        case 0x28e1ecu: goto label_28e1ec;
        case 0x28e1f0u: goto label_28e1f0;
        case 0x28e1f4u: goto label_28e1f4;
        case 0x28e1f8u: goto label_28e1f8;
        case 0x28e1fcu: goto label_28e1fc;
        case 0x28e200u: goto label_28e200;
        case 0x28e204u: goto label_28e204;
        case 0x28e208u: goto label_28e208;
        case 0x28e20cu: goto label_28e20c;
        case 0x28e210u: goto label_28e210;
        case 0x28e214u: goto label_28e214;
        case 0x28e218u: goto label_28e218;
        case 0x28e21cu: goto label_28e21c;
        case 0x28e220u: goto label_28e220;
        case 0x28e224u: goto label_28e224;
        case 0x28e228u: goto label_28e228;
        case 0x28e22cu: goto label_28e22c;
        case 0x28e230u: goto label_28e230;
        case 0x28e234u: goto label_28e234;
        case 0x28e238u: goto label_28e238;
        case 0x28e23cu: goto label_28e23c;
        case 0x28e240u: goto label_28e240;
        case 0x28e244u: goto label_28e244;
        case 0x28e248u: goto label_28e248;
        case 0x28e24cu: goto label_28e24c;
        case 0x28e250u: goto label_28e250;
        case 0x28e254u: goto label_28e254;
        case 0x28e258u: goto label_28e258;
        case 0x28e25cu: goto label_28e25c;
        case 0x28e260u: goto label_28e260;
        case 0x28e264u: goto label_28e264;
        case 0x28e268u: goto label_28e268;
        case 0x28e26cu: goto label_28e26c;
        case 0x28e270u: goto label_28e270;
        case 0x28e274u: goto label_28e274;
        case 0x28e278u: goto label_28e278;
        case 0x28e27cu: goto label_28e27c;
        case 0x28e280u: goto label_28e280;
        case 0x28e284u: goto label_28e284;
        case 0x28e288u: goto label_28e288;
        case 0x28e28cu: goto label_28e28c;
        case 0x28e290u: goto label_28e290;
        case 0x28e294u: goto label_28e294;
        case 0x28e298u: goto label_28e298;
        case 0x28e29cu: goto label_28e29c;
        case 0x28e2a0u: goto label_28e2a0;
        case 0x28e2a4u: goto label_28e2a4;
        case 0x28e2a8u: goto label_28e2a8;
        case 0x28e2acu: goto label_28e2ac;
        case 0x28e2b0u: goto label_28e2b0;
        case 0x28e2b4u: goto label_28e2b4;
        case 0x28e2b8u: goto label_28e2b8;
        case 0x28e2bcu: goto label_28e2bc;
        default: return;
    }

label_28daf0:
    // 0x28daf0: 0x0  nop
    ctx->pc = 0x28daf0u;
    // NOP
label_28daf4:
    // 0x28daf4: 0x0  nop
    ctx->pc = 0x28daf4u;
    // NOP
label_28daf8:
    // 0x28daf8: 0x20004004  addi        $zero, $zero, 0x4004
    ctx->pc = 0x28daf8u;
    // NOP (addi to $zero)
label_28dafc:
    // 0x28dafc: 0x0  nop
    ctx->pc = 0x28dafcu;
    // NOP
label_28db00:
    // 0x28db00: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28db00u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28db04:
    // 0x28db04: 0x0  nop
    ctx->pc = 0x28db04u;
    // NOP
label_28db08:
    // 0x28db08: 0x0  nop
    ctx->pc = 0x28db08u;
    // NOP
label_28db0c:
    // 0x28db0c: 0x0  nop
    ctx->pc = 0x28db0cu;
    // NOP
label_28db10:
    // 0x28db10: 0x0  nop
    ctx->pc = 0x28db10u;
    // NOP
label_28db14:
    // 0x28db14: 0x0  nop
    ctx->pc = 0x28db14u;
    // NOP
label_28db18:
    // 0x28db18: 0x0  nop
    ctx->pc = 0x28db18u;
    // NOP
label_28db1c:
    // 0x28db1c: 0x0  nop
    ctx->pc = 0x28db1cu;
    // NOP
label_28db20:
    // 0x28db20: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x28db20u;
    
label_28db24:
    // 0x28db24: 0x0  nop
    ctx->pc = 0x28db24u;
    // NOP
label_28db28:
    // 0x28db28: 0x0  nop
    ctx->pc = 0x28db28u;
    // NOP
label_28db2c:
    // 0x28db2c: 0x0  nop
    ctx->pc = 0x28db2cu;
    // NOP
label_28db30:
    // 0x28db30: 0x0  nop
    ctx->pc = 0x28db30u;
    // NOP
label_28db34:
    // 0x28db34: 0x0  nop
    ctx->pc = 0x28db34u;
    // NOP
label_28db38:
    // 0x28db38: 0x4184407  mtsab       $zero, 0x4407
    ctx->pc = 0x28db38u;
    ctx->sa = ((GPR_U32(ctx, 0) ^ (uint32_t)17415) & 0xF) << 3;
label_28db3c:
    // 0x28db3c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28db3cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28db40:
    // 0x28db40: 0x0  nop
    ctx->pc = 0x28db40u;
    // NOP
label_28db44:
    // 0x28db44: 0x0  nop
    ctx->pc = 0x28db44u;
    // NOP
label_28db48:
    // 0x28db48: 0x0  nop
    ctx->pc = 0x28db48u;
    // NOP
label_28db4c:
    // 0x28db4c: 0x0  nop
    ctx->pc = 0x28db4cu;
    // NOP
label_28db50:
    // 0x28db50: 0x4184407  mtsab       $zero, 0x4407
    ctx->pc = 0x28db50u;
    ctx->sa = ((GPR_U32(ctx, 0) ^ (uint32_t)17415) & 0xF) << 3;
label_28db54:
    // 0x28db54: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28db54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28db58:
    // 0x28db58: 0x0  nop
    ctx->pc = 0x28db58u;
    // NOP
label_28db5c:
    // 0x28db5c: 0x0  nop
    ctx->pc = 0x28db5cu;
    // NOP
label_28db60:
    // 0x28db60: 0x0  nop
    ctx->pc = 0x28db60u;
    // NOP
label_28db64:
    // 0x28db64: 0x0  nop
    ctx->pc = 0x28db64u;
    // NOP
label_28db68:
    // 0x28db68: 0x0  nop
    ctx->pc = 0x28db68u;
    // NOP
label_28db6c:
    // 0x28db6c: 0x0  nop
    ctx->pc = 0x28db6cu;
    // NOP
label_28db70:
    // 0x28db70: 0x0  nop
    ctx->pc = 0x28db70u;
    // NOP
label_28db74:
    // 0x28db74: 0x0  nop
    ctx->pc = 0x28db74u;
    // NOP
label_28db78:
    // 0x28db78: 0x0  nop
    ctx->pc = 0x28db78u;
    // NOP
label_28db7c:
    // 0x28db7c: 0x0  nop
    ctx->pc = 0x28db7cu;
    // NOP
label_28db80:
    // 0x28db80: 0x0  nop
    ctx->pc = 0x28db80u;
    // NOP
label_28db84:
    // 0x28db84: 0x0  nop
    ctx->pc = 0x28db84u;
    // NOP
label_28db88:
    // 0x28db88: 0x0  nop
    ctx->pc = 0x28db88u;
    // NOP
label_28db8c:
    // 0x28db8c: 0x0  nop
    ctx->pc = 0x28db8cu;
    // NOP
label_28db90:
    // 0x28db90: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28db90u;
    // NOP
label_28db94:
    // 0x28db94: 0x0  nop
    ctx->pc = 0x28db94u;
    // NOP
label_28db98:
    // 0x28db98: 0x0  nop
    ctx->pc = 0x28db98u;
    // NOP
label_28db9c:
    // 0x28db9c: 0x0  nop
    ctx->pc = 0x28db9cu;
    // NOP
label_28dba0:
    // 0x28dba0: 0x0  nop
    ctx->pc = 0x28dba0u;
    // NOP
label_28dba4:
    // 0x28dba4: 0x0  nop
    ctx->pc = 0x28dba4u;
    // NOP
label_28dba8:
    // 0x28dba8: 0x0  nop
    ctx->pc = 0x28dba8u;
    // NOP
label_28dbac:
    // 0x28dbac: 0x0  nop
    ctx->pc = 0x28dbacu;
    // NOP
label_28dbb0:
    // 0x28dbb0: 0x0  nop
    ctx->pc = 0x28dbb0u;
    // NOP
label_28dbb4:
    // 0x28dbb4: 0x0  nop
    ctx->pc = 0x28dbb4u;
    // NOP
label_28dbb8:
    // 0x28dbb8: 0x0  nop
    ctx->pc = 0x28dbb8u;
    // NOP
label_28dbbc:
    // 0x28dbbc: 0x0  nop
    ctx->pc = 0x28dbbcu;
    // NOP
label_28dbc0:
    // 0x28dbc0: 0x404  .word       0x00000404                   # sllv        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28dbc0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28dbc4:
    // 0x28dbc4: 0x0  nop
    ctx->pc = 0x28dbc4u;
    // NOP
label_28dbc8:
    // 0x28dbc8: 0x8301a1c0  lb          $at, -0x5E40($t8)
    ctx->pc = 0x28dbc8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 4294943168)));
label_28dbcc:
    // 0x28dbcc: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28dbccu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28dbd0:
    // 0x28dbd0: 0x0  nop
    ctx->pc = 0x28dbd0u;
    // NOP
label_28dbd4:
    // 0x28dbd4: 0x0  nop
    ctx->pc = 0x28dbd4u;
    // NOP
label_28dbd8:
    // 0x28dbd8: 0x0  nop
    ctx->pc = 0x28dbd8u;
    // NOP
label_28dbdc:
    // 0x28dbdc: 0x0  nop
    ctx->pc = 0x28dbdcu;
    // NOP
label_28dbe0:
    // 0x28dbe0: 0x8301a1c0  lb          $at, -0x5E40($t8)
    ctx->pc = 0x28dbe0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 4294943168)));
label_28dbe4:
    // 0x28dbe4: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28dbe4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28dbe8:
    // 0x28dbe8: 0x0  nop
    ctx->pc = 0x28dbe8u;
    // NOP
label_28dbec:
    // 0x28dbec: 0x0  nop
    ctx->pc = 0x28dbecu;
    // NOP
label_28dbf0:
    // 0x28dbf0: 0x0  nop
    ctx->pc = 0x28dbf0u;
    // NOP
label_28dbf4:
    // 0x28dbf4: 0x0  nop
    ctx->pc = 0x28dbf4u;
    // NOP
label_28dbf8:
    // 0x28dbf8: 0x0  nop
    ctx->pc = 0x28dbf8u;
    // NOP
label_28dbfc:
    // 0x28dbfc: 0x0  nop
    ctx->pc = 0x28dbfcu;
    // NOP
label_28dc00:
    // 0x28dc00: 0x0  nop
    ctx->pc = 0x28dc00u;
    // NOP
label_28dc04:
    // 0x28dc04: 0x0  nop
    ctx->pc = 0x28dc04u;
    // NOP
label_28dc08:
    // 0x28dc08: 0x0  nop
    ctx->pc = 0x28dc08u;
    // NOP
label_28dc0c:
    // 0x28dc0c: 0x0  nop
    ctx->pc = 0x28dc0cu;
    // NOP
label_28dc10:
    // 0x28dc10: 0x8301a1c0  lb          $at, -0x5E40($t8)
    ctx->pc = 0x28dc10u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 4294943168)));
label_28dc14:
    // 0x28dc14: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28dc14u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28dc18:
    // 0x28dc18: 0x0  nop
    ctx->pc = 0x28dc18u;
    // NOP
label_28dc1c:
    // 0x28dc1c: 0x0  nop
    ctx->pc = 0x28dc1cu;
    // NOP
label_28dc20:
    // 0x28dc20: 0x0  nop
    ctx->pc = 0x28dc20u;
    // NOP
label_28dc24:
    // 0x28dc24: 0x0  nop
    ctx->pc = 0x28dc24u;
    // NOP
label_28dc28:
    // 0x28dc28: 0x0  nop
    ctx->pc = 0x28dc28u;
    // NOP
label_28dc2c:
    // 0x28dc2c: 0x0  nop
    ctx->pc = 0x28dc2cu;
    // NOP
label_28dc30:
    // 0x28dc30: 0x0  nop
    ctx->pc = 0x28dc30u;
    // NOP
label_28dc34:
    // 0x28dc34: 0x0  nop
    ctx->pc = 0x28dc34u;
    // NOP
label_28dc38:
    // 0x28dc38: 0x0  nop
    ctx->pc = 0x28dc38u;
    // NOP
label_28dc3c:
    // 0x28dc3c: 0x0  nop
    ctx->pc = 0x28dc3cu;
    // NOP
label_28dc40:
    // 0x28dc40: 0x0  nop
    ctx->pc = 0x28dc40u;
    // NOP
label_28dc44:
    // 0x28dc44: 0x0  nop
    ctx->pc = 0x28dc44u;
    // NOP
label_28dc48:
    // 0x28dc48: 0x0  nop
    ctx->pc = 0x28dc48u;
    // NOP
label_28dc4c:
    // 0x28dc4c: 0x0  nop
    ctx->pc = 0x28dc4cu;
    // NOP
label_28dc50:
    // 0x28dc50: 0x0  nop
    ctx->pc = 0x28dc50u;
    // NOP
label_28dc54:
    // 0x28dc54: 0x0  nop
    ctx->pc = 0x28dc54u;
    // NOP
label_28dc58:
    // 0x28dc58: 0x0  nop
    ctx->pc = 0x28dc58u;
    // NOP
label_28dc5c:
    // 0x28dc5c: 0x0  nop
    ctx->pc = 0x28dc5cu;
    // NOP
label_28dc60:
    // 0x28dc60: 0x0  nop
    ctx->pc = 0x28dc60u;
    // NOP
label_28dc64:
    // 0x28dc64: 0x0  nop
    ctx->pc = 0x28dc64u;
    // NOP
label_28dc68:
    // 0x28dc68: 0x20004004  addi        $zero, $zero, 0x4004
    ctx->pc = 0x28dc68u;
    // NOP (addi to $zero)
label_28dc6c:
    // 0x28dc6c: 0x0  nop
    ctx->pc = 0x28dc6cu;
    // NOP
label_28dc70:
    // 0x28dc70: 0x0  nop
    ctx->pc = 0x28dc70u;
    // NOP
label_28dc74:
    // 0x28dc74: 0x0  nop
    ctx->pc = 0x28dc74u;
    // NOP
label_28dc78:
    // 0x28dc78: 0x4184407  mtsab       $zero, 0x4407
    ctx->pc = 0x28dc78u;
    ctx->sa = ((GPR_U32(ctx, 0) ^ (uint32_t)17415) & 0xF) << 3;
label_28dc7c:
    // 0x28dc7c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28dc7cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28dc80:
    // 0x28dc80: 0x8719e5c7  lh          $t9, -0x1A39($t8)
    ctx->pc = 0x28dc80u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4294960583)));
label_28dc84:
    // 0x28dc84: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28dc84u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28dc88:
    // 0x28dc88: 0x0  nop
    ctx->pc = 0x28dc88u;
    // NOP
label_28dc8c:
    // 0x28dc8c: 0x0  nop
    ctx->pc = 0x28dc8cu;
    // NOP
label_28dc90:
    // 0x28dc90: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x28dc90u;
    
label_28dc94:
    // 0x28dc94: 0x0  nop
    ctx->pc = 0x28dc94u;
    // NOP
label_28dc98:
    // 0x28dc98: 0x0  nop
    ctx->pc = 0x28dc98u;
    // NOP
label_28dc9c:
    // 0x28dc9c: 0x0  nop
    ctx->pc = 0x28dc9cu;
    // NOP
label_28dca0:
    // 0x28dca0: 0x0  nop
    ctx->pc = 0x28dca0u;
    // NOP
label_28dca4:
    // 0x28dca4: 0x0  nop
    ctx->pc = 0x28dca4u;
    // NOP
label_28dca8:
    // 0x28dca8: 0x4184407  mtsab       $zero, 0x4407
    ctx->pc = 0x28dca8u;
    ctx->sa = ((GPR_U32(ctx, 0) ^ (uint32_t)17415) & 0xF) << 3;
label_28dcac:
    // 0x28dcac: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28dcacu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28dcb0:
    // 0x28dcb0: 0x0  nop
    ctx->pc = 0x28dcb0u;
    // NOP
label_28dcb4:
    // 0x28dcb4: 0x0  nop
    ctx->pc = 0x28dcb4u;
    // NOP
label_28dcb8:
    // 0x28dcb8: 0x0  nop
    ctx->pc = 0x28dcb8u;
    // NOP
label_28dcbc:
    // 0x28dcbc: 0x0  nop
    ctx->pc = 0x28dcbcu;
    // NOP
label_28dcc0:
    // 0x28dcc0: 0x4184407  mtsab       $zero, 0x4407
    ctx->pc = 0x28dcc0u;
    ctx->sa = ((GPR_U32(ctx, 0) ^ (uint32_t)17415) & 0xF) << 3;
label_28dcc4:
    // 0x28dcc4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28dcc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28dcc8:
    // 0x28dcc8: 0x0  nop
    ctx->pc = 0x28dcc8u;
    // NOP
label_28dccc:
    // 0x28dccc: 0x0  nop
    ctx->pc = 0x28dcccu;
    // NOP
label_28dcd0:
    // 0x28dcd0: 0x0  nop
    ctx->pc = 0x28dcd0u;
    // NOP
label_28dcd4:
    // 0x28dcd4: 0x0  nop
    ctx->pc = 0x28dcd4u;
    // NOP
label_28dcd8:
    // 0x28dcd8: 0x0  nop
    ctx->pc = 0x28dcd8u;
    // NOP
label_28dcdc:
    // 0x28dcdc: 0x0  nop
    ctx->pc = 0x28dcdcu;
    // NOP
label_28dce0:
    // 0x28dce0: 0x0  nop
    ctx->pc = 0x28dce0u;
    // NOP
label_28dce4:
    // 0x28dce4: 0x0  nop
    ctx->pc = 0x28dce4u;
    // NOP
label_28dce8:
    // 0x28dce8: 0x0  nop
    ctx->pc = 0x28dce8u;
    // NOP
label_28dcec:
    // 0x28dcec: 0x0  nop
    ctx->pc = 0x28dcecu;
    // NOP
label_28dcf0:
    // 0x28dcf0: 0x0  nop
    ctx->pc = 0x28dcf0u;
    // NOP
label_28dcf4:
    // 0x28dcf4: 0x0  nop
    ctx->pc = 0x28dcf4u;
    // NOP
label_28dcf8:
    // 0x28dcf8: 0x0  nop
    ctx->pc = 0x28dcf8u;
    // NOP
label_28dcfc:
    // 0x28dcfc: 0x0  nop
    ctx->pc = 0x28dcfcu;
    // NOP
label_28dd00:
    // 0x28dd00: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28dd00u;
    // NOP
label_28dd04:
    // 0x28dd04: 0x0  nop
    ctx->pc = 0x28dd04u;
    // NOP
label_28dd08:
    // 0x28dd08: 0x0  nop
    ctx->pc = 0x28dd08u;
    // NOP
label_28dd0c:
    // 0x28dd0c: 0x0  nop
    ctx->pc = 0x28dd0cu;
    // NOP
label_28dd10:
    // 0x28dd10: 0x0  nop
    ctx->pc = 0x28dd10u;
    // NOP
label_28dd14:
    // 0x28dd14: 0x0  nop
    ctx->pc = 0x28dd14u;
    // NOP
label_28dd18:
    // 0x28dd18: 0x0  nop
    ctx->pc = 0x28dd18u;
    // NOP
label_28dd1c:
    // 0x28dd1c: 0x0  nop
    ctx->pc = 0x28dd1cu;
    // NOP
label_28dd20:
    // 0x28dd20: 0x20004004  addi        $zero, $zero, 0x4004
    ctx->pc = 0x28dd20u;
    // NOP (addi to $zero)
label_28dd24:
    // 0x28dd24: 0x0  nop
    ctx->pc = 0x28dd24u;
    // NOP
label_28dd28:
    // 0x28dd28: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28dd28u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28dd2c:
    // 0x28dd2c: 0x0  nop
    ctx->pc = 0x28dd2cu;
    // NOP
label_28dd30:
    // 0x28dd30: 0x0  nop
    ctx->pc = 0x28dd30u;
    // NOP
label_28dd34:
    // 0x28dd34: 0x0  nop
    ctx->pc = 0x28dd34u;
    // NOP
label_28dd38:
    // 0x28dd38: 0x8719e5c7  lh          $t9, -0x1A39($t8)
    ctx->pc = 0x28dd38u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4294960583)));
label_28dd3c:
    // 0x28dd3c: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28dd3cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28dd40:
    // 0x28dd40: 0x0  nop
    ctx->pc = 0x28dd40u;
    // NOP
label_28dd44:
    // 0x28dd44: 0x0  nop
    ctx->pc = 0x28dd44u;
    // NOP
label_28dd48:
    // 0x28dd48: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x28dd48u;
    
label_28dd4c:
    // 0x28dd4c: 0x0  nop
    ctx->pc = 0x28dd4cu;
    // NOP
label_28dd50:
    // 0x28dd50: 0x8301a1c0  lb          $at, -0x5E40($t8)
    ctx->pc = 0x28dd50u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 4294943168)));
label_28dd54:
    // 0x28dd54: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28dd54u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28dd58:
    // 0x28dd58: 0x0  nop
    ctx->pc = 0x28dd58u;
    // NOP
label_28dd5c:
    // 0x28dd5c: 0x0  nop
    ctx->pc = 0x28dd5cu;
    // NOP
label_28dd60:
    // 0x28dd60: 0x4184407  mtsab       $zero, 0x4407
    ctx->pc = 0x28dd60u;
    ctx->sa = ((GPR_U32(ctx, 0) ^ (uint32_t)17415) & 0xF) << 3;
label_28dd64:
    // 0x28dd64: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28dd64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28dd68:
    // 0x28dd68: 0x0  nop
    ctx->pc = 0x28dd68u;
    // NOP
label_28dd6c:
    // 0x28dd6c: 0x0  nop
    ctx->pc = 0x28dd6cu;
    // NOP
label_28dd70:
    // 0x28dd70: 0x0  nop
    ctx->pc = 0x28dd70u;
    // NOP
label_28dd74:
    // 0x28dd74: 0x0  nop
    ctx->pc = 0x28dd74u;
    // NOP
label_28dd78:
    // 0x28dd78: 0x0  nop
    ctx->pc = 0x28dd78u;
    // NOP
label_28dd7c:
    // 0x28dd7c: 0x0  nop
    ctx->pc = 0x28dd7cu;
    // NOP
label_28dd80:
    // 0x28dd80: 0x0  nop
    ctx->pc = 0x28dd80u;
    // NOP
label_28dd84:
    // 0x28dd84: 0x0  nop
    ctx->pc = 0x28dd84u;
    // NOP
label_28dd88:
    // 0x28dd88: 0x0  nop
    ctx->pc = 0x28dd88u;
    // NOP
label_28dd8c:
    // 0x28dd8c: 0x0  nop
    ctx->pc = 0x28dd8cu;
    // NOP
label_28dd90:
    // 0x28dd90: 0x0  nop
    ctx->pc = 0x28dd90u;
    // NOP
label_28dd94:
    // 0x28dd94: 0x0  nop
    ctx->pc = 0x28dd94u;
    // NOP
label_28dd98:
    // 0x28dd98: 0x0  nop
    ctx->pc = 0x28dd98u;
    // NOP
label_28dd9c:
    // 0x28dd9c: 0x0  nop
    ctx->pc = 0x28dd9cu;
    // NOP
label_28dda0:
    // 0x28dda0: 0x0  nop
    ctx->pc = 0x28dda0u;
    // NOP
label_28dda4:
    // 0x28dda4: 0x0  nop
    ctx->pc = 0x28dda4u;
    // NOP
label_28dda8:
    // 0x28dda8: 0x0  nop
    ctx->pc = 0x28dda8u;
    // NOP
label_28ddac:
    // 0x28ddac: 0x0  nop
    ctx->pc = 0x28ddacu;
    // NOP
label_28ddb0:
    // 0x28ddb0: 0x0  nop
    ctx->pc = 0x28ddb0u;
    // NOP
label_28ddb4:
    // 0x28ddb4: 0x0  nop
    ctx->pc = 0x28ddb4u;
    // NOP
label_28ddb8:
    // 0x28ddb8: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ddb8u;
    // NOP
label_28ddbc:
    // 0x28ddbc: 0x0  nop
    ctx->pc = 0x28ddbcu;
    // NOP
label_28ddc0:
    // 0x28ddc0: 0x0  nop
    ctx->pc = 0x28ddc0u;
    // NOP
label_28ddc4:
    // 0x28ddc4: 0x0  nop
    ctx->pc = 0x28ddc4u;
    // NOP
label_28ddc8:
    // 0x28ddc8: 0x0  nop
    ctx->pc = 0x28ddc8u;
    // NOP
label_28ddcc:
    // 0x28ddcc: 0x0  nop
    ctx->pc = 0x28ddccu;
    // NOP
label_28ddd0:
    // 0x28ddd0: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x28ddd0u;
    
label_28ddd4:
    // 0x28ddd4: 0x0  nop
    ctx->pc = 0x28ddd4u;
    // NOP
label_28ddd8:
    // 0x28ddd8: 0x0  nop
    ctx->pc = 0x28ddd8u;
    // NOP
label_28dddc:
    // 0x28dddc: 0x0  nop
    ctx->pc = 0x28dddcu;
    // NOP
label_28dde0:
    // 0x28dde0: 0x0  nop
    ctx->pc = 0x28dde0u;
    // NOP
label_28dde4:
    // 0x28dde4: 0x0  nop
    ctx->pc = 0x28dde4u;
    // NOP
label_28dde8:
    // 0x28dde8: 0x0  nop
    ctx->pc = 0x28dde8u;
    // NOP
label_28ddec:
    // 0x28ddec: 0x0  nop
    ctx->pc = 0x28ddecu;
    // NOP
label_28ddf0:
    // 0x28ddf0: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28ddf0u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28DDF0 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ddf4:
    // 0x28ddf4: 0x0  nop
    ctx->pc = 0x28ddf4u;
    // NOP
label_28ddf8:
    // 0x28ddf8: 0x0  nop
    ctx->pc = 0x28ddf8u;
    // NOP
label_28ddfc:
    // 0x28ddfc: 0x0  nop
    ctx->pc = 0x28ddfcu;
    // NOP
label_28de00:
    // 0x28de00: 0x0  nop
    ctx->pc = 0x28de00u;
    // NOP
label_28de04:
    // 0x28de04: 0x0  nop
    ctx->pc = 0x28de04u;
    // NOP
label_28de08:
    // 0x28de08: 0x0  nop
    ctx->pc = 0x28de08u;
    // NOP
label_28de0c:
    // 0x28de0c: 0x0  nop
    ctx->pc = 0x28de0cu;
    // NOP
label_28de10:
    // 0x28de10: 0x0  nop
    ctx->pc = 0x28de10u;
    // NOP
label_28de14:
    // 0x28de14: 0x0  nop
    ctx->pc = 0x28de14u;
    // NOP
label_28de18:
    // 0x28de18: 0x0  nop
    ctx->pc = 0x28de18u;
    // NOP
label_28de1c:
    // 0x28de1c: 0x0  nop
    ctx->pc = 0x28de1cu;
    // NOP
label_28de20:
    // 0x28de20: 0x0  nop
    ctx->pc = 0x28de20u;
    // NOP
label_28de24:
    // 0x28de24: 0x0  nop
    ctx->pc = 0x28de24u;
    // NOP
label_28de28:
    // 0x28de28: 0x0  nop
    ctx->pc = 0x28de28u;
    // NOP
label_28de2c:
    // 0x28de2c: 0x0  nop
    ctx->pc = 0x28de2cu;
    // NOP
label_28de30:
    // 0x28de30: 0x0  nop
    ctx->pc = 0x28de30u;
    // NOP
label_28de34:
    // 0x28de34: 0x0  nop
    ctx->pc = 0x28de34u;
    // NOP
label_28de38:
    // 0x28de38: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28de38u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28DE38 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28de3c:
    // 0x28de3c: 0x0  nop
    ctx->pc = 0x28de3cu;
    // NOP
label_28de40:
    // 0x28de40: 0x0  nop
    ctx->pc = 0x28de40u;
    // NOP
label_28de44:
    // 0x28de44: 0x0  nop
    ctx->pc = 0x28de44u;
    // NOP
label_28de48:
    // 0x28de48: 0x0  nop
    ctx->pc = 0x28de48u;
    // NOP
label_28de4c:
    // 0x28de4c: 0x0  nop
    ctx->pc = 0x28de4cu;
    // NOP
label_28de50:
    // 0x28de50: 0x0  nop
    ctx->pc = 0x28de50u;
    // NOP
label_28de54:
    // 0x28de54: 0x0  nop
    ctx->pc = 0x28de54u;
    // NOP
label_28de58:
    // 0x28de58: 0x0  nop
    ctx->pc = 0x28de58u;
    // NOP
label_28de5c:
    // 0x28de5c: 0x0  nop
    ctx->pc = 0x28de5cu;
    // NOP
label_28de60:
    // 0x28de60: 0x0  nop
    ctx->pc = 0x28de60u;
    // NOP
label_28de64:
    // 0x28de64: 0x0  nop
    ctx->pc = 0x28de64u;
    // NOP
label_28de68:
    // 0x28de68: 0x0  nop
    ctx->pc = 0x28de68u;
    // NOP
label_28de6c:
    // 0x28de6c: 0x0  nop
    ctx->pc = 0x28de6cu;
    // NOP
label_28de70:
    // 0x28de70: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28de70u;
    // NOP
label_28de74:
    // 0x28de74: 0x0  nop
    ctx->pc = 0x28de74u;
    // NOP
label_28de78:
    // 0x28de78: 0x0  nop
    ctx->pc = 0x28de78u;
    // NOP
label_28de7c:
    // 0x28de7c: 0x0  nop
    ctx->pc = 0x28de7cu;
    // NOP
label_28de80:
    // 0x28de80: 0x0  nop
    ctx->pc = 0x28de80u;
    // NOP
label_28de84:
    // 0x28de84: 0x0  nop
    ctx->pc = 0x28de84u;
    // NOP
label_28de88:
    // 0x28de88: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x28de88u;
    
label_28de8c:
    // 0x28de8c: 0x0  nop
    ctx->pc = 0x28de8cu;
    // NOP
label_28de90:
    // 0x28de90: 0x0  nop
    ctx->pc = 0x28de90u;
    // NOP
label_28de94:
    // 0x28de94: 0x0  nop
    ctx->pc = 0x28de94u;
    // NOP
label_28de98:
    // 0x28de98: 0x0  nop
    ctx->pc = 0x28de98u;
    // NOP
label_28de9c:
    // 0x28de9c: 0x0  nop
    ctx->pc = 0x28de9cu;
    // NOP
label_28dea0:
    // 0x28dea0: 0x0  nop
    ctx->pc = 0x28dea0u;
    // NOP
label_28dea4:
    // 0x28dea4: 0x0  nop
    ctx->pc = 0x28dea4u;
    // NOP
label_28dea8:
    // 0x28dea8: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28dea8u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28DEA8 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28deac:
    // 0x28deac: 0x0  nop
    ctx->pc = 0x28deacu;
    // NOP
label_28deb0:
    // 0x28deb0: 0x0  nop
    ctx->pc = 0x28deb0u;
    // NOP
label_28deb4:
    // 0x28deb4: 0x0  nop
    ctx->pc = 0x28deb4u;
    // NOP
label_28deb8:
    // 0x28deb8: 0x0  nop
    ctx->pc = 0x28deb8u;
    // NOP
label_28debc:
    // 0x28debc: 0x0  nop
    ctx->pc = 0x28debcu;
    // NOP
label_28dec0:
    // 0x28dec0: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_28dec4:
    if (ctx->pc == 0x28DEC4u) {
        ctx->pc = 0x28DEC8u;
        goto label_28dec8;
    }
    ctx->pc = 0x28DEC0u;
    {
        const bool branch_taken_0x28dec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dec0) {
            ctx->pc = 0x28DF44u;
            goto label_28df44;
        }
    }
    ctx->pc = 0x28DEC8u;
label_28dec8:
    // 0x28dec8: 0x0  nop
    ctx->pc = 0x28dec8u;
    // NOP
label_28decc:
    // 0x28decc: 0x0  nop
    ctx->pc = 0x28deccu;
    // NOP
label_28ded0:
    // 0x28ded0: 0x0  nop
    ctx->pc = 0x28ded0u;
    // NOP
label_28ded4:
    // 0x28ded4: 0x0  nop
    ctx->pc = 0x28ded4u;
    // NOP
label_28ded8:
    // 0x28ded8: 0x0  nop
    ctx->pc = 0x28ded8u;
    // NOP
label_28dedc:
    // 0x28dedc: 0x0  nop
    ctx->pc = 0x28dedcu;
    // NOP
label_28dee0:
    // 0x28dee0: 0x0  nop
    ctx->pc = 0x28dee0u;
    // NOP
label_28dee4:
    // 0x28dee4: 0x0  nop
    ctx->pc = 0x28dee4u;
    // NOP
label_28dee8:
    // 0x28dee8: 0x0  nop
    ctx->pc = 0x28dee8u;
    // NOP
label_28deec:
    // 0x28deec: 0x0  nop
    ctx->pc = 0x28deecu;
    // NOP
label_28def0:
    // 0x28def0: 0x0  nop
    ctx->pc = 0x28def0u;
    // NOP
label_28def4:
    // 0x28def4: 0x0  nop
    ctx->pc = 0x28def4u;
    // NOP
label_28def8:
    // 0x28def8: 0x0  nop
    ctx->pc = 0x28def8u;
    // NOP
label_28defc:
    // 0x28defc: 0x0  nop
    ctx->pc = 0x28defcu;
    // NOP
label_28df00:
    // 0x28df00: 0x0  nop
    ctx->pc = 0x28df00u;
    // NOP
label_28df04:
    // 0x28df04: 0x0  nop
    ctx->pc = 0x28df04u;
    // NOP
label_28df08:
    // 0x28df08: 0x0  nop
    ctx->pc = 0x28df08u;
    // NOP
label_28df0c:
    // 0x28df0c: 0x0  nop
    ctx->pc = 0x28df0cu;
    // NOP
label_28df10:
    // 0x28df10: 0x0  nop
    ctx->pc = 0x28df10u;
    // NOP
label_28df14:
    // 0x28df14: 0x0  nop
    ctx->pc = 0x28df14u;
    // NOP
label_28df18:
    // 0x28df18: 0x0  nop
    ctx->pc = 0x28df18u;
    // NOP
label_28df1c:
    // 0x28df1c: 0x0  nop
    ctx->pc = 0x28df1cu;
    // NOP
label_28df20:
    // 0x28df20: 0x0  nop
    ctx->pc = 0x28df20u;
    // NOP
label_28df24:
    // 0x28df24: 0x0  nop
    ctx->pc = 0x28df24u;
    // NOP
label_28df28:
    // 0x28df28: 0x0  nop
    ctx->pc = 0x28df28u;
    // NOP
label_28df2c:
    // 0x28df2c: 0x0  nop
    ctx->pc = 0x28df2cu;
    // NOP
label_28df30:
    // 0x28df30: 0x0  nop
    ctx->pc = 0x28df30u;
    // NOP
label_28df34:
    // 0x28df34: 0x0  nop
    ctx->pc = 0x28df34u;
    // NOP
label_28df38:
    // 0x28df38: 0x0  nop
    ctx->pc = 0x28df38u;
    // NOP
label_28df3c:
    // 0x28df3c: 0x0  nop
    ctx->pc = 0x28df3cu;
    // NOP
label_28df40:
    // 0x28df40: 0x0  nop
    ctx->pc = 0x28df40u;
    // NOP
label_28df44:
    // 0x28df44: 0x0  nop
    ctx->pc = 0x28df44u;
    // NOP
label_28df48:
    // 0x28df48: 0x0  nop
    ctx->pc = 0x28df48u;
    // NOP
label_28df4c:
    // 0x28df4c: 0x0  nop
    ctx->pc = 0x28df4cu;
    // NOP
label_28df50:
    // 0x28df50: 0x0  nop
    ctx->pc = 0x28df50u;
    // NOP
label_28df54:
    // 0x28df54: 0x0  nop
    ctx->pc = 0x28df54u;
    // NOP
label_28df58:
    // 0x28df58: 0x0  nop
    ctx->pc = 0x28df58u;
    // NOP
label_28df5c:
    // 0x28df5c: 0x0  nop
    ctx->pc = 0x28df5cu;
    // NOP
label_28df60:
    // 0x28df60: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28df60u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28DF60 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28df64:
    // 0x28df64: 0x0  nop
    ctx->pc = 0x28df64u;
    // NOP
label_28df68:
    // 0x28df68: 0x0  nop
    ctx->pc = 0x28df68u;
    // NOP
label_28df6c:
    // 0x28df6c: 0x0  nop
    ctx->pc = 0x28df6cu;
    // NOP
label_28df70:
    // 0x28df70: 0x0  nop
    ctx->pc = 0x28df70u;
    // NOP
label_28df74:
    // 0x28df74: 0x0  nop
    ctx->pc = 0x28df74u;
    // NOP
label_28df78:
    // 0x28df78: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28df78u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28DF78 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28df7c:
    // 0x28df7c: 0x0  nop
    ctx->pc = 0x28df7cu;
    // NOP
label_28df80:
    // 0x28df80: 0x0  nop
    ctx->pc = 0x28df80u;
    // NOP
label_28df84:
    // 0x28df84: 0x0  nop
    ctx->pc = 0x28df84u;
    // NOP
label_28df88:
    // 0x28df88: 0x0  nop
    ctx->pc = 0x28df88u;
    // NOP
label_28df8c:
    // 0x28df8c: 0x0  nop
    ctx->pc = 0x28df8cu;
    // NOP
label_28df90:
    // 0x28df90: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28df90u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28df94:
    // 0x28df94: 0x0  nop
    ctx->pc = 0x28df94u;
    // NOP
label_28df98:
    // 0x28df98: 0x0  nop
    ctx->pc = 0x28df98u;
    // NOP
label_28df9c:
    // 0x28df9c: 0x0  nop
    ctx->pc = 0x28df9cu;
    // NOP
label_28dfa0:
    // 0x28dfa0: 0x0  nop
    ctx->pc = 0x28dfa0u;
    // NOP
label_28dfa4:
    // 0x28dfa4: 0x0  nop
    ctx->pc = 0x28dfa4u;
    // NOP
label_28dfa8:
    // 0x28dfa8: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28dfa8u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28DFA8 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28dfac:
    // 0x28dfac: 0x0  nop
    ctx->pc = 0x28dfacu;
    // NOP
label_28dfb0:
    // 0x28dfb0: 0x0  nop
    ctx->pc = 0x28dfb0u;
    // NOP
label_28dfb4:
    // 0x28dfb4: 0x0  nop
    ctx->pc = 0x28dfb4u;
    // NOP
label_28dfb8:
    // 0x28dfb8: 0x0  nop
    ctx->pc = 0x28dfb8u;
    // NOP
label_28dfbc:
    // 0x28dfbc: 0x0  nop
    ctx->pc = 0x28dfbcu;
    // NOP
label_28dfc0:
    // 0x28dfc0: 0x0  nop
    ctx->pc = 0x28dfc0u;
    // NOP
label_28dfc4:
    // 0x28dfc4: 0x0  nop
    ctx->pc = 0x28dfc4u;
    // NOP
label_28dfc8:
    // 0x28dfc8: 0x0  nop
    ctx->pc = 0x28dfc8u;
    // NOP
label_28dfcc:
    // 0x28dfcc: 0x0  nop
    ctx->pc = 0x28dfccu;
    // NOP
label_28dfd0:
    // 0x28dfd0: 0x0  nop
    ctx->pc = 0x28dfd0u;
    // NOP
label_28dfd4:
    // 0x28dfd4: 0x0  nop
    ctx->pc = 0x28dfd4u;
    // NOP
label_28dfd8:
    // 0x28dfd8: 0x0  nop
    ctx->pc = 0x28dfd8u;
    // NOP
label_28dfdc:
    // 0x28dfdc: 0x0  nop
    ctx->pc = 0x28dfdcu;
    // NOP
label_28dfe0:
    // 0x28dfe0: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28dfe0u;
    // NOP
label_28dfe4:
    // 0x28dfe4: 0x0  nop
    ctx->pc = 0x28dfe4u;
    // NOP
label_28dfe8:
    // 0x28dfe8: 0x0  nop
    ctx->pc = 0x28dfe8u;
    // NOP
label_28dfec:
    // 0x28dfec: 0x0  nop
    ctx->pc = 0x28dfecu;
    // NOP
label_28dff0:
    // 0x28dff0: 0x0  nop
    ctx->pc = 0x28dff0u;
    // NOP
label_28dff4:
    // 0x28dff4: 0x0  nop
    ctx->pc = 0x28dff4u;
    // NOP
label_28dff8:
    // 0x28dff8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x28dff8u;
    
label_28dffc:
    // 0x28dffc: 0x0  nop
    ctx->pc = 0x28dffcu;
    // NOP
label_28e000:
    // 0x28e000: 0x0  nop
    ctx->pc = 0x28e000u;
    // NOP
label_28e004:
    // 0x28e004: 0x0  nop
    ctx->pc = 0x28e004u;
    // NOP
label_28e008:
    // 0x28e008: 0x0  nop
    ctx->pc = 0x28e008u;
    // NOP
label_28e00c:
    // 0x28e00c: 0x0  nop
    ctx->pc = 0x28e00cu;
    // NOP
label_28e010:
    // 0x28e010: 0x0  nop
    ctx->pc = 0x28e010u;
    // NOP
label_28e014:
    // 0x28e014: 0x0  nop
    ctx->pc = 0x28e014u;
    // NOP
label_28e018:
    // 0x28e018: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e018u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E018 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e01c:
    // 0x28e01c: 0x0  nop
    ctx->pc = 0x28e01cu;
    // NOP
label_28e020:
    // 0x28e020: 0x0  nop
    ctx->pc = 0x28e020u;
    // NOP
label_28e024:
    // 0x28e024: 0x0  nop
    ctx->pc = 0x28e024u;
    // NOP
label_28e028:
    // 0x28e028: 0x0  nop
    ctx->pc = 0x28e028u;
    // NOP
label_28e02c:
    // 0x28e02c: 0x0  nop
    ctx->pc = 0x28e02cu;
    // NOP
label_28e030:
    // 0x28e030: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e030u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E030 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e034:
    // 0x28e034: 0x0  nop
    ctx->pc = 0x28e034u;
    // NOP
label_28e038:
    // 0x28e038: 0x0  nop
    ctx->pc = 0x28e038u;
    // NOP
label_28e03c:
    // 0x28e03c: 0x0  nop
    ctx->pc = 0x28e03cu;
    // NOP
label_28e040:
    // 0x28e040: 0x0  nop
    ctx->pc = 0x28e040u;
    // NOP
label_28e044:
    // 0x28e044: 0x0  nop
    ctx->pc = 0x28e044u;
    // NOP
label_28e048:
    // 0x28e048: 0x0  nop
    ctx->pc = 0x28e048u;
    // NOP
label_28e04c:
    // 0x28e04c: 0x0  nop
    ctx->pc = 0x28e04cu;
    // NOP
label_28e050:
    // 0x28e050: 0x0  nop
    ctx->pc = 0x28e050u;
    // NOP
label_28e054:
    // 0x28e054: 0x0  nop
    ctx->pc = 0x28e054u;
    // NOP
label_28e058:
    // 0x28e058: 0x0  nop
    ctx->pc = 0x28e058u;
    // NOP
label_28e05c:
    // 0x28e05c: 0x0  nop
    ctx->pc = 0x28e05cu;
    // NOP
label_28e060:
    // 0x28e060: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e060u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E060 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e064:
    // 0x28e064: 0x0  nop
    ctx->pc = 0x28e064u;
    // NOP
label_28e068:
    // 0x28e068: 0x0  nop
    ctx->pc = 0x28e068u;
    // NOP
label_28e06c:
    // 0x28e06c: 0x0  nop
    ctx->pc = 0x28e06cu;
    // NOP
label_28e070:
    // 0x28e070: 0x0  nop
    ctx->pc = 0x28e070u;
    // NOP
label_28e074:
    // 0x28e074: 0x0  nop
    ctx->pc = 0x28e074u;
    // NOP
label_28e078:
    // 0x28e078: 0x0  nop
    ctx->pc = 0x28e078u;
    // NOP
label_28e07c:
    // 0x28e07c: 0x0  nop
    ctx->pc = 0x28e07cu;
    // NOP
label_28e080:
    // 0x28e080: 0x0  nop
    ctx->pc = 0x28e080u;
    // NOP
label_28e084:
    // 0x28e084: 0x0  nop
    ctx->pc = 0x28e084u;
    // NOP
label_28e088:
    // 0x28e088: 0x0  nop
    ctx->pc = 0x28e088u;
    // NOP
label_28e08c:
    // 0x28e08c: 0x0  nop
    ctx->pc = 0x28e08cu;
    // NOP
label_28e090:
    // 0x28e090: 0x0  nop
    ctx->pc = 0x28e090u;
    // NOP
label_28e094:
    // 0x28e094: 0x0  nop
    ctx->pc = 0x28e094u;
    // NOP
label_28e098:
    // 0x28e098: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e098u;
    // NOP
label_28e09c:
    // 0x28e09c: 0x0  nop
    ctx->pc = 0x28e09cu;
    // NOP
label_28e0a0:
    // 0x28e0a0: 0x0  nop
    ctx->pc = 0x28e0a0u;
    // NOP
label_28e0a4:
    // 0x28e0a4: 0x0  nop
    ctx->pc = 0x28e0a4u;
    // NOP
label_28e0a8:
    // 0x28e0a8: 0x0  nop
    ctx->pc = 0x28e0a8u;
    // NOP
label_28e0ac:
    // 0x28e0ac: 0x0  nop
    ctx->pc = 0x28e0acu;
    // NOP
label_28e0b0:
    // 0x28e0b0: 0x0  nop
    ctx->pc = 0x28e0b0u;
    // NOP
label_28e0b4:
    // 0x28e0b4: 0x0  nop
    ctx->pc = 0x28e0b4u;
    // NOP
label_28e0b8:
    // 0x28e0b8: 0x0  nop
    ctx->pc = 0x28e0b8u;
    // NOP
label_28e0bc:
    // 0x28e0bc: 0x0  nop
    ctx->pc = 0x28e0bcu;
    // NOP
label_28e0c0:
    // 0x28e0c0: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e0c0u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E0C0 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e0c4:
    // 0x28e0c4: 0x0  nop
    ctx->pc = 0x28e0c4u;
    // NOP
label_28e0c8:
    // 0x28e0c8: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e0c8u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E0C8 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e0cc:
    // 0x28e0cc: 0x0  nop
    ctx->pc = 0x28e0ccu;
    // NOP
label_28e0d0:
    // 0x28e0d0: 0x0  nop
    ctx->pc = 0x28e0d0u;
    // NOP
label_28e0d4:
    // 0x28e0d4: 0x0  nop
    ctx->pc = 0x28e0d4u;
    // NOP
label_28e0d8:
    // 0x28e0d8: 0x0  nop
    ctx->pc = 0x28e0d8u;
    // NOP
label_28e0dc:
    // 0x28e0dc: 0x0  nop
    ctx->pc = 0x28e0dcu;
    // NOP
label_28e0e0:
    // 0x28e0e0: 0x0  nop
    ctx->pc = 0x28e0e0u;
    // NOP
label_28e0e4:
    // 0x28e0e4: 0x0  nop
    ctx->pc = 0x28e0e4u;
    // NOP
label_28e0e8:
    // 0x28e0e8: 0x0  nop
    ctx->pc = 0x28e0e8u;
    // NOP
label_28e0ec:
    // 0x28e0ec: 0x0  nop
    ctx->pc = 0x28e0ecu;
    // NOP
label_28e0f0:
    // 0x28e0f0: 0xf3e1a9f8  scd         $at, -0x5608($ra)
    ctx->pc = 0x28e0f0u;
//     throw std::runtime_error("Unhandled opcode: 0x3C at 0x28E0F0 raw=0xF3E1A9F8");
 /* MITIGATED */
label_28e0f4:
    // 0x28e0f4: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e0f4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e0f8:
    // 0x28e0f8: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e0f8u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E0F8 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e0fc:
    // 0x28e0fc: 0x0  nop
    ctx->pc = 0x28e0fcu;
    // NOP
label_28e100:
    // 0x28e100: 0x0  nop
    ctx->pc = 0x28e100u;
    // NOP
label_28e104:
    // 0x28e104: 0x0  nop
    ctx->pc = 0x28e104u;
    // NOP
label_28e108:
    // 0x28e108: 0x0  nop
    ctx->pc = 0x28e108u;
    // NOP
label_28e10c:
    // 0x28e10c: 0x0  nop
    ctx->pc = 0x28e10cu;
    // NOP
label_28e110:
    // 0x28e110: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e110u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E110 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e114:
    // 0x28e114: 0x0  nop
    ctx->pc = 0x28e114u;
    // NOP
label_28e118:
    // 0x28e118: 0x0  nop
    ctx->pc = 0x28e118u;
    // NOP
label_28e11c:
    // 0x28e11c: 0x0  nop
    ctx->pc = 0x28e11cu;
    // NOP
label_28e120:
    // 0x28e120: 0x0  nop
    ctx->pc = 0x28e120u;
    // NOP
label_28e124:
    // 0x28e124: 0x0  nop
    ctx->pc = 0x28e124u;
    // NOP
label_28e128:
    // 0x28e128: 0x0  nop
    ctx->pc = 0x28e128u;
    // NOP
label_28e12c:
    // 0x28e12c: 0x0  nop
    ctx->pc = 0x28e12cu;
    // NOP
label_28e130:
    // 0x28e130: 0x0  nop
    ctx->pc = 0x28e130u;
    // NOP
label_28e134:
    // 0x28e134: 0x0  nop
    ctx->pc = 0x28e134u;
    // NOP
label_28e138:
    // 0x28e138: 0x0  nop
    ctx->pc = 0x28e138u;
    // NOP
label_28e13c:
    // 0x28e13c: 0x0  nop
    ctx->pc = 0x28e13cu;
    // NOP
label_28e140:
    // 0x28e140: 0x0  nop
    ctx->pc = 0x28e140u;
    // NOP
label_28e144:
    // 0x28e144: 0x0  nop
    ctx->pc = 0x28e144u;
    // NOP
label_28e148:
    // 0x28e148: 0x0  nop
    ctx->pc = 0x28e148u;
    // NOP
label_28e14c:
    // 0x28e14c: 0x0  nop
    ctx->pc = 0x28e14cu;
    // NOP
label_28e150:
    // 0x28e150: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e150u;
    // NOP
label_28e154:
    // 0x28e154: 0x0  nop
    ctx->pc = 0x28e154u;
    // NOP
label_28e158:
    // 0x28e158: 0x0  nop
    ctx->pc = 0x28e158u;
    // NOP
label_28e15c:
    // 0x28e15c: 0x0  nop
    ctx->pc = 0x28e15cu;
    // NOP
label_28e160:
    // 0x28e160: 0x0  nop
    ctx->pc = 0x28e160u;
    // NOP
label_28e164:
    // 0x28e164: 0x0  nop
    ctx->pc = 0x28e164u;
    // NOP
label_28e168:
    // 0x28e168: 0x0  nop
    ctx->pc = 0x28e168u;
    // NOP
label_28e16c:
    // 0x28e16c: 0x0  nop
    ctx->pc = 0x28e16cu;
    // NOP
label_28e170:
    // 0x28e170: 0x0  nop
    ctx->pc = 0x28e170u;
    // NOP
label_28e174:
    // 0x28e174: 0x0  nop
    ctx->pc = 0x28e174u;
    // NOP
label_28e178:
    // 0x28e178: 0x0  nop
    ctx->pc = 0x28e178u;
    // NOP
label_28e17c:
    // 0x28e17c: 0x0  nop
    ctx->pc = 0x28e17cu;
    // NOP
label_28e180:
    // 0x28e180: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e180u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E180 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e184:
    // 0x28e184: 0x0  nop
    ctx->pc = 0x28e184u;
    // NOP
label_28e188:
    // 0x28e188: 0x10  mfhi        $zero
    ctx->pc = 0x28e188u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28e18c:
    // 0x28e18c: 0x0  nop
    ctx->pc = 0x28e18cu;
    // NOP
label_28e190:
    // 0x28e190: 0x0  nop
    ctx->pc = 0x28e190u;
    // NOP
label_28e194:
    // 0x28e194: 0x0  nop
    ctx->pc = 0x28e194u;
    // NOP
label_28e198:
    // 0x28e198: 0x0  nop
    ctx->pc = 0x28e198u;
    // NOP
label_28e19c:
    // 0x28e19c: 0x0  nop
    ctx->pc = 0x28e19cu;
    // NOP
label_28e1a0:
    // 0x28e1a0: 0x0  nop
    ctx->pc = 0x28e1a0u;
    // NOP
label_28e1a4:
    // 0x28e1a4: 0x0  nop
    ctx->pc = 0x28e1a4u;
    // NOP
label_28e1a8:
    // 0x28e1a8: 0x0  nop
    ctx->pc = 0x28e1a8u;
    // NOP
label_28e1ac:
    // 0x28e1ac: 0x0  nop
    ctx->pc = 0x28e1acu;
    // NOP
label_28e1b0:
    // 0x28e1b0: 0x0  nop
    ctx->pc = 0x28e1b0u;
    // NOP
label_28e1b4:
    // 0x28e1b4: 0x0  nop
    ctx->pc = 0x28e1b4u;
    // NOP
label_28e1b8:
    // 0x28e1b8: 0x0  nop
    ctx->pc = 0x28e1b8u;
    // NOP
label_28e1bc:
    // 0x28e1bc: 0x0  nop
    ctx->pc = 0x28e1bcu;
    // NOP
label_28e1c0:
    // 0x28e1c0: 0x0  nop
    ctx->pc = 0x28e1c0u;
    // NOP
label_28e1c4:
    // 0x28e1c4: 0x0  nop
    ctx->pc = 0x28e1c4u;
    // NOP
label_28e1c8:
    // 0x28e1c8: 0x0  nop
    ctx->pc = 0x28e1c8u;
    // NOP
label_28e1cc:
    // 0x28e1cc: 0x0  nop
    ctx->pc = 0x28e1ccu;
    // NOP
label_28e1d0:
    // 0x28e1d0: 0x0  nop
    ctx->pc = 0x28e1d0u;
    // NOP
label_28e1d4:
    // 0x28e1d4: 0x0  nop
    ctx->pc = 0x28e1d4u;
    // NOP
label_28e1d8:
    // 0x28e1d8: 0x0  nop
    ctx->pc = 0x28e1d8u;
    // NOP
label_28e1dc:
    // 0x28e1dc: 0x0  nop
    ctx->pc = 0x28e1dcu;
    // NOP
label_28e1e0:
    // 0x28e1e0: 0x0  nop
    ctx->pc = 0x28e1e0u;
    // NOP
label_28e1e4:
    // 0x28e1e4: 0x0  nop
    ctx->pc = 0x28e1e4u;
    // NOP
label_28e1e8:
    // 0x28e1e8: 0x0  nop
    ctx->pc = 0x28e1e8u;
    // NOP
label_28e1ec:
    // 0x28e1ec: 0x0  nop
    ctx->pc = 0x28e1ecu;
    // NOP
label_28e1f0:
    // 0x28e1f0: 0x0  nop
    ctx->pc = 0x28e1f0u;
    // NOP
label_28e1f4:
    // 0x28e1f4: 0x0  nop
    ctx->pc = 0x28e1f4u;
    // NOP
label_28e1f8:
    // 0x28e1f8: 0x0  nop
    ctx->pc = 0x28e1f8u;
    // NOP
label_28e1fc:
    // 0x28e1fc: 0x0  nop
    ctx->pc = 0x28e1fcu;
    // NOP
label_28e200:
    // 0x28e200: 0x0  nop
    ctx->pc = 0x28e200u;
    // NOP
label_28e204:
    // 0x28e204: 0x0  nop
    ctx->pc = 0x28e204u;
    // NOP
label_28e208:
    // 0x28e208: 0x0  nop
    ctx->pc = 0x28e208u;
    // NOP
label_28e20c:
    // 0x28e20c: 0x0  nop
    ctx->pc = 0x28e20cu;
    // NOP
label_28e210:
    // 0x28e210: 0x0  nop
    ctx->pc = 0x28e210u;
    // NOP
label_28e214:
    // 0x28e214: 0x0  nop
    ctx->pc = 0x28e214u;
    // NOP
label_28e218:
    // 0x28e218: 0x0  nop
    ctx->pc = 0x28e218u;
    // NOP
label_28e21c:
    // 0x28e21c: 0x0  nop
    ctx->pc = 0x28e21cu;
    // NOP
label_28e220:
    // 0x28e220: 0x0  nop
    ctx->pc = 0x28e220u;
    // NOP
label_28e224:
    // 0x28e224: 0x0  nop
    ctx->pc = 0x28e224u;
    // NOP
label_28e228:
    // 0x28e228: 0x0  nop
    ctx->pc = 0x28e228u;
    // NOP
label_28e22c:
    // 0x28e22c: 0x0  nop
    ctx->pc = 0x28e22cu;
    // NOP
label_28e230:
    // 0x28e230: 0x0  nop
    ctx->pc = 0x28e230u;
    // NOP
label_28e234:
    // 0x28e234: 0x0  nop
    ctx->pc = 0x28e234u;
    // NOP
label_28e238:
    // 0x28e238: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e238u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E238 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e23c:
    // 0x28e23c: 0x0  nop
    ctx->pc = 0x28e23cu;
    // NOP
label_28e240:
    // 0x28e240: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e240u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E240 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e244:
    // 0x28e244: 0x0  nop
    ctx->pc = 0x28e244u;
    // NOP
label_28e248:
    // 0x28e248: 0x0  nop
    ctx->pc = 0x28e248u;
    // NOP
label_28e24c:
    // 0x28e24c: 0x0  nop
    ctx->pc = 0x28e24cu;
    // NOP
label_28e250:
    // 0x28e250: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e250u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E250 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e254:
    // 0x28e254: 0x0  nop
    ctx->pc = 0x28e254u;
    // NOP
label_28e258:
    // 0x28e258: 0x0  nop
    ctx->pc = 0x28e258u;
    // NOP
label_28e25c:
    // 0x28e25c: 0x0  nop
    ctx->pc = 0x28e25cu;
    // NOP
label_28e260:
    // 0x28e260: 0x0  nop
    ctx->pc = 0x28e260u;
    // NOP
label_28e264:
    // 0x28e264: 0x0  nop
    ctx->pc = 0x28e264u;
    // NOP
label_28e268:
    // 0x28e268: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e268u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E268 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e26c:
    // 0x28e26c: 0x0  nop
    ctx->pc = 0x28e26cu;
    // NOP
label_28e270:
    // 0x28e270: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x28e270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_28e274:
    // 0x28e274: 0x0  nop
    ctx->pc = 0x28e274u;
    // NOP
label_28e278:
    // 0x28e278: 0x0  nop
    ctx->pc = 0x28e278u;
    // NOP
label_28e27c:
    // 0x28e27c: 0x0  nop
    ctx->pc = 0x28e27cu;
    // NOP
label_28e280:
    // 0x28e280: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e280u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E280 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e284:
    // 0x28e284: 0x0  nop
    ctx->pc = 0x28e284u;
    // NOP
label_28e288:
    // 0x28e288: 0x0  nop
    ctx->pc = 0x28e288u;
    // NOP
label_28e28c:
    // 0x28e28c: 0x0  nop
    ctx->pc = 0x28e28cu;
    // NOP
label_28e290:
    // 0x28e290: 0x0  nop
    ctx->pc = 0x28e290u;
    // NOP
label_28e294:
    // 0x28e294: 0x0  nop
    ctx->pc = 0x28e294u;
    // NOP
label_28e298:
    // 0x28e298: 0x0  nop
    ctx->pc = 0x28e298u;
    // NOP
label_28e29c:
    // 0x28e29c: 0x0  nop
    ctx->pc = 0x28e29cu;
    // NOP
label_28e2a0:
    // 0x28e2a0: 0x0  nop
    ctx->pc = 0x28e2a0u;
    // NOP
label_28e2a4:
    // 0x28e2a4: 0x0  nop
    ctx->pc = 0x28e2a4u;
    // NOP
label_28e2a8:
    // 0x28e2a8: 0x0  nop
    ctx->pc = 0x28e2a8u;
    // NOP
label_28e2ac:
    // 0x28e2ac: 0x0  nop
    ctx->pc = 0x28e2acu;
    // NOP
label_28e2b0:
    // 0x28e2b0: 0x0  nop
    ctx->pc = 0x28e2b0u;
    // NOP
label_28e2b4:
    // 0x28e2b4: 0x0  nop
    ctx->pc = 0x28e2b4u;
    // NOP
label_28e2b8:
    // 0x28e2b8: 0x0  nop
    ctx->pc = 0x28e2b8u;
    // NOP
label_28e2bc:
    // 0x28e2bc: 0x0  nop
    ctx->pc = 0x28e2bcu;
    // NOP
    ctx->pc = 0x28e2c0u;
    return;
}
