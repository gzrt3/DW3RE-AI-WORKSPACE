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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part5(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19d850u: goto label_19d850;
        case 0x19d854u: goto label_19d854;
        case 0x19d858u: goto label_19d858;
        case 0x19d85cu: goto label_19d85c;
        case 0x19d860u: goto label_19d860;
        case 0x19d864u: goto label_19d864;
        case 0x19d868u: goto label_19d868;
        case 0x19d86cu: goto label_19d86c;
        case 0x19d870u: goto label_19d870;
        case 0x19d874u: goto label_19d874;
        case 0x19d878u: goto label_19d878;
        case 0x19d87cu: goto label_19d87c;
        case 0x19d880u: goto label_19d880;
        case 0x19d884u: goto label_19d884;
        case 0x19d888u: goto label_19d888;
        case 0x19d88cu: goto label_19d88c;
        case 0x19d890u: goto label_19d890;
        case 0x19d894u: goto label_19d894;
        case 0x19d898u: goto label_19d898;
        case 0x19d89cu: goto label_19d89c;
        case 0x19d8a0u: goto label_19d8a0;
        case 0x19d8a4u: goto label_19d8a4;
        case 0x19d8a8u: goto label_19d8a8;
        case 0x19d8acu: goto label_19d8ac;
        case 0x19d8b0u: goto label_19d8b0;
        case 0x19d8b4u: goto label_19d8b4;
        case 0x19d8b8u: goto label_19d8b8;
        case 0x19d8bcu: goto label_19d8bc;
        case 0x19d8c0u: goto label_19d8c0;
        case 0x19d8c4u: goto label_19d8c4;
        case 0x19d8c8u: goto label_19d8c8;
        case 0x19d8ccu: goto label_19d8cc;
        case 0x19d8d0u: goto label_19d8d0;
        case 0x19d8d4u: goto label_19d8d4;
        case 0x19d8d8u: goto label_19d8d8;
        case 0x19d8dcu: goto label_19d8dc;
        case 0x19d8e0u: goto label_19d8e0;
        case 0x19d8e4u: goto label_19d8e4;
        case 0x19d8e8u: goto label_19d8e8;
        case 0x19d8ecu: goto label_19d8ec;
        case 0x19d8f0u: goto label_19d8f0;
        case 0x19d8f4u: goto label_19d8f4;
        case 0x19d8f8u: goto label_19d8f8;
        case 0x19d8fcu: goto label_19d8fc;
        case 0x19d900u: goto label_19d900;
        case 0x19d904u: goto label_19d904;
        case 0x19d908u: goto label_19d908;
        case 0x19d90cu: goto label_19d90c;
        case 0x19d910u: goto label_19d910;
        case 0x19d914u: goto label_19d914;
        case 0x19d918u: goto label_19d918;
        case 0x19d91cu: goto label_19d91c;
        case 0x19d920u: goto label_19d920;
        case 0x19d924u: goto label_19d924;
        case 0x19d928u: goto label_19d928;
        case 0x19d92cu: goto label_19d92c;
        case 0x19d930u: goto label_19d930;
        case 0x19d934u: goto label_19d934;
        case 0x19d938u: goto label_19d938;
        case 0x19d93cu: goto label_19d93c;
        case 0x19d940u: goto label_19d940;
        case 0x19d944u: goto label_19d944;
        case 0x19d948u: goto label_19d948;
        case 0x19d94cu: goto label_19d94c;
        case 0x19d950u: goto label_19d950;
        case 0x19d954u: goto label_19d954;
        case 0x19d958u: goto label_19d958;
        case 0x19d95cu: goto label_19d95c;
        case 0x19d960u: goto label_19d960;
        case 0x19d964u: goto label_19d964;
        case 0x19d968u: goto label_19d968;
        case 0x19d96cu: goto label_19d96c;
        case 0x19d970u: goto label_19d970;
        case 0x19d974u: goto label_19d974;
        case 0x19d978u: goto label_19d978;
        case 0x19d97cu: goto label_19d97c;
        case 0x19d980u: goto label_19d980;
        case 0x19d984u: goto label_19d984;
        case 0x19d988u: goto label_19d988;
        case 0x19d98cu: goto label_19d98c;
        case 0x19d990u: goto label_19d990;
        case 0x19d994u: goto label_19d994;
        case 0x19d998u: goto label_19d998;
        case 0x19d99cu: goto label_19d99c;
        case 0x19d9a0u: goto label_19d9a0;
        case 0x19d9a4u: goto label_19d9a4;
        case 0x19d9a8u: goto label_19d9a8;
        case 0x19d9acu: goto label_19d9ac;
        case 0x19d9b0u: goto label_19d9b0;
        case 0x19d9b4u: goto label_19d9b4;
        case 0x19d9b8u: goto label_19d9b8;
        case 0x19d9bcu: goto label_19d9bc;
        case 0x19d9c0u: goto label_19d9c0;
        case 0x19d9c4u: goto label_19d9c4;
        case 0x19d9c8u: goto label_19d9c8;
        case 0x19d9ccu: goto label_19d9cc;
        case 0x19d9d0u: goto label_19d9d0;
        case 0x19d9d4u: goto label_19d9d4;
        case 0x19d9d8u: goto label_19d9d8;
        case 0x19d9dcu: goto label_19d9dc;
        case 0x19d9e0u: goto label_19d9e0;
        case 0x19d9e4u: goto label_19d9e4;
        case 0x19d9e8u: goto label_19d9e8;
        case 0x19d9ecu: goto label_19d9ec;
        case 0x19d9f0u: goto label_19d9f0;
        case 0x19d9f4u: goto label_19d9f4;
        case 0x19d9f8u: goto label_19d9f8;
        case 0x19d9fcu: goto label_19d9fc;
        case 0x19da00u: goto label_19da00;
        case 0x19da04u: goto label_19da04;
        case 0x19da08u: goto label_19da08;
        case 0x19da0cu: goto label_19da0c;
        case 0x19da10u: goto label_19da10;
        case 0x19da14u: goto label_19da14;
        case 0x19da18u: goto label_19da18;
        case 0x19da1cu: goto label_19da1c;
        case 0x19da20u: goto label_19da20;
        case 0x19da24u: goto label_19da24;
        case 0x19da28u: goto label_19da28;
        case 0x19da2cu: goto label_19da2c;
        case 0x19da30u: goto label_19da30;
        case 0x19da34u: goto label_19da34;
        case 0x19da38u: goto label_19da38;
        case 0x19da3cu: goto label_19da3c;
        case 0x19da40u: goto label_19da40;
        case 0x19da44u: goto label_19da44;
        case 0x19da48u: goto label_19da48;
        case 0x19da4cu: goto label_19da4c;
        case 0x19da50u: goto label_19da50;
        case 0x19da54u: goto label_19da54;
        case 0x19da58u: goto label_19da58;
        case 0x19da5cu: goto label_19da5c;
        case 0x19da60u: goto label_19da60;
        case 0x19da64u: goto label_19da64;
        case 0x19da68u: goto label_19da68;
        case 0x19da6cu: goto label_19da6c;
        case 0x19da70u: goto label_19da70;
        case 0x19da74u: goto label_19da74;
        case 0x19da78u: goto label_19da78;
        case 0x19da7cu: goto label_19da7c;
        case 0x19da80u: goto label_19da80;
        case 0x19da84u: goto label_19da84;
        case 0x19da88u: goto label_19da88;
        case 0x19da8cu: goto label_19da8c;
        case 0x19da90u: goto label_19da90;
        case 0x19da94u: goto label_19da94;
        case 0x19da98u: goto label_19da98;
        case 0x19da9cu: goto label_19da9c;
        case 0x19daa0u: goto label_19daa0;
        case 0x19daa4u: goto label_19daa4;
        case 0x19daa8u: goto label_19daa8;
        case 0x19daacu: goto label_19daac;
        case 0x19dab0u: goto label_19dab0;
        case 0x19dab4u: goto label_19dab4;
        case 0x19dab8u: goto label_19dab8;
        case 0x19dabcu: goto label_19dabc;
        case 0x19dac0u: goto label_19dac0;
        case 0x19dac4u: goto label_19dac4;
        case 0x19dac8u: goto label_19dac8;
        case 0x19daccu: goto label_19dacc;
        case 0x19dad0u: goto label_19dad0;
        case 0x19dad4u: goto label_19dad4;
        case 0x19dad8u: goto label_19dad8;
        case 0x19dadcu: goto label_19dadc;
        case 0x19dae0u: goto label_19dae0;
        case 0x19dae4u: goto label_19dae4;
        case 0x19dae8u: goto label_19dae8;
        case 0x19daecu: goto label_19daec;
        case 0x19daf0u: goto label_19daf0;
        case 0x19daf4u: goto label_19daf4;
        case 0x19daf8u: goto label_19daf8;
        case 0x19dafcu: goto label_19dafc;
        case 0x19db00u: goto label_19db00;
        case 0x19db04u: goto label_19db04;
        case 0x19db08u: goto label_19db08;
        case 0x19db0cu: goto label_19db0c;
        case 0x19db10u: goto label_19db10;
        case 0x19db14u: goto label_19db14;
        case 0x19db18u: goto label_19db18;
        case 0x19db1cu: goto label_19db1c;
        case 0x19db20u: goto label_19db20;
        case 0x19db24u: goto label_19db24;
        case 0x19db28u: goto label_19db28;
        case 0x19db2cu: goto label_19db2c;
        case 0x19db30u: goto label_19db30;
        case 0x19db34u: goto label_19db34;
        case 0x19db38u: goto label_19db38;
        case 0x19db3cu: goto label_19db3c;
        case 0x19db40u: goto label_19db40;
        case 0x19db44u: goto label_19db44;
        case 0x19db48u: goto label_19db48;
        case 0x19db4cu: goto label_19db4c;
        case 0x19db50u: goto label_19db50;
        case 0x19db54u: goto label_19db54;
        case 0x19db58u: goto label_19db58;
        case 0x19db5cu: goto label_19db5c;
        case 0x19db60u: goto label_19db60;
        case 0x19db64u: goto label_19db64;
        case 0x19db68u: goto label_19db68;
        case 0x19db6cu: goto label_19db6c;
        case 0x19db70u: goto label_19db70;
        case 0x19db74u: goto label_19db74;
        case 0x19db78u: goto label_19db78;
        case 0x19db7cu: goto label_19db7c;
        case 0x19db80u: goto label_19db80;
        case 0x19db84u: goto label_19db84;
        case 0x19db88u: goto label_19db88;
        case 0x19db8cu: goto label_19db8c;
        case 0x19db90u: goto label_19db90;
        case 0x19db94u: goto label_19db94;
        case 0x19db98u: goto label_19db98;
        case 0x19db9cu: goto label_19db9c;
        case 0x19dba0u: goto label_19dba0;
        case 0x19dba4u: goto label_19dba4;
        case 0x19dba8u: goto label_19dba8;
        case 0x19dbacu: goto label_19dbac;
        case 0x19dbb0u: goto label_19dbb0;
        case 0x19dbb4u: goto label_19dbb4;
        case 0x19dbb8u: goto label_19dbb8;
        case 0x19dbbcu: goto label_19dbbc;
        case 0x19dbc0u: goto label_19dbc0;
        case 0x19dbc4u: goto label_19dbc4;
        case 0x19dbc8u: goto label_19dbc8;
        case 0x19dbccu: goto label_19dbcc;
        case 0x19dbd0u: goto label_19dbd0;
        case 0x19dbd4u: goto label_19dbd4;
        case 0x19dbd8u: goto label_19dbd8;
        case 0x19dbdcu: goto label_19dbdc;
        case 0x19dbe0u: goto label_19dbe0;
        case 0x19dbe4u: goto label_19dbe4;
        case 0x19dbe8u: goto label_19dbe8;
        case 0x19dbecu: goto label_19dbec;
        case 0x19dbf0u: goto label_19dbf0;
        case 0x19dbf4u: goto label_19dbf4;
        case 0x19dbf8u: goto label_19dbf8;
        case 0x19dbfcu: goto label_19dbfc;
        case 0x19dc00u: goto label_19dc00;
        case 0x19dc04u: goto label_19dc04;
        case 0x19dc08u: goto label_19dc08;
        case 0x19dc0cu: goto label_19dc0c;
        case 0x19dc10u: goto label_19dc10;
        case 0x19dc14u: goto label_19dc14;
        case 0x19dc18u: goto label_19dc18;
        case 0x19dc1cu: goto label_19dc1c;
        case 0x19dc20u: goto label_19dc20;
        case 0x19dc24u: goto label_19dc24;
        case 0x19dc28u: goto label_19dc28;
        case 0x19dc2cu: goto label_19dc2c;
        case 0x19dc30u: goto label_19dc30;
        case 0x19dc34u: goto label_19dc34;
        case 0x19dc38u: goto label_19dc38;
        case 0x19dc3cu: goto label_19dc3c;
        case 0x19dc40u: goto label_19dc40;
        case 0x19dc44u: goto label_19dc44;
        case 0x19dc48u: goto label_19dc48;
        case 0x19dc4cu: goto label_19dc4c;
        case 0x19dc50u: goto label_19dc50;
        case 0x19dc54u: goto label_19dc54;
        case 0x19dc58u: goto label_19dc58;
        case 0x19dc5cu: goto label_19dc5c;
        case 0x19dc60u: goto label_19dc60;
        case 0x19dc64u: goto label_19dc64;
        case 0x19dc68u: goto label_19dc68;
        case 0x19dc6cu: goto label_19dc6c;
        case 0x19dc70u: goto label_19dc70;
        case 0x19dc74u: goto label_19dc74;
        case 0x19dc78u: goto label_19dc78;
        case 0x19dc7cu: goto label_19dc7c;
        case 0x19dc80u: goto label_19dc80;
        case 0x19dc84u: goto label_19dc84;
        case 0x19dc88u: goto label_19dc88;
        case 0x19dc8cu: goto label_19dc8c;
        case 0x19dc90u: goto label_19dc90;
        case 0x19dc94u: goto label_19dc94;
        case 0x19dc98u: goto label_19dc98;
        case 0x19dc9cu: goto label_19dc9c;
        case 0x19dca0u: goto label_19dca0;
        case 0x19dca4u: goto label_19dca4;
        case 0x19dca8u: goto label_19dca8;
        case 0x19dcacu: goto label_19dcac;
        case 0x19dcb0u: goto label_19dcb0;
        case 0x19dcb4u: goto label_19dcb4;
        case 0x19dcb8u: goto label_19dcb8;
        case 0x19dcbcu: goto label_19dcbc;
        case 0x19dcc0u: goto label_19dcc0;
        case 0x19dcc4u: goto label_19dcc4;
        case 0x19dcc8u: goto label_19dcc8;
        case 0x19dcccu: goto label_19dccc;
        case 0x19dcd0u: goto label_19dcd0;
        case 0x19dcd4u: goto label_19dcd4;
        case 0x19dcd8u: goto label_19dcd8;
        case 0x19dcdcu: goto label_19dcdc;
        case 0x19dce0u: goto label_19dce0;
        case 0x19dce4u: goto label_19dce4;
        case 0x19dce8u: goto label_19dce8;
        case 0x19dcecu: goto label_19dcec;
        case 0x19dcf0u: goto label_19dcf0;
        case 0x19dcf4u: goto label_19dcf4;
        case 0x19dcf8u: goto label_19dcf8;
        case 0x19dcfcu: goto label_19dcfc;
        case 0x19dd00u: goto label_19dd00;
        case 0x19dd04u: goto label_19dd04;
        case 0x19dd08u: goto label_19dd08;
        case 0x19dd0cu: goto label_19dd0c;
        case 0x19dd10u: goto label_19dd10;
        case 0x19dd14u: goto label_19dd14;
        case 0x19dd18u: goto label_19dd18;
        case 0x19dd1cu: goto label_19dd1c;
        case 0x19dd20u: goto label_19dd20;
        case 0x19dd24u: goto label_19dd24;
        case 0x19dd28u: goto label_19dd28;
        case 0x19dd2cu: goto label_19dd2c;
        case 0x19dd30u: goto label_19dd30;
        case 0x19dd34u: goto label_19dd34;
        case 0x19dd38u: goto label_19dd38;
        case 0x19dd3cu: goto label_19dd3c;
        case 0x19dd40u: goto label_19dd40;
        case 0x19dd44u: goto label_19dd44;
        case 0x19dd48u: goto label_19dd48;
        case 0x19dd4cu: goto label_19dd4c;
        case 0x19dd50u: goto label_19dd50;
        case 0x19dd54u: goto label_19dd54;
        case 0x19dd58u: goto label_19dd58;
        case 0x19dd5cu: goto label_19dd5c;
        case 0x19dd60u: goto label_19dd60;
        case 0x19dd64u: goto label_19dd64;
        case 0x19dd68u: goto label_19dd68;
        case 0x19dd6cu: goto label_19dd6c;
        case 0x19dd70u: goto label_19dd70;
        case 0x19dd74u: goto label_19dd74;
        case 0x19dd78u: goto label_19dd78;
        case 0x19dd7cu: goto label_19dd7c;
        case 0x19dd80u: goto label_19dd80;
        case 0x19dd84u: goto label_19dd84;
        case 0x19dd88u: goto label_19dd88;
        case 0x19dd8cu: goto label_19dd8c;
        case 0x19dd90u: goto label_19dd90;
        case 0x19dd94u: goto label_19dd94;
        case 0x19dd98u: goto label_19dd98;
        case 0x19dd9cu: goto label_19dd9c;
        case 0x19dda0u: goto label_19dda0;
        case 0x19dda4u: goto label_19dda4;
        case 0x19dda8u: goto label_19dda8;
        case 0x19ddacu: goto label_19ddac;
        case 0x19ddb0u: goto label_19ddb0;
        case 0x19ddb4u: goto label_19ddb4;
        case 0x19ddb8u: goto label_19ddb8;
        case 0x19ddbcu: goto label_19ddbc;
        case 0x19ddc0u: goto label_19ddc0;
        case 0x19ddc4u: goto label_19ddc4;
        case 0x19ddc8u: goto label_19ddc8;
        case 0x19ddccu: goto label_19ddcc;
        case 0x19ddd0u: goto label_19ddd0;
        case 0x19ddd4u: goto label_19ddd4;
        case 0x19ddd8u: goto label_19ddd8;
        case 0x19dddcu: goto label_19dddc;
        case 0x19dde0u: goto label_19dde0;
        case 0x19dde4u: goto label_19dde4;
        case 0x19dde8u: goto label_19dde8;
        case 0x19ddecu: goto label_19ddec;
        case 0x19ddf0u: goto label_19ddf0;
        case 0x19ddf4u: goto label_19ddf4;
        case 0x19ddf8u: goto label_19ddf8;
        case 0x19ddfcu: goto label_19ddfc;
        case 0x19de00u: goto label_19de00;
        case 0x19de04u: goto label_19de04;
        case 0x19de08u: goto label_19de08;
        case 0x19de0cu: goto label_19de0c;
        case 0x19de10u: goto label_19de10;
        case 0x19de14u: goto label_19de14;
        case 0x19de18u: goto label_19de18;
        case 0x19de1cu: goto label_19de1c;
        case 0x19de20u: goto label_19de20;
        case 0x19de24u: goto label_19de24;
        case 0x19de28u: goto label_19de28;
        case 0x19de2cu: goto label_19de2c;
        case 0x19de30u: goto label_19de30;
        case 0x19de34u: goto label_19de34;
        case 0x19de38u: goto label_19de38;
        case 0x19de3cu: goto label_19de3c;
        case 0x19de40u: goto label_19de40;
        case 0x19de44u: goto label_19de44;
        case 0x19de48u: goto label_19de48;
        case 0x19de4cu: goto label_19de4c;
        case 0x19de50u: goto label_19de50;
        case 0x19de54u: goto label_19de54;
        case 0x19de58u: goto label_19de58;
        case 0x19de5cu: goto label_19de5c;
        case 0x19de60u: goto label_19de60;
        case 0x19de64u: goto label_19de64;
        case 0x19de68u: goto label_19de68;
        case 0x19de6cu: goto label_19de6c;
        case 0x19de70u: goto label_19de70;
        case 0x19de74u: goto label_19de74;
        case 0x19de78u: goto label_19de78;
        case 0x19de7cu: goto label_19de7c;
        case 0x19de80u: goto label_19de80;
        case 0x19de84u: goto label_19de84;
        case 0x19de88u: goto label_19de88;
        case 0x19de8cu: goto label_19de8c;
        case 0x19de90u: goto label_19de90;
        case 0x19de94u: goto label_19de94;
        case 0x19de98u: goto label_19de98;
        case 0x19de9cu: goto label_19de9c;
        case 0x19dea0u: goto label_19dea0;
        case 0x19dea4u: goto label_19dea4;
        case 0x19dea8u: goto label_19dea8;
        case 0x19deacu: goto label_19deac;
        case 0x19deb0u: goto label_19deb0;
        case 0x19deb4u: goto label_19deb4;
        case 0x19deb8u: goto label_19deb8;
        case 0x19debcu: goto label_19debc;
        case 0x19dec0u: goto label_19dec0;
        case 0x19dec4u: goto label_19dec4;
        case 0x19dec8u: goto label_19dec8;
        case 0x19deccu: goto label_19decc;
        case 0x19ded0u: goto label_19ded0;
        case 0x19ded4u: goto label_19ded4;
        case 0x19ded8u: goto label_19ded8;
        case 0x19dedcu: goto label_19dedc;
        case 0x19dee0u: goto label_19dee0;
        case 0x19dee4u: goto label_19dee4;
        case 0x19dee8u: goto label_19dee8;
        case 0x19deecu: goto label_19deec;
        case 0x19def0u: goto label_19def0;
        case 0x19def4u: goto label_19def4;
        case 0x19def8u: goto label_19def8;
        case 0x19defcu: goto label_19defc;
        case 0x19df00u: goto label_19df00;
        case 0x19df04u: goto label_19df04;
        case 0x19df08u: goto label_19df08;
        case 0x19df0cu: goto label_19df0c;
        case 0x19df10u: goto label_19df10;
        case 0x19df14u: goto label_19df14;
        case 0x19df18u: goto label_19df18;
        case 0x19df1cu: goto label_19df1c;
        case 0x19df20u: goto label_19df20;
        case 0x19df24u: goto label_19df24;
        case 0x19df28u: goto label_19df28;
        case 0x19df2cu: goto label_19df2c;
        case 0x19df30u: goto label_19df30;
        case 0x19df34u: goto label_19df34;
        case 0x19df38u: goto label_19df38;
        case 0x19df3cu: goto label_19df3c;
        case 0x19df40u: goto label_19df40;
        case 0x19df44u: goto label_19df44;
        case 0x19df48u: goto label_19df48;
        case 0x19df4cu: goto label_19df4c;
        case 0x19df50u: goto label_19df50;
        case 0x19df54u: goto label_19df54;
        case 0x19df58u: goto label_19df58;
        case 0x19df5cu: goto label_19df5c;
        case 0x19df60u: goto label_19df60;
        case 0x19df64u: goto label_19df64;
        case 0x19df68u: goto label_19df68;
        case 0x19df6cu: goto label_19df6c;
        case 0x19df70u: goto label_19df70;
        case 0x19df74u: goto label_19df74;
        case 0x19df78u: goto label_19df78;
        case 0x19df7cu: goto label_19df7c;
        case 0x19df80u: goto label_19df80;
        case 0x19df84u: goto label_19df84;
        case 0x19df88u: goto label_19df88;
        case 0x19df8cu: goto label_19df8c;
        case 0x19df90u: goto label_19df90;
        case 0x19df94u: goto label_19df94;
        case 0x19df98u: goto label_19df98;
        case 0x19df9cu: goto label_19df9c;
        case 0x19dfa0u: goto label_19dfa0;
        case 0x19dfa4u: goto label_19dfa4;
        case 0x19dfa8u: goto label_19dfa8;
        case 0x19dfacu: goto label_19dfac;
        case 0x19dfb0u: goto label_19dfb0;
        case 0x19dfb4u: goto label_19dfb4;
        case 0x19dfb8u: goto label_19dfb8;
        case 0x19dfbcu: goto label_19dfbc;
        case 0x19dfc0u: goto label_19dfc0;
        case 0x19dfc4u: goto label_19dfc4;
        case 0x19dfc8u: goto label_19dfc8;
        case 0x19dfccu: goto label_19dfcc;
        case 0x19dfd0u: goto label_19dfd0;
        case 0x19dfd4u: goto label_19dfd4;
        case 0x19dfd8u: goto label_19dfd8;
        case 0x19dfdcu: goto label_19dfdc;
        case 0x19dfe0u: goto label_19dfe0;
        case 0x19dfe4u: goto label_19dfe4;
        case 0x19dfe8u: goto label_19dfe8;
        case 0x19dfecu: goto label_19dfec;
        case 0x19dff0u: goto label_19dff0;
        case 0x19dff4u: goto label_19dff4;
        case 0x19dff8u: goto label_19dff8;
        case 0x19dffcu: goto label_19dffc;
        case 0x19e000u: goto label_19e000;
        case 0x19e004u: goto label_19e004;
        case 0x19e008u: goto label_19e008;
        case 0x19e00cu: goto label_19e00c;
        case 0x19e010u: goto label_19e010;
        case 0x19e014u: goto label_19e014;
        case 0x19e018u: goto label_19e018;
        case 0x19e01cu: goto label_19e01c;
        default: return;
    }

