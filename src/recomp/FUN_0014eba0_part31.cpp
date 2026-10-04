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


void FUN_0014eba0_part31(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15d600u: goto label_15d600;
        case 0x15d604u: goto label_15d604;
        case 0x15d608u: goto label_15d608;
        case 0x15d60cu: goto label_15d60c;
        case 0x15d610u: goto label_15d610;
        case 0x15d614u: goto label_15d614;
        case 0x15d618u: goto label_15d618;
        case 0x15d61cu: goto label_15d61c;
        case 0x15d620u: goto label_15d620;
        case 0x15d624u: goto label_15d624;
        case 0x15d628u: goto label_15d628;
        case 0x15d62cu: goto label_15d62c;
        case 0x15d630u: goto label_15d630;
        case 0x15d634u: goto label_15d634;
        case 0x15d638u: goto label_15d638;
        case 0x15d63cu: goto label_15d63c;
        case 0x15d640u: goto label_15d640;
        case 0x15d644u: goto label_15d644;
        case 0x15d648u: goto label_15d648;
        case 0x15d64cu: goto label_15d64c;
        case 0x15d650u: goto label_15d650;
        case 0x15d654u: goto label_15d654;
        case 0x15d658u: goto label_15d658;
        case 0x15d65cu: goto label_15d65c;
        case 0x15d660u: goto label_15d660;
        case 0x15d664u: goto label_15d664;
        case 0x15d668u: goto label_15d668;
        case 0x15d66cu: goto label_15d66c;
        case 0x15d670u: goto label_15d670;
        case 0x15d674u: goto label_15d674;
        case 0x15d678u: goto label_15d678;
        case 0x15d67cu: goto label_15d67c;
        case 0x15d680u: goto label_15d680;
        case 0x15d684u: goto label_15d684;
        case 0x15d688u: goto label_15d688;
        case 0x15d68cu: goto label_15d68c;
        case 0x15d690u: goto label_15d690;
        case 0x15d694u: goto label_15d694;
        case 0x15d698u: goto label_15d698;
        case 0x15d69cu: goto label_15d69c;
        case 0x15d6a0u: goto label_15d6a0;
        case 0x15d6a4u: goto label_15d6a4;
        case 0x15d6a8u: goto label_15d6a8;
        case 0x15d6acu: goto label_15d6ac;
        case 0x15d6b0u: goto label_15d6b0;
        case 0x15d6b4u: goto label_15d6b4;
        case 0x15d6b8u: goto label_15d6b8;
        case 0x15d6bcu: goto label_15d6bc;
        case 0x15d6c0u: goto label_15d6c0;
        case 0x15d6c4u: goto label_15d6c4;
        case 0x15d6c8u: goto label_15d6c8;
        case 0x15d6ccu: goto label_15d6cc;
        case 0x15d6d0u: goto label_15d6d0;
        case 0x15d6d4u: goto label_15d6d4;
        case 0x15d6d8u: goto label_15d6d8;
        case 0x15d6dcu: goto label_15d6dc;
        case 0x15d6e0u: goto label_15d6e0;
        case 0x15d6e4u: goto label_15d6e4;
        case 0x15d6e8u: goto label_15d6e8;
        case 0x15d6ecu: goto label_15d6ec;
        case 0x15d6f0u: goto label_15d6f0;
        case 0x15d6f4u: goto label_15d6f4;
        case 0x15d6f8u: goto label_15d6f8;
        case 0x15d6fcu: goto label_15d6fc;
        case 0x15d700u: goto label_15d700;
        case 0x15d704u: goto label_15d704;
        case 0x15d708u: goto label_15d708;
        case 0x15d70cu: goto label_15d70c;
        case 0x15d710u: goto label_15d710;
        case 0x15d714u: goto label_15d714;
        case 0x15d718u: goto label_15d718;
        case 0x15d71cu: goto label_15d71c;
        case 0x15d720u: goto label_15d720;
        case 0x15d724u: goto label_15d724;
        case 0x15d728u: goto label_15d728;
        case 0x15d72cu: goto label_15d72c;
        case 0x15d730u: goto label_15d730;
        case 0x15d734u: goto label_15d734;
        case 0x15d738u: goto label_15d738;
        case 0x15d73cu: goto label_15d73c;
        case 0x15d740u: goto label_15d740;
        case 0x15d744u: goto label_15d744;
        case 0x15d748u: goto label_15d748;
        case 0x15d74cu: goto label_15d74c;
        case 0x15d750u: goto label_15d750;
        case 0x15d754u: goto label_15d754;
        case 0x15d758u: goto label_15d758;
        case 0x15d75cu: goto label_15d75c;
        case 0x15d760u: goto label_15d760;
        case 0x15d764u: goto label_15d764;
        case 0x15d768u: goto label_15d768;
        case 0x15d76cu: goto label_15d76c;
        case 0x15d770u: goto label_15d770;
        case 0x15d774u: goto label_15d774;
        case 0x15d778u: goto label_15d778;
        case 0x15d77cu: goto label_15d77c;
        case 0x15d780u: goto label_15d780;
        case 0x15d784u: goto label_15d784;
        case 0x15d788u: goto label_15d788;
        case 0x15d78cu: goto label_15d78c;
        case 0x15d790u: goto label_15d790;
        case 0x15d794u: goto label_15d794;
        case 0x15d798u: goto label_15d798;
        case 0x15d79cu: goto label_15d79c;
        case 0x15d7a0u: goto label_15d7a0;
        case 0x15d7a4u: goto label_15d7a4;
        case 0x15d7a8u: goto label_15d7a8;
        case 0x15d7acu: goto label_15d7ac;
        case 0x15d7b0u: goto label_15d7b0;
        case 0x15d7b4u: goto label_15d7b4;
        case 0x15d7b8u: goto label_15d7b8;
        case 0x15d7bcu: goto label_15d7bc;
        case 0x15d7c0u: goto label_15d7c0;
        case 0x15d7c4u: goto label_15d7c4;
        case 0x15d7c8u: goto label_15d7c8;
        case 0x15d7ccu: goto label_15d7cc;
        case 0x15d7d0u: goto label_15d7d0;
        case 0x15d7d4u: goto label_15d7d4;
        case 0x15d7d8u: goto label_15d7d8;
        case 0x15d7dcu: goto label_15d7dc;
        case 0x15d7e0u: goto label_15d7e0;
        case 0x15d7e4u: goto label_15d7e4;
        case 0x15d7e8u: goto label_15d7e8;
        case 0x15d7ecu: goto label_15d7ec;
        case 0x15d7f0u: goto label_15d7f0;
        case 0x15d7f4u: goto label_15d7f4;
        case 0x15d7f8u: goto label_15d7f8;
        case 0x15d7fcu: goto label_15d7fc;
        case 0x15d800u: goto label_15d800;
        case 0x15d804u: goto label_15d804;
        case 0x15d808u: goto label_15d808;
        case 0x15d80cu: goto label_15d80c;
        case 0x15d810u: goto label_15d810;
        case 0x15d814u: goto label_15d814;
        case 0x15d818u: goto label_15d818;
        case 0x15d81cu: goto label_15d81c;
        case 0x15d820u: goto label_15d820;
        case 0x15d824u: goto label_15d824;
        case 0x15d828u: goto label_15d828;
        case 0x15d82cu: goto label_15d82c;
        case 0x15d830u: goto label_15d830;
        case 0x15d834u: goto label_15d834;
        case 0x15d838u: goto label_15d838;
        case 0x15d83cu: goto label_15d83c;
        case 0x15d840u: goto label_15d840;
        case 0x15d844u: goto label_15d844;
        case 0x15d848u: goto label_15d848;
        case 0x15d84cu: goto label_15d84c;
        case 0x15d850u: goto label_15d850;
        case 0x15d854u: goto label_15d854;
        case 0x15d858u: goto label_15d858;
        case 0x15d85cu: goto label_15d85c;
        case 0x15d860u: goto label_15d860;
        case 0x15d864u: goto label_15d864;
        case 0x15d868u: goto label_15d868;
        case 0x15d86cu: goto label_15d86c;
        case 0x15d870u: goto label_15d870;
        case 0x15d874u: goto label_15d874;
        case 0x15d878u: goto label_15d878;
        case 0x15d87cu: goto label_15d87c;
        case 0x15d880u: goto label_15d880;
        case 0x15d884u: goto label_15d884;
        case 0x15d888u: goto label_15d888;
        case 0x15d88cu: goto label_15d88c;
        case 0x15d890u: goto label_15d890;
        case 0x15d894u: goto label_15d894;
        case 0x15d898u: goto label_15d898;
        case 0x15d89cu: goto label_15d89c;
        case 0x15d8a0u: goto label_15d8a0;
        case 0x15d8a4u: goto label_15d8a4;
        case 0x15d8a8u: goto label_15d8a8;
        case 0x15d8acu: goto label_15d8ac;
        case 0x15d8b0u: goto label_15d8b0;
        case 0x15d8b4u: goto label_15d8b4;
        case 0x15d8b8u: goto label_15d8b8;
        case 0x15d8bcu: goto label_15d8bc;
        case 0x15d8c0u: goto label_15d8c0;
        case 0x15d8c4u: goto label_15d8c4;
        case 0x15d8c8u: goto label_15d8c8;
        case 0x15d8ccu: goto label_15d8cc;
        case 0x15d8d0u: goto label_15d8d0;
        case 0x15d8d4u: goto label_15d8d4;
        case 0x15d8d8u: goto label_15d8d8;
        case 0x15d8dcu: goto label_15d8dc;
        case 0x15d8e0u: goto label_15d8e0;
        case 0x15d8e4u: goto label_15d8e4;
        case 0x15d8e8u: goto label_15d8e8;
        case 0x15d8ecu: goto label_15d8ec;
        case 0x15d8f0u: goto label_15d8f0;
        case 0x15d8f4u: goto label_15d8f4;
        case 0x15d8f8u: goto label_15d8f8;
        case 0x15d8fcu: goto label_15d8fc;
        case 0x15d900u: goto label_15d900;
        case 0x15d904u: goto label_15d904;
        case 0x15d908u: goto label_15d908;
        case 0x15d90cu: goto label_15d90c;
        case 0x15d910u: goto label_15d910;
        case 0x15d914u: goto label_15d914;
        case 0x15d918u: goto label_15d918;
        case 0x15d91cu: goto label_15d91c;
        case 0x15d920u: goto label_15d920;
        case 0x15d924u: goto label_15d924;
        case 0x15d928u: goto label_15d928;
        case 0x15d92cu: goto label_15d92c;
        case 0x15d930u: goto label_15d930;
        case 0x15d934u: goto label_15d934;
        case 0x15d938u: goto label_15d938;
        case 0x15d93cu: goto label_15d93c;
        case 0x15d940u: goto label_15d940;
        case 0x15d944u: goto label_15d944;
        case 0x15d948u: goto label_15d948;
        case 0x15d94cu: goto label_15d94c;
        case 0x15d950u: goto label_15d950;
        case 0x15d954u: goto label_15d954;
        case 0x15d958u: goto label_15d958;
        case 0x15d95cu: goto label_15d95c;
        case 0x15d960u: goto label_15d960;
        case 0x15d964u: goto label_15d964;
        case 0x15d968u: goto label_15d968;
        case 0x15d96cu: goto label_15d96c;
        case 0x15d970u: goto label_15d970;
        case 0x15d974u: goto label_15d974;
        case 0x15d978u: goto label_15d978;
        case 0x15d97cu: goto label_15d97c;
        case 0x15d980u: goto label_15d980;
        case 0x15d984u: goto label_15d984;
        case 0x15d988u: goto label_15d988;
        case 0x15d98cu: goto label_15d98c;
        case 0x15d990u: goto label_15d990;
        case 0x15d994u: goto label_15d994;
        case 0x15d998u: goto label_15d998;
        case 0x15d99cu: goto label_15d99c;
        case 0x15d9a0u: goto label_15d9a0;
        case 0x15d9a4u: goto label_15d9a4;
        case 0x15d9a8u: goto label_15d9a8;
        case 0x15d9acu: goto label_15d9ac;
        case 0x15d9b0u: goto label_15d9b0;
        case 0x15d9b4u: goto label_15d9b4;
        case 0x15d9b8u: goto label_15d9b8;
        case 0x15d9bcu: goto label_15d9bc;
        case 0x15d9c0u: goto label_15d9c0;
        case 0x15d9c4u: goto label_15d9c4;
        case 0x15d9c8u: goto label_15d9c8;
        case 0x15d9ccu: goto label_15d9cc;
        case 0x15d9d0u: goto label_15d9d0;
        case 0x15d9d4u: goto label_15d9d4;
        case 0x15d9d8u: goto label_15d9d8;
        case 0x15d9dcu: goto label_15d9dc;
        case 0x15d9e0u: goto label_15d9e0;
        case 0x15d9e4u: goto label_15d9e4;
        case 0x15d9e8u: goto label_15d9e8;
        case 0x15d9ecu: goto label_15d9ec;
        case 0x15d9f0u: goto label_15d9f0;
        case 0x15d9f4u: goto label_15d9f4;
        case 0x15d9f8u: goto label_15d9f8;
        case 0x15d9fcu: goto label_15d9fc;
        case 0x15da00u: goto label_15da00;
        case 0x15da04u: goto label_15da04;
        case 0x15da08u: goto label_15da08;
        case 0x15da0cu: goto label_15da0c;
        case 0x15da10u: goto label_15da10;
        case 0x15da14u: goto label_15da14;
        case 0x15da18u: goto label_15da18;
        case 0x15da1cu: goto label_15da1c;
        case 0x15da20u: goto label_15da20;
        case 0x15da24u: goto label_15da24;
        case 0x15da28u: goto label_15da28;
        case 0x15da2cu: goto label_15da2c;
        case 0x15da30u: goto label_15da30;
        case 0x15da34u: goto label_15da34;
        case 0x15da38u: goto label_15da38;
        case 0x15da3cu: goto label_15da3c;
        case 0x15da40u: goto label_15da40;
        case 0x15da44u: goto label_15da44;
        case 0x15da48u: goto label_15da48;
        case 0x15da4cu: goto label_15da4c;
        case 0x15da50u: goto label_15da50;
        case 0x15da54u: goto label_15da54;
        case 0x15da58u: goto label_15da58;
        case 0x15da5cu: goto label_15da5c;
        case 0x15da60u: goto label_15da60;
        case 0x15da64u: goto label_15da64;
        case 0x15da68u: goto label_15da68;
        case 0x15da6cu: goto label_15da6c;
        case 0x15da70u: goto label_15da70;
        case 0x15da74u: goto label_15da74;
        case 0x15da78u: goto label_15da78;
        case 0x15da7cu: goto label_15da7c;
        case 0x15da80u: goto label_15da80;
        case 0x15da84u: goto label_15da84;
        case 0x15da88u: goto label_15da88;
        case 0x15da8cu: goto label_15da8c;
        case 0x15da90u: goto label_15da90;
        case 0x15da94u: goto label_15da94;
        case 0x15da98u: goto label_15da98;
        case 0x15da9cu: goto label_15da9c;
        case 0x15daa0u: goto label_15daa0;
        case 0x15daa4u: goto label_15daa4;
        case 0x15daa8u: goto label_15daa8;
        case 0x15daacu: goto label_15daac;
        case 0x15dab0u: goto label_15dab0;
        case 0x15dab4u: goto label_15dab4;
        case 0x15dab8u: goto label_15dab8;
        case 0x15dabcu: goto label_15dabc;
        case 0x15dac0u: goto label_15dac0;
        case 0x15dac4u: goto label_15dac4;
        case 0x15dac8u: goto label_15dac8;
        case 0x15daccu: goto label_15dacc;
        case 0x15dad0u: goto label_15dad0;
        case 0x15dad4u: goto label_15dad4;
        case 0x15dad8u: goto label_15dad8;
        case 0x15dadcu: goto label_15dadc;
        case 0x15dae0u: goto label_15dae0;
        case 0x15dae4u: goto label_15dae4;
        case 0x15dae8u: goto label_15dae8;
        case 0x15daecu: goto label_15daec;
        case 0x15daf0u: goto label_15daf0;
        case 0x15daf4u: goto label_15daf4;
        case 0x15daf8u: goto label_15daf8;
        case 0x15dafcu: goto label_15dafc;
        case 0x15db00u: goto label_15db00;
        case 0x15db04u: goto label_15db04;
        case 0x15db08u: goto label_15db08;
        case 0x15db0cu: goto label_15db0c;
        case 0x15db10u: goto label_15db10;
        case 0x15db14u: goto label_15db14;
        case 0x15db18u: goto label_15db18;
        case 0x15db1cu: goto label_15db1c;
        case 0x15db20u: goto label_15db20;
        case 0x15db24u: goto label_15db24;
        case 0x15db28u: goto label_15db28;
        case 0x15db2cu: goto label_15db2c;
        case 0x15db30u: goto label_15db30;
        case 0x15db34u: goto label_15db34;
        case 0x15db38u: goto label_15db38;
        case 0x15db3cu: goto label_15db3c;
        case 0x15db40u: goto label_15db40;
        case 0x15db44u: goto label_15db44;
        case 0x15db48u: goto label_15db48;
        case 0x15db4cu: goto label_15db4c;
        case 0x15db50u: goto label_15db50;
        case 0x15db54u: goto label_15db54;
        case 0x15db58u: goto label_15db58;
        case 0x15db5cu: goto label_15db5c;
        case 0x15db60u: goto label_15db60;
        case 0x15db64u: goto label_15db64;
        case 0x15db68u: goto label_15db68;
        case 0x15db6cu: goto label_15db6c;
        case 0x15db70u: goto label_15db70;
        case 0x15db74u: goto label_15db74;
        case 0x15db78u: goto label_15db78;
        case 0x15db7cu: goto label_15db7c;
        case 0x15db80u: goto label_15db80;
        case 0x15db84u: goto label_15db84;
        case 0x15db88u: goto label_15db88;
        case 0x15db8cu: goto label_15db8c;
        case 0x15db90u: goto label_15db90;
        case 0x15db94u: goto label_15db94;
        case 0x15db98u: goto label_15db98;
        case 0x15db9cu: goto label_15db9c;
        case 0x15dba0u: goto label_15dba0;
        case 0x15dba4u: goto label_15dba4;
        case 0x15dba8u: goto label_15dba8;
        case 0x15dbacu: goto label_15dbac;
        case 0x15dbb0u: goto label_15dbb0;
        case 0x15dbb4u: goto label_15dbb4;
        case 0x15dbb8u: goto label_15dbb8;
        case 0x15dbbcu: goto label_15dbbc;
        case 0x15dbc0u: goto label_15dbc0;
        case 0x15dbc4u: goto label_15dbc4;
        case 0x15dbc8u: goto label_15dbc8;
        case 0x15dbccu: goto label_15dbcc;
        case 0x15dbd0u: goto label_15dbd0;
        case 0x15dbd4u: goto label_15dbd4;
        case 0x15dbd8u: goto label_15dbd8;
        case 0x15dbdcu: goto label_15dbdc;
        case 0x15dbe0u: goto label_15dbe0;
        case 0x15dbe4u: goto label_15dbe4;
        case 0x15dbe8u: goto label_15dbe8;
        case 0x15dbecu: goto label_15dbec;
        case 0x15dbf0u: goto label_15dbf0;
        case 0x15dbf4u: goto label_15dbf4;
        case 0x15dbf8u: goto label_15dbf8;
        case 0x15dbfcu: goto label_15dbfc;
        case 0x15dc00u: goto label_15dc00;
        case 0x15dc04u: goto label_15dc04;
        case 0x15dc08u: goto label_15dc08;
        case 0x15dc0cu: goto label_15dc0c;
        case 0x15dc10u: goto label_15dc10;
        case 0x15dc14u: goto label_15dc14;
        case 0x15dc18u: goto label_15dc18;
        case 0x15dc1cu: goto label_15dc1c;
        case 0x15dc20u: goto label_15dc20;
        case 0x15dc24u: goto label_15dc24;
        case 0x15dc28u: goto label_15dc28;
        case 0x15dc2cu: goto label_15dc2c;
        case 0x15dc30u: goto label_15dc30;
        case 0x15dc34u: goto label_15dc34;
        case 0x15dc38u: goto label_15dc38;
        case 0x15dc3cu: goto label_15dc3c;
        case 0x15dc40u: goto label_15dc40;
        case 0x15dc44u: goto label_15dc44;
        case 0x15dc48u: goto label_15dc48;
        case 0x15dc4cu: goto label_15dc4c;
        case 0x15dc50u: goto label_15dc50;
        case 0x15dc54u: goto label_15dc54;
        case 0x15dc58u: goto label_15dc58;
        case 0x15dc5cu: goto label_15dc5c;
        case 0x15dc60u: goto label_15dc60;
        case 0x15dc64u: goto label_15dc64;
        case 0x15dc68u: goto label_15dc68;
        case 0x15dc6cu: goto label_15dc6c;
        case 0x15dc70u: goto label_15dc70;
        case 0x15dc74u: goto label_15dc74;
        case 0x15dc78u: goto label_15dc78;
        case 0x15dc7cu: goto label_15dc7c;
        case 0x15dc80u: goto label_15dc80;
        case 0x15dc84u: goto label_15dc84;
        case 0x15dc88u: goto label_15dc88;
        case 0x15dc8cu: goto label_15dc8c;
        case 0x15dc90u: goto label_15dc90;
        case 0x15dc94u: goto label_15dc94;
        case 0x15dc98u: goto label_15dc98;
        case 0x15dc9cu: goto label_15dc9c;
        case 0x15dca0u: goto label_15dca0;
        case 0x15dca4u: goto label_15dca4;
        case 0x15dca8u: goto label_15dca8;
        case 0x15dcacu: goto label_15dcac;
        case 0x15dcb0u: goto label_15dcb0;
        case 0x15dcb4u: goto label_15dcb4;
        case 0x15dcb8u: goto label_15dcb8;
        case 0x15dcbcu: goto label_15dcbc;
        case 0x15dcc0u: goto label_15dcc0;
        case 0x15dcc4u: goto label_15dcc4;
        case 0x15dcc8u: goto label_15dcc8;
        case 0x15dcccu: goto label_15dccc;
        case 0x15dcd0u: goto label_15dcd0;
        case 0x15dcd4u: goto label_15dcd4;
        case 0x15dcd8u: goto label_15dcd8;
        case 0x15dcdcu: goto label_15dcdc;
        case 0x15dce0u: goto label_15dce0;
        case 0x15dce4u: goto label_15dce4;
        case 0x15dce8u: goto label_15dce8;
        case 0x15dcecu: goto label_15dcec;
        case 0x15dcf0u: goto label_15dcf0;
        case 0x15dcf4u: goto label_15dcf4;
        case 0x15dcf8u: goto label_15dcf8;
        case 0x15dcfcu: goto label_15dcfc;
        case 0x15dd00u: goto label_15dd00;
        case 0x15dd04u: goto label_15dd04;
        case 0x15dd08u: goto label_15dd08;
        case 0x15dd0cu: goto label_15dd0c;
        case 0x15dd10u: goto label_15dd10;
        case 0x15dd14u: goto label_15dd14;
        case 0x15dd18u: goto label_15dd18;
        case 0x15dd1cu: goto label_15dd1c;
        case 0x15dd20u: goto label_15dd20;
        case 0x15dd24u: goto label_15dd24;
        case 0x15dd28u: goto label_15dd28;
        case 0x15dd2cu: goto label_15dd2c;
        case 0x15dd30u: goto label_15dd30;
        case 0x15dd34u: goto label_15dd34;
        case 0x15dd38u: goto label_15dd38;
        case 0x15dd3cu: goto label_15dd3c;
        case 0x15dd40u: goto label_15dd40;
        case 0x15dd44u: goto label_15dd44;
        case 0x15dd48u: goto label_15dd48;
        case 0x15dd4cu: goto label_15dd4c;
        case 0x15dd50u: goto label_15dd50;
        case 0x15dd54u: goto label_15dd54;
        case 0x15dd58u: goto label_15dd58;
        case 0x15dd5cu: goto label_15dd5c;
        case 0x15dd60u: goto label_15dd60;
        case 0x15dd64u: goto label_15dd64;
        case 0x15dd68u: goto label_15dd68;
        case 0x15dd6cu: goto label_15dd6c;
        case 0x15dd70u: goto label_15dd70;
        case 0x15dd74u: goto label_15dd74;
        case 0x15dd78u: goto label_15dd78;
        case 0x15dd7cu: goto label_15dd7c;
        case 0x15dd80u: goto label_15dd80;
        case 0x15dd84u: goto label_15dd84;
        case 0x15dd88u: goto label_15dd88;
        case 0x15dd8cu: goto label_15dd8c;
        case 0x15dd90u: goto label_15dd90;
        case 0x15dd94u: goto label_15dd94;
        case 0x15dd98u: goto label_15dd98;
        case 0x15dd9cu: goto label_15dd9c;
        case 0x15dda0u: goto label_15dda0;
        case 0x15dda4u: goto label_15dda4;
        case 0x15dda8u: goto label_15dda8;
        case 0x15ddacu: goto label_15ddac;
        case 0x15ddb0u: goto label_15ddb0;
        case 0x15ddb4u: goto label_15ddb4;
        case 0x15ddb8u: goto label_15ddb8;
        case 0x15ddbcu: goto label_15ddbc;
        case 0x15ddc0u: goto label_15ddc0;
        case 0x15ddc4u: goto label_15ddc4;
        case 0x15ddc8u: goto label_15ddc8;
        case 0x15ddccu: goto label_15ddcc;
        default: return;
    }

