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


void FUN_0019b6a8_part366(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24da38u: goto label_24da38;
        case 0x24da3cu: goto label_24da3c;
        case 0x24da40u: goto label_24da40;
        case 0x24da44u: goto label_24da44;
        case 0x24da48u: goto label_24da48;
        case 0x24da4cu: goto label_24da4c;
        case 0x24da50u: goto label_24da50;
        case 0x24da54u: goto label_24da54;
        case 0x24da58u: goto label_24da58;
        case 0x24da5cu: goto label_24da5c;
        case 0x24da60u: goto label_24da60;
        case 0x24da64u: goto label_24da64;
        case 0x24da68u: goto label_24da68;
        case 0x24da6cu: goto label_24da6c;
        case 0x24da70u: goto label_24da70;
        case 0x24da74u: goto label_24da74;
        case 0x24da78u: goto label_24da78;
        case 0x24da7cu: goto label_24da7c;
        case 0x24da80u: goto label_24da80;
        case 0x24da84u: goto label_24da84;
        case 0x24da88u: goto label_24da88;
        case 0x24da8cu: goto label_24da8c;
        case 0x24da90u: goto label_24da90;
        case 0x24da94u: goto label_24da94;
        case 0x24da98u: goto label_24da98;
        case 0x24da9cu: goto label_24da9c;
        case 0x24daa0u: goto label_24daa0;
        case 0x24daa4u: goto label_24daa4;
        case 0x24daa8u: goto label_24daa8;
        case 0x24daacu: goto label_24daac;
        case 0x24dab0u: goto label_24dab0;
        case 0x24dab4u: goto label_24dab4;
        case 0x24dab8u: goto label_24dab8;
        case 0x24dabcu: goto label_24dabc;
        case 0x24dac0u: goto label_24dac0;
        case 0x24dac4u: goto label_24dac4;
        case 0x24dac8u: goto label_24dac8;
        case 0x24daccu: goto label_24dacc;
        case 0x24dad0u: goto label_24dad0;
        case 0x24dad4u: goto label_24dad4;
        case 0x24dad8u: goto label_24dad8;
        case 0x24dadcu: goto label_24dadc;
        case 0x24dae0u: goto label_24dae0;
        case 0x24dae4u: goto label_24dae4;
        case 0x24dae8u: goto label_24dae8;
        case 0x24daecu: goto label_24daec;
        case 0x24daf0u: goto label_24daf0;
        case 0x24daf4u: goto label_24daf4;
        case 0x24daf8u: goto label_24daf8;
        case 0x24dafcu: goto label_24dafc;
        case 0x24db00u: goto label_24db00;
        case 0x24db04u: goto label_24db04;
        case 0x24db08u: goto label_24db08;
        case 0x24db0cu: goto label_24db0c;
        case 0x24db10u: goto label_24db10;
        case 0x24db14u: goto label_24db14;
        case 0x24db18u: goto label_24db18;
        case 0x24db1cu: goto label_24db1c;
        case 0x24db20u: goto label_24db20;
        case 0x24db24u: goto label_24db24;
        case 0x24db28u: goto label_24db28;
        case 0x24db2cu: goto label_24db2c;
        case 0x24db30u: goto label_24db30;
        case 0x24db34u: goto label_24db34;
        case 0x24db38u: goto label_24db38;
        case 0x24db3cu: goto label_24db3c;
        case 0x24db40u: goto label_24db40;
        case 0x24db44u: goto label_24db44;
        case 0x24db48u: goto label_24db48;
        case 0x24db4cu: goto label_24db4c;
        case 0x24db50u: goto label_24db50;
        case 0x24db54u: goto label_24db54;
        case 0x24db58u: goto label_24db58;
        case 0x24db5cu: goto label_24db5c;
        case 0x24db60u: goto label_24db60;
        case 0x24db64u: goto label_24db64;
        case 0x24db68u: goto label_24db68;
        case 0x24db6cu: goto label_24db6c;
        case 0x24db70u: goto label_24db70;
        case 0x24db74u: goto label_24db74;
        case 0x24db78u: goto label_24db78;
        case 0x24db7cu: goto label_24db7c;
        case 0x24db80u: goto label_24db80;
        case 0x24db84u: goto label_24db84;
        case 0x24db88u: goto label_24db88;
        case 0x24db8cu: goto label_24db8c;
        case 0x24db90u: goto label_24db90;
        case 0x24db94u: goto label_24db94;
        case 0x24db98u: goto label_24db98;
        case 0x24db9cu: goto label_24db9c;
        case 0x24dba0u: goto label_24dba0;
        case 0x24dba4u: goto label_24dba4;
        case 0x24dba8u: goto label_24dba8;
        case 0x24dbacu: goto label_24dbac;
        case 0x24dbb0u: goto label_24dbb0;
        case 0x24dbb4u: goto label_24dbb4;
        case 0x24dbb8u: goto label_24dbb8;
        case 0x24dbbcu: goto label_24dbbc;
        case 0x24dbc0u: goto label_24dbc0;
        case 0x24dbc4u: goto label_24dbc4;
        case 0x24dbc8u: goto label_24dbc8;
        case 0x24dbccu: goto label_24dbcc;
        case 0x24dbd0u: goto label_24dbd0;
        case 0x24dbd4u: goto label_24dbd4;
        case 0x24dbd8u: goto label_24dbd8;
        case 0x24dbdcu: goto label_24dbdc;
        case 0x24dbe0u: goto label_24dbe0;
        case 0x24dbe4u: goto label_24dbe4;
        case 0x24dbe8u: goto label_24dbe8;
        case 0x24dbecu: goto label_24dbec;
        case 0x24dbf0u: goto label_24dbf0;
        case 0x24dbf4u: goto label_24dbf4;
        case 0x24dbf8u: goto label_24dbf8;
        case 0x24dbfcu: goto label_24dbfc;
        case 0x24dc00u: goto label_24dc00;
        case 0x24dc04u: goto label_24dc04;
        case 0x24dc08u: goto label_24dc08;
        case 0x24dc0cu: goto label_24dc0c;
        case 0x24dc10u: goto label_24dc10;
        case 0x24dc14u: goto label_24dc14;
        case 0x24dc18u: goto label_24dc18;
        case 0x24dc1cu: goto label_24dc1c;
        case 0x24dc20u: goto label_24dc20;
        case 0x24dc24u: goto label_24dc24;
        case 0x24dc28u: goto label_24dc28;
        case 0x24dc2cu: goto label_24dc2c;
        case 0x24dc30u: goto label_24dc30;
        case 0x24dc34u: goto label_24dc34;
        case 0x24dc38u: goto label_24dc38;
        case 0x24dc3cu: goto label_24dc3c;
        case 0x24dc40u: goto label_24dc40;
        case 0x24dc44u: goto label_24dc44;
        case 0x24dc48u: goto label_24dc48;
        case 0x24dc4cu: goto label_24dc4c;
        case 0x24dc50u: goto label_24dc50;
        case 0x24dc54u: goto label_24dc54;
        case 0x24dc58u: goto label_24dc58;
        case 0x24dc5cu: goto label_24dc5c;
        case 0x24dc60u: goto label_24dc60;
        case 0x24dc64u: goto label_24dc64;
        case 0x24dc68u: goto label_24dc68;
        case 0x24dc6cu: goto label_24dc6c;
        case 0x24dc70u: goto label_24dc70;
        case 0x24dc74u: goto label_24dc74;
        case 0x24dc78u: goto label_24dc78;
        case 0x24dc7cu: goto label_24dc7c;
        case 0x24dc80u: goto label_24dc80;
        case 0x24dc84u: goto label_24dc84;
        case 0x24dc88u: goto label_24dc88;
        case 0x24dc8cu: goto label_24dc8c;
        case 0x24dc90u: goto label_24dc90;
        case 0x24dc94u: goto label_24dc94;
        case 0x24dc98u: goto label_24dc98;
        case 0x24dc9cu: goto label_24dc9c;
        case 0x24dca0u: goto label_24dca0;
        case 0x24dca4u: goto label_24dca4;
        case 0x24dca8u: goto label_24dca8;
        case 0x24dcacu: goto label_24dcac;
        case 0x24dcb0u: goto label_24dcb0;
        case 0x24dcb4u: goto label_24dcb4;
        case 0x24dcb8u: goto label_24dcb8;
        case 0x24dcbcu: goto label_24dcbc;
        case 0x24dcc0u: goto label_24dcc0;
        case 0x24dcc4u: goto label_24dcc4;
        case 0x24dcc8u: goto label_24dcc8;
        case 0x24dcccu: goto label_24dccc;
        case 0x24dcd0u: goto label_24dcd0;
        case 0x24dcd4u: goto label_24dcd4;
        case 0x24dcd8u: goto label_24dcd8;
        case 0x24dcdcu: goto label_24dcdc;
        case 0x24dce0u: goto label_24dce0;
        case 0x24dce4u: goto label_24dce4;
        case 0x24dce8u: goto label_24dce8;
        case 0x24dcecu: goto label_24dcec;
        case 0x24dcf0u: goto label_24dcf0;
        case 0x24dcf4u: goto label_24dcf4;
        case 0x24dcf8u: goto label_24dcf8;
        case 0x24dcfcu: goto label_24dcfc;
        case 0x24dd00u: goto label_24dd00;
        case 0x24dd04u: goto label_24dd04;
        case 0x24dd08u: goto label_24dd08;
        case 0x24dd0cu: goto label_24dd0c;
        case 0x24dd10u: goto label_24dd10;
        case 0x24dd14u: goto label_24dd14;
        case 0x24dd18u: goto label_24dd18;
        case 0x24dd1cu: goto label_24dd1c;
        case 0x24dd20u: goto label_24dd20;
        case 0x24dd24u: goto label_24dd24;
        case 0x24dd28u: goto label_24dd28;
        case 0x24dd2cu: goto label_24dd2c;
        case 0x24dd30u: goto label_24dd30;
        case 0x24dd34u: goto label_24dd34;
        case 0x24dd38u: goto label_24dd38;
        case 0x24dd3cu: goto label_24dd3c;
        case 0x24dd40u: goto label_24dd40;
        case 0x24dd44u: goto label_24dd44;
        case 0x24dd48u: goto label_24dd48;
        case 0x24dd4cu: goto label_24dd4c;
        case 0x24dd50u: goto label_24dd50;
        case 0x24dd54u: goto label_24dd54;
        case 0x24dd58u: goto label_24dd58;
        case 0x24dd5cu: goto label_24dd5c;
        case 0x24dd60u: goto label_24dd60;
        case 0x24dd64u: goto label_24dd64;
        case 0x24dd68u: goto label_24dd68;
        case 0x24dd6cu: goto label_24dd6c;
        case 0x24dd70u: goto label_24dd70;
        case 0x24dd74u: goto label_24dd74;
        case 0x24dd78u: goto label_24dd78;
        case 0x24dd7cu: goto label_24dd7c;
        case 0x24dd80u: goto label_24dd80;
        case 0x24dd84u: goto label_24dd84;
        case 0x24dd88u: goto label_24dd88;
        case 0x24dd8cu: goto label_24dd8c;
        case 0x24dd90u: goto label_24dd90;
        case 0x24dd94u: goto label_24dd94;
        case 0x24dd98u: goto label_24dd98;
        case 0x24dd9cu: goto label_24dd9c;
        case 0x24dda0u: goto label_24dda0;
        case 0x24dda4u: goto label_24dda4;
        case 0x24dda8u: goto label_24dda8;
        case 0x24ddacu: goto label_24ddac;
        case 0x24ddb0u: goto label_24ddb0;
        case 0x24ddb4u: goto label_24ddb4;
        case 0x24ddb8u: goto label_24ddb8;
        case 0x24ddbcu: goto label_24ddbc;
        case 0x24ddc0u: goto label_24ddc0;
        case 0x24ddc4u: goto label_24ddc4;
        case 0x24ddc8u: goto label_24ddc8;
        case 0x24ddccu: goto label_24ddcc;
        case 0x24ddd0u: goto label_24ddd0;
        case 0x24ddd4u: goto label_24ddd4;
        case 0x24ddd8u: goto label_24ddd8;
        case 0x24dddcu: goto label_24dddc;
        case 0x24dde0u: goto label_24dde0;
        case 0x24dde4u: goto label_24dde4;
        case 0x24dde8u: goto label_24dde8;
        case 0x24ddecu: goto label_24ddec;
        case 0x24ddf0u: goto label_24ddf0;
        case 0x24ddf4u: goto label_24ddf4;
        case 0x24ddf8u: goto label_24ddf8;
        case 0x24ddfcu: goto label_24ddfc;
        case 0x24de00u: goto label_24de00;
        case 0x24de04u: goto label_24de04;
        case 0x24de08u: goto label_24de08;
        case 0x24de0cu: goto label_24de0c;
        case 0x24de10u: goto label_24de10;
        case 0x24de14u: goto label_24de14;
        case 0x24de18u: goto label_24de18;
        case 0x24de1cu: goto label_24de1c;
        case 0x24de20u: goto label_24de20;
        case 0x24de24u: goto label_24de24;
        case 0x24de28u: goto label_24de28;
        case 0x24de2cu: goto label_24de2c;
        case 0x24de30u: goto label_24de30;
        case 0x24de34u: goto label_24de34;
        case 0x24de38u: goto label_24de38;
        case 0x24de3cu: goto label_24de3c;
        case 0x24de40u: goto label_24de40;
        case 0x24de44u: goto label_24de44;
        case 0x24de48u: goto label_24de48;
        case 0x24de4cu: goto label_24de4c;
        case 0x24de50u: goto label_24de50;
        case 0x24de54u: goto label_24de54;
        case 0x24de58u: goto label_24de58;
        case 0x24de5cu: goto label_24de5c;
        case 0x24de60u: goto label_24de60;
        case 0x24de64u: goto label_24de64;
        case 0x24de68u: goto label_24de68;
        case 0x24de6cu: goto label_24de6c;
        case 0x24de70u: goto label_24de70;
        case 0x24de74u: goto label_24de74;
        case 0x24de78u: goto label_24de78;
        case 0x24de7cu: goto label_24de7c;
        case 0x24de80u: goto label_24de80;
        case 0x24de84u: goto label_24de84;
        case 0x24de88u: goto label_24de88;
        case 0x24de8cu: goto label_24de8c;
        case 0x24de90u: goto label_24de90;
        case 0x24de94u: goto label_24de94;
        case 0x24de98u: goto label_24de98;
        case 0x24de9cu: goto label_24de9c;
        case 0x24dea0u: goto label_24dea0;
        case 0x24dea4u: goto label_24dea4;
        case 0x24dea8u: goto label_24dea8;
        case 0x24deacu: goto label_24deac;
        case 0x24deb0u: goto label_24deb0;
        case 0x24deb4u: goto label_24deb4;
        case 0x24deb8u: goto label_24deb8;
        case 0x24debcu: goto label_24debc;
        case 0x24dec0u: goto label_24dec0;
        case 0x24dec4u: goto label_24dec4;
        case 0x24dec8u: goto label_24dec8;
        case 0x24deccu: goto label_24decc;
        case 0x24ded0u: goto label_24ded0;
        case 0x24ded4u: goto label_24ded4;
        case 0x24ded8u: goto label_24ded8;
        case 0x24dedcu: goto label_24dedc;
        case 0x24dee0u: goto label_24dee0;
        case 0x24dee4u: goto label_24dee4;
        case 0x24dee8u: goto label_24dee8;
        case 0x24deecu: goto label_24deec;
        case 0x24def0u: goto label_24def0;
        case 0x24def4u: goto label_24def4;
        case 0x24def8u: goto label_24def8;
        case 0x24defcu: goto label_24defc;
        case 0x24df00u: goto label_24df00;
        case 0x24df04u: goto label_24df04;
        case 0x24df08u: goto label_24df08;
        case 0x24df0cu: goto label_24df0c;
        case 0x24df10u: goto label_24df10;
        case 0x24df14u: goto label_24df14;
        case 0x24df18u: goto label_24df18;
        case 0x24df1cu: goto label_24df1c;
        case 0x24df20u: goto label_24df20;
        case 0x24df24u: goto label_24df24;
        case 0x24df28u: goto label_24df28;
        case 0x24df2cu: goto label_24df2c;
        case 0x24df30u: goto label_24df30;
        case 0x24df34u: goto label_24df34;
        case 0x24df38u: goto label_24df38;
        case 0x24df3cu: goto label_24df3c;
        case 0x24df40u: goto label_24df40;
        case 0x24df44u: goto label_24df44;
        case 0x24df48u: goto label_24df48;
        case 0x24df4cu: goto label_24df4c;
        case 0x24df50u: goto label_24df50;
        case 0x24df54u: goto label_24df54;
        case 0x24df58u: goto label_24df58;
        case 0x24df5cu: goto label_24df5c;
        case 0x24df60u: goto label_24df60;
        case 0x24df64u: goto label_24df64;
        case 0x24df68u: goto label_24df68;
        case 0x24df6cu: goto label_24df6c;
        case 0x24df70u: goto label_24df70;
        case 0x24df74u: goto label_24df74;
        case 0x24df78u: goto label_24df78;
        case 0x24df7cu: goto label_24df7c;
        case 0x24df80u: goto label_24df80;
        case 0x24df84u: goto label_24df84;
        case 0x24df88u: goto label_24df88;
        case 0x24df8cu: goto label_24df8c;
        case 0x24df90u: goto label_24df90;
        case 0x24df94u: goto label_24df94;
        case 0x24df98u: goto label_24df98;
        case 0x24df9cu: goto label_24df9c;
        case 0x24dfa0u: goto label_24dfa0;
        case 0x24dfa4u: goto label_24dfa4;
        case 0x24dfa8u: goto label_24dfa8;
        case 0x24dfacu: goto label_24dfac;
        case 0x24dfb0u: goto label_24dfb0;
        case 0x24dfb4u: goto label_24dfb4;
        case 0x24dfb8u: goto label_24dfb8;
        case 0x24dfbcu: goto label_24dfbc;
        case 0x24dfc0u: goto label_24dfc0;
        case 0x24dfc4u: goto label_24dfc4;
        case 0x24dfc8u: goto label_24dfc8;
        case 0x24dfccu: goto label_24dfcc;
        case 0x24dfd0u: goto label_24dfd0;
        case 0x24dfd4u: goto label_24dfd4;
        case 0x24dfd8u: goto label_24dfd8;
        case 0x24dfdcu: goto label_24dfdc;
        case 0x24dfe0u: goto label_24dfe0;
        case 0x24dfe4u: goto label_24dfe4;
        case 0x24dfe8u: goto label_24dfe8;
        case 0x24dfecu: goto label_24dfec;
        case 0x24dff0u: goto label_24dff0;
        case 0x24dff4u: goto label_24dff4;
        case 0x24dff8u: goto label_24dff8;
        case 0x24dffcu: goto label_24dffc;
        case 0x24e000u: goto label_24e000;
        case 0x24e004u: goto label_24e004;
        case 0x24e008u: goto label_24e008;
        case 0x24e00cu: goto label_24e00c;
        case 0x24e010u: goto label_24e010;
        case 0x24e014u: goto label_24e014;
        case 0x24e018u: goto label_24e018;
        case 0x24e01cu: goto label_24e01c;
        case 0x24e020u: goto label_24e020;
        case 0x24e024u: goto label_24e024;
        case 0x24e028u: goto label_24e028;
        case 0x24e02cu: goto label_24e02c;
        case 0x24e030u: goto label_24e030;
        case 0x24e034u: goto label_24e034;
        case 0x24e038u: goto label_24e038;
        case 0x24e03cu: goto label_24e03c;
        case 0x24e040u: goto label_24e040;
        case 0x24e044u: goto label_24e044;
        case 0x24e048u: goto label_24e048;
        case 0x24e04cu: goto label_24e04c;
        case 0x24e050u: goto label_24e050;
        case 0x24e054u: goto label_24e054;
        case 0x24e058u: goto label_24e058;
        case 0x24e05cu: goto label_24e05c;
        case 0x24e060u: goto label_24e060;
        case 0x24e064u: goto label_24e064;
        case 0x24e068u: goto label_24e068;
        case 0x24e06cu: goto label_24e06c;
        case 0x24e070u: goto label_24e070;
        case 0x24e074u: goto label_24e074;
        case 0x24e078u: goto label_24e078;
        case 0x24e07cu: goto label_24e07c;
        case 0x24e080u: goto label_24e080;
        case 0x24e084u: goto label_24e084;
        case 0x24e088u: goto label_24e088;
        case 0x24e08cu: goto label_24e08c;
        case 0x24e090u: goto label_24e090;
        case 0x24e094u: goto label_24e094;
        case 0x24e098u: goto label_24e098;
        case 0x24e09cu: goto label_24e09c;
        case 0x24e0a0u: goto label_24e0a0;
        case 0x24e0a4u: goto label_24e0a4;
        case 0x24e0a8u: goto label_24e0a8;
        case 0x24e0acu: goto label_24e0ac;
        case 0x24e0b0u: goto label_24e0b0;
        case 0x24e0b4u: goto label_24e0b4;
        case 0x24e0b8u: goto label_24e0b8;
        case 0x24e0bcu: goto label_24e0bc;
        case 0x24e0c0u: goto label_24e0c0;
        case 0x24e0c4u: goto label_24e0c4;
        case 0x24e0c8u: goto label_24e0c8;
        case 0x24e0ccu: goto label_24e0cc;
        case 0x24e0d0u: goto label_24e0d0;
        case 0x24e0d4u: goto label_24e0d4;
        case 0x24e0d8u: goto label_24e0d8;
        case 0x24e0dcu: goto label_24e0dc;
        case 0x24e0e0u: goto label_24e0e0;
        case 0x24e0e4u: goto label_24e0e4;
        case 0x24e0e8u: goto label_24e0e8;
        case 0x24e0ecu: goto label_24e0ec;
        case 0x24e0f0u: goto label_24e0f0;
        case 0x24e0f4u: goto label_24e0f4;
        case 0x24e0f8u: goto label_24e0f8;
        case 0x24e0fcu: goto label_24e0fc;
        case 0x24e100u: goto label_24e100;
        case 0x24e104u: goto label_24e104;
        case 0x24e108u: goto label_24e108;
        case 0x24e10cu: goto label_24e10c;
        case 0x24e110u: goto label_24e110;
        case 0x24e114u: goto label_24e114;
        case 0x24e118u: goto label_24e118;
        case 0x24e11cu: goto label_24e11c;
        case 0x24e120u: goto label_24e120;
        case 0x24e124u: goto label_24e124;
        case 0x24e128u: goto label_24e128;
        case 0x24e12cu: goto label_24e12c;
        case 0x24e130u: goto label_24e130;
        case 0x24e134u: goto label_24e134;
        case 0x24e138u: goto label_24e138;
        case 0x24e13cu: goto label_24e13c;
        case 0x24e140u: goto label_24e140;
        case 0x24e144u: goto label_24e144;
        case 0x24e148u: goto label_24e148;
        case 0x24e14cu: goto label_24e14c;
        case 0x24e150u: goto label_24e150;
        case 0x24e154u: goto label_24e154;
        case 0x24e158u: goto label_24e158;
        case 0x24e15cu: goto label_24e15c;
        case 0x24e160u: goto label_24e160;
        case 0x24e164u: goto label_24e164;
        case 0x24e168u: goto label_24e168;
        case 0x24e16cu: goto label_24e16c;
        case 0x24e170u: goto label_24e170;
        case 0x24e174u: goto label_24e174;
        case 0x24e178u: goto label_24e178;
        case 0x24e17cu: goto label_24e17c;
        case 0x24e180u: goto label_24e180;
        case 0x24e184u: goto label_24e184;
        case 0x24e188u: goto label_24e188;
        case 0x24e18cu: goto label_24e18c;
        case 0x24e190u: goto label_24e190;
        case 0x24e194u: goto label_24e194;
        case 0x24e198u: goto label_24e198;
        case 0x24e19cu: goto label_24e19c;
        case 0x24e1a0u: goto label_24e1a0;
        case 0x24e1a4u: goto label_24e1a4;
        case 0x24e1a8u: goto label_24e1a8;
        case 0x24e1acu: goto label_24e1ac;
        case 0x24e1b0u: goto label_24e1b0;
        case 0x24e1b4u: goto label_24e1b4;
        case 0x24e1b8u: goto label_24e1b8;
        case 0x24e1bcu: goto label_24e1bc;
        case 0x24e1c0u: goto label_24e1c0;
        case 0x24e1c4u: goto label_24e1c4;
        case 0x24e1c8u: goto label_24e1c8;
        case 0x24e1ccu: goto label_24e1cc;
        case 0x24e1d0u: goto label_24e1d0;
        case 0x24e1d4u: goto label_24e1d4;
        case 0x24e1d8u: goto label_24e1d8;
        case 0x24e1dcu: goto label_24e1dc;
        case 0x24e1e0u: goto label_24e1e0;
        case 0x24e1e4u: goto label_24e1e4;
        case 0x24e1e8u: goto label_24e1e8;
        case 0x24e1ecu: goto label_24e1ec;
        case 0x24e1f0u: goto label_24e1f0;
        case 0x24e1f4u: goto label_24e1f4;
        case 0x24e1f8u: goto label_24e1f8;
        case 0x24e1fcu: goto label_24e1fc;
        case 0x24e200u: goto label_24e200;
        case 0x24e204u: goto label_24e204;
        default: return;
    }

