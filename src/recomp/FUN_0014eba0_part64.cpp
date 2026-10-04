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


void FUN_0014eba0_part64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16d7d0u: goto label_16d7d0;
        case 0x16d7d4u: goto label_16d7d4;
        case 0x16d7d8u: goto label_16d7d8;
        case 0x16d7dcu: goto label_16d7dc;
        case 0x16d7e0u: goto label_16d7e0;
        case 0x16d7e4u: goto label_16d7e4;
        case 0x16d7e8u: goto label_16d7e8;
        case 0x16d7ecu: goto label_16d7ec;
        case 0x16d7f0u: goto label_16d7f0;
        case 0x16d7f4u: goto label_16d7f4;
        case 0x16d7f8u: goto label_16d7f8;
        case 0x16d7fcu: goto label_16d7fc;
        case 0x16d800u: goto label_16d800;
        case 0x16d804u: goto label_16d804;
        case 0x16d808u: goto label_16d808;
        case 0x16d80cu: goto label_16d80c;
        case 0x16d810u: goto label_16d810;
        case 0x16d814u: goto label_16d814;
        case 0x16d818u: goto label_16d818;
        case 0x16d81cu: goto label_16d81c;
        case 0x16d820u: goto label_16d820;
        case 0x16d824u: goto label_16d824;
        case 0x16d828u: goto label_16d828;
        case 0x16d82cu: goto label_16d82c;
        case 0x16d830u: goto label_16d830;
        case 0x16d834u: goto label_16d834;
        case 0x16d838u: goto label_16d838;
        case 0x16d83cu: goto label_16d83c;
        case 0x16d840u: goto label_16d840;
        case 0x16d844u: goto label_16d844;
        case 0x16d848u: goto label_16d848;
        case 0x16d84cu: goto label_16d84c;
        case 0x16d850u: goto label_16d850;
        case 0x16d854u: goto label_16d854;
        case 0x16d858u: goto label_16d858;
        case 0x16d85cu: goto label_16d85c;
        case 0x16d860u: goto label_16d860;
        case 0x16d864u: goto label_16d864;
        case 0x16d868u: goto label_16d868;
        case 0x16d86cu: goto label_16d86c;
        case 0x16d870u: goto label_16d870;
        case 0x16d874u: goto label_16d874;
        case 0x16d878u: goto label_16d878;
        case 0x16d87cu: goto label_16d87c;
        case 0x16d880u: goto label_16d880;
        case 0x16d884u: goto label_16d884;
        case 0x16d888u: goto label_16d888;
        case 0x16d88cu: goto label_16d88c;
        case 0x16d890u: goto label_16d890;
        case 0x16d894u: goto label_16d894;
        case 0x16d898u: goto label_16d898;
        case 0x16d89cu: goto label_16d89c;
        case 0x16d8a0u: goto label_16d8a0;
        case 0x16d8a4u: goto label_16d8a4;
        case 0x16d8a8u: goto label_16d8a8;
        case 0x16d8acu: goto label_16d8ac;
        case 0x16d8b0u: goto label_16d8b0;
        case 0x16d8b4u: goto label_16d8b4;
        case 0x16d8b8u: goto label_16d8b8;
        case 0x16d8bcu: goto label_16d8bc;
        case 0x16d8c0u: goto label_16d8c0;
        case 0x16d8c4u: goto label_16d8c4;
        case 0x16d8c8u: goto label_16d8c8;
        case 0x16d8ccu: goto label_16d8cc;
        case 0x16d8d0u: goto label_16d8d0;
        case 0x16d8d4u: goto label_16d8d4;
        case 0x16d8d8u: goto label_16d8d8;
        case 0x16d8dcu: goto label_16d8dc;
        case 0x16d8e0u: goto label_16d8e0;
        case 0x16d8e4u: goto label_16d8e4;
        case 0x16d8e8u: goto label_16d8e8;
        case 0x16d8ecu: goto label_16d8ec;
        case 0x16d8f0u: goto label_16d8f0;
        case 0x16d8f4u: goto label_16d8f4;
        case 0x16d8f8u: goto label_16d8f8;
        case 0x16d8fcu: goto label_16d8fc;
        case 0x16d900u: goto label_16d900;
        case 0x16d904u: goto label_16d904;
        case 0x16d908u: goto label_16d908;
        case 0x16d90cu: goto label_16d90c;
        case 0x16d910u: goto label_16d910;
        case 0x16d914u: goto label_16d914;
        case 0x16d918u: goto label_16d918;
        case 0x16d91cu: goto label_16d91c;
        case 0x16d920u: goto label_16d920;
        case 0x16d924u: goto label_16d924;
        case 0x16d928u: goto label_16d928;
        case 0x16d92cu: goto label_16d92c;
        case 0x16d930u: goto label_16d930;
        case 0x16d934u: goto label_16d934;
        case 0x16d938u: goto label_16d938;
        case 0x16d93cu: goto label_16d93c;
        case 0x16d940u: goto label_16d940;
        case 0x16d944u: goto label_16d944;
        case 0x16d948u: goto label_16d948;
        case 0x16d94cu: goto label_16d94c;
        case 0x16d950u: goto label_16d950;
        case 0x16d954u: goto label_16d954;
        case 0x16d958u: goto label_16d958;
        case 0x16d95cu: goto label_16d95c;
        case 0x16d960u: goto label_16d960;
        case 0x16d964u: goto label_16d964;
        case 0x16d968u: goto label_16d968;
        case 0x16d96cu: goto label_16d96c;
        case 0x16d970u: goto label_16d970;
        case 0x16d974u: goto label_16d974;
        case 0x16d978u: goto label_16d978;
        case 0x16d97cu: goto label_16d97c;
        case 0x16d980u: goto label_16d980;
        case 0x16d984u: goto label_16d984;
        case 0x16d988u: goto label_16d988;
        case 0x16d98cu: goto label_16d98c;
        case 0x16d990u: goto label_16d990;
        case 0x16d994u: goto label_16d994;
        case 0x16d998u: goto label_16d998;
        case 0x16d99cu: goto label_16d99c;
        case 0x16d9a0u: goto label_16d9a0;
        case 0x16d9a4u: goto label_16d9a4;
        case 0x16d9a8u: goto label_16d9a8;
        case 0x16d9acu: goto label_16d9ac;
        case 0x16d9b0u: goto label_16d9b0;
        case 0x16d9b4u: goto label_16d9b4;
        case 0x16d9b8u: goto label_16d9b8;
        case 0x16d9bcu: goto label_16d9bc;
        case 0x16d9c0u: goto label_16d9c0;
        case 0x16d9c4u: goto label_16d9c4;
        case 0x16d9c8u: goto label_16d9c8;
        case 0x16d9ccu: goto label_16d9cc;
        case 0x16d9d0u: goto label_16d9d0;
        case 0x16d9d4u: goto label_16d9d4;
        case 0x16d9d8u: goto label_16d9d8;
        case 0x16d9dcu: goto label_16d9dc;
        case 0x16d9e0u: goto label_16d9e0;
        case 0x16d9e4u: goto label_16d9e4;
        case 0x16d9e8u: goto label_16d9e8;
        case 0x16d9ecu: goto label_16d9ec;
        case 0x16d9f0u: goto label_16d9f0;
        case 0x16d9f4u: goto label_16d9f4;
        case 0x16d9f8u: goto label_16d9f8;
        case 0x16d9fcu: goto label_16d9fc;
        case 0x16da00u: goto label_16da00;
        case 0x16da04u: goto label_16da04;
        case 0x16da08u: goto label_16da08;
        case 0x16da0cu: goto label_16da0c;
        case 0x16da10u: goto label_16da10;
        case 0x16da14u: goto label_16da14;
        case 0x16da18u: goto label_16da18;
        case 0x16da1cu: goto label_16da1c;
        case 0x16da20u: goto label_16da20;
        case 0x16da24u: goto label_16da24;
        case 0x16da28u: goto label_16da28;
        case 0x16da2cu: goto label_16da2c;
        case 0x16da30u: goto label_16da30;
        case 0x16da34u: goto label_16da34;
        case 0x16da38u: goto label_16da38;
        case 0x16da3cu: goto label_16da3c;
        case 0x16da40u: goto label_16da40;
        case 0x16da44u: goto label_16da44;
        case 0x16da48u: goto label_16da48;
        case 0x16da4cu: goto label_16da4c;
        case 0x16da50u: goto label_16da50;
        case 0x16da54u: goto label_16da54;
        case 0x16da58u: goto label_16da58;
        case 0x16da5cu: goto label_16da5c;
        case 0x16da60u: goto label_16da60;
        case 0x16da64u: goto label_16da64;
        case 0x16da68u: goto label_16da68;
        case 0x16da6cu: goto label_16da6c;
        case 0x16da70u: goto label_16da70;
        case 0x16da74u: goto label_16da74;
        case 0x16da78u: goto label_16da78;
        case 0x16da7cu: goto label_16da7c;
        case 0x16da80u: goto label_16da80;
        case 0x16da84u: goto label_16da84;
        case 0x16da88u: goto label_16da88;
        case 0x16da8cu: goto label_16da8c;
        case 0x16da90u: goto label_16da90;
        case 0x16da94u: goto label_16da94;
        case 0x16da98u: goto label_16da98;
        case 0x16da9cu: goto label_16da9c;
        case 0x16daa0u: goto label_16daa0;
        case 0x16daa4u: goto label_16daa4;
        case 0x16daa8u: goto label_16daa8;
        case 0x16daacu: goto label_16daac;
        case 0x16dab0u: goto label_16dab0;
        case 0x16dab4u: goto label_16dab4;
        case 0x16dab8u: goto label_16dab8;
        case 0x16dabcu: goto label_16dabc;
        case 0x16dac0u: goto label_16dac0;
        case 0x16dac4u: goto label_16dac4;
        case 0x16dac8u: goto label_16dac8;
        case 0x16daccu: goto label_16dacc;
        case 0x16dad0u: goto label_16dad0;
        case 0x16dad4u: goto label_16dad4;
        case 0x16dad8u: goto label_16dad8;
        case 0x16dadcu: goto label_16dadc;
        case 0x16dae0u: goto label_16dae0;
        case 0x16dae4u: goto label_16dae4;
        case 0x16dae8u: goto label_16dae8;
        case 0x16daecu: goto label_16daec;
        case 0x16daf0u: goto label_16daf0;
        case 0x16daf4u: goto label_16daf4;
        case 0x16daf8u: goto label_16daf8;
        case 0x16dafcu: goto label_16dafc;
        case 0x16db00u: goto label_16db00;
        case 0x16db04u: goto label_16db04;
        case 0x16db08u: goto label_16db08;
        case 0x16db0cu: goto label_16db0c;
        case 0x16db10u: goto label_16db10;
        case 0x16db14u: goto label_16db14;
        case 0x16db18u: goto label_16db18;
        case 0x16db1cu: goto label_16db1c;
        case 0x16db20u: goto label_16db20;
        case 0x16db24u: goto label_16db24;
        case 0x16db28u: goto label_16db28;
        case 0x16db2cu: goto label_16db2c;
        case 0x16db30u: goto label_16db30;
        case 0x16db34u: goto label_16db34;
        case 0x16db38u: goto label_16db38;
        case 0x16db3cu: goto label_16db3c;
        case 0x16db40u: goto label_16db40;
        case 0x16db44u: goto label_16db44;
        case 0x16db48u: goto label_16db48;
        case 0x16db4cu: goto label_16db4c;
        case 0x16db50u: goto label_16db50;
        case 0x16db54u: goto label_16db54;
        case 0x16db58u: goto label_16db58;
        case 0x16db5cu: goto label_16db5c;
        case 0x16db60u: goto label_16db60;
        case 0x16db64u: goto label_16db64;
        case 0x16db68u: goto label_16db68;
        case 0x16db6cu: goto label_16db6c;
        case 0x16db70u: goto label_16db70;
        case 0x16db74u: goto label_16db74;
        case 0x16db78u: goto label_16db78;
        case 0x16db7cu: goto label_16db7c;
        case 0x16db80u: goto label_16db80;
        case 0x16db84u: goto label_16db84;
        case 0x16db88u: goto label_16db88;
        case 0x16db8cu: goto label_16db8c;
        case 0x16db90u: goto label_16db90;
        case 0x16db94u: goto label_16db94;
        case 0x16db98u: goto label_16db98;
        case 0x16db9cu: goto label_16db9c;
        case 0x16dba0u: goto label_16dba0;
        case 0x16dba4u: goto label_16dba4;
        case 0x16dba8u: goto label_16dba8;
        case 0x16dbacu: goto label_16dbac;
        case 0x16dbb0u: goto label_16dbb0;
        case 0x16dbb4u: goto label_16dbb4;
        case 0x16dbb8u: goto label_16dbb8;
        case 0x16dbbcu: goto label_16dbbc;
        case 0x16dbc0u: goto label_16dbc0;
        case 0x16dbc4u: goto label_16dbc4;
        case 0x16dbc8u: goto label_16dbc8;
        case 0x16dbccu: goto label_16dbcc;
        case 0x16dbd0u: goto label_16dbd0;
        case 0x16dbd4u: goto label_16dbd4;
        case 0x16dbd8u: goto label_16dbd8;
        case 0x16dbdcu: goto label_16dbdc;
        case 0x16dbe0u: goto label_16dbe0;
        case 0x16dbe4u: goto label_16dbe4;
        case 0x16dbe8u: goto label_16dbe8;
        case 0x16dbecu: goto label_16dbec;
        case 0x16dbf0u: goto label_16dbf0;
        case 0x16dbf4u: goto label_16dbf4;
        case 0x16dbf8u: goto label_16dbf8;
        case 0x16dbfcu: goto label_16dbfc;
        case 0x16dc00u: goto label_16dc00;
        case 0x16dc04u: goto label_16dc04;
        case 0x16dc08u: goto label_16dc08;
        case 0x16dc0cu: goto label_16dc0c;
        case 0x16dc10u: goto label_16dc10;
        case 0x16dc14u: goto label_16dc14;
        case 0x16dc18u: goto label_16dc18;
        case 0x16dc1cu: goto label_16dc1c;
        case 0x16dc20u: goto label_16dc20;
        case 0x16dc24u: goto label_16dc24;
        case 0x16dc28u: goto label_16dc28;
        case 0x16dc2cu: goto label_16dc2c;
        case 0x16dc30u: goto label_16dc30;
        case 0x16dc34u: goto label_16dc34;
        case 0x16dc38u: goto label_16dc38;
        case 0x16dc3cu: goto label_16dc3c;
        case 0x16dc40u: goto label_16dc40;
        case 0x16dc44u: goto label_16dc44;
        case 0x16dc48u: goto label_16dc48;
        case 0x16dc4cu: goto label_16dc4c;
        case 0x16dc50u: goto label_16dc50;
        case 0x16dc54u: goto label_16dc54;
        case 0x16dc58u: goto label_16dc58;
        case 0x16dc5cu: goto label_16dc5c;
        case 0x16dc60u: goto label_16dc60;
        case 0x16dc64u: goto label_16dc64;
        case 0x16dc68u: goto label_16dc68;
        case 0x16dc6cu: goto label_16dc6c;
        case 0x16dc70u: goto label_16dc70;
        case 0x16dc74u: goto label_16dc74;
        case 0x16dc78u: goto label_16dc78;
        case 0x16dc7cu: goto label_16dc7c;
        case 0x16dc80u: goto label_16dc80;
        case 0x16dc84u: goto label_16dc84;
        case 0x16dc88u: goto label_16dc88;
        case 0x16dc8cu: goto label_16dc8c;
        case 0x16dc90u: goto label_16dc90;
        case 0x16dc94u: goto label_16dc94;
        case 0x16dc98u: goto label_16dc98;
        case 0x16dc9cu: goto label_16dc9c;
        case 0x16dca0u: goto label_16dca0;
        case 0x16dca4u: goto label_16dca4;
        case 0x16dca8u: goto label_16dca8;
        case 0x16dcacu: goto label_16dcac;
        case 0x16dcb0u: goto label_16dcb0;
        case 0x16dcb4u: goto label_16dcb4;
        case 0x16dcb8u: goto label_16dcb8;
        case 0x16dcbcu: goto label_16dcbc;
        case 0x16dcc0u: goto label_16dcc0;
        case 0x16dcc4u: goto label_16dcc4;
        case 0x16dcc8u: goto label_16dcc8;
        case 0x16dcccu: goto label_16dccc;
        case 0x16dcd0u: goto label_16dcd0;
        case 0x16dcd4u: goto label_16dcd4;
        case 0x16dcd8u: goto label_16dcd8;
        case 0x16dcdcu: goto label_16dcdc;
        case 0x16dce0u: goto label_16dce0;
        case 0x16dce4u: goto label_16dce4;
        case 0x16dce8u: goto label_16dce8;
        case 0x16dcecu: goto label_16dcec;
        case 0x16dcf0u: goto label_16dcf0;
        case 0x16dcf4u: goto label_16dcf4;
        case 0x16dcf8u: goto label_16dcf8;
        case 0x16dcfcu: goto label_16dcfc;
        case 0x16dd00u: goto label_16dd00;
        case 0x16dd04u: goto label_16dd04;
        case 0x16dd08u: goto label_16dd08;
        case 0x16dd0cu: goto label_16dd0c;
        case 0x16dd10u: goto label_16dd10;
        case 0x16dd14u: goto label_16dd14;
        case 0x16dd18u: goto label_16dd18;
        case 0x16dd1cu: goto label_16dd1c;
        case 0x16dd20u: goto label_16dd20;
        case 0x16dd24u: goto label_16dd24;
        case 0x16dd28u: goto label_16dd28;
        case 0x16dd2cu: goto label_16dd2c;
        case 0x16dd30u: goto label_16dd30;
        case 0x16dd34u: goto label_16dd34;
        case 0x16dd38u: goto label_16dd38;
        case 0x16dd3cu: goto label_16dd3c;
        case 0x16dd40u: goto label_16dd40;
        case 0x16dd44u: goto label_16dd44;
        case 0x16dd48u: goto label_16dd48;
        case 0x16dd4cu: goto label_16dd4c;
        case 0x16dd50u: goto label_16dd50;
        case 0x16dd54u: goto label_16dd54;
        case 0x16dd58u: goto label_16dd58;
        case 0x16dd5cu: goto label_16dd5c;
        case 0x16dd60u: goto label_16dd60;
        case 0x16dd64u: goto label_16dd64;
        case 0x16dd68u: goto label_16dd68;
        case 0x16dd6cu: goto label_16dd6c;
        case 0x16dd70u: goto label_16dd70;
        case 0x16dd74u: goto label_16dd74;
        case 0x16dd78u: goto label_16dd78;
        case 0x16dd7cu: goto label_16dd7c;
        case 0x16dd80u: goto label_16dd80;
        case 0x16dd84u: goto label_16dd84;
        case 0x16dd88u: goto label_16dd88;
        case 0x16dd8cu: goto label_16dd8c;
        case 0x16dd90u: goto label_16dd90;
        case 0x16dd94u: goto label_16dd94;
        case 0x16dd98u: goto label_16dd98;
        case 0x16dd9cu: goto label_16dd9c;
        case 0x16dda0u: goto label_16dda0;
        case 0x16dda4u: goto label_16dda4;
        case 0x16dda8u: goto label_16dda8;
        case 0x16ddacu: goto label_16ddac;
        case 0x16ddb0u: goto label_16ddb0;
        case 0x16ddb4u: goto label_16ddb4;
        case 0x16ddb8u: goto label_16ddb8;
        case 0x16ddbcu: goto label_16ddbc;
        case 0x16ddc0u: goto label_16ddc0;
        case 0x16ddc4u: goto label_16ddc4;
        case 0x16ddc8u: goto label_16ddc8;
        case 0x16ddccu: goto label_16ddcc;
        case 0x16ddd0u: goto label_16ddd0;
        case 0x16ddd4u: goto label_16ddd4;
        case 0x16ddd8u: goto label_16ddd8;
        case 0x16dddcu: goto label_16dddc;
        case 0x16dde0u: goto label_16dde0;
        case 0x16dde4u: goto label_16dde4;
        case 0x16dde8u: goto label_16dde8;
        case 0x16ddecu: goto label_16ddec;
        case 0x16ddf0u: goto label_16ddf0;
        case 0x16ddf4u: goto label_16ddf4;
        case 0x16ddf8u: goto label_16ddf8;
        case 0x16ddfcu: goto label_16ddfc;
        case 0x16de00u: goto label_16de00;
        case 0x16de04u: goto label_16de04;
        case 0x16de08u: goto label_16de08;
        case 0x16de0cu: goto label_16de0c;
        case 0x16de10u: goto label_16de10;
        case 0x16de14u: goto label_16de14;
        case 0x16de18u: goto label_16de18;
        case 0x16de1cu: goto label_16de1c;
        case 0x16de20u: goto label_16de20;
        case 0x16de24u: goto label_16de24;
        case 0x16de28u: goto label_16de28;
        case 0x16de2cu: goto label_16de2c;
        case 0x16de30u: goto label_16de30;
        case 0x16de34u: goto label_16de34;
        case 0x16de38u: goto label_16de38;
        case 0x16de3cu: goto label_16de3c;
        case 0x16de40u: goto label_16de40;
        case 0x16de44u: goto label_16de44;
        case 0x16de48u: goto label_16de48;
        case 0x16de4cu: goto label_16de4c;
        case 0x16de50u: goto label_16de50;
        case 0x16de54u: goto label_16de54;
        case 0x16de58u: goto label_16de58;
        case 0x16de5cu: goto label_16de5c;
        case 0x16de60u: goto label_16de60;
        case 0x16de64u: goto label_16de64;
        case 0x16de68u: goto label_16de68;
        case 0x16de6cu: goto label_16de6c;
        case 0x16de70u: goto label_16de70;
        case 0x16de74u: goto label_16de74;
        case 0x16de78u: goto label_16de78;
        case 0x16de7cu: goto label_16de7c;
        case 0x16de80u: goto label_16de80;
        case 0x16de84u: goto label_16de84;
        case 0x16de88u: goto label_16de88;
        case 0x16de8cu: goto label_16de8c;
        case 0x16de90u: goto label_16de90;
        case 0x16de94u: goto label_16de94;
        case 0x16de98u: goto label_16de98;
        case 0x16de9cu: goto label_16de9c;
        case 0x16dea0u: goto label_16dea0;
        case 0x16dea4u: goto label_16dea4;
        case 0x16dea8u: goto label_16dea8;
        case 0x16deacu: goto label_16deac;
        case 0x16deb0u: goto label_16deb0;
        case 0x16deb4u: goto label_16deb4;
        case 0x16deb8u: goto label_16deb8;
        case 0x16debcu: goto label_16debc;
        case 0x16dec0u: goto label_16dec0;
        case 0x16dec4u: goto label_16dec4;
        case 0x16dec8u: goto label_16dec8;
        case 0x16deccu: goto label_16decc;
        case 0x16ded0u: goto label_16ded0;
        case 0x16ded4u: goto label_16ded4;
        case 0x16ded8u: goto label_16ded8;
        case 0x16dedcu: goto label_16dedc;
        case 0x16dee0u: goto label_16dee0;
        case 0x16dee4u: goto label_16dee4;
        case 0x16dee8u: goto label_16dee8;
        case 0x16deecu: goto label_16deec;
        case 0x16def0u: goto label_16def0;
        case 0x16def4u: goto label_16def4;
        case 0x16def8u: goto label_16def8;
        case 0x16defcu: goto label_16defc;
        case 0x16df00u: goto label_16df00;
        case 0x16df04u: goto label_16df04;
        case 0x16df08u: goto label_16df08;
        case 0x16df0cu: goto label_16df0c;
        case 0x16df10u: goto label_16df10;
        case 0x16df14u: goto label_16df14;
        case 0x16df18u: goto label_16df18;
        case 0x16df1cu: goto label_16df1c;
        case 0x16df20u: goto label_16df20;
        case 0x16df24u: goto label_16df24;
        case 0x16df28u: goto label_16df28;
        case 0x16df2cu: goto label_16df2c;
        case 0x16df30u: goto label_16df30;
        case 0x16df34u: goto label_16df34;
        case 0x16df38u: goto label_16df38;
        case 0x16df3cu: goto label_16df3c;
        case 0x16df40u: goto label_16df40;
        case 0x16df44u: goto label_16df44;
        case 0x16df48u: goto label_16df48;
        case 0x16df4cu: goto label_16df4c;
        case 0x16df50u: goto label_16df50;
        case 0x16df54u: goto label_16df54;
        case 0x16df58u: goto label_16df58;
        case 0x16df5cu: goto label_16df5c;
        case 0x16df60u: goto label_16df60;
        case 0x16df64u: goto label_16df64;
        case 0x16df68u: goto label_16df68;
        case 0x16df6cu: goto label_16df6c;
        case 0x16df70u: goto label_16df70;
        case 0x16df74u: goto label_16df74;
        case 0x16df78u: goto label_16df78;
        case 0x16df7cu: goto label_16df7c;
        case 0x16df80u: goto label_16df80;
        case 0x16df84u: goto label_16df84;
        case 0x16df88u: goto label_16df88;
        case 0x16df8cu: goto label_16df8c;
        case 0x16df90u: goto label_16df90;
        case 0x16df94u: goto label_16df94;
        case 0x16df98u: goto label_16df98;
        case 0x16df9cu: goto label_16df9c;
        default: return;
    }

