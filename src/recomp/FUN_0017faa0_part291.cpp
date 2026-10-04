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


void FUN_0017faa0_part291(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20d440u: goto label_20d440;
        case 0x20d444u: goto label_20d444;
        case 0x20d448u: goto label_20d448;
        case 0x20d44cu: goto label_20d44c;
        case 0x20d450u: goto label_20d450;
        case 0x20d454u: goto label_20d454;
        case 0x20d458u: goto label_20d458;
        case 0x20d45cu: goto label_20d45c;
        case 0x20d460u: goto label_20d460;
        case 0x20d464u: goto label_20d464;
        case 0x20d468u: goto label_20d468;
        case 0x20d46cu: goto label_20d46c;
        case 0x20d470u: goto label_20d470;
        case 0x20d474u: goto label_20d474;
        case 0x20d478u: goto label_20d478;
        case 0x20d47cu: goto label_20d47c;
        case 0x20d480u: goto label_20d480;
        case 0x20d484u: goto label_20d484;
        case 0x20d488u: goto label_20d488;
        case 0x20d48cu: goto label_20d48c;
        case 0x20d490u: goto label_20d490;
        case 0x20d494u: goto label_20d494;
        case 0x20d498u: goto label_20d498;
        case 0x20d49cu: goto label_20d49c;
        case 0x20d4a0u: goto label_20d4a0;
        case 0x20d4a4u: goto label_20d4a4;
        case 0x20d4a8u: goto label_20d4a8;
        case 0x20d4acu: goto label_20d4ac;
        case 0x20d4b0u: goto label_20d4b0;
        case 0x20d4b4u: goto label_20d4b4;
        case 0x20d4b8u: goto label_20d4b8;
        case 0x20d4bcu: goto label_20d4bc;
        case 0x20d4c0u: goto label_20d4c0;
        case 0x20d4c4u: goto label_20d4c4;
        case 0x20d4c8u: goto label_20d4c8;
        case 0x20d4ccu: goto label_20d4cc;
        case 0x20d4d0u: goto label_20d4d0;
        case 0x20d4d4u: goto label_20d4d4;
        case 0x20d4d8u: goto label_20d4d8;
        case 0x20d4dcu: goto label_20d4dc;
        case 0x20d4e0u: goto label_20d4e0;
        case 0x20d4e4u: goto label_20d4e4;
        case 0x20d4e8u: goto label_20d4e8;
        case 0x20d4ecu: goto label_20d4ec;
        case 0x20d4f0u: goto label_20d4f0;
        case 0x20d4f4u: goto label_20d4f4;
        case 0x20d4f8u: goto label_20d4f8;
        case 0x20d4fcu: goto label_20d4fc;
        case 0x20d500u: goto label_20d500;
        case 0x20d504u: goto label_20d504;
        case 0x20d508u: goto label_20d508;
        case 0x20d50cu: goto label_20d50c;
        case 0x20d510u: goto label_20d510;
        case 0x20d514u: goto label_20d514;
        case 0x20d518u: goto label_20d518;
        case 0x20d51cu: goto label_20d51c;
        case 0x20d520u: goto label_20d520;
        case 0x20d524u: goto label_20d524;
        case 0x20d528u: goto label_20d528;
        case 0x20d52cu: goto label_20d52c;
        case 0x20d530u: goto label_20d530;
        case 0x20d534u: goto label_20d534;
        case 0x20d538u: goto label_20d538;
        case 0x20d53cu: goto label_20d53c;
        case 0x20d540u: goto label_20d540;
        case 0x20d544u: goto label_20d544;
        case 0x20d548u: goto label_20d548;
        case 0x20d54cu: goto label_20d54c;
        case 0x20d550u: goto label_20d550;
        case 0x20d554u: goto label_20d554;
        case 0x20d558u: goto label_20d558;
        case 0x20d55cu: goto label_20d55c;
        case 0x20d560u: goto label_20d560;
        case 0x20d564u: goto label_20d564;
        case 0x20d568u: goto label_20d568;
        case 0x20d56cu: goto label_20d56c;
        case 0x20d570u: goto label_20d570;
        case 0x20d574u: goto label_20d574;
        case 0x20d578u: goto label_20d578;
        case 0x20d57cu: goto label_20d57c;
        case 0x20d580u: goto label_20d580;
        case 0x20d584u: goto label_20d584;
        case 0x20d588u: goto label_20d588;
        case 0x20d58cu: goto label_20d58c;
        case 0x20d590u: goto label_20d590;
        case 0x20d594u: goto label_20d594;
        case 0x20d598u: goto label_20d598;
        case 0x20d59cu: goto label_20d59c;
        case 0x20d5a0u: goto label_20d5a0;
        case 0x20d5a4u: goto label_20d5a4;
        case 0x20d5a8u: goto label_20d5a8;
        case 0x20d5acu: goto label_20d5ac;
        case 0x20d5b0u: goto label_20d5b0;
        case 0x20d5b4u: goto label_20d5b4;
        case 0x20d5b8u: goto label_20d5b8;
        case 0x20d5bcu: goto label_20d5bc;
        case 0x20d5c0u: goto label_20d5c0;
        case 0x20d5c4u: goto label_20d5c4;
        case 0x20d5c8u: goto label_20d5c8;
        case 0x20d5ccu: goto label_20d5cc;
        case 0x20d5d0u: goto label_20d5d0;
        case 0x20d5d4u: goto label_20d5d4;
        case 0x20d5d8u: goto label_20d5d8;
        case 0x20d5dcu: goto label_20d5dc;
        case 0x20d5e0u: goto label_20d5e0;
        case 0x20d5e4u: goto label_20d5e4;
        case 0x20d5e8u: goto label_20d5e8;
        case 0x20d5ecu: goto label_20d5ec;
        case 0x20d5f0u: goto label_20d5f0;
        case 0x20d5f4u: goto label_20d5f4;
        case 0x20d5f8u: goto label_20d5f8;
        case 0x20d5fcu: goto label_20d5fc;
        case 0x20d600u: goto label_20d600;
        case 0x20d604u: goto label_20d604;
        case 0x20d608u: goto label_20d608;
        case 0x20d60cu: goto label_20d60c;
        case 0x20d610u: goto label_20d610;
        case 0x20d614u: goto label_20d614;
        case 0x20d618u: goto label_20d618;
        case 0x20d61cu: goto label_20d61c;
        case 0x20d620u: goto label_20d620;
        case 0x20d624u: goto label_20d624;
        case 0x20d628u: goto label_20d628;
        case 0x20d62cu: goto label_20d62c;
        case 0x20d630u: goto label_20d630;
        case 0x20d634u: goto label_20d634;
        case 0x20d638u: goto label_20d638;
        case 0x20d63cu: goto label_20d63c;
        case 0x20d640u: goto label_20d640;
        case 0x20d644u: goto label_20d644;
        case 0x20d648u: goto label_20d648;
        case 0x20d64cu: goto label_20d64c;
        case 0x20d650u: goto label_20d650;
        case 0x20d654u: goto label_20d654;
        case 0x20d658u: goto label_20d658;
        case 0x20d65cu: goto label_20d65c;
        case 0x20d660u: goto label_20d660;
        case 0x20d664u: goto label_20d664;
        case 0x20d668u: goto label_20d668;
        case 0x20d66cu: goto label_20d66c;
        case 0x20d670u: goto label_20d670;
        case 0x20d674u: goto label_20d674;
        case 0x20d678u: goto label_20d678;
        case 0x20d67cu: goto label_20d67c;
        case 0x20d680u: goto label_20d680;
        case 0x20d684u: goto label_20d684;
        case 0x20d688u: goto label_20d688;
        case 0x20d68cu: goto label_20d68c;
        case 0x20d690u: goto label_20d690;
        case 0x20d694u: goto label_20d694;
        case 0x20d698u: goto label_20d698;
        case 0x20d69cu: goto label_20d69c;
        case 0x20d6a0u: goto label_20d6a0;
        case 0x20d6a4u: goto label_20d6a4;
        case 0x20d6a8u: goto label_20d6a8;
        case 0x20d6acu: goto label_20d6ac;
        case 0x20d6b0u: goto label_20d6b0;
        case 0x20d6b4u: goto label_20d6b4;
        case 0x20d6b8u: goto label_20d6b8;
        case 0x20d6bcu: goto label_20d6bc;
        case 0x20d6c0u: goto label_20d6c0;
        case 0x20d6c4u: goto label_20d6c4;
        case 0x20d6c8u: goto label_20d6c8;
        case 0x20d6ccu: goto label_20d6cc;
        case 0x20d6d0u: goto label_20d6d0;
        case 0x20d6d4u: goto label_20d6d4;
        case 0x20d6d8u: goto label_20d6d8;
        case 0x20d6dcu: goto label_20d6dc;
        case 0x20d6e0u: goto label_20d6e0;
        case 0x20d6e4u: goto label_20d6e4;
        case 0x20d6e8u: goto label_20d6e8;
        case 0x20d6ecu: goto label_20d6ec;
        case 0x20d6f0u: goto label_20d6f0;
        case 0x20d6f4u: goto label_20d6f4;
        case 0x20d6f8u: goto label_20d6f8;
        case 0x20d6fcu: goto label_20d6fc;
        case 0x20d700u: goto label_20d700;
        case 0x20d704u: goto label_20d704;
        case 0x20d708u: goto label_20d708;
        case 0x20d70cu: goto label_20d70c;
        case 0x20d710u: goto label_20d710;
        case 0x20d714u: goto label_20d714;
        case 0x20d718u: goto label_20d718;
        case 0x20d71cu: goto label_20d71c;
        case 0x20d720u: goto label_20d720;
        case 0x20d724u: goto label_20d724;
        case 0x20d728u: goto label_20d728;
        case 0x20d72cu: goto label_20d72c;
        case 0x20d730u: goto label_20d730;
        case 0x20d734u: goto label_20d734;
        case 0x20d738u: goto label_20d738;
        case 0x20d73cu: goto label_20d73c;
        case 0x20d740u: goto label_20d740;
        case 0x20d744u: goto label_20d744;
        case 0x20d748u: goto label_20d748;
        case 0x20d74cu: goto label_20d74c;
        case 0x20d750u: goto label_20d750;
        case 0x20d754u: goto label_20d754;
        case 0x20d758u: goto label_20d758;
        case 0x20d75cu: goto label_20d75c;
        case 0x20d760u: goto label_20d760;
        case 0x20d764u: goto label_20d764;
        case 0x20d768u: goto label_20d768;
        case 0x20d76cu: goto label_20d76c;
        case 0x20d770u: goto label_20d770;
        case 0x20d774u: goto label_20d774;
        case 0x20d778u: goto label_20d778;
        case 0x20d77cu: goto label_20d77c;
        case 0x20d780u: goto label_20d780;
        case 0x20d784u: goto label_20d784;
        case 0x20d788u: goto label_20d788;
        case 0x20d78cu: goto label_20d78c;
        case 0x20d790u: goto label_20d790;
        case 0x20d794u: goto label_20d794;
        case 0x20d798u: goto label_20d798;
        case 0x20d79cu: goto label_20d79c;
        case 0x20d7a0u: goto label_20d7a0;
        case 0x20d7a4u: goto label_20d7a4;
        case 0x20d7a8u: goto label_20d7a8;
        case 0x20d7acu: goto label_20d7ac;
        case 0x20d7b0u: goto label_20d7b0;
        case 0x20d7b4u: goto label_20d7b4;
        case 0x20d7b8u: goto label_20d7b8;
        case 0x20d7bcu: goto label_20d7bc;
        case 0x20d7c0u: goto label_20d7c0;
        case 0x20d7c4u: goto label_20d7c4;
        case 0x20d7c8u: goto label_20d7c8;
        case 0x20d7ccu: goto label_20d7cc;
        case 0x20d7d0u: goto label_20d7d0;
        case 0x20d7d4u: goto label_20d7d4;
        case 0x20d7d8u: goto label_20d7d8;
        case 0x20d7dcu: goto label_20d7dc;
        case 0x20d7e0u: goto label_20d7e0;
        case 0x20d7e4u: goto label_20d7e4;
        case 0x20d7e8u: goto label_20d7e8;
        case 0x20d7ecu: goto label_20d7ec;
        case 0x20d7f0u: goto label_20d7f0;
        case 0x20d7f4u: goto label_20d7f4;
        case 0x20d7f8u: goto label_20d7f8;
        case 0x20d7fcu: goto label_20d7fc;
        case 0x20d800u: goto label_20d800;
        case 0x20d804u: goto label_20d804;
        case 0x20d808u: goto label_20d808;
        case 0x20d80cu: goto label_20d80c;
        case 0x20d810u: goto label_20d810;
        case 0x20d814u: goto label_20d814;
        case 0x20d818u: goto label_20d818;
        case 0x20d81cu: goto label_20d81c;
        case 0x20d820u: goto label_20d820;
        case 0x20d824u: goto label_20d824;
        case 0x20d828u: goto label_20d828;
        case 0x20d82cu: goto label_20d82c;
        case 0x20d830u: goto label_20d830;
        case 0x20d834u: goto label_20d834;
        case 0x20d838u: goto label_20d838;
        case 0x20d83cu: goto label_20d83c;
        case 0x20d840u: goto label_20d840;
        case 0x20d844u: goto label_20d844;
        case 0x20d848u: goto label_20d848;
        case 0x20d84cu: goto label_20d84c;
        case 0x20d850u: goto label_20d850;
        case 0x20d854u: goto label_20d854;
        case 0x20d858u: goto label_20d858;
        case 0x20d85cu: goto label_20d85c;
        case 0x20d860u: goto label_20d860;
        case 0x20d864u: goto label_20d864;
        case 0x20d868u: goto label_20d868;
        case 0x20d86cu: goto label_20d86c;
        case 0x20d870u: goto label_20d870;
        case 0x20d874u: goto label_20d874;
        case 0x20d878u: goto label_20d878;
        case 0x20d87cu: goto label_20d87c;
        case 0x20d880u: goto label_20d880;
        case 0x20d884u: goto label_20d884;
        case 0x20d888u: goto label_20d888;
        case 0x20d88cu: goto label_20d88c;
        case 0x20d890u: goto label_20d890;
        case 0x20d894u: goto label_20d894;
        case 0x20d898u: goto label_20d898;
        case 0x20d89cu: goto label_20d89c;
        case 0x20d8a0u: goto label_20d8a0;
        case 0x20d8a4u: goto label_20d8a4;
        case 0x20d8a8u: goto label_20d8a8;
        case 0x20d8acu: goto label_20d8ac;
        case 0x20d8b0u: goto label_20d8b0;
        case 0x20d8b4u: goto label_20d8b4;
        case 0x20d8b8u: goto label_20d8b8;
        case 0x20d8bcu: goto label_20d8bc;
        case 0x20d8c0u: goto label_20d8c0;
        case 0x20d8c4u: goto label_20d8c4;
        case 0x20d8c8u: goto label_20d8c8;
        case 0x20d8ccu: goto label_20d8cc;
        case 0x20d8d0u: goto label_20d8d0;
        case 0x20d8d4u: goto label_20d8d4;
        case 0x20d8d8u: goto label_20d8d8;
        case 0x20d8dcu: goto label_20d8dc;
        case 0x20d8e0u: goto label_20d8e0;
        case 0x20d8e4u: goto label_20d8e4;
        case 0x20d8e8u: goto label_20d8e8;
        case 0x20d8ecu: goto label_20d8ec;
        case 0x20d8f0u: goto label_20d8f0;
        case 0x20d8f4u: goto label_20d8f4;
        case 0x20d8f8u: goto label_20d8f8;
        case 0x20d8fcu: goto label_20d8fc;
        case 0x20d900u: goto label_20d900;
        case 0x20d904u: goto label_20d904;
        case 0x20d908u: goto label_20d908;
        case 0x20d90cu: goto label_20d90c;
        case 0x20d910u: goto label_20d910;
        case 0x20d914u: goto label_20d914;
        case 0x20d918u: goto label_20d918;
        case 0x20d91cu: goto label_20d91c;
        case 0x20d920u: goto label_20d920;
        case 0x20d924u: goto label_20d924;
        case 0x20d928u: goto label_20d928;
        case 0x20d92cu: goto label_20d92c;
        case 0x20d930u: goto label_20d930;
        case 0x20d934u: goto label_20d934;
        case 0x20d938u: goto label_20d938;
        case 0x20d93cu: goto label_20d93c;
        case 0x20d940u: goto label_20d940;
        case 0x20d944u: goto label_20d944;
        case 0x20d948u: goto label_20d948;
        case 0x20d94cu: goto label_20d94c;
        case 0x20d950u: goto label_20d950;
        case 0x20d954u: goto label_20d954;
        case 0x20d958u: goto label_20d958;
        case 0x20d95cu: goto label_20d95c;
        case 0x20d960u: goto label_20d960;
        case 0x20d964u: goto label_20d964;
        case 0x20d968u: goto label_20d968;
        case 0x20d96cu: goto label_20d96c;
        case 0x20d970u: goto label_20d970;
        case 0x20d974u: goto label_20d974;
        case 0x20d978u: goto label_20d978;
        case 0x20d97cu: goto label_20d97c;
        case 0x20d980u: goto label_20d980;
        case 0x20d984u: goto label_20d984;
        case 0x20d988u: goto label_20d988;
        case 0x20d98cu: goto label_20d98c;
        case 0x20d990u: goto label_20d990;
        case 0x20d994u: goto label_20d994;
        case 0x20d998u: goto label_20d998;
        case 0x20d99cu: goto label_20d99c;
        case 0x20d9a0u: goto label_20d9a0;
        case 0x20d9a4u: goto label_20d9a4;
        case 0x20d9a8u: goto label_20d9a8;
        case 0x20d9acu: goto label_20d9ac;
        case 0x20d9b0u: goto label_20d9b0;
        case 0x20d9b4u: goto label_20d9b4;
        case 0x20d9b8u: goto label_20d9b8;
        case 0x20d9bcu: goto label_20d9bc;
        case 0x20d9c0u: goto label_20d9c0;
        case 0x20d9c4u: goto label_20d9c4;
        case 0x20d9c8u: goto label_20d9c8;
        case 0x20d9ccu: goto label_20d9cc;
        case 0x20d9d0u: goto label_20d9d0;
        case 0x20d9d4u: goto label_20d9d4;
        case 0x20d9d8u: goto label_20d9d8;
        case 0x20d9dcu: goto label_20d9dc;
        case 0x20d9e0u: goto label_20d9e0;
        case 0x20d9e4u: goto label_20d9e4;
        case 0x20d9e8u: goto label_20d9e8;
        case 0x20d9ecu: goto label_20d9ec;
        case 0x20d9f0u: goto label_20d9f0;
        case 0x20d9f4u: goto label_20d9f4;
        case 0x20d9f8u: goto label_20d9f8;
        case 0x20d9fcu: goto label_20d9fc;
        case 0x20da00u: goto label_20da00;
        case 0x20da04u: goto label_20da04;
        case 0x20da08u: goto label_20da08;
        case 0x20da0cu: goto label_20da0c;
        case 0x20da10u: goto label_20da10;
        case 0x20da14u: goto label_20da14;
        case 0x20da18u: goto label_20da18;
        case 0x20da1cu: goto label_20da1c;
        case 0x20da20u: goto label_20da20;
        case 0x20da24u: goto label_20da24;
        case 0x20da28u: goto label_20da28;
        case 0x20da2cu: goto label_20da2c;
        case 0x20da30u: goto label_20da30;
        case 0x20da34u: goto label_20da34;
        case 0x20da38u: goto label_20da38;
        case 0x20da3cu: goto label_20da3c;
        case 0x20da40u: goto label_20da40;
        case 0x20da44u: goto label_20da44;
        case 0x20da48u: goto label_20da48;
        case 0x20da4cu: goto label_20da4c;
        case 0x20da50u: goto label_20da50;
        case 0x20da54u: goto label_20da54;
        case 0x20da58u: goto label_20da58;
        case 0x20da5cu: goto label_20da5c;
        case 0x20da60u: goto label_20da60;
        case 0x20da64u: goto label_20da64;
        case 0x20da68u: goto label_20da68;
        case 0x20da6cu: goto label_20da6c;
        case 0x20da70u: goto label_20da70;
        case 0x20da74u: goto label_20da74;
        case 0x20da78u: goto label_20da78;
        case 0x20da7cu: goto label_20da7c;
        case 0x20da80u: goto label_20da80;
        case 0x20da84u: goto label_20da84;
        case 0x20da88u: goto label_20da88;
        case 0x20da8cu: goto label_20da8c;
        case 0x20da90u: goto label_20da90;
        case 0x20da94u: goto label_20da94;
        case 0x20da98u: goto label_20da98;
        case 0x20da9cu: goto label_20da9c;
        case 0x20daa0u: goto label_20daa0;
        case 0x20daa4u: goto label_20daa4;
        case 0x20daa8u: goto label_20daa8;
        case 0x20daacu: goto label_20daac;
        case 0x20dab0u: goto label_20dab0;
        case 0x20dab4u: goto label_20dab4;
        case 0x20dab8u: goto label_20dab8;
        case 0x20dabcu: goto label_20dabc;
        case 0x20dac0u: goto label_20dac0;
        case 0x20dac4u: goto label_20dac4;
        case 0x20dac8u: goto label_20dac8;
        case 0x20daccu: goto label_20dacc;
        case 0x20dad0u: goto label_20dad0;
        case 0x20dad4u: goto label_20dad4;
        case 0x20dad8u: goto label_20dad8;
        case 0x20dadcu: goto label_20dadc;
        case 0x20dae0u: goto label_20dae0;
        case 0x20dae4u: goto label_20dae4;
        case 0x20dae8u: goto label_20dae8;
        case 0x20daecu: goto label_20daec;
        case 0x20daf0u: goto label_20daf0;
        case 0x20daf4u: goto label_20daf4;
        case 0x20daf8u: goto label_20daf8;
        case 0x20dafcu: goto label_20dafc;
        case 0x20db00u: goto label_20db00;
        case 0x20db04u: goto label_20db04;
        case 0x20db08u: goto label_20db08;
        case 0x20db0cu: goto label_20db0c;
        case 0x20db10u: goto label_20db10;
        case 0x20db14u: goto label_20db14;
        case 0x20db18u: goto label_20db18;
        case 0x20db1cu: goto label_20db1c;
        case 0x20db20u: goto label_20db20;
        case 0x20db24u: goto label_20db24;
        case 0x20db28u: goto label_20db28;
        case 0x20db2cu: goto label_20db2c;
        case 0x20db30u: goto label_20db30;
        case 0x20db34u: goto label_20db34;
        case 0x20db38u: goto label_20db38;
        case 0x20db3cu: goto label_20db3c;
        case 0x20db40u: goto label_20db40;
        case 0x20db44u: goto label_20db44;
        case 0x20db48u: goto label_20db48;
        case 0x20db4cu: goto label_20db4c;
        case 0x20db50u: goto label_20db50;
        case 0x20db54u: goto label_20db54;
        case 0x20db58u: goto label_20db58;
        case 0x20db5cu: goto label_20db5c;
        case 0x20db60u: goto label_20db60;
        case 0x20db64u: goto label_20db64;
        case 0x20db68u: goto label_20db68;
        case 0x20db6cu: goto label_20db6c;
        case 0x20db70u: goto label_20db70;
        case 0x20db74u: goto label_20db74;
        case 0x20db78u: goto label_20db78;
        case 0x20db7cu: goto label_20db7c;
        case 0x20db80u: goto label_20db80;
        case 0x20db84u: goto label_20db84;
        case 0x20db88u: goto label_20db88;
        case 0x20db8cu: goto label_20db8c;
        case 0x20db90u: goto label_20db90;
        case 0x20db94u: goto label_20db94;
        case 0x20db98u: goto label_20db98;
        case 0x20db9cu: goto label_20db9c;
        case 0x20dba0u: goto label_20dba0;
        case 0x20dba4u: goto label_20dba4;
        case 0x20dba8u: goto label_20dba8;
        case 0x20dbacu: goto label_20dbac;
        case 0x20dbb0u: goto label_20dbb0;
        case 0x20dbb4u: goto label_20dbb4;
        case 0x20dbb8u: goto label_20dbb8;
        case 0x20dbbcu: goto label_20dbbc;
        case 0x20dbc0u: goto label_20dbc0;
        case 0x20dbc4u: goto label_20dbc4;
        case 0x20dbc8u: goto label_20dbc8;
        case 0x20dbccu: goto label_20dbcc;
        case 0x20dbd0u: goto label_20dbd0;
        case 0x20dbd4u: goto label_20dbd4;
        case 0x20dbd8u: goto label_20dbd8;
        case 0x20dbdcu: goto label_20dbdc;
        case 0x20dbe0u: goto label_20dbe0;
        case 0x20dbe4u: goto label_20dbe4;
        case 0x20dbe8u: goto label_20dbe8;
        case 0x20dbecu: goto label_20dbec;
        case 0x20dbf0u: goto label_20dbf0;
        case 0x20dbf4u: goto label_20dbf4;
        case 0x20dbf8u: goto label_20dbf8;
        case 0x20dbfcu: goto label_20dbfc;
        case 0x20dc00u: goto label_20dc00;
        case 0x20dc04u: goto label_20dc04;
        case 0x20dc08u: goto label_20dc08;
        case 0x20dc0cu: goto label_20dc0c;
        default: return;
    }

