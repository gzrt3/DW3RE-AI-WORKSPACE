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


void FUN_0019b850_part431(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26d7b0u: goto label_26d7b0;
        case 0x26d7b4u: goto label_26d7b4;
        case 0x26d7b8u: goto label_26d7b8;
        case 0x26d7bcu: goto label_26d7bc;
        case 0x26d7c0u: goto label_26d7c0;
        case 0x26d7c4u: goto label_26d7c4;
        case 0x26d7c8u: goto label_26d7c8;
        case 0x26d7ccu: goto label_26d7cc;
        case 0x26d7d0u: goto label_26d7d0;
        case 0x26d7d4u: goto label_26d7d4;
        case 0x26d7d8u: goto label_26d7d8;
        case 0x26d7dcu: goto label_26d7dc;
        case 0x26d7e0u: goto label_26d7e0;
        case 0x26d7e4u: goto label_26d7e4;
        case 0x26d7e8u: goto label_26d7e8;
        case 0x26d7ecu: goto label_26d7ec;
        case 0x26d7f0u: goto label_26d7f0;
        case 0x26d7f4u: goto label_26d7f4;
        case 0x26d7f8u: goto label_26d7f8;
        case 0x26d7fcu: goto label_26d7fc;
        case 0x26d800u: goto label_26d800;
        case 0x26d804u: goto label_26d804;
        case 0x26d808u: goto label_26d808;
        case 0x26d80cu: goto label_26d80c;
        case 0x26d810u: goto label_26d810;
        case 0x26d814u: goto label_26d814;
        case 0x26d818u: goto label_26d818;
        case 0x26d81cu: goto label_26d81c;
        case 0x26d820u: goto label_26d820;
        case 0x26d824u: goto label_26d824;
        case 0x26d828u: goto label_26d828;
        case 0x26d82cu: goto label_26d82c;
        case 0x26d830u: goto label_26d830;
        case 0x26d834u: goto label_26d834;
        case 0x26d838u: goto label_26d838;
        case 0x26d83cu: goto label_26d83c;
        case 0x26d840u: goto label_26d840;
        case 0x26d844u: goto label_26d844;
        case 0x26d848u: goto label_26d848;
        case 0x26d84cu: goto label_26d84c;
        case 0x26d850u: goto label_26d850;
        case 0x26d854u: goto label_26d854;
        case 0x26d858u: goto label_26d858;
        case 0x26d85cu: goto label_26d85c;
        case 0x26d860u: goto label_26d860;
        case 0x26d864u: goto label_26d864;
        case 0x26d868u: goto label_26d868;
        case 0x26d86cu: goto label_26d86c;
        case 0x26d870u: goto label_26d870;
        case 0x26d874u: goto label_26d874;
        case 0x26d878u: goto label_26d878;
        case 0x26d87cu: goto label_26d87c;
        case 0x26d880u: goto label_26d880;
        case 0x26d884u: goto label_26d884;
        case 0x26d888u: goto label_26d888;
        case 0x26d88cu: goto label_26d88c;
        case 0x26d890u: goto label_26d890;
        case 0x26d894u: goto label_26d894;
        case 0x26d898u: goto label_26d898;
        case 0x26d89cu: goto label_26d89c;
        case 0x26d8a0u: goto label_26d8a0;
        case 0x26d8a4u: goto label_26d8a4;
        case 0x26d8a8u: goto label_26d8a8;
        case 0x26d8acu: goto label_26d8ac;
        case 0x26d8b0u: goto label_26d8b0;
        case 0x26d8b4u: goto label_26d8b4;
        case 0x26d8b8u: goto label_26d8b8;
        case 0x26d8bcu: goto label_26d8bc;
        case 0x26d8c0u: goto label_26d8c0;
        case 0x26d8c4u: goto label_26d8c4;
        case 0x26d8c8u: goto label_26d8c8;
        case 0x26d8ccu: goto label_26d8cc;
        case 0x26d8d0u: goto label_26d8d0;
        case 0x26d8d4u: goto label_26d8d4;
        case 0x26d8d8u: goto label_26d8d8;
        case 0x26d8dcu: goto label_26d8dc;
        case 0x26d8e0u: goto label_26d8e0;
        case 0x26d8e4u: goto label_26d8e4;
        case 0x26d8e8u: goto label_26d8e8;
        case 0x26d8ecu: goto label_26d8ec;
        case 0x26d8f0u: goto label_26d8f0;
        case 0x26d8f4u: goto label_26d8f4;
        case 0x26d8f8u: goto label_26d8f8;
        case 0x26d8fcu: goto label_26d8fc;
        case 0x26d900u: goto label_26d900;
        case 0x26d904u: goto label_26d904;
        case 0x26d908u: goto label_26d908;
        case 0x26d90cu: goto label_26d90c;
        case 0x26d910u: goto label_26d910;
        case 0x26d914u: goto label_26d914;
        case 0x26d918u: goto label_26d918;
        case 0x26d91cu: goto label_26d91c;
        case 0x26d920u: goto label_26d920;
        case 0x26d924u: goto label_26d924;
        case 0x26d928u: goto label_26d928;
        case 0x26d92cu: goto label_26d92c;
        case 0x26d930u: goto label_26d930;
        case 0x26d934u: goto label_26d934;
        case 0x26d938u: goto label_26d938;
        case 0x26d93cu: goto label_26d93c;
        case 0x26d940u: goto label_26d940;
        case 0x26d944u: goto label_26d944;
        case 0x26d948u: goto label_26d948;
        case 0x26d94cu: goto label_26d94c;
        case 0x26d950u: goto label_26d950;
        case 0x26d954u: goto label_26d954;
        case 0x26d958u: goto label_26d958;
        case 0x26d95cu: goto label_26d95c;
        case 0x26d960u: goto label_26d960;
        case 0x26d964u: goto label_26d964;
        case 0x26d968u: goto label_26d968;
        case 0x26d96cu: goto label_26d96c;
        case 0x26d970u: goto label_26d970;
        case 0x26d974u: goto label_26d974;
        case 0x26d978u: goto label_26d978;
        case 0x26d97cu: goto label_26d97c;
        case 0x26d980u: goto label_26d980;
        case 0x26d984u: goto label_26d984;
        case 0x26d988u: goto label_26d988;
        case 0x26d98cu: goto label_26d98c;
        case 0x26d990u: goto label_26d990;
        case 0x26d994u: goto label_26d994;
        case 0x26d998u: goto label_26d998;
        case 0x26d99cu: goto label_26d99c;
        case 0x26d9a0u: goto label_26d9a0;
        case 0x26d9a4u: goto label_26d9a4;
        case 0x26d9a8u: goto label_26d9a8;
        case 0x26d9acu: goto label_26d9ac;
        case 0x26d9b0u: goto label_26d9b0;
        case 0x26d9b4u: goto label_26d9b4;
        case 0x26d9b8u: goto label_26d9b8;
        case 0x26d9bcu: goto label_26d9bc;
        case 0x26d9c0u: goto label_26d9c0;
        case 0x26d9c4u: goto label_26d9c4;
        case 0x26d9c8u: goto label_26d9c8;
        case 0x26d9ccu: goto label_26d9cc;
        case 0x26d9d0u: goto label_26d9d0;
        case 0x26d9d4u: goto label_26d9d4;
        case 0x26d9d8u: goto label_26d9d8;
        case 0x26d9dcu: goto label_26d9dc;
        case 0x26d9e0u: goto label_26d9e0;
        case 0x26d9e4u: goto label_26d9e4;
        case 0x26d9e8u: goto label_26d9e8;
        case 0x26d9ecu: goto label_26d9ec;
        case 0x26d9f0u: goto label_26d9f0;
        case 0x26d9f4u: goto label_26d9f4;
        case 0x26d9f8u: goto label_26d9f8;
        case 0x26d9fcu: goto label_26d9fc;
        case 0x26da00u: goto label_26da00;
        case 0x26da04u: goto label_26da04;
        case 0x26da08u: goto label_26da08;
        case 0x26da0cu: goto label_26da0c;
        case 0x26da10u: goto label_26da10;
        case 0x26da14u: goto label_26da14;
        case 0x26da18u: goto label_26da18;
        case 0x26da1cu: goto label_26da1c;
        case 0x26da20u: goto label_26da20;
        case 0x26da24u: goto label_26da24;
        case 0x26da28u: goto label_26da28;
        case 0x26da2cu: goto label_26da2c;
        case 0x26da30u: goto label_26da30;
        case 0x26da34u: goto label_26da34;
        case 0x26da38u: goto label_26da38;
        case 0x26da3cu: goto label_26da3c;
        case 0x26da40u: goto label_26da40;
        case 0x26da44u: goto label_26da44;
        case 0x26da48u: goto label_26da48;
        case 0x26da4cu: goto label_26da4c;
        case 0x26da50u: goto label_26da50;
        case 0x26da54u: goto label_26da54;
        case 0x26da58u: goto label_26da58;
        case 0x26da5cu: goto label_26da5c;
        case 0x26da60u: goto label_26da60;
        case 0x26da64u: goto label_26da64;
        case 0x26da68u: goto label_26da68;
        case 0x26da6cu: goto label_26da6c;
        case 0x26da70u: goto label_26da70;
        case 0x26da74u: goto label_26da74;
        case 0x26da78u: goto label_26da78;
        case 0x26da7cu: goto label_26da7c;
        case 0x26da80u: goto label_26da80;
        case 0x26da84u: goto label_26da84;
        case 0x26da88u: goto label_26da88;
        case 0x26da8cu: goto label_26da8c;
        case 0x26da90u: goto label_26da90;
        case 0x26da94u: goto label_26da94;
        case 0x26da98u: goto label_26da98;
        case 0x26da9cu: goto label_26da9c;
        case 0x26daa0u: goto label_26daa0;
        case 0x26daa4u: goto label_26daa4;
        case 0x26daa8u: goto label_26daa8;
        case 0x26daacu: goto label_26daac;
        case 0x26dab0u: goto label_26dab0;
        case 0x26dab4u: goto label_26dab4;
        case 0x26dab8u: goto label_26dab8;
        case 0x26dabcu: goto label_26dabc;
        case 0x26dac0u: goto label_26dac0;
        case 0x26dac4u: goto label_26dac4;
        case 0x26dac8u: goto label_26dac8;
        case 0x26daccu: goto label_26dacc;
        case 0x26dad0u: goto label_26dad0;
        case 0x26dad4u: goto label_26dad4;
        case 0x26dad8u: goto label_26dad8;
        case 0x26dadcu: goto label_26dadc;
        case 0x26dae0u: goto label_26dae0;
        case 0x26dae4u: goto label_26dae4;
        case 0x26dae8u: goto label_26dae8;
        case 0x26daecu: goto label_26daec;
        case 0x26daf0u: goto label_26daf0;
        case 0x26daf4u: goto label_26daf4;
        case 0x26daf8u: goto label_26daf8;
        case 0x26dafcu: goto label_26dafc;
        case 0x26db00u: goto label_26db00;
        case 0x26db04u: goto label_26db04;
        case 0x26db08u: goto label_26db08;
        case 0x26db0cu: goto label_26db0c;
        case 0x26db10u: goto label_26db10;
        case 0x26db14u: goto label_26db14;
        case 0x26db18u: goto label_26db18;
        case 0x26db1cu: goto label_26db1c;
        case 0x26db20u: goto label_26db20;
        case 0x26db24u: goto label_26db24;
        case 0x26db28u: goto label_26db28;
        case 0x26db2cu: goto label_26db2c;
        case 0x26db30u: goto label_26db30;
        case 0x26db34u: goto label_26db34;
        case 0x26db38u: goto label_26db38;
        case 0x26db3cu: goto label_26db3c;
        case 0x26db40u: goto label_26db40;
        case 0x26db44u: goto label_26db44;
        case 0x26db48u: goto label_26db48;
        case 0x26db4cu: goto label_26db4c;
        case 0x26db50u: goto label_26db50;
        case 0x26db54u: goto label_26db54;
        case 0x26db58u: goto label_26db58;
        case 0x26db5cu: goto label_26db5c;
        case 0x26db60u: goto label_26db60;
        case 0x26db64u: goto label_26db64;
        case 0x26db68u: goto label_26db68;
        case 0x26db6cu: goto label_26db6c;
        case 0x26db70u: goto label_26db70;
        case 0x26db74u: goto label_26db74;
        case 0x26db78u: goto label_26db78;
        case 0x26db7cu: goto label_26db7c;
        case 0x26db80u: goto label_26db80;
        case 0x26db84u: goto label_26db84;
        case 0x26db88u: goto label_26db88;
        case 0x26db8cu: goto label_26db8c;
        case 0x26db90u: goto label_26db90;
        case 0x26db94u: goto label_26db94;
        case 0x26db98u: goto label_26db98;
        case 0x26db9cu: goto label_26db9c;
        case 0x26dba0u: goto label_26dba0;
        case 0x26dba4u: goto label_26dba4;
        case 0x26dba8u: goto label_26dba8;
        case 0x26dbacu: goto label_26dbac;
        case 0x26dbb0u: goto label_26dbb0;
        case 0x26dbb4u: goto label_26dbb4;
        case 0x26dbb8u: goto label_26dbb8;
        case 0x26dbbcu: goto label_26dbbc;
        case 0x26dbc0u: goto label_26dbc0;
        case 0x26dbc4u: goto label_26dbc4;
        case 0x26dbc8u: goto label_26dbc8;
        case 0x26dbccu: goto label_26dbcc;
        case 0x26dbd0u: goto label_26dbd0;
        case 0x26dbd4u: goto label_26dbd4;
        case 0x26dbd8u: goto label_26dbd8;
        case 0x26dbdcu: goto label_26dbdc;
        case 0x26dbe0u: goto label_26dbe0;
        case 0x26dbe4u: goto label_26dbe4;
        case 0x26dbe8u: goto label_26dbe8;
        case 0x26dbecu: goto label_26dbec;
        case 0x26dbf0u: goto label_26dbf0;
        case 0x26dbf4u: goto label_26dbf4;
        case 0x26dbf8u: goto label_26dbf8;
        case 0x26dbfcu: goto label_26dbfc;
        case 0x26dc00u: goto label_26dc00;
        case 0x26dc04u: goto label_26dc04;
        case 0x26dc08u: goto label_26dc08;
        case 0x26dc0cu: goto label_26dc0c;
        case 0x26dc10u: goto label_26dc10;
        case 0x26dc14u: goto label_26dc14;
        case 0x26dc18u: goto label_26dc18;
        case 0x26dc1cu: goto label_26dc1c;
        case 0x26dc20u: goto label_26dc20;
        case 0x26dc24u: goto label_26dc24;
        case 0x26dc28u: goto label_26dc28;
        case 0x26dc2cu: goto label_26dc2c;
        case 0x26dc30u: goto label_26dc30;
        case 0x26dc34u: goto label_26dc34;
        case 0x26dc38u: goto label_26dc38;
        case 0x26dc3cu: goto label_26dc3c;
        case 0x26dc40u: goto label_26dc40;
        case 0x26dc44u: goto label_26dc44;
        case 0x26dc48u: goto label_26dc48;
        case 0x26dc4cu: goto label_26dc4c;
        case 0x26dc50u: goto label_26dc50;
        case 0x26dc54u: goto label_26dc54;
        case 0x26dc58u: goto label_26dc58;
        case 0x26dc5cu: goto label_26dc5c;
        case 0x26dc60u: goto label_26dc60;
        case 0x26dc64u: goto label_26dc64;
        case 0x26dc68u: goto label_26dc68;
        case 0x26dc6cu: goto label_26dc6c;
        case 0x26dc70u: goto label_26dc70;
        case 0x26dc74u: goto label_26dc74;
        case 0x26dc78u: goto label_26dc78;
        case 0x26dc7cu: goto label_26dc7c;
        case 0x26dc80u: goto label_26dc80;
        case 0x26dc84u: goto label_26dc84;
        case 0x26dc88u: goto label_26dc88;
        case 0x26dc8cu: goto label_26dc8c;
        case 0x26dc90u: goto label_26dc90;
        case 0x26dc94u: goto label_26dc94;
        case 0x26dc98u: goto label_26dc98;
        case 0x26dc9cu: goto label_26dc9c;
        case 0x26dca0u: goto label_26dca0;
        case 0x26dca4u: goto label_26dca4;
        case 0x26dca8u: goto label_26dca8;
        case 0x26dcacu: goto label_26dcac;
        case 0x26dcb0u: goto label_26dcb0;
        case 0x26dcb4u: goto label_26dcb4;
        case 0x26dcb8u: goto label_26dcb8;
        case 0x26dcbcu: goto label_26dcbc;
        case 0x26dcc0u: goto label_26dcc0;
        case 0x26dcc4u: goto label_26dcc4;
        case 0x26dcc8u: goto label_26dcc8;
        case 0x26dcccu: goto label_26dccc;
        case 0x26dcd0u: goto label_26dcd0;
        case 0x26dcd4u: goto label_26dcd4;
        case 0x26dcd8u: goto label_26dcd8;
        case 0x26dcdcu: goto label_26dcdc;
        case 0x26dce0u: goto label_26dce0;
        case 0x26dce4u: goto label_26dce4;
        case 0x26dce8u: goto label_26dce8;
        case 0x26dcecu: goto label_26dcec;
        case 0x26dcf0u: goto label_26dcf0;
        case 0x26dcf4u: goto label_26dcf4;
        case 0x26dcf8u: goto label_26dcf8;
        case 0x26dcfcu: goto label_26dcfc;
        case 0x26dd00u: goto label_26dd00;
        case 0x26dd04u: goto label_26dd04;
        case 0x26dd08u: goto label_26dd08;
        case 0x26dd0cu: goto label_26dd0c;
        case 0x26dd10u: goto label_26dd10;
        case 0x26dd14u: goto label_26dd14;
        case 0x26dd18u: goto label_26dd18;
        case 0x26dd1cu: goto label_26dd1c;
        case 0x26dd20u: goto label_26dd20;
        case 0x26dd24u: goto label_26dd24;
        case 0x26dd28u: goto label_26dd28;
        case 0x26dd2cu: goto label_26dd2c;
        case 0x26dd30u: goto label_26dd30;
        case 0x26dd34u: goto label_26dd34;
        case 0x26dd38u: goto label_26dd38;
        case 0x26dd3cu: goto label_26dd3c;
        case 0x26dd40u: goto label_26dd40;
        case 0x26dd44u: goto label_26dd44;
        case 0x26dd48u: goto label_26dd48;
        case 0x26dd4cu: goto label_26dd4c;
        case 0x26dd50u: goto label_26dd50;
        case 0x26dd54u: goto label_26dd54;
        case 0x26dd58u: goto label_26dd58;
        case 0x26dd5cu: goto label_26dd5c;
        case 0x26dd60u: goto label_26dd60;
        case 0x26dd64u: goto label_26dd64;
        case 0x26dd68u: goto label_26dd68;
        case 0x26dd6cu: goto label_26dd6c;
        case 0x26dd70u: goto label_26dd70;
        case 0x26dd74u: goto label_26dd74;
        case 0x26dd78u: goto label_26dd78;
        case 0x26dd7cu: goto label_26dd7c;
        case 0x26dd80u: goto label_26dd80;
        case 0x26dd84u: goto label_26dd84;
        case 0x26dd88u: goto label_26dd88;
        case 0x26dd8cu: goto label_26dd8c;
        case 0x26dd90u: goto label_26dd90;
        case 0x26dd94u: goto label_26dd94;
        case 0x26dd98u: goto label_26dd98;
        case 0x26dd9cu: goto label_26dd9c;
        case 0x26dda0u: goto label_26dda0;
        case 0x26dda4u: goto label_26dda4;
        case 0x26dda8u: goto label_26dda8;
        case 0x26ddacu: goto label_26ddac;
        case 0x26ddb0u: goto label_26ddb0;
        case 0x26ddb4u: goto label_26ddb4;
        case 0x26ddb8u: goto label_26ddb8;
        case 0x26ddbcu: goto label_26ddbc;
        case 0x26ddc0u: goto label_26ddc0;
        case 0x26ddc4u: goto label_26ddc4;
        case 0x26ddc8u: goto label_26ddc8;
        case 0x26ddccu: goto label_26ddcc;
        case 0x26ddd0u: goto label_26ddd0;
        case 0x26ddd4u: goto label_26ddd4;
        case 0x26ddd8u: goto label_26ddd8;
        case 0x26dddcu: goto label_26dddc;
        case 0x26dde0u: goto label_26dde0;
        case 0x26dde4u: goto label_26dde4;
        case 0x26dde8u: goto label_26dde8;
        case 0x26ddecu: goto label_26ddec;
        case 0x26ddf0u: goto label_26ddf0;
        case 0x26ddf4u: goto label_26ddf4;
        case 0x26ddf8u: goto label_26ddf8;
        case 0x26ddfcu: goto label_26ddfc;
        case 0x26de00u: goto label_26de00;
        case 0x26de04u: goto label_26de04;
        case 0x26de08u: goto label_26de08;
        case 0x26de0cu: goto label_26de0c;
        case 0x26de10u: goto label_26de10;
        case 0x26de14u: goto label_26de14;
        case 0x26de18u: goto label_26de18;
        case 0x26de1cu: goto label_26de1c;
        case 0x26de20u: goto label_26de20;
        case 0x26de24u: goto label_26de24;
        case 0x26de28u: goto label_26de28;
        case 0x26de2cu: goto label_26de2c;
        case 0x26de30u: goto label_26de30;
        case 0x26de34u: goto label_26de34;
        case 0x26de38u: goto label_26de38;
        case 0x26de3cu: goto label_26de3c;
        case 0x26de40u: goto label_26de40;
        case 0x26de44u: goto label_26de44;
        case 0x26de48u: goto label_26de48;
        case 0x26de4cu: goto label_26de4c;
        case 0x26de50u: goto label_26de50;
        case 0x26de54u: goto label_26de54;
        case 0x26de58u: goto label_26de58;
        case 0x26de5cu: goto label_26de5c;
        case 0x26de60u: goto label_26de60;
        case 0x26de64u: goto label_26de64;
        case 0x26de68u: goto label_26de68;
        case 0x26de6cu: goto label_26de6c;
        case 0x26de70u: goto label_26de70;
        case 0x26de74u: goto label_26de74;
        case 0x26de78u: goto label_26de78;
        case 0x26de7cu: goto label_26de7c;
        case 0x26de80u: goto label_26de80;
        case 0x26de84u: goto label_26de84;
        case 0x26de88u: goto label_26de88;
        case 0x26de8cu: goto label_26de8c;
        case 0x26de90u: goto label_26de90;
        case 0x26de94u: goto label_26de94;
        case 0x26de98u: goto label_26de98;
        case 0x26de9cu: goto label_26de9c;
        case 0x26dea0u: goto label_26dea0;
        case 0x26dea4u: goto label_26dea4;
        case 0x26dea8u: goto label_26dea8;
        case 0x26deacu: goto label_26deac;
        case 0x26deb0u: goto label_26deb0;
        case 0x26deb4u: goto label_26deb4;
        case 0x26deb8u: goto label_26deb8;
        case 0x26debcu: goto label_26debc;
        case 0x26dec0u: goto label_26dec0;
        case 0x26dec4u: goto label_26dec4;
        case 0x26dec8u: goto label_26dec8;
        case 0x26deccu: goto label_26decc;
        case 0x26ded0u: goto label_26ded0;
        case 0x26ded4u: goto label_26ded4;
        case 0x26ded8u: goto label_26ded8;
        case 0x26dedcu: goto label_26dedc;
        case 0x26dee0u: goto label_26dee0;
        case 0x26dee4u: goto label_26dee4;
        case 0x26dee8u: goto label_26dee8;
        case 0x26deecu: goto label_26deec;
        case 0x26def0u: goto label_26def0;
        case 0x26def4u: goto label_26def4;
        case 0x26def8u: goto label_26def8;
        case 0x26defcu: goto label_26defc;
        case 0x26df00u: goto label_26df00;
        case 0x26df04u: goto label_26df04;
        case 0x26df08u: goto label_26df08;
        case 0x26df0cu: goto label_26df0c;
        case 0x26df10u: goto label_26df10;
        case 0x26df14u: goto label_26df14;
        case 0x26df18u: goto label_26df18;
        case 0x26df1cu: goto label_26df1c;
        case 0x26df20u: goto label_26df20;
        case 0x26df24u: goto label_26df24;
        case 0x26df28u: goto label_26df28;
        case 0x26df2cu: goto label_26df2c;
        case 0x26df30u: goto label_26df30;
        case 0x26df34u: goto label_26df34;
        case 0x26df38u: goto label_26df38;
        case 0x26df3cu: goto label_26df3c;
        case 0x26df40u: goto label_26df40;
        case 0x26df44u: goto label_26df44;
        case 0x26df48u: goto label_26df48;
        case 0x26df4cu: goto label_26df4c;
        case 0x26df50u: goto label_26df50;
        case 0x26df54u: goto label_26df54;
        case 0x26df58u: goto label_26df58;
        case 0x26df5cu: goto label_26df5c;
        case 0x26df60u: goto label_26df60;
        case 0x26df64u: goto label_26df64;
        case 0x26df68u: goto label_26df68;
        case 0x26df6cu: goto label_26df6c;
        case 0x26df70u: goto label_26df70;
        case 0x26df74u: goto label_26df74;
        case 0x26df78u: goto label_26df78;
        case 0x26df7cu: goto label_26df7c;
        default: return;
    }