label_16d7d0:
    // 0x16d7d0: 0x8c271eb8  lw          $a3, 0x1EB8($at)
    ctx->pc = 0x16d7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7864)));
label_16d7d4:
    // 0x16d7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16d7d8:
    // 0x16d7d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16d7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16d7dc:
    // 0x16d7dc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d7e0:
    // 0x16d7e0: 0x8c281ebc  lw          $t0, 0x1EBC($at)
    ctx->pc = 0x16d7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7868)));
label_16d7e4:
    // 0x16d7e4: 0xc08d8aa  jal         func_2362A8
label_16d7e8:
    if (ctx->pc == 0x16D7E8u) {
        ctx->pc = 0x16D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7E4u;
        // 0x16d7e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D7ECu;
        goto label_16d7ec;
    }
    ctx->pc = 0x16D7E4u;
    SET_GPR_U32(ctx, 31, 0x16D7ECu);
    ctx->pc = 0x16D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7E4u;
    // 0x16d7e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2362A8u;
    { ctx->pc = 0x2362a8; return; }
    ctx->pc = 0x16D7ECu;
label_16d7ec:
    // 0x16d7ec: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
label_16d7f0:
    if (ctx->pc == 0x16D7F0u) {
        ctx->pc = 0x16D7F4u;
        goto label_16d7f4;
    }
    ctx->pc = 0x16D7ECu;
    {
        const bool branch_taken_0x16d7ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d7ec) {
            ctx->pc = 0x16D818u;
            goto label_16d818;
        }
    }
    ctx->pc = 0x16D7F4u;
