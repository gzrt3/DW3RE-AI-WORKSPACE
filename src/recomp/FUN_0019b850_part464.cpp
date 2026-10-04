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


void FUN_0019b850_part464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27d980u: goto label_27d980;
        case 0x27d984u: goto label_27d984;
        case 0x27d988u: goto label_27d988;
        case 0x27d98cu: goto label_27d98c;
        case 0x27d990u: goto label_27d990;
        case 0x27d994u: goto label_27d994;
        case 0x27d998u: goto label_27d998;
        case 0x27d99cu: goto label_27d99c;
        case 0x27d9a0u: goto label_27d9a0;
        case 0x27d9a4u: goto label_27d9a4;
        case 0x27d9a8u: goto label_27d9a8;
        case 0x27d9acu: goto label_27d9ac;
        case 0x27d9b0u: goto label_27d9b0;
        case 0x27d9b4u: goto label_27d9b4;
        case 0x27d9b8u: goto label_27d9b8;
        case 0x27d9bcu: goto label_27d9bc;
        case 0x27d9c0u: goto label_27d9c0;
        case 0x27d9c4u: goto label_27d9c4;
        case 0x27d9c8u: goto label_27d9c8;
        case 0x27d9ccu: goto label_27d9cc;
        case 0x27d9d0u: goto label_27d9d0;
        case 0x27d9d4u: goto label_27d9d4;
        case 0x27d9d8u: goto label_27d9d8;
        case 0x27d9dcu: goto label_27d9dc;
        case 0x27d9e0u: goto label_27d9e0;
        case 0x27d9e4u: goto label_27d9e4;
        case 0x27d9e8u: goto label_27d9e8;
        case 0x27d9ecu: goto label_27d9ec;
        case 0x27d9f0u: goto label_27d9f0;
        case 0x27d9f4u: goto label_27d9f4;
        case 0x27d9f8u: goto label_27d9f8;
        case 0x27d9fcu: goto label_27d9fc;
        case 0x27da00u: goto label_27da00;
        case 0x27da04u: goto label_27da04;
        case 0x27da08u: goto label_27da08;
        case 0x27da0cu: goto label_27da0c;
        case 0x27da10u: goto label_27da10;
        case 0x27da14u: goto label_27da14;
        case 0x27da18u: goto label_27da18;
        case 0x27da1cu: goto label_27da1c;
        case 0x27da20u: goto label_27da20;
        case 0x27da24u: goto label_27da24;
        case 0x27da28u: goto label_27da28;
        case 0x27da2cu: goto label_27da2c;
        case 0x27da30u: goto label_27da30;
        case 0x27da34u: goto label_27da34;
        case 0x27da38u: goto label_27da38;
        case 0x27da3cu: goto label_27da3c;
        case 0x27da40u: goto label_27da40;
        case 0x27da44u: goto label_27da44;
        case 0x27da48u: goto label_27da48;
        case 0x27da4cu: goto label_27da4c;
        case 0x27da50u: goto label_27da50;
        case 0x27da54u: goto label_27da54;
        case 0x27da58u: goto label_27da58;
        case 0x27da5cu: goto label_27da5c;
        case 0x27da60u: goto label_27da60;
        case 0x27da64u: goto label_27da64;
        case 0x27da68u: goto label_27da68;
        case 0x27da6cu: goto label_27da6c;
        case 0x27da70u: goto label_27da70;
        case 0x27da74u: goto label_27da74;
        case 0x27da78u: goto label_27da78;
        case 0x27da7cu: goto label_27da7c;
        case 0x27da80u: goto label_27da80;
        case 0x27da84u: goto label_27da84;
        case 0x27da88u: goto label_27da88;
        case 0x27da8cu: goto label_27da8c;
        case 0x27da90u: goto label_27da90;
        case 0x27da94u: goto label_27da94;
        case 0x27da98u: goto label_27da98;
        case 0x27da9cu: goto label_27da9c;
        case 0x27daa0u: goto label_27daa0;
        case 0x27daa4u: goto label_27daa4;
        case 0x27daa8u: goto label_27daa8;
        case 0x27daacu: goto label_27daac;
        case 0x27dab0u: goto label_27dab0;
        case 0x27dab4u: goto label_27dab4;
        case 0x27dab8u: goto label_27dab8;
        case 0x27dabcu: goto label_27dabc;
        case 0x27dac0u: goto label_27dac0;
        case 0x27dac4u: goto label_27dac4;
        case 0x27dac8u: goto label_27dac8;
        case 0x27daccu: goto label_27dacc;
        case 0x27dad0u: goto label_27dad0;
        case 0x27dad4u: goto label_27dad4;
        case 0x27dad8u: goto label_27dad8;
        case 0x27dadcu: goto label_27dadc;
        case 0x27dae0u: goto label_27dae0;
        case 0x27dae4u: goto label_27dae4;
        case 0x27dae8u: goto label_27dae8;
        case 0x27daecu: goto label_27daec;
        case 0x27daf0u: goto label_27daf0;
        case 0x27daf4u: goto label_27daf4;
        case 0x27daf8u: goto label_27daf8;
        case 0x27dafcu: goto label_27dafc;
        case 0x27db00u: goto label_27db00;
        case 0x27db04u: goto label_27db04;
        case 0x27db08u: goto label_27db08;
        case 0x27db0cu: goto label_27db0c;
        case 0x27db10u: goto label_27db10;
        case 0x27db14u: goto label_27db14;
        case 0x27db18u: goto label_27db18;
        case 0x27db1cu: goto label_27db1c;
        case 0x27db20u: goto label_27db20;
        case 0x27db24u: goto label_27db24;
        case 0x27db28u: goto label_27db28;
        case 0x27db2cu: goto label_27db2c;
        case 0x27db30u: goto label_27db30;
        case 0x27db34u: goto label_27db34;
        case 0x27db38u: goto label_27db38;
        case 0x27db3cu: goto label_27db3c;
        case 0x27db40u: goto label_27db40;
        case 0x27db44u: goto label_27db44;
        case 0x27db48u: goto label_27db48;
        case 0x27db4cu: goto label_27db4c;
        case 0x27db50u: goto label_27db50;
        case 0x27db54u: goto label_27db54;
        case 0x27db58u: goto label_27db58;
        case 0x27db5cu: goto label_27db5c;
        case 0x27db60u: goto label_27db60;
        case 0x27db64u: goto label_27db64;
        case 0x27db68u: goto label_27db68;
        case 0x27db6cu: goto label_27db6c;
        case 0x27db70u: goto label_27db70;
        case 0x27db74u: goto label_27db74;
        case 0x27db78u: goto label_27db78;
        case 0x27db7cu: goto label_27db7c;
        case 0x27db80u: goto label_27db80;
        case 0x27db84u: goto label_27db84;
        case 0x27db88u: goto label_27db88;
        case 0x27db8cu: goto label_27db8c;
        case 0x27db90u: goto label_27db90;
        case 0x27db94u: goto label_27db94;
        case 0x27db98u: goto label_27db98;
        case 0x27db9cu: goto label_27db9c;
        case 0x27dba0u: goto label_27dba0;
        case 0x27dba4u: goto label_27dba4;
        case 0x27dba8u: goto label_27dba8;
        case 0x27dbacu: goto label_27dbac;
        case 0x27dbb0u: goto label_27dbb0;
        case 0x27dbb4u: goto label_27dbb4;
        case 0x27dbb8u: goto label_27dbb8;
        case 0x27dbbcu: goto label_27dbbc;
        case 0x27dbc0u: goto label_27dbc0;
        case 0x27dbc4u: goto label_27dbc4;
        case 0x27dbc8u: goto label_27dbc8;
        case 0x27dbccu: goto label_27dbcc;
        case 0x27dbd0u: goto label_27dbd0;
        case 0x27dbd4u: goto label_27dbd4;
        case 0x27dbd8u: goto label_27dbd8;
        case 0x27dbdcu: goto label_27dbdc;
        case 0x27dbe0u: goto label_27dbe0;
        case 0x27dbe4u: goto label_27dbe4;
        case 0x27dbe8u: goto label_27dbe8;
        case 0x27dbecu: goto label_27dbec;
        case 0x27dbf0u: goto label_27dbf0;
        case 0x27dbf4u: goto label_27dbf4;
        case 0x27dbf8u: goto label_27dbf8;
        case 0x27dbfcu: goto label_27dbfc;
        case 0x27dc00u: goto label_27dc00;
        case 0x27dc04u: goto label_27dc04;
        case 0x27dc08u: goto label_27dc08;
        case 0x27dc0cu: goto label_27dc0c;
        case 0x27dc10u: goto label_27dc10;
        case 0x27dc14u: goto label_27dc14;
        case 0x27dc18u: goto label_27dc18;
        case 0x27dc1cu: goto label_27dc1c;
        case 0x27dc20u: goto label_27dc20;
        case 0x27dc24u: goto label_27dc24;
        case 0x27dc28u: goto label_27dc28;
        case 0x27dc2cu: goto label_27dc2c;
        case 0x27dc30u: goto label_27dc30;
        case 0x27dc34u: goto label_27dc34;
        case 0x27dc38u: goto label_27dc38;
        case 0x27dc3cu: goto label_27dc3c;
        case 0x27dc40u: goto label_27dc40;
        case 0x27dc44u: goto label_27dc44;
        case 0x27dc48u: goto label_27dc48;
        case 0x27dc4cu: goto label_27dc4c;
        case 0x27dc50u: goto label_27dc50;
        case 0x27dc54u: goto label_27dc54;
        case 0x27dc58u: goto label_27dc58;
        case 0x27dc5cu: goto label_27dc5c;
        case 0x27dc60u: goto label_27dc60;
        case 0x27dc64u: goto label_27dc64;
        case 0x27dc68u: goto label_27dc68;
        case 0x27dc6cu: goto label_27dc6c;
        case 0x27dc70u: goto label_27dc70;
        case 0x27dc74u: goto label_27dc74;
        case 0x27dc78u: goto label_27dc78;
        case 0x27dc7cu: goto label_27dc7c;
        case 0x27dc80u: goto label_27dc80;
        case 0x27dc84u: goto label_27dc84;
        case 0x27dc88u: goto label_27dc88;
        case 0x27dc8cu: goto label_27dc8c;
        case 0x27dc90u: goto label_27dc90;
        case 0x27dc94u: goto label_27dc94;
        case 0x27dc98u: goto label_27dc98;
        case 0x27dc9cu: goto label_27dc9c;
        case 0x27dca0u: goto label_27dca0;
        case 0x27dca4u: goto label_27dca4;
        case 0x27dca8u: goto label_27dca8;
        case 0x27dcacu: goto label_27dcac;
        case 0x27dcb0u: goto label_27dcb0;
        case 0x27dcb4u: goto label_27dcb4;
        case 0x27dcb8u: goto label_27dcb8;
        case 0x27dcbcu: goto label_27dcbc;
        case 0x27dcc0u: goto label_27dcc0;
        case 0x27dcc4u: goto label_27dcc4;
        case 0x27dcc8u: goto label_27dcc8;
        case 0x27dcccu: goto label_27dccc;
        case 0x27dcd0u: goto label_27dcd0;
        case 0x27dcd4u: goto label_27dcd4;
        case 0x27dcd8u: goto label_27dcd8;
        case 0x27dcdcu: goto label_27dcdc;
        case 0x27dce0u: goto label_27dce0;
        case 0x27dce4u: goto label_27dce4;
        case 0x27dce8u: goto label_27dce8;
        case 0x27dcecu: goto label_27dcec;
        case 0x27dcf0u: goto label_27dcf0;
        case 0x27dcf4u: goto label_27dcf4;
        case 0x27dcf8u: goto label_27dcf8;
        case 0x27dcfcu: goto label_27dcfc;
        case 0x27dd00u: goto label_27dd00;
        case 0x27dd04u: goto label_27dd04;
        case 0x27dd08u: goto label_27dd08;
        case 0x27dd0cu: goto label_27dd0c;
        case 0x27dd10u: goto label_27dd10;
        case 0x27dd14u: goto label_27dd14;
        case 0x27dd18u: goto label_27dd18;
        case 0x27dd1cu: goto label_27dd1c;
        case 0x27dd20u: goto label_27dd20;
        case 0x27dd24u: goto label_27dd24;
        case 0x27dd28u: goto label_27dd28;
        case 0x27dd2cu: goto label_27dd2c;
        case 0x27dd30u: goto label_27dd30;
        case 0x27dd34u: goto label_27dd34;
        case 0x27dd38u: goto label_27dd38;
        case 0x27dd3cu: goto label_27dd3c;
        case 0x27dd40u: goto label_27dd40;
        case 0x27dd44u: goto label_27dd44;
        case 0x27dd48u: goto label_27dd48;
        case 0x27dd4cu: goto label_27dd4c;
        case 0x27dd50u: goto label_27dd50;
        case 0x27dd54u: goto label_27dd54;
        case 0x27dd58u: goto label_27dd58;
        case 0x27dd5cu: goto label_27dd5c;
        case 0x27dd60u: goto label_27dd60;
        case 0x27dd64u: goto label_27dd64;
        case 0x27dd68u: goto label_27dd68;
        case 0x27dd6cu: goto label_27dd6c;
        case 0x27dd70u: goto label_27dd70;
        case 0x27dd74u: goto label_27dd74;
        case 0x27dd78u: goto label_27dd78;
        case 0x27dd7cu: goto label_27dd7c;
        case 0x27dd80u: goto label_27dd80;
        case 0x27dd84u: goto label_27dd84;
        case 0x27dd88u: goto label_27dd88;
        case 0x27dd8cu: goto label_27dd8c;
        case 0x27dd90u: goto label_27dd90;
        case 0x27dd94u: goto label_27dd94;
        case 0x27dd98u: goto label_27dd98;
        case 0x27dd9cu: goto label_27dd9c;
        case 0x27dda0u: goto label_27dda0;
        case 0x27dda4u: goto label_27dda4;
        case 0x27dda8u: goto label_27dda8;
        case 0x27ddacu: goto label_27ddac;
        case 0x27ddb0u: goto label_27ddb0;
        case 0x27ddb4u: goto label_27ddb4;
        case 0x27ddb8u: goto label_27ddb8;
        case 0x27ddbcu: goto label_27ddbc;
        case 0x27ddc0u: goto label_27ddc0;
        case 0x27ddc4u: goto label_27ddc4;
        case 0x27ddc8u: goto label_27ddc8;
        case 0x27ddccu: goto label_27ddcc;
        case 0x27ddd0u: goto label_27ddd0;
        case 0x27ddd4u: goto label_27ddd4;
        case 0x27ddd8u: goto label_27ddd8;
        case 0x27dddcu: goto label_27dddc;
        case 0x27dde0u: goto label_27dde0;
        case 0x27dde4u: goto label_27dde4;
        case 0x27dde8u: goto label_27dde8;
        case 0x27ddecu: goto label_27ddec;
        case 0x27ddf0u: goto label_27ddf0;
        case 0x27ddf4u: goto label_27ddf4;
        case 0x27ddf8u: goto label_27ddf8;
        case 0x27ddfcu: goto label_27ddfc;
        case 0x27de00u: goto label_27de00;
        case 0x27de04u: goto label_27de04;
        case 0x27de08u: goto label_27de08;
        case 0x27de0cu: goto label_27de0c;
        case 0x27de10u: goto label_27de10;
        case 0x27de14u: goto label_27de14;
        case 0x27de18u: goto label_27de18;
        case 0x27de1cu: goto label_27de1c;
        case 0x27de20u: goto label_27de20;
        case 0x27de24u: goto label_27de24;
        case 0x27de28u: goto label_27de28;
        case 0x27de2cu: goto label_27de2c;
        case 0x27de30u: goto label_27de30;
        case 0x27de34u: goto label_27de34;
        case 0x27de38u: goto label_27de38;
        case 0x27de3cu: goto label_27de3c;
        case 0x27de40u: goto label_27de40;
        case 0x27de44u: goto label_27de44;
        case 0x27de48u: goto label_27de48;
        case 0x27de4cu: goto label_27de4c;
        case 0x27de50u: goto label_27de50;
        case 0x27de54u: goto label_27de54;
        case 0x27de58u: goto label_27de58;
        case 0x27de5cu: goto label_27de5c;
        case 0x27de60u: goto label_27de60;
        case 0x27de64u: goto label_27de64;
        case 0x27de68u: goto label_27de68;
        case 0x27de6cu: goto label_27de6c;
        case 0x27de70u: goto label_27de70;
        case 0x27de74u: goto label_27de74;
        case 0x27de78u: goto label_27de78;
        case 0x27de7cu: goto label_27de7c;
        case 0x27de80u: goto label_27de80;
        case 0x27de84u: goto label_27de84;
        case 0x27de88u: goto label_27de88;
        case 0x27de8cu: goto label_27de8c;
        case 0x27de90u: goto label_27de90;
        case 0x27de94u: goto label_27de94;
        case 0x27de98u: goto label_27de98;
        case 0x27de9cu: goto label_27de9c;
        case 0x27dea0u: goto label_27dea0;
        case 0x27dea4u: goto label_27dea4;
        case 0x27dea8u: goto label_27dea8;
        case 0x27deacu: goto label_27deac;
        case 0x27deb0u: goto label_27deb0;
        case 0x27deb4u: goto label_27deb4;
        case 0x27deb8u: goto label_27deb8;
        case 0x27debcu: goto label_27debc;
        case 0x27dec0u: goto label_27dec0;
        case 0x27dec4u: goto label_27dec4;
        case 0x27dec8u: goto label_27dec8;
        case 0x27deccu: goto label_27decc;
        case 0x27ded0u: goto label_27ded0;
        case 0x27ded4u: goto label_27ded4;
        case 0x27ded8u: goto label_27ded8;
        case 0x27dedcu: goto label_27dedc;
        case 0x27dee0u: goto label_27dee0;
        case 0x27dee4u: goto label_27dee4;
        case 0x27dee8u: goto label_27dee8;
        case 0x27deecu: goto label_27deec;
        case 0x27def0u: goto label_27def0;
        case 0x27def4u: goto label_27def4;
        case 0x27def8u: goto label_27def8;
        case 0x27defcu: goto label_27defc;
        case 0x27df00u: goto label_27df00;
        case 0x27df04u: goto label_27df04;
        case 0x27df08u: goto label_27df08;
        case 0x27df0cu: goto label_27df0c;
        case 0x27df10u: goto label_27df10;
        case 0x27df14u: goto label_27df14;
        case 0x27df18u: goto label_27df18;
        case 0x27df1cu: goto label_27df1c;
        case 0x27df20u: goto label_27df20;
        case 0x27df24u: goto label_27df24;
        case 0x27df28u: goto label_27df28;
        case 0x27df2cu: goto label_27df2c;
        case 0x27df30u: goto label_27df30;
        case 0x27df34u: goto label_27df34;
        case 0x27df38u: goto label_27df38;
        case 0x27df3cu: goto label_27df3c;
        case 0x27df40u: goto label_27df40;
        case 0x27df44u: goto label_27df44;
        case 0x27df48u: goto label_27df48;
        case 0x27df4cu: goto label_27df4c;
        case 0x27df50u: goto label_27df50;
        case 0x27df54u: goto label_27df54;
        case 0x27df58u: goto label_27df58;
        case 0x27df5cu: goto label_27df5c;
        case 0x27df60u: goto label_27df60;
        case 0x27df64u: goto label_27df64;
        case 0x27df68u: goto label_27df68;
        case 0x27df6cu: goto label_27df6c;
        case 0x27df70u: goto label_27df70;
        case 0x27df74u: goto label_27df74;
        case 0x27df78u: goto label_27df78;
        case 0x27df7cu: goto label_27df7c;
        case 0x27df80u: goto label_27df80;
        case 0x27df84u: goto label_27df84;
        case 0x27df88u: goto label_27df88;
        case 0x27df8cu: goto label_27df8c;
        case 0x27df90u: goto label_27df90;
        case 0x27df94u: goto label_27df94;
        case 0x27df98u: goto label_27df98;
        case 0x27df9cu: goto label_27df9c;
        case 0x27dfa0u: goto label_27dfa0;
        case 0x27dfa4u: goto label_27dfa4;
        case 0x27dfa8u: goto label_27dfa8;
        case 0x27dfacu: goto label_27dfac;
        case 0x27dfb0u: goto label_27dfb0;
        case 0x27dfb4u: goto label_27dfb4;
        case 0x27dfb8u: goto label_27dfb8;
        case 0x27dfbcu: goto label_27dfbc;
        case 0x27dfc0u: goto label_27dfc0;
        case 0x27dfc4u: goto label_27dfc4;
        case 0x27dfc8u: goto label_27dfc8;
        case 0x27dfccu: goto label_27dfcc;
        case 0x27dfd0u: goto label_27dfd0;
        case 0x27dfd4u: goto label_27dfd4;
        case 0x27dfd8u: goto label_27dfd8;
        case 0x27dfdcu: goto label_27dfdc;
        case 0x27dfe0u: goto label_27dfe0;
        case 0x27dfe4u: goto label_27dfe4;
        case 0x27dfe8u: goto label_27dfe8;
        case 0x27dfecu: goto label_27dfec;
        case 0x27dff0u: goto label_27dff0;
        case 0x27dff4u: goto label_27dff4;
        case 0x27dff8u: goto label_27dff8;
        case 0x27dffcu: goto label_27dffc;
        case 0x27e000u: goto label_27e000;
        case 0x27e004u: goto label_27e004;
        case 0x27e008u: goto label_27e008;
        case 0x27e00cu: goto label_27e00c;
        case 0x27e010u: goto label_27e010;
        case 0x27e014u: goto label_27e014;
        case 0x27e018u: goto label_27e018;
        case 0x27e01cu: goto label_27e01c;
        case 0x27e020u: goto label_27e020;
        case 0x27e024u: goto label_27e024;
        case 0x27e028u: goto label_27e028;
        case 0x27e02cu: goto label_27e02c;
        case 0x27e030u: goto label_27e030;
        case 0x27e034u: goto label_27e034;
        case 0x27e038u: goto label_27e038;
        case 0x27e03cu: goto label_27e03c;
        case 0x27e040u: goto label_27e040;
        case 0x27e044u: goto label_27e044;
        case 0x27e048u: goto label_27e048;
        case 0x27e04cu: goto label_27e04c;
        case 0x27e050u: goto label_27e050;
        case 0x27e054u: goto label_27e054;
        case 0x27e058u: goto label_27e058;
        case 0x27e05cu: goto label_27e05c;
        case 0x27e060u: goto label_27e060;
        case 0x27e064u: goto label_27e064;
        case 0x27e068u: goto label_27e068;
        case 0x27e06cu: goto label_27e06c;
        case 0x27e070u: goto label_27e070;
        case 0x27e074u: goto label_27e074;
        case 0x27e078u: goto label_27e078;
        case 0x27e07cu: goto label_27e07c;
        case 0x27e080u: goto label_27e080;
        case 0x27e084u: goto label_27e084;
        case 0x27e088u: goto label_27e088;
        case 0x27e08cu: goto label_27e08c;
        case 0x27e090u: goto label_27e090;
        case 0x27e094u: goto label_27e094;
        case 0x27e098u: goto label_27e098;
        case 0x27e09cu: goto label_27e09c;
        case 0x27e0a0u: goto label_27e0a0;
        case 0x27e0a4u: goto label_27e0a4;
        case 0x27e0a8u: goto label_27e0a8;
        case 0x27e0acu: goto label_27e0ac;
        case 0x27e0b0u: goto label_27e0b0;
        case 0x27e0b4u: goto label_27e0b4;
        case 0x27e0b8u: goto label_27e0b8;
        case 0x27e0bcu: goto label_27e0bc;
        case 0x27e0c0u: goto label_27e0c0;
        case 0x27e0c4u: goto label_27e0c4;
        case 0x27e0c8u: goto label_27e0c8;
        case 0x27e0ccu: goto label_27e0cc;
        case 0x27e0d0u: goto label_27e0d0;
        case 0x27e0d4u: goto label_27e0d4;
        case 0x27e0d8u: goto label_27e0d8;
        case 0x27e0dcu: goto label_27e0dc;
        case 0x27e0e0u: goto label_27e0e0;
        case 0x27e0e4u: goto label_27e0e4;
        case 0x27e0e8u: goto label_27e0e8;
        case 0x27e0ecu: goto label_27e0ec;
        case 0x27e0f0u: goto label_27e0f0;
        case 0x27e0f4u: goto label_27e0f4;
        case 0x27e0f8u: goto label_27e0f8;
        case 0x27e0fcu: goto label_27e0fc;
        case 0x27e100u: goto label_27e100;
        case 0x27e104u: goto label_27e104;
        case 0x27e108u: goto label_27e108;
        case 0x27e10cu: goto label_27e10c;
        case 0x27e110u: goto label_27e110;
        case 0x27e114u: goto label_27e114;
        case 0x27e118u: goto label_27e118;
        case 0x27e11cu: goto label_27e11c;
        case 0x27e120u: goto label_27e120;
        case 0x27e124u: goto label_27e124;
        case 0x27e128u: goto label_27e128;
        case 0x27e12cu: goto label_27e12c;
        case 0x27e130u: goto label_27e130;
        case 0x27e134u: goto label_27e134;
        case 0x27e138u: goto label_27e138;
        case 0x27e13cu: goto label_27e13c;
        case 0x27e140u: goto label_27e140;
        case 0x27e144u: goto label_27e144;
        case 0x27e148u: goto label_27e148;
        case 0x27e14cu: goto label_27e14c;
        default: return;
    }

