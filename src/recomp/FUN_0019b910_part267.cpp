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


void FUN_0019b910_part267(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21d730u: goto label_21d730;
        case 0x21d734u: goto label_21d734;
        case 0x21d738u: goto label_21d738;
        case 0x21d73cu: goto label_21d73c;
        case 0x21d740u: goto label_21d740;
        case 0x21d744u: goto label_21d744;
        case 0x21d748u: goto label_21d748;
        case 0x21d74cu: goto label_21d74c;
        case 0x21d750u: goto label_21d750;
        case 0x21d754u: goto label_21d754;
        case 0x21d758u: goto label_21d758;
        case 0x21d75cu: goto label_21d75c;
        case 0x21d760u: goto label_21d760;
        case 0x21d764u: goto label_21d764;
        case 0x21d768u: goto label_21d768;
        case 0x21d76cu: goto label_21d76c;
        case 0x21d770u: goto label_21d770;
        case 0x21d774u: goto label_21d774;
        case 0x21d778u: goto label_21d778;
        case 0x21d77cu: goto label_21d77c;
        case 0x21d780u: goto label_21d780;
        case 0x21d784u: goto label_21d784;
        case 0x21d788u: goto label_21d788;
        case 0x21d78cu: goto label_21d78c;
        case 0x21d790u: goto label_21d790;
        case 0x21d794u: goto label_21d794;
        case 0x21d798u: goto label_21d798;
        case 0x21d79cu: goto label_21d79c;
        case 0x21d7a0u: goto label_21d7a0;
        case 0x21d7a4u: goto label_21d7a4;
        case 0x21d7a8u: goto label_21d7a8;
        case 0x21d7acu: goto label_21d7ac;
        case 0x21d7b0u: goto label_21d7b0;
        case 0x21d7b4u: goto label_21d7b4;
        case 0x21d7b8u: goto label_21d7b8;
        case 0x21d7bcu: goto label_21d7bc;
        case 0x21d7c0u: goto label_21d7c0;
        case 0x21d7c4u: goto label_21d7c4;
        case 0x21d7c8u: goto label_21d7c8;
        case 0x21d7ccu: goto label_21d7cc;
        case 0x21d7d0u: goto label_21d7d0;
        case 0x21d7d4u: goto label_21d7d4;
        case 0x21d7d8u: goto label_21d7d8;
        case 0x21d7dcu: goto label_21d7dc;
        case 0x21d7e0u: goto label_21d7e0;
        case 0x21d7e4u: goto label_21d7e4;
        case 0x21d7e8u: goto label_21d7e8;
        case 0x21d7ecu: goto label_21d7ec;
        case 0x21d7f0u: goto label_21d7f0;
        case 0x21d7f4u: goto label_21d7f4;
        case 0x21d7f8u: goto label_21d7f8;
        case 0x21d7fcu: goto label_21d7fc;
        case 0x21d800u: goto label_21d800;
        case 0x21d804u: goto label_21d804;
        case 0x21d808u: goto label_21d808;
        case 0x21d80cu: goto label_21d80c;
        case 0x21d810u: goto label_21d810;
        case 0x21d814u: goto label_21d814;
        case 0x21d818u: goto label_21d818;
        case 0x21d81cu: goto label_21d81c;
        case 0x21d820u: goto label_21d820;
        case 0x21d824u: goto label_21d824;
        case 0x21d828u: goto label_21d828;
        case 0x21d82cu: goto label_21d82c;
        case 0x21d830u: goto label_21d830;
        case 0x21d834u: goto label_21d834;
        case 0x21d838u: goto label_21d838;
        case 0x21d83cu: goto label_21d83c;
        case 0x21d840u: goto label_21d840;
        case 0x21d844u: goto label_21d844;
        case 0x21d848u: goto label_21d848;
        case 0x21d84cu: goto label_21d84c;
        case 0x21d850u: goto label_21d850;
        case 0x21d854u: goto label_21d854;
        case 0x21d858u: goto label_21d858;
        case 0x21d85cu: goto label_21d85c;
        case 0x21d860u: goto label_21d860;
        case 0x21d864u: goto label_21d864;
        case 0x21d868u: goto label_21d868;
        case 0x21d86cu: goto label_21d86c;
        case 0x21d870u: goto label_21d870;
        case 0x21d874u: goto label_21d874;
        case 0x21d878u: goto label_21d878;
        case 0x21d87cu: goto label_21d87c;
        case 0x21d880u: goto label_21d880;
        case 0x21d884u: goto label_21d884;
        case 0x21d888u: goto label_21d888;
        case 0x21d88cu: goto label_21d88c;
        case 0x21d890u: goto label_21d890;
        case 0x21d894u: goto label_21d894;
        case 0x21d898u: goto label_21d898;
        case 0x21d89cu: goto label_21d89c;
        case 0x21d8a0u: goto label_21d8a0;
        case 0x21d8a4u: goto label_21d8a4;
        case 0x21d8a8u: goto label_21d8a8;
        case 0x21d8acu: goto label_21d8ac;
        case 0x21d8b0u: goto label_21d8b0;
        case 0x21d8b4u: goto label_21d8b4;
        case 0x21d8b8u: goto label_21d8b8;
        case 0x21d8bcu: goto label_21d8bc;
        case 0x21d8c0u: goto label_21d8c0;
        case 0x21d8c4u: goto label_21d8c4;
        case 0x21d8c8u: goto label_21d8c8;
        case 0x21d8ccu: goto label_21d8cc;
        case 0x21d8d0u: goto label_21d8d0;
        case 0x21d8d4u: goto label_21d8d4;
        case 0x21d8d8u: goto label_21d8d8;
        case 0x21d8dcu: goto label_21d8dc;
        case 0x21d8e0u: goto label_21d8e0;
        case 0x21d8e4u: goto label_21d8e4;
        case 0x21d8e8u: goto label_21d8e8;
        case 0x21d8ecu: goto label_21d8ec;
        case 0x21d8f0u: goto label_21d8f0;
        case 0x21d8f4u: goto label_21d8f4;
        case 0x21d8f8u: goto label_21d8f8;
        case 0x21d8fcu: goto label_21d8fc;
        case 0x21d900u: goto label_21d900;
        case 0x21d904u: goto label_21d904;
        case 0x21d908u: goto label_21d908;
        case 0x21d90cu: goto label_21d90c;
        case 0x21d910u: goto label_21d910;
        case 0x21d914u: goto label_21d914;
        case 0x21d918u: goto label_21d918;
        case 0x21d91cu: goto label_21d91c;
        case 0x21d920u: goto label_21d920;
        case 0x21d924u: goto label_21d924;
        case 0x21d928u: goto label_21d928;
        case 0x21d92cu: goto label_21d92c;
        case 0x21d930u: goto label_21d930;
        case 0x21d934u: goto label_21d934;
        case 0x21d938u: goto label_21d938;
        case 0x21d93cu: goto label_21d93c;
        case 0x21d940u: goto label_21d940;
        case 0x21d944u: goto label_21d944;
        case 0x21d948u: goto label_21d948;
        case 0x21d94cu: goto label_21d94c;
        case 0x21d950u: goto label_21d950;
        case 0x21d954u: goto label_21d954;
        case 0x21d958u: goto label_21d958;
        case 0x21d95cu: goto label_21d95c;
        case 0x21d960u: goto label_21d960;
        case 0x21d964u: goto label_21d964;
        case 0x21d968u: goto label_21d968;
        case 0x21d96cu: goto label_21d96c;
        case 0x21d970u: goto label_21d970;
        case 0x21d974u: goto label_21d974;
        case 0x21d978u: goto label_21d978;
        case 0x21d97cu: goto label_21d97c;
        case 0x21d980u: goto label_21d980;
        case 0x21d984u: goto label_21d984;
        case 0x21d988u: goto label_21d988;
        case 0x21d98cu: goto label_21d98c;
        case 0x21d990u: goto label_21d990;
        case 0x21d994u: goto label_21d994;
        case 0x21d998u: goto label_21d998;
        case 0x21d99cu: goto label_21d99c;
        case 0x21d9a0u: goto label_21d9a0;
        case 0x21d9a4u: goto label_21d9a4;
        case 0x21d9a8u: goto label_21d9a8;
        case 0x21d9acu: goto label_21d9ac;
        case 0x21d9b0u: goto label_21d9b0;
        case 0x21d9b4u: goto label_21d9b4;
        case 0x21d9b8u: goto label_21d9b8;
        case 0x21d9bcu: goto label_21d9bc;
        case 0x21d9c0u: goto label_21d9c0;
        case 0x21d9c4u: goto label_21d9c4;
        case 0x21d9c8u: goto label_21d9c8;
        case 0x21d9ccu: goto label_21d9cc;
        case 0x21d9d0u: goto label_21d9d0;
        case 0x21d9d4u: goto label_21d9d4;
        case 0x21d9d8u: goto label_21d9d8;
        case 0x21d9dcu: goto label_21d9dc;
        case 0x21d9e0u: goto label_21d9e0;
        case 0x21d9e4u: goto label_21d9e4;
        case 0x21d9e8u: goto label_21d9e8;
        case 0x21d9ecu: goto label_21d9ec;
        case 0x21d9f0u: goto label_21d9f0;
        case 0x21d9f4u: goto label_21d9f4;
        case 0x21d9f8u: goto label_21d9f8;
        case 0x21d9fcu: goto label_21d9fc;
        case 0x21da00u: goto label_21da00;
        case 0x21da04u: goto label_21da04;
        case 0x21da08u: goto label_21da08;
        case 0x21da0cu: goto label_21da0c;
        case 0x21da10u: goto label_21da10;
        case 0x21da14u: goto label_21da14;
        case 0x21da18u: goto label_21da18;
        case 0x21da1cu: goto label_21da1c;
        case 0x21da20u: goto label_21da20;
        case 0x21da24u: goto label_21da24;
        case 0x21da28u: goto label_21da28;
        case 0x21da2cu: goto label_21da2c;
        case 0x21da30u: goto label_21da30;
        case 0x21da34u: goto label_21da34;
        case 0x21da38u: goto label_21da38;
        case 0x21da3cu: goto label_21da3c;
        case 0x21da40u: goto label_21da40;
        case 0x21da44u: goto label_21da44;
        case 0x21da48u: goto label_21da48;
        case 0x21da4cu: goto label_21da4c;
        case 0x21da50u: goto label_21da50;
        case 0x21da54u: goto label_21da54;
        case 0x21da58u: goto label_21da58;
        case 0x21da5cu: goto label_21da5c;
        case 0x21da60u: goto label_21da60;
        case 0x21da64u: goto label_21da64;
        case 0x21da68u: goto label_21da68;
        case 0x21da6cu: goto label_21da6c;
        case 0x21da70u: goto label_21da70;
        case 0x21da74u: goto label_21da74;
        case 0x21da78u: goto label_21da78;
        case 0x21da7cu: goto label_21da7c;
        case 0x21da80u: goto label_21da80;
        case 0x21da84u: goto label_21da84;
        case 0x21da88u: goto label_21da88;
        case 0x21da8cu: goto label_21da8c;
        case 0x21da90u: goto label_21da90;
        case 0x21da94u: goto label_21da94;
        case 0x21da98u: goto label_21da98;
        case 0x21da9cu: goto label_21da9c;
        case 0x21daa0u: goto label_21daa0;
        case 0x21daa4u: goto label_21daa4;
        case 0x21daa8u: goto label_21daa8;
        case 0x21daacu: goto label_21daac;
        case 0x21dab0u: goto label_21dab0;
        case 0x21dab4u: goto label_21dab4;
        case 0x21dab8u: goto label_21dab8;
        case 0x21dabcu: goto label_21dabc;
        case 0x21dac0u: goto label_21dac0;
        case 0x21dac4u: goto label_21dac4;
        case 0x21dac8u: goto label_21dac8;
        case 0x21daccu: goto label_21dacc;
        case 0x21dad0u: goto label_21dad0;
        case 0x21dad4u: goto label_21dad4;
        case 0x21dad8u: goto label_21dad8;
        case 0x21dadcu: goto label_21dadc;
        case 0x21dae0u: goto label_21dae0;
        case 0x21dae4u: goto label_21dae4;
        case 0x21dae8u: goto label_21dae8;
        case 0x21daecu: goto label_21daec;
        case 0x21daf0u: goto label_21daf0;
        case 0x21daf4u: goto label_21daf4;
        case 0x21daf8u: goto label_21daf8;
        case 0x21dafcu: goto label_21dafc;
        case 0x21db00u: goto label_21db00;
        case 0x21db04u: goto label_21db04;
        case 0x21db08u: goto label_21db08;
        case 0x21db0cu: goto label_21db0c;
        case 0x21db10u: goto label_21db10;
        case 0x21db14u: goto label_21db14;
        case 0x21db18u: goto label_21db18;
        case 0x21db1cu: goto label_21db1c;
        case 0x21db20u: goto label_21db20;
        case 0x21db24u: goto label_21db24;
        case 0x21db28u: goto label_21db28;
        case 0x21db2cu: goto label_21db2c;
        case 0x21db30u: goto label_21db30;
        case 0x21db34u: goto label_21db34;
        case 0x21db38u: goto label_21db38;
        case 0x21db3cu: goto label_21db3c;
        case 0x21db40u: goto label_21db40;
        case 0x21db44u: goto label_21db44;
        case 0x21db48u: goto label_21db48;
        case 0x21db4cu: goto label_21db4c;
        case 0x21db50u: goto label_21db50;
        case 0x21db54u: goto label_21db54;
        case 0x21db58u: goto label_21db58;
        case 0x21db5cu: goto label_21db5c;
        case 0x21db60u: goto label_21db60;
        case 0x21db64u: goto label_21db64;
        case 0x21db68u: goto label_21db68;
        case 0x21db6cu: goto label_21db6c;
        case 0x21db70u: goto label_21db70;
        case 0x21db74u: goto label_21db74;
        case 0x21db78u: goto label_21db78;
        case 0x21db7cu: goto label_21db7c;
        case 0x21db80u: goto label_21db80;
        case 0x21db84u: goto label_21db84;
        case 0x21db88u: goto label_21db88;
        case 0x21db8cu: goto label_21db8c;
        case 0x21db90u: goto label_21db90;
        case 0x21db94u: goto label_21db94;
        case 0x21db98u: goto label_21db98;
        case 0x21db9cu: goto label_21db9c;
        case 0x21dba0u: goto label_21dba0;
        case 0x21dba4u: goto label_21dba4;
        case 0x21dba8u: goto label_21dba8;
        case 0x21dbacu: goto label_21dbac;
        case 0x21dbb0u: goto label_21dbb0;
        case 0x21dbb4u: goto label_21dbb4;
        case 0x21dbb8u: goto label_21dbb8;
        case 0x21dbbcu: goto label_21dbbc;
        case 0x21dbc0u: goto label_21dbc0;
        case 0x21dbc4u: goto label_21dbc4;
        case 0x21dbc8u: goto label_21dbc8;
        case 0x21dbccu: goto label_21dbcc;
        case 0x21dbd0u: goto label_21dbd0;
        case 0x21dbd4u: goto label_21dbd4;
        case 0x21dbd8u: goto label_21dbd8;
        case 0x21dbdcu: goto label_21dbdc;
        case 0x21dbe0u: goto label_21dbe0;
        case 0x21dbe4u: goto label_21dbe4;
        case 0x21dbe8u: goto label_21dbe8;
        case 0x21dbecu: goto label_21dbec;
        case 0x21dbf0u: goto label_21dbf0;
        case 0x21dbf4u: goto label_21dbf4;
        case 0x21dbf8u: goto label_21dbf8;
        case 0x21dbfcu: goto label_21dbfc;
        case 0x21dc00u: goto label_21dc00;
        case 0x21dc04u: goto label_21dc04;
        case 0x21dc08u: goto label_21dc08;
        case 0x21dc0cu: goto label_21dc0c;
        case 0x21dc10u: goto label_21dc10;
        case 0x21dc14u: goto label_21dc14;
        case 0x21dc18u: goto label_21dc18;
        case 0x21dc1cu: goto label_21dc1c;
        case 0x21dc20u: goto label_21dc20;
        case 0x21dc24u: goto label_21dc24;
        case 0x21dc28u: goto label_21dc28;
        case 0x21dc2cu: goto label_21dc2c;
        case 0x21dc30u: goto label_21dc30;
        case 0x21dc34u: goto label_21dc34;
        case 0x21dc38u: goto label_21dc38;
        case 0x21dc3cu: goto label_21dc3c;
        case 0x21dc40u: goto label_21dc40;
        case 0x21dc44u: goto label_21dc44;
        case 0x21dc48u: goto label_21dc48;
        case 0x21dc4cu: goto label_21dc4c;
        case 0x21dc50u: goto label_21dc50;
        case 0x21dc54u: goto label_21dc54;
        case 0x21dc58u: goto label_21dc58;
        case 0x21dc5cu: goto label_21dc5c;
        case 0x21dc60u: goto label_21dc60;
        case 0x21dc64u: goto label_21dc64;
        case 0x21dc68u: goto label_21dc68;
        case 0x21dc6cu: goto label_21dc6c;
        case 0x21dc70u: goto label_21dc70;
        case 0x21dc74u: goto label_21dc74;
        case 0x21dc78u: goto label_21dc78;
        case 0x21dc7cu: goto label_21dc7c;
        case 0x21dc80u: goto label_21dc80;
        case 0x21dc84u: goto label_21dc84;
        case 0x21dc88u: goto label_21dc88;
        case 0x21dc8cu: goto label_21dc8c;
        case 0x21dc90u: goto label_21dc90;
        case 0x21dc94u: goto label_21dc94;
        case 0x21dc98u: goto label_21dc98;
        case 0x21dc9cu: goto label_21dc9c;
        case 0x21dca0u: goto label_21dca0;
        case 0x21dca4u: goto label_21dca4;
        case 0x21dca8u: goto label_21dca8;
        case 0x21dcacu: goto label_21dcac;
        case 0x21dcb0u: goto label_21dcb0;
        case 0x21dcb4u: goto label_21dcb4;
        case 0x21dcb8u: goto label_21dcb8;
        case 0x21dcbcu: goto label_21dcbc;
        case 0x21dcc0u: goto label_21dcc0;
        case 0x21dcc4u: goto label_21dcc4;
        case 0x21dcc8u: goto label_21dcc8;
        case 0x21dcccu: goto label_21dccc;
        case 0x21dcd0u: goto label_21dcd0;
        case 0x21dcd4u: goto label_21dcd4;
        case 0x21dcd8u: goto label_21dcd8;
        case 0x21dcdcu: goto label_21dcdc;
        case 0x21dce0u: goto label_21dce0;
        case 0x21dce4u: goto label_21dce4;
        case 0x21dce8u: goto label_21dce8;
        case 0x21dcecu: goto label_21dcec;
        case 0x21dcf0u: goto label_21dcf0;
        case 0x21dcf4u: goto label_21dcf4;
        case 0x21dcf8u: goto label_21dcf8;
        case 0x21dcfcu: goto label_21dcfc;
        case 0x21dd00u: goto label_21dd00;
        case 0x21dd04u: goto label_21dd04;
        case 0x21dd08u: goto label_21dd08;
        case 0x21dd0cu: goto label_21dd0c;
        case 0x21dd10u: goto label_21dd10;
        case 0x21dd14u: goto label_21dd14;
        case 0x21dd18u: goto label_21dd18;
        case 0x21dd1cu: goto label_21dd1c;
        case 0x21dd20u: goto label_21dd20;
        case 0x21dd24u: goto label_21dd24;
        case 0x21dd28u: goto label_21dd28;
        case 0x21dd2cu: goto label_21dd2c;
        case 0x21dd30u: goto label_21dd30;
        case 0x21dd34u: goto label_21dd34;
        case 0x21dd38u: goto label_21dd38;
        case 0x21dd3cu: goto label_21dd3c;
        case 0x21dd40u: goto label_21dd40;
        case 0x21dd44u: goto label_21dd44;
        case 0x21dd48u: goto label_21dd48;
        case 0x21dd4cu: goto label_21dd4c;
        case 0x21dd50u: goto label_21dd50;
        case 0x21dd54u: goto label_21dd54;
        case 0x21dd58u: goto label_21dd58;
        case 0x21dd5cu: goto label_21dd5c;
        case 0x21dd60u: goto label_21dd60;
        case 0x21dd64u: goto label_21dd64;
        case 0x21dd68u: goto label_21dd68;
        case 0x21dd6cu: goto label_21dd6c;
        case 0x21dd70u: goto label_21dd70;
        case 0x21dd74u: goto label_21dd74;
        case 0x21dd78u: goto label_21dd78;
        case 0x21dd7cu: goto label_21dd7c;
        case 0x21dd80u: goto label_21dd80;
        case 0x21dd84u: goto label_21dd84;
        case 0x21dd88u: goto label_21dd88;
        case 0x21dd8cu: goto label_21dd8c;
        case 0x21dd90u: goto label_21dd90;
        case 0x21dd94u: goto label_21dd94;
        case 0x21dd98u: goto label_21dd98;
        case 0x21dd9cu: goto label_21dd9c;
        case 0x21dda0u: goto label_21dda0;
        case 0x21dda4u: goto label_21dda4;
        case 0x21dda8u: goto label_21dda8;
        case 0x21ddacu: goto label_21ddac;
        case 0x21ddb0u: goto label_21ddb0;
        case 0x21ddb4u: goto label_21ddb4;
        case 0x21ddb8u: goto label_21ddb8;
        case 0x21ddbcu: goto label_21ddbc;
        case 0x21ddc0u: goto label_21ddc0;
        case 0x21ddc4u: goto label_21ddc4;
        case 0x21ddc8u: goto label_21ddc8;
        case 0x21ddccu: goto label_21ddcc;
        case 0x21ddd0u: goto label_21ddd0;
        case 0x21ddd4u: goto label_21ddd4;
        case 0x21ddd8u: goto label_21ddd8;
        case 0x21dddcu: goto label_21dddc;
        case 0x21dde0u: goto label_21dde0;
        case 0x21dde4u: goto label_21dde4;
        case 0x21dde8u: goto label_21dde8;
        case 0x21ddecu: goto label_21ddec;
        case 0x21ddf0u: goto label_21ddf0;
        case 0x21ddf4u: goto label_21ddf4;
        case 0x21ddf8u: goto label_21ddf8;
        case 0x21ddfcu: goto label_21ddfc;
        case 0x21de00u: goto label_21de00;
        case 0x21de04u: goto label_21de04;
        case 0x21de08u: goto label_21de08;
        case 0x21de0cu: goto label_21de0c;
        case 0x21de10u: goto label_21de10;
        case 0x21de14u: goto label_21de14;
        case 0x21de18u: goto label_21de18;
        case 0x21de1cu: goto label_21de1c;
        case 0x21de20u: goto label_21de20;
        case 0x21de24u: goto label_21de24;
        case 0x21de28u: goto label_21de28;
        case 0x21de2cu: goto label_21de2c;
        case 0x21de30u: goto label_21de30;
        case 0x21de34u: goto label_21de34;
        case 0x21de38u: goto label_21de38;
        case 0x21de3cu: goto label_21de3c;
        case 0x21de40u: goto label_21de40;
        case 0x21de44u: goto label_21de44;
        case 0x21de48u: goto label_21de48;
        case 0x21de4cu: goto label_21de4c;
        case 0x21de50u: goto label_21de50;
        case 0x21de54u: goto label_21de54;
        case 0x21de58u: goto label_21de58;
        case 0x21de5cu: goto label_21de5c;
        case 0x21de60u: goto label_21de60;
        case 0x21de64u: goto label_21de64;
        case 0x21de68u: goto label_21de68;
        case 0x21de6cu: goto label_21de6c;
        case 0x21de70u: goto label_21de70;
        case 0x21de74u: goto label_21de74;
        case 0x21de78u: goto label_21de78;
        case 0x21de7cu: goto label_21de7c;
        case 0x21de80u: goto label_21de80;
        case 0x21de84u: goto label_21de84;
        case 0x21de88u: goto label_21de88;
        case 0x21de8cu: goto label_21de8c;
        case 0x21de90u: goto label_21de90;
        case 0x21de94u: goto label_21de94;
        case 0x21de98u: goto label_21de98;
        case 0x21de9cu: goto label_21de9c;
        case 0x21dea0u: goto label_21dea0;
        case 0x21dea4u: goto label_21dea4;
        case 0x21dea8u: goto label_21dea8;
        case 0x21deacu: goto label_21deac;
        case 0x21deb0u: goto label_21deb0;
        case 0x21deb4u: goto label_21deb4;
        case 0x21deb8u: goto label_21deb8;
        case 0x21debcu: goto label_21debc;
        case 0x21dec0u: goto label_21dec0;
        case 0x21dec4u: goto label_21dec4;
        case 0x21dec8u: goto label_21dec8;
        case 0x21deccu: goto label_21decc;
        case 0x21ded0u: goto label_21ded0;
        case 0x21ded4u: goto label_21ded4;
        case 0x21ded8u: goto label_21ded8;
        case 0x21dedcu: goto label_21dedc;
        case 0x21dee0u: goto label_21dee0;
        case 0x21dee4u: goto label_21dee4;
        case 0x21dee8u: goto label_21dee8;
        case 0x21deecu: goto label_21deec;
        case 0x21def0u: goto label_21def0;
        case 0x21def4u: goto label_21def4;
        case 0x21def8u: goto label_21def8;
        case 0x21defcu: goto label_21defc;
        default: return;
    }

