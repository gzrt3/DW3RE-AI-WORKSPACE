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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part455(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25d580u: goto label_25d580;
        case 0x25d584u: goto label_25d584;
        case 0x25d588u: goto label_25d588;
        case 0x25d58cu: goto label_25d58c;
        case 0x25d590u: goto label_25d590;
        case 0x25d594u: goto label_25d594;
        case 0x25d598u: goto label_25d598;
        case 0x25d59cu: goto label_25d59c;
        case 0x25d5a0u: goto label_25d5a0;
        case 0x25d5a4u: goto label_25d5a4;
        case 0x25d5a8u: goto label_25d5a8;
        case 0x25d5acu: goto label_25d5ac;
        case 0x25d5b0u: goto label_25d5b0;
        case 0x25d5b4u: goto label_25d5b4;
        case 0x25d5b8u: goto label_25d5b8;
        case 0x25d5bcu: goto label_25d5bc;
        case 0x25d5c0u: goto label_25d5c0;
        case 0x25d5c4u: goto label_25d5c4;
        case 0x25d5c8u: goto label_25d5c8;
        case 0x25d5ccu: goto label_25d5cc;
        case 0x25d5d0u: goto label_25d5d0;
        case 0x25d5d4u: goto label_25d5d4;
        case 0x25d5d8u: goto label_25d5d8;
        case 0x25d5dcu: goto label_25d5dc;
        case 0x25d5e0u: goto label_25d5e0;
        case 0x25d5e4u: goto label_25d5e4;
        case 0x25d5e8u: goto label_25d5e8;
        case 0x25d5ecu: goto label_25d5ec;
        case 0x25d5f0u: goto label_25d5f0;
        case 0x25d5f4u: goto label_25d5f4;
        case 0x25d5f8u: goto label_25d5f8;
        case 0x25d5fcu: goto label_25d5fc;
        case 0x25d600u: goto label_25d600;
        case 0x25d604u: goto label_25d604;
        case 0x25d608u: goto label_25d608;
        case 0x25d60cu: goto label_25d60c;
        case 0x25d610u: goto label_25d610;
        case 0x25d614u: goto label_25d614;
        case 0x25d618u: goto label_25d618;
        case 0x25d61cu: goto label_25d61c;
        case 0x25d620u: goto label_25d620;
        case 0x25d624u: goto label_25d624;
        case 0x25d628u: goto label_25d628;
        case 0x25d62cu: goto label_25d62c;
        case 0x25d630u: goto label_25d630;
        case 0x25d634u: goto label_25d634;
        case 0x25d638u: goto label_25d638;
        case 0x25d63cu: goto label_25d63c;
        case 0x25d640u: goto label_25d640;
        case 0x25d644u: goto label_25d644;
        case 0x25d648u: goto label_25d648;
        case 0x25d64cu: goto label_25d64c;
        case 0x25d650u: goto label_25d650;
        case 0x25d654u: goto label_25d654;
        case 0x25d658u: goto label_25d658;
        case 0x25d65cu: goto label_25d65c;
        case 0x25d660u: goto label_25d660;
        case 0x25d664u: goto label_25d664;
        case 0x25d668u: goto label_25d668;
        case 0x25d66cu: goto label_25d66c;
        case 0x25d670u: goto label_25d670;
        case 0x25d674u: goto label_25d674;
        case 0x25d678u: goto label_25d678;
        case 0x25d67cu: goto label_25d67c;
        case 0x25d680u: goto label_25d680;
        case 0x25d684u: goto label_25d684;
        case 0x25d688u: goto label_25d688;
        case 0x25d68cu: goto label_25d68c;
        case 0x25d690u: goto label_25d690;
        case 0x25d694u: goto label_25d694;
        case 0x25d698u: goto label_25d698;
        case 0x25d69cu: goto label_25d69c;
        case 0x25d6a0u: goto label_25d6a0;
        case 0x25d6a4u: goto label_25d6a4;
        case 0x25d6a8u: goto label_25d6a8;
        case 0x25d6acu: goto label_25d6ac;
        case 0x25d6b0u: goto label_25d6b0;
        case 0x25d6b4u: goto label_25d6b4;
        case 0x25d6b8u: goto label_25d6b8;
        case 0x25d6bcu: goto label_25d6bc;
        case 0x25d6c0u: goto label_25d6c0;
        case 0x25d6c4u: goto label_25d6c4;
        case 0x25d6c8u: goto label_25d6c8;
        case 0x25d6ccu: goto label_25d6cc;
        case 0x25d6d0u: goto label_25d6d0;
        case 0x25d6d4u: goto label_25d6d4;
        case 0x25d6d8u: goto label_25d6d8;
        case 0x25d6dcu: goto label_25d6dc;
        case 0x25d6e0u: goto label_25d6e0;
        case 0x25d6e4u: goto label_25d6e4;
        case 0x25d6e8u: goto label_25d6e8;
        case 0x25d6ecu: goto label_25d6ec;
        case 0x25d6f0u: goto label_25d6f0;
        case 0x25d6f4u: goto label_25d6f4;
        case 0x25d6f8u: goto label_25d6f8;
        case 0x25d6fcu: goto label_25d6fc;
        case 0x25d700u: goto label_25d700;
        case 0x25d704u: goto label_25d704;
        case 0x25d708u: goto label_25d708;
        case 0x25d70cu: goto label_25d70c;
        case 0x25d710u: goto label_25d710;
        case 0x25d714u: goto label_25d714;
        case 0x25d718u: goto label_25d718;
        case 0x25d71cu: goto label_25d71c;
        case 0x25d720u: goto label_25d720;
        case 0x25d724u: goto label_25d724;
        case 0x25d728u: goto label_25d728;
        case 0x25d72cu: goto label_25d72c;
        case 0x25d730u: goto label_25d730;
        case 0x25d734u: goto label_25d734;
        case 0x25d738u: goto label_25d738;
        case 0x25d73cu: goto label_25d73c;
        case 0x25d740u: goto label_25d740;
        case 0x25d744u: goto label_25d744;
        case 0x25d748u: goto label_25d748;
        case 0x25d74cu: goto label_25d74c;
        case 0x25d750u: goto label_25d750;
        case 0x25d754u: goto label_25d754;
        case 0x25d758u: goto label_25d758;
        case 0x25d75cu: goto label_25d75c;
        case 0x25d760u: goto label_25d760;
        case 0x25d764u: goto label_25d764;
        case 0x25d768u: goto label_25d768;
        case 0x25d76cu: goto label_25d76c;
        case 0x25d770u: goto label_25d770;
        case 0x25d774u: goto label_25d774;
        case 0x25d778u: goto label_25d778;
        case 0x25d77cu: goto label_25d77c;
        case 0x25d780u: goto label_25d780;
        case 0x25d784u: goto label_25d784;
        case 0x25d788u: goto label_25d788;
        case 0x25d78cu: goto label_25d78c;
        case 0x25d790u: goto label_25d790;
        case 0x25d794u: goto label_25d794;
        case 0x25d798u: goto label_25d798;
        case 0x25d79cu: goto label_25d79c;
        case 0x25d7a0u: goto label_25d7a0;
        case 0x25d7a4u: goto label_25d7a4;
        case 0x25d7a8u: goto label_25d7a8;
        case 0x25d7acu: goto label_25d7ac;
        case 0x25d7b0u: goto label_25d7b0;
        case 0x25d7b4u: goto label_25d7b4;
        case 0x25d7b8u: goto label_25d7b8;
        case 0x25d7bcu: goto label_25d7bc;
        case 0x25d7c0u: goto label_25d7c0;
        case 0x25d7c4u: goto label_25d7c4;
        case 0x25d7c8u: goto label_25d7c8;
        case 0x25d7ccu: goto label_25d7cc;
        case 0x25d7d0u: goto label_25d7d0;
        case 0x25d7d4u: goto label_25d7d4;
        case 0x25d7d8u: goto label_25d7d8;
        case 0x25d7dcu: goto label_25d7dc;
        case 0x25d7e0u: goto label_25d7e0;
        case 0x25d7e4u: goto label_25d7e4;
        case 0x25d7e8u: goto label_25d7e8;
        case 0x25d7ecu: goto label_25d7ec;
        case 0x25d7f0u: goto label_25d7f0;
        case 0x25d7f4u: goto label_25d7f4;
        case 0x25d7f8u: goto label_25d7f8;
        case 0x25d7fcu: goto label_25d7fc;
        case 0x25d800u: goto label_25d800;
        case 0x25d804u: goto label_25d804;
        case 0x25d808u: goto label_25d808;
        case 0x25d80cu: goto label_25d80c;
        case 0x25d810u: goto label_25d810;
        case 0x25d814u: goto label_25d814;
        case 0x25d818u: goto label_25d818;
        case 0x25d81cu: goto label_25d81c;
        case 0x25d820u: goto label_25d820;
        case 0x25d824u: goto label_25d824;
        case 0x25d828u: goto label_25d828;
        case 0x25d82cu: goto label_25d82c;
        case 0x25d830u: goto label_25d830;
        case 0x25d834u: goto label_25d834;
        case 0x25d838u: goto label_25d838;
        case 0x25d83cu: goto label_25d83c;
        case 0x25d840u: goto label_25d840;
        case 0x25d844u: goto label_25d844;
        case 0x25d848u: goto label_25d848;
        case 0x25d84cu: goto label_25d84c;
        case 0x25d850u: goto label_25d850;
        case 0x25d854u: goto label_25d854;
        case 0x25d858u: goto label_25d858;
        case 0x25d85cu: goto label_25d85c;
        case 0x25d860u: goto label_25d860;
        case 0x25d864u: goto label_25d864;
        case 0x25d868u: goto label_25d868;
        case 0x25d86cu: goto label_25d86c;
        case 0x25d870u: goto label_25d870;
        case 0x25d874u: goto label_25d874;
        case 0x25d878u: goto label_25d878;
        case 0x25d87cu: goto label_25d87c;
        case 0x25d880u: goto label_25d880;
        case 0x25d884u: goto label_25d884;
        case 0x25d888u: goto label_25d888;
        case 0x25d88cu: goto label_25d88c;
        case 0x25d890u: goto label_25d890;
        case 0x25d894u: goto label_25d894;
        case 0x25d898u: goto label_25d898;
        case 0x25d89cu: goto label_25d89c;
        case 0x25d8a0u: goto label_25d8a0;
        case 0x25d8a4u: goto label_25d8a4;
        case 0x25d8a8u: goto label_25d8a8;
        case 0x25d8acu: goto label_25d8ac;
        case 0x25d8b0u: goto label_25d8b0;
        case 0x25d8b4u: goto label_25d8b4;
        case 0x25d8b8u: goto label_25d8b8;
        case 0x25d8bcu: goto label_25d8bc;
        case 0x25d8c0u: goto label_25d8c0;
        case 0x25d8c4u: goto label_25d8c4;
        case 0x25d8c8u: goto label_25d8c8;
        case 0x25d8ccu: goto label_25d8cc;
        case 0x25d8d0u: goto label_25d8d0;
        case 0x25d8d4u: goto label_25d8d4;
        case 0x25d8d8u: goto label_25d8d8;
        case 0x25d8dcu: goto label_25d8dc;
        case 0x25d8e0u: goto label_25d8e0;
        case 0x25d8e4u: goto label_25d8e4;
        case 0x25d8e8u: goto label_25d8e8;
        case 0x25d8ecu: goto label_25d8ec;
        case 0x25d8f0u: goto label_25d8f0;
        case 0x25d8f4u: goto label_25d8f4;
        case 0x25d8f8u: goto label_25d8f8;
        case 0x25d8fcu: goto label_25d8fc;
        case 0x25d900u: goto label_25d900;
        case 0x25d904u: goto label_25d904;
        case 0x25d908u: goto label_25d908;
        case 0x25d90cu: goto label_25d90c;
        case 0x25d910u: goto label_25d910;
        case 0x25d914u: goto label_25d914;
        case 0x25d918u: goto label_25d918;
        case 0x25d91cu: goto label_25d91c;
        case 0x25d920u: goto label_25d920;
        case 0x25d924u: goto label_25d924;
        case 0x25d928u: goto label_25d928;
        case 0x25d92cu: goto label_25d92c;
        case 0x25d930u: goto label_25d930;
        case 0x25d934u: goto label_25d934;
        case 0x25d938u: goto label_25d938;
        case 0x25d93cu: goto label_25d93c;
        case 0x25d940u: goto label_25d940;
        case 0x25d944u: goto label_25d944;
        case 0x25d948u: goto label_25d948;
        case 0x25d94cu: goto label_25d94c;
        case 0x25d950u: goto label_25d950;
        case 0x25d954u: goto label_25d954;
        case 0x25d958u: goto label_25d958;
        case 0x25d95cu: goto label_25d95c;
        case 0x25d960u: goto label_25d960;
        case 0x25d964u: goto label_25d964;
        case 0x25d968u: goto label_25d968;
        case 0x25d96cu: goto label_25d96c;
        case 0x25d970u: goto label_25d970;
        case 0x25d974u: goto label_25d974;
        case 0x25d978u: goto label_25d978;
        case 0x25d97cu: goto label_25d97c;
        case 0x25d980u: goto label_25d980;
        case 0x25d984u: goto label_25d984;
        case 0x25d988u: goto label_25d988;
        case 0x25d98cu: goto label_25d98c;
        case 0x25d990u: goto label_25d990;
        case 0x25d994u: goto label_25d994;
        case 0x25d998u: goto label_25d998;
        case 0x25d99cu: goto label_25d99c;
        case 0x25d9a0u: goto label_25d9a0;
        case 0x25d9a4u: goto label_25d9a4;
        case 0x25d9a8u: goto label_25d9a8;
        case 0x25d9acu: goto label_25d9ac;
        case 0x25d9b0u: goto label_25d9b0;
        case 0x25d9b4u: goto label_25d9b4;
        case 0x25d9b8u: goto label_25d9b8;
        case 0x25d9bcu: goto label_25d9bc;
        case 0x25d9c0u: goto label_25d9c0;
        case 0x25d9c4u: goto label_25d9c4;
        case 0x25d9c8u: goto label_25d9c8;
        case 0x25d9ccu: goto label_25d9cc;
        case 0x25d9d0u: goto label_25d9d0;
        case 0x25d9d4u: goto label_25d9d4;
        case 0x25d9d8u: goto label_25d9d8;
        case 0x25d9dcu: goto label_25d9dc;
        case 0x25d9e0u: goto label_25d9e0;
        case 0x25d9e4u: goto label_25d9e4;
        case 0x25d9e8u: goto label_25d9e8;
        case 0x25d9ecu: goto label_25d9ec;
        case 0x25d9f0u: goto label_25d9f0;
        case 0x25d9f4u: goto label_25d9f4;
        case 0x25d9f8u: goto label_25d9f8;
        case 0x25d9fcu: goto label_25d9fc;
        case 0x25da00u: goto label_25da00;
        case 0x25da04u: goto label_25da04;
        case 0x25da08u: goto label_25da08;
        case 0x25da0cu: goto label_25da0c;
        case 0x25da10u: goto label_25da10;
        case 0x25da14u: goto label_25da14;
        case 0x25da18u: goto label_25da18;
        case 0x25da1cu: goto label_25da1c;
        case 0x25da20u: goto label_25da20;
        case 0x25da24u: goto label_25da24;
        case 0x25da28u: goto label_25da28;
        case 0x25da2cu: goto label_25da2c;
        case 0x25da30u: goto label_25da30;
        case 0x25da34u: goto label_25da34;
        case 0x25da38u: goto label_25da38;
        case 0x25da3cu: goto label_25da3c;
        case 0x25da40u: goto label_25da40;
        case 0x25da44u: goto label_25da44;
        case 0x25da48u: goto label_25da48;
        case 0x25da4cu: goto label_25da4c;
        case 0x25da50u: goto label_25da50;
        case 0x25da54u: goto label_25da54;
        case 0x25da58u: goto label_25da58;
        case 0x25da5cu: goto label_25da5c;
        case 0x25da60u: goto label_25da60;
        case 0x25da64u: goto label_25da64;
        case 0x25da68u: goto label_25da68;
        case 0x25da6cu: goto label_25da6c;
        case 0x25da70u: goto label_25da70;
        case 0x25da74u: goto label_25da74;
        case 0x25da78u: goto label_25da78;
        case 0x25da7cu: goto label_25da7c;
        case 0x25da80u: goto label_25da80;
        case 0x25da84u: goto label_25da84;
        case 0x25da88u: goto label_25da88;
        case 0x25da8cu: goto label_25da8c;
        case 0x25da90u: goto label_25da90;
        case 0x25da94u: goto label_25da94;
        case 0x25da98u: goto label_25da98;
        case 0x25da9cu: goto label_25da9c;
        case 0x25daa0u: goto label_25daa0;
        case 0x25daa4u: goto label_25daa4;
        case 0x25daa8u: goto label_25daa8;
        case 0x25daacu: goto label_25daac;
        case 0x25dab0u: goto label_25dab0;
        case 0x25dab4u: goto label_25dab4;
        case 0x25dab8u: goto label_25dab8;
        case 0x25dabcu: goto label_25dabc;
        case 0x25dac0u: goto label_25dac0;
        case 0x25dac4u: goto label_25dac4;
        case 0x25dac8u: goto label_25dac8;
        case 0x25daccu: goto label_25dacc;
        case 0x25dad0u: goto label_25dad0;
        case 0x25dad4u: goto label_25dad4;
        case 0x25dad8u: goto label_25dad8;
        case 0x25dadcu: goto label_25dadc;
        case 0x25dae0u: goto label_25dae0;
        case 0x25dae4u: goto label_25dae4;
        case 0x25dae8u: goto label_25dae8;
        case 0x25daecu: goto label_25daec;
        case 0x25daf0u: goto label_25daf0;
        case 0x25daf4u: goto label_25daf4;
        case 0x25daf8u: goto label_25daf8;
        case 0x25dafcu: goto label_25dafc;
        case 0x25db00u: goto label_25db00;
        case 0x25db04u: goto label_25db04;
        case 0x25db08u: goto label_25db08;
        case 0x25db0cu: goto label_25db0c;
        case 0x25db10u: goto label_25db10;
        case 0x25db14u: goto label_25db14;
        case 0x25db18u: goto label_25db18;
        case 0x25db1cu: goto label_25db1c;
        case 0x25db20u: goto label_25db20;
        case 0x25db24u: goto label_25db24;
        case 0x25db28u: goto label_25db28;
        case 0x25db2cu: goto label_25db2c;
        case 0x25db30u: goto label_25db30;
        case 0x25db34u: goto label_25db34;
        case 0x25db38u: goto label_25db38;
        case 0x25db3cu: goto label_25db3c;
        case 0x25db40u: goto label_25db40;
        case 0x25db44u: goto label_25db44;
        case 0x25db48u: goto label_25db48;
        case 0x25db4cu: goto label_25db4c;
        case 0x25db50u: goto label_25db50;
        case 0x25db54u: goto label_25db54;
        case 0x25db58u: goto label_25db58;
        case 0x25db5cu: goto label_25db5c;
        case 0x25db60u: goto label_25db60;
        case 0x25db64u: goto label_25db64;
        case 0x25db68u: goto label_25db68;
        case 0x25db6cu: goto label_25db6c;
        case 0x25db70u: goto label_25db70;
        case 0x25db74u: goto label_25db74;
        case 0x25db78u: goto label_25db78;
        case 0x25db7cu: goto label_25db7c;
        case 0x25db80u: goto label_25db80;
        case 0x25db84u: goto label_25db84;
        case 0x25db88u: goto label_25db88;
        case 0x25db8cu: goto label_25db8c;
        case 0x25db90u: goto label_25db90;
        case 0x25db94u: goto label_25db94;
        case 0x25db98u: goto label_25db98;
        case 0x25db9cu: goto label_25db9c;
        case 0x25dba0u: goto label_25dba0;
        case 0x25dba4u: goto label_25dba4;
        case 0x25dba8u: goto label_25dba8;
        case 0x25dbacu: goto label_25dbac;
        case 0x25dbb0u: goto label_25dbb0;
        case 0x25dbb4u: goto label_25dbb4;
        case 0x25dbb8u: goto label_25dbb8;
        case 0x25dbbcu: goto label_25dbbc;
        case 0x25dbc0u: goto label_25dbc0;
        case 0x25dbc4u: goto label_25dbc4;
        case 0x25dbc8u: goto label_25dbc8;
        case 0x25dbccu: goto label_25dbcc;
        case 0x25dbd0u: goto label_25dbd0;
        case 0x25dbd4u: goto label_25dbd4;
        case 0x25dbd8u: goto label_25dbd8;
        case 0x25dbdcu: goto label_25dbdc;
        case 0x25dbe0u: goto label_25dbe0;
        case 0x25dbe4u: goto label_25dbe4;
        case 0x25dbe8u: goto label_25dbe8;
        case 0x25dbecu: goto label_25dbec;
        case 0x25dbf0u: goto label_25dbf0;
        case 0x25dbf4u: goto label_25dbf4;
        case 0x25dbf8u: goto label_25dbf8;
        case 0x25dbfcu: goto label_25dbfc;
        case 0x25dc00u: goto label_25dc00;
        case 0x25dc04u: goto label_25dc04;
        case 0x25dc08u: goto label_25dc08;
        case 0x25dc0cu: goto label_25dc0c;
        case 0x25dc10u: goto label_25dc10;
        case 0x25dc14u: goto label_25dc14;
        case 0x25dc18u: goto label_25dc18;
        case 0x25dc1cu: goto label_25dc1c;
        case 0x25dc20u: goto label_25dc20;
        case 0x25dc24u: goto label_25dc24;
        case 0x25dc28u: goto label_25dc28;
        case 0x25dc2cu: goto label_25dc2c;
        case 0x25dc30u: goto label_25dc30;
        case 0x25dc34u: goto label_25dc34;
        case 0x25dc38u: goto label_25dc38;
        case 0x25dc3cu: goto label_25dc3c;
        case 0x25dc40u: goto label_25dc40;
        case 0x25dc44u: goto label_25dc44;
        case 0x25dc48u: goto label_25dc48;
        case 0x25dc4cu: goto label_25dc4c;
        case 0x25dc50u: goto label_25dc50;
        case 0x25dc54u: goto label_25dc54;
        case 0x25dc58u: goto label_25dc58;
        case 0x25dc5cu: goto label_25dc5c;
        case 0x25dc60u: goto label_25dc60;
        case 0x25dc64u: goto label_25dc64;
        case 0x25dc68u: goto label_25dc68;
        case 0x25dc6cu: goto label_25dc6c;
        case 0x25dc70u: goto label_25dc70;
        case 0x25dc74u: goto label_25dc74;
        case 0x25dc78u: goto label_25dc78;
        case 0x25dc7cu: goto label_25dc7c;
        case 0x25dc80u: goto label_25dc80;
        case 0x25dc84u: goto label_25dc84;
        case 0x25dc88u: goto label_25dc88;
        case 0x25dc8cu: goto label_25dc8c;
        case 0x25dc90u: goto label_25dc90;
        case 0x25dc94u: goto label_25dc94;
        case 0x25dc98u: goto label_25dc98;
        case 0x25dc9cu: goto label_25dc9c;
        case 0x25dca0u: goto label_25dca0;
        case 0x25dca4u: goto label_25dca4;
        case 0x25dca8u: goto label_25dca8;
        case 0x25dcacu: goto label_25dcac;
        case 0x25dcb0u: goto label_25dcb0;
        case 0x25dcb4u: goto label_25dcb4;
        case 0x25dcb8u: goto label_25dcb8;
        case 0x25dcbcu: goto label_25dcbc;
        case 0x25dcc0u: goto label_25dcc0;
        case 0x25dcc4u: goto label_25dcc4;
        case 0x25dcc8u: goto label_25dcc8;
        case 0x25dcccu: goto label_25dccc;
        case 0x25dcd0u: goto label_25dcd0;
        case 0x25dcd4u: goto label_25dcd4;
        case 0x25dcd8u: goto label_25dcd8;
        case 0x25dcdcu: goto label_25dcdc;
        case 0x25dce0u: goto label_25dce0;
        case 0x25dce4u: goto label_25dce4;
        case 0x25dce8u: goto label_25dce8;
        case 0x25dcecu: goto label_25dcec;
        case 0x25dcf0u: goto label_25dcf0;
        case 0x25dcf4u: goto label_25dcf4;
        case 0x25dcf8u: goto label_25dcf8;
        case 0x25dcfcu: goto label_25dcfc;
        case 0x25dd00u: goto label_25dd00;
        case 0x25dd04u: goto label_25dd04;
        case 0x25dd08u: goto label_25dd08;
        case 0x25dd0cu: goto label_25dd0c;
        case 0x25dd10u: goto label_25dd10;
        case 0x25dd14u: goto label_25dd14;
        case 0x25dd18u: goto label_25dd18;
        case 0x25dd1cu: goto label_25dd1c;
        case 0x25dd20u: goto label_25dd20;
        case 0x25dd24u: goto label_25dd24;
        case 0x25dd28u: goto label_25dd28;
        case 0x25dd2cu: goto label_25dd2c;
        case 0x25dd30u: goto label_25dd30;
        case 0x25dd34u: goto label_25dd34;
        case 0x25dd38u: goto label_25dd38;
        case 0x25dd3cu: goto label_25dd3c;
        case 0x25dd40u: goto label_25dd40;
        case 0x25dd44u: goto label_25dd44;
        case 0x25dd48u: goto label_25dd48;
        case 0x25dd4cu: goto label_25dd4c;
        default: return;
    }