label_20d440:
    // 0x20d440: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20d444:
    // 0x20d444: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20d448:
    // 0x20d448: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20d44c:
    // 0x20d44c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20d450:
    // 0x20d450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d454:
    // 0x20d454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d458:
    // 0x20d458: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20d45c:
    // 0x20d45c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20d460:
    // 0x20d460: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20d464:
    // 0x20d464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d468:
    // 0x20d468: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d46c:
    // 0x20d46c: 0xc066c72  jal         func_19B1C8
label_20d470:
    if (ctx->pc == 0x20D470u) {
        ctx->pc = 0x20D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D46Cu;
        // 0x20d470: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D474u;
        goto label_20d474;
    }
    ctx->pc = 0x20D46Cu;
    SET_GPR_U32(ctx, 31, 0x20D474u);
    ctx->pc = 0x20D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D46Cu;
    // 0x20d470: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x20D474u;
label_20d474:
    // 0x20d474: 0xc077fc4  jal         func_1DFF10
label_20d478:
    if (ctx->pc == 0x20D478u) {
        ctx->pc = 0x20D47Cu;
        goto label_20d47c;
    }
    ctx->pc = 0x20D474u;
    SET_GPR_U32(ctx, 31, 0x20D47Cu);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x20D47Cu;
label_20d47c:
    // 0x20d47c: 0xc07a86c  jal         func_1EA1B0