label_21d730:
    // 0x21d730: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x21d730u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_21d734:
    // 0x21d734: 0x3e00008  jr          $ra
label_21d738:
    if (ctx->pc == 0x21D738u) {
        ctx->pc = 0x21D73Cu;
        goto label_21d73c;
    }
    ctx->pc = 0x21D734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D73Cu;
label_21d73c:
    // 0x21d73c: 0x0  nop
    ctx->pc = 0x21d73cu;
    // NOP
label_21d740:
    // 0x21d740: 0xdc880008  ld          $t0, 0x8($a0)
    ctx->pc = 0x21d740u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_21d744:
    // 0x21d744: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x21d744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
label_21d748:
    // 0x21d748: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x21d748u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_21d74c:
    // 0x21d74c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21d74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d750:
    // 0x21d750: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21d750u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d754:
    // 0x21d754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d758:
    // 0x21d758: 0x8417e  dsrl32      $t0, $t0, 5
    ctx->pc = 0x21d758u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 5));
label_21d75c:
    // 0x21d75c: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x21d75cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
label_21d760:
    // 0x21d760: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x21d760u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
label_21d764:
    // 0x21d764: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x21d764u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_21d768:
    // 0x21d768: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x21d768u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_21d76c:
    // 0x21d76c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x21d76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_21d770:
    // 0x21d770: 0x2508005a  addiu       $t0, $t0, 0x5A
    ctx->pc = 0x21d770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 90));