label_25d580:
    // 0x25d580: 0x720d  break       0, 456
    ctx->pc = 0x25d580u;
    runtime->handleBreak(rdram, ctx);
label_25d584:
    // 0x25d584: 0xd600  sll         $k0, $zero, 24
    ctx->pc = 0x25d584u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25d588:
    // 0x25d588: 0x0  nop
    ctx->pc = 0x25d588u;
    // NOP
label_25d58c:
    // 0x25d58c: 0x0  nop
    ctx->pc = 0x25d58cu;
    // NOP
label_25d590:
    // 0x25d590: 0x7228  .word       0x00007228                   # mfsa        $t6 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d590u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_25d594:
    // 0x25d594: 0xe150  .word       0x0000E150                   # mfhi        $gp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d594u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25d598:
    // 0x25d598: 0x0  nop
    ctx->pc = 0x25d598u;
    // NOP
label_25d59c:
    // 0x25d59c: 0x0  nop
    ctx->pc = 0x25d59cu;
    // NOP
label_25d5a0:
    // 0x25d5a0: 0x7245  .word       0x00007245                   # INVALID     $zero, $zero, 0x7245 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25D5A0 raw=0x00007245"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d5a4:
    // 0x25d5a4: 0xcb20  .word       0x0000CB20                   # add         $t9, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25d5a8:
    // 0x25d5a8: 0x0  nop
    ctx->pc = 0x25d5a8u;
    // NOP