label_15d600:
    // 0x15d600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d604:
    // 0x15d604: 0x0  nop
    ctx->pc = 0x15d604u;
    // NOP
label_15d608:
    // 0x15d608: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15d608u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_15d60c:
    // 0x15d60c: 0x0  nop
    ctx->pc = 0x15d60cu;
    // NOP
label_15d610:
    // 0x15d610: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15d610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15d614:
    // 0x15d614: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15d614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d618:
    // 0x15d618: 0x0  nop
    ctx->pc = 0x15d618u;
    // NOP
label_15d61c:
    // 0x15d61c: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
label_15d620:
    if (ctx->pc == 0x15D620u) {
        ctx->pc = 0x15D624u;
        goto label_15d624;
    }
    ctx->pc = 0x15D61Cu;
    {
        const bool branch_taken_0x15d61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d61c) {
            ctx->pc = 0x15D6DCu;
            goto label_15d6dc;
        }
    }
    ctx->pc = 0x15D624u;
label_15d624:
    // 0x15d624: 0x8e022120  lw          $v0, 0x2120($s0)
    ctx->pc = 0x15d624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8480)));
label_15d628:
    // 0x15d628: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15d62c:
    if (ctx->pc == 0x15D62Cu) {
        ctx->pc = 0x15D630u;
        goto label_15d630;
    }
    ctx->pc = 0x15D628u;
    {
        const bool branch_taken_0x15d628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d628) {
            ctx->pc = 0x15D638u;
            goto label_15d638;
        }
    }
    ctx->pc = 0x15D630u;