label_21d774:
    // 0x21d774: 0xaca8005c  sw          $t0, 0x5C($a1)
    ctx->pc = 0x21d774u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 8));
label_21d778:
    // 0x21d778: 0x94880000  lhu         $t0, 0x0($a0)
    ctx->pc = 0x21d778u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_21d77c:
    // 0x21d77c: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x21d77cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
label_21d780:
    // 0x21d780: 0xa4a80000  sh          $t0, 0x0($a1)
    ctx->pc = 0x21d780u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
label_21d784:
    // 0x21d784: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x21d784u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_21d788:
    // 0x21d788: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x21d788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
label_21d78c:
    // 0x21d78c: 0xa4a80002  sh          $t0, 0x2($a1)
    ctx->pc = 0x21d78cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 8));
label_21d790:
    // 0x21d790: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x21d790u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21d794:
    // 0x21d794: 0x8423a  dsrl        $t0, $t0, 8
    ctx->pc = 0x21d794u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 8);
label_21d798:
    // 0x21d798: 0xa0a80004  sb          $t0, 0x4($a1)
    ctx->pc = 0x21d798u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 8));
label_21d79c:
    // 0x21d79c: 0xdc880008  ld          $t0, 0x8($a0)
    ctx->pc = 0x21d79cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_21d7a0:
    // 0x21d7a0: 0x8423a  dsrl        $t0, $t0, 8
    ctx->pc = 0x21d7a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 8);
label_21d7a4:
    // 0x21d7a4: 0xa0a80005  sb          $t0, 0x5($a1)
    ctx->pc = 0x21d7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 8));
label_21d7a8:
    // 0x21d7a8: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x21d7a8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21d7ac:
    // 0x21d7ac: 0x8417e  dsrl32      $t0, $t0, 5
    ctx->pc = 0x21d7acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 5));
label_21d7b0:
    // 0x21d7b0: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x21d7b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
label_21d7b4:
    // 0x21d7b4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x21d7b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_21d7b8:
    // 0x21d7b8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x21d7b8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_21d7bc:
    // 0x21d7bc: 0xaca80048  sw          $t0, 0x48($a1)
    ctx->pc = 0x21d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 8));
label_21d7c0:
    // 0x21d7c0: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x21d7c0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21d7c4:
    // 0x21d7c4: 0x842fe  dsrl32      $t0, $t0, 11
    ctx->pc = 0x21d7c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 11));
label_21d7c8:
    // 0x21d7c8: 0x31080007  andi        $t0, $t0, 0x7
    ctx->pc = 0x21d7c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
label_21d7cc:
    // 0x21d7cc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x21d7ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_21d7d0:
    // 0x21d7d0: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x21d7d0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_21d7d4:
    // 0x21d7d4: 0xaca8004c  sw          $t0, 0x4C($a1)
    ctx->pc = 0x21d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 8));
label_21d7d8:
    // 0x21d7d8: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x21d7d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21d7dc:
    // 0x21d7dc: 0x844ba  dsrl        $t0, $t0, 18
    ctx->pc = 0x21d7dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 18);
label_21d7e0:
    // 0x21d7e0: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x21d7e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_21d7e4:
    // 0x21d7e4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x21d7e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_21d7e8:
    // 0x21d7e8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x21d7e8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_21d7ec:
    // 0x21d7ec: 0xaca70050  sw          $a3, 0x50($a1)
    ctx->pc = 0x21d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 7));
label_21d7f0:
    // 0x21d7f0: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x21d7f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_21d7f4:
    // 0x21d7f4: 0x73cba  dsrl        $a3, $a3, 18
    ctx->pc = 0x21d7f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 18);
label_21d7f8:
    // 0x21d7f8: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x21d7f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
label_21d7fc:
    // 0x21d7fc: 0x73b7e  dsrl32      $a3, $a3, 13
    ctx->pc = 0x21d7fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 13));
label_21d800:
    // 0x21d800: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x21d800u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_21d804:
    // 0x21d804: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x21d804u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_21d808:
    // 0x21d808: 0xaca70054  sw          $a3, 0x54($a1)
    ctx->pc = 0x21d808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 7));
label_21d80c:
    // 0x21d80c: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x21d80cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21d810:
    // 0x21d810: 0x24680006  addiu       $t0, $v1, 0x6
    ctx->pc = 0x21d810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_21d814:
    // 0x21d814: 0x1073816  dsrlv       $a3, $a3, $t0
    ctx->pc = 0x21d814u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 8) & 0x3F));