label_19d850:
    // 0x19d850: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x19d850u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19d854:
    // 0x19d854: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x19d854u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
label_19d858:
    // 0x19d858: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x19d858u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19d85c:
    // 0x19d85c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x19d85cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
label_19d860:
    // 0x19d860: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x19d860u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_19d864:
    // 0x19d864: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x19d864u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
label_19d868:
    // 0x19d868: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x19d868u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
label_19d86c:
    // 0x19d86c: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
label_19d870:
    if (ctx->pc == 0x19D870u) {
        ctx->pc = 0x19D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D86Cu;
        // 0x19d870: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D874u;
        goto label_19d874;
    }
    ctx->pc = 0x19D86Cu;
    {
        const bool branch_taken_0x19d86c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D86Cu;
        // 0x19d870: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d86c) {
            ctx->pc = 0x19D820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x19d820; return; }
        }
    }
    ctx->pc = 0x19D874u;
label_19d874:
    // 0x19d874: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x19d874u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
label_19d878:
    // 0x19d878: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x19d878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
label_19d87c:
    // 0x19d87c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19d87cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d880:
    // 0x19d880: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x19d880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
label_19d884:
    // 0x19d884: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x19d884u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
label_19d888:
    // 0x19d888: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
label_19d88c:
    if (ctx->pc == 0x19D88Cu) {
        ctx->pc = 0x19D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D888u;
        // 0x19d88c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D890u;
        goto label_19d890;
    }
    ctx->pc = 0x19D888u;
    {
        const bool branch_taken_0x19d888 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D888u;
        // 0x19d88c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d888) {
            ctx->pc = 0x19D820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x19d820; return; }
        }
    }
    ctx->pc = 0x19D890u;