label_15d630:
    // 0x15d630: 0x10000003  b           . + 4 + (0x3 << 2)
label_15d634:
    if (ctx->pc == 0x15D634u) {
        ctx->pc = 0x15D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D630u;
        // 0x15d634: 0x8e032118  lw          $v1, 0x2118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D638u;
        goto label_15d638;
    }
    ctx->pc = 0x15D630u;
    {
        const bool branch_taken_0x15d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D630u;
        // 0x15d634: 0x8e032118  lw          $v1, 0x2118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d630) {
            ctx->pc = 0x15D640u;
            goto label_15d640;
        }
    }
    ctx->pc = 0x15D638u;
label_15d638:
    // 0x15d638: 0x8e03211c  lw          $v1, 0x211C($s0)
    ctx->pc = 0x15d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8476)));
label_15d63c:
    // 0x15d63c: 0x0  nop
    ctx->pc = 0x15d63cu;
    // NOP
label_15d640:
    // 0x15d640: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x15d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_15d644:
    // 0x15d644: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x15d644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_15d648:
    // 0x15d648: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x15d648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_15d64c:
    // 0x15d64c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15d650:
    // 0x15d650: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x15d650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_15d654:
    // 0x15d654: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x15d654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_15d658:
    // 0x15d658: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x15d658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_15d65c:
    // 0x15d65c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x15d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_15d660:
    // 0x15d660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15d664:
    // 0x15d664: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x15d664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15d668:
    // 0x15d668: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x15d668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15d66c:
    // 0x15d66c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_15d670:
    // 0x15d670: 0x34423ffc  ori         $v0, $v0, 0x3FFC
    ctx->pc = 0x15d670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_15d674:
    // 0x15d674: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15d674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15d678:
    // 0x15d678: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x15d678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_15d67c:
    // 0x15d67c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15d680:
    // 0x15d680: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15d684:
    // 0x15d684: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d688:
    // 0x15d688: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15d688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_15d68c:
    // 0x15d68c: 0xc066d7a  jal         func_19B5E8
label_15d690:
    if (ctx->pc == 0x15D690u) {
        ctx->pc = 0x15D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D68Cu;
        // 0x15d690: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D694u;
        goto label_15d694;
    }
    ctx->pc = 0x15D68Cu;
    SET_GPR_U32(ctx, 31, 0x15D694u);
    ctx->pc = 0x15D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D68Cu;
    // 0x15d690: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x15D694u;
label_15d694:
    // 0x15d694: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15d694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15d698:
    // 0x15d698: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15d69c:
    // 0x15d69c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x15d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_15d6a0:
    // 0x15d6a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15d6a4:
    // 0x15d6a4: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x15d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_15d6a8:
    // 0x15d6a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15d6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d6ac:
    // 0x15d6ac: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x15d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_15d6b0:
    // 0x15d6b0: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x15d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_15d6b4:
    // 0x15d6b4: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x15d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15d6b8:
    // 0x15d6b8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x15d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_15d6bc:
    // 0x15d6bc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15d6c0:
    // 0x15d6c0: 0xc066d7a  jal         func_19B5E8
label_15d6c4:
    if (ctx->pc == 0x15D6C4u) {
        ctx->pc = 0x15D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6C0u;
        // 0x15d6c4: 0x244500d0  addiu       $a1, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D6C8u;
        goto label_15d6c8;
    }
    ctx->pc = 0x15D6C0u;
    SET_GPR_U32(ctx, 31, 0x15D6C8u);
    ctx->pc = 0x15D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D6C0u;
    // 0x15d6c4: 0x244500d0  addiu       $a1, $v0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x15D6C8u;
label_15d6c8:
    // 0x15d6c8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x15d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_15d6cc:
    // 0x15d6cc: 0xc046fb4  jal         func_11BED0
label_15d6d0:
    if (ctx->pc == 0x15D6D0u) {
        ctx->pc = 0x15D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6CCu;
        // 0x15d6d0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D6D4u;
        goto label_15d6d4;
    }
    ctx->pc = 0x15D6CCu;
    SET_GPR_U32(ctx, 31, 0x15D6D4u);
    ctx->pc = 0x15D6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D6CCu;
    // 0x15d6d0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BED0u, 0x15D6CCu, 0x15D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6D4u;
label_15d6d4:
    // 0x15d6d4: 0x1000000f  b           . + 4 + (0xF << 2)
label_15d6d8:
    if (ctx->pc == 0x15D6D8u) {
        ctx->pc = 0x15D6DCu;
        goto label_15d6dc;
    }
    ctx->pc = 0x15D6D4u;
    {
        const bool branch_taken_0x15d6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d6d4) {
            ctx->pc = 0x15D714u;
            goto label_15d714;
        }
    }
    ctx->pc = 0x15D6DCu;
label_15d6dc:
    // 0x15d6dc: 0x0  nop
    ctx->pc = 0x15d6dcu;
    // NOP
label_15d6e0:
    // 0x15d6e0: 0x8644003c  lh          $a0, 0x3C($s2)
    ctx->pc = 0x15d6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_15d6e4:
    // 0x15d6e4: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x15d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_15d6e8:
    // 0x15d6e8: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_15d6ec:
    if (ctx->pc == 0x15D6ECu) {
        ctx->pc = 0x15D6F0u;
        goto label_15d6f0;
    }
    ctx->pc = 0x15D6E8u;
    {
        const bool branch_taken_0x15d6e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d6e8) {
            ctx->pc = 0x15D714u;
            goto label_15d714;
        }
    }
    ctx->pc = 0x15D6F0u;
label_15d6f0:
    // 0x15d6f0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x15d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15d6f4:
    // 0x15d6f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15d6f8:
    // 0x15d6f8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15d6fc:
    // 0x15d6fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_15d700:
    // 0x15d700: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15d700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15d704:
    // 0x15d704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15d708:
    // 0x15d708: 0x8c4206b0  lw          $v0, 0x6B0($v0)
    ctx->pc = 0x15d708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
label_15d70c:
    // 0x15d70c: 0xc04662c  jal         func_1198B0
label_15d710:
    if (ctx->pc == 0x15D710u) {
        ctx->pc = 0x15D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D70Cu;
        // 0x15d710: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D714u;
        goto label_15d714;
    }
    ctx->pc = 0x15D70Cu;
    SET_GPR_U32(ctx, 31, 0x15D714u);
    ctx->pc = 0x15D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D70Cu;
    // 0x15d710: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1198B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1198B0u, 0x15D70Cu, 0x15D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D714u;
label_15d714:
    // 0x15d714: 0x0  nop
    ctx->pc = 0x15d714u;
    // NOP
label_15d718:
    // 0x15d718: 0x8e430198  lw          $v1, 0x198($s2)
    ctx->pc = 0x15d718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_15d71c:
    // 0x15d71c: 0x306300e0  andi        $v1, $v1, 0xE0
    ctx->pc = 0x15d71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)224);
label_15d720:
    // 0x15d720: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
label_15d724:
    if (ctx->pc == 0x15D724u) {
        ctx->pc = 0x15D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D720u;
        // 0x15d724: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D728u;
        goto label_15d728;
    }
    ctx->pc = 0x15D720u;
    {
        const bool branch_taken_0x15d720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D720u;
        // 0x15d724: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d720) {
            ctx->pc = 0x15D878u;
            goto label_15d878;
        }
    }
    ctx->pc = 0x15D728u;