label_21d818:
    // 0x21d818: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x21d818u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_21d81c:
    // 0x21d81c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_21d820:
    if (ctx->pc == 0x21D820u) {
        ctx->pc = 0x21D824u;
        goto label_21d824;
    }
    ctx->pc = 0x21D81Cu;
    {
        const bool branch_taken_0x21d81c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d81c) {
            ctx->pc = 0x21D82Cu;
            goto label_21d82c;
        }
    }
    ctx->pc = 0x21D824u;
label_21d824:
    // 0x21d824: 0x10000005  b           . + 4 + (0x5 << 2)
label_21d828:
    if (ctx->pc == 0x21D828u) {
        ctx->pc = 0x21D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D824u;
        // 0x21d828: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D82Cu;
        goto label_21d82c;
    }
    ctx->pc = 0x21D824u;
    {
        const bool branch_taken_0x21d824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D824u;
        // 0x21d828: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d824) {
            ctx->pc = 0x21D83Cu;
            goto label_21d83c;
        }
    }
    ctx->pc = 0x21D82Cu;
label_21d82c:
    // 0x21d82c: 0x0  nop
    ctx->pc = 0x21d82cu;
    // NOP
label_21d830:
    // 0x21d830: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x21d830u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_21d834:
    // 0x21d834: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x21d834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21d838:
    // 0x21d838: 0xa4e80018  sh          $t0, 0x18($a3)
    ctx->pc = 0x21d838u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24), (uint16_t)GPR_U32(ctx, 8));
label_21d83c:
    // 0x21d83c: 0x0  nop
    ctx->pc = 0x21d83cu;
    // NOP
label_21d840:
    // 0x21d840: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x21d840u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_21d844:
    // 0x21d844: 0x24680006  addiu       $t0, $v1, 0x6
    ctx->pc = 0x21d844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_21d848:
    // 0x21d848: 0x1073816  dsrlv       $a3, $a3, $t0
    ctx->pc = 0x21d848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 8) & 0x3F));
label_21d84c:
    // 0x21d84c: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x21d84cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_21d850:
    // 0x21d850: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_21d854:
    if (ctx->pc == 0x21D854u) {
        ctx->pc = 0x21D858u;
        goto label_21d858;
    }
    ctx->pc = 0x21D850u;
    {
        const bool branch_taken_0x21d850 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d850) {
            ctx->pc = 0x21D860u;
            goto label_21d860;
        }
    }
    ctx->pc = 0x21D858u;
label_21d858:
    // 0x21d858: 0x10000004  b           . + 4 + (0x4 << 2)
label_21d85c:
    if (ctx->pc == 0x21D85Cu) {
        ctx->pc = 0x21D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D858u;
        // 0x21d85c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D860u;
        goto label_21d860;
    }
    ctx->pc = 0x21D858u;
    {
        const bool branch_taken_0x21d858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D858u;
        // 0x21d85c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d858) {
            ctx->pc = 0x21D86Cu;
            goto label_21d86c;
        }
    }
    ctx->pc = 0x21D860u;
label_21d860:
    // 0x21d860: 0x84a80002  lh          $t0, 0x2($a1)
    ctx->pc = 0x21d860u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_21d864:
    // 0x21d864: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x21d864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21d868:
    // 0x21d868: 0xa4e8001a  sh          $t0, 0x1A($a3)
    ctx->pc = 0x21d868u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 26), (uint16_t)GPR_U32(ctx, 8));
label_21d86c:
    // 0x21d86c: 0x0  nop
    ctx->pc = 0x21d86cu;
    // NOP
label_21d870:
    // 0x21d870: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x21d870u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21d874:
    // 0x21d874: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x21d874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_21d878:
    // 0x21d878: 0x1073816  dsrlv       $a3, $a3, $t0
    ctx->pc = 0x21d878u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 8) & 0x3F));
label_21d87c:
    // 0x21d87c: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x21d87cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_21d880:
    // 0x21d880: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_21d884:
    if (ctx->pc == 0x21D884u) {
        ctx->pc = 0x21D888u;
        goto label_21d888;
    }
    ctx->pc = 0x21D880u;
    {
        const bool branch_taken_0x21d880 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d880) {
            ctx->pc = 0x21D890u;
            goto label_21d890;
        }
    }
    ctx->pc = 0x21D888u;
label_21d888:
    // 0x21d888: 0x10000004  b           . + 4 + (0x4 << 2)
label_21d88c:
    if (ctx->pc == 0x21D88Cu) {
        ctx->pc = 0x21D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D888u;
        // 0x21d88c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D890u;
        goto label_21d890;
    }
    ctx->pc = 0x21D888u;
    {
        const bool branch_taken_0x21d888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D888u;
        // 0x21d88c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d888) {
            ctx->pc = 0x21D89Cu;
            goto label_21d89c;
        }
    }
    ctx->pc = 0x21D890u;
label_21d890:
    // 0x21d890: 0x90a80004  lbu         $t0, 0x4($a1)
    ctx->pc = 0x21d890u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_21d894:
    // 0x21d894: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x21d894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21d898:
    // 0x21d898: 0xa0e8001c  sb          $t0, 0x1C($a3)
    ctx->pc = 0x21d898u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 28), (uint8_t)GPR_U32(ctx, 8));
label_21d89c:
    // 0x21d89c: 0x0  nop
    ctx->pc = 0x21d89cu;
    // NOP
label_21d8a0:
    // 0x21d8a0: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x21d8a0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_21d8a4:
    // 0x21d8a4: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x21d8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_21d8a8:
    // 0x21d8a8: 0x1073816  dsrlv       $a3, $a3, $t0
    ctx->pc = 0x21d8a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 8) & 0x3F));
label_21d8ac:
    // 0x21d8ac: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x21d8acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_21d8b0:
    // 0x21d8b0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_21d8b4:
    if (ctx->pc == 0x21D8B4u) {
        ctx->pc = 0x21D8B8u;
        goto label_21d8b8;
    }
    ctx->pc = 0x21D8B0u;
    {
        const bool branch_taken_0x21d8b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d8b0) {
            ctx->pc = 0x21D8C0u;
            goto label_21d8c0;
        }
    }
    ctx->pc = 0x21D8B8u;
label_21d8b8:
    // 0x21d8b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_21d8bc:
    if (ctx->pc == 0x21D8BCu) {
        ctx->pc = 0x21D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8B8u;
        // 0x21d8bc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D8C0u;
        goto label_21d8c0;
    }
    ctx->pc = 0x21D8B8u;
    {
        const bool branch_taken_0x21d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8B8u;
        // 0x21d8bc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8b8) {
            ctx->pc = 0x21D8CCu;
            goto label_21d8cc;
        }
    }
    ctx->pc = 0x21D8C0u;
label_21d8c0:
    // 0x21d8c0: 0x90a80005  lbu         $t0, 0x5($a1)
    ctx->pc = 0x21d8c0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_21d8c4:
    // 0x21d8c4: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x21d8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21d8c8:
    // 0x21d8c8: 0xa0e8001d  sb          $t0, 0x1D($a3)
    ctx->pc = 0x21d8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 29), (uint8_t)GPR_U32(ctx, 8));
label_21d8cc:
    // 0x21d8cc: 0x0  nop
    ctx->pc = 0x21d8ccu;
    // NOP
label_21d8d0:
    // 0x21d8d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21d8d4:
    // 0x21d8d4: 0x28670002  slti        $a3, $v1, 0x2
    ctx->pc = 0x21d8d4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_21d8d8:
    // 0x21d8d8: 0x14e0ffcc  bnez        $a3, . + 4 + (-0x34 << 2)
label_21d8dc:
    if (ctx->pc == 0x21D8DCu) {
        ctx->pc = 0x21D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8D8u;
        // 0x21d8dc: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D8E0u;
        goto label_21d8e0;
    }
    ctx->pc = 0x21D8D8u;
    {
        const bool branch_taken_0x21d8d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8D8u;
        // 0x21d8dc: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8d8) {
            ctx->pc = 0x21D80Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d80c;
        }
    }
    ctx->pc = 0x21D8E0u;
label_21d8e0:
    // 0x21d8e0: 0x3e00008  jr          $ra
label_21d8e4:
    if (ctx->pc == 0x21D8E4u) {
        ctx->pc = 0x21D8E8u;
        goto label_21d8e8;
    }
    ctx->pc = 0x21D8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D8E8u;
label_21d8e8:
    // 0x21d8e8: 0x0  nop
    ctx->pc = 0x21d8e8u;
    // NOP
label_21d8ec:
    // 0x21d8ec: 0x0  nop
    ctx->pc = 0x21d8ecu;
    // NOP
label_21d8f0:
    // 0x21d8f0: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x21d8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
label_21d8f4:
    // 0x21d8f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d8f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21d8f8:
    // 0x21d8f8: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x21d8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
label_21d8fc:
    // 0x21d8fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21d8fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d900:
    // 0x21d900: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d904:
    // 0x21d904: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21d904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d908:
    // 0x21d908: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x21d908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_21d90c:
    // 0x21d90c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x21d90cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_21d910:
    // 0x21d910: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x21d910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21d914:
    // 0x21d914: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_21d918:
    if (ctx->pc == 0x21D918u) {
        ctx->pc = 0x21D91Cu;
        goto label_21d91c;
    }
    ctx->pc = 0x21D914u;
    {
        const bool branch_taken_0x21d914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d914) {
            ctx->pc = 0x21D920u;
            goto label_21d920;
        }
    }
    ctx->pc = 0x21D91Cu;
label_21d91c:
    // 0x21d91c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x21d91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21d920:
    // 0x21d920: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21d920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21d924:
    // 0x21d924: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x21d924u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_21d928:
    // 0x21d928: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_21d92c:
    if (ctx->pc == 0x21D92Cu) {
        ctx->pc = 0x21D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D928u;
        // 0x21d92c: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D930u;
        goto label_21d930;
    }
    ctx->pc = 0x21D928u;
    {
        const bool branch_taken_0x21d928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D928u;
        // 0x21d92c: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d928) {
            ctx->pc = 0x21D908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d908;
        }
    }
    ctx->pc = 0x21D930u;
label_21d930:
    // 0x21d930: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x21d930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_21d934:
    // 0x21d934: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x21d934u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_21d938:
    // 0x21d938: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x21d938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_21d93c:
    // 0x21d93c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21d93cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d940:
    // 0x21d940: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x21d940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21d944:
    // 0x21d944: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21d944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d948:
    // 0x21d948: 0x0  nop
    ctx->pc = 0x21d948u;
    // NOP
