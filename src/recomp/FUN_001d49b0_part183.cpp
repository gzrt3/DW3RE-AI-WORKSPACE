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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part183(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22d790u: goto label_22d790;
        case 0x22d794u: goto label_22d794;
        case 0x22d798u: goto label_22d798;
        case 0x22d79cu: goto label_22d79c;
        case 0x22d7a0u: goto label_22d7a0;
        case 0x22d7a4u: goto label_22d7a4;
        case 0x22d7a8u: goto label_22d7a8;
        case 0x22d7acu: goto label_22d7ac;
        case 0x22d7b0u: goto label_22d7b0;
        case 0x22d7b4u: goto label_22d7b4;
        case 0x22d7b8u: goto label_22d7b8;
        case 0x22d7bcu: goto label_22d7bc;
        case 0x22d7c0u: goto label_22d7c0;
        case 0x22d7c4u: goto label_22d7c4;
        case 0x22d7c8u: goto label_22d7c8;
        case 0x22d7ccu: goto label_22d7cc;
        case 0x22d7d0u: goto label_22d7d0;
        case 0x22d7d4u: goto label_22d7d4;
        case 0x22d7d8u: goto label_22d7d8;
        case 0x22d7dcu: goto label_22d7dc;
        case 0x22d7e0u: goto label_22d7e0;
        case 0x22d7e4u: goto label_22d7e4;
        case 0x22d7e8u: goto label_22d7e8;
        case 0x22d7ecu: goto label_22d7ec;
        case 0x22d7f0u: goto label_22d7f0;
        case 0x22d7f4u: goto label_22d7f4;
        case 0x22d7f8u: goto label_22d7f8;
        case 0x22d7fcu: goto label_22d7fc;
        case 0x22d800u: goto label_22d800;
        case 0x22d804u: goto label_22d804;
        case 0x22d808u: goto label_22d808;
        case 0x22d80cu: goto label_22d80c;
        case 0x22d810u: goto label_22d810;
        case 0x22d814u: goto label_22d814;
        case 0x22d818u: goto label_22d818;
        case 0x22d81cu: goto label_22d81c;
        case 0x22d820u: goto label_22d820;
        case 0x22d824u: goto label_22d824;
        case 0x22d828u: goto label_22d828;
        case 0x22d82cu: goto label_22d82c;
        case 0x22d830u: goto label_22d830;
        case 0x22d834u: goto label_22d834;
        case 0x22d838u: goto label_22d838;
        case 0x22d83cu: goto label_22d83c;
        case 0x22d840u: goto label_22d840;
        case 0x22d844u: goto label_22d844;
        case 0x22d848u: goto label_22d848;
        case 0x22d84cu: goto label_22d84c;
        case 0x22d850u: goto label_22d850;
        case 0x22d854u: goto label_22d854;
        case 0x22d858u: goto label_22d858;
        case 0x22d85cu: goto label_22d85c;
        case 0x22d860u: goto label_22d860;
        case 0x22d864u: goto label_22d864;
        case 0x22d868u: goto label_22d868;
        case 0x22d86cu: goto label_22d86c;
        case 0x22d870u: goto label_22d870;
        case 0x22d874u: goto label_22d874;
        case 0x22d878u: goto label_22d878;
        case 0x22d87cu: goto label_22d87c;
        case 0x22d880u: goto label_22d880;
        case 0x22d884u: goto label_22d884;
        case 0x22d888u: goto label_22d888;
        case 0x22d88cu: goto label_22d88c;
        case 0x22d890u: goto label_22d890;
        case 0x22d894u: goto label_22d894;
        case 0x22d898u: goto label_22d898;
        case 0x22d89cu: goto label_22d89c;
        case 0x22d8a0u: goto label_22d8a0;
        case 0x22d8a4u: goto label_22d8a4;
        case 0x22d8a8u: goto label_22d8a8;
        case 0x22d8acu: goto label_22d8ac;
        case 0x22d8b0u: goto label_22d8b0;
        case 0x22d8b4u: goto label_22d8b4;
        case 0x22d8b8u: goto label_22d8b8;
        case 0x22d8bcu: goto label_22d8bc;
        case 0x22d8c0u: goto label_22d8c0;
        case 0x22d8c4u: goto label_22d8c4;
        case 0x22d8c8u: goto label_22d8c8;
        case 0x22d8ccu: goto label_22d8cc;
        case 0x22d8d0u: goto label_22d8d0;
        case 0x22d8d4u: goto label_22d8d4;
        case 0x22d8d8u: goto label_22d8d8;
        case 0x22d8dcu: goto label_22d8dc;
        case 0x22d8e0u: goto label_22d8e0;
        case 0x22d8e4u: goto label_22d8e4;
        case 0x22d8e8u: goto label_22d8e8;
        case 0x22d8ecu: goto label_22d8ec;
        case 0x22d8f0u: goto label_22d8f0;
        case 0x22d8f4u: goto label_22d8f4;
        case 0x22d8f8u: goto label_22d8f8;
        case 0x22d8fcu: goto label_22d8fc;
        case 0x22d900u: goto label_22d900;
        case 0x22d904u: goto label_22d904;
        case 0x22d908u: goto label_22d908;
        case 0x22d90cu: goto label_22d90c;
        case 0x22d910u: goto label_22d910;
        case 0x22d914u: goto label_22d914;
        case 0x22d918u: goto label_22d918;
        case 0x22d91cu: goto label_22d91c;
        case 0x22d920u: goto label_22d920;
        case 0x22d924u: goto label_22d924;
        case 0x22d928u: goto label_22d928;
        case 0x22d92cu: goto label_22d92c;
        case 0x22d930u: goto label_22d930;
        case 0x22d934u: goto label_22d934;
        case 0x22d938u: goto label_22d938;
        case 0x22d93cu: goto label_22d93c;
        case 0x22d940u: goto label_22d940;
        case 0x22d944u: goto label_22d944;
        case 0x22d948u: goto label_22d948;
        case 0x22d94cu: goto label_22d94c;
        case 0x22d950u: goto label_22d950;
        case 0x22d954u: goto label_22d954;
        case 0x22d958u: goto label_22d958;
        case 0x22d95cu: goto label_22d95c;
        case 0x22d960u: goto label_22d960;
        case 0x22d964u: goto label_22d964;
        case 0x22d968u: goto label_22d968;
        case 0x22d96cu: goto label_22d96c;
        case 0x22d970u: goto label_22d970;
        case 0x22d974u: goto label_22d974;
        case 0x22d978u: goto label_22d978;
        case 0x22d97cu: goto label_22d97c;
        case 0x22d980u: goto label_22d980;
        case 0x22d984u: goto label_22d984;
        case 0x22d988u: goto label_22d988;
        case 0x22d98cu: goto label_22d98c;
        case 0x22d990u: goto label_22d990;
        case 0x22d994u: goto label_22d994;
        case 0x22d998u: goto label_22d998;
        case 0x22d99cu: goto label_22d99c;
        case 0x22d9a0u: goto label_22d9a0;
        case 0x22d9a4u: goto label_22d9a4;
        case 0x22d9a8u: goto label_22d9a8;
        case 0x22d9acu: goto label_22d9ac;
        case 0x22d9b0u: goto label_22d9b0;
        case 0x22d9b4u: goto label_22d9b4;
        case 0x22d9b8u: goto label_22d9b8;
        case 0x22d9bcu: goto label_22d9bc;
        case 0x22d9c0u: goto label_22d9c0;
        case 0x22d9c4u: goto label_22d9c4;
        case 0x22d9c8u: goto label_22d9c8;
        case 0x22d9ccu: goto label_22d9cc;
        case 0x22d9d0u: goto label_22d9d0;
        case 0x22d9d4u: goto label_22d9d4;
        case 0x22d9d8u: goto label_22d9d8;
        case 0x22d9dcu: goto label_22d9dc;
        case 0x22d9e0u: goto label_22d9e0;
        case 0x22d9e4u: goto label_22d9e4;
        case 0x22d9e8u: goto label_22d9e8;
        case 0x22d9ecu: goto label_22d9ec;
        case 0x22d9f0u: goto label_22d9f0;
        case 0x22d9f4u: goto label_22d9f4;
        case 0x22d9f8u: goto label_22d9f8;
        case 0x22d9fcu: goto label_22d9fc;
        case 0x22da00u: goto label_22da00;
        case 0x22da04u: goto label_22da04;
        case 0x22da08u: goto label_22da08;
        case 0x22da0cu: goto label_22da0c;
        case 0x22da10u: goto label_22da10;
        case 0x22da14u: goto label_22da14;
        case 0x22da18u: goto label_22da18;
        case 0x22da1cu: goto label_22da1c;
        case 0x22da20u: goto label_22da20;
        case 0x22da24u: goto label_22da24;
        case 0x22da28u: goto label_22da28;
        case 0x22da2cu: goto label_22da2c;
        case 0x22da30u: goto label_22da30;
        case 0x22da34u: goto label_22da34;
        case 0x22da38u: goto label_22da38;
        case 0x22da3cu: goto label_22da3c;
        case 0x22da40u: goto label_22da40;
        case 0x22da44u: goto label_22da44;
        case 0x22da48u: goto label_22da48;
        case 0x22da4cu: goto label_22da4c;
        case 0x22da50u: goto label_22da50;
        case 0x22da54u: goto label_22da54;
        case 0x22da58u: goto label_22da58;
        case 0x22da5cu: goto label_22da5c;
        case 0x22da60u: goto label_22da60;
        case 0x22da64u: goto label_22da64;
        case 0x22da68u: goto label_22da68;
        case 0x22da6cu: goto label_22da6c;
        case 0x22da70u: goto label_22da70;
        case 0x22da74u: goto label_22da74;
        case 0x22da78u: goto label_22da78;
        case 0x22da7cu: goto label_22da7c;
        case 0x22da80u: goto label_22da80;
        case 0x22da84u: goto label_22da84;
        case 0x22da88u: goto label_22da88;
        case 0x22da8cu: goto label_22da8c;
        case 0x22da90u: goto label_22da90;
        case 0x22da94u: goto label_22da94;
        case 0x22da98u: goto label_22da98;
        case 0x22da9cu: goto label_22da9c;
        case 0x22daa0u: goto label_22daa0;
        case 0x22daa4u: goto label_22daa4;
        case 0x22daa8u: goto label_22daa8;
        case 0x22daacu: goto label_22daac;
        case 0x22dab0u: goto label_22dab0;
        case 0x22dab4u: goto label_22dab4;
        case 0x22dab8u: goto label_22dab8;
        case 0x22dabcu: goto label_22dabc;
        case 0x22dac0u: goto label_22dac0;
        case 0x22dac4u: goto label_22dac4;
        case 0x22dac8u: goto label_22dac8;
        case 0x22daccu: goto label_22dacc;
        case 0x22dad0u: goto label_22dad0;
        case 0x22dad4u: goto label_22dad4;
        case 0x22dad8u: goto label_22dad8;
        case 0x22dadcu: goto label_22dadc;
        case 0x22dae0u: goto label_22dae0;
        case 0x22dae4u: goto label_22dae4;
        case 0x22dae8u: goto label_22dae8;
        case 0x22daecu: goto label_22daec;
        case 0x22daf0u: goto label_22daf0;
        case 0x22daf4u: goto label_22daf4;
        case 0x22daf8u: goto label_22daf8;
        case 0x22dafcu: goto label_22dafc;
        case 0x22db00u: goto label_22db00;
        case 0x22db04u: goto label_22db04;
        case 0x22db08u: goto label_22db08;
        case 0x22db0cu: goto label_22db0c;
        case 0x22db10u: goto label_22db10;
        case 0x22db14u: goto label_22db14;
        case 0x22db18u: goto label_22db18;
        case 0x22db1cu: goto label_22db1c;
        case 0x22db20u: goto label_22db20;
        case 0x22db24u: goto label_22db24;
        case 0x22db28u: goto label_22db28;
        case 0x22db2cu: goto label_22db2c;
        case 0x22db30u: goto label_22db30;
        case 0x22db34u: goto label_22db34;
        case 0x22db38u: goto label_22db38;
        case 0x22db3cu: goto label_22db3c;
        case 0x22db40u: goto label_22db40;
        case 0x22db44u: goto label_22db44;
        case 0x22db48u: goto label_22db48;
        case 0x22db4cu: goto label_22db4c;
        case 0x22db50u: goto label_22db50;
        case 0x22db54u: goto label_22db54;
        case 0x22db58u: goto label_22db58;
        case 0x22db5cu: goto label_22db5c;
        case 0x22db60u: goto label_22db60;
        case 0x22db64u: goto label_22db64;
        case 0x22db68u: goto label_22db68;
        case 0x22db6cu: goto label_22db6c;
        case 0x22db70u: goto label_22db70;
        case 0x22db74u: goto label_22db74;
        case 0x22db78u: goto label_22db78;
        case 0x22db7cu: goto label_22db7c;
        case 0x22db80u: goto label_22db80;
        case 0x22db84u: goto label_22db84;
        case 0x22db88u: goto label_22db88;
        case 0x22db8cu: goto label_22db8c;
        case 0x22db90u: goto label_22db90;
        case 0x22db94u: goto label_22db94;
        case 0x22db98u: goto label_22db98;
        case 0x22db9cu: goto label_22db9c;
        case 0x22dba0u: goto label_22dba0;
        case 0x22dba4u: goto label_22dba4;
        case 0x22dba8u: goto label_22dba8;
        case 0x22dbacu: goto label_22dbac;
        case 0x22dbb0u: goto label_22dbb0;
        case 0x22dbb4u: goto label_22dbb4;
        case 0x22dbb8u: goto label_22dbb8;
        case 0x22dbbcu: goto label_22dbbc;
        case 0x22dbc0u: goto label_22dbc0;
        case 0x22dbc4u: goto label_22dbc4;
        case 0x22dbc8u: goto label_22dbc8;
        case 0x22dbccu: goto label_22dbcc;
        case 0x22dbd0u: goto label_22dbd0;
        case 0x22dbd4u: goto label_22dbd4;
        case 0x22dbd8u: goto label_22dbd8;
        case 0x22dbdcu: goto label_22dbdc;
        case 0x22dbe0u: goto label_22dbe0;
        case 0x22dbe4u: goto label_22dbe4;
        case 0x22dbe8u: goto label_22dbe8;
        case 0x22dbecu: goto label_22dbec;
        case 0x22dbf0u: goto label_22dbf0;
        case 0x22dbf4u: goto label_22dbf4;
        case 0x22dbf8u: goto label_22dbf8;
        case 0x22dbfcu: goto label_22dbfc;
        case 0x22dc00u: goto label_22dc00;
        case 0x22dc04u: goto label_22dc04;
        case 0x22dc08u: goto label_22dc08;
        case 0x22dc0cu: goto label_22dc0c;
        case 0x22dc10u: goto label_22dc10;
        case 0x22dc14u: goto label_22dc14;
        case 0x22dc18u: goto label_22dc18;
        case 0x22dc1cu: goto label_22dc1c;
        case 0x22dc20u: goto label_22dc20;
        case 0x22dc24u: goto label_22dc24;
        case 0x22dc28u: goto label_22dc28;
        case 0x22dc2cu: goto label_22dc2c;
        case 0x22dc30u: goto label_22dc30;
        case 0x22dc34u: goto label_22dc34;
        case 0x22dc38u: goto label_22dc38;
        case 0x22dc3cu: goto label_22dc3c;
        case 0x22dc40u: goto label_22dc40;
        case 0x22dc44u: goto label_22dc44;
        case 0x22dc48u: goto label_22dc48;
        case 0x22dc4cu: goto label_22dc4c;
        case 0x22dc50u: goto label_22dc50;
        case 0x22dc54u: goto label_22dc54;
        case 0x22dc58u: goto label_22dc58;
        case 0x22dc5cu: goto label_22dc5c;
        case 0x22dc60u: goto label_22dc60;
        case 0x22dc64u: goto label_22dc64;
        case 0x22dc68u: goto label_22dc68;
        case 0x22dc6cu: goto label_22dc6c;
        case 0x22dc70u: goto label_22dc70;
        case 0x22dc74u: goto label_22dc74;
        case 0x22dc78u: goto label_22dc78;
        case 0x22dc7cu: goto label_22dc7c;
        case 0x22dc80u: goto label_22dc80;
        case 0x22dc84u: goto label_22dc84;
        case 0x22dc88u: goto label_22dc88;
        case 0x22dc8cu: goto label_22dc8c;
        case 0x22dc90u: goto label_22dc90;
        case 0x22dc94u: goto label_22dc94;
        case 0x22dc98u: goto label_22dc98;
        case 0x22dc9cu: goto label_22dc9c;
        case 0x22dca0u: goto label_22dca0;
        case 0x22dca4u: goto label_22dca4;
        case 0x22dca8u: goto label_22dca8;
        case 0x22dcacu: goto label_22dcac;
        case 0x22dcb0u: goto label_22dcb0;
        case 0x22dcb4u: goto label_22dcb4;
        case 0x22dcb8u: goto label_22dcb8;
        case 0x22dcbcu: goto label_22dcbc;
        case 0x22dcc0u: goto label_22dcc0;
        case 0x22dcc4u: goto label_22dcc4;
        case 0x22dcc8u: goto label_22dcc8;
        case 0x22dcccu: goto label_22dccc;
        case 0x22dcd0u: goto label_22dcd0;
        case 0x22dcd4u: goto label_22dcd4;
        case 0x22dcd8u: goto label_22dcd8;
        case 0x22dcdcu: goto label_22dcdc;
        case 0x22dce0u: goto label_22dce0;
        case 0x22dce4u: goto label_22dce4;
        case 0x22dce8u: goto label_22dce8;
        case 0x22dcecu: goto label_22dcec;
        case 0x22dcf0u: goto label_22dcf0;
        case 0x22dcf4u: goto label_22dcf4;
        case 0x22dcf8u: goto label_22dcf8;
        case 0x22dcfcu: goto label_22dcfc;
        case 0x22dd00u: goto label_22dd00;
        case 0x22dd04u: goto label_22dd04;
        case 0x22dd08u: goto label_22dd08;
        case 0x22dd0cu: goto label_22dd0c;
        case 0x22dd10u: goto label_22dd10;
        case 0x22dd14u: goto label_22dd14;
        case 0x22dd18u: goto label_22dd18;
        case 0x22dd1cu: goto label_22dd1c;
        case 0x22dd20u: goto label_22dd20;
        case 0x22dd24u: goto label_22dd24;
        case 0x22dd28u: goto label_22dd28;
        case 0x22dd2cu: goto label_22dd2c;
        case 0x22dd30u: goto label_22dd30;
        case 0x22dd34u: goto label_22dd34;
        case 0x22dd38u: goto label_22dd38;
        case 0x22dd3cu: goto label_22dd3c;
        case 0x22dd40u: goto label_22dd40;
        case 0x22dd44u: goto label_22dd44;
        case 0x22dd48u: goto label_22dd48;
        case 0x22dd4cu: goto label_22dd4c;
        case 0x22dd50u: goto label_22dd50;
        case 0x22dd54u: goto label_22dd54;
        case 0x22dd58u: goto label_22dd58;
        case 0x22dd5cu: goto label_22dd5c;
        case 0x22dd60u: goto label_22dd60;
        case 0x22dd64u: goto label_22dd64;
        case 0x22dd68u: goto label_22dd68;
        case 0x22dd6cu: goto label_22dd6c;
        case 0x22dd70u: goto label_22dd70;
        case 0x22dd74u: goto label_22dd74;
        case 0x22dd78u: goto label_22dd78;
        case 0x22dd7cu: goto label_22dd7c;
        case 0x22dd80u: goto label_22dd80;
        case 0x22dd84u: goto label_22dd84;
        case 0x22dd88u: goto label_22dd88;
        case 0x22dd8cu: goto label_22dd8c;
        case 0x22dd90u: goto label_22dd90;
        case 0x22dd94u: goto label_22dd94;
        case 0x22dd98u: goto label_22dd98;
        case 0x22dd9cu: goto label_22dd9c;
        case 0x22dda0u: goto label_22dda0;
        case 0x22dda4u: goto label_22dda4;
        case 0x22dda8u: goto label_22dda8;
        case 0x22ddacu: goto label_22ddac;
        case 0x22ddb0u: goto label_22ddb0;
        case 0x22ddb4u: goto label_22ddb4;
        case 0x22ddb8u: goto label_22ddb8;
        case 0x22ddbcu: goto label_22ddbc;
        case 0x22ddc0u: goto label_22ddc0;
        case 0x22ddc4u: goto label_22ddc4;
        case 0x22ddc8u: goto label_22ddc8;
        case 0x22ddccu: goto label_22ddcc;
        case 0x22ddd0u: goto label_22ddd0;
        case 0x22ddd4u: goto label_22ddd4;
        case 0x22ddd8u: goto label_22ddd8;
        case 0x22dddcu: goto label_22dddc;
        case 0x22dde0u: goto label_22dde0;
        case 0x22dde4u: goto label_22dde4;
        case 0x22dde8u: goto label_22dde8;
        case 0x22ddecu: goto label_22ddec;
        case 0x22ddf0u: goto label_22ddf0;
        case 0x22ddf4u: goto label_22ddf4;
        case 0x22ddf8u: goto label_22ddf8;
        case 0x22ddfcu: goto label_22ddfc;
        case 0x22de00u: goto label_22de00;
        case 0x22de04u: goto label_22de04;
        case 0x22de08u: goto label_22de08;
        case 0x22de0cu: goto label_22de0c;
        case 0x22de10u: goto label_22de10;
        case 0x22de14u: goto label_22de14;
        case 0x22de18u: goto label_22de18;
        case 0x22de1cu: goto label_22de1c;
        case 0x22de20u: goto label_22de20;
        case 0x22de24u: goto label_22de24;
        case 0x22de28u: goto label_22de28;
        case 0x22de2cu: goto label_22de2c;
        case 0x22de30u: goto label_22de30;
        case 0x22de34u: goto label_22de34;
        case 0x22de38u: goto label_22de38;
        case 0x22de3cu: goto label_22de3c;
        case 0x22de40u: goto label_22de40;
        case 0x22de44u: goto label_22de44;
        case 0x22de48u: goto label_22de48;
        case 0x22de4cu: goto label_22de4c;
        case 0x22de50u: goto label_22de50;
        case 0x22de54u: goto label_22de54;
        case 0x22de58u: goto label_22de58;
        case 0x22de5cu: goto label_22de5c;
        case 0x22de60u: goto label_22de60;
        case 0x22de64u: goto label_22de64;
        case 0x22de68u: goto label_22de68;
        case 0x22de6cu: goto label_22de6c;
        case 0x22de70u: goto label_22de70;
        case 0x22de74u: goto label_22de74;
        case 0x22de78u: goto label_22de78;
        case 0x22de7cu: goto label_22de7c;
        case 0x22de80u: goto label_22de80;
        case 0x22de84u: goto label_22de84;
        case 0x22de88u: goto label_22de88;
        case 0x22de8cu: goto label_22de8c;
        case 0x22de90u: goto label_22de90;
        case 0x22de94u: goto label_22de94;
        case 0x22de98u: goto label_22de98;
        case 0x22de9cu: goto label_22de9c;
        case 0x22dea0u: goto label_22dea0;
        case 0x22dea4u: goto label_22dea4;
        case 0x22dea8u: goto label_22dea8;
        case 0x22deacu: goto label_22deac;
        case 0x22deb0u: goto label_22deb0;
        case 0x22deb4u: goto label_22deb4;
        case 0x22deb8u: goto label_22deb8;
        case 0x22debcu: goto label_22debc;
        case 0x22dec0u: goto label_22dec0;
        case 0x22dec4u: goto label_22dec4;
        case 0x22dec8u: goto label_22dec8;
        case 0x22deccu: goto label_22decc;
        case 0x22ded0u: goto label_22ded0;
        case 0x22ded4u: goto label_22ded4;
        case 0x22ded8u: goto label_22ded8;
        case 0x22dedcu: goto label_22dedc;
        case 0x22dee0u: goto label_22dee0;
        case 0x22dee4u: goto label_22dee4;
        case 0x22dee8u: goto label_22dee8;
        case 0x22deecu: goto label_22deec;
        case 0x22def0u: goto label_22def0;
        case 0x22def4u: goto label_22def4;
        case 0x22def8u: goto label_22def8;
        case 0x22defcu: goto label_22defc;
        case 0x22df00u: goto label_22df00;
        case 0x22df04u: goto label_22df04;
        case 0x22df08u: goto label_22df08;
        case 0x22df0cu: goto label_22df0c;
        case 0x22df10u: goto label_22df10;
        case 0x22df14u: goto label_22df14;
        case 0x22df18u: goto label_22df18;
        case 0x22df1cu: goto label_22df1c;
        case 0x22df20u: goto label_22df20;
        case 0x22df24u: goto label_22df24;
        case 0x22df28u: goto label_22df28;
        case 0x22df2cu: goto label_22df2c;
        case 0x22df30u: goto label_22df30;
        case 0x22df34u: goto label_22df34;
        case 0x22df38u: goto label_22df38;
        case 0x22df3cu: goto label_22df3c;
        case 0x22df40u: goto label_22df40;
        case 0x22df44u: goto label_22df44;
        case 0x22df48u: goto label_22df48;
        case 0x22df4cu: goto label_22df4c;
        case 0x22df50u: goto label_22df50;
        case 0x22df54u: goto label_22df54;
        case 0x22df58u: goto label_22df58;
        case 0x22df5cu: goto label_22df5c;
        default: return;
    }

