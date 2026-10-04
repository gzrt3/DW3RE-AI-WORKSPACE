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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part5(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29d928u: goto label_29d928;
        case 0x29d92cu: goto label_29d92c;
        case 0x29d930u: goto label_29d930;
        case 0x29d934u: goto label_29d934;
        case 0x29d938u: goto label_29d938;
        case 0x29d93cu: goto label_29d93c;
        case 0x29d940u: goto label_29d940;
        case 0x29d944u: goto label_29d944;
        case 0x29d948u: goto label_29d948;
        case 0x29d94cu: goto label_29d94c;
        case 0x29d950u: goto label_29d950;
        case 0x29d954u: goto label_29d954;
        case 0x29d958u: goto label_29d958;
        case 0x29d95cu: goto label_29d95c;
        case 0x29d960u: goto label_29d960;
        case 0x29d964u: goto label_29d964;
        case 0x29d968u: goto label_29d968;
        case 0x29d96cu: goto label_29d96c;
        case 0x29d970u: goto label_29d970;
        case 0x29d974u: goto label_29d974;
        case 0x29d978u: goto label_29d978;
        case 0x29d97cu: goto label_29d97c;
        case 0x29d980u: goto label_29d980;
        case 0x29d984u: goto label_29d984;
        case 0x29d988u: goto label_29d988;
        case 0x29d98cu: goto label_29d98c;
        case 0x29d990u: goto label_29d990;
        case 0x29d994u: goto label_29d994;
        case 0x29d998u: goto label_29d998;
        case 0x29d99cu: goto label_29d99c;
        case 0x29d9a0u: goto label_29d9a0;
        case 0x29d9a4u: goto label_29d9a4;
        case 0x29d9a8u: goto label_29d9a8;
        case 0x29d9acu: goto label_29d9ac;
        case 0x29d9b0u: goto label_29d9b0;
        case 0x29d9b4u: goto label_29d9b4;
        case 0x29d9b8u: goto label_29d9b8;
        case 0x29d9bcu: goto label_29d9bc;
        case 0x29d9c0u: goto label_29d9c0;
        case 0x29d9c4u: goto label_29d9c4;
        case 0x29d9c8u: goto label_29d9c8;
        case 0x29d9ccu: goto label_29d9cc;
        case 0x29d9d0u: goto label_29d9d0;
        case 0x29d9d4u: goto label_29d9d4;
        case 0x29d9d8u: goto label_29d9d8;
        case 0x29d9dcu: goto label_29d9dc;
        case 0x29d9e0u: goto label_29d9e0;
        case 0x29d9e4u: goto label_29d9e4;
        case 0x29d9e8u: goto label_29d9e8;
        case 0x29d9ecu: goto label_29d9ec;
        case 0x29d9f0u: goto label_29d9f0;
        case 0x29d9f4u: goto label_29d9f4;
        case 0x29d9f8u: goto label_29d9f8;
        case 0x29d9fcu: goto label_29d9fc;
        case 0x29da00u: goto label_29da00;
        case 0x29da04u: goto label_29da04;
        case 0x29da08u: goto label_29da08;
        case 0x29da0cu: goto label_29da0c;
        case 0x29da10u: goto label_29da10;
        case 0x29da14u: goto label_29da14;
        case 0x29da18u: goto label_29da18;
        case 0x29da1cu: goto label_29da1c;
        case 0x29da20u: goto label_29da20;
        case 0x29da24u: goto label_29da24;
        case 0x29da28u: goto label_29da28;
        case 0x29da2cu: goto label_29da2c;
        case 0x29da30u: goto label_29da30;
        case 0x29da34u: goto label_29da34;
        case 0x29da38u: goto label_29da38;
        case 0x29da3cu: goto label_29da3c;
        case 0x29da40u: goto label_29da40;
        case 0x29da44u: goto label_29da44;
        case 0x29da48u: goto label_29da48;
        case 0x29da4cu: goto label_29da4c;
        case 0x29da50u: goto label_29da50;
        case 0x29da54u: goto label_29da54;
        case 0x29da58u: goto label_29da58;
        case 0x29da5cu: goto label_29da5c;
        case 0x29da60u: goto label_29da60;
        case 0x29da64u: goto label_29da64;
        case 0x29da68u: goto label_29da68;
        case 0x29da6cu: goto label_29da6c;
        case 0x29da70u: goto label_29da70;
        case 0x29da74u: goto label_29da74;
        case 0x29da78u: goto label_29da78;
        case 0x29da7cu: goto label_29da7c;
        case 0x29da80u: goto label_29da80;
        case 0x29da84u: goto label_29da84;
        case 0x29da88u: goto label_29da88;
        case 0x29da8cu: goto label_29da8c;
        case 0x29da90u: goto label_29da90;
        case 0x29da94u: goto label_29da94;
        case 0x29da98u: goto label_29da98;
        case 0x29da9cu: goto label_29da9c;
        case 0x29daa0u: goto label_29daa0;
        case 0x29daa4u: goto label_29daa4;
        case 0x29daa8u: goto label_29daa8;
        case 0x29daacu: goto label_29daac;
        case 0x29dab0u: goto label_29dab0;
        case 0x29dab4u: goto label_29dab4;
        case 0x29dab8u: goto label_29dab8;
        case 0x29dabcu: goto label_29dabc;
        case 0x29dac0u: goto label_29dac0;
        case 0x29dac4u: goto label_29dac4;
        case 0x29dac8u: goto label_29dac8;
        case 0x29daccu: goto label_29dacc;
        case 0x29dad0u: goto label_29dad0;
        case 0x29dad4u: goto label_29dad4;
        case 0x29dad8u: goto label_29dad8;
        case 0x29dadcu: goto label_29dadc;
        case 0x29dae0u: goto label_29dae0;
        case 0x29dae4u: goto label_29dae4;
        case 0x29dae8u: goto label_29dae8;
        case 0x29daecu: goto label_29daec;
        case 0x29daf0u: goto label_29daf0;
        case 0x29daf4u: goto label_29daf4;
        case 0x29daf8u: goto label_29daf8;
        case 0x29dafcu: goto label_29dafc;
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
        default: return;
    }