label_20d480:
    if (ctx->pc == 0x20D480u) {
        ctx->pc = 0x20D484u;
        goto label_20d484;
    }
    ctx->pc = 0x20D47Cu;
    SET_GPR_U32(ctx, 31, 0x20D484u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x20D484u;
label_20d484:
    // 0x20d484: 0xc04e120  jal         func_138480
label_20d488:
    if (ctx->pc == 0x20D488u) {
        ctx->pc = 0x20D48Cu;
        goto label_20d48c;
    }
    ctx->pc = 0x20D484u;
    SET_GPR_U32(ctx, 31, 0x20D48Cu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20D484u, 0x20D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D48Cu;
label_20d48c:
    // 0x20d48c: 0xc05b578  jal         func_16D5E0
label_20d490:
    if (ctx->pc == 0x20D490u) {
        ctx->pc = 0x20D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D48Cu;
        // 0x20d490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D494u;
        goto label_20d494;
    }
    ctx->pc = 0x20D48Cu;
    SET_GPR_U32(ctx, 31, 0x20D494u);
    ctx->pc = 0x20D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D48Cu;
    // 0x20d490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20D48Cu, 0x20D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D494u;
label_20d494:
    // 0x20d494: 0xc060258  jal         func_180960
label_20d498:
    if (ctx->pc == 0x20D498u) {
        ctx->pc = 0x20D49Cu;
        goto label_20d49c;
    }
    ctx->pc = 0x20D494u;
    SET_GPR_U32(ctx, 31, 0x20D49Cu);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x20D49Cu;
label_20d49c:
    // 0x20d49c: 0x8f839164  lw          $v1, -0x6E9C($gp)
    ctx->pc = 0x20d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20d4a0:
    // 0x20d4a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_20d4a4:
    if (ctx->pc == 0x20D4A4u) {
        ctx->pc = 0x20D4A8u;
        goto label_20d4a8;
    }
    ctx->pc = 0x20D4A0u;
    {
        const bool branch_taken_0x20d4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d4a0) {
            ctx->pc = 0x20D4B8u;
            goto label_20d4b8;
        }
    }
    ctx->pc = 0x20D4A8u;
label_20d4a8:
    // 0x20d4a8: 0x8f838730  lw          $v1, -0x78D0($gp)
    ctx->pc = 0x20d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_20d4ac:
    // 0x20d4ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20d4b0:
    if (ctx->pc == 0x20D4B0u) {
        ctx->pc = 0x20D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4ACu;
        // 0x20d4b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D4B4u;
        goto label_20d4b4;
    }
    ctx->pc = 0x20D4ACu;
    {
        const bool branch_taken_0x20d4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4ACu;
        // 0x20d4b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4ac) {
            ctx->pc = 0x20D4B8u;
            goto label_20d4b8;
        }
    }
    ctx->pc = 0x20D4B4u;
