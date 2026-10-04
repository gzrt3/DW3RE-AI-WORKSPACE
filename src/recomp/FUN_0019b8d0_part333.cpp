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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part333(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23da90u: goto label_23da90;
        case 0x23da94u: goto label_23da94;
        case 0x23da98u: goto label_23da98;
        case 0x23da9cu: goto label_23da9c;
        case 0x23daa0u: goto label_23daa0;
        case 0x23daa4u: goto label_23daa4;
        case 0x23daa8u: goto label_23daa8;
        case 0x23daacu: goto label_23daac;
        case 0x23dab0u: goto label_23dab0;
        case 0x23dab4u: goto label_23dab4;
        case 0x23dab8u: goto label_23dab8;
        case 0x23dabcu: goto label_23dabc;
        case 0x23dac0u: goto label_23dac0;
        case 0x23dac4u: goto label_23dac4;
        case 0x23dac8u: goto label_23dac8;
        case 0x23daccu: goto label_23dacc;
        case 0x23dad0u: goto label_23dad0;
        case 0x23dad4u: goto label_23dad4;
        case 0x23dad8u: goto label_23dad8;
        case 0x23dadcu: goto label_23dadc;
        case 0x23dae0u: goto label_23dae0;
        case 0x23dae4u: goto label_23dae4;
        case 0x23dae8u: goto label_23dae8;
        case 0x23daecu: goto label_23daec;
        case 0x23daf0u: goto label_23daf0;
        case 0x23daf4u: goto label_23daf4;
        case 0x23daf8u: goto label_23daf8;
        case 0x23dafcu: goto label_23dafc;
        case 0x23db00u: goto label_23db00;
        case 0x23db04u: goto label_23db04;
        case 0x23db08u: goto label_23db08;
        case 0x23db0cu: goto label_23db0c;
        case 0x23db10u: goto label_23db10;
        case 0x23db14u: goto label_23db14;
        case 0x23db18u: goto label_23db18;
        case 0x23db1cu: goto label_23db1c;
        case 0x23db20u: goto label_23db20;
        case 0x23db24u: goto label_23db24;
        case 0x23db28u: goto label_23db28;
        case 0x23db2cu: goto label_23db2c;
        case 0x23db30u: goto label_23db30;
        case 0x23db34u: goto label_23db34;
        case 0x23db38u: goto label_23db38;
        case 0x23db3cu: goto label_23db3c;
        case 0x23db40u: goto label_23db40;
        case 0x23db44u: goto label_23db44;
        case 0x23db48u: goto label_23db48;
        case 0x23db4cu: goto label_23db4c;
        case 0x23db50u: goto label_23db50;
        case 0x23db54u: goto label_23db54;
        case 0x23db58u: goto label_23db58;
        case 0x23db5cu: goto label_23db5c;
        case 0x23db60u: goto label_23db60;
        case 0x23db64u: goto label_23db64;
        case 0x23db68u: goto label_23db68;
        case 0x23db6cu: goto label_23db6c;
        case 0x23db70u: goto label_23db70;
        case 0x23db74u: goto label_23db74;
        case 0x23db78u: goto label_23db78;
        case 0x23db7cu: goto label_23db7c;
        case 0x23db80u: goto label_23db80;
        case 0x23db84u: goto label_23db84;
        case 0x23db88u: goto label_23db88;
        case 0x23db8cu: goto label_23db8c;
        case 0x23db90u: goto label_23db90;
        case 0x23db94u: goto label_23db94;
        case 0x23db98u: goto label_23db98;
        case 0x23db9cu: goto label_23db9c;
        case 0x23dba0u: goto label_23dba0;
        case 0x23dba4u: goto label_23dba4;
        case 0x23dba8u: goto label_23dba8;
        case 0x23dbacu: goto label_23dbac;
        case 0x23dbb0u: goto label_23dbb0;
        case 0x23dbb4u: goto label_23dbb4;
        case 0x23dbb8u: goto label_23dbb8;
        case 0x23dbbcu: goto label_23dbbc;
        case 0x23dbc0u: goto label_23dbc0;
        case 0x23dbc4u: goto label_23dbc4;
        case 0x23dbc8u: goto label_23dbc8;
        case 0x23dbccu: goto label_23dbcc;
        case 0x23dbd0u: goto label_23dbd0;
        case 0x23dbd4u: goto label_23dbd4;
        case 0x23dbd8u: goto label_23dbd8;
        case 0x23dbdcu: goto label_23dbdc;
        case 0x23dbe0u: goto label_23dbe0;
        case 0x23dbe4u: goto label_23dbe4;
        case 0x23dbe8u: goto label_23dbe8;
        case 0x23dbecu: goto label_23dbec;
        case 0x23dbf0u: goto label_23dbf0;
        case 0x23dbf4u: goto label_23dbf4;
        case 0x23dbf8u: goto label_23dbf8;
        case 0x23dbfcu: goto label_23dbfc;
        case 0x23dc00u: goto label_23dc00;
        case 0x23dc04u: goto label_23dc04;
        case 0x23dc08u: goto label_23dc08;
        case 0x23dc0cu: goto label_23dc0c;
        case 0x23dc10u: goto label_23dc10;
        case 0x23dc14u: goto label_23dc14;
        case 0x23dc18u: goto label_23dc18;
        case 0x23dc1cu: goto label_23dc1c;
        case 0x23dc20u: goto label_23dc20;
        case 0x23dc24u: goto label_23dc24;
        case 0x23dc28u: goto label_23dc28;
        case 0x23dc2cu: goto label_23dc2c;
        case 0x23dc30u: goto label_23dc30;
        case 0x23dc34u: goto label_23dc34;
        case 0x23dc38u: goto label_23dc38;
        case 0x23dc3cu: goto label_23dc3c;
        case 0x23dc40u: goto label_23dc40;
        case 0x23dc44u: goto label_23dc44;
        case 0x23dc48u: goto label_23dc48;
        case 0x23dc4cu: goto label_23dc4c;
        case 0x23dc50u: goto label_23dc50;
        case 0x23dc54u: goto label_23dc54;
        case 0x23dc58u: goto label_23dc58;
        case 0x23dc5cu: goto label_23dc5c;
        case 0x23dc60u: goto label_23dc60;
        case 0x23dc64u: goto label_23dc64;
        case 0x23dc68u: goto label_23dc68;
        case 0x23dc6cu: goto label_23dc6c;
        case 0x23dc70u: goto label_23dc70;
        case 0x23dc74u: goto label_23dc74;
        case 0x23dc78u: goto label_23dc78;
        case 0x23dc7cu: goto label_23dc7c;
        case 0x23dc80u: goto label_23dc80;
        case 0x23dc84u: goto label_23dc84;
        case 0x23dc88u: goto label_23dc88;
        case 0x23dc8cu: goto label_23dc8c;
        case 0x23dc90u: goto label_23dc90;
        case 0x23dc94u: goto label_23dc94;
        case 0x23dc98u: goto label_23dc98;
        case 0x23dc9cu: goto label_23dc9c;
        case 0x23dca0u: goto label_23dca0;
        case 0x23dca4u: goto label_23dca4;
        case 0x23dca8u: goto label_23dca8;
        case 0x23dcacu: goto label_23dcac;
        case 0x23dcb0u: goto label_23dcb0;
        case 0x23dcb4u: goto label_23dcb4;
        case 0x23dcb8u: goto label_23dcb8;
        case 0x23dcbcu: goto label_23dcbc;
        case 0x23dcc0u: goto label_23dcc0;
        case 0x23dcc4u: goto label_23dcc4;
        case 0x23dcc8u: goto label_23dcc8;
        case 0x23dcccu: goto label_23dccc;
        case 0x23dcd0u: goto label_23dcd0;
        case 0x23dcd4u: goto label_23dcd4;
        case 0x23dcd8u: goto label_23dcd8;
        case 0x23dcdcu: goto label_23dcdc;
        case 0x23dce0u: goto label_23dce0;
        case 0x23dce4u: goto label_23dce4;
        case 0x23dce8u: goto label_23dce8;
        case 0x23dcecu: goto label_23dcec;
        case 0x23dcf0u: goto label_23dcf0;
        case 0x23dcf4u: goto label_23dcf4;
        case 0x23dcf8u: goto label_23dcf8;
        case 0x23dcfcu: goto label_23dcfc;
        case 0x23dd00u: goto label_23dd00;
        case 0x23dd04u: goto label_23dd04;
        case 0x23dd08u: goto label_23dd08;
        case 0x23dd0cu: goto label_23dd0c;
        case 0x23dd10u: goto label_23dd10;
        case 0x23dd14u: goto label_23dd14;
        case 0x23dd18u: goto label_23dd18;
        case 0x23dd1cu: goto label_23dd1c;
        case 0x23dd20u: goto label_23dd20;
        case 0x23dd24u: goto label_23dd24;
        case 0x23dd28u: goto label_23dd28;
        case 0x23dd2cu: goto label_23dd2c;
        case 0x23dd30u: goto label_23dd30;
        case 0x23dd34u: goto label_23dd34;
        case 0x23dd38u: goto label_23dd38;
        case 0x23dd3cu: goto label_23dd3c;
        case 0x23dd40u: goto label_23dd40;
        case 0x23dd44u: goto label_23dd44;
        case 0x23dd48u: goto label_23dd48;
        case 0x23dd4cu: goto label_23dd4c;
        case 0x23dd50u: goto label_23dd50;
        case 0x23dd54u: goto label_23dd54;
        case 0x23dd58u: goto label_23dd58;
        case 0x23dd5cu: goto label_23dd5c;
        case 0x23dd60u: goto label_23dd60;
        case 0x23dd64u: goto label_23dd64;
        case 0x23dd68u: goto label_23dd68;
        case 0x23dd6cu: goto label_23dd6c;
        case 0x23dd70u: goto label_23dd70;
        case 0x23dd74u: goto label_23dd74;
        case 0x23dd78u: goto label_23dd78;
        case 0x23dd7cu: goto label_23dd7c;
        case 0x23dd80u: goto label_23dd80;
        case 0x23dd84u: goto label_23dd84;
        case 0x23dd88u: goto label_23dd88;
        case 0x23dd8cu: goto label_23dd8c;
        case 0x23dd90u: goto label_23dd90;
        case 0x23dd94u: goto label_23dd94;
        case 0x23dd98u: goto label_23dd98;
        case 0x23dd9cu: goto label_23dd9c;
        case 0x23dda0u: goto label_23dda0;
        case 0x23dda4u: goto label_23dda4;
        case 0x23dda8u: goto label_23dda8;
        case 0x23ddacu: goto label_23ddac;
        case 0x23ddb0u: goto label_23ddb0;
        case 0x23ddb4u: goto label_23ddb4;
        case 0x23ddb8u: goto label_23ddb8;
        case 0x23ddbcu: goto label_23ddbc;
        case 0x23ddc0u: goto label_23ddc0;
        case 0x23ddc4u: goto label_23ddc4;
        case 0x23ddc8u: goto label_23ddc8;
        case 0x23ddccu: goto label_23ddcc;
        case 0x23ddd0u: goto label_23ddd0;
        case 0x23ddd4u: goto label_23ddd4;
        case 0x23ddd8u: goto label_23ddd8;
        case 0x23dddcu: goto label_23dddc;
        case 0x23dde0u: goto label_23dde0;
        case 0x23dde4u: goto label_23dde4;
        case 0x23dde8u: goto label_23dde8;
        case 0x23ddecu: goto label_23ddec;
        case 0x23ddf0u: goto label_23ddf0;
        case 0x23ddf4u: goto label_23ddf4;
        case 0x23ddf8u: goto label_23ddf8;
        case 0x23ddfcu: goto label_23ddfc;
        case 0x23de00u: goto label_23de00;
        case 0x23de04u: goto label_23de04;
        case 0x23de08u: goto label_23de08;
        case 0x23de0cu: goto label_23de0c;
        case 0x23de10u: goto label_23de10;
        case 0x23de14u: goto label_23de14;
        case 0x23de18u: goto label_23de18;
        case 0x23de1cu: goto label_23de1c;
        case 0x23de20u: goto label_23de20;
        case 0x23de24u: goto label_23de24;
        case 0x23de28u: goto label_23de28;
        case 0x23de2cu: goto label_23de2c;
        case 0x23de30u: goto label_23de30;
        case 0x23de34u: goto label_23de34;
        case 0x23de38u: goto label_23de38;
        case 0x23de3cu: goto label_23de3c;
        case 0x23de40u: goto label_23de40;
        case 0x23de44u: goto label_23de44;
        case 0x23de48u: goto label_23de48;
        case 0x23de4cu: goto label_23de4c;
        case 0x23de50u: goto label_23de50;
        case 0x23de54u: goto label_23de54;
        case 0x23de58u: goto label_23de58;
        case 0x23de5cu: goto label_23de5c;
        case 0x23de60u: goto label_23de60;
        case 0x23de64u: goto label_23de64;
        case 0x23de68u: goto label_23de68;
        case 0x23de6cu: goto label_23de6c;
        case 0x23de70u: goto label_23de70;
        case 0x23de74u: goto label_23de74;
        case 0x23de78u: goto label_23de78;
        case 0x23de7cu: goto label_23de7c;
        case 0x23de80u: goto label_23de80;
        case 0x23de84u: goto label_23de84;
        case 0x23de88u: goto label_23de88;
        case 0x23de8cu: goto label_23de8c;
        case 0x23de90u: goto label_23de90;
        case 0x23de94u: goto label_23de94;
        case 0x23de98u: goto label_23de98;
        case 0x23de9cu: goto label_23de9c;
        case 0x23dea0u: goto label_23dea0;
        case 0x23dea4u: goto label_23dea4;
        case 0x23dea8u: goto label_23dea8;
        case 0x23deacu: goto label_23deac;
        case 0x23deb0u: goto label_23deb0;
        case 0x23deb4u: goto label_23deb4;
        case 0x23deb8u: goto label_23deb8;
        case 0x23debcu: goto label_23debc;
        case 0x23dec0u: goto label_23dec0;
        case 0x23dec4u: goto label_23dec4;
        case 0x23dec8u: goto label_23dec8;
        case 0x23deccu: goto label_23decc;
        case 0x23ded0u: goto label_23ded0;
        case 0x23ded4u: goto label_23ded4;
        case 0x23ded8u: goto label_23ded8;
        case 0x23dedcu: goto label_23dedc;
        case 0x23dee0u: goto label_23dee0;
        case 0x23dee4u: goto label_23dee4;
        case 0x23dee8u: goto label_23dee8;
        case 0x23deecu: goto label_23deec;
        case 0x23def0u: goto label_23def0;
        case 0x23def4u: goto label_23def4;
        case 0x23def8u: goto label_23def8;
        case 0x23defcu: goto label_23defc;
        case 0x23df00u: goto label_23df00;
        case 0x23df04u: goto label_23df04;
        case 0x23df08u: goto label_23df08;
        case 0x23df0cu: goto label_23df0c;
        case 0x23df10u: goto label_23df10;
        case 0x23df14u: goto label_23df14;
        case 0x23df18u: goto label_23df18;
        case 0x23df1cu: goto label_23df1c;
        case 0x23df20u: goto label_23df20;
        case 0x23df24u: goto label_23df24;
        case 0x23df28u: goto label_23df28;
        case 0x23df2cu: goto label_23df2c;
        case 0x23df30u: goto label_23df30;
        case 0x23df34u: goto label_23df34;
        case 0x23df38u: goto label_23df38;
        case 0x23df3cu: goto label_23df3c;
        case 0x23df40u: goto label_23df40;
        case 0x23df44u: goto label_23df44;
        case 0x23df48u: goto label_23df48;
        case 0x23df4cu: goto label_23df4c;
        case 0x23df50u: goto label_23df50;
        case 0x23df54u: goto label_23df54;
        case 0x23df58u: goto label_23df58;
        case 0x23df5cu: goto label_23df5c;
        case 0x23df60u: goto label_23df60;
        case 0x23df64u: goto label_23df64;
        case 0x23df68u: goto label_23df68;
        case 0x23df6cu: goto label_23df6c;
        case 0x23df70u: goto label_23df70;
        case 0x23df74u: goto label_23df74;
        case 0x23df78u: goto label_23df78;
        case 0x23df7cu: goto label_23df7c;
        case 0x23df80u: goto label_23df80;
        case 0x23df84u: goto label_23df84;
        case 0x23df88u: goto label_23df88;
        case 0x23df8cu: goto label_23df8c;
        case 0x23df90u: goto label_23df90;
        case 0x23df94u: goto label_23df94;
        case 0x23df98u: goto label_23df98;
        case 0x23df9cu: goto label_23df9c;
        case 0x23dfa0u: goto label_23dfa0;
        case 0x23dfa4u: goto label_23dfa4;
        case 0x23dfa8u: goto label_23dfa8;
        case 0x23dfacu: goto label_23dfac;
        case 0x23dfb0u: goto label_23dfb0;
        case 0x23dfb4u: goto label_23dfb4;
        case 0x23dfb8u: goto label_23dfb8;
        case 0x23dfbcu: goto label_23dfbc;
        case 0x23dfc0u: goto label_23dfc0;
        case 0x23dfc4u: goto label_23dfc4;
        case 0x23dfc8u: goto label_23dfc8;
        case 0x23dfccu: goto label_23dfcc;
        case 0x23dfd0u: goto label_23dfd0;
        case 0x23dfd4u: goto label_23dfd4;
        case 0x23dfd8u: goto label_23dfd8;
        case 0x23dfdcu: goto label_23dfdc;
        case 0x23dfe0u: goto label_23dfe0;
        case 0x23dfe4u: goto label_23dfe4;
        case 0x23dfe8u: goto label_23dfe8;
        case 0x23dfecu: goto label_23dfec;
        case 0x23dff0u: goto label_23dff0;
        case 0x23dff4u: goto label_23dff4;
        case 0x23dff8u: goto label_23dff8;
        case 0x23dffcu: goto label_23dffc;
        case 0x23e000u: goto label_23e000;
        case 0x23e004u: goto label_23e004;
        case 0x23e008u: goto label_23e008;
        case 0x23e00cu: goto label_23e00c;
        case 0x23e010u: goto label_23e010;
        case 0x23e014u: goto label_23e014;
        case 0x23e018u: goto label_23e018;
        case 0x23e01cu: goto label_23e01c;
        case 0x23e020u: goto label_23e020;
        case 0x23e024u: goto label_23e024;
        case 0x23e028u: goto label_23e028;
        case 0x23e02cu: goto label_23e02c;
        case 0x23e030u: goto label_23e030;
        case 0x23e034u: goto label_23e034;
        case 0x23e038u: goto label_23e038;
        case 0x23e03cu: goto label_23e03c;
        case 0x23e040u: goto label_23e040;
        case 0x23e044u: goto label_23e044;
        case 0x23e048u: goto label_23e048;
        case 0x23e04cu: goto label_23e04c;
        case 0x23e050u: goto label_23e050;
        case 0x23e054u: goto label_23e054;
        case 0x23e058u: goto label_23e058;
        case 0x23e05cu: goto label_23e05c;
        case 0x23e060u: goto label_23e060;
        case 0x23e064u: goto label_23e064;
        case 0x23e068u: goto label_23e068;
        case 0x23e06cu: goto label_23e06c;
        case 0x23e070u: goto label_23e070;
        case 0x23e074u: goto label_23e074;
        case 0x23e078u: goto label_23e078;
        case 0x23e07cu: goto label_23e07c;
        case 0x23e080u: goto label_23e080;
        case 0x23e084u: goto label_23e084;
        case 0x23e088u: goto label_23e088;
        case 0x23e08cu: goto label_23e08c;
        case 0x23e090u: goto label_23e090;
        case 0x23e094u: goto label_23e094;
        case 0x23e098u: goto label_23e098;
        case 0x23e09cu: goto label_23e09c;
        case 0x23e0a0u: goto label_23e0a0;
        case 0x23e0a4u: goto label_23e0a4;
        case 0x23e0a8u: goto label_23e0a8;
        case 0x23e0acu: goto label_23e0ac;
        case 0x23e0b0u: goto label_23e0b0;
        case 0x23e0b4u: goto label_23e0b4;
        case 0x23e0b8u: goto label_23e0b8;
        case 0x23e0bcu: goto label_23e0bc;
        case 0x23e0c0u: goto label_23e0c0;
        case 0x23e0c4u: goto label_23e0c4;
        case 0x23e0c8u: goto label_23e0c8;
        case 0x23e0ccu: goto label_23e0cc;
        case 0x23e0d0u: goto label_23e0d0;
        case 0x23e0d4u: goto label_23e0d4;
        case 0x23e0d8u: goto label_23e0d8;
        case 0x23e0dcu: goto label_23e0dc;
        case 0x23e0e0u: goto label_23e0e0;
        case 0x23e0e4u: goto label_23e0e4;
        case 0x23e0e8u: goto label_23e0e8;
        case 0x23e0ecu: goto label_23e0ec;
        case 0x23e0f0u: goto label_23e0f0;
        case 0x23e0f4u: goto label_23e0f4;
        case 0x23e0f8u: goto label_23e0f8;
        case 0x23e0fcu: goto label_23e0fc;
        case 0x23e100u: goto label_23e100;
        case 0x23e104u: goto label_23e104;
        case 0x23e108u: goto label_23e108;
        case 0x23e10cu: goto label_23e10c;
        case 0x23e110u: goto label_23e110;
        case 0x23e114u: goto label_23e114;
        case 0x23e118u: goto label_23e118;
        case 0x23e11cu: goto label_23e11c;
        case 0x23e120u: goto label_23e120;
        case 0x23e124u: goto label_23e124;
        case 0x23e128u: goto label_23e128;
        case 0x23e12cu: goto label_23e12c;
        case 0x23e130u: goto label_23e130;
        case 0x23e134u: goto label_23e134;
        case 0x23e138u: goto label_23e138;
        case 0x23e13cu: goto label_23e13c;
        case 0x23e140u: goto label_23e140;
        case 0x23e144u: goto label_23e144;
        case 0x23e148u: goto label_23e148;
        case 0x23e14cu: goto label_23e14c;
        case 0x23e150u: goto label_23e150;
        case 0x23e154u: goto label_23e154;
        case 0x23e158u: goto label_23e158;
        case 0x23e15cu: goto label_23e15c;
        case 0x23e160u: goto label_23e160;
        case 0x23e164u: goto label_23e164;
        case 0x23e168u: goto label_23e168;
        case 0x23e16cu: goto label_23e16c;
        case 0x23e170u: goto label_23e170;
        case 0x23e174u: goto label_23e174;
        case 0x23e178u: goto label_23e178;
        case 0x23e17cu: goto label_23e17c;
        case 0x23e180u: goto label_23e180;
        case 0x23e184u: goto label_23e184;
        case 0x23e188u: goto label_23e188;
        case 0x23e18cu: goto label_23e18c;
        case 0x23e190u: goto label_23e190;
        case 0x23e194u: goto label_23e194;
        case 0x23e198u: goto label_23e198;
        case 0x23e19cu: goto label_23e19c;
        case 0x23e1a0u: goto label_23e1a0;
        case 0x23e1a4u: goto label_23e1a4;
        case 0x23e1a8u: goto label_23e1a8;
        case 0x23e1acu: goto label_23e1ac;
        case 0x23e1b0u: goto label_23e1b0;
        case 0x23e1b4u: goto label_23e1b4;
        case 0x23e1b8u: goto label_23e1b8;
        case 0x23e1bcu: goto label_23e1bc;
        case 0x23e1c0u: goto label_23e1c0;
        case 0x23e1c4u: goto label_23e1c4;
        case 0x23e1c8u: goto label_23e1c8;
        case 0x23e1ccu: goto label_23e1cc;
        case 0x23e1d0u: goto label_23e1d0;
        case 0x23e1d4u: goto label_23e1d4;
        case 0x23e1d8u: goto label_23e1d8;
        case 0x23e1dcu: goto label_23e1dc;
        case 0x23e1e0u: goto label_23e1e0;
        case 0x23e1e4u: goto label_23e1e4;
        case 0x23e1e8u: goto label_23e1e8;
        case 0x23e1ecu: goto label_23e1ec;
        case 0x23e1f0u: goto label_23e1f0;
        case 0x23e1f4u: goto label_23e1f4;
        case 0x23e1f8u: goto label_23e1f8;
        case 0x23e1fcu: goto label_23e1fc;
        case 0x23e200u: goto label_23e200;
        case 0x23e204u: goto label_23e204;
        case 0x23e208u: goto label_23e208;
        case 0x23e20cu: goto label_23e20c;
        case 0x23e210u: goto label_23e210;
        case 0x23e214u: goto label_23e214;
        case 0x23e218u: goto label_23e218;
        case 0x23e21cu: goto label_23e21c;
        case 0x23e220u: goto label_23e220;
        case 0x23e224u: goto label_23e224;
        case 0x23e228u: goto label_23e228;
        case 0x23e22cu: goto label_23e22c;
        case 0x23e230u: goto label_23e230;
        case 0x23e234u: goto label_23e234;
        case 0x23e238u: goto label_23e238;
        case 0x23e23cu: goto label_23e23c;
        case 0x23e240u: goto label_23e240;
        case 0x23e244u: goto label_23e244;
        case 0x23e248u: goto label_23e248;
        case 0x23e24cu: goto label_23e24c;
        case 0x23e250u: goto label_23e250;
        case 0x23e254u: goto label_23e254;
        case 0x23e258u: goto label_23e258;
        case 0x23e25cu: goto label_23e25c;
        default: return;
    }

