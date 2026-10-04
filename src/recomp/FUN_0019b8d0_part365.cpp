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


void FUN_0019b8d0_part365(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24d490u: goto label_24d490;
        case 0x24d494u: goto label_24d494;
        case 0x24d498u: goto label_24d498;
        case 0x24d49cu: goto label_24d49c;
        case 0x24d4a0u: goto label_24d4a0;
        case 0x24d4a4u: goto label_24d4a4;
        case 0x24d4a8u: goto label_24d4a8;
        case 0x24d4acu: goto label_24d4ac;
        case 0x24d4b0u: goto label_24d4b0;
        case 0x24d4b4u: goto label_24d4b4;
        case 0x24d4b8u: goto label_24d4b8;
        case 0x24d4bcu: goto label_24d4bc;
        case 0x24d4c0u: goto label_24d4c0;
        case 0x24d4c4u: goto label_24d4c4;
        case 0x24d4c8u: goto label_24d4c8;
        case 0x24d4ccu: goto label_24d4cc;
        case 0x24d4d0u: goto label_24d4d0;
        case 0x24d4d4u: goto label_24d4d4;
        case 0x24d4d8u: goto label_24d4d8;
        case 0x24d4dcu: goto label_24d4dc;
        case 0x24d4e0u: goto label_24d4e0;
        case 0x24d4e4u: goto label_24d4e4;
        case 0x24d4e8u: goto label_24d4e8;
        case 0x24d4ecu: goto label_24d4ec;
        case 0x24d4f0u: goto label_24d4f0;
        case 0x24d4f4u: goto label_24d4f4;
        case 0x24d4f8u: goto label_24d4f8;
        case 0x24d4fcu: goto label_24d4fc;
        case 0x24d500u: goto label_24d500;
        case 0x24d504u: goto label_24d504;
        case 0x24d508u: goto label_24d508;
        case 0x24d50cu: goto label_24d50c;
        case 0x24d510u: goto label_24d510;
        case 0x24d514u: goto label_24d514;
        case 0x24d518u: goto label_24d518;
        case 0x24d51cu: goto label_24d51c;
        case 0x24d520u: goto label_24d520;
        case 0x24d524u: goto label_24d524;
        case 0x24d528u: goto label_24d528;
        case 0x24d52cu: goto label_24d52c;
        case 0x24d530u: goto label_24d530;
        case 0x24d534u: goto label_24d534;
        case 0x24d538u: goto label_24d538;
        case 0x24d53cu: goto label_24d53c;
        case 0x24d540u: goto label_24d540;
        case 0x24d544u: goto label_24d544;
        case 0x24d548u: goto label_24d548;
        case 0x24d54cu: goto label_24d54c;
        case 0x24d550u: goto label_24d550;
        case 0x24d554u: goto label_24d554;
        case 0x24d558u: goto label_24d558;
        case 0x24d55cu: goto label_24d55c;
        case 0x24d560u: goto label_24d560;
        case 0x24d564u: goto label_24d564;
        case 0x24d568u: goto label_24d568;
        case 0x24d56cu: goto label_24d56c;
        case 0x24d570u: goto label_24d570;
        case 0x24d574u: goto label_24d574;
        case 0x24d578u: goto label_24d578;
        case 0x24d57cu: goto label_24d57c;
        case 0x24d580u: goto label_24d580;
        case 0x24d584u: goto label_24d584;
        case 0x24d588u: goto label_24d588;
        case 0x24d58cu: goto label_24d58c;
        case 0x24d590u: goto label_24d590;
        case 0x24d594u: goto label_24d594;
        case 0x24d598u: goto label_24d598;
        case 0x24d59cu: goto label_24d59c;
        case 0x24d5a0u: goto label_24d5a0;
        case 0x24d5a4u: goto label_24d5a4;
        case 0x24d5a8u: goto label_24d5a8;
        case 0x24d5acu: goto label_24d5ac;
        case 0x24d5b0u: goto label_24d5b0;
        case 0x24d5b4u: goto label_24d5b4;
        case 0x24d5b8u: goto label_24d5b8;
        case 0x24d5bcu: goto label_24d5bc;
        case 0x24d5c0u: goto label_24d5c0;
        case 0x24d5c4u: goto label_24d5c4;
        case 0x24d5c8u: goto label_24d5c8;
        case 0x24d5ccu: goto label_24d5cc;
        case 0x24d5d0u: goto label_24d5d0;
        case 0x24d5d4u: goto label_24d5d4;
        case 0x24d5d8u: goto label_24d5d8;
        case 0x24d5dcu: goto label_24d5dc;
        case 0x24d5e0u: goto label_24d5e0;
        case 0x24d5e4u: goto label_24d5e4;
        case 0x24d5e8u: goto label_24d5e8;
        case 0x24d5ecu: goto label_24d5ec;
        case 0x24d5f0u: goto label_24d5f0;
        case 0x24d5f4u: goto label_24d5f4;
        case 0x24d5f8u: goto label_24d5f8;
        case 0x24d5fcu: goto label_24d5fc;
        case 0x24d600u: goto label_24d600;
        case 0x24d604u: goto label_24d604;
        case 0x24d608u: goto label_24d608;
        case 0x24d60cu: goto label_24d60c;
        case 0x24d610u: goto label_24d610;
        case 0x24d614u: goto label_24d614;
        case 0x24d618u: goto label_24d618;
        case 0x24d61cu: goto label_24d61c;
        case 0x24d620u: goto label_24d620;
        case 0x24d624u: goto label_24d624;
        case 0x24d628u: goto label_24d628;
        case 0x24d62cu: goto label_24d62c;
        case 0x24d630u: goto label_24d630;
        case 0x24d634u: goto label_24d634;
        case 0x24d638u: goto label_24d638;
        case 0x24d63cu: goto label_24d63c;
        case 0x24d640u: goto label_24d640;
        case 0x24d644u: goto label_24d644;
        case 0x24d648u: goto label_24d648;
        case 0x24d64cu: goto label_24d64c;
        case 0x24d650u: goto label_24d650;
        case 0x24d654u: goto label_24d654;
        case 0x24d658u: goto label_24d658;
        case 0x24d65cu: goto label_24d65c;
        case 0x24d660u: goto label_24d660;
        case 0x24d664u: goto label_24d664;
        case 0x24d668u: goto label_24d668;
        case 0x24d66cu: goto label_24d66c;
        case 0x24d670u: goto label_24d670;
        case 0x24d674u: goto label_24d674;
        case 0x24d678u: goto label_24d678;
        case 0x24d67cu: goto label_24d67c;
        case 0x24d680u: goto label_24d680;
        case 0x24d684u: goto label_24d684;
        case 0x24d688u: goto label_24d688;
        case 0x24d68cu: goto label_24d68c;
        case 0x24d690u: goto label_24d690;
        case 0x24d694u: goto label_24d694;
        case 0x24d698u: goto label_24d698;
        case 0x24d69cu: goto label_24d69c;
        case 0x24d6a0u: goto label_24d6a0;
        case 0x24d6a4u: goto label_24d6a4;
        case 0x24d6a8u: goto label_24d6a8;
        case 0x24d6acu: goto label_24d6ac;
        case 0x24d6b0u: goto label_24d6b0;
        case 0x24d6b4u: goto label_24d6b4;
        case 0x24d6b8u: goto label_24d6b8;
        case 0x24d6bcu: goto label_24d6bc;
        case 0x24d6c0u: goto label_24d6c0;
        case 0x24d6c4u: goto label_24d6c4;
        case 0x24d6c8u: goto label_24d6c8;
        case 0x24d6ccu: goto label_24d6cc;
        case 0x24d6d0u: goto label_24d6d0;
        case 0x24d6d4u: goto label_24d6d4;
        case 0x24d6d8u: goto label_24d6d8;
        case 0x24d6dcu: goto label_24d6dc;
        case 0x24d6e0u: goto label_24d6e0;
        case 0x24d6e4u: goto label_24d6e4;
        case 0x24d6e8u: goto label_24d6e8;
        case 0x24d6ecu: goto label_24d6ec;
        case 0x24d6f0u: goto label_24d6f0;
        case 0x24d6f4u: goto label_24d6f4;
        case 0x24d6f8u: goto label_24d6f8;
        case 0x24d6fcu: goto label_24d6fc;
        case 0x24d700u: goto label_24d700;
        case 0x24d704u: goto label_24d704;
        case 0x24d708u: goto label_24d708;
        case 0x24d70cu: goto label_24d70c;
        case 0x24d710u: goto label_24d710;
        case 0x24d714u: goto label_24d714;
        case 0x24d718u: goto label_24d718;
        case 0x24d71cu: goto label_24d71c;
        case 0x24d720u: goto label_24d720;
        case 0x24d724u: goto label_24d724;
        case 0x24d728u: goto label_24d728;
        case 0x24d72cu: goto label_24d72c;
        case 0x24d730u: goto label_24d730;
        case 0x24d734u: goto label_24d734;
        case 0x24d738u: goto label_24d738;
        case 0x24d73cu: goto label_24d73c;
        case 0x24d740u: goto label_24d740;
        case 0x24d744u: goto label_24d744;
        case 0x24d748u: goto label_24d748;
        case 0x24d74cu: goto label_24d74c;
        case 0x24d750u: goto label_24d750;
        case 0x24d754u: goto label_24d754;
        case 0x24d758u: goto label_24d758;
        case 0x24d75cu: goto label_24d75c;
        case 0x24d760u: goto label_24d760;
        case 0x24d764u: goto label_24d764;
        case 0x24d768u: goto label_24d768;
        case 0x24d76cu: goto label_24d76c;
        case 0x24d770u: goto label_24d770;
        case 0x24d774u: goto label_24d774;
        case 0x24d778u: goto label_24d778;
        case 0x24d77cu: goto label_24d77c;
        case 0x24d780u: goto label_24d780;
        case 0x24d784u: goto label_24d784;
        case 0x24d788u: goto label_24d788;
        case 0x24d78cu: goto label_24d78c;
        case 0x24d790u: goto label_24d790;
        case 0x24d794u: goto label_24d794;
        case 0x24d798u: goto label_24d798;
        case 0x24d79cu: goto label_24d79c;
        case 0x24d7a0u: goto label_24d7a0;
        case 0x24d7a4u: goto label_24d7a4;
        case 0x24d7a8u: goto label_24d7a8;
        case 0x24d7acu: goto label_24d7ac;
        case 0x24d7b0u: goto label_24d7b0;
        case 0x24d7b4u: goto label_24d7b4;
        case 0x24d7b8u: goto label_24d7b8;
        case 0x24d7bcu: goto label_24d7bc;
        case 0x24d7c0u: goto label_24d7c0;
        case 0x24d7c4u: goto label_24d7c4;
        case 0x24d7c8u: goto label_24d7c8;
        case 0x24d7ccu: goto label_24d7cc;
        case 0x24d7d0u: goto label_24d7d0;
        case 0x24d7d4u: goto label_24d7d4;
        case 0x24d7d8u: goto label_24d7d8;
        case 0x24d7dcu: goto label_24d7dc;
        case 0x24d7e0u: goto label_24d7e0;
        case 0x24d7e4u: goto label_24d7e4;
        case 0x24d7e8u: goto label_24d7e8;
        case 0x24d7ecu: goto label_24d7ec;
        case 0x24d7f0u: goto label_24d7f0;
        case 0x24d7f4u: goto label_24d7f4;
        case 0x24d7f8u: goto label_24d7f8;
        case 0x24d7fcu: goto label_24d7fc;
        case 0x24d800u: goto label_24d800;
        case 0x24d804u: goto label_24d804;
        case 0x24d808u: goto label_24d808;
        case 0x24d80cu: goto label_24d80c;
        case 0x24d810u: goto label_24d810;
        case 0x24d814u: goto label_24d814;
        case 0x24d818u: goto label_24d818;
        case 0x24d81cu: goto label_24d81c;
        case 0x24d820u: goto label_24d820;
        case 0x24d824u: goto label_24d824;
        case 0x24d828u: goto label_24d828;
        case 0x24d82cu: goto label_24d82c;
        case 0x24d830u: goto label_24d830;
        case 0x24d834u: goto label_24d834;
        case 0x24d838u: goto label_24d838;
        case 0x24d83cu: goto label_24d83c;
        case 0x24d840u: goto label_24d840;
        case 0x24d844u: goto label_24d844;
        case 0x24d848u: goto label_24d848;
        case 0x24d84cu: goto label_24d84c;
        case 0x24d850u: goto label_24d850;
        case 0x24d854u: goto label_24d854;
        case 0x24d858u: goto label_24d858;
        case 0x24d85cu: goto label_24d85c;
        case 0x24d860u: goto label_24d860;
        case 0x24d864u: goto label_24d864;
        case 0x24d868u: goto label_24d868;
        case 0x24d86cu: goto label_24d86c;
        case 0x24d870u: goto label_24d870;
        case 0x24d874u: goto label_24d874;
        case 0x24d878u: goto label_24d878;
        case 0x24d87cu: goto label_24d87c;
        case 0x24d880u: goto label_24d880;
        case 0x24d884u: goto label_24d884;
        case 0x24d888u: goto label_24d888;
        case 0x24d88cu: goto label_24d88c;
        case 0x24d890u: goto label_24d890;
        case 0x24d894u: goto label_24d894;
        case 0x24d898u: goto label_24d898;
        case 0x24d89cu: goto label_24d89c;
        case 0x24d8a0u: goto label_24d8a0;
        case 0x24d8a4u: goto label_24d8a4;
        case 0x24d8a8u: goto label_24d8a8;
        case 0x24d8acu: goto label_24d8ac;
        case 0x24d8b0u: goto label_24d8b0;
        case 0x24d8b4u: goto label_24d8b4;
        case 0x24d8b8u: goto label_24d8b8;
        case 0x24d8bcu: goto label_24d8bc;
        case 0x24d8c0u: goto label_24d8c0;
        case 0x24d8c4u: goto label_24d8c4;
        case 0x24d8c8u: goto label_24d8c8;
        case 0x24d8ccu: goto label_24d8cc;
        case 0x24d8d0u: goto label_24d8d0;
        case 0x24d8d4u: goto label_24d8d4;
        case 0x24d8d8u: goto label_24d8d8;
        case 0x24d8dcu: goto label_24d8dc;
        case 0x24d8e0u: goto label_24d8e0;
        case 0x24d8e4u: goto label_24d8e4;
        case 0x24d8e8u: goto label_24d8e8;
        case 0x24d8ecu: goto label_24d8ec;
        case 0x24d8f0u: goto label_24d8f0;
        case 0x24d8f4u: goto label_24d8f4;
        case 0x24d8f8u: goto label_24d8f8;
        case 0x24d8fcu: goto label_24d8fc;
        case 0x24d900u: goto label_24d900;
        case 0x24d904u: goto label_24d904;
        case 0x24d908u: goto label_24d908;
        case 0x24d90cu: goto label_24d90c;
        case 0x24d910u: goto label_24d910;
        case 0x24d914u: goto label_24d914;
        case 0x24d918u: goto label_24d918;
        case 0x24d91cu: goto label_24d91c;
        case 0x24d920u: goto label_24d920;
        case 0x24d924u: goto label_24d924;
        case 0x24d928u: goto label_24d928;
        case 0x24d92cu: goto label_24d92c;
        case 0x24d930u: goto label_24d930;
        case 0x24d934u: goto label_24d934;
        case 0x24d938u: goto label_24d938;
        case 0x24d93cu: goto label_24d93c;
        case 0x24d940u: goto label_24d940;
        case 0x24d944u: goto label_24d944;
        case 0x24d948u: goto label_24d948;
        case 0x24d94cu: goto label_24d94c;
        case 0x24d950u: goto label_24d950;
        case 0x24d954u: goto label_24d954;
        case 0x24d958u: goto label_24d958;
        case 0x24d95cu: goto label_24d95c;
        case 0x24d960u: goto label_24d960;
        case 0x24d964u: goto label_24d964;
        case 0x24d968u: goto label_24d968;
        case 0x24d96cu: goto label_24d96c;
        case 0x24d970u: goto label_24d970;
        case 0x24d974u: goto label_24d974;
        case 0x24d978u: goto label_24d978;
        case 0x24d97cu: goto label_24d97c;
        case 0x24d980u: goto label_24d980;
        case 0x24d984u: goto label_24d984;
        case 0x24d988u: goto label_24d988;
        case 0x24d98cu: goto label_24d98c;
        case 0x24d990u: goto label_24d990;
        case 0x24d994u: goto label_24d994;
        case 0x24d998u: goto label_24d998;
        case 0x24d99cu: goto label_24d99c;
        case 0x24d9a0u: goto label_24d9a0;
        case 0x24d9a4u: goto label_24d9a4;
        case 0x24d9a8u: goto label_24d9a8;
        case 0x24d9acu: goto label_24d9ac;
        case 0x24d9b0u: goto label_24d9b0;
        case 0x24d9b4u: goto label_24d9b4;
        case 0x24d9b8u: goto label_24d9b8;
        case 0x24d9bcu: goto label_24d9bc;
        case 0x24d9c0u: goto label_24d9c0;
        case 0x24d9c4u: goto label_24d9c4;
        case 0x24d9c8u: goto label_24d9c8;
        case 0x24d9ccu: goto label_24d9cc;
        case 0x24d9d0u: goto label_24d9d0;
        case 0x24d9d4u: goto label_24d9d4;
        case 0x24d9d8u: goto label_24d9d8;
        case 0x24d9dcu: goto label_24d9dc;
        case 0x24d9e0u: goto label_24d9e0;
        case 0x24d9e4u: goto label_24d9e4;
        case 0x24d9e8u: goto label_24d9e8;
        case 0x24d9ecu: goto label_24d9ec;
        case 0x24d9f0u: goto label_24d9f0;
        case 0x24d9f4u: goto label_24d9f4;
        case 0x24d9f8u: goto label_24d9f8;
        case 0x24d9fcu: goto label_24d9fc;
        case 0x24da00u: goto label_24da00;
        case 0x24da04u: goto label_24da04;
        case 0x24da08u: goto label_24da08;
        case 0x24da0cu: goto label_24da0c;
        case 0x24da10u: goto label_24da10;
        case 0x24da14u: goto label_24da14;
        case 0x24da18u: goto label_24da18;
        case 0x24da1cu: goto label_24da1c;
        case 0x24da20u: goto label_24da20;
        case 0x24da24u: goto label_24da24;
        case 0x24da28u: goto label_24da28;
        case 0x24da2cu: goto label_24da2c;
        case 0x24da30u: goto label_24da30;
        case 0x24da34u: goto label_24da34;
        case 0x24da38u: goto label_24da38;
        case 0x24da3cu: goto label_24da3c;
        case 0x24da40u: goto label_24da40;
        case 0x24da44u: goto label_24da44;
        case 0x24da48u: goto label_24da48;
        case 0x24da4cu: goto label_24da4c;
        case 0x24da50u: goto label_24da50;
        case 0x24da54u: goto label_24da54;
        case 0x24da58u: goto label_24da58;
        case 0x24da5cu: goto label_24da5c;
        case 0x24da60u: goto label_24da60;
        case 0x24da64u: goto label_24da64;
        case 0x24da68u: goto label_24da68;
        case 0x24da6cu: goto label_24da6c;
        case 0x24da70u: goto label_24da70;
        case 0x24da74u: goto label_24da74;
        case 0x24da78u: goto label_24da78;
        case 0x24da7cu: goto label_24da7c;
        case 0x24da80u: goto label_24da80;
        case 0x24da84u: goto label_24da84;
        case 0x24da88u: goto label_24da88;
        case 0x24da8cu: goto label_24da8c;
        case 0x24da90u: goto label_24da90;
        case 0x24da94u: goto label_24da94;
        case 0x24da98u: goto label_24da98;
        case 0x24da9cu: goto label_24da9c;
        case 0x24daa0u: goto label_24daa0;
        case 0x24daa4u: goto label_24daa4;
        case 0x24daa8u: goto label_24daa8;
        case 0x24daacu: goto label_24daac;
        case 0x24dab0u: goto label_24dab0;
        case 0x24dab4u: goto label_24dab4;
        case 0x24dab8u: goto label_24dab8;
        case 0x24dabcu: goto label_24dabc;
        case 0x24dac0u: goto label_24dac0;
        case 0x24dac4u: goto label_24dac4;
        case 0x24dac8u: goto label_24dac8;
        case 0x24daccu: goto label_24dacc;
        case 0x24dad0u: goto label_24dad0;
        case 0x24dad4u: goto label_24dad4;
        case 0x24dad8u: goto label_24dad8;
        case 0x24dadcu: goto label_24dadc;
        case 0x24dae0u: goto label_24dae0;
        case 0x24dae4u: goto label_24dae4;
        case 0x24dae8u: goto label_24dae8;
        case 0x24daecu: goto label_24daec;
        case 0x24daf0u: goto label_24daf0;
        case 0x24daf4u: goto label_24daf4;
        case 0x24daf8u: goto label_24daf8;
        case 0x24dafcu: goto label_24dafc;
        case 0x24db00u: goto label_24db00;
        case 0x24db04u: goto label_24db04;
        case 0x24db08u: goto label_24db08;
        case 0x24db0cu: goto label_24db0c;
        case 0x24db10u: goto label_24db10;
        case 0x24db14u: goto label_24db14;
        case 0x24db18u: goto label_24db18;
        case 0x24db1cu: goto label_24db1c;
        case 0x24db20u: goto label_24db20;
        case 0x24db24u: goto label_24db24;
        case 0x24db28u: goto label_24db28;
        case 0x24db2cu: goto label_24db2c;
        case 0x24db30u: goto label_24db30;
        case 0x24db34u: goto label_24db34;
        case 0x24db38u: goto label_24db38;
        case 0x24db3cu: goto label_24db3c;
        case 0x24db40u: goto label_24db40;
        case 0x24db44u: goto label_24db44;
        case 0x24db48u: goto label_24db48;
        case 0x24db4cu: goto label_24db4c;
        case 0x24db50u: goto label_24db50;
        case 0x24db54u: goto label_24db54;
        case 0x24db58u: goto label_24db58;
        case 0x24db5cu: goto label_24db5c;
        case 0x24db60u: goto label_24db60;
        case 0x24db64u: goto label_24db64;
        case 0x24db68u: goto label_24db68;
        case 0x24db6cu: goto label_24db6c;
        case 0x24db70u: goto label_24db70;
        case 0x24db74u: goto label_24db74;
        case 0x24db78u: goto label_24db78;
        case 0x24db7cu: goto label_24db7c;
        case 0x24db80u: goto label_24db80;
        case 0x24db84u: goto label_24db84;
        case 0x24db88u: goto label_24db88;
        case 0x24db8cu: goto label_24db8c;
        case 0x24db90u: goto label_24db90;
        case 0x24db94u: goto label_24db94;
        case 0x24db98u: goto label_24db98;
        case 0x24db9cu: goto label_24db9c;
        case 0x24dba0u: goto label_24dba0;
        case 0x24dba4u: goto label_24dba4;
        case 0x24dba8u: goto label_24dba8;
        case 0x24dbacu: goto label_24dbac;
        case 0x24dbb0u: goto label_24dbb0;
        case 0x24dbb4u: goto label_24dbb4;
        case 0x24dbb8u: goto label_24dbb8;
        case 0x24dbbcu: goto label_24dbbc;
        case 0x24dbc0u: goto label_24dbc0;
        case 0x24dbc4u: goto label_24dbc4;
        case 0x24dbc8u: goto label_24dbc8;
        case 0x24dbccu: goto label_24dbcc;
        case 0x24dbd0u: goto label_24dbd0;
        case 0x24dbd4u: goto label_24dbd4;
        case 0x24dbd8u: goto label_24dbd8;
        case 0x24dbdcu: goto label_24dbdc;
        case 0x24dbe0u: goto label_24dbe0;
        case 0x24dbe4u: goto label_24dbe4;
        case 0x24dbe8u: goto label_24dbe8;
        case 0x24dbecu: goto label_24dbec;
        case 0x24dbf0u: goto label_24dbf0;
        case 0x24dbf4u: goto label_24dbf4;
        case 0x24dbf8u: goto label_24dbf8;
        case 0x24dbfcu: goto label_24dbfc;
        case 0x24dc00u: goto label_24dc00;
        case 0x24dc04u: goto label_24dc04;
        case 0x24dc08u: goto label_24dc08;
        case 0x24dc0cu: goto label_24dc0c;
        case 0x24dc10u: goto label_24dc10;
        case 0x24dc14u: goto label_24dc14;
        case 0x24dc18u: goto label_24dc18;
        case 0x24dc1cu: goto label_24dc1c;
        case 0x24dc20u: goto label_24dc20;
        case 0x24dc24u: goto label_24dc24;
        case 0x24dc28u: goto label_24dc28;
        case 0x24dc2cu: goto label_24dc2c;
        case 0x24dc30u: goto label_24dc30;
        case 0x24dc34u: goto label_24dc34;
        case 0x24dc38u: goto label_24dc38;
        case 0x24dc3cu: goto label_24dc3c;
        case 0x24dc40u: goto label_24dc40;
        case 0x24dc44u: goto label_24dc44;
        case 0x24dc48u: goto label_24dc48;
        case 0x24dc4cu: goto label_24dc4c;
        case 0x24dc50u: goto label_24dc50;
        case 0x24dc54u: goto label_24dc54;
        case 0x24dc58u: goto label_24dc58;
        case 0x24dc5cu: goto label_24dc5c;
        default: return;
    }