label_20d4b4:
    // 0x20d4b4: 0xaf839168  sw          $v1, -0x6E98($gp)
    ctx->pc = 0x20d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 3));
label_20d4b8:
    // 0x20d4b8: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
label_20d4bc:
    // 0x20d4bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d4c0:
    // 0x20d4c0: 0x1083ff6a  beq         $a0, $v1, . + 4 + (-0x96 << 2)
label_20d4c4:
    if (ctx->pc == 0x20D4C4u) {
        ctx->pc = 0x20D4C8u;
        goto label_20d4c8;
    }
    ctx->pc = 0x20D4C0u;
    {
        const bool branch_taken_0x20d4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d4c0) {
            ctx->pc = 0x20D26Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20d26c; return; }
        }
    }
    ctx->pc = 0x20D4C8u;
label_20d4c8:
    // 0x20d4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20d4cc:
    // 0x20d4cc: 0x3e00008  jr          $ra
label_20d4d0:
    if (ctx->pc == 0x20D4D0u) {
        ctx->pc = 0x20D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4CCu;
        // 0x20d4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D4D4u;
        goto label_20d4d4;
    }
    ctx->pc = 0x20D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4CCu;
        // 0x20d4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D4D4u;
label_20d4d4:
    // 0x20d4d4: 0x0  nop
    ctx->pc = 0x20d4d4u;
    // NOP
label_20d4d8:
    // 0x20d4d8: 0x0  nop
    ctx->pc = 0x20d4d8u;
    // NOP
label_20d4dc:
    // 0x20d4dc: 0x0  nop
    ctx->pc = 0x20d4dcu;
    // NOP
label_20d4e0:
    // 0x20d4e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20d4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_20d4e4:
    // 0x20d4e4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x20d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_20d4e8:
    // 0x20d4e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20d4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_20d4ec:
    // 0x20d4ec: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20d4f0:
    // 0x20d4f0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20d4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20d4f4:
    // 0x20d4f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20d4f8:
    // 0x20d4f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20d4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_20d4fc:
    // 0x20d4fc: 0x248473cc  addiu       $a0, $a0, 0x73CC
    ctx->pc = 0x20d4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29644));
label_20d500:
    // 0x20d500: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20d500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20d504:
    // 0x20d504: 0x246373f8  addiu       $v1, $v1, 0x73F8
    ctx->pc = 0x20d504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29688));
label_20d508:
    // 0x20d508: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20d508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_20d50c:
    // 0x20d50c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20d50cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d510:
    // 0x20d510: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20d510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20d514:
    // 0x20d514: 0xaf829124  sw          $v0, -0x6EDC($gp)
    ctx->pc = 0x20d514u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 2));
label_20d518:
    // 0x20d518: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20d518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d51c:
    // 0x20d51c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20d520:
    // 0x20d520: 0xaf809130  sw          $zero, -0x6ED0($gp)
    ctx->pc = 0x20d520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 0));
label_20d524:
    // 0x20d524: 0xaf829120  sw          $v0, -0x6EE0($gp)
    ctx->pc = 0x20d524u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 2));
label_20d528:
    // 0x20d528: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20d528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20d52c:
    // 0x20d52c: 0xaf809128  sw          $zero, -0x6ED8($gp)
    ctx->pc = 0x20d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 0));
label_20d530:
    // 0x20d530: 0x244273a0  addiu       $v0, $v0, 0x73A0
    ctx->pc = 0x20d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29600));
label_20d534:
    // 0x20d534: 0xaf80912c  sw          $zero, -0x6ED4($gp)
    ctx->pc = 0x20d534u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 0));
label_20d538:
    // 0x20d538: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20d538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20d53c:
    // 0x20d53c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_20d540:
    // 0x20d540: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x20d540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_20d544:
    // 0x20d544: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x20d544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_20d548:
    // 0x20d548: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x20d548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_20d54c:
    // 0x20d54c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x20d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_20d550:
    // 0x20d550: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x20d550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_20d554:
    // 0x20d554: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x20d554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_20d558:
    // 0x20d558: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x20d558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_20d55c:
    // 0x20d55c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x20d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_20d560:
    // 0x20d560: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x20d560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_20d564:
    // 0x20d564: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x20d564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_20d568:
    // 0x20d568: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20d568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20d56c:
    // 0x20d56c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x20d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_20d570:
    // 0x20d570: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20d570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_20d574:
    // 0x20d574: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x20d574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_20d578:
    // 0x20d578: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x20d578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_20d57c:
    // 0x20d57c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_20d580:
    // 0x20d580: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x20d580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_20d584:
    // 0x20d584: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x20d584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_20d588:
    // 0x20d588: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x20d588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_20d58c:
    // 0x20d58c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x20d58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_20d590:
    // 0x20d590: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20d590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20d594:
    // 0x20d594: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20d594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20d598:
    // 0x20d598: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x20d598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_20d59c:
    // 0x20d59c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x20d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_20d5a0:
    // 0x20d5a0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x20d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_20d5a4:
    // 0x20d5a4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x20d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_20d5a8:
    // 0x20d5a8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x20d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_20d5ac:
    // 0x20d5ac: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x20d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_20d5b0:
    // 0x20d5b0: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x20d5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_20d5b4:
    // 0x20d5b4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x20d5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_20d5b8:
    // 0x20d5b8: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x20d5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_20d5bc:
    // 0x20d5bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20d5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d5c0:
    // 0x20d5c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20d5c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d5c4:
    // 0x20d5c4: 0x0  nop
    ctx->pc = 0x20d5c4u;
    // NOP
label_20d5c8:
    // 0x20d5c8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20d5cc:
    // 0x20d5cc: 0x24427430  addiu       $v0, $v0, 0x7430
    ctx->pc = 0x20d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29744));
label_20d5d0:
    // 0x20d5d0: 0x24050175  addiu       $a1, $zero, 0x175
    ctx->pc = 0x20d5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 373));
label_20d5d4:
    // 0x20d5d4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x20d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_20d5d8:
    // 0x20d5d8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x20d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_20d5dc:
    // 0x20d5dc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_20d5e0:
    // 0x20d5e0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x20d5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d5e4:
    // 0x20d5e4: 0xc05e234  jal         func_1788D0
label_20d5e8:
    if (ctx->pc == 0x20D5E8u) {
        ctx->pc = 0x20D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5E4u;
        // 0x20d5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D5ECu;
        goto label_20d5ec;
    }
    ctx->pc = 0x20D5E4u;
    SET_GPR_U32(ctx, 31, 0x20D5ECu);
    ctx->pc = 0x20D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D5E4u;
    // 0x20d5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20D5E4u, 0x20D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5ECu;
label_20d5ec:
    // 0x20d5ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20d5f0:
    // 0x20d5f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d5f4:
    // 0x20d5f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20d5f8:
    // 0x20d5f8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20d5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20d5fc:
    // 0x20d5fc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20d5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20d600:
    // 0x20d600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d604:
    // 0x20d604: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20d608:
    // 0x20d608: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x20d608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20d60c:
    // 0x20d60c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20d60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20d610:
    // 0x20d610: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d614:
    // 0x20d614: 0xdc257468  ld          $a1, 0x7468($at)
    ctx->pc = 0x20d614u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29800)));