label_27d980:
    // 0x27d980: 0x14dfa  dsrl        $t1, $at, 23
    ctx->pc = 0x27d980u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> 23);
label_27d984:
    // 0x27d984: 0x9ca0  .word       0x00009CA0                   # add         $s3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27d988:
    // 0x27d988: 0x0  nop
    ctx->pc = 0x27d988u;
    // NOP
label_27d98c:
    // 0x27d98c: 0x0  nop
    ctx->pc = 0x27d98cu;
    // NOP
label_27d990:
    // 0x27d990: 0x14e0e  .word       0x00014E0E                   # INVALID     $zero, $at, 0x4E0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27D990 raw=0x00014E0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d994:
    // 0x27d994: 0x4ea0  .word       0x00004EA0                   # add         $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27d998:
    // 0x27d998: 0x0  nop
    ctx->pc = 0x27d998u;
    // NOP
label_27d99c:
    // 0x27d99c: 0x0  nop
    ctx->pc = 0x27d99cu;
    // NOP
label_27d9a0:
    // 0x27d9a0: 0x14e18  .word       0x00014E18                   # mult        $t1, $zero, $at # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27d9a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_27d9a4:
    // 0x27d9a4: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x27d9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27d9a8:
    // 0x27d9a8: 0x0  nop
    ctx->pc = 0x27d9a8u;
    // NOP