label_24d490:
    // 0x24d490: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d490u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D490 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d494:
    // 0x24d494: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d494u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D494 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d498:
    // 0x24d498: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d498u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d49c:
    // 0x24d49c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d49cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24D49C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4a0:
    // 0x24d4a0: 0x0  nop
    ctx->pc = 0x24d4a0u;
    // NOP
label_24d4a4:
    // 0x24d4a4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4a8:
    // 0x24d4a8: 0x0  nop
    ctx->pc = 0x24d4a8u;
    // NOP
label_24d4ac:
    // 0x24d4ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d4acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d4b0:
    // 0x24d4b0: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24D4B0 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4b4:
    // 0x24d4b4: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24D4B4 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4b8:
    // 0x24d4b8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4b8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24D4B8 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4bc:
    // 0x24d4bc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D4BC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4c0:
    // 0x24d4c0: 0x0  nop
    ctx->pc = 0x24d4c0u;
    // NOP
label_24d4c4:
    // 0x24d4c4: 0x0  nop
    ctx->pc = 0x24d4c4u;
    // NOP
label_24d4c8:
    // 0x24d4c8: 0x0  nop
    ctx->pc = 0x24d4c8u;
    // NOP
label_24d4cc:
    // 0x24d4cc: 0x0  nop
    ctx->pc = 0x24d4ccu;
    // NOP