label_21d94c:
    // 0x21d94c: 0x1810  mfhi        $v1
    ctx->pc = 0x21d94cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_21d950:
    // 0x21d950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21d950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d954:
    // 0x21d954: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x21d954u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_21d958:
    // 0x21d958: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x21d958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_21d95c:
    // 0x21d95c: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x21d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_21d960:
    // 0x21d960: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x21d960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_21d964:
    // 0x21d964: 0x84c60002  lh          $a2, 0x2($a2)
    ctx->pc = 0x21d964u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_21d968:
    // 0x21d968: 0x106082a  slt         $at, $t0, $a2
    ctx->pc = 0x21d968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_21d96c:
    // 0x21d96c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_21d970:
    if (ctx->pc == 0x21D970u) {
        ctx->pc = 0x21D974u;
        goto label_21d974;
    }
    ctx->pc = 0x21D96Cu;
    {
        const bool branch_taken_0x21d96c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d96c) {
            ctx->pc = 0x21D978u;
            goto label_21d978;
        }
    }
    ctx->pc = 0x21D974u;
label_21d974:
    // 0x21d974: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x21d974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21d978:
    // 0x21d978: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21d978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21d97c:
    // 0x21d97c: 0x29260003  slti        $a2, $t1, 0x3
    ctx->pc = 0x21d97cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
label_21d980:
    // 0x21d980: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
label_21d984:
    if (ctx->pc == 0x21D984u) {
        ctx->pc = 0x21D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D980u;
        // 0x21d984: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D988u;
        goto label_21d988;
    }
    ctx->pc = 0x21D980u;
    {
        const bool branch_taken_0x21d980 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D980u;
        // 0x21d984: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d980) {
            ctx->pc = 0x21D960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d960;
        }
    }
    ctx->pc = 0x21D988u;
label_21d988:
    // 0x21d988: 0x3c066666  lui         $a2, 0x6666
    ctx->pc = 0x21d988u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_21d98c:
    // 0x21d98c: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x21d98cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_21d990:
    // 0x21d990: 0x34c66667  ori         $a2, $a2, 0x6667
    ctx->pc = 0x21d990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26215);
label_21d994:
    // 0x21d994: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21d994u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d998:
    // 0x21d998: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x21d998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21d99c:
    // 0x21d99c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21d99cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d9a0:
    // 0x21d9a0: 0x0  nop
    ctx->pc = 0x21d9a0u;
    // NOP
label_21d9a4:
    // 0x21d9a4: 0x3010  mfhi        $a2
    ctx->pc = 0x21d9a4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21d9a8:
    // 0x21d9a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21d9a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d9ac:
    // 0x21d9ac: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x21d9acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_21d9b0:
    // 0x21d9b0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x21d9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_21d9b4:
    // 0x21d9b4: 0x24c6ffec  addiu       $a2, $a2, -0x14
    ctx->pc = 0x21d9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967276));
label_21d9b8:
    // 0x21d9b8: 0xa83821  addu        $a3, $a1, $t0
    ctx->pc = 0x21d9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_21d9bc:
    // 0x21d9bc: 0x90e70004  lbu         $a3, 0x4($a3)
    ctx->pc = 0x21d9bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_21d9c0:
    // 0x21d9c0: 0x147082a  slt         $at, $t2, $a3
    ctx->pc = 0x21d9c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_21d9c4:
    // 0x21d9c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_21d9c8:
    if (ctx->pc == 0x21D9C8u) {
        ctx->pc = 0x21D9CCu;
        goto label_21d9cc;
    }
    ctx->pc = 0x21D9C4u;
    {
        const bool branch_taken_0x21d9c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d9c4) {
            ctx->pc = 0x21D9D0u;
            goto label_21d9d0;
        }
    }
    ctx->pc = 0x21D9CCu;
label_21d9cc:
    // 0x21d9cc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x21d9ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21d9d0:
    // 0x21d9d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21d9d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21d9d4:
    // 0x21d9d4: 0x29270003  slti        $a3, $t1, 0x3
    ctx->pc = 0x21d9d4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
label_21d9d8:
    // 0x21d9d8: 0x14e0fff7  bnez        $a3, . + 4 + (-0x9 << 2)
label_21d9dc:
    if (ctx->pc == 0x21D9DCu) {
        ctx->pc = 0x21D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9D8u;
        // 0x21d9dc: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D9E0u;
        goto label_21d9e0;
    }
    ctx->pc = 0x21D9D8u;
    {
        const bool branch_taken_0x21d9d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9D8u;
        // 0x21d9dc: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9d8) {
            ctx->pc = 0x21D9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d9b8;
        }
    }
    ctx->pc = 0x21D9E0u;
label_21d9e0:
    // 0x21d9e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21d9e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d9e4:
    // 0x21d9e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21d9e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d9e8:
    // 0x21d9e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21d9e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d9ec:
    // 0x21d9ec: 0xa83821  addu        $a3, $a1, $t0
    ctx->pc = 0x21d9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_21d9f0:
    // 0x21d9f0: 0x90e70005  lbu         $a3, 0x5($a3)
    ctx->pc = 0x21d9f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_21d9f4:
    // 0x21d9f4: 0x127082a  slt         $at, $t1, $a3
    ctx->pc = 0x21d9f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_21d9f8:
    // 0x21d9f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_21d9fc:
    if (ctx->pc == 0x21D9FCu) {
        ctx->pc = 0x21DA00u;
        goto label_21da00;
    }
    ctx->pc = 0x21D9F8u;
    {
        const bool branch_taken_0x21d9f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d9f8) {
            ctx->pc = 0x21DA04u;
            goto label_21da04;
        }
    }
    ctx->pc = 0x21DA00u;
label_21da00:
    // 0x21da00: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x21da00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21da04:
    // 0x21da04: 0x0  nop
    ctx->pc = 0x21da04u;
    // NOP
label_21da08:
    // 0x21da08: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x21da08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_21da0c:
    // 0x21da0c: 0x29670003  slti        $a3, $t3, 0x3
    ctx->pc = 0x21da0cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
label_21da10:
    // 0x21da10: 0x14e0fff6  bnez        $a3, . + 4 + (-0xA << 2)
label_21da14:
    if (ctx->pc == 0x21DA14u) {
        ctx->pc = 0x21DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA10u;
        // 0x21da14: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DA18u;
        goto label_21da18;
    }
    ctx->pc = 0x21DA10u;
    {
        const bool branch_taken_0x21da10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA10u;
        // 0x21da14: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da10) {
            ctx->pc = 0x21D9ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d9ec;
        }
    }
    ctx->pc = 0x21DA18u;
label_21da18:
    // 0x21da18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21da18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21da1c:
    // 0x21da1c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x21da1cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21da20:
    // 0x21da20: 0x27a80000  addiu       $t0, $sp, 0x0
    ctx->pc = 0x21da20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_21da24:
    // 0x21da24: 0x10c6821  addu        $t5, $t0, $t4
    ctx->pc = 0x21da24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
label_21da28:
    // 0x21da28: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x21da28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_21da2c:
    // 0x21da2c: 0x1a03821  addu        $a3, $t5, $zero
    ctx->pc = 0x21da2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 0)));
label_21da30:
    // 0x21da30: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x21da30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_21da34:
    // 0x21da34: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x21da34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_21da38:
    // 0x21da38: 0x29670004  slti        $a3, $t3, 0x4
    ctx->pc = 0x21da38u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
label_21da3c:
    // 0x21da3c: 0x14e0fff9  bnez        $a3, . + 4 + (-0x7 << 2)
label_21da40:
    if (ctx->pc == 0x21DA40u) {
        ctx->pc = 0x21DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA3Cu;
        // 0x21da40: 0xada00004  sw          $zero, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DA44u;
        goto label_21da44;
    }
    ctx->pc = 0x21DA3Cu;
    {
        const bool branch_taken_0x21da3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA3Cu;
        // 0x21da40: 0xada00004  sw          $zero, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da3c) {
            ctx->pc = 0x21DA24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21da24;
        }
    }
    ctx->pc = 0x21DA44u;
label_21da44:
    // 0x21da44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21da44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21da48:
    // 0x21da48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21da48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21da4c:
    // 0x21da4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21da4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21da50:
    // 0x21da50: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x21da50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21da54:
    // 0x21da54: 0x27ae0000  addiu       $t6, $sp, 0x0
    ctx->pc = 0x21da54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_21da58:
    // 0x21da58: 0xa7c021  addu        $t8, $a1, $a3
    ctx->pc = 0x21da58u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_21da5c:
    // 0x21da5c: 0x84ad0000  lh          $t5, 0x0($a1)
    ctx->pc = 0x21da5cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_21da60:
    // 0x21da60: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x21da60u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
label_21da64:
    // 0x21da64: 0x11ac0002  beq         $t5, $t4, . + 4 + (0x2 << 2)
label_21da68:
    if (ctx->pc == 0x21DA68u) {
        ctx->pc = 0x21DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA64u;
        // 0x21da68: 0x1c86021  addu        $t4, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DA6Cu;
        goto label_21da6c;
    }
    ctx->pc = 0x21DA64u;
    {
        const bool branch_taken_0x21da64 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 12));
        ctx->pc = 0x21DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA64u;
        // 0x21da68: 0x1c86021  addu        $t4, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da64) {
            ctx->pc = 0x21DA70u;
            goto label_21da70;
        }
    }
    ctx->pc = 0x21DA6Cu;
label_21da6c:
    // 0x21da6c: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x21da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
label_21da70:
    // 0x21da70: 0x84ad0002  lh          $t5, 0x2($a1)
    ctx->pc = 0x21da70u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_21da74:
    // 0x21da74: 0x870c0002  lh          $t4, 0x2($t8)
    ctx->pc = 0x21da74u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
label_21da78:
    // 0x21da78: 0x11ac0002  beq         $t5, $t4, . + 4 + (0x2 << 2)
label_21da7c:
    if (ctx->pc == 0x21DA7Cu) {
        ctx->pc = 0x21DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA78u;
        // 0x21da7c: 0x1c86021  addu        $t4, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DA80u;
        goto label_21da80;
    }
    ctx->pc = 0x21DA78u;
    {
        const bool branch_taken_0x21da78 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 12));
        ctx->pc = 0x21DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA78u;
        // 0x21da7c: 0x1c86021  addu        $t4, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da78) {
            ctx->pc = 0x21DA84u;
            goto label_21da84;
        }
    }
    ctx->pc = 0x21DA80u;
label_21da80:
    // 0x21da80: 0xad8f0008  sw          $t7, 0x8($t4)
    ctx->pc = 0x21da80u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 15));
label_21da84:
    // 0x21da84: 0x0  nop
    ctx->pc = 0x21da84u;
    // NOP
label_21da88:
    // 0x21da88: 0x90ad0004  lbu         $t5, 0x4($a1)
    ctx->pc = 0x21da88u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_21da8c:
    // 0x21da8c: 0x930c0004  lbu         $t4, 0x4($t8)
    ctx->pc = 0x21da8cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4)));