label_27d9ac:
    // 0x27d9ac: 0x0  nop
    ctx->pc = 0x27d9acu;
    // NOP
label_27d9b0:
    // 0x27d9b0: 0x14e28  .word       0x00014E28                   # mfsa        $t1 # 00010600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27d9b0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_27d9b4:
    // 0x27d9b4: 0x6e00  sll         $t5, $zero, 24
    ctx->pc = 0x27d9b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_27d9b8:
    // 0x27d9b8: 0x0  nop
    ctx->pc = 0x27d9b8u;
    // NOP
label_27d9bc:
    // 0x27d9bc: 0x0  nop
    ctx->pc = 0x27d9bcu;
    // NOP
label_27d9c0:
    // 0x27d9c0: 0x14e36  tne         $zero, $at, 312
    ctx->pc = 0x27d9c0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d9c4:
    // 0x27d9c4: 0x5480  sll         $t2, $zero, 18
    ctx->pc = 0x27d9c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_27d9c8:
    // 0x27d9c8: 0x0  nop
    ctx->pc = 0x27d9c8u;
    // NOP
label_27d9cc:
    // 0x27d9cc: 0x0  nop
    ctx->pc = 0x27d9ccu;
    // NOP
label_27d9d0:
    // 0x27d9d0: 0x14e41  .word       0x00014E41                   # INVALID     $zero, $at, 0x4E41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d9d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27D9D0 raw=0x00014E41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d9d4:
    // 0x27d9d4: 0xa480  sll         $s4, $zero, 18
    ctx->pc = 0x27d9d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_27d9d8:
    // 0x27d9d8: 0x0  nop
    ctx->pc = 0x27d9d8u;
    // NOP
label_27d9dc:
    // 0x27d9dc: 0x0  nop
    ctx->pc = 0x27d9dcu;
    // NOP
label_27d9e0:
    // 0x27d9e0: 0x14e56  .word       0x00014E56                   # dsrlv       $t1, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d9e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27d9e4:
    // 0x27d9e4: 0x7520  .word       0x00007520                   # add         $t6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d9e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27d9e8:
    // 0x27d9e8: 0x0  nop
    ctx->pc = 0x27d9e8u;
    // NOP
label_27d9ec:
    // 0x27d9ec: 0x0  nop
    ctx->pc = 0x27d9ecu;
    // NOP
label_27d9f0:
    // 0x27d9f0: 0x14e65  .word       0x00014E65                   # or          $t1, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d9f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27d9f4:
    // 0x27d9f4: 0x4b60  .word       0x00004B60                   # add         $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d9f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27d9f8:
    // 0x27d9f8: 0x0  nop
    ctx->pc = 0x27d9f8u;
    // NOP
label_27d9fc:
    // 0x27d9fc: 0x0  nop
    ctx->pc = 0x27d9fcu;
    // NOP
label_27da00:
    // 0x27da00: 0x14e6f  .word       0x00014E6F                   # dsubu       $t1, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27da00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27da04:
    // 0x27da04: 0x88c0  sll         $s1, $zero, 3
    ctx->pc = 0x27da04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_27da08:
    // 0x27da08: 0x0  nop
    ctx->pc = 0x27da08u;
    // NOP
label_27da0c:
    // 0x27da0c: 0x0  nop
    ctx->pc = 0x27da0cu;
    // NOP
label_27da10:
    // 0x27da10: 0x14e81  .word       0x00014E81                   # INVALID     $zero, $at, 0x4E81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27da10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27DA10 raw=0x00014E81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27da14:
    // 0x27da14: 0xb3d0  .word       0x0000B3D0                   # mfhi        $s6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27da14u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27da18:
    // 0x27da18: 0x0  nop
    ctx->pc = 0x27da18u;
    // NOP
label_27da1c:
    // 0x27da1c: 0x0  nop
    ctx->pc = 0x27da1cu;
    // NOP
label_27da20:
    // 0x27da20: 0x14e98  .word       0x00014E98                   # mult        $t1, $zero, $at # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27da20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_27da24:
    // 0x27da24: 0x7890  .word       0x00007890                   # mfhi        $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27da24u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27da28:
    // 0x27da28: 0x0  nop
    ctx->pc = 0x27da28u;
    // NOP
label_27da2c:
    // 0x27da2c: 0x0  nop
    ctx->pc = 0x27da2cu;
    // NOP
label_27da30:
    // 0x27da30: 0x14ea8  .word       0x00014EA8                   # mfsa        $t1 # 00010680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27da30u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_27da34:
    // 0x27da34: 0xaac0  sll         $s5, $zero, 11
    ctx->pc = 0x27da34u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27da38:
    // 0x27da38: 0x0  nop
    ctx->pc = 0x27da38u;
    // NOP
label_27da3c:
    // 0x27da3c: 0x0  nop
    ctx->pc = 0x27da3cu;
    // NOP
label_27da40:
    // 0x27da40: 0x14ebe  dsrl32      $t1, $at, 26
    ctx->pc = 0x27da40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> (32 + 26));
label_27da44:
    // 0x27da44: 0xb920  .word       0x0000B920                   # add         $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27da44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27da48:
    // 0x27da48: 0x0  nop
    ctx->pc = 0x27da48u;
    // NOP
label_27da4c:
    // 0x27da4c: 0x0  nop
    ctx->pc = 0x27da4cu;
    // NOP
label_27da50:
    // 0x27da50: 0x14ed6  .word       0x00014ED6                   # dsrlv       $t1, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27da50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27da54:
    // 0x27da54: 0x120a0  .word       0x000120A0                   # add         $a0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27da54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_27da58:
    // 0x27da58: 0x0  nop
    ctx->pc = 0x27da58u;
    // NOP
label_27da5c:
    // 0x27da5c: 0x0  nop
    ctx->pc = 0x27da5cu;
    // NOP
label_27da60:
    // 0x27da60: 0x14efb  dsra        $t1, $at, 27
    ctx->pc = 0x27da60u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> 27);
label_27da64:
    // 0x27da64: 0x1e10  .word       0x00001E10                   # mfhi        $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27da64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_27da68:
    // 0x27da68: 0x0  nop
    ctx->pc = 0x27da68u;
    // NOP
label_27da6c:
    // 0x27da6c: 0x0  nop
    ctx->pc = 0x27da6cu;
    // NOP
label_27da70:
    // 0x27da70: 0x14eff  dsra32      $t1, $at, 27
    ctx->pc = 0x27da70u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 27));
label_27da74:
    // 0x27da74: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x27da74u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27da78:
    // 0x27da78: 0x0  nop
    ctx->pc = 0x27da78u;
    // NOP
label_27da7c:
    // 0x27da7c: 0x0  nop
    ctx->pc = 0x27da7cu;
    // NOP