label_16d7f4:
    // 0x16d7f4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d7f8:
    // 0x16d7f8: 0x2405fff2  addiu       $a1, $zero, -0xE
    ctx->pc = 0x16d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
label_16d7fc:
    // 0x16d7fc: 0x8c261eb0  lw          $a2, 0x1EB0($at)
    ctx->pc = 0x16d7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d800:
    // 0x16d800: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x16d800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_16d804:
    // 0x16d804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d808:
    // 0x16d808: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x16d808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_16d80c:
    // 0x16d80c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d810:
    // 0x16d810: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
label_16d814:
    if (ctx->pc == 0x16D814u) {
        ctx->pc = 0x16D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D810u;
        // 0x16d814: 0xac251eb0  sw          $a1, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D818u;
        goto label_16d818;
    }
    ctx->pc = 0x16D810u;
    {
        const bool branch_taken_0x16d810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D810u;
        // 0x16d814: 0xac251eb0  sw          $a1, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d810) {
            ctx->pc = 0x16D8D0u;
            goto label_16d8d0;
        }
    }
    ctx->pc = 0x16D818u;
label_16d818:
    // 0x16d818: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d81c:
    // 0x16d81c: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d820:
    // 0x16d820: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x16d820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_16d824:
    // 0x16d824: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_16d828:
    if (ctx->pc == 0x16D828u) {
        ctx->pc = 0x16D82Cu;
        goto label_16d82c;
    }
    ctx->pc = 0x16D824u;
    {
        const bool branch_taken_0x16d824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d824) {
            ctx->pc = 0x16D85Cu;
            goto label_16d85c;
        }
    }
    ctx->pc = 0x16D82Cu;
label_16d82c:
    // 0x16d82c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d830:
    // 0x16d830: 0x8c251eb8  lw          $a1, 0x1EB8($at)
    ctx->pc = 0x16d830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7864)));
label_16d834:
    // 0x16d834: 0xc08d930  jal         func_2364C0
label_16d838:
    if (ctx->pc == 0x16D838u) {
        ctx->pc = 0x16D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D834u;
        // 0x16d838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D83Cu;
        goto label_16d83c;
    }
    ctx->pc = 0x16D834u;
    SET_GPR_U32(ctx, 31, 0x16D83Cu);
    ctx->pc = 0x16D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D834u;
    // 0x16d838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2364C0u;
    { ctx->pc = 0x2364c0; return; }
    ctx->pc = 0x16D83Cu;
label_16d83c:
    // 0x16d83c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_16d840:
    if (ctx->pc == 0x16D840u) {
        ctx->pc = 0x16D844u;
        goto label_16d844;
    }
    ctx->pc = 0x16D83Cu;
    {
        const bool branch_taken_0x16d83c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d83c) {
            ctx->pc = 0x16D85Cu;
            goto label_16d85c;
        }
    }
    ctx->pc = 0x16D844u;
label_16d844:
    // 0x16d844: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d848:
    // 0x16d848: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x16d848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_16d84c:
    // 0x16d84c: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d850:
    // 0x16d850: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16d854:
    // 0x16d854: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d858:
    // 0x16d858: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d858u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 3));
label_16d85c:
    // 0x16d85c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d860:
    // 0x16d860: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d864:
    // 0x16d864: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x16d864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_16d868:
    // 0x16d868: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_16d86c:
    if (ctx->pc == 0x16D86Cu) {
        ctx->pc = 0x16D870u;
        goto label_16d870;
    }
    ctx->pc = 0x16D868u;
    {
        const bool branch_taken_0x16d868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d868) {
            ctx->pc = 0x16D898u;
            goto label_16d898;
        }
    }
    ctx->pc = 0x16D870u;
label_16d870:
    // 0x16d870: 0xc08d99a  jal         func_236668
label_16d874:
    if (ctx->pc == 0x16D874u) {
        ctx->pc = 0x16D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D870u;
        // 0x16d874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D878u;
        goto label_16d878;
    }
    ctx->pc = 0x16D870u;
    SET_GPR_U32(ctx, 31, 0x16D878u);
    ctx->pc = 0x16D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D870u;
    // 0x16d874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236668u;
    { ctx->pc = 0x236668; return; }
    ctx->pc = 0x16D878u;
label_16d878:
    // 0x16d878: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_16d87c:
    if (ctx->pc == 0x16D87Cu) {
        ctx->pc = 0x16D880u;
        goto label_16d880;
    }
    ctx->pc = 0x16D878u;
    {
        const bool branch_taken_0x16d878 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d878) {
            ctx->pc = 0x16D898u;
            goto label_16d898;
        }
    }
    ctx->pc = 0x16D880u;
label_16d880:
    // 0x16d880: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d884:
    // 0x16d884: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x16d884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16d888:
    // 0x16d888: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d88c:
    // 0x16d88c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16d890:
    // 0x16d890: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d894:
    // 0x16d894: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d894u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 3));
label_16d898:
    // 0x16d898: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d89c:
    // 0x16d89c: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d8a0:
    // 0x16d8a0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x16d8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_16d8a4:
    // 0x16d8a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_16d8a8:
    if (ctx->pc == 0x16D8A8u) {
        ctx->pc = 0x16D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8A4u;
        // 0x16d8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D8ACu;
        goto label_16d8ac;
    }
    ctx->pc = 0x16D8A4u;
    {
        const bool branch_taken_0x16d8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8A4u;
        // 0x16d8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8a4) {
            ctx->pc = 0x16D8D0u;
            goto label_16d8d0;
        }
    }
    ctx->pc = 0x16D8ACu;
label_16d8ac:
    // 0x16d8ac: 0xc08d9b0  jal         func_2366C0
label_16d8b0:
    if (ctx->pc == 0x16D8B0u) {
        ctx->pc = 0x16D8B4u;
        goto label_16d8b4;
    }
    ctx->pc = 0x16D8ACu;
    SET_GPR_U32(ctx, 31, 0x16D8B4u);
    ctx->pc = 0x2366C0u;
    { ctx->pc = 0x2366c0; return; }
    ctx->pc = 0x16D8B4u;
label_16d8b4:
    // 0x16d8b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_16d8b8:
    if (ctx->pc == 0x16D8B8u) {
        ctx->pc = 0x16D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8B4u;
        // 0x16d8b8: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D8BCu;
        goto label_16d8bc;
    }
    ctx->pc = 0x16D8B4u;
    {
        const bool branch_taken_0x16d8b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8B4u;
        // 0x16d8b8: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8b4) {
            ctx->pc = 0x16D8D0u;
            goto label_16d8d0;
        }
    }
    ctx->pc = 0x16D8BCu;
label_16d8bc:
    // 0x16d8bc: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x16d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_16d8c0:
    // 0x16d8c0: 0x8c241eb0  lw          $a0, 0x1EB0($at)
    ctx->pc = 0x16d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16d8c4:
    // 0x16d8c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16d8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16d8c8:
    // 0x16d8c8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16d8cc:
    // 0x16d8cc: 0xac231eb0  sw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 3));
label_16d8d0:
    // 0x16d8d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16d8d4:
    // 0x16d8d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16d8d8:
    // 0x16d8d8: 0x3e00008  jr          $ra
label_16d8dc:
    if (ctx->pc == 0x16D8DCu) {
        ctx->pc = 0x16D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8D8u;
        // 0x16d8dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D8E0u;
        goto label_16d8e0;
    }
    ctx->pc = 0x16D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8D8u;
        // 0x16d8dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D8E0u;
label_16d8e0:
    // 0x16d8e0: 0x3e00008  jr          $ra
label_16d8e4:
    if (ctx->pc == 0x16D8E4u) {
        ctx->pc = 0x16D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8E0u;
        // 0x16d8e4: 0xaf808704  sw          $zero, -0x78FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D8E8u;
        goto label_16d8e8;
    }
    ctx->pc = 0x16D8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8E0u;
        // 0x16d8e4: 0xaf808704  sw          $zero, -0x78FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D8E8u;
label_16d8e8:
    // 0x16d8e8: 0x0  nop
    ctx->pc = 0x16d8e8u;
    // NOP
label_16d8ec:
    // 0x16d8ec: 0x0  nop
    ctx->pc = 0x16d8ecu;
    // NOP
label_16d8f0:
    // 0x16d8f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d8f4:
    // 0x16d8f4: 0x3e00008  jr          $ra
label_16d8f8:
    if (ctx->pc == 0x16D8F8u) {
        ctx->pc = 0x16D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8F4u;
        // 0x16d8f8: 0xaf838704  sw          $v1, -0x78FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D8FCu;
        goto label_16d8fc;
    }
    ctx->pc = 0x16D8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8F4u;
        // 0x16d8f8: 0xaf838704  sw          $v1, -0x78FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D8FCu;
label_16d8fc:
    // 0x16d8fc: 0x0  nop
    ctx->pc = 0x16d8fcu;
    // NOP
label_16d900:
    // 0x16d900: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x16d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16d904:
    // 0x16d904: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16d908:
    if (ctx->pc == 0x16D908u) {
        ctx->pc = 0x16D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D904u;
        // 0x16d908: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D90Cu;
        goto label_16d90c;
    }
    ctx->pc = 0x16D904u;
    {
        const bool branch_taken_0x16d904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D904u;
        // 0x16d908: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d904) {
            ctx->pc = 0x16D910u;
            goto label_16d910;
        }
    }
    ctx->pc = 0x16D90Cu;
label_16d90c:
    // 0x16d90c: 0xaf838700  sw          $v1, -0x7900($gp)
    ctx->pc = 0x16d90cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 3));
label_16d910:
    // 0x16d910: 0x3e00008  jr          $ra
label_16d914:
    if (ctx->pc == 0x16D914u) {
        ctx->pc = 0x16D918u;
        goto label_16d918;
    }
    ctx->pc = 0x16D910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D918u;
label_16d918:
    // 0x16d918: 0x0  nop
    ctx->pc = 0x16d918u;
    // NOP
label_16d91c:
    // 0x16d91c: 0x0  nop
    ctx->pc = 0x16d91cu;
    // NOP
label_16d920:
    // 0x16d920: 0x3e00008  jr          $ra
label_16d924:
    if (ctx->pc == 0x16D924u) {
        ctx->pc = 0x16D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D920u;
        // 0x16d924: 0x8f828700  lw          $v0, -0x7900($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D928u;
        goto label_16d928;
    }
    ctx->pc = 0x16D920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D920u;
        // 0x16d924: 0x8f828700  lw          $v0, -0x7900($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D928u;