label_23da90:
    // 0x23da90: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23da90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23da94:
    // 0x23da94: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23da94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_23da98:
    // 0x23da98: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23da98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23da9c:
    // 0x23da9c: 0x27a501d4  addiu       $a1, $sp, 0x1D4
    ctx->pc = 0x23da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
label_23daa0:
    // 0x23daa0: 0x8c670820  lw          $a3, 0x820($v1)
    ctx->pc = 0x23daa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2080)));
label_23daa4:
    // 0x23daa4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23daa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23daa8:
    // 0x23daa8: 0xc08e8d2  jal         func_23A348
label_23daac:
    if (ctx->pc == 0x23DAACu) {
        ctx->pc = 0x23DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAA8u;
        // 0x23daac: 0x27a801d8  addiu       $t0, $sp, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAB0u;
        goto label_23dab0;
    }
    ctx->pc = 0x23DAA8u;
    SET_GPR_U32(ctx, 31, 0x23DAB0u);
    ctx->pc = 0x23DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAA8u;
    // 0x23daac: 0x27a801d8  addiu       $t0, $sp, 0x1D8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A348u;
    { ctx->pc = 0x23a348; return; }
    ctx->pc = 0x23DAB0u;
label_23dab0:
    // 0x23dab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23dab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23dab4:
    // 0x23dab4: 0x5a000006  blezl       $s0, . + 4 + (0x6 << 2)