label_24da38:
    // 0x24da38: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24da38u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DA38 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da3c:
    // 0x24da3c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24da3cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DA3C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da40:
    // 0x24da40: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24da40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da44:
    // 0x24da44: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24da44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da48:
    // 0x24da48: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24da48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da4c:
    // 0x24da4c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da4cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DA4C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da50:
    // 0x24da50: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24da50u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DA50 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da54:
    // 0x24da54: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24da54u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DA54 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da58:
    // 0x24da58: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24da58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da5c:
    // 0x24da5c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24da5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da60:
    // 0x24da60: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24da60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da64:
    // 0x24da64: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da64u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DA64 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da68:
    // 0x24da68: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24da68u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DA68 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da6c:
    // 0x24da6c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da6cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24DA6C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da70:
    // 0x24da70: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24da70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da74:
    // 0x24da74: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24da74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da78:
    // 0x24da78: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24da78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da7c:
    // 0x24da7c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DA7C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da80:
    // 0x24da80: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24DA80 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da84:
    // 0x24da84: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24DA84 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da88:
    // 0x24da88: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24da88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da8c:
    // 0x24da8c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24da8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da90:
    // 0x24da90: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24da90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da94:
    // 0x24da94: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24DA94 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da98:
    // 0x24da98: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24DA98 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da9c:
    // 0x24da9c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24DA9C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24daa0:
    // 0x24daa0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24daa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24daa4:
    // 0x24daa4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24daa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24daa8:
    // 0x24daa8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24daa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24daac:
    // 0x24daac: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24daacu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DAAC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dab0:
    // 0x24dab0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dab0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DAB0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dab4:
    // 0x24dab4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dab4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24DAB4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dab8:
    // 0x24dab8: 0x42ca28f6  .word       0x42CA28F6                   # INVALID     $s6, $t2, 0x28F6 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dab8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24DAB8 raw=0x42CA28F6"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dabc:
    // 0x24dabc: 0x260009  .word       0x00260009                   # jalr        $zero, $at # 00060000 <InstrIdType: CPU_SPECIAL>