label_16d928:
    // 0x16d928: 0x0  nop
    ctx->pc = 0x16d928u;
    // NOP
label_16d92c:
    // 0x16d92c: 0x0  nop
    ctx->pc = 0x16d92cu;
    // NOP
label_16d930:
    // 0x16d930: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_16d934:
    if (ctx->pc == 0x16D934u) {
        ctx->pc = 0x16D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D930u;
        // 0x16d934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D938u;
        goto label_16d938;
    }
    ctx->pc = 0x16D930u;
    {
        const bool branch_taken_0x16d930 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D930u;
        // 0x16d934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d930) {
            ctx->pc = 0x16D958u;
            goto label_16d958;
        }
    }
    ctx->pc = 0x16D938u;
label_16d938:
    // 0x16d938: 0x28810017  slti        $at, $a0, 0x17
    ctx->pc = 0x16d938u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
label_16d93c:
    // 0x16d93c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_16d940:
    if (ctx->pc == 0x16D940u) {
        ctx->pc = 0x16D944u;
        goto label_16d944;
    }
    ctx->pc = 0x16D93Cu;
    {
        const bool branch_taken_0x16d93c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d93c) {
            ctx->pc = 0x16D954u;
            goto label_16d954;
        }
    }
    ctx->pc = 0x16D944u;
label_16d944:
    // 0x16d944: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
label_16d948:
    if (ctx->pc == 0x16D948u) {
        ctx->pc = 0x16D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D944u;
        // 0x16d948: 0x28a1003b  slti        $at, $a1, 0x3B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)59) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D94Cu;
        goto label_16d94c;
    }
    ctx->pc = 0x16D944u;
    {
        const bool branch_taken_0x16d944 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D944u;
        // 0x16d948: 0x28a1003b  slti        $at, $a1, 0x3B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)59) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d944) {
            ctx->pc = 0x16D954u;
            goto label_16d954;
        }
    }
    ctx->pc = 0x16D94Cu;
label_16d94c:
    // 0x16d94c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_16d950:
    if (ctx->pc == 0x16D950u) {
        ctx->pc = 0x16D954u;
        goto label_16d954;
    }
    ctx->pc = 0x16D94Cu;
    {
        const bool branch_taken_0x16d94c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d94c) {
            ctx->pc = 0x16D960u;
            goto label_16d960;
        }
    }
    ctx->pc = 0x16D954u;
label_16d954:
    // 0x16d954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16d954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d958:
    // 0x16d958: 0x10000012  b           . + 4 + (0x12 << 2)
label_16d95c:
    if (ctx->pc == 0x16D95Cu) {
        ctx->pc = 0x16D960u;
        goto label_16d960;
    }
    ctx->pc = 0x16D958u;
    {
        const bool branch_taken_0x16d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d958) {
            ctx->pc = 0x16D9A4u;
            goto label_16d9a4;
        }
    }
    ctx->pc = 0x16D960u;
label_16d960:
    // 0x16d960: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x16d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_16d964:
    // 0x16d964: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_16d968:
    if (ctx->pc == 0x16D968u) {
        ctx->pc = 0x16D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D964u;
        // 0x16d968: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D96Cu;
        goto label_16d96c;
    }
    ctx->pc = 0x16D964u;
    {
        const bool branch_taken_0x16d964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D964u;
        // 0x16d968: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d964) {
            ctx->pc = 0x16D98Cu;
            goto label_16d98c;
        }
    }
    ctx->pc = 0x16D96Cu;
label_16d96c:
    // 0x16d96c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16d970:
    // 0x16d970: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16d970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_16d974:
    // 0x16d974: 0x24421a30  addiu       $v0, $v0, 0x1A30
    ctx->pc = 0x16d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6704));
label_16d978:
    // 0x16d978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16d97c:
    // 0x16d97c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16d97cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16d980:
    // 0x16d980: 0x2442124e  addiu       $v0, $v0, 0x124E
    ctx->pc = 0x16d980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4686));
label_16d984:
    // 0x16d984: 0x10000007  b           . + 4 + (0x7 << 2)
label_16d988:
    if (ctx->pc == 0x16D988u) {
        ctx->pc = 0x16D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D984u;
        // 0x16d988: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D98Cu;
        goto label_16d98c;
    }
    ctx->pc = 0x16D984u;
    {
        const bool branch_taken_0x16d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D984u;
        // 0x16d988: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d984) {
            ctx->pc = 0x16D9A4u;
            goto label_16d9a4;
        }
    }
    ctx->pc = 0x16D98Cu;
label_16d98c:
    // 0x16d98c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_16d990:
    // 0x16d990: 0x244219d0  addiu       $v0, $v0, 0x19D0
    ctx->pc = 0x16d990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6608));
label_16d994:
    // 0x16d994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16d998:
    // 0x16d998: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16d998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16d99c:
    // 0x16d99c: 0x2442112e  addiu       $v0, $v0, 0x112E
    ctx->pc = 0x16d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4398));
label_16d9a0:
    // 0x16d9a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_16d9a4:
    // 0x16d9a4: 0x3e00008  jr          $ra
label_16d9a8:
    if (ctx->pc == 0x16D9A8u) {
        ctx->pc = 0x16D9ACu;
        goto label_16d9ac;
    }
    ctx->pc = 0x16D9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D9ACu;
label_16d9ac:
    // 0x16d9ac: 0x0  nop
    ctx->pc = 0x16d9acu;
    // NOP
label_16d9b0:
    // 0x16d9b0: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
label_16d9b4:
    if (ctx->pc == 0x16D9B4u) {
        ctx->pc = 0x16D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9B0u;
        // 0x16d9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D9B8u;
        goto label_16d9b8;
    }
    ctx->pc = 0x16D9B0u;
    {
        const bool branch_taken_0x16d9b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9B0u;
        // 0x16d9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9b0) {
            ctx->pc = 0x16D9E0u;
            goto label_16d9e0;
        }
    }
    ctx->pc = 0x16D9B8u;
label_16d9b8:
    // 0x16d9b8: 0x28810015  slti        $at, $a0, 0x15
    ctx->pc = 0x16d9b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)21) ? 1 : 0);
label_16d9bc:
    // 0x16d9bc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_16d9c0:
    if (ctx->pc == 0x16D9C0u) {
        ctx->pc = 0x16D9C4u;
        goto label_16d9c4;
    }
    ctx->pc = 0x16D9BCu;
    {
        const bool branch_taken_0x16d9bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d9bc) {
            ctx->pc = 0x16D9DCu;
            goto label_16d9dc;
        }
    }
    ctx->pc = 0x16D9C4u;
label_16d9c4:
    // 0x16d9c4: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_16d9c8:
    if (ctx->pc == 0x16D9C8u) {
        ctx->pc = 0x16D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9C4u;
        // 0x16d9c8: 0x28a10002  slti        $at, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D9CCu;
        goto label_16d9cc;
    }
    ctx->pc = 0x16D9C4u;
    {
        const bool branch_taken_0x16d9c4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9C4u;
        // 0x16d9c8: 0x28a10002  slti        $at, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9c4) {
            ctx->pc = 0x16D9DCu;
            goto label_16d9dc;
        }
    }
    ctx->pc = 0x16D9CCu;
label_16d9cc:
    // 0x16d9cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_16d9d0:
    if (ctx->pc == 0x16D9D0u) {
        ctx->pc = 0x16D9D4u;
        goto label_16d9d4;
    }
    ctx->pc = 0x16D9CCu;
    {
        const bool branch_taken_0x16d9cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d9cc) {
            ctx->pc = 0x16D9DCu;
            goto label_16d9dc;
        }
    }
    ctx->pc = 0x16D9D4u;
label_16d9d4:
    // 0x16d9d4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_16d9d8:
    if (ctx->pc == 0x16D9D8u) {
        ctx->pc = 0x16D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9D4u;
        // 0x16d9d8: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D9DCu;
        goto label_16d9dc;
    }
    ctx->pc = 0x16D9D4u;
    {
        const bool branch_taken_0x16d9d4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x16D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9D4u;
        // 0x16d9d8: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9d4) {
            ctx->pc = 0x16D9E8u;
            goto label_16d9e8;
        }
    }
    ctx->pc = 0x16D9DCu;
label_16d9dc:
    // 0x16d9dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16d9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d9e0:
    // 0x16d9e0: 0x1000000a  b           . + 4 + (0xA << 2)
label_16d9e4:
    if (ctx->pc == 0x16D9E4u) {
        ctx->pc = 0x16D9E8u;
        goto label_16d9e8;
    }
    ctx->pc = 0x16D9E0u;
    {
        const bool branch_taken_0x16d9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d9e0) {
            ctx->pc = 0x16DA0Cu;
            goto label_16da0c;
        }
    }
    ctx->pc = 0x16D9E8u;
label_16d9e8:
    // 0x16d9e8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16d9ec:
    // 0x16d9ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16d9f0:
    // 0x16d9f0: 0x24421850  addiu       $v0, $v0, 0x1850
    ctx->pc = 0x16d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6224));
label_16d9f4:
    // 0x16d9f4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_16d9f8:
    // 0x16d9f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_16d9fc:
    // 0x16d9fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16da00:
    // 0x16da00: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16da00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16da04:
    // 0x16da04: 0x24421038  addiu       $v0, $v0, 0x1038
    ctx->pc = 0x16da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4152));
label_16da08:
    // 0x16da08: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_16da0c:
    // 0x16da0c: 0x3e00008  jr          $ra
label_16da10:
    if (ctx->pc == 0x16DA10u) {
        ctx->pc = 0x16DA14u;
        goto label_16da14;
    }
    ctx->pc = 0x16DA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DA14u;
label_16da14:
    // 0x16da14: 0x0  nop
    ctx->pc = 0x16da14u;
    // NOP
label_16da18:
    // 0x16da18: 0x0  nop
    ctx->pc = 0x16da18u;
    // NOP
label_16da1c:
    // 0x16da1c: 0x0  nop
    ctx->pc = 0x16da1cu;
    // NOP
label_16da20:
    // 0x16da20: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_16da24:
    if (ctx->pc == 0x16DA24u) {
        ctx->pc = 0x16DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA20u;
        // 0x16da24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA28u;
        goto label_16da28;
    }
    ctx->pc = 0x16DA20u;
    {
        const bool branch_taken_0x16da20 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA20u;
        // 0x16da24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da20) {
            ctx->pc = 0x16DA48u;
            goto label_16da48;
        }
    }
    ctx->pc = 0x16DA28u;
label_16da28:
    // 0x16da28: 0x28810043  slti        $at, $a0, 0x43
    ctx->pc = 0x16da28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)67) ? 1 : 0);
label_16da2c:
    // 0x16da2c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_16da30:
    if (ctx->pc == 0x16DA30u) {
        ctx->pc = 0x16DA34u;
        goto label_16da34;
    }
    ctx->pc = 0x16DA2Cu;
    {
        const bool branch_taken_0x16da2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da2c) {
            ctx->pc = 0x16DA44u;
            goto label_16da44;
        }
    }
    ctx->pc = 0x16DA34u;
label_16da34:
    // 0x16da34: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
label_16da38:
    if (ctx->pc == 0x16DA38u) {
        ctx->pc = 0x16DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA34u;
        // 0x16da38: 0x28a1001b  slti        $at, $a1, 0x1B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)27) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA3Cu;
        goto label_16da3c;
    }
    ctx->pc = 0x16DA34u;
    {
        const bool branch_taken_0x16da34 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA34u;
        // 0x16da38: 0x28a1001b  slti        $at, $a1, 0x1B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)27) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da34) {
            ctx->pc = 0x16DA44u;
            goto label_16da44;
        }
    }
    ctx->pc = 0x16DA3Cu;
label_16da3c:
    // 0x16da3c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_16da40:
    if (ctx->pc == 0x16DA40u) {
        ctx->pc = 0x16DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA3Cu;
        // 0x16da40: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA44u;
        goto label_16da44;
    }
    ctx->pc = 0x16DA3Cu;
    {
        const bool branch_taken_0x16da3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA3Cu;
        // 0x16da40: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da3c) {
            ctx->pc = 0x16DA50u;
            goto label_16da50;
        }
    }
    ctx->pc = 0x16DA44u;
label_16da44:
    // 0x16da44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16da44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16da48:
    // 0x16da48: 0x10000007  b           . + 4 + (0x7 << 2)