label_20d618:
    // 0x20d618: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d61c:
    // 0x20d61c: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d620:
    // 0x20d620: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d624:
    // 0x20d624: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d628:
    // 0x20d628: 0xc05de30  jal         func_1778C0
label_20d62c:
    if (ctx->pc == 0x20D62Cu) {
        ctx->pc = 0x20D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D628u;
        // 0x20d62c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D630u;
        goto label_20d630;
    }
    ctx->pc = 0x20D628u;
    SET_GPR_U32(ctx, 31, 0x20D630u);
    ctx->pc = 0x20D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D628u;
    // 0x20d62c: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20D628u, 0x20D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D630u;
label_20d630:
    // 0x20d630: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20d634:
    // 0x20d634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20d634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d638:
    // 0x20d638: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20d63c:
    // 0x20d63c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20d63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20d640:
    // 0x20d640: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20d640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20d644:
    // 0x20d644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d648:
    // 0x20d648: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20d64c:
    // 0x20d64c: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x20d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_20d650:
    // 0x20d650: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20d650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20d654:
    // 0x20d654: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d658:
    // 0x20d658: 0xdc257468  ld          $a1, 0x7468($at)
    ctx->pc = 0x20d658u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29800)));
label_20d65c:
    // 0x20d65c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d660:
    // 0x20d660: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d664:
    // 0x20d664: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x20d664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20d668:
    // 0x20d668: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d66c:
    // 0x20d66c: 0xc05de30  jal         func_1778C0
label_20d670:
    if (ctx->pc == 0x20D670u) {
        ctx->pc = 0x20D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D66Cu;
        // 0x20d670: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D674u;
        goto label_20d674;
    }
    ctx->pc = 0x20D66Cu;
    SET_GPR_U32(ctx, 31, 0x20D674u);
    ctx->pc = 0x20D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D66Cu;
    // 0x20d670: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20D66Cu, 0x20D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D674u;
label_20d674:
    // 0x20d674: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x20d674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20d678:
    // 0x20d678: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x20d678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20d67c:
    // 0x20d67c: 0xc07091c  jal         func_1C2470
label_20d680:
    if (ctx->pc == 0x20D680u) {
        ctx->pc = 0x20D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D67Cu;
        // 0x20d680: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D684u;
        goto label_20d684;
    }
    ctx->pc = 0x20D67Cu;
    SET_GPR_U32(ctx, 31, 0x20D684u);
    ctx->pc = 0x20D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D67Cu;
    // 0x20d680: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x20D684u;
label_20d684:
    // 0x20d684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20d684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d688:
    // 0x20d688: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x20d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_20d68c:
    // 0x20d68c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x20d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20d690:
    // 0x20d690: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d694:
    // 0x20d694: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20d698:
    // 0x20d698: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d69c:
    // 0x20d69c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d6a0:
    // 0x20d6a0: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d6a4:
    // 0x20d6a4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20d6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20d6a8:
    // 0x20d6a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d6a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d6ac:
    // 0x20d6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d6b0:
    // 0x20d6b0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20d6b4:
    // 0x20d6b4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20d6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20d6b8:
    // 0x20d6b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d6b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d6bc:
    // 0x20d6bc: 0xc05de30  jal         func_1778C0
label_20d6c0:
    if (ctx->pc == 0x20D6C0u) {
        ctx->pc = 0x20D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6BCu;
        // 0x20d6c0: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D6C4u;
        goto label_20d6c4;
    }
    ctx->pc = 0x20D6BCu;
    SET_GPR_U32(ctx, 31, 0x20D6C4u);
    ctx->pc = 0x20D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D6BCu;
    // 0x20d6c0: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20D6BCu, 0x20D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6C4u;
label_20d6c4:
    // 0x20d6c4: 0xc070834  jal         func_1C20D0
label_20d6c8:
    if (ctx->pc == 0x20D6C8u) {
        ctx->pc = 0x20D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6C4u;
        // 0x20d6c8: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D6CCu;
        goto label_20d6cc;
    }
    ctx->pc = 0x20D6C4u;
    SET_GPR_U32(ctx, 31, 0x20D6CCu);
    ctx->pc = 0x20D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D6C4u;
    // 0x20d6c8: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x20D6CCu;
label_20d6cc:
    // 0x20d6cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20d6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20d6d0:
    // 0x20d6d0: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x20d6d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_20d6d4:
    // 0x20d6d4: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x20d6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_20d6d8:
    // 0x20d6d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d6dc:
    // 0x20d6dc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20d6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20d6e0:
    // 0x20d6e0: 0x264401f0  addiu       $a0, $s2, 0x1F0
    ctx->pc = 0x20d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_20d6e4:
    // 0x20d6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d6e8:
    // 0x20d6e8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20d6ec:
    // 0x20d6ec: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20d6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20d6f0:
    // 0x20d6f0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d6f4:
    // 0x20d6f4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d6f8:
    // 0x20d6f8: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d6fc:
    // 0x20d6fc: 0x24090320  addiu       $t1, $zero, 0x320
    ctx->pc = 0x20d6fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_20d700:
    // 0x20d700: 0xc05de30  jal         func_1778C0
label_20d704:
    if (ctx->pc == 0x20D704u) {
        ctx->pc = 0x20D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D700u;
        // 0x20d704: 0x240a00a0  addiu       $t2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D708u;
        goto label_20d708;
    }
    ctx->pc = 0x20D700u;
    SET_GPR_U32(ctx, 31, 0x20D708u);
    ctx->pc = 0x20D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D700u;
    // 0x20d704: 0x240a00a0  addiu       $t2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20D700u, 0x20D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D708u;
label_20d708:
    // 0x20d708: 0x26430290  addiu       $v1, $s2, 0x290
    ctx->pc = 0x20d708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
label_20d70c:
    // 0x20d70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d710:
    // 0x20d710: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x20d710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_20d714:
    // 0x20d714: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20d714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d718:
    // 0x20d718: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20d718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20d71c:
    // 0x20d71c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20d71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d720:
    // 0x20d720: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x20d720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20d724:
    // 0x20d724: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x20d724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d728:
    // 0x20d728: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x20d728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d72c:
    // 0x20d72c: 0x24090384  addiu       $t1, $zero, 0x384
    ctx->pc = 0x20d72cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d730:
    // 0x20d730: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x20d730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_20d734:
    // 0x20d734: 0xc054c60  jal         func_153180
label_20d738:
    if (ctx->pc == 0x20D738u) {
        ctx->pc = 0x20D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D734u;
        // 0x20d738: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D73Cu;
        goto label_20d73c;
    }
    ctx->pc = 0x20D734u;
    SET_GPR_U32(ctx, 31, 0x20D73Cu);
    ctx->pc = 0x20D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D734u;
    // 0x20d738: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x20D734u, 0x20D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D73Cu;
label_20d73c:
    // 0x20d73c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x20d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20d740:
    // 0x20d740: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20d740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d744:
    // 0x20d744: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20d748:
    // 0x20d748: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20d748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20d74c:
    // 0x20d74c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20d74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20d750:
    // 0x20d750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d754:
    // 0x20d754: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20d754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20d758:
    // 0x20d758: 0x26440360  addiu       $a0, $s2, 0x360
    ctx->pc = 0x20d758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
label_20d75c:
    // 0x20d75c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20d75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20d760:
    // 0x20d760: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d764:
    // 0x20d764: 0xdc257478  ld          $a1, 0x7478($at)
    ctx->pc = 0x20d764u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29816)));
label_20d768:
    // 0x20d768: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d76c:
    // 0x20d76c: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d770:
    // 0x20d770: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d770u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d774:
    // 0x20d774: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d778:
    // 0x20d778: 0xc05de30  jal         func_1778C0
label_20d77c:
    if (ctx->pc == 0x20D77Cu) {
        ctx->pc = 0x20D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D778u;
        // 0x20d77c: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D780u;
        goto label_20d780;
    }
    ctx->pc = 0x20D778u;
    SET_GPR_U32(ctx, 31, 0x20D780u);
    ctx->pc = 0x20D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D778u;
    // 0x20d77c: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20D778u, 0x20D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D780u;
label_20d780:
    // 0x20d780: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x20d780u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_20d784:
    // 0x20d784: 0x26440400  addiu       $a0, $s2, 0x400
    ctx->pc = 0x20d784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
label_20d788:
    // 0x20d788: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20d788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d78c:
    // 0x20d78c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d790:
    // 0x20d790: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d794:
    // 0x20d794: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d798:
    // 0x20d798: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20d798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20d79c:
    // 0x20d79c: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x20d79cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20d7a0:
    // 0x20d7a0: 0xc0708ac  jal         func_1C22B0
label_20d7a4:
    if (ctx->pc == 0x20D7A4u) {
        ctx->pc = 0x20D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7A0u;
        // 0x20d7a4: 0x256be098  addiu       $t3, $t3, -0x1F68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D7A8u;
        goto label_20d7a8;
    }
    ctx->pc = 0x20D7A0u;
    SET_GPR_U32(ctx, 31, 0x20D7A8u);
    ctx->pc = 0x20D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D7A0u;
    // 0x20d7a4: 0x256be098  addiu       $t3, $t3, -0x1F68 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x20D7A8u;