label_23dab8:
    if (ctx->pc == 0x23DAB8u) {
        ctx->pc = 0x23DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAB4u;
        // 0x23dab8: 0x2558823  subu        $s1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DABCu;
        goto label_23dabc;
    }
    ctx->pc = 0x23DAB4u;
    {
        const bool branch_taken_0x23dab4 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x23dab4) {
            ctx->pc = 0x23DAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DAB4u;
            // 0x23dab8: 0x2558823  subu        $s1, $s2, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DAD0u;
            goto label_23dad0;
        }
    }
    ctx->pc = 0x23DABCu;
label_23dabc:
    // 0x23dabc: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x23dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_23dac0:
    // 0x23dac0: 0x1451fff3  bne         $v0, $s1, . + 4 + (-0xD << 2)
label_23dac4:
    if (ctx->pc == 0x23DAC4u) {
        ctx->pc = 0x23DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAC0u;
        // 0x23dac4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAC8u;
        goto label_23dac8;
    }
    ctx->pc = 0x23DAC0u;
    {
        const bool branch_taken_0x23dac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x23DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAC0u;
        // 0x23dac4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dac0) {
            ctx->pc = 0x23DA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da90;
        }
    }
    ctx->pc = 0x23DAC8u;
label_23dac8:
    // 0x23dac8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23dac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23dacc:
    // 0x23dacc: 0x2558823  subu        $s1, $s2, $s5
    ctx->pc = 0x23daccu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_23dad0:
    // 0x23dad0: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_23dad4:
    if (ctx->pc == 0x23DAD4u) {
        ctx->pc = 0x23DAD8u;
        goto label_23dad8;
    }
    ctx->pc = 0x23DAD0u;
    {
        const bool branch_taken_0x23dad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dad0) {
            ctx->pc = 0x23DB2Cu;
            goto label_23db2c;
        }
    }
    ctx->pc = 0x23DAD8u;
label_23dad8:
    // 0x23dad8: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x23dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_23dadc:
    // 0x23dadc: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x23dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_23dae0:
    // 0x23dae0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x23dae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_23dae4:
    // 0x23dae4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x23dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23dae8:
    // 0x23dae8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23daec:
    // 0x23daec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23daecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23daf0:
    // 0x23daf0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_23daf4:
    // 0x23daf4: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x23daf4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23daf8:
    // 0x23daf8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x23daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_23dafc:
    // 0x23dafc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_23db00:
    if (ctx->pc == 0x23DB00u) {
        ctx->pc = 0x23DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAFCu;
        // 0x23db00: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB04u;
        goto label_23db04;
    }
    ctx->pc = 0x23DAFCu;
    {
        const bool branch_taken_0x23dafc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAFCu;
        // 0x23db00: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dafc) {
            ctx->pc = 0x23DB20u;
            goto label_23db20;
        }
    }
    ctx->pc = 0x23DB04u;
label_23db04:
    // 0x23db04: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23db08:
    // 0x23db08: 0xc08f610  jal         func_23D840
label_23db0c:
    if (ctx->pc == 0x23DB0Cu) {
        ctx->pc = 0x23DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB08u;
        // 0x23db0c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB10u;
        goto label_23db10;
    }
    ctx->pc = 0x23DB08u;
    SET_GPR_U32(ctx, 31, 0x23DB10u);
    ctx->pc = 0x23DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB08u;
    // 0x23db0c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23DB10u;
label_23db10:
    // 0x23db10: 0x14400530  bnez        $v0, . + 4 + (0x530 << 2)
label_23db14:
    if (ctx->pc == 0x23DB14u) {
        ctx->pc = 0x23DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB10u;
        // 0x23db14: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB18u;
        goto label_23db18;
    }
    ctx->pc = 0x23DB10u;
    {
        const bool branch_taken_0x23db10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB10u;
        // 0x23db14: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db10) {
            ctx->pc = 0x23EFD4u;
            { ctx->pc = 0x23efd4; return; }
        }
    }
    ctx->pc = 0x23DB18u;
label_23db18:
    // 0x23db18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23db1c:
    // 0x23db1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23db1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23db20:
    // 0x23db20: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x23db20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_23db24:
    // 0x23db24: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x23db24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_23db28:
    // 0x23db28: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x23db28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
label_23db2c:
    // 0x23db2c: 0x1a000521  blez        $s0, . + 4 + (0x521 << 2)
label_23db30:
    if (ctx->pc == 0x23DB30u) {
        ctx->pc = 0x23DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB2Cu;
        // 0x23db30: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB34u;
        goto label_23db34;
    }
    ctx->pc = 0x23DB2Cu;
    {
        const bool branch_taken_0x23db2c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x23DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB2Cu;
        // 0x23db30: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db2c) {
            ctx->pc = 0x23EFB4u;
            { ctx->pc = 0x23efb4; return; }
        }
    }
    ctx->pc = 0x23DB34u;
label_23db34:
    // 0x23db34: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x23db34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_23db38:
    // 0x23db38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23db38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23db3c:
    // 0x23db3c: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x23db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_23db40:
    // 0x23db40: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23db40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23db44:
    // 0x23db44: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x23db44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
label_23db48:
    // 0x23db48: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x23db48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23db4c:
    // 0x23db4c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x23db4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23db50:
    // 0x23db50: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x23db50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_23db54:
    // 0x23db54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23db54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23db58:
    // 0x23db58: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x23db58u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
label_23db5c:
    // 0x23db5c: 0x2623ffe0  addiu       $v1, $s1, -0x20
    ctx->pc = 0x23db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
label_23db60:
    // 0x23db60: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x23db60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_23db64:
    // 0x23db64: 0x104001b2  beqz        $v0, . + 4 + (0x1B2 << 2)
label_23db68:
    if (ctx->pc == 0x23DB68u) {
        ctx->pc = 0x23DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB64u;
        // 0x23db68: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB6Cu;
        goto label_23db6c;
    }
    ctx->pc = 0x23DB64u;
    {
        const bool branch_taken_0x23db64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB64u;
        // 0x23db68: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db64) {
            ctx->pc = 0x23E230u;
            goto label_23e230;
        }
    }
    ctx->pc = 0x23DB6Cu;
label_23db6c:
    // 0x23db6c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x23db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_23db70:
    // 0x23db70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23db74:
    // 0x23db74: 0x8c63e570  lw          $v1, -0x1A90($v1)
    ctx->pc = 0x23db74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960496)));
label_23db78:
    // 0x23db78: 0x600008  jr          $v1
label_23db7c:
    if (ctx->pc == 0x23DB7Cu) {
        ctx->pc = 0x23DB80u;
        goto label_23db80;
    }
    ctx->pc = 0x23DB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DB80u: goto label_23db80;
            case 0x23DB98u: goto label_23db98;
            case 0x23DBA0u: goto label_23dba0;
            case 0x23DBBCu: goto label_23dbbc;
            case 0x23DBC8u: goto label_23dbc8;
            case 0x23DBD8u: goto label_23dbd8;
            case 0x23DC58u: goto label_23dc58;
            case 0x23DC60u: goto label_23dc60;
            case 0x23DC98u: goto label_23dc98;
            case 0x23DCA0u: goto label_23dca0;
            case 0x23DCA8u: goto label_23dca8;
            case 0x23DCBCu: goto label_23dcbc;
            case 0x23DCD0u: goto label_23dcd0;
            case 0x23DCF0u: goto label_23dcf0;
            case 0x23DCF4u: goto label_23dcf4;
            case 0x23DD48u: goto label_23dd48;
            case 0x23DF28u: goto label_23df28;
            case 0x23DF88u: goto label_23df88;
            case 0x23DF8Cu: goto label_23df8c;
            case 0x23DFD0u: goto label_23dfd0;
            case 0x23DFF8u: goto label_23dff8;
            case 0x23E058u: goto label_23e058;
            case 0x23E05Cu: goto label_23e05c;
            case 0x23E0A0u: goto label_23e0a0;
            case 0x23E0B0u: goto label_23e0b0;
            case 0x23E230u: goto label_23e230;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23DB80u;
label_23db80:
    // 0x23db80: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x23db80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_23db84:
    // 0x23db84: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_23db88:
    if (ctx->pc == 0x23DB88u) {
        ctx->pc = 0x23DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB84u;
        // 0x23db88: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB8Cu;
        goto label_23db8c;
    }
    ctx->pc = 0x23DB84u;
    {
        const bool branch_taken_0x23db84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23db84) {
            ctx->pc = 0x23DB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DB84u;
            // 0x23db88: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db50;
        }
    }
    ctx->pc = 0x23DB8Cu;
label_23db8c:
    // 0x23db8c: 0x1000000f  b           . + 4 + (0xF << 2)
label_23db90:
    if (ctx->pc == 0x23DB90u) {
        ctx->pc = 0x23DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB8Cu;
        // 0x23db90: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB94u;
        goto label_23db94;
    }
    ctx->pc = 0x23DB8Cu;
    {
        const bool branch_taken_0x23db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB8Cu;
        // 0x23db90: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db8c) {
            ctx->pc = 0x23DBCCu;
            goto label_23dbcc;
        }
    }
    ctx->pc = 0x23DB94u;
label_23db94:
    // 0x23db94: 0x0  nop
    ctx->pc = 0x23db94u;
    // NOP
label_23db98:
    // 0x23db98: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_23db9c:
    if (ctx->pc == 0x23DB9Cu) {
        ctx->pc = 0x23DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB98u;
        // 0x23db9c: 0x36f70001  ori         $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBA0u;
        goto label_23dba0;
    }
    ctx->pc = 0x23DB98u;
    {
        const bool branch_taken_0x23db98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB98u;
        // 0x23db9c: 0x36f70001  ori         $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db98) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DBA0u;
label_23dba0:
    // 0x23dba0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23dba4:
    // 0x23dba4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dba4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23dba8:
    // 0x23dba8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23dbac:
    // 0x23dbac: 0x441ffe7  bgez        $v0, . + 4 + (-0x19 << 2)
label_23dbb0:
    if (ctx->pc == 0x23DBB0u) {
        ctx->pc = 0x23DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBACu;
        // 0x23dbb0: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBB4u;
        goto label_23dbb4;
    }
    ctx->pc = 0x23DBACu;
    {
        const bool branch_taken_0x23dbac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBACu;
        // 0x23dbb0: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbac) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DBB4u;
label_23dbb4:
    // 0x23dbb4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x23dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_23dbb8:
    // 0x23dbb8: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x23dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_23dbbc:
    // 0x23dbbc: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
label_23dbc0:
    if (ctx->pc == 0x23DBC0u) {
        ctx->pc = 0x23DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBBCu;
        // 0x23dbc0: 0x36f70004  ori         $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBC4u;
        goto label_23dbc4;
    }
    ctx->pc = 0x23DBBCu;
    {
        const bool branch_taken_0x23dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBBCu;
        // 0x23dbc0: 0x36f70004  ori         $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbbc) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DBC4u;
label_23dbc4:
    // 0x23dbc4: 0x0  nop
    ctx->pc = 0x23dbc4u;
    // NOP
label_23dbc8:
    // 0x23dbc8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x23dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_23dbcc:
    // 0x23dbcc: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x23dbccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23dbd0:
    // 0x23dbd0: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_23dbd4:
    if (ctx->pc == 0x23DBD4u) {
        ctx->pc = 0x23DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBD0u;
        // 0x23dbd4: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBD8u;
        goto label_23dbd8;
    }
    ctx->pc = 0x23DBD0u;
    {
        const bool branch_taken_0x23dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBD0u;
        // 0x23dbd4: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbd0) {
            ctx->pc = 0x23DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db50;
        }
    }
    ctx->pc = 0x23DBD8u;
label_23dbd8:
    // 0x23dbd8: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23dbd8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23dbdc:
    // 0x23dbdc: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x23dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_23dbe0:
    // 0x23dbe0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_23dbe4:
    if (ctx->pc == 0x23DBE4u) {
        ctx->pc = 0x23DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBE0u;
        // 0x23dbe4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBE8u;
        goto label_23dbe8;
    }
    ctx->pc = 0x23DBE0u;
    {
        const bool branch_taken_0x23dbe0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBE0u;
        // 0x23dbe4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbe0) {
            ctx->pc = 0x23DC08u;
            goto label_23dc08;
        }
    }
    ctx->pc = 0x23DBE8u;
label_23dbe8:
    // 0x23dbe8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23dbec:
    // 0x23dbec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23dbecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23dbf0:
    // 0x23dbf0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x23dbf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23dbf4:
    // 0x23dbf4: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x23dbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
label_23dbf8:
    // 0x23dbf8: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
label_23dbfc:
    if (ctx->pc == 0x23DBFCu) {
        ctx->pc = 0x23DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBF8u;
        // 0x23dbfc: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC00u;
        goto label_23dc00;
    }
    ctx->pc = 0x23DBF8u;
    {
        const bool branch_taken_0x23dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBF8u;
        // 0x23dbfc: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbf8) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DC00u;
label_23dc00:
    // 0x23dc00: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
label_23dc04:
    if (ctx->pc == 0x23DC04u) {
        ctx->pc = 0x23DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC00u;
        // 0x23dc04: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC08u;
        goto label_23dc08;
    }
    ctx->pc = 0x23DC00u;
    {
        const bool branch_taken_0x23dc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC00u;
        // 0x23dc04: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc00) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DC08u;
label_23dc08:
    // 0x23dc08: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x23dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
label_23dc0c:
    // 0x23dc0c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x23dc0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_23dc10:
    // 0x23dc10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23dc14:
    if (ctx->pc == 0x23DC14u) {
        ctx->pc = 0x23DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC10u;
        // 0x23dc14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC18u;
        goto label_23dc18;
    }
    ctx->pc = 0x23DC10u;
    {
        const bool branch_taken_0x23dc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC10u;
        // 0x23dc14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc10) {
            ctx->pc = 0x23DC40u;
            goto label_23dc40;
        }
    }
    ctx->pc = 0x23DC18u;
label_23dc18:
    // 0x23dc18: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23dc1c:
    // 0x23dc1c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23dc20:
    // 0x23dc20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_23dc24:
    // 0x23dc24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23dc28:
    // 0x23dc28: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23dc28u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23dc2c:
    // 0x23dc2c: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x23dc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_23dc30:
    // 0x23dc30: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x23dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
label_23dc34:
    // 0x23dc34: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x23dc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_23dc38:
    // 0x23dc38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_23dc3c:
    if (ctx->pc == 0x23DC3Cu) {
        ctx->pc = 0x23DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC38u;
        // 0x23dc3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC40u;
        goto label_23dc40;
    }
    ctx->pc = 0x23DC38u;
    {
        const bool branch_taken_0x23dc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC38u;
        // 0x23dc3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc38) {
            ctx->pc = 0x23DC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dc18;
        }
    }
    ctx->pc = 0x23DC40u;
label_23dc40:
    // 0x23dc40: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x23dc40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23dc44:
    // 0x23dc44: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x23dc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
label_23dc48:
    // 0x23dc48: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
label_23dc4c:
    if (ctx->pc == 0x23DC4Cu) {
        ctx->pc = 0x23DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC48u;
        // 0x23dc4c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC50u;
        goto label_23dc50;
    }
    ctx->pc = 0x23DC48u;
    {
        const bool branch_taken_0x23dc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dc48) {
            ctx->pc = 0x23DC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DC48u;
            // 0x23dc4c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db5c;
        }
    }
    ctx->pc = 0x23DC50u;