label_19d890:
    // 0x19d890: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19d890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d894:
    // 0x19d894: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19d894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19d898:
    // 0x19d898: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19d898u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d89c:
    // 0x19d89c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x19d89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_19d8a0:
    // 0x19d8a0: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x19d8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_19d8a4:
    // 0x19d8a4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x19d8a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
label_19d8a8:
    // 0x19d8a8: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x19d8a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_19d8ac:
    // 0x19d8ac: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
label_19d8b0:
    if (ctx->pc == 0x19D8B0u) {
        ctx->pc = 0x19D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8ACu;
        // 0x19d8b0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D8B4u;
        goto label_19d8b4;
    }
    ctx->pc = 0x19D8ACu;
    {
        const bool branch_taken_0x19d8ac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8ACu;
        // 0x19d8b0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8ac) {
            ctx->pc = 0x19D7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x19d7e8; return; }
        }
    }
    ctx->pc = 0x19D8B4u;
label_19d8b4:
    // 0x19d8b4: 0x3e00008  jr          $ra
label_19d8b8:
    if (ctx->pc == 0x19D8B8u) {
        ctx->pc = 0x19D8BCu;
        goto label_19d8bc;
    }
    ctx->pc = 0x19D8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D8BCu;
label_19d8bc:
    // 0x19d8bc: 0x0  nop
    ctx->pc = 0x19d8bcu;
    // NOP