label_16da4c:
    if (ctx->pc == 0x16DA4Cu) {
        ctx->pc = 0x16DA50u;
        goto label_16da50;
    }
    ctx->pc = 0x16DA48u;
    {
        const bool branch_taken_0x16da48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da48) {
            ctx->pc = 0x16DA68u;
            goto label_16da68;
        }
    }
    ctx->pc = 0x16DA50u;
label_16da50:
    // 0x16da50: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16da50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_16da54:
    // 0x16da54: 0x244217c0  addiu       $v0, $v0, 0x17C0
    ctx->pc = 0x16da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6080));
label_16da58:
    // 0x16da58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16da5c:
    // 0x16da5c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16da5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16da60:
    // 0x16da60: 0x24420c3d  addiu       $v0, $v0, 0xC3D
    ctx->pc = 0x16da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3133));
label_16da64:
    // 0x16da64: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_16da68:
    // 0x16da68: 0x3e00008  jr          $ra
label_16da6c:
    if (ctx->pc == 0x16DA6Cu) {
        ctx->pc = 0x16DA70u;
        goto label_16da70;
    }
    ctx->pc = 0x16DA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DA70u;
label_16da70:
    // 0x16da70: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_16da74:
    if (ctx->pc == 0x16DA74u) {
        ctx->pc = 0x16DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA70u;
        // 0x16da74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA78u;
        goto label_16da78;
    }
    ctx->pc = 0x16DA70u;
    {
        const bool branch_taken_0x16da70 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA70u;
        // 0x16da74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da70) {
            ctx->pc = 0x16DA98u;
            goto label_16da98;
        }
    }
    ctx->pc = 0x16DA78u;
label_16da78:
    // 0x16da78: 0x28810017  slti        $at, $a0, 0x17
    ctx->pc = 0x16da78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
label_16da7c:
    // 0x16da7c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_16da80:
    if (ctx->pc == 0x16DA80u) {
        ctx->pc = 0x16DA84u;
        goto label_16da84;
    }
    ctx->pc = 0x16DA7Cu;
    {
        const bool branch_taken_0x16da7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da7c) {
            ctx->pc = 0x16DA94u;
            goto label_16da94;
        }
    }
    ctx->pc = 0x16DA84u;
label_16da84:
    // 0x16da84: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
label_16da88:
    if (ctx->pc == 0x16DA88u) {
        ctx->pc = 0x16DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA84u;
        // 0x16da88: 0x28a10023  slti        $at, $a1, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA8Cu;
        goto label_16da8c;
    }
    ctx->pc = 0x16DA84u;
    {
        const bool branch_taken_0x16da84 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA84u;
        // 0x16da88: 0x28a10023  slti        $at, $a1, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da84) {
            ctx->pc = 0x16DA94u;
            goto label_16da94;
        }
    }
    ctx->pc = 0x16DA8Cu;
label_16da8c:
    // 0x16da8c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_16da90:
    if (ctx->pc == 0x16DA90u) {
        ctx->pc = 0x16DA94u;
        goto label_16da94;
    }
    ctx->pc = 0x16DA8Cu;
    {
        const bool branch_taken_0x16da8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16da8c) {
            ctx->pc = 0x16DAA0u;
            goto label_16daa0;
        }
    }
    ctx->pc = 0x16DA94u;
label_16da94:
    // 0x16da94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16da94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16da98:
    // 0x16da98: 0x10000012  b           . + 4 + (0x12 << 2)
label_16da9c:
    if (ctx->pc == 0x16DA9Cu) {
        ctx->pc = 0x16DAA0u;
        goto label_16daa0;
    }
    ctx->pc = 0x16DA98u;
    {
        const bool branch_taken_0x16da98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da98) {
            ctx->pc = 0x16DAE4u;
            goto label_16dae4;
        }
    }
    ctx->pc = 0x16DAA0u;
label_16daa0:
    // 0x16daa0: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x16daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_16daa4:
    // 0x16daa4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_16daa8:
    if (ctx->pc == 0x16DAA8u) {
        ctx->pc = 0x16DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAA4u;
        // 0x16daa8: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAACu;
        goto label_16daac;
    }
    ctx->pc = 0x16DAA4u;
    {
        const bool branch_taken_0x16daa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAA4u;
        // 0x16daa8: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16daa4) {
            ctx->pc = 0x16DACCu;
            goto label_16dacc;
        }
    }
    ctx->pc = 0x16DAACu;
label_16daac:
    // 0x16daac: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16daacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16dab0:
    // 0x16dab0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_16dab4:
    // 0x16dab4: 0x24421a00  addiu       $v0, $v0, 0x1A00
    ctx->pc = 0x16dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6656));
label_16dab8:
    // 0x16dab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16dabc:
    // 0x16dabc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16dabcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16dac0:
    // 0x16dac0: 0x24420b46  addiu       $v0, $v0, 0xB46
    ctx->pc = 0x16dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2886));
label_16dac4:
    // 0x16dac4: 0x10000007  b           . + 4 + (0x7 << 2)
label_16dac8:
    if (ctx->pc == 0x16DAC8u) {
        ctx->pc = 0x16DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAC4u;
        // 0x16dac8: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DACCu;
        goto label_16dacc;
    }
    ctx->pc = 0x16DAC4u;
    {
        const bool branch_taken_0x16dac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAC4u;
        // 0x16dac8: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dac4) {
            ctx->pc = 0x16DAE4u;
            goto label_16dae4;
        }
    }
    ctx->pc = 0x16DACCu;
label_16dacc:
    // 0x16dacc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16daccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_16dad0:
    // 0x16dad0: 0x24421790  addiu       $v0, $v0, 0x1790
    ctx->pc = 0x16dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6032));
label_16dad4:
    // 0x16dad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16dad8:
    // 0x16dad8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16dad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16dadc:
    // 0x16dadc: 0x24420a12  addiu       $v0, $v0, 0xA12
    ctx->pc = 0x16dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2578));
label_16dae0:
    // 0x16dae0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_16dae4:
    // 0x16dae4: 0x3e00008  jr          $ra
label_16dae8:
    if (ctx->pc == 0x16DAE8u) {
        ctx->pc = 0x16DAECu;
        goto label_16daec;
    }
    ctx->pc = 0x16DAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DAECu;
label_16daec:
    // 0x16daec: 0x0  nop
    ctx->pc = 0x16daecu;
    // NOP
label_16daf0:
    // 0x16daf0: 0x480000d  bltz        $a0, . + 4 + (0xD << 2)
label_16daf4:
    if (ctx->pc == 0x16DAF4u) {
        ctx->pc = 0x16DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAF0u;
        // 0x16daf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DAF8u;
        goto label_16daf8;
    }
    ctx->pc = 0x16DAF0u;
    {
        const bool branch_taken_0x16daf0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAF0u;
        // 0x16daf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16daf0) {
            ctx->pc = 0x16DB28u;
            goto label_16db28;
        }
    }
    ctx->pc = 0x16DAF8u;
label_16daf8:
    // 0x16daf8: 0x28810017  slti        $at, $a0, 0x17
    ctx->pc = 0x16daf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
label_16dafc:
    // 0x16dafc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_16db00:
    if (ctx->pc == 0x16DB00u) {
        ctx->pc = 0x16DB04u;
        goto label_16db04;
    }
    ctx->pc = 0x16DAFCu;
    {
        const bool branch_taken_0x16dafc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dafc) {
            ctx->pc = 0x16DB24u;
            goto label_16db24;
        }
    }
    ctx->pc = 0x16DB04u;
label_16db04:
    // 0x16db04: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_16db08:
    if (ctx->pc == 0x16DB08u) {
        ctx->pc = 0x16DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB04u;
        // 0x16db08: 0x28a10007  slti        $at, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB0Cu;
        goto label_16db0c;
    }
    ctx->pc = 0x16DB04u;
    {
        const bool branch_taken_0x16db04 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB04u;
        // 0x16db08: 0x28a10007  slti        $at, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db04) {
            ctx->pc = 0x16DB24u;
            goto label_16db24;
        }
    }
    ctx->pc = 0x16DB0Cu;
label_16db0c:
    // 0x16db0c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_16db10:
    if (ctx->pc == 0x16DB10u) {
        ctx->pc = 0x16DB14u;
        goto label_16db14;
    }
    ctx->pc = 0x16DB0Cu;
    {
        const bool branch_taken_0x16db0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db0c) {
            ctx->pc = 0x16DB24u;
            goto label_16db24;
        }
    }
    ctx->pc = 0x16DB14u;
label_16db14:
    // 0x16db14: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
label_16db18:
    if (ctx->pc == 0x16DB18u) {
        ctx->pc = 0x16DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB14u;
        // 0x16db18: 0x28c10029  slti        $at, $a2, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB1Cu;
        goto label_16db1c;
    }
    ctx->pc = 0x16DB14u;
    {
        const bool branch_taken_0x16db14 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x16DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB14u;
        // 0x16db18: 0x28c10029  slti        $at, $a2, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db14) {
            ctx->pc = 0x16DB24u;
            goto label_16db24;
        }
    }
    ctx->pc = 0x16DB1Cu;
label_16db1c:
    // 0x16db1c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_16db20:
    if (ctx->pc == 0x16DB20u) {
        ctx->pc = 0x16DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB1Cu;
        // 0x16db20: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB24u;
        goto label_16db24;
    }
    ctx->pc = 0x16DB1Cu;
    {
        const bool branch_taken_0x16db1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB1Cu;
        // 0x16db20: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db1c) {
            ctx->pc = 0x16DB30u;
            goto label_16db30;
        }
    }
    ctx->pc = 0x16DB24u;
label_16db24:
    // 0x16db24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16db24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16db28:
    // 0x16db28: 0x1000000a  b           . + 4 + (0xA << 2)
label_16db2c:
    if (ctx->pc == 0x16DB2Cu) {
        ctx->pc = 0x16DB30u;
        goto label_16db30;
    }
    ctx->pc = 0x16DB28u;
    {
        const bool branch_taken_0x16db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db28) {
            ctx->pc = 0x16DB54u;
            goto label_16db54;
        }
    }
    ctx->pc = 0x16DB30u;
label_16db30:
    // 0x16db30: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16db30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16db34:
    // 0x16db34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16db34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16db38:
    // 0x16db38: 0x244215f0  addiu       $v0, $v0, 0x15F0
    ctx->pc = 0x16db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
label_16db3c:
    // 0x16db3c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_16db40:
    // 0x16db40: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x16db40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_16db44:
    // 0x16db44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16db44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16db48:
    // 0x16db48: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16db48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16db4c:
    // 0x16db4c: 0x2442016c  addiu       $v0, $v0, 0x16C
    ctx->pc = 0x16db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
label_16db50:
    // 0x16db50: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16db50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_16db54:
    // 0x16db54: 0x3e00008  jr          $ra
label_16db58:
    if (ctx->pc == 0x16DB58u) {
        ctx->pc = 0x16DB5Cu;
        goto label_16db5c;
    }
    ctx->pc = 0x16DB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DB5Cu;
label_16db5c:
    // 0x16db5c: 0x0  nop
    ctx->pc = 0x16db5cu;
    // NOP
label_16db60:
    // 0x16db60: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_16db64:
    if (ctx->pc == 0x16DB64u) {
        ctx->pc = 0x16DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB60u;
        // 0x16db64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB68u;
        goto label_16db68;
    }
    ctx->pc = 0x16DB60u;
    {
        const bool branch_taken_0x16db60 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB60u;
        // 0x16db64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db60) {
            ctx->pc = 0x16DB88u;
            goto label_16db88;
        }
    }
    ctx->pc = 0x16DB68u;
label_16db68:
    // 0x16db68: 0x28810035  slti        $at, $a0, 0x35
    ctx->pc = 0x16db68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)53) ? 1 : 0);
label_16db6c:
    // 0x16db6c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_16db70:
    if (ctx->pc == 0x16DB70u) {
        ctx->pc = 0x16DB74u;
        goto label_16db74;
    }
    ctx->pc = 0x16DB6Cu;
    {
        const bool branch_taken_0x16db6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db6c) {
            ctx->pc = 0x16DB84u;
            goto label_16db84;
        }
    }
    ctx->pc = 0x16DB74u;
label_16db74:
    // 0x16db74: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
label_16db78:
    if (ctx->pc == 0x16DB78u) {
        ctx->pc = 0x16DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB74u;
        // 0x16db78: 0x28a10007  slti        $at, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB7Cu;
        goto label_16db7c;
    }
    ctx->pc = 0x16DB74u;
    {
        const bool branch_taken_0x16db74 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB74u;
        // 0x16db78: 0x28a10007  slti        $at, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db74) {
            ctx->pc = 0x16DB84u;
            goto label_16db84;
        }
    }
    ctx->pc = 0x16DB7Cu;