label_23dc50:
    // 0x23dc50: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
label_23dc54:
    if (ctx->pc == 0x23DC54u) {
        ctx->pc = 0x23DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC50u;
        // 0x23dc54: 0x2623ffe0  addiu       $v1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC58u;
        goto label_23dc58;
    }
    ctx->pc = 0x23DC50u;
    {
        const bool branch_taken_0x23dc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC50u;
        // 0x23dc54: 0x2623ffe0  addiu       $v1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc50) {
            ctx->pc = 0x23DB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db60;
        }
    }
    ctx->pc = 0x23DC58u;
label_23dc58:
    // 0x23dc58: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
label_23dc5c:
    if (ctx->pc == 0x23DC5Cu) {
        ctx->pc = 0x23DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC58u;
        // 0x23dc5c: 0x36f70080  ori         $s7, $s7, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC60u;
        goto label_23dc60;
    }
    ctx->pc = 0x23DC58u;
    {
        const bool branch_taken_0x23dc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC58u;
        // 0x23dc5c: 0x36f70080  ori         $s7, $s7, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc58) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DC60u;
label_23dc60:
    // 0x23dc60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23dc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dc64:
    // 0x23dc64: 0x0  nop
    ctx->pc = 0x23dc64u;
    // NOP
label_23dc68:
    // 0x23dc68: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23dc6c:
    // 0x23dc6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23dc70:
    // 0x23dc70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_23dc74:
    // 0x23dc74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23dc78:
    // 0x23dc78: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23dc78u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23dc7c:
    // 0x23dc7c: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x23dc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_23dc80:
    // 0x23dc80: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x23dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
label_23dc84:
    // 0x23dc84: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x23dc84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_23dc88:
    // 0x23dc88: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_23dc8c:
    if (ctx->pc == 0x23DC8Cu) {
        ctx->pc = 0x23DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC88u;
        // 0x23dc8c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC90u;
        goto label_23dc90;
    }
    ctx->pc = 0x23DC88u;
    {
        const bool branch_taken_0x23dc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC88u;
        // 0x23dc8c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc88) {
            ctx->pc = 0x23DC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dc68;
        }
    }
    ctx->pc = 0x23DC90u;
label_23dc90:
    // 0x23dc90: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_23dc94:
    if (ctx->pc == 0x23DC94u) {
        ctx->pc = 0x23DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC90u;
        // 0x23dc94: 0xafb001f0  sw          $s0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC98u;
        goto label_23dc98;
    }
    ctx->pc = 0x23DC90u;
    {
        const bool branch_taken_0x23dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC90u;
        // 0x23dc94: 0xafb001f0  sw          $s0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc90) {
            ctx->pc = 0x23DB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db5c;
        }
    }
    ctx->pc = 0x23DC98u;
label_23dc98:
    // 0x23dc98: 0x1000ffac  b           . + 4 + (-0x54 << 2)
label_23dc9c:
    if (ctx->pc == 0x23DC9Cu) {
        ctx->pc = 0x23DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC98u;
        // 0x23dc9c: 0x36f70008  ori         $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCA0u;
        goto label_23dca0;
    }
    ctx->pc = 0x23DC98u;
    {
        const bool branch_taken_0x23dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC98u;
        // 0x23dc9c: 0x36f70008  ori         $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc98) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DCA0u;
label_23dca0:
    // 0x23dca0: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
label_23dca4:
    if (ctx->pc == 0x23DCA4u) {
        ctx->pc = 0x23DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCA0u;
        // 0x23dca4: 0x36f70040  ori         $s7, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCA8u;
        goto label_23dca8;
    }
    ctx->pc = 0x23DCA0u;
    {
        const bool branch_taken_0x23dca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCA0u;
        // 0x23dca4: 0x36f70040  ori         $s7, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dca0) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DCA8u;
label_23dca8:
    // 0x23dca8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x23dca8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_23dcac:
    // 0x23dcac: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x23dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_23dcb0:
    // 0x23dcb0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_23dcb4:
    if (ctx->pc == 0x23DCB4u) {
        ctx->pc = 0x23DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCB0u;
        // 0x23dcb4: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCB8u;
        goto label_23dcb8;
    }
    ctx->pc = 0x23DCB0u;
    {
        const bool branch_taken_0x23dcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCB0u;
        // 0x23dcb4: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcb0) {
            ctx->pc = 0x23DCC8u;
            goto label_23dcc8;
        }
    }
    ctx->pc = 0x23DCB8u;
label_23dcb8:
    // 0x23dcb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23dcb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23dcbc:
    // 0x23dcbc: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
label_23dcc0:
    if (ctx->pc == 0x23DCC0u) {
        ctx->pc = 0x23DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCBCu;
        // 0x23dcc0: 0x36f70020  ori         $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCC4u;
        goto label_23dcc4;
    }
    ctx->pc = 0x23DCBCu;
    {
        const bool branch_taken_0x23dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCBCu;
        // 0x23dcc0: 0x36f70020  ori         $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcbc) {
            ctx->pc = 0x23DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db4c;
        }
    }
    ctx->pc = 0x23DCC4u;
label_23dcc4:
    // 0x23dcc4: 0x0  nop
    ctx->pc = 0x23dcc4u;
    // NOP
label_23dcc8:
    // 0x23dcc8: 0x1000ffa1  b           . + 4 + (-0x5F << 2)
label_23dccc:
    if (ctx->pc == 0x23DCCCu) {
        ctx->pc = 0x23DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCC8u;
        // 0x23dccc: 0x36f70010  ori         $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCD0u;
        goto label_23dcd0;
    }
    ctx->pc = 0x23DCC8u;
    {
        const bool branch_taken_0x23dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCC8u;
        // 0x23dccc: 0x36f70010  ori         $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcc8) {
            ctx->pc = 0x23DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db50;
        }
    }
    ctx->pc = 0x23DCD0u;
label_23dcd0:
    // 0x23dcd0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dcd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23dcd4:
    // 0x23dcd4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dcd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23dcd8:
    // 0x23dcd8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23dcd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_23dcdc:
    // 0x23dcdc: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x23dcdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_23dce0:
    // 0x23dce0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x23dce0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23dce4:
    // 0x23dce4: 0x10000156  b           . + 4 + (0x156 << 2)
label_23dce8:
    if (ctx->pc == 0x23DCE8u) {
        ctx->pc = 0x23DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCE4u;
        // 0x23dce8: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCECu;
        goto label_23dcec;
    }
    ctx->pc = 0x23DCE4u;
    {
        const bool branch_taken_0x23dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCE4u;
        // 0x23dce8: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dce4) {
            ctx->pc = 0x23E240u;
            goto label_23e240;
        }
    }
    ctx->pc = 0x23DCECu;
label_23dcec:
    // 0x23dcec: 0x0  nop
    ctx->pc = 0x23dcecu;
    // NOP
label_23dcf0:
    // 0x23dcf0: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x23dcf0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_23dcf4:
    // 0x23dcf4: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23dcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
label_23dcf8:
    // 0x23dcf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23dcfc:
    if (ctx->pc == 0x23DCFCu) {
        ctx->pc = 0x23DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCF8u;
        // 0x23dcfc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD00u;
        goto label_23dd00;
    }
    ctx->pc = 0x23DCF8u;
    {
        const bool branch_taken_0x23dcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCF8u;
        // 0x23dcfc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcf8) {
            ctx->pc = 0x23DD10u;
            goto label_23dd10;
        }
    }
    ctx->pc = 0x23DD00u;
label_23dd00:
    // 0x23dd00: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dd00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23dd04:
    // 0x23dd04: 0x1000000a  b           . + 4 + (0xA << 2)
label_23dd08:
    if (ctx->pc == 0x23DD08u) {
        ctx->pc = 0x23DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD04u;
        // 0x23dd08: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD0Cu;
        goto label_23dd0c;
    }
    ctx->pc = 0x23DD04u;
    {
        const bool branch_taken_0x23dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD04u;
        // 0x23dd08: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd04) {
            ctx->pc = 0x23DD30u;
            goto label_23dd30;
        }
    }
    ctx->pc = 0x23DD0Cu;
label_23dd0c:
    // 0x23dd0c: 0x0  nop
    ctx->pc = 0x23dd0cu;
    // NOP
label_23dd10:
    // 0x23dd10: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23dd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
label_23dd14:
    // 0x23dd14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23dd18:
    if (ctx->pc == 0x23DD18u) {
        ctx->pc = 0x23DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD14u;
        // 0x23dd18: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD1Cu;
        goto label_23dd1c;
    }
    ctx->pc = 0x23DD14u;
    {
        const bool branch_taken_0x23dd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD14u;
        // 0x23dd18: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd14) {
            ctx->pc = 0x23DD28u;
            goto label_23dd28;
        }
    }
    ctx->pc = 0x23DD1Cu;
label_23dd1c:
    // 0x23dd1c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dd1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23dd20:
    // 0x23dd20: 0x10000003  b           . + 4 + (0x3 << 2)
label_23dd24:
    if (ctx->pc == 0x23DD24u) {
        ctx->pc = 0x23DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD20u;
        // 0x23dd24: 0x84500000  lh          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD28u;
        goto label_23dd28;
    }
    ctx->pc = 0x23DD20u;
    {
        const bool branch_taken_0x23dd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD20u;
        // 0x23dd24: 0x84500000  lh          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd20) {
            ctx->pc = 0x23DD30u;
            goto label_23dd30;
        }
    }
    ctx->pc = 0x23DD28u;
label_23dd28:
    // 0x23dd28: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dd28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23dd2c:
    // 0x23dd2c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23dd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23dd30:
    // 0x23dd30: 0x60100f7  bgez        $s0, . + 4 + (0xF7 << 2)
label_23dd34:
    if (ctx->pc == 0x23DD34u) {
        ctx->pc = 0x23DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD30u;
        // 0x23dd34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD38u;
        goto label_23dd38;
    }
    ctx->pc = 0x23DD30u;
    {
        const bool branch_taken_0x23dd30 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x23DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD30u;
        // 0x23dd34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd30) {
            ctx->pc = 0x23E110u;
            goto label_23e110;
        }
    }
    ctx->pc = 0x23DD38u;
label_23dd38:
    // 0x23dd38: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_23dd3c:
    // 0x23dd3c: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x23dd3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_23dd40:
    // 0x23dd40: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_23dd44:
    if (ctx->pc == 0x23DD44u) {
        ctx->pc = 0x23DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD40u;
        // 0x23dd44: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD48u;
        goto label_23dd48;
    }
    ctx->pc = 0x23DD40u;
    {
        const bool branch_taken_0x23dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD40u;
        // 0x23dd44: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd40) {
            ctx->pc = 0x23E110u;
            goto label_23e110;
        }
    }
    ctx->pc = 0x23DD48u;
label_23dd48:
    // 0x23dd48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23dd4c:
    // 0x23dd4c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
label_23dd50:
    if (ctx->pc == 0x23DD50u) {
        ctx->pc = 0x23DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD4Cu;
        // 0x23dd50: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD54u;
        goto label_23dd54;
    }
    ctx->pc = 0x23DD4Cu;
    {
        const bool branch_taken_0x23dd4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD4Cu;
        // 0x23dd50: 0x24020067  addiu       $v0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd4c) {
            ctx->pc = 0x23DD60u;
            goto label_23dd60;
        }
    }
    ctx->pc = 0x23DD54u;
label_23dd54:
    // 0x23dd54: 0x10000008  b           . + 4 + (0x8 << 2)
label_23dd58:
    if (ctx->pc == 0x23DD58u) {
        ctx->pc = 0x23DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD54u;
        // 0x23dd58: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD5Cu;
        goto label_23dd5c;
    }
    ctx->pc = 0x23DD54u;
    {
        const bool branch_taken_0x23dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD54u;
        // 0x23dd58: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd54) {
            ctx->pc = 0x23DD78u;
            goto label_23dd78;
        }
    }
    ctx->pc = 0x23DD5Cu;
