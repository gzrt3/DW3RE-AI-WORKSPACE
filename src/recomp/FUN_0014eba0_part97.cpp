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


void FUN_0014eba0_part97(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17d9a0u: goto label_17d9a0;
        case 0x17d9a4u: goto label_17d9a4;
        case 0x17d9a8u: goto label_17d9a8;
        case 0x17d9acu: goto label_17d9ac;
        case 0x17d9b0u: goto label_17d9b0;
        case 0x17d9b4u: goto label_17d9b4;
        case 0x17d9b8u: goto label_17d9b8;
        case 0x17d9bcu: goto label_17d9bc;
        case 0x17d9c0u: goto label_17d9c0;
        case 0x17d9c4u: goto label_17d9c4;
        case 0x17d9c8u: goto label_17d9c8;
        case 0x17d9ccu: goto label_17d9cc;
        case 0x17d9d0u: goto label_17d9d0;
        case 0x17d9d4u: goto label_17d9d4;
        case 0x17d9d8u: goto label_17d9d8;
        case 0x17d9dcu: goto label_17d9dc;
        case 0x17d9e0u: goto label_17d9e0;
        case 0x17d9e4u: goto label_17d9e4;
        case 0x17d9e8u: goto label_17d9e8;
        case 0x17d9ecu: goto label_17d9ec;
        case 0x17d9f0u: goto label_17d9f0;
        case 0x17d9f4u: goto label_17d9f4;
        case 0x17d9f8u: goto label_17d9f8;
        case 0x17d9fcu: goto label_17d9fc;
        case 0x17da00u: goto label_17da00;
        case 0x17da04u: goto label_17da04;
        case 0x17da08u: goto label_17da08;
        case 0x17da0cu: goto label_17da0c;
        case 0x17da10u: goto label_17da10;
        case 0x17da14u: goto label_17da14;
        case 0x17da18u: goto label_17da18;
        case 0x17da1cu: goto label_17da1c;
        case 0x17da20u: goto label_17da20;
        case 0x17da24u: goto label_17da24;
        case 0x17da28u: goto label_17da28;
        case 0x17da2cu: goto label_17da2c;
        case 0x17da30u: goto label_17da30;
        case 0x17da34u: goto label_17da34;
        case 0x17da38u: goto label_17da38;
        case 0x17da3cu: goto label_17da3c;
        case 0x17da40u: goto label_17da40;
        case 0x17da44u: goto label_17da44;
        case 0x17da48u: goto label_17da48;
        case 0x17da4cu: goto label_17da4c;
        case 0x17da50u: goto label_17da50;
        case 0x17da54u: goto label_17da54;
        case 0x17da58u: goto label_17da58;
        case 0x17da5cu: goto label_17da5c;
        case 0x17da60u: goto label_17da60;
        case 0x17da64u: goto label_17da64;
        case 0x17da68u: goto label_17da68;
        case 0x17da6cu: goto label_17da6c;
        case 0x17da70u: goto label_17da70;
        case 0x17da74u: goto label_17da74;
        case 0x17da78u: goto label_17da78;
        case 0x17da7cu: goto label_17da7c;
        case 0x17da80u: goto label_17da80;
        case 0x17da84u: goto label_17da84;
        case 0x17da88u: goto label_17da88;
        case 0x17da8cu: goto label_17da8c;
        case 0x17da90u: goto label_17da90;
        case 0x17da94u: goto label_17da94;
        case 0x17da98u: goto label_17da98;
        case 0x17da9cu: goto label_17da9c;
        case 0x17daa0u: goto label_17daa0;
        case 0x17daa4u: goto label_17daa4;
        case 0x17daa8u: goto label_17daa8;
        case 0x17daacu: goto label_17daac;
        case 0x17dab0u: goto label_17dab0;
        case 0x17dab4u: goto label_17dab4;
        case 0x17dab8u: goto label_17dab8;
        case 0x17dabcu: goto label_17dabc;
        case 0x17dac0u: goto label_17dac0;
        case 0x17dac4u: goto label_17dac4;
        case 0x17dac8u: goto label_17dac8;
        case 0x17daccu: goto label_17dacc;
        case 0x17dad0u: goto label_17dad0;
        case 0x17dad4u: goto label_17dad4;
        case 0x17dad8u: goto label_17dad8;
        case 0x17dadcu: goto label_17dadc;
        case 0x17dae0u: goto label_17dae0;
        case 0x17dae4u: goto label_17dae4;
        case 0x17dae8u: goto label_17dae8;
        case 0x17daecu: goto label_17daec;
        case 0x17daf0u: goto label_17daf0;
        case 0x17daf4u: goto label_17daf4;
        case 0x17daf8u: goto label_17daf8;
        case 0x17dafcu: goto label_17dafc;
        case 0x17db00u: goto label_17db00;
        case 0x17db04u: goto label_17db04;
        case 0x17db08u: goto label_17db08;
        case 0x17db0cu: goto label_17db0c;
        case 0x17db10u: goto label_17db10;
        case 0x17db14u: goto label_17db14;
        case 0x17db18u: goto label_17db18;
        case 0x17db1cu: goto label_17db1c;
        case 0x17db20u: goto label_17db20;
        case 0x17db24u: goto label_17db24;
        case 0x17db28u: goto label_17db28;
        case 0x17db2cu: goto label_17db2c;
        case 0x17db30u: goto label_17db30;
        case 0x17db34u: goto label_17db34;
        case 0x17db38u: goto label_17db38;
        case 0x17db3cu: goto label_17db3c;
        case 0x17db40u: goto label_17db40;
        case 0x17db44u: goto label_17db44;
        case 0x17db48u: goto label_17db48;
        case 0x17db4cu: goto label_17db4c;
        case 0x17db50u: goto label_17db50;
        case 0x17db54u: goto label_17db54;
        case 0x17db58u: goto label_17db58;
        case 0x17db5cu: goto label_17db5c;
        case 0x17db60u: goto label_17db60;
        case 0x17db64u: goto label_17db64;
        case 0x17db68u: goto label_17db68;
        case 0x17db6cu: goto label_17db6c;
        case 0x17db70u: goto label_17db70;
        case 0x17db74u: goto label_17db74;
        case 0x17db78u: goto label_17db78;
        case 0x17db7cu: goto label_17db7c;
        case 0x17db80u: goto label_17db80;
        case 0x17db84u: goto label_17db84;
        case 0x17db88u: goto label_17db88;
        case 0x17db8cu: goto label_17db8c;
        case 0x17db90u: goto label_17db90;
        case 0x17db94u: goto label_17db94;
        case 0x17db98u: goto label_17db98;
        case 0x17db9cu: goto label_17db9c;
        case 0x17dba0u: goto label_17dba0;
        case 0x17dba4u: goto label_17dba4;
        case 0x17dba8u: goto label_17dba8;
        case 0x17dbacu: goto label_17dbac;
        case 0x17dbb0u: goto label_17dbb0;
        case 0x17dbb4u: goto label_17dbb4;
        case 0x17dbb8u: goto label_17dbb8;
        case 0x17dbbcu: goto label_17dbbc;
        case 0x17dbc0u: goto label_17dbc0;
        case 0x17dbc4u: goto label_17dbc4;
        case 0x17dbc8u: goto label_17dbc8;
        case 0x17dbccu: goto label_17dbcc;
        case 0x17dbd0u: goto label_17dbd0;
        case 0x17dbd4u: goto label_17dbd4;
        case 0x17dbd8u: goto label_17dbd8;
        case 0x17dbdcu: goto label_17dbdc;
        case 0x17dbe0u: goto label_17dbe0;
        case 0x17dbe4u: goto label_17dbe4;
        case 0x17dbe8u: goto label_17dbe8;
        case 0x17dbecu: goto label_17dbec;
        case 0x17dbf0u: goto label_17dbf0;
        case 0x17dbf4u: goto label_17dbf4;
        case 0x17dbf8u: goto label_17dbf8;
        case 0x17dbfcu: goto label_17dbfc;
        case 0x17dc00u: goto label_17dc00;
        case 0x17dc04u: goto label_17dc04;
        case 0x17dc08u: goto label_17dc08;
        case 0x17dc0cu: goto label_17dc0c;
        case 0x17dc10u: goto label_17dc10;
        case 0x17dc14u: goto label_17dc14;
        case 0x17dc18u: goto label_17dc18;
        case 0x17dc1cu: goto label_17dc1c;
        case 0x17dc20u: goto label_17dc20;
        case 0x17dc24u: goto label_17dc24;
        case 0x17dc28u: goto label_17dc28;
        case 0x17dc2cu: goto label_17dc2c;
        case 0x17dc30u: goto label_17dc30;
        case 0x17dc34u: goto label_17dc34;
        case 0x17dc38u: goto label_17dc38;
        case 0x17dc3cu: goto label_17dc3c;
        case 0x17dc40u: goto label_17dc40;
        case 0x17dc44u: goto label_17dc44;
        case 0x17dc48u: goto label_17dc48;
        case 0x17dc4cu: goto label_17dc4c;
        case 0x17dc50u: goto label_17dc50;
        case 0x17dc54u: goto label_17dc54;
        case 0x17dc58u: goto label_17dc58;
        case 0x17dc5cu: goto label_17dc5c;
        case 0x17dc60u: goto label_17dc60;
        case 0x17dc64u: goto label_17dc64;
        case 0x17dc68u: goto label_17dc68;
        case 0x17dc6cu: goto label_17dc6c;
        case 0x17dc70u: goto label_17dc70;
        case 0x17dc74u: goto label_17dc74;
        case 0x17dc78u: goto label_17dc78;
        case 0x17dc7cu: goto label_17dc7c;
        case 0x17dc80u: goto label_17dc80;
        case 0x17dc84u: goto label_17dc84;
        case 0x17dc88u: goto label_17dc88;
        case 0x17dc8cu: goto label_17dc8c;
        case 0x17dc90u: goto label_17dc90;
        case 0x17dc94u: goto label_17dc94;
        case 0x17dc98u: goto label_17dc98;
        case 0x17dc9cu: goto label_17dc9c;
        case 0x17dca0u: goto label_17dca0;
        case 0x17dca4u: goto label_17dca4;
        case 0x17dca8u: goto label_17dca8;
        case 0x17dcacu: goto label_17dcac;
        case 0x17dcb0u: goto label_17dcb0;
        case 0x17dcb4u: goto label_17dcb4;
        case 0x17dcb8u: goto label_17dcb8;
        case 0x17dcbcu: goto label_17dcbc;
        case 0x17dcc0u: goto label_17dcc0;
        case 0x17dcc4u: goto label_17dcc4;
        case 0x17dcc8u: goto label_17dcc8;
        case 0x17dcccu: goto label_17dccc;
        case 0x17dcd0u: goto label_17dcd0;
        case 0x17dcd4u: goto label_17dcd4;
        case 0x17dcd8u: goto label_17dcd8;
        case 0x17dcdcu: goto label_17dcdc;
        case 0x17dce0u: goto label_17dce0;
        case 0x17dce4u: goto label_17dce4;
        case 0x17dce8u: goto label_17dce8;
        case 0x17dcecu: goto label_17dcec;
        case 0x17dcf0u: goto label_17dcf0;
        case 0x17dcf4u: goto label_17dcf4;
        case 0x17dcf8u: goto label_17dcf8;
        case 0x17dcfcu: goto label_17dcfc;
        case 0x17dd00u: goto label_17dd00;
        case 0x17dd04u: goto label_17dd04;
        case 0x17dd08u: goto label_17dd08;
        case 0x17dd0cu: goto label_17dd0c;
        case 0x17dd10u: goto label_17dd10;
        case 0x17dd14u: goto label_17dd14;
        case 0x17dd18u: goto label_17dd18;
        case 0x17dd1cu: goto label_17dd1c;
        case 0x17dd20u: goto label_17dd20;
        case 0x17dd24u: goto label_17dd24;
        case 0x17dd28u: goto label_17dd28;
        case 0x17dd2cu: goto label_17dd2c;
        case 0x17dd30u: goto label_17dd30;
        case 0x17dd34u: goto label_17dd34;
        case 0x17dd38u: goto label_17dd38;
        case 0x17dd3cu: goto label_17dd3c;
        case 0x17dd40u: goto label_17dd40;
        case 0x17dd44u: goto label_17dd44;
        case 0x17dd48u: goto label_17dd48;
        case 0x17dd4cu: goto label_17dd4c;
        case 0x17dd50u: goto label_17dd50;
        case 0x17dd54u: goto label_17dd54;
        case 0x17dd58u: goto label_17dd58;
        case 0x17dd5cu: goto label_17dd5c;
        case 0x17dd60u: goto label_17dd60;
        case 0x17dd64u: goto label_17dd64;
        case 0x17dd68u: goto label_17dd68;
        case 0x17dd6cu: goto label_17dd6c;
        case 0x17dd70u: goto label_17dd70;
        case 0x17dd74u: goto label_17dd74;
        case 0x17dd78u: goto label_17dd78;
        case 0x17dd7cu: goto label_17dd7c;
        case 0x17dd80u: goto label_17dd80;
        case 0x17dd84u: goto label_17dd84;
        case 0x17dd88u: goto label_17dd88;
        case 0x17dd8cu: goto label_17dd8c;
        case 0x17dd90u: goto label_17dd90;
        case 0x17dd94u: goto label_17dd94;
        case 0x17dd98u: goto label_17dd98;
        case 0x17dd9cu: goto label_17dd9c;
        case 0x17dda0u: goto label_17dda0;
        case 0x17dda4u: goto label_17dda4;
        case 0x17dda8u: goto label_17dda8;
        case 0x17ddacu: goto label_17ddac;
        case 0x17ddb0u: goto label_17ddb0;
        case 0x17ddb4u: goto label_17ddb4;
        case 0x17ddb8u: goto label_17ddb8;
        case 0x17ddbcu: goto label_17ddbc;
        case 0x17ddc0u: goto label_17ddc0;
        case 0x17ddc4u: goto label_17ddc4;
        case 0x17ddc8u: goto label_17ddc8;
        case 0x17ddccu: goto label_17ddcc;
        case 0x17ddd0u: goto label_17ddd0;
        case 0x17ddd4u: goto label_17ddd4;
        case 0x17ddd8u: goto label_17ddd8;
        case 0x17dddcu: goto label_17dddc;
        case 0x17dde0u: goto label_17dde0;
        case 0x17dde4u: goto label_17dde4;
        case 0x17dde8u: goto label_17dde8;
        case 0x17ddecu: goto label_17ddec;
        case 0x17ddf0u: goto label_17ddf0;
        case 0x17ddf4u: goto label_17ddf4;
        case 0x17ddf8u: goto label_17ddf8;
        case 0x17ddfcu: goto label_17ddfc;
        case 0x17de00u: goto label_17de00;
        case 0x17de04u: goto label_17de04;
        case 0x17de08u: goto label_17de08;
        case 0x17de0cu: goto label_17de0c;
        case 0x17de10u: goto label_17de10;
        case 0x17de14u: goto label_17de14;
        case 0x17de18u: goto label_17de18;
        case 0x17de1cu: goto label_17de1c;
        case 0x17de20u: goto label_17de20;
        case 0x17de24u: goto label_17de24;
        case 0x17de28u: goto label_17de28;
        case 0x17de2cu: goto label_17de2c;
        case 0x17de30u: goto label_17de30;
        case 0x17de34u: goto label_17de34;
        case 0x17de38u: goto label_17de38;
        case 0x17de3cu: goto label_17de3c;
        case 0x17de40u: goto label_17de40;
        case 0x17de44u: goto label_17de44;
        case 0x17de48u: goto label_17de48;
        case 0x17de4cu: goto label_17de4c;
        case 0x17de50u: goto label_17de50;
        case 0x17de54u: goto label_17de54;
        case 0x17de58u: goto label_17de58;
        case 0x17de5cu: goto label_17de5c;
        case 0x17de60u: goto label_17de60;
        case 0x17de64u: goto label_17de64;
        case 0x17de68u: goto label_17de68;
        case 0x17de6cu: goto label_17de6c;
        case 0x17de70u: goto label_17de70;
        case 0x17de74u: goto label_17de74;
        case 0x17de78u: goto label_17de78;
        case 0x17de7cu: goto label_17de7c;
        case 0x17de80u: goto label_17de80;
        case 0x17de84u: goto label_17de84;
        case 0x17de88u: goto label_17de88;
        case 0x17de8cu: goto label_17de8c;
        case 0x17de90u: goto label_17de90;
        case 0x17de94u: goto label_17de94;
        case 0x17de98u: goto label_17de98;
        case 0x17de9cu: goto label_17de9c;
        case 0x17dea0u: goto label_17dea0;
        case 0x17dea4u: goto label_17dea4;
        case 0x17dea8u: goto label_17dea8;
        case 0x17deacu: goto label_17deac;
        case 0x17deb0u: goto label_17deb0;
        case 0x17deb4u: goto label_17deb4;
        case 0x17deb8u: goto label_17deb8;
        case 0x17debcu: goto label_17debc;
        case 0x17dec0u: goto label_17dec0;
        case 0x17dec4u: goto label_17dec4;
        case 0x17dec8u: goto label_17dec8;
        case 0x17deccu: goto label_17decc;
        case 0x17ded0u: goto label_17ded0;
        case 0x17ded4u: goto label_17ded4;
        case 0x17ded8u: goto label_17ded8;
        case 0x17dedcu: goto label_17dedc;
        case 0x17dee0u: goto label_17dee0;
        case 0x17dee4u: goto label_17dee4;
        case 0x17dee8u: goto label_17dee8;
        case 0x17deecu: goto label_17deec;
        case 0x17def0u: goto label_17def0;
        case 0x17def4u: goto label_17def4;
        case 0x17def8u: goto label_17def8;
        case 0x17defcu: goto label_17defc;
        case 0x17df00u: goto label_17df00;
        case 0x17df04u: goto label_17df04;
        case 0x17df08u: goto label_17df08;
        case 0x17df0cu: goto label_17df0c;
        case 0x17df10u: goto label_17df10;
        case 0x17df14u: goto label_17df14;
        case 0x17df18u: goto label_17df18;
        case 0x17df1cu: goto label_17df1c;
        case 0x17df20u: goto label_17df20;
        case 0x17df24u: goto label_17df24;
        case 0x17df28u: goto label_17df28;
        case 0x17df2cu: goto label_17df2c;
        case 0x17df30u: goto label_17df30;
        case 0x17df34u: goto label_17df34;
        case 0x17df38u: goto label_17df38;
        case 0x17df3cu: goto label_17df3c;
        case 0x17df40u: goto label_17df40;
        case 0x17df44u: goto label_17df44;
        case 0x17df48u: goto label_17df48;
        case 0x17df4cu: goto label_17df4c;
        case 0x17df50u: goto label_17df50;
        case 0x17df54u: goto label_17df54;
        case 0x17df58u: goto label_17df58;
        case 0x17df5cu: goto label_17df5c;
        case 0x17df60u: goto label_17df60;
        case 0x17df64u: goto label_17df64;
        case 0x17df68u: goto label_17df68;
        case 0x17df6cu: goto label_17df6c;
        case 0x17df70u: goto label_17df70;
        case 0x17df74u: goto label_17df74;
        case 0x17df78u: goto label_17df78;
        case 0x17df7cu: goto label_17df7c;
        case 0x17df80u: goto label_17df80;
        case 0x17df84u: goto label_17df84;
        case 0x17df88u: goto label_17df88;
        case 0x17df8cu: goto label_17df8c;
        case 0x17df90u: goto label_17df90;
        case 0x17df94u: goto label_17df94;
        case 0x17df98u: goto label_17df98;
        case 0x17df9cu: goto label_17df9c;
        case 0x17dfa0u: goto label_17dfa0;
        case 0x17dfa4u: goto label_17dfa4;
        case 0x17dfa8u: goto label_17dfa8;
        case 0x17dfacu: goto label_17dfac;
        case 0x17dfb0u: goto label_17dfb0;
        case 0x17dfb4u: goto label_17dfb4;
        case 0x17dfb8u: goto label_17dfb8;
        case 0x17dfbcu: goto label_17dfbc;
        case 0x17dfc0u: goto label_17dfc0;
        case 0x17dfc4u: goto label_17dfc4;
        case 0x17dfc8u: goto label_17dfc8;
        case 0x17dfccu: goto label_17dfcc;
        case 0x17dfd0u: goto label_17dfd0;
        case 0x17dfd4u: goto label_17dfd4;
        case 0x17dfd8u: goto label_17dfd8;
        case 0x17dfdcu: goto label_17dfdc;
        case 0x17dfe0u: goto label_17dfe0;
        case 0x17dfe4u: goto label_17dfe4;
        case 0x17dfe8u: goto label_17dfe8;
        case 0x17dfecu: goto label_17dfec;
        case 0x17dff0u: goto label_17dff0;
        case 0x17dff4u: goto label_17dff4;
        case 0x17dff8u: goto label_17dff8;
        case 0x17dffcu: goto label_17dffc;
        case 0x17e000u: goto label_17e000;
        case 0x17e004u: goto label_17e004;
        case 0x17e008u: goto label_17e008;
        case 0x17e00cu: goto label_17e00c;
        case 0x17e010u: goto label_17e010;
        case 0x17e014u: goto label_17e014;
        case 0x17e018u: goto label_17e018;
        case 0x17e01cu: goto label_17e01c;
        case 0x17e020u: goto label_17e020;
        case 0x17e024u: goto label_17e024;
        case 0x17e028u: goto label_17e028;
        case 0x17e02cu: goto label_17e02c;
        case 0x17e030u: goto label_17e030;
        case 0x17e034u: goto label_17e034;
        case 0x17e038u: goto label_17e038;
        case 0x17e03cu: goto label_17e03c;
        case 0x17e040u: goto label_17e040;
        case 0x17e044u: goto label_17e044;
        case 0x17e048u: goto label_17e048;
        case 0x17e04cu: goto label_17e04c;
        case 0x17e050u: goto label_17e050;
        case 0x17e054u: goto label_17e054;
        case 0x17e058u: goto label_17e058;
        case 0x17e05cu: goto label_17e05c;
        case 0x17e060u: goto label_17e060;
        case 0x17e064u: goto label_17e064;
        case 0x17e068u: goto label_17e068;
        case 0x17e06cu: goto label_17e06c;
        case 0x17e070u: goto label_17e070;
        case 0x17e074u: goto label_17e074;
        case 0x17e078u: goto label_17e078;
        case 0x17e07cu: goto label_17e07c;
        case 0x17e080u: goto label_17e080;
        case 0x17e084u: goto label_17e084;
        case 0x17e088u: goto label_17e088;
        case 0x17e08cu: goto label_17e08c;
        case 0x17e090u: goto label_17e090;
        case 0x17e094u: goto label_17e094;
        case 0x17e098u: goto label_17e098;
        case 0x17e09cu: goto label_17e09c;
        case 0x17e0a0u: goto label_17e0a0;
        case 0x17e0a4u: goto label_17e0a4;
        case 0x17e0a8u: goto label_17e0a8;
        case 0x17e0acu: goto label_17e0ac;
        case 0x17e0b0u: goto label_17e0b0;
        case 0x17e0b4u: goto label_17e0b4;
        case 0x17e0b8u: goto label_17e0b8;
        case 0x17e0bcu: goto label_17e0bc;
        case 0x17e0c0u: goto label_17e0c0;
        case 0x17e0c4u: goto label_17e0c4;
        case 0x17e0c8u: goto label_17e0c8;
        case 0x17e0ccu: goto label_17e0cc;
        case 0x17e0d0u: goto label_17e0d0;
        case 0x17e0d4u: goto label_17e0d4;
        case 0x17e0d8u: goto label_17e0d8;
        case 0x17e0dcu: goto label_17e0dc;
        case 0x17e0e0u: goto label_17e0e0;
        case 0x17e0e4u: goto label_17e0e4;
        case 0x17e0e8u: goto label_17e0e8;
        case 0x17e0ecu: goto label_17e0ec;
        case 0x17e0f0u: goto label_17e0f0;
        case 0x17e0f4u: goto label_17e0f4;
        case 0x17e0f8u: goto label_17e0f8;
        case 0x17e0fcu: goto label_17e0fc;
        case 0x17e100u: goto label_17e100;
        case 0x17e104u: goto label_17e104;
        case 0x17e108u: goto label_17e108;
        case 0x17e10cu: goto label_17e10c;
        case 0x17e110u: goto label_17e110;
        case 0x17e114u: goto label_17e114;
        case 0x17e118u: goto label_17e118;
        case 0x17e11cu: goto label_17e11c;
        case 0x17e120u: goto label_17e120;
        case 0x17e124u: goto label_17e124;
        case 0x17e128u: goto label_17e128;
        case 0x17e12cu: goto label_17e12c;
        case 0x17e130u: goto label_17e130;
        case 0x17e134u: goto label_17e134;
        case 0x17e138u: goto label_17e138;
        case 0x17e13cu: goto label_17e13c;
        case 0x17e140u: goto label_17e140;
        case 0x17e144u: goto label_17e144;
        case 0x17e148u: goto label_17e148;
        case 0x17e14cu: goto label_17e14c;
        case 0x17e150u: goto label_17e150;
        case 0x17e154u: goto label_17e154;
        case 0x17e158u: goto label_17e158;
        case 0x17e15cu: goto label_17e15c;
        case 0x17e160u: goto label_17e160;
        case 0x17e164u: goto label_17e164;
        case 0x17e168u: goto label_17e168;
        case 0x17e16cu: goto label_17e16c;
        default: return;
    }