label_29d928:
    // 0x29d928: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d928u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D928 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d92c:
    // 0x29d92c: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d92cu;
    
label_29d930:
    // 0x29d930: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D930 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d934:
    // 0x29d934: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d938:
    if (ctx->pc == 0x29D938u) {
        ctx->pc = 0x29D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D934u;
        // 0x29d938: 0x12  mflo        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D93Cu;
        goto label_29d93c;
    }
    ctx->pc = 0x29D934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D934u;
        // 0x29d938: 0x12  mflo        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D934u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D93Cu;
label_29d93c:
    // 0x29d93c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d93cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d940:
    // 0x29d940: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d940u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d944:
    // 0x29d944: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d944u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d948:
    // 0x29d948: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29d948u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29D948 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d94c:
    // 0x29d94c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d94cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d950:
    // 0x29d950: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29d950u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29d954:
    // 0x29d954: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d958:
    // 0x29d958: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d958u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29D958 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d95c:
    // 0x29d95c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d95cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d960:
    // 0x29d960: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d960u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d964:
    // 0x29d964: 0x8c  syscall     2
    ctx->pc = 0x29d964u;
    ctx->pc = 0x29D968u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d968:
    // 0x29d968: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29d968u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d96c:
    // 0x29d96c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d96cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d970:
    // 0x29d970: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29D970 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d974:
    // 0x29d974: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d974u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d978:
    // 0x29d978: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29d978u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29D978 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d97c:
    // 0x29d97c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d97cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d980:
    // 0x29d980: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d980u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d984:
    // 0x29d984: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d988:
    if (ctx->pc == 0x29D988u) {
        ctx->pc = 0x29D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D984u;
        // 0x29d988: 0x23  negu        $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D98Cu;
        goto label_29d98c;
    }
    ctx->pc = 0x29D984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D984u;
        // 0x29d988: 0x23  negu        $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D984u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D98Cu;
label_29d98c:
    // 0x29d98c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d98cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d990:
    // 0x29d990: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29d990u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d994:
    // 0x29d994: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d994u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d998:
    // 0x29d998: 0x25  move        $zero, $zero
    ctx->pc = 0x29d998u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29d99c:
    // 0x29d99c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d99cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d9a0:
    // 0x29d9a0: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d9a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d9a4:
    // 0x29d9a4: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d9a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d9a8:
    // 0x29d9a8: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d9a8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d9ac:
    // 0x29d9ac: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d9acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d9b0:
    // 0x29d9b0: 0xd  break       0
    ctx->pc = 0x29d9b0u;
    runtime->handleBreak(rdram, ctx);