label_26d7b0:
    // 0x26d7b0: 0x3672  tlt         $zero, $zero, 217
    ctx->pc = 0x26d7b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d7b4:
    // 0x26d7b4: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d7b4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26d7b8:
    // 0x26d7b8: 0x0  nop
    ctx->pc = 0x26d7b8u;
    // NOP
label_26d7bc:
    // 0x26d7bc: 0x0  nop
    ctx->pc = 0x26d7bcu;
    // NOP
label_26d7c0:
    // 0x26d7c0: 0x3680  sll         $a2, $zero, 26
    ctx->pc = 0x26d7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26d7c4:
    // 0x26d7c4: 0x5320  .word       0x00005320                   # add         $t2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d7c8:
    // 0x26d7c8: 0x0  nop
    ctx->pc = 0x26d7c8u;
    // NOP
label_26d7cc:
    // 0x26d7cc: 0x0  nop
    ctx->pc = 0x26d7ccu;
    // NOP
label_26d7d0:
    // 0x26d7d0: 0x368b  .word       0x0000368B                   # movn        $a2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d7d0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d7d4:
    // 0x26d7d4: 0x7810  mfhi        $t7
    ctx->pc = 0x26d7d4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26d7d8:
    // 0x26d7d8: 0x0  nop
    ctx->pc = 0x26d7d8u;
    // NOP