label_21da90:
    // 0x21da90: 0x11ac0002  beq         $t5, $t4, . + 4 + (0x2 << 2)
label_21da94:
    if (ctx->pc == 0x21DA94u) {
        ctx->pc = 0x21DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA90u;
        // 0x21da94: 0x1c86021  addu        $t4, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DA98u;
        goto label_21da98;
    }
    ctx->pc = 0x21DA90u;
    {
        const bool branch_taken_0x21da90 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 12));
        ctx->pc = 0x21DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA90u;
        // 0x21da94: 0x1c86021  addu        $t4, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da90) {
            ctx->pc = 0x21DA9Cu;
            goto label_21da9c;
        }
    }
    ctx->pc = 0x21DA98u;
label_21da98:
    // 0x21da98: 0xad8f0010  sw          $t7, 0x10($t4)
    ctx->pc = 0x21da98u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 15));
label_21da9c:
    // 0x21da9c: 0x0  nop
    ctx->pc = 0x21da9cu;
    // NOP
label_21daa0:
    // 0x21daa0: 0x930c0005  lbu         $t4, 0x5($t8)
    ctx->pc = 0x21daa0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 5)));
label_21daa4:
    // 0x21daa4: 0x90ad0005  lbu         $t5, 0x5($a1)
    ctx->pc = 0x21daa4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_21daa8:
    // 0x21daa8: 0x11ac0002  beq         $t5, $t4, . + 4 + (0x2 << 2)
label_21daac:
    if (ctx->pc == 0x21DAACu) {
        ctx->pc = 0x21DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAA8u;
        // 0x21daac: 0x1c86021  addu        $t4, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DAB0u;
        goto label_21dab0;
    }
    ctx->pc = 0x21DAA8u;
    {
        const bool branch_taken_0x21daa8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 12));
        ctx->pc = 0x21DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAA8u;
        // 0x21daac: 0x1c86021  addu        $t4, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21daa8) {
            ctx->pc = 0x21DAB4u;
            goto label_21dab4;
        }
    }
    ctx->pc = 0x21DAB0u;
label_21dab0:
    // 0x21dab0: 0xad8f0018  sw          $t7, 0x18($t4)
    ctx->pc = 0x21dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 15));
label_21dab4:
    // 0x21dab4: 0x0  nop
    ctx->pc = 0x21dab4u;
    // NOP
label_21dab8:
    // 0x21dab8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x21dab8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_21dabc:
    // 0x21dabc: 0x296c0003  slti        $t4, $t3, 0x3
    ctx->pc = 0x21dabcu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
label_21dac0:
    // 0x21dac0: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x21dac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_21dac4:
    // 0x21dac4: 0x1580ffe4  bnez        $t4, . + 4 + (-0x1C << 2)
label_21dac8:
    if (ctx->pc == 0x21DAC8u) {
        ctx->pc = 0x21DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAC4u;
        // 0x21dac8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DACCu;
        goto label_21dacc;
    }
    ctx->pc = 0x21DAC4u;
    {
        const bool branch_taken_0x21dac4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAC4u;
        // 0x21dac8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dac4) {
            ctx->pc = 0x21DA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21da58;
        }
    }
    ctx->pc = 0x21DACCu;
label_21dacc:
    // 0x21dacc: 0x2c670040  sltiu       $a3, $v1, 0x40
    ctx->pc = 0x21daccu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_21dad0:
    // 0x21dad0: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
label_21dad4:
    if (ctx->pc == 0x21DAD4u) {
        ctx->pc = 0x21DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAD0u;
        // 0x21dad4: 0x2cc70040  sltiu       $a3, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DAD8u;
        goto label_21dad8;
    }
    ctx->pc = 0x21DAD0u;
    {
        const bool branch_taken_0x21dad0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAD0u;
        // 0x21dad4: 0x2cc70040  sltiu       $a3, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dad0) {
            ctx->pc = 0x21DADCu;
            goto label_21dadc;
        }
    }
    ctx->pc = 0x21DAD8u;
label_21dad8:
    // 0x21dad8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x21dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_21dadc:
    // 0x21dadc: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
label_21dae0:
    if (ctx->pc == 0x21DAE0u) {
        ctx->pc = 0x21DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DADCu;
        // 0x21dae0: 0x2d410100  sltiu       $at, $t2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DAE4u;
        goto label_21dae4;
    }
    ctx->pc = 0x21DADCu;
    {
        const bool branch_taken_0x21dadc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DADCu;
        // 0x21dae0: 0x2d410100  sltiu       $at, $t2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dadc) {
            ctx->pc = 0x21DAE8u;
            goto label_21dae8;
        }
    }
    ctx->pc = 0x21DAE4u;
label_21dae4:
    // 0x21dae4: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x21dae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_21dae8:
    // 0x21dae8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_21daec:
    if (ctx->pc == 0x21DAECu) {
        ctx->pc = 0x21DAF0u;
        goto label_21daf0;
    }
    ctx->pc = 0x21DAE8u;
    {
        const bool branch_taken_0x21dae8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21dae8) {
            ctx->pc = 0x21DAF4u;
            goto label_21daf4;
        }
    }
    ctx->pc = 0x21DAF0u;
label_21daf0:
    // 0x21daf0: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x21daf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21daf4:
    // 0x21daf4: 0x2d210100  sltiu       $at, $t1, 0x100
    ctx->pc = 0x21daf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_21daf8:
    // 0x21daf8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_21dafc:
    if (ctx->pc == 0x21DAFCu) {
        ctx->pc = 0x21DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAF8u;
        // 0x21dafc: 0x3383c  dsll32      $a3, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DB00u;
        goto label_21db00;
    }
    ctx->pc = 0x21DAF8u;
    {
        const bool branch_taken_0x21daf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAF8u;
        // 0x21dafc: 0x3383c  dsll32      $a3, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21daf8) {
            ctx->pc = 0x21DB04u;
            goto label_21db04;
        }
    }
    ctx->pc = 0x21DB00u;
label_21db00:
    // 0x21db00: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x21db00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21db04:
    // 0x21db04: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x21db04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_21db08:
    // 0x21db08: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x21db08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_21db0c:
    // 0x21db0c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21db0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_21db10:
    // 0x21db10: 0x314600ff  andi        $a2, $t2, 0xFF
    ctx->pc = 0x21db10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_21db14:
    // 0x21db14: 0x306b003f  andi        $t3, $v1, 0x3F
    ctx->pc = 0x21db14u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_21db18:
    // 0x21db18: 0x9faa0000  lwu         $t2, 0x0($sp)
    ctx->pc = 0x21db18u;
    SET_GPR_ZE32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21db1c:
    // 0x21db1c: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x21db1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_21db20:
    // 0x21db20: 0x64238  dsll        $t0, $a2, 8
    ctx->pc = 0x21db20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << 8);
label_21db24:
    // 0x21db24: 0x9fa90004  lwu         $t1, 0x4($sp)
    ctx->pc = 0x21db24u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21db28:
    // 0x21db28: 0x30ec003f  andi        $t4, $a3, 0x3F
    ctx->pc = 0x21db28u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
label_21db2c:
    // 0x21db2c: 0x33a38  dsll        $a3, $v1, 8
    ctx->pc = 0x21db2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 8);
label_21db30:
    // 0x21db30: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x21db30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21db34:
    // 0x21db34: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x21db34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
label_21db38:
    // 0x21db38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21db38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_21db3c:
    // 0x21db3c: 0xa51f8  dsll        $t2, $t2, 7
    ctx->pc = 0x21db3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 7);
label_21db40:
    // 0x21db40: 0x949b8  dsll        $t1, $t1, 6
    ctx->pc = 0x21db40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 6);
label_21db44:
    // 0x21db44: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x21db44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_21db48:
    // 0x21db48: 0x1894825  or          $t1, $t4, $t1
    ctx->pc = 0x21db48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
label_21db4c:
    // 0x21db4c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x21db4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
label_21db50:
    // 0x21db50: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x21db50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
label_21db54:
    // 0x21db54: 0x9faa0008  lwu         $t2, 0x8($sp)
    ctx->pc = 0x21db54u;
    SET_GPR_ZE32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_21db58:
    // 0x21db58: 0x9fa9000c  lwu         $t1, 0xC($sp)
    ctx->pc = 0x21db58u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_21db5c:
    // 0x21db5c: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x21db5cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_21db60:
    // 0x21db60: 0xa51f8  dsll        $t2, $t2, 7
    ctx->pc = 0x21db60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 7);
label_21db64:
    // 0x21db64: 0x949b8  dsll        $t1, $t1, 6
    ctx->pc = 0x21db64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 6);
label_21db68:
    // 0x21db68: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x21db68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_21db6c:
    // 0x21db6c: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x21db6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
label_21db70:
    // 0x21db70: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x21db70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
label_21db74:
    // 0x21db74: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x21db74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_21db78:
    // 0x21db78: 0x9faa0010  lwu         $t2, 0x10($sp)
    ctx->pc = 0x21db78u;
    SET_GPR_ZE32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_21db7c:
    // 0x21db7c: 0x9fa90014  lwu         $t1, 0x14($sp)
    ctx->pc = 0x21db7cu;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_21db80:
    // 0x21db80: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x21db80u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21db84:
    // 0x21db84: 0xa5478  dsll        $t2, $t2, 17
    ctx->pc = 0x21db84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 17);
label_21db88:
    // 0x21db88: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x21db88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
label_21db8c:
    // 0x21db8c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x21db8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_21db90:
    // 0x21db90: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x21db90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_21db94:
    // 0x21db94: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x21db94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
label_21db98:
    // 0x21db98: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x21db98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
label_21db9c:
    // 0x21db9c: 0x9fa90018  lwu         $t1, 0x18($sp)
    ctx->pc = 0x21db9cu;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_21dba0:
    // 0x21dba0: 0x9fa8001c  lwu         $t0, 0x1C($sp)
    ctx->pc = 0x21dba0u;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_21dba4:
    // 0x21dba4: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x21dba4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_21dba8:
    // 0x21dba8: 0x94c78  dsll        $t1, $t1, 17
    ctx->pc = 0x21dba8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 17);
label_21dbac:
    // 0x21dbac: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x21dbacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
label_21dbb0:
    // 0x21dbb0: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x21dbb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_21dbb4:
    // 0x21dbb4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x21dbb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_21dbb8:
    // 0x21dbb8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x21dbb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_21dbbc:
    // 0x21dbbc: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x21dbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_21dbc0:
    // 0x21dbc0: 0x8ca70050  lw          $a3, 0x50($a1)
    ctx->pc = 0x21dbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_21dbc4:
    // 0x21dbc4: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x21dbc4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21dbc8:
    // 0x21dbc8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x21dbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_21dbcc:
    // 0x21dbcc: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x21dbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
