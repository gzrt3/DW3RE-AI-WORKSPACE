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


void FUN_0017faa0_part586(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29d4f0u: goto label_29d4f0;
        case 0x29d4f4u: goto label_29d4f4;
        case 0x29d4f8u: goto label_29d4f8;
        case 0x29d4fcu: goto label_29d4fc;
        case 0x29d500u: goto label_29d500;
        case 0x29d504u: goto label_29d504;
        case 0x29d508u: goto label_29d508;
        case 0x29d50cu: goto label_29d50c;
        case 0x29d510u: goto label_29d510;
        case 0x29d514u: goto label_29d514;
        case 0x29d518u: goto label_29d518;
        case 0x29d51cu: goto label_29d51c;
        case 0x29d520u: goto label_29d520;
        case 0x29d524u: goto label_29d524;
        case 0x29d528u: goto label_29d528;
        case 0x29d52cu: goto label_29d52c;
        case 0x29d530u: goto label_29d530;
        case 0x29d534u: goto label_29d534;
        case 0x29d538u: goto label_29d538;
        case 0x29d53cu: goto label_29d53c;
        case 0x29d540u: goto label_29d540;
        case 0x29d544u: goto label_29d544;
        case 0x29d548u: goto label_29d548;
        case 0x29d54cu: goto label_29d54c;
        case 0x29d550u: goto label_29d550;
        case 0x29d554u: goto label_29d554;
        case 0x29d558u: goto label_29d558;
        case 0x29d55cu: goto label_29d55c;
        case 0x29d560u: goto label_29d560;
        case 0x29d564u: goto label_29d564;
        case 0x29d568u: goto label_29d568;
        case 0x29d56cu: goto label_29d56c;
        case 0x29d570u: goto label_29d570;
        case 0x29d574u: goto label_29d574;
        case 0x29d578u: goto label_29d578;
        case 0x29d57cu: goto label_29d57c;
        case 0x29d580u: goto label_29d580;
        case 0x29d584u: goto label_29d584;
        case 0x29d588u: goto label_29d588;
        case 0x29d58cu: goto label_29d58c;
        case 0x29d590u: goto label_29d590;
        case 0x29d594u: goto label_29d594;
        case 0x29d598u: goto label_29d598;
        case 0x29d59cu: goto label_29d59c;
        case 0x29d5a0u: goto label_29d5a0;
        case 0x29d5a4u: goto label_29d5a4;
        case 0x29d5a8u: goto label_29d5a8;
        case 0x29d5acu: goto label_29d5ac;
        case 0x29d5b0u: goto label_29d5b0;
        case 0x29d5b4u: goto label_29d5b4;
        case 0x29d5b8u: goto label_29d5b8;
        case 0x29d5bcu: goto label_29d5bc;
        case 0x29d5c0u: goto label_29d5c0;
        case 0x29d5c4u: goto label_29d5c4;
        case 0x29d5c8u: goto label_29d5c8;
        case 0x29d5ccu: goto label_29d5cc;
        case 0x29d5d0u: goto label_29d5d0;
        case 0x29d5d4u: goto label_29d5d4;
        case 0x29d5d8u: goto label_29d5d8;
        case 0x29d5dcu: goto label_29d5dc;
        case 0x29d5e0u: goto label_29d5e0;
        case 0x29d5e4u: goto label_29d5e4;
        case 0x29d5e8u: goto label_29d5e8;
        case 0x29d5ecu: goto label_29d5ec;
        case 0x29d5f0u: goto label_29d5f0;
        case 0x29d5f4u: goto label_29d5f4;
        case 0x29d5f8u: goto label_29d5f8;
        case 0x29d5fcu: goto label_29d5fc;
        case 0x29d600u: goto label_29d600;
        case 0x29d604u: goto label_29d604;
        case 0x29d608u: goto label_29d608;
        case 0x29d60cu: goto label_29d60c;
        case 0x29d610u: goto label_29d610;
        case 0x29d614u: goto label_29d614;
        case 0x29d618u: goto label_29d618;
        case 0x29d61cu: goto label_29d61c;
        case 0x29d620u: goto label_29d620;
        case 0x29d624u: goto label_29d624;
        case 0x29d628u: goto label_29d628;
        case 0x29d62cu: goto label_29d62c;
        case 0x29d630u: goto label_29d630;
        case 0x29d634u: goto label_29d634;
        case 0x29d638u: goto label_29d638;
        case 0x29d63cu: goto label_29d63c;
        case 0x29d640u: goto label_29d640;
        case 0x29d644u: goto label_29d644;
        case 0x29d648u: goto label_29d648;
        case 0x29d64cu: goto label_29d64c;
        case 0x29d650u: goto label_29d650;
        case 0x29d654u: goto label_29d654;
        case 0x29d658u: goto label_29d658;
        case 0x29d65cu: goto label_29d65c;
        case 0x29d660u: goto label_29d660;
        case 0x29d664u: goto label_29d664;
        case 0x29d668u: goto label_29d668;
        case 0x29d66cu: goto label_29d66c;
        case 0x29d670u: goto label_29d670;
        case 0x29d674u: goto label_29d674;
        case 0x29d678u: goto label_29d678;
        case 0x29d67cu: goto label_29d67c;
        case 0x29d680u: goto label_29d680;
        case 0x29d684u: goto label_29d684;
        case 0x29d688u: goto label_29d688;
        case 0x29d68cu: goto label_29d68c;
        case 0x29d690u: goto label_29d690;
        case 0x29d694u: goto label_29d694;
        case 0x29d698u: goto label_29d698;
        case 0x29d69cu: goto label_29d69c;
        case 0x29d6a0u: goto label_29d6a0;
        case 0x29d6a4u: goto label_29d6a4;
        case 0x29d6a8u: goto label_29d6a8;
        case 0x29d6acu: goto label_29d6ac;
        case 0x29d6b0u: goto label_29d6b0;
        case 0x29d6b4u: goto label_29d6b4;
        case 0x29d6b8u: goto label_29d6b8;
        case 0x29d6bcu: goto label_29d6bc;
        case 0x29d6c0u: goto label_29d6c0;
        case 0x29d6c4u: goto label_29d6c4;
        case 0x29d6c8u: goto label_29d6c8;
        case 0x29d6ccu: goto label_29d6cc;
        case 0x29d6d0u: goto label_29d6d0;
        case 0x29d6d4u: goto label_29d6d4;
        case 0x29d6d8u: goto label_29d6d8;
        case 0x29d6dcu: goto label_29d6dc;
        case 0x29d6e0u: goto label_29d6e0;
        case 0x29d6e4u: goto label_29d6e4;
        case 0x29d6e8u: goto label_29d6e8;
        case 0x29d6ecu: goto label_29d6ec;
        case 0x29d6f0u: goto label_29d6f0;
        case 0x29d6f4u: goto label_29d6f4;
        case 0x29d6f8u: goto label_29d6f8;
        case 0x29d6fcu: goto label_29d6fc;
        case 0x29d700u: goto label_29d700;
        case 0x29d704u: goto label_29d704;
        case 0x29d708u: goto label_29d708;
        case 0x29d70cu: goto label_29d70c;
        case 0x29d710u: goto label_29d710;
        case 0x29d714u: goto label_29d714;
        case 0x29d718u: goto label_29d718;
        case 0x29d71cu: goto label_29d71c;
        case 0x29d720u: goto label_29d720;
        case 0x29d724u: goto label_29d724;
        case 0x29d728u: goto label_29d728;
        case 0x29d72cu: goto label_29d72c;
        case 0x29d730u: goto label_29d730;
        case 0x29d734u: goto label_29d734;
        case 0x29d738u: goto label_29d738;
        case 0x29d73cu: goto label_29d73c;
        case 0x29d740u: goto label_29d740;
        case 0x29d744u: goto label_29d744;
        case 0x29d748u: goto label_29d748;
        case 0x29d74cu: goto label_29d74c;
        case 0x29d750u: goto label_29d750;
        case 0x29d754u: goto label_29d754;
        case 0x29d758u: goto label_29d758;
        case 0x29d75cu: goto label_29d75c;
        case 0x29d760u: goto label_29d760;
        case 0x29d764u: goto label_29d764;
        case 0x29d768u: goto label_29d768;
        case 0x29d76cu: goto label_29d76c;
        case 0x29d770u: goto label_29d770;
        case 0x29d774u: goto label_29d774;
        case 0x29d778u: goto label_29d778;
        case 0x29d77cu: goto label_29d77c;
        case 0x29d780u: goto label_29d780;
        case 0x29d784u: goto label_29d784;
        case 0x29d788u: goto label_29d788;
        case 0x29d78cu: goto label_29d78c;
        case 0x29d790u: goto label_29d790;
        case 0x29d794u: goto label_29d794;
        case 0x29d798u: goto label_29d798;
        case 0x29d79cu: goto label_29d79c;
        case 0x29d7a0u: goto label_29d7a0;
        case 0x29d7a4u: goto label_29d7a4;
        case 0x29d7a8u: goto label_29d7a8;
        case 0x29d7acu: goto label_29d7ac;
        case 0x29d7b0u: goto label_29d7b0;
        case 0x29d7b4u: goto label_29d7b4;
        case 0x29d7b8u: goto label_29d7b8;
        case 0x29d7bcu: goto label_29d7bc;
        case 0x29d7c0u: goto label_29d7c0;
        case 0x29d7c4u: goto label_29d7c4;
        case 0x29d7c8u: goto label_29d7c8;
        case 0x29d7ccu: goto label_29d7cc;
        case 0x29d7d0u: goto label_29d7d0;
        case 0x29d7d4u: goto label_29d7d4;
        case 0x29d7d8u: goto label_29d7d8;
        case 0x29d7dcu: goto label_29d7dc;
        case 0x29d7e0u: goto label_29d7e0;
        case 0x29d7e4u: goto label_29d7e4;
        case 0x29d7e8u: goto label_29d7e8;
        case 0x29d7ecu: goto label_29d7ec;
        case 0x29d7f0u: goto label_29d7f0;
        case 0x29d7f4u: goto label_29d7f4;
        case 0x29d7f8u: goto label_29d7f8;
        case 0x29d7fcu: goto label_29d7fc;
        case 0x29d800u: goto label_29d800;
        case 0x29d804u: goto label_29d804;
        case 0x29d808u: goto label_29d808;
        case 0x29d80cu: goto label_29d80c;
        case 0x29d810u: goto label_29d810;
        case 0x29d814u: goto label_29d814;
        case 0x29d818u: goto label_29d818;
        case 0x29d81cu: goto label_29d81c;
        case 0x29d820u: goto label_29d820;
        case 0x29d824u: goto label_29d824;
        case 0x29d828u: goto label_29d828;
        case 0x29d82cu: goto label_29d82c;
        case 0x29d830u: goto label_29d830;
        case 0x29d834u: goto label_29d834;
        case 0x29d838u: goto label_29d838;
        case 0x29d83cu: goto label_29d83c;
        case 0x29d840u: goto label_29d840;
        case 0x29d844u: goto label_29d844;
        case 0x29d848u: goto label_29d848;
        case 0x29d84cu: goto label_29d84c;
        case 0x29d850u: goto label_29d850;
        case 0x29d854u: goto label_29d854;
        case 0x29d858u: goto label_29d858;
        case 0x29d85cu: goto label_29d85c;
        case 0x29d860u: goto label_29d860;
        case 0x29d864u: goto label_29d864;
        case 0x29d868u: goto label_29d868;
        case 0x29d86cu: goto label_29d86c;
        case 0x29d870u: goto label_29d870;
        case 0x29d874u: goto label_29d874;
        case 0x29d878u: goto label_29d878;
        case 0x29d87cu: goto label_29d87c;
        case 0x29d880u: goto label_29d880;
        case 0x29d884u: goto label_29d884;
        case 0x29d888u: goto label_29d888;
        case 0x29d88cu: goto label_29d88c;
        case 0x29d890u: goto label_29d890;
        case 0x29d894u: goto label_29d894;
        case 0x29d898u: goto label_29d898;
        case 0x29d89cu: goto label_29d89c;
        case 0x29d8a0u: goto label_29d8a0;
        case 0x29d8a4u: goto label_29d8a4;
        case 0x29d8a8u: goto label_29d8a8;
        case 0x29d8acu: goto label_29d8ac;
        case 0x29d8b0u: goto label_29d8b0;
        case 0x29d8b4u: goto label_29d8b4;
        case 0x29d8b8u: goto label_29d8b8;
        case 0x29d8bcu: goto label_29d8bc;
        case 0x29d8c0u: goto label_29d8c0;
        case 0x29d8c4u: goto label_29d8c4;
        case 0x29d8c8u: goto label_29d8c8;
        case 0x29d8ccu: goto label_29d8cc;
        case 0x29d8d0u: goto label_29d8d0;
        case 0x29d8d4u: goto label_29d8d4;
        case 0x29d8d8u: goto label_29d8d8;
        case 0x29d8dcu: goto label_29d8dc;
        case 0x29d8e0u: goto label_29d8e0;
        case 0x29d8e4u: goto label_29d8e4;
        case 0x29d8e8u: goto label_29d8e8;
        case 0x29d8ecu: goto label_29d8ec;
        case 0x29d8f0u: goto label_29d8f0;
        case 0x29d8f4u: goto label_29d8f4;
        case 0x29d8f8u: goto label_29d8f8;
        case 0x29d8fcu: goto label_29d8fc;
        case 0x29d900u: goto label_29d900;
        case 0x29d904u: goto label_29d904;
        case 0x29d908u: goto label_29d908;
        case 0x29d90cu: goto label_29d90c;
        case 0x29d910u: goto label_29d910;
        case 0x29d914u: goto label_29d914;
        case 0x29d918u: goto label_29d918;
        case 0x29d91cu: goto label_29d91c;
        case 0x29d920u: goto label_29d920;
        case 0x29d924u: goto label_29d924;
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
        default: return;
    }