label_24d4d0:
    // 0x24d4d0: 0x0  nop
    ctx->pc = 0x24d4d0u;
    // NOP
label_24d4d4:
    // 0x24d4d4: 0x0  nop
    ctx->pc = 0x24d4d4u;
    // NOP
label_24d4d8:
    // 0x24d4d8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4dc:
    // 0x24d4dc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4e0:
    // 0x24d4e0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4e4:
    // 0x24d4e4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D4E4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4e8:
    // 0x24d4e8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d4e8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D4E8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4ec:
    // 0x24d4ec: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d4ecu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D4EC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d4f0:
    // 0x24d4f0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4f4:
    // 0x24d4f4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4f8:
    // 0x24d4f8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d4fc:
    // 0x24d4fc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d4fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D4FC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d500:
    // 0x24d500: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d500u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D500 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d504:
    // 0x24d504: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d504u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D504 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d508:
    // 0x24d508: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d50c:
    // 0x24d50c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d510:
    // 0x24d510: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d514:
    // 0x24d514: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d514u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D514 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d518:
    // 0x24d518: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d518u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D518 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d51c:
    // 0x24d51c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d51cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D51C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d520:
    // 0x24d520: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d524:
    // 0x24d524: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d528:
    // 0x24d528: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d52c:
    // 0x24d52c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d52cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D52C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d530:
    // 0x24d530: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d530u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D530 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d534:
    // 0x24d534: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d534u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D534 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d538:
    // 0x24d538: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d53c:
    // 0x24d53c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d540:
    // 0x24d540: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d544:
    // 0x24d544: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d544u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D544 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d548:
    // 0x24d548: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d548u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D548 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d54c:
    // 0x24d54c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d54cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D54C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d550:
    // 0x24d550: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d554:
    // 0x24d554: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d558:
    // 0x24d558: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d55c:
    // 0x24d55c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d55cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D55C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d560:
    // 0x24d560: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d560u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D560 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d564:
    // 0x24d564: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d564u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D564 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d568:
    // 0x24d568: 0x42f60000  .word       0x42F60000                   # INVALID     $s7, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d568u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D568 raw=0x42F60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d56c:
    // 0x24d56c: 0x210009  .word       0x00210009                   # jalr        $zero, $at # 00010000 <InstrIdType: CPU_SPECIAL>