label_21dbd0:
    // 0x21dbd0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x21dbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_21dbd4:
    // 0x21dbd4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x21dbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_21dbd8:
    // 0x21dbd8: 0x8ca60054  lw          $a2, 0x54($a1)
    ctx->pc = 0x21dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_21dbdc:
    // 0x21dbdc: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x21dbdcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_21dbe0:
    // 0x21dbe0: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x21dbe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
label_21dbe4:
    // 0x21dbe4: 0x6337e  dsrl32      $a2, $a2, 13
    ctx->pc = 0x21dbe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 13));
label_21dbe8:
    // 0x21dbe8: 0x634b8  dsll        $a2, $a2, 18
    ctx->pc = 0x21dbe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 18);
label_21dbec:
    // 0x21dbec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x21dbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_21dbf0:
    // 0x21dbf0: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x21dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
label_21dbf4:
    // 0x21dbf4: 0x9ca60048  lwu         $a2, 0x48($a1)
    ctx->pc = 0x21dbf4u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_21dbf8:
    // 0x21dbf8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x21dbf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21dbfc:
    // 0x21dbfc: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x21dbfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_21dc00:
    // 0x21dc00: 0x6317c  dsll32      $a2, $a2, 5
    ctx->pc = 0x21dc00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 5));
label_21dc04:
    // 0x21dc04: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x21dc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_21dc08:
    // 0x21dc08: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x21dc08u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_21dc0c:
    // 0x21dc0c: 0x9ca5004c  lwu         $a1, 0x4C($a1)
    ctx->pc = 0x21dc0cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_21dc10:
    // 0x21dc10: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x21dc10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21dc14:
    // 0x21dc14: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x21dc14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_21dc18:
    // 0x21dc18: 0x52afc  dsll32      $a1, $a1, 11
    ctx->pc = 0x21dc18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 11));
label_21dc1c:
    // 0x21dc1c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x21dc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_21dc20:
    // 0x21dc20: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x21dc20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_21dc24:
    // 0x21dc24: 0x3e00008  jr          $ra
label_21dc28:
    if (ctx->pc == 0x21DC28u) {
        ctx->pc = 0x21DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC24u;
        // 0x21dc28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC2Cu;
        goto label_21dc2c;
    }
    ctx->pc = 0x21DC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC24u;
        // 0x21dc28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DC2Cu;
label_21dc2c:
    // 0x21dc2c: 0x0  nop
    ctx->pc = 0x21dc2cu;
    // NOP
label_21dc30:
    // 0x21dc30: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x21dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_21dc34:
    // 0x21dc34: 0x2c630029  sltiu       $v1, $v1, 0x29
    ctx->pc = 0x21dc34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_21dc38:
    // 0x21dc38: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_21dc3c:
    if (ctx->pc == 0x21DC3Cu) {
        ctx->pc = 0x21DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC38u;
        // 0x21dc3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DC40u;
        goto label_21dc40;
    }
    ctx->pc = 0x21DC38u;
    {
        const bool branch_taken_0x21dc38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC38u;
        // 0x21dc3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc38) {
            ctx->pc = 0x21DC44u;
            goto label_21dc44;
        }
    }
    ctx->pc = 0x21DC40u;
label_21dc40:
    // 0x21dc40: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21dc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_21dc44:
    // 0x21dc44: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x21dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_21dc48:
    // 0x21dc48: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x21dc48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_21dc4c:
    // 0x21dc4c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_21dc50:
    if (ctx->pc == 0x21DC50u) {
        ctx->pc = 0x21DC54u;
        goto label_21dc54;
    }
    ctx->pc = 0x21DC4Cu;
    {
        const bool branch_taken_0x21dc4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21dc4c) {
            ctx->pc = 0x21DC58u;
            goto label_21dc58;
        }
    }
    ctx->pc = 0x21DC54u;
label_21dc54:
    // 0x21dc54: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x21dc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_21dc58:
    // 0x21dc58: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x21dc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21dc5c:
    // 0x21dc5c: 0x3c0341cc  lui         $v1, 0x41CC
    ctx->pc = 0x21dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16844 << 16));
label_21dc60:
    // 0x21dc60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21dc60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21dc64:
    // 0x21dc64: 0x0  nop
    ctx->pc = 0x21dc64u;
    // NOP
label_21dc68:
    // 0x21dc68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21dc68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21dc6c:
    // 0x21dc6c: 0x0  nop
    ctx->pc = 0x21dc6cu;
    // NOP
label_21dc70:
    // 0x21dc70: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_21dc74:
    if (ctx->pc == 0x21DC74u) {
        ctx->pc = 0x21DC78u;
        goto label_21dc78;
    }
    ctx->pc = 0x21DC70u;
    {
        const bool branch_taken_0x21dc70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21dc70) {
            ctx->pc = 0x21DC7Cu;
            goto label_21dc7c;
        }
    }
    ctx->pc = 0x21DC78u;
label_21dc78:
    // 0x21dc78: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x21dc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_21dc7c:
    // 0x21dc7c: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x21dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_21dc80:
    // 0x21dc80: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x21dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
label_21dc84:
    // 0x21dc84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21dc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_21dc88:
    // 0x21dc88: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x21dc88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_21dc8c:
    // 0x21dc8c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_21dc90:
    if (ctx->pc == 0x21DC90u) {
        ctx->pc = 0x21DC94u;
        goto label_21dc94;
    }
    ctx->pc = 0x21DC8Cu;
    {
        const bool branch_taken_0x21dc8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dc8c) {
            ctx->pc = 0x21DC98u;
            goto label_21dc98;
        }
    }
    ctx->pc = 0x21DC94u;
label_21dc94:
    // 0x21dc94: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x21dc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_21dc98:
    // 0x21dc98: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x21dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_21dc9c:
    // 0x21dc9c: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x21dc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
label_21dca0:
    // 0x21dca0: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x21dca0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_21dca4:
    // 0x21dca4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_21dca8:
    if (ctx->pc == 0x21DCA8u) {
        ctx->pc = 0x21DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCA4u;
        // 0x21dca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DCACu;
        goto label_21dcac;
    }
    ctx->pc = 0x21DCA4u;
    {
        const bool branch_taken_0x21dca4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCA4u;
        // 0x21dca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dca4) {
            ctx->pc = 0x21DCB0u;
            goto label_21dcb0;
        }
    }
    ctx->pc = 0x21DCACu;
label_21dcac:
    // 0x21dcac: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x21dcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_21dcb0:
    // 0x21dcb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21dcb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dcb4:
    // 0x21dcb4: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x21dcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_21dcb8:
    // 0x21dcb8: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x21dcb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_21dcbc:
    // 0x21dcbc: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x21dcbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_21dcc0:
    // 0x21dcc0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_21dcc4:
    if (ctx->pc == 0x21DCC4u) {
        ctx->pc = 0x21DCC8u;
        goto label_21dcc8;
    }
    ctx->pc = 0x21DCC0u;
    {
        const bool branch_taken_0x21dcc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dcc0) {
            ctx->pc = 0x21DCF8u;
            goto label_21dcf8;
        }
    }
    ctx->pc = 0x21DCC8u;
label_21dcc8:
    // 0x21dcc8: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x21dcc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_21dccc:
    // 0x21dccc: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x21dcccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_21dcd0:
    // 0x21dcd0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_21dcd4:
    if (ctx->pc == 0x21DCD4u) {
        ctx->pc = 0x21DCD8u;
        goto label_21dcd8;
    }
    ctx->pc = 0x21DCD0u;
    {
        const bool branch_taken_0x21dcd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dcd0) {
            ctx->pc = 0x21DCF8u;
            goto label_21dcf8;
        }
    }
    ctx->pc = 0x21DCD8u;
label_21dcd8:
    // 0x21dcd8: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x21dcd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_21dcdc:
    // 0x21dcdc: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x21dcdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_21dce0:
    // 0x21dce0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_21dce4:
    if (ctx->pc == 0x21DCE4u) {
        ctx->pc = 0x21DCE8u;
        goto label_21dce8;
    }
    ctx->pc = 0x21DCE0u;
    {
        const bool branch_taken_0x21dce0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dce0) {
            ctx->pc = 0x21DCF8u;
            goto label_21dcf8;
        }
    }
    ctx->pc = 0x21DCE8u;
label_21dce8:
    // 0x21dce8: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x21dce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_21dcec:
    // 0x21dcec: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x21dcecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_21dcf0:
    // 0x21dcf0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_21dcf4:
    if (ctx->pc == 0x21DCF4u) {
        ctx->pc = 0x21DCF8u;
        goto label_21dcf8;
    }
    ctx->pc = 0x21DCF0u;
    {
        const bool branch_taken_0x21dcf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21dcf0) {
            ctx->pc = 0x21DCFCu;
            goto label_21dcfc;
        }
    }
    ctx->pc = 0x21DCF8u;
label_21dcf8:
    // 0x21dcf8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21dcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_21dcfc:
    // 0x21dcfc: 0x0  nop
    ctx->pc = 0x21dcfcu;
    // NOP
label_21dd00:
    // 0x21dd00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21dd04:
    // 0x21dd04: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x21dd04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_21dd08:
    // 0x21dd08: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_21dd0c:
    if (ctx->pc == 0x21DD0Cu) {
        ctx->pc = 0x21DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD08u;
        // 0x21dd0c: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD10u;
        goto label_21dd10;
    }
    ctx->pc = 0x21DD08u;
    {
        const bool branch_taken_0x21dd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD08u;
        // 0x21dd0c: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd08) {
            ctx->pc = 0x21DCB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21dcb4;
        }
    }
    ctx->pc = 0x21DD10u;
label_21dd10:
    // 0x21dd10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21dd14:
    if (ctx->pc == 0x21DD14u) {
        ctx->pc = 0x21DD18u;
        goto label_21dd18;
    }
    ctx->pc = 0x21DD10u;
    {
        const bool branch_taken_0x21dd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dd10) {
            ctx->pc = 0x21DD20u;
            goto label_21dd20;
        }
    }
    ctx->pc = 0x21DD18u;
label_21dd18:
    // 0x21dd18: 0x10000002  b           . + 4 + (0x2 << 2)
label_21dd1c:
    if (ctx->pc == 0x21DD1Cu) {
        ctx->pc = 0x21DD20u;
        goto label_21dd20;
    }
    ctx->pc = 0x21DD18u;
    {
        const bool branch_taken_0x21dd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dd18) {
            ctx->pc = 0x21DD24u;
            goto label_21dd24;
        }
    }
    ctx->pc = 0x21DD20u;