label_20d7a8:
    // 0x20d7a8: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x20d7a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_20d7ac:
    // 0x20d7ac: 0x26440540  addiu       $a0, $s2, 0x540
    ctx->pc = 0x20d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1344));
label_20d7b0:
    // 0x20d7b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20d7b4:
    // 0x20d7b4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d7b8:
    // 0x20d7b8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d7bc:
    // 0x20d7bc: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d7c0:
    // 0x20d7c0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20d7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20d7c4:
    // 0x20d7c4: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x20d7c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20d7c8:
    // 0x20d7c8: 0xc0708ac  jal         func_1C22B0
label_20d7cc:
    if (ctx->pc == 0x20D7CCu) {
        ctx->pc = 0x20D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7C8u;
        // 0x20d7cc: 0x256be098  addiu       $t3, $t3, -0x1F68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D7D0u;
        goto label_20d7d0;
    }
    ctx->pc = 0x20D7C8u;
    SET_GPR_U32(ctx, 31, 0x20D7D0u);
    ctx->pc = 0x20D7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D7C8u;
    // 0x20d7cc: 0x256be098  addiu       $t3, $t3, -0x1F68 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x20D7D0u;
label_20d7d0:
    // 0x20d7d0: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x20d7d0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_20d7d4:
    // 0x20d7d4: 0x26440860  addiu       $a0, $s2, 0x860
    ctx->pc = 0x20d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2144));
label_20d7d8:
    // 0x20d7d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20d7dc:
    // 0x20d7dc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d7e0:
    // 0x20d7e0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d7e4:
    // 0x20d7e4: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d7e8:
    // 0x20d7e8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20d7e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20d7ec:
    // 0x20d7ec: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x20d7ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20d7f0:
    // 0x20d7f0: 0xc0708ac  jal         func_1C22B0
label_20d7f4:
    if (ctx->pc == 0x20D7F4u) {
        ctx->pc = 0x20D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7F0u;
        // 0x20d7f4: 0x256be098  addiu       $t3, $t3, -0x1F68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D7F8u;
        goto label_20d7f8;
    }
    ctx->pc = 0x20D7F0u;
    SET_GPR_U32(ctx, 31, 0x20D7F8u);
    ctx->pc = 0x20D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D7F0u;
    // 0x20d7f4: 0x256be098  addiu       $t3, $t3, -0x1F68 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x20D7F8u;
label_20d7f8:
    // 0x20d7f8: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x20d7f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_20d7fc:
    // 0x20d7fc: 0x26440b80  addiu       $a0, $s2, 0xB80
    ctx->pc = 0x20d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2944));
label_20d800:
    // 0x20d800: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20d800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20d804:
    // 0x20d804: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d808:
    // 0x20d808: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d80c:
    // 0x20d80c: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d80cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d810:
    // 0x20d810: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20d810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20d814:
    // 0x20d814: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x20d814u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20d818:
    // 0x20d818: 0xc0708ac  jal         func_1C22B0
label_20d81c:
    if (ctx->pc == 0x20D81Cu) {
        ctx->pc = 0x20D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D818u;
        // 0x20d81c: 0x256be098  addiu       $t3, $t3, -0x1F68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D820u;
        goto label_20d820;
    }
    ctx->pc = 0x20D818u;
    SET_GPR_U32(ctx, 31, 0x20D820u);
    ctx->pc = 0x20D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D818u;
    // 0x20d81c: 0x256be098  addiu       $t3, $t3, -0x1F68 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x20D820u;
label_20d820:
    // 0x20d820: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20d820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20d824:
    // 0x20d824: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20d824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d828:
    // 0x20d828: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20d82c:
    // 0x20d82c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20d82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20d830:
    // 0x20d830: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20d830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20d834:
    // 0x20d834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d838:
    // 0x20d838: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20d838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20d83c:
    // 0x20d83c: 0x26440f40  addiu       $a0, $s2, 0xF40
    ctx->pc = 0x20d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
label_20d840:
    // 0x20d840: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20d840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20d844:
    // 0x20d844: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d848:
    // 0x20d848: 0xdc257498  ld          $a1, 0x7498($at)
    ctx->pc = 0x20d848u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29848)));
label_20d84c:
    // 0x20d84c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d850:
    // 0x20d850: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d854:
    // 0x20d854: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d854u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d858:
    // 0x20d858: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d858u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d85c:
    // 0x20d85c: 0xc05de30  jal         func_1778C0
label_20d860:
    if (ctx->pc == 0x20D860u) {
        ctx->pc = 0x20D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D85Cu;
        // 0x20d860: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D864u;
        goto label_20d864;
    }
    ctx->pc = 0x20D85Cu;
    SET_GPR_U32(ctx, 31, 0x20D864u);
    ctx->pc = 0x20D860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D85Cu;
    // 0x20d860: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20D85Cu, 0x20D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D864u;
label_20d864:
    // 0x20d864: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x20d864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_20d868:
    // 0x20d868: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d86c:
    // 0x20d86c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20d870:
    // 0x20d870: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20d870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20d874:
    // 0x20d874: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20d878:
    // 0x20d878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d87c:
    // 0x20d87c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20d880:
    // 0x20d880: 0x26440fe0  addiu       $a0, $s2, 0xFE0
    ctx->pc = 0x20d880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4064));
label_20d884:
    // 0x20d884: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20d888:
    // 0x20d888: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d88c:
    // 0x20d88c: 0xdc257490  ld          $a1, 0x7490($at)
    ctx->pc = 0x20d88cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29840)));
label_20d890:
    // 0x20d890: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d894:
    // 0x20d894: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d898:
    // 0x20d898: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d898u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d89c:
    // 0x20d89c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d89cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d8a0:
    // 0x20d8a0: 0xc05de30  jal         func_1778C0
label_20d8a4:
    if (ctx->pc == 0x20D8A4u) {
        ctx->pc = 0x20D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8A0u;
        // 0x20d8a4: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D8A8u;
        goto label_20d8a8;
    }
    ctx->pc = 0x20D8A0u;
    SET_GPR_U32(ctx, 31, 0x20D8A8u);
    ctx->pc = 0x20D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D8A0u;
    // 0x20d8a4: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20D8A0u, 0x20D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8A8u;
label_20d8a8:
    // 0x20d8a8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x20d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20d8ac:
    // 0x20d8ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d8b0:
    // 0x20d8b0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20d8b4:
    // 0x20d8b4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20d8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20d8b8:
    // 0x20d8b8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20d8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20d8bc:
    // 0x20d8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d8c0:
    // 0x20d8c0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20d8c4:
    // 0x20d8c4: 0x26441080  addiu       $a0, $s2, 0x1080
    ctx->pc = 0x20d8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4224));
label_20d8c8:
    // 0x20d8c8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20d8cc:
    // 0x20d8cc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d8d0:
    // 0x20d8d0: 0xdc257488  ld          $a1, 0x7488($at)
    ctx->pc = 0x20d8d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29832)));
label_20d8d4:
    // 0x20d8d4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d8d8:
    // 0x20d8d8: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d8dc:
    // 0x20d8dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d8dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d8e0:
    // 0x20d8e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d8e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d8e4:
    // 0x20d8e4: 0xc05de30  jal         func_1778C0
label_20d8e8:
    if (ctx->pc == 0x20D8E8u) {
        ctx->pc = 0x20D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8E4u;
        // 0x20d8e8: 0x240b0098  addiu       $t3, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D8ECu;
        goto label_20d8ec;
    }
    ctx->pc = 0x20D8E4u;
    SET_GPR_U32(ctx, 31, 0x20D8ECu);
    ctx->pc = 0x20D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D8E4u;
    // 0x20d8e8: 0x240b0098  addiu       $t3, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20D8E4u, 0x20D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8ECu;
label_20d8ec:
    // 0x20d8ec: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x20d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20d8f0:
    // 0x20d8f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d8f4:
    // 0x20d8f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20d8f8:
    // 0x20d8f8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20d8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20d8fc:
    // 0x20d8fc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20d900:
    // 0x20d900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d904:
    // 0x20d904: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20d908:
    // 0x20d908: 0x26441120  addiu       $a0, $s2, 0x1120
    ctx->pc = 0x20d908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4384));
label_20d90c:
    // 0x20d90c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20d90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20d910:
    // 0x20d910: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d914:
    // 0x20d914: 0xdc257480  ld          $a1, 0x7480($at)
    ctx->pc = 0x20d914u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29824)));
label_20d918:
    // 0x20d918: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d91c:
    // 0x20d91c: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d920:
    // 0x20d920: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d924:
    // 0x20d924: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d924u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d928:
    // 0x20d928: 0xc05de30  jal         func_1778C0
label_20d92c:
    if (ctx->pc == 0x20D92Cu) {
        ctx->pc = 0x20D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D928u;
        // 0x20d92c: 0x240b0098  addiu       $t3, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D930u;
        goto label_20d930;
    }
    ctx->pc = 0x20D928u;
    SET_GPR_U32(ctx, 31, 0x20D930u);
    ctx->pc = 0x20D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D928u;
    // 0x20d92c: 0x240b0098  addiu       $t3, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20D928u, 0x20D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D930u;