label_17d9a0:
    // 0x17d9a0: 0xaf83877c  sw          $v1, -0x7884($gp)
    ctx->pc = 0x17d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
label_17d9a4:
    // 0x17d9a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_17d9a8:
    if (ctx->pc == 0x17D9A8u) {
        ctx->pc = 0x17D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9A4u;
        // 0x17d9a8: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D9ACu;
        goto label_17d9ac;
    }
    ctx->pc = 0x17D9A4u;
    {
        const bool branch_taken_0x17d9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9A4u;
        // 0x17d9a8: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9a4) {
            ctx->pc = 0x17D9C0u;
            goto label_17d9c0;
        }
    }
    ctx->pc = 0x17D9ACu;
label_17d9ac:
    // 0x17d9ac: 0x0  nop
    ctx->pc = 0x17d9acu;
    // NOP
label_17d9b0:
    // 0x17d9b0: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17d9b4:
    // 0x17d9b4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x17d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_17d9b8:
    // 0x17d9b8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17d9bc:
    // 0x17d9bc: 0xaf83877c  sw          $v1, -0x7884($gp)
    ctx->pc = 0x17d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
label_17d9c0:
    // 0x17d9c0: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17d9c4:
    // 0x17d9c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17d9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17d9c8:
    // 0x17d9c8: 0x34213fb1  ori         $at, $at, 0x3FB1
    ctx->pc = 0x17d9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16305);