label_25d5ac:
    // 0x25d5ac: 0x0  nop
    ctx->pc = 0x25d5acu;
    // NOP
label_25d5b0:
    // 0x25d5b0: 0x725f  .word       0x0000725F                   # ddivu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25D5B0 raw=0x0000725F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d5b4:
    // 0x25d5b4: 0xcd50  .word       0x0000CD50                   # mfhi        $t9 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5b4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25d5b8:
    // 0x25d5b8: 0x0  nop
    ctx->pc = 0x25d5b8u;
    // NOP
label_25d5bc:
    // 0x25d5bc: 0x0  nop
    ctx->pc = 0x25d5bcu;
    // NOP
label_25d5c0:
    // 0x25d5c0: 0x7279  .word       0x00007279                   # INVALID     $zero, $zero, 0x7279 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25D5C0 raw=0x00007279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d5c4:
    // 0x25d5c4: 0xc6e0  .word       0x0000C6E0                   # add         $t8, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25d5c8:
    // 0x25d5c8: 0x0  nop
    ctx->pc = 0x25d5c8u;
    // NOP
label_25d5cc:
    // 0x25d5cc: 0x0  nop
    ctx->pc = 0x25d5ccu;
    // NOP
label_25d5d0:
    // 0x25d5d0: 0x7292  .word       0x00007292                   # mflo        $t6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5d0u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_25d5d4:
    // 0x25d5d4: 0xdac0  sll         $k1, $zero, 11
    ctx->pc = 0x25d5d4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25d5d8:
    // 0x25d5d8: 0x0  nop
    ctx->pc = 0x25d5d8u;
    // NOP
label_25d5dc:
    // 0x25d5dc: 0x0  nop
    ctx->pc = 0x25d5dcu;
    // NOP
label_25d5e0:
    // 0x25d5e0: 0x72ae  .word       0x000072AE                   # dsub        $t6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_25d5e4:
    // 0x25d5e4: 0xbfd0  .word       0x0000BFD0                   # mfhi        $s7 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5e4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_25d5e8:
    // 0x25d5e8: 0x0  nop
    ctx->pc = 0x25d5e8u;
    // NOP
label_25d5ec:
    // 0x25d5ec: 0x0  nop
    ctx->pc = 0x25d5ecu;
    // NOP
label_25d5f0:
    // 0x25d5f0: 0x72c6  .word       0x000072C6                   # srlv        $t6, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d5f4:
    // 0x25d5f4: 0xc670  tge         $zero, $zero, 793
    ctx->pc = 0x25d5f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d5f8:
    // 0x25d5f8: 0x0  nop
    ctx->pc = 0x25d5f8u;
    // NOP
label_25d5fc:
    // 0x25d5fc: 0x0  nop
    ctx->pc = 0x25d5fcu;
    // NOP
label_25d600:
    // 0x25d600: 0x72df  .word       0x000072DF                   # ddivu       $t6, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25D600 raw=0x000072DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d604:
    // 0x25d604: 0xe9c0  sll         $sp, $zero, 7
    ctx->pc = 0x25d604u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25d608:
    // 0x25d608: 0x0  nop
    ctx->pc = 0x25d608u;
    // NOP
label_25d60c:
    // 0x25d60c: 0x0  nop
    ctx->pc = 0x25d60cu;
    // NOP
label_25d610:
    // 0x25d610: 0x72fd  .word       0x000072FD                   # INVALID     $zero, $zero, 0x72FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25D610 raw=0x000072FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d614:
    // 0x25d614: 0xe8d0  .word       0x0000E8D0                   # mfhi        $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d614u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_25d618:
    // 0x25d618: 0x0  nop
    ctx->pc = 0x25d618u;
    // NOP
label_25d61c:
    // 0x25d61c: 0x0  nop
    ctx->pc = 0x25d61cu;
    // NOP
label_25d620:
    // 0x25d620: 0x731b  .word       0x0000731B                   # divu        $t6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d620u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25d624:
    // 0x25d624: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x25d624u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25d628:
    // 0x25d628: 0x0  nop
    ctx->pc = 0x25d628u;
    // NOP
label_25d62c:
    // 0x25d62c: 0x0  nop
    ctx->pc = 0x25d62cu;
    // NOP
label_25d630:
    // 0x25d630: 0x7338  dsll        $t6, $zero, 12
    ctx->pc = 0x25d630u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 12);
label_25d634:
    // 0x25d634: 0xe5e0  .word       0x0000E5E0                   # add         $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25d638:
    // 0x25d638: 0x0  nop
    ctx->pc = 0x25d638u;
    // NOP
label_25d63c:
    // 0x25d63c: 0x0  nop
    ctx->pc = 0x25d63cu;
    // NOP
label_25d640:
    // 0x25d640: 0x7355  .word       0x00007355                   # INVALID     $zero, $zero, 0x7355 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25D640 raw=0x00007355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d644:
    // 0x25d644: 0xef50  .word       0x0000EF50                   # mfhi        $sp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d644u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_25d648:
    // 0x25d648: 0x0  nop
    ctx->pc = 0x25d648u;
    // NOP
label_25d64c:
    // 0x25d64c: 0x0  nop
    ctx->pc = 0x25d64cu;
    // NOP
label_25d650:
    // 0x25d650: 0x7373  tltu        $zero, $zero, 461
    ctx->pc = 0x25d650u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d654:
    // 0x25d654: 0xe5e0  .word       0x0000E5E0                   # add         $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25d658:
    // 0x25d658: 0x0  nop
    ctx->pc = 0x25d658u;
    // NOP
label_25d65c:
    // 0x25d65c: 0x0  nop
    ctx->pc = 0x25d65cu;
    // NOP
label_25d660:
    // 0x25d660: 0x7390  .word       0x00007390                   # mfhi        $t6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d660u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25d664:
    // 0x25d664: 0xe200  sll         $gp, $zero, 8
    ctx->pc = 0x25d664u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25d668:
    // 0x25d668: 0x0  nop
    ctx->pc = 0x25d668u;
    // NOP
label_25d66c:
    // 0x25d66c: 0x0  nop
    ctx->pc = 0x25d66cu;
    // NOP
label_25d670:
    // 0x25d670: 0x73ad  .word       0x000073AD                   # daddu       $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d670u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d674:
    // 0x25d674: 0xd9e0  .word       0x0000D9E0                   # add         $k1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25d678:
    // 0x25d678: 0x0  nop
    ctx->pc = 0x25d678u;
    // NOP
label_25d67c:
    // 0x25d67c: 0x0  nop
    ctx->pc = 0x25d67cu;
    // NOP
label_25d680:
    // 0x25d680: 0x73c9  .word       0x000073C9                   # jalr        $t6, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