label_26d7dc:
    // 0x26d7dc: 0x0  nop
    ctx->pc = 0x26d7dcu;
    // NOP
label_26d7e0:
    // 0x26d7e0: 0x369b  .word       0x0000369B                   # divu        $a2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d7e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26d7e4:
    // 0x26d7e4: 0x6230  tge         $zero, $zero, 392
    ctx->pc = 0x26d7e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d7e8:
    // 0x26d7e8: 0x0  nop
    ctx->pc = 0x26d7e8u;
    // NOP
label_26d7ec:
    // 0x26d7ec: 0x0  nop
    ctx->pc = 0x26d7ecu;
    // NOP
label_26d7f0:
    // 0x26d7f0: 0x36a8  .word       0x000036A8                   # mfsa        $a2 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d7f0u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_26d7f4:
    // 0x26d7f4: 0x6230  tge         $zero, $zero, 392
    ctx->pc = 0x26d7f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d7f8:
    // 0x26d7f8: 0x0  nop
    ctx->pc = 0x26d7f8u;
    // NOP
label_26d7fc:
    // 0x26d7fc: 0x0  nop
    ctx->pc = 0x26d7fcu;
    // NOP
label_26d800:
    // 0x26d800: 0x36b5  .word       0x000036B5                   # INVALID     $zero, $zero, 0x36B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26D800 raw=0x000036B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d804:
    // 0x26d804: 0x66d0  .word       0x000066D0                   # mfhi        $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d804u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26d808:
    // 0x26d808: 0x0  nop
    ctx->pc = 0x26d808u;
    // NOP
label_26d80c:
    // 0x26d80c: 0x0  nop
    ctx->pc = 0x26d80cu;
    // NOP
label_26d810:
    // 0x26d810: 0x36c2  srl         $a2, $zero, 27
    ctx->pc = 0x26d810u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_26d814:
    // 0x26d814: 0x3da0  .word       0x00003DA0                   # add         $a3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26d818:
    // 0x26d818: 0x0  nop
    ctx->pc = 0x26d818u;
    // NOP
label_26d81c:
    // 0x26d81c: 0x0  nop
    ctx->pc = 0x26d81cu;
    // NOP
label_26d820:
    // 0x26d820: 0x36ca  .word       0x000036CA                   # movz        $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d820u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d824:
    // 0x26d824: 0x3a60  .word       0x00003A60                   # add         $a3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26d828:
    // 0x26d828: 0x0  nop
    ctx->pc = 0x26d828u;
    // NOP
label_26d82c:
    // 0x26d82c: 0x0  nop
    ctx->pc = 0x26d82cu;
    // NOP
label_26d830:
    // 0x26d830: 0x36d2  .word       0x000036D2                   # mflo        $a2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d830u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_26d834:
    // 0x26d834: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x26d834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d838:
    // 0x26d838: 0x0  nop
    ctx->pc = 0x26d838u;
    // NOP
label_26d83c:
    // 0x26d83c: 0x0  nop
    ctx->pc = 0x26d83cu;
    // NOP
label_26d840:
    // 0x26d840: 0x36dd  .word       0x000036DD                   # dmultu      $zero, $zero # 000036C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d840u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26D840 raw=0x000036DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d844:
    // 0x26d844: 0x8b50  .word       0x00008B50                   # mfhi        $s1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d844u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26d848:
    // 0x26d848: 0x0  nop
    ctx->pc = 0x26d848u;
    // NOP
label_26d84c:
    // 0x26d84c: 0x0  nop
    ctx->pc = 0x26d84cu;
    // NOP
label_26d850:
    // 0x26d850: 0x36ef  .word       0x000036EF                   # dsubu       $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26d854:
    // 0x26d854: 0x66a0  .word       0x000066A0                   # add         $t4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26d858:
    // 0x26d858: 0x0  nop
    ctx->pc = 0x26d858u;
    // NOP
label_26d85c:
    // 0x26d85c: 0x0  nop
    ctx->pc = 0x26d85cu;
    // NOP
label_26d860:
    // 0x26d860: 0x36fc  dsll32      $a2, $zero, 27
    ctx->pc = 0x26d860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 27));
label_26d864:
    // 0x26d864: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26d868:
    // 0x26d868: 0x0  nop
    ctx->pc = 0x26d868u;
    // NOP
label_26d86c:
    // 0x26d86c: 0x0  nop
    ctx->pc = 0x26d86cu;
    // NOP
label_26d870:
    // 0x26d870: 0x3706  .word       0x00003706                   # srlv        $a2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d870u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d874:
    // 0x26d874: 0x5f90  .word       0x00005F90                   # mfhi        $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d874u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26d878:
    // 0x26d878: 0x0  nop
    ctx->pc = 0x26d878u;
    // NOP
label_26d87c:
    // 0x26d87c: 0x0  nop
    ctx->pc = 0x26d87cu;
    // NOP
label_26d880:
    // 0x26d880: 0x3712  .word       0x00003712                   # mflo        $a2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d880u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_26d884:
    // 0x26d884: 0x55c0  sll         $t2, $zero, 23
    ctx->pc = 0x26d884u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26d888:
    // 0x26d888: 0x0  nop
    ctx->pc = 0x26d888u;
    // NOP
label_26d88c:
    // 0x26d88c: 0x0  nop
    ctx->pc = 0x26d88cu;
    // NOP
label_26d890:
    // 0x26d890: 0x371d  .word       0x0000371D                   # dmultu      $zero, $zero # 00003700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26D890 raw=0x0000371D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d894:
    // 0x26d894: 0x5140  sll         $t2, $zero, 5
    ctx->pc = 0x26d894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_26d898:
    // 0x26d898: 0x0  nop
    ctx->pc = 0x26d898u;
    // NOP
label_26d89c:
    // 0x26d89c: 0x0  nop
    ctx->pc = 0x26d89cu;
    // NOP
label_26d8a0:
    // 0x26d8a0: 0x3728  .word       0x00003728                   # mfsa        $a2 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d8a0u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_26d8a4:
    // 0x26d8a4: 0x5760  .word       0x00005760                   # add         $t2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d8a8:
    // 0x26d8a8: 0x0  nop
    ctx->pc = 0x26d8a8u;
    // NOP