label_29d4f0:
    // 0x29d4f0: 0x25  move        $zero, $zero
    ctx->pc = 0x29d4f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29d4f4:
    // 0x29d4f4: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d4f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d4f8:
    // 0x29d4f8: 0x10  mfhi        $zero
    ctx->pc = 0x29d4f8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d4fc:
    // 0x29d4fc: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d4fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d500:
    // 0x29d500: 0xd  break       0
    ctx->pc = 0x29d500u;
    runtime->handleBreak(rdram, ctx);
label_29d504:
    // 0x29d504: 0x8c  syscall     2
    ctx->pc = 0x29d504u;
    ctx->pc = 0x29D508u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d508:
    // 0x29d508: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29d508u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d50c:
    // 0x29d50c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d50cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d510:
    // 0x29d510: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d510u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d514:
    // 0x29d514: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d514u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d518:
    // 0x29d518: 0x8  jr          $zero
label_29d51c:
    if (ctx->pc == 0x29D51Cu) {
        ctx->pc = 0x29D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D518u;
        // 0x29d51c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D520u;
        goto label_29d520;
    }
    ctx->pc = 0x29D518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D518u;
        // 0x29d51c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D518u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D520u;
label_29d520:
    // 0x29d520: 0xc  syscall     0
    ctx->pc = 0x29d520u;
    ctx->pc = 0x29D524u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d524:
    // 0x29d524: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d528:
    if (ctx->pc == 0x29D528u) {
        ctx->pc = 0x29D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D524u;
        // 0x29d528: 0x11  mthi        $zero (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D52Cu;
        goto label_29d52c;
    }
    ctx->pc = 0x29D524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D524u;
        // 0x29d528: 0x11  mthi        $zero (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D524u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D52Cu;