label_27da80:
    // 0x27da80: 0x14f0f  .word       0x00014F0F                   # sync.p # 00014800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27da80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27da84:
    // 0x27da84: 0x6b20  .word       0x00006B20                   # add         $t5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27da84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27da88:
    // 0x27da88: 0x0  nop
    ctx->pc = 0x27da88u;
    // NOP
label_27da8c:
    // 0x27da8c: 0x0  nop
    ctx->pc = 0x27da8cu;
    // NOP
label_27da90:
    // 0x27da90: 0x14f1d  .word       0x00014F1D                   # dmultu      $zero, $at # 00004F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27da90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27DA90 raw=0x00014F1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27da94:
    // 0x27da94: 0x8740  sll         $s0, $zero, 29
    ctx->pc = 0x27da94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_27da98:
    // 0x27da98: 0x0  nop
    ctx->pc = 0x27da98u;
    // NOP
label_27da9c:
    // 0x27da9c: 0x0  nop
    ctx->pc = 0x27da9cu;
    // NOP
label_27daa0:
    // 0x27daa0: 0x14f2e  .word       0x00014F2E                   # dsub        $t1, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27daa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_27daa4:
    // 0x27daa4: 0xa350  .word       0x0000A350                   # mfhi        $s4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27daa4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27daa8:
    // 0x27daa8: 0x0  nop
    ctx->pc = 0x27daa8u;
    // NOP
label_27daac:
    // 0x27daac: 0x0  nop
    ctx->pc = 0x27daacu;
    // NOP
label_27dab0:
    // 0x27dab0: 0x14f43  sra         $t1, $at, 29
    ctx->pc = 0x27dab0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), 29));
label_27dab4:
    // 0x27dab4: 0x5fd0  .word       0x00005FD0                   # mfhi        $t3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dab4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27dab8:
    // 0x27dab8: 0x0  nop
    ctx->pc = 0x27dab8u;
    // NOP
label_27dabc:
    // 0x27dabc: 0x0  nop
    ctx->pc = 0x27dabcu;
    // NOP
label_27dac0:
    // 0x27dac0: 0x14f4f  .word       0x00014F4F                   # sync.p # 00014800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dac0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27dac4:
    // 0x27dac4: 0xc040  sll         $t8, $zero, 1
    ctx->pc = 0x27dac4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27dac8:
    // 0x27dac8: 0x0  nop
    ctx->pc = 0x27dac8u;
    // NOP
label_27dacc:
    // 0x27dacc: 0x0  nop
    ctx->pc = 0x27daccu;
    // NOP
label_27dad0:
    // 0x27dad0: 0x14f68  .word       0x00014F68                   # mfsa        $t1 # 00010740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27dad0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_27dad4:
    // 0x27dad4: 0x7dc0  sll         $t7, $zero, 23
    ctx->pc = 0x27dad4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27dad8:
    // 0x27dad8: 0x0  nop
    ctx->pc = 0x27dad8u;
    // NOP
label_27dadc:
    // 0x27dadc: 0x0  nop
    ctx->pc = 0x27dadcu;
    // NOP
label_27dae0:
    // 0x27dae0: 0x14f78  dsll        $t1, $at, 29
    ctx->pc = 0x27dae0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) << 29);
label_27dae4:
    // 0x27dae4: 0x5e40  sll         $t3, $zero, 25
    ctx->pc = 0x27dae4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_27dae8:
    // 0x27dae8: 0x0  nop
    ctx->pc = 0x27dae8u;
    // NOP
label_27daec:
    // 0x27daec: 0x0  nop
    ctx->pc = 0x27daecu;
    // NOP
label_27daf0:
    // 0x27daf0: 0x14f84  .word       0x00014F84                   # sllv        $t1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27daf0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27daf4:
    // 0x27daf4: 0x9540  sll         $s2, $zero, 21
    ctx->pc = 0x27daf4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_27daf8:
    // 0x27daf8: 0x0  nop
    ctx->pc = 0x27daf8u;
    // NOP
label_27dafc:
    // 0x27dafc: 0x0  nop
    ctx->pc = 0x27dafcu;
    // NOP
label_27db00:
    // 0x27db00: 0x14f97  .word       0x00014F97                   # dsrav       $t1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27db00u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27db04:
    // 0x27db04: 0xa260  .word       0x0000A260                   # add         $s4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27db04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27db08:
    // 0x27db08: 0x0  nop
    ctx->pc = 0x27db08u;
    // NOP
label_27db0c:
    // 0x27db0c: 0x0  nop
    ctx->pc = 0x27db0cu;
    // NOP
label_27db10:
    // 0x27db10: 0x14fac  .word       0x00014FAC                   # dadd        $t1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27db10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_27db14:
    // 0x27db14: 0xce60  .word       0x0000CE60                   # add         $t9, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27db14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27db18:
    // 0x27db18: 0x0  nop
    ctx->pc = 0x27db18u;
    // NOP
label_27db1c:
    // 0x27db1c: 0x0  nop
    ctx->pc = 0x27db1cu;
    // NOP
label_27db20:
    // 0x27db20: 0x14fc6  .word       0x00014FC6                   # srlv        $t1, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27db20u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27db24:
    // 0x27db24: 0x175b0  tge         $zero, $at, 470
    ctx->pc = 0x27db24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27db28:
    // 0x27db28: 0x0  nop
    ctx->pc = 0x27db28u;
    // NOP
label_27db2c:
    // 0x27db2c: 0x0  nop
    ctx->pc = 0x27db2cu;
    // NOP
label_27db30:
    // 0x27db30: 0x14ff5  .word       0x00014FF5                   # INVALID     $zero, $at, 0x4FF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27db30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27DB30 raw=0x00014FF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27db34:
    // 0x27db34: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x27db34u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27db38:
    // 0x27db38: 0x0  nop
    ctx->pc = 0x27db38u;
    // NOP
label_27db3c:
    // 0x27db3c: 0x0  nop
    ctx->pc = 0x27db3cu;
    // NOP
label_27db40:
    // 0x27db40: 0x15005  .word       0x00015005                   # INVALID     $zero, $at, 0x5005 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27db40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27DB40 raw=0x00015005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27db44:
    // 0x27db44: 0x8fd0  .word       0x00008FD0                   # mfhi        $s1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27db44u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27db48:
    // 0x27db48: 0x0  nop
    ctx->pc = 0x27db48u;
    // NOP
label_27db4c:
    // 0x27db4c: 0x0  nop
    ctx->pc = 0x27db4cu;
    // NOP
label_27db50:
    // 0x27db50: 0x15017  dsrav       $t2, $at, $zero
    ctx->pc = 0x27db50u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27db54:
    // 0x27db54: 0xca10  .word       0x0000CA10                   # mfhi        $t9 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27db54u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_27db58:
    // 0x27db58: 0x0  nop
    ctx->pc = 0x27db58u;
    // NOP
label_27db5c:
    // 0x27db5c: 0x0  nop
    ctx->pc = 0x27db5cu;
    // NOP
label_27db60:
    // 0x27db60: 0x15031  tgeu        $zero, $at, 320
    ctx->pc = 0x27db60u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27db64:
    // 0x27db64: 0xb1c0  sll         $s6, $zero, 7
    ctx->pc = 0x27db64u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27db68:
    // 0x27db68: 0x0  nop
    ctx->pc = 0x27db68u;
    // NOP
label_27db6c:
    // 0x27db6c: 0x0  nop
    ctx->pc = 0x27db6cu;
    // NOP
label_27db70:
    // 0x27db70: 0x15048  .word       0x00015048                   # jr          $zero # 00015040 <InstrIdType: CPU_SPECIAL>
label_27db74:
    if (ctx->pc == 0x27DB74u) {
        ctx->pc = 0x27DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB70u;
        // 0x27db74: 0xa240  sll         $s4, $zero, 9 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DB78u;
        goto label_27db78;
    }
    ctx->pc = 0x27DB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB70u;
        // 0x27db74: 0xa240  sll         $s4, $zero, 9 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DB70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27DB78u;
label_27db78:
    // 0x27db78: 0x0  nop
    ctx->pc = 0x27db78u;
    // NOP
label_27db7c:
    // 0x27db7c: 0x0  nop
    ctx->pc = 0x27db7cu;
    // NOP
label_27db80:
    // 0x27db80: 0x1505d  .word       0x0001505D                   # dmultu      $zero, $at # 00005040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27db80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27DB80 raw=0x0001505D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27db84:
    // 0x27db84: 0xc600  sll         $t8, $zero, 24
    ctx->pc = 0x27db84u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_27db88:
    // 0x27db88: 0x0  nop
    ctx->pc = 0x27db88u;
    // NOP
label_27db8c:
    // 0x27db8c: 0x0  nop
    ctx->pc = 0x27db8cu;
    // NOP
label_27db90:
    // 0x27db90: 0x15076  tne         $zero, $at, 321
    ctx->pc = 0x27db90u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27db94:
    // 0x27db94: 0xb810  mfhi        $s7
    ctx->pc = 0x27db94u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27db98:
    // 0x27db98: 0x0  nop
    ctx->pc = 0x27db98u;
    // NOP
label_27db9c:
    // 0x27db9c: 0x0  nop
    ctx->pc = 0x27db9cu;
    // NOP
label_27dba0:
    // 0x27dba0: 0x1508e  .word       0x0001508E                   # INVALID     $zero, $at, 0x508E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27DBA0 raw=0x0001508E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27dba4:
    // 0x27dba4: 0x42e0  .word       0x000042E0                   # add         $t0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27dba8:
    // 0x27dba8: 0x0  nop
    ctx->pc = 0x27dba8u;
    // NOP
label_27dbac:
    // 0x27dbac: 0x0  nop
    ctx->pc = 0x27dbacu;
    // NOP
label_27dbb0:
    // 0x27dbb0: 0x15097  .word       0x00015097                   # dsrav       $t2, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dbb0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27dbb4:
    // 0x27dbb4: 0x7710  .word       0x00007710                   # mfhi        $t6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dbb4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27dbb8:
    // 0x27dbb8: 0x0  nop
    ctx->pc = 0x27dbb8u;
    // NOP
label_27dbbc:
    // 0x27dbbc: 0x0  nop
    ctx->pc = 0x27dbbcu;
    // NOP
label_27dbc0:
    // 0x27dbc0: 0x150a6  .word       0x000150A6                   # xor         $t2, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dbc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27dbc4:
    // 0x27dbc4: 0xd400  sll         $k0, $zero, 16
    ctx->pc = 0x27dbc4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_27dbc8:
    // 0x27dbc8: 0x0  nop
    ctx->pc = 0x27dbc8u;
    // NOP
label_27dbcc:
    // 0x27dbcc: 0x0  nop
    ctx->pc = 0x27dbccu;
    // NOP
label_27dbd0:
    // 0x27dbd0: 0x150c1  .word       0x000150C1                   # INVALID     $zero, $at, 0x50C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dbd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27DBD0 raw=0x000150C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27dbd4:
    // 0x27dbd4: 0x10510  .word       0x00010510                   # mfhi        $zero # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dbd4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_27dbd8:
    // 0x27dbd8: 0x0  nop
    ctx->pc = 0x27dbd8u;
    // NOP
label_27dbdc:
    // 0x27dbdc: 0x0  nop
    ctx->pc = 0x27dbdcu;
    // NOP