label_19d8c0:
    // 0x19d8c0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19d8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d8c4:
    // 0x19d8c4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19d8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19d8c8:
    // 0x19d8c8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19d8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19d8cc:
    // 0x19d8cc: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19d8ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d8d0:
    // 0x19d8d0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19d8d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19d8d4:
    // 0x19d8d4: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x19d8d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19d8d8:
    // 0x19d8d8: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x19d8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_19d8dc:
    // 0x19d8dc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x19d8dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19d8e0:
    // 0x19d8e0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19d8e0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19d8e4:
    // 0x19d8e4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x19d8e4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19d8e8:
    // 0x19d8e8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x19d8e8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19d8ec:
    // 0x19d8ec: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x19d8ecu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
label_19d8f0:
    // 0x19d8f0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x19d8f0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19d8f4:
    // 0x19d8f4: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x19d8f4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19d8f8:
    // 0x19d8f8: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x19d8f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_19d8fc:
    // 0x19d8fc: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x19d8fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
label_19d900:
    // 0x19d900: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x19d900u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
label_19d904:
    // 0x19d904: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x19d904u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
label_19d908:
    // 0x19d908: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19d908u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19d90c:
    // 0x19d90c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19d90cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19d910:
    // 0x19d910: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x19d910u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
label_19d914:
    // 0x19d914: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x19d914u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19d918:
    // 0x19d918: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x19d918u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
label_19d91c:
    // 0x19d91c: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x19d91cu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19d920:
    // 0x19d920: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x19d920u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
label_19d924:
    // 0x19d924: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x19d924u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
label_19d928:
    // 0x19d928: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19d928u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19d92c:
    // 0x19d92c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x19d92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_19d930:
    // 0x19d930: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x19d930u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
label_19d934:
    // 0x19d934: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
label_19d938:
    if (ctx->pc == 0x19D938u) {
        ctx->pc = 0x19D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D934u;
        // 0x19d938: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D93Cu;
        goto label_19d93c;
    }
    ctx->pc = 0x19D934u;
    {
        const bool branch_taken_0x19d934 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D934u;
        // 0x19d938: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d934) {
            ctx->pc = 0x19D8E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d8e4;
        }
    }
    ctx->pc = 0x19D93Cu;
label_19d93c:
    // 0x19d93c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x19d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_19d940:
    // 0x19d940: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x19d940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_19d944:
    // 0x19d944: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19d944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d948:
    // 0x19d948: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x19d948u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
label_19d94c:
    // 0x19d94c: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
label_19d950:
    if (ctx->pc == 0x19D950u) {
        ctx->pc = 0x19D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D94Cu;
        // 0x19d950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D954u;
        goto label_19d954;
    }
    ctx->pc = 0x19D94Cu;
    {
        const bool branch_taken_0x19d94c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D94Cu;
        // 0x19d950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d94c) {
            ctx->pc = 0x19D8E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d8e4;
        }
    }
    ctx->pc = 0x19D954u;
label_19d954:
    // 0x19d954: 0x3e00008  jr          $ra
label_19d958:
    if (ctx->pc == 0x19D958u) {
        ctx->pc = 0x19D95Cu;
        goto label_19d95c;
    }
    ctx->pc = 0x19D954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D95Cu;
label_19d95c:
    // 0x19d95c: 0x0  nop
    ctx->pc = 0x19d95cu;
    // NOP
label_19d960:
    // 0x19d960: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19d960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d964:
    // 0x19d964: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19d964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19d968:
    // 0x19d968: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19d968u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d96c:
    // 0x19d96c: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19d96cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19d970:
    // 0x19d970: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x19d970u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19d974:
    // 0x19d974: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x19d974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19d978:
    // 0x19d978: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19d978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_19d97c:
    // 0x19d97c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19d97cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19d980:
    // 0x19d980: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19d980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19d984:
    // 0x19d984: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x19d984u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19d988:
    // 0x19d988: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x19d988u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_19d98c:
    // 0x19d98c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x19d98cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_19d990:
    // 0x19d990: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x19d990u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19d994:
    // 0x19d994: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x19d994u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19d998:
    // 0x19d998: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x19d998u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_19d99c:
    // 0x19d99c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19d99cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19d9a0:
    // 0x19d9a0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19d9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19d9a4:
    // 0x19d9a4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x19d9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_19d9a8:
    // 0x19d9a8: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x19d9a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_19d9ac:
    // 0x19d9ac: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x19d9acu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19d9b0:
    // 0x19d9b0: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x19d9b0u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19d9b4:
    // 0x19d9b4: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x19d9b4u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
label_19d9b8:
    // 0x19d9b8: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x19d9b8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
label_19d9bc:
    // 0x19d9bc: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x19d9bcu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19d9c0:
    // 0x19d9c0: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x19d9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
label_19d9c4:
    // 0x19d9c4: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
label_19d9c8:
    if (ctx->pc == 0x19D9C8u) {
        ctx->pc = 0x19D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9C4u;
        // 0x19d9c8: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D9CCu;
        goto label_19d9cc;
    }
    ctx->pc = 0x19D9C4u;
    {
        const bool branch_taken_0x19d9c4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9C4u;
        // 0x19d9c8: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9c4) {
            ctx->pc = 0x19D988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d988;
        }
    }
    ctx->pc = 0x19D9CCu;
label_19d9cc:
    // 0x19d9cc: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x19d9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
label_19d9d0:
    // 0x19d9d0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x19d9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
label_19d9d4:
    // 0x19d9d4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19d9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d9d8:
    // 0x19d9d8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x19d9d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
label_19d9dc:
    // 0x19d9dc: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