label_26d8ac:
    // 0x26d8ac: 0x0  nop
    ctx->pc = 0x26d8acu;
    // NOP
label_26d8b0:
    // 0x26d8b0: 0x3733  tltu        $zero, $zero, 220
    ctx->pc = 0x26d8b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d8b4:
    // 0x26d8b4: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x26d8b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26d8b8:
    // 0x26d8b8: 0x0  nop
    ctx->pc = 0x26d8b8u;
    // NOP
label_26d8bc:
    // 0x26d8bc: 0x0  nop
    ctx->pc = 0x26d8bcu;
    // NOP
label_26d8c0:
    // 0x26d8c0: 0x3741  .word       0x00003741                   # INVALID     $zero, $zero, 0x3741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26D8C0 raw=0x00003741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d8c4:
    // 0x26d8c4: 0x55e0  .word       0x000055E0                   # add         $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d8c8:
    // 0x26d8c8: 0x0  nop
    ctx->pc = 0x26d8c8u;
    // NOP
label_26d8cc:
    // 0x26d8cc: 0x0  nop
    ctx->pc = 0x26d8ccu;
    // NOP
label_26d8d0:
    // 0x26d8d0: 0x374c  syscall     221
    ctx->pc = 0x26d8d0u;
    ctx->pc = 0x26D8D4u;
runtime->handleSyscall(rdram, ctx, 0xDDu);
label_26d8d4:
    // 0x26d8d4: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26d8d8:
    // 0x26d8d8: 0x0  nop
    ctx->pc = 0x26d8d8u;
    // NOP
label_26d8dc:
    // 0x26d8dc: 0x0  nop
    ctx->pc = 0x26d8dcu;
    // NOP
label_26d8e0:
    // 0x26d8e0: 0x3755  .word       0x00003755                   # INVALID     $zero, $zero, 0x3755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26D8E0 raw=0x00003755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d8e4:
    // 0x26d8e4: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26d8e8:
    // 0x26d8e8: 0x0  nop
    ctx->pc = 0x26d8e8u;
    // NOP
label_26d8ec:
    // 0x26d8ec: 0x0  nop
    ctx->pc = 0x26d8ecu;
    // NOP
label_26d8f0:
    // 0x26d8f0: 0x3762  .word       0x00003762                   # neg         $a2, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_26d8f4:
    // 0x26d8f4: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x26d8f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d8f8:
    // 0x26d8f8: 0x0  nop
    ctx->pc = 0x26d8f8u;
    // NOP
label_26d8fc:
    // 0x26d8fc: 0x0  nop
    ctx->pc = 0x26d8fcu;
    // NOP
label_26d900:
    // 0x26d900: 0x3770  tge         $zero, $zero, 221
    ctx->pc = 0x26d900u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d904:
    // 0x26d904: 0x3b00  sll         $a3, $zero, 12
    ctx->pc = 0x26d904u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26d908:
    // 0x26d908: 0x0  nop
    ctx->pc = 0x26d908u;
    // NOP
label_26d90c:
    // 0x26d90c: 0x0  nop
    ctx->pc = 0x26d90cu;
    // NOP
label_26d910:
    // 0x26d910: 0x3778  dsll        $a2, $zero, 29
    ctx->pc = 0x26d910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 29);
label_26d914:
    // 0x26d914: 0x51e0  .word       0x000051E0                   # add         $t2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d918:
    // 0x26d918: 0x0  nop
    ctx->pc = 0x26d918u;
    // NOP
label_26d91c:
    // 0x26d91c: 0x0  nop
    ctx->pc = 0x26d91cu;
    // NOP
label_26d920:
    // 0x26d920: 0x3783  sra         $a2, $zero, 30
    ctx->pc = 0x26d920u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), 30));
label_26d924:
    // 0x26d924: 0x6400  sll         $t4, $zero, 16
    ctx->pc = 0x26d924u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26d928:
    // 0x26d928: 0x0  nop
    ctx->pc = 0x26d928u;
    // NOP
label_26d92c:
    // 0x26d92c: 0x0  nop
    ctx->pc = 0x26d92cu;
    // NOP
label_26d930:
    // 0x26d930: 0x3790  .word       0x00003790                   # mfhi        $a2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d930u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26d934:
    // 0x26d934: 0x58d0  .word       0x000058D0                   # mfhi        $t3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d934u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26d938:
    // 0x26d938: 0x0  nop
    ctx->pc = 0x26d938u;
    // NOP
label_26d93c:
    // 0x26d93c: 0x0  nop
    ctx->pc = 0x26d93cu;
    // NOP
label_26d940:
    // 0x26d940: 0x379c  .word       0x0000379C                   # dmult       $zero, $zero # 00003780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26D940 raw=0x0000379C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d944:
    // 0x26d944: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d948:
    // 0x26d948: 0x0  nop
    ctx->pc = 0x26d948u;
    // NOP
label_26d94c:
    // 0x26d94c: 0x0  nop
    ctx->pc = 0x26d94cu;
    // NOP
label_26d950:
    // 0x26d950: 0x37a7  .word       0x000037A7                   # not         $a2, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d950u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26d954:
    // 0x26d954: 0xcde0  .word       0x0000CDE0                   # add         $t9, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26d958:
    // 0x26d958: 0x0  nop
    ctx->pc = 0x26d958u;
    // NOP
label_26d95c:
    // 0x26d95c: 0x0  nop
    ctx->pc = 0x26d95cu;
    // NOP
label_26d960:
    // 0x26d960: 0x37c1  .word       0x000037C1                   # INVALID     $zero, $zero, 0x37C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26D960 raw=0x000037C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d964:
    // 0x26d964: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d964u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26d968:
    // 0x26d968: 0x0  nop
    ctx->pc = 0x26d968u;
    // NOP
label_26d96c:
    // 0x26d96c: 0x0  nop
    ctx->pc = 0x26d96cu;
    // NOP
label_26d970:
    // 0x26d970: 0x37cf  .word       0x000037CF                   # sync.p # 00003000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26d974:
    // 0x26d974: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d974u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d978:
    // 0x26d978: 0x0  nop
    ctx->pc = 0x26d978u;
    // NOP
label_26d97c:
    // 0x26d97c: 0x0  nop
    ctx->pc = 0x26d97cu;
    // NOP
label_26d980:
    // 0x26d980: 0x37da  .word       0x000037DA                   # div         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d980u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26d984:
    // 0x26d984: 0x42c0  sll         $t0, $zero, 11
    ctx->pc = 0x26d984u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26d988:
    // 0x26d988: 0x0  nop
    ctx->pc = 0x26d988u;
    // NOP
label_26d98c:
    // 0x26d98c: 0x0  nop
    ctx->pc = 0x26d98cu;
    // NOP
label_26d990:
    // 0x26d990: 0x37e3  .word       0x000037E3                   # negu        $a2, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d990u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26d994:
    // 0x26d994: 0x5190  .word       0x00005190                   # mfhi        $t2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d994u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d998:
    // 0x26d998: 0x0  nop
    ctx->pc = 0x26d998u;
    // NOP
label_26d99c:
    // 0x26d99c: 0x0  nop
    ctx->pc = 0x26d99cu;
    // NOP
label_26d9a0:
    // 0x26d9a0: 0x37ee  .word       0x000037EE                   # dsub        $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d9a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_26d9a4:
    // 0x26d9a4: 0x5ed0  .word       0x00005ED0                   # mfhi        $t3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d9a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26d9a8:
    // 0x26d9a8: 0x0  nop
    ctx->pc = 0x26d9a8u;
    // NOP
label_26d9ac:
    // 0x26d9ac: 0x0  nop
    ctx->pc = 0x26d9acu;
    // NOP
label_26d9b0:
    // 0x26d9b0: 0x37fa  dsrl        $a2, $zero, 31
    ctx->pc = 0x26d9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> 31);
label_26d9b4:
    // 0x26d9b4: 0x7720  .word       0x00007720                   # add         $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d9b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26d9b8:
    // 0x26d9b8: 0x0  nop
    ctx->pc = 0x26d9b8u;
    // NOP
label_26d9bc:
    // 0x26d9bc: 0x0  nop
    ctx->pc = 0x26d9bcu;
    // NOP
label_26d9c0:
    // 0x26d9c0: 0x3809  jalr        $a3, $zero
label_26d9c4:
    if (ctx->pc == 0x26D9C4u) {
        ctx->pc = 0x26D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9C0u;
        // 0x26d9c4: 0x8da0  .word       0x00008DA0                   # add         $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9C8u;
        goto label_26d9c8;
    }
    ctx->pc = 0x26D9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 7, 0x26D9C8u);
        ctx->pc = 0x26D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9C0u;
        // 0x26d9c4: 0x8da0  .word       0x00008DA0                   # add         $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D9C0u, 0x26D9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D9C8u;
label_26d9c8:
    // 0x26d9c8: 0x0  nop
    ctx->pc = 0x26d9c8u;
    // NOP
label_26d9cc:
    // 0x26d9cc: 0x0  nop
    ctx->pc = 0x26d9ccu;
    // NOP
label_26d9d0:
    // 0x26d9d0: 0x381b  divu        $a3, $zero, $zero
    ctx->pc = 0x26d9d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26d9d4:
    // 0x26d9d4: 0x5190  .word       0x00005190                   # mfhi        $t2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d9d4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d9d8:
    // 0x26d9d8: 0x0  nop
    ctx->pc = 0x26d9d8u;
    // NOP
label_26d9dc:
    // 0x26d9dc: 0x0  nop
    ctx->pc = 0x26d9dcu;
    // NOP
label_26d9e0:
    // 0x26d9e0: 0x3826  xor         $a3, $zero, $zero
    ctx->pc = 0x26d9e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26d9e4:
    // 0x26d9e4: 0x5d30  tge         $zero, $zero, 372
    ctx->pc = 0x26d9e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d9e8:
    // 0x26d9e8: 0x0  nop
    ctx->pc = 0x26d9e8u;
    // NOP
label_26d9ec:
    // 0x26d9ec: 0x0  nop
    ctx->pc = 0x26d9ecu;
    // NOP
label_26d9f0:
    // 0x26d9f0: 0x3832  tlt         $zero, $zero, 224
    ctx->pc = 0x26d9f0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d9f4:
    // 0x26d9f4: 0x5680  sll         $t2, $zero, 26
    ctx->pc = 0x26d9f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26d9f8:
    // 0x26d9f8: 0x0  nop
    ctx->pc = 0x26d9f8u;
    // NOP
label_26d9fc:
    // 0x26d9fc: 0x0  nop
    ctx->pc = 0x26d9fcu;
    // NOP
label_26da00:
    // 0x26da00: 0x383d  .word       0x0000383D                   # INVALID     $zero, $zero, 0x383D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26DA00 raw=0x0000383D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26da04:
    // 0x26da04: 0x4a70  tge         $zero, $zero, 297
    ctx->pc = 0x26da04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26da08:
    // 0x26da08: 0x0  nop
    ctx->pc = 0x26da08u;
    // NOP
label_26da0c:
    // 0x26da0c: 0x0  nop
    ctx->pc = 0x26da0cu;
    // NOP