label_22d790:
    // 0x22d790: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x22d790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_22d794:
    // 0x22d794: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22d798:
    // 0x22d798: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x22d798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_22d79c:
    // 0x22d79c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x22d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_22d7a0:
    // 0x22d7a0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x22d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d7a4:
    // 0x22d7a4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x22d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_22d7a8:
    // 0x22d7a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22d7a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22d7ac:
    // 0x22d7ac: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d7acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d7b0:
    // 0x22d7b0: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22d7b0u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22d7b4:
    // 0x22d7b4: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22d7b4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22d7b8:
    // 0x22d7b8: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x22d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22d7bc:
    // 0x22d7bc: 0xfa310010  sqc2        $vf17, 0x10($s1)
    ctx->pc = 0x22d7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22d7c0:
    // 0x22d7c0: 0xfa320020  sqc2        $vf18, 0x20($s1)
    ctx->pc = 0x22d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22d7c4:
    // 0x22d7c4: 0xfa330030  sqc2        $vf19, 0x30($s1)
    ctx->pc = 0x22d7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22d7c8:
    // 0x22d7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d7cc:
    // 0x22d7cc: 0xc066d86  jal         func_19B618
label_22d7d0:
    if (ctx->pc == 0x22D7D0u) {
        ctx->pc = 0x22D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D7CCu;
        // 0x22d7d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D7D4u;
        goto label_22d7d4;
    }
    ctx->pc = 0x22D7CCu;
    SET_GPR_U32(ctx, 31, 0x22D7D4u);
    ctx->pc = 0x22D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D7CCu;
    // 0x22d7d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x22D7CCu, 0x22D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D7D4u;