label_19d9e0:
    if (ctx->pc == 0x19D9E0u) {
        ctx->pc = 0x19D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9DCu;
        // 0x19d9e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D9E4u;
        goto label_19d9e4;
    }
    ctx->pc = 0x19D9DCu;
    {
        const bool branch_taken_0x19d9dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9DCu;
        // 0x19d9e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9dc) {
            ctx->pc = 0x19D988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d988;
        }
    }
    ctx->pc = 0x19D9E4u;
label_19d9e4:
    // 0x19d9e4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d9e8:
    // 0x19d9e8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19d9ec:
    // 0x19d9ec: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19d9ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d9f0:
    // 0x19d9f0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x19d9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_19d9f4:
    // 0x19d9f4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x19d9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_19d9f8:
    // 0x19d9f8: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x19d9f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
label_19d9fc:
    // 0x19d9fc: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
label_19da00:
    if (ctx->pc == 0x19DA00u) {
        ctx->pc = 0x19DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9FCu;
        // 0x19da00: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA04u;
        goto label_19da04;
    }
    ctx->pc = 0x19D9FCu;
    {
        const bool branch_taken_0x19d9fc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9FCu;
        // 0x19da00: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9fc) {
            ctx->pc = 0x19D980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d980;
        }
    }
    ctx->pc = 0x19DA04u;
label_19da04:
    // 0x19da04: 0x3e00008  jr          $ra
label_19da08:
    if (ctx->pc == 0x19DA08u) {
        ctx->pc = 0x19DA0Cu;
        goto label_19da0c;
    }
    ctx->pc = 0x19DA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DA0Cu;
label_19da0c:
    // 0x19da0c: 0x0  nop
    ctx->pc = 0x19da0cu;
    // NOP
label_19da10:
    // 0x19da10: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19da10u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19da14:
    // 0x19da14: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19da14u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19da18:
    // 0x19da18: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19da18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19da1c:
    // 0x19da1c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19da1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19da20:
    // 0x19da20: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19da20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19da24:
    // 0x19da24: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19da24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19da28:
    // 0x19da28: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19da28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19da2c:
    // 0x19da2c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x19da2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19da30:
    // 0x19da30: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x19da30u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19da34:
    // 0x19da34: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x19da34u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19da38:
    // 0x19da38: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19da38u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19da3c:
    // 0x19da3c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x19da3cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19da40:
    // 0x19da40: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x19da40u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_19da44:
    // 0x19da44: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x19da44u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19da48:
    // 0x19da48: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x19da48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19da4c:
    // 0x19da4c: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
label_19da50:
    if (ctx->pc == 0x19DA50u) {
        ctx->pc = 0x19DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA4Cu;
        // 0x19da50: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA54u;
        goto label_19da54;
    }
    ctx->pc = 0x19DA4Cu;
    {
        const bool branch_taken_0x19da4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA4Cu;
        // 0x19da50: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da4c) {
            ctx->pc = 0x19DACCu;
            goto label_19dacc;
        }
    }
    ctx->pc = 0x19DA54u;
label_19da54:
    // 0x19da54: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x19da54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_19da58:
    // 0x19da58: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x19da58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_19da5c:
    // 0x19da5c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x19da5cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19da60:
    // 0x19da60: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x19da60u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19da64:
    // 0x19da64: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x19da64u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
label_19da68:
    // 0x19da68: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x19da68u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19da6c:
    // 0x19da6c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19da6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19da70:
    // 0x19da70: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x19da70u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19da74:
    // 0x19da74: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x19da74u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
label_19da78:
    // 0x19da78: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x19da78u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
label_19da7c:
    // 0x19da7c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x19da7cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19da80:
    // 0x19da80: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x19da80u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
label_19da84:
    // 0x19da84: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x19da84u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
label_19da88:
    // 0x19da88: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x19da88u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
label_19da8c:
    // 0x19da8c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x19da8cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
label_19da90:
    // 0x19da90: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x19da90u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
label_19da94:
    // 0x19da94: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x19da94u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_19da98:
    // 0x19da98: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x19da98u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
label_19da9c:
    // 0x19da9c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x19da9cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
label_19daa0:
    // 0x19daa0: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x19daa0u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
label_19daa4:
    // 0x19daa4: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x19daa4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
label_19daa8:
    // 0x19daa8: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x19daa8u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19daac:
    // 0x19daac: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x19daacu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_19dab0:
    // 0x19dab0: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x19dab0u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
label_19dab4:
    // 0x19dab4: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x19dab4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
label_19dab8:
    // 0x19dab8: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x19dab8u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19dabc:
    // 0x19dabc: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x19dabcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
label_19dac0:
    // 0x19dac0: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x19dac0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
label_19dac4:
    // 0x19dac4: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
label_19dac8:
    if (ctx->pc == 0x19DAC8u) {
        ctx->pc = 0x19DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DAC4u;
        // 0x19dac8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DACCu;
        goto label_19dacc;
    }
    ctx->pc = 0x19DAC4u;
    {
        const bool branch_taken_0x19dac4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DAC4u;
        // 0x19dac8: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dac4) {
            ctx->pc = 0x19DA54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19da54;
        }
    }
    ctx->pc = 0x19DACCu;
label_19dacc:
    // 0x19dacc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x19daccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_19dad0:
    // 0x19dad0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x19dad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_19dad4:
    // 0x19dad4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19dad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19dad8:
    // 0x19dad8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x19dad8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
label_19dadc:
    // 0x19dadc: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
label_19dae0:
    if (ctx->pc == 0x19DAE0u) {
        ctx->pc = 0x19DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DADCu;
        // 0x19dae0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DAE4u;
        goto label_19dae4;
    }
    ctx->pc = 0x19DADCu;
    {
        const bool branch_taken_0x19dadc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DADCu;
        // 0x19dae0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dadc) {
            ctx->pc = 0x19DA54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19da54;
        }
    }
    ctx->pc = 0x19DAE4u;
label_19dae4:
    // 0x19dae4: 0x3e00008  jr          $ra
label_19dae8:
    if (ctx->pc == 0x19DAE8u) {
        ctx->pc = 0x19DAECu;
        goto label_19daec;
    }
    ctx->pc = 0x19DAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DAECu;
label_19daec:
    // 0x19daec: 0x0  nop
    ctx->pc = 0x19daecu;
    // NOP
label_19daf0:
    // 0x19daf0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19daf0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19daf4:
    // 0x19daf4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19daf4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19daf8:
    // 0x19daf8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19daf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19dafc:
    // 0x19dafc: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19dafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19db00:
    // 0x19db00: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19db00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19db04:
    // 0x19db04: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19db04u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19db08:
    // 0x19db08: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x19db08u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19db0c:
    // 0x19db0c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19db0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19db10:
    // 0x19db10: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x19db10u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_19db14:
    // 0x19db14: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19db14u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19db18:
    // 0x19db18: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19db18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19db1c:
    // 0x19db1c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x19db1cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_19db20:
    // 0x19db20: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x19db20u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_19db24:
    // 0x19db24: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x19db24u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19db28:
    // 0x19db28: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x19db28u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19db2c:
    // 0x19db2c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x19db2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
label_19db30:
    // 0x19db30: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
label_19db34:
    if (ctx->pc == 0x19DB34u) {
        ctx->pc = 0x19DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB30u;
        // 0x19db34: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB38u;
        goto label_19db38;
    }
    ctx->pc = 0x19DB30u;
    {
        const bool branch_taken_0x19db30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB30u;
        // 0x19db34: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db30) {
            ctx->pc = 0x19DB8Cu;
            goto label_19db8c;
        }
    }
    ctx->pc = 0x19DB38u;
label_19db38:
    // 0x19db38: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x19db38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_19db3c:
    // 0x19db3c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x19db3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_19db40:
    // 0x19db40: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x19db40u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_19db44:
    // 0x19db44: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x19db44u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_19db48:
    // 0x19db48: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x19db48u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19db4c:
    // 0x19db4c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x19db4cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19db50:
    // 0x19db50: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x19db50u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_19db54:
    // 0x19db54: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19db54u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19db58:
    // 0x19db58: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x19db58u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
label_19db5c:
    // 0x19db5c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x19db5cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19db60:
    // 0x19db60: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x19db60u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
label_19db64:
    // 0x19db64: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x19db64u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19db68:
    // 0x19db68: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x19db68u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_19db6c:
    // 0x19db6c: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x19db6cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
label_19db70:
    // 0x19db70: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x19db70u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19db74:
    // 0x19db74: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x19db74u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
label_19db78:
    // 0x19db78: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x19db78u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