label_20d930:
    // 0x20d930: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x20d930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20d934:
    // 0x20d934: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x20d934u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_20d938:
    // 0x20d938: 0x264411c0  addiu       $a0, $s2, 0x11C0
    ctx->pc = 0x20d938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4544));
label_20d93c:
    // 0x20d93c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20d940:
    // 0x20d940: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d944:
    // 0x20d944: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d948:
    // 0x20d948: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d94c:
    // 0x20d94c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x20d94cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20d950:
    // 0x20d950: 0xc0708ac  jal         func_1C22B0
label_20d954:
    if (ctx->pc == 0x20D954u) {
        ctx->pc = 0x20D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D950u;
        // 0x20d954: 0x256be098  addiu       $t3, $t3, -0x1F68 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D958u;
        goto label_20d958;
    }
    ctx->pc = 0x20D950u;
    SET_GPR_U32(ctx, 31, 0x20D958u);
    ctx->pc = 0x20D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D950u;
    // 0x20d954: 0x256be098  addiu       $t3, $t3, -0x1F68 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x20D958u;
label_20d958:
    // 0x20d958: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20d95c:
    // 0x20d95c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d960:
    // 0x20d960: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20d964:
    // 0x20d964: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20d964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20d968:
    // 0x20d968: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20d968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20d96c:
    // 0x20d96c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d970:
    // 0x20d970: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20d970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20d974:
    // 0x20d974: 0x26441620  addiu       $a0, $s2, 0x1620
    ctx->pc = 0x20d974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5664));
label_20d978:
    // 0x20d978: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20d97c:
    // 0x20d97c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d980:
    // 0x20d980: 0xdc257470  ld          $a1, 0x7470($at)
    ctx->pc = 0x20d980u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29808)));
label_20d984:
    // 0x20d984: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d988:
    // 0x20d988: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d98c:
    // 0x20d98c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d98cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d990:
    // 0x20d990: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d990u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d994:
    // 0x20d994: 0xc05de30  jal         func_1778C0
label_20d998:
    if (ctx->pc == 0x20D998u) {
        ctx->pc = 0x20D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D994u;
        // 0x20d998: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D99Cu;
        goto label_20d99c;
    }
    ctx->pc = 0x20D994u;
    SET_GPR_U32(ctx, 31, 0x20D99Cu);
    ctx->pc = 0x20D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D994u;
    // 0x20d998: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20D994u, 0x20D99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D99Cu;
label_20d99c:
    // 0x20d99c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20d9a0:
    // 0x20d9a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20d9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20d9a4:
    // 0x20d9a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20d9a8:
    // 0x20d9a8: 0x264416c0  addiu       $a0, $s2, 0x16C0
    ctx->pc = 0x20d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
label_20d9ac:
    // 0x20d9ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d9b0:
    // 0x20d9b0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20d9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20d9b4:
    // 0x20d9b4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20d9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20d9b8:
    // 0x20d9b8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20d9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20d9bc:
    // 0x20d9bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d9c0:
    // 0x20d9c0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20d9c4:
    // 0x20d9c4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20d9c8:
    // 0x20d9c8: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x20d9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20d9cc:
    // 0x20d9cc: 0xdc257470  ld          $a1, 0x7470($at)
    ctx->pc = 0x20d9ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 29808)));
label_20d9d0:
    // 0x20d9d0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x20d9d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20d9d4:
    // 0x20d9d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20d9d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d9d8:
    // 0x20d9d8: 0xc05de30  jal         func_1778C0
label_20d9dc:
    if (ctx->pc == 0x20D9DCu) {
        ctx->pc = 0x20D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9D8u;
        // 0x20d9dc: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D9E0u;
        goto label_20d9e0;
    }
    ctx->pc = 0x20D9D8u;
    SET_GPR_U32(ctx, 31, 0x20D9E0u);
    ctx->pc = 0x20D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D9D8u;
    // 0x20d9dc: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20D9D8u, 0x20D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D9E0u;
label_20d9e0:
    // 0x20d9e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20d9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20d9e4:
    // 0x20d9e4: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x20d9e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_20d9e8:
    // 0x20d9e8: 0x1460fef6  bnez        $v1, . + 4 + (-0x10A << 2)
label_20d9ec:
    if (ctx->pc == 0x20D9ECu) {
        ctx->pc = 0x20D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9E8u;
        // 0x20d9ec: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D9F0u;
        goto label_20d9f0;
    }
    ctx->pc = 0x20D9E8u;
    {
        const bool branch_taken_0x20d9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9E8u;
        // 0x20d9ec: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9e8) {
            ctx->pc = 0x20D5C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d5c4;
        }
    }
    ctx->pc = 0x20D9F0u;
label_20d9f0:
    // 0x20d9f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20d9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20d9f4:
    // 0x20d9f4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x20d9f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_20d9f8:
    // 0x20d9f8: 0x1460fef0  bnez        $v1, . + 4 + (-0x110 << 2)
label_20d9fc:
    if (ctx->pc == 0x20D9FCu) {
        ctx->pc = 0x20D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9F8u;
        // 0x20d9fc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA00u;
        goto label_20da00;
    }
    ctx->pc = 0x20D9F8u;
    {
        const bool branch_taken_0x20d9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9F8u;
        // 0x20d9fc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9f8) {
            ctx->pc = 0x20D5BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d5bc;
        }
    }
    ctx->pc = 0x20DA00u;
label_20da00:
    // 0x20da00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x20da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_20da04:
    // 0x20da04: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20da04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20da08:
    // 0x20da08: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20da08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20da0c:
    // 0x20da0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20da0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20da10:
    // 0x20da10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20da10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20da14:
    // 0x20da14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20da14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20da18:
    // 0x20da18: 0x3e00008  jr          $ra
label_20da1c:
    if (ctx->pc == 0x20DA1Cu) {
        ctx->pc = 0x20DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA18u;
        // 0x20da1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA20u;
        goto label_20da20;
    }
    ctx->pc = 0x20DA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA18u;
        // 0x20da1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DA20u;
label_20da20:
    // 0x20da20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20da24:
    // 0x20da24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20da28:
    // 0x20da28: 0xc083694  jal         func_20DA50
label_20da2c:
    if (ctx->pc == 0x20DA2Cu) {
        ctx->pc = 0x20DA30u;
        goto label_20da30;
    }
    ctx->pc = 0x20DA28u;
    SET_GPR_U32(ctx, 31, 0x20DA30u);
    ctx->pc = 0x20DA50u;
    goto label_20da50;
    ctx->pc = 0x20DA30u;
label_20da30:
    // 0x20da30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20da30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20da34:
    // 0x20da34: 0xc05b420  jal         func_16D080
label_20da38:
    if (ctx->pc == 0x20DA38u) {
        ctx->pc = 0x20DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA34u;
        // 0x20da38: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA3Cu;
        goto label_20da3c;
    }
    ctx->pc = 0x20DA34u;
    SET_GPR_U32(ctx, 31, 0x20DA3Cu);
    ctx->pc = 0x20DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA34u;
    // 0x20da38: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x20DA34u, 0x20DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA3Cu;
label_20da3c:
    // 0x20da3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20da3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20da40:
    // 0x20da40: 0x3e00008  jr          $ra
label_20da44:
    if (ctx->pc == 0x20DA44u) {
        ctx->pc = 0x20DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA40u;
        // 0x20da44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA48u;
        goto label_20da48;
    }
    ctx->pc = 0x20DA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA40u;
        // 0x20da44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DA48u;
label_20da48:
    // 0x20da48: 0x0  nop
    ctx->pc = 0x20da48u;
    // NOP
label_20da4c:
    // 0x20da4c: 0x0  nop
    ctx->pc = 0x20da4cu;
    // NOP
label_20da50:
    // 0x20da50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20da50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20da54:
    // 0x20da54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_20da58:
    // 0x20da58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20da58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20da5c:
    // 0x20da5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20da5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20da60:
    // 0x20da60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20da60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20da64:
    // 0x20da64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20da64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20da68:
    // 0x20da68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20da68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20da6c:
    // 0x20da6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20da70:
    // 0x20da70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20da70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20da74:
    // 0x20da74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20da74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20da78:
    // 0x20da78: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x20da78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_20da7c:
    // 0x20da7c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20da80:
    // 0x20da80: 0x2484b310  addiu       $a0, $a0, -0x4CF0
    ctx->pc = 0x20da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947600));
label_20da84:
    // 0x20da84: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20da84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20da88:
    // 0x20da88: 0x246373a0  addiu       $v1, $v1, 0x73A0
    ctx->pc = 0x20da88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29600));
label_20da8c:
    // 0x20da8c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x20da8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_20da90:
    // 0x20da90: 0x342130f0  ori         $at, $at, 0x30F0
    ctx->pc = 0x20da90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12528);
label_20da94:
    // 0x20da94: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x20da94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_20da98:
    // 0x20da98: 0x81a021  addu        $s4, $a0, $at
    ctx->pc = 0x20da98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20da9c:
    // 0x20da9c: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x20da9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_20daa0:
    // 0x20daa0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_20daa4:
    if (ctx->pc == 0x20DAA4u) {
        ctx->pc = 0x20DAA8u;
        goto label_20daa8;
    }
    ctx->pc = 0x20DAA0u;
    {
        const bool branch_taken_0x20daa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20daa0) {
            ctx->pc = 0x20DAD8u;
            goto label_20dad8;
        }
    }
    ctx->pc = 0x20DAA8u;