label_27dbe0:
    // 0x27dbe0: 0x150e2  .word       0x000150E2                   # neg         $t2, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dbe0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
label_27dbe4:
    // 0x27dbe4: 0x93d0  .word       0x000093D0                   # mfhi        $s2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dbe4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27dbe8:
    // 0x27dbe8: 0x0  nop
    ctx->pc = 0x27dbe8u;
    // NOP
label_27dbec:
    // 0x27dbec: 0x0  nop
    ctx->pc = 0x27dbecu;
    // NOP
label_27dbf0:
    // 0x27dbf0: 0x150f5  .word       0x000150F5                   # INVALID     $zero, $at, 0x50F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dbf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27DBF0 raw=0x000150F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27dbf4:
    // 0x27dbf4: 0x10b20  .word       0x00010B20                   # add         $at, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dbf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_27dbf8:
    // 0x27dbf8: 0x0  nop
    ctx->pc = 0x27dbf8u;
    // NOP
label_27dbfc:
    // 0x27dbfc: 0x0  nop
    ctx->pc = 0x27dbfcu;
    // NOP
label_27dc00:
    // 0x27dc00: 0x15117  .word       0x00015117                   # dsrav       $t2, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc00u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27dc04:
    // 0x27dc04: 0xee80  sll         $sp, $zero, 26
    ctx->pc = 0x27dc04u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_27dc08:
    // 0x27dc08: 0x0  nop
    ctx->pc = 0x27dc08u;
    // NOP
label_27dc0c:
    // 0x27dc0c: 0x0  nop
    ctx->pc = 0x27dc0cu;
    // NOP
label_27dc10:
    // 0x27dc10: 0x15135  .word       0x00015135                   # INVALID     $zero, $at, 0x5135 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27DC10 raw=0x00015135"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27dc14:
    // 0x27dc14: 0x10310  .word       0x00010310                   # mfhi        $zero # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc14u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_27dc18:
    // 0x27dc18: 0x0  nop
    ctx->pc = 0x27dc18u;
    // NOP
label_27dc1c:
    // 0x27dc1c: 0x0  nop
    ctx->pc = 0x27dc1cu;
    // NOP
label_27dc20:
    // 0x27dc20: 0x15156  .word       0x00015156                   # dsrlv       $t2, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27dc24:
    // 0x27dc24: 0xf980  sll         $ra, $zero, 6
    ctx->pc = 0x27dc24u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_27dc28:
    // 0x27dc28: 0x0  nop
    ctx->pc = 0x27dc28u;
    // NOP
label_27dc2c:
    // 0x27dc2c: 0x0  nop
    ctx->pc = 0x27dc2cu;
    // NOP
label_27dc30:
    // 0x27dc30: 0x15176  tne         $zero, $at, 325
    ctx->pc = 0x27dc30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27dc34:
    // 0x27dc34: 0xb950  .word       0x0000B950                   # mfhi        $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc34u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27dc38:
    // 0x27dc38: 0x0  nop
    ctx->pc = 0x27dc38u;
    // NOP
label_27dc3c:
    // 0x27dc3c: 0x0  nop
    ctx->pc = 0x27dc3cu;
    // NOP
label_27dc40:
    // 0x27dc40: 0x1518e  .word       0x0001518E                   # INVALID     $zero, $at, 0x518E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27DC40 raw=0x0001518E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27dc44:
    // 0x27dc44: 0x9fa0  .word       0x00009FA0                   # add         $s3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27dc48:
    // 0x27dc48: 0x0  nop
    ctx->pc = 0x27dc48u;
    // NOP
label_27dc4c:
    // 0x27dc4c: 0x0  nop
    ctx->pc = 0x27dc4cu;
    // NOP
label_27dc50:
    // 0x27dc50: 0x151a2  .word       0x000151A2                   # neg         $t2, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc50u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
label_27dc54:
    // 0x27dc54: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27dc58:
    // 0x27dc58: 0x0  nop
    ctx->pc = 0x27dc58u;
    // NOP
label_27dc5c:
    // 0x27dc5c: 0x0  nop
    ctx->pc = 0x27dc5cu;
    // NOP
label_27dc60:
    // 0x27dc60: 0x151af  .word       0x000151AF                   # dsubu       $t2, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27dc64:
    // 0x27dc64: 0x81c0  sll         $s0, $zero, 7
    ctx->pc = 0x27dc64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27dc68:
    // 0x27dc68: 0x0  nop
    ctx->pc = 0x27dc68u;
    // NOP
label_27dc6c:
    // 0x27dc6c: 0x0  nop
    ctx->pc = 0x27dc6cu;
    // NOP
label_27dc70:
    // 0x27dc70: 0x151c0  sll         $t2, $at, 7
    ctx->pc = 0x27dc70u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 7));
label_27dc74:
    // 0x27dc74: 0x42e0  .word       0x000042E0                   # add         $t0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27dc78:
    // 0x27dc78: 0x0  nop
    ctx->pc = 0x27dc78u;
    // NOP
label_27dc7c:
    // 0x27dc7c: 0x0  nop
    ctx->pc = 0x27dc7cu;
    // NOP
label_27dc80:
    // 0x27dc80: 0x151c9  .word       0x000151C9                   # jalr        $t2, $zero # 000101C0 <InstrIdType: CPU_SPECIAL>
label_27dc84:
    if (ctx->pc == 0x27DC84u) {
        ctx->pc = 0x27DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC80u;
        // 0x27dc84: 0x9730  tge         $zero, $zero, 604 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DC88u;
        goto label_27dc88;
    }
    ctx->pc = 0x27DC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x27DC88u);
        ctx->pc = 0x27DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC80u;
        // 0x27dc84: 0x9730  tge         $zero, $zero, 604 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DC80u, 0x27DC88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DC88u;
label_27dc88:
    // 0x27dc88: 0x0  nop
    ctx->pc = 0x27dc88u;
    // NOP
label_27dc8c:
    // 0x27dc8c: 0x0  nop
    ctx->pc = 0x27dc8cu;
    // NOP
label_27dc90:
    // 0x27dc90: 0x151dc  .word       0x000151DC                   # dmult       $zero, $at # 000051C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27DC90 raw=0x000151DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27dc94:
    // 0x27dc94: 0xa7d0  .word       0x0000A7D0                   # mfhi        $s4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dc94u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27dc98:
    // 0x27dc98: 0x0  nop
    ctx->pc = 0x27dc98u;
    // NOP
label_27dc9c:
    // 0x27dc9c: 0x0  nop
    ctx->pc = 0x27dc9cu;
    // NOP
label_27dca0:
    // 0x27dca0: 0x151f1  tgeu        $zero, $at, 327
    ctx->pc = 0x27dca0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27dca4:
    // 0x27dca4: 0xbd50  .word       0x0000BD50                   # mfhi        $s7 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dca4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27dca8:
    // 0x27dca8: 0x0  nop
    ctx->pc = 0x27dca8u;
    // NOP
label_27dcac:
    // 0x27dcac: 0x0  nop
    ctx->pc = 0x27dcacu;
    // NOP
label_27dcb0:
    // 0x27dcb0: 0x15209  .word       0x00015209                   # jalr        $t2, $zero # 00010200 <InstrIdType: CPU_SPECIAL>
label_27dcb4:
    if (ctx->pc == 0x27DCB4u) {
        ctx->pc = 0x27DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCB0u;
        // 0x27dcb4: 0xf800  sll         $ra, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DCB8u;
        goto label_27dcb8;
    }
    ctx->pc = 0x27DCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x27DCB8u);
        ctx->pc = 0x27DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCB0u;
        // 0x27dcb4: 0xf800  sll         $ra, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DCB0u, 0x27DCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DCB8u;
label_27dcb8:
    // 0x27dcb8: 0x0  nop
    ctx->pc = 0x27dcb8u;
    // NOP
label_27dcbc:
    // 0x27dcbc: 0x0  nop
    ctx->pc = 0x27dcbcu;
    // NOP
label_27dcc0:
    // 0x27dcc0: 0x15228  .word       0x00015228                   # mfsa        $t2 # 00010200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27dcc0u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_27dcc4:
    // 0x27dcc4: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x27dcc4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27dcc8:
    // 0x27dcc8: 0x0  nop
    ctx->pc = 0x27dcc8u;
    // NOP
label_27dccc:
    // 0x27dccc: 0x0  nop
    ctx->pc = 0x27dcccu;
    // NOP
label_27dcd0:
    // 0x27dcd0: 0x15238  dsll        $t2, $at, 8
    ctx->pc = 0x27dcd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) << 8);
label_27dcd4:
    // 0x27dcd4: 0xb890  .word       0x0000B890                   # mfhi        $s7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dcd4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27dcd8:
    // 0x27dcd8: 0x0  nop
    ctx->pc = 0x27dcd8u;
    // NOP
label_27dcdc:
    // 0x27dcdc: 0x0  nop
    ctx->pc = 0x27dcdcu;
    // NOP
label_27dce0:
    // 0x27dce0: 0x15250  .word       0x00015250                   # mfhi        $t2 # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dce0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27dce4:
    // 0x27dce4: 0xa060  .word       0x0000A060                   # add         $s4, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27dce8:
    // 0x27dce8: 0x0  nop
    ctx->pc = 0x27dce8u;
    // NOP
label_27dcec:
    // 0x27dcec: 0x0  nop
    ctx->pc = 0x27dcecu;
    // NOP
label_27dcf0:
    // 0x27dcf0: 0x15265  .word       0x00015265                   # or          $t2, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dcf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27dcf4:
    // 0x27dcf4: 0xa0d0  .word       0x0000A0D0                   # mfhi        $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dcf4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27dcf8:
    // 0x27dcf8: 0x0  nop
    ctx->pc = 0x27dcf8u;
    // NOP
label_27dcfc:
    // 0x27dcfc: 0x0  nop
    ctx->pc = 0x27dcfcu;
    // NOP
label_27dd00:
    // 0x27dd00: 0x1527a  dsrl        $t2, $at, 9
    ctx->pc = 0x27dd00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) >> 9);
label_27dd04:
    // 0x27dd04: 0xae00  sll         $s5, $zero, 24
    ctx->pc = 0x27dd04u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_27dd08:
    // 0x27dd08: 0x0  nop
    ctx->pc = 0x27dd08u;
    // NOP
label_27dd0c:
    // 0x27dd0c: 0x0  nop
    ctx->pc = 0x27dd0cu;
    // NOP
label_27dd10:
    // 0x27dd10: 0x15290  .word       0x00015290                   # mfhi        $t2 # 00010280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dd10u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27dd14:
    // 0x27dd14: 0xdbf0  tge         $zero, $zero, 879
    ctx->pc = 0x27dd14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27dd18:
    // 0x27dd18: 0x0  nop
    ctx->pc = 0x27dd18u;
    // NOP
label_27dd1c:
    // 0x27dd1c: 0x0  nop
    ctx->pc = 0x27dd1cu;
    // NOP
label_27dd20:
    // 0x27dd20: 0x152ac  .word       0x000152AC                   # dadd        $t2, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dd20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_27dd24:
    // 0x27dd24: 0xa540  sll         $s4, $zero, 21
    ctx->pc = 0x27dd24u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_27dd28:
    // 0x27dd28: 0x0  nop
    ctx->pc = 0x27dd28u;
    // NOP