label_15d728:
    // 0x15d728: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15d728u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d72c:
    // 0x15d72c: 0x0  nop
    ctx->pc = 0x15d72cu;
    // NOP
label_15d730:
    // 0x15d730: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x15d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_15d734:
    // 0x15d734: 0x80442140  lb          $a0, 0x2140($v0)
    ctx->pc = 0x15d734u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8512)));
label_15d738:
    // 0x15d738: 0x24552140  addiu       $s5, $v0, 0x2140
    ctx->pc = 0x15d738u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8512));
label_15d73c:
    // 0x15d73c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d740:
    // 0x15d740: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_15d744:
    if (ctx->pc == 0x15D744u) {
        ctx->pc = 0x15D748u;
        goto label_15d748;
    }
    ctx->pc = 0x15D740u;
    {
        const bool branch_taken_0x15d740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d740) {
            ctx->pc = 0x15D758u;
            goto label_15d758;
        }
    }
    ctx->pc = 0x15D748u;
label_15d748:
    // 0x15d748: 0xc05ca18  jal         func_172860
label_15d74c:
    if (ctx->pc == 0x15D74Cu) {
        ctx->pc = 0x15D750u;
        goto label_15d750;
    }
    ctx->pc = 0x15D748u;
    SET_GPR_U32(ctx, 31, 0x15D750u);
    ctx->pc = 0x172860u;
    { ctx->pc = 0x172860; return; }
    ctx->pc = 0x15D750u;
label_15d750:
    // 0x15d750: 0x10000042  b           . + 4 + (0x42 << 2)
label_15d754:
    if (ctx->pc == 0x15D754u) {
        ctx->pc = 0x15D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D750u;
        // 0x15d754: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D758u;
        goto label_15d758;
    }
    ctx->pc = 0x15D750u;
    {
        const bool branch_taken_0x15d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D750u;
        // 0x15d754: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d750) {
            ctx->pc = 0x15D85Cu;
            goto label_15d85c;
        }
    }
    ctx->pc = 0x15D758u;
label_15d758:
    // 0x15d758: 0x8e430198  lw          $v1, 0x198($s2)
    ctx->pc = 0x15d758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_15d75c:
    // 0x15d75c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x15d75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_15d760:
    // 0x15d760: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_15d764:
    if (ctx->pc == 0x15D764u) {
        ctx->pc = 0x15D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D760u;
        // 0x15d764: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D768u;
        goto label_15d768;
    }
    ctx->pc = 0x15D760u;
    {
        const bool branch_taken_0x15d760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D760u;
        // 0x15d764: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d760) {
            ctx->pc = 0x15D7B8u;
            goto label_15d7b8;
        }
    }
    ctx->pc = 0x15D768u;
label_15d768:
    // 0x15d768: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15d768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15d76c:
    // 0x15d76c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x15d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_15d770:
    // 0x15d770: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15d774:
    // 0x15d774: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15d774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_15d778:
    // 0x15d778: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15d778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15d77c:
    // 0x15d77c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15d77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15d780:
    // 0x15d780: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15d784:
    // 0x15d784: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x15d784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_15d788:
    // 0x15d788: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15d78c:
    // 0x15d78c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15d790:
    // 0x15d790: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x15d790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_15d794:
    // 0x15d794: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15d794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15d798:
    // 0x15d798: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15d79c:
    // 0x15d79c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15d7a0:
    // 0x15d7a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d7a4:
    // 0x15d7a4: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_15d7a8:
    // 0x15d7a8: 0xc046ef4  jal         func_11BBD0
label_15d7ac:
    if (ctx->pc == 0x15D7ACu) {
        ctx->pc = 0x15D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7A8u;
        // 0x15d7ac: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7B0u;
        goto label_15d7b0;
    }
    ctx->pc = 0x15D7A8u;
    SET_GPR_U32(ctx, 31, 0x15D7B0u);
    ctx->pc = 0x15D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D7A8u;
    // 0x15d7ac: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BBD0u, 0x15D7A8u, 0x15D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7B0u;
label_15d7b0:
    // 0x15d7b0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_15d7b4:
    if (ctx->pc == 0x15D7B4u) {
        ctx->pc = 0x15D7B8u;
        goto label_15d7b8;
    }
    ctx->pc = 0x15D7B0u;
    {
        const bool branch_taken_0x15d7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d7b0) {
            ctx->pc = 0x15D85Cu;
            goto label_15d85c;
        }
    }
    ctx->pc = 0x15D7B8u;
label_15d7b8:
    // 0x15d7b8: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x15d7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_15d7bc:
    // 0x15d7bc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_15d7c0:
    if (ctx->pc == 0x15D7C0u) {
        ctx->pc = 0x15D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7BCu;
        // 0x15d7c0: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D7C4u;
        goto label_15d7c4;
    }
    ctx->pc = 0x15D7BCu;
    {
        const bool branch_taken_0x15d7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7BCu;
        // 0x15d7c0: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7bc) {
            ctx->pc = 0x15D814u;
            goto label_15d814;
        }
    }
    ctx->pc = 0x15D7C4u;
label_15d7c4:
    // 0x15d7c4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15d7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15d7c8:
    // 0x15d7c8: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x15d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_15d7cc:
    // 0x15d7cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15d7d0:
    // 0x15d7d0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_15d7d4:
    // 0x15d7d4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x15d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15d7d8:
    // 0x15d7d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15d7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15d7dc:
    // 0x15d7dc: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x15d7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15d7e0:
    // 0x15d7e0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x15d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_15d7e4:
    // 0x15d7e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15d7e8:
    // 0x15d7e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15d7ec:
    // 0x15d7ec: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x15d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_15d7f0:
    // 0x15d7f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15d7f4:
    // 0x15d7f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15d7f8:
    // 0x15d7f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15d7fc:
    // 0x15d7fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d800:
    // 0x15d800: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_15d804:
    // 0x15d804: 0xc046f68  jal         func_11BDA0
label_15d808:
    if (ctx->pc == 0x15D808u) {
        ctx->pc = 0x15D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D804u;
        // 0x15d808: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D80Cu;
        goto label_15d80c;
    }
    ctx->pc = 0x15D804u;
    SET_GPR_U32(ctx, 31, 0x15D80Cu);
    ctx->pc = 0x15D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D804u;
    // 0x15d808: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BDA0u, 0x15D804u, 0x15D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D80Cu;
label_15d80c:
    // 0x15d80c: 0x10000013  b           . + 4 + (0x13 << 2)
label_15d810:
    if (ctx->pc == 0x15D810u) {
        ctx->pc = 0x15D814u;
        goto label_15d814;
    }
    ctx->pc = 0x15D80Cu;
    {
        const bool branch_taken_0x15d80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d80c) {
            ctx->pc = 0x15D85Cu;
            goto label_15d85c;
        }
    }
    ctx->pc = 0x15D814u;
label_15d814:
    // 0x15d814: 0x0  nop
    ctx->pc = 0x15d814u;
    // NOP
label_15d818:
    // 0x15d818: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15d818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15d81c:
    // 0x15d81c: 0x246355f0  addiu       $v1, $v1, 0x55F0
    ctx->pc = 0x15d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22000));
label_15d820:
    // 0x15d820: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15d824:
    // 0x15d824: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x15d824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_15d828:
    // 0x15d828: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x15d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15d82c:
    // 0x15d82c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15d82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15d830:
    // 0x15d830: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x15d830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15d834:
    // 0x15d834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15d838:
    // 0x15d838: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x15d838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15d83c:
    // 0x15d83c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x15d83cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_15d840:
    // 0x15d840: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15d840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15d844:
    // 0x15d844: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15d844u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15d848:
    // 0x15d848: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15d84c:
    // 0x15d84c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d850:
    // 0x15d850: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_15d854:
    // 0x15d854: 0xc046f44  jal         func_11BD10
label_15d858:
    if (ctx->pc == 0x15D858u) {
        ctx->pc = 0x15D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D854u;
        // 0x15d858: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D85Cu;
        goto label_15d85c;
    }
    ctx->pc = 0x15D854u;
    SET_GPR_U32(ctx, 31, 0x15D85Cu);
    ctx->pc = 0x15D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D854u;
    // 0x15d858: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BD10u, 0x15D854u, 0x15D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D85Cu;
label_15d85c:
    // 0x15d85c: 0x0  nop
    ctx->pc = 0x15d85cu;
    // NOP
label_15d860:
    // 0x15d860: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15d860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15d864:
    // 0x15d864: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x15d864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_15d868:
    // 0x15d868: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
label_15d86c:
    if (ctx->pc == 0x15D86Cu) {
        ctx->pc = 0x15D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D868u;
        // 0x15d86c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D870u;
        goto label_15d870;
    }
    ctx->pc = 0x15D868u;
    {
        const bool branch_taken_0x15d868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D868u;
        // 0x15d86c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d868) {
            ctx->pc = 0x15D72Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d72c;
        }
    }
    ctx->pc = 0x15D870u;
label_15d870:
    // 0x15d870: 0x1000000a  b           . + 4 + (0xA << 2)
label_15d874:
    if (ctx->pc == 0x15D874u) {
        ctx->pc = 0x15D878u;
        goto label_15d878;
    }
    ctx->pc = 0x15D870u;
    {
        const bool branch_taken_0x15d870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d870) {
            ctx->pc = 0x15D89Cu;
            goto label_15d89c;
        }
    }
    ctx->pc = 0x15D878u;
label_15d878:
    // 0x15d878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d87c:
    // 0x15d87c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d880:
    // 0x15d880: 0x0  nop
    ctx->pc = 0x15d880u;
    // NOP
label_15d884:
    // 0x15d884: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x15d884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_15d888:
    // 0x15d888: 0xa0642140  sb          $a0, 0x2140($v1)
    ctx->pc = 0x15d888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8512), (uint8_t)GPR_U32(ctx, 4));
label_15d88c:
    // 0x15d88c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15d88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15d890:
    // 0x15d890: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x15d890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_15d894:
    // 0x15d894: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_15d898:
    if (ctx->pc == 0x15D898u) {
        ctx->pc = 0x15D89Cu;
        goto label_15d89c;
    }
    ctx->pc = 0x15D894u;
    {
        const bool branch_taken_0x15d894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d894) {
            ctx->pc = 0x15D880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d880;
        }
    }
    ctx->pc = 0x15D89Cu;
label_15d89c:
    // 0x15d89c: 0x0  nop
    ctx->pc = 0x15d89cu;
    // NOP
label_15d8a0:
    // 0x15d8a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d8a4:
    // 0x15d8a4: 0x12c30095  beq         $s6, $v1, . + 4 + (0x95 << 2)
label_15d8a8:
    if (ctx->pc == 0x15D8A8u) {
        ctx->pc = 0x15D8ACu;
        goto label_15d8ac;
    }
    ctx->pc = 0x15D8A4u;
    {
        const bool branch_taken_0x15d8a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d8a4) {
            ctx->pc = 0x15DAFCu;
            goto label_15dafc;
        }
    }
    ctx->pc = 0x15D8ACu;
label_15d8ac:
    // 0x15d8ac: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x15d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_15d8b0:
    // 0x15d8b0: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x15d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_15d8b4:
    // 0x15d8b4: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x15d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_15d8b8:
    // 0x15d8b8: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x15d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_15d8bc:
    // 0x15d8bc: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x15d8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15d8c0:
    // 0x15d8c0: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x15d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
label_15d8c4:
    // 0x15d8c4: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x15d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