label_23dd5c:
    // 0x23dd5c: 0x0  nop
    ctx->pc = 0x23dd5cu;
    // NOP
label_23dd60:
    // 0x23dd60: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_23dd64:
    if (ctx->pc == 0x23DD64u) {
        ctx->pc = 0x23DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD60u;
        // 0x23dd64: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD68u;
        goto label_23dd68;
    }
    ctx->pc = 0x23DD60u;
    {
        const bool branch_taken_0x23dd60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD60u;
        // 0x23dd64: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd60) {
            ctx->pc = 0x23DD70u;
            goto label_23dd70;
        }
    }
    ctx->pc = 0x23DD68u;
label_23dd68:
    // 0x23dd68: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_23dd6c:
    if (ctx->pc == 0x23DD6Cu) {
        ctx->pc = 0x23DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD68u;
        // 0x23dd6c: 0x32e20008  andi        $v0, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD70u;
        goto label_23dd70;
    }
    ctx->pc = 0x23DD68u;
    {
        const bool branch_taken_0x23dd68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD68u;
        // 0x23dd6c: 0x32e20008  andi        $v0, $s7, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd68) {
            ctx->pc = 0x23DD7Cu;
            goto label_23dd7c;
        }
    }
    ctx->pc = 0x23DD70u;
label_23dd70:
    // 0x23dd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23dd74:
    // 0x23dd74: 0x54a00a  movz        $s4, $v0, $s4
    ctx->pc = 0x23dd74u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_23dd78:
    // 0x23dd78: 0x32e20008  andi        $v0, $s7, 0x8
    ctx->pc = 0x23dd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8);
label_23dd7c:
    // 0x23dd7c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23dd80:
    // 0x23dd80: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x23dd80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_23dd84:
    // 0x23dd84: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x23dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
label_23dd88:
    // 0x23dd88: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23dd88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
label_23dd8c:
    // 0x23dd8c: 0xc06d338  jal         func_1B4CE0
label_23dd90:
    if (ctx->pc == 0x23DD90u) {
        ctx->pc = 0x23DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD8Cu;
        // 0x23dd90: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD94u;
        goto label_23dd94;
    }
    ctx->pc = 0x23DD8Cu;
    SET_GPR_U32(ctx, 31, 0x23DD94u);
    ctx->pc = 0x23DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD8Cu;
    // 0x23dd90: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4CE0u;
    { ctx->pc = 0x1b4ce0; return; }
    ctx->pc = 0x23DD94u;
label_23dd94:
    // 0x23dd94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23dd98:
    if (ctx->pc == 0x23DD98u) {
        ctx->pc = 0x23DD9Cu;
        goto label_23dd9c;
    }
    ctx->pc = 0x23DD94u;
    {
        const bool branch_taken_0x23dd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd94) {
            ctx->pc = 0x23DDD0u;
            goto label_23ddd0;
        }
    }
    ctx->pc = 0x23DD9Cu;
label_23dd9c:
    // 0x23dd9c: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23dd9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
label_23dda0:
    // 0x23dda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23dda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dda4:
    // 0x23dda4: 0xc06def6  jal         func_1B7BD8
label_23dda8:
    if (ctx->pc == 0x23DDA8u) {
        ctx->pc = 0x23DDACu;
        goto label_23ddac;
    }
    ctx->pc = 0x23DDA4u;
    SET_GPR_U32(ctx, 31, 0x23DDACu);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x23DDACu;
label_23ddac:
    // 0x23ddac: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_23ddb0:
    if (ctx->pc == 0x23DDB0u) {
        ctx->pc = 0x23DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDACu;
        // 0x23ddb0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDB4u;
        goto label_23ddb4;
    }
    ctx->pc = 0x23DDACu;
    {
        const bool branch_taken_0x23ddac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDACu;
        // 0x23ddb0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddac) {
            ctx->pc = 0x23DDC0u;
            goto label_23ddc0;
        }
    }
    ctx->pc = 0x23DDB4u;
label_23ddb4:
    // 0x23ddb4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_23ddb8:
    // 0x23ddb8: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x23ddb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
label_23ddbc:
    // 0x23ddbc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23ddc0:
    // 0x23ddc0: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x23ddc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23ddc4:
    // 0x23ddc4: 0x1000011f  b           . + 4 + (0x11F << 2)
label_23ddc8:
    if (ctx->pc == 0x23DDC8u) {
        ctx->pc = 0x23DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDC4u;
        // 0x23ddc8: 0x2455e4f0  addiu       $s5, $v0, -0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDCCu;
        goto label_23ddcc;
    }
    ctx->pc = 0x23DDC4u;
    {
        const bool branch_taken_0x23ddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDC4u;
        // 0x23ddc8: 0x2455e4f0  addiu       $s5, $v0, -0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddc4) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23DDCCu;
label_23ddcc:
    // 0x23ddcc: 0x0  nop
    ctx->pc = 0x23ddccu;
    // NOP
label_23ddd0:
    // 0x23ddd0: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x23ddd0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
label_23ddd4:
    // 0x23ddd4: 0xc06d34a  jal         func_1B4D28
label_23ddd8:
    if (ctx->pc == 0x23DDD8u) {
        ctx->pc = 0x23DDDCu;
        goto label_23dddc;
    }
    ctx->pc = 0x23DDD4u;
    SET_GPR_U32(ctx, 31, 0x23DDDCu);
    ctx->pc = 0x1B4D28u;
    { ctx->pc = 0x1b4d28; return; }
    ctx->pc = 0x23DDDCu;
label_23dddc:
    // 0x23dddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23dde0:
    if (ctx->pc == 0x23DDE0u) {
        ctx->pc = 0x23DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDDCu;
        // 0x23dde0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDE4u;
        goto label_23dde4;
    }
    ctx->pc = 0x23DDDCu;
    {
        const bool branch_taken_0x23dddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDDCu;
        // 0x23dde0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dddc) {
            ctx->pc = 0x23DDF0u;
            goto label_23ddf0;
        }
    }
    ctx->pc = 0x23DDE4u;
label_23dde4:
    // 0x23dde4: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x23dde4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23dde8:
    // 0x23dde8: 0x10000116  b           . + 4 + (0x116 << 2)
label_23ddec:
    if (ctx->pc == 0x23DDECu) {
        ctx->pc = 0x23DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDE8u;
        // 0x23ddec: 0x2455e4f8  addiu       $s5, $v0, -0x1B08 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDF0u;
        goto label_23ddf0;
    }
    ctx->pc = 0x23DDE8u;
    {
        const bool branch_taken_0x23dde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDE8u;
        // 0x23ddec: 0x2455e4f8  addiu       $s5, $v0, -0x1B08 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dde8) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23DDF0u;
label_23ddf0:
    // 0x23ddf0: 0x36f70100  ori         $s7, $s7, 0x100
    ctx->pc = 0x23ddf0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)256);
label_23ddf4:
    // 0x23ddf4: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x23ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_23ddf8:
    // 0x23ddf8: 0xdfa501f8  ld          $a1, 0x1F8($sp)
    ctx->pc = 0x23ddf8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 504)));
label_23ddfc:
    // 0x23ddfc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23ddfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23de00:
    // 0x23de00: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x23de00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23de04:
    // 0x23de04: 0x27a801d0  addiu       $t0, $sp, 0x1D0
    ctx->pc = 0x23de04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_23de08:
    // 0x23de08: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x23de08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_23de0c:
    // 0x23de0c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x23de0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23de10:
    // 0x23de10: 0xc08fc06  jal         func_23F018
label_23de14:
    if (ctx->pc == 0x23DE14u) {
        ctx->pc = 0x23DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE10u;
        // 0x23de14: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE18u;
        goto label_23de18;
    }
    ctx->pc = 0x23DE10u;
    SET_GPR_U32(ctx, 31, 0x23DE18u);
    ctx->pc = 0x23DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE10u;
    // 0x23de14: 0x27ab01e0  addiu       $t3, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F018u;
    { ctx->pc = 0x23f018; return; }
    ctx->pc = 0x23DE18u;
label_23de18:
    // 0x23de18: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x23de18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23de1c:
    // 0x23de1c: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x23de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_23de20:
    // 0x23de20: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_23de24:
    if (ctx->pc == 0x23DE24u) {
        ctx->pc = 0x23DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE20u;
        // 0x23de24: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE28u;
        goto label_23de28;
    }
    ctx->pc = 0x23DE20u;
    {
        const bool branch_taken_0x23de20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE20u;
        // 0x23de24: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de20) {
            ctx->pc = 0x23DE30u;
            goto label_23de30;
        }
    }
    ctx->pc = 0x23DE28u;
label_23de28:
    // 0x23de28: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
label_23de2c:
    if (ctx->pc == 0x23DE2Cu) {
        ctx->pc = 0x23DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE28u;
        // 0x23de2c: 0x8fa701dc  lw          $a3, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE30u;
        goto label_23de30;
    }
    ctx->pc = 0x23DE28u;
    {
        const bool branch_taken_0x23de28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE28u;
        // 0x23de2c: 0x8fa701dc  lw          $a3, 0x1DC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de28) {
            ctx->pc = 0x23DE60u;
            goto label_23de60;
        }
    }
    ctx->pc = 0x23DE30u;
label_23de30:
    // 0x23de30: 0x8fa701dc  lw          $a3, 0x1DC($sp)
    ctx->pc = 0x23de30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_23de34:
    // 0x23de34: 0x28e2fffd  slti        $v0, $a3, -0x3
    ctx->pc = 0x23de34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967293) ? 1 : 0);
label_23de38:
    // 0x23de38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23de3c:
    if (ctx->pc == 0x23DE3Cu) {
        ctx->pc = 0x23DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE38u;
        // 0x23de3c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE40u;
        goto label_23de40;
    }
    ctx->pc = 0x23DE38u;
    {
        const bool branch_taken_0x23de38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE38u;
        // 0x23de3c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de38) {
            ctx->pc = 0x23DE50u;
            goto label_23de50;
        }
    }
    ctx->pc = 0x23DE40u;
label_23de40:
    // 0x23de40: 0x287102a  slt         $v0, $s4, $a3
    ctx->pc = 0x23de40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_23de44:
    // 0x23de44: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_23de48:
    if (ctx->pc == 0x23DE48u) {
        ctx->pc = 0x23DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE44u;
        // 0x23de48: 0x24110067  addiu       $s1, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE4Cu;
        goto label_23de4c;
    }
    ctx->pc = 0x23DE44u;
    {
        const bool branch_taken_0x23de44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de44) {
            ctx->pc = 0x23DE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE44u;
            // 0x23de48: 0x24110067  addiu       $s1, $zero, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE60u;
            goto label_23de60;
        }
    }
    ctx->pc = 0x23DE4Cu;
label_23de4c:
    // 0x23de4c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x23de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_23de50:
    // 0x23de50: 0x3a240067  xori        $a0, $s1, 0x67
    ctx->pc = 0x23de50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)103);
label_23de54:
    // 0x23de54: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x23de54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_23de58:
    // 0x23de58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23de58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23de5c:
    // 0x23de5c: 0x64880b  movn        $s1, $v1, $a0
    ctx->pc = 0x23de5cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_23de60:
    // 0x23de60: 0x2a220066  slti        $v0, $s1, 0x66
    ctx->pc = 0x23de60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)102) ? 1 : 0);
label_23de64:
    // 0x23de64: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_23de68:
    if (ctx->pc == 0x23DE68u) {
        ctx->pc = 0x23DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE64u;
        // 0x23de68: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE6Cu;
        goto label_23de6c;
    }
    ctx->pc = 0x23DE64u;
    {
        const bool branch_taken_0x23de64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de64) {
            ctx->pc = 0x23DE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE64u;
            // 0x23de68: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DEB0u;
            goto label_23deb0;
        }
    }
    ctx->pc = 0x23DE6Cu;
label_23de6c:
    // 0x23de6c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x23de6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_23de70:
    // 0x23de70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23de70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23de74:
    // 0x23de74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23de74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23de78:
    // 0x23de78: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x23de78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23de7c:
    // 0x23de7c: 0xc08fc76  jal         func_23F1D8
label_23de80:
    if (ctx->pc == 0x23DE80u) {
        ctx->pc = 0x23DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE7Cu;
        // 0x23de80: 0xafa701dc  sw          $a3, 0x1DC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE84u;
        goto label_23de84;
    }
    ctx->pc = 0x23DE7Cu;
    SET_GPR_U32(ctx, 31, 0x23DE84u);
    ctx->pc = 0x23DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE7Cu;
    // 0x23de80: 0xafa701dc  sw          $a3, 0x1DC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F1D8u;
    { ctx->pc = 0x23f1d8; return; }
    ctx->pc = 0x23DE84u;
label_23de84:
    // 0x23de84: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x23de84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_23de88:
    // 0x23de88: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x23de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_23de8c:
    // 0x23de8c: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x23de8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_23de90:
    // 0x23de90: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x23de90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_23de94:
    // 0x23de94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_23de98:
    if (ctx->pc == 0x23DE98u) {
        ctx->pc = 0x23DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE94u;
        // 0x23de98: 0xc2f021  addu        $fp, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE9Cu;
        goto label_23de9c;
    }
    ctx->pc = 0x23DE94u;
    {
        const bool branch_taken_0x23de94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE94u;
        // 0x23de98: 0xc2f021  addu        $fp, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de94) {
            ctx->pc = 0x23DEA8u;
            goto label_23dea8;
        }
    }
    ctx->pc = 0x23DE9Cu;