label_29d9b4:
    // 0x29d9b4: 0x8c  syscall     2
    ctx->pc = 0x29d9b4u;
    ctx->pc = 0x29D9B8u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d9b8:
    // 0x29d9b8: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d9b8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d9bc:
    // 0x29d9bc: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d9bcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d9c0:
    // 0x29d9c0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29d9c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d9c4:
    // 0x29d9c4: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d9c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d9c8:
    // 0x29d9c8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d9c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d9cc:
    // 0x29d9cc: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d9ccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d9d0:
    // 0x29d9d0: 0xc  syscall     0
    ctx->pc = 0x29d9d0u;
    ctx->pc = 0x29D9D4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d9d4:
    // 0x29d9d4: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d9d4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d9d8:
    // 0x29d9d8: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d9d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d9dc:
    // 0x29d9dc: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d9dcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d9e0:
    // 0x29d9e0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d9e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d9e4:
    // 0x29d9e4: 0x1cc  syscall     7
    ctx->pc = 0x29d9e4u;
    ctx->pc = 0x29D9E8u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29d9e8:
    // 0x29d9e8: 0x9  jalr        $zero, $zero
label_29d9ec:
    if (ctx->pc == 0x29D9ECu) {
        ctx->pc = 0x29D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9E8u;
        // 0x29d9ec: 0x1b8  dsll        $zero, $zero, 6 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9F0u;
        goto label_29d9f0;
    }
    ctx->pc = 0x29D9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9E8u;
        // 0x29d9ec: 0x1b8  dsll        $zero, $zero, 6 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D9E8u, 0x29D9F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D9F0u;
label_29d9f0:
    // 0x29d9f0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d9f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d9f4:
    // 0x29d9f4: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d9f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d9f8:
    // 0x29d9f8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29d9f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d9fc:
    // 0x29d9fc: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d9fcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29da00:
    // 0x29da00: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29da00u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29da04:
    // 0x29da04: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29da04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29da08:
    // 0x29da08: 0x19  multu       $zero, $zero
    ctx->pc = 0x29da08u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29da0c:
    // 0x29da0c: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29da0cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29da10:
    // 0x29da10: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29da10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29da14:
    // 0x29da14: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29da14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29da18:
    // 0x29da18: 0xd  break       0
    ctx->pc = 0x29da18u;
    runtime->handleBreak(rdram, ctx);
label_29da1c:
    // 0x29da1c: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29da1cu;
    
label_29da20:
    // 0x29da20: 0x12  mflo        $zero
    ctx->pc = 0x29da20u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29da24:
    // 0x29da24: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29da24u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29da28:
    // 0x29da28: 0x11  mthi        $zero
    ctx->pc = 0x29da28u;
    ctx->hi = GPR_U64(ctx, 0);
label_29da2c:
    // 0x29da2c: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29da2cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29da30:
    // 0x29da30: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29da30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29DA30 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29da34:
    // 0x29da34: 0x1cc  syscall     7
    ctx->pc = 0x29da34u;
    ctx->pc = 0x29DA38u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29da38:
    // 0x29da38: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29da38u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29da3c:
    // 0x29da3c: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29da3cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29da40:
    // 0x29da40: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29da40u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29da44:
    // 0x29da44: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29da44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29da48:
    // 0x29da48: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29da48u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29da4c:
    // 0x29da4c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29da4cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29da50:
    // 0x29da50: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x29da50u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29da54:
    // 0x29da54: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29da54u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29da58:
    // 0x29da58: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29da58u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29da5c:
    // 0x29da5c: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29da5cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29da60:
    // 0x29da60: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29da60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DA60 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29da64:
    // 0x29da64: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29da64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29da68:
    // 0x29da68: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29da68u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29da6c:
    // 0x29da6c: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29da6cu;
    