label_21dd20:
    // 0x21dd20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21dd20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dd24:
    // 0x21dd24: 0x3e00008  jr          $ra
label_21dd28:
    if (ctx->pc == 0x21DD28u) {
        ctx->pc = 0x21DD2Cu;
        goto label_21dd2c;
    }
    ctx->pc = 0x21DD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DD2Cu;
label_21dd2c:
    // 0x21dd2c: 0x0  nop
    ctx->pc = 0x21dd2cu;
    // NOP
label_21dd30:
    // 0x21dd30: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x21dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_21dd34:
    // 0x21dd34: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x21dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21dd38:
    // 0x21dd38: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x21dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_21dd3c:
    // 0x21dd3c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x21dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21dd40:
    // 0x21dd40: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_21dd44:
    if (ctx->pc == 0x21DD44u) {
        ctx->pc = 0x21DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD40u;
        // 0x21dd44: 0x27bdffd0  addiu       $sp, $sp, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21DD48u;
        goto label_21dd48;
    }
    ctx->pc = 0x21DD40u;
    {
        const bool branch_taken_0x21dd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD40u;
        // 0x21dd44: 0x27bdffd0  addiu       $sp, $sp, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd40) {
            ctx->pc = 0x21DD4Cu;
            goto label_21dd4c;
        }
    }
    ctx->pc = 0x21DD48u;
label_21dd48:
    // 0x21dd48: 0xaf83828c  sw          $v1, -0x7D74($gp)
    ctx->pc = 0x21dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 3));
label_21dd4c:
    // 0x21dd4c: 0x8f83828c  lw          $v1, -0x7D74($gp)
    ctx->pc = 0x21dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21dd50:
    // 0x21dd50: 0x3c0441c6  lui         $a0, 0x41C6
    ctx->pc = 0x21dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16838 << 16));
label_21dd54:
    // 0x21dd54: 0x34884e6d  ori         $t0, $a0, 0x4E6D
    ctx->pc = 0x21dd54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20077);
label_21dd58:
    // 0x21dd58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21dd58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dd5c:
    // 0x21dd5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21dd5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dd60:
    // 0x21dd60: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x21dd60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_21dd64:
    // 0x21dd64: 0x24633039  addiu       $v1, $v1, 0x3039
    ctx->pc = 0x21dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12345));
label_21dd68:
    // 0x21dd68: 0xaf83828c  sw          $v1, -0x7D74($gp)
    ctx->pc = 0x21dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 3));
label_21dd6c:
    // 0x21dd6c: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x21dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_21dd70:
    // 0x21dd70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21dd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21dd74:
    // 0x21dd74: 0x674821  addu        $t1, $v1, $a3
    ctx->pc = 0x21dd74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_21dd78:
    // 0x21dd78: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21dd78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21dd7c:
    // 0x21dd7c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_21dd80:
    // 0x21dd80: 0x288a0007  slti        $t2, $a0, 0x7
    ctx->pc = 0x21dd80u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
label_21dd84:
    // 0x21dd84: 0x1685818  mult        $t3, $t3, $t0
    ctx->pc = 0x21dd84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21dd88:
    // 0x21dd88: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21dd88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21dd8c:
    // 0x21dd8c: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21dd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21dd90:
    // 0x21dd90: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21dd90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21dd94:
    // 0x21dd94: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21dd94u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21dd98:
    // 0x21dd98: 0x71685818  mult1       $t3, $t3, $t0
    ctx->pc = 0x21dd98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21dd9c:
    // 0x21dd9c: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21dd9cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21dda0:
    // 0x21dda0: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21dda0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21dda4:
    // 0x21dda4: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21dda4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21dda8:
    // 0x21dda8: 0x8f8d828c  lw          $t5, -0x7D74($gp)
    ctx->pc = 0x21dda8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21ddac:
    // 0x21ddac: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21ddacu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21ddb0:
    // 0x21ddb0: 0xd6402  srl         $t4, $t5, 16
    ctx->pc = 0x21ddb0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_21ddb4:
    // 0x21ddb4: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21ddb4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21ddb8:
    // 0x21ddb8: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21ddb8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21ddbc:
    // 0x21ddbc: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x21ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_21ddc0:
    // 0x21ddc0: 0x1a85818  mult        $t3, $t5, $t0
    ctx->pc = 0x21ddc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21ddc4:
    // 0x21ddc4: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21ddc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21ddc8:
    // 0x21ddc8: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21ddcc:
    // 0x21ddcc: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21ddccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21ddd0:
    // 0x21ddd0: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21ddd0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21ddd4:
    // 0x21ddd4: 0x71685818  mult1       $t3, $t3, $t0
    ctx->pc = 0x21ddd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21ddd8:
    // 0x21ddd8: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21ddd8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21dddc:
    // 0x21dddc: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21dddcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21dde0:
    // 0x21dde0: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21dde4:
    // 0x21dde4: 0x8f8d828c  lw          $t5, -0x7D74($gp)
    ctx->pc = 0x21dde4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21dde8:
    // 0x21dde8: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21dde8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21ddec:
    // 0x21ddec: 0xd6402  srl         $t4, $t5, 16
    ctx->pc = 0x21ddecu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_21ddf0:
    // 0x21ddf0: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21ddf0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21ddf4:
    // 0x21ddf4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21ddf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21ddf8:
    // 0x21ddf8: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x21ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_21ddfc:
    // 0x21ddfc: 0x1a85818  mult        $t3, $t5, $t0
    ctx->pc = 0x21ddfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21de00:
    // 0x21de00: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21de00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21de04:
    // 0x21de04: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21de08:
    // 0x21de08: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21de0c:
    // 0x21de0c: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21de0cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21de10:
    // 0x21de10: 0x71685818  mult1       $t3, $t3, $t0
    ctx->pc = 0x21de10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21de14:
    // 0x21de14: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21de14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21de18:
    // 0x21de18: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21de18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21de1c:
    // 0x21de1c: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21de20:
    // 0x21de20: 0x8f8d828c  lw          $t5, -0x7D74($gp)
    ctx->pc = 0x21de20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21de24:
    // 0x21de24: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21de24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21de28:
    // 0x21de28: 0xd6402  srl         $t4, $t5, 16
    ctx->pc = 0x21de28u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_21de2c:
    // 0x21de2c: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21de2cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21de30:
    // 0x21de30: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21de30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21de34:
    // 0x21de34: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x21de34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_21de38:
    // 0x21de38: 0x1a85818  mult        $t3, $t5, $t0
    ctx->pc = 0x21de38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21de3c:
    // 0x21de3c: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21de3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21de40:
    // 0x21de40: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21de44:
    // 0x21de44: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de44u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21de48:
    // 0x21de48: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21de48u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21de4c:
    // 0x21de4c: 0x71685818  mult1       $t3, $t3, $t0
    ctx->pc = 0x21de4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21de50:
    // 0x21de50: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21de50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21de54:
    // 0x21de54: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21de54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21de58:
    // 0x21de58: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21de5c:
    // 0x21de5c: 0x8f8d828c  lw          $t5, -0x7D74($gp)
    ctx->pc = 0x21de5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21de60:
    // 0x21de60: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21de60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21de64:
    // 0x21de64: 0xd6402  srl         $t4, $t5, 16
    ctx->pc = 0x21de64u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_21de68:
    // 0x21de68: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21de68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21de6c:
    // 0x21de6c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21de6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21de70:
    // 0x21de70: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x21de70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_21de74:
    // 0x21de74: 0x1a85818  mult        $t3, $t5, $t0
    ctx->pc = 0x21de74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21de78:
    // 0x21de78: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21de78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21de7c:
    // 0x21de7c: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21de80:
    // 0x21de80: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21de84:
    // 0x21de84: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21de84u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21de88:
    // 0x21de88: 0x71685818  mult1       $t3, $t3, $t0
    ctx->pc = 0x21de88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21de8c:
    // 0x21de8c: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21de8cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21de90:
    // 0x21de90: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21de90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21de94:
    // 0x21de94: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21de94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21de98:
    // 0x21de98: 0x8f8d828c  lw          $t5, -0x7D74($gp)
    ctx->pc = 0x21de98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21de9c:
    // 0x21de9c: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21de9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21dea0:
    // 0x21dea0: 0xd6402  srl         $t4, $t5, 16
    ctx->pc = 0x21dea0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_21dea4:
    // 0x21dea4: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21dea4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21dea8:
    // 0x21dea8: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21dea8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21deac:
    // 0x21deac: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x21deacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_21deb0:
    // 0x21deb0: 0x1a85818  mult        $t3, $t5, $t0
    ctx->pc = 0x21deb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21deb4:
    // 0x21deb4: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21deb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21deb8:
    // 0x21deb8: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21debc:
    // 0x21debc: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21debcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21dec0:
    // 0x21dec0: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21dec0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21dec4:
    // 0x21dec4: 0x71685818  mult1       $t3, $t3, $t0
    ctx->pc = 0x21dec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21dec8:
    // 0x21dec8: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21dec8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21decc:
    // 0x21decc: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21deccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21ded0:
    // 0x21ded0: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21ded4:
    // 0x21ded4: 0x8f8d828c  lw          $t5, -0x7D74($gp)
    ctx->pc = 0x21ded4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21ded8:
    // 0x21ded8: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x21ded8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_21dedc:
    // 0x21dedc: 0xd6402  srl         $t4, $t5, 16
    ctx->pc = 0x21dedcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_21dee0:
    // 0x21dee0: 0x318c7fff  andi        $t4, $t4, 0x7FFF
    ctx->pc = 0x21dee0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32767);
label_21dee4:
    // 0x21dee4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x21dee4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_21dee8:
    // 0x21dee8: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x21dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
label_21deec:
    // 0x21deec: 0x1a85818  mult        $t3, $t5, $t0
    ctx->pc = 0x21deecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_21def0:
    // 0x21def0: 0x256b3039  addiu       $t3, $t3, 0x3039
    ctx->pc = 0x21def0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12345));
label_21def4:
    // 0x21def4: 0xaf8b828c  sw          $t3, -0x7D74($gp)
    ctx->pc = 0x21def4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935180), GPR_U32(ctx, 11));
label_21def8:
    // 0x21def8: 0x8f8b828c  lw          $t3, -0x7D74($gp)
    ctx->pc = 0x21def8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935180)));
label_21defc:
    // 0x21defc: 0xb6402  srl         $t4, $t3, 16
    ctx->pc = 0x21defcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    ctx->pc = 0x21df00u;
    return;
}