label_23de9c:
    // 0x23de9c: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23de9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_23dea0:
    // 0x23dea0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_23dea4:
    if (ctx->pc == 0x23DEA4u) {
        ctx->pc = 0x23DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA0u;
        // 0x23dea4: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEA8u;
        goto label_23dea8;
    }
    ctx->pc = 0x23DEA0u;
    {
        const bool branch_taken_0x23dea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA0u;
        // 0x23dea4: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dea0) {
            ctx->pc = 0x23DF14u;
            goto label_23df14;
        }
    }
    ctx->pc = 0x23DEA8u;
label_23dea8:
    // 0x23dea8: 0x10000019  b           . + 4 + (0x19 << 2)
label_23deac:
    if (ctx->pc == 0x23DEACu) {
        ctx->pc = 0x23DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA8u;
        // 0x23deac: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEB0u;
        goto label_23deb0;
    }
    ctx->pc = 0x23DEA8u;
    {
        const bool branch_taken_0x23dea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEA8u;
        // 0x23deac: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dea8) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEB0u;
label_23deb0:
    // 0x23deb0: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_23deb4:
    if (ctx->pc == 0x23DEB4u) {
        ctx->pc = 0x23DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB0u;
        // 0x23deb4: 0x8fa501e0  lw          $a1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEB8u;
        goto label_23deb8;
    }
    ctx->pc = 0x23DEB0u;
    {
        const bool branch_taken_0x23deb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB0u;
        // 0x23deb4: 0x8fa501e0  lw          $a1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deb0) {
            ctx->pc = 0x23DEE0u;
            goto label_23dee0;
        }
    }
    ctx->pc = 0x23DEB8u;
label_23deb8:
    // 0x23deb8: 0x18e00015  blez        $a3, . + 4 + (0x15 << 2)
label_23debc:
    if (ctx->pc == 0x23DEBCu) {
        ctx->pc = 0x23DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB8u;
        // 0x23debc: 0x269e0002  addiu       $fp, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEC0u;
        goto label_23dec0;
    }
    ctx->pc = 0x23DEB8u;
    {
        const bool branch_taken_0x23deb8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x23DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB8u;
        // 0x23debc: 0x269e0002  addiu       $fp, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deb8) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEC0u;
label_23dec0:
    // 0x23dec0: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_23dec4:
    if (ctx->pc == 0x23DEC4u) {
        ctx->pc = 0x23DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEC0u;
        // 0x23dec4: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEC8u;
        goto label_23dec8;
    }
    ctx->pc = 0x23DEC0u;
    {
        const bool branch_taken_0x23dec0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEC0u;
        // 0x23dec4: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dec0) {
            ctx->pc = 0x23DED4u;
            goto label_23ded4;
        }
    }
    ctx->pc = 0x23DEC8u;
label_23dec8:
    // 0x23dec8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23dec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_23decc:
    // 0x23decc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_23ded0:
    if (ctx->pc == 0x23DED0u) {
        ctx->pc = 0x23DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DECCu;
        // 0x23ded0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DED4u;
        goto label_23ded4;
    }
    ctx->pc = 0x23DECCu;
    {
        const bool branch_taken_0x23decc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DECCu;
        // 0x23ded0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23decc) {
            ctx->pc = 0x23DF14u;
            goto label_23df14;
        }
    }
    ctx->pc = 0x23DED4u;
label_23ded4:
    // 0x23ded4: 0xf41021  addu        $v0, $a3, $s4
    ctx->pc = 0x23ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_23ded8:
    // 0x23ded8: 0x1000000d  b           . + 4 + (0xD << 2)
label_23dedc:
    if (ctx->pc == 0x23DEDCu) {
        ctx->pc = 0x23DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DED8u;
        // 0x23dedc: 0x245e0001  addiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEE0u;
        goto label_23dee0;
    }
    ctx->pc = 0x23DED8u;
    {
        const bool branch_taken_0x23ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DED8u;
        // 0x23dedc: 0x245e0001  addiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ded8) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEE0u;
label_23dee0:
    // 0x23dee0: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x23dee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23dee4:
    // 0x23dee4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23dee8:
    if (ctx->pc == 0x23DEE8u) {
        ctx->pc = 0x23DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEE4u;
        // 0x23dee8: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEECu;
        goto label_23deec;
    }
    ctx->pc = 0x23DEE4u;
    {
        const bool branch_taken_0x23dee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEE4u;
        // 0x23dee8: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dee4) {
            ctx->pc = 0x23DF00u;
            goto label_23df00;
        }
    }
    ctx->pc = 0x23DEECu;
label_23deec:
    // 0x23deec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23def0:
    if (ctx->pc == 0x23DEF0u) {
        ctx->pc = 0x23DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEECu;
        // 0x23def0: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEF4u;
        goto label_23def4;
    }
    ctx->pc = 0x23DEECu;
    {
        const bool branch_taken_0x23deec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEECu;
        // 0x23def0: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deec) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEF4u;
label_23def4:
    // 0x23def4: 0x10000006  b           . + 4 + (0x6 << 2)
label_23def8:
    if (ctx->pc == 0x23DEF8u) {
        ctx->pc = 0x23DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEF4u;
        // 0x23def8: 0x24fe0001  addiu       $fp, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEFCu;
        goto label_23defc;
    }
    ctx->pc = 0x23DEF4u;
    {
        const bool branch_taken_0x23def4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEF4u;
        // 0x23def8: 0x24fe0001  addiu       $fp, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23def4) {
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DEFCu;
label_23defc:
    // 0x23defc: 0x0  nop
    ctx->pc = 0x23defcu;
    // NOP
label_23df00:
    // 0x23df00: 0x5ce00003  bgtzl       $a3, . + 4 + (0x3 << 2)
label_23df04:
    if (ctx->pc == 0x23DF04u) {
        ctx->pc = 0x23DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF00u;
        // 0x23df04: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF08u;
        goto label_23df08;
    }
    ctx->pc = 0x23DF00u;
    {
        const bool branch_taken_0x23df00 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x23df00) {
            ctx->pc = 0x23DF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DF00u;
            // 0x23df04: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DF10u;
            goto label_23df10;
        }
    }
    ctx->pc = 0x23DF08u;
label_23df08:
    // 0x23df08: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x23df08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_23df0c:
    // 0x23df0c: 0x245e0002  addiu       $fp, $v0, 0x2
    ctx->pc = 0x23df0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_23df10:
    // 0x23df10: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x23df10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_23df14:
    // 0x23df14: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
label_23df18:
    if (ctx->pc == 0x23DF18u) {
        ctx->pc = 0x23DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF14u;
        // 0x23df18: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF1Cu;
        goto label_23df1c;
    }
    ctx->pc = 0x23DF14u;
    {
        const bool branch_taken_0x23df14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF14u;
        // 0x23df18: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df14) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23DF1Cu;
label_23df1c:
    // 0x23df1c: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_23df20:
    if (ctx->pc == 0x23DF20u) {
        ctx->pc = 0x23DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF1Cu;
        // 0x23df20: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF24u;
        goto label_23df24;
    }
    ctx->pc = 0x23DF1Cu;
    {
        const bool branch_taken_0x23df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF1Cu;
        // 0x23df20: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df1c) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23DF24u;
label_23df24:
    // 0x23df24: 0x0  nop
    ctx->pc = 0x23df24u;
    // NOP
label_23df28:
    // 0x23df28: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
label_23df2c:
    // 0x23df2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23df30:
    if (ctx->pc == 0x23DF30u) {
        ctx->pc = 0x23DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF2Cu;
        // 0x23df30: 0x32e20040  andi        $v0, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF34u;
        goto label_23df34;
    }
    ctx->pc = 0x23DF2Cu;
    {
        const bool branch_taken_0x23df2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF2Cu;
        // 0x23df30: 0x32e20040  andi        $v0, $s7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df2c) {
            ctx->pc = 0x23DF50u;
            goto label_23df50;
        }
    }
    ctx->pc = 0x23DF34u;
label_23df34:
    // 0x23df34: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x23df34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23df38:
    // 0x23df38: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23df3c:
    // 0x23df3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23df40:
    // 0x23df40: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x23df40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_23df44:
    // 0x23df44: 0x1000fed0  b           . + 4 + (-0x130 << 2)
label_23df48:
    if (ctx->pc == 0x23DF48u) {
        ctx->pc = 0x23DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF44u;
        // 0x23df48: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF4Cu;
        goto label_23df4c;
    }
    ctx->pc = 0x23DF44u;
    {
        const bool branch_taken_0x23df44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF44u;
        // 0x23df48: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df44) {
            ctx->pc = 0x23DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23da88; return; }
        }
    }
    ctx->pc = 0x23DF4Cu;
label_23df4c:
    // 0x23df4c: 0x0  nop
    ctx->pc = 0x23df4cu;
    // NOP
label_23df50:
    // 0x23df50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23df54:
    if (ctx->pc == 0x23DF54u) {
        ctx->pc = 0x23DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF50u;
        // 0x23df54: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF58u;
        goto label_23df58;
    }
    ctx->pc = 0x23DF50u;
    {
        const bool branch_taken_0x23df50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF50u;
        // 0x23df54: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df50) {
            ctx->pc = 0x23DF70u;
            goto label_23df70;
        }
    }
    ctx->pc = 0x23DF58u;
label_23df58:
    // 0x23df58: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23df5c:
    // 0x23df5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23df60:
    // 0x23df60: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x23df60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_23df64:
    // 0x23df64: 0x1000fec8  b           . + 4 + (-0x138 << 2)
label_23df68:
    if (ctx->pc == 0x23DF68u) {
        ctx->pc = 0x23DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF64u;
        // 0x23df68: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF6Cu;
        goto label_23df6c;
    }
    ctx->pc = 0x23DF64u;
    {
        const bool branch_taken_0x23df64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF64u;
        // 0x23df68: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df64) {
            ctx->pc = 0x23DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23da88; return; }
        }
    }
    ctx->pc = 0x23DF6Cu;
label_23df6c:
    // 0x23df6c: 0x0  nop
    ctx->pc = 0x23df6cu;
    // NOP
label_23df70:
    // 0x23df70: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23df74:
    // 0x23df74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23df78:
    // 0x23df78: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x23df78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_23df7c:
    // 0x23df7c: 0x1000fec2  b           . + 4 + (-0x13E << 2)
label_23df80:
    if (ctx->pc == 0x23DF80u) {
        ctx->pc = 0x23DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF7Cu;
        // 0x23df80: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF84u;
        goto label_23df84;
    }
    ctx->pc = 0x23DF7Cu;
    {
        const bool branch_taken_0x23df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF7Cu;
        // 0x23df80: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df7c) {
            ctx->pc = 0x23DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23da88; return; }
        }
    }
    ctx->pc = 0x23DF84u;
label_23df84:
    // 0x23df84: 0x0  nop
    ctx->pc = 0x23df84u;
    // NOP
label_23df88:
    // 0x23df88: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x23df88u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_23df8c:
    // 0x23df8c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
label_23df90:
    // 0x23df90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23df94:
    if (ctx->pc == 0x23DF94u) {
        ctx->pc = 0x23DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF90u;
        // 0x23df94: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF98u;
        goto label_23df98;
    }
    ctx->pc = 0x23DF90u;
    {
        const bool branch_taken_0x23df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF90u;
        // 0x23df94: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df90) {
            ctx->pc = 0x23DFA8u;
            goto label_23dfa8;
        }
    }
    ctx->pc = 0x23DF98u;
label_23df98:
    // 0x23df98: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23df98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23df9c:
    // 0x23df9c: 0x1000000a  b           . + 4 + (0xA << 2)
label_23dfa0:
    if (ctx->pc == 0x23DFA0u) {
        ctx->pc = 0x23DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF9Cu;
        // 0x23dfa0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFA4u;
        goto label_23dfa4;
    }
    ctx->pc = 0x23DF9Cu;
    {
        const bool branch_taken_0x23df9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF9Cu;
        // 0x23dfa0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df9c) {
            ctx->pc = 0x23DFC8u;
            goto label_23dfc8;
        }
    }
    ctx->pc = 0x23DFA4u;
label_23dfa4:
    // 0x23dfa4: 0x0  nop
    ctx->pc = 0x23dfa4u;
    // NOP
label_23dfa8:
    // 0x23dfa8: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23dfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
label_23dfac:
    // 0x23dfac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23dfb0:
    if (ctx->pc == 0x23DFB0u) {
        ctx->pc = 0x23DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFACu;
        // 0x23dfb0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFB4u;
        goto label_23dfb4;
    }
    ctx->pc = 0x23DFACu;
    {
        const bool branch_taken_0x23dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFACu;
        // 0x23dfb0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfac) {
            ctx->pc = 0x23DFC0u;
            goto label_23dfc0;
        }
    }
    ctx->pc = 0x23DFB4u;
label_23dfb4:
    // 0x23dfb4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dfb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23dfb8:
    // 0x23dfb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_23dfbc:
    if (ctx->pc == 0x23DFBCu) {
        ctx->pc = 0x23DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFB8u;
        // 0x23dfbc: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFC0u;
        goto label_23dfc0;
    }
    ctx->pc = 0x23DFB8u;
    {
        const bool branch_taken_0x23dfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFB8u;
        // 0x23dfbc: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfb8) {
            ctx->pc = 0x23DFC8u;
            goto label_23dfc8;
        }
    }
    ctx->pc = 0x23DFC0u;
label_23dfc0:
    // 0x23dfc0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dfc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23dfc4:
    // 0x23dfc4: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x23dfc4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23dfc8:
    // 0x23dfc8: 0x10000050  b           . + 4 + (0x50 << 2)