label_25d684:
    if (ctx->pc == 0x25D684u) {
        ctx->pc = 0x25D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D680u;
        // 0x25d684: 0xcf50  .word       0x0000CF50                   # mfhi        $t9 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 25, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D688u;
        goto label_25d688;
    }
    ctx->pc = 0x25D680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x25D688u);
        ctx->pc = 0x25D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D680u;
        // 0x25d684: 0xcf50  .word       0x0000CF50                   # mfhi        $t9 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 25, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D680u, 0x25D688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D688u;
label_25d688:
    // 0x25d688: 0x0  nop
    ctx->pc = 0x25d688u;
    // NOP
label_25d68c:
    // 0x25d68c: 0x0  nop
    ctx->pc = 0x25d68cu;
    // NOP
label_25d690:
    // 0x25d690: 0x73e3  .word       0x000073E3                   # negu        $t6, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d690u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25d694:
    // 0x25d694: 0xcbf0  tge         $zero, $zero, 815
    ctx->pc = 0x25d694u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d698:
    // 0x25d698: 0x0  nop
    ctx->pc = 0x25d698u;
    // NOP
label_25d69c:
    // 0x25d69c: 0x0  nop
    ctx->pc = 0x25d69cu;
    // NOP
label_25d6a0:
    // 0x25d6a0: 0x73fd  .word       0x000073FD                   # INVALID     $zero, $zero, 0x73FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d6a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25D6A0 raw=0x000073FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d6a4:
    // 0x25d6a4: 0xbef0  tge         $zero, $zero, 763
    ctx->pc = 0x25d6a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d6a8:
    // 0x25d6a8: 0x0  nop
    ctx->pc = 0x25d6a8u;
    // NOP
label_25d6ac:
    // 0x25d6ac: 0x0  nop
    ctx->pc = 0x25d6acu;
    // NOP
label_25d6b0:
    // 0x25d6b0: 0x7415  .word       0x00007415                   # INVALID     $zero, $zero, 0x7415 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d6b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25D6B0 raw=0x00007415"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d6b4:
    // 0x25d6b4: 0xe4c0  sll         $gp, $zero, 19
    ctx->pc = 0x25d6b4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25d6b8:
    // 0x25d6b8: 0x0  nop
    ctx->pc = 0x25d6b8u;
    // NOP
label_25d6bc:
    // 0x25d6bc: 0x0  nop
    ctx->pc = 0x25d6bcu;
    // NOP
label_25d6c0:
    // 0x25d6c0: 0x7432  tlt         $zero, $zero, 464
    ctx->pc = 0x25d6c0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d6c4:
    // 0x25d6c4: 0xe2f0  tge         $zero, $zero, 907
    ctx->pc = 0x25d6c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d6c8:
    // 0x25d6c8: 0x0  nop
    ctx->pc = 0x25d6c8u;
    // NOP
label_25d6cc:
    // 0x25d6cc: 0x0  nop
    ctx->pc = 0x25d6ccu;
    // NOP
label_25d6d0:
    // 0x25d6d0: 0x744f  .word       0x0000744F                   # sync.p # 00007000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d6d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25d6d4:
    // 0x25d6d4: 0xe400  sll         $gp, $zero, 16
    ctx->pc = 0x25d6d4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25d6d8:
    // 0x25d6d8: 0x0  nop
    ctx->pc = 0x25d6d8u;
    // NOP
label_25d6dc:
    // 0x25d6dc: 0x0  nop
    ctx->pc = 0x25d6dcu;
    // NOP
label_25d6e0:
    // 0x25d6e0: 0x746c  .word       0x0000746C                   # dadd        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d6e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_25d6e4:
    // 0x25d6e4: 0xe550  .word       0x0000E550                   # mfhi        $gp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d6e4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25d6e8:
    // 0x25d6e8: 0x0  nop
    ctx->pc = 0x25d6e8u;
    // NOP
label_25d6ec:
    // 0x25d6ec: 0x0  nop
    ctx->pc = 0x25d6ecu;
    // NOP
label_25d6f0:
    // 0x25d6f0: 0x7489  .word       0x00007489                   # jalr        $t6, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
label_25d6f4:
    if (ctx->pc == 0x25D6F4u) {
        ctx->pc = 0x25D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6F0u;
        // 0x25d6f4: 0xde80  sll         $k1, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6F8u;
        goto label_25d6f8;
    }
    ctx->pc = 0x25D6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x25D6F8u);
        ctx->pc = 0x25D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6F0u;
        // 0x25d6f4: 0xde80  sll         $k1, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D6F0u, 0x25D6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D6F8u;
label_25d6f8:
    // 0x25d6f8: 0x0  nop
    ctx->pc = 0x25d6f8u;
    // NOP
label_25d6fc:
    // 0x25d6fc: 0x0  nop
    ctx->pc = 0x25d6fcu;
    // NOP
label_25d700:
    // 0x25d700: 0x74a5  .word       0x000074A5                   # move        $t6, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d700u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25d704:
    // 0x25d704: 0xda50  .word       0x0000DA50                   # mfhi        $k1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d704u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25d708:
    // 0x25d708: 0x0  nop
    ctx->pc = 0x25d708u;
    // NOP
label_25d70c:
    // 0x25d70c: 0x0  nop
    ctx->pc = 0x25d70cu;
    // NOP
label_25d710:
    // 0x25d710: 0x74c1  .word       0x000074C1                   # INVALID     $zero, $zero, 0x74C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25D710 raw=0x000074C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d714:
    // 0x25d714: 0xd6b0  tge         $zero, $zero, 858
    ctx->pc = 0x25d714u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d718:
    // 0x25d718: 0x0  nop
    ctx->pc = 0x25d718u;
    // NOP
label_25d71c:
    // 0x25d71c: 0x0  nop
    ctx->pc = 0x25d71cu;
    // NOP
label_25d720:
    // 0x25d720: 0x74dc  .word       0x000074DC                   # dmult       $zero, $zero # 000074C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d720u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25D720 raw=0x000074DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d724:
    // 0x25d724: 0xe000  sll         $gp, $zero, 0
    ctx->pc = 0x25d724u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25d728:
    // 0x25d728: 0x0  nop
    ctx->pc = 0x25d728u;
    // NOP
label_25d72c:
    // 0x25d72c: 0x0  nop
    ctx->pc = 0x25d72cu;
    // NOP
label_25d730:
    // 0x25d730: 0x74f8  dsll        $t6, $zero, 19
    ctx->pc = 0x25d730u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 19);
label_25d734:
    // 0x25d734: 0xdf80  sll         $k1, $zero, 30
    ctx->pc = 0x25d734u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25d738:
    // 0x25d738: 0x0  nop
    ctx->pc = 0x25d738u;
    // NOP
label_25d73c:
    // 0x25d73c: 0x0  nop
    ctx->pc = 0x25d73cu;
    // NOP
label_25d740:
    // 0x25d740: 0x7514  .word       0x00007514                   # dsllv       $t6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d740u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25d744:
    // 0x25d744: 0xa540  sll         $s4, $zero, 21
    ctx->pc = 0x25d744u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_25d748:
    // 0x25d748: 0x0  nop
    ctx->pc = 0x25d748u;
    // NOP
label_25d74c:
    // 0x25d74c: 0x0  nop
    ctx->pc = 0x25d74cu;
    // NOP
label_25d750:
    // 0x25d750: 0x7529  .word       0x00007529                   # mtsa        $zero # 00007500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d750u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25d754:
    // 0x25d754: 0xb7f0  tge         $zero, $zero, 735
    ctx->pc = 0x25d754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d758:
    // 0x25d758: 0x0  nop
    ctx->pc = 0x25d758u;
    // NOP
label_25d75c:
    // 0x25d75c: 0x0  nop
    ctx->pc = 0x25d75cu;
    // NOP
label_25d760:
    // 0x25d760: 0x7540  sll         $t6, $zero, 21
    ctx->pc = 0x25d760u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_25d764:
    // 0x25d764: 0xc0c0  sll         $t8, $zero, 3
    ctx->pc = 0x25d764u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25d768:
    // 0x25d768: 0x0  nop
    ctx->pc = 0x25d768u;
    // NOP
label_25d76c:
    // 0x25d76c: 0x0  nop
    ctx->pc = 0x25d76cu;
    // NOP
label_25d770:
    // 0x25d770: 0x7559  .word       0x00007559                   # multu       $zero, $zero # 00007540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d770u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_25d774:
    // 0x25d774: 0xc5e0  .word       0x0000C5E0                   # add         $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25d778:
    // 0x25d778: 0x0  nop
    ctx->pc = 0x25d778u;
    // NOP
label_25d77c:
    // 0x25d77c: 0x0  nop
    ctx->pc = 0x25d77cu;
    // NOP
label_25d780:
    // 0x25d780: 0x7572  tlt         $zero, $zero, 469
    ctx->pc = 0x25d780u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d784:
    // 0x25d784: 0xb1f0  tge         $zero, $zero, 711
    ctx->pc = 0x25d784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d788:
    // 0x25d788: 0x0  nop
    ctx->pc = 0x25d788u;
    // NOP
label_25d78c:
    // 0x25d78c: 0x0  nop
    ctx->pc = 0x25d78cu;
    // NOP
label_25d790:
    // 0x25d790: 0x7589  .word       0x00007589                   # jalr        $t6, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
label_25d794:
    if (ctx->pc == 0x25D794u) {
        ctx->pc = 0x25D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D790u;
        // 0x25d794: 0xa7f0  tge         $zero, $zero, 671 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D798u;
        goto label_25d798;
    }
    ctx->pc = 0x25D790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x25D798u);
        ctx->pc = 0x25D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D790u;
        // 0x25d794: 0xa7f0  tge         $zero, $zero, 671 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D790u, 0x25D798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D798u;
label_25d798:
    // 0x25d798: 0x0  nop
    ctx->pc = 0x25d798u;
    // NOP
label_25d79c:
    // 0x25d79c: 0x0  nop
    ctx->pc = 0x25d79cu;
    // NOP
label_25d7a0:
    // 0x25d7a0: 0x759e  .word       0x0000759E                   # ddiv        $t6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25D7A0 raw=0x0000759E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d7a4:
    // 0x25d7a4: 0xda60  .word       0x0000DA60                   # add         $k1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d7a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25d7a8:
    // 0x25d7a8: 0x0  nop
    ctx->pc = 0x25d7a8u;
    // NOP
label_25d7ac:
    // 0x25d7ac: 0x0  nop
    ctx->pc = 0x25d7acu;
    // NOP
label_25d7b0:
    // 0x25d7b0: 0x75ba  dsrl        $t6, $zero, 22
    ctx->pc = 0x25d7b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 22);
label_25d7b4:
    // 0x25d7b4: 0xcbf0  tge         $zero, $zero, 815
    ctx->pc = 0x25d7b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d7b8:
    // 0x25d7b8: 0x0  nop
    ctx->pc = 0x25d7b8u;
    // NOP
label_25d7bc:
    // 0x25d7bc: 0x0  nop
    ctx->pc = 0x25d7bcu;
    // NOP
label_25d7c0:
    // 0x25d7c0: 0x75d4  .word       0x000075D4                   # dsllv       $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d7c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25d7c4:
    // 0x25d7c4: 0xa2a0  .word       0x0000A2A0                   # add         $s4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25d7c8:
    // 0x25d7c8: 0x0  nop
    ctx->pc = 0x25d7c8u;
    // NOP