label_26da10:
    // 0x26da10: 0x3847  .word       0x00003847                   # srav        $a3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da10u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26da14:
    // 0x26da14: 0x19c0  sll         $v1, $zero, 7
    ctx->pc = 0x26da14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_26da18:
    // 0x26da18: 0x0  nop
    ctx->pc = 0x26da18u;
    // NOP
label_26da1c:
    // 0x26da1c: 0x0  nop
    ctx->pc = 0x26da1cu;
    // NOP
label_26da20:
    // 0x26da20: 0x384b  .word       0x0000384B                   # movn        $a3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_26da24:
    // 0x26da24: 0x1fb0  tge         $zero, $zero, 126
    ctx->pc = 0x26da24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26da28:
    // 0x26da28: 0x0  nop
    ctx->pc = 0x26da28u;
    // NOP
label_26da2c:
    // 0x26da2c: 0x0  nop
    ctx->pc = 0x26da2cu;
    // NOP
label_26da30:
    // 0x26da30: 0x384f  .word       0x0000384F                   # sync # 00003800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26da34:
    // 0x26da34: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da34u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26da38:
    // 0x26da38: 0x0  nop
    ctx->pc = 0x26da38u;
    // NOP
label_26da3c:
    // 0x26da3c: 0x0  nop
    ctx->pc = 0x26da3cu;
    // NOP
label_26da40:
    // 0x26da40: 0x385a  .word       0x0000385A                   # div         $a3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da40u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26da44:
    // 0x26da44: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26da48:
    // 0x26da48: 0x0  nop
    ctx->pc = 0x26da48u;
    // NOP
label_26da4c:
    // 0x26da4c: 0x0  nop
    ctx->pc = 0x26da4cu;
    // NOP
label_26da50:
    // 0x26da50: 0x3865  .word       0x00003865                   # move        $a3, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26da54:
    // 0x26da54: 0x7280  sll         $t6, $zero, 10
    ctx->pc = 0x26da54u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26da58:
    // 0x26da58: 0x0  nop
    ctx->pc = 0x26da58u;
    // NOP
label_26da5c:
    // 0x26da5c: 0x0  nop
    ctx->pc = 0x26da5cu;
    // NOP
label_26da60:
    // 0x26da60: 0x3874  teq         $zero, $zero, 225
    ctx->pc = 0x26da60u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26da64:
    // 0x26da64: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x26da64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26da68:
    // 0x26da68: 0x0  nop
    ctx->pc = 0x26da68u;
    // NOP
label_26da6c:
    // 0x26da6c: 0x0  nop
    ctx->pc = 0x26da6cu;
    // NOP
label_26da70:
    // 0x26da70: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x26da70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26da74:
    // 0x26da74: 0x49a0  .word       0x000049A0                   # add         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26da78:
    // 0x26da78: 0x0  nop
    ctx->pc = 0x26da78u;
    // NOP
label_26da7c:
    // 0x26da7c: 0x0  nop
    ctx->pc = 0x26da7cu;
    // NOP
label_26da80:
    // 0x26da80: 0x388a  .word       0x0000388A                   # movz        $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da80u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_26da84:
    // 0x26da84: 0x77e0  .word       0x000077E0                   # add         $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26da88:
    // 0x26da88: 0x0  nop
    ctx->pc = 0x26da88u;
    // NOP
label_26da8c:
    // 0x26da8c: 0x0  nop
    ctx->pc = 0x26da8cu;
    // NOP
label_26da90:
    // 0x26da90: 0x3899  .word       0x00003899                   # multu       $zero, $zero # 00003880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da90u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_26da94:
    // 0x26da94: 0x5730  tge         $zero, $zero, 348
    ctx->pc = 0x26da94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26da98:
    // 0x26da98: 0x0  nop
    ctx->pc = 0x26da98u;
    // NOP
label_26da9c:
    // 0x26da9c: 0x0  nop
    ctx->pc = 0x26da9cu;
    // NOP
label_26daa0:
    // 0x26daa0: 0x38a4  .word       0x000038A4                   # and         $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26daa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26daa4:
    // 0x26daa4: 0x4440  sll         $t0, $zero, 17
    ctx->pc = 0x26daa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26daa8:
    // 0x26daa8: 0x0  nop
    ctx->pc = 0x26daa8u;
    // NOP
label_26daac:
    // 0x26daac: 0x0  nop
    ctx->pc = 0x26daacu;
    // NOP
label_26dab0:
    // 0x26dab0: 0x38ad  .word       0x000038AD                   # daddu       $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26dab4:
    // 0x26dab4: 0x4980  sll         $t1, $zero, 6
    ctx->pc = 0x26dab4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26dab8:
    // 0x26dab8: 0x0  nop
    ctx->pc = 0x26dab8u;
    // NOP
label_26dabc:
    // 0x26dabc: 0x0  nop
    ctx->pc = 0x26dabcu;
    // NOP
label_26dac0:
    // 0x26dac0: 0x38b7  .word       0x000038B7                   # INVALID     $zero, $zero, 0x38B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26DAC0 raw=0x000038B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26dac4:
    // 0x26dac4: 0x5960  .word       0x00005960                   # add         $t3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26dac8:
    // 0x26dac8: 0x0  nop
    ctx->pc = 0x26dac8u;
    // NOP
label_26dacc:
    // 0x26dacc: 0x0  nop
    ctx->pc = 0x26daccu;
    // NOP
label_26dad0:
    // 0x26dad0: 0x38c3  sra         $a3, $zero, 3
    ctx->pc = 0x26dad0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), 3));
label_26dad4:
    // 0x26dad4: 0x3f90  .word       0x00003F90                   # mfhi        $a3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dad4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26dad8:
    // 0x26dad8: 0x0  nop
    ctx->pc = 0x26dad8u;
    // NOP
label_26dadc:
    // 0x26dadc: 0x0  nop
    ctx->pc = 0x26dadcu;
    // NOP
label_26dae0:
    // 0x26dae0: 0x38cb  .word       0x000038CB                   # movn        $a3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dae0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_26dae4:
    // 0x26dae4: 0x5af0  tge         $zero, $zero, 363
    ctx->pc = 0x26dae4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dae8:
    // 0x26dae8: 0x0  nop
    ctx->pc = 0x26dae8u;
    // NOP
label_26daec:
    // 0x26daec: 0x0  nop
    ctx->pc = 0x26daecu;
    // NOP
label_26daf0:
    // 0x26daf0: 0x38d7  .word       0x000038D7                   # dsrav       $a3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26daf0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26daf4:
    // 0x26daf4: 0x4200  sll         $t0, $zero, 8
    ctx->pc = 0x26daf4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26daf8:
    // 0x26daf8: 0x0  nop
    ctx->pc = 0x26daf8u;
    // NOP
label_26dafc:
    // 0x26dafc: 0x0  nop
    ctx->pc = 0x26dafcu;
    // NOP
label_26db00:
    // 0x26db00: 0x38e0  .word       0x000038E0                   # add         $a3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db00u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26db04:
    // 0x26db04: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x26db04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26db08:
    // 0x26db08: 0x0  nop
    ctx->pc = 0x26db08u;
    // NOP
label_26db0c:
    // 0x26db0c: 0x0  nop
    ctx->pc = 0x26db0cu;
    // NOP
label_26db10:
    // 0x26db10: 0x38e9  .word       0x000038E9                   # mtsa        $zero # 000038C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26db10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26db14:
    // 0x26db14: 0x2ba0  .word       0x00002BA0                   # add         $a1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26db18:
    // 0x26db18: 0x0  nop
    ctx->pc = 0x26db18u;
    // NOP
label_26db1c:
    // 0x26db1c: 0x0  nop
    ctx->pc = 0x26db1cu;
    // NOP
label_26db20:
    // 0x26db20: 0x38ef  .word       0x000038EF                   # dsubu       $a3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26db24:
    // 0x26db24: 0x4680  sll         $t0, $zero, 26
    ctx->pc = 0x26db24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26db28:
    // 0x26db28: 0x0  nop
    ctx->pc = 0x26db28u;
    // NOP
label_26db2c:
    // 0x26db2c: 0x0  nop
    ctx->pc = 0x26db2cu;
    // NOP
label_26db30:
    // 0x26db30: 0x38f8  dsll        $a3, $zero, 3
    ctx->pc = 0x26db30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 3);
label_26db34:
    // 0x26db34: 0x4bb0  tge         $zero, $zero, 302
    ctx->pc = 0x26db34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26db38:
    // 0x26db38: 0x0  nop
    ctx->pc = 0x26db38u;
    // NOP
label_26db3c:
    // 0x26db3c: 0x0  nop
    ctx->pc = 0x26db3cu;
    // NOP
label_26db40:
    // 0x26db40: 0x3902  srl         $a3, $zero, 4
    ctx->pc = 0x26db40u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_26db44:
    // 0x26db44: 0x8630  tge         $zero, $zero, 536
    ctx->pc = 0x26db44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26db48:
    // 0x26db48: 0x0  nop
    ctx->pc = 0x26db48u;
    // NOP
label_26db4c:
    // 0x26db4c: 0x0  nop
    ctx->pc = 0x26db4cu;
    // NOP
label_26db50:
    // 0x26db50: 0x3913  .word       0x00003913                   # mtlo        $zero # 00003900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db50u;
    ctx->lo = GPR_U64(ctx, 0);
label_26db54:
    // 0x26db54: 0x34c0  sll         $a2, $zero, 19
    ctx->pc = 0x26db54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26db58:
    // 0x26db58: 0x0  nop
    ctx->pc = 0x26db58u;
    // NOP
label_26db5c:
    // 0x26db5c: 0x0  nop
    ctx->pc = 0x26db5cu;
    // NOP
label_26db60:
    // 0x26db60: 0x391a  .word       0x0000391A                   # div         $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db60u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26db64:
    // 0x26db64: 0x4c00  sll         $t1, $zero, 16
    ctx->pc = 0x26db64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26db68:
    // 0x26db68: 0x0  nop
    ctx->pc = 0x26db68u;
    // NOP
label_26db6c:
    // 0x26db6c: 0x0  nop
    ctx->pc = 0x26db6cu;
    // NOP
label_26db70:
    // 0x26db70: 0x3924  .word       0x00003924                   # and         $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26db74:
    // 0x26db74: 0x3de0  .word       0x00003DE0                   # add         $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26db78:
    // 0x26db78: 0x0  nop
    ctx->pc = 0x26db78u;
    // NOP
label_26db7c:
    // 0x26db7c: 0x0  nop
    ctx->pc = 0x26db7cu;
    // NOP
label_26db80:
    // 0x26db80: 0x392c  .word       0x0000392C                   # dadd        $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_26db84:
    // 0x26db84: 0x5e40  sll         $t3, $zero, 25
    ctx->pc = 0x26db84u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26db88:
    // 0x26db88: 0x0  nop
    ctx->pc = 0x26db88u;
    // NOP
label_26db8c:
    // 0x26db8c: 0x0  nop
    ctx->pc = 0x26db8cu;
    // NOP