label_22d7d4:
    // 0x22d7d4: 0x3c02c3c1  lui         $v0, 0xC3C1
    ctx->pc = 0x22d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50113 << 16));
label_22d7d8:
    // 0x22d7d8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x22d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_22d7dc:
    // 0x22d7dc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22d7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_22d7e0:
    // 0x22d7e0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x22d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_22d7e4:
    // 0x22d7e4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x22d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_22d7e8:
    // 0x22d7e8: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x22d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_22d7ec:
    // 0x22d7ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22d7f0:
    // 0x22d7f0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x22d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_22d7f4:
    // 0x22d7f4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x22d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d7f8:
    // 0x22d7f8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22d7f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22d7fc:
    // 0x22d7fc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d7fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d800:
    // 0x22d800: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22d800u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22d804:
    // 0x22d804: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22d804u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22d808:
    // 0x22d808: 0xfa500000  sqc2        $vf16, 0x0($s2)
    ctx->pc = 0x22d808u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22d80c:
    // 0x22d80c: 0xfa510010  sqc2        $vf17, 0x10($s2)
    ctx->pc = 0x22d80cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22d810:
    // 0x22d810: 0xfa520020  sqc2        $vf18, 0x20($s2)
    ctx->pc = 0x22d810u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22d814:
    // 0x22d814: 0xfa530030  sqc2        $vf19, 0x30($s2)
    ctx->pc = 0x22d814u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22d818:
    // 0x22d818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22d818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d81c:
    // 0x22d81c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22d81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d820:
    // 0x22d820: 0xc066d86  jal         func_19B618
label_22d824:
    if (ctx->pc == 0x22D824u) {
        ctx->pc = 0x22D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D820u;
        // 0x22d824: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D828u;
        goto label_22d828;
    }
    ctx->pc = 0x22D820u;
    SET_GPR_U32(ctx, 31, 0x22D828u);
    ctx->pc = 0x22D824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D820u;
    // 0x22d824: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x22D820u, 0x22D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D828u;
label_22d828:
    // 0x22d828: 0x2a010032  slti        $at, $s0, 0x32
    ctx->pc = 0x22d828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
label_22d82c:
    // 0x22d82c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_22d830:
    if (ctx->pc == 0x22D830u) {
        ctx->pc = 0x22D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D82Cu;
        // 0x22d830: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D834u;
        goto label_22d834;
    }
    ctx->pc = 0x22D82Cu;
    {
        const bool branch_taken_0x22d82c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D82Cu;
        // 0x22d830: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d82c) {
            ctx->pc = 0x22D8CCu;
            goto label_22d8cc;
        }
    }
    ctx->pc = 0x22D834u;
label_22d834:
    // 0x22d834: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x22d834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_22d838:
    // 0x22d838: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_22d83c:
    if (ctx->pc == 0x22D83Cu) {
        ctx->pc = 0x22D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D838u;
        // 0x22d83c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D840u;
        goto label_22d840;
    }
    ctx->pc = 0x22D838u;
    {
        const bool branch_taken_0x22d838 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D838u;
        // 0x22d83c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d838) {
            ctx->pc = 0x22D850u;
            goto label_22d850;
        }
    }
    ctx->pc = 0x22D840u;
label_22d840:
    // 0x22d840: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x22d840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_22d844:
    // 0x22d844: 0xc066e26  jal         func_19B898
label_22d848:
    if (ctx->pc == 0x22D848u) {
        ctx->pc = 0x22D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D844u;
        // 0x22d848: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D84Cu;
        goto label_22d84c;
    }
    ctx->pc = 0x22D844u;
    SET_GPR_U32(ctx, 31, 0x22D84Cu);
    ctx->pc = 0x22D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D844u;
    // 0x22d848: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22D844u, 0x22D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D84Cu;
label_22d84c:
    // 0x22d84c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x22d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_22d850:
    // 0x22d850: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x22d850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_22d854:
    // 0x22d854: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x22d854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_22d858:
    // 0x22d858: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x22d858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22d85c:
    // 0x22d85c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22d860:
    // 0x22d860: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x22d860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_22d864:
    // 0x22d864: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x22d864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_22d868:
    // 0x22d868: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x22d868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d86c:
    // 0x22d86c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x22d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_22d870:
    // 0x22d870: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x22d870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_22d874:
    // 0x22d874: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x22d874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_22d878:
    // 0x22d878: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x22d878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_22d87c:
    // 0x22d87c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22d87cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22d880:
    // 0x22d880: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22d880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22d884:
    // 0x22d884: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22d884u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22d888:
    // 0x22d888: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22d888u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22d88c:
    // 0x22d88c: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x22d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22d890:
    // 0x22d890: 0xfa710010  sqc2        $vf17, 0x10($s3)
    ctx->pc = 0x22d890u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22d894:
    // 0x22d894: 0xfa720020  sqc2        $vf18, 0x20($s3)
    ctx->pc = 0x22d894u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22d898:
    // 0x22d898: 0xfa730030  sqc2        $vf19, 0x30($s3)
    ctx->pc = 0x22d898u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22d89c:
    // 0x22d89c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22d8a0:
    // 0x22d8a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d8a4:
    // 0x22d8a4: 0xc066d86  jal         func_19B618
label_22d8a8:
    if (ctx->pc == 0x22D8A8u) {
        ctx->pc = 0x22D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8A4u;
        // 0x22d8a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8ACu;
        goto label_22d8ac;
    }
    ctx->pc = 0x22D8A4u;
    SET_GPR_U32(ctx, 31, 0x22D8ACu);
    ctx->pc = 0x22D8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8A4u;
    // 0x22d8a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x22D8A4u, 0x22D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8ACu;
label_22d8ac:
    // 0x22d8ac: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x22d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_22d8b0:
    // 0x22d8b0: 0x16030019  bne         $s0, $v1, . + 4 + (0x19 << 2)
label_22d8b4:
    if (ctx->pc == 0x22D8B4u) {
        ctx->pc = 0x22D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8B0u;
        // 0x22d8b4: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8B8u;
        goto label_22d8b8;
    }
    ctx->pc = 0x22D8B0u;
    {
        const bool branch_taken_0x22d8b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x22D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8B0u;
        // 0x22d8b4: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8b0) {
            ctx->pc = 0x22D918u;
            goto label_22d918;
        }
    }
    ctx->pc = 0x22D8B8u;
label_22d8b8:
    // 0x22d8b8: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x22d8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_22d8bc:
    // 0x22d8bc: 0xc066e08  jal         func_19B820
label_22d8c0:
    if (ctx->pc == 0x22D8C0u) {
        ctx->pc = 0x22D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8BCu;
        // 0x22d8c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8C4u;
        goto label_22d8c4;
    }
    ctx->pc = 0x22D8BCu;
    SET_GPR_U32(ctx, 31, 0x22D8C4u);
    ctx->pc = 0x22D8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8BCu;
    // 0x22d8c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x22D8BCu, 0x22D8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8C4u;
label_22d8c4:
    // 0x22d8c4: 0x10000015  b           . + 4 + (0x15 << 2)
label_22d8c8:
    if (ctx->pc == 0x22D8C8u) {
        ctx->pc = 0x22D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8C4u;
        // 0x22d8c8: 0x8e230090  lw          $v1, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8CCu;
        goto label_22d8cc;
    }
    ctx->pc = 0x22D8C4u;
    {
        const bool branch_taken_0x22d8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8C4u;
        // 0x22d8c8: 0x8e230090  lw          $v1, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d8c4) {
            ctx->pc = 0x22D91Cu;
            goto label_22d91c;
        }
    }
    ctx->pc = 0x22D8CCu;