label_25d7cc:
    // 0x25d7cc: 0x0  nop
    ctx->pc = 0x25d7ccu;
    // NOP
label_25d7d0:
    // 0x25d7d0: 0x75e9  .word       0x000075E9                   # mtsa        $zero # 000075C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d7d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25d7d4:
    // 0x25d7d4: 0xbd20  .word       0x0000BD20                   # add         $s7, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d7d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25d7d8:
    // 0x25d7d8: 0x0  nop
    ctx->pc = 0x25d7d8u;
    // NOP
label_25d7dc:
    // 0x25d7dc: 0x0  nop
    ctx->pc = 0x25d7dcu;
    // NOP
label_25d7e0:
    // 0x25d7e0: 0x7601  .word       0x00007601                   # INVALID     $zero, $zero, 0x7601 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d7e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25D7E0 raw=0x00007601"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d7e4:
    // 0x25d7e4: 0xae70  tge         $zero, $zero, 697
    ctx->pc = 0x25d7e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d7e8:
    // 0x25d7e8: 0x0  nop
    ctx->pc = 0x25d7e8u;
    // NOP
label_25d7ec:
    // 0x25d7ec: 0x0  nop
    ctx->pc = 0x25d7ecu;
    // NOP
label_25d7f0:
    // 0x25d7f0: 0x7617  .word       0x00007617                   # dsrav       $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d7f0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25d7f4:
    // 0x25d7f4: 0xc3e0  .word       0x0000C3E0                   # add         $t8, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d7f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25d7f8:
    // 0x25d7f8: 0x0  nop
    ctx->pc = 0x25d7f8u;
    // NOP
label_25d7fc:
    // 0x25d7fc: 0x0  nop
    ctx->pc = 0x25d7fcu;
    // NOP
label_25d800:
    // 0x25d800: 0x7630  tge         $zero, $zero, 472
    ctx->pc = 0x25d800u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d804:
    // 0x25d804: 0xbe70  tge         $zero, $zero, 761
    ctx->pc = 0x25d804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d808:
    // 0x25d808: 0x0  nop
    ctx->pc = 0x25d808u;
    // NOP
label_25d80c:
    // 0x25d80c: 0x0  nop
    ctx->pc = 0x25d80cu;
    // NOP
label_25d810:
    // 0x25d810: 0x7648  .word       0x00007648                   # jr          $zero # 00007640 <InstrIdType: CPU_SPECIAL>
label_25d814:
    if (ctx->pc == 0x25D814u) {
        ctx->pc = 0x25D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D810u;
        // 0x25d814: 0xade0  .word       0x0000ADE0                   # add         $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D818u;
        goto label_25d818;
    }
    ctx->pc = 0x25D810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D810u;
        // 0x25d814: 0xade0  .word       0x0000ADE0                   # add         $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D810u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25D818u;
label_25d818:
    // 0x25d818: 0x0  nop
    ctx->pc = 0x25d818u;
    // NOP
label_25d81c:
    // 0x25d81c: 0x0  nop
    ctx->pc = 0x25d81cu;
    // NOP
label_25d820:
    // 0x25d820: 0x765e  .word       0x0000765E                   # ddiv        $t6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25D820 raw=0x0000765E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d824:
    // 0x25d824: 0xcd50  .word       0x0000CD50                   # mfhi        $t9 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d824u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25d828:
    // 0x25d828: 0x0  nop
    ctx->pc = 0x25d828u;
    // NOP
label_25d82c:
    // 0x25d82c: 0x0  nop
    ctx->pc = 0x25d82cu;
    // NOP
label_25d830:
    // 0x25d830: 0x7678  dsll        $t6, $zero, 25
    ctx->pc = 0x25d830u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 25);
label_25d834:
    // 0x25d834: 0xbd50  .word       0x0000BD50                   # mfhi        $s7 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d834u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_25d838:
    // 0x25d838: 0x0  nop
    ctx->pc = 0x25d838u;
    // NOP
label_25d83c:
    // 0x25d83c: 0x0  nop
    ctx->pc = 0x25d83cu;
    // NOP
label_25d840:
    // 0x25d840: 0x7690  .word       0x00007690                   # mfhi        $t6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d840u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25d844:
    // 0x25d844: 0xaf50  .word       0x0000AF50                   # mfhi        $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d844u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25d848:
    // 0x25d848: 0x0  nop
    ctx->pc = 0x25d848u;
    // NOP
label_25d84c:
    // 0x25d84c: 0x0  nop
    ctx->pc = 0x25d84cu;
    // NOP
label_25d850:
    // 0x25d850: 0x76a6  .word       0x000076A6                   # xor         $t6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d850u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25d854:
    // 0x25d854: 0xcd60  .word       0x0000CD60                   # add         $t9, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25d858:
    // 0x25d858: 0x0  nop
    ctx->pc = 0x25d858u;
    // NOP
label_25d85c:
    // 0x25d85c: 0x0  nop
    ctx->pc = 0x25d85cu;
    // NOP
label_25d860:
    // 0x25d860: 0x76c0  sll         $t6, $zero, 27
    ctx->pc = 0x25d860u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25d864:
    // 0x25d864: 0xbec0  sll         $s7, $zero, 27
    ctx->pc = 0x25d864u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25d868:
    // 0x25d868: 0x0  nop
    ctx->pc = 0x25d868u;
    // NOP
label_25d86c:
    // 0x25d86c: 0x0  nop
    ctx->pc = 0x25d86cu;
    // NOP
label_25d870:
    // 0x25d870: 0x76d8  .word       0x000076D8                   # mult        $t6, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_25d874:
    // 0x25d874: 0xccc0  sll         $t9, $zero, 19
    ctx->pc = 0x25d874u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25d878:
    // 0x25d878: 0x0  nop
    ctx->pc = 0x25d878u;
    // NOP
label_25d87c:
    // 0x25d87c: 0x0  nop
    ctx->pc = 0x25d87cu;
    // NOP
label_25d880:
    // 0x25d880: 0x76f2  tlt         $zero, $zero, 475
    ctx->pc = 0x25d880u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d884:
    // 0x25d884: 0xb070  tge         $zero, $zero, 705
    ctx->pc = 0x25d884u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d888:
    // 0x25d888: 0x0  nop
    ctx->pc = 0x25d888u;
    // NOP
label_25d88c:
    // 0x25d88c: 0x0  nop
    ctx->pc = 0x25d88cu;
    // NOP
label_25d890:
    // 0x25d890: 0x7709  .word       0x00007709                   # jalr        $t6, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
label_25d894:
    if (ctx->pc == 0x25D894u) {
        ctx->pc = 0x25D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D890u;
        // 0x25d894: 0xc400  sll         $t8, $zero, 16 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D898u;
        goto label_25d898;
    }
    ctx->pc = 0x25D890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x25D898u);
        ctx->pc = 0x25D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D890u;
        // 0x25d894: 0xc400  sll         $t8, $zero, 16 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D890u, 0x25D898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D898u;
label_25d898:
    // 0x25d898: 0x0  nop
    ctx->pc = 0x25d898u;
    // NOP
label_25d89c:
    // 0x25d89c: 0x0  nop
    ctx->pc = 0x25d89cu;
    // NOP
label_25d8a0:
    // 0x25d8a0: 0x7722  .word       0x00007722                   # neg         $t6, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d8a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_25d8a4:
    // 0x25d8a4: 0xa320  .word       0x0000A320                   # add         $s4, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d8a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25d8a8:
    // 0x25d8a8: 0x0  nop
    ctx->pc = 0x25d8a8u;
    // NOP
label_25d8ac:
    // 0x25d8ac: 0x0  nop
    ctx->pc = 0x25d8acu;
    // NOP
label_25d8b0:
    // 0x25d8b0: 0x7737  .word       0x00007737                   # INVALID     $zero, $zero, 0x7737 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d8b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25D8B0 raw=0x00007737"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d8b4:
    // 0x25d8b4: 0xbae0  .word       0x0000BAE0                   # add         $s7, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25d8b8:
    // 0x25d8b8: 0x0  nop
    ctx->pc = 0x25d8b8u;
    // NOP
label_25d8bc:
    // 0x25d8bc: 0x0  nop
    ctx->pc = 0x25d8bcu;
    // NOP
label_25d8c0:
    // 0x25d8c0: 0x774f  .word       0x0000774F                   # sync.p # 00007000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d8c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25d8c4:
    // 0x25d8c4: 0xca70  tge         $zero, $zero, 809
    ctx->pc = 0x25d8c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d8c8:
    // 0x25d8c8: 0x0  nop
    ctx->pc = 0x25d8c8u;
    // NOP
label_25d8cc:
    // 0x25d8cc: 0x0  nop
    ctx->pc = 0x25d8ccu;
    // NOP
label_25d8d0:
    // 0x25d8d0: 0x7769  .word       0x00007769                   # mtsa        $zero # 00007740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d8d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25d8d4:
    // 0x25d8d4: 0xbb70  tge         $zero, $zero, 749
    ctx->pc = 0x25d8d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d8d8:
    // 0x25d8d8: 0x0  nop
    ctx->pc = 0x25d8d8u;
    // NOP
label_25d8dc:
    // 0x25d8dc: 0x0  nop
    ctx->pc = 0x25d8dcu;
    // NOP
label_25d8e0:
    // 0x25d8e0: 0x7781  .word       0x00007781                   # INVALID     $zero, $zero, 0x7781 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d8e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25D8E0 raw=0x00007781"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d8e4:
    // 0x25d8e4: 0xb3e0  .word       0x0000B3E0                   # add         $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d8e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_25d8e8:
    // 0x25d8e8: 0x0  nop
    ctx->pc = 0x25d8e8u;
    // NOP
label_25d8ec:
    // 0x25d8ec: 0x0  nop
    ctx->pc = 0x25d8ecu;
    // NOP
label_25d8f0:
    // 0x25d8f0: 0x7798  .word       0x00007798                   # mult        $t6, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_25d8f4:
    // 0x25d8f4: 0xc970  tge         $zero, $zero, 805
    ctx->pc = 0x25d8f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d8f8:
    // 0x25d8f8: 0x0  nop
    ctx->pc = 0x25d8f8u;
    // NOP
label_25d8fc:
    // 0x25d8fc: 0x0  nop
    ctx->pc = 0x25d8fcu;
    // NOP
label_25d900:
    // 0x25d900: 0x77b2  tlt         $zero, $zero, 478
    ctx->pc = 0x25d900u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d904:
    // 0x25d904: 0xb350  .word       0x0000B350                   # mfhi        $s6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d904u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_25d908:
    // 0x25d908: 0x0  nop
    ctx->pc = 0x25d908u;
    // NOP
label_25d90c:
    // 0x25d90c: 0x0  nop
    ctx->pc = 0x25d90cu;
    // NOP
label_25d910:
    // 0x25d910: 0x77c9  .word       0x000077C9                   # jalr        $t6, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_25d914:
    if (ctx->pc == 0x25D914u) {
        ctx->pc = 0x25D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D910u;
        // 0x25d914: 0xa3e0  .word       0x0000A3E0                   # add         $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D918u;
        goto label_25d918;
    }
    ctx->pc = 0x25D910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x25D918u);
        ctx->pc = 0x25D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D910u;
        // 0x25d914: 0xa3e0  .word       0x0000A3E0                   # add         $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D910u, 0x25D918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D918u;