label_26db90:
    // 0x26db90: 0x3938  dsll        $a3, $zero, 4
    ctx->pc = 0x26db90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 4);
label_26db94:
    // 0x26db94: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26db98:
    // 0x26db98: 0x0  nop
    ctx->pc = 0x26db98u;
    // NOP
label_26db9c:
    // 0x26db9c: 0x0  nop
    ctx->pc = 0x26db9cu;
    // NOP
label_26dba0:
    // 0x26dba0: 0x3942  srl         $a3, $zero, 5
    ctx->pc = 0x26dba0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 5));
label_26dba4:
    // 0x26dba4: 0x2de0  .word       0x00002DE0                   # add         $a1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26dba8:
    // 0x26dba8: 0x0  nop
    ctx->pc = 0x26dba8u;
    // NOP
label_26dbac:
    // 0x26dbac: 0x0  nop
    ctx->pc = 0x26dbacu;
    // NOP
label_26dbb0:
    // 0x26dbb0: 0x3948  .word       0x00003948                   # jr          $zero # 00003940 <InstrIdType: CPU_SPECIAL>
label_26dbb4:
    if (ctx->pc == 0x26DBB4u) {
        ctx->pc = 0x26DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBB0u;
        // 0x26dbb4: 0x5c90  .word       0x00005C90                   # mfhi        $t3 # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DBB8u;
        goto label_26dbb8;
    }
    ctx->pc = 0x26DBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBB0u;
        // 0x26dbb4: 0x5c90  .word       0x00005C90                   # mfhi        $t3 # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DBB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26DBB8u;
label_26dbb8:
    // 0x26dbb8: 0x0  nop
    ctx->pc = 0x26dbb8u;
    // NOP
label_26dbbc:
    // 0x26dbbc: 0x0  nop
    ctx->pc = 0x26dbbcu;
    // NOP
label_26dbc0:
    // 0x26dbc0: 0x3954  .word       0x00003954                   # dsllv       $a3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dbc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26dbc4:
    // 0x26dbc4: 0x4780  sll         $t0, $zero, 30
    ctx->pc = 0x26dbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26dbc8:
    // 0x26dbc8: 0x0  nop
    ctx->pc = 0x26dbc8u;
    // NOP
label_26dbcc:
    // 0x26dbcc: 0x0  nop
    ctx->pc = 0x26dbccu;
    // NOP
label_26dbd0:
    // 0x26dbd0: 0x395d  .word       0x0000395D                   # dmultu      $zero, $zero # 00003940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dbd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26DBD0 raw=0x0000395D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26dbd4:
    // 0x26dbd4: 0x4130  tge         $zero, $zero, 260
    ctx->pc = 0x26dbd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dbd8:
    // 0x26dbd8: 0x0  nop
    ctx->pc = 0x26dbd8u;
    // NOP
label_26dbdc:
    // 0x26dbdc: 0x0  nop
    ctx->pc = 0x26dbdcu;
    // NOP
label_26dbe0:
    // 0x26dbe0: 0x3966  .word       0x00003966                   # xor         $a3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dbe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26dbe4:
    // 0x26dbe4: 0x7430  tge         $zero, $zero, 464
    ctx->pc = 0x26dbe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dbe8:
    // 0x26dbe8: 0x0  nop
    ctx->pc = 0x26dbe8u;
    // NOP
label_26dbec:
    // 0x26dbec: 0x0  nop
    ctx->pc = 0x26dbecu;
    // NOP
label_26dbf0:
    // 0x26dbf0: 0x3975  .word       0x00003975                   # INVALID     $zero, $zero, 0x3975 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dbf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26DBF0 raw=0x00003975"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26dbf4:
    // 0x26dbf4: 0x4830  tge         $zero, $zero, 288
    ctx->pc = 0x26dbf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dbf8:
    // 0x26dbf8: 0x0  nop
    ctx->pc = 0x26dbf8u;
    // NOP
label_26dbfc:
    // 0x26dbfc: 0x0  nop
    ctx->pc = 0x26dbfcu;
    // NOP
label_26dc00:
    // 0x26dc00: 0x397f  dsra32      $a3, $zero, 5
    ctx->pc = 0x26dc00u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 5));
label_26dc04:
    // 0x26dc04: 0x4100  sll         $t0, $zero, 4
    ctx->pc = 0x26dc04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26dc08:
    // 0x26dc08: 0x0  nop
    ctx->pc = 0x26dc08u;
    // NOP
label_26dc0c:
    // 0x26dc0c: 0x0  nop
    ctx->pc = 0x26dc0cu;
    // NOP
label_26dc10:
    // 0x26dc10: 0x3988  .word       0x00003988                   # jr          $zero # 00003980 <InstrIdType: CPU_SPECIAL>
label_26dc14:
    if (ctx->pc == 0x26DC14u) {
        ctx->pc = 0x26DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC10u;
        // 0x26dc14: 0x3d30  tge         $zero, $zero, 244 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC18u;
        goto label_26dc18;
    }
    ctx->pc = 0x26DC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC10u;
        // 0x26dc14: 0x3d30  tge         $zero, $zero, 244 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DC10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26DC18u;
label_26dc18:
    // 0x26dc18: 0x0  nop
    ctx->pc = 0x26dc18u;
    // NOP
label_26dc1c:
    // 0x26dc1c: 0x0  nop
    ctx->pc = 0x26dc1cu;
    // NOP
label_26dc20:
    // 0x26dc20: 0x3990  .word       0x00003990                   # mfhi        $a3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dc20u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26dc24:
    // 0x26dc24: 0x3cb0  tge         $zero, $zero, 242
    ctx->pc = 0x26dc24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dc28:
    // 0x26dc28: 0x0  nop
    ctx->pc = 0x26dc28u;
    // NOP
label_26dc2c:
    // 0x26dc2c: 0x0  nop
    ctx->pc = 0x26dc2cu;
    // NOP
label_26dc30:
    // 0x26dc30: 0x3998  .word       0x00003998                   # mult        $a3, $zero, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26dc30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_26dc34:
    // 0x26dc34: 0x6110  .word       0x00006110                   # mfhi        $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dc34u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26dc38:
    // 0x26dc38: 0x0  nop
    ctx->pc = 0x26dc38u;
    // NOP
label_26dc3c:
    // 0x26dc3c: 0x0  nop
    ctx->pc = 0x26dc3cu;
    // NOP
label_26dc40:
    // 0x26dc40: 0x39a5  .word       0x000039A5                   # move        $a3, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dc40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26dc44:
    // 0x26dc44: 0x4450  .word       0x00004450                   # mfhi        $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dc44u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26dc48:
    // 0x26dc48: 0x0  nop
    ctx->pc = 0x26dc48u;
    // NOP
label_26dc4c:
    // 0x26dc4c: 0x0  nop
    ctx->pc = 0x26dc4cu;
    // NOP
label_26dc50:
    // 0x26dc50: 0x39ae  .word       0x000039AE                   # dsub        $a3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dc50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_26dc54:
    // 0x26dc54: 0x47b0  tge         $zero, $zero, 286
    ctx->pc = 0x26dc54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dc58:
    // 0x26dc58: 0x0  nop
    ctx->pc = 0x26dc58u;
    // NOP
label_26dc5c:
    // 0x26dc5c: 0x0  nop
    ctx->pc = 0x26dc5cu;
    // NOP
label_26dc60:
    // 0x26dc60: 0x39b7  .word       0x000039B7                   # INVALID     $zero, $zero, 0x39B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dc60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26DC60 raw=0x000039B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26dc64:
    // 0x26dc64: 0x5300  sll         $t2, $zero, 12
    ctx->pc = 0x26dc64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26dc68:
    // 0x26dc68: 0x0  nop
    ctx->pc = 0x26dc68u;
    // NOP
label_26dc6c:
    // 0x26dc6c: 0x0  nop
    ctx->pc = 0x26dc6cu;
    // NOP
label_26dc70:
    // 0x26dc70: 0x39c2  srl         $a3, $zero, 7
    ctx->pc = 0x26dc70u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 7));
label_26dc74:
    // 0x26dc74: 0x54d0  .word       0x000054D0                   # mfhi        $t2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dc74u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26dc78:
    // 0x26dc78: 0x0  nop
    ctx->pc = 0x26dc78u;
    // NOP
label_26dc7c:
    // 0x26dc7c: 0x0  nop
    ctx->pc = 0x26dc7cu;
    // NOP
label_26dc80:
    // 0x26dc80: 0x39cd  break       0, 231
    ctx->pc = 0x26dc80u;
    runtime->handleBreak(rdram, ctx);
label_26dc84:
    // 0x26dc84: 0x57a0  .word       0x000057A0                   # add         $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dc84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26dc88:
    // 0x26dc88: 0x0  nop
    ctx->pc = 0x26dc88u;
    // NOP
label_26dc8c:
    // 0x26dc8c: 0x0  nop
    ctx->pc = 0x26dc8cu;
    // NOP
label_26dc90:
    // 0x26dc90: 0x39d8  .word       0x000039D8                   # mult        $a3, $zero, $zero # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26dc90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_26dc94:
    // 0x26dc94: 0x3d60  .word       0x00003D60                   # add         $a3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dc94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26dc98:
    // 0x26dc98: 0x0  nop
    ctx->pc = 0x26dc98u;
    // NOP
label_26dc9c:
    // 0x26dc9c: 0x0  nop
    ctx->pc = 0x26dc9cu;
    // NOP
label_26dca0:
    // 0x26dca0: 0x39e0  .word       0x000039E0                   # add         $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dca0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26dca4:
    // 0x26dca4: 0x4660  .word       0x00004660                   # add         $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26dca8:
    // 0x26dca8: 0x0  nop
    ctx->pc = 0x26dca8u;
    // NOP
label_26dcac:
    // 0x26dcac: 0x0  nop
    ctx->pc = 0x26dcacu;
    // NOP
label_26dcb0:
    // 0x26dcb0: 0x39e9  .word       0x000039E9                   # mtsa        $zero # 000039C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26dcb0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26dcb4:
    // 0x26dcb4: 0x4310  .word       0x00004310                   # mfhi        $t0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dcb4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26dcb8:
    // 0x26dcb8: 0x0  nop
    ctx->pc = 0x26dcb8u;
    // NOP
label_26dcbc:
    // 0x26dcbc: 0x0  nop
    ctx->pc = 0x26dcbcu;
    // NOP
label_26dcc0:
    // 0x26dcc0: 0x39f2  tlt         $zero, $zero, 231
    ctx->pc = 0x26dcc0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dcc4:
    // 0x26dcc4: 0xa7e0  .word       0x0000A7E0                   # add         $s4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dcc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26dcc8:
    // 0x26dcc8: 0x0  nop
    ctx->pc = 0x26dcc8u;
    // NOP
label_26dccc:
    // 0x26dccc: 0x0  nop
    ctx->pc = 0x26dcccu;
    // NOP
label_26dcd0:
    // 0x26dcd0: 0x3a07  .word       0x00003A07                   # srav        $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dcd0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26dcd4:
    // 0x26dcd4: 0xa1c0  sll         $s4, $zero, 7
    ctx->pc = 0x26dcd4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_26dcd8:
    // 0x26dcd8: 0x0  nop
    ctx->pc = 0x26dcd8u;
    // NOP