label_29da70:
    // 0x29da70: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29da70u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29da74:
    // 0x29da74: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29da74u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29da78:
    // 0x29da78: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29da78u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29da7c:
    // 0x29da7c: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29da7cu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29da80:
    // 0x29da80: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29da80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29DA80 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29da84:
    // 0x29da84: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29da84u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29da88:
    // 0x29da88: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29da88u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29da8c:
    // 0x29da8c: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29da8cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29da90:
    // 0x29da90: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29da90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29da94:
    // 0x29da94: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x29da94u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_29da98:
    // 0x29da98: 0xd  break       0
    ctx->pc = 0x29da98u;
    runtime->handleBreak(rdram, ctx);
label_29da9c:
    // 0x29da9c: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x29da9cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29daa0:
    // 0x29daa0: 0x22  neg         $zero, $zero
    ctx->pc = 0x29daa0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29daa4:
    // 0x29daa4: 0x28  mfsa        $zero
    ctx->pc = 0x29daa4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29daa8:
    // 0x29daa8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29daa8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29daac:
    // 0x29daac: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29daacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29DAAC raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29dab0:
    // 0x29dab0: 0x13  mtlo        $zero
    ctx->pc = 0x29dab0u;
    ctx->lo = GPR_U64(ctx, 0);
label_29dab4:
    // 0x29dab4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29dab4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29dab8:
    // 0x29dab8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dab8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DAB8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29dabc:
    // 0x29dabc: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29dabcu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29dac0:
    // 0x29dac0: 0x11  mthi        $zero
    ctx->pc = 0x29dac0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29dac4:
    // 0x29dac4: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29dac8:
    if (ctx->pc == 0x29DAC8u) {
        ctx->pc = 0x29DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAC4u;
        // 0x29dac8: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DACCu;
        goto label_29dacc;
    }
    ctx->pc = 0x29DAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAC4u;
        // 0x29dac8: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DAC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29DACCu;
label_29dacc:
    // 0x29dacc: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29daccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29dad0:
    // 0x29dad0: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29DAD0 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29dad4:
    // 0x29dad4: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29dad4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29dad8:
    // 0x29dad8: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dad8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29DAD8 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29dadc:
    // 0x29dadc: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dadcu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29dae0:
    // 0x29dae0: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29dae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29DAE0 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29dae4:
    // 0x29dae4: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29dae8:
    // 0x29dae8: 0x8  jr          $zero
label_29daec:
    if (ctx->pc == 0x29DAECu) {
        ctx->pc = 0x29DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAE8u;
        // 0x29daec: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DAF0u;
        goto label_29daf0;
    }
    ctx->pc = 0x29DAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAE8u;
        // 0x29daec: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DAE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29DAF0u;
label_29daf0:
    // 0x29daf0: 0x10  mfhi        $zero
    ctx->pc = 0x29daf0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29daf4:
    // 0x29daf4: 0x8c  syscall     2
    ctx->pc = 0x29daf4u;
    ctx->pc = 0x29DAF8u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29daf8:
    // 0x29daf8: 0xd  break       0
    ctx->pc = 0x29daf8u;
    runtime->handleBreak(rdram, ctx);
label_29dafc:
    // 0x29dafc: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29dafcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29DB4C raw=0x0000001E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DB98 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DBA8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DBE0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DBF0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29DC18 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DC70 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29dc74:
    // 0x29dc74: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29dc78:
    // 0x29dc78: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29dc78u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DC78 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DD18 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29DD28 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29DD38 raw=0x00000015"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DD58 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29DD70 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29DD80 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29DDC0 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ddc4:
    // 0x29ddc4: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ddc4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29ddc8:
    // 0x29ddc8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ddc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DDC8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ddcc:
    // 0x29ddcc: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ddccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29ddd0:
    // 0x29ddd0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ddd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DDD0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DE10 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DE50 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DE60 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29DE98 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29de9c:
    // 0x29de9c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29de9cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29dea0:
    // 0x29dea0: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29dea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29DEA0 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29DEB8 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29debc:
    // 0x29debc: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29debcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29dec0:
    // 0x29dec0: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29dec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29DEC0 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DF28 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29DF38 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29DF58 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DF90 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29DFB8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29DFE8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29E030 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29E058 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29e05c:
    // 0x29e05c: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29e05cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29e060:
    // 0x29e060: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29e060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29E060 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29E078 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29E088 raw=0x00000015"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29E0A0 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29e0a4:
    // 0x29e0a4: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29e0a8:
    // 0x29e0a8: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29e0a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29E0A8 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
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
    ctx->pc = 0x29e0f8u;
    return;
}