label_24d570:
    if (ctx->pc == 0x24D570u) {
        ctx->pc = 0x24D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D56Cu;
        // 0x24d570: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D574u;
        goto label_24d574;
    }
    ctx->pc = 0x24D56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D56Cu;
        // 0x24d570: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D56Cu, 0x24D574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D574u;
label_24d574:
    // 0x24d574: 0xbc00bc  .word       0x00BC00BC                   # dsll32      $zero, $gp, 2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d574u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) << (32 + 2));
label_24d578:
    // 0x24d578: 0x8470060  j           func_11C0180
label_24d57c:
    if (ctx->pc == 0x24D57Cu) {
        ctx->pc = 0x24D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D578u;
        // 0x24d57c: 0x8700129  j           func_1C004A4 (Delay Slot)
        // J 0x1C004A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D580u;
        goto label_24d580;
    }
    ctx->pc = 0x24D578u;
    ctx->pc = 0x24D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D578u;
    // 0x24d57c: 0x8700129  j           func_1C004A4 (Delay Slot)
    // J 0x1C004A4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C0180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0180u, 0x24D578u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D580u;
label_24d580:
    // 0x24d580: 0x1eb01ea  .word       0x01EB01EA                   # slt         $zero, $t7, $t3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d580u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_24d584:
    // 0x24d584: 0x188015f  .word       0x0188015F                   # ddivu       $zero, $t4, $t0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d584u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24D584 raw=0x0188015F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d588:
    // 0x24d588: 0x4700bd  .word       0x004700BD                   # INVALID     $v0, $a3, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d588u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24D588 raw=0x004700BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d58c:
    // 0x24d58c: 0x22  neg         $zero, $zero
    ctx->pc = 0x24d58cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24d590:
    // 0x24d590: 0x0  nop
    ctx->pc = 0x24d590u;
    // NOP
label_24d594:
    // 0x24d594: 0x0  nop
    ctx->pc = 0x24d594u;
    // NOP
label_24d598:
    // 0x24d598: 0x0  nop
    ctx->pc = 0x24d598u;
    // NOP
label_24d59c:
    // 0x24d59c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d59cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d5a0:
    // 0x24d5a0: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d5a0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24D5A0 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5a4:
    // 0x24d5a4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d5a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D5A4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5a8:
    // 0x24d5a8: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24d5ac:
    if (ctx->pc == 0x24D5ACu) {
        ctx->pc = 0x24D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5A8u;
        // 0x24d5ac: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D5AC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5B0u;
        goto label_24d5b0;
    }
    ctx->pc = 0x24D5A8u;
    {
        const bool branch_taken_0x24d5a8 = (false);
        ctx->pc = 0x24D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5A8u;
        // 0x24d5ac: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D5AC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5a8) {
            ctx->pc = 0x24D5ACu;
            goto label_24d5ac;
        }
    }
    ctx->pc = 0x24D5B0u;
label_24d5b0:
    // 0x24d5b0: 0x0  nop
    ctx->pc = 0x24d5b0u;
    // NOP
label_24d5b4:
    // 0x24d5b4: 0x0  nop
    ctx->pc = 0x24d5b4u;
    // NOP
label_24d5b8:
    // 0x24d5b8: 0x0  nop
    ctx->pc = 0x24d5b8u;
    // NOP
label_24d5bc:
    // 0x24d5bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d5bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d5c0:
    // 0x24d5c0: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d5c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24D5C0 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5c4:
    // 0x24d5c4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d5c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D5C4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5c8:
    // 0x24d5c8: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24d5cc:
    if (ctx->pc == 0x24D5CCu) {
        ctx->pc = 0x24D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5C8u;
        // 0x24d5cc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D5CC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5D0u;
        goto label_24d5d0;
    }
    ctx->pc = 0x24D5C8u;
    {
        const bool branch_taken_0x24d5c8 = (false);
        ctx->pc = 0x24D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5C8u;
        // 0x24d5cc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D5CC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5c8) {
            ctx->pc = 0x24D5CCu;
            goto label_24d5cc;
        }
    }
    ctx->pc = 0x24D5D0u;
label_24d5d0:
    // 0x24d5d0: 0x0  nop
    ctx->pc = 0x24d5d0u;
    // NOP
label_24d5d4:
    // 0x24d5d4: 0x0  nop
    ctx->pc = 0x24d5d4u;
    // NOP
label_24d5d8:
    // 0x24d5d8: 0x0  nop
    ctx->pc = 0x24d5d8u;
    // NOP
label_24d5dc:
    // 0x24d5dc: 0x0  nop
    ctx->pc = 0x24d5dcu;
    // NOP
label_24d5e0:
    // 0x24d5e0: 0x0  nop
    ctx->pc = 0x24d5e0u;
    // NOP
label_24d5e4:
    // 0x24d5e4: 0x0  nop
    ctx->pc = 0x24d5e4u;
    // NOP
label_24d5e8:
    // 0x24d5e8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d5ec:
    // 0x24d5ec: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d5f0:
    // 0x24d5f0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d5f4:
    // 0x24d5f4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d5f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D5F4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5f8:
    // 0x24d5f8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d5f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D5F8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d5fc:
    // 0x24d5fc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d5fcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D5FC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d600:
    // 0x24d600: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d604:
    // 0x24d604: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d608:
    // 0x24d608: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d60c:
    // 0x24d60c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d60cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D60C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d610:
    // 0x24d610: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d610u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D610 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d614:
    // 0x24d614: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d614u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D614 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d618:
    // 0x24d618: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d61c:
    // 0x24d61c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d620:
    // 0x24d620: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d624:
    // 0x24d624: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d624u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D624 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d628:
    // 0x24d628: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d628u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D628 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d62c:
    // 0x24d62c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d62cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D62C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d630:
    // 0x24d630: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d634:
    // 0x24d634: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d638:
    // 0x24d638: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d63c:
    // 0x24d63c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d63cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D63C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d640:
    // 0x24d640: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d640u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D640 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d644:
    // 0x24d644: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d644u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D644 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d648:
    // 0x24d648: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d64c:
    // 0x24d64c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d650:
    // 0x24d650: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d654:
    // 0x24d654: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d654u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D654 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d658:
    // 0x24d658: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d658u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D658 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d65c:
    // 0x24d65c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d65cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D65C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d660:
    // 0x24d660: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d664:
    // 0x24d664: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d668:
    // 0x24d668: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d66c:
    // 0x24d66c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d66cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D66C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d670:
    // 0x24d670: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d670u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D670 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d674:
    // 0x24d674: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d674u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D674 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d678:
    // 0x24d678: 0x42e33333  .word       0x42E33333                   # INVALID     $s7, $v1, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d678u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D678 raw=0x42E33333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d67c:
    // 0x24d67c: 0x220009  .word       0x00220009                   # jalr        $zero, $at # 00020000 <InstrIdType: CPU_SPECIAL>