label_16db7c:
    // 0x16db7c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_16db80:
    if (ctx->pc == 0x16DB80u) {
        ctx->pc = 0x16DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB7Cu;
        // 0x16db80: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DB84u;
        goto label_16db84;
    }
    ctx->pc = 0x16DB7Cu;
    {
        const bool branch_taken_0x16db7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB7Cu;
        // 0x16db80: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db7c) {
            ctx->pc = 0x16DB90u;
            goto label_16db90;
        }
    }
    ctx->pc = 0x16DB84u;
label_16db84:
    // 0x16db84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16db84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16db88:
    // 0x16db88: 0x10000006  b           . + 4 + (0x6 << 2)
label_16db8c:
    if (ctx->pc == 0x16DB8Cu) {
        ctx->pc = 0x16DB90u;
        goto label_16db90;
    }
    ctx->pc = 0x16DB88u;
    {
        const bool branch_taken_0x16db88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db88) {
            ctx->pc = 0x16DBA4u;
            goto label_16dba4;
        }
    }
    ctx->pc = 0x16DB90u;
label_16db90:
    // 0x16db90: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x16db90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_16db94:
    // 0x16db94: 0x24421580  addiu       $v0, $v0, 0x1580
    ctx->pc = 0x16db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
label_16db98:
    // 0x16db98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16db9c:
    // 0x16db9c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16db9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16dba0:
    // 0x16dba0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_16dba4:
    // 0x16dba4: 0x3e00008  jr          $ra
label_16dba8:
    if (ctx->pc == 0x16DBA8u) {
        ctx->pc = 0x16DBACu;
        goto label_16dbac;
    }
    ctx->pc = 0x16DBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DBACu;
label_16dbac:
    // 0x16dbac: 0x0  nop
    ctx->pc = 0x16dbacu;
    // NOP
label_16dbb0:
    // 0x16dbb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16dbb4:
    // 0x16dbb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16dbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16dbb8:
    // 0x16dbb8: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x16dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_16dbbc:
    // 0x16dbbc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x16dbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_16dbc0:
    // 0x16dbc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_16dbc4:
    if (ctx->pc == 0x16DBC4u) {
        ctx->pc = 0x16DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBC0u;
        // 0x16dbc4: 0x3c090028  lui         $t1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DBC8u;
        goto label_16dbc8;
    }
    ctx->pc = 0x16DBC0u;
    {
        const bool branch_taken_0x16dbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBC0u;
        // 0x16dbc4: 0x3c090028  lui         $t1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbc0) {
            ctx->pc = 0x16DBD4u;
            goto label_16dbd4;
        }
    }
    ctx->pc = 0x16DBC8u;
label_16dbc8:
    // 0x16dbc8: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x16dbc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
label_16dbcc:
    // 0x16dbcc: 0x10000002  b           . + 4 + (0x2 << 2)
label_16dbd0:
    if (ctx->pc == 0x16DBD0u) {
        ctx->pc = 0x16DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBCCu;
        // 0x16dbd0: 0x25291b90  addiu       $t1, $t1, 0x1B90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DBD4u;
        goto label_16dbd4;
    }
    ctx->pc = 0x16DBCCu;
    {
        const bool branch_taken_0x16dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBCCu;
        // 0x16dbd0: 0x25291b90  addiu       $t1, $t1, 0x1B90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbcc) {
            ctx->pc = 0x16DBD8u;
            goto label_16dbd8;
        }
    }
    ctx->pc = 0x16DBD4u;
label_16dbd4:
    // 0x16dbd4: 0x25291ab0  addiu       $t1, $t1, 0x1AB0
    ctx->pc = 0x16dbd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6832));
label_16dbd8:
    // 0x16dbd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_16dbdc:
    if (ctx->pc == 0x16DBDCu) {
        ctx->pc = 0x16DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBD8u;
        // 0x16dbdc: 0x3c0a0028  lui         $t2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DBE0u;
        goto label_16dbe0;
    }
    ctx->pc = 0x16DBD8u;
    {
        const bool branch_taken_0x16dbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBD8u;
        // 0x16dbdc: 0x3c0a0028  lui         $t2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbd8) {
            ctx->pc = 0x16DBECu;
            goto label_16dbec;
        }
    }
    ctx->pc = 0x16DBE0u;
label_16dbe0:
    // 0x16dbe0: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x16dbe0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
label_16dbe4:
    // 0x16dbe4: 0x10000002  b           . + 4 + (0x2 << 2)
label_16dbe8:
    if (ctx->pc == 0x16DBE8u) {
        ctx->pc = 0x16DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBE4u;
        // 0x16dbe8: 0x254a1a60  addiu       $t2, $t2, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DBECu;
        goto label_16dbec;
    }
    ctx->pc = 0x16DBE4u;
    {
        const bool branch_taken_0x16dbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBE4u;
        // 0x16dbe8: 0x254a1a60  addiu       $t2, $t2, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbe4) {
            ctx->pc = 0x16DBF0u;
            goto label_16dbf0;
        }
    }
    ctx->pc = 0x16DBECu;
label_16dbec:
    // 0x16dbec: 0x254a1a90  addiu       $t2, $t2, 0x1A90
    ctx->pc = 0x16dbecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6800));
label_16dbf0:
    // 0x16dbf0: 0x8f838184  lw          $v1, -0x7E7C($gp)
    ctx->pc = 0x16dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
label_16dbf4:
    // 0x16dbf4: 0x286113de  slti        $at, $v1, 0x13DE
    ctx->pc = 0x16dbf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5086) ? 1 : 0);
label_16dbf8:
    // 0x16dbf8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_16dbfc:
    if (ctx->pc == 0x16DBFCu) {
        ctx->pc = 0x16DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBF8u;
        // 0x16dbfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC00u;
        goto label_16dc00;
    }
    ctx->pc = 0x16DBF8u;
    {
        const bool branch_taken_0x16dbf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBF8u;
        // 0x16dbfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbf8) {
            ctx->pc = 0x16DC08u;
            goto label_16dc08;
        }
    }
    ctx->pc = 0x16DC00u;
label_16dc00:
    // 0x16dc00: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_16dc04:
    if (ctx->pc == 0x16DC04u) {
        ctx->pc = 0x16DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC00u;
        // 0x16dc04: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC08u;
        goto label_16dc08;
    }
    ctx->pc = 0x16DC00u;
    {
        const bool branch_taken_0x16dc00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC00u;
        // 0x16dc04: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc00) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DC08u;
label_16dc08:
    // 0x16dc08: 0x10000143  b           . + 4 + (0x143 << 2)
label_16dc0c:
    if (ctx->pc == 0x16DC0Cu) {
        ctx->pc = 0x16DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC08u;
        // 0x16dc0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC10u;
        goto label_16dc10;
    }
    ctx->pc = 0x16DC08u;
    {
        const bool branch_taken_0x16dc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC08u;
        // 0x16dc0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc08) {
            ctx->pc = 0x16E118u;
            { ctx->pc = 0x16e118; return; }
        }
    }
    ctx->pc = 0x16DC10u;
label_16dc10:
    // 0x16dc10: 0x8c22c9c4  lw          $v0, -0x363C($at)
    ctx->pc = 0x16dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953412)));
label_16dc14:
    // 0x16dc14: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_16dc18:
    if (ctx->pc == 0x16DC18u) {
        ctx->pc = 0x16DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC14u;
        // 0x16dc18: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC1Cu;
        goto label_16dc1c;
    }
    ctx->pc = 0x16DC14u;
    {
        const bool branch_taken_0x16dc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC14u;
        // 0x16dc18: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc14) {
            ctx->pc = 0x16DC48u;
            goto label_16dc48;
        }
    }
    ctx->pc = 0x16DC1Cu;
label_16dc1c:
    // 0x16dc1c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16dc20:
    // 0x16dc20: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x16dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16dc24:
    // 0x16dc24: 0x244266d0  addiu       $v0, $v0, 0x66D0
    ctx->pc = 0x16dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26320));
label_16dc28:
    // 0x16dc28: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16dc2c:
    // 0x16dc2c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16dc30:
    // 0x16dc30: 0x244266d4  addiu       $v0, $v0, 0x66D4
    ctx->pc = 0x16dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26324));
label_16dc34:
    // 0x16dc34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16dc38:
    // 0x16dc38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16dc3c:
    // 0x16dc3c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x16dc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16dc40:
    // 0x16dc40: 0x1000000b  b           . + 4 + (0xB << 2)
label_16dc44:
    if (ctx->pc == 0x16DC44u) {
        ctx->pc = 0x16DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC40u;
        // 0x16dc44: 0x8f858170  lw          $a1, -0x7E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC48u;
        goto label_16dc48;
    }
    ctx->pc = 0x16DC40u;
    {
        const bool branch_taken_0x16dc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC40u;
        // 0x16dc44: 0x8f858170  lw          $a1, -0x7E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc40) {
            ctx->pc = 0x16DC70u;
            goto label_16dc70;
        }
    }
    ctx->pc = 0x16DC48u;
label_16dc48:
    // 0x16dc48: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x16dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16dc4c:
    // 0x16dc4c: 0x2442a4b0  addiu       $v0, $v0, -0x5B50
    ctx->pc = 0x16dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943920));
label_16dc50:
    // 0x16dc50: 0x8f858174  lw          $a1, -0x7E8C($gp)
    ctx->pc = 0x16dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
label_16dc54:
    // 0x16dc54: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16dc58:
    // 0x16dc58: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x16dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_16dc5c:
    // 0x16dc5c: 0x2442a4b4  addiu       $v0, $v0, -0x5B4C
    ctx->pc = 0x16dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943924));
label_16dc60:
    // 0x16dc60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16dc64:
    // 0x16dc64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16dc68:
    // 0x16dc68: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x16dc68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16dc6c:
    // 0x16dc6c: 0x0  nop
    ctx->pc = 0x16dc6cu;
    // NOP
label_16dc70:
    // 0x16dc70: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x16dc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_16dc74:
    // 0x16dc74: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16dc78:
    // 0x16dc78: 0x8c2666c0  lw          $a2, 0x66C0($at)
    ctx->pc = 0x16dc78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26304)));
label_16dc7c:
    // 0x16dc7c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x16dc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_16dc80:
    // 0x16dc80: 0x8c2766c4  lw          $a3, 0x66C4($at)
    ctx->pc = 0x16dc80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26308)));
label_16dc84:
    // 0x16dc84: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x16dc84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_16dc88:
    // 0x16dc88: 0x1020011b  beqz        $at, . + 4 + (0x11B << 2)
label_16dc8c:
    if (ctx->pc == 0x16DC8Cu) {
        ctx->pc = 0x16DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC88u;
        // 0x16dc8c: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DC90u;
        goto label_16dc90;
    }
    ctx->pc = 0x16DC88u;
    {
        const bool branch_taken_0x16dc88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC88u;
        // 0x16dc8c: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc88) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DC90u;
label_16dc90:
    // 0x16dc90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16dc94:
    // 0x16dc94: 0x24639640  addiu       $v1, $v1, -0x69C0
    ctx->pc = 0x16dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940224));
label_16dc98:
    // 0x16dc98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16dc9c:
    // 0x16dc9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16dca0:
    // 0x16dca0: 0x400008  jr          $v0
label_16dca4:
    if (ctx->pc == 0x16DCA4u) {
        ctx->pc = 0x16DCA8u;
        goto label_16dca8;
    }
    ctx->pc = 0x16DCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DCA8u: goto label_16dca8;
            case 0x16DD18u: goto label_16dd18;
            case 0x16DD40u: goto label_16dd40;
            case 0x16DD64u: goto label_16dd64;
            case 0x16DE38u: goto label_16de38;
            case 0x16DE58u: goto label_16de58;
            case 0x16DF2Cu: goto label_16df2c;
            case 0x16DFF4u: { ctx->pc = 0x16dff4; return; }
            case 0x16E0B0u: { ctx->pc = 0x16e0b0; return; }
            case 0x16E0F8u: { ctx->pc = 0x16e0f8; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DCA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16DCA8u;
label_16dca8:
    // 0x16dca8: 0xc08d72c  jal         func_235CB0
label_16dcac:
    if (ctx->pc == 0x16DCACu) {
        ctx->pc = 0x16DCB0u;
        goto label_16dcb0;
    }
    ctx->pc = 0x16DCA8u;
    SET_GPR_U32(ctx, 31, 0x16DCB0u);
    ctx->pc = 0x235CB0u;
    { ctx->pc = 0x235cb0; return; }
    ctx->pc = 0x16DCB0u;
label_16dcb0:
    // 0x16dcb0: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_16dcb4:
    if (ctx->pc == 0x16DCB4u) {
        ctx->pc = 0x16DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCB0u;
        // 0x16dcb4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DCB8u;
        goto label_16dcb8;
    }
    ctx->pc = 0x16DCB0u;
    {
        const bool branch_taken_0x16dcb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCB0u;
        // 0x16dcb4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcb0) {
            ctx->pc = 0x16DCD0u;
            goto label_16dcd0;
        }
    }
    ctx->pc = 0x16DCB8u;
