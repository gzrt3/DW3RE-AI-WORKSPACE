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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part497(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28d918u: goto label_28d918;
        case 0x28d91cu: goto label_28d91c;
        case 0x28d920u: goto label_28d920;
        case 0x28d924u: goto label_28d924;
        case 0x28d928u: goto label_28d928;
        case 0x28d92cu: goto label_28d92c;
        case 0x28d930u: goto label_28d930;
        case 0x28d934u: goto label_28d934;
        case 0x28d938u: goto label_28d938;
        case 0x28d93cu: goto label_28d93c;
        case 0x28d940u: goto label_28d940;
        case 0x28d944u: goto label_28d944;
        case 0x28d948u: goto label_28d948;
        case 0x28d94cu: goto label_28d94c;
        case 0x28d950u: goto label_28d950;
        case 0x28d954u: goto label_28d954;
        case 0x28d958u: goto label_28d958;
        case 0x28d95cu: goto label_28d95c;
        case 0x28d960u: goto label_28d960;
        case 0x28d964u: goto label_28d964;
        case 0x28d968u: goto label_28d968;
        case 0x28d96cu: goto label_28d96c;
        case 0x28d970u: goto label_28d970;
        case 0x28d974u: goto label_28d974;
        case 0x28d978u: goto label_28d978;
        case 0x28d97cu: goto label_28d97c;
        case 0x28d980u: goto label_28d980;
        case 0x28d984u: goto label_28d984;
        case 0x28d988u: goto label_28d988;
        case 0x28d98cu: goto label_28d98c;
        case 0x28d990u: goto label_28d990;
        case 0x28d994u: goto label_28d994;
        case 0x28d998u: goto label_28d998;
        case 0x28d99cu: goto label_28d99c;
        case 0x28d9a0u: goto label_28d9a0;
        case 0x28d9a4u: goto label_28d9a4;
        case 0x28d9a8u: goto label_28d9a8;
        case 0x28d9acu: goto label_28d9ac;
        case 0x28d9b0u: goto label_28d9b0;
        case 0x28d9b4u: goto label_28d9b4;
        case 0x28d9b8u: goto label_28d9b8;
        case 0x28d9bcu: goto label_28d9bc;
        case 0x28d9c0u: goto label_28d9c0;
        case 0x28d9c4u: goto label_28d9c4;
        case 0x28d9c8u: goto label_28d9c8;
        case 0x28d9ccu: goto label_28d9cc;
        case 0x28d9d0u: goto label_28d9d0;
        case 0x28d9d4u: goto label_28d9d4;
        case 0x28d9d8u: goto label_28d9d8;
        case 0x28d9dcu: goto label_28d9dc;
        case 0x28d9e0u: goto label_28d9e0;
        case 0x28d9e4u: goto label_28d9e4;
        case 0x28d9e8u: goto label_28d9e8;
        case 0x28d9ecu: goto label_28d9ec;
        case 0x28d9f0u: goto label_28d9f0;
        case 0x28d9f4u: goto label_28d9f4;
        case 0x28d9f8u: goto label_28d9f8;
        case 0x28d9fcu: goto label_28d9fc;
        case 0x28da00u: goto label_28da00;
        case 0x28da04u: goto label_28da04;
        case 0x28da08u: goto label_28da08;
        case 0x28da0cu: goto label_28da0c;
        case 0x28da10u: goto label_28da10;
        case 0x28da14u: goto label_28da14;
        case 0x28da18u: goto label_28da18;
        case 0x28da1cu: goto label_28da1c;
        case 0x28da20u: goto label_28da20;
        case 0x28da24u: goto label_28da24;
        case 0x28da28u: goto label_28da28;
        case 0x28da2cu: goto label_28da2c;
        case 0x28da30u: goto label_28da30;
        case 0x28da34u: goto label_28da34;
        case 0x28da38u: goto label_28da38;
        case 0x28da3cu: goto label_28da3c;
        case 0x28da40u: goto label_28da40;
        case 0x28da44u: goto label_28da44;
        case 0x28da48u: goto label_28da48;
        case 0x28da4cu: goto label_28da4c;
        case 0x28da50u: goto label_28da50;
        case 0x28da54u: goto label_28da54;
        case 0x28da58u: goto label_28da58;
        case 0x28da5cu: goto label_28da5c;
        case 0x28da60u: goto label_28da60;
        case 0x28da64u: goto label_28da64;
        case 0x28da68u: goto label_28da68;
        case 0x28da6cu: goto label_28da6c;
        case 0x28da70u: goto label_28da70;
        case 0x28da74u: goto label_28da74;
        case 0x28da78u: goto label_28da78;
        case 0x28da7cu: goto label_28da7c;
        case 0x28da80u: goto label_28da80;
        case 0x28da84u: goto label_28da84;
        case 0x28da88u: goto label_28da88;
        case 0x28da8cu: goto label_28da8c;
        case 0x28da90u: goto label_28da90;
        case 0x28da94u: goto label_28da94;
        case 0x28da98u: goto label_28da98;
        case 0x28da9cu: goto label_28da9c;
        case 0x28daa0u: goto label_28daa0;
        case 0x28daa4u: goto label_28daa4;
        case 0x28daa8u: goto label_28daa8;
        case 0x28daacu: goto label_28daac;
        case 0x28dab0u: goto label_28dab0;
        case 0x28dab4u: goto label_28dab4;
        case 0x28dab8u: goto label_28dab8;
        case 0x28dabcu: goto label_28dabc;
        case 0x28dac0u: goto label_28dac0;
        case 0x28dac4u: goto label_28dac4;
        case 0x28dac8u: goto label_28dac8;
        case 0x28daccu: goto label_28dacc;
        case 0x28dad0u: goto label_28dad0;
        case 0x28dad4u: goto label_28dad4;
        case 0x28dad8u: goto label_28dad8;
        case 0x28dadcu: goto label_28dadc;
        case 0x28dae0u: goto label_28dae0;
        case 0x28dae4u: goto label_28dae4;
        case 0x28dae8u: goto label_28dae8;
        case 0x28daecu: goto label_28daec;
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
        default: return;
    }