label_26dcdc:
    // 0x26dcdc: 0x0  nop
    ctx->pc = 0x26dcdcu;
    // NOP
label_26dce0:
    // 0x26dce0: 0x3a1c  .word       0x00003A1C                   # dmult       $zero, $zero # 00003A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26DCE0 raw=0x00003A1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26dce4:
    // 0x26dce4: 0x9cb0  tge         $zero, $zero, 626
    ctx->pc = 0x26dce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dce8:
    // 0x26dce8: 0x0  nop
    ctx->pc = 0x26dce8u;
    // NOP
label_26dcec:
    // 0x26dcec: 0x0  nop
    ctx->pc = 0x26dcecu;
    // NOP
label_26dcf0:
    // 0x26dcf0: 0x3a30  tge         $zero, $zero, 232
    ctx->pc = 0x26dcf0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dcf4:
    // 0x26dcf4: 0x8180  sll         $s0, $zero, 6
    ctx->pc = 0x26dcf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26dcf8:
    // 0x26dcf8: 0x0  nop
    ctx->pc = 0x26dcf8u;
    // NOP
label_26dcfc:
    // 0x26dcfc: 0x0  nop
    ctx->pc = 0x26dcfcu;
    // NOP
label_26dd00:
    // 0x26dd00: 0x3a41  .word       0x00003A41                   # INVALID     $zero, $zero, 0x3A41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26DD00 raw=0x00003A41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26dd04:
    // 0x26dd04: 0x9300  sll         $s2, $zero, 12
    ctx->pc = 0x26dd04u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26dd08:
    // 0x26dd08: 0x0  nop
    ctx->pc = 0x26dd08u;
    // NOP
label_26dd0c:
    // 0x26dd0c: 0x0  nop
    ctx->pc = 0x26dd0cu;
    // NOP
label_26dd10:
    // 0x26dd10: 0x3a54  .word       0x00003A54                   # dsllv       $a3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26dd14:
    // 0x26dd14: 0xa200  sll         $s4, $zero, 8
    ctx->pc = 0x26dd14u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26dd18:
    // 0x26dd18: 0x0  nop
    ctx->pc = 0x26dd18u;
    // NOP
label_26dd1c:
    // 0x26dd1c: 0x0  nop
    ctx->pc = 0x26dd1cu;
    // NOP
label_26dd20:
    // 0x26dd20: 0x3a69  .word       0x00003A69                   # mtsa        $zero # 00003A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26dd20u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26dd24:
    // 0x26dd24: 0xe3a0  .word       0x0000E3A0                   # add         $gp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_26dd28:
    // 0x26dd28: 0x0  nop
    ctx->pc = 0x26dd28u;
    // NOP
label_26dd2c:
    // 0x26dd2c: 0x0  nop
    ctx->pc = 0x26dd2cu;
    // NOP
label_26dd30:
    // 0x26dd30: 0x3a86  .word       0x00003A86                   # srlv        $a3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd30u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26dd34:
    // 0x26dd34: 0x5350  .word       0x00005350                   # mfhi        $t2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd34u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26dd38:
    // 0x26dd38: 0x0  nop
    ctx->pc = 0x26dd38u;
    // NOP
label_26dd3c:
    // 0x26dd3c: 0x0  nop
    ctx->pc = 0x26dd3cu;
    // NOP
label_26dd40:
    // 0x26dd40: 0x3a91  .word       0x00003A91                   # mthi        $zero # 00003A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd40u;
    ctx->hi = GPR_U64(ctx, 0);
label_26dd44:
    // 0x26dd44: 0x9230  tge         $zero, $zero, 584
    ctx->pc = 0x26dd44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dd48:
    // 0x26dd48: 0x0  nop
    ctx->pc = 0x26dd48u;
    // NOP
label_26dd4c:
    // 0x26dd4c: 0x0  nop
    ctx->pc = 0x26dd4cu;
    // NOP
label_26dd50:
    // 0x26dd50: 0x3aa4  .word       0x00003AA4                   # and         $a3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26dd54:
    // 0x26dd54: 0x8b10  .word       0x00008B10                   # mfhi        $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd54u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26dd58:
    // 0x26dd58: 0x0  nop
    ctx->pc = 0x26dd58u;
    // NOP
label_26dd5c:
    // 0x26dd5c: 0x0  nop
    ctx->pc = 0x26dd5cu;
    // NOP
label_26dd60:
    // 0x26dd60: 0x3ab6  tne         $zero, $zero, 234
    ctx->pc = 0x26dd60u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dd64:
    // 0x26dd64: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26dd68:
    // 0x26dd68: 0x0  nop
    ctx->pc = 0x26dd68u;
    // NOP
label_26dd6c:
    // 0x26dd6c: 0x0  nop
    ctx->pc = 0x26dd6cu;
    // NOP
label_26dd70:
    // 0x26dd70: 0x3ac3  sra         $a3, $zero, 11
    ctx->pc = 0x26dd70u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), 11));
label_26dd74:
    // 0x26dd74: 0x84a0  .word       0x000084A0                   # add         $s0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26dd78:
    // 0x26dd78: 0x0  nop
    ctx->pc = 0x26dd78u;
    // NOP
label_26dd7c:
    // 0x26dd7c: 0x0  nop
    ctx->pc = 0x26dd7cu;
    // NOP
label_26dd80:
    // 0x26dd80: 0x3ad4  .word       0x00003AD4                   # dsllv       $a3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26dd84:
    // 0x26dd84: 0xa220  .word       0x0000A220                   # add         $s4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26dd88:
    // 0x26dd88: 0x0  nop
    ctx->pc = 0x26dd88u;
    // NOP
label_26dd8c:
    // 0x26dd8c: 0x0  nop
    ctx->pc = 0x26dd8cu;
    // NOP
label_26dd90:
    // 0x26dd90: 0x3ae9  .word       0x00003AE9                   # mtsa        $zero # 00003AC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26dd90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26dd94:
    // 0x26dd94: 0xa950  .word       0x0000A950                   # mfhi        $s5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dd94u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26dd98:
    // 0x26dd98: 0x0  nop
    ctx->pc = 0x26dd98u;
    // NOP
label_26dd9c:
    // 0x26dd9c: 0x0  nop
    ctx->pc = 0x26dd9cu;
    // NOP
label_26dda0:
    // 0x26dda0: 0x3aff  dsra32      $a3, $zero, 11
    ctx->pc = 0x26dda0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 11));
label_26dda4:
    // 0x26dda4: 0x6fb0  tge         $zero, $zero, 446
    ctx->pc = 0x26dda4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dda8:
    // 0x26dda8: 0x0  nop
    ctx->pc = 0x26dda8u;
    // NOP
label_26ddac:
    // 0x26ddac: 0x0  nop
    ctx->pc = 0x26ddacu;
    // NOP
label_26ddb0:
    // 0x26ddb0: 0x3b0d  break       0, 236
    ctx->pc = 0x26ddb0u;
    runtime->handleBreak(rdram, ctx);
label_26ddb4:
    // 0x26ddb4: 0x7ff0  tge         $zero, $zero, 511
    ctx->pc = 0x26ddb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ddb8:
    // 0x26ddb8: 0x0  nop
    ctx->pc = 0x26ddb8u;
    // NOP
label_26ddbc:
    // 0x26ddbc: 0x0  nop
    ctx->pc = 0x26ddbcu;
    // NOP
label_26ddc0:
    // 0x26ddc0: 0x3b1d  .word       0x00003B1D                   # dmultu      $zero, $zero # 00003B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ddc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26DDC0 raw=0x00003B1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ddc4:
    // 0x26ddc4: 0xa790  .word       0x0000A790                   # mfhi        $s4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ddc4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26ddc8:
    // 0x26ddc8: 0x0  nop
    ctx->pc = 0x26ddc8u;
    // NOP
label_26ddcc:
    // 0x26ddcc: 0x0  nop
    ctx->pc = 0x26ddccu;
    // NOP
label_26ddd0:
    // 0x26ddd0: 0x3b32  tlt         $zero, $zero, 236
    ctx->pc = 0x26ddd0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ddd4:
    // 0x26ddd4: 0xcf60  .word       0x0000CF60                   # add         $t9, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ddd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26ddd8:
    // 0x26ddd8: 0x0  nop
    ctx->pc = 0x26ddd8u;
    // NOP
label_26dddc:
    // 0x26dddc: 0x0  nop
    ctx->pc = 0x26dddcu;
    // NOP
label_26dde0:
    // 0x26dde0: 0x3b4c  syscall     237
    ctx->pc = 0x26dde0u;
    ctx->pc = 0x26DDE4u;
runtime->handleSyscall(rdram, ctx, 0xEDu);
label_26dde4:
    // 0x26dde4: 0x7100  sll         $t6, $zero, 4
    ctx->pc = 0x26dde4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26dde8:
    // 0x26dde8: 0x0  nop
    ctx->pc = 0x26dde8u;
    // NOP
label_26ddec:
    // 0x26ddec: 0x0  nop
    ctx->pc = 0x26ddecu;
    // NOP
label_26ddf0:
    // 0x26ddf0: 0x3b5b  .word       0x00003B5B                   # divu        $a3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ddf0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26ddf4:
    // 0x26ddf4: 0x6770  tge         $zero, $zero, 413
    ctx->pc = 0x26ddf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ddf8:
    // 0x26ddf8: 0x0  nop
    ctx->pc = 0x26ddf8u;
    // NOP
label_26ddfc:
    // 0x26ddfc: 0x0  nop
    ctx->pc = 0x26ddfcu;
    // NOP
label_26de00:
    // 0x26de00: 0x3b68  .word       0x00003B68                   # mfsa        $a3 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26de00u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_26de04:
    // 0x26de04: 0x12160  .word       0x00012160                   # add         $a0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26de04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26de08:
    // 0x26de08: 0x0  nop
    ctx->pc = 0x26de08u;
    // NOP
label_26de0c:
    // 0x26de0c: 0x0  nop
    ctx->pc = 0x26de0cu;
    // NOP
label_26de10:
    // 0x26de10: 0x3b8d  break       0, 238
    ctx->pc = 0x26de10u;
    runtime->handleBreak(rdram, ctx);
label_26de14:
    // 0x26de14: 0xb930  tge         $zero, $zero, 740
    ctx->pc = 0x26de14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26de18:
    // 0x26de18: 0x0  nop
    ctx->pc = 0x26de18u;
    // NOP
label_26de1c:
    // 0x26de1c: 0x0  nop
    ctx->pc = 0x26de1cu;
    // NOP
label_26de20:
    // 0x26de20: 0x3ba5  .word       0x00003BA5                   # move        $a3, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26de20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26de24:
    // 0x26de24: 0x9110  .word       0x00009110                   # mfhi        $s2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26de24u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26de28:
    // 0x26de28: 0x0  nop
    ctx->pc = 0x26de28u;
    // NOP
label_26de2c:
    // 0x26de2c: 0x0  nop
    ctx->pc = 0x26de2cu;
    // NOP