label_16dcb8:
    // 0x16dcb8: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x16dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16dcbc:
    // 0x16dcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16dcc0:
    // 0x16dcc0: 0xaf828700  sw          $v0, -0x7900($gp)
    ctx->pc = 0x16dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
label_16dcc4:
    // 0x16dcc4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x16dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16dcc8:
    // 0x16dcc8: 0x1000010b  b           . + 4 + (0x10B << 2)
label_16dccc:
    if (ctx->pc == 0x16DCCCu) {
        ctx->pc = 0x16DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCC8u;
        // 0x16dccc: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DCD0u;
        goto label_16dcd0;
    }
    ctx->pc = 0x16DCC8u;
    {
        const bool branch_taken_0x16dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCC8u;
        // 0x16dccc: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcc8) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DCD0u;
label_16dcd0:
    // 0x16dcd0: 0x10430109  beq         $v0, $v1, . + 4 + (0x109 << 2)
label_16dcd4:
    if (ctx->pc == 0x16DCD4u) {
        ctx->pc = 0x16DCD8u;
        goto label_16dcd8;
    }
    ctx->pc = 0x16DCD0u;
    {
        const bool branch_taken_0x16dcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16dcd0) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DCD8u;
label_16dcd8:
    // 0x16dcd8: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16dcdc:
    // 0x16dcdc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16dce0:
    if (ctx->pc == 0x16DCE0u) {
        ctx->pc = 0x16DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCDCu;
        // 0x16dce0: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DCE4u;
        goto label_16dce4;
    }
    ctx->pc = 0x16DCDCu;
    {
        const bool branch_taken_0x16dcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCDCu;
        // 0x16dce0: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcdc) {
            ctx->pc = 0x16DD0Cu;
            goto label_16dd0c;
        }
    }
    ctx->pc = 0x16DCE4u;
label_16dce4:
    // 0x16dce4: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16dce8:
    // 0x16dce8: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16dcec:
    // 0x16dcec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16dcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16dcf0:
    // 0x16dcf0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16dcf4:
    // 0x16dcf4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16dcf8:
    // 0x16dcf8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16dcfc:
    // 0x16dcfc: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16dd00:
    // 0x16dd00: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16dd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16dd04:
    // 0x16dd04: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16dd08:
    // 0x16dd08: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dd08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16dd0c:
    // 0x16dd0c: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_16dd10:
    // 0x16dd10: 0x10000100  b           . + 4 + (0x100 << 2)
label_16dd14:
    if (ctx->pc == 0x16DD14u) {
        ctx->pc = 0x16DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD10u;
        // 0x16dd14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD18u;
        goto label_16dd18;
    }
    ctx->pc = 0x16DD10u;
    {
        const bool branch_taken_0x16dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD10u;
        // 0x16dd14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd10) {
            ctx->pc = 0x16E114u;
            { ctx->pc = 0x16e114; return; }
        }
    }
    ctx->pc = 0x16DD18u;
label_16dd18:
    // 0x16dd18: 0xc05aef0  jal         func_16BBC0
label_16dd1c:
    if (ctx->pc == 0x16DD1Cu) {
        ctx->pc = 0x16DD20u;
        goto label_16dd20;
    }
    ctx->pc = 0x16DD18u;
    SET_GPR_U32(ctx, 31, 0x16DD20u);
    ctx->pc = 0x16BBC0u;
    { ctx->pc = 0x16bbc0; return; }
    ctx->pc = 0x16DD20u;
label_16dd20:
    // 0x16dd20: 0x30430009  andi        $v1, $v0, 0x9
    ctx->pc = 0x16dd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
label_16dd24:
    // 0x16dd24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16dd28:
    // 0x16dd28: 0x106200f3  beq         $v1, $v0, . + 4 + (0xF3 << 2)
label_16dd2c:
    if (ctx->pc == 0x16DD2Cu) {
        ctx->pc = 0x16DD30u;
        goto label_16dd30;
    }
    ctx->pc = 0x16DD28u;
    {
        const bool branch_taken_0x16dd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16dd28) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DD30u;
label_16dd30:
    // 0x16dd30: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16dd34:
    // 0x16dd34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16dd38:
    // 0x16dd38: 0x100000ef  b           . + 4 + (0xEF << 2)
label_16dd3c:
    if (ctx->pc == 0x16DD3Cu) {
        ctx->pc = 0x16DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD38u;
        // 0x16dd3c: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD40u;
        goto label_16dd40;
    }
    ctx->pc = 0x16DD38u;
    {
        const bool branch_taken_0x16dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD38u;
        // 0x16dd3c: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd38) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DD40u;
label_16dd40:
    // 0x16dd40: 0x712c2  srl         $v0, $a3, 11
    ctx->pc = 0x16dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
label_16dd44:
    // 0x16dd44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16dd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dd48:
    // 0x16dd48: 0x8d2700d0  lw          $a3, 0xD0($t1)
    ctx->pc = 0x16dd48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 208)));
label_16dd4c:
    // 0x16dd4c: 0xc08d69a  jal         func_235A68
label_16dd50:
    if (ctx->pc == 0x16DD50u) {
        ctx->pc = 0x16DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD4Cu;
        // 0x16dd50: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD54u;
        goto label_16dd54;
    }
    ctx->pc = 0x16DD4Cu;
    SET_GPR_U32(ctx, 31, 0x16DD54u);
    ctx->pc = 0x16DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD4Cu;
    // 0x16dd50: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235A68u;
    { ctx->pc = 0x235a68; return; }
    ctx->pc = 0x16DD54u;
label_16dd54:
    // 0x16dd54: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16dd58:
    // 0x16dd58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16dd5c:
    // 0x16dd5c: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_16dd60:
    if (ctx->pc == 0x16DD60u) {
        ctx->pc = 0x16DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD5Cu;
        // 0x16dd60: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD64u;
        goto label_16dd64;
    }
    ctx->pc = 0x16DD5Cu;
    {
        const bool branch_taken_0x16dd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD5Cu;
        // 0x16dd60: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd5c) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DD64u;
label_16dd64:
    // 0x16dd64: 0xc08d72c  jal         func_235CB0
label_16dd68:
    if (ctx->pc == 0x16DD68u) {
        ctx->pc = 0x16DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD64u;
        // 0x16dd68: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD6Cu;
        goto label_16dd6c;
    }
    ctx->pc = 0x16DD64u;
    SET_GPR_U32(ctx, 31, 0x16DD6Cu);
    ctx->pc = 0x16DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD64u;
    // 0x16dd68: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CB0u;
    { ctx->pc = 0x235cb0; return; }
    ctx->pc = 0x16DD6Cu;
label_16dd6c:
    // 0x16dd6c: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
label_16dd70:
    if (ctx->pc == 0x16DD70u) {
        ctx->pc = 0x16DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD6Cu;
        // 0x16dd70: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD74u;
        goto label_16dd74;
    }
    ctx->pc = 0x16DD6Cu;
    {
        const bool branch_taken_0x16dd6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD6Cu;
        // 0x16dd70: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd6c) {
            ctx->pc = 0x16DDD4u;
            goto label_16ddd4;
        }
    }
    ctx->pc = 0x16DD74u;
label_16dd74:
    // 0x16dd74: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16dd78:
    // 0x16dd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16dd7c:
    // 0x16dd7c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_16dd80:
    if (ctx->pc == 0x16DD80u) {
        ctx->pc = 0x16DD84u;
        goto label_16dd84;
    }
    ctx->pc = 0x16DD7Cu;
    {
        const bool branch_taken_0x16dd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16dd7c) {
            ctx->pc = 0x16DD94u;
            goto label_16dd94;
        }
    }
    ctx->pc = 0x16DD84u;
label_16dd84:
    // 0x16dd84: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16dd88:
    // 0x16dd88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16dd8c:
    // 0x16dd8c: 0x100000da  b           . + 4 + (0xDA << 2)
label_16dd90:
    if (ctx->pc == 0x16DD90u) {
        ctx->pc = 0x16DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD8Cu;
        // 0x16dd90: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD94u;
        goto label_16dd94;
    }
    ctx->pc = 0x16DD8Cu;
    {
        const bool branch_taken_0x16dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD8Cu;
        // 0x16dd90: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd8c) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DD94u;
label_16dd94:
    // 0x16dd94: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16dd98:
    // 0x16dd98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16dd9c:
    if (ctx->pc == 0x16DD9Cu) {
        ctx->pc = 0x16DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD98u;
        // 0x16dd9c: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DDA0u;
        goto label_16dda0;
    }
    ctx->pc = 0x16DD98u;
    {
        const bool branch_taken_0x16dd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD98u;
        // 0x16dd9c: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd98) {
            ctx->pc = 0x16DDC8u;
            goto label_16ddc8;
        }
    }
    ctx->pc = 0x16DDA0u;
label_16dda0:
    // 0x16dda0: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16dda4:
    // 0x16dda4: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16dda8:
    // 0x16dda8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16dda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16ddac:
    // 0x16ddac: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ddacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16ddb0:
    // 0x16ddb0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16ddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16ddb4:
    // 0x16ddb4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ddb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16ddb8:
    // 0x16ddb8: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16ddbc:
    // 0x16ddbc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16ddbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16ddc0:
    // 0x16ddc0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16ddc4:
    // 0x16ddc4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16ddc8:
    // 0x16ddc8: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_16ddcc:
    // 0x16ddcc: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_16ddd0:
    if (ctx->pc == 0x16DDD0u) {
        ctx->pc = 0x16DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDCCu;
        // 0x16ddd0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DDD4u;
        goto label_16ddd4;
    }
    ctx->pc = 0x16DDCCu;
    {
        const bool branch_taken_0x16ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDCCu;
        // 0x16ddd0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddcc) {
            ctx->pc = 0x16E114u;
            { ctx->pc = 0x16e114; return; }
        }
    }
    ctx->pc = 0x16DDD4u;
label_16ddd4:
    // 0x16ddd4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_16ddd8:
    if (ctx->pc == 0x16DDD8u) {
        ctx->pc = 0x16DDDCu;
        goto label_16dddc;
    }
    ctx->pc = 0x16DDD4u;
    {
        const bool branch_taken_0x16ddd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ddd4) {
            ctx->pc = 0x16DDECu;
            goto label_16ddec;
        }
    }
    ctx->pc = 0x16DDDCu;
label_16dddc:
    // 0x16dddc: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16dde0:
    // 0x16dde0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16dde4:
    // 0x16dde4: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_16dde8:
    if (ctx->pc == 0x16DDE8u) {
        ctx->pc = 0x16DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDE4u;
        // 0x16dde8: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DDECu;
        goto label_16ddec;
    }
    ctx->pc = 0x16DDE4u;
    {
        const bool branch_taken_0x16dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDE4u;
        // 0x16dde8: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dde4) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DDECu;
label_16ddec:
    // 0x16ddec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ddf0:
    // 0x16ddf0: 0x104300c1  beq         $v0, $v1, . + 4 + (0xC1 << 2)
label_16ddf4:
    if (ctx->pc == 0x16DDF4u) {
        ctx->pc = 0x16DDF8u;
        goto label_16ddf8;
    }
    ctx->pc = 0x16DDF0u;
    {
        const bool branch_taken_0x16ddf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ddf0) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DDF8u;
label_16ddf8:
    // 0x16ddf8: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16ddfc:
    // 0x16ddfc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16de00:
    if (ctx->pc == 0x16DE00u) {
        ctx->pc = 0x16DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDFCu;
        // 0x16de00: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE04u;
        goto label_16de04;
    }
    ctx->pc = 0x16DDFCu;
    {
        const bool branch_taken_0x16ddfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDFCu;
        // 0x16de00: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddfc) {
            ctx->pc = 0x16DE2Cu;
            goto label_16de2c;
        }
    }
    ctx->pc = 0x16DE04u;