label_28d918:
    // 0x28d918: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d918u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d91c:
    // 0x28d91c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d91cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d920:
    // 0x28d920: 0x0  nop
    ctx->pc = 0x28d920u;
    // NOP
label_28d924:
    // 0x28d924: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x28d924u;
    // CACHE instruction (ignored)
label_28d928:
    // 0x28d928: 0x0  nop
    ctx->pc = 0x28d928u;
    // NOP
label_28d92c:
    // 0x28d92c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d92cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d930:
    // 0x28d930: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d930u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28d934:
    // 0x28d934: 0x9e  .word       0x0000009E                   # ddiv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d934u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28D934 raw=0x0000009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d938:
    // 0x28d938: 0x9e  .word       0x0000009E                   # ddiv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d938u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28D938 raw=0x0000009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d93c:
    // 0x28d93c: 0x0  nop
    ctx->pc = 0x28d93cu;
    // NOP
label_28d940:
    // 0x28d940: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28D940 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d944:
    // 0x28d944: 0x0  nop
    ctx->pc = 0x28d944u;
    // NOP
label_28d948:
    // 0x28d948: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28d948u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28d94c:
    // 0x28d94c: 0x0  nop
    ctx->pc = 0x28d94cu;
    // NOP
label_28d950:
    // 0x28d950: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28d950u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28d954:
    // 0x28d954: 0x0  nop
    ctx->pc = 0x28d954u;
    // NOP
label_28d958:
    // 0x28d958: 0x8  jr          $zero
label_28d95c:
    if (ctx->pc == 0x28D95Cu) {
        ctx->pc = 0x28D960u;
        goto label_28d960;
    }
    ctx->pc = 0x28D958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D958u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D960u;
label_28d960:
    // 0x28d960: 0x10  mfhi        $zero
    ctx->pc = 0x28d960u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28d964:
    // 0x28d964: 0x0  nop
    ctx->pc = 0x28d964u;
    // NOP
label_28d968:
    // 0x28d968: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28d968u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28d96c:
    // 0x28d96c: 0x0  nop
    ctx->pc = 0x28d96cu;
    // NOP
label_28d970:
    // 0x28d970: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x28d970u;
    
label_28d974:
    // 0x28d974: 0x0  nop
    ctx->pc = 0x28d974u;
    // NOP
label_28d978:
    // 0x28d978: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x28d978u;
    
label_28d97c:
    // 0x28d97c: 0x0  nop
    ctx->pc = 0x28d97cu;
    // NOP
label_28d980:
    // 0x28d980: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x28d980u;
    