label_19db7c:
    // 0x19db7c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x19db7cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19db80:
    // 0x19db80: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x19db80u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
label_19db84:
    // 0x19db84: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
label_19db88:
    if (ctx->pc == 0x19DB88u) {
        ctx->pc = 0x19DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB84u;
        // 0x19db88: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DB8Cu;
        goto label_19db8c;
    }
    ctx->pc = 0x19DB84u;
    {
        const bool branch_taken_0x19db84 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB84u;
        // 0x19db88: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db84) {
            ctx->pc = 0x19DB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19db38;
        }
    }
    ctx->pc = 0x19DB8Cu;
label_19db8c:
    // 0x19db8c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x19db8cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
label_19db90:
    // 0x19db90: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x19db90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
label_19db94:
    // 0x19db94: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19db94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19db98:
    // 0x19db98: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x19db98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
label_19db9c:
    // 0x19db9c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x19db9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
label_19dba0:
    // 0x19dba0: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
label_19dba4:
    if (ctx->pc == 0x19DBA4u) {
        ctx->pc = 0x19DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBA0u;
        // 0x19dba4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DBA8u;
        goto label_19dba8;
    }
    ctx->pc = 0x19DBA0u;
    {
        const bool branch_taken_0x19dba0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBA0u;
        // 0x19dba4: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dba0) {
            ctx->pc = 0x19DB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19db38;
        }
    }
    ctx->pc = 0x19DBA8u;
label_19dba8:
    // 0x19dba8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19dba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19dbac:
    // 0x19dbac: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19dbacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19dbb0:
    // 0x19dbb0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19dbb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19dbb4:
    // 0x19dbb4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x19dbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_19dbb8:
    // 0x19dbb8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x19dbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_19dbbc:
    // 0x19dbbc: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x19dbbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
label_19dbc0:
    // 0x19dbc0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x19dbc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_19dbc4:
    // 0x19dbc4: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
label_19dbc8:
    if (ctx->pc == 0x19DBC8u) {
        ctx->pc = 0x19DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBC4u;
        // 0x19dbc8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DBCCu;
        goto label_19dbcc;
    }
    ctx->pc = 0x19DBC4u;
    {
        const bool branch_taken_0x19dbc4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBC4u;
        // 0x19dbc8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dbc4) {
            ctx->pc = 0x19DB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19db18;
        }
    }
    ctx->pc = 0x19DBCCu;
label_19dbcc:
    // 0x19dbcc: 0x3e00008  jr          $ra
label_19dbd0:
    if (ctx->pc == 0x19DBD0u) {
        ctx->pc = 0x19DBD4u;
        goto label_19dbd4;
    }
    ctx->pc = 0x19DBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DBD4u;
label_19dbd4:
    // 0x19dbd4: 0x0  nop
    ctx->pc = 0x19dbd4u;
    // NOP
label_19dbd8:
    // 0x19dbd8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19dbd8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19dbdc:
    // 0x19dbdc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19dbdcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19dbe0:
    // 0x19dbe0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19dbe4:
    // 0x19dbe4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19dbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19dbe8:
    // 0x19dbe8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19dbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19dbec:
    // 0x19dbec: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19dbecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19dbf0:
    // 0x19dbf0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19dbf0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19dbf4:
    // 0x19dbf4: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x19dbf4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dbf8:
    // 0x19dbf8: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x19dbf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19dbfc:
    // 0x19dbfc: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x19dbfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_19dc00:
    // 0x19dc00: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x19dc00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19dc04:
    // 0x19dc04: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x19dc04u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19dc08:
    // 0x19dc08: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x19dc08u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19dc0c:
    // 0x19dc0c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19dc0cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19dc10:
    // 0x19dc10: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x19dc10u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
label_19dc14:
    // 0x19dc14: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x19dc14u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
label_19dc18:
    // 0x19dc18: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x19dc18u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19dc1c:
    // 0x19dc1c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19dc1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19dc20:
    // 0x19dc20: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x19dc20u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19dc24:
    // 0x19dc24: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x19dc24u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
label_19dc28:
    // 0x19dc28: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x19dc28u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
label_19dc2c:
    // 0x19dc2c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x19dc2cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_19dc30:
    // 0x19dc30: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x19dc30u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_19dc34:
    // 0x19dc34: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x19dc34u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
label_19dc38:
    // 0x19dc38: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x19dc38u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
label_19dc3c:
    // 0x19dc3c: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x19dc3cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
label_19dc40:
    // 0x19dc40: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x19dc40u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
label_19dc44:
    // 0x19dc44: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x19dc44u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
label_19dc48:
    // 0x19dc48: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x19dc48u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
label_19dc4c:
    // 0x19dc4c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x19dc4cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_19dc50:
    // 0x19dc50: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x19dc50u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
label_19dc54:
    // 0x19dc54: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x19dc54u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
label_19dc58:
    // 0x19dc58: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x19dc58u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
label_19dc5c:
    // 0x19dc5c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x19dc5cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
label_19dc60:
    // 0x19dc60: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x19dc60u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19dc64:
    // 0x19dc64: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x19dc64u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_19dc68:
    // 0x19dc68: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x19dc68u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
label_19dc6c:
    // 0x19dc6c: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x19dc6cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
label_19dc70:
    // 0x19dc70: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x19dc70u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19dc74:
    // 0x19dc74: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x19dc74u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
label_19dc78:
    // 0x19dc78: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x19dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
label_19dc7c:
    // 0x19dc7c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x19dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_19dc80:
    // 0x19dc80: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x19dc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_19dc84:
    // 0x19dc84: 0x1ce0ffdf  bgtz        $a3, . + 4 + (-0x21 << 2)
label_19dc88:
    if (ctx->pc == 0x19DC88u) {
        ctx->pc = 0x19DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC84u;
        // 0x19dc88: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DC8Cu;
        goto label_19dc8c;
    }
    ctx->pc = 0x19DC84u;
    {
        const bool branch_taken_0x19dc84 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC84u;
        // 0x19dc88: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc84) {
            ctx->pc = 0x19DC04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dc04;
        }
    }
    ctx->pc = 0x19DC8Cu;
label_19dc8c:
    // 0x19dc8c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x19dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_19dc90:
    // 0x19dc90: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x19dc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_19dc94:
    // 0x19dc94: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19dc94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19dc98:
    // 0x19dc98: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x19dc98u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
label_19dc9c:
    // 0x19dc9c: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
label_19dca0:
    if (ctx->pc == 0x19DCA0u) {
        ctx->pc = 0x19DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC9Cu;
        // 0x19dca0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DCA4u;
        goto label_19dca4;
    }
    ctx->pc = 0x19DC9Cu;
    {
        const bool branch_taken_0x19dc9c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC9Cu;
        // 0x19dca0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc9c) {
            ctx->pc = 0x19DC04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dc04;
        }
    }
    ctx->pc = 0x19DCA4u;
label_19dca4:
    // 0x19dca4: 0x3e00008  jr          $ra
label_19dca8:
    if (ctx->pc == 0x19DCA8u) {
        ctx->pc = 0x19DCACu;
        goto label_19dcac;
    }
    ctx->pc = 0x19DCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DCACu;
label_19dcac:
    // 0x19dcac: 0x0  nop
    ctx->pc = 0x19dcacu;
    // NOP
label_19dcb0:
    // 0x19dcb0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19dcb0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19dcb4:
    // 0x19dcb4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19dcb4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19dcb8:
    // 0x19dcb8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19dcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19dcbc:
    // 0x19dcbc: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19dcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19dcc0:
    // 0x19dcc0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19dcc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19dcc4:
    // 0x19dcc4: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19dcc4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19dcc8:
    // 0x19dcc8: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x19dcc8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dccc:
    // 0x19dccc: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x19dcccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19dcd0:
    // 0x19dcd0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x19dcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19dcd4:
    // 0x19dcd4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_19dcd8:
    // 0x19dcd8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19dcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19dcdc:
    // 0x19dcdc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x19dcdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19dce0:
    // 0x19dce0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x19dce0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_19dce4:
    // 0x19dce4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x19dce4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_19dce8:
    // 0x19dce8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x19dce8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19dcec:
    // 0x19dcec: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19dcecu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19dcf0:
    // 0x19dcf0: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x19dcf0u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19dcf4:
    // 0x19dcf4: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x19dcf4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_19dcf8:
    // 0x19dcf8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19dcf8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19dcfc:
    // 0x19dcfc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19dd00:
    // 0x19dd00: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x19dd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_19dd04:
    // 0x19dd04: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x19dd04u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
label_19dd08:
    // 0x19dd08: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x19dd08u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19dd0c:
    // 0x19dd0c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x19dd0cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19dd10:
    // 0x19dd10: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x19dd10u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19dd14:
    // 0x19dd14: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x19dd14u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