label_17d9cc:
    // 0x17d9cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_17d9d0:
    // 0x17d9d0: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x17d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_17d9d4:
    // 0x17d9d4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17d9d8:
    // 0x17d9d8: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x17d9d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_17d9dc:
    // 0x17d9dc: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
label_17d9e0:
    if (ctx->pc == 0x17D9E0u) {
        ctx->pc = 0x17D9E4u;
        goto label_17d9e4;
    }
    ctx->pc = 0x17D9DCu;
    {
        const bool branch_taken_0x17d9dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d9dc) {
            ctx->pc = 0x17DA50u;
            goto label_17da50;
        }
    }
    ctx->pc = 0x17D9E4u;
label_17d9e4:
    // 0x17d9e4: 0x8f848770  lw          $a0, -0x7890($gp)
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_17d9e8:
    // 0x17d9e8: 0x8f858774  lw          $a1, -0x788C($gp)
    ctx->pc = 0x17d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17d9ec:
    // 0x17d9ec: 0xc05e75c  jal         func_179D70
label_17d9f0:
    if (ctx->pc == 0x17D9F0u) {
        ctx->pc = 0x17D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9ECu;
        // 0x17d9f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D9F4u;
        goto label_17d9f4;
    }
    ctx->pc = 0x17D9ECu;
    SET_GPR_U32(ctx, 31, 0x17D9F4u);
    ctx->pc = 0x17D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9ECu;
    // 0x17d9f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179D70u;
    { ctx->pc = 0x179d70; return; }
    ctx->pc = 0x17D9F4u;
label_17d9f4:
    // 0x17d9f4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_17d9f8:
    // 0x17d9f8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17d9fc:
    // 0x17d9fc: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x17d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_17da00:
    // 0x17da00: 0x24849400  addiu       $a0, $a0, -0x6C00
    ctx->pc = 0x17da00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939648));
label_17da04:
    // 0x17da04: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17da04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17da08:
    // 0x17da08: 0xaf80877c  sw          $zero, -0x7884($gp)
    ctx->pc = 0x17da08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 0));
label_17da0c:
    // 0x17da0c: 0xaf808778  sw          $zero, -0x7888($gp)
    ctx->pc = 0x17da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 0));
label_17da10:
    // 0x17da10: 0x246393c0  addiu       $v1, $v1, -0x6C40
    ctx->pc = 0x17da10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939584));
label_17da14:
    // 0x17da14: 0xaf808770  sw          $zero, -0x7890($gp)
    ctx->pc = 0x17da14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 0));
label_17da18:
    // 0x17da18: 0xaf808774  sw          $zero, -0x788C($gp)
    ctx->pc = 0x17da18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 0));
label_17da1c:
    // 0x17da1c: 0xaf808790  sw          $zero, -0x7870($gp)
    ctx->pc = 0x17da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 0));
label_17da20:
    // 0x17da20: 0xaf80878c  sw          $zero, -0x7874($gp)
    ctx->pc = 0x17da20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 0));
label_17da24:
    // 0x17da24: 0xaf808788  sw          $zero, -0x7878($gp)
    ctx->pc = 0x17da24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 0));
label_17da28:
    // 0x17da28: 0xaf808784  sw          $zero, -0x787C($gp)
    ctx->pc = 0x17da28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 0));
label_17da2c:
    // 0x17da2c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x17da2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17da30:
    // 0x17da30: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x17da30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_17da34:
    // 0x17da34: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x17da34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_17da38:
    // 0x17da38: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x17da38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_17da3c:
    // 0x17da3c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x17da3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17da40:
    // 0x17da40: 0xd8660010  lqc2        $vf6, 0x10($v1)
    ctx->pc = 0x17da40u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17da44:
    // 0x17da44: 0xd8670020  lqc2        $vf7, 0x20($v1)
    ctx->pc = 0x17da44u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17da48:
    // 0x17da48: 0xd8680030  lqc2        $vf8, 0x30($v1)
    ctx->pc = 0x17da48u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17da4c:
    // 0x17da4c: 0x0  nop
    ctx->pc = 0x17da4cu;
    // NOP
label_17da50:
    // 0x17da50: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x17da50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_17da54:
    // 0x17da54: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x17da54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_17da58:
    // 0x17da58: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x17da58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
label_17da5c:
    // 0x17da5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17da5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_17da60:
    // 0x17da60: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x17da60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
label_17da64:
    // 0x17da64: 0x0  nop
    ctx->pc = 0x17da64u;
    // NOP
label_17da68:
    // 0x17da68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17da68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17da6c:
    // 0x17da6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_17da70:
    // 0x17da70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17da70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_17da74:
    // 0x17da74: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_17da78:
    if (ctx->pc == 0x17DA78u) {
        ctx->pc = 0x17DA7Cu;
        goto label_17da7c;
    }
    ctx->pc = 0x17DA74u;
    {
        const bool branch_taken_0x17da74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17da74) {
            ctx->pc = 0x17DA84u;
            goto label_17da84;
        }
    }
    ctx->pc = 0x17DA7Cu;
label_17da7c:
    // 0x17da7c: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
label_17da80:
    if (ctx->pc == 0x17DA80u) {
        ctx->pc = 0x17DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA7Cu;
        // 0x17da80: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA84u;
        goto label_17da84;
    }
    ctx->pc = 0x17DA7Cu;
    {
        const bool branch_taken_0x17da7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA7Cu;
        // 0x17da80: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da7c) {
            ctx->pc = 0x17D954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17d954; return; }
        }
    }
    ctx->pc = 0x17DA84u;
label_17da84:
    // 0x17da84: 0x0  nop
    ctx->pc = 0x17da84u;
    // NOP
label_17da88:
    // 0x17da88: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17da88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17da8c:
    // 0x17da8c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_17da90:
    // 0x17da90: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_17da94:
    if (ctx->pc == 0x17DA94u) {
        ctx->pc = 0x17DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA90u;
        // 0x17da94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA98u;
        goto label_17da98;
    }
    ctx->pc = 0x17DA90u;
    {
        const bool branch_taken_0x17da90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA90u;
        // 0x17da94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da90) {
            ctx->pc = 0x17DAB0u;
            goto label_17dab0;
        }
    }
    ctx->pc = 0x17DA98u;
label_17da98:
    // 0x17da98: 0xc05eb40  jal         func_17AD00
label_17da9c:
    if (ctx->pc == 0x17DA9Cu) {
        ctx->pc = 0x17DAA0u;
        goto label_17daa0;
    }
    ctx->pc = 0x17DA98u;
    SET_GPR_U32(ctx, 31, 0x17DAA0u);
    ctx->pc = 0x17AD00u;
    { ctx->pc = 0x17ad00; return; }
    ctx->pc = 0x17DAA0u;
label_17daa0:
    // 0x17daa0: 0x8f848770  lw          $a0, -0x7890($gp)
    ctx->pc = 0x17daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_17daa4:
    // 0x17daa4: 0x8f858774  lw          $a1, -0x788C($gp)
    ctx->pc = 0x17daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17daa8:
    // 0x17daa8: 0xc05e75c  jal         func_179D70
label_17daac:
    if (ctx->pc == 0x17DAACu) {
        ctx->pc = 0x17DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAA8u;
        // 0x17daac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DAB0u;
        goto label_17dab0;
    }
    ctx->pc = 0x17DAA8u;
    SET_GPR_U32(ctx, 31, 0x17DAB0u);
    ctx->pc = 0x17DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DAA8u;
    // 0x17daac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179D70u;
    { ctx->pc = 0x179d70; return; }
    ctx->pc = 0x17DAB0u;
label_17dab0:
    // 0x17dab0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_17dab4:
    if (ctx->pc == 0x17DAB4u) {
        ctx->pc = 0x17DAB8u;
        goto label_17dab8;
    }
    ctx->pc = 0x17DAB0u;
    {
        const bool branch_taken_0x17dab0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dab0) {
            ctx->pc = 0x17DAC4u;
            goto label_17dac4;
        }
    }
    ctx->pc = 0x17DAB8u;