label_28d984:
    // 0x28d984: 0x0  nop
    ctx->pc = 0x28d984u;
    // NOP
label_28d988:
    // 0x28d988: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x28d988u;
    
label_28d98c:
    // 0x28d98c: 0x0  nop
    ctx->pc = 0x28d98cu;
    // NOP
label_28d990:
    // 0x28d990: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28d990u;
    
label_28d994:
    // 0x28d994: 0x0  nop
    ctx->pc = 0x28d994u;
    // NOP
label_28d998:
    // 0x28d998: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28d998u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28d99c:
    // 0x28d99c: 0x0  nop
    ctx->pc = 0x28d99cu;
    // NOP
label_28d9a0:
    // 0x28d9a0: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x28d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28d9a4:
    // 0x28d9a4: 0x0  nop
    ctx->pc = 0x28d9a4u;
    // NOP
label_28d9a8:
    // 0x28d9a8: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x28d9a8u;
    
label_28d9ac:
    // 0x28d9ac: 0x0  nop
    ctx->pc = 0x28d9acu;
    // NOP
label_28d9b0:
    // 0x28d9b0: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x28d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28d9b4:
    // 0x28d9b4: 0x0  nop
    ctx->pc = 0x28d9b4u;
    // NOP
label_28d9b8:
    // 0x28d9b8: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x28d9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28d9bc:
    // 0x28d9bc: 0x0  nop
    ctx->pc = 0x28d9bcu;
    // NOP
label_28d9c0:
    // 0x28d9c0: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x28d9c0u;
    
label_28d9c4:
    // 0x28d9c4: 0x0  nop
    ctx->pc = 0x28d9c4u;
    // NOP
label_28d9c8:
    // 0x28d9c8: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x28d9c8u;
    
label_28d9cc:
    // 0x28d9cc: 0x0  nop
    ctx->pc = 0x28d9ccu;
    // NOP
label_28d9d0:
    // 0x28d9d0: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x28d9d0u;
    
label_28d9d4:
    // 0x28d9d4: 0x0  nop
    ctx->pc = 0x28d9d4u;
    // NOP
label_28d9d8:
    // 0x28d9d8: 0x200000  .word       0x00200000                   # sll         $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d9d8u;
    // NOP
label_28d9dc:
    // 0x28d9dc: 0x0  nop
    ctx->pc = 0x28d9dcu;
    // NOP
label_28d9e0:
    // 0x28d9e0: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d9e0u;
    // NOP
label_28d9e4:
    // 0x28d9e4: 0x0  nop
    ctx->pc = 0x28d9e4u;
    // NOP
label_28d9e8:
    // 0x28d9e8: 0x800000  .word       0x00800000                   # sll         $zero, $zero, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d9e8u;
    // NOP
label_28d9ec:
    // 0x28d9ec: 0x0  nop
    ctx->pc = 0x28d9ecu;
    // NOP
label_28d9f0:
    // 0x28d9f0: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d9f0u;
    // NOP
label_28d9f4:
    // 0x28d9f4: 0x0  nop
    ctx->pc = 0x28d9f4u;
    // NOP
label_28d9f8:
    // 0x28d9f8: 0x8000000  j           func_000000
label_28d9fc:
    if (ctx->pc == 0x28D9FCu) {
        ctx->pc = 0x28DA00u;
        goto label_28da00;
    }
    ctx->pc = 0x28D9F8u;
    ctx->pc = 0x0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x0u, 0x28D9F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28DA00u;
label_28da00:
    // 0x28da00: 0x4000000  bltz        $zero, . + 4 + (0x0 << 2)
label_28da04:
    if (ctx->pc == 0x28DA04u) {
        ctx->pc = 0x28DA08u;
        goto label_28da08;
    }
    ctx->pc = 0x28DA00u;
    {
        const bool branch_taken_0x28da00 = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x28da00) {
            ctx->pc = 0x28DA04u;
            goto label_28da04;
        }
    }
    ctx->pc = 0x28DA08u;
label_28da08:
    // 0x28da08: 0x2000000  .word       0x02000000                   # sll         $zero, $zero, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28da08u;
    // NOP
label_28da0c:
    // 0x28da0c: 0x0  nop
    ctx->pc = 0x28da0cu;
    // NOP
label_28da10:
    // 0x28da10: 0x10000000  b           . + 4 + (0x0 << 2)