label_29d52c:
    // 0x29d52c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d52cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d530:
    // 0x29d530: 0x9  jalr        $zero, $zero
label_29d534:
    if (ctx->pc == 0x29D534u) {
        ctx->pc = 0x29D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D530u;
        // 0x29d534: 0xb4  teq         $zero, $zero, 2 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D538u;
        goto label_29d538;
    }
    ctx->pc = 0x29D530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D530u;
        // 0x29d534: 0xb4  teq         $zero, $zero, 2 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D530u, 0x29D538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D538u;
label_29d538:
    // 0x29d538: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d538u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d53c:
    // 0x29d53c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d53cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d540:
    // 0x29d540: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D540 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d544:
    // 0x29d544: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d548:
    // 0x29d548: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d548u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D548 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d54c:
    // 0x29d54c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d54cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d550:
    // 0x29d550: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d550u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d554:
    // 0x29d554: 0x8c  syscall     2
    ctx->pc = 0x29d554u;
    ctx->pc = 0x29D558u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d558:
    // 0x29d558: 0x0  nop
    ctx->pc = 0x29d558u;
    // NOP
label_29d55c:
    // 0x29d55c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d55cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d560:
    // 0x29d560: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29d560u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d564:
    // 0x29d564: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d564u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d568:
    // 0x29d568: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d568u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d56c:
    // 0x29d56c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d56cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d570:
    // 0x29d570: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d570u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d574:
    // 0x29d574: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d578:
    if (ctx->pc == 0x29D578u) {
        ctx->pc = 0x29D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D574u;
        // 0x29d578: 0x24  and         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D57Cu;
        goto label_29d57c;
    }
    ctx->pc = 0x29D574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D574u;
        // 0x29d578: 0x24  and         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D574u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D57Cu;