label_17dab8:
    // 0x17dab8: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x17dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_17dabc:
    // 0x17dabc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17dac0:
    // 0x17dac0: 0xaf838418  sw          $v1, -0x7BE8($gp)
    ctx->pc = 0x17dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935576), GPR_U32(ctx, 3));
label_17dac4:
    // 0x17dac4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17dac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17dac8:
    // 0x17dac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17dacc:
    // 0x17dacc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17daccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17dad0:
    // 0x17dad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17dad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17dad4:
    // 0x17dad4: 0x3e00008  jr          $ra
label_17dad8:
    if (ctx->pc == 0x17DAD8u) {
        ctx->pc = 0x17DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAD4u;
        // 0x17dad8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DADCu;
        goto label_17dadc;
    }
    ctx->pc = 0x17DAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAD4u;
        // 0x17dad8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DADCu;
label_17dadc:
    // 0x17dadc: 0x0  nop
    ctx->pc = 0x17dadcu;
    // NOP
label_17dae0:
    // 0x17dae0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17dae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_17dae4:
    // 0x17dae4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17dae8:
    // 0x17dae8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_17daec:
    // 0x17daec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17daecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17daf0:
    // 0x17daf0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17daf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_17daf4:
    // 0x17daf4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17daf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17daf8:
    // 0x17daf8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x17daf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17dafc:
    // 0x17dafc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17dafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17db00:
    // 0x17db00: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17db00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17db04:
    // 0x17db04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17db04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17db08:
    // 0x17db08: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17db08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17db0c:
    // 0x17db0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17db0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17db10:
    // 0x17db10: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17db10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17db14:
    // 0x17db14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17db14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17db18:
    // 0x17db18: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x17db18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_17db1c:
    // 0x17db1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17db1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17db20:
    // 0x17db20: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x17db20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_17db24:
    // 0x17db24: 0x8f848460  lw          $a0, -0x7BA0($gp)
    ctx->pc = 0x17db24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935648)));
label_17db28:
    // 0x17db28: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x17db28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_17db2c:
    // 0x17db2c: 0x8f858458  lw          $a1, -0x7BA8($gp)
    ctx->pc = 0x17db2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935640)));
label_17db30:
    // 0x17db30: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x17db30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_17db34:
    // 0x17db34: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17db34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_17db38:
    // 0x17db38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17db38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_17db3c:
    // 0x17db3c: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
label_17db40:
    if (ctx->pc == 0x17DB40u) {
        ctx->pc = 0x17DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB3Cu;
        // 0x17db40: 0xa48021  addu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB44u;
        goto label_17db44;
    }
    ctx->pc = 0x17DB3Cu;
    {
        const bool branch_taken_0x17db3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x17DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB3Cu;
        // 0x17db40: 0xa48021  addu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db3c) {
            ctx->pc = 0x17DB50u;
            goto label_17db50;
        }
    }
    ctx->pc = 0x17DB44u;
label_17db44:
    // 0x17db44: 0xc05ee44  jal         func_17B910
label_17db48:
    if (ctx->pc == 0x17DB48u) {
        ctx->pc = 0x17DB4Cu;
        goto label_17db4c;
    }
    ctx->pc = 0x17DB44u;
    SET_GPR_U32(ctx, 31, 0x17DB4Cu);
    ctx->pc = 0x17B910u;
    { ctx->pc = 0x17b910; return; }
    ctx->pc = 0x17DB4Cu;
label_17db4c:
    // 0x17db4c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x17db4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17db50:
    // 0x17db50: 0x2d4082a  slt         $at, $s6, $s4
    ctx->pc = 0x17db50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_17db54:
    // 0x17db54: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_17db58:
    if (ctx->pc == 0x17DB58u) {
        ctx->pc = 0x17DB5Cu;
        goto label_17db5c;
    }
    ctx->pc = 0x17DB54u;
    {
        const bool branch_taken_0x17db54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17db54) {
            ctx->pc = 0x17DBE0u;
            goto label_17dbe0;
        }
    }
    ctx->pc = 0x17DB5Cu;
label_17db5c:
    // 0x17db5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17db60:
    // 0x17db60: 0x16430008  bne         $s2, $v1, . + 4 + (0x8 << 2)
label_17db64:
    if (ctx->pc == 0x17DB64u) {
        ctx->pc = 0x17DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB60u;
        // 0x17db64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB68u;
        goto label_17db68;
    }
    ctx->pc = 0x17DB60u;
    {
        const bool branch_taken_0x17db60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x17DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB60u;
        // 0x17db64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db60) {
            ctx->pc = 0x17DB84u;
            goto label_17db84;
        }
    }
    ctx->pc = 0x17DB68u;
label_17db68:
    // 0x17db68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x17db68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17db6c:
    // 0x17db6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17db6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17db70:
    // 0x17db70: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17db70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17db74:
    // 0x17db74: 0xc05f8c0  jal         func_17E300
label_17db78:
    if (ctx->pc == 0x17DB78u) {
        ctx->pc = 0x17DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB74u;
        // 0x17db78: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB7Cu;
        goto label_17db7c;
    }
    ctx->pc = 0x17DB74u;
    SET_GPR_U32(ctx, 31, 0x17DB7Cu);
    ctx->pc = 0x17DB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB74u;
    // 0x17db78: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E300u;
    { ctx->pc = 0x17e300; return; }
    ctx->pc = 0x17DB7Cu;
label_17db7c:
    // 0x17db7c: 0x10000012  b           . + 4 + (0x12 << 2)
label_17db80:
    if (ctx->pc == 0x17DB80u) {
        ctx->pc = 0x17DB84u;
        goto label_17db84;
    }
    ctx->pc = 0x17DB7Cu;
    {
        const bool branch_taken_0x17db7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17db7c) {
            ctx->pc = 0x17DBC8u;
            goto label_17dbc8;
        }
    }
    ctx->pc = 0x17DB84u;
label_17db84:
    // 0x17db84: 0x0  nop
    ctx->pc = 0x17db84u;
    // NOP
label_17db88:
    // 0x17db88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17db8c:
    // 0x17db8c: 0x16430007  bne         $s2, $v1, . + 4 + (0x7 << 2)
label_17db90:
    if (ctx->pc == 0x17DB90u) {
        ctx->pc = 0x17DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB8Cu;
        // 0x17db90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB94u;
        goto label_17db94;
    }
    ctx->pc = 0x17DB8Cu;
    {
        const bool branch_taken_0x17db8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x17DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB8Cu;
        // 0x17db90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db8c) {
            ctx->pc = 0x17DBACu;
            goto label_17dbac;
        }
    }
    ctx->pc = 0x17DB94u;
label_17db94:
    // 0x17db94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x17db94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17db98:
    // 0x17db98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17db98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17db9c:
    // 0x17db9c: 0xc05f970  jal         func_17E5C0
label_17dba0:
    if (ctx->pc == 0x17DBA0u) {
        ctx->pc = 0x17DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB9Cu;
        // 0x17dba0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DBA4u;
        goto label_17dba4;
    }
    ctx->pc = 0x17DB9Cu;
    SET_GPR_U32(ctx, 31, 0x17DBA4u);
    ctx->pc = 0x17DBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB9Cu;
    // 0x17dba0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E5C0u;
    { ctx->pc = 0x17e5c0; return; }
    ctx->pc = 0x17DBA4u;
label_17dba4:
    // 0x17dba4: 0x10000008  b           . + 4 + (0x8 << 2)
label_17dba8:
    if (ctx->pc == 0x17DBA8u) {
        ctx->pc = 0x17DBACu;
        goto label_17dbac;
    }
    ctx->pc = 0x17DBA4u;
    {
        const bool branch_taken_0x17dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dba4) {
            ctx->pc = 0x17DBC8u;
            goto label_17dbc8;
        }
    }
    ctx->pc = 0x17DBACu;
label_17dbac:
    // 0x17dbac: 0x0  nop
    ctx->pc = 0x17dbacu;
    // NOP
label_17dbb0:
    // 0x17dbb0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_17dbb4:
    if (ctx->pc == 0x17DBB4u) {
        ctx->pc = 0x17DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBB0u;
        // 0x17dbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DBB8u;
        goto label_17dbb8;
    }
    ctx->pc = 0x17DBB0u;
    {
        const bool branch_taken_0x17dbb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBB0u;
        // 0x17dbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dbb0) {
            ctx->pc = 0x17DBC8u;
            goto label_17dbc8;
        }
    }
    ctx->pc = 0x17DBB8u;
label_17dbb8:
    // 0x17dbb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x17dbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17dbbc:
    // 0x17dbbc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17dbbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17dbc0:
    // 0x17dbc0: 0xc05f704  jal         func_17DC10
label_17dbc4:
    if (ctx->pc == 0x17DBC4u) {
        ctx->pc = 0x17DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBC0u;
        // 0x17dbc4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DBC8u;
        goto label_17dbc8;
    }
    ctx->pc = 0x17DBC0u;
    SET_GPR_U32(ctx, 31, 0x17DBC8u);
    ctx->pc = 0x17DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DBC0u;
    // 0x17dbc4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DC10u;
    goto label_17dc10;
    ctx->pc = 0x17DBC8u;
label_17dbc8:
    // 0x17dbc8: 0x8f838460  lw          $v1, -0x7BA0($gp)
    ctx->pc = 0x17dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935648)));
label_17dbcc:
    // 0x17dbcc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17dbccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_17dbd0:
    // 0x17dbd0: 0x2d4082a  slt         $at, $s6, $s4
    ctx->pc = 0x17dbd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_17dbd4:
    // 0x17dbd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17dbd8:
    // 0x17dbd8: 0x1020ffe0  beqz        $at, . + 4 + (-0x20 << 2)
label_17dbdc:
    if (ctx->pc == 0x17DBDCu) {
        ctx->pc = 0x17DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBD8u;
        // 0x17dbdc: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DBE0u;
        goto label_17dbe0;
    }
    ctx->pc = 0x17DBD8u;
    {
        const bool branch_taken_0x17dbd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBD8u;
        // 0x17dbdc: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dbd8) {
            ctx->pc = 0x17DB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17db5c;
        }
    }
    ctx->pc = 0x17DBE0u;
label_17dbe0:
    // 0x17dbe0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17dbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17dbe4:
    // 0x17dbe4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17dbe4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17dbe8:
    // 0x17dbe8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17dbe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17dbec:
    // 0x17dbec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17dbecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17dbf0:
    // 0x17dbf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17dbf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17dbf4:
    // 0x17dbf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17dbf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17dbf8:
    // 0x17dbf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dbf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17dbfc:
    // 0x17dbfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17dbfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17dc00:
    // 0x17dc00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17dc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17dc04:
    // 0x17dc04: 0x3e00008  jr          $ra
label_17dc08:
    if (ctx->pc == 0x17DC08u) {
        ctx->pc = 0x17DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC04u;
        // 0x17dc08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC0Cu;
        goto label_17dc0c;
    }
    ctx->pc = 0x17DC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC04u;
        // 0x17dc08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DC0Cu;
label_17dc0c:
    // 0x17dc0c: 0x0  nop
    ctx->pc = 0x17dc0cu;
    // NOP