label_28da14:
    if (ctx->pc == 0x28DA14u) {
        ctx->pc = 0x28DA18u;
        goto label_28da18;
    }
    ctx->pc = 0x28DA10u;
    {
        const bool branch_taken_0x28da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28da10) {
            ctx->pc = 0x28DA14u;
            goto label_28da14;
        }
    }
    ctx->pc = 0x28DA18u;
label_28da18:
    // 0x28da18: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x28da18u;
    // NOP (addi to $zero)
label_28da1c:
    // 0x28da1c: 0x0  nop
    ctx->pc = 0x28da1cu;
    // NOP
label_28da20:
    // 0x28da20: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x28da20u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_28da24:
    // 0x28da24: 0x0  nop
    ctx->pc = 0x28da24u;
    // NOP
label_28da28:
    // 0x28da28: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x28da28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_28da2c:
    // 0x28da2c: 0x0  nop
    ctx->pc = 0x28da2cu;
    // NOP
label_28da30:
    // 0x28da30: 0x0  nop
    ctx->pc = 0x28da30u;
    // NOP
label_28da34:
    // 0x28da34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28da34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28DA34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28da38:
    // 0x28da38: 0x0  nop
    ctx->pc = 0x28da38u;
    // NOP
label_28da3c:
    // 0x28da3c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28da3cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28da40:
    // 0x28da40: 0x0  nop
    ctx->pc = 0x28da40u;
    // NOP
label_28da44:
    // 0x28da44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28da44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28da48:
    // 0x28da48: 0x0  nop
    ctx->pc = 0x28da48u;
    // NOP
label_28da4c:
    // 0x28da4c: 0x8  jr          $zero
label_28da50:
    if (ctx->pc == 0x28DA50u) {
        ctx->pc = 0x28DA54u;
        goto label_28da54;
    }
    ctx->pc = 0x28DA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DA4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28DA54u;
label_28da54:
    // 0x28da54: 0x10  mfhi        $zero
    ctx->pc = 0x28da54u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28da58:
    // 0x28da58: 0x0  nop
    ctx->pc = 0x28da58u;
    // NOP
label_28da5c:
    // 0x28da5c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28da5cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28da60:
    // 0x28da60: 0x0  nop
    ctx->pc = 0x28da60u;
    // NOP
label_28da64:
    // 0x28da64: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x28da64u;
    
label_28da68:
    // 0x28da68: 0x0  nop
    ctx->pc = 0x28da68u;
    // NOP
label_28da6c:
    // 0x28da6c: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x28da6cu;
    
label_28da70:
    // 0x28da70: 0x27231b0c  addiu       $v1, $t9, 0x1B0C
    ctx->pc = 0x28da70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 6924));
label_28da74:
    // 0x28da74: 0x16040317  bne         $s0, $a0, . + 4 + (0x317 << 2)
label_28da78:
    if (ctx->pc == 0x28DA78u) {
        ctx->pc = 0x28DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA74u;
        // 0x28da78: 0x1010151e  beq         $zero, $s0, . + 4 + (0x151E << 2) (Delay Slot)
        // Likely branch instruction at 0x28DA78 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA7Cu;
        goto label_28da7c;
    }
    ctx->pc = 0x28DA74u;
    {
        const bool branch_taken_0x28da74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x28DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA74u;
        // 0x28da78: 0x1010151e  beq         $zero, $s0, . + 4 + (0x151E << 2) (Delay Slot)
        // Likely branch instruction at 0x28DA78 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da74) {
            ctx->pc = 0x28E6D4u;
            { ctx->pc = 0x28e6d4; return; }
        }
    }
    ctx->pc = 0x28DA7Cu;
label_28da7c:
    // 0x28da7c: 0xa0d0720  j           func_8341C80
label_28da80:
    if (ctx->pc == 0x28DA80u) {
        ctx->pc = 0x28DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA7Cu;
        // 0x28da80: 0x1300140e  beqz        $t8, . + 4 + (0x140E << 2) (Delay Slot)
        // Likely branch instruction at 0x28DA80 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA84u;
        goto label_28da84;
    }
    ctx->pc = 0x28DA7Cu;
    ctx->pc = 0x28DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA7Cu;
    // 0x28da80: 0x1300140e  beqz        $t8, . + 4 + (0x140E << 2) (Delay Slot)
    // Likely branch instruction at 0x28DA80 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8341C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8341C80u, 0x28DA7Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28DA84u;