label_16de04:
    // 0x16de04: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16de08:
    // 0x16de08: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16de08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16de0c:
    // 0x16de0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16de0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16de10:
    // 0x16de10: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16de10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16de14:
    // 0x16de14: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16de14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16de18:
    // 0x16de18: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16de18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16de1c:
    // 0x16de1c: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16de20:
    // 0x16de20: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16de20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16de24:
    // 0x16de24: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16de24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16de28:
    // 0x16de28: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16de28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16de2c:
    // 0x16de2c: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_16de30:
    // 0x16de30: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_16de34:
    if (ctx->pc == 0x16DE34u) {
        ctx->pc = 0x16DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE30u;
        // 0x16de34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE38u;
        goto label_16de38;
    }
    ctx->pc = 0x16DE30u;
    {
        const bool branch_taken_0x16de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE30u;
        // 0x16de34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de30) {
            ctx->pc = 0x16E114u;
            { ctx->pc = 0x16e114; return; }
        }
    }
    ctx->pc = 0x16DE38u;
label_16de38:
    // 0x16de38: 0x8d2700d4  lw          $a3, 0xD4($t1)
    ctx->pc = 0x16de38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
label_16de3c:
    // 0x16de3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16de3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16de40:
    // 0x16de40: 0xc08d6d0  jal         func_235B40
label_16de44:
    if (ctx->pc == 0x16DE44u) {
        ctx->pc = 0x16DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE40u;
        // 0x16de44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE48u;
        goto label_16de48;
    }
    ctx->pc = 0x16DE40u;
    SET_GPR_U32(ctx, 31, 0x16DE48u);
    ctx->pc = 0x16DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE40u;
    // 0x16de44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B40u;
    { ctx->pc = 0x235b40; return; }
    ctx->pc = 0x16DE48u;
label_16de48:
    // 0x16de48: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16de48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16de4c:
    // 0x16de4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16de50:
    // 0x16de50: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_16de54:
    if (ctx->pc == 0x16DE54u) {
        ctx->pc = 0x16DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE50u;
        // 0x16de54: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE58u;
        goto label_16de58;
    }
    ctx->pc = 0x16DE50u;
    {
        const bool branch_taken_0x16de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE50u;
        // 0x16de54: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de50) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DE58u;
label_16de58:
    // 0x16de58: 0xc08d72c  jal         func_235CB0
label_16de5c:
    if (ctx->pc == 0x16DE5Cu) {
        ctx->pc = 0x16DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE58u;
        // 0x16de5c: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE60u;
        goto label_16de60;
    }
    ctx->pc = 0x16DE58u;
    SET_GPR_U32(ctx, 31, 0x16DE60u);
    ctx->pc = 0x16DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE58u;
    // 0x16de5c: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CB0u;
    { ctx->pc = 0x235cb0; return; }
    ctx->pc = 0x16DE60u;
label_16de60:
    // 0x16de60: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
label_16de64:
    if (ctx->pc == 0x16DE64u) {
        ctx->pc = 0x16DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE60u;
        // 0x16de64: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE68u;
        goto label_16de68;
    }
    ctx->pc = 0x16DE60u;
    {
        const bool branch_taken_0x16de60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE60u;
        // 0x16de64: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de60) {
            ctx->pc = 0x16DEC8u;
            goto label_16dec8;
        }
    }
    ctx->pc = 0x16DE68u;
label_16de68:
    // 0x16de68: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16de6c:
    // 0x16de6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16de70:
    // 0x16de70: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_16de74:
    if (ctx->pc == 0x16DE74u) {
        ctx->pc = 0x16DE78u;
        goto label_16de78;
    }
    ctx->pc = 0x16DE70u;
    {
        const bool branch_taken_0x16de70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16de70) {
            ctx->pc = 0x16DE88u;
            goto label_16de88;
        }
    }
    ctx->pc = 0x16DE78u;
label_16de78:
    // 0x16de78: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16de7c:
    // 0x16de7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_16de80:
    // 0x16de80: 0x1000009d  b           . + 4 + (0x9D << 2)
label_16de84:
    if (ctx->pc == 0x16DE84u) {
        ctx->pc = 0x16DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE80u;
        // 0x16de84: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE88u;
        goto label_16de88;
    }
    ctx->pc = 0x16DE80u;
    {
        const bool branch_taken_0x16de80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE80u;
        // 0x16de84: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de80) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DE88u;
label_16de88:
    // 0x16de88: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16de8c:
    // 0x16de8c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16de90:
    if (ctx->pc == 0x16DE90u) {
        ctx->pc = 0x16DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE8Cu;
        // 0x16de90: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DE94u;
        goto label_16de94;
    }
    ctx->pc = 0x16DE8Cu;
    {
        const bool branch_taken_0x16de8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE8Cu;
        // 0x16de90: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de8c) {
            ctx->pc = 0x16DEBCu;
            goto label_16debc;
        }
    }
    ctx->pc = 0x16DE94u;
label_16de94:
    // 0x16de94: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16de98:
    // 0x16de98: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16de98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16de9c:
    // 0x16de9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16de9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16dea0:
    // 0x16dea0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16dea4:
    // 0x16dea4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16dea8:
    // 0x16dea8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16deac:
    // 0x16deac: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16deb0:
    // 0x16deb0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16deb4:
    // 0x16deb4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16deb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16deb8:
    // 0x16deb8: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16debc:
    // 0x16debc: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16debcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_16dec0:
    // 0x16dec0: 0x10000094  b           . + 4 + (0x94 << 2)
label_16dec4:
    if (ctx->pc == 0x16DEC4u) {
        ctx->pc = 0x16DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEC0u;
        // 0x16dec4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEC8u;
        goto label_16dec8;
    }
    ctx->pc = 0x16DEC0u;
    {
        const bool branch_taken_0x16dec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEC0u;
        // 0x16dec4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dec0) {
            ctx->pc = 0x16E114u;
            { ctx->pc = 0x16e114; return; }
        }
    }
    ctx->pc = 0x16DEC8u;
label_16dec8:
    // 0x16dec8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_16decc:
    if (ctx->pc == 0x16DECCu) {
        ctx->pc = 0x16DED0u;
        goto label_16ded0;
    }
    ctx->pc = 0x16DEC8u;
    {
        const bool branch_taken_0x16dec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16dec8) {
            ctx->pc = 0x16DEE0u;
            goto label_16dee0;
        }
    }
    ctx->pc = 0x16DED0u;
label_16ded0:
    // 0x16ded0: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
label_16ded4:
    // 0x16ded4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16ded8:
    // 0x16ded8: 0x10000087  b           . + 4 + (0x87 << 2)
label_16dedc:
    if (ctx->pc == 0x16DEDCu) {
        ctx->pc = 0x16DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DED8u;
        // 0x16dedc: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEE0u;
        goto label_16dee0;
    }
    ctx->pc = 0x16DED8u;
    {
        const bool branch_taken_0x16ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DED8u;
        // 0x16dedc: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ded8) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DEE0u;
label_16dee0:
    // 0x16dee0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16dee4:
    // 0x16dee4: 0x10430084  beq         $v0, $v1, . + 4 + (0x84 << 2)
label_16dee8:
    if (ctx->pc == 0x16DEE8u) {
        ctx->pc = 0x16DEECu;
        goto label_16deec;
    }
    ctx->pc = 0x16DEE4u;
    {
        const bool branch_taken_0x16dee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16dee4) {
            ctx->pc = 0x16E0F8u;
            { ctx->pc = 0x16e0f8; return; }
        }
    }
    ctx->pc = 0x16DEECu;
label_16deec:
    // 0x16deec: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16deecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16def0:
    // 0x16def0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16def4:
    if (ctx->pc == 0x16DEF4u) {
        ctx->pc = 0x16DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEF0u;
        // 0x16def4: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DEF8u;
        goto label_16def8;
    }
    ctx->pc = 0x16DEF0u;
    {
        const bool branch_taken_0x16def0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEF0u;
        // 0x16def4: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16def0) {
            ctx->pc = 0x16DF20u;
            goto label_16df20;
        }
    }
    ctx->pc = 0x16DEF8u;
label_16def8:
    // 0x16def8: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16defc:
    // 0x16defc: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16defcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16df00:
    // 0x16df00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16df04:
    // 0x16df04: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16df08:
    // 0x16df08: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16df0c:
    // 0x16df0c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16df10:
    // 0x16df10: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16df14:
    // 0x16df14: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16df18:
    // 0x16df18: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16df1c:
    // 0x16df1c: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16df20:
    // 0x16df20: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16df20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_16df24:
    // 0x16df24: 0x1000007b  b           . + 4 + (0x7B << 2)
label_16df28:
    if (ctx->pc == 0x16DF28u) {
        ctx->pc = 0x16DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF24u;
        // 0x16df28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF2Cu;
        goto label_16df2c;
    }
    ctx->pc = 0x16DF24u;
    {
        const bool branch_taken_0x16df24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF24u;
        // 0x16df28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df24) {
            ctx->pc = 0x16E114u;
            { ctx->pc = 0x16e114; return; }
        }
    }
    ctx->pc = 0x16DF2Cu;
label_16df2c:
    // 0x16df2c: 0x8d2600d4  lw          $a2, 0xD4($t1)
    ctx->pc = 0x16df2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
label_16df30:
    // 0x16df30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16df34:
    // 0x16df34: 0x8d2700d0  lw          $a3, 0xD0($t1)
    ctx->pc = 0x16df34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 208)));
label_16df38:
    // 0x16df38: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16df38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16df3c:
    // 0x16df3c: 0x914a0014  lbu         $t2, 0x14($t2)
    ctx->pc = 0x16df3cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 20)));
label_16df40:
    // 0x16df40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16df40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16df44:
    // 0x16df44: 0xc08d290  jal         func_234A40
label_16df48:
    if (ctx->pc == 0x16DF48u) {
        ctx->pc = 0x16DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF44u;
        // 0x16df48: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF4Cu;
        goto label_16df4c;
    }
    ctx->pc = 0x16DF44u;
    SET_GPR_U32(ctx, 31, 0x16DF4Cu);
    ctx->pc = 0x16DF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF44u;
    // 0x16df48: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234A40u;
    { ctx->pc = 0x234a40; return; }
    ctx->pc = 0x16DF4Cu;
label_16df4c:
    // 0x16df4c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_16df50:
    if (ctx->pc == 0x16DF50u) {
        ctx->pc = 0x16DF54u;
        goto label_16df54;
    }
    ctx->pc = 0x16DF4Cu;
    {
        const bool branch_taken_0x16df4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16df4c) {
            ctx->pc = 0x16DF94u;
            goto label_16df94;
        }
    }
    ctx->pc = 0x16DF54u;
label_16df54:
    // 0x16df54: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16df54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16df58:
    // 0x16df58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16df5c:
    if (ctx->pc == 0x16DF5Cu) {
        ctx->pc = 0x16DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF58u;
        // 0x16df5c: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF60u;
        goto label_16df60;
    }
    ctx->pc = 0x16DF58u;
    {
        const bool branch_taken_0x16df58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF58u;
        // 0x16df5c: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df58) {
            ctx->pc = 0x16DF88u;
            goto label_16df88;
        }
    }
    ctx->pc = 0x16DF60u;
label_16df60:
    // 0x16df60: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16df60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_16df64:
    // 0x16df64: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16df64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16df68:
    // 0x16df68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16df68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_16df6c:
    // 0x16df6c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16df70:
    // 0x16df70: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16df74:
    // 0x16df74: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16df78:
    // 0x16df78: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
label_16df7c:
    // 0x16df7c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16df7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_16df80:
    // 0x16df80: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16df84:
    // 0x16df84: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 2));
label_16df88:
    // 0x16df88: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16df88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
label_16df8c:
    // 0x16df8c: 0x10000061  b           . + 4 + (0x61 << 2)
label_16df90:
    if (ctx->pc == 0x16DF90u) {
        ctx->pc = 0x16DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF8Cu;
        // 0x16df90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DF94u;
        goto label_16df94;
    }
    ctx->pc = 0x16DF8Cu;
    {
        const bool branch_taken_0x16df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF8Cu;
        // 0x16df90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df8c) {
            ctx->pc = 0x16E114u;
            { ctx->pc = 0x16e114; return; }
        }
    }
    ctx->pc = 0x16DF94u;
label_16df94:
    // 0x16df94: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16df94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16df98:
    // 0x16df98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16df98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16df9c:
    // 0x16df9c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16dfa0u;
    return;
}