label_23dfcc:
    if (ctx->pc == 0x23DFCCu) {
        ctx->pc = 0x23DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFC8u;
        // 0x23dfcc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFD0u;
        goto label_23dfd0;
    }
    ctx->pc = 0x23DFC8u;
    {
        const bool branch_taken_0x23dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFC8u;
        // 0x23dfcc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfc8) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23DFD0u;
label_23dfd0:
    // 0x23dfd0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23dfd4:
    // 0x23dfd4: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x23dfd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23dfd8:
    // 0x23dfd8: 0x2442e500  addiu       $v0, $v0, -0x1B00
    ctx->pc = 0x23dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960384));
label_23dfdc:
    // 0x23dfdc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x23dfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23dfe0:
    // 0x23dfe0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23dfe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23dfe4:
    // 0x23dfe4: 0x36f70002  ori         $s7, $s7, 0x2
    ctx->pc = 0x23dfe4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
label_23dfe8:
    // 0x23dfe8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x23dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_23dfec:
    // 0x23dfec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23dff0:
    // 0x23dff0: 0x10000046  b           . + 4 + (0x46 << 2)
label_23dff4:
    if (ctx->pc == 0x23DFF4u) {
        ctx->pc = 0x23DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFF0u;
        // 0x23dff4: 0x24110078  addiu       $s1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFF8u;
        goto label_23dff8;
    }
    ctx->pc = 0x23DFF0u;
    {
        const bool branch_taken_0x23dff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFF0u;
        // 0x23dff4: 0x24110078  addiu       $s1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dff0) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23DFF8u;
label_23dff8:
    // 0x23dff8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x23dff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23dffc:
    // 0x23dffc: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x23dffcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e000:
    // 0x23e000: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_23e004:
    if (ctx->pc == 0x23E004u) {
        ctx->pc = 0x23E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E000u;
        // 0x23e004: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E008u;
        goto label_23e008;
    }
    ctx->pc = 0x23E000u;
    {
        const bool branch_taken_0x23e000 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E000u;
        // 0x23e004: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e000) {
            ctx->pc = 0x23E010u;
            goto label_23e010;
        }
    }
    ctx->pc = 0x23E008u;
label_23e008:
    // 0x23e008: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23e00c:
    // 0x23e00c: 0x2455e518  addiu       $s5, $v0, -0x1AE8
    ctx->pc = 0x23e00cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960408));
label_23e010:
    // 0x23e010: 0x680000d  bltz        $s4, . + 4 + (0xD << 2)
label_23e014:
    if (ctx->pc == 0x23E014u) {
        ctx->pc = 0x23E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E010u;
        // 0x23e014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E018u;
        goto label_23e018;
    }
    ctx->pc = 0x23E010u;
    {
        const bool branch_taken_0x23e010 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E010u;
        // 0x23e014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e010) {
            ctx->pc = 0x23E048u;
            goto label_23e048;
        }
    }
    ctx->pc = 0x23E018u;
label_23e018:
    // 0x23e018: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23e01c:
    // 0x23e01c: 0xc08e8e0  jal         func_23A380
label_23e020:
    if (ctx->pc == 0x23E020u) {
        ctx->pc = 0x23E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E01Cu;
        // 0x23e020: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E024u;
        goto label_23e024;
    }
    ctx->pc = 0x23E01Cu;
    SET_GPR_U32(ctx, 31, 0x23E024u);
    ctx->pc = 0x23E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E01Cu;
    // 0x23e020: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A380u;
    { ctx->pc = 0x23a380; return; }
    ctx->pc = 0x23E024u;
label_23e024:
    // 0x23e024: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
label_23e028:
    if (ctx->pc == 0x23E028u) {
        ctx->pc = 0x23E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E024u;
        // 0x23e028: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E02Cu;
        goto label_23e02c;
    }
    ctx->pc = 0x23E024u;
    {
        const bool branch_taken_0x23e024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E024u;
        // 0x23e028: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e024) {
            ctx->pc = 0x23E240u;
            goto label_23e240;
        }
    }
    ctx->pc = 0x23E02Cu;
label_23e02c:
    // 0x23e02c: 0x55f023  subu        $fp, $v0, $s5
    ctx->pc = 0x23e02cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_23e030:
    // 0x23e030: 0x29e102a  slt         $v0, $s4, $fp
    ctx->pc = 0x23e030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_23e034:
    // 0x23e034: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
label_23e038:
    if (ctx->pc == 0x23E038u) {
        ctx->pc = 0x23E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E034u;
        // 0x23e038: 0xa3a001d1  sb          $zero, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E03Cu;
        goto label_23e03c;
    }
    ctx->pc = 0x23E034u;
    {
        const bool branch_taken_0x23e034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e034) {
            ctx->pc = 0x23E038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E034u;
            // 0x23e038: 0xa3a001d1  sb          $zero, 0x1D1($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23E03Cu;
label_23e03c:
    // 0x23e03c: 0x10000080  b           . + 4 + (0x80 << 2)
label_23e040:
    if (ctx->pc == 0x23E040u) {
        ctx->pc = 0x23E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E03Cu;
        // 0x23e040: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E044u;
        goto label_23e044;
    }
    ctx->pc = 0x23E03Cu;
    {
        const bool branch_taken_0x23e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E03Cu;
        // 0x23e040: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e03c) {
            ctx->pc = 0x23E240u;
            goto label_23e240;
        }
    }
    ctx->pc = 0x23E044u;
label_23e044:
    // 0x23e044: 0x0  nop
    ctx->pc = 0x23e044u;
    // NOP
label_23e048:
    // 0x23e048: 0xc08f3d6  jal         func_23CF58
label_23e04c:
    if (ctx->pc == 0x23E04Cu) {
        ctx->pc = 0x23E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E048u;
        // 0x23e04c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E050u;
        goto label_23e050;
    }
    ctx->pc = 0x23E048u;
    SET_GPR_U32(ctx, 31, 0x23E050u);
    ctx->pc = 0x23E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E048u;
    // 0x23e04c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x23E050u;
label_23e050:
    // 0x23e050: 0x1000007b  b           . + 4 + (0x7B << 2)
label_23e054:
    if (ctx->pc == 0x23E054u) {
        ctx->pc = 0x23E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E050u;
        // 0x23e054: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E058u;
        goto label_23e058;
    }
    ctx->pc = 0x23E050u;
    {
        const bool branch_taken_0x23e050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E050u;
        // 0x23e054: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e050) {
            ctx->pc = 0x23E240u;
            goto label_23e240;
        }
    }
    ctx->pc = 0x23E058u;
label_23e058:
    // 0x23e058: 0x36f70010  ori         $s7, $s7, 0x10
    ctx->pc = 0x23e058u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)16);
label_23e05c:
    // 0x23e05c: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23e05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
label_23e060:
    // 0x23e060: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23e064:
    if (ctx->pc == 0x23E064u) {
        ctx->pc = 0x23E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E060u;
        // 0x23e064: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E068u;
        goto label_23e068;
    }
    ctx->pc = 0x23E060u;
    {
        const bool branch_taken_0x23e060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E060u;
        // 0x23e064: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e060) {
            ctx->pc = 0x23E078u;
            goto label_23e078;
        }
    }
    ctx->pc = 0x23E068u;
label_23e068:
    // 0x23e068: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e068u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e06c:
    // 0x23e06c: 0x1000000a  b           . + 4 + (0xA << 2)
label_23e070:
    if (ctx->pc == 0x23E070u) {
        ctx->pc = 0x23E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E06Cu;
        // 0x23e070: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E074u;
        goto label_23e074;
    }
    ctx->pc = 0x23E06Cu;
    {
        const bool branch_taken_0x23e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E06Cu;
        // 0x23e070: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e06c) {
            ctx->pc = 0x23E098u;
            goto label_23e098;
        }
    }
    ctx->pc = 0x23E074u;
label_23e074:
    // 0x23e074: 0x0  nop
    ctx->pc = 0x23e074u;
    // NOP
label_23e078:
    // 0x23e078: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23e078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
label_23e07c:
    // 0x23e07c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23e080:
    if (ctx->pc == 0x23E080u) {
        ctx->pc = 0x23E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E07Cu;
        // 0x23e080: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E084u;
        goto label_23e084;
    }
    ctx->pc = 0x23E07Cu;
    {
        const bool branch_taken_0x23e07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E07Cu;
        // 0x23e080: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e07c) {
            ctx->pc = 0x23E090u;
            goto label_23e090;
        }
    }
    ctx->pc = 0x23E084u;
label_23e084:
    // 0x23e084: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e088:
    // 0x23e088: 0x10000003  b           . + 4 + (0x3 << 2)
label_23e08c:
    if (ctx->pc == 0x23E08Cu) {
        ctx->pc = 0x23E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E088u;
        // 0x23e08c: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E090u;
        goto label_23e090;
    }
    ctx->pc = 0x23E088u;
    {
        const bool branch_taken_0x23e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E088u;
        // 0x23e08c: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e088) {
            ctx->pc = 0x23E098u;
            goto label_23e098;
        }
    }
    ctx->pc = 0x23E090u;
label_23e090:
    // 0x23e090: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e094:
    // 0x23e094: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x23e094u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e098:
    // 0x23e098: 0x1000001c  b           . + 4 + (0x1C << 2)
label_23e09c:
    if (ctx->pc == 0x23E09Cu) {
        ctx->pc = 0x23E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E098u;
        // 0x23e09c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0A0u;
        goto label_23e0a0;
    }
    ctx->pc = 0x23E098u;
    {
        const bool branch_taken_0x23e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E098u;
        // 0x23e09c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e098) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23E0A0u;
label_23e0a0:
    // 0x23e0a0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23e0a4:
    // 0x23e0a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_23e0a8:
    if (ctx->pc == 0x23E0A8u) {
        ctx->pc = 0x23E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0A4u;
        // 0x23e0a8: 0x2442e520  addiu       $v0, $v0, -0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0ACu;
        goto label_23e0ac;
    }
    ctx->pc = 0x23E0A4u;
    {
        const bool branch_taken_0x23e0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0A4u;
        // 0x23e0a8: 0x2442e520  addiu       $v0, $v0, -0x1AE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0a4) {
            ctx->pc = 0x23E0B8u;
            goto label_23e0b8;
        }
    }
    ctx->pc = 0x23E0ACu;
label_23e0ac:
    // 0x23e0ac: 0x0  nop
    ctx->pc = 0x23e0acu;
    // NOP
label_23e0b0:
    // 0x23e0b0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23e0b4:
    // 0x23e0b4: 0x2442e500  addiu       $v0, $v0, -0x1B00
    ctx->pc = 0x23e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960384));
label_23e0b8:
    // 0x23e0b8: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x23e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_23e0bc:
    // 0x23e0bc: 0x32e20010  andi        $v0, $s7, 0x10
    ctx->pc = 0x23e0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16);
label_23e0c0:
    // 0x23e0c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23e0c4:
    if (ctx->pc == 0x23E0C4u) {
        ctx->pc = 0x23E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0C0u;
        // 0x23e0c4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0C8u;
        goto label_23e0c8;
    }
    ctx->pc = 0x23E0C0u;
    {
        const bool branch_taken_0x23e0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0C0u;
        // 0x23e0c4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0c0) {
            ctx->pc = 0x23E0D8u;
            goto label_23e0d8;
        }
    }
    ctx->pc = 0x23E0C8u;
label_23e0c8:
    // 0x23e0c8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e0cc:
    // 0x23e0cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_23e0d0:
    if (ctx->pc == 0x23E0D0u) {
        ctx->pc = 0x23E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0CCu;
        // 0x23e0d0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0D4u;
        goto label_23e0d4;
    }
    ctx->pc = 0x23E0CCu;
    {
        const bool branch_taken_0x23e0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0CCu;
        // 0x23e0d0: 0xdc500000  ld          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0cc) {
            ctx->pc = 0x23E0F8u;
            goto label_23e0f8;
        }
    }
    ctx->pc = 0x23E0D4u;
label_23e0d4:
    // 0x23e0d4: 0x0  nop
    ctx->pc = 0x23e0d4u;
    // NOP
label_23e0d8:
    // 0x23e0d8: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x23e0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
label_23e0dc:
    // 0x23e0dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23e0e0:
    if (ctx->pc == 0x23E0E0u) {
        ctx->pc = 0x23E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0DCu;
        // 0x23e0e0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0E4u;
        goto label_23e0e4;
    }
    ctx->pc = 0x23E0DCu;
    {
        const bool branch_taken_0x23e0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0DCu;
        // 0x23e0e0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0dc) {
            ctx->pc = 0x23E0F0u;
            goto label_23e0f0;
        }
    }
    ctx->pc = 0x23E0E4u;
label_23e0e4:
    // 0x23e0e4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e0e8:
    // 0x23e0e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_23e0ec:
    if (ctx->pc == 0x23E0ECu) {
        ctx->pc = 0x23E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0E8u;
        // 0x23e0ec: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E0F0u;
        goto label_23e0f0;
    }
    ctx->pc = 0x23E0E8u;
    {
        const bool branch_taken_0x23e0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0E8u;
        // 0x23e0ec: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0e8) {
            ctx->pc = 0x23E0F8u;
            goto label_23e0f8;
        }
    }
    ctx->pc = 0x23E0F0u;
label_23e0f0:
    // 0x23e0f0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x23e0f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_23e0f4:
    // 0x23e0f4: 0x9c500000  lwu         $s0, 0x0($v0)
    ctx->pc = 0x23e0f4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e0f8:
    // 0x23e0f8: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_23e0fc:
    // 0x23e0fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23e100:
    if (ctx->pc == 0x23E100u) {
        ctx->pc = 0x23E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0FCu;
        // 0x23e100: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E104u;
        goto label_23e104;
    }
    ctx->pc = 0x23E0FCu;
    {
        const bool branch_taken_0x23e0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0FCu;
        // 0x23e100: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0fc) {
            ctx->pc = 0x23E10Cu;
            goto label_23e10c;
        }
    }
    ctx->pc = 0x23E104u;