label_28da84:
    // 0x28da84: 0x24110c22  addiu       $s1, $zero, 0xC22
    ctx->pc = 0x28da84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3106));
label_28da88:
    // 0x28da88: 0x40b1728  tltiu       $zero, 0x1728
    ctx->pc = 0x28da88u;
    if (GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)5928) { runtime->handleTrap(rdram, ctx); }
label_28da8c:
    // 0x28da8c: 0x10151e1c  beq         $zero, $s5, . + 4 + (0x1E1C << 2)
label_28da90:
    if (ctx->pc == 0x28DA90u) {
        ctx->pc = 0x28DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA8Cu;
        // 0x28da90: 0x251f1806  addiu       $ra, $t0, 0x1806 (Delay Slot)
        SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 8), 6150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA94u;
        goto label_28da94;
    }
    ctx->pc = 0x28DA8Cu;
    {
        const bool branch_taken_0x28da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        ctx->pc = 0x28DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA8Cu;
        // 0x28da90: 0x251f1806  addiu       $ra, $t0, 0x1806 (Delay Slot)
        SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 8), 6150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da8c) {
            ctx->pc = 0x295300u;
            { ctx->pc = 0x295300; return; }
        }
    }
    ctx->pc = 0x28DA94u;
label_28da94:
    // 0x28da94: 0x1140e0a  .word       0x01140E0A                   # movz        $at, $t0, $s4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28da94u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 8));
label_28da98:
    // 0x28da98: 0x120c1a00  beq         $s0, $t4, . + 4 + (0x1A00 << 2)
label_28da9c:
    if (ctx->pc == 0x28DA9Cu) {
        ctx->pc = 0x28DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA98u;
        // 0x28da9c: 0xb170924  j           func_C5C2490 (Delay Slot)
        // J 0xC5C2490 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAA0u;
        goto label_28daa0;
    }
    ctx->pc = 0x28DA98u;
    {
        const bool branch_taken_0x28da98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x28DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA98u;
        // 0x28da9c: 0xb170924  j           func_C5C2490 (Delay Slot)
        // J 0xC5C2490 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da98) {
            ctx->pc = 0x29429Cu;
            { ctx->pc = 0x29429c; return; }
        }
    }
    ctx->pc = 0x28DAA0u;
label_28daa0:
    // 0x28daa0: 0x151d0503  bne         $t0, $sp, . + 4 + (0x503 << 2)
label_28daa4:
    if (ctx->pc == 0x28DAA4u) {
        ctx->pc = 0x28DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAA0u;
        // 0x28daa4: 0x19082010  .word       0x19082010                   # blez        $t0, . + 4 + (0x2010 << 2) # 00080000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28DAA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAA8u;
        goto label_28daa8;
    }
    ctx->pc = 0x28DAA0u;
    {
        const bool branch_taken_0x28daa0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 29));
        ctx->pc = 0x28DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAA0u;
        // 0x28daa4: 0x19082010  .word       0x19082010                   # blez        $t0, . + 4 + (0x2010 << 2) # 00080000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28DAA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28daa0) {
            ctx->pc = 0x28EEB0u;
            { ctx->pc = 0x28eeb0; return; }
        }
    }
    ctx->pc = 0x28DAA8u;
label_28daa8:
    // 0x28daa8: 0x140e0a26  bne         $zero, $t6, . + 4 + (0xA26 << 2)
label_28daac:
    if (ctx->pc == 0x28DAACu) {
        ctx->pc = 0x28DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAA8u;
        // 0x28daac: 0x210201  .word       0x00210201                   # INVALID     $at, $at, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28DAAC raw=0x00210201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAB0u;
        goto label_28dab0;
    }
    ctx->pc = 0x28DAA8u;
    {
        const bool branch_taken_0x28daa8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 14));
        ctx->pc = 0x28DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAA8u;
        // 0x28daac: 0x210201  .word       0x00210201                   # INVALID     $at, $at, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28DAAC raw=0x00210201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28daa8) {
            ctx->pc = 0x290344u;
            { ctx->pc = 0x290344; return; }
        }
    }
    ctx->pc = 0x28DAB0u;
label_28dab0:
    // 0x28dab0: 0x121b160c  beq         $s0, $k1, . + 4 + (0x160C << 2)