label_22d8cc:
    // 0x22d8cc: 0xc066daa  jal         func_19B6A8
label_22d8d0:
    if (ctx->pc == 0x22D8D0u) {
        ctx->pc = 0x22D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8CCu;
        // 0x22d8d0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8D4u;
        goto label_22d8d4;
    }
    ctx->pc = 0x22D8CCu;
    SET_GPR_U32(ctx, 31, 0x22D8D4u);
    ctx->pc = 0x22D8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8CCu;
    // 0x22d8d0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x22D8CCu, 0x22D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8D4u;
label_22d8d4:
    // 0x22d8d4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x22d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_22d8d8:
    // 0x22d8d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22d8dc:
    // 0x22d8dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22d8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22d8e0:
    // 0x22d8e0: 0xc067060  jal         func_19C180
label_22d8e4:
    if (ctx->pc == 0x22D8E4u) {
        ctx->pc = 0x22D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D8E0u;
        // 0x22d8e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D8E8u;
        goto label_22d8e8;
    }
    ctx->pc = 0x22D8E0u;
    SET_GPR_U32(ctx, 31, 0x22D8E8u);
    ctx->pc = 0x22D8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D8E0u;
    // 0x22d8e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C180u, 0x22D8E0u, 0x22D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D8E8u;
label_22d8e8:
    // 0x22d8e8: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x22d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d8ec:
    // 0x22d8ec: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x22d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d8f0:
    // 0x22d8f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d8f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22d8f4:
    // 0x22d8f4: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x22d8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
label_22d8f8:
    // 0x22d8f8: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x22d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d8fc:
    // 0x22d8fc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x22d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d900:
    // 0x22d900: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22d904:
    // 0x22d904: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x22d904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_22d908:
    // 0x22d908: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x22d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22d90c:
    // 0x22d90c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x22d90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22d910:
    // 0x22d910: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22d914:
    // 0x22d914: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x22d914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_22d918:
    // 0x22d918: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x22d918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_22d91c:
    // 0x22d91c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x22d91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_22d920:
    // 0x22d920: 0xae230090  sw          $v1, 0x90($s1)
    ctx->pc = 0x22d920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
label_22d924:
    // 0x22d924: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x22d924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_22d928:
    // 0x22d928: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x22d928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_22d92c:
    // 0x22d92c: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x22d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
label_22d930:
    // 0x22d930: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x22d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_22d934:
    // 0x22d934: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x22d934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_22d938:
    // 0x22d938: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x22d938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_22d93c:
    // 0x22d93c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22d93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22d940:
    // 0x22d940: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22d940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22d944:
    // 0x22d944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22d944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22d948:
    // 0x22d948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d94c:
    // 0x22d94c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22d94cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d950:
    // 0x22d950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22d954:
    // 0x22d954: 0x3e00008  jr          $ra
label_22d958:
    if (ctx->pc == 0x22D958u) {
        ctx->pc = 0x22D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D954u;
        // 0x22d958: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D95Cu;
        goto label_22d95c;
    }
    ctx->pc = 0x22D954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D954u;
        // 0x22d958: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D95Cu;
label_22d95c:
    // 0x22d95c: 0x0  nop
    ctx->pc = 0x22d95cu;
    // NOP
label_22d960:
    // 0x22d960: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_22d964:
    // 0x22d964: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22d968:
    // 0x22d968: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_22d96c:
    // 0x22d96c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22d970:
    // 0x22d970: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22d970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22d974:
    // 0x22d974: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22d974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d978:
    // 0x22d978: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22d97c:
    // 0x22d97c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22d97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d980:
    // 0x22d980: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22d980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22d984:
    // 0x22d984: 0x8f8885d0  lw          $t0, -0x7A30($gp)
    ctx->pc = 0x22d984u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22d988:
    // 0x22d988: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
label_22d98c:
    if (ctx->pc == 0x22D98Cu) {
        ctx->pc = 0x22D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D988u;
        // 0x22d98c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D990u;
        goto label_22d990;
    }
    ctx->pc = 0x22D988u;
    {
        const bool branch_taken_0x22d988 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D988u;
        // 0x22d98c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d988) {
            ctx->pc = 0x22DA14u;
            goto label_22da14;
        }
    }
    ctx->pc = 0x22D990u;
label_22d990:
    // 0x22d990: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x22d990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_22d994:
    // 0x22d994: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x22d994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_22d998:
    // 0x22d998: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x22d998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_22d99c:
    // 0x22d99c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22d99cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d9a0:
    // 0x22d9a0: 0x91030094  lbu         $v1, 0x94($t0)
    ctx->pc = 0x22d9a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 148)));
label_22d9a4:
    // 0x22d9a4: 0x14670018  bne         $v1, $a3, . + 4 + (0x18 << 2)
label_22d9a8:
    if (ctx->pc == 0x22D9A8u) {
        ctx->pc = 0x22D9ACu;
        goto label_22d9ac;
    }
    ctx->pc = 0x22D9A4u;
    {
        const bool branch_taken_0x22d9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x22d9a4) {
            ctx->pc = 0x22DA08u;
            goto label_22da08;
        }
    }
    ctx->pc = 0x22D9ACu;
label_22d9ac:
    // 0x22d9ac: 0x91030096  lbu         $v1, 0x96($t0)
    ctx->pc = 0x22d9acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 150)));
label_22d9b0:
    // 0x22d9b0: 0x14660015  bne         $v1, $a2, . + 4 + (0x15 << 2)
label_22d9b4:
    if (ctx->pc == 0x22D9B4u) {
        ctx->pc = 0x22D9B8u;
        goto label_22d9b8;
    }
    ctx->pc = 0x22D9B0u;
    {
        const bool branch_taken_0x22d9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x22d9b0) {
            ctx->pc = 0x22DA08u;
            goto label_22da08;
        }
    }
    ctx->pc = 0x22D9B8u;
label_22d9b8:
    // 0x22d9b8: 0x9103009d  lbu         $v1, 0x9D($t0)
    ctx->pc = 0x22d9b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 157)));
label_22d9bc:
    // 0x22d9bc: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
label_22d9c0:
    if (ctx->pc == 0x22D9C0u) {
        ctx->pc = 0x22D9C4u;
        goto label_22d9c4;
    }
    ctx->pc = 0x22D9BCu;
    {
        const bool branch_taken_0x22d9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x22d9bc) {
            ctx->pc = 0x22D9E0u;
            goto label_22d9e0;
        }
    }
    ctx->pc = 0x22D9C4u;
label_22d9c4:
    // 0x22d9c4: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_22d9c8:
    if (ctx->pc == 0x22D9C8u) {
        ctx->pc = 0x22D9CCu;
        goto label_22d9cc;
    }
    ctx->pc = 0x22D9C4u;
    {
        const bool branch_taken_0x22d9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x22d9c4) {
            ctx->pc = 0x22D9D4u;
            goto label_22d9d4;
        }
    }
    ctx->pc = 0x22D9CCu;
label_22d9cc:
    // 0x22d9cc: 0x10000009  b           . + 4 + (0x9 << 2)
label_22d9d0:
    if (ctx->pc == 0x22D9D0u) {
        ctx->pc = 0x22D9D4u;
        goto label_22d9d4;
    }
    ctx->pc = 0x22D9CCu;
    {
        const bool branch_taken_0x22d9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d9cc) {
            ctx->pc = 0x22D9F4u;
            goto label_22d9f4;
        }
    }
    ctx->pc = 0x22D9D4u;
label_22d9d4:
    // 0x22d9d4: 0x0  nop
    ctx->pc = 0x22d9d4u;
    // NOP
label_22d9d8:
    // 0x22d9d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_22d9dc:
    if (ctx->pc == 0x22D9DCu) {
        ctx->pc = 0x22D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9D8u;
        // 0x22d9dc: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9E0u;
        goto label_22d9e0;
    }
    ctx->pc = 0x22D9D8u;
    {
        const bool branch_taken_0x22d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9D8u;
        // 0x22d9dc: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9d8) {
            ctx->pc = 0x22D9F4u;
            goto label_22d9f4;
        }
    }
    ctx->pc = 0x22D9E0u;
label_22d9e0:
    // 0x22d9e0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_22d9e4:
    if (ctx->pc == 0x22D9E4u) {
        ctx->pc = 0x22D9E8u;
        goto label_22d9e8;
    }
    ctx->pc = 0x22D9E0u;
    {
        const bool branch_taken_0x22d9e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d9e0) {
            ctx->pc = 0x22D9F0u;
            goto label_22d9f0;
        }
    }
    ctx->pc = 0x22D9E8u;
label_22d9e8:
    // 0x22d9e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_22d9ec:
    if (ctx->pc == 0x22D9ECu) {
        ctx->pc = 0x22D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9E8u;
        // 0x22d9ec: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9F0u;
        goto label_22d9f0;
    }
    ctx->pc = 0x22D9E8u;
    {
        const bool branch_taken_0x22d9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9E8u;
        // 0x22d9ec: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9e8) {
            ctx->pc = 0x22D9F4u;
            goto label_22d9f4;
        }
    }
    ctx->pc = 0x22D9F0u;
label_22d9f0:
    // 0x22d9f0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x22d9f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22d9f4:
    // 0x22d9f4: 0x0  nop
    ctx->pc = 0x22d9f4u;
    // NOP
label_22d9f8:
    // 0x22d9f8: 0x2111824  and         $v1, $s0, $s1
    ctx->pc = 0x22d9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
label_22d9fc:
    // 0x22d9fc: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x22d9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_22da00:
    // 0x22da00: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_22da04:
    if (ctx->pc == 0x22DA04u) {
        ctx->pc = 0x22DA08u;
        goto label_22da08;
    }
    ctx->pc = 0x22DA00u;
    {
        const bool branch_taken_0x22da00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22da00) {
            ctx->pc = 0x22DA14u;
            goto label_22da14;
        }
    }
    ctx->pc = 0x22DA08u;
label_22da08:
    // 0x22da08: 0x8d080084  lw          $t0, 0x84($t0)
    ctx->pc = 0x22da08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
label_22da0c:
    // 0x22da0c: 0x1500ffe4  bnez        $t0, . + 4 + (-0x1C << 2)
label_22da10:
    if (ctx->pc == 0x22DA10u) {
        ctx->pc = 0x22DA14u;
        goto label_22da14;
    }
    ctx->pc = 0x22DA0Cu;
    {
        const bool branch_taken_0x22da0c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x22da0c) {
            ctx->pc = 0x22D9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d9a0;
        }
    }
    ctx->pc = 0x22DA14u;
label_22da14:
    // 0x22da14: 0x0  nop
    ctx->pc = 0x22da14u;
    // NOP
label_22da18:
    // 0x22da18: 0x2111824  and         $v1, $s0, $s1
    ctx->pc = 0x22da18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
label_22da1c:
    // 0x22da1c: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x22da1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_22da20:
    // 0x22da20: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_22da24:
    if (ctx->pc == 0x22DA24u) {
        ctx->pc = 0x22DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA20u;
        // 0x22da24: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA28u;
        goto label_22da28;
    }
    ctx->pc = 0x22DA20u;
    {
        const bool branch_taken_0x22da20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA20u;
        // 0x22da24: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da20) {
            ctx->pc = 0x22DA98u;
            goto label_22da98;
        }
    }
    ctx->pc = 0x22DA28u;
label_22da28:
    // 0x22da28: 0xc0590dc  jal         func_164370