label_19dd18:
    // 0x19dd18: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x19dd18u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19dd1c:
    // 0x19dd1c: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x19dd1cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_19dd20:
    // 0x19dd20: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x19dd20u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
label_19dd24:
    // 0x19dd24: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x19dd24u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19dd28:
    // 0x19dd28: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x19dd28u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
label_19dd2c:
    // 0x19dd2c: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x19dd2cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
label_19dd30:
    // 0x19dd30: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x19dd30u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19dd34:
    // 0x19dd34: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x19dd34u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
label_19dd38:
    // 0x19dd38: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
label_19dd3c:
    if (ctx->pc == 0x19DD3Cu) {
        ctx->pc = 0x19DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD38u;
        // 0x19dd3c: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD40u;
        goto label_19dd40;
    }
    ctx->pc = 0x19DD38u;
    {
        const bool branch_taken_0x19dd38 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD38u;
        // 0x19dd3c: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd38) {
            ctx->pc = 0x19DCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dce0;
        }
    }
    ctx->pc = 0x19DD40u;
label_19dd40:
    // 0x19dd40: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x19dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
label_19dd44:
    // 0x19dd44: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x19dd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
label_19dd48:
    // 0x19dd48: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19dd48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19dd4c:
    // 0x19dd4c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x19dd4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
label_19dd50:
    // 0x19dd50: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
label_19dd54:
    if (ctx->pc == 0x19DD54u) {
        ctx->pc = 0x19DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD50u;
        // 0x19dd54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD58u;
        goto label_19dd58;
    }
    ctx->pc = 0x19DD50u;
    {
        const bool branch_taken_0x19dd50 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD50u;
        // 0x19dd54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd50) {
            ctx->pc = 0x19DCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dce0;
        }
    }
    ctx->pc = 0x19DD58u;
label_19dd58:
    // 0x19dd58: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19dd5c:
    // 0x19dd5c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19dd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19dd60:
    // 0x19dd60: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19dd60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19dd64:
    // 0x19dd64: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x19dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_19dd68:
    // 0x19dd68: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x19dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_19dd6c:
    // 0x19dd6c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x19dd6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
label_19dd70:
    // 0x19dd70: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
label_19dd74:
    if (ctx->pc == 0x19DD74u) {
        ctx->pc = 0x19DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD70u;
        // 0x19dd74: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DD78u;
        goto label_19dd78;
    }
    ctx->pc = 0x19DD70u;
    {
        const bool branch_taken_0x19dd70 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD70u;
        // 0x19dd74: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd70) {
            ctx->pc = 0x19DCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dcd8;
        }
    }
    ctx->pc = 0x19DD78u;
label_19dd78:
    // 0x19dd78: 0x3e00008  jr          $ra
label_19dd7c:
    if (ctx->pc == 0x19DD7Cu) {
        ctx->pc = 0x19DD80u;
        goto label_19dd80;
    }
    ctx->pc = 0x19DD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DD80u;
label_19dd80:
    // 0x19dd80: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19dd80u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19dd84:
    // 0x19dd84: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19dd84u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19dd88:
    // 0x19dd88: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x19dd88u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
label_19dd8c:
    // 0x19dd8c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19dd90:
    // 0x19dd90: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19dd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19dd94:
    // 0x19dd94: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19dd94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19dd98:
    // 0x19dd98: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19dd98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19dd9c:
    // 0x19dd9c: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19dd9cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19dda0:
    // 0x19dda0: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x19dda0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19dda4:
    // 0x19dda4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x19dda4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dda8:
    // 0x19dda8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x19dda8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19ddac:
    // 0x19ddac: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x19ddacu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19ddb0:
    // 0x19ddb0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19ddb0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19ddb4:
    // 0x19ddb4: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x19ddb4u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19ddb8:
    // 0x19ddb8: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x19ddb8u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
label_19ddbc:
    // 0x19ddbc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x19ddbcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19ddc0:
    // 0x19ddc0: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x19ddc0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19ddc4:
    // 0x19ddc4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x19ddc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ddc8:
    // 0x19ddc8: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x19ddc8u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
label_19ddcc:
    // 0x19ddcc: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x19ddccu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
label_19ddd0:
    // 0x19ddd0: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x19ddd0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
label_19ddd4:
    // 0x19ddd4: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x19ddd4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
label_19ddd8:
    // 0x19ddd8: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x19ddd8u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
label_19dddc:
    // 0x19dddc: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
label_19dde0:
    if (ctx->pc == 0x19DDE0u) {
        ctx->pc = 0x19DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDDCu;
        // 0x19dde0: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DDE4u;
        goto label_19dde4;
    }
    ctx->pc = 0x19DDDCu;
    {
        const bool branch_taken_0x19dddc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDDCu;
        // 0x19dde0: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dddc) {
            ctx->pc = 0x19DE80u;
            goto label_19de80;
        }
    }
    ctx->pc = 0x19DDE4u;
label_19dde4:
    // 0x19dde4: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x19dde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
label_19dde8:
    // 0x19dde8: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x19dde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
label_19ddec:
    // 0x19ddec: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x19ddecu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19ddf0:
    // 0x19ddf0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x19ddf0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19ddf4:
    // 0x19ddf4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19ddf4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19ddf8:
    // 0x19ddf8: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x19ddf8u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
label_19ddfc:
    // 0x19ddfc: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x19ddfcu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
label_19de00:
    // 0x19de00: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x19de00u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19de04:
    // 0x19de04: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19de04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19de08:
    // 0x19de08: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x19de08u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19de0c:
    // 0x19de0c: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x19de0cu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
label_19de10:
    // 0x19de10: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x19de10u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
label_19de14:
    // 0x19de14: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x19de14u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_19de18:
    // 0x19de18: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x19de18u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_19de1c:
    // 0x19de1c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x19de1cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
label_19de20:
    // 0x19de20: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x19de20u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
label_19de24:
    // 0x19de24: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x19de24u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
label_19de28:
    // 0x19de28: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x19de28u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
label_19de2c:
    // 0x19de2c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x19de2cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19de30:
    // 0x19de30: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x19de30u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
label_19de34:
    // 0x19de34: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x19de34u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
label_19de38:
    // 0x19de38: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x19de38u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
label_19de3c:
    // 0x19de3c: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x19de3cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
label_19de40:
    // 0x19de40: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x19de40u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
label_19de44:
    // 0x19de44: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x19de44u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_19de48:
    // 0x19de48: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x19de48u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
label_19de4c:
    // 0x19de4c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x19de4cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
label_19de50:
    // 0x19de50: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x19de50u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
label_19de54:
    // 0x19de54: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19de54u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19de58:
    // 0x19de58: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19de58u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19de5c:
    // 0x19de5c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x19de5cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
label_19de60:
    // 0x19de60: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x19de60u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19de64:
    // 0x19de64: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x19de64u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
label_19de68:
    // 0x19de68: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x19de68u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19de6c:
    // 0x19de6c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x19de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
label_19de70:
    // 0x19de70: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x19de70u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
label_19de74:
    // 0x19de74: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x19de74u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
label_19de78:
    // 0x19de78: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
label_19de7c:
    if (ctx->pc == 0x19DE7Cu) {
        ctx->pc = 0x19DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE78u;
        // 0x19de7c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE80u;
        goto label_19de80;
    }
    ctx->pc = 0x19DE78u;
    {
        const bool branch_taken_0x19de78 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE78u;
        // 0x19de7c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de78) {
            ctx->pc = 0x19DDE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dde4;
        }
    }
    ctx->pc = 0x19DE80u;
label_19de80:
    // 0x19de80: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x19de80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_19de84:
    // 0x19de84: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x19de84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_19de88:
    // 0x19de88: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19de88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19de8c:
    // 0x19de8c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x19de8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
label_19de90:
    // 0x19de90: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
label_19de94:
    if (ctx->pc == 0x19DE94u) {
        ctx->pc = 0x19DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE90u;
        // 0x19de94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE98u;
        goto label_19de98;
    }
    ctx->pc = 0x19DE90u;
    {
        const bool branch_taken_0x19de90 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE90u;
        // 0x19de94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de90) {
            ctx->pc = 0x19DDE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dde4;
        }
    }
    ctx->pc = 0x19DE98u;
label_19de98:
    // 0x19de98: 0x3e00008  jr          $ra
label_19de9c:
    if (ctx->pc == 0x19DE9Cu) {
        ctx->pc = 0x19DEA0u;
        goto label_19dea0;
    }
    ctx->pc = 0x19DE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DEA0u;