label_15d8c8:
    // 0x15d8c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15d8cc:
    // 0x15d8cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15d8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15d8d0:
    // 0x15d8d0: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_15d8d4:
    if (ctx->pc == 0x15D8D4u) {
        ctx->pc = 0x15D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D0u;
        // 0x15d8d4: 0x85b821  addu        $s7, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8D8u;
        goto label_15d8d8;
    }
    ctx->pc = 0x15D8D0u;
    {
        const bool branch_taken_0x15d8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D0u;
        // 0x15d8d4: 0x85b821  addu        $s7, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8d0) {
            ctx->pc = 0x15DA38u;
            goto label_15da38;
        }
    }
    ctx->pc = 0x15D8D8u;
label_15d8d8:
    // 0x15d8d8: 0x86230222  lh          $v1, 0x222($s1)
    ctx->pc = 0x15d8d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 546)));
label_15d8dc:
    // 0x15d8dc: 0x86220252  lh          $v0, 0x252($s1)
    ctx->pc = 0x15d8dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 594)));
label_15d8e0:
    // 0x15d8e0: 0x14620055  bne         $v1, $v0, . + 4 + (0x55 << 2)
label_15d8e4:
    if (ctx->pc == 0x15D8E4u) {
        ctx->pc = 0x15D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8E0u;
        // 0x15d8e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D8E8u;
        goto label_15d8e8;
    }
    ctx->pc = 0x15D8E0u;
    {
        const bool branch_taken_0x15d8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8E0u;
        // 0x15d8e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8e0) {
            ctx->pc = 0x15DA38u;
            goto label_15da38;
        }
    }
    ctx->pc = 0x15D8E8u;
label_15d8e8:
    // 0x15d8e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15d8e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d8ec:
    // 0x15d8ec: 0x0  nop
    ctx->pc = 0x15d8ecu;
    // NOP
label_15d8f0:
    // 0x15d8f0: 0x2f31021  addu        $v0, $s7, $s3
    ctx->pc = 0x15d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
label_15d8f4:
    // 0x15d8f4: 0x80440068  lb          $a0, 0x68($v0)
    ctx->pc = 0x15d8f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 104)));
label_15d8f8:
    // 0x15d8f8: 0x24550068  addiu       $s5, $v0, 0x68
    ctx->pc = 0x15d8f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_15d8fc:
    // 0x15d8fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d900:
    // 0x15d900: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_15d904:
    if (ctx->pc == 0x15D904u) {
        ctx->pc = 0x15D908u;
        goto label_15d908;
    }
    ctx->pc = 0x15D900u;
    {
        const bool branch_taken_0x15d900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d900) {
            ctx->pc = 0x15D918u;
            goto label_15d918;
        }
    }
    ctx->pc = 0x15D908u;
label_15d908:
    // 0x15d908: 0xc05ca18  jal         func_172860
label_15d90c:
    if (ctx->pc == 0x15D90Cu) {
        ctx->pc = 0x15D910u;
        goto label_15d910;
    }
    ctx->pc = 0x15D908u;
    SET_GPR_U32(ctx, 31, 0x15D910u);
    ctx->pc = 0x172860u;
    { ctx->pc = 0x172860; return; }
    ctx->pc = 0x15D910u;
label_15d910:
    // 0x15d910: 0x10000043  b           . + 4 + (0x43 << 2)
label_15d914:
    if (ctx->pc == 0x15D914u) {
        ctx->pc = 0x15D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D910u;
        // 0x15d914: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D918u;
        goto label_15d918;
    }
    ctx->pc = 0x15D910u;
    {
        const bool branch_taken_0x15d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D910u;
        // 0x15d914: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d910) {
            ctx->pc = 0x15DA20u;
            goto label_15da20;
        }
    }
    ctx->pc = 0x15D918u;
label_15d918:
    // 0x15d918: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x15d918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15d91c:
    // 0x15d91c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_15d920:
    // 0x15d920: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_15d924:
    if (ctx->pc == 0x15D924u) {
        ctx->pc = 0x15D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D920u;
        // 0x15d924: 0x27828150  addiu       $v0, $gp, -0x7EB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D928u;
        goto label_15d928;
    }
    ctx->pc = 0x15D920u;
    {
        const bool branch_taken_0x15d920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D920u;
        // 0x15d924: 0x27828150  addiu       $v0, $gp, -0x7EB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d920) {
            ctx->pc = 0x15D96Cu;
            goto label_15d96c;
        }
    }
    ctx->pc = 0x15D928u;
label_15d928:
    // 0x15d928: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15d928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15d92c:
    // 0x15d92c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x15d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_15d930:
    // 0x15d930: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15d934:
    // 0x15d934: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x15d934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15d938:
    // 0x15d938: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x15d938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15d93c:
    // 0x15d93c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x15d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15d940:
    // 0x15d940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15d944:
    // 0x15d944: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x15d944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_15d948:
    // 0x15d948: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15d948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15d94c:
    // 0x15d94c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15d950:
    // 0x15d950: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15d954:
    // 0x15d954: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d958:
    // 0x15d958: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_15d95c:
    // 0x15d95c: 0xc046e2c  jal         func_11B8B0
label_15d960:
    if (ctx->pc == 0x15D960u) {
        ctx->pc = 0x15D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D95Cu;
        // 0x15d960: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D964u;
        goto label_15d964;
    }
    ctx->pc = 0x15D95Cu;
    SET_GPR_U32(ctx, 31, 0x15D964u);
    ctx->pc = 0x15D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D95Cu;
    // 0x15d960: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B8B0u, 0x15D95Cu, 0x15D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D964u;
label_15d964:
    // 0x15d964: 0x1000002e  b           . + 4 + (0x2E << 2)
label_15d968:
    if (ctx->pc == 0x15D968u) {
        ctx->pc = 0x15D96Cu;
        goto label_15d96c;
    }
    ctx->pc = 0x15D964u;
    {
        const bool branch_taken_0x15d964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d964) {
            ctx->pc = 0x15DA20u;
            goto label_15da20;
        }
    }
    ctx->pc = 0x15D96Cu;
label_15d96c:
    // 0x15d96c: 0x0  nop
    ctx->pc = 0x15d96cu;
    // NOP
label_15d970:
    // 0x15d970: 0x8622021c  lh          $v0, 0x21C($s1)
    ctx->pc = 0x15d970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 540)));
label_15d974:
    // 0x15d974: 0x28410033  slti        $at, $v0, 0x33
    ctx->pc = 0x15d974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
label_15d978:
    // 0x15d978: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_15d97c:
    if (ctx->pc == 0x15D97Cu) {
        ctx->pc = 0x15D980u;
        goto label_15d980;
    }
    ctx->pc = 0x15D978u;
    {
        const bool branch_taken_0x15d978 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d978) {
            ctx->pc = 0x15D994u;
            goto label_15d994;
        }
    }
    ctx->pc = 0x15D980u;
label_15d980:
    // 0x15d980: 0xde230270  ld          $v1, 0x270($s1)
    ctx->pc = 0x15d980u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 624)));
label_15d984:
    // 0x15d984: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x15d984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_15d988:
    // 0x15d988: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15d988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15d98c:
    // 0x15d98c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_15d990:
    if (ctx->pc == 0x15D990u) {
        ctx->pc = 0x15D994u;
        goto label_15d994;
    }
    ctx->pc = 0x15D98Cu;
    {
        const bool branch_taken_0x15d98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d98c) {
            ctx->pc = 0x15D9E0u;
            goto label_15d9e0;
        }
    }
    ctx->pc = 0x15D994u;
label_15d994:
    // 0x15d994: 0x0  nop
    ctx->pc = 0x15d994u;
    // NOP
label_15d998:
    // 0x15d998: 0x27838150  addiu       $v1, $gp, -0x7EB0
    ctx->pc = 0x15d998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934864));
label_15d99c:
    // 0x15d99c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x15d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_15d9a0:
    // 0x15d9a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15d9a4:
    // 0x15d9a4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15d9a8:
    // 0x15d9a8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x15d9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15d9ac:
    // 0x15d9ac: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x15d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15d9b0:
    // 0x15d9b0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x15d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15d9b4:
    // 0x15d9b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15d9b8:
    // 0x15d9b8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x15d9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_15d9bc:
    // 0x15d9bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15d9c0:
    // 0x15d9c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15d9c4:
    // 0x15d9c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15d9c8:
    // 0x15d9c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d9cc:
    // 0x15d9cc: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_15d9d0:
    // 0x15d9d0: 0xc046e54  jal         func_11B950
label_15d9d4:
    if (ctx->pc == 0x15D9D4u) {
        ctx->pc = 0x15D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9D0u;
        // 0x15d9d4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D9D8u;
        goto label_15d9d8;
    }
    ctx->pc = 0x15D9D0u;
    SET_GPR_U32(ctx, 31, 0x15D9D8u);
    ctx->pc = 0x15D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D9D0u;
    // 0x15d9d4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B950u, 0x15D9D0u, 0x15D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D9D8u;
label_15d9d8:
    // 0x15d9d8: 0x10000011  b           . + 4 + (0x11 << 2)
label_15d9dc:
    if (ctx->pc == 0x15D9DCu) {
        ctx->pc = 0x15D9E0u;
        goto label_15d9e0;
    }
    ctx->pc = 0x15D9D8u;
    {
        const bool branch_taken_0x15d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d9d8) {
            ctx->pc = 0x15DA20u;
            goto label_15da20;
        }
    }
    ctx->pc = 0x15D9E0u;
label_15d9e0:
    // 0x15d9e0: 0x27838150  addiu       $v1, $gp, -0x7EB0
    ctx->pc = 0x15d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934864));
label_15d9e4:
    // 0x15d9e4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x15d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_15d9e8:
    // 0x15d9e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15d9ec:
    // 0x15d9ec: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x15d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15d9f0:
    // 0x15d9f0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x15d9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15d9f4:
    // 0x15d9f4: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x15d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15d9f8:
    // 0x15d9f8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x15d9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15d9fc:
    // 0x15d9fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15da00:
    // 0x15da00: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x15da00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_15da04:
    // 0x15da04: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15da04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15da08:
    // 0x15da08: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15da08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15da0c:
    // 0x15da0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15da10:
    // 0x15da10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15da10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15da14:
    // 0x15da14: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_15da18:
    // 0x15da18: 0xc046e7c  jal         func_11B9F0
label_15da1c:
    if (ctx->pc == 0x15DA1Cu) {
        ctx->pc = 0x15DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA18u;
        // 0x15da1c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA20u;
        goto label_15da20;
    }
    ctx->pc = 0x15DA18u;
    SET_GPR_U32(ctx, 31, 0x15DA20u);
    ctx->pc = 0x15DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA18u;
    // 0x15da1c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B9F0u, 0x15DA18u, 0x15DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA20u;
label_15da20:
    // 0x15da20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15da20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15da24:
    // 0x15da24: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x15da24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_15da28:
    // 0x15da28: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
label_15da2c:
    if (ctx->pc == 0x15DA2Cu) {
        ctx->pc = 0x15DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA28u;
        // 0x15da2c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA30u;
        goto label_15da30;
    }
    ctx->pc = 0x15DA28u;
    {
        const bool branch_taken_0x15da28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA28u;
        // 0x15da2c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da28) {
            ctx->pc = 0x15D8ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d8ec;
        }
    }
    ctx->pc = 0x15DA30u;
label_15da30:
    // 0x15da30: 0x10000003  b           . + 4 + (0x3 << 2)