label_24d680:
    if (ctx->pc == 0x24D680u) {
        ctx->pc = 0x24D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D67Cu;
        // 0x24d680: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D684u;
        goto label_24d684;
    }
    ctx->pc = 0x24D67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D67Cu;
        // 0x24d680: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D67Cu, 0x24D684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D684u;
label_24d684:
    // 0x24d684: 0xc400c4  .word       0x00C400C4                   # sllv        $zero, $a0, $a2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d684u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
label_24d688:
    // 0x24d688: 0x8480061  j           func_1200184
label_24d68c:
    if (ctx->pc == 0x24D68Cu) {
        ctx->pc = 0x24D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D688u;
        // 0x24d68c: 0x874012d  j           func_1D004B4 (Delay Slot)
        // J 0x1D004B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D690u;
        goto label_24d690;
    }
    ctx->pc = 0x24D688u;
    ctx->pc = 0x24D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D688u;
    // 0x24d68c: 0x874012d  j           func_1D004B4 (Delay Slot)
    // J 0x1D004B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200184u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200184u, 0x24D688u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D690u;
label_24d690:
    // 0x24d690: 0x1ee01ed  .word       0x01EE01ED                   # daddu       $zero, $t7, $t6 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d690u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 14));
label_24d694:
    // 0x24d694: 0x1890160  .word       0x01890160                   # add         $zero, $t4, $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d694u;
    {     int32_t rs_val = GPR_S32(ctx, 12);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_24d698:
    // 0x24d698: 0x4800c5  .word       0x004800C5                   # INVALID     $v0, $t0, 0xC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d698u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24D698 raw=0x004800C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d69c:
    // 0x24d69c: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x24d69cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_24d6a0:
    // 0x24d6a0: 0x0  nop
    ctx->pc = 0x24d6a0u;
    // NOP
label_24d6a4:
    // 0x24d6a4: 0x0  nop
    ctx->pc = 0x24d6a4u;
    // NOP
label_24d6a8:
    // 0x24d6a8: 0x0  nop
    ctx->pc = 0x24d6a8u;
    // NOP
label_24d6ac:
    // 0x24d6ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d6acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d6b0:
    // 0x24d6b0: 0x0  nop
    ctx->pc = 0x24d6b0u;
    // NOP
label_24d6b4:
    // 0x24d6b4: 0x0  nop
    ctx->pc = 0x24d6b4u;
    // NOP
label_24d6b8:
    // 0x24d6b8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24d6b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24d6bc:
    // 0x24d6bc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d6bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D6BC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d6c0:
    // 0x24d6c0: 0x0  nop
    ctx->pc = 0x24d6c0u;
    // NOP
label_24d6c4:
    // 0x24d6c4: 0x0  nop
    ctx->pc = 0x24d6c4u;
    // NOP
label_24d6c8:
    // 0x24d6c8: 0x0  nop
    ctx->pc = 0x24d6c8u;
    // NOP
label_24d6cc:
    // 0x24d6cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d6ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d6d0:
    // 0x24d6d0: 0x0  nop
    ctx->pc = 0x24d6d0u;
    // NOP
label_24d6d4:
    // 0x24d6d4: 0x0  nop
    ctx->pc = 0x24d6d4u;
    // NOP
label_24d6d8:
    // 0x24d6d8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24d6d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24d6dc:
    // 0x24d6dc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d6dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D6DC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d6e0:
    // 0x24d6e0: 0x0  nop
    ctx->pc = 0x24d6e0u;
    // NOP
label_24d6e4:
    // 0x24d6e4: 0x0  nop
    ctx->pc = 0x24d6e4u;
    // NOP
label_24d6e8:
    // 0x24d6e8: 0x0  nop
    ctx->pc = 0x24d6e8u;
    // NOP
label_24d6ec:
    // 0x24d6ec: 0x0  nop
    ctx->pc = 0x24d6ecu;
    // NOP
label_24d6f0:
    // 0x24d6f0: 0x0  nop
    ctx->pc = 0x24d6f0u;
    // NOP
label_24d6f4:
    // 0x24d6f4: 0x0  nop
    ctx->pc = 0x24d6f4u;
    // NOP
label_24d6f8:
    // 0x24d6f8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d6fc:
    // 0x24d6fc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d700:
    // 0x24d700: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d704:
    // 0x24d704: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d704u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D704 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d708:
    // 0x24d708: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d708u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D708 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d70c:
    // 0x24d70c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d70cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D70C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d710:
    // 0x24d710: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d714:
    // 0x24d714: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d718:
    // 0x24d718: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d71c:
    // 0x24d71c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d71cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D71C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d720:
    // 0x24d720: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d720u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D720 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d724:
    // 0x24d724: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d724u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D724 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d728:
    // 0x24d728: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d72c:
    // 0x24d72c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d72cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d730:
    // 0x24d730: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d734:
    // 0x24d734: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d734u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D734 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d738:
    // 0x24d738: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d738u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D738 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d73c:
    // 0x24d73c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d73cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D73C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d740:
    // 0x24d740: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d744:
    // 0x24d744: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d748:
    // 0x24d748: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d74c:
    // 0x24d74c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d74cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D74C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d750:
    // 0x24d750: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d750u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D750 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d754:
    // 0x24d754: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d754u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D754 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d758:
    // 0x24d758: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d75c:
    // 0x24d75c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d760:
    // 0x24d760: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d764:
    // 0x24d764: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d764u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D764 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d768:
    // 0x24d768: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d768u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D768 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d76c:
    // 0x24d76c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d76cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D76C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d770:
    // 0x24d770: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d774:
    // 0x24d774: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d778:
    // 0x24d778: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d77c:
    // 0x24d77c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d77cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D77C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d780:
    // 0x24d780: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d780u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D780 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d784:
    // 0x24d784: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d784u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D784 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d788:
    // 0x24d788: 0x42f78000  .word       0x42F78000                   # INVALID     $s7, $s7, -0x8000 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d788u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D788 raw=0x42F78000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d78c:
    // 0x24d78c: 0x230009  .word       0x00230009                   # jalr        $zero, $at # 00030000 <InstrIdType: CPU_SPECIAL>
label_24d790:
    if (ctx->pc == 0x24D790u) {
        ctx->pc = 0x24D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D78Cu;
        // 0x24d790: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D794u;
        goto label_24d794;
    }
    ctx->pc = 0x24D78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D78Cu;
        // 0x24d790: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D78Cu, 0x24D794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D794u;
label_24d794:
    // 0x24d794: 0xc600c6  .word       0x00C600C6                   # srlv        $zero, $a2, $a2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d794u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 6) & 0x1F));
label_24d798:
    // 0x24d798: 0x8490062  j           func_1240188
label_24d79c:
    if (ctx->pc == 0x24D79Cu) {
        ctx->pc = 0x24D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D798u;
        // 0x24d79c: 0x875012e  j           func_1D404B8 (Delay Slot)
        // J 0x1D404B8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7A0u;
        goto label_24d7a0;
    }
    ctx->pc = 0x24D798u;
    ctx->pc = 0x24D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D798u;
    // 0x24d79c: 0x875012e  j           func_1D404B8 (Delay Slot)
    // J 0x1D404B8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1240188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1240188u, 0x24D798u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D7A0u;
label_24d7a0:
    // 0x24d7a0: 0x1f101f0  tge         $t7, $s1, 7
    ctx->pc = 0x24d7a0u;
    if (GPR_S64(ctx, 15) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_24d7a4:
    // 0x24d7a4: 0x18a0161  .word       0x018A0161                   # addu        $zero, $t4, $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d7a4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_24d7a8:
    // 0x24d7a8: 0x4900c7  .word       0x004900C7                   # srav        $zero, $t1, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d7a8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_24d7ac:
    // 0x24d7ac: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x24d7acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24d7b0:
    // 0x24d7b0: 0x42140000  .word       0x42140000                   # INVALID     $s0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d7b0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D7B0 raw=0x42140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7b4:
    // 0x24d7b4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d7b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D7B4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7b8:
    // 0x24d7b8: 0x0  nop
    ctx->pc = 0x24d7b8u;
    // NOP
label_24d7bc:
    // 0x24d7bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d7bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d7c0:
    // 0x24d7c0: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d7c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D7C0 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7c4:
    // 0x24d7c4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d7c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D7C4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7c8:
    // 0x24d7c8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d7c8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d7cc:
    // 0x24d7cc: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24d7ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24D7CC raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7d0:
    // 0x24d7d0: 0x0  nop
    ctx->pc = 0x24d7d0u;
    // NOP
label_24d7d4:
    // 0x24d7d4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d7d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D7D4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7d8:
    // 0x24d7d8: 0x0  nop
    ctx->pc = 0x24d7d8u;
    // NOP
label_24d7dc:
    // 0x24d7dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d7dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d7e0:
    // 0x24d7e0: 0x0  nop
    ctx->pc = 0x24d7e0u;
    // NOP
label_24d7e4:
    // 0x24d7e4: 0x0  nop
    ctx->pc = 0x24d7e4u;
    // NOP
label_24d7e8:
    // 0x24d7e8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24d7e8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24d7ec:
    // 0x24d7ec: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d7ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24D7EC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d7f0:
    // 0x24d7f0: 0x0  nop
    ctx->pc = 0x24d7f0u;
    // NOP
label_24d7f4:
    // 0x24d7f4: 0x0  nop
    ctx->pc = 0x24d7f4u;
    // NOP
label_24d7f8:
    // 0x24d7f8: 0x0  nop
    ctx->pc = 0x24d7f8u;
    // NOP
label_24d7fc:
    // 0x24d7fc: 0x0  nop
    ctx->pc = 0x24d7fcu;
    // NOP
label_24d800:
    // 0x24d800: 0x0  nop
    ctx->pc = 0x24d800u;
    // NOP
label_24d804:
    // 0x24d804: 0x0  nop
    ctx->pc = 0x24d804u;
    // NOP
label_24d808:
    // 0x24d808: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d80c:
    // 0x24d80c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d810:
    // 0x24d810: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d814:
    // 0x24d814: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d814u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D814 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d818:
    // 0x24d818: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d818u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D818 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d81c:
    // 0x24d81c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d81cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D81C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d820:
    // 0x24d820: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d824:
    // 0x24d824: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d828:
    // 0x24d828: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d82c:
    // 0x24d82c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d82cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D82C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d830:
    // 0x24d830: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d830u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D830 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d834:
    // 0x24d834: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d834u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D834 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d838:
    // 0x24d838: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d83c:
    // 0x24d83c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d840:
    // 0x24d840: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d844:
    // 0x24d844: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d844u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D844 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d848:
    // 0x24d848: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d848u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D848 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d84c:
    // 0x24d84c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d84cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D84C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d850:
    // 0x24d850: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d854:
    // 0x24d854: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d858:
    // 0x24d858: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d85c:
    // 0x24d85c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d85cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D85C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d860:
    // 0x24d860: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d860u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D860 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d864:
    // 0x24d864: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d864u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D864 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d868:
    // 0x24d868: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d86c:
    // 0x24d86c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d870:
    // 0x24d870: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d874:
    // 0x24d874: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d874u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D874 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d878:
    // 0x24d878: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d878u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D878 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d87c:
    // 0x24d87c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d87cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D87C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d880:
    // 0x24d880: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d884:
    // 0x24d884: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d888:
    // 0x24d888: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d88c:
    // 0x24d88c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d88cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D88C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d890:
    // 0x24d890: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d890u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D890 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d894:
    // 0x24d894: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d894u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D894 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d898:
    // 0x24d898: 0x42e92e14  .word       0x42E92E14                   # INVALID     $s7, $t1, 0x2E14 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d898u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24D898 raw=0x42E92E14"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d89c:
    // 0x24d89c: 0x240009  .word       0x00240009                   # jalr        $zero, $at # 00040000 <InstrIdType: CPU_SPECIAL>
label_24d8a0:
    if (ctx->pc == 0x24D8A0u) {
        ctx->pc = 0x24D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D89Cu;
        // 0x24d8a0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8A4u;
        goto label_24d8a4;
    }
    ctx->pc = 0x24D89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D89Cu;
        // 0x24d8a0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D89Cu, 0x24D8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D8A4u;
label_24d8a4:
    // 0x24d8a4: 0xc800c8  .word       0x00C800C8                   # jr          $a2 # 000800C0 <InstrIdType: CPU_SPECIAL>
label_24d8a8:
    if (ctx->pc == 0x24D8A8u) {
        ctx->pc = 0x24D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8A4u;
        // 0x24d8a8: 0x84a0063  j           func_128018C (Delay Slot)
        // J 0x128018C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8ACu;
        goto label_24d8ac;
    }
    ctx->pc = 0x24D8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = 0x24D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8A4u;
        // 0x24d8a8: 0x84a0063  j           func_128018C (Delay Slot)
        // J 0x128018C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D8A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D8ACu;
label_24d8ac:
    // 0x24d8ac: 0x876012f  j           func_1D804BC
label_24d8b0:
    if (ctx->pc == 0x24D8B0u) {
        ctx->pc = 0x24D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8ACu;
        // 0x24d8b0: 0x1f401f3  tltu        $t7, $s4, 7 (Delay Slot)
        if (GPR_U64(ctx, 15) < GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8B4u;
        goto label_24d8b4;
    }
    ctx->pc = 0x24D8ACu;
    ctx->pc = 0x24D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8ACu;
    // 0x24d8b0: 0x1f401f3  tltu        $t7, $s4, 7 (Delay Slot)
    if (GPR_U64(ctx, 15) < GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D804BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D804BCu, 0x24D8ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D8B4u;
label_24d8b4:
    // 0x24d8b4: 0x18b0162  .word       0x018B0162                   # sub         $zero, $t4, $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d8b4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 12), GPR_U32(ctx, 11), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24d8b8:
    // 0x24d8b8: 0x4a00c9  .word       0x004A00C9                   # jalr        $zero, $v0 # 000A00C0 <InstrIdType: CPU_SPECIAL>
label_24d8bc:
    if (ctx->pc == 0x24D8BCu) {
        ctx->pc = 0x24D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8B8u;
        // 0x24d8bc: 0x28  mfsa        $zero (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8C0u;
        goto label_24d8c0;
    }
    ctx->pc = 0x24D8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x24D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8B8u;
        // 0x24d8bc: 0x28  mfsa        $zero (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D8B8u, 0x24D8C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D8C0u;
label_24d8c0:
    // 0x24d8c0: 0x0  nop
    ctx->pc = 0x24d8c0u;
    // NOP
label_24d8c4:
    // 0x24d8c4: 0x0  nop
    ctx->pc = 0x24d8c4u;
    // NOP
label_24d8c8:
    // 0x24d8c8: 0x0  nop
    ctx->pc = 0x24d8c8u;
    // NOP
label_24d8cc:
    // 0x24d8cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d8ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d8d0:
    // 0x24d8d0: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d8d0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D8D0 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d8d4:
    // 0x24d8d4: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24d8d4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24d8d8:
    // 0x24d8d8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d8d8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d8dc:
    // 0x24d8dc: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d8dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24D8DC raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d8e0:
    // 0x24d8e0: 0x0  nop
    ctx->pc = 0x24d8e0u;
    // NOP
label_24d8e4:
    // 0x24d8e4: 0x0  nop
    ctx->pc = 0x24d8e4u;
    // NOP
label_24d8e8:
    // 0x24d8e8: 0x0  nop
    ctx->pc = 0x24d8e8u;
    // NOP
label_24d8ec:
    // 0x24d8ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d8ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d8f0:
    // 0x24d8f0: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d8f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D8F0 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d8f4:
    // 0x24d8f4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d8f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24D8F4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d8f8:
    // 0x24d8f8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24d8f8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24d8fc:
    // 0x24d8fc: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d8fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24D8FC raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d900:
    // 0x24d900: 0x0  nop
    ctx->pc = 0x24d900u;
    // NOP
label_24d904:
    // 0x24d904: 0x0  nop
    ctx->pc = 0x24d904u;
    // NOP
label_24d908:
    // 0x24d908: 0x0  nop
    ctx->pc = 0x24d908u;
    // NOP
label_24d90c:
    // 0x24d90c: 0x0  nop
    ctx->pc = 0x24d90cu;
    // NOP
label_24d910:
    // 0x24d910: 0x0  nop
    ctx->pc = 0x24d910u;
    // NOP
label_24d914:
    // 0x24d914: 0x0  nop
    ctx->pc = 0x24d914u;
    // NOP
label_24d918:
    // 0x24d918: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d91c:
    // 0x24d91c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d920:
    // 0x24d920: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d924:
    // 0x24d924: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d924u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D924 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d928:
    // 0x24d928: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d928u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D928 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d92c:
    // 0x24d92c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d92cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D92C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d930:
    // 0x24d930: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d934:
    // 0x24d934: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24d934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d938:
    // 0x24d938: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d93c:
    // 0x24d93c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d93cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D93C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d940:
    // 0x24d940: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d940u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D940 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d944:
    // 0x24d944: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d944u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D944 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d948:
    // 0x24d948: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d94c:
    // 0x24d94c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24d94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d950:
    // 0x24d950: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24d950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d954:
    // 0x24d954: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d954u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D954 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d958:
    // 0x24d958: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d958u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D958 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d95c:
    // 0x24d95c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d95cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24D95C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d960:
    // 0x24d960: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24d960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d964:
    // 0x24d964: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24d964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d968:
    // 0x24d968: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d96c:
    // 0x24d96c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d96cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24D96C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d970:
    // 0x24d970: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d970u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24D970 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d974:
    // 0x24d974: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d974u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24D974 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d978:
    // 0x24d978: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24d978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d97c:
    // 0x24d97c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24d97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d980:
    // 0x24d980: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24d980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d984:
    // 0x24d984: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d984u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D984 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d988:
    // 0x24d988: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d988u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24D988 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d98c:
    // 0x24d98c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d98cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24D98C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d990:
    // 0x24d990: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24d990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d994:
    // 0x24d994: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24d994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d998:
    // 0x24d998: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24d998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24d99c:
    // 0x24d99c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d99cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D99C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d9a0:
    // 0x24d9a0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24d9a0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24D9A0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d9a4:
    // 0x24d9a4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d9a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24D9A4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d9a8:
    // 0x24d9a8: 0x42ca28f6  .word       0x42CA28F6                   # INVALID     $s6, $t2, 0x28F6 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d9a8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24D9A8 raw=0x42CA28F6"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d9ac:
    // 0x24d9ac: 0x250009  .word       0x00250009                   # jalr        $zero, $at # 00050000 <InstrIdType: CPU_SPECIAL>
label_24d9b0:
    if (ctx->pc == 0x24D9B0u) {
        ctx->pc = 0x24D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9ACu;
        // 0x24d9b0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9B4u;
        goto label_24d9b4;
    }
    ctx->pc = 0x24D9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9ACu;
        // 0x24d9b0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D9ACu, 0x24D9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D9B4u;
label_24d9b4:
    // 0x24d9b4: 0xcc00cc  .word       0x00CC00CC                   # syscall     3 # 00CC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d9b4u;
    ctx->pc = 0x24D9B8u;
runtime->handleSyscall(rdram, ctx, 0x33003u);
label_24d9b8:
    // 0x24d9b8: 0x84b0064  j           func_12C0190
label_24d9bc:
    if (ctx->pc == 0x24D9BCu) {
        ctx->pc = 0x24D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9B8u;
        // 0x24d9bc: 0x8780131  j           func_1E004C4 (Delay Slot)
        // J 0x1E004C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9C0u;
        goto label_24d9c0;
    }
    ctx->pc = 0x24D9B8u;
    ctx->pc = 0x24D9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9B8u;
    // 0x24d9bc: 0x8780131  j           func_1E004C4 (Delay Slot)
    // J 0x1E004C4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0190u, 0x24D9B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24D9C0u;
label_24d9c0:
    // 0x24d9c0: 0x1f701f6  tne         $t7, $s7, 7
    ctx->pc = 0x24d9c0u;
    if (GPR_U64(ctx, 15) != GPR_U64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_24d9c4:
    // 0x24d9c4: 0x18c0163  .word       0x018C0163                   # subu        $zero, $t4, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24d9c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 12)));
label_24d9c8:
    // 0x24d9c8: 0x4b00cd  break       75, 3
    ctx->pc = 0x24d9c8u;
    runtime->handleBreak(rdram, ctx);
label_24d9cc:
    // 0x24d9cc: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x24d9ccu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24d9d0:
    // 0x24d9d0: 0x0  nop
    ctx->pc = 0x24d9d0u;
    // NOP
label_24d9d4:
    // 0x24d9d4: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d9d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x24D9D4 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d9d8:
    // 0x24d9d8: 0x0  nop
    ctx->pc = 0x24d9d8u;
    // NOP
label_24d9dc:
    // 0x24d9dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d9dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24d9e0:
    // 0x24d9e0: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d9e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24D9E0 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d9e4:
    // 0x24d9e4: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24d9e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x24D9E4 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d9e8:
    // 0x24d9e8: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24d9e8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24D9E8 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24d9ec:
    // 0x24d9ec: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24d9f0:
    if (ctx->pc == 0x24D9F0u) {
        ctx->pc = 0x24D9F4u;
        goto label_24d9f4;
    }
    ctx->pc = 0x24D9ECu;
    {
        const bool branch_taken_0x24d9ec = (false);
        if (branch_taken_0x24d9ec) {
            ctx->pc = 0x24D9F0u;
            goto label_24d9f0;
        }
    }
    ctx->pc = 0x24D9F4u;
label_24d9f4:
    // 0x24d9f4: 0x0  nop
    ctx->pc = 0x24d9f4u;
    // NOP
label_24d9f8:
    // 0x24d9f8: 0x0  nop
    ctx->pc = 0x24d9f8u;
    // NOP
label_24d9fc:
    // 0x24d9fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24d9fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24da00:
    // 0x24da00: 0x0  nop
    ctx->pc = 0x24da00u;
    // NOP
label_24da04:
    // 0x24da04: 0x0  nop
    ctx->pc = 0x24da04u;
    // NOP
label_24da08:
    // 0x24da08: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24da08u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24da0c:
    // 0x24da0c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da0cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DA0C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da10:
    // 0x24da10: 0x0  nop
    ctx->pc = 0x24da10u;
    // NOP
label_24da14:
    // 0x24da14: 0x0  nop
    ctx->pc = 0x24da14u;
    // NOP
label_24da18:
    // 0x24da18: 0x0  nop
    ctx->pc = 0x24da18u;
    // NOP
label_24da1c:
    // 0x24da1c: 0x0  nop
    ctx->pc = 0x24da1cu;
    // NOP
label_24da20:
    // 0x24da20: 0x0  nop
    ctx->pc = 0x24da20u;
    // NOP
label_24da24:
    // 0x24da24: 0x0  nop
    ctx->pc = 0x24da24u;
    // NOP
label_24da28:
    // 0x24da28: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24da28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da2c:
    // 0x24da2c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24da2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da30:
    // 0x24da30: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24da30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da34:
    // 0x24da34: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da34u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DA34 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da38:
    // 0x24da38: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24da38u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DA38 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da3c:
    // 0x24da3c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24da3cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DA3C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da40:
    // 0x24da40: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24da40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da44:
    // 0x24da44: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24da44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da48:
    // 0x24da48: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24da48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da4c:
    // 0x24da4c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da4cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DA4C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da50:
    // 0x24da50: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24da50u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DA50 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da54:
    // 0x24da54: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24da54u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DA54 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da58:
    // 0x24da58: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24da58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da5c:
    // 0x24da5c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24da5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da60:
    // 0x24da60: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24da60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da64:
    // 0x24da64: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da64u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DA64 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da68:
    // 0x24da68: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24da68u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DA68 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da6c:
    // 0x24da6c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da6cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24DA6C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da70:
    // 0x24da70: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24da70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da74:
    // 0x24da74: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24da74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da78:
    // 0x24da78: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24da78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da7c:
    // 0x24da7c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DA7C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da80:
    // 0x24da80: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24DA80 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da84:
    // 0x24da84: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24DA84 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da88:
    // 0x24da88: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24da88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da8c:
    // 0x24da8c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24da8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da90:
    // 0x24da90: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24da90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24da94:
    // 0x24da94: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24DA94 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da98:
    // 0x24da98: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24DA98 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24da9c:
    // 0x24da9c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24da9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24DA9C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24daa0:
    // 0x24daa0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24daa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24daa4:
    // 0x24daa4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24daa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24daa8:
    // 0x24daa8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24daa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24daac:
    // 0x24daac: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24daacu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DAAC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dab0:
    // 0x24dab0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dab0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DAB0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dab4:
    // 0x24dab4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dab4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24DAB4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dab8:
    // 0x24dab8: 0x42ca28f6  .word       0x42CA28F6                   # INVALID     $s6, $t2, 0x28F6 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dab8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24DAB8 raw=0x42CA28F6"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dabc:
    // 0x24dabc: 0x260009  .word       0x00260009                   # jalr        $zero, $at # 00060000 <InstrIdType: CPU_SPECIAL>
label_24dac0:
    if (ctx->pc == 0x24DAC0u) {
        ctx->pc = 0x24DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DABCu;
        // 0x24dac0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DAC4u;
        goto label_24dac4;
    }
    ctx->pc = 0x24DABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DABCu;
        // 0x24dac0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DABCu, 0x24DAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DAC4u;
label_24dac4:
    // 0x24dac4: 0xce00ce  .word       0x00CE00CE                   # INVALID     $a2, $t6, 0xCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dac4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24DAC4 raw=0x00CE00CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dac8:
    // 0x24dac8: 0x84c0065  j           func_1300194
label_24dacc:
    if (ctx->pc == 0x24DACCu) {
        ctx->pc = 0x24DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAC8u;
        // 0x24dacc: 0x8790132  j           func_1E404C8 (Delay Slot)
        // J 0x1E404C8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DAD0u;
        goto label_24dad0;
    }
    ctx->pc = 0x24DAC8u;
    ctx->pc = 0x24DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DAC8u;
    // 0x24dacc: 0x8790132  j           func_1E404C8 (Delay Slot)
    // J 0x1E404C8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1300194u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1300194u, 0x24DAC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24DAD0u;
label_24dad0:
    // 0x24dad0: 0x21b021a  .word       0x021B021A                   # div         $zero, $s0, $k1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dad0u;
    { int32_t divisor = GPR_S32(ctx, 27);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24dad4:
    // 0x24dad4: 0x18d0164  .word       0x018D0164                   # and         $zero, $t4, $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dad4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 12) & GPR_U64(ctx, 13));
label_24dad8:
    // 0x24dad8: 0x4b00cf  .word       0x004B00CF                   # sync # 004B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dad8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_24dadc:
    // 0x24dadc: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x24dadcu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24dae0:
    // 0x24dae0: 0x0  nop
    ctx->pc = 0x24dae0u;
    // NOP
label_24dae4:
    // 0x24dae4: 0x0  nop
    ctx->pc = 0x24dae4u;
    // NOP
label_24dae8:
    // 0x24dae8: 0x0  nop
    ctx->pc = 0x24dae8u;
    // NOP
label_24daec:
    // 0x24daec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24daecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24daf0:
    // 0x24daf0: 0x0  nop
    ctx->pc = 0x24daf0u;
    // NOP
label_24daf4:
    // 0x24daf4: 0x0  nop
    ctx->pc = 0x24daf4u;
    // NOP
label_24daf8:
    // 0x24daf8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24daf8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24dafc:
    // 0x24dafc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dafcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DAFC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db00:
    // 0x24db00: 0x0  nop
    ctx->pc = 0x24db00u;
    // NOP
label_24db04:
    // 0x24db04: 0x0  nop
    ctx->pc = 0x24db04u;
    // NOP
label_24db08:
    // 0x24db08: 0x0  nop
    ctx->pc = 0x24db08u;
    // NOP
label_24db0c:
    // 0x24db0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24db0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24db10:
    // 0x24db10: 0x0  nop
    ctx->pc = 0x24db10u;
    // NOP
label_24db14:
    // 0x24db14: 0x0  nop
    ctx->pc = 0x24db14u;
    // NOP
label_24db18:
    // 0x24db18: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24db18u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24db1c:
    // 0x24db1c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db1cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DB1C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db20:
    // 0x24db20: 0x0  nop
    ctx->pc = 0x24db20u;
    // NOP
label_24db24:
    // 0x24db24: 0x0  nop
    ctx->pc = 0x24db24u;
    // NOP
label_24db28:
    // 0x24db28: 0x0  nop
    ctx->pc = 0x24db28u;
    // NOP
label_24db2c:
    // 0x24db2c: 0x0  nop
    ctx->pc = 0x24db2cu;
    // NOP
label_24db30:
    // 0x24db30: 0x0  nop
    ctx->pc = 0x24db30u;
    // NOP
label_24db34:
    // 0x24db34: 0x0  nop
    ctx->pc = 0x24db34u;
    // NOP
label_24db38:
    // 0x24db38: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24db38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db3c:
    // 0x24db3c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24db3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db40:
    // 0x24db40: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24db40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db44:
    // 0x24db44: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DB44 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db48:
    // 0x24db48: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24db48u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DB48 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db4c:
    // 0x24db4c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24db4cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DB4C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db50:
    // 0x24db50: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24db50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db54:
    // 0x24db54: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24db54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db58:
    // 0x24db58: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24db58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db5c:
    // 0x24db5c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DB5C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db60:
    // 0x24db60: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24db60u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DB60 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db64:
    // 0x24db64: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24db64u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DB64 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db68:
    // 0x24db68: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24db68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db6c:
    // 0x24db6c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24db6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db70:
    // 0x24db70: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24db70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db74:
    // 0x24db74: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db74u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DB74 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db78:
    // 0x24db78: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24db78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DB78 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db7c:
    // 0x24db7c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24DB7C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db80:
    // 0x24db80: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24db80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db84:
    // 0x24db84: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24db84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db88:
    // 0x24db88: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24db88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db8c:
    // 0x24db8c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DB8C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db90:
    // 0x24db90: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db90u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24DB90 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db94:
    // 0x24db94: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24db94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24DB94 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24db98:
    // 0x24db98: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24db98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24db9c:
    // 0x24db9c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24db9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dba0:
    // 0x24dba0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24dba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dba4:
    // 0x24dba4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dba4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24DBA4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dba8:
    // 0x24dba8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dba8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24DBA8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbac:
    // 0x24dbac: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dbacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24DBAC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbb0:
    // 0x24dbb0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24dbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dbb4:
    // 0x24dbb4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dbb8:
    // 0x24dbb8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24dbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dbbc:
    // 0x24dbbc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dbbcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DBBC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbc0:
    // 0x24dbc0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dbc0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DBC0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbc4:
    // 0x24dbc4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dbc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24DBC4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbc8:
    // 0x24dbc8: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dbc8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24DBC8 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbcc:
    // 0x24dbcc: 0x270009  .word       0x00270009                   # jalr        $zero, $at # 00070000 <InstrIdType: CPU_SPECIAL>
label_24dbd0:
    if (ctx->pc == 0x24DBD0u) {
        ctx->pc = 0x24DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBCCu;
        // 0x24dbd0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DBD4u;
        goto label_24dbd4;
    }
    ctx->pc = 0x24DBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBCCu;
        // 0x24dbd0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DBCCu, 0x24DBD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DBD4u;
label_24dbd4:
    // 0x24dbd4: 0xd000d0  .word       0x00D000D0                   # mfhi        $zero # 00D000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dbd4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_24dbd8:
    // 0x24dbd8: 0x84d0066  j           func_1340198
label_24dbdc:
    if (ctx->pc == 0x24DBDCu) {
        ctx->pc = 0x24DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DBD8u;
        // 0x24dbdc: 0x87a0133  j           func_1E804CC (Delay Slot)
        // J 0x1E804CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DBE0u;
        goto label_24dbe0;
    }
    ctx->pc = 0x24DBD8u;
    ctx->pc = 0x24DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DBD8u;
    // 0x24dbdc: 0x87a0133  j           func_1E804CC (Delay Slot)
    // J 0x1E804CC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1340198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1340198u, 0x24DBD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24DBE0u;
label_24dbe0:
    // 0x24dbe0: 0x1fa01f9  .word       0x01FA01F9                   # INVALID     $t7, $k0, 0x1F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dbe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24DBE0 raw=0x01FA01F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dbe4:
    // 0x24dbe4: 0x18e0165  .word       0x018E0165                   # or          $zero, $t4, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dbe4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 12) | GPR_U64(ctx, 14));
label_24dbe8:
    // 0x24dbe8: 0x4c00d1  .word       0x004C00D1                   # mthi        $v0 # 000C00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24dbe8u;
    ctx->hi = GPR_U64(ctx, 2);
label_24dbec:
    // 0x24dbec: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x24dbecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24dbf0:
    // 0x24dbf0: 0x0  nop
    ctx->pc = 0x24dbf0u;
    // NOP
label_24dbf4:
    // 0x24dbf4: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24dbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dbf8:
    // 0x24dbf8: 0x0  nop
    ctx->pc = 0x24dbf8u;
    // NOP
label_24dbfc:
    // 0x24dbfc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24dbfcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24dc00:
    // 0x24dc00: 0x42600000  .word       0x42600000                   # INVALID     $s3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc00u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24DC00 raw=0x42600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc04:
    // 0x24dc04: 0x41500000  .word       0x41500000                   # INVALID     $t2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DC04 raw=0x41500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc08:
    // 0x24dc08: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc08u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24DC08 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc0c:
    // 0x24dc0c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc0cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DC0C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc10:
    // 0x24dc10: 0x0  nop
    ctx->pc = 0x24dc10u;
    // NOP
label_24dc14:
    // 0x24dc14: 0x0  nop
    ctx->pc = 0x24dc14u;
    // NOP
label_24dc18:
    // 0x24dc18: 0x0  nop
    ctx->pc = 0x24dc18u;
    // NOP
label_24dc1c:
    // 0x24dc1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24dc1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24dc20:
    // 0x24dc20: 0x0  nop
    ctx->pc = 0x24dc20u;
    // NOP
label_24dc24:
    // 0x24dc24: 0x0  nop
    ctx->pc = 0x24dc24u;
    // NOP
label_24dc28:
    // 0x24dc28: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24dc28u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24dc2c:
    // 0x24dc2c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc2cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24DC2C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc30:
    // 0x24dc30: 0x0  nop
    ctx->pc = 0x24dc30u;
    // NOP
label_24dc34:
    // 0x24dc34: 0x0  nop
    ctx->pc = 0x24dc34u;
    // NOP
label_24dc38:
    // 0x24dc38: 0x0  nop
    ctx->pc = 0x24dc38u;
    // NOP
label_24dc3c:
    // 0x24dc3c: 0x0  nop
    ctx->pc = 0x24dc3cu;
    // NOP
label_24dc40:
    // 0x24dc40: 0x0  nop
    ctx->pc = 0x24dc40u;
    // NOP
label_24dc44:
    // 0x24dc44: 0x0  nop
    ctx->pc = 0x24dc44u;
    // NOP
label_24dc48:
    // 0x24dc48: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24dc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc4c:
    // 0x24dc4c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24dc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc50:
    // 0x24dc50: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24dc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24dc54:
    // 0x24dc54: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24dc54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24DC54 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc58:
    // 0x24dc58: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dc58u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DC58 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24dc5c:
    // 0x24dc5c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24dc5cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24DC5C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x24dc60u;
    return;
}