label_29d57c:
    // 0x29d57c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d57cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d580:
    // 0x29d580: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d580u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d584:
    // 0x29d584: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d584u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d588:
    // 0x29d588: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d588u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d58c:
    // 0x29d58c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d58cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d590:
    // 0x29d590: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d590u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d594:
    // 0x29d594: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d598:
    // 0x29d598: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d59c:
    // 0x29d59c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d59cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d5a0:
    // 0x29d5a0: 0x8  jr          $zero
label_29d5a4:
    if (ctx->pc == 0x29D5A4u) {
        ctx->pc = 0x29D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5A0u;
        // 0x29d5a4: 0x8c  syscall     2 (Delay Slot)
        ctx->pc = 0x29D5A8u;
        runtime->handleSyscall(rdram, ctx, 0x2u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5A8u;
        goto label_29d5a8;
    }
    ctx->pc = 0x29D5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5A0u;
        // 0x29d5a4: 0x8c  syscall     2 (Delay Slot)
        ctx->pc = 0x29D5A8u;
        runtime->handleSyscall(rdram, ctx, 0x2u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D5A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D5A8u;
label_29d5a8:
    // 0x29d5a8: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29d5a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d5ac:
    // 0x29d5ac: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d5acu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d5b0:
    // 0x29d5b0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29d5b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d5b4:
    // 0x29d5b4: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d5b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d5b8:
    // 0x29d5b8: 0x10  mfhi        $zero
    ctx->pc = 0x29d5b8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d5bc:
    // 0x29d5bc: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d5bcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d5c0:
    // 0x29d5c0: 0x12  mflo        $zero
    ctx->pc = 0x29d5c0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d5c4:
    // 0x29d5c4: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d5c4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d5c8:
    // 0x29d5c8: 0xc  syscall     0
    ctx->pc = 0x29d5c8u;
    ctx->pc = 0x29D5CCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d5cc:
    // 0x29d5cc: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d5ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d5d0:
    // 0x29d5d0: 0x11  mthi        $zero
    ctx->pc = 0x29d5d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d5d4:
    // 0x29d5d4: 0x1cc  syscall     7
    ctx->pc = 0x29d5d4u;
    ctx->pc = 0x29D5D8u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29d5d8:
    // 0x29d5d8: 0x9  jalr        $zero, $zero
label_29d5dc:
    if (ctx->pc == 0x29D5DCu) {
        ctx->pc = 0x29D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5D8u;
        // 0x29d5dc: 0x1b8  dsll        $zero, $zero, 6 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5E0u;
        goto label_29d5e0;
    }
    ctx->pc = 0x29D5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5D8u;
        // 0x29d5dc: 0x1b8  dsll        $zero, $zero, 6 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D5D8u, 0x29D5E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D5E0u;
label_29d5e0:
    // 0x29d5e0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d5e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d5e4:
    // 0x29d5e4: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d5e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d5e8:
    // 0x29d5e8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d5e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D5E8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d5ec:
    // 0x29d5ec: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d5ecu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d5f0:
    // 0x29d5f0: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d5f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d5f4:
    // 0x29d5f4: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d5f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d5f8:
    // 0x29d5f8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d5f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D5F8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d5fc:
    // 0x29d5fc: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d5fcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d600:
    // 0x29d600: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29d600u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29d604:
    // 0x29d604: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d604u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d608:
    // 0x29d608: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d608u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29D608 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d60c:
    // 0x29d60c: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d60cu;
    
label_29d610:
    // 0x29d610: 0x9  jalr        $zero, $zero
label_29d614:
    if (ctx->pc == 0x29D614u) {
        ctx->pc = 0x29D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D610u;
        // 0x29d614: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D618u;
        goto label_29d618;
    }
    ctx->pc = 0x29D610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D610u;
        // 0x29d614: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D610u, 0x29D618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D618u;
label_29d618:
    // 0x29d618: 0xc  syscall     0
    ctx->pc = 0x29d618u;
    ctx->pc = 0x29D61Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d61c:
    // 0x29d61c: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d61cu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29d620:
    // 0x29d620: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d620u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d624:
    // 0x29d624: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d624u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d628:
    // 0x29d628: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d628u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D628 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d62c:
    // 0x29d62c: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d62cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d630:
    // 0x29d630: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d630u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d634:
    // 0x29d634: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x29d634u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_29d638:
    // 0x29d638: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29d638u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29d63c:
    // 0x29d63c: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x29d63cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d640:
    // 0x29d640: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D640 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d644:
    // 0x29d644: 0x28  mfsa        $zero
    ctx->pc = 0x29d644u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d648:
    // 0x29d648: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d648u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d64c:
    // 0x29d64c: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29d64cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29D64C raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d650:
    // 0x29d650: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29d650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29D650 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d654:
    // 0x29d654: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29d654u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d658:
    // 0x29d658: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29d658u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d65c:
    // 0x29d65c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d65cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d660:
    // 0x29d660: 0xc  syscall     0
    ctx->pc = 0x29d660u;
    ctx->pc = 0x29D664u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d664:
    // 0x29d664: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d664u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d668:
    // 0x29d668: 0x12  mflo        $zero
    ctx->pc = 0x29d668u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d66c:
    // 0x29d66c: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d66cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d670:
    // 0x29d670: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29d670u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29d674:
    // 0x29d674: 0x1cc  syscall     7
    ctx->pc = 0x29d674u;
    ctx->pc = 0x29D678u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29d678:
    // 0x29d678: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d678u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d67c:
    // 0x29d67c: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d67cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d680:
    // 0x29d680: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d680u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d684:
    // 0x29d684: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d684u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d688:
    // 0x29d688: 0x9  jalr        $zero, $zero
label_29d68c:
    if (ctx->pc == 0x29D68Cu) {
        ctx->pc = 0x29D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D688u;
        // 0x29d68c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D690u;
        goto label_29d690;
    }
    ctx->pc = 0x29D688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D688u;
        // 0x29d68c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D688u, 0x29D690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D690u;
label_29d690:
    // 0x29d690: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D690 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d694:
    // 0x29d694: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d694u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d698:
    // 0x29d698: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d698u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D698 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d69c:
    // 0x29d69c: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d69cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d6a0:
    // 0x29d6a0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D6A0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d6a4:
    // 0x29d6a4: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d6a8:
    // 0x29d6a8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d6a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d6ac:
    // 0x29d6ac: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d6acu;
    
label_29d6b0:
    // 0x29d6b0: 0x11  mthi        $zero
    ctx->pc = 0x29d6b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d6b4:
    // 0x29d6b4: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d6b4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d6b8:
    // 0x29d6b8: 0xc  syscall     0
    ctx->pc = 0x29d6b8u;
    ctx->pc = 0x29D6BCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d6bc:
    // 0x29d6bc: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d6c0:
    // 0x29d6c0: 0x9  jalr        $zero, $zero
label_29d6c4:
    if (ctx->pc == 0x29D6C4u) {
        ctx->pc = 0x29D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6C0u;
        // 0x29d6c4: 0x1cc  syscall     7 (Delay Slot)
        ctx->pc = 0x29D6C8u;
        runtime->handleSyscall(rdram, ctx, 0x7u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6C8u;
        goto label_29d6c8;
    }
    ctx->pc = 0x29D6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6C0u;
        // 0x29d6c4: 0x1cc  syscall     7 (Delay Slot)
        ctx->pc = 0x29D6C8u;
        runtime->handleSyscall(rdram, ctx, 0x7u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D6C0u, 0x29D6C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D6C8u;
label_29d6c8:
    // 0x29d6c8: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d6c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d6cc:
    // 0x29d6cc: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d6ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d6d0:
    // 0x29d6d0: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d6d0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d6d4:
    // 0x29d6d4: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d6d8:
    // 0x29d6d8: 0xf  sync
    ctx->pc = 0x29d6d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29d6dc:
    // 0x29d6dc: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6dcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d6e0:
    // 0x29d6e0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D6E0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d6e4:
    // 0x29d6e4: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d6e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d6e8:
    // 0x29d6e8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29d6e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d6ec:
    // 0x29d6ec: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d6ecu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d6f0:
    // 0x29d6f0: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29d6f0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29d6f4:
    // 0x29d6f4: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d6f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d6f8:
    // 0x29d6f8: 0x0  nop
    ctx->pc = 0x29d6f8u;
    // NOP
label_29d6fc:
    // 0x29d6fc: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d6fcu;
    
label_29d700:
    // 0x29d700: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d700u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d704:
    // 0x29d704: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d708:
    if (ctx->pc == 0x29D708u) {
        ctx->pc = 0x29D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D704u;
        // 0x29d708: 0x24  and         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D70Cu;
        goto label_29d70c;
    }
    ctx->pc = 0x29D704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D704u;
        // 0x29d708: 0x24  and         $zero, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D704u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D70Cu;
label_29d70c:
    // 0x29d70c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d70cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d710:
    // 0x29d710: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d710u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d714:
    // 0x29d714: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d714u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d718:
    // 0x29d718: 0x22  neg         $zero, $zero
    ctx->pc = 0x29d718u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29d71c:
    // 0x29d71c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d71cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d720:
    // 0x29d720: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d720u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D720 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d724:
    // 0x29d724: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d728:
    // 0x29d728: 0x0  nop
    ctx->pc = 0x29d728u;
    // NOP
label_29d72c:
    // 0x29d72c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d72cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d730:
    // 0x29d730: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D730 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d734:
    // 0x29d734: 0x8c  syscall     2
    ctx->pc = 0x29d734u;
    ctx->pc = 0x29D738u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d738:
    // 0x29d738: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d738u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d73c:
    // 0x29d73c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d73cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d740:
    // 0x29d740: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29d740u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d744:
    // 0x29d744: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d744u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d748:
    // 0x29d748: 0x13  mtlo        $zero
    ctx->pc = 0x29d748u;
    ctx->lo = GPR_U64(ctx, 0);
label_29d74c:
    // 0x29d74c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d74cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d750:
    // 0x29d750: 0x11  mthi        $zero
    ctx->pc = 0x29d750u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d754:
    // 0x29d754: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d758:
    if (ctx->pc == 0x29D758u) {
        ctx->pc = 0x29D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D754u;
        // 0x29d758: 0x13  mtlo        $zero (Delay Slot)
        ctx->lo = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D75Cu;
        goto label_29d75c;
    }
    ctx->pc = 0x29D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D754u;
        // 0x29d758: 0x13  mtlo        $zero (Delay Slot)
        ctx->lo = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D754u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D75Cu;
label_29d75c:
    // 0x29d75c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d75cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d760:
    // 0x29d760: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d760u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d764:
    // 0x29d764: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d764u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d768:
    // 0x29d768: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d768u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29D768 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d76c:
    // 0x29d76c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d76cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d770:
    // 0x29d770: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29d770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29D770 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d774:
    // 0x29d774: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d778:
    // 0x29d778: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29d778u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d77c:
    // 0x29d77c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d77cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d780:
    // 0x29d780: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29d780u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29d784:
    // 0x29d784: 0x8c  syscall     2
    ctx->pc = 0x29d784u;
    ctx->pc = 0x29D788u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d788:
    // 0x29d788: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d788u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29D788 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d78c:
    // 0x29d78c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d78cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d790:
    // 0x29d790: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D790 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d794:
    // 0x29d794: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d794u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d798:
    // 0x29d798: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d798u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d79c:
    // 0x29d79c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d79cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d7a0:
    // 0x29d7a0: 0x11  mthi        $zero
    ctx->pc = 0x29d7a0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d7a4:
    // 0x29d7a4: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d7a4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d7a8:
    // 0x29d7a8: 0x12  mflo        $zero
    ctx->pc = 0x29d7a8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d7ac:
    // 0x29d7ac: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d7acu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d7b0:
    // 0x29d7b0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d7b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d7b4:
    // 0x29d7b4: 0x1cc  syscall     7
    ctx->pc = 0x29d7b4u;
    ctx->pc = 0x29D7B8u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29d7b8:
    // 0x29d7b8: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d7b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d7bc:
    // 0x29d7bc: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d7bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d7c0:
    // 0x29d7c0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29d7c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d7c4:
    // 0x29d7c4: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d7c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d7c8:
    // 0x29d7c8: 0x10  mfhi        $zero
    ctx->pc = 0x29d7c8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d7cc:
    // 0x29d7cc: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d7ccu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d7d0:
    // 0x29d7d0: 0x25  move        $zero, $zero
    ctx->pc = 0x29d7d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29d7d4:
    // 0x29d7d4: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d7d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d7d8:
    // 0x29d7d8: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d7d8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d7dc:
    // 0x29d7dc: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d7dcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d7e0:
    // 0x29d7e0: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d7e0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d7e4:
    // 0x29d7e4: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d7e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d7e8:
    // 0x29d7e8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d7e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d7ec:
    // 0x29d7ec: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d7ecu;
    
label_29d7f0:
    // 0x29d7f0: 0x12  mflo        $zero
    ctx->pc = 0x29d7f0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29d7f4:
    // 0x29d7f4: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29d7f8:
    if (ctx->pc == 0x29D7F8u) {
        ctx->pc = 0x29D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7F4u;
        // 0x29d7f8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D7F8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D7FCu;
        goto label_29d7fc;
    }
    ctx->pc = 0x29D7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7F4u;
        // 0x29d7f8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D7F8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D7F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D7FCu;
label_29d7fc:
    // 0x29d7fc: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d7fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d800:
    // 0x29d800: 0x10  mfhi        $zero
    ctx->pc = 0x29d800u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d804:
    // 0x29d804: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d804u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d808:
    // 0x29d808: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29d808u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29D808 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d80c:
    // 0x29d80c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d80cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d810:
    // 0x29d810: 0x19  multu       $zero, $zero
    ctx->pc = 0x29d810u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d814:
    // 0x29d814: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d818:
    // 0x29d818: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29d818u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29d81c:
    // 0x29d81c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d81cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d820:
    // 0x29d820: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29d820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29d824:
    // 0x29d824: 0x8c  syscall     2
    ctx->pc = 0x29d824u;
    ctx->pc = 0x29D828u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d828:
    // 0x29d828: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29d828u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29D828 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d82c:
    // 0x29d82c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d82cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d830:
    // 0x29d830: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29d830u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d834:
    // 0x29d834: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d834u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d838:
    // 0x29d838: 0x8  jr          $zero
label_29d83c:
    if (ctx->pc == 0x29D83Cu) {
        ctx->pc = 0x29D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D838u;
        // 0x29d83c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D840u;
        goto label_29d840;
    }
    ctx->pc = 0x29D838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D838u;
        // 0x29d83c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D838u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29D840u;
label_29d840:
    // 0x29d840: 0x9  jalr        $zero, $zero
label_29d844:
    if (ctx->pc == 0x29D844u) {
        ctx->pc = 0x29D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D840u;
        // 0x29d844: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D848u;
        goto label_29d848;
    }
    ctx->pc = 0x29D840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D840u;
        // 0x29d844: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D840u, 0x29D848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D848u;
label_29d848:
    // 0x29d848: 0xc  syscall     0
    ctx->pc = 0x29d848u;
    ctx->pc = 0x29D84Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d84c:
    // 0x29d84c: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29d84cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29d850:
    // 0x29d850: 0x11  mthi        $zero
    ctx->pc = 0x29d850u;
    ctx->hi = GPR_U64(ctx, 0);
label_29d854:
    // 0x29d854: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29d854u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d858:
    // 0x29d858: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29d858u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d85c:
    // 0x29d85c: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d85cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29d860:
    // 0x29d860: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D860 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d864:
    // 0x29d864: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d868:
    // 0x29d868: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d868u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d86c:
    // 0x29d86c: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d86cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d870:
    // 0x29d870: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29d870u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29d874:
    // 0x29d874: 0x8c  syscall     2
    ctx->pc = 0x29d874u;
    ctx->pc = 0x29D878u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_29d878:
    // 0x29d878: 0x0  nop
    ctx->pc = 0x29d878u;
    // NOP
label_29d87c:
    // 0x29d87c: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x29d87cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_29d880:
    // 0x29d880: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d880u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d884:
    // 0x29d884: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x29d884u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_29d888:
    // 0x29d888: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d888u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29D888 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d88c:
    // 0x29d88c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d88cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29d890:
    // 0x29d890: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29d890u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29d894:
    // 0x29d894: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d894u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d898:
    // 0x29d898: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d898u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d89c:
    // 0x29d89c: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d89cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d8a0:
    // 0x29d8a0: 0x9  jalr        $zero, $zero
label_29d8a4:
    if (ctx->pc == 0x29D8A4u) {
        ctx->pc = 0x29D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8A0u;
        // 0x29d8a4: 0x1cc  syscall     7 (Delay Slot)
        ctx->pc = 0x29D8A8u;
        runtime->handleSyscall(rdram, ctx, 0x7u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D8A8u;
        goto label_29d8a8;
    }
    ctx->pc = 0x29D8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8A0u;
        // 0x29d8a4: 0x1cc  syscall     7 (Delay Slot)
        ctx->pc = 0x29D8A8u;
        runtime->handleSyscall(rdram, ctx, 0x7u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D8A0u, 0x29D8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D8A8u;
label_29d8a8:
    // 0x29d8a8: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d8a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d8ac:
    // 0x29d8ac: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d8acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d8b0:
    // 0x29d8b0: 0xc  syscall     0
    ctx->pc = 0x29d8b0u;
    ctx->pc = 0x29D8B4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29d8b4:
    // 0x29d8b4: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d8b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d8b8:
    // 0x29d8b8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d8b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D8B8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d8bc:
    // 0x29d8bc: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d8bcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d8c0:
    // 0x29d8c0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d8c0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d8c4:
    // 0x29d8c4: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d8c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d8c8:
    // 0x29d8c8: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29d8c8u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d8cc:
    // 0x29d8cc: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d8ccu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d8d0:
    // 0x29d8d0: 0x0  nop
    ctx->pc = 0x29d8d0u;
    // NOP
label_29d8d4:
    // 0x29d8d4: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d8d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29d8d8:
    // 0x29d8d8: 0x13  mtlo        $zero
    ctx->pc = 0x29d8d8u;
    ctx->lo = GPR_U64(ctx, 0);
label_29d8dc:
    // 0x29d8dc: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x29d8dcu;
    
label_29d8e0:
    // 0x29d8e0: 0x23  negu        $zero, $zero
    ctx->pc = 0x29d8e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29d8e4:
    // 0x29d8e4: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x29d8e4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29d8e8:
    // 0x29d8e8: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29d8e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d8ec:
    // 0x29d8ec: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d8ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29d8f0:
    // 0x29d8f0: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29d8f0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29d8f4:
    // 0x29d8f4: 0x1cc  syscall     7
    ctx->pc = 0x29d8f4u;
    ctx->pc = 0x29D8F8u;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29d8f8:
    // 0x29d8f8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29d8f8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29d8fc:
    // 0x29d8fc: 0x1b8  dsll        $zero, $zero, 6
    ctx->pc = 0x29d8fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 6);
label_29d900:
    // 0x29d900: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29D900 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29d904:
    // 0x29d904: 0x1a4  .word       0x000001A4                   # and         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d904u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29d908:
    // 0x29d908: 0xd  break       0
    ctx->pc = 0x29d908u;
    runtime->handleBreak(rdram, ctx);
label_29d90c:
    // 0x29d90c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d90cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29d910:
    // 0x29d910: 0x13  mtlo        $zero
    ctx->pc = 0x29d910u;
    ctx->lo = GPR_U64(ctx, 0);
label_29d914:
    // 0x29d914: 0x17c  dsll32      $zero, $zero, 5
    ctx->pc = 0x29d914u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 5));
label_29d918:
    // 0x29d918: 0x0  nop
    ctx->pc = 0x29d918u;
    // NOP
label_29d91c:
    // 0x29d91c: 0x168  .word       0x00000168                   # mfsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29d91cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29d920:
    // 0x29d920: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29d920u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29d924:
    // 0x29d924: 0x154  .word       0x00000154                   # dsllv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d924u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
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
    ctx->pc = 0x29dcc0u;
    return;
}