label_15da34:
    if (ctx->pc == 0x15DA34u) {
        ctx->pc = 0x15DA38u;
        goto label_15da38;
    }
    ctx->pc = 0x15DA30u;
    {
        const bool branch_taken_0x15da30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da30) {
            ctx->pc = 0x15DA40u;
            goto label_15da40;
        }
    }
    ctx->pc = 0x15DA38u;
label_15da38:
    // 0x15da38: 0xc0756dc  jal         func_1D5B70
label_15da3c:
    if (ctx->pc == 0x15DA3Cu) {
        ctx->pc = 0x15DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA38u;
        // 0x15da3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA40u;
        goto label_15da40;
    }
    ctx->pc = 0x15DA38u;
    SET_GPR_U32(ctx, 31, 0x15DA40u);
    ctx->pc = 0x15DA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA38u;
    // 0x15da3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B70u;
    { ctx->pc = 0x1d5b70; return; }
    ctx->pc = 0x15DA40u;
label_15da40:
    // 0x15da40: 0x8644003e  lh          $a0, 0x3E($s2)
    ctx->pc = 0x15da40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
label_15da44:
    // 0x15da44: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x15da44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_15da48:
    // 0x15da48: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
label_15da4c:
    if (ctx->pc == 0x15DA4Cu) {
        ctx->pc = 0x15DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA48u;
        // 0x15da4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA50u;
        goto label_15da50;
    }
    ctx->pc = 0x15DA48u;
    {
        const bool branch_taken_0x15da48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA48u;
        // 0x15da4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da48) {
            ctx->pc = 0x15DAF0u;
            goto label_15daf0;
        }
    }
    ctx->pc = 0x15DA50u;
label_15da50:
    // 0x15da50: 0xc064674  jal         func_1919D0
label_15da54:
    if (ctx->pc == 0x15DA54u) {
        ctx->pc = 0x15DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA50u;
        // 0x15da54: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DA58u;
        goto label_15da58;
    }
    ctx->pc = 0x15DA50u;
    SET_GPR_U32(ctx, 31, 0x15DA58u);
    ctx->pc = 0x15DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA50u;
    // 0x15da54: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1919D0u;
    { ctx->pc = 0x1919d0; return; }
    ctx->pc = 0x15DA58u;
label_15da58:
    // 0x15da58: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x15da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15da5c:
    // 0x15da5c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x15da5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15da60:
    // 0x15da60: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x15da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15da64:
    // 0x15da64: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x15da64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_15da68:
    // 0x15da68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15da68u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_15da6c:
    // 0x15da6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15da6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15da70:
    // 0x15da70: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15da70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15da74:
    // 0x15da74: 0x0  nop
    ctx->pc = 0x15da74u;
    // NOP
label_15da78:
    // 0x15da78: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x15da78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_15da7c:
    // 0x15da7c: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_15da80:
    if (ctx->pc == 0x15DA80u) {
        ctx->pc = 0x15DA84u;
        goto label_15da84;
    }
    ctx->pc = 0x15DA7Cu;
    {
        const bool branch_taken_0x15da7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15da7c) {
            ctx->pc = 0x15DAB8u;
            goto label_15dab8;
        }
    }
    ctx->pc = 0x15DA84u;
label_15da84:
    // 0x15da84: 0x82040032  lb          $a0, 0x32($s0)
    ctx->pc = 0x15da84u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
label_15da88:
    // 0x15da88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15da8c:
    // 0x15da8c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_15da90:
    if (ctx->pc == 0x15DA90u) {
        ctx->pc = 0x15DA94u;
        goto label_15da94;
    }
    ctx->pc = 0x15DA8Cu;
    {
        const bool branch_taken_0x15da8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x15da8c) {
            ctx->pc = 0x15DAA4u;
            goto label_15daa4;
        }
    }
    ctx->pc = 0x15DA94u;
label_15da94:
    // 0x15da94: 0xc05ca18  jal         func_172860
label_15da98:
    if (ctx->pc == 0x15DA98u) {
        ctx->pc = 0x15DA9Cu;
        goto label_15da9c;
    }
    ctx->pc = 0x15DA94u;
    SET_GPR_U32(ctx, 31, 0x15DA9Cu);
    ctx->pc = 0x172860u;
    { ctx->pc = 0x172860; return; }
    ctx->pc = 0x15DA9Cu;
label_15da9c:
    // 0x15da9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_15daa0:
    if (ctx->pc == 0x15DAA0u) {
        ctx->pc = 0x15DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA9Cu;
        // 0x15daa0: 0xa2020032  sb          $v0, 0x32($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAA4u;
        goto label_15daa4;
    }
    ctx->pc = 0x15DA9Cu;
    {
        const bool branch_taken_0x15da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA9Cu;
        // 0x15daa0: 0xa2020032  sb          $v0, 0x32($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da9c) {
            ctx->pc = 0x15DAC0u;
            goto label_15dac0;
        }
    }
    ctx->pc = 0x15DAA4u;
label_15daa4:
    // 0x15daa4: 0x0  nop
    ctx->pc = 0x15daa4u;
    // NOP
label_15daa8:
    // 0x15daa8: 0xc0469c4  jal         func_11A710
label_15daac:
    if (ctx->pc == 0x15DAACu) {
        ctx->pc = 0x15DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAA8u;
        // 0x15daac: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAB0u;
        goto label_15dab0;
    }
    ctx->pc = 0x15DAA8u;
    SET_GPR_U32(ctx, 31, 0x15DAB0u);
    ctx->pc = 0x15DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAA8u;
    // 0x15daac: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A710u, 0x15DAA8u, 0x15DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAB0u;
label_15dab0:
    // 0x15dab0: 0x10000003  b           . + 4 + (0x3 << 2)
label_15dab4:
    if (ctx->pc == 0x15DAB4u) {
        ctx->pc = 0x15DAB8u;
        goto label_15dab8;
    }
    ctx->pc = 0x15DAB0u;
    {
        const bool branch_taken_0x15dab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dab0) {
            ctx->pc = 0x15DAC0u;
            goto label_15dac0;
        }
    }
    ctx->pc = 0x15DAB8u;
label_15dab8:
    // 0x15dab8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15dabc:
    // 0x15dabc: 0xa2020032  sb          $v0, 0x32($s0)
    ctx->pc = 0x15dabcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 2));
label_15dac0:
    // 0x15dac0: 0x82040033  lb          $a0, 0x33($s0)
    ctx->pc = 0x15dac0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
label_15dac4:
    // 0x15dac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15dac8:
    // 0x15dac8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_15dacc:
    if (ctx->pc == 0x15DACCu) {
        ctx->pc = 0x15DAD0u;
        goto label_15dad0;
    }
    ctx->pc = 0x15DAC8u;
    {
        const bool branch_taken_0x15dac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x15dac8) {
            ctx->pc = 0x15DAE0u;
            goto label_15dae0;
        }
    }
    ctx->pc = 0x15DAD0u;
label_15dad0:
    // 0x15dad0: 0xc05ca18  jal         func_172860
label_15dad4:
    if (ctx->pc == 0x15DAD4u) {
        ctx->pc = 0x15DAD8u;
        goto label_15dad8;
    }
    ctx->pc = 0x15DAD0u;
    SET_GPR_U32(ctx, 31, 0x15DAD8u);
    ctx->pc = 0x172860u;
    { ctx->pc = 0x172860; return; }
    ctx->pc = 0x15DAD8u;
label_15dad8:
    // 0x15dad8: 0x10000008  b           . + 4 + (0x8 << 2)
label_15dadc:
    if (ctx->pc == 0x15DADCu) {
        ctx->pc = 0x15DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAD8u;
        // 0x15dadc: 0xa2020033  sb          $v0, 0x33($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAE0u;
        goto label_15dae0;
    }
    ctx->pc = 0x15DAD8u;
    {
        const bool branch_taken_0x15dad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAD8u;
        // 0x15dadc: 0xa2020033  sb          $v0, 0x33($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dad8) {
            ctx->pc = 0x15DAFCu;
            goto label_15dafc;
        }
    }
    ctx->pc = 0x15DAE0u;
label_15dae0:
    // 0x15dae0: 0xc046994  jal         func_11A650
label_15dae4:
    if (ctx->pc == 0x15DAE4u) {
        ctx->pc = 0x15DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAE0u;
        // 0x15dae4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DAE8u;
        goto label_15dae8;
    }
    ctx->pc = 0x15DAE0u;
    SET_GPR_U32(ctx, 31, 0x15DAE8u);
    ctx->pc = 0x15DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAE0u;
    // 0x15dae4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A650u, 0x15DAE0u, 0x15DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAE8u;
label_15dae8:
    // 0x15dae8: 0x10000004  b           . + 4 + (0x4 << 2)
label_15daec:
    if (ctx->pc == 0x15DAECu) {
        ctx->pc = 0x15DAF0u;
        goto label_15daf0;
    }
    ctx->pc = 0x15DAE8u;
    {
        const bool branch_taken_0x15dae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dae8) {
            ctx->pc = 0x15DAFCu;
            goto label_15dafc;
        }
    }
    ctx->pc = 0x15DAF0u;
label_15daf0:
    // 0x15daf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15daf4:
    // 0x15daf4: 0xa2030032  sb          $v1, 0x32($s0)
    ctx->pc = 0x15daf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
label_15daf8:
    // 0x15daf8: 0xa2030033  sb          $v1, 0x33($s0)
    ctx->pc = 0x15daf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 3));
label_15dafc:
    // 0x15dafc: 0x0  nop
    ctx->pc = 0x15dafcu;
    // NOP
label_15db00:
    // 0x15db00: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x15db00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_15db04:
    // 0x15db04: 0x2bc3001c  slti        $v1, $fp, 0x1C
    ctx->pc = 0x15db04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)28) ? 1 : 0);
label_15db08:
    // 0x15db08: 0x1460fcdf  bnez        $v1, . + 4 + (-0x321 << 2)
label_15db0c:
    if (ctx->pc == 0x15DB0Cu) {
        ctx->pc = 0x15DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB08u;
        // 0x15db0c: 0x26102150  addiu       $s0, $s0, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB10u;
        goto label_15db10;
    }
    ctx->pc = 0x15DB08u;
    {
        const bool branch_taken_0x15db08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB08u;
        // 0x15db0c: 0x26102150  addiu       $s0, $s0, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db08) {
            ctx->pc = 0x15CE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15ce88; return; }
        }
    }
    ctx->pc = 0x15DB10u;
label_15db10:
    // 0x15db10: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15db10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15db14:
    // 0x15db14: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x15db14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_15db18:
    // 0x15db18: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x15db18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_15db1c:
    // 0x15db1c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15db20:
    // 0x15db20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15db24:
    // 0x15db24: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x15db24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_15db28:
    // 0x15db28: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x15db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15db2c:
    // 0x15db2c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15db30:
    // 0x15db30: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x15db30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15db34:
    // 0x15db34: 0x1460fcce  bnez        $v1, . + 4 + (-0x332 << 2)
label_15db38:
    if (ctx->pc == 0x15DB38u) {
        ctx->pc = 0x15DB3Cu;
        goto label_15db3c;
    }
    ctx->pc = 0x15DB34u;
    {
        const bool branch_taken_0x15db34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15db34) {
            ctx->pc = 0x15CE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15ce70; return; }
        }
    }
    ctx->pc = 0x15DB3Cu;
label_15db3c:
    // 0x15db3c: 0x0  nop
    ctx->pc = 0x15db3cu;
    // NOP