label_22da2c:
    if (ctx->pc == 0x22DA2Cu) {
        ctx->pc = 0x22DA30u;
        goto label_22da30;
    }
    ctx->pc = 0x22DA28u;
    SET_GPR_U32(ctx, 31, 0x22DA30u);
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22DA28u, 0x22DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA30u;
label_22da30:
    // 0x22da30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22da30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22da34:
    // 0x22da34: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
label_22da38:
    if (ctx->pc == 0x22DA38u) {
        ctx->pc = 0x22DA3Cu;
        goto label_22da3c;
    }
    ctx->pc = 0x22DA34u;
    {
        const bool branch_taken_0x22da34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22da34) {
            ctx->pc = 0x22DA98u;
            goto label_22da98;
        }
    }
    ctx->pc = 0x22DA3Cu;
label_22da3c:
    // 0x22da3c: 0xae700050  sw          $s0, 0x50($s3)
    ctx->pc = 0x22da3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 16));
label_22da40:
    // 0x22da40: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x22da40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_22da44:
    // 0x22da44: 0xae710054  sw          $s1, 0x54($s3)
    ctx->pc = 0x22da44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 17));
label_22da48:
    // 0x22da48: 0xae720058  sw          $s2, 0x58($s3)
    ctx->pc = 0x22da48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 18));
label_22da4c:
    // 0x22da4c: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x22da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_22da50:
    // 0x22da50: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x22da50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_22da54:
    // 0x22da54: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x22da54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_22da58:
    // 0x22da58: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x22da58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_22da5c:
    // 0x22da5c: 0xc6140054  lwc1        $f20, 0x54($s0)
    ctx->pc = 0x22da5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22da60:
    // 0x22da60: 0xc066e44  jal         func_19B910
label_22da64:
    if (ctx->pc == 0x22DA64u) {
        ctx->pc = 0x22DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA60u;
        // 0x22da64: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA68u;
        goto label_22da68;
    }
    ctx->pc = 0x22DA60u;
    SET_GPR_U32(ctx, 31, 0x22DA68u);
    ctx->pc = 0x22DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA60u;
    // 0x22da64: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x22DA60u, 0x22DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA68u;
label_22da68:
    // 0x22da68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22da68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22da6c:
    // 0x22da6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22da6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22da70:
    // 0x22da70: 0xc066ec0  jal         func_19BB00
label_22da74:
    if (ctx->pc == 0x22DA74u) {
        ctx->pc = 0x22DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA70u;
        // 0x22da74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA78u;
        goto label_22da78;
    }
    ctx->pc = 0x22DA70u;
    SET_GPR_U32(ctx, 31, 0x22DA78u);
    ctx->pc = 0x22DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA70u;
    // 0x22da74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x22DA70u, 0x22DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA78u;
label_22da78:
    // 0x22da78: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x22da78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_22da7c:
    // 0x22da7c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22da7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_22da80:
    // 0x22da80: 0xc066d7a  jal         func_19B5E8
label_22da84:
    if (ctx->pc == 0x22DA84u) {
        ctx->pc = 0x22DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA80u;
        // 0x22da84: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA88u;
        goto label_22da88;
    }
    ctx->pc = 0x22DA80u;
    SET_GPR_U32(ctx, 31, 0x22DA88u);
    ctx->pc = 0x22DA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA80u;
    // 0x22da84: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x22DA80u, 0x22DA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA88u;
label_22da88:
    // 0x22da88: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22da88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_22da8c:
    // 0x22da8c: 0xa6600012  sh          $zero, 0x12($s3)
    ctx->pc = 0x22da8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 0));
label_22da90:
    // 0x22da90: 0x2463dac0  addiu       $v1, $v1, -0x2540
    ctx->pc = 0x22da90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957760));
label_22da94:
    // 0x22da94: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x22da94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
label_22da98:
    // 0x22da98: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22da98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22da9c:
    // 0x22da9c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22da9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22daa0:
    // 0x22daa0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22daa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22daa4:
    // 0x22daa4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22daa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22daa8:
    // 0x22daa8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22daa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22daac:
    // 0x22daac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22daacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22dab0:
    // 0x22dab0: 0x3e00008  jr          $ra
label_22dab4:
    if (ctx->pc == 0x22DAB4u) {
        ctx->pc = 0x22DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAB0u;
        // 0x22dab4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DAB8u;
        goto label_22dab8;
    }
    ctx->pc = 0x22DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAB0u;
        // 0x22dab4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DAB8u;
label_22dab8:
    // 0x22dab8: 0x0  nop
    ctx->pc = 0x22dab8u;
    // NOP
label_22dabc:
    // 0x22dabc: 0x0  nop
    ctx->pc = 0x22dabcu;
    // NOP
label_22dac0:
    // 0x22dac0: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x22dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_22dac4:
    // 0x22dac4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22dac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22dac8:
    // 0x22dac8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x22dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_22dacc:
    // 0x22dacc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22dad0:
    // 0x22dad0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x22dad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_22dad4:
    // 0x22dad4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x22dad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_22dad8:
    // 0x22dad8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_22dadc:
    // 0x22dadc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22dadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_22dae0:
    // 0x22dae0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22dae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22dae4:
    // 0x22dae4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22dae8:
    // 0x22dae8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22dae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22daec:
    // 0x22daec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22daecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22daf0:
    // 0x22daf0: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x22daf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22daf4:
    // 0x22daf4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22daf8:
    if (ctx->pc == 0x22DAF8u) {
        ctx->pc = 0x22DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAF4u;
        // 0x22daf8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DAFCu;
        goto label_22dafc;
    }
    ctx->pc = 0x22DAF4u;
    {
        const bool branch_taken_0x22daf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAF4u;
        // 0x22daf8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22daf4) {
            ctx->pc = 0x22DB04u;
            goto label_22db04;
        }
    }
    ctx->pc = 0x22DAFCu;
label_22dafc:
    // 0x22dafc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_22db00:
    if (ctx->pc == 0x22DB00u) {
        ctx->pc = 0x22DB04u;
        goto label_22db04;
    }
    ctx->pc = 0x22DAFCu;
    {
        const bool branch_taken_0x22dafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dafc) {
            ctx->pc = 0x22DB14u;
            goto label_22db14;
        }
    }
    ctx->pc = 0x22DB04u;
label_22db04:
    // 0x22db04: 0xc0591f4  jal         func_1647D0
label_22db08:
    if (ctx->pc == 0x22DB08u) {
        ctx->pc = 0x22DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB04u;
        // 0x22db08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB0Cu;
        goto label_22db0c;
    }
    ctx->pc = 0x22DB04u;
    SET_GPR_U32(ctx, 31, 0x22DB0Cu);
    ctx->pc = 0x22DB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB04u;
    // 0x22db08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22DB04u, 0x22DB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB0Cu;
label_22db0c:
    // 0x22db0c: 0x10000131  b           . + 4 + (0x131 << 2)
label_22db10:
    if (ctx->pc == 0x22DB10u) {
        ctx->pc = 0x22DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB0Cu;
        // 0x22db10: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB14u;
        goto label_22db14;
    }
    ctx->pc = 0x22DB0Cu;
    {
        const bool branch_taken_0x22db0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB0Cu;
        // 0x22db10: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db0c) {
            ctx->pc = 0x22DFD4u;
            { ctx->pc = 0x22dfd4; return; }
        }
    }
    ctx->pc = 0x22DB14u;
label_22db14:
    // 0x22db14: 0x96a30012  lhu         $v1, 0x12($s5)
    ctx->pc = 0x22db14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
label_22db18:
    // 0x22db18: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_22db1c:
    if (ctx->pc == 0x22DB1Cu) {
        ctx->pc = 0x22DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB18u;
        // 0x22db1c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB20u;
        goto label_22db20;
    }
    ctx->pc = 0x22DB18u;
    {
        const bool branch_taken_0x22db18 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x22DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB18u;
        // 0x22db1c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db18) {
            ctx->pc = 0x22DB2Cu;
            goto label_22db2c;
        }
    }
    ctx->pc = 0x22DB20u;
label_22db20:
    // 0x22db20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_22db24:
    if (ctx->pc == 0x22DB24u) {
        ctx->pc = 0x22DB28u;
        goto label_22db28;
    }
    ctx->pc = 0x22DB20u;
    {
        const bool branch_taken_0x22db20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22db20) {
            ctx->pc = 0x22DB2Cu;
            goto label_22db2c;
        }
    }
    ctx->pc = 0x22DB28u;
label_22db28:
    // 0x22db28: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x22db28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_22db2c:
    // 0x22db2c: 0x8eb30050  lw          $s3, 0x50($s5)
    ctx->pc = 0x22db2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_22db30:
    // 0x22db30: 0x409026  xor         $s2, $v0, $zero
    ctx->pc = 0x22db30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_22db34:
    // 0x22db34: 0x8eb00054  lw          $s0, 0x54($s5)
    ctx->pc = 0x22db34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_22db38:
    // 0x22db38: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22db38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22db3c:
    // 0x22db3c: 0x8eb10058  lw          $s1, 0x58($s5)
    ctx->pc = 0x22db3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_22db40:
    // 0x22db40: 0x2e520001  sltiu       $s2, $s2, 0x1
    ctx->pc = 0x22db40u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22db44:
    // 0x22db44: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x22db44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_22db48:
    // 0x22db48: 0xc066e02  jal         func_19B808
label_22db4c:
    if (ctx->pc == 0x22DB4Cu) {
        ctx->pc = 0x22DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB48u;
        // 0x22db4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB50u;
        goto label_22db50;
    }
    ctx->pc = 0x22DB48u;
    SET_GPR_U32(ctx, 31, 0x22DB50u);
    ctx->pc = 0x22DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB48u;
    // 0x22db4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DB48u, 0x22DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB50u;
label_22db50:
    // 0x22db50: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x22db50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_22db54:
    // 0x22db54: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22db54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22db58:
    // 0x22db58: 0xc066e02  jal         func_19B808
label_22db5c:
    if (ctx->pc == 0x22DB5Cu) {
        ctx->pc = 0x22DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB58u;
        // 0x22db5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB60u;
        goto label_22db60;
    }
    ctx->pc = 0x22DB58u;
    SET_GPR_U32(ctx, 31, 0x22DB60u);
    ctx->pc = 0x22DB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB58u;
    // 0x22db5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DB58u, 0x22DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB60u;
label_22db60:
    // 0x22db60: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x22db60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_22db64:
    // 0x22db64: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22db64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22db68:
    // 0x22db68: 0xc066e02  jal         func_19B808
label_22db6c:
    if (ctx->pc == 0x22DB6Cu) {
        ctx->pc = 0x22DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB68u;
        // 0x22db6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB70u;
        goto label_22db70;
    }
    ctx->pc = 0x22DB68u;
    SET_GPR_U32(ctx, 31, 0x22DB70u);
    ctx->pc = 0x22DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB68u;
    // 0x22db6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DB68u, 0x22DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB70u;
label_22db70:
    // 0x22db70: 0xc066e44  jal         func_19B910
label_22db74:
    if (ctx->pc == 0x22DB74u) {
        ctx->pc = 0x22DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB70u;
        // 0x22db74: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB78u;
        goto label_22db78;
    }
    ctx->pc = 0x22DB70u;
    SET_GPR_U32(ctx, 31, 0x22DB78u);
    ctx->pc = 0x22DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB70u;
    // 0x22db74: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x22DB70u, 0x22DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB78u;
label_22db78:
    // 0x22db78: 0xc66c0050  lwc1        $f12, 0x50($s3)
    ctx->pc = 0x22db78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22db7c:
    // 0x22db7c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x22db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22db80:
    // 0x22db80: 0xc066e96  jal         func_19BA58