label_24dac0:
    if (ctx->pc == 0x24DAC0u) {
        ctx->pc = 0x24DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DABCu;
        // 0x24dac0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DAC4u;
        goto label_24dac4;
    }
    ctx->pc = 0x24DABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DABCu;
        // 0x24dac0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DABCu, 0x24DAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DAC4u;
label_24dac4:
    // 0x24dac4: 0xce00ce  .word       0x00CE00CE                   # INVALID     $a2, $t6, 0xCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dac4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24DAC4 raw=0x00CE00CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dac8:
    // 0x24dac8: 0x84c0065  j           func_1300194
label_24dacc:
    if (ctx->pc == 0x24DACCu) {
        ctx->pc = 0x24DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAC8u;
        // 0x24dacc: 0x8790132  j           func_1E404C8 (Delay Slot)
        // J 0x1E404C8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DAD0u;
        goto label_24dad0;
    }
    ctx->pc = 0x24DAC8u;
    ctx->pc = 0x24DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DAC8u;
    // 0x24dacc: 0x8790132  j           func_1E404C8 (Delay Slot)
    // J 0x1E404C8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1300194u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1300194u, 0x24DAC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24DAD0u;
label_24dad0:
    // 0x24dad0: 0x21b021a  .word       0x021B021A                   # div         $zero, $s0, $k1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dad0u;
    { int32_t divisor = GPR_S32(ctx, 27);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24dad4:
    // 0x24dad4: 0x18d0164  .word       0x018D0164                   # and         $zero, $t4, $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dad4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 12) & GPR_U64(ctx, 13));
label_24dad8:
    // 0x24dad8: 0x4b00cf  .word       0x004B00CF                   # sync # 004B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dad8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_24dadc:
    // 0x24dadc: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x24dadcu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24dae0:
    // 0x24dae0: 0x0  nop
    ctx->pc = 0x24dae0u;
    // NOP
label_24dae4:
    // 0x24dae4: 0x0  nop
    ctx->pc = 0x24dae4u;
    // NOP
label_24dae8:
    // 0x24dae8: 0x0  nop
    ctx->pc = 0x24dae8u;
    // NOP
label_24daec:
    // 0x24daec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24daecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24daf0:
    // 0x24daf0: 0x0  nop
    ctx->pc = 0x24daf0u;
    // NOP
label_24daf4:
    // 0x24daf4: 0x0  nop
    ctx->pc = 0x24daf4u;
    // NOP
label_24daf8:
    // 0x24daf8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24daf8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24dafc:
    // 0x24dafc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dafcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DAFC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db00:
    // 0x24db00: 0x0  nop
    ctx->pc = 0x24db00u;
    // NOP
label_24db04:
    // 0x24db04: 0x0  nop
    ctx->pc = 0x24db04u;
    // NOP
label_24db08:
    // 0x24db08: 0x0  nop
    ctx->pc = 0x24db08u;
    // NOP
label_24db0c:
    // 0x24db0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24db0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24db10:
    // 0x24db10: 0x0  nop
    ctx->pc = 0x24db10u;
    // NOP
label_24db14:
    // 0x24db14: 0x0  nop
    ctx->pc = 0x24db14u;
    // NOP
label_24db18:
    // 0x24db18: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24db18u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24db1c:
    // 0x24db1c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DB1C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db20:
    // 0x24db20: 0x0  nop
    ctx->pc = 0x24db20u;
    // NOP
label_24db24:
    // 0x24db24: 0x0  nop
    ctx->pc = 0x24db24u;
    // NOP
label_24db28:
    // 0x24db28: 0x0  nop
    ctx->pc = 0x24db28u;
    // NOP
label_24db2c:
    // 0x24db2c: 0x0  nop
    ctx->pc = 0x24db2cu;
    // NOP
label_24db30:
    // 0x24db30: 0x0  nop
    ctx->pc = 0x24db30u;
    // NOP
label_24db34:
    // 0x24db34: 0x0  nop
    ctx->pc = 0x24db34u;
    // NOP
label_24db38:
    // 0x24db38: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24db38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db3c:
    // 0x24db3c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24db3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db40:
    // 0x24db40: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24db40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db44:
    // 0x24db44: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DB44 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db48:
    // 0x24db48: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24db48u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DB48 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db4c:
    // 0x24db4c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24db4cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DB4C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db50:
    // 0x24db50: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24db50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db54:
    // 0x24db54: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24db54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db58:
    // 0x24db58: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24db58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db5c:
    // 0x24db5c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DB5C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db60:
    // 0x24db60: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24db60u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DB60 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db64:
    // 0x24db64: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24db64u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DB64 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db68:
    // 0x24db68: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24db68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db6c:
    // 0x24db6c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24db6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db70:
    // 0x24db70: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24db70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db74:
    // 0x24db74: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db74u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DB74 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db78:
    // 0x24db78: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24db78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DB78 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db7c:
    // 0x24db7c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24DB7C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db80:
    // 0x24db80: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24db80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db84:
    // 0x24db84: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24db84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db88:
    // 0x24db88: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24db88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db8c:
    // 0x24db8c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DB8C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db90:
    // 0x24db90: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db90u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24DB90 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db94:
    // 0x24db94: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24DB94 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db98:
    // 0x24db98: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24db98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db9c:
    // 0x24db9c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24db9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dba0:
    // 0x24dba0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24dba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dba4:
    // 0x24dba4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dba4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24DBA4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dba8:
    // 0x24dba8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dba8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24DBA8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbac:
    // 0x24dbac: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dbacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24DBAC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbb0:
    // 0x24dbb0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24dbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dbb4:
    // 0x24dbb4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dbb8:
    // 0x24dbb8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24dbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dbbc:
    // 0x24dbbc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dbbcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DBBC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbc0:
    // 0x24dbc0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dbc0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DBC0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbc4:
    // 0x24dbc4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dbc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24DBC4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbc8:
    // 0x24dbc8: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dbc8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24DBC8 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbcc:
    // 0x24dbcc: 0x270009  .word       0x00270009                   # jalr        $zero, $at # 00070000 <InstrIdType: CPU_SPECIAL>
label_24dbd0:
    if (ctx->pc == 0x24DBD0u) {
        ctx->pc = 0x24DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBCCu;
        // 0x24dbd0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DBD4u;
        goto label_24dbd4;
    }
    ctx->pc = 0x24DBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBCCu;
        // 0x24dbd0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DBCCu, 0x24DBD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DBD4u;
label_24dbd4:
    // 0x24dbd4: 0xd000d0  .word       0x00D000D0                   # mfhi        $zero # 00D000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dbd4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_24dbd8:
    // 0x24dbd8: 0x84d0066  j           func_1340198
label_24dbdc:
    if (ctx->pc == 0x24DBDCu) {
        ctx->pc = 0x24DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBD8u;
        // 0x24dbdc: 0x87a0133  j           func_1E804CC (Delay Slot)
        // J 0x1E804CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DBE0u;
        goto label_24dbe0;
    }
    ctx->pc = 0x24DBD8u;
    ctx->pc = 0x24DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DBD8u;
    // 0x24dbdc: 0x87a0133  j           func_1E804CC (Delay Slot)
    // J 0x1E804CC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1340198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1340198u, 0x24DBD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24DBE0u;
label_24dbe0:
    // 0x24dbe0: 0x1fa01f9  .word       0x01FA01F9                   # INVALID     $t7, $k0, 0x1F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dbe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24DBE0 raw=0x01FA01F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbe4:
    // 0x24dbe4: 0x18e0165  .word       0x018E0165                   # or          $zero, $t4, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dbe4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
label_24dbe8:
    // 0x24dbe8: 0x4c00d1  .word       0x004C00D1                   # mthi        $v0 # 000C00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dbe8u;
    ctx->hi = GPR_U64(ctx, 2);
label_24dbec:
    // 0x24dbec: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x24dbecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24dbf0:
    // 0x24dbf0: 0x0  nop
    ctx->pc = 0x24dbf0u;
    // NOP
label_24dbf4:
    // 0x24dbf4: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24dbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dbf8:
    // 0x24dbf8: 0x0  nop
    ctx->pc = 0x24dbf8u;
    // NOP
label_24dbfc:
    // 0x24dbfc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24dbfcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24dc00:
    // 0x24dc00: 0x42600000  .word       0x42600000                   # INVALID     $s3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24DC00 raw=0x42600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc04:
    // 0x24dc04: 0x41500000  .word       0x41500000                   # INVALID     $t2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DC04 raw=0x41500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc08:
    // 0x24dc08: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc08u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24DC08 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc0c:
    // 0x24dc0c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc0cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DC0C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc10:
    // 0x24dc10: 0x0  nop
    ctx->pc = 0x24dc10u;
    // NOP
label_24dc14:
    // 0x24dc14: 0x0  nop
    ctx->pc = 0x24dc14u;
    // NOP
label_24dc18:
    // 0x24dc18: 0x0  nop
    ctx->pc = 0x24dc18u;
    // NOP
label_24dc1c:
    // 0x24dc1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24dc1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24dc20:
    // 0x24dc20: 0x0  nop
    ctx->pc = 0x24dc20u;
    // NOP
label_24dc24:
    // 0x24dc24: 0x0  nop
    ctx->pc = 0x24dc24u;
    // NOP
label_24dc28:
    // 0x24dc28: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24dc28u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24dc2c:
    // 0x24dc2c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc2cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DC2C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc30:
    // 0x24dc30: 0x0  nop
    ctx->pc = 0x24dc30u;
    // NOP
label_24dc34:
    // 0x24dc34: 0x0  nop
    ctx->pc = 0x24dc34u;
    // NOP
label_24dc38:
    // 0x24dc38: 0x0  nop
    ctx->pc = 0x24dc38u;
    // NOP
label_24dc3c:
    // 0x24dc3c: 0x0  nop
    ctx->pc = 0x24dc3cu;
    // NOP
label_24dc40:
    // 0x24dc40: 0x0  nop
    ctx->pc = 0x24dc40u;
    // NOP
label_24dc44:
    // 0x24dc44: 0x0  nop
    ctx->pc = 0x24dc44u;
    // NOP
label_24dc48:
    // 0x24dc48: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc4c:
    // 0x24dc4c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24dc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc50:
    // 0x24dc50: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24dc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc54:
    // 0x24dc54: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DC54 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc58:
    // 0x24dc58: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dc58u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DC58 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc5c:
    // 0x24dc5c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dc5cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DC5C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc60:
    // 0x24dc60: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dc60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc64:
    // 0x24dc64: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24dc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc68:
    // 0x24dc68: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24dc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc6c:
    // 0x24dc6c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc6cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DC6C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc70:
    // 0x24dc70: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dc70u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DC70 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc74:
    // 0x24dc74: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dc74u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DC74 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc78:
    // 0x24dc78: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24dc78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc7c:
    // 0x24dc7c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24dc7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc80:
    // 0x24dc80: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24dc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc84:
    // 0x24dc84: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DC84 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc88:
    // 0x24dc88: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dc88u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DC88 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc8c:
    // 0x24dc8c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24DC8C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc90:
    // 0x24dc90: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24dc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc94:
    // 0x24dc94: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24dc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc98:
    // 0x24dc98: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc9c:
    // 0x24dc9c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DC9C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dca0:
    // 0x24dca0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dca0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24DCA0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dca4:
    // 0x24dca4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dca4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24DCA4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dca8:
    // 0x24dca8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24dca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dcac:
    // 0x24dcac: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24dcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dcb0:
    // 0x24dcb0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24dcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dcb4:
    // 0x24dcb4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dcb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24DCB4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dcb8:
    // 0x24dcb8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dcb8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24DCB8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dcbc:
    // 0x24dcbc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dcbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24DCBC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dcc0:
    // 0x24dcc0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24dcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dcc4:
    // 0x24dcc4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dcc8:
    // 0x24dcc8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24dcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dccc:
    // 0x24dccc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dcccu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DCCC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dcd0:
    // 0x24dcd0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dcd0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DCD0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dcd4:
    // 0x24dcd4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dcd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24DCD4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dcd8:
    // 0x24dcd8: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dcd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24DCD8 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dcdc:
    // 0x24dcdc: 0x280009  .word       0x00280009                   # jalr        $zero, $at # 00080000 <InstrIdType: CPU_SPECIAL>
label_24dce0:
    if (ctx->pc == 0x24DCE0u) {
        ctx->pc = 0x24DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCDCu;
        // 0x24dce0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCE4u;
        goto label_24dce4;
    }
    ctx->pc = 0x24DCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCDCu;
        // 0x24dce0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DCDCu, 0x24DCE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DCE4u;
label_24dce4:
    // 0x24dce4: 0xd200d2  .word       0x00D200D2                   # mflo        $zero # 00D200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dce4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24dce8:
    // 0x24dce8: 0x84e0067  j           func_138019C
label_24dcec:
    if (ctx->pc == 0x24DCECu) {
        ctx->pc = 0x24DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCE8u;
        // 0x24dcec: 0x87b0134  j           func_1EC04D0 (Delay Slot)
        // J 0x1EC04D0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCF0u;
        goto label_24dcf0;
    }
    ctx->pc = 0x24DCE8u;
    ctx->pc = 0x24DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DCE8u;
    // 0x24dcec: 0x87b0134  j           func_1EC04D0 (Delay Slot)
    // J 0x1EC04D0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x138019Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138019Cu, 0x24DCE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24DCF0u;
label_24dcf0:
    // 0x24dcf0: 0x1fd01fc  .word       0x01FD01FC                   # dsll32      $zero, $sp, 7 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dcf0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 29) << (32 + 7));
label_24dcf4:
    // 0x24dcf4: 0x18f0166  .word       0x018F0166                   # xor         $zero, $t4, $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dcf4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 15));
label_24dcf8:
    // 0x24dcf8: 0x4d00d3  .word       0x004D00D3                   # mtlo        $v0 # 000D00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dcf8u;
    ctx->lo = GPR_U64(ctx, 2);
label_24dcfc:
    // 0x24dcfc: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x24dcfcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24dd00:
    // 0x24dd00: 0x0  nop
    ctx->pc = 0x24dd00u;
    // NOP
label_24dd04:
    // 0x24dd04: 0x0  nop
    ctx->pc = 0x24dd04u;
    // NOP
label_24dd08:
    // 0x24dd08: 0x0  nop
    ctx->pc = 0x24dd08u;
    // NOP
label_24dd0c:
    // 0x24dd0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24dd0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24dd10:
    // 0x24dd10: 0x0  nop
    ctx->pc = 0x24dd10u;
    // NOP
label_24dd14:
    // 0x24dd14: 0x0  nop
    ctx->pc = 0x24dd14u;
    // NOP
label_24dd18:
    // 0x24dd18: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24dd18u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24dd1c:
    // 0x24dd1c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dd1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DD1C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dd20:
    // 0x24dd20: 0x0  nop
    ctx->pc = 0x24dd20u;
    // NOP
label_24dd24:
    // 0x24dd24: 0x0  nop
    ctx->pc = 0x24dd24u;
    // NOP
label_24dd28:
    // 0x24dd28: 0x0  nop
    ctx->pc = 0x24dd28u;
    // NOP
label_24dd2c:
    // 0x24dd2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24dd2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24dd30:
    // 0x24dd30: 0x0  nop
    ctx->pc = 0x24dd30u;
    // NOP
label_24dd34:
    // 0x24dd34: 0x0  nop
    ctx->pc = 0x24dd34u;
    // NOP
label_24dd38:
    // 0x24dd38: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24dd38u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24dd3c:
    // 0x24dd3c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dd3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DD3C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dd40:
    // 0x24dd40: 0x0  nop
    ctx->pc = 0x24dd40u;
    // NOP
label_24dd44:
    // 0x24dd44: 0x0  nop
    ctx->pc = 0x24dd44u;
    // NOP
label_24dd48:
    // 0x24dd48: 0x0  nop
    ctx->pc = 0x24dd48u;
    // NOP
label_24dd4c:
    // 0x24dd4c: 0x0  nop
    ctx->pc = 0x24dd4cu;
    // NOP
label_24dd50:
    // 0x24dd50: 0x0  nop
    ctx->pc = 0x24dd50u;
    // NOP
label_24dd54:
    // 0x24dd54: 0x0  nop
    ctx->pc = 0x24dd54u;
    // NOP
label_24dd58:
    // 0x24dd58: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dd5c:
    // 0x24dd5c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24dd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dd60:
    // 0x24dd60: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24dd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dd64:
    // 0x24dd64: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dd64u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DD64 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dd68:
    // 0x24dd68: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dd68u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DD68 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dd6c:
    // 0x24dd6c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dd6cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DD6C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dd70:
    // 0x24dd70: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dd74:
    // 0x24dd74: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24dd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dd78:
    // 0x24dd78: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24dd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dd7c:
    // 0x24dd7c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dd7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DD7C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dd80:
    // 0x24dd80: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dd80u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DD80 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dd84:
    // 0x24dd84: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dd84u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DD84 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dd88:
    // 0x24dd88: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24dd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dd8c:
    // 0x24dd8c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24dd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dd90:
    // 0x24dd90: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24dd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dd94:
    // 0x24dd94: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dd94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DD94 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dd98:
    // 0x24dd98: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dd98u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DD98 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dd9c:
    // 0x24dd9c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dd9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24DD9C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dda0:
    // 0x24dda0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24dda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dda4:
    // 0x24dda4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24dda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dda8:
    // 0x24dda8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ddac:
    // 0x24ddac: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ddacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DDAC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ddb0:
    // 0x24ddb0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ddb0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24DDB0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ddb4:
    // 0x24ddb4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ddb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24DDB4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ddb8:
    // 0x24ddb8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24ddb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ddbc:
    // 0x24ddbc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24ddbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ddc0:
    // 0x24ddc0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24ddc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ddc4:
    // 0x24ddc4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ddc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24DDC4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ddc8:
    // 0x24ddc8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ddc8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24DDC8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ddcc:
    // 0x24ddcc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ddccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24DDCC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ddd0:
    // 0x24ddd0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24ddd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ddd4:
    // 0x24ddd4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ddd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ddd8:
    // 0x24ddd8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ddd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dddc:
    // 0x24dddc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dddcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DDDC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dde0:
    // 0x24dde0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dde0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DDE0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dde4:
    // 0x24dde4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dde4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24DDE4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dde8:
    // 0x24dde8: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dde8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24DDE8 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ddec:
    // 0x24ddec: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ddecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24DDEC raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ddf0:
    // 0x24ddf0: 0xa0000  sll         $zero, $t2, 0
    ctx->pc = 0x24ddf0u;
    
label_24ddf4:
    // 0x24ddf4: 0xf500d4  .word       0x00F500D4                   # dsllv       $zero, $s5, $a3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ddf4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 21) << (GPR_U32(ctx, 7) & 0x3F));
label_24ddf8:
    // 0x24ddf8: 0x680068  .word       0x00680068                   # mfsa        $zero # 00680040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24ddf8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_24ddfc:
    // 0x24ddfc: 0x1350135  .word       0x01350135                   # INVALID     $t1, $s5, 0x135 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ddfcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24DDFC raw=0x01350135"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24de00:
    // 0x24de00: 0xc2d0c2d  jal         func_B430B4
label_24de04:
    if (ctx->pc == 0x24DE04u) {
        ctx->pc = 0x24DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE00u;
        // 0x24de04: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE08u;
        goto label_24de08;
    }
    ctx->pc = 0x24DE00u;
    SET_GPR_U32(ctx, 31, 0x24DE08u);
    ctx->pc = 0x24DE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DE00u;
    // 0x24de04: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24DE00u, 0x24DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE08u;
label_24de08:
    // 0x24de08: 0xc2d  .word       0x00000C2D                   # daddu       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24de08u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24de0c:
    // 0x24de0c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24de0cu;
    
label_24de10:
    // 0x24de10: 0x0  nop
    ctx->pc = 0x24de10u;
    // NOP
label_24de14:
    // 0x24de14: 0x0  nop
    ctx->pc = 0x24de14u;
    // NOP
label_24de18:
    // 0x24de18: 0x0  nop
    ctx->pc = 0x24de18u;
    // NOP
label_24de1c:
    // 0x24de1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24de1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24de20:
    // 0x24de20: 0x0  nop
    ctx->pc = 0x24de20u;
    // NOP
label_24de24:
    // 0x24de24: 0x0  nop
    ctx->pc = 0x24de24u;
    // NOP
label_24de28:
    // 0x24de28: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24de28u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24de2c:
    // 0x24de2c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24de2cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DE2C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24de30:
    // 0x24de30: 0x0  nop
    ctx->pc = 0x24de30u;
    // NOP
label_24de34:
    // 0x24de34: 0x0  nop
    ctx->pc = 0x24de34u;
    // NOP
label_24de38:
    // 0x24de38: 0x0  nop
    ctx->pc = 0x24de38u;
    // NOP
label_24de3c:
    // 0x24de3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24de3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24de40:
    // 0x24de40: 0x0  nop
    ctx->pc = 0x24de40u;
    // NOP
label_24de44:
    // 0x24de44: 0x0  nop
    ctx->pc = 0x24de44u;
    // NOP
label_24de48:
    // 0x24de48: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24de48u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24de4c:
    // 0x24de4c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24de4cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DE4C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24de50:
    // 0x24de50: 0x0  nop
    ctx->pc = 0x24de50u;
    // NOP
label_24de54:
    // 0x24de54: 0x0  nop
    ctx->pc = 0x24de54u;
    // NOP
label_24de58:
    // 0x24de58: 0x0  nop
    ctx->pc = 0x24de58u;
    // NOP
label_24de5c:
    // 0x24de5c: 0x0  nop
    ctx->pc = 0x24de5cu;
    // NOP
label_24de60:
    // 0x24de60: 0x0  nop
    ctx->pc = 0x24de60u;
    // NOP
label_24de64:
    // 0x24de64: 0x0  nop
    ctx->pc = 0x24de64u;
    // NOP
label_24de68:
    // 0x24de68: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24de68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24de6c:
    // 0x24de6c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24de6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24de70:
    // 0x24de70: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24de70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24de74:
    // 0x24de74: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24de74u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DE74 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24de78:
    // 0x24de78: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24de78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DE78 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24de7c:
    // 0x24de7c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24de7cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DE7C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24de80:
    // 0x24de80: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24de80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24de84:
    // 0x24de84: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24de84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24de88:
    // 0x24de88: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24de88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24de8c:
    // 0x24de8c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24de8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DE8C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24de90:
    // 0x24de90: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24de90u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DE90 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24de94:
    // 0x24de94: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24de94u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DE94 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24de98:
    // 0x24de98: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24de98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24de9c:
    // 0x24de9c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24de9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dea0:
    // 0x24dea0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24dea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dea4:
    // 0x24dea4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dea4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DEA4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dea8:
    // 0x24dea8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dea8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DEA8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24deac:
    // 0x24deac: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24deacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24DEAC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24deb0:
    // 0x24deb0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24deb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24deb4:
    // 0x24deb4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24deb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24deb8:
    // 0x24deb8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24deb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24debc:
    // 0x24debc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24debcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DEBC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dec0:
    // 0x24dec0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dec0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24DEC0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dec4:
    // 0x24dec4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dec4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24DEC4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dec8:
    // 0x24dec8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24dec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24decc:
    // 0x24decc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24deccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ded0:
    // 0x24ded0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24ded0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ded4:
    // 0x24ded4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ded4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24DED4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ded8:
    // 0x24ded8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ded8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24DED8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dedc:
    // 0x24dedc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dedcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24DEDC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dee0:
    // 0x24dee0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24dee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dee4:
    // 0x24dee4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dee8:
    // 0x24dee8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24dee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24deec:
    // 0x24deec: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24deecu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DEEC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24def0:
    // 0x24def0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24def0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DEF0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24def4:
    // 0x24def4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24def4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24DEF4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24def8:
    // 0x24def8: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24def8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24DEF8 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24defc:
    // 0x24defc: 0x10005  .word       0x00010005                   # INVALID     $zero, $at, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24defcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24DEFC raw=0x00010005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24df00:
    // 0x24df00: 0xa0000  sll         $zero, $t2, 0
    ctx->pc = 0x24df00u;
    
label_24df04:
    // 0x24df04: 0xf600d5  .word       0x00F600D5                   # INVALID     $a3, $s6, 0xD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24df04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24DF04 raw=0x00F600D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24df08:
    // 0x24df08: 0x690069  .word       0x00690069                   # mtsa        $v1 # 00090040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24df08u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_24df0c:
    // 0x24df0c: 0x1360136  tne         $t1, $s6, 4
    ctx->pc = 0x24df0cu;
    if (GPR_U64(ctx, 9) != GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_24df10:
    // 0x24df10: 0xc2d0c2d  jal         func_B430B4
label_24df14:
    if (ctx->pc == 0x24DF14u) {
        ctx->pc = 0x24DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF10u;
        // 0x24df14: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF18u;
        goto label_24df18;
    }
    ctx->pc = 0x24DF10u;
    SET_GPR_U32(ctx, 31, 0x24DF18u);
    ctx->pc = 0x24DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF10u;
    // 0x24df14: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24DF10u, 0x24DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF18u;
label_24df18:
    // 0x24df18: 0xc2d  .word       0x00000C2D                   # daddu       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24df18u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24df1c:
    // 0x24df1c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24df1cu;
    
label_24df20:
    // 0x24df20: 0x0  nop
    ctx->pc = 0x24df20u;
    // NOP
label_24df24:
    // 0x24df24: 0x0  nop
    ctx->pc = 0x24df24u;
    // NOP
label_24df28:
    // 0x24df28: 0x0  nop
    ctx->pc = 0x24df28u;
    // NOP
label_24df2c:
    // 0x24df2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24df2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24df30:
    // 0x24df30: 0x0  nop
    ctx->pc = 0x24df30u;
    // NOP
label_24df34:
    // 0x24df34: 0x0  nop
    ctx->pc = 0x24df34u;
    // NOP
label_24df38:
    // 0x24df38: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24df38u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24df3c:
    // 0x24df3c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24df3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DF3C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24df40:
    // 0x24df40: 0x0  nop
    ctx->pc = 0x24df40u;
    // NOP
label_24df44:
    // 0x24df44: 0x0  nop
    ctx->pc = 0x24df44u;
    // NOP
label_24df48:
    // 0x24df48: 0x0  nop
    ctx->pc = 0x24df48u;
    // NOP
label_24df4c:
    // 0x24df4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24df4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24df50:
    // 0x24df50: 0x0  nop
    ctx->pc = 0x24df50u;
    // NOP
label_24df54:
    // 0x24df54: 0x0  nop
    ctx->pc = 0x24df54u;
    // NOP
label_24df58:
    // 0x24df58: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24df58u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24df5c:
    // 0x24df5c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24df5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DF5C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24df60:
    // 0x24df60: 0x0  nop
    ctx->pc = 0x24df60u;
    // NOP
label_24df64:
    // 0x24df64: 0x0  nop
    ctx->pc = 0x24df64u;
    // NOP
label_24df68:
    // 0x24df68: 0x0  nop
    ctx->pc = 0x24df68u;
    // NOP
label_24df6c:
    // 0x24df6c: 0x0  nop
    ctx->pc = 0x24df6cu;
    // NOP
label_24df70:
    // 0x24df70: 0x0  nop
    ctx->pc = 0x24df70u;
    // NOP
label_24df74:
    // 0x24df74: 0x0  nop
    ctx->pc = 0x24df74u;
    // NOP
label_24df78:
    // 0x24df78: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24df78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24df7c:
    // 0x24df7c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24df7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24df80:
    // 0x24df80: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24df80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24df84:
    // 0x24df84: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24df84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DF84 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24df88:
    // 0x24df88: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24df88u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DF88 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24df8c:
    // 0x24df8c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24df8cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DF8C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24df90:
    // 0x24df90: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24df90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24df94:
    // 0x24df94: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24df94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24df98:
    // 0x24df98: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24df98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24df9c:
    // 0x24df9c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24df9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DF9C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dfa0:
    // 0x24dfa0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dfa0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DFA0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dfa4:
    // 0x24dfa4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dfa4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DFA4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dfa8:
    // 0x24dfa8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24dfa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dfac:
    // 0x24dfac: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24dfacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dfb0:
    // 0x24dfb0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24dfb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dfb4:
    // 0x24dfb4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dfb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DFB4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dfb8:
    // 0x24dfb8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dfb8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DFB8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dfbc:
    // 0x24dfbc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dfbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24DFBC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dfc0:
    // 0x24dfc0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24dfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dfc4:
    // 0x24dfc4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24dfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dfc8:
    // 0x24dfc8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dfcc:
    // 0x24dfcc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dfccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DFCC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dfd0:
    // 0x24dfd0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dfd0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24DFD0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dfd4:
    // 0x24dfd4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dfd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24DFD4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dfd8:
    // 0x24dfd8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24dfd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dfdc:
    // 0x24dfdc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24dfdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dfe0:
    // 0x24dfe0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24dfe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dfe4:
    // 0x24dfe4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dfe4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24DFE4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dfe8:
    // 0x24dfe8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dfe8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24DFE8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dfec:
    // 0x24dfec: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dfecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24DFEC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dff0:
    // 0x24dff0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24dff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dff4:
    // 0x24dff4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dff8:
    // 0x24dff8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24dff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dffc:
    // 0x24dffc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dffcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DFFC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e000:
    // 0x24e000: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e000u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E000 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e004:
    // 0x24e004: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e004u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24E004 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e008:
    // 0x24e008: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e008u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24E008 raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e00c:
    // 0x24e00c: 0x20005  .word       0x00020005                   # INVALID     $zero, $v0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e00cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24E00C raw=0x00020005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e010:
    // 0x24e010: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x24e010u;
    
label_24e014:
    // 0x24e014: 0xf700d6  .word       0x00F700D6                   # dsrlv       $zero, $s7, $a3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e014u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 23) >> (GPR_U32(ctx, 7) & 0x3F));
label_24e018:
    // 0x24e018: 0x6a006a  .word       0x006A006A                   # slt         $zero, $v1, $t2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e018u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_24e01c:
    // 0x24e01c: 0x1370137  .word       0x01370137                   # INVALID     $t1, $s7, 0x137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e01cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24E01C raw=0x01370137"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e020:
    // 0x24e020: 0xc2d0c2d  jal         func_B430B4
label_24e024:
    if (ctx->pc == 0x24E024u) {
        ctx->pc = 0x24E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E020u;
        // 0x24e024: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E028u;
        goto label_24e028;
    }
    ctx->pc = 0x24E020u;
    SET_GPR_U32(ctx, 31, 0x24E028u);
    ctx->pc = 0x24E024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E020u;
    // 0x24e024: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24E020u, 0x24E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E028u;
label_24e028:
    // 0x24e028: 0xc2d  .word       0x00000C2D                   # daddu       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e028u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e02c:
    // 0x24e02c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24e02cu;
    
label_24e030:
    // 0x24e030: 0x0  nop
    ctx->pc = 0x24e030u;
    // NOP
label_24e034:
    // 0x24e034: 0x0  nop
    ctx->pc = 0x24e034u;
    // NOP
label_24e038:
    // 0x24e038: 0x0  nop
    ctx->pc = 0x24e038u;
    // NOP
label_24e03c:
    // 0x24e03c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e03cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e040:
    // 0x24e040: 0x0  nop
    ctx->pc = 0x24e040u;
    // NOP
label_24e044:
    // 0x24e044: 0x0  nop
    ctx->pc = 0x24e044u;
    // NOP
label_24e048:
    // 0x24e048: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e048u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e04c:
    // 0x24e04c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e04cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E04C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e050:
    // 0x24e050: 0x0  nop
    ctx->pc = 0x24e050u;
    // NOP
label_24e054:
    // 0x24e054: 0x0  nop
    ctx->pc = 0x24e054u;
    // NOP
label_24e058:
    // 0x24e058: 0x0  nop
    ctx->pc = 0x24e058u;
    // NOP
label_24e05c:
    // 0x24e05c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e05cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e060:
    // 0x24e060: 0x0  nop
    ctx->pc = 0x24e060u;
    // NOP
label_24e064:
    // 0x24e064: 0x0  nop
    ctx->pc = 0x24e064u;
    // NOP
label_24e068:
    // 0x24e068: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e068u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e06c:
    // 0x24e06c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e06cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E06C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e070:
    // 0x24e070: 0x0  nop
    ctx->pc = 0x24e070u;
    // NOP
label_24e074:
    // 0x24e074: 0x0  nop
    ctx->pc = 0x24e074u;
    // NOP
label_24e078:
    // 0x24e078: 0x0  nop
    ctx->pc = 0x24e078u;
    // NOP
label_24e07c:
    // 0x24e07c: 0x0  nop
    ctx->pc = 0x24e07cu;
    // NOP
label_24e080:
    // 0x24e080: 0x0  nop
    ctx->pc = 0x24e080u;
    // NOP
label_24e084:
    // 0x24e084: 0x0  nop
    ctx->pc = 0x24e084u;
    // NOP
label_24e088:
    // 0x24e088: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e08c:
    // 0x24e08c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e090:
    // 0x24e090: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e094:
    // 0x24e094: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e094u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E094 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e098:
    // 0x24e098: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e098u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E098 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e09c:
    // 0x24e09c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e09cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E09C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0a0:
    // 0x24e0a0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0a4:
    // 0x24e0a4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0a8:
    // 0x24e0a8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0ac:
    // 0x24e0ac: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e0acu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E0AC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0b0:
    // 0x24e0b0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e0b0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E0B0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0b4:
    // 0x24e0b4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e0b4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E0B4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0b8:
    // 0x24e0b8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0bc:
    // 0x24e0bc: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24e0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0c0:
    // 0x24e0c0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24e0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0c4:
    // 0x24e0c4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e0c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E0C4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0c8:
    // 0x24e0c8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e0c8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E0C8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0cc:
    // 0x24e0cc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e0ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24E0CC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0d0:
    // 0x24e0d0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0d4:
    // 0x24e0d4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24e0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0d8:
    // 0x24e0d8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0dc:
    // 0x24e0dc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e0dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E0DC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0e0:
    // 0x24e0e0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e0e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24E0E0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0e4:
    // 0x24e0e4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e0e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24E0E4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0e8:
    // 0x24e0e8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24e0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0ec:
    // 0x24e0ec: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24e0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0f0:
    // 0x24e0f0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24e0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e0f4:
    // 0x24e0f4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e0f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24E0F4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0f8:
    // 0x24e0f8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e0f8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24E0F8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e0fc:
    // 0x24e0fc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e0fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24E0FC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e100:
    // 0x24e100: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24e100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e104:
    // 0x24e104: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e108:
    // 0x24e108: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e10c:
    // 0x24e10c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e10cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E10C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e110:
    // 0x24e110: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e110u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E110 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e114:
    // 0x24e114: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e114u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24E114 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e118:
    // 0x24e118: 0x42ea0000  .word       0x42EA0000                   # INVALID     $s7, $t2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e118u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24E118 raw=0x42EA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e11c:
    // 0x24e11c: 0x30005  .word       0x00030005                   # INVALID     $zero, $v1, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e11cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24E11C raw=0x00030005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e120:
    // 0x24e120: 0xa0000  sll         $zero, $t2, 0
    ctx->pc = 0x24e120u;
    
label_24e124:
    // 0x24e124: 0xf800d7  .word       0x00F800D7                   # dsrav       $zero, $t8, $a3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 7) & 0x3F));
label_24e128:
    // 0x24e128: 0x6b006b  .word       0x006B006B                   # sltu        $zero, $v1, $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e128u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_24e12c:
    // 0x24e12c: 0x1380138  .word       0x01380138                   # dsll        $zero, $t8, 4 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e12cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) << 4);
label_24e130:
    // 0x24e130: 0xc2d0c2d  jal         func_B430B4
label_24e134:
    if (ctx->pc == 0x24E134u) {
        ctx->pc = 0x24E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E130u;
        // 0x24e134: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E138u;
        goto label_24e138;
    }
    ctx->pc = 0x24E130u;
    SET_GPR_U32(ctx, 31, 0x24E138u);
    ctx->pc = 0x24E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E130u;
    // 0x24e134: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24E130u, 0x24E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E138u;
label_24e138:
    // 0x24e138: 0x30c2d  .word       0x00030C2D                   # daddu       $at, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e138u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_24e13c:
    // 0x24e13c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24e13cu;
    
label_24e140:
    // 0x24e140: 0x0  nop
    ctx->pc = 0x24e140u;
    // NOP
label_24e144:
    // 0x24e144: 0x0  nop
    ctx->pc = 0x24e144u;
    // NOP
label_24e148:
    // 0x24e148: 0x0  nop
    ctx->pc = 0x24e148u;
    // NOP
label_24e14c:
    // 0x24e14c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e14cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e150:
    // 0x24e150: 0x0  nop
    ctx->pc = 0x24e150u;
    // NOP
label_24e154:
    // 0x24e154: 0x0  nop
    ctx->pc = 0x24e154u;
    // NOP
label_24e158:
    // 0x24e158: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e158u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e15c:
    // 0x24e15c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e15cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E15C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e160:
    // 0x24e160: 0x0  nop
    ctx->pc = 0x24e160u;
    // NOP
label_24e164:
    // 0x24e164: 0x0  nop
    ctx->pc = 0x24e164u;
    // NOP
label_24e168:
    // 0x24e168: 0x0  nop
    ctx->pc = 0x24e168u;
    // NOP
label_24e16c:
    // 0x24e16c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e16cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e170:
    // 0x24e170: 0x0  nop
    ctx->pc = 0x24e170u;
    // NOP
label_24e174:
    // 0x24e174: 0x0  nop
    ctx->pc = 0x24e174u;
    // NOP
label_24e178:
    // 0x24e178: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e178u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e17c:
    // 0x24e17c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e17cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E17C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e180:
    // 0x24e180: 0x0  nop
    ctx->pc = 0x24e180u;
    // NOP
label_24e184:
    // 0x24e184: 0x0  nop
    ctx->pc = 0x24e184u;
    // NOP
label_24e188:
    // 0x24e188: 0x0  nop
    ctx->pc = 0x24e188u;
    // NOP
label_24e18c:
    // 0x24e18c: 0x0  nop
    ctx->pc = 0x24e18cu;
    // NOP
label_24e190:
    // 0x24e190: 0x0  nop
    ctx->pc = 0x24e190u;
    // NOP
label_24e194:
    // 0x24e194: 0x0  nop
    ctx->pc = 0x24e194u;
    // NOP
label_24e198:
    // 0x24e198: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e19c:
    // 0x24e19c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1a0:
    // 0x24e1a0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1a4:
    // 0x24e1a4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e1a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E1A4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1a8:
    // 0x24e1a8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e1a8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E1A8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1ac:
    // 0x24e1ac: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e1acu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E1AC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1b0:
    // 0x24e1b0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1b4:
    // 0x24e1b4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1b8:
    // 0x24e1b8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1bc:
    // 0x24e1bc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e1bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E1BC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1c0:
    // 0x24e1c0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e1c0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E1C0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1c4:
    // 0x24e1c4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e1c4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E1C4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1c8:
    // 0x24e1c8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1cc:
    // 0x24e1cc: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24e1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1d0:
    // 0x24e1d0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24e1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1d4:
    // 0x24e1d4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e1d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E1D4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1d8:
    // 0x24e1d8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e1d8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E1D8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1dc:
    // 0x24e1dc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e1dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24E1DC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1e0:
    // 0x24e1e0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1e4:
    // 0x24e1e4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24e1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1e8:
    // 0x24e1e8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1ec:
    // 0x24e1ec: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e1ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E1EC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1f0:
    // 0x24e1f0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e1f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24E1F0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1f4:
    // 0x24e1f4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e1f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24E1F4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e1f8:
    // 0x24e1f8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24e1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e1fc:
    // 0x24e1fc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24e1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e200:
    // 0x24e200: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24e200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e204:
    // 0x24e204: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e204u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24E204 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x24e208u;
    return;
}