label_17dc10:
    // 0x17dc10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_17dc14:
    // 0x17dc14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_17dc18:
    // 0x17dc18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17dc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17dc1c:
    // 0x17dc1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17dc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17dc20:
    // 0x17dc20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_17dc24:
    // 0x17dc24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17dc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17dc28:
    // 0x17dc28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17dc2c:
    // 0x17dc2c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17dc2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17dc30:
    // 0x17dc30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17dc34:
    // 0x17dc34: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x17dc34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17dc38:
    // 0x17dc38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17dc3c:
    // 0x17dc3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17dc40:
    // 0x17dc40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17dc44:
    // 0x17dc44: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_17dc48:
    if (ctx->pc == 0x17DC48u) {
        ctx->pc = 0x17DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC44u;
        // 0x17dc48: 0xafa600cc  sw          $a2, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC4Cu;
        goto label_17dc4c;
    }
    ctx->pc = 0x17DC44u;
    {
        const bool branch_taken_0x17dc44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC44u;
        // 0x17dc48: 0xafa600cc  sw          $a2, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc44) {
            ctx->pc = 0x17DC54u;
            goto label_17dc54;
        }
    }
    ctx->pc = 0x17DC4Cu;
label_17dc4c:
    // 0x17dc4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_17dc50:
    if (ctx->pc == 0x17DC50u) {
        ctx->pc = 0x17DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC4Cu;
        // 0x17dc50: 0x241e00c0  addiu       $fp, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC54u;
        goto label_17dc54;
    }
    ctx->pc = 0x17DC4Cu;
    {
        const bool branch_taken_0x17dc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC4Cu;
        // 0x17dc50: 0x241e00c0  addiu       $fp, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc4c) {
            ctx->pc = 0x17DC58u;
            goto label_17dc58;
        }
    }
    ctx->pc = 0x17DC54u;
label_17dc54:
    // 0x17dc54: 0x241e0300  addiu       $fp, $zero, 0x300
    ctx->pc = 0x17dc54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_17dc58:
    // 0x17dc58: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_17dc5c:
    // 0x17dc5c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x17dc5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17dc60:
    // 0x17dc60: 0x2839004  sllv        $s2, $v1, $s4
    ctx->pc = 0x17dc60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_17dc64:
    // 0x17dc64: 0x8f838458  lw          $v1, -0x7BA8($gp)
    ctx->pc = 0x17dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935640)));
label_17dc68:
    // 0x17dc68: 0x10000195  b           . + 4 + (0x195 << 2)
label_17dc6c:
    if (ctx->pc == 0x17DC6Cu) {
        ctx->pc = 0x17DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC68u;
        // 0x17dc6c: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC70u;
        goto label_17dc70;
    }
    ctx->pc = 0x17DC68u;
    {
        const bool branch_taken_0x17dc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC68u;
        // 0x17dc6c: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc68) {
            ctx->pc = 0x17E2C0u;
            { ctx->pc = 0x17e2c0; return; }
        }
    }
    ctx->pc = 0x17DC70u;
label_17dc70:
    // 0x17dc70: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x17dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_17dc74:
    // 0x17dc74: 0x10800190  beqz        $a0, . + 4 + (0x190 << 2)
label_17dc78:
    if (ctx->pc == 0x17DC78u) {
        ctx->pc = 0x17DC7Cu;
        goto label_17dc7c;
    }
    ctx->pc = 0x17DC74u;
    {
        const bool branch_taken_0x17dc74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc74) {
            ctx->pc = 0x17E2B8u;
            { ctx->pc = 0x17e2b8; return; }
        }
    }
    ctx->pc = 0x17DC7Cu;
label_17dc7c:
    // 0x17dc7c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_17dc80:
    // 0x17dc80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17dc84:
    // 0x17dc84: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x17dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17dc88:
    // 0x17dc88: 0x1080018b  beqz        $a0, . + 4 + (0x18B << 2)
label_17dc8c:
    if (ctx->pc == 0x17DC8Cu) {
        ctx->pc = 0x17DC90u;
        goto label_17dc90;
    }
    ctx->pc = 0x17DC88u;
    {
        const bool branch_taken_0x17dc88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc88) {
            ctx->pc = 0x17E2B8u;
            { ctx->pc = 0x17e2b8; return; }
        }
    }
    ctx->pc = 0x17DC90u;
label_17dc90:
    // 0x17dc90: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x17dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_17dc94:
    // 0x17dc94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17dc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17dc98:
    // 0x17dc98: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x17dc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17dc9c:
    // 0x17dc9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17dca0:
    // 0x17dca0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x17dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_17dca4:
    // 0x17dca4: 0x10000180  b           . + 4 + (0x180 << 2)
label_17dca8:
    if (ctx->pc == 0x17DCA8u) {
        ctx->pc = 0x17DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCA4u;
        // 0x17dca8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCACu;
        goto label_17dcac;
    }
    ctx->pc = 0x17DCA4u;
    {
        const bool branch_taken_0x17dca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCA4u;
        // 0x17dca8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dca4) {
            ctx->pc = 0x17E2A8u;
            { ctx->pc = 0x17e2a8; return; }
        }
    }
    ctx->pc = 0x17DCACu;
label_17dcac:
    // 0x17dcac: 0x0  nop
    ctx->pc = 0x17dcacu;
    // NOP
label_17dcb0:
    // 0x17dcb0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x17dcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17dcb4:
    // 0x17dcb4: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x17dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_17dcb8:
    // 0x17dcb8: 0x8f858794  lw          $a1, -0x786C($gp)
    ctx->pc = 0x17dcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
label_17dcbc:
    // 0x17dcbc: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x17dcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_17dcc0:
    // 0x17dcc0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x17dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_17dcc4:
    // 0x17dcc4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x17dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_17dcc8:
    // 0x17dcc8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x17dcc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17dccc:
    // 0x17dccc: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x17dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dcd0:
    // 0x17dcd0: 0x9e1824  and         $v1, $a0, $fp
    ctx->pc = 0x17dcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
label_17dcd4:
    // 0x17dcd4: 0x10a30172  beq         $a1, $v1, . + 4 + (0x172 << 2)
label_17dcd8:
    if (ctx->pc == 0x17DCD8u) {
        ctx->pc = 0x17DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCD4u;
        // 0x17dcd8: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCDCu;
        goto label_17dcdc;
    }
    ctx->pc = 0x17DCD4u;
    {
        const bool branch_taken_0x17dcd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x17DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCD4u;
        // 0x17dcd8: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dcd4) {
            ctx->pc = 0x17E2A0u;
            { ctx->pc = 0x17e2a0; return; }
        }
    }
    ctx->pc = 0x17DCDCu;
label_17dcdc:
    // 0x17dcdc: 0x14600170  bnez        $v1, . + 4 + (0x170 << 2)
label_17dce0:
    if (ctx->pc == 0x17DCE0u) {
        ctx->pc = 0x17DCE4u;
        goto label_17dce4;
    }
    ctx->pc = 0x17DCDCu;
    {
        const bool branch_taken_0x17dcdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dcdc) {
            ctx->pc = 0x17E2A0u;
            { ctx->pc = 0x17e2a0; return; }
        }
    }
    ctx->pc = 0x17DCE4u;
label_17dce4:
    // 0x17dce4: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x17dce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_17dce8:
    // 0x17dce8: 0x1460016d  bnez        $v1, . + 4 + (0x16D << 2)
label_17dcec:
    if (ctx->pc == 0x17DCECu) {
        ctx->pc = 0x17DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCE8u;
        // 0x17dcec: 0x3c01827  not         $v1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 30) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCF0u;
        goto label_17dcf0;
    }
    ctx->pc = 0x17DCE8u;
    {
        const bool branch_taken_0x17dce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCE8u;
        // 0x17dcec: 0x3c01827  not         $v1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 30) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dce8) {
            ctx->pc = 0x17E2A0u;
            { ctx->pc = 0x17e2a0; return; }
        }
    }
    ctx->pc = 0x17DCF0u;
label_17dcf0:
    // 0x17dcf0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17dcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_17dcf4:
    // 0x17dcf4: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17dcf8:
    // 0x17dcf8: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x17dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dcfc:
    // 0x17dcfc: 0x8f838794  lw          $v1, -0x786C($gp)
    ctx->pc = 0x17dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
label_17dd00:
    // 0x17dd00: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17dd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17dd04:
    // 0x17dd04: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17dd08:
    // 0x17dd08: 0x8e650090  lw          $a1, 0x90($s3)
    ctx->pc = 0x17dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dd0c:
    // 0x17dd0c: 0xb21824  and         $v1, $a1, $s2
    ctx->pc = 0x17dd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
label_17dd10:
    // 0x17dd10: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_17dd14:
    if (ctx->pc == 0x17DD14u) {
        ctx->pc = 0x17DD18u;
        goto label_17dd18;
    }
    ctx->pc = 0x17DD10u;
    {
        const bool branch_taken_0x17dd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd10) {
            ctx->pc = 0x17DDF8u;
            goto label_17ddf8;
        }
    }
    ctx->pc = 0x17DD18u;
label_17dd18:
    // 0x17dd18: 0xc6610098  lwc1        $f1, 0x98($s3)
    ctx->pc = 0x17dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17dd1c:
    // 0x17dd1c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x17dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
label_17dd20:
    // 0x17dd20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17dd20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17dd24:
    // 0x17dd24: 0x0  nop
    ctx->pc = 0x17dd24u;
    // NOP
label_17dd28:
    // 0x17dd28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17dd28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17dd2c:
    // 0x17dd2c: 0x0  nop
    ctx->pc = 0x17dd2cu;
    // NOP
label_17dd30:
    // 0x17dd30: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_17dd34:
    if (ctx->pc == 0x17DD34u) {
        ctx->pc = 0x17DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD30u;
        // 0x17dd34: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD38u;
        goto label_17dd38;
    }
    ctx->pc = 0x17DD30u;
    {
        const bool branch_taken_0x17dd30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD30u;
        // 0x17dd34: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd30) {
            ctx->pc = 0x17DD4Cu;
            goto label_17dd4c;
        }
    }
    ctx->pc = 0x17DD38u;
label_17dd38:
    // 0x17dd38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17dd38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17dd3c:
    // 0x17dd3c: 0x0  nop
    ctx->pc = 0x17dd3cu;
    // NOP
label_17dd40:
    // 0x17dd40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17dd40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17dd44:
    // 0x17dd44: 0x10000003  b           . + 4 + (0x3 << 2)
label_17dd48:
    if (ctx->pc == 0x17DD48u) {
        ctx->pc = 0x17DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD44u;
        // 0x17dd48: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD4Cu;
        goto label_17dd4c;
    }
    ctx->pc = 0x17DD44u;
    {
        const bool branch_taken_0x17dd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD44u;
        // 0x17dd48: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd44) {
            ctx->pc = 0x17DD54u;
            goto label_17dd54;
        }
    }
    ctx->pc = 0x17DD4Cu;
label_17dd4c:
    // 0x17dd4c: 0x0  nop
    ctx->pc = 0x17dd4cu;
    // NOP
label_17dd50:
    // 0x17dd50: 0xe6600098  swc1        $f0, 0x98($s3)
    ctx->pc = 0x17dd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
label_17dd54:
    // 0x17dd54: 0x0  nop
    ctx->pc = 0x17dd54u;
    // NOP
label_17dd58:
    // 0x17dd58: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17dd5c:
    // 0x17dd5c: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x17dd5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_17dd60:
    // 0x17dd60: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
label_17dd64:
    if (ctx->pc == 0x17DD64u) {
        ctx->pc = 0x17DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD60u;
        // 0x17dd64: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DD68u;
        goto label_17dd68;
    }
    ctx->pc = 0x17DD60u;
    {
        const bool branch_taken_0x17dd60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD60u;
        // 0x17dd64: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd60) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DD68u;
label_17dd68:
    // 0x17dd68: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17dd6c:
    // 0x17dd6c: 0x246391c0  addiu       $v1, $v1, -0x6E40
    ctx->pc = 0x17dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939072));