label_23e104:
    // 0x23e104: 0x36e20002  ori         $v0, $s7, 0x2
    ctx->pc = 0x23e104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
label_23e108:
    // 0x23e108: 0x50b80b  movn        $s7, $v0, $s0
    ctx->pc = 0x23e108u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_23e10c:
    // 0x23e10c: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x23e10cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_23e110:
    // 0x23e110: 0x6800003  bltz        $s4, . + 4 + (0x3 << 2)
label_23e114:
    if (ctx->pc == 0x23E114u) {
        ctx->pc = 0x23E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E110u;
        // 0x23e114: 0xafb40204  sw          $s4, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E118u;
        goto label_23e118;
    }
    ctx->pc = 0x23E110u;
    {
        const bool branch_taken_0x23e110 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E110u;
        // 0x23e114: 0xafb40204  sw          $s4, 0x204($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e110) {
            ctx->pc = 0x23E120u;
            goto label_23e120;
        }
    }
    ctx->pc = 0x23E118u;
label_23e118:
    // 0x23e118: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x23e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_23e11c:
    // 0x23e11c: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x23e11cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_23e120:
    // 0x23e120: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_23e124:
    if (ctx->pc == 0x23E124u) {
        ctx->pc = 0x23E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E120u;
        // 0x23e124: 0x27b501bc  addiu       $s5, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E128u;
        goto label_23e128;
    }
    ctx->pc = 0x23E120u;
    {
        const bool branch_taken_0x23e120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E120u;
        // 0x23e124: 0x27b501bc  addiu       $s5, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e120) {
            ctx->pc = 0x23E134u;
            goto label_23e134;
        }
    }
    ctx->pc = 0x23E128u;
label_23e128:
    // 0x23e128: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x23e128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_23e12c:
    // 0x23e12c: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
label_23e130:
    if (ctx->pc == 0x23E130u) {
        ctx->pc = 0x23E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E12Cu;
        // 0x23e130: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E134u;
        goto label_23e134;
    }
    ctx->pc = 0x23E12Cu;
    {
        const bool branch_taken_0x23e12c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E12Cu;
        // 0x23e130: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e12c) {
            ctx->pc = 0x23E224u;
            goto label_23e224;
        }
    }
    ctx->pc = 0x23E134u;
label_23e134:
    // 0x23e134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e138:
    // 0x23e138: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_23e13c:
    if (ctx->pc == 0x23E13Cu) {
        ctx->pc = 0x23E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E138u;
        // 0x23e13c: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E140u;
        goto label_23e140;
    }
    ctx->pc = 0x23E138u;
    {
        const bool branch_taken_0x23e138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E138u;
        // 0x23e13c: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e138) {
            ctx->pc = 0x23E1D4u;
            goto label_23e1d4;
        }
    }
    ctx->pc = 0x23E140u;
label_23e140:
    // 0x23e140: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_23e144:
    if (ctx->pc == 0x23E144u) {
        ctx->pc = 0x23E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E140u;
        // 0x23e144: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E148u;
        goto label_23e148;
    }
    ctx->pc = 0x23E140u;
    {
        const bool branch_taken_0x23e140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E140u;
        // 0x23e144: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e140) {
            ctx->pc = 0x23E168u;
            goto label_23e168;
        }
    }
    ctx->pc = 0x23E148u;
label_23e148:
    // 0x23e148: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23e14c:
    // 0x23e14c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_23e150:
    if (ctx->pc == 0x23E150u) {
        ctx->pc = 0x23E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E14Cu;
        // 0x23e150: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E154u;
        goto label_23e154;
    }
    ctx->pc = 0x23E14Cu;
    {
        const bool branch_taken_0x23e14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E14Cu;
        // 0x23e150: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e14c) {
            ctx->pc = 0x23E1F0u;
            goto label_23e1f0;
        }
    }
    ctx->pc = 0x23E154u;
label_23e154:
    // 0x23e154: 0x2455e538  addiu       $s5, $v0, -0x1AC8
    ctx->pc = 0x23e154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960440));
label_23e158:
    // 0x23e158: 0xc08f3d6  jal         func_23CF58
label_23e15c:
    if (ctx->pc == 0x23E15Cu) {
        ctx->pc = 0x23E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E158u;
        // 0x23e15c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E160u;
        goto label_23e160;
    }
    ctx->pc = 0x23E158u;
    SET_GPR_U32(ctx, 31, 0x23E160u);
    ctx->pc = 0x23E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E158u;
    // 0x23e15c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x23E160u;
label_23e160:
    // 0x23e160: 0x10000038  b           . + 4 + (0x38 << 2)
label_23e164:
    if (ctx->pc == 0x23E164u) {
        ctx->pc = 0x23E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E160u;
        // 0x23e164: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E168u;
        goto label_23e168;
    }
    ctx->pc = 0x23E160u;
    {
        const bool branch_taken_0x23e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E160u;
        // 0x23e164: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e160) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23E168u;
label_23e168:
    // 0x23e168: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x23e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_23e16c:
    // 0x23e16c: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x23e16cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_23e170:
    // 0x23e170: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x23e170u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_23e174:
    // 0x23e174: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23e178:
    // 0x23e178: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23e178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23e17c:
    // 0x23e17c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_23e180:
    if (ctx->pc == 0x23E180u) {
        ctx->pc = 0x23E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E17Cu;
        // 0x23e180: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E184u;
        goto label_23e184;
    }
    ctx->pc = 0x23E17Cu;
    {
        const bool branch_taken_0x23e17c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E17Cu;
        // 0x23e180: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e17c) {
            ctx->pc = 0x23E168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e168;
        }
    }
    ctx->pc = 0x23E184u;
label_23e184:
    // 0x23e184: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23e184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_23e188:
    // 0x23e188: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_23e18c:
    if (ctx->pc == 0x23E18Cu) {
        ctx->pc = 0x23E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E188u;
        // 0x23e18c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E190u;
        goto label_23e190;
    }
    ctx->pc = 0x23E188u;
    {
        const bool branch_taken_0x23e188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E188u;
        // 0x23e18c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e188) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E190u;
label_23e190:
    // 0x23e190: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
label_23e194:
    if (ctx->pc == 0x23E194u) {
        ctx->pc = 0x23E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E190u;
        // 0x23e194: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E198u;
        goto label_23e198;
    }
    ctx->pc = 0x23E190u;
    {
        const bool branch_taken_0x23e190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23e190) {
            ctx->pc = 0x23E194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E190u;
            // 0x23e194: 0x3b51023  subu        $v0, $sp, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E224u;
            goto label_23e224;
        }
    }
    ctx->pc = 0x23E198u;
label_23e198:
    // 0x23e198: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e198u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23e19c:
    // 0x23e19c: 0x10000020  b           . + 4 + (0x20 << 2)
label_23e1a0:
    if (ctx->pc == 0x23E1A0u) {
        ctx->pc = 0x23E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E19Cu;
        // 0x23e1a0: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1A4u;
        goto label_23e1a4;
    }
    ctx->pc = 0x23E19Cu;
    {
        const bool branch_taken_0x23e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E19Cu;
        // 0x23e1a0: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e19c) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E1A4u;
label_23e1a4:
    // 0x23e1a4: 0x0  nop
    ctx->pc = 0x23e1a4u;
    // NOP
label_23e1a8:
    // 0x23e1a8: 0xc06d9fe  jal         func_1B67F8
label_23e1ac:
    if (ctx->pc == 0x23E1ACu) {
        ctx->pc = 0x23E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1A8u;
        // 0x23e1ac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1B0u;
        goto label_23e1b0;
    }
    ctx->pc = 0x23E1A8u;
    SET_GPR_U32(ctx, 31, 0x23E1B0u);
    ctx->pc = 0x23E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1A8u;
    // 0x23e1ac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x23E1B0u;
label_23e1b0:
    // 0x23e1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e1b4:
    // 0x23e1b4: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x23e1b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_23e1b8:
    // 0x23e1b8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e1b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23e1bc:
    // 0x23e1bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23e1c0:
    // 0x23e1c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23e1c4:
    // 0x23e1c4: 0xc06d89e  jal         func_1B6278
label_23e1c8:
    if (ctx->pc == 0x23E1C8u) {
        ctx->pc = 0x23E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1C4u;
        // 0x23e1c8: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1CCu;
        goto label_23e1cc;
    }
    ctx->pc = 0x23E1C4u;
    SET_GPR_U32(ctx, 31, 0x23E1CCu);
    ctx->pc = 0x23E1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1C4u;
    // 0x23e1c8: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x23E1CCu;
label_23e1cc:
    // 0x23e1cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23e1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e1d0:
    // 0x23e1d0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x23e1d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_23e1d4:
    // 0x23e1d4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
label_23e1d8:
    if (ctx->pc == 0x23E1D8u) {
        ctx->pc = 0x23E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1D4u;
        // 0x23e1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1DCu;
        goto label_23e1dc;
    }
    ctx->pc = 0x23E1D4u;
    {
        const bool branch_taken_0x23e1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1D4u;
        // 0x23e1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1d4) {
            ctx->pc = 0x23E1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e1a8;
        }
    }
    ctx->pc = 0x23E1DCu;
label_23e1dc:
    // 0x23e1dc: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x23e1dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
label_23e1e0:
    // 0x23e1e0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e1e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23e1e4:
    // 0x23e1e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23e1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23e1e8:
    // 0x23e1e8: 0x1000000d  b           . + 4 + (0xD << 2)
label_23e1ec:
    if (ctx->pc == 0x23E1ECu) {
        ctx->pc = 0x23E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1E8u;
        // 0x23e1ec: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E1F0u;
        goto label_23e1f0;
    }
    ctx->pc = 0x23E1E8u;
    {
        const bool branch_taken_0x23e1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E1E8u;
        // 0x23e1ec: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e1e8) {
            ctx->pc = 0x23E220u;
            goto label_23e220;
        }
    }
    ctx->pc = 0x23E1F0u;
label_23e1f0:
    // 0x23e1f0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x23e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_23e1f4:
    // 0x23e1f4: 0x0  nop
    ctx->pc = 0x23e1f4u;
    // NOP
label_23e1f8:
    // 0x23e1f8: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x23e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_23e1fc:
    // 0x23e1fc: 0x2041024  and         $v0, $s0, $a0
    ctx->pc = 0x23e1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_23e200:
    // 0x23e200: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23e204:
    // 0x23e204: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23e204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23e208:
    // 0x23e208: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23e208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23e20c:
    // 0x23e20c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23e210:
    // 0x23e210: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x23e210u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_23e214:
    // 0x23e214: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23e214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_23e218:
    // 0x23e218: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_23e21c:
    if (ctx->pc == 0x23E21Cu) {
        ctx->pc = 0x23E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E218u;
        // 0x23e21c: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E220u;
        goto label_23e220;
    }
    ctx->pc = 0x23E218u;
    {
        const bool branch_taken_0x23e218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E218u;
        // 0x23e21c: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e218) {
            ctx->pc = 0x23E1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e1f8;
        }
    }
    ctx->pc = 0x23E220u;
label_23e220:
    // 0x23e220: 0x3b51023  subu        $v0, $sp, $s5
    ctx->pc = 0x23e220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 21)));
label_23e224:
    // 0x23e224: 0x10000007  b           . + 4 + (0x7 << 2)
label_23e228:
    if (ctx->pc == 0x23E228u) {
        ctx->pc = 0x23E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E224u;
        // 0x23e228: 0x245e01bc  addiu       $fp, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E22Cu;
        goto label_23e22c;
    }
    ctx->pc = 0x23E224u;
    {
        const bool branch_taken_0x23e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E224u;
        // 0x23e228: 0x245e01bc  addiu       $fp, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e224) {
            ctx->pc = 0x23E244u;
            goto label_23e244;
        }
    }
    ctx->pc = 0x23E22Cu;
label_23e22c:
    // 0x23e22c: 0x0  nop
    ctx->pc = 0x23e22cu;
    // NOP
label_23e230:
    // 0x23e230: 0x1220035f  beqz        $s1, . + 4 + (0x35F << 2)
label_23e234:
    if (ctx->pc == 0x23E234u) {
        ctx->pc = 0x23E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E230u;
        // 0x23e234: 0x27b50060  addiu       $s5, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E238u;
        goto label_23e238;
    }
    ctx->pc = 0x23E230u;
    {
        const bool branch_taken_0x23e230 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E230u;
        // 0x23e234: 0x27b50060  addiu       $s5, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e230) {
            ctx->pc = 0x23EFB0u;
            { ctx->pc = 0x23efb0; return; }
        }
    }
    ctx->pc = 0x23E238u;
label_23e238:
    // 0x23e238: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x23e238u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23e23c:
    // 0x23e23c: 0xa2b10000  sb          $s1, 0x0($s5)
    ctx->pc = 0x23e23cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 17));
label_23e240:
    // 0x23e240: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x23e240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_23e244:
    // 0x23e244: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x23e244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_23e248:
    // 0x23e248: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x23e248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23e24c:
    // 0x23e24c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x23e24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23e250:
    // 0x23e250: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_23e254:
    // 0x23e254: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x23e254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23e258:
    // 0x23e258: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x23e258u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_23e25c:
    // 0x23e25c: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x23e25cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    ctx->pc = 0x23e260u;
    return;
}