label_25d918:
    // 0x25d918: 0x0  nop
    ctx->pc = 0x25d918u;
    // NOP
label_25d91c:
    // 0x25d91c: 0x0  nop
    ctx->pc = 0x25d91cu;
    // NOP
label_25d920:
    // 0x25d920: 0x77de  .word       0x000077DE                   # ddiv        $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25D920 raw=0x000077DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d924:
    // 0x25d924: 0xa4d0  .word       0x0000A4D0                   # mfhi        $s4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d924u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25d928:
    // 0x25d928: 0x0  nop
    ctx->pc = 0x25d928u;
    // NOP
label_25d92c:
    // 0x25d92c: 0x0  nop
    ctx->pc = 0x25d92cu;
    // NOP
label_25d930:
    // 0x25d930: 0x77f3  tltu        $zero, $zero, 479
    ctx->pc = 0x25d930u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d934:
    // 0x25d934: 0xc450  .word       0x0000C450                   # mfhi        $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d934u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25d938:
    // 0x25d938: 0x0  nop
    ctx->pc = 0x25d938u;
    // NOP
label_25d93c:
    // 0x25d93c: 0x0  nop
    ctx->pc = 0x25d93cu;
    // NOP
label_25d940:
    // 0x25d940: 0x780c  syscall     480
    ctx->pc = 0x25d940u;
    ctx->pc = 0x25D944u;
runtime->handleSyscall(rdram, ctx, 0x1E0u);
label_25d944:
    // 0x25d944: 0xb270  tge         $zero, $zero, 713
    ctx->pc = 0x25d944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d948:
    // 0x25d948: 0x0  nop
    ctx->pc = 0x25d948u;
    // NOP
label_25d94c:
    // 0x25d94c: 0x0  nop
    ctx->pc = 0x25d94cu;
    // NOP
label_25d950:
    // 0x25d950: 0x7823  negu        $t7, $zero
    ctx->pc = 0x25d950u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25d954:
    // 0x25d954: 0xae00  sll         $s5, $zero, 24
    ctx->pc = 0x25d954u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25d958:
    // 0x25d958: 0x0  nop
    ctx->pc = 0x25d958u;
    // NOP
label_25d95c:
    // 0x25d95c: 0x0  nop
    ctx->pc = 0x25d95cu;
    // NOP
label_25d960:
    // 0x25d960: 0x7839  .word       0x00007839                   # INVALID     $zero, $zero, 0x7839 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25D960 raw=0x00007839"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d964:
    // 0x25d964: 0xa3e0  .word       0x0000A3E0                   # add         $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25d968:
    // 0x25d968: 0x0  nop
    ctx->pc = 0x25d968u;
    // NOP
label_25d96c:
    // 0x25d96c: 0x0  nop
    ctx->pc = 0x25d96cu;
    // NOP
label_25d970:
    // 0x25d970: 0x784e  .word       0x0000784E                   # INVALID     $zero, $zero, 0x784E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25D970 raw=0x0000784E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d974:
    // 0x25d974: 0xca20  .word       0x0000CA20                   # add         $t9, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25d978:
    // 0x25d978: 0x0  nop
    ctx->pc = 0x25d978u;
    // NOP
label_25d97c:
    // 0x25d97c: 0x0  nop
    ctx->pc = 0x25d97cu;
    // NOP
label_25d980:
    // 0x25d980: 0x7868  .word       0x00007868                   # mfsa        $t7 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d980u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_25d984:
    // 0x25d984: 0xc780  sll         $t8, $zero, 30
    ctx->pc = 0x25d984u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25d988:
    // 0x25d988: 0x0  nop
    ctx->pc = 0x25d988u;
    // NOP
label_25d98c:
    // 0x25d98c: 0x0  nop
    ctx->pc = 0x25d98cu;
    // NOP
label_25d990:
    // 0x25d990: 0x7881  .word       0x00007881                   # INVALID     $zero, $zero, 0x7881 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25D990 raw=0x00007881"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d994:
    // 0x25d994: 0xba90  .word       0x0000BA90                   # mfhi        $s7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d994u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_25d998:
    // 0x25d998: 0x0  nop
    ctx->pc = 0x25d998u;
    // NOP
label_25d99c:
    // 0x25d99c: 0x0  nop
    ctx->pc = 0x25d99cu;
    // NOP
label_25d9a0:
    // 0x25d9a0: 0x7899  .word       0x00007899                   # multu       $zero, $zero # 00007880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d9a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_25d9a4:
    // 0x25d9a4: 0xb8c0  sll         $s7, $zero, 3
    ctx->pc = 0x25d9a4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25d9a8:
    // 0x25d9a8: 0x0  nop
    ctx->pc = 0x25d9a8u;
    // NOP
label_25d9ac:
    // 0x25d9ac: 0x0  nop
    ctx->pc = 0x25d9acu;
    // NOP
label_25d9b0:
    // 0x25d9b0: 0x78b1  tgeu        $zero, $zero, 482
    ctx->pc = 0x25d9b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d9b4:
    // 0x25d9b4: 0xc250  .word       0x0000C250                   # mfhi        $t8 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d9b4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25d9b8:
    // 0x25d9b8: 0x0  nop
    ctx->pc = 0x25d9b8u;
    // NOP
label_25d9bc:
    // 0x25d9bc: 0x0  nop
    ctx->pc = 0x25d9bcu;
    // NOP
label_25d9c0:
    // 0x25d9c0: 0x78ca  .word       0x000078CA                   # movz        $t7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d9c0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_25d9c4:
    // 0x25d9c4: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d9c4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_25d9c8:
    // 0x25d9c8: 0x0  nop
    ctx->pc = 0x25d9c8u;
    // NOP
label_25d9cc:
    // 0x25d9cc: 0x0  nop
    ctx->pc = 0x25d9ccu;
    // NOP
label_25d9d0:
    // 0x25d9d0: 0x78e1  .word       0x000078E1                   # addu        $t7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d9d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25d9d4:
    // 0x25d9d4: 0x5560  .word       0x00005560                   # add         $t2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d9d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25d9d8:
    // 0x25d9d8: 0x0  nop
    ctx->pc = 0x25d9d8u;
    // NOP
label_25d9dc:
    // 0x25d9dc: 0x0  nop
    ctx->pc = 0x25d9dcu;
    // NOP
label_25d9e0:
    // 0x25d9e0: 0x78ec  .word       0x000078EC                   # dadd        $t7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d9e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_25d9e4:
    // 0x25d9e4: 0x3960  .word       0x00003960                   # add         $a3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d9e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25d9e8:
    // 0x25d9e8: 0x0  nop
    ctx->pc = 0x25d9e8u;
    // NOP
label_25d9ec:
    // 0x25d9ec: 0x0  nop
    ctx->pc = 0x25d9ecu;
    // NOP
label_25d9f0:
    // 0x25d9f0: 0x78f4  teq         $zero, $zero, 483
    ctx->pc = 0x25d9f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d9f4:
    // 0x25d9f4: 0x4030  tge         $zero, $zero, 256
    ctx->pc = 0x25d9f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d9f8:
    // 0x25d9f8: 0x0  nop
    ctx->pc = 0x25d9f8u;
    // NOP
label_25d9fc:
    // 0x25d9fc: 0x0  nop
    ctx->pc = 0x25d9fcu;
    // NOP
label_25da00:
    // 0x25da00: 0x78fd  .word       0x000078FD                   # INVALID     $zero, $zero, 0x78FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25DA00 raw=0x000078FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25da04:
    // 0x25da04: 0xadf0  tge         $zero, $zero, 695
    ctx->pc = 0x25da04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25da08:
    // 0x25da08: 0x0  nop
    ctx->pc = 0x25da08u;
    // NOP
label_25da0c:
    // 0x25da0c: 0x0  nop
    ctx->pc = 0x25da0cu;
    // NOP
label_25da10:
    // 0x25da10: 0x7913  .word       0x00007913                   # mtlo        $zero # 00007900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da10u;
    ctx->lo = GPR_U64(ctx, 0);
label_25da14:
    // 0x25da14: 0x47c0  sll         $t0, $zero, 31
    ctx->pc = 0x25da14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25da18:
    // 0x25da18: 0x0  nop
    ctx->pc = 0x25da18u;
    // NOP
label_25da1c:
    // 0x25da1c: 0x0  nop
    ctx->pc = 0x25da1cu;
    // NOP
label_25da20:
    // 0x25da20: 0x791c  .word       0x0000791C                   # dmult       $zero, $zero # 00007900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25DA20 raw=0x0000791C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25da24:
    // 0x25da24: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x25da24u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25da28:
    // 0x25da28: 0x0  nop
    ctx->pc = 0x25da28u;
    // NOP
label_25da2c:
    // 0x25da2c: 0x0  nop
    ctx->pc = 0x25da2cu;
    // NOP
label_25da30:
    // 0x25da30: 0x792a  .word       0x0000792A                   # slt         $t7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da30u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25da34:
    // 0x25da34: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da34u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25da38:
    // 0x25da38: 0x0  nop
    ctx->pc = 0x25da38u;
    // NOP
label_25da3c:
    // 0x25da3c: 0x0  nop
    ctx->pc = 0x25da3cu;
    // NOP
label_25da40:
    // 0x25da40: 0x7938  dsll        $t7, $zero, 4
    ctx->pc = 0x25da40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << 4);
label_25da44:
    // 0x25da44: 0x41a0  .word       0x000041A0                   # add         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25da48:
    // 0x25da48: 0x0  nop
    ctx->pc = 0x25da48u;
    // NOP
label_25da4c:
    // 0x25da4c: 0x0  nop
    ctx->pc = 0x25da4cu;
    // NOP
label_25da50:
    // 0x25da50: 0x7941  .word       0x00007941                   # INVALID     $zero, $zero, 0x7941 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25DA50 raw=0x00007941"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25da54:
    // 0x25da54: 0x67b0  tge         $zero, $zero, 414
    ctx->pc = 0x25da54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25da58:
    // 0x25da58: 0x0  nop
    ctx->pc = 0x25da58u;
    // NOP
label_25da5c:
    // 0x25da5c: 0x0  nop
    ctx->pc = 0x25da5cu;
    // NOP
label_25da60:
    // 0x25da60: 0x794e  .word       0x0000794E                   # INVALID     $zero, $zero, 0x794E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25DA60 raw=0x0000794E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25da64:
    // 0x25da64: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da64u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25da68:
    // 0x25da68: 0x0  nop
    ctx->pc = 0x25da68u;
    // NOP
label_25da6c:
    // 0x25da6c: 0x0  nop
    ctx->pc = 0x25da6cu;
    // NOP
label_25da70:
    // 0x25da70: 0x795a  .word       0x0000795A                   # div         $t7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da70u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25da74:
    // 0x25da74: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25da78:
    // 0x25da78: 0x0  nop
    ctx->pc = 0x25da78u;
    // NOP
label_25da7c:
    // 0x25da7c: 0x0  nop
    ctx->pc = 0x25da7cu;
    // NOP
label_25da80:
    // 0x25da80: 0x7969  .word       0x00007969                   # mtsa        $zero # 00007940 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25da80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25da84:
    // 0x25da84: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25da84u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25da88:
    // 0x25da88: 0x0  nop
    ctx->pc = 0x25da88u;
    // NOP
label_25da8c:
    // 0x25da8c: 0x0  nop
    ctx->pc = 0x25da8cu;
    // NOP