label_17dd70:
    // 0x17dd70: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17dd74:
    // 0x17dd74: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x17dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_17dd78:
    // 0x17dd78: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_17dd7c:
    // 0x17dd7c: 0x8e650090  lw          $a1, 0x90($s3)
    ctx->pc = 0x17dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dd80:
    // 0x17dd80: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17dd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17dd84:
    // 0x17dd84: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_17dd88:
    if (ctx->pc == 0x17DD88u) {
        ctx->pc = 0x17DD8Cu;
        goto label_17dd8c;
    }
    ctx->pc = 0x17DD84u;
    {
        const bool branch_taken_0x17dd84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd84) {
            ctx->pc = 0x17DDB4u;
            goto label_17ddb4;
        }
    }
    ctx->pc = 0x17DD8Cu;
label_17dd8c:
    // 0x17dd8c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x17dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_17dd90:
    // 0x17dd90: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17dd94:
    // 0x17dd94: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x17dd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_17dd98:
    // 0x17dd98: 0x246391c4  addiu       $v1, $v1, -0x6E3C
    ctx->pc = 0x17dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939076));
label_17dd9c:
    // 0x17dd9c: 0xae640090  sw          $a0, 0x90($s3)
    ctx->pc = 0x17dd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 4));
label_17dda0:
    // 0x17dda0: 0x8f848798  lw          $a0, -0x7868($gp)
    ctx->pc = 0x17dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17dda4:
    // 0x17dda4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17dda8:
    // 0x17dda8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17ddac:
    // 0x17ddac: 0x1000000d  b           . + 4 + (0xD << 2)
label_17ddb0:
    if (ctx->pc == 0x17DDB0u) {
        ctx->pc = 0x17DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDACu;
        // 0x17ddb0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DDB4u;
        goto label_17ddb4;
    }
    ctx->pc = 0x17DDACu;
    {
        const bool branch_taken_0x17ddac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDACu;
        // 0x17ddb0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ddac) {
            ctx->pc = 0x17DDE4u;
            goto label_17dde4;
        }
    }
    ctx->pc = 0x17DDB4u;
label_17ddb4:
    // 0x17ddb4: 0x0  nop
    ctx->pc = 0x17ddb4u;
    // NOP
label_17ddb8:
    // 0x17ddb8: 0x8f858798  lw          $a1, -0x7868($gp)
    ctx->pc = 0x17ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17ddbc:
    // 0x17ddbc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17ddc0:
    // 0x17ddc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17ddc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ddc4:
    // 0x17ddc4: 0x248491c4  addiu       $a0, $a0, -0x6E3C
    ctx->pc = 0x17ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939076));
label_17ddc8:
    // 0x17ddc8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_17ddcc:
    // 0x17ddcc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17ddccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17ddd0:
    // 0x17ddd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17ddd4:
    // 0x17ddd4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x17ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_17ddd8:
    // 0x17ddd8: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x17ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dddc:
    // 0x17dddc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17dddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17dde0:
    // 0x17dde0: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17dde4:
    // 0x17dde4: 0x0  nop
    ctx->pc = 0x17dde4u;
    // NOP
label_17dde8:
    // 0x17dde8: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17ddec:
    // 0x17ddec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17ddf0:
    // 0x17ddf0: 0x10000058  b           . + 4 + (0x58 << 2)
label_17ddf4:
    if (ctx->pc == 0x17DDF4u) {
        ctx->pc = 0x17DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDF0u;
        // 0x17ddf4: 0xaf838798  sw          $v1, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DDF8u;
        goto label_17ddf8;
    }
    ctx->pc = 0x17DDF0u;
    {
        const bool branch_taken_0x17ddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DDF0u;
        // 0x17ddf4: 0xaf838798  sw          $v1, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ddf0) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DDF8u;
label_17ddf8:
    // 0x17ddf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ddfc:
    // 0x17ddfc: 0x742023  subu        $a0, $v1, $s4
    ctx->pc = 0x17ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_17de00:
    // 0x17de00: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x17de00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
label_17de04:
    // 0x17de04: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x17de04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_17de08:
    // 0x17de08: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17de08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17de0c:
    // 0x17de0c: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_17de10:
    if (ctx->pc == 0x17DE10u) {
        ctx->pc = 0x17DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE0Cu;
        // 0x17de10: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DE14u;
        goto label_17de14;
    }
    ctx->pc = 0x17DE0Cu;
    {
        const bool branch_taken_0x17de0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE0Cu;
        // 0x17de10: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de0c) {
            ctx->pc = 0x17DF40u;
            goto label_17df40;
        }
    }
    ctx->pc = 0x17DE14u;
label_17de14:
    // 0x17de14: 0x2831804  sllv        $v1, $v1, $s4
    ctx->pc = 0x17de14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_17de18:
    // 0x17de18: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17de18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17de1c:
    // 0x17de1c: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
label_17de20:
    if (ctx->pc == 0x17DE20u) {
        ctx->pc = 0x17DE24u;
        goto label_17de24;
    }
    ctx->pc = 0x17DE1Cu;
    {
        const bool branch_taken_0x17de1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17de1c) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DE24u;
label_17de24:
    // 0x17de24: 0xc6610098  lwc1        $f1, 0x98($s3)
    ctx->pc = 0x17de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17de28:
    // 0x17de28: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x17de28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_17de2c:
    // 0x17de2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17de2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17de30:
    // 0x17de30: 0x0  nop
    ctx->pc = 0x17de30u;
    // NOP
label_17de34:
    // 0x17de34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17de34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17de38:
    // 0x17de38: 0x0  nop
    ctx->pc = 0x17de38u;
    // NOP
label_17de3c:
    // 0x17de3c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_17de40:
    if (ctx->pc == 0x17DE40u) {
        ctx->pc = 0x17DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE3Cu;
        // 0x17de40: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DE44u;
        goto label_17de44;
    }
    ctx->pc = 0x17DE3Cu;
    {
        const bool branch_taken_0x17de3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE3Cu;
        // 0x17de40: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de3c) {
            ctx->pc = 0x17DE54u;
            goto label_17de54;
        }
    }
    ctx->pc = 0x17DE44u;
label_17de44:
    // 0x17de44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17de44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17de48:
    // 0x17de48: 0x0  nop
    ctx->pc = 0x17de48u;
    // NOP
label_17de4c:
    // 0x17de4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17de4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17de50:
    // 0x17de50: 0xe6600098  swc1        $f0, 0x98($s3)
    ctx->pc = 0x17de50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
label_17de54:
    // 0x17de54: 0x0  nop
    ctx->pc = 0x17de54u;
    // NOP
label_17de58:
    // 0x17de58: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x17de58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_17de5c:
    // 0x17de5c: 0xc6610098  lwc1        $f1, 0x98($s3)
    ctx->pc = 0x17de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17de60:
    // 0x17de60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17de60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17de64:
    // 0x17de64: 0x0  nop
    ctx->pc = 0x17de64u;
    // NOP
label_17de68:
    // 0x17de68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17de68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17de6c:
    // 0x17de6c: 0x0  nop
    ctx->pc = 0x17de6cu;
    // NOP
label_17de70:
    // 0x17de70: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_17de74:
    if (ctx->pc == 0x17DE74u) {
        ctx->pc = 0x17DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE70u;
        // 0x17de74: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DE78u;
        goto label_17de78;
    }
    ctx->pc = 0x17DE70u;
    {
        const bool branch_taken_0x17de70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE70u;
        // 0x17de74: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de70) {
            ctx->pc = 0x17DE94u;
            goto label_17de94;
        }
    }
    ctx->pc = 0x17DE78u;
label_17de78:
    // 0x17de78: 0x2832004  sllv        $a0, $v1, $s4
    ctx->pc = 0x17de78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_17de7c:
    // 0x17de7c: 0xe6600098  swc1        $f0, 0x98($s3)
    ctx->pc = 0x17de7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
label_17de80:
    // 0x17de80: 0x802027  not         $a0, $a0
    ctx->pc = 0x17de80u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_17de84:
    // 0x17de84: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17de84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17de88:
    // 0x17de88: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17de88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_17de8c:
    // 0x17de8c: 0x10000031  b           . + 4 + (0x31 << 2)
label_17de90:
    if (ctx->pc == 0x17DE90u) {
        ctx->pc = 0x17DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE8Cu;
        // 0x17de90: 0xae630090  sw          $v1, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DE94u;
        goto label_17de94;
    }
    ctx->pc = 0x17DE8Cu;
    {
        const bool branch_taken_0x17de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE8Cu;
        // 0x17de90: 0xae630090  sw          $v1, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de8c) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DE94u;
label_17de94:
    // 0x17de94: 0x0  nop
    ctx->pc = 0x17de94u;
    // NOP
label_17de98:
    // 0x17de98: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17de98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17de9c:
    // 0x17de9c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x17de9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_17dea0:
    // 0x17dea0: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17dea4:
    // 0x17dea4: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17dea8:
    // 0x17dea8: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x17dea8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_17deac:
    // 0x17deac: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_17deb0:
    if (ctx->pc == 0x17DEB0u) {
        ctx->pc = 0x17DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEACu;
        // 0x17deb0: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DEB4u;
        goto label_17deb4;
    }
    ctx->pc = 0x17DEACu;
    {
        const bool branch_taken_0x17deac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEACu;
        // 0x17deb0: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17deac) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DEB4u;
label_17deb4:
    // 0x17deb4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17deb8:
    // 0x17deb8: 0x246391c0  addiu       $v1, $v1, -0x6E40
    ctx->pc = 0x17deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939072));
label_17debc:
    // 0x17debc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17debcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17dec0:
    // 0x17dec0: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x17dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_17dec4:
    // 0x17dec4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_17dec8:
    // 0x17dec8: 0x8e650090  lw          $a1, 0x90($s3)
    ctx->pc = 0x17dec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17decc:
    // 0x17decc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17deccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17ded0:
    // 0x17ded0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_17ded4:
    if (ctx->pc == 0x17DED4u) {
        ctx->pc = 0x17DED8u;
        goto label_17ded8;
    }
    ctx->pc = 0x17DED0u;
    {
        const bool branch_taken_0x17ded0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ded0) {
            ctx->pc = 0x17DF00u;
            goto label_17df00;
        }
    }
    ctx->pc = 0x17DED8u;
label_17ded8:
    // 0x17ded8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x17ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_17dedc:
    // 0x17dedc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17dee0:
    // 0x17dee0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x17dee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_17dee4:
    // 0x17dee4: 0x246391c4  addiu       $v1, $v1, -0x6E3C
    ctx->pc = 0x17dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939076));
label_17dee8:
    // 0x17dee8: 0xae640090  sw          $a0, 0x90($s3)
    ctx->pc = 0x17dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 4));
label_17deec:
    // 0x17deec: 0x8f848798  lw          $a0, -0x7868($gp)
    ctx->pc = 0x17deecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17def0:
    // 0x17def0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17def0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17def4:
    // 0x17def4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17def4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17def8:
    // 0x17def8: 0x1000000c  b           . + 4 + (0xC << 2)
label_17defc:
    if (ctx->pc == 0x17DEFCu) {
        ctx->pc = 0x17DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEF8u;
        // 0x17defc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF00u;
        goto label_17df00;
    }
    ctx->pc = 0x17DEF8u;
    {
        const bool branch_taken_0x17def8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEF8u;
        // 0x17defc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17def8) {
            ctx->pc = 0x17DF2Cu;
            goto label_17df2c;
        }
    }
    ctx->pc = 0x17DF00u;