label_15db40:
    // 0x15db40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15db40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15db44:
    // 0x15db44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15db44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15db48:
    // 0x15db48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15db48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15db4c:
    // 0x15db4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15db4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15db50:
    // 0x15db50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15db50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15db54:
    // 0x15db54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15db54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15db58:
    // 0x15db58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15db58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15db5c:
    // 0x15db5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15db5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15db60:
    // 0x15db60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15db60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15db64:
    // 0x15db64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15db64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15db68:
    // 0x15db68: 0x3e00008  jr          $ra
label_15db6c:
    if (ctx->pc == 0x15DB6Cu) {
        ctx->pc = 0x15DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB68u;
        // 0x15db6c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DB70u;
        goto label_15db70;
    }
    ctx->pc = 0x15DB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB68u;
        // 0x15db6c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DB70u;
label_15db70:
    // 0x15db70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_15db74:
    // 0x15db74: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x15db74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_15db78:
    // 0x15db78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_15db7c:
    // 0x15db7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15db7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15db80:
    // 0x15db80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15db80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15db84:
    // 0x15db84: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x15db84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_15db88:
    // 0x15db88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15db8c:
    // 0x15db8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15db90:
    // 0x15db90: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15db90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15db94:
    // 0x15db94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15db94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15db98:
    // 0x15db98: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15db98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15db9c:
    // 0x15db9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15db9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15dba0:
    // 0x15dba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15dba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15dba4:
    // 0x15dba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15dba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15dba8:
    // 0x15dba8: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x15dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15dbac:
    // 0x15dbac: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x15dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_15dbb0:
    // 0x15dbb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15dbb4:
    // 0x15dbb4: 0x3893c  dsll32      $s1, $v1, 4
    ctx->pc = 0x15dbb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 4));
label_15dbb8:
    // 0x15dbb8: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_15dbbc:
    if (ctx->pc == 0x15DBBCu) {
        ctx->pc = 0x15DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBB8u;
        // 0x15dbbc: 0x11893e  dsrl32      $s1, $s1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBC0u;
        goto label_15dbc0;
    }
    ctx->pc = 0x15DBB8u;
    {
        const bool branch_taken_0x15dbb8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBB8u;
        // 0x15dbbc: 0x11893e  dsrl32      $s1, $s1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dbb8) {
            ctx->pc = 0x15DBC8u;
            goto label_15dbc8;
        }
    }
    ctx->pc = 0x15DBC0u;
label_15dbc0:
    // 0x15dbc0: 0x128000cb  beqz        $s4, . + 4 + (0xCB << 2)
label_15dbc4:
    if (ctx->pc == 0x15DBC4u) {
        ctx->pc = 0x15DBC8u;
        goto label_15dbc8;
    }
    ctx->pc = 0x15DBC0u;
    {
        const bool branch_taken_0x15dbc0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dbc0) {
            ctx->pc = 0x15DEF0u;
            { ctx->pc = 0x15def0; return; }
        }
    }
    ctx->pc = 0x15DBC8u;
label_15dbc8:
    // 0x15dbc8: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_15dbcc:
    if (ctx->pc == 0x15DBCCu) {
        ctx->pc = 0x15DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBC8u;
        // 0x15dbcc: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBD0u;
        goto label_15dbd0;
    }
    ctx->pc = 0x15DBC8u;
    {
        const bool branch_taken_0x15dbc8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBC8u;
        // 0x15dbcc: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dbc8) {
            ctx->pc = 0x15DBD4u;
            goto label_15dbd4;
        }
    }
    ctx->pc = 0x15DBD0u;
label_15dbd0:
    // 0x15dbd0: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x15dbd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15dbd4:
    // 0x15dbd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dbd8:
    // 0x15dbd8: 0xc066c5c  jal         func_19B170
label_15dbdc:
    if (ctx->pc == 0x15DBDCu) {
        ctx->pc = 0x15DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBD8u;
        // 0x15dbdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBE0u;
        goto label_15dbe0;
    }
    ctx->pc = 0x15DBD8u;
    SET_GPR_U32(ctx, 31, 0x15DBE0u);
    ctx->pc = 0x15DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBD8u;
    // 0x15dbdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x15DBE0u;
label_15dbe0:
    // 0x15dbe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dbe4:
    // 0x15dbe4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15dbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15dbe8:
    // 0x15dbe8: 0xc066d10  jal         func_19B440
label_15dbec:
    if (ctx->pc == 0x15DBECu) {
        ctx->pc = 0x15DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBE8u;
        // 0x15dbec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBF0u;
        goto label_15dbf0;
    }
    ctx->pc = 0x15DBE8u;
    SET_GPR_U32(ctx, 31, 0x15DBF0u);
    ctx->pc = 0x15DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBE8u;
    // 0x15dbec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15DBF0u;
label_15dbf0:
    // 0x15dbf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dbf4:
    // 0x15dbf4: 0xc066d30  jal         func_19B4C0
label_15dbf8:
    if (ctx->pc == 0x15DBF8u) {
        ctx->pc = 0x15DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBF4u;
        // 0x15dbf8: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBFCu;
        goto label_15dbfc;
    }
    ctx->pc = 0x15DBF4u;
    SET_GPR_U32(ctx, 31, 0x15DBFCu);
    ctx->pc = 0x15DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBF4u;
    // 0x15dbf8: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x15DBFCu;
label_15dbfc:
    // 0x15dbfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dc00:
    // 0x15dc00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15dc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15dc04:
    // 0x15dc04: 0xc066d10  jal         func_19B440
label_15dc08:
    if (ctx->pc == 0x15DC08u) {
        ctx->pc = 0x15DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC04u;
        // 0x15dc08: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC0Cu;
        goto label_15dc0c;
    }
    ctx->pc = 0x15DC04u;
    SET_GPR_U32(ctx, 31, 0x15DC0Cu);
    ctx->pc = 0x15DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC04u;
    // 0x15dc08: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15DC0Cu;
label_15dc0c:
    // 0x15dc0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dc10:
    // 0x15dc10: 0xc066ce8  jal         func_19B3A0
label_15dc14:
    if (ctx->pc == 0x15DC14u) {
        ctx->pc = 0x15DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC10u;
        // 0x15dc14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC18u;
        goto label_15dc18;
    }
    ctx->pc = 0x15DC10u;
    SET_GPR_U32(ctx, 31, 0x15DC18u);
    ctx->pc = 0x15DC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC10u;
    // 0x15dc14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3A0u;
    { ctx->pc = 0x19b3a0; return; }
    ctx->pc = 0x15DC18u;
label_15dc18:
    // 0x15dc18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x15dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_15dc1c:
    // 0x15dc1c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x15dc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_15dc20:
    // 0x15dc20: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x15dc20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_15dc24:
    // 0x15dc24: 0x27b60088  addiu       $s6, $sp, 0x88
    ctx->pc = 0x15dc24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_15dc28:
    // 0x15dc28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15dc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_15dc2c:
    // 0x15dc2c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15dc30:
    // 0x15dc30: 0xffa30080  sd          $v1, 0x80($sp)
    ctx->pc = 0x15dc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 3));
label_15dc34:
    // 0x15dc34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dc38:
    // 0x15dc38: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x15dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
label_15dc3c:
    // 0x15dc3c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15dc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15dc40:
    // 0x15dc40: 0xc066d5c  jal         func_19B570
label_15dc44:
    if (ctx->pc == 0x15DC44u) {
        ctx->pc = 0x15DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC40u;
        // 0x15dc44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC48u;
        goto label_15dc48;
    }
    ctx->pc = 0x15DC40u;
    SET_GPR_U32(ctx, 31, 0x15DC48u);
    ctx->pc = 0x15DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC40u;
    // 0x15dc44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15DC48u;
label_15dc48:
    // 0x15dc48: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x15dc48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_15dc4c:
    // 0x15dc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dc50:
    // 0x15dc50: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15dc54:
    // 0x15dc54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15dc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dc58:
    // 0x15dc58: 0xffa20080  sd          $v0, 0x80($sp)
    ctx->pc = 0x15dc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
label_15dc5c:
    // 0x15dc5c: 0xc066d5c  jal         func_19B570
label_15dc60:
    if (ctx->pc == 0x15DC60u) {
        ctx->pc = 0x15DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC5Cu;
        // 0x15dc60: 0xfec00000  sd          $zero, 0x0($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC64u;
        goto label_15dc64;
    }
    ctx->pc = 0x15DC5Cu;
    SET_GPR_U32(ctx, 31, 0x15DC64u);
    ctx->pc = 0x15DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC5Cu;
    // 0x15dc60: 0xfec00000  sd          $zero, 0x0($s6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x15DC64u;
label_15dc64:
    // 0x15dc64: 0xc066cfe  jal         func_19B3F8
label_15dc68:
    if (ctx->pc == 0x15DC68u) {
        ctx->pc = 0x15DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC64u;
        // 0x15dc68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC6Cu;
        goto label_15dc6c;
    }
    ctx->pc = 0x15DC64u;
    SET_GPR_U32(ctx, 31, 0x15DC6Cu);
    ctx->pc = 0x15DC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC64u;
    // 0x15dc68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3F8u;
    { ctx->pc = 0x19b3f8; return; }
    ctx->pc = 0x15DC6Cu;
label_15dc6c:
    // 0x15dc6c: 0xc066c46  jal         func_19B118
label_15dc70:
    if (ctx->pc == 0x15DC70u) {
        ctx->pc = 0x15DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC6Cu;
        // 0x15dc70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC74u;
        goto label_15dc74;
    }
    ctx->pc = 0x15DC6Cu;
    SET_GPR_U32(ctx, 31, 0x15DC74u);
    ctx->pc = 0x15DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC6Cu;
    // 0x15dc70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x15DC74u;
label_15dc74:
    // 0x15dc74: 0x12a00036  beqz        $s5, . + 4 + (0x36 << 2)
label_15dc78:
    if (ctx->pc == 0x15DC78u) {
        ctx->pc = 0x15DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC74u;
        // 0x15dc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC7Cu;
        goto label_15dc7c;
    }
    ctx->pc = 0x15DC74u;
    {
        const bool branch_taken_0x15dc74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC74u;
        // 0x15dc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc74) {
            ctx->pc = 0x15DD50u;
            goto label_15dd50;
        }
    }
    ctx->pc = 0x15DC7Cu;
label_15dc7c:
    // 0x15dc7c: 0xc066c5c  jal         func_19B170
label_15dc80:
    if (ctx->pc == 0x15DC80u) {
        ctx->pc = 0x15DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC7Cu;
        // 0x15dc80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC84u;
        goto label_15dc84;
    }
    ctx->pc = 0x15DC7Cu;
    SET_GPR_U32(ctx, 31, 0x15DC84u);
    ctx->pc = 0x15DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC7Cu;
    // 0x15dc80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x15DC84u;
label_15dc84:
    // 0x15dc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dc88:
    // 0x15dc88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15dc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15dc8c:
    // 0x15dc8c: 0xc066d10  jal         func_19B440
label_15dc90:
    if (ctx->pc == 0x15DC90u) {
        ctx->pc = 0x15DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC8Cu;
        // 0x15dc90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC94u;
        goto label_15dc94;
    }
    ctx->pc = 0x15DC8Cu;
    SET_GPR_U32(ctx, 31, 0x15DC94u);
    ctx->pc = 0x15DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC8Cu;
    // 0x15dc90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15DC94u;
label_15dc94:
    // 0x15dc94: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x15dc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15dc98:
    // 0x15dc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dc9c:
    // 0x15dc9c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x15dc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_15dca0:
    // 0x15dca0: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x15dca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_15dca4:
    // 0x15dca4: 0xc066cae  jal         func_19B2B8