label_26de30:
    // 0x26de30: 0x3bb8  dsll        $a3, $zero, 14
    ctx->pc = 0x26de30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 14);
label_26de34:
    // 0x26de34: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x26de34u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26de38:
    // 0x26de38: 0x0  nop
    ctx->pc = 0x26de38u;
    // NOP
label_26de3c:
    // 0x26de3c: 0x0  nop
    ctx->pc = 0x26de3cu;
    // NOP
label_26de40:
    // 0x26de40: 0x3bc4  .word       0x00003BC4                   # sllv        $a3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26de40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26de44:
    // 0x26de44: 0xba90  .word       0x0000BA90                   # mfhi        $s7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26de44u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26de48:
    // 0x26de48: 0x0  nop
    ctx->pc = 0x26de48u;
    // NOP
label_26de4c:
    // 0x26de4c: 0x0  nop
    ctx->pc = 0x26de4cu;
    // NOP
label_26de50:
    // 0x26de50: 0x3bdc  .word       0x00003BDC                   # dmult       $zero, $zero # 00003BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26de50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26DE50 raw=0x00003BDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26de54:
    // 0x26de54: 0xa960  .word       0x0000A960                   # add         $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26de54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26de58:
    // 0x26de58: 0x0  nop
    ctx->pc = 0x26de58u;
    // NOP
label_26de5c:
    // 0x26de5c: 0x0  nop
    ctx->pc = 0x26de5cu;
    // NOP
label_26de60:
    // 0x26de60: 0x3bf2  tlt         $zero, $zero, 239
    ctx->pc = 0x26de60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26de64:
    // 0x26de64: 0x63f0  tge         $zero, $zero, 399
    ctx->pc = 0x26de64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26de68:
    // 0x26de68: 0x0  nop
    ctx->pc = 0x26de68u;
    // NOP
label_26de6c:
    // 0x26de6c: 0x0  nop
    ctx->pc = 0x26de6cu;
    // NOP
label_26de70:
    // 0x26de70: 0x3bff  dsra32      $a3, $zero, 15
    ctx->pc = 0x26de70u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 15));
label_26de74:
    // 0x26de74: 0x12b10  .word       0x00012B10                   # mfhi        $a1 # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26de74u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26de78:
    // 0x26de78: 0x0  nop
    ctx->pc = 0x26de78u;
    // NOP
label_26de7c:
    // 0x26de7c: 0x0  nop
    ctx->pc = 0x26de7cu;
    // NOP
label_26de80:
    // 0x26de80: 0x3c25  .word       0x00003C25                   # move        $a3, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26de80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26de84:
    // 0x26de84: 0x9950  .word       0x00009950                   # mfhi        $s3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26de84u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26de88:
    // 0x26de88: 0x0  nop
    ctx->pc = 0x26de88u;
    // NOP
label_26de8c:
    // 0x26de8c: 0x0  nop
    ctx->pc = 0x26de8cu;
    // NOP
label_26de90:
    // 0x26de90: 0x3c39  .word       0x00003C39                   # INVALID     $zero, $zero, 0x3C39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26de90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26DE90 raw=0x00003C39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26de94:
    // 0x26de94: 0x7020  add         $t6, $zero, $zero
    ctx->pc = 0x26de94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26de98:
    // 0x26de98: 0x0  nop
    ctx->pc = 0x26de98u;
    // NOP
label_26de9c:
    // 0x26de9c: 0x0  nop
    ctx->pc = 0x26de9cu;
    // NOP
label_26dea0:
    // 0x26dea0: 0x3c48  .word       0x00003C48                   # jr          $zero # 00003C40 <InstrIdType: CPU_SPECIAL>
label_26dea4:
    if (ctx->pc == 0x26DEA4u) {
        ctx->pc = 0x26DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEA0u;
        // 0x26dea4: 0x8110  .word       0x00008110                   # mfhi        $s0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DEA8u;
        goto label_26dea8;
    }
    ctx->pc = 0x26DEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEA0u;
        // 0x26dea4: 0x8110  .word       0x00008110                   # mfhi        $s0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DEA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26DEA8u;
label_26dea8:
    // 0x26dea8: 0x0  nop
    ctx->pc = 0x26dea8u;
    // NOP
label_26deac:
    // 0x26deac: 0x0  nop
    ctx->pc = 0x26deacu;
    // NOP
label_26deb0:
    // 0x26deb0: 0x3c59  .word       0x00003C59                   # multu       $zero, $zero # 00003C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26deb0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_26deb4:
    // 0x26deb4: 0x79e0  .word       0x000079E0                   # add         $t7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26deb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26deb8:
    // 0x26deb8: 0x0  nop
    ctx->pc = 0x26deb8u;
    // NOP
label_26debc:
    // 0x26debc: 0x0  nop
    ctx->pc = 0x26debcu;
    // NOP
label_26dec0:
    // 0x26dec0: 0x3c69  .word       0x00003C69                   # mtsa        $zero # 00003C40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26dec0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26dec4:
    // 0x26dec4: 0x8fb0  tge         $zero, $zero, 574
    ctx->pc = 0x26dec4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dec8:
    // 0x26dec8: 0x0  nop
    ctx->pc = 0x26dec8u;
    // NOP
label_26decc:
    // 0x26decc: 0x0  nop
    ctx->pc = 0x26deccu;
    // NOP
label_26ded0:
    // 0x26ded0: 0x3c7b  dsra        $a3, $zero, 17
    ctx->pc = 0x26ded0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> 17);
label_26ded4:
    // 0x26ded4: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x26ded4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26ded8:
    // 0x26ded8: 0x0  nop
    ctx->pc = 0x26ded8u;
    // NOP
label_26dedc:
    // 0x26dedc: 0x0  nop
    ctx->pc = 0x26dedcu;
    // NOP
label_26dee0:
    // 0x26dee0: 0x3c88  .word       0x00003C88                   # jr          $zero # 00003C80 <InstrIdType: CPU_SPECIAL>
label_26dee4:
    if (ctx->pc == 0x26DEE4u) {
        ctx->pc = 0x26DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEE0u;
        // 0x26dee4: 0xac00  sll         $s5, $zero, 16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DEE8u;
        goto label_26dee8;
    }
    ctx->pc = 0x26DEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEE0u;
        // 0x26dee4: 0xac00  sll         $s5, $zero, 16 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DEE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26DEE8u;
label_26dee8:
    // 0x26dee8: 0x0  nop
    ctx->pc = 0x26dee8u;
    // NOP
label_26deec:
    // 0x26deec: 0x0  nop
    ctx->pc = 0x26deecu;
    // NOP
label_26def0:
    // 0x26def0: 0x3c9e  .word       0x00003C9E                   # ddiv        $a3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26def0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26DEF0 raw=0x00003C9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26def4:
    // 0x26def4: 0x9ac0  sll         $s3, $zero, 11
    ctx->pc = 0x26def4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26def8:
    // 0x26def8: 0x0  nop
    ctx->pc = 0x26def8u;
    // NOP
label_26defc:
    // 0x26defc: 0x0  nop
    ctx->pc = 0x26defcu;
    // NOP
label_26df00:
    // 0x26df00: 0x3cb2  tlt         $zero, $zero, 242
    ctx->pc = 0x26df00u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26df04:
    // 0x26df04: 0x8310  .word       0x00008310                   # mfhi        $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26df04u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26df08:
    // 0x26df08: 0x0  nop
    ctx->pc = 0x26df08u;
    // NOP
label_26df0c:
    // 0x26df0c: 0x0  nop
    ctx->pc = 0x26df0cu;
    // NOP
label_26df10:
    // 0x26df10: 0x3cc3  sra         $a3, $zero, 19
    ctx->pc = 0x26df10u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), 19));
label_26df14:
    // 0x26df14: 0x57a0  .word       0x000057A0                   # add         $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26df14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26df18:
    // 0x26df18: 0x0  nop
    ctx->pc = 0x26df18u;
    // NOP
label_26df1c:
    // 0x26df1c: 0x0  nop
    ctx->pc = 0x26df1cu;
    // NOP
label_26df20:
    // 0x26df20: 0x3cce  .word       0x00003CCE                   # INVALID     $zero, $zero, 0x3CCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26df20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26DF20 raw=0x00003CCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26df24:
    // 0x26df24: 0x48b0  tge         $zero, $zero, 290
    ctx->pc = 0x26df24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26df28:
    // 0x26df28: 0x0  nop
    ctx->pc = 0x26df28u;
    // NOP
label_26df2c:
    // 0x26df2c: 0x0  nop
    ctx->pc = 0x26df2cu;
    // NOP
label_26df30:
    // 0x26df30: 0x3cd8  .word       0x00003CD8                   # mult        $a3, $zero, $zero # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26df30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_26df34:
    // 0x26df34: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x26df34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26df38:
    // 0x26df38: 0x0  nop
    ctx->pc = 0x26df38u;
    // NOP
label_26df3c:
    // 0x26df3c: 0x0  nop
    ctx->pc = 0x26df3cu;
    // NOP
label_26df40:
    // 0x26df40: 0x3cde  .word       0x00003CDE                   # ddiv        $a3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26df40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26DF40 raw=0x00003CDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26df44:
    // 0x26df44: 0x2d50  .word       0x00002D50                   # mfhi        $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26df44u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26df48:
    // 0x26df48: 0x0  nop
    ctx->pc = 0x26df48u;
    // NOP
label_26df4c:
    // 0x26df4c: 0x0  nop
    ctx->pc = 0x26df4cu;
    // NOP
label_26df50:
    // 0x26df50: 0x3ce4  .word       0x00003CE4                   # and         $a3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26df50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26df54:
    // 0x26df54: 0x75e0  .word       0x000075E0                   # add         $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26df54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26df58:
    // 0x26df58: 0x0  nop
    ctx->pc = 0x26df58u;
    // NOP
label_26df5c:
    // 0x26df5c: 0x0  nop
    ctx->pc = 0x26df5cu;
    // NOP
label_26df60:
    // 0x26df60: 0x3cf3  tltu        $zero, $zero, 243
    ctx->pc = 0x26df60u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26df64:
    // 0x26df64: 0x8a80  sll         $s1, $zero, 10
    ctx->pc = 0x26df64u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26df68:
    // 0x26df68: 0x0  nop
    ctx->pc = 0x26df68u;
    // NOP
label_26df6c:
    // 0x26df6c: 0x0  nop
    ctx->pc = 0x26df6cu;
    // NOP
label_26df70:
    // 0x26df70: 0x3d05  .word       0x00003D05                   # INVALID     $zero, $zero, 0x3D05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26df70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26DF70 raw=0x00003D05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26df74:
    // 0x26df74: 0x7ff0  tge         $zero, $zero, 511
    ctx->pc = 0x26df74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26df78:
    // 0x26df78: 0x0  nop
    ctx->pc = 0x26df78u;
    // NOP
label_26df7c:
    // 0x26df7c: 0x0  nop
    ctx->pc = 0x26df7cu;
    // NOP
    ctx->pc = 0x26df80u;
    return;
}