label_19dea0:
    // 0x19dea0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19dea0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19dea4:
    // 0x19dea4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19dea4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19dea8:
    // 0x19dea8: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x19dea8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
label_19deac:
    // 0x19deac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19deacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19deb0:
    // 0x19deb0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19deb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19deb4:
    // 0x19deb4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19deb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19deb8:
    // 0x19deb8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19deb8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19debc:
    // 0x19debc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x19debcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19dec0:
    // 0x19dec0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x19dec0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dec4:
    // 0x19dec4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19dec4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dec8:
    // 0x19dec8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19dec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19decc:
    // 0x19decc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x19deccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_19ded0:
    // 0x19ded0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x19ded0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_19ded4:
    // 0x19ded4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x19ded4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19ded8:
    // 0x19ded8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19ded8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19dedc:
    // 0x19dedc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x19dedcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19dee0:
    // 0x19dee0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x19dee0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_19dee4:
    // 0x19dee4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x19dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_19dee8:
    // 0x19dee8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x19dee8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
label_19deec:
    // 0x19deec: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x19deecu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
label_19def0:
    // 0x19def0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x19def0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19def4:
    // 0x19def4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x19def4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19def8:
    // 0x19def8: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
label_19defc:
    if (ctx->pc == 0x19DEFCu) {
        ctx->pc = 0x19DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEF8u;
        // 0x19defc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF00u;
        goto label_19df00;
    }
    ctx->pc = 0x19DEF8u;
    {
        const bool branch_taken_0x19def8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEF8u;
        // 0x19defc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19def8) {
            ctx->pc = 0x19DF6Cu;
            goto label_19df6c;
        }
    }
    ctx->pc = 0x19DF00u;
label_19df00:
    // 0x19df00: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x19df00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_19df04:
    // 0x19df04: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x19df04u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_19df08:
    // 0x19df08: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x19df08u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_19df0c:
    // 0x19df0c: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x19df0cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19df10:
    // 0x19df10: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19df10u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19df14:
    // 0x19df14: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x19df14u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19df18:
    // 0x19df18: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x19df18u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_19df1c:
    // 0x19df1c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19df1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19df20:
    // 0x19df20: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x19df20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_19df24:
    // 0x19df24: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x19df24u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
label_19df28:
    // 0x19df28: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x19df28u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19df2c:
    // 0x19df2c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x19df2cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19df30:
    // 0x19df30: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x19df30u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19df34:
    // 0x19df34: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x19df34u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
label_19df38:
    // 0x19df38: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x19df38u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19df3c:
    // 0x19df3c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x19df3cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
label_19df40:
    // 0x19df40: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x19df40u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
label_19df44:
    // 0x19df44: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x19df44u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
label_19df48:
    // 0x19df48: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x19df48u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
label_19df4c:
    // 0x19df4c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x19df4cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19df50:
    // 0x19df50: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x19df50u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
label_19df54:
    // 0x19df54: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x19df54u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
label_19df58:
    // 0x19df58: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x19df58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_19df5c:
    // 0x19df5c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x19df5cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19df60:
    // 0x19df60: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x19df60u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
label_19df64:
    // 0x19df64: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
label_19df68:
    if (ctx->pc == 0x19DF68u) {
        ctx->pc = 0x19DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF64u;
        // 0x19df68: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF6Cu;
        goto label_19df6c;
    }
    ctx->pc = 0x19DF64u;
    {
        const bool branch_taken_0x19df64 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF64u;
        // 0x19df68: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df64) {
            ctx->pc = 0x19DF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19df00;
        }
    }
    ctx->pc = 0x19DF6Cu;
label_19df6c:
    // 0x19df6c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x19df6cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
label_19df70:
    // 0x19df70: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x19df70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
label_19df74:
    // 0x19df74: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19df74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19df78:
    // 0x19df78: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x19df78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
label_19df7c:
    // 0x19df7c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x19df7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
label_19df80:
    // 0x19df80: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
label_19df84:
    if (ctx->pc == 0x19DF84u) {
        ctx->pc = 0x19DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF80u;
        // 0x19df84: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF88u;
        goto label_19df88;
    }
    ctx->pc = 0x19DF80u;
    {
        const bool branch_taken_0x19df80 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF80u;
        // 0x19df84: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df80) {
            ctx->pc = 0x19DF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19df00;
        }
    }
    ctx->pc = 0x19DF88u;
label_19df88:
    // 0x19df88: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19df88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19df8c:
    // 0x19df8c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19df8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19df90:
    // 0x19df90: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19df90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19df94:
    // 0x19df94: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x19df94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_19df98:
    // 0x19df98: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x19df98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_19df9c:
    // 0x19df9c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x19df9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
label_19dfa0:
    // 0x19dfa0: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x19dfa0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_19dfa4:
    // 0x19dfa4: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
label_19dfa8:
    if (ctx->pc == 0x19DFA8u) {
        ctx->pc = 0x19DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA4u;
        // 0x19dfa8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFACu;
        goto label_19dfac;
    }
    ctx->pc = 0x19DFA4u;
    {
        const bool branch_taken_0x19dfa4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA4u;
        // 0x19dfa8: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfa4) {
            ctx->pc = 0x19DEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dec8;
        }
    }
    ctx->pc = 0x19DFACu;
label_19dfac:
    // 0x19dfac: 0x3e00008  jr          $ra
label_19dfb0:
    if (ctx->pc == 0x19DFB0u) {
        ctx->pc = 0x19DFB4u;
        goto label_19dfb4;
    }
    ctx->pc = 0x19DFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DFB4u;
label_19dfb4:
    // 0x19dfb4: 0x0  nop
    ctx->pc = 0x19dfb4u;
    // NOP
label_19dfb8:
    // 0x19dfb8: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x19dfb8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_19dfbc:
    // 0x19dfbc: 0x3c0a001a  lui         $t2, 0x1A
    ctx->pc = 0x19dfbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)26 << 16));
label_19dfc0:
    // 0x19dfc0: 0x254ae060  addiu       $t2, $t2, -0x1FA0
    ctx->pc = 0x19dfc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959200));
label_19dfc4:
    // 0x19dfc4: 0x794b0000  lq          $t3, 0x0($t2)
    ctx->pc = 0x19dfc4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_19dfc8:
    // 0x19dfc8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x19dfc8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19dfcc:
    // 0x19dfcc: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x19dfccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_19dfd0:
    // 0x19dfd0: 0x78cd0000  lq          $t5, 0x0($a2)
    ctx->pc = 0x19dfd0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19dfd4:
    // 0x19dfd4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x19dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_19dfd8:
    // 0x19dfd8: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x19dfd8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_19dfdc:
    // 0x19dfdc: 0x710d4108  paddh       $t0, $t0, $t5
    ctx->pc = 0x19dfdcu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
label_19dfe0:
    // 0x19dfe0: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x19dfe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_19dfe4:
    // 0x19dfe4: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x19dfe4u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
label_19dfe8:
    // 0x19dfe8: 0x71224908  paddh       $t1, $t1, $v0
    ctx->pc = 0x19dfe8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
label_19dfec:
    // 0x19dfec: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x19dfecu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_19dff0:
    // 0x19dff0: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x19dff0u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
label_19dff4:
    // 0x19dff4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x19dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_19dff8:
    // 0x19dff8: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x19dff8u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
label_19dffc:
    // 0x19dffc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x19dffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_19e000:
    // 0x19e000: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x19e000u;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19e004:
    // 0x19e004: 0x1580fff0  bnez        $t4, . + 4 + (-0x10 << 2)
label_19e008:
    if (ctx->pc == 0x19E008u) {
        ctx->pc = 0x19E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E004u;
        // 0x19e008: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E00Cu;
        goto label_19e00c;
    }
    ctx->pc = 0x19E004u;
    {
        const bool branch_taken_0x19e004 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E004u;
        // 0x19e008: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e004) {
            ctx->pc = 0x19DFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dfc8;
        }
    }
    ctx->pc = 0x19E00Cu;
label_19e00c:
    // 0x19e00c: 0x3e00008  jr          $ra
label_19e010:
    if (ctx->pc == 0x19E010u) {
        ctx->pc = 0x19E014u;
        goto label_19e014;
    }
    ctx->pc = 0x19E00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E014u;
label_19e014:
    // 0x19e014: 0x0  nop
    ctx->pc = 0x19e014u;
    // NOP
label_19e018:
    // 0x19e018: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x19e018u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_19e01c:
    // 0x19e01c: 0x3c0a001a  lui         $t2, 0x1A
    ctx->pc = 0x19e01cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)26 << 16));
    ctx->pc = 0x19e020u;
    return;
}