label_27dd2c:
    // 0x27dd2c: 0x0  nop
    ctx->pc = 0x27dd2cu;
    // NOP
label_27dd30:
    // 0x27dd30: 0x152c1  .word       0x000152C1                   # INVALID     $zero, $at, 0x52C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dd30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27DD30 raw=0x000152C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27dd34:
    // 0x27dd34: 0xbc40  sll         $s7, $zero, 17
    ctx->pc = 0x27dd34u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_27dd38:
    // 0x27dd38: 0x0  nop
    ctx->pc = 0x27dd38u;
    // NOP
label_27dd3c:
    // 0x27dd3c: 0x0  nop
    ctx->pc = 0x27dd3cu;
    // NOP
label_27dd40:
    // 0x27dd40: 0x152d9  .word       0x000152D9                   # multu       $zero, $at # 000052C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dd40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_27dd44:
    // 0x27dd44: 0xab80  sll         $s5, $zero, 14
    ctx->pc = 0x27dd44u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_27dd48:
    // 0x27dd48: 0x0  nop
    ctx->pc = 0x27dd48u;
    // NOP
label_27dd4c:
    // 0x27dd4c: 0x0  nop
    ctx->pc = 0x27dd4cu;
    // NOP
label_27dd50:
    // 0x27dd50: 0x152ef  .word       0x000152EF                   # dsubu       $t2, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dd50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27dd54:
    // 0x27dd54: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x27dd54u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27dd58:
    // 0x27dd58: 0x0  nop
    ctx->pc = 0x27dd58u;
    // NOP
label_27dd5c:
    // 0x27dd5c: 0x0  nop
    ctx->pc = 0x27dd5cu;
    // NOP
label_27dd60:
    // 0x27dd60: 0x152fb  dsra        $t2, $at, 11
    ctx->pc = 0x27dd60u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> 11);
label_27dd64:
    // 0x27dd64: 0x50c0  sll         $t2, $zero, 3
    ctx->pc = 0x27dd64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_27dd68:
    // 0x27dd68: 0x0  nop
    ctx->pc = 0x27dd68u;
    // NOP
label_27dd6c:
    // 0x27dd6c: 0x0  nop
    ctx->pc = 0x27dd6cu;
    // NOP
label_27dd70:
    // 0x27dd70: 0x15306  .word       0x00015306                   # srlv        $t2, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dd70u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27dd74:
    // 0x27dd74: 0xd670  tge         $zero, $zero, 857
    ctx->pc = 0x27dd74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27dd78:
    // 0x27dd78: 0x0  nop
    ctx->pc = 0x27dd78u;
    // NOP
label_27dd7c:
    // 0x27dd7c: 0x0  nop
    ctx->pc = 0x27dd7cu;
    // NOP
label_27dd80:
    // 0x27dd80: 0x15321  .word       0x00015321                   # addu        $t2, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dd80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27dd84:
    // 0x27dd84: 0x8dd0  .word       0x00008DD0                   # mfhi        $s1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dd84u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27dd88:
    // 0x27dd88: 0x0  nop
    ctx->pc = 0x27dd88u;
    // NOP
label_27dd8c:
    // 0x27dd8c: 0x0  nop
    ctx->pc = 0x27dd8cu;
    // NOP
label_27dd90:
    // 0x27dd90: 0x15333  tltu        $zero, $at, 332
    ctx->pc = 0x27dd90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27dd94:
    // 0x27dd94: 0x4cf0  tge         $zero, $zero, 307
    ctx->pc = 0x27dd94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27dd98:
    // 0x27dd98: 0x0  nop
    ctx->pc = 0x27dd98u;
    // NOP
label_27dd9c:
    // 0x27dd9c: 0x0  nop
    ctx->pc = 0x27dd9cu;
    // NOP
label_27dda0:
    // 0x27dda0: 0x1533d  .word       0x0001533D                   # INVALID     $zero, $at, 0x533D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dda0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27DDA0 raw=0x0001533D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27dda4:
    // 0x27dda4: 0xc4d0  .word       0x0000C4D0                   # mfhi        $t8 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dda4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27dda8:
    // 0x27dda8: 0x0  nop
    ctx->pc = 0x27dda8u;
    // NOP
label_27ddac:
    // 0x27ddac: 0x0  nop
    ctx->pc = 0x27ddacu;
    // NOP
label_27ddb0:
    // 0x27ddb0: 0x15356  .word       0x00015356                   # dsrlv       $t2, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ddb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27ddb4:
    // 0x27ddb4: 0x8b50  .word       0x00008B50                   # mfhi        $s1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ddb4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27ddb8:
    // 0x27ddb8: 0x0  nop
    ctx->pc = 0x27ddb8u;
    // NOP
label_27ddbc:
    // 0x27ddbc: 0x0  nop
    ctx->pc = 0x27ddbcu;
    // NOP
label_27ddc0:
    // 0x27ddc0: 0x15368  .word       0x00015368                   # mfsa        $t2 # 00010340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27ddc0u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_27ddc4:
    // 0x27ddc4: 0x4c80  sll         $t1, $zero, 18
    ctx->pc = 0x27ddc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_27ddc8:
    // 0x27ddc8: 0x0  nop
    ctx->pc = 0x27ddc8u;
    // NOP
label_27ddcc:
    // 0x27ddcc: 0x0  nop
    ctx->pc = 0x27ddccu;
    // NOP
label_27ddd0:
    // 0x27ddd0: 0x15372  tlt         $zero, $at, 333
    ctx->pc = 0x27ddd0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ddd4:
    // 0x27ddd4: 0x8e60  .word       0x00008E60                   # add         $s1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ddd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27ddd8:
    // 0x27ddd8: 0x0  nop
    ctx->pc = 0x27ddd8u;
    // NOP
label_27dddc:
    // 0x27dddc: 0x0  nop
    ctx->pc = 0x27dddcu;
    // NOP
label_27dde0:
    // 0x27dde0: 0x15384  .word       0x00015384                   # sllv        $t2, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dde0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27dde4:
    // 0x27dde4: 0xd1c0  sll         $k0, $zero, 7
    ctx->pc = 0x27dde4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27dde8:
    // 0x27dde8: 0x0  nop
    ctx->pc = 0x27dde8u;
    // NOP
label_27ddec:
    // 0x27ddec: 0x0  nop
    ctx->pc = 0x27ddecu;
    // NOP
label_27ddf0:
    // 0x27ddf0: 0x1539f  .word       0x0001539F                   # ddivu       $t2, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ddf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27DDF0 raw=0x0001539F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ddf4:
    // 0x27ddf4: 0xf170  tge         $zero, $zero, 965
    ctx->pc = 0x27ddf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ddf8:
    // 0x27ddf8: 0x0  nop
    ctx->pc = 0x27ddf8u;
    // NOP
label_27ddfc:
    // 0x27ddfc: 0x0  nop
    ctx->pc = 0x27ddfcu;
    // NOP
label_27de00:
    // 0x27de00: 0x153be  dsrl32      $t2, $at, 14
    ctx->pc = 0x27de00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) >> (32 + 14));
label_27de04:
    // 0x27de04: 0x5c70  tge         $zero, $zero, 369
    ctx->pc = 0x27de04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27de08:
    // 0x27de08: 0x0  nop
    ctx->pc = 0x27de08u;
    // NOP
label_27de0c:
    // 0x27de0c: 0x0  nop
    ctx->pc = 0x27de0cu;
    // NOP
label_27de10:
    // 0x27de10: 0x153ca  .word       0x000153CA                   # movz        $t2, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de10u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_27de14:
    // 0x27de14: 0x5610  .word       0x00005610                   # mfhi        $t2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27de18:
    // 0x27de18: 0x0  nop
    ctx->pc = 0x27de18u;
    // NOP
label_27de1c:
    // 0x27de1c: 0x0  nop
    ctx->pc = 0x27de1cu;
    // NOP
label_27de20:
    // 0x27de20: 0x153d5  .word       0x000153D5                   # INVALID     $zero, $at, 0x53D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27DE20 raw=0x000153D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27de24:
    // 0x27de24: 0x7450  .word       0x00007450                   # mfhi        $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de24u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27de28:
    // 0x27de28: 0x0  nop
    ctx->pc = 0x27de28u;
    // NOP
label_27de2c:
    // 0x27de2c: 0x0  nop
    ctx->pc = 0x27de2cu;
    // NOP
label_27de30:
    // 0x27de30: 0x153e4  .word       0x000153E4                   # and         $t2, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27de34:
    // 0x27de34: 0x5360  .word       0x00005360                   # add         $t2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27de38:
    // 0x27de38: 0x0  nop
    ctx->pc = 0x27de38u;
    // NOP
label_27de3c:
    // 0x27de3c: 0x0  nop
    ctx->pc = 0x27de3cu;
    // NOP
label_27de40:
    // 0x27de40: 0x153ef  .word       0x000153EF                   # dsubu       $t2, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27de44:
    // 0x27de44: 0x4d80  sll         $t1, $zero, 22
    ctx->pc = 0x27de44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_27de48:
    // 0x27de48: 0x0  nop
    ctx->pc = 0x27de48u;
    // NOP
label_27de4c:
    // 0x27de4c: 0x0  nop
    ctx->pc = 0x27de4cu;
    // NOP
label_27de50:
    // 0x27de50: 0x153f9  .word       0x000153F9                   # INVALID     $zero, $at, 0x53F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27DE50 raw=0x000153F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27de54:
    // 0x27de54: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_27de58:
    // 0x27de58: 0x0  nop
    ctx->pc = 0x27de58u;
    // NOP
label_27de5c:
    // 0x27de5c: 0x0  nop
    ctx->pc = 0x27de5cu;
    // NOP
label_27de60:
    // 0x27de60: 0x1541a  .word       0x0001541A                   # div         $t2, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de60u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27de64:
    // 0x27de64: 0x37b0  tge         $zero, $zero, 222
    ctx->pc = 0x27de64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27de68:
    // 0x27de68: 0x0  nop
    ctx->pc = 0x27de68u;
    // NOP
label_27de6c:
    // 0x27de6c: 0x0  nop
    ctx->pc = 0x27de6cu;
    // NOP
label_27de70:
    // 0x27de70: 0x15421  .word       0x00015421                   # addu        $t2, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27de74:
    // 0x27de74: 0xbe50  .word       0x0000BE50                   # mfhi        $s7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de74u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27de78:
    // 0x27de78: 0x0  nop
    ctx->pc = 0x27de78u;
    // NOP
label_27de7c:
    // 0x27de7c: 0x0  nop
    ctx->pc = 0x27de7cu;
    // NOP
label_27de80:
    // 0x27de80: 0x15439  .word       0x00015439                   # INVALID     $zero, $at, 0x5439 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27DE80 raw=0x00015439"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27de84:
    // 0x27de84: 0xc530  tge         $zero, $zero, 788
    ctx->pc = 0x27de84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27de88:
    // 0x27de88: 0x0  nop
    ctx->pc = 0x27de88u;
    // NOP
label_27de8c:
    // 0x27de8c: 0x0  nop
    ctx->pc = 0x27de8cu;
    // NOP