label_15dca8:
    if (ctx->pc == 0x15DCA8u) {
        ctx->pc = 0x15DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCA4u;
        // 0x15dca8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DCACu;
        goto label_15dcac;
    }
    ctx->pc = 0x15DCA4u;
    SET_GPR_U32(ctx, 31, 0x15DCACu);
    ctx->pc = 0x15DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCA4u;
    // 0x15dca8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B2B8u;
    { ctx->pc = 0x19b2b8; return; }
    ctx->pc = 0x15DCACu;
label_15dcac:
    // 0x15dcac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dcb0:
    // 0x15dcb0: 0xc066d46  jal         func_19B518
label_15dcb4:
    if (ctx->pc == 0x15DCB4u) {
        ctx->pc = 0x15DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCB0u;
        // 0x15dcb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DCB8u;
        goto label_15dcb8;
    }
    ctx->pc = 0x15DCB0u;
    SET_GPR_U32(ctx, 31, 0x15DCB8u);
    ctx->pc = 0x15DCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCB0u;
    // 0x15dcb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15DCB8u;
label_15dcb8:
    // 0x15dcb8: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x15dcb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_15dcbc:
    // 0x15dcbc: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x15dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_15dcc0:
    // 0x15dcc0: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x15dcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
label_15dcc4:
    // 0x15dcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dcc8:
    // 0x15dcc8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15dcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_15dccc:
    // 0x15dccc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15dcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15dcd0:
    // 0x15dcd0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x15dcd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_15dcd4:
    // 0x15dcd4: 0xc066d46  jal         func_19B518
label_15dcd8:
    if (ctx->pc == 0x15DCD8u) {
        ctx->pc = 0x15DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCD4u;
        // 0x15dcd8: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DCDCu;
        goto label_15dcdc;
    }
    ctx->pc = 0x15DCD4u;
    SET_GPR_U32(ctx, 31, 0x15DCDCu);
    ctx->pc = 0x15DCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCD4u;
    // 0x15dcd8: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15DCDCu;
label_15dcdc:
    // 0x15dcdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dce0:
    // 0x15dce0: 0xc066d46  jal         func_19B518
label_15dce4:
    if (ctx->pc == 0x15DCE4u) {
        ctx->pc = 0x15DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCE0u;
        // 0x15dce4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DCE8u;
        goto label_15dce8;
    }
    ctx->pc = 0x15DCE0u;
    SET_GPR_U32(ctx, 31, 0x15DCE8u);
    ctx->pc = 0x15DCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCE0u;
    // 0x15dce4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15DCE8u;
label_15dce8:
    // 0x15dce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dcec:
    // 0x15dcec: 0xc066d46  jal         func_19B518
label_15dcf0:
    if (ctx->pc == 0x15DCF0u) {
        ctx->pc = 0x15DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCECu;
        // 0x15dcf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DCF4u;
        goto label_15dcf4;
    }
    ctx->pc = 0x15DCECu;
    SET_GPR_U32(ctx, 31, 0x15DCF4u);
    ctx->pc = 0x15DCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCECu;
    // 0x15dcf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B518u;
    { ctx->pc = 0x19b518; return; }
    ctx->pc = 0x15DCF4u;
label_15dcf4:
    // 0x15dcf4: 0xc066cd2  jal         func_19B348
label_15dcf8:
    if (ctx->pc == 0x15DCF8u) {
        ctx->pc = 0x15DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCF4u;
        // 0x15dcf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DCFCu;
        goto label_15dcfc;
    }
    ctx->pc = 0x15DCF4u;
    SET_GPR_U32(ctx, 31, 0x15DCFCu);
    ctx->pc = 0x15DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCF4u;
    // 0x15dcf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B348u;
    { ctx->pc = 0x19b348; return; }
    ctx->pc = 0x15DCFCu;
label_15dcfc:
    // 0x15dcfc: 0xc066c46  jal         func_19B118
label_15dd00:
    if (ctx->pc == 0x15DD00u) {
        ctx->pc = 0x15DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCFCu;
        // 0x15dd00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD04u;
        goto label_15dd04;
    }
    ctx->pc = 0x15DCFCu;
    SET_GPR_U32(ctx, 31, 0x15DD04u);
    ctx->pc = 0x15DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCFCu;
    // 0x15dd00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x15DD04u;
label_15dd04:
    // 0x15dd04: 0x8eb000c0  lw          $s0, 0xC0($s5)
    ctx->pc = 0x15dd04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
label_15dd08:
    // 0x15dd08: 0x1000000d  b           . + 4 + (0xD << 2)
label_15dd0c:
    if (ctx->pc == 0x15DD0Cu) {
        ctx->pc = 0x15DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD08u;
        // 0x15dd0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD10u;
        goto label_15dd10;
    }
    ctx->pc = 0x15DD08u;
    {
        const bool branch_taken_0x15dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD08u;
        // 0x15dd0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd08) {
            ctx->pc = 0x15DD40u;
            goto label_15dd40;
        }
    }
    ctx->pc = 0x15DD10u;
label_15dd10:
    // 0x15dd10: 0x0  nop
    ctx->pc = 0x15dd10u;
    // NOP
label_15dd14:
    // 0x15dd14: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15dd14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15dd18:
    // 0x15dd18: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15dd1c:
    if (ctx->pc == 0x15DD1Cu) {
        ctx->pc = 0x15DD20u;
        goto label_15dd20;
    }
    ctx->pc = 0x15DD18u;
    {
        const bool branch_taken_0x15dd18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dd18) {
            ctx->pc = 0x15DD38u;
            goto label_15dd38;
        }
    }
    ctx->pc = 0x15DD20u;
label_15dd20:
    // 0x15dd20: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x15dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15dd24:
    // 0x15dd24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dd28:
    // 0x15dd28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15dd28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dd2c:
    // 0x15dd2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15dd2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dd30:
    // 0x15dd30: 0xc066c72  jal         func_19B1C8
label_15dd34:
    if (ctx->pc == 0x15DD34u) {
        ctx->pc = 0x15DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD30u;
        // 0x15dd34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD38u;
        goto label_15dd38;
    }
    ctx->pc = 0x15DD30u;
    SET_GPR_U32(ctx, 31, 0x15DD38u);
    ctx->pc = 0x15DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD30u;
    // 0x15dd34: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15DD38u;
label_15dd38:
    // 0x15dd38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15dd38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15dd3c:
    // 0x15dd3c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15dd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15dd40:
    // 0x15dd40: 0x82a300be  lb          $v1, 0xBE($s5)
    ctx->pc = 0x15dd40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 190)));
label_15dd44:
    // 0x15dd44: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x15dd44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15dd48:
    // 0x15dd48: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_15dd4c:
    if (ctx->pc == 0x15DD4Cu) {
        ctx->pc = 0x15DD50u;
        goto label_15dd50;
    }
    ctx->pc = 0x15DD48u;
    {
        const bool branch_taken_0x15dd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dd48) {
            ctx->pc = 0x15DD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dd10;
        }
    }
    ctx->pc = 0x15DD50u;
label_15dd50:
    // 0x15dd50: 0x12800067  beqz        $s4, . + 4 + (0x67 << 2)
label_15dd54:
    if (ctx->pc == 0x15DD54u) {
        ctx->pc = 0x15DD58u;
        goto label_15dd58;
    }
    ctx->pc = 0x15DD50u;
    {
        const bool branch_taken_0x15dd50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dd50) {
            ctx->pc = 0x15DEF0u;
            { ctx->pc = 0x15def0; return; }
        }
    }
    ctx->pc = 0x15DD58u;
label_15dd58:
    // 0x15dd58: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x15dd58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_15dd5c:
    // 0x15dd5c: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x15dd5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_15dd60:
    // 0x15dd60: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
label_15dd64:
    if (ctx->pc == 0x15DD64u) {
        ctx->pc = 0x15DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD60u;
        // 0x15dd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD68u;
        goto label_15dd68;
    }
    ctx->pc = 0x15DD60u;
    {
        const bool branch_taken_0x15dd60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD60u;
        // 0x15dd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd60) {
            ctx->pc = 0x15DE0Cu;
            { ctx->pc = 0x15de0c; return; }
        }
    }
    ctx->pc = 0x15DD68u;
label_15dd68:
    // 0x15dd68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dd6c:
    // 0x15dd6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15dd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15dd70:
    // 0x15dd70: 0xc066c5c  jal         func_19B170
label_15dd74:
    if (ctx->pc == 0x15DD74u) {
        ctx->pc = 0x15DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD70u;
        // 0x15dd74: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD78u;
        goto label_15dd78;
    }
    ctx->pc = 0x15DD70u;
    SET_GPR_U32(ctx, 31, 0x15DD78u);
    ctx->pc = 0x15DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD70u;
    // 0x15dd74: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x15DD78u;
label_15dd78:
    // 0x15dd78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dd7c:
    // 0x15dd7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15dd80:
    // 0x15dd80: 0xc066d10  jal         func_19B440
label_15dd84:
    if (ctx->pc == 0x15DD84u) {
        ctx->pc = 0x15DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD80u;
        // 0x15dd84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD88u;
        goto label_15dd88;
    }
    ctx->pc = 0x15DD80u;
    SET_GPR_U32(ctx, 31, 0x15DD88u);
    ctx->pc = 0x15DD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD80u;
    // 0x15dd84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15DD88u;
label_15dd88:
    // 0x15dd88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dd8c:
    // 0x15dd8c: 0xc066d30  jal         func_19B4C0
label_15dd90:
    if (ctx->pc == 0x15DD90u) {
        ctx->pc = 0x15DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD8Cu;
        // 0x15dd90: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DD94u;
        goto label_15dd94;
    }
    ctx->pc = 0x15DD8Cu;
    SET_GPR_U32(ctx, 31, 0x15DD94u);
    ctx->pc = 0x15DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD8Cu;
    // 0x15dd90: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x15DD94u;
label_15dd94:
    // 0x15dd94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dd98:
    // 0x15dd98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15dd9c:
    // 0x15dd9c: 0xc066d10  jal         func_19B440
label_15dda0:
    if (ctx->pc == 0x15DDA0u) {
        ctx->pc = 0x15DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD9Cu;
        // 0x15dda0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DDA4u;
        goto label_15dda4;
    }
    ctx->pc = 0x15DD9Cu;
    SET_GPR_U32(ctx, 31, 0x15DDA4u);
    ctx->pc = 0x15DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD9Cu;
    // 0x15dda0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15DDA4u;
label_15dda4:
    // 0x15dda4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15dda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dda8:
    // 0x15dda8: 0xc066ce8  jal         func_19B3A0
label_15ddac:
    if (ctx->pc == 0x15DDACu) {
        ctx->pc = 0x15DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDA8u;
        // 0x15ddac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DDB0u;
        goto label_15ddb0;
    }
    ctx->pc = 0x15DDA8u;
    SET_GPR_U32(ctx, 31, 0x15DDB0u);
    ctx->pc = 0x15DDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDA8u;
    // 0x15ddac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3A0u;
    { ctx->pc = 0x19b3a0; return; }
    ctx->pc = 0x15DDB0u;
label_15ddb0:
    // 0x15ddb0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x15ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_15ddb4:
    // 0x15ddb4: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x15ddb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_15ddb8:
    // 0x15ddb8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x15ddb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_15ddbc:
    // 0x15ddbc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15ddbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15ddc0:
    // 0x15ddc0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15ddc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_15ddc4:
    // 0x15ddc4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15ddc8:
    // 0x15ddc8: 0xffa30080  sd          $v1, 0x80($sp)
    ctx->pc = 0x15ddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 3));
label_15ddcc:
    // 0x15ddcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ddccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15ddd0u;
    return;
}