label_17df00:
    // 0x17df00: 0x8f858798  lw          $a1, -0x7868($gp)
    ctx->pc = 0x17df00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17df04:
    // 0x17df04: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17df04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17df08:
    // 0x17df08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17df08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17df0c:
    // 0x17df0c: 0x248491c4  addiu       $a0, $a0, -0x6E3C
    ctx->pc = 0x17df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939076));
label_17df10:
    // 0x17df10: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17df10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_17df14:
    // 0x17df14: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17df14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17df18:
    // 0x17df18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17df1c:
    // 0x17df1c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x17df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_17df20:
    // 0x17df20: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x17df20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17df24:
    // 0x17df24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17df24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17df28:
    // 0x17df28: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17df28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17df2c:
    // 0x17df2c: 0x0  nop
    ctx->pc = 0x17df2cu;
    // NOP
label_17df30:
    // 0x17df30: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17df30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17df34:
    // 0x17df34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17df34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17df38:
    // 0x17df38: 0x10000006  b           . + 4 + (0x6 << 2)
label_17df3c:
    if (ctx->pc == 0x17DF3Cu) {
        ctx->pc = 0x17DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF38u;
        // 0x17df3c: 0xaf838798  sw          $v1, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF40u;
        goto label_17df40;
    }
    ctx->pc = 0x17DF38u;
    {
        const bool branch_taken_0x17df38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF38u;
        // 0x17df3c: 0xaf838798  sw          $v1, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df38) {
            ctx->pc = 0x17DF54u;
            goto label_17df54;
        }
    }
    ctx->pc = 0x17DF40u;
label_17df40:
    // 0x17df40: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x17df40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_17df44:
    // 0x17df44: 0x2831804  sllv        $v1, $v1, $s4
    ctx->pc = 0x17df44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_17df48:
    // 0x17df48: 0x601827  not         $v1, $v1
    ctx->pc = 0x17df48u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_17df4c:
    // 0x17df4c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17df4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17df50:
    // 0x17df50: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17df50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17df54:
    // 0x17df54: 0x0  nop
    ctx->pc = 0x17df54u;
    // NOP
label_17df58:
    // 0x17df58: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17df58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17df5c:
    // 0x17df5c: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x17df5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_17df60:
    // 0x17df60: 0x146000cf  bnez        $v1, . + 4 + (0xCF << 2)
label_17df64:
    if (ctx->pc == 0x17DF64u) {
        ctx->pc = 0x17DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF60u;
        // 0x17df64: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF68u;
        goto label_17df68;
    }
    ctx->pc = 0x17DF60u;
    {
        const bool branch_taken_0x17df60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF60u;
        // 0x17df64: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df60) {
            ctx->pc = 0x17E2A0u;
            { ctx->pc = 0x17e2a0; return; }
        }
    }
    ctx->pc = 0x17DF68u;
label_17df68:
    // 0x17df68: 0xc05fc40  jal         func_17F100
label_17df6c:
    if (ctx->pc == 0x17DF6Cu) {
        ctx->pc = 0x17DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF68u;
        // 0x17df6c: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF70u;
        goto label_17df70;
    }
    ctx->pc = 0x17DF68u;
    SET_GPR_U32(ctx, 31, 0x17DF70u);
    ctx->pc = 0x17DF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF68u;
    // 0x17df6c: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F100u;
    { ctx->pc = 0x17f100; return; }
    ctx->pc = 0x17DF70u;
label_17df70:
    // 0x17df70: 0xc05fb88  jal         func_17EE20
label_17df74:
    if (ctx->pc == 0x17DF74u) {
        ctx->pc = 0x17DF78u;
        goto label_17df78;
    }
    ctx->pc = 0x17DF70u;
    SET_GPR_U32(ctx, 31, 0x17DF78u);
    ctx->pc = 0x17EE20u;
    { ctx->pc = 0x17ee20; return; }
    ctx->pc = 0x17DF78u;
label_17df78:
    // 0x17df78: 0xc05fb50  jal         func_17ED40
label_17df7c:
    if (ctx->pc == 0x17DF7Cu) {
        ctx->pc = 0x17DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF78u;
        // 0x17df7c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF80u;
        goto label_17df80;
    }
    ctx->pc = 0x17DF78u;
    SET_GPR_U32(ctx, 31, 0x17DF80u);
    ctx->pc = 0x17DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF78u;
    // 0x17df7c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ED40u;
    { ctx->pc = 0x17ed40; return; }
    ctx->pc = 0x17DF80u;
label_17df80:
    // 0x17df80: 0x8e660090  lw          $a2, 0x90($s3)
    ctx->pc = 0x17df80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17df84:
    // 0x17df84: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17df84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17df88:
    // 0x17df88: 0xc05fbc0  jal         func_17EF00
label_17df8c:
    if (ctx->pc == 0x17DF8Cu) {
        ctx->pc = 0x17DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF88u;
        // 0x17df8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DF90u;
        goto label_17df90;
    }
    ctx->pc = 0x17DF88u;
    SET_GPR_U32(ctx, 31, 0x17DF90u);
    ctx->pc = 0x17DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF88u;
    // 0x17df8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF00u;
    { ctx->pc = 0x17ef00; return; }
    ctx->pc = 0x17DF90u;
label_17df90:
    // 0x17df90: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
label_17df94:
    if (ctx->pc == 0x17DF94u) {
        ctx->pc = 0x17DF98u;
        goto label_17df98;
    }
    ctx->pc = 0x17DF90u;
    {
        const bool branch_taken_0x17df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df90) {
            ctx->pc = 0x17E2A0u;
            { ctx->pc = 0x17e2a0; return; }
        }
    }
    ctx->pc = 0x17DF98u;
label_17df98:
    // 0x17df98: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17df98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17df9c:
    // 0x17df9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17df9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17dfa0:
    // 0x17dfa0: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17dfa4:
    // 0x17dfa4: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17dfa8:
    // 0x17dfa8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x17dfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_17dfac:
    // 0x17dfac: 0x146000bc  bnez        $v1, . + 4 + (0xBC << 2)
label_17dfb0:
    if (ctx->pc == 0x17DFB0u) {
        ctx->pc = 0x17DFB4u;
        goto label_17dfb4;
    }
    ctx->pc = 0x17DFACu;
    {
        const bool branch_taken_0x17dfac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dfac) {
            ctx->pc = 0x17E2A0u;
            { ctx->pc = 0x17e2a0; return; }
        }
    }
    ctx->pc = 0x17DFB4u;
label_17dfb4:
    // 0x17dfb4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17dfb8:
    // 0x17dfb8: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x17dfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_17dfbc:
    // 0x17dfbc: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x17dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_17dfc0:
    // 0x17dfc0: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17dfc4:
    // 0x17dfc4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_17dfc8:
    // 0x17dfc8: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17dfcc:
    // 0x17dfcc: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_17dfd0:
    if (ctx->pc == 0x17DFD0u) {
        ctx->pc = 0x17DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFCCu;
        // 0x17dfd0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DFD4u;
        goto label_17dfd4;
    }
    ctx->pc = 0x17DFCCu;
    {
        const bool branch_taken_0x17dfcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFCCu;
        // 0x17dfd0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfcc) {
            ctx->pc = 0x17E0F4u;
            goto label_17e0f4;
        }
    }
    ctx->pc = 0x17DFD4u;
label_17dfd4:
    // 0x17dfd4: 0x8f848778  lw          $a0, -0x7888($gp)
    ctx->pc = 0x17dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17dfd8:
    // 0x17dfd8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17dfdc:
    // 0x17dfdc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17dfe0:
    // 0x17dfe0: 0x8f838778  lw          $v1, -0x7888($gp)
    ctx->pc = 0x17dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17dfe4:
    // 0x17dfe4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_17dfe8:
    if (ctx->pc == 0x17DFE8u) {
        ctx->pc = 0x17DFECu;
        goto label_17dfec;
    }
    ctx->pc = 0x17DFE4u;
    {
        const bool branch_taken_0x17dfe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dfe4) {
            ctx->pc = 0x17DFFCu;
            goto label_17dffc;
        }
    }
    ctx->pc = 0x17DFECu;
label_17dfec:
    // 0x17dfec: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17dff0:
    // 0x17dff0: 0xaf838778  sw          $v1, -0x7888($gp)
    ctx->pc = 0x17dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
label_17dff4:
    // 0x17dff4: 0x10000086  b           . + 4 + (0x86 << 2)
label_17dff8:
    if (ctx->pc == 0x17DFF8u) {
        ctx->pc = 0x17DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFF4u;
        // 0x17dff8: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DFFCu;
        goto label_17dffc;
    }
    ctx->pc = 0x17DFF4u;
    {
        const bool branch_taken_0x17dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFF4u;
        // 0x17dff8: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dff4) {
            ctx->pc = 0x17E210u;
            { ctx->pc = 0x17e210; return; }
        }
    }
    ctx->pc = 0x17DFFCu;
label_17dffc:
    // 0x17dffc: 0x0  nop
    ctx->pc = 0x17dffcu;
    // NOP
label_17e000:
    // 0x17e000: 0x8f84878c  lw          $a0, -0x7874($gp)
    ctx->pc = 0x17e000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936460)));
label_17e004:
    // 0x17e004: 0x9663008c  lhu         $v1, 0x8C($s3)
    ctx->pc = 0x17e004u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e008:
    // 0x17e008: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x17e008u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_17e00c:
    // 0x17e00c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_17e010:
    if (ctx->pc == 0x17E010u) {
        ctx->pc = 0x17E014u;
        goto label_17e014;
    }
    ctx->pc = 0x17E00Cu;
    {
        const bool branch_taken_0x17e00c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e00c) {
            ctx->pc = 0x17E01Cu;
            goto label_17e01c;
        }
    }
    ctx->pc = 0x17E014u;
label_17e014:
    // 0x17e014: 0x10000004  b           . + 4 + (0x4 << 2)
label_17e018:
    if (ctx->pc == 0x17E018u) {
        ctx->pc = 0x17E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E014u;
        // 0x17e018: 0x8f838784  lw          $v1, -0x787C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E01Cu;
        goto label_17e01c;
    }
    ctx->pc = 0x17E014u;
    {
        const bool branch_taken_0x17e014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E014u;
        // 0x17e018: 0x8f838784  lw          $v1, -0x787C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e014) {
            ctx->pc = 0x17E028u;
            goto label_17e028;
        }
    }
    ctx->pc = 0x17E01Cu;
label_17e01c:
    // 0x17e01c: 0x0  nop
    ctx->pc = 0x17e01cu;
    // NOP
label_17e020:
    // 0x17e020: 0x8f838774  lw          $v1, -0x788C($gp)
    ctx->pc = 0x17e020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17e024:
    // 0x17e024: 0x0  nop
    ctx->pc = 0x17e024u;
    // NOP
label_17e028:
    // 0x17e028: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_17e02c:
    if (ctx->pc == 0x17E02Cu) {
        ctx->pc = 0x17E030u;
        goto label_17e030;
    }
    ctx->pc = 0x17E028u;
    {
        const bool branch_taken_0x17e028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e028) {
            ctx->pc = 0x17E050u;
            goto label_17e050;
        }
    }
    ctx->pc = 0x17E030u;
label_17e030:
    // 0x17e030: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x17e030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17e034:
    // 0x17e034: 0x9664008c  lhu         $a0, 0x8C($s3)
    ctx->pc = 0x17e034u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e038:
    // 0x17e038: 0x94a5008c  lhu         $a1, 0x8C($a1)
    ctx->pc = 0x17e038u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 140)));