label_27de90:
    // 0x27de90: 0x15452  .word       0x00015452                   # mflo        $t2 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de90u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_27de94:
    // 0x27de94: 0x67d0  .word       0x000067D0                   # mfhi        $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27de94u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27de98:
    // 0x27de98: 0x0  nop
    ctx->pc = 0x27de98u;
    // NOP
label_27de9c:
    // 0x27de9c: 0x0  nop
    ctx->pc = 0x27de9cu;
    // NOP
label_27dea0:
    // 0x27dea0: 0x1545f  .word       0x0001545F                   # ddivu       $t2, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27DEA0 raw=0x0001545F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27dea4:
    // 0x27dea4: 0xdb40  sll         $k1, $zero, 13
    ctx->pc = 0x27dea4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27dea8:
    // 0x27dea8: 0x0  nop
    ctx->pc = 0x27dea8u;
    // NOP
label_27deac:
    // 0x27deac: 0x0  nop
    ctx->pc = 0x27deacu;
    // NOP
label_27deb0:
    // 0x27deb0: 0x1547b  dsra        $t2, $at, 17
    ctx->pc = 0x27deb0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> 17);
label_27deb4:
    // 0x27deb4: 0x9680  sll         $s2, $zero, 26
    ctx->pc = 0x27deb4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_27deb8:
    // 0x27deb8: 0x0  nop
    ctx->pc = 0x27deb8u;
    // NOP
label_27debc:
    // 0x27debc: 0x0  nop
    ctx->pc = 0x27debcu;
    // NOP
label_27dec0:
    // 0x27dec0: 0x1548e  .word       0x0001548E                   # INVALID     $zero, $at, 0x548E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27DEC0 raw=0x0001548E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27dec4:
    // 0x27dec4: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dec4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27dec8:
    // 0x27dec8: 0x0  nop
    ctx->pc = 0x27dec8u;
    // NOP
label_27decc:
    // 0x27decc: 0x0  nop
    ctx->pc = 0x27deccu;
    // NOP
label_27ded0:
    // 0x27ded0: 0x154a0  .word       0x000154A0                   # add         $t2, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ded0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27ded4:
    // 0x27ded4: 0xe170  tge         $zero, $zero, 901
    ctx->pc = 0x27ded4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ded8:
    // 0x27ded8: 0x0  nop
    ctx->pc = 0x27ded8u;
    // NOP
label_27dedc:
    // 0x27dedc: 0x0  nop
    ctx->pc = 0x27dedcu;
    // NOP
label_27dee0:
    // 0x27dee0: 0x154bd  .word       0x000154BD                   # INVALID     $zero, $at, 0x54BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dee0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27DEE0 raw=0x000154BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27dee4:
    // 0x27dee4: 0x5810  mfhi        $t3
    ctx->pc = 0x27dee4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27dee8:
    // 0x27dee8: 0x0  nop
    ctx->pc = 0x27dee8u;
    // NOP
label_27deec:
    // 0x27deec: 0x0  nop
    ctx->pc = 0x27deecu;
    // NOP
label_27def0:
    // 0x27def0: 0x154c9  .word       0x000154C9                   # jalr        $t2, $zero # 000104C0 <InstrIdType: CPU_SPECIAL>
label_27def4:
    if (ctx->pc == 0x27DEF4u) {
        ctx->pc = 0x27DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEF0u;
        // 0x27def4: 0xde20  .word       0x0000DE20                   # add         $k1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DEF8u;
        goto label_27def8;
    }
    ctx->pc = 0x27DEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x27DEF8u);
        ctx->pc = 0x27DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEF0u;
        // 0x27def4: 0xde20  .word       0x0000DE20                   # add         $k1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DEF0u, 0x27DEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DEF8u;
label_27def8:
    // 0x27def8: 0x0  nop
    ctx->pc = 0x27def8u;
    // NOP
label_27defc:
    // 0x27defc: 0x0  nop
    ctx->pc = 0x27defcu;
    // NOP
label_27df00:
    // 0x27df00: 0x154e5  .word       0x000154E5                   # or          $t2, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27df04:
    // 0x27df04: 0x7750  .word       0x00007750                   # mfhi        $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df04u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27df08:
    // 0x27df08: 0x0  nop
    ctx->pc = 0x27df08u;
    // NOP
label_27df0c:
    // 0x27df0c: 0x0  nop
    ctx->pc = 0x27df0cu;
    // NOP
label_27df10:
    // 0x27df10: 0x154f4  teq         $zero, $at, 339
    ctx->pc = 0x27df10u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27df14:
    // 0x27df14: 0xa2f0  tge         $zero, $zero, 651
    ctx->pc = 0x27df14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27df18:
    // 0x27df18: 0x0  nop
    ctx->pc = 0x27df18u;
    // NOP
label_27df1c:
    // 0x27df1c: 0x0  nop
    ctx->pc = 0x27df1cu;
    // NOP
label_27df20:
    // 0x27df20: 0x15509  .word       0x00015509                   # jalr        $t2, $zero # 00010500 <InstrIdType: CPU_SPECIAL>
label_27df24:
    if (ctx->pc == 0x27DF24u) {
        ctx->pc = 0x27DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF20u;
        // 0x27df24: 0x3640  sll         $a2, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DF28u;
        goto label_27df28;
    }
    ctx->pc = 0x27DF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x27DF28u);
        ctx->pc = 0x27DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF20u;
        // 0x27df24: 0x3640  sll         $a2, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DF20u, 0x27DF28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DF28u;
label_27df28:
    // 0x27df28: 0x0  nop
    ctx->pc = 0x27df28u;
    // NOP
label_27df2c:
    // 0x27df2c: 0x0  nop
    ctx->pc = 0x27df2cu;
    // NOP
label_27df30:
    // 0x27df30: 0x15510  .word       0x00015510                   # mfhi        $t2 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df30u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27df34:
    // 0x27df34: 0x7020  add         $t6, $zero, $zero
    ctx->pc = 0x27df34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27df38:
    // 0x27df38: 0x0  nop
    ctx->pc = 0x27df38u;
    // NOP
label_27df3c:
    // 0x27df3c: 0x0  nop
    ctx->pc = 0x27df3cu;
    // NOP
label_27df40:
    // 0x27df40: 0x1551f  .word       0x0001551F                   # ddivu       $t2, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27DF40 raw=0x0001551F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27df44:
    // 0x27df44: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df44u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27df48:
    // 0x27df48: 0x0  nop
    ctx->pc = 0x27df48u;
    // NOP
label_27df4c:
    // 0x27df4c: 0x0  nop
    ctx->pc = 0x27df4cu;
    // NOP
label_27df50:
    // 0x27df50: 0x1552a  .word       0x0001552A                   # slt         $t2, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df50u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27df54:
    // 0x27df54: 0x5020  add         $t2, $zero, $zero
    ctx->pc = 0x27df54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27df58:
    // 0x27df58: 0x0  nop
    ctx->pc = 0x27df58u;
    // NOP
label_27df5c:
    // 0x27df5c: 0x0  nop
    ctx->pc = 0x27df5cu;
    // NOP
label_27df60:
    // 0x27df60: 0x15535  .word       0x00015535                   # INVALID     $zero, $at, 0x5535 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27DF60 raw=0x00015535"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27df64:
    // 0x27df64: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df64u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27df68:
    // 0x27df68: 0x0  nop
    ctx->pc = 0x27df68u;
    // NOP
label_27df6c:
    // 0x27df6c: 0x0  nop
    ctx->pc = 0x27df6cu;
    // NOP
label_27df70:
    // 0x27df70: 0x15542  srl         $t2, $at, 21
    ctx->pc = 0x27df70u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 1), 21));
label_27df74:
    // 0x27df74: 0x9320  .word       0x00009320                   # add         $s2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27df78:
    // 0x27df78: 0x0  nop
    ctx->pc = 0x27df78u;
    // NOP
label_27df7c:
    // 0x27df7c: 0x0  nop
    ctx->pc = 0x27df7cu;
    // NOP
label_27df80:
    // 0x27df80: 0x15555  .word       0x00015555                   # INVALID     $zero, $at, 0x5555 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27DF80 raw=0x00015555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27df84:
    // 0x27df84: 0x4d10  .word       0x00004D10                   # mfhi        $t1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df84u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27df88:
    // 0x27df88: 0x0  nop
    ctx->pc = 0x27df88u;
    // NOP
label_27df8c:
    // 0x27df8c: 0x0  nop
    ctx->pc = 0x27df8cu;
    // NOP
label_27df90:
    // 0x27df90: 0x1555f  .word       0x0001555F                   # ddivu       $t2, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27DF90 raw=0x0001555F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27df94:
    // 0x27df94: 0x67e0  .word       0x000067E0                   # add         $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27df94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27df98:
    // 0x27df98: 0x0  nop
    ctx->pc = 0x27df98u;
    // NOP
label_27df9c:
    // 0x27df9c: 0x0  nop
    ctx->pc = 0x27df9cu;
    // NOP
label_27dfa0:
    // 0x27dfa0: 0x1556c  .word       0x0001556C                   # dadd        $t2, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_27dfa4:
    // 0x27dfa4: 0x8ed0  .word       0x00008ED0                   # mfhi        $s1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfa4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27dfa8:
    // 0x27dfa8: 0x0  nop
    ctx->pc = 0x27dfa8u;
    // NOP
label_27dfac:
    // 0x27dfac: 0x0  nop
    ctx->pc = 0x27dfacu;
    // NOP
label_27dfb0:
    // 0x27dfb0: 0x1557e  dsrl32      $t2, $at, 21
    ctx->pc = 0x27dfb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) >> (32 + 21));
label_27dfb4:
    // 0x27dfb4: 0x9850  .word       0x00009850                   # mfhi        $s3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfb4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27dfb8:
    // 0x27dfb8: 0x0  nop
    ctx->pc = 0x27dfb8u;
    // NOP
label_27dfbc:
    // 0x27dfbc: 0x0  nop
    ctx->pc = 0x27dfbcu;
    // NOP
label_27dfc0:
    // 0x27dfc0: 0x15592  .word       0x00015592                   # mflo        $t2 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfc0u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_27dfc4:
    // 0x27dfc4: 0xa040  sll         $s4, $zero, 1
    ctx->pc = 0x27dfc4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27dfc8:
    // 0x27dfc8: 0x0  nop
    ctx->pc = 0x27dfc8u;
    // NOP
label_27dfcc:
    // 0x27dfcc: 0x0  nop
    ctx->pc = 0x27dfccu;
    // NOP
label_27dfd0:
    // 0x27dfd0: 0x155a7  .word       0x000155A7                   # nor         $t2, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfd0u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27dfd4:
    // 0x27dfd4: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x27dfd4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27dfd8:
    // 0x27dfd8: 0x0  nop
    ctx->pc = 0x27dfd8u;
    // NOP
label_27dfdc:
    // 0x27dfdc: 0x0  nop
    ctx->pc = 0x27dfdcu;
    // NOP
label_27dfe0:
    // 0x27dfe0: 0x155ba  dsrl        $t2, $at, 22
    ctx->pc = 0x27dfe0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) >> 22);
label_27dfe4:
    // 0x27dfe4: 0xe310  .word       0x0000E310                   # mfhi        $gp # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dfe4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_27dfe8:
    // 0x27dfe8: 0x0  nop
    ctx->pc = 0x27dfe8u;
    // NOP