label_22db84:
    if (ctx->pc == 0x22DB84u) {
        ctx->pc = 0x22DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB80u;
        // 0x22db84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB88u;
        goto label_22db88;
    }
    ctx->pc = 0x22DB80u;
    SET_GPR_U32(ctx, 31, 0x22DB88u);
    ctx->pc = 0x22DB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB80u;
    // 0x22db84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA58u, 0x22DB80u, 0x22DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB88u;
label_22db88:
    // 0x22db88: 0xc66c0058  lwc1        $f12, 0x58($s3)
    ctx->pc = 0x22db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22db8c:
    // 0x22db8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x22db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22db90:
    // 0x22db90: 0xc066e6c  jal         func_19B9B0
label_22db94:
    if (ctx->pc == 0x22DB94u) {
        ctx->pc = 0x22DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB90u;
        // 0x22db94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB98u;
        goto label_22db98;
    }
    ctx->pc = 0x22DB90u;
    SET_GPR_U32(ctx, 31, 0x22DB98u);
    ctx->pc = 0x22DB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB90u;
    // 0x22db94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B9B0u, 0x22DB90u, 0x22DB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB98u;
label_22db98:
    // 0x22db98: 0xc66c0054  lwc1        $f12, 0x54($s3)
    ctx->pc = 0x22db98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22db9c:
    // 0x22db9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x22db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22dba0:
    // 0x22dba0: 0xc066ec0  jal         func_19BB00
label_22dba4:
    if (ctx->pc == 0x22DBA4u) {
        ctx->pc = 0x22DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBA0u;
        // 0x22dba4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DBA8u;
        goto label_22dba8;
    }
    ctx->pc = 0x22DBA0u;
    SET_GPR_U32(ctx, 31, 0x22DBA8u);
    ctx->pc = 0x22DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBA0u;
    // 0x22dba4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x22DBA0u, 0x22DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBA8u;
label_22dba8:
    // 0x22dba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22dba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22dbac:
    // 0x22dbac: 0x26660040  addiu       $a2, $s3, 0x40
    ctx->pc = 0x22dbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_22dbb0:
    // 0x22dbb0: 0xc066e1a  jal         func_19B868
label_22dbb4:
    if (ctx->pc == 0x22DBB4u) {
        ctx->pc = 0x22DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBB0u;
        // 0x22dbb4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DBB8u;
        goto label_22dbb8;
    }
    ctx->pc = 0x22DBB0u;
    SET_GPR_U32(ctx, 31, 0x22DBB8u);
    ctx->pc = 0x22DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBB0u;
    // 0x22dbb4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x22DBB0u, 0x22DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBB8u;
label_22dbb8:
    // 0x22dbb8: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x22dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22dbbc:
    // 0x22dbbc: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x22dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
label_22dbc0:
    // 0x22dbc0: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x22dbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_22dbc4:
    // 0x22dbc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22dbc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22dbc8:
    // 0x22dbc8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22dbcc:
    // 0x22dbcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22dbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22dbd0:
    // 0x22dbd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22dbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22dbd4:
    // 0x22dbd4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x22dbd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22dbd8:
    // 0x22dbd8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x22dbd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dbdc:
    // 0x22dbdc: 0x0  nop
    ctx->pc = 0x22dbdcu;
    // NOP
label_22dbe0:
    // 0x22dbe0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22dbe4:
    if (ctx->pc == 0x22DBE4u) {
        ctx->pc = 0x22DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBE0u;
        // 0x22dbe4: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DBE8u;
        goto label_22dbe8;
    }
    ctx->pc = 0x22DBE0u;
    {
        const bool branch_taken_0x22dbe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBE0u;
        // 0x22dbe4: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbe0) {
            ctx->pc = 0x22DBFCu;
            goto label_22dbfc;
        }
    }
    ctx->pc = 0x22DBE8u;
label_22dbe8:
    // 0x22dbe8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22dbec:
    // 0x22dbec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22dbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22dbf0:
    // 0x22dbf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22dbf4:
    // 0x22dbf4: 0x1000000d  b           . + 4 + (0xD << 2)
label_22dbf8:
    if (ctx->pc == 0x22DBF8u) {
        ctx->pc = 0x22DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBF4u;
        // 0x22dbf8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DBFCu;
        goto label_22dbfc;
    }
    ctx->pc = 0x22DBF4u;
    {
        const bool branch_taken_0x22dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBF4u;
        // 0x22dbf8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbf4) {
            ctx->pc = 0x22DC2Cu;
            goto label_22dc2c;
        }
    }
    ctx->pc = 0x22DBFCu;
label_22dbfc:
    // 0x22dbfc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_22dc00:
    // 0x22dc00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22dc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22dc04:
    // 0x22dc04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22dc08:
    // 0x22dc08: 0x0  nop
    ctx->pc = 0x22dc08u;
    // NOP
label_22dc0c:
    // 0x22dc0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22dc0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dc10:
    // 0x22dc10: 0x0  nop
    ctx->pc = 0x22dc10u;
    // NOP
label_22dc14:
    // 0x22dc14: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22dc18:
    if (ctx->pc == 0x22DC18u) {
        ctx->pc = 0x22DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC14u;
        // 0x22dc18: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC1Cu;
        goto label_22dc1c;
    }
    ctx->pc = 0x22DC14u;
    {
        const bool branch_taken_0x22dc14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC14u;
        // 0x22dc18: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc14) {
            ctx->pc = 0x22DC2Cu;
            goto label_22dc2c;
        }
    }
    ctx->pc = 0x22DC1Cu;
label_22dc1c:
    // 0x22dc1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22dc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22dc20:
    // 0x22dc20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22dc24:
    // 0x22dc24: 0x10000001  b           . + 4 + (0x1 << 2)
label_22dc28:
    if (ctx->pc == 0x22DC28u) {
        ctx->pc = 0x22DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC24u;
        // 0x22dc28: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC2Cu;
        goto label_22dc2c;
    }
    ctx->pc = 0x22DC24u;
    {
        const bool branch_taken_0x22dc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC24u;
        // 0x22dc28: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc24) {
            ctx->pc = 0x22DC2Cu;
            goto label_22dc2c;
        }
    }
    ctx->pc = 0x22DC2Cu;
label_22dc2c:
    // 0x22dc2c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x22dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22dc30:
    // 0x22dc30: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22dc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22dc34:
    // 0x22dc34: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x22dc34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_22dc38:
    // 0x22dc38: 0xc066e02  jal         func_19B808
label_22dc3c:
    if (ctx->pc == 0x22DC3Cu) {
        ctx->pc = 0x22DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC38u;
        // 0x22dc3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC40u;
        goto label_22dc40;
    }
    ctx->pc = 0x22DC38u;
    SET_GPR_U32(ctx, 31, 0x22DC40u);
    ctx->pc = 0x22DC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC38u;
    // 0x22dc3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DC38u, 0x22DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC40u;
label_22dc40:
    // 0x22dc40: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x22dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_22dc44:
    // 0x22dc44: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22dc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22dc48:
    // 0x22dc48: 0xc066e02  jal         func_19B808
label_22dc4c:
    if (ctx->pc == 0x22DC4Cu) {
        ctx->pc = 0x22DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC48u;
        // 0x22dc4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC50u;
        goto label_22dc50;
    }
    ctx->pc = 0x22DC48u;
    SET_GPR_U32(ctx, 31, 0x22DC50u);
    ctx->pc = 0x22DC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC48u;
    // 0x22dc4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DC48u, 0x22DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC50u;
label_22dc50:
    // 0x22dc50: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x22dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_22dc54:
    // 0x22dc54: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22dc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22dc58:
    // 0x22dc58: 0xc066e02  jal         func_19B808
label_22dc5c:
    if (ctx->pc == 0x22DC5Cu) {
        ctx->pc = 0x22DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC58u;
        // 0x22dc5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC60u;
        goto label_22dc60;
    }
    ctx->pc = 0x22DC58u;
    SET_GPR_U32(ctx, 31, 0x22DC60u);
    ctx->pc = 0x22DC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC58u;
    // 0x22dc5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DC58u, 0x22DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC60u;
label_22dc60:
    // 0x22dc60: 0xc066e44  jal         func_19B910
label_22dc64:
    if (ctx->pc == 0x22DC64u) {
        ctx->pc = 0x22DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC60u;
        // 0x22dc64: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC68u;
        goto label_22dc68;
    }
    ctx->pc = 0x22DC60u;
    SET_GPR_U32(ctx, 31, 0x22DC68u);
    ctx->pc = 0x22DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC60u;
    // 0x22dc64: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x22DC60u, 0x22DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC68u;
label_22dc68:
    // 0x22dc68: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x22dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22dc6c:
    // 0x22dc6c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x22dc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_22dc70:
    // 0x22dc70: 0xc066e96  jal         func_19BA58
label_22dc74:
    if (ctx->pc == 0x22DC74u) {
        ctx->pc = 0x22DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC70u;
        // 0x22dc74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC78u;
        goto label_22dc78;
    }
    ctx->pc = 0x22DC70u;
    SET_GPR_U32(ctx, 31, 0x22DC78u);
    ctx->pc = 0x22DC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC70u;
    // 0x22dc74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA58u, 0x22DC70u, 0x22DC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC78u;
label_22dc78:
    // 0x22dc78: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x22dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22dc7c:
    // 0x22dc7c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x22dc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_22dc80:
    // 0x22dc80: 0xc066e6c  jal         func_19B9B0
label_22dc84:
    if (ctx->pc == 0x22DC84u) {
        ctx->pc = 0x22DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC80u;
        // 0x22dc84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC88u;
        goto label_22dc88;
    }
    ctx->pc = 0x22DC80u;
    SET_GPR_U32(ctx, 31, 0x22DC88u);
    ctx->pc = 0x22DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC80u;
    // 0x22dc84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B9B0u, 0x22DC80u, 0x22DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC88u;
label_22dc88:
    // 0x22dc88: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x22dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22dc8c:
    // 0x22dc8c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x22dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_22dc90:
    // 0x22dc90: 0xc066ec0  jal         func_19BB00
label_22dc94:
    if (ctx->pc == 0x22DC94u) {
        ctx->pc = 0x22DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC90u;
        // 0x22dc94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC98u;
        goto label_22dc98;
    }
    ctx->pc = 0x22DC90u;
    SET_GPR_U32(ctx, 31, 0x22DC98u);
    ctx->pc = 0x22DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC90u;
    // 0x22dc94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x22DC90u, 0x22DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC98u;
label_22dc98:
    // 0x22dc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22dc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22dc9c:
    // 0x22dc9c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x22dc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_22dca0:
    // 0x22dca0: 0xc066e1a  jal         func_19B868
label_22dca4:
    if (ctx->pc == 0x22DCA4u) {
        ctx->pc = 0x22DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCA0u;
        // 0x22dca4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DCA8u;
        goto label_22dca8;
    }
    ctx->pc = 0x22DCA0u;
    SET_GPR_U32(ctx, 31, 0x22DCA8u);
    ctx->pc = 0x22DCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCA0u;
    // 0x22dca4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x22DCA0u, 0x22DCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCA8u;
label_22dca8:
    // 0x22dca8: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
label_22dcac:
    if (ctx->pc == 0x22DCACu) {
        ctx->pc = 0x22DCB0u;
        goto label_22dcb0;
    }
    ctx->pc = 0x22DCA8u;
    {
        const bool branch_taken_0x22dca8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dca8) {
            ctx->pc = 0x22DDBCu;
            goto label_22ddbc;
        }
    }
    ctx->pc = 0x22DCB0u;