label_17e03c:
    // 0x17e03c: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x17e03cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_17e040:
    // 0x17e040: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17e044:
    if (ctx->pc == 0x17E044u) {
        ctx->pc = 0x17E048u;
        goto label_17e048;
    }
    ctx->pc = 0x17E040u;
    {
        const bool branch_taken_0x17e040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e040) {
            ctx->pc = 0x17E050u;
            goto label_17e050;
        }
    }
    ctx->pc = 0x17E048u;
label_17e048:
    // 0x17e048: 0x1000fff7  b           . + 4 + (-0x9 << 2)
label_17e04c:
    if (ctx->pc == 0x17E04Cu) {
        ctx->pc = 0x17E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E048u;
        // 0x17e04c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E050u;
        goto label_17e050;
    }
    ctx->pc = 0x17E048u;
    {
        const bool branch_taken_0x17e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E048u;
        // 0x17e04c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e048) {
            ctx->pc = 0x17E028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e028;
        }
    }
    ctx->pc = 0x17E050u;
label_17e050:
    // 0x17e050: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x17e050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17e054:
    // 0x17e054: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
label_17e058:
    if (ctx->pc == 0x17E058u) {
        ctx->pc = 0x17E05Cu;
        goto label_17e05c;
    }
    ctx->pc = 0x17E054u;
    {
        const bool branch_taken_0x17e054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17e054) {
            ctx->pc = 0x17E084u;
            goto label_17e084;
        }
    }
    ctx->pc = 0x17E05Cu;
label_17e05c:
    // 0x17e05c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e060:
    // 0x17e060: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17e060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17e064:
    // 0x17e064: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e068:
    // 0x17e068: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x17e068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_17e06c:
    // 0x17e06c: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e070:
    // 0x17e070: 0x8f838774  lw          $v1, -0x788C($gp)
    ctx->pc = 0x17e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17e074:
    // 0x17e074: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e078:
    // 0x17e078: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e07c:
    // 0x17e07c: 0x10000018  b           . + 4 + (0x18 << 2)
label_17e080:
    if (ctx->pc == 0x17E080u) {
        ctx->pc = 0x17E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E07Cu;
        // 0x17e080: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E084u;
        goto label_17e084;
    }
    ctx->pc = 0x17E07Cu;
    {
        const bool branch_taken_0x17e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E07Cu;
        // 0x17e080: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e07c) {
            ctx->pc = 0x17E0E0u;
            goto label_17e0e0;
        }
    }
    ctx->pc = 0x17E084u;
label_17e084:
    // 0x17e084: 0x0  nop
    ctx->pc = 0x17e084u;
    // NOP
label_17e088:
    // 0x17e088: 0x8f848778  lw          $a0, -0x7888($gp)
    ctx->pc = 0x17e088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17e08c:
    // 0x17e08c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_17e090:
    if (ctx->pc == 0x17E090u) {
        ctx->pc = 0x17E094u;
        goto label_17e094;
    }
    ctx->pc = 0x17E08Cu;
    {
        const bool branch_taken_0x17e08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e08c) {
            ctx->pc = 0x17E09Cu;
            goto label_17e09c;
        }
    }
    ctx->pc = 0x17E094u;
label_17e094:
    // 0x17e094: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_17e098:
    if (ctx->pc == 0x17E098u) {
        ctx->pc = 0x17E09Cu;
        goto label_17e09c;
    }
    ctx->pc = 0x17E094u;
    {
        const bool branch_taken_0x17e094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e094) {
            ctx->pc = 0x17E0B8u;
            goto label_17e0b8;
        }
    }
    ctx->pc = 0x17E09Cu;
label_17e09c:
    // 0x17e09c: 0x0  nop
    ctx->pc = 0x17e09cu;
    // NOP
label_17e0a0:
    // 0x17e0a0: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0a4:
    // 0x17e0a4: 0x8f838778  lw          $v1, -0x7888($gp)
    ctx->pc = 0x17e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17e0a8:
    // 0x17e0a8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17e0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17e0ac:
    // 0x17e0ac: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0b0:
    // 0x17e0b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_17e0b4:
    if (ctx->pc == 0x17E0B4u) {
        ctx->pc = 0x17E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0B0u;
        // 0x17e0b4: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E0B8u;
        goto label_17e0b8;
    }
    ctx->pc = 0x17E0B0u;
    {
        const bool branch_taken_0x17e0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0B0u;
        // 0x17e0b4: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0b0) {
            ctx->pc = 0x17E0E0u;
            goto label_17e0e0;
        }
    }
    ctx->pc = 0x17E0B8u;
label_17e0b8:
    // 0x17e0b8: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0bc:
    // 0x17e0bc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x17e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_17e0c0:
    // 0x17e0c0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x17e0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17e0c4:
    // 0x17e0c4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0c8:
    // 0x17e0c8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e0cc:
    // 0x17e0cc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0d0:
    // 0x17e0d0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_17e0d4:
    if (ctx->pc == 0x17E0D4u) {
        ctx->pc = 0x17E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0D0u;
        // 0x17e0d4: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E0D8u;
        goto label_17e0d8;
    }
    ctx->pc = 0x17E0D0u;
    {
        const bool branch_taken_0x17e0d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0D0u;
        // 0x17e0d4: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0d0) {
            ctx->pc = 0x17E0E0u;
            goto label_17e0e0;
        }
    }
    ctx->pc = 0x17E0D8u;
label_17e0d8:
    // 0x17e0d8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0dc:
    // 0x17e0dc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x17e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_17e0e0:
    // 0x17e0e0: 0x9664008c  lhu         $a0, 0x8C($s3)
    ctx->pc = 0x17e0e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e0e4:
    // 0x17e0e4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e0e8:
    // 0x17e0e8: 0xaf84878c  sw          $a0, -0x7874($gp)
    ctx->pc = 0x17e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 4));
label_17e0ec:
    // 0x17e0ec: 0x10000048  b           . + 4 + (0x48 << 2)
label_17e0f0:
    if (ctx->pc == 0x17E0F0u) {
        ctx->pc = 0x17E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0ECu;
        // 0x17e0f0: 0xaf838784  sw          $v1, -0x787C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E0F4u;
        goto label_17e0f4;
    }
    ctx->pc = 0x17E0ECu;
    {
        const bool branch_taken_0x17e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0ECu;
        // 0x17e0f0: 0xaf838784  sw          $v1, -0x787C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0ec) {
            ctx->pc = 0x17E210u;
            { ctx->pc = 0x17e210; return; }
        }
    }
    ctx->pc = 0x17E0F4u;
label_17e0f4:
    // 0x17e0f4: 0x0  nop
    ctx->pc = 0x17e0f4u;
    // NOP
label_17e0f8:
    // 0x17e0f8: 0x8f84877c  lw          $a0, -0x7884($gp)
    ctx->pc = 0x17e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17e0fc:
    // 0x17e0fc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e100:
    // 0x17e100: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e104:
    // 0x17e104: 0x8f83877c  lw          $v1, -0x7884($gp)
    ctx->pc = 0x17e104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17e108:
    // 0x17e108: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_17e10c:
    if (ctx->pc == 0x17E10Cu) {
        ctx->pc = 0x17E110u;
        goto label_17e110;
    }
    ctx->pc = 0x17E108u;
    {
        const bool branch_taken_0x17e108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e108) {
            ctx->pc = 0x17E120u;
            goto label_17e120;
        }
    }
    ctx->pc = 0x17E110u;
label_17e110:
    // 0x17e110: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e114:
    // 0x17e114: 0xaf83877c  sw          $v1, -0x7884($gp)
    ctx->pc = 0x17e114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
label_17e118:
    // 0x17e118: 0x1000003d  b           . + 4 + (0x3D << 2)
label_17e11c:
    if (ctx->pc == 0x17E11Cu) {
        ctx->pc = 0x17E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E118u;
        // 0x17e11c: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E120u;
        goto label_17e120;
    }
    ctx->pc = 0x17E118u;
    {
        const bool branch_taken_0x17e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E118u;
        // 0x17e11c: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e118) {
            ctx->pc = 0x17E210u;
            { ctx->pc = 0x17e210; return; }
        }
    }
    ctx->pc = 0x17E120u;
label_17e120:
    // 0x17e120: 0x8f848790  lw          $a0, -0x7870($gp)
    ctx->pc = 0x17e120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936464)));
label_17e124:
    // 0x17e124: 0x9663008c  lhu         $v1, 0x8C($s3)
    ctx->pc = 0x17e124u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e128:
    // 0x17e128: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x17e128u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_17e12c:
    // 0x17e12c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_17e130:
    if (ctx->pc == 0x17E130u) {
        ctx->pc = 0x17E134u;
        goto label_17e134;
    }
    ctx->pc = 0x17E12Cu;
    {
        const bool branch_taken_0x17e12c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e12c) {
            ctx->pc = 0x17E13Cu;
            goto label_17e13c;
        }
    }
    ctx->pc = 0x17E134u;
label_17e134:
    // 0x17e134: 0x10000004  b           . + 4 + (0x4 << 2)
label_17e138:
    if (ctx->pc == 0x17E138u) {
        ctx->pc = 0x17E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E134u;
        // 0x17e138: 0x8f838788  lw          $v1, -0x7878($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E13Cu;
        goto label_17e13c;
    }
    ctx->pc = 0x17E134u;
    {
        const bool branch_taken_0x17e134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E134u;
        // 0x17e138: 0x8f838788  lw          $v1, -0x7878($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e134) {
            ctx->pc = 0x17E148u;
            goto label_17e148;
        }
    }
    ctx->pc = 0x17E13Cu;
label_17e13c:
    // 0x17e13c: 0x0  nop
    ctx->pc = 0x17e13cu;
    // NOP
label_17e140:
    // 0x17e140: 0x8f838770  lw          $v1, -0x7890($gp)
    ctx->pc = 0x17e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_17e144:
    // 0x17e144: 0x0  nop
    ctx->pc = 0x17e144u;
    // NOP
label_17e148:
    // 0x17e148: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_17e14c:
    if (ctx->pc == 0x17E14Cu) {
        ctx->pc = 0x17E150u;
        goto label_17e150;
    }
    ctx->pc = 0x17E148u;
    {
        const bool branch_taken_0x17e148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e148) {
            ctx->pc = 0x17E170u;
            { ctx->pc = 0x17e170; return; }
        }
    }
    ctx->pc = 0x17E150u;
label_17e150:
    // 0x17e150: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x17e150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17e154:
    // 0x17e154: 0x9664008c  lhu         $a0, 0x8C($s3)
    ctx->pc = 0x17e154u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e158:
    // 0x17e158: 0x94a5008c  lhu         $a1, 0x8C($a1)
    ctx->pc = 0x17e158u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 140)));
label_17e15c:
    // 0x17e15c: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x17e15cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_17e160:
    // 0x17e160: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17e164:
    if (ctx->pc == 0x17E164u) {
        ctx->pc = 0x17E168u;
        goto label_17e168;
    }
    ctx->pc = 0x17E160u;
    {
        const bool branch_taken_0x17e160 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e160) {
            ctx->pc = 0x17E170u;
            { ctx->pc = 0x17e170; return; }
        }
    }
    ctx->pc = 0x17E168u;
label_17e168:
    // 0x17e168: 0x1000fff7  b           . + 4 + (-0x9 << 2)
label_17e16c:
    if (ctx->pc == 0x17E16Cu) {
        ctx->pc = 0x17E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E168u;
        // 0x17e16c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E170u;
        { ctx->pc = 0x17e170; return; }
    }
    ctx->pc = 0x17E168u;
    {
        const bool branch_taken_0x17e168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E168u;
        // 0x17e16c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e168) {
            ctx->pc = 0x17E148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e148;
        }
    }
    ctx->pc = 0x17E170u;
    ctx->pc = 0x17e170u;
    return;
}