label_27dfec:
    // 0x27dfec: 0x0  nop
    ctx->pc = 0x27dfecu;
    // NOP
label_27dff0:
    // 0x27dff0: 0x155d7  .word       0x000155D7                   # dsrav       $t2, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27dff0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27dff4:
    // 0x27dff4: 0xc240  sll         $t8, $zero, 9
    ctx->pc = 0x27dff4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_27dff8:
    // 0x27dff8: 0x0  nop
    ctx->pc = 0x27dff8u;
    // NOP
label_27dffc:
    // 0x27dffc: 0x0  nop
    ctx->pc = 0x27dffcu;
    // NOP
label_27e000:
    // 0x27e000: 0x155f0  tge         $zero, $at, 343
    ctx->pc = 0x27e000u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e004:
    // 0x27e004: 0xfb00  sll         $ra, $zero, 12
    ctx->pc = 0x27e004u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27e008:
    // 0x27e008: 0x0  nop
    ctx->pc = 0x27e008u;
    // NOP
label_27e00c:
    // 0x27e00c: 0x0  nop
    ctx->pc = 0x27e00cu;
    // NOP
label_27e010:
    // 0x27e010: 0x15610  .word       0x00015610                   # mfhi        $t2 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e010u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27e014:
    // 0x27e014: 0xb010  mfhi        $s6
    ctx->pc = 0x27e014u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27e018:
    // 0x27e018: 0x0  nop
    ctx->pc = 0x27e018u;
    // NOP
label_27e01c:
    // 0x27e01c: 0x0  nop
    ctx->pc = 0x27e01cu;
    // NOP
label_27e020:
    // 0x27e020: 0x15627  .word       0x00015627                   # nor         $t2, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e020u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27e024:
    // 0x27e024: 0xcdc0  sll         $t9, $zero, 23
    ctx->pc = 0x27e024u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27e028:
    // 0x27e028: 0x0  nop
    ctx->pc = 0x27e028u;
    // NOP
label_27e02c:
    // 0x27e02c: 0x0  nop
    ctx->pc = 0x27e02cu;
    // NOP
label_27e030:
    // 0x27e030: 0x15641  .word       0x00015641                   # INVALID     $zero, $at, 0x5641 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e030u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27E030 raw=0x00015641"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e034:
    // 0x27e034: 0x12710  .word       0x00012710                   # mfhi        $a0 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e034u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_27e038:
    // 0x27e038: 0x0  nop
    ctx->pc = 0x27e038u;
    // NOP
label_27e03c:
    // 0x27e03c: 0x0  nop
    ctx->pc = 0x27e03cu;
    // NOP
label_27e040:
    // 0x27e040: 0x15666  .word       0x00015666                   # xor         $t2, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e040u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27e044:
    // 0x27e044: 0x7fc0  sll         $t7, $zero, 31
    ctx->pc = 0x27e044u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_27e048:
    // 0x27e048: 0x0  nop
    ctx->pc = 0x27e048u;
    // NOP
label_27e04c:
    // 0x27e04c: 0x0  nop
    ctx->pc = 0x27e04cu;
    // NOP
label_27e050:
    // 0x27e050: 0x15676  tne         $zero, $at, 345
    ctx->pc = 0x27e050u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e054:
    // 0x27e054: 0xb020  add         $s6, $zero, $zero
    ctx->pc = 0x27e054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_27e058:
    // 0x27e058: 0x0  nop
    ctx->pc = 0x27e058u;
    // NOP
label_27e05c:
    // 0x27e05c: 0x0  nop
    ctx->pc = 0x27e05cu;
    // NOP
label_27e060:
    // 0x27e060: 0x1568d  break       1, 346
    ctx->pc = 0x27e060u;
    runtime->handleBreak(rdram, ctx);
label_27e064:
    // 0x27e064: 0x12450  .word       0x00012450                   # mfhi        $a0 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e064u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_27e068:
    // 0x27e068: 0x0  nop
    ctx->pc = 0x27e068u;
    // NOP
label_27e06c:
    // 0x27e06c: 0x0  nop
    ctx->pc = 0x27e06cu;
    // NOP
label_27e070:
    // 0x27e070: 0x156b2  tlt         $zero, $at, 346
    ctx->pc = 0x27e070u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e074:
    // 0x27e074: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e074u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27e078:
    // 0x27e078: 0x0  nop
    ctx->pc = 0x27e078u;
    // NOP
label_27e07c:
    // 0x27e07c: 0x0  nop
    ctx->pc = 0x27e07cu;
    // NOP
label_27e080:
    // 0x27e080: 0x156c3  sra         $t2, $at, 27
    ctx->pc = 0x27e080u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 1), 27));
label_27e084:
    // 0x27e084: 0x9f00  sll         $s3, $zero, 28
    ctx->pc = 0x27e084u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27e088:
    // 0x27e088: 0x0  nop
    ctx->pc = 0x27e088u;
    // NOP
label_27e08c:
    // 0x27e08c: 0x0  nop
    ctx->pc = 0x27e08cu;
    // NOP
label_27e090:
    // 0x27e090: 0x156d7  .word       0x000156D7                   # dsrav       $t2, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e090u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27e094:
    // 0x27e094: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e094u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27e098:
    // 0x27e098: 0x0  nop
    ctx->pc = 0x27e098u;
    // NOP
label_27e09c:
    // 0x27e09c: 0x0  nop
    ctx->pc = 0x27e09cu;
    // NOP
label_27e0a0:
    // 0x27e0a0: 0x156e3  .word       0x000156E3                   # negu        $t2, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e0a4:
    // 0x27e0a4: 0xa9c0  sll         $s5, $zero, 7
    ctx->pc = 0x27e0a4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27e0a8:
    // 0x27e0a8: 0x0  nop
    ctx->pc = 0x27e0a8u;
    // NOP
label_27e0ac:
    // 0x27e0ac: 0x0  nop
    ctx->pc = 0x27e0acu;
    // NOP
label_27e0b0:
    // 0x27e0b0: 0x156f9  .word       0x000156F9                   # INVALID     $zero, $at, 0x56F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27E0B0 raw=0x000156F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e0b4:
    // 0x27e0b4: 0x6f00  sll         $t5, $zero, 28
    ctx->pc = 0x27e0b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27e0b8:
    // 0x27e0b8: 0x0  nop
    ctx->pc = 0x27e0b8u;
    // NOP
label_27e0bc:
    // 0x27e0bc: 0x0  nop
    ctx->pc = 0x27e0bcu;
    // NOP
label_27e0c0:
    // 0x27e0c0: 0x15707  .word       0x00015707                   # srav        $t2, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0c0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27e0c4:
    // 0x27e0c4: 0x7bf0  tge         $zero, $zero, 495
    ctx->pc = 0x27e0c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e0c8:
    // 0x27e0c8: 0x0  nop
    ctx->pc = 0x27e0c8u;
    // NOP
label_27e0cc:
    // 0x27e0cc: 0x0  nop
    ctx->pc = 0x27e0ccu;
    // NOP
label_27e0d0:
    // 0x27e0d0: 0x15717  .word       0x00015717                   # dsrav       $t2, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0d0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27e0d4:
    // 0x27e0d4: 0x9710  .word       0x00009710                   # mfhi        $s2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0d4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27e0d8:
    // 0x27e0d8: 0x0  nop
    ctx->pc = 0x27e0d8u;
    // NOP
label_27e0dc:
    // 0x27e0dc: 0x0  nop
    ctx->pc = 0x27e0dcu;
    // NOP
label_27e0e0:
    // 0x27e0e0: 0x1572a  .word       0x0001572A                   # slt         $t2, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0e0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27e0e4:
    // 0x27e0e4: 0xbfe0  .word       0x0000BFE0                   # add         $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27e0e8:
    // 0x27e0e8: 0x0  nop
    ctx->pc = 0x27e0e8u;
    // NOP
label_27e0ec:
    // 0x27e0ec: 0x0  nop
    ctx->pc = 0x27e0ecu;
    // NOP
label_27e0f0:
    // 0x27e0f0: 0x15742  srl         $t2, $at, 29
    ctx->pc = 0x27e0f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 1), 29));
label_27e0f4:
    // 0x27e0f4: 0xd670  tge         $zero, $zero, 857
    ctx->pc = 0x27e0f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e0f8:
    // 0x27e0f8: 0x0  nop
    ctx->pc = 0x27e0f8u;
    // NOP
label_27e0fc:
    // 0x27e0fc: 0x0  nop
    ctx->pc = 0x27e0fcu;
    // NOP
label_27e100:
    // 0x27e100: 0x1575d  .word       0x0001575D                   # dmultu      $zero, $at # 00005740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27E100 raw=0x0001575D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e104:
    // 0x27e104: 0x9890  .word       0x00009890                   # mfhi        $s3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e104u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27e108:
    // 0x27e108: 0x0  nop
    ctx->pc = 0x27e108u;
    // NOP
label_27e10c:
    // 0x27e10c: 0x0  nop
    ctx->pc = 0x27e10cu;
    // NOP
label_27e110:
    // 0x27e110: 0x15771  tgeu        $zero, $at, 349
    ctx->pc = 0x27e110u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e114:
    // 0x27e114: 0xb450  .word       0x0000B450                   # mfhi        $s6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e114u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27e118:
    // 0x27e118: 0x0  nop
    ctx->pc = 0x27e118u;
    // NOP
label_27e11c:
    // 0x27e11c: 0x0  nop
    ctx->pc = 0x27e11cu;
    // NOP
label_27e120:
    // 0x27e120: 0x15788  .word       0x00015788                   # jr          $zero # 00015780 <InstrIdType: CPU_SPECIAL>
label_27e124:
    if (ctx->pc == 0x27E124u) {
        ctx->pc = 0x27E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E120u;
        // 0x27e124: 0xafa0  .word       0x0000AFA0                   # add         $s5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E128u;
        goto label_27e128;
    }
    ctx->pc = 0x27E120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E120u;
        // 0x27e124: 0xafa0  .word       0x0000AFA0                   # add         $s5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E120u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27E128u;
label_27e128:
    // 0x27e128: 0x0  nop
    ctx->pc = 0x27e128u;
    // NOP
label_27e12c:
    // 0x27e12c: 0x0  nop
    ctx->pc = 0x27e12cu;
    // NOP
label_27e130:
    // 0x27e130: 0x1579e  .word       0x0001579E                   # ddiv        $t2, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27E130 raw=0x0001579E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e134:
    // 0x27e134: 0x8f50  .word       0x00008F50                   # mfhi        $s1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e134u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27e138:
    // 0x27e138: 0x0  nop
    ctx->pc = 0x27e138u;
    // NOP
label_27e13c:
    // 0x27e13c: 0x0  nop
    ctx->pc = 0x27e13cu;
    // NOP
label_27e140:
    // 0x27e140: 0x157b0  tge         $zero, $at, 350
    ctx->pc = 0x27e140u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e144:
    // 0x27e144: 0xae00  sll         $s5, $zero, 24
    ctx->pc = 0x27e144u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_27e148:
    // 0x27e148: 0x0  nop
    ctx->pc = 0x27e148u;
    // NOP
label_27e14c:
    // 0x27e14c: 0x0  nop
    ctx->pc = 0x27e14cu;
    // NOP
    ctx->pc = 0x27e150u;
    return;
}