label_28dab4:
    if (ctx->pc == 0x28DAB4u) {
        ctx->pc = 0x28DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB0u;
        // 0x28dab4: 0x9112423  j           func_444908C (Delay Slot)
        // J 0x444908C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAB8u;
        goto label_28dab8;
    }
    ctx->pc = 0x28DAB0u;
    {
        const bool branch_taken_0x28dab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 27));
        ctx->pc = 0x28DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB0u;
        // 0x28dab4: 0x9112423  j           func_444908C (Delay Slot)
        // J 0x444908C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dab0) {
            ctx->pc = 0x2932E4u;
            { ctx->pc = 0x2932e4; return; }
        }
    }
    ctx->pc = 0x28DAB8u;
label_28dab8:
    // 0x28dab8: 0x1314210e  beq         $t8, $s4, . + 4 + (0x210E << 2)
label_28dabc:
    if (ctx->pc == 0x28DABCu) {
        ctx->pc = 0x28DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB8u;
        // 0x28dabc: 0xa000201  j           func_8000804 (Delay Slot)
        // J 0x8000804 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAC0u;
        goto label_28dac0;
    }
    ctx->pc = 0x28DAB8u;
    {
        const bool branch_taken_0x28dab8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 20));
        ctx->pc = 0x28DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB8u;
        // 0x28dabc: 0xa000201  j           func_8000804 (Delay Slot)
        // J 0x8000804 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dab8) {
            ctx->pc = 0x295EF4u;
            { ctx->pc = 0x295ef4; return; }
        }
    }
    ctx->pc = 0x28DAC0u;
label_28dac0:
    // 0x28dac0: 0x100d1920  beq         $zero, $t5, . + 4 + (0x1920 << 2)
label_28dac4:
    if (ctx->pc == 0x28DAC4u) {
        ctx->pc = 0x28DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAC0u;
        // 0x28dac4: 0x60f2625  .word       0x060F2625                   # INVALID     $s0, $t7, 0x2625 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x28DAC4 raw=0x060F2625");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAC8u;
        goto label_28dac8;
    }
    ctx->pc = 0x28DAC0u;
    {
        const bool branch_taken_0x28dac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x28DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAC0u;
        // 0x28dac4: 0x60f2625  .word       0x060F2625                   # INVALID     $s0, $t7, 0x2625 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x28DAC4 raw=0x060F2625");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dac0) {
            ctx->pc = 0x293F44u;
            { ctx->pc = 0x293f44; return; }
        }
    }
    ctx->pc = 0x28DAC8u;
label_28dac8:
    // 0x28dac8: 0x1e1c150b  .word       0x1E1C150B                   # bgtz        $s0, . + 4 + (0x150B << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
label_28dacc:
    if (ctx->pc == 0x28DACCu) {
        ctx->pc = 0x28DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAC8u;
        // 0x28dacc: 0x3170405  .word       0x03170405                   # INVALID     $t8, $s7, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28DACC raw=0x03170405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAD0u;
        goto label_28dad0;
    }
    ctx->pc = 0x28DAC8u;
    {
        const bool branch_taken_0x28dac8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x28DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAC8u;
        // 0x28dacc: 0x3170405  .word       0x03170405                   # INVALID     $t8, $s7, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28DACC raw=0x03170405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dac8) {
            ctx->pc = 0x292EF8u;
            { ctx->pc = 0x292ef8; return; }
        }
    }
    ctx->pc = 0x28DAD0u;
label_28dad0:
    // 0x28dad0: 0x0  nop
    ctx->pc = 0x28dad0u;
    // NOP
label_28dad4:
    // 0x28dad4: 0x0  nop
    ctx->pc = 0x28dad4u;
    // NOP
label_28dad8:
    // 0x28dad8: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28dad8u;
    // NOP
label_28dadc:
    // 0x28dadc: 0x0  nop
    ctx->pc = 0x28dadcu;
    // NOP
label_28dae0:
    // 0x28dae0: 0x0  nop
    ctx->pc = 0x28dae0u;
    // NOP
label_28dae4:
    // 0x28dae4: 0x0  nop
    ctx->pc = 0x28dae4u;
    // NOP
label_28dae8:
    // 0x28dae8: 0x0  nop
    ctx->pc = 0x28dae8u;
    // NOP
label_28daec:
    // 0x28daec: 0x0  nop
    ctx->pc = 0x28daecu;
    // NOP
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
    ctx->pc = 0x28e0e8u;
    return;
}