label_22dcb0:
    // 0x22dcb0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x22dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_22dcb4:
    // 0x22dcb4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x22dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_22dcb8:
    // 0x22dcb8: 0x27b600d4  addiu       $s6, $sp, 0xD4
    ctx->pc = 0x22dcb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_22dcbc:
    // 0x22dcbc: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x22dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
label_22dcc0:
    // 0x22dcc0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x22dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_22dcc4:
    // 0x22dcc4: 0x27b300d8  addiu       $s3, $sp, 0xD8
    ctx->pc = 0x22dcc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_22dcc8:
    // 0x22dcc8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x22dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_22dccc:
    // 0x22dccc: 0x27b400dc  addiu       $s4, $sp, 0xDC
    ctx->pc = 0x22dcccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_22dcd0:
    // 0x22dcd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22dcd4:
    // 0x22dcd4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x22dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_22dcd8:
    // 0x22dcd8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x22dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_22dcdc:
    // 0x22dcdc: 0xc066e26  jal         func_19B898
label_22dce0:
    if (ctx->pc == 0x22DCE0u) {
        ctx->pc = 0x22DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCDCu;
        // 0x22dce0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DCE4u;
        goto label_22dce4;
    }
    ctx->pc = 0x22DCDCu;
    SET_GPR_U32(ctx, 31, 0x22DCE4u);
    ctx->pc = 0x22DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCDCu;
    // 0x22dce0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22DCDCu, 0x22DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCE4u;
label_22dce4:
    // 0x22dce4: 0xc6140054  lwc1        $f20, 0x54($s0)
    ctx->pc = 0x22dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22dce8:
    // 0x22dce8: 0xc066e44  jal         func_19B910
label_22dcec:
    if (ctx->pc == 0x22DCECu) {
        ctx->pc = 0x22DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCE8u;
        // 0x22dcec: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DCF0u;
        goto label_22dcf0;
    }
    ctx->pc = 0x22DCE8u;
    SET_GPR_U32(ctx, 31, 0x22DCF0u);
    ctx->pc = 0x22DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCE8u;
    // 0x22dcec: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x22DCE8u, 0x22DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCF0u;
label_22dcf0:
    // 0x22dcf0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x22dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_22dcf4:
    // 0x22dcf4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22dcf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22dcf8:
    // 0x22dcf8: 0xc066ec0  jal         func_19BB00
label_22dcfc:
    if (ctx->pc == 0x22DCFCu) {
        ctx->pc = 0x22DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DCF8u;
        // 0x22dcfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DD00u;
        goto label_22dd00;
    }
    ctx->pc = 0x22DCF8u;
    SET_GPR_U32(ctx, 31, 0x22DD00u);
    ctx->pc = 0x22DCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCF8u;
    // 0x22dcfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x22DCF8u, 0x22DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD00u;
label_22dd00:
    // 0x22dd00: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x22dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_22dd04:
    // 0x22dd04: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x22dd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_22dd08:
    // 0x22dd08: 0xc066d7a  jal         func_19B5E8
label_22dd0c:
    if (ctx->pc == 0x22DD0Cu) {
        ctx->pc = 0x22DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD08u;
        // 0x22dd0c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DD10u;
        goto label_22dd10;
    }
    ctx->pc = 0x22DD08u;
    SET_GPR_U32(ctx, 31, 0x22DD10u);
    ctx->pc = 0x22DD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD08u;
    // 0x22dd0c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x22DD08u, 0x22DD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD10u;
label_22dd10:
    // 0x22dd10: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x22dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_22dd14:
    // 0x22dd14: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x22dd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22dd18:
    // 0x22dd18: 0xc066e02  jal         func_19B808
label_22dd1c:
    if (ctx->pc == 0x22DD1Cu) {
        ctx->pc = 0x22DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD18u;
        // 0x22dd1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DD20u;
        goto label_22dd20;
    }
    ctx->pc = 0x22DD18u;
    SET_GPR_U32(ctx, 31, 0x22DD20u);
    ctx->pc = 0x22DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD18u;
    // 0x22dd1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DD18u, 0x22DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD20u;
label_22dd20:
    // 0x22dd20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22dd24:
    // 0x22dd24: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x22dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_22dd28:
    // 0x22dd28: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22dd28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22dd2c:
    // 0x22dd2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22dd2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22dd30:
    // 0x22dd30: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x22dd30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22dd34:
    // 0x22dd34: 0xc04bc90  jal         func_12F240
label_22dd38:
    if (ctx->pc == 0x22DD38u) {
        ctx->pc = 0x22DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD34u;
        // 0x22dd38: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DD3Cu;
        goto label_22dd3c;
    }
    ctx->pc = 0x22DD34u;
    SET_GPR_U32(ctx, 31, 0x22DD3Cu);
    ctx->pc = 0x22DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD34u;
    // 0x22dd38: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F240u, 0x22DD34u, 0x22DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD3Cu;
label_22dd3c:
    // 0x22dd3c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x22dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_22dd40:
    // 0x22dd40: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x22dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_22dd44:
    // 0x22dd44: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x22dd44u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_22dd48:
    // 0x22dd48: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x22dd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_22dd4c:
    // 0x22dd4c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x22dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_22dd50:
    // 0x22dd50: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x22dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_22dd54:
    // 0x22dd54: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x22dd54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_22dd58:
    // 0x22dd58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22dd5c:
    // 0x22dd5c: 0xc066e26  jal         func_19B898
label_22dd60:
    if (ctx->pc == 0x22DD60u) {
        ctx->pc = 0x22DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD5Cu;
        // 0x22dd60: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DD64u;
        goto label_22dd64;
    }
    ctx->pc = 0x22DD5Cu;
    SET_GPR_U32(ctx, 31, 0x22DD64u);
    ctx->pc = 0x22DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD5Cu;
    // 0x22dd60: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22DD5Cu, 0x22DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD64u;
label_22dd64:
    // 0x22dd64: 0xc6140054  lwc1        $f20, 0x54($s0)
    ctx->pc = 0x22dd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22dd68:
    // 0x22dd68: 0xc066e44  jal         func_19B910
label_22dd6c:
    if (ctx->pc == 0x22DD6Cu) {
        ctx->pc = 0x22DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD68u;
        // 0x22dd6c: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DD70u;
        goto label_22dd70;
    }
    ctx->pc = 0x22DD68u;
    SET_GPR_U32(ctx, 31, 0x22DD70u);
    ctx->pc = 0x22DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD68u;
    // 0x22dd6c: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x22DD68u, 0x22DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD70u;
label_22dd70:
    // 0x22dd70: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x22dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_22dd74:
    // 0x22dd74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22dd74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22dd78:
    // 0x22dd78: 0xc066ec0  jal         func_19BB00
label_22dd7c:
    if (ctx->pc == 0x22DD7Cu) {
        ctx->pc = 0x22DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD78u;
        // 0x22dd7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DD80u;
        goto label_22dd80;
    }
    ctx->pc = 0x22DD78u;
    SET_GPR_U32(ctx, 31, 0x22DD80u);
    ctx->pc = 0x22DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD78u;
    // 0x22dd7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x22DD78u, 0x22DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD80u;
label_22dd80:
    // 0x22dd80: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x22dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_22dd84:
    // 0x22dd84: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x22dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_22dd88:
    // 0x22dd88: 0xc066d7a  jal         func_19B5E8
label_22dd8c:
    if (ctx->pc == 0x22DD8Cu) {
        ctx->pc = 0x22DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD88u;
        // 0x22dd8c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DD90u;
        goto label_22dd90;
    }
    ctx->pc = 0x22DD88u;
    SET_GPR_U32(ctx, 31, 0x22DD90u);
    ctx->pc = 0x22DD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD88u;
    // 0x22dd8c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x22DD88u, 0x22DD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD90u;
label_22dd90:
    // 0x22dd90: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x22dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_22dd94:
    // 0x22dd94: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x22dd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22dd98:
    // 0x22dd98: 0xc066e02  jal         func_19B808
label_22dd9c:
    if (ctx->pc == 0x22DD9Cu) {
        ctx->pc = 0x22DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD98u;
        // 0x22dd9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DDA0u;
        goto label_22dda0;
    }
    ctx->pc = 0x22DD98u;
    SET_GPR_U32(ctx, 31, 0x22DDA0u);
    ctx->pc = 0x22DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD98u;
    // 0x22dd9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DD98u, 0x22DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDA0u;
label_22dda0:
    // 0x22dda0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22dda4:
    // 0x22dda4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x22dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_22dda8:
    // 0x22dda8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22dda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22ddac:
    // 0x22ddac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22ddacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ddb0:
    // 0x22ddb0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x22ddb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22ddb4:
    // 0x22ddb4: 0xc04bc90  jal         func_12F240
label_22ddb8:
    if (ctx->pc == 0x22DDB8u) {
        ctx->pc = 0x22DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDB4u;
        // 0x22ddb8: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DDBCu;
        goto label_22ddbc;
    }
    ctx->pc = 0x22DDB4u;
    SET_GPR_U32(ctx, 31, 0x22DDBCu);
    ctx->pc = 0x22DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DDB4u;
    // 0x22ddb8: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F240u, 0x22DDB4u, 0x22DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDBCu;
label_22ddbc:
    // 0x22ddbc: 0xc6220058  lwc1        $f2, 0x58($s1)
    ctx->pc = 0x22ddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22ddc0:
    // 0x22ddc0: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x22ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
label_22ddc4:
    // 0x22ddc4: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x22ddc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_22ddc8:
    // 0x22ddc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ddc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22ddcc:
    // 0x22ddcc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22ddd0:
    // 0x22ddd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22ddd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22ddd4:
    // 0x22ddd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ddd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ddd8:
    // 0x22ddd8: 0x0  nop
    ctx->pc = 0x22ddd8u;
    // NOP
label_22dddc:
    // 0x22dddc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22dddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_22dde0:
    // 0x22dde0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22dde0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22dde4:
    // 0x22dde4: 0x0  nop
    ctx->pc = 0x22dde4u;
    // NOP
label_22dde8:
    // 0x22dde8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22ddec:
    if (ctx->pc == 0x22DDECu) {
        ctx->pc = 0x22DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDE8u;
        // 0x22ddec: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DDF0u;
        goto label_22ddf0;
    }
    ctx->pc = 0x22DDE8u;
    {
        const bool branch_taken_0x22dde8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDE8u;
        // 0x22ddec: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dde8) {
            ctx->pc = 0x22DE04u;
            goto label_22de04;
        }
    }
    ctx->pc = 0x22DDF0u;
label_22ddf0:
    // 0x22ddf0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22ddf4:
    // 0x22ddf4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22ddf8:
    // 0x22ddf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ddf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ddfc:
    // 0x22ddfc: 0x1000000d  b           . + 4 + (0xD << 2)
label_22de00:
    if (ctx->pc == 0x22DE00u) {
        ctx->pc = 0x22DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDFCu;
        // 0x22de00: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE04u;
        goto label_22de04;
    }
    ctx->pc = 0x22DDFCu;
    {
        const bool branch_taken_0x22ddfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DDFCu;
        // 0x22de00: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ddfc) {
            ctx->pc = 0x22DE34u;
            goto label_22de34;
        }
    }
    ctx->pc = 0x22DE04u;
label_22de04:
    // 0x22de04: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22de04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_22de08:
    // 0x22de08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22de08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22de0c:
    // 0x22de0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22de0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22de10:
    // 0x22de10: 0x0  nop
    ctx->pc = 0x22de10u;
    // NOP
label_22de14:
    // 0x22de14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22de14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22de18:
    // 0x22de18: 0x0  nop
    ctx->pc = 0x22de18u;
    // NOP