label_25da90:
    // 0x25da90: 0x7978  dsll        $t7, $zero, 5
    ctx->pc = 0x25da90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << 5);
label_25da94:
    // 0x25da94: 0x5170  tge         $zero, $zero, 325
    ctx->pc = 0x25da94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25da98:
    // 0x25da98: 0x0  nop
    ctx->pc = 0x25da98u;
    // NOP
label_25da9c:
    // 0x25da9c: 0x0  nop
    ctx->pc = 0x25da9cu;
    // NOP
label_25daa0:
    // 0x25daa0: 0x7983  sra         $t7, $zero, 6
    ctx->pc = 0x25daa0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), 6));
label_25daa4:
    // 0x25daa4: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x25daa4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25daa8:
    // 0x25daa8: 0x0  nop
    ctx->pc = 0x25daa8u;
    // NOP
label_25daac:
    // 0x25daac: 0x0  nop
    ctx->pc = 0x25daacu;
    // NOP
label_25dab0:
    // 0x25dab0: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dab0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25dab4:
    // 0x25dab4: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25dab8:
    // 0x25dab8: 0x0  nop
    ctx->pc = 0x25dab8u;
    // NOP
label_25dabc:
    // 0x25dabc: 0x0  nop
    ctx->pc = 0x25dabcu;
    // NOP
label_25dac0:
    // 0x25dac0: 0x79a1  .word       0x000079A1                   # addu        $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dac0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25dac4:
    // 0x25dac4: 0x2c00  sll         $a1, $zero, 16
    ctx->pc = 0x25dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25dac8:
    // 0x25dac8: 0x0  nop
    ctx->pc = 0x25dac8u;
    // NOP
label_25dacc:
    // 0x25dacc: 0x0  nop
    ctx->pc = 0x25daccu;
    // NOP
label_25dad0:
    // 0x25dad0: 0x79a7  .word       0x000079A7                   # not         $t7, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dad0u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25dad4:
    // 0x25dad4: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dad4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25dad8:
    // 0x25dad8: 0x0  nop
    ctx->pc = 0x25dad8u;
    // NOP
label_25dadc:
    // 0x25dadc: 0x0  nop
    ctx->pc = 0x25dadcu;
    // NOP
label_25dae0:
    // 0x25dae0: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x25dae0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25dae4:
    // 0x25dae4: 0xc080  sll         $t8, $zero, 2
    ctx->pc = 0x25dae4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_25dae8:
    // 0x25dae8: 0x0  nop
    ctx->pc = 0x25dae8u;
    // NOP
label_25daec:
    // 0x25daec: 0x0  nop
    ctx->pc = 0x25daecu;
    // NOP
label_25daf0:
    // 0x25daf0: 0x79c9  .word       0x000079C9                   # jalr        $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
label_25daf4:
    if (ctx->pc == 0x25DAF4u) {
        ctx->pc = 0x25DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAF0u;
        // 0x25daf4: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DAF8u;
        goto label_25daf8;
    }
    ctx->pc = 0x25DAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 15, 0x25DAF8u);
        ctx->pc = 0x25DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAF0u;
        // 0x25daf4: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DAF0u, 0x25DAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DAF8u;
label_25daf8:
    // 0x25daf8: 0x0  nop
    ctx->pc = 0x25daf8u;
    // NOP
label_25dafc:
    // 0x25dafc: 0x0  nop
    ctx->pc = 0x25dafcu;
    // NOP
label_25db00:
    // 0x25db00: 0x79d9  .word       0x000079D9                   # multu       $zero, $zero # 000079C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25db00u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_25db04:
    // 0x25db04: 0x3b00  sll         $a3, $zero, 12
    ctx->pc = 0x25db04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25db08:
    // 0x25db08: 0x0  nop
    ctx->pc = 0x25db08u;
    // NOP
label_25db0c:
    // 0x25db0c: 0x0  nop
    ctx->pc = 0x25db0cu;
    // NOP
label_25db10:
    // 0x25db10: 0x79e1  .word       0x000079E1                   # addu        $t7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25db10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25db14:
    // 0x25db14: 0x7df0  tge         $zero, $zero, 503
    ctx->pc = 0x25db14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25db18:
    // 0x25db18: 0x0  nop
    ctx->pc = 0x25db18u;
    // NOP
label_25db1c:
    // 0x25db1c: 0x0  nop
    ctx->pc = 0x25db1cu;
    // NOP
label_25db20:
    // 0x25db20: 0x79f1  tgeu        $zero, $zero, 487
    ctx->pc = 0x25db20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25db24:
    // 0x25db24: 0x2640  sll         $a0, $zero, 25
    ctx->pc = 0x25db24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25db28:
    // 0x25db28: 0x0  nop
    ctx->pc = 0x25db28u;
    // NOP
label_25db2c:
    // 0x25db2c: 0x0  nop
    ctx->pc = 0x25db2cu;
    // NOP
label_25db30:
    // 0x25db30: 0x79f6  tne         $zero, $zero, 487
    ctx->pc = 0x25db30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25db34:
    // 0x25db34: 0x3b20  .word       0x00003B20                   # add         $a3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25db34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25db38:
    // 0x25db38: 0x0  nop
    ctx->pc = 0x25db38u;
    // NOP
label_25db3c:
    // 0x25db3c: 0x0  nop
    ctx->pc = 0x25db3cu;
    // NOP
label_25db40:
    // 0x25db40: 0x79fe  dsrl32      $t7, $zero, 7
    ctx->pc = 0x25db40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> (32 + 7));
label_25db44:
    // 0x25db44: 0x4870  tge         $zero, $zero, 289
    ctx->pc = 0x25db44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25db48:
    // 0x25db48: 0x0  nop
    ctx->pc = 0x25db48u;
    // NOP
label_25db4c:
    // 0x25db4c: 0x0  nop
    ctx->pc = 0x25db4cu;
    // NOP
label_25db50:
    // 0x25db50: 0x7a08  .word       0x00007A08                   # jr          $zero # 00007A00 <InstrIdType: CPU_SPECIAL>
label_25db54:
    if (ctx->pc == 0x25DB54u) {
        ctx->pc = 0x25DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB50u;
        // 0x25db54: 0x6870  tge         $zero, $zero, 417 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB58u;
        goto label_25db58;
    }
    ctx->pc = 0x25DB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB50u;
        // 0x25db54: 0x6870  tge         $zero, $zero, 417 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DB50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25DB58u;
label_25db58:
    // 0x25db58: 0x0  nop
    ctx->pc = 0x25db58u;
    // NOP
label_25db5c:
    // 0x25db5c: 0x0  nop
    ctx->pc = 0x25db5cu;
    // NOP
label_25db60:
    // 0x25db60: 0x7a16  .word       0x00007A16                   # dsrlv       $t7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25db60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25db64:
    // 0x25db64: 0x8a20  .word       0x00008A20                   # add         $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25db64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25db68:
    // 0x25db68: 0x0  nop
    ctx->pc = 0x25db68u;
    // NOP
label_25db6c:
    // 0x25db6c: 0x0  nop
    ctx->pc = 0x25db6cu;
    // NOP
label_25db70:
    // 0x25db70: 0x7a28  .word       0x00007A28                   # mfsa        $t7 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25db70u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_25db74:
    // 0x25db74: 0x4cd0  .word       0x00004CD0                   # mfhi        $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25db74u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25db78:
    // 0x25db78: 0x0  nop
    ctx->pc = 0x25db78u;
    // NOP
label_25db7c:
    // 0x25db7c: 0x0  nop
    ctx->pc = 0x25db7cu;
    // NOP
label_25db80:
    // 0x25db80: 0x7a32  tlt         $zero, $zero, 488
    ctx->pc = 0x25db80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25db84:
    // 0x25db84: 0xb030  tge         $zero, $zero, 704
    ctx->pc = 0x25db84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25db88:
    // 0x25db88: 0x0  nop
    ctx->pc = 0x25db88u;
    // NOP
label_25db8c:
    // 0x25db8c: 0x0  nop
    ctx->pc = 0x25db8cu;
    // NOP
label_25db90:
    // 0x25db90: 0x7a49  .word       0x00007A49                   # jalr        $t7, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
label_25db94:
    if (ctx->pc == 0x25DB94u) {
        ctx->pc = 0x25DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB90u;
        // 0x25db94: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB98u;
        goto label_25db98;
    }
    ctx->pc = 0x25DB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 15, 0x25DB98u);
        ctx->pc = 0x25DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB90u;
        // 0x25db94: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DB90u, 0x25DB98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DB98u;
label_25db98:
    // 0x25db98: 0x0  nop
    ctx->pc = 0x25db98u;
    // NOP
label_25db9c:
    // 0x25db9c: 0x0  nop
    ctx->pc = 0x25db9cu;
    // NOP
label_25dba0:
    // 0x25dba0: 0x7a51  .word       0x00007A51                   # mthi        $zero # 00007A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dba0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25dba4:
    // 0x25dba4: 0x3b90  .word       0x00003B90                   # mfhi        $a3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dba4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25dba8:
    // 0x25dba8: 0x0  nop
    ctx->pc = 0x25dba8u;
    // NOP
label_25dbac:
    // 0x25dbac: 0x0  nop
    ctx->pc = 0x25dbacu;
    // NOP
label_25dbb0:
    // 0x25dbb0: 0x7a59  .word       0x00007A59                   # multu       $zero, $zero # 00007A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dbb0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_25dbb4:
    // 0x25dbb4: 0x5710  .word       0x00005710                   # mfhi        $t2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dbb4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25dbb8:
    // 0x25dbb8: 0x0  nop
    ctx->pc = 0x25dbb8u;
    // NOP
label_25dbbc:
    // 0x25dbbc: 0x0  nop
    ctx->pc = 0x25dbbcu;
    // NOP
label_25dbc0:
    // 0x25dbc0: 0x7a64  .word       0x00007A64                   # and         $t7, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dbc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25dbc4:
    // 0x25dbc4: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dbc4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25dbc8:
    // 0x25dbc8: 0x0  nop
    ctx->pc = 0x25dbc8u;
    // NOP
label_25dbcc:
    // 0x25dbcc: 0x0  nop
    ctx->pc = 0x25dbccu;
    // NOP
label_25dbd0:
    // 0x25dbd0: 0x7a70  tge         $zero, $zero, 489
    ctx->pc = 0x25dbd0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25dbd4:
    // 0x25dbd4: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dbd4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25dbd8:
    // 0x25dbd8: 0x0  nop
    ctx->pc = 0x25dbd8u;
    // NOP
label_25dbdc:
    // 0x25dbdc: 0x0  nop
    ctx->pc = 0x25dbdcu;
    // NOP
label_25dbe0:
    // 0x25dbe0: 0x7a7a  dsrl        $t7, $zero, 9
    ctx->pc = 0x25dbe0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> 9);
label_25dbe4:
    // 0x25dbe4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dbe4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25dbe8:
    // 0x25dbe8: 0x0  nop
    ctx->pc = 0x25dbe8u;
    // NOP
label_25dbec:
    // 0x25dbec: 0x0  nop
    ctx->pc = 0x25dbecu;
    // NOP