label_20daa8:
    // 0x20daa8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x20daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_20daac:
    // 0x20daac: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x20daacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_20dab0:
    // 0x20dab0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x20dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_20dab4:
    // 0x20dab4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x20dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_20dab8:
    // 0x20dab8: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x20dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_20dabc:
    // 0x20dabc: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x20dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_20dac0:
    // 0x20dac0: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x20dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_20dac4:
    // 0x20dac4: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x20dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_20dac8:
    // 0x20dac8: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x20dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_20dacc:
    // 0x20dacc: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x20daccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_20dad0:
    // 0x20dad0: 0x10000067  b           . + 4 + (0x67 << 2)
label_20dad4:
    if (ctx->pc == 0x20DAD4u) {
        ctx->pc = 0x20DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAD0u;
        // 0x20dad4: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DAD8u;
        goto label_20dad8;
    }
    ctx->pc = 0x20DAD0u;
    {
        const bool branch_taken_0x20dad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAD0u;
        // 0x20dad4: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dad0) {
            ctx->pc = 0x20DC70u;
            { ctx->pc = 0x20dc70; return; }
        }
    }
    ctx->pc = 0x20DAD8u;
label_20dad8:
    // 0x20dad8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20dad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20dadc:
    // 0x20dadc: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x20dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_20dae0:
    // 0x20dae0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x20dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_20dae4:
    // 0x20dae4: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x20dae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_20dae8:
    // 0x20dae8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x20dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_20daec:
    // 0x20daec: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x20daecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
label_20daf0:
    // 0x20daf0: 0x24633b80  addiu       $v1, $v1, 0x3B80
    ctx->pc = 0x20daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
label_20daf4:
    // 0x20daf4: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x20daf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20daf8:
    // 0x20daf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20dafc:
    // 0x20dafc: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x20dafcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_20db00:
    // 0x20db00: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x20db00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20db04:
    // 0x20db04: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x20db04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_20db08:
    // 0x20db08: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x20db08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_20db0c:
    // 0x20db0c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x20db0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20db10:
    // 0x20db10: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x20db10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_20db14:
    // 0x20db14: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x20db14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_20db18:
    // 0x20db18: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_20db1c:
    if (ctx->pc == 0x20DB1Cu) {
        ctx->pc = 0x20DB20u;
        goto label_20db20;
    }
    ctx->pc = 0x20DB18u;
    {
        const bool branch_taken_0x20db18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20db18) {
            ctx->pc = 0x20DB38u;
            goto label_20db38;
        }
    }
    ctx->pc = 0x20DB20u;
label_20db20:
    // 0x20db20: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
label_20db24:
    if (ctx->pc == 0x20DB24u) {
        ctx->pc = 0x20DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB20u;
        // 0x20db24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB28u;
        goto label_20db28;
    }
    ctx->pc = 0x20DB20u;
    {
        const bool branch_taken_0x20db20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x20DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB20u;
        // 0x20db24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db20) {
            ctx->pc = 0x20DB38u;
            goto label_20db38;
        }
    }
    ctx->pc = 0x20DB28u;
label_20db28:
    // 0x20db28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_20db2c:
    if (ctx->pc == 0x20DB2Cu) {
        ctx->pc = 0x20DB30u;
        goto label_20db30;
    }
    ctx->pc = 0x20DB28u;
    {
        const bool branch_taken_0x20db28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20db28) {
            ctx->pc = 0x20DB38u;
            goto label_20db38;
        }
    }
    ctx->pc = 0x20DB30u;
label_20db30:
    // 0x20db30: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x20db30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20db34:
    // 0x20db34: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x20db34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_20db38:
    // 0x20db38: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x20db38u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_20db3c:
    // 0x20db3c: 0x3c068888  lui         $a2, 0x8888
    ctx->pc = 0x20db3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34952 << 16));
label_20db40:
    // 0x20db40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20db40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20db44:
    // 0x20db44: 0x34c98889  ori         $t1, $a2, 0x8889
    ctx->pc = 0x20db44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)34953);
label_20db48:
    // 0x20db48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20db48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20db4c:
    // 0x20db4c: 0xae67000c  sw          $a3, 0xC($s3)
    ctx->pc = 0x20db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 7));
label_20db50:
    // 0x20db50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20db50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20db54:
    // 0x20db54: 0x92860001  lbu         $a2, 0x1($s4)
    ctx->pc = 0x20db54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_20db58:
    // 0x20db58: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x20db58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
label_20db5c:
    // 0x20db5c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x20db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_20db60:
    // 0x20db60: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x20db60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_20db64:
    // 0x20db64: 0x1000001a  b           . + 4 + (0x1A << 2)
label_20db68:
    if (ctx->pc == 0x20DB68u) {
        ctx->pc = 0x20DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB64u;
        // 0x20db68: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DB6Cu;
        goto label_20db6c;
    }
    ctx->pc = 0x20DB64u;
    {
        const bool branch_taken_0x20db64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB64u;
        // 0x20db68: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db64) {
            ctx->pc = 0x20DBD0u;
            goto label_20dbd0;
        }
    }
    ctx->pc = 0x20DB6Cu;
label_20db6c:
    // 0x20db6c: 0x0  nop
    ctx->pc = 0x20db6cu;
    // NOP
label_20db70:
    // 0x20db70: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x20db70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_20db74:
    // 0x20db74: 0x8cc6006c  lw          $a2, 0x6C($a2)
    ctx->pc = 0x20db74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
label_20db78:
    // 0x20db78: 0x2854021  addu        $t0, $s4, $a1
    ctx->pc = 0x20db78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_20db7c:
    // 0x20db7c: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x20db7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_20db80:
    // 0x20db80: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x20db80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_20db84:
    // 0x20db84: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x20db84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_20db88:
    // 0x20db88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20db88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20db8c:
    // 0x20db8c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x20db8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_20db90:
    // 0x20db90: 0xae660014  sw          $a2, 0x14($s3)
    ctx->pc = 0x20db90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
label_20db94:
    // 0x20db94: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x20db94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_20db98:
    // 0x20db98: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x20db98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_20db9c:
    // 0x20db9c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x20db9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_20dba0:
    // 0x20dba0: 0xae660018  sw          $a2, 0x18($s3)
    ctx->pc = 0x20dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 6));
label_20dba4:
    // 0x20dba4: 0x8d0a0030  lw          $t2, 0x30($t0)
    ctx->pc = 0x20dba4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_20dba8:
    // 0x20dba8: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x20dba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_20dbac:
    // 0x20dbac: 0x12a0018  mult        $zero, $t1, $t2
    ctx->pc = 0x20dbacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20dbb0:
    // 0x20dbb0: 0xa47c2  srl         $t0, $t2, 31
    ctx->pc = 0x20dbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_20dbb4:
    // 0x20dbb4: 0x0  nop
    ctx->pc = 0x20dbb4u;
    // NOP
label_20dbb8:
    // 0x20dbb8: 0x3810  mfhi        $a3
    ctx->pc = 0x20dbb8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_20dbbc:
    // 0x20dbbc: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x20dbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_20dbc0:
    // 0x20dbc0: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x20dbc0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
label_20dbc4:
    // 0x20dbc4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x20dbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_20dbc8:
    // 0x20dbc8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x20dbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_20dbcc:
    // 0x20dbcc: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x20dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
label_20dbd0:
    // 0x20dbd0: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x20dbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_20dbd4:
    // 0x20dbd4: 0x46302a  slt         $a2, $v0, $a2
    ctx->pc = 0x20dbd4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20dbd8:
    // 0x20dbd8: 0x14c0ffe4  bnez        $a2, . + 4 + (-0x1C << 2)
label_20dbdc:
    if (ctx->pc == 0x20DBDCu) {
        ctx->pc = 0x20DBE0u;
        goto label_20dbe0;
    }
    ctx->pc = 0x20DBD8u;
    {
        const bool branch_taken_0x20dbd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dbd8) {
            ctx->pc = 0x20DB6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20db6c;
        }
    }
    ctx->pc = 0x20DBE0u;
label_20dbe0:
    // 0x20dbe0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x20dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_20dbe4:
    // 0x20dbe4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_20dbe8:
    // 0x20dbe8: 0x34428696  ori         $v0, $v0, 0x8696
    ctx->pc = 0x20dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34454);
label_20dbec:
    // 0x20dbec: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x20dbecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_20dbf0:
    // 0x20dbf0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20dbf4:
    if (ctx->pc == 0x20DBF4u) {
        ctx->pc = 0x20DBF8u;
        goto label_20dbf8;
    }
    ctx->pc = 0x20DBF0u;
    {
        const bool branch_taken_0x20dbf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dbf0) {
            ctx->pc = 0x20DBFCu;
            goto label_20dbfc;
        }
    }
    ctx->pc = 0x20DBF8u;
label_20dbf8:
    // 0x20dbf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20dbf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dbfc:
    // 0x20dbfc: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x20dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_20dc00:
    // 0x20dc00: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_20dc04:
    // 0x20dc04: 0x3443869f  ori         $v1, $v0, 0x869F
    ctx->pc = 0x20dc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_20dc08:
    // 0x20dc08: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x20dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_20dc0c:
    // 0x20dc0c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x20dc0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x20dc10u;
    return;
}