label_22de1c:
    // 0x22de1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22de20:
    if (ctx->pc == 0x22DE20u) {
        ctx->pc = 0x22DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE1Cu;
        // 0x22de20: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE24u;
        goto label_22de24;
    }
    ctx->pc = 0x22DE1Cu;
    {
        const bool branch_taken_0x22de1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE1Cu;
        // 0x22de20: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de1c) {
            ctx->pc = 0x22DE34u;
            goto label_22de34;
        }
    }
    ctx->pc = 0x22DE24u;
label_22de24:
    // 0x22de24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22de28:
    // 0x22de28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22de28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22de2c:
    // 0x22de2c: 0x10000001  b           . + 4 + (0x1 << 2)
label_22de30:
    if (ctx->pc == 0x22DE30u) {
        ctx->pc = 0x22DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE2Cu;
        // 0x22de30: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE34u;
        goto label_22de34;
    }
    ctx->pc = 0x22DE2Cu;
    {
        const bool branch_taken_0x22de2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE2Cu;
        // 0x22de30: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de2c) {
            ctx->pc = 0x22DE34u;
            goto label_22de34;
        }
    }
    ctx->pc = 0x22DE34u;
label_22de34:
    // 0x22de34: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x22de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22de38:
    // 0x22de38: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22de38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22de3c:
    // 0x22de3c: 0xe6210058  swc1        $f1, 0x58($s1)
    ctx->pc = 0x22de3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_22de40:
    // 0x22de40: 0xc066e02  jal         func_19B808
label_22de44:
    if (ctx->pc == 0x22DE44u) {
        ctx->pc = 0x22DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE40u;
        // 0x22de44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE48u;
        goto label_22de48;
    }
    ctx->pc = 0x22DE40u;
    SET_GPR_U32(ctx, 31, 0x22DE48u);
    ctx->pc = 0x22DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE40u;
    // 0x22de44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DE40u, 0x22DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE48u;
label_22de48:
    // 0x22de48: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x22de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_22de4c:
    // 0x22de4c: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22de4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22de50:
    // 0x22de50: 0xc066e02  jal         func_19B808
label_22de54:
    if (ctx->pc == 0x22DE54u) {
        ctx->pc = 0x22DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE50u;
        // 0x22de54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE58u;
        goto label_22de58;
    }
    ctx->pc = 0x22DE50u;
    SET_GPR_U32(ctx, 31, 0x22DE58u);
    ctx->pc = 0x22DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE50u;
    // 0x22de54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DE50u, 0x22DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE58u;
label_22de58:
    // 0x22de58: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x22de58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_22de5c:
    // 0x22de5c: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x22de5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_22de60:
    // 0x22de60: 0xc066e02  jal         func_19B808
label_22de64:
    if (ctx->pc == 0x22DE64u) {
        ctx->pc = 0x22DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE60u;
        // 0x22de64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE68u;
        goto label_22de68;
    }
    ctx->pc = 0x22DE60u;
    SET_GPR_U32(ctx, 31, 0x22DE68u);
    ctx->pc = 0x22DE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE60u;
    // 0x22de64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DE60u, 0x22DE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE68u;
label_22de68:
    // 0x22de68: 0xc066e44  jal         func_19B910
label_22de6c:
    if (ctx->pc == 0x22DE6Cu) {
        ctx->pc = 0x22DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE68u;
        // 0x22de6c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE70u;
        goto label_22de70;
    }
    ctx->pc = 0x22DE68u;
    SET_GPR_U32(ctx, 31, 0x22DE70u);
    ctx->pc = 0x22DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE68u;
    // 0x22de6c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x22DE68u, 0x22DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE70u;
label_22de70:
    // 0x22de70: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x22de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22de74:
    // 0x22de74: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x22de74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_22de78:
    // 0x22de78: 0xc066e96  jal         func_19BA58
label_22de7c:
    if (ctx->pc == 0x22DE7Cu) {
        ctx->pc = 0x22DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE78u;
        // 0x22de7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE80u;
        goto label_22de80;
    }
    ctx->pc = 0x22DE78u;
    SET_GPR_U32(ctx, 31, 0x22DE80u);
    ctx->pc = 0x22DE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE78u;
    // 0x22de7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA58u, 0x22DE78u, 0x22DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE80u;
label_22de80:
    // 0x22de80: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x22de80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22de84:
    // 0x22de84: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x22de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_22de88:
    // 0x22de88: 0xc066e6c  jal         func_19B9B0
label_22de8c:
    if (ctx->pc == 0x22DE8Cu) {
        ctx->pc = 0x22DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE88u;
        // 0x22de8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DE90u;
        goto label_22de90;
    }
    ctx->pc = 0x22DE88u;
    SET_GPR_U32(ctx, 31, 0x22DE90u);
    ctx->pc = 0x22DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE88u;
    // 0x22de8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B9B0u, 0x22DE88u, 0x22DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE90u;
label_22de90:
    // 0x22de90: 0xc62c0054  lwc1        $f12, 0x54($s1)
    ctx->pc = 0x22de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22de94:
    // 0x22de94: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x22de94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_22de98:
    // 0x22de98: 0xc066ec0  jal         func_19BB00
label_22de9c:
    if (ctx->pc == 0x22DE9Cu) {
        ctx->pc = 0x22DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE98u;
        // 0x22de9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEA0u;
        goto label_22dea0;
    }
    ctx->pc = 0x22DE98u;
    SET_GPR_U32(ctx, 31, 0x22DEA0u);
    ctx->pc = 0x22DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE98u;
    // 0x22de9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x22DE98u, 0x22DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DEA0u;
label_22dea0:
    // 0x22dea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22dea4:
    // 0x22dea4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x22dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_22dea8:
    // 0x22dea8: 0xc066e1a  jal         func_19B868
label_22deac:
    if (ctx->pc == 0x22DEACu) {
        ctx->pc = 0x22DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEA8u;
        // 0x22deac: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEB0u;
        goto label_22deb0;
    }
    ctx->pc = 0x22DEA8u;
    SET_GPR_U32(ctx, 31, 0x22DEB0u);
    ctx->pc = 0x22DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DEA8u;
    // 0x22deac: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x22DEA8u, 0x22DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DEB0u;
label_22deb0:
    // 0x22deb0: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
label_22deb4:
    if (ctx->pc == 0x22DEB4u) {
        ctx->pc = 0x22DEB8u;
        goto label_22deb8;
    }
    ctx->pc = 0x22DEB0u;
    {
        const bool branch_taken_0x22deb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22deb0) {
            ctx->pc = 0x22DFC4u;
            { ctx->pc = 0x22dfc4; return; }
        }
    }
    ctx->pc = 0x22DEB8u;
label_22deb8:
    // 0x22deb8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x22deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_22debc:
    // 0x22debc: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x22debcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_22dec0:
    // 0x22dec0: 0x27b000e4  addiu       $s0, $sp, 0xE4
    ctx->pc = 0x22dec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_22dec4:
    // 0x22dec4: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x22dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
label_22dec8:
    // 0x22dec8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x22dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_22decc:
    // 0x22decc: 0x27b200e8  addiu       $s2, $sp, 0xE8
    ctx->pc = 0x22deccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_22ded0:
    // 0x22ded0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x22ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_22ded4:
    // 0x22ded4: 0x27b300ec  addiu       $s3, $sp, 0xEC
    ctx->pc = 0x22ded4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_22ded8:
    // 0x22ded8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22dedc:
    // 0x22dedc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x22dedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_22dee0:
    // 0x22dee0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x22dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_22dee4:
    // 0x22dee4: 0xc066e26  jal         func_19B898
label_22dee8:
    if (ctx->pc == 0x22DEE8u) {
        ctx->pc = 0x22DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEE4u;
        // 0x22dee8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEECu;
        goto label_22deec;
    }
    ctx->pc = 0x22DEE4u;
    SET_GPR_U32(ctx, 31, 0x22DEECu);
    ctx->pc = 0x22DEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DEE4u;
    // 0x22dee8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22DEE4u, 0x22DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DEECu;
label_22deec:
    // 0x22deec: 0xc6340054  lwc1        $f20, 0x54($s1)
    ctx->pc = 0x22deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22def0:
    // 0x22def0: 0xc066e44  jal         func_19B910
label_22def4:
    if (ctx->pc == 0x22DEF4u) {
        ctx->pc = 0x22DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEF0u;
        // 0x22def4: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DEF8u;
        goto label_22def8;
    }
    ctx->pc = 0x22DEF0u;
    SET_GPR_U32(ctx, 31, 0x22DEF8u);
    ctx->pc = 0x22DEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DEF0u;
    // 0x22def4: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x22DEF0u, 0x22DEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DEF8u;
label_22def8:
    // 0x22def8: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x22def8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_22defc:
    // 0x22defc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22defcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22df00:
    // 0x22df00: 0xc066ec0  jal         func_19BB00
label_22df04:
    if (ctx->pc == 0x22DF04u) {
        ctx->pc = 0x22DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF00u;
        // 0x22df04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF08u;
        goto label_22df08;
    }
    ctx->pc = 0x22DF00u;
    SET_GPR_U32(ctx, 31, 0x22DF08u);
    ctx->pc = 0x22DF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF00u;
    // 0x22df04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x22DF00u, 0x22DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF08u;
label_22df08:
    // 0x22df08: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x22df08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_22df0c:
    // 0x22df0c: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x22df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_22df10:
    // 0x22df10: 0xc066d7a  jal         func_19B5E8
label_22df14:
    if (ctx->pc == 0x22DF14u) {
        ctx->pc = 0x22DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF10u;
        // 0x22df14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF18u;
        goto label_22df18;
    }
    ctx->pc = 0x22DF10u;
    SET_GPR_U32(ctx, 31, 0x22DF18u);
    ctx->pc = 0x22DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF10u;
    // 0x22df14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x22DF10u, 0x22DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF18u;
label_22df18:
    // 0x22df18: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x22df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_22df1c:
    // 0x22df1c: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x22df1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22df20:
    // 0x22df20: 0xc066e02  jal         func_19B808
label_22df24:
    if (ctx->pc == 0x22DF24u) {
        ctx->pc = 0x22DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF20u;
        // 0x22df24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF28u;
        goto label_22df28;
    }
    ctx->pc = 0x22DF20u;
    SET_GPR_U32(ctx, 31, 0x22DF28u);
    ctx->pc = 0x22DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF20u;
    // 0x22df24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x22DF20u, 0x22DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF28u;
label_22df28:
    // 0x22df28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22df28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22df2c:
    // 0x22df2c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x22df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_22df30:
    // 0x22df30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22df30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22df34:
    // 0x22df34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22df34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22df38:
    // 0x22df38: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x22df38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22df3c:
    // 0x22df3c: 0xc04bc90  jal         func_12F240
label_22df40:
    if (ctx->pc == 0x22DF40u) {
        ctx->pc = 0x22DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF3Cu;
        // 0x22df40: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DF44u;
        goto label_22df44;
    }
    ctx->pc = 0x22DF3Cu;
    SET_GPR_U32(ctx, 31, 0x22DF44u);
    ctx->pc = 0x22DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF3Cu;
    // 0x22df40: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F240u, 0x22DF3Cu, 0x22DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF44u;
label_22df44:
    // 0x22df44: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x22df44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_22df48:
    // 0x22df48: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x22df48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_22df4c:
    // 0x22df4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22df50:
    // 0x22df50: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x22df50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_22df54:
    // 0x22df54: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x22df54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_22df58:
    // 0x22df58: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x22df58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_22df5c:
    // 0x22df5c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x22df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x22df60u;
    return;
}