label_25dbf0:
    // 0x25dbf0: 0x7a87  .word       0x00007A87                   # srav        $t7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dbf0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25dbf4:
    // 0x25dbf4: 0xb330  tge         $zero, $zero, 716
    ctx->pc = 0x25dbf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25dbf8:
    // 0x25dbf8: 0x0  nop
    ctx->pc = 0x25dbf8u;
    // NOP
label_25dbfc:
    // 0x25dbfc: 0x0  nop
    ctx->pc = 0x25dbfcu;
    // NOP
label_25dc00:
    // 0x25dc00: 0x7a9e  .word       0x00007A9E                   # ddiv        $t7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25DC00 raw=0x00007A9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25dc04:
    // 0x25dc04: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x25dc04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25dc08:
    // 0x25dc08: 0x0  nop
    ctx->pc = 0x25dc08u;
    // NOP
label_25dc0c:
    // 0x25dc0c: 0x0  nop
    ctx->pc = 0x25dc0cu;
    // NOP
label_25dc10:
    // 0x25dc10: 0x7aad  .word       0x00007AAD                   # daddu       $t7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc10u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dc14:
    // 0x25dc14: 0x47e0  .word       0x000047E0                   # add         $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25dc18:
    // 0x25dc18: 0x0  nop
    ctx->pc = 0x25dc18u;
    // NOP
label_25dc1c:
    // 0x25dc1c: 0x0  nop
    ctx->pc = 0x25dc1cu;
    // NOP
label_25dc20:
    // 0x25dc20: 0x7ab6  tne         $zero, $zero, 490
    ctx->pc = 0x25dc20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25dc24:
    // 0x25dc24: 0xb2d0  .word       0x0000B2D0                   # mfhi        $s6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc24u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_25dc28:
    // 0x25dc28: 0x0  nop
    ctx->pc = 0x25dc28u;
    // NOP
label_25dc2c:
    // 0x25dc2c: 0x0  nop
    ctx->pc = 0x25dc2cu;
    // NOP
label_25dc30:
    // 0x25dc30: 0x7acd  break       0, 491
    ctx->pc = 0x25dc30u;
    runtime->handleBreak(rdram, ctx);
label_25dc34:
    // 0x25dc34: 0x6080  sll         $t4, $zero, 2
    ctx->pc = 0x25dc34u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_25dc38:
    // 0x25dc38: 0x0  nop
    ctx->pc = 0x25dc38u;
    // NOP
label_25dc3c:
    // 0x25dc3c: 0x0  nop
    ctx->pc = 0x25dc3cu;
    // NOP
label_25dc40:
    // 0x25dc40: 0x7ada  .word       0x00007ADA                   # div         $t7, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc40u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25dc44:
    // 0x25dc44: 0x46a0  .word       0x000046A0                   # add         $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25dc48:
    // 0x25dc48: 0x0  nop
    ctx->pc = 0x25dc48u;
    // NOP
label_25dc4c:
    // 0x25dc4c: 0x0  nop
    ctx->pc = 0x25dc4cu;
    // NOP
label_25dc50:
    // 0x25dc50: 0x7ae3  .word       0x00007AE3                   # negu        $t7, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc50u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25dc54:
    // 0x25dc54: 0x4a80  sll         $t1, $zero, 10
    ctx->pc = 0x25dc54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25dc58:
    // 0x25dc58: 0x0  nop
    ctx->pc = 0x25dc58u;
    // NOP
label_25dc5c:
    // 0x25dc5c: 0x0  nop
    ctx->pc = 0x25dc5cu;
    // NOP
label_25dc60:
    // 0x25dc60: 0x7aed  .word       0x00007AED                   # daddu       $t7, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc60u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dc64:
    // 0x25dc64: 0xaef0  tge         $zero, $zero, 699
    ctx->pc = 0x25dc64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25dc68:
    // 0x25dc68: 0x0  nop
    ctx->pc = 0x25dc68u;
    // NOP
label_25dc6c:
    // 0x25dc6c: 0x0  nop
    ctx->pc = 0x25dc6cu;
    // NOP
label_25dc70:
    // 0x25dc70: 0x7b03  sra         $t7, $zero, 12
    ctx->pc = 0x25dc70u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), 12));
label_25dc74:
    // 0x25dc74: 0xa9d0  .word       0x0000A9D0                   # mfhi        $s5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc74u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25dc78:
    // 0x25dc78: 0x0  nop
    ctx->pc = 0x25dc78u;
    // NOP
label_25dc7c:
    // 0x25dc7c: 0x0  nop
    ctx->pc = 0x25dc7cu;
    // NOP
label_25dc80:
    // 0x25dc80: 0x7b19  .word       0x00007B19                   # multu       $zero, $zero # 00007B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc80u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_25dc84:
    // 0x25dc84: 0x9420  .word       0x00009420                   # add         $s2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25dc88:
    // 0x25dc88: 0x0  nop
    ctx->pc = 0x25dc88u;
    // NOP
label_25dc8c:
    // 0x25dc8c: 0x0  nop
    ctx->pc = 0x25dc8cu;
    // NOP
label_25dc90:
    // 0x25dc90: 0x7b2c  .word       0x00007B2C                   # dadd        $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dc90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_25dc94:
    // 0x25dc94: 0x9b40  sll         $s3, $zero, 13
    ctx->pc = 0x25dc94u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25dc98:
    // 0x25dc98: 0x0  nop
    ctx->pc = 0x25dc98u;
    // NOP
label_25dc9c:
    // 0x25dc9c: 0x0  nop
    ctx->pc = 0x25dc9cu;
    // NOP
label_25dca0:
    // 0x25dca0: 0x7b40  sll         $t7, $zero, 13
    ctx->pc = 0x25dca0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25dca4:
    // 0x25dca4: 0xa750  .word       0x0000A750                   # mfhi        $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dca4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25dca8:
    // 0x25dca8: 0x0  nop
    ctx->pc = 0x25dca8u;
    // NOP
label_25dcac:
    // 0x25dcac: 0x0  nop
    ctx->pc = 0x25dcacu;
    // NOP
label_25dcb0:
    // 0x25dcb0: 0x7b55  .word       0x00007B55                   # INVALID     $zero, $zero, 0x7B55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dcb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25DCB0 raw=0x00007B55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25dcb4:
    // 0x25dcb4: 0x9b20  .word       0x00009B20                   # add         $s3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dcb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_25dcb8:
    // 0x25dcb8: 0x0  nop
    ctx->pc = 0x25dcb8u;
    // NOP
label_25dcbc:
    // 0x25dcbc: 0x0  nop
    ctx->pc = 0x25dcbcu;
    // NOP
label_25dcc0:
    // 0x25dcc0: 0x7b69  .word       0x00007B69                   # mtsa        $zero # 00007B40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25dcc0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25dcc4:
    // 0x25dcc4: 0xaba0  .word       0x0000ABA0                   # add         $s5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dcc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25dcc8:
    // 0x25dcc8: 0x0  nop
    ctx->pc = 0x25dcc8u;
    // NOP
label_25dccc:
    // 0x25dccc: 0x0  nop
    ctx->pc = 0x25dcccu;
    // NOP
label_25dcd0:
    // 0x25dcd0: 0x7b7f  dsra32      $t7, $zero, 13
    ctx->pc = 0x25dcd0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 13));
label_25dcd4:
    // 0x25dcd4: 0xabc0  sll         $s5, $zero, 15
    ctx->pc = 0x25dcd4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25dcd8:
    // 0x25dcd8: 0x0  nop
    ctx->pc = 0x25dcd8u;
    // NOP
label_25dcdc:
    // 0x25dcdc: 0x0  nop
    ctx->pc = 0x25dcdcu;
    // NOP
label_25dce0:
    // 0x25dce0: 0x7b95  .word       0x00007B95                   # INVALID     $zero, $zero, 0x7B95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25DCE0 raw=0x00007B95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25dce4:
    // 0x25dce4: 0x94c0  sll         $s2, $zero, 19
    ctx->pc = 0x25dce4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25dce8:
    // 0x25dce8: 0x0  nop
    ctx->pc = 0x25dce8u;
    // NOP
label_25dcec:
    // 0x25dcec: 0x0  nop
    ctx->pc = 0x25dcecu;
    // NOP
label_25dcf0:
    // 0x25dcf0: 0x7ba8  .word       0x00007BA8                   # mfsa        $t7 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25dcf0u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_25dcf4:
    // 0x25dcf4: 0xaf80  sll         $s5, $zero, 30
    ctx->pc = 0x25dcf4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25dcf8:
    // 0x25dcf8: 0x0  nop
    ctx->pc = 0x25dcf8u;
    // NOP
label_25dcfc:
    // 0x25dcfc: 0x0  nop
    ctx->pc = 0x25dcfcu;
    // NOP
label_25dd00:
    // 0x25dd00: 0x7bbe  dsrl32      $t7, $zero, 14
    ctx->pc = 0x25dd00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> (32 + 14));
label_25dd04:
    // 0x25dd04: 0x9b30  tge         $zero, $zero, 620
    ctx->pc = 0x25dd04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25dd08:
    // 0x25dd08: 0x0  nop
    ctx->pc = 0x25dd08u;
    // NOP
label_25dd0c:
    // 0x25dd0c: 0x0  nop
    ctx->pc = 0x25dd0cu;
    // NOP
label_25dd10:
    // 0x25dd10: 0x7bd2  .word       0x00007BD2                   # mflo        $t7 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dd10u;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_25dd14:
    // 0x25dd14: 0xb5e0  .word       0x0000B5E0                   # add         $s6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dd14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_25dd18:
    // 0x25dd18: 0x0  nop
    ctx->pc = 0x25dd18u;
    // NOP
label_25dd1c:
    // 0x25dd1c: 0x0  nop
    ctx->pc = 0x25dd1cu;
    // NOP
label_25dd20:
    // 0x25dd20: 0x7be9  .word       0x00007BE9                   # mtsa        $zero # 00007BC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25dd20u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25dd24:
    // 0x25dd24: 0xb000  sll         $s6, $zero, 0
    ctx->pc = 0x25dd24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25dd28:
    // 0x25dd28: 0x0  nop
    ctx->pc = 0x25dd28u;
    // NOP
label_25dd2c:
    // 0x25dd2c: 0x0  nop
    ctx->pc = 0x25dd2cu;
    // NOP
label_25dd30:
    // 0x25dd30: 0x7bff  dsra32      $t7, $zero, 15
    ctx->pc = 0x25dd30u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 15));
label_25dd34:
    // 0x25dd34: 0x9c00  sll         $s3, $zero, 16
    ctx->pc = 0x25dd34u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25dd38:
    // 0x25dd38: 0x0  nop
    ctx->pc = 0x25dd38u;
    // NOP
label_25dd3c:
    // 0x25dd3c: 0x0  nop
    ctx->pc = 0x25dd3cu;
    // NOP
label_25dd40:
    // 0x25dd40: 0x7c13  .word       0x00007C13                   # mtlo        $zero # 00007C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25dd40u;
    ctx->lo = GPR_U64(ctx, 0);
label_25dd44:
    // 0x25dd44: 0xa300  sll         $s4, $zero, 12
    ctx->pc = 0x25dd44u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25dd48:
    // 0x25dd48: 0x0  nop
    ctx->pc = 0x25dd48u;
    // NOP
label_25dd4c:
    // 0x25dd4c: 0x0  nop
    ctx->pc = 0x25dd4cu;
    // NOP
    ctx->pc = 0x25dd50u;
    return;
}
