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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part1(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17d410u: goto label_17d410;
        case 0x17d414u: goto label_17d414;
        case 0x17d418u: goto label_17d418;
        case 0x17d41cu: goto label_17d41c;
        case 0x17d420u: goto label_17d420;
        case 0x17d424u: goto label_17d424;
        case 0x17d428u: goto label_17d428;
        case 0x17d42cu: goto label_17d42c;
        case 0x17d430u: goto label_17d430;
        case 0x17d434u: goto label_17d434;
        case 0x17d438u: goto label_17d438;
        case 0x17d43cu: goto label_17d43c;
        case 0x17d440u: goto label_17d440;
        case 0x17d444u: goto label_17d444;
        case 0x17d448u: goto label_17d448;
        case 0x17d44cu: goto label_17d44c;
        case 0x17d450u: goto label_17d450;
        case 0x17d454u: goto label_17d454;
        case 0x17d458u: goto label_17d458;
        case 0x17d45cu: goto label_17d45c;
        case 0x17d460u: goto label_17d460;
        case 0x17d464u: goto label_17d464;
        case 0x17d468u: goto label_17d468;
        case 0x17d46cu: goto label_17d46c;
        case 0x17d470u: goto label_17d470;
        case 0x17d474u: goto label_17d474;
        case 0x17d478u: goto label_17d478;
        case 0x17d47cu: goto label_17d47c;
        case 0x17d480u: goto label_17d480;
        case 0x17d484u: goto label_17d484;
        case 0x17d488u: goto label_17d488;
        case 0x17d48cu: goto label_17d48c;
        case 0x17d490u: goto label_17d490;
        case 0x17d494u: goto label_17d494;
        case 0x17d498u: goto label_17d498;
        case 0x17d49cu: goto label_17d49c;
        case 0x17d4a0u: goto label_17d4a0;
        case 0x17d4a4u: goto label_17d4a4;
        case 0x17d4a8u: goto label_17d4a8;
        case 0x17d4acu: goto label_17d4ac;
        case 0x17d4b0u: goto label_17d4b0;
        case 0x17d4b4u: goto label_17d4b4;
        case 0x17d4b8u: goto label_17d4b8;
        case 0x17d4bcu: goto label_17d4bc;
        case 0x17d4c0u: goto label_17d4c0;
        case 0x17d4c4u: goto label_17d4c4;
        case 0x17d4c8u: goto label_17d4c8;
        case 0x17d4ccu: goto label_17d4cc;
        case 0x17d4d0u: goto label_17d4d0;
        case 0x17d4d4u: goto label_17d4d4;
        case 0x17d4d8u: goto label_17d4d8;
        case 0x17d4dcu: goto label_17d4dc;
        case 0x17d4e0u: goto label_17d4e0;
        case 0x17d4e4u: goto label_17d4e4;
        case 0x17d4e8u: goto label_17d4e8;
        case 0x17d4ecu: goto label_17d4ec;
        case 0x17d4f0u: goto label_17d4f0;
        case 0x17d4f4u: goto label_17d4f4;
        case 0x17d4f8u: goto label_17d4f8;
        case 0x17d4fcu: goto label_17d4fc;
        case 0x17d500u: goto label_17d500;
        case 0x17d504u: goto label_17d504;
        case 0x17d508u: goto label_17d508;
        case 0x17d50cu: goto label_17d50c;
        case 0x17d510u: goto label_17d510;
        case 0x17d514u: goto label_17d514;
        case 0x17d518u: goto label_17d518;
        case 0x17d51cu: goto label_17d51c;
        case 0x17d520u: goto label_17d520;
        case 0x17d524u: goto label_17d524;
        case 0x17d528u: goto label_17d528;
        case 0x17d52cu: goto label_17d52c;
        case 0x17d530u: goto label_17d530;
        case 0x17d534u: goto label_17d534;
        case 0x17d538u: goto label_17d538;
        case 0x17d53cu: goto label_17d53c;
        case 0x17d540u: goto label_17d540;
        case 0x17d544u: goto label_17d544;
        case 0x17d548u: goto label_17d548;
        case 0x17d54cu: goto label_17d54c;
        case 0x17d550u: goto label_17d550;
        case 0x17d554u: goto label_17d554;
        case 0x17d558u: goto label_17d558;
        case 0x17d55cu: goto label_17d55c;
        case 0x17d560u: goto label_17d560;
        case 0x17d564u: goto label_17d564;
        case 0x17d568u: goto label_17d568;
        case 0x17d56cu: goto label_17d56c;
        case 0x17d570u: goto label_17d570;
        case 0x17d574u: goto label_17d574;
        case 0x17d578u: goto label_17d578;
        case 0x17d57cu: goto label_17d57c;
        case 0x17d580u: goto label_17d580;
        case 0x17d584u: goto label_17d584;
        case 0x17d588u: goto label_17d588;
        case 0x17d58cu: goto label_17d58c;
        case 0x17d590u: goto label_17d590;
        case 0x17d594u: goto label_17d594;
        case 0x17d598u: goto label_17d598;
        case 0x17d59cu: goto label_17d59c;
        case 0x17d5a0u: goto label_17d5a0;
        case 0x17d5a4u: goto label_17d5a4;
        case 0x17d5a8u: goto label_17d5a8;
        case 0x17d5acu: goto label_17d5ac;
        case 0x17d5b0u: goto label_17d5b0;
        case 0x17d5b4u: goto label_17d5b4;
        case 0x17d5b8u: goto label_17d5b8;
        case 0x17d5bcu: goto label_17d5bc;
        case 0x17d5c0u: goto label_17d5c0;
        case 0x17d5c4u: goto label_17d5c4;
        case 0x17d5c8u: goto label_17d5c8;
        case 0x17d5ccu: goto label_17d5cc;
        case 0x17d5d0u: goto label_17d5d0;
        case 0x17d5d4u: goto label_17d5d4;
        case 0x17d5d8u: goto label_17d5d8;
        case 0x17d5dcu: goto label_17d5dc;
        case 0x17d5e0u: goto label_17d5e0;
        case 0x17d5e4u: goto label_17d5e4;
        case 0x17d5e8u: goto label_17d5e8;
        case 0x17d5ecu: goto label_17d5ec;
        case 0x17d5f0u: goto label_17d5f0;
        case 0x17d5f4u: goto label_17d5f4;
        case 0x17d5f8u: goto label_17d5f8;
        case 0x17d5fcu: goto label_17d5fc;
        case 0x17d600u: goto label_17d600;
        case 0x17d604u: goto label_17d604;
        case 0x17d608u: goto label_17d608;
        case 0x17d60cu: goto label_17d60c;
        case 0x17d610u: goto label_17d610;
        case 0x17d614u: goto label_17d614;
        case 0x17d618u: goto label_17d618;
        case 0x17d61cu: goto label_17d61c;
        case 0x17d620u: goto label_17d620;
        case 0x17d624u: goto label_17d624;
        case 0x17d628u: goto label_17d628;
        case 0x17d62cu: goto label_17d62c;
        case 0x17d630u: goto label_17d630;
        case 0x17d634u: goto label_17d634;
        case 0x17d638u: goto label_17d638;
        case 0x17d63cu: goto label_17d63c;
        case 0x17d640u: goto label_17d640;
        case 0x17d644u: goto label_17d644;
        case 0x17d648u: goto label_17d648;
        case 0x17d64cu: goto label_17d64c;
        case 0x17d650u: goto label_17d650;
        case 0x17d654u: goto label_17d654;
        case 0x17d658u: goto label_17d658;
        case 0x17d65cu: goto label_17d65c;
        case 0x17d660u: goto label_17d660;
        case 0x17d664u: goto label_17d664;
        case 0x17d668u: goto label_17d668;
        case 0x17d66cu: goto label_17d66c;
        case 0x17d670u: goto label_17d670;
        case 0x17d674u: goto label_17d674;
        case 0x17d678u: goto label_17d678;
        case 0x17d67cu: goto label_17d67c;
        case 0x17d680u: goto label_17d680;
        case 0x17d684u: goto label_17d684;
        case 0x17d688u: goto label_17d688;
        case 0x17d68cu: goto label_17d68c;
        case 0x17d690u: goto label_17d690;
        case 0x17d694u: goto label_17d694;
        case 0x17d698u: goto label_17d698;
        case 0x17d69cu: goto label_17d69c;
        case 0x17d6a0u: goto label_17d6a0;
        case 0x17d6a4u: goto label_17d6a4;
        case 0x17d6a8u: goto label_17d6a8;
        case 0x17d6acu: goto label_17d6ac;
        case 0x17d6b0u: goto label_17d6b0;
        case 0x17d6b4u: goto label_17d6b4;
        case 0x17d6b8u: goto label_17d6b8;
        case 0x17d6bcu: goto label_17d6bc;
        case 0x17d6c0u: goto label_17d6c0;
        case 0x17d6c4u: goto label_17d6c4;
        case 0x17d6c8u: goto label_17d6c8;
        case 0x17d6ccu: goto label_17d6cc;
        case 0x17d6d0u: goto label_17d6d0;
        case 0x17d6d4u: goto label_17d6d4;
        case 0x17d6d8u: goto label_17d6d8;
        case 0x17d6dcu: goto label_17d6dc;
        case 0x17d6e0u: goto label_17d6e0;
        case 0x17d6e4u: goto label_17d6e4;
        case 0x17d6e8u: goto label_17d6e8;
        case 0x17d6ecu: goto label_17d6ec;
        case 0x17d6f0u: goto label_17d6f0;
        case 0x17d6f4u: goto label_17d6f4;
        case 0x17d6f8u: goto label_17d6f8;
        case 0x17d6fcu: goto label_17d6fc;
        case 0x17d700u: goto label_17d700;
        case 0x17d704u: goto label_17d704;
        case 0x17d708u: goto label_17d708;
        case 0x17d70cu: goto label_17d70c;
        case 0x17d710u: goto label_17d710;
        case 0x17d714u: goto label_17d714;
        case 0x17d718u: goto label_17d718;
        case 0x17d71cu: goto label_17d71c;
        case 0x17d720u: goto label_17d720;
        case 0x17d724u: goto label_17d724;
        case 0x17d728u: goto label_17d728;
        case 0x17d72cu: goto label_17d72c;
        case 0x17d730u: goto label_17d730;
        case 0x17d734u: goto label_17d734;
        case 0x17d738u: goto label_17d738;
        case 0x17d73cu: goto label_17d73c;
        case 0x17d740u: goto label_17d740;
        case 0x17d744u: goto label_17d744;
        case 0x17d748u: goto label_17d748;
        case 0x17d74cu: goto label_17d74c;
        case 0x17d750u: goto label_17d750;
        case 0x17d754u: goto label_17d754;
        case 0x17d758u: goto label_17d758;
        case 0x17d75cu: goto label_17d75c;
        case 0x17d760u: goto label_17d760;
        case 0x17d764u: goto label_17d764;
        case 0x17d768u: goto label_17d768;
        case 0x17d76cu: goto label_17d76c;
        case 0x17d770u: goto label_17d770;
        case 0x17d774u: goto label_17d774;
        case 0x17d778u: goto label_17d778;
        case 0x17d77cu: goto label_17d77c;
        case 0x17d780u: goto label_17d780;
        case 0x17d784u: goto label_17d784;
        case 0x17d788u: goto label_17d788;
        case 0x17d78cu: goto label_17d78c;
        case 0x17d790u: goto label_17d790;
        case 0x17d794u: goto label_17d794;
        case 0x17d798u: goto label_17d798;
        case 0x17d79cu: goto label_17d79c;
        case 0x17d7a0u: goto label_17d7a0;
        case 0x17d7a4u: goto label_17d7a4;
        case 0x17d7a8u: goto label_17d7a8;
        case 0x17d7acu: goto label_17d7ac;
        case 0x17d7b0u: goto label_17d7b0;
        case 0x17d7b4u: goto label_17d7b4;
        case 0x17d7b8u: goto label_17d7b8;
        case 0x17d7bcu: goto label_17d7bc;
        case 0x17d7c0u: goto label_17d7c0;
        case 0x17d7c4u: goto label_17d7c4;
        case 0x17d7c8u: goto label_17d7c8;
        case 0x17d7ccu: goto label_17d7cc;
        case 0x17d7d0u: goto label_17d7d0;
        case 0x17d7d4u: goto label_17d7d4;
        case 0x17d7d8u: goto label_17d7d8;
        case 0x17d7dcu: goto label_17d7dc;
        case 0x17d7e0u: goto label_17d7e0;
        case 0x17d7e4u: goto label_17d7e4;
        case 0x17d7e8u: goto label_17d7e8;
        case 0x17d7ecu: goto label_17d7ec;
        case 0x17d7f0u: goto label_17d7f0;
        case 0x17d7f4u: goto label_17d7f4;
        case 0x17d7f8u: goto label_17d7f8;
        case 0x17d7fcu: goto label_17d7fc;
        case 0x17d800u: goto label_17d800;
        case 0x17d804u: goto label_17d804;
        case 0x17d808u: goto label_17d808;
        case 0x17d80cu: goto label_17d80c;
        case 0x17d810u: goto label_17d810;
        case 0x17d814u: goto label_17d814;
        case 0x17d818u: goto label_17d818;
        case 0x17d81cu: goto label_17d81c;
        case 0x17d820u: goto label_17d820;
        case 0x17d824u: goto label_17d824;
        case 0x17d828u: goto label_17d828;
        case 0x17d82cu: goto label_17d82c;
        case 0x17d830u: goto label_17d830;
        case 0x17d834u: goto label_17d834;
        case 0x17d838u: goto label_17d838;
        case 0x17d83cu: goto label_17d83c;
        case 0x17d840u: goto label_17d840;
        case 0x17d844u: goto label_17d844;
        case 0x17d848u: goto label_17d848;
        case 0x17d84cu: goto label_17d84c;
        case 0x17d850u: goto label_17d850;
        case 0x17d854u: goto label_17d854;
        case 0x17d858u: goto label_17d858;
        case 0x17d85cu: goto label_17d85c;
        case 0x17d860u: goto label_17d860;
        case 0x17d864u: goto label_17d864;
        case 0x17d868u: goto label_17d868;
        case 0x17d86cu: goto label_17d86c;
        case 0x17d870u: goto label_17d870;
        case 0x17d874u: goto label_17d874;
        case 0x17d878u: goto label_17d878;
        case 0x17d87cu: goto label_17d87c;
        case 0x17d880u: goto label_17d880;
        case 0x17d884u: goto label_17d884;
        case 0x17d888u: goto label_17d888;
        case 0x17d88cu: goto label_17d88c;
        case 0x17d890u: goto label_17d890;
        case 0x17d894u: goto label_17d894;
        case 0x17d898u: goto label_17d898;
        case 0x17d89cu: goto label_17d89c;
        case 0x17d8a0u: goto label_17d8a0;
        case 0x17d8a4u: goto label_17d8a4;
        case 0x17d8a8u: goto label_17d8a8;
        case 0x17d8acu: goto label_17d8ac;
        case 0x17d8b0u: goto label_17d8b0;
        case 0x17d8b4u: goto label_17d8b4;
        case 0x17d8b8u: goto label_17d8b8;
        case 0x17d8bcu: goto label_17d8bc;
        case 0x17d8c0u: goto label_17d8c0;
        case 0x17d8c4u: goto label_17d8c4;
        case 0x17d8c8u: goto label_17d8c8;
        case 0x17d8ccu: goto label_17d8cc;
        case 0x17d8d0u: goto label_17d8d0;
        case 0x17d8d4u: goto label_17d8d4;
        case 0x17d8d8u: goto label_17d8d8;
        case 0x17d8dcu: goto label_17d8dc;
        case 0x17d8e0u: goto label_17d8e0;
        case 0x17d8e4u: goto label_17d8e4;
        case 0x17d8e8u: goto label_17d8e8;
        case 0x17d8ecu: goto label_17d8ec;
        case 0x17d8f0u: goto label_17d8f0;
        case 0x17d8f4u: goto label_17d8f4;
        case 0x17d8f8u: goto label_17d8f8;
        case 0x17d8fcu: goto label_17d8fc;
        case 0x17d900u: goto label_17d900;
        case 0x17d904u: goto label_17d904;
        case 0x17d908u: goto label_17d908;
        case 0x17d90cu: goto label_17d90c;
        case 0x17d910u: goto label_17d910;
        case 0x17d914u: goto label_17d914;
        case 0x17d918u: goto label_17d918;
        case 0x17d91cu: goto label_17d91c;
        case 0x17d920u: goto label_17d920;
        case 0x17d924u: goto label_17d924;
        case 0x17d928u: goto label_17d928;
        case 0x17d92cu: goto label_17d92c;
        case 0x17d930u: goto label_17d930;
        case 0x17d934u: goto label_17d934;
        case 0x17d938u: goto label_17d938;
        case 0x17d93cu: goto label_17d93c;
        case 0x17d940u: goto label_17d940;
        case 0x17d944u: goto label_17d944;
        case 0x17d948u: goto label_17d948;
        case 0x17d94cu: goto label_17d94c;
        case 0x17d950u: goto label_17d950;
        case 0x17d954u: goto label_17d954;
        case 0x17d958u: goto label_17d958;
        case 0x17d95cu: goto label_17d95c;
        case 0x17d960u: goto label_17d960;
        case 0x17d964u: goto label_17d964;
        case 0x17d968u: goto label_17d968;
        case 0x17d96cu: goto label_17d96c;
        case 0x17d970u: goto label_17d970;
        case 0x17d974u: goto label_17d974;
        case 0x17d978u: goto label_17d978;
        case 0x17d97cu: goto label_17d97c;
        case 0x17d980u: goto label_17d980;
        case 0x17d984u: goto label_17d984;
        case 0x17d988u: goto label_17d988;
        case 0x17d98cu: goto label_17d98c;
        case 0x17d990u: goto label_17d990;
        case 0x17d994u: goto label_17d994;
        case 0x17d998u: goto label_17d998;
        case 0x17d99cu: goto label_17d99c;
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
        default: return;
    }


    ctx->pc = 0x17d410u;

label_17d410:
    // 0x17d410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17d414:
    // 0x17d414: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x17d414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17d418:
    // 0x17d418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17d41c:
    // 0x17d41c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_17d420:
    // 0x17d420: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x17d420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_17d424:
    // 0x17d424: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17d424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17d428:
    // 0x17d428: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17d428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17d42c:
    // 0x17d42c: 0xaf80877c  sw          $zero, -0x7884($gp)
    ctx->pc = 0x17d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 0));
label_17d430:
    // 0x17d430: 0x24849400  addiu       $a0, $a0, -0x6C00
    ctx->pc = 0x17d430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939648));
label_17d434:
    // 0x17d434: 0xaf808778  sw          $zero, -0x7888($gp)
    ctx->pc = 0x17d434u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 0));
label_17d438:
    // 0x17d438: 0x246393c0  addiu       $v1, $v1, -0x6C40
    ctx->pc = 0x17d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939584));
label_17d43c:
    // 0x17d43c: 0xaf808770  sw          $zero, -0x7890($gp)
    ctx->pc = 0x17d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 0));
label_17d440:
    // 0x17d440: 0xaf808774  sw          $zero, -0x788C($gp)
    ctx->pc = 0x17d440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 0));
label_17d444:
    // 0x17d444: 0xaf808790  sw          $zero, -0x7870($gp)
    ctx->pc = 0x17d444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 0));
label_17d448:
    // 0x17d448: 0xaf80878c  sw          $zero, -0x7874($gp)
    ctx->pc = 0x17d448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 0));
label_17d44c:
    // 0x17d44c: 0xaf808788  sw          $zero, -0x7878($gp)
    ctx->pc = 0x17d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 0));
label_17d450:
    // 0x17d450: 0xaf808784  sw          $zero, -0x787C($gp)
    ctx->pc = 0x17d450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 0));
label_17d454:
    // 0x17d454: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x17d454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17d458:
    // 0x17d458: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x17d458u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_17d45c:
    // 0x17d45c: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x17d45cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_17d460:
    // 0x17d460: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x17d460u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_17d464:
    // 0x17d464: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x17d464u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17d468:
    // 0x17d468: 0xd8660010  lqc2        $vf6, 0x10($v1)
    ctx->pc = 0x17d468u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17d46c:
    // 0x17d46c: 0xd8670020  lqc2        $vf7, 0x20($v1)
    ctx->pc = 0x17d46cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17d470:
    // 0x17d470: 0xd8680030  lqc2        $vf8, 0x30($v1)
    ctx->pc = 0x17d470u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17d474:
    // 0x17d474: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17d474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17d478:
    // 0x17d478: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_17d47c:
    if (ctx->pc == 0x17D47Cu) {
        ctx->pc = 0x17D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D478u;
        // 0x17d47c: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D480u;
        goto label_17d480;
    }
    ctx->pc = 0x17D478u;
    {
        const bool branch_taken_0x17d478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D478u;
        // 0x17d47c: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d478) {
            ctx->pc = 0x17D4C8u;
            goto label_17d4c8;
        }
    }
    ctx->pc = 0x17D480u;
label_17d480:
    // 0x17d480: 0x8c2491b0  lw          $a0, -0x6E50($at)
    ctx->pc = 0x17d480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939056)));
label_17d484:
    // 0x17d484: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d488:
    // 0x17d488: 0x8c2591b8  lw          $a1, -0x6E48($at)
    ctx->pc = 0x17d488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939064)));
label_17d48c:
    // 0x17d48c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d490:
    // 0x17d490: 0x8c2691b4  lw          $a2, -0x6E4C($at)
    ctx->pc = 0x17d490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939060)));
label_17d494:
    // 0x17d494: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d498:
    // 0x17d498: 0x8c2791bc  lw          $a3, -0x6E44($at)
    ctx->pc = 0x17d498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939068)));
label_17d49c:
    // 0x17d49c: 0xc05f6b8  jal         func_17DAE0
label_17d4a0:
    if (ctx->pc == 0x17D4A0u) {
        ctx->pc = 0x17D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D49Cu;
        // 0x17d4a0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D4A4u;
        goto label_17d4a4;
    }
    ctx->pc = 0x17D49Cu;
    SET_GPR_U32(ctx, 31, 0x17D4A4u);
    ctx->pc = 0x17D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D49Cu;
    // 0x17d4a0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DAE0u;
    goto label_17dae0;
    ctx->pc = 0x17D4A4u;
label_17d4a4:
    // 0x17d4a4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17d4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17d4a8:
    // 0x17d4a8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_17d4ac:
    // 0x17d4ac: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_17d4b0:
    if (ctx->pc == 0x17D4B0u) {
        ctx->pc = 0x17D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4ACu;
        // 0x17d4b0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D4B4u;
        goto label_17d4b4;
    }
    ctx->pc = 0x17D4ACu;
    {
        const bool branch_taken_0x17d4ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4ACu;
        // 0x17d4b0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4ac) {
            ctx->pc = 0x17D4C8u;
            goto label_17d4c8;
        }
    }
    ctx->pc = 0x17D4B4u;
label_17d4b4:
    // 0x17d4b4: 0xc040058  jal         func_100160
label_17d4b8:
    if (ctx->pc == 0x17D4B8u) {
        ctx->pc = 0x17D4BCu;
        goto label_17d4bc;
    }
    ctx->pc = 0x17D4B4u;
    SET_GPR_U32(ctx, 31, 0x17D4BCu);
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x17D4B4u, 0x17D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4BCu;
label_17d4bc:
    // 0x17d4bc: 0x8f858774  lw          $a1, -0x788C($gp)
    ctx->pc = 0x17d4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17d4c0:
    // 0x17d4c0: 0xc05e71c  jal         func_179C70
label_17d4c4:
    if (ctx->pc == 0x17D4C4u) {
        ctx->pc = 0x17D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4C0u;
        // 0x17d4c4: 0x8f848770  lw          $a0, -0x7890($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D4C8u;
        goto label_17d4c8;
    }
    ctx->pc = 0x17D4C0u;
    SET_GPR_U32(ctx, 31, 0x17D4C8u);
    ctx->pc = 0x17D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D4C0u;
    // 0x17d4c4: 0x8f848770  lw          $a0, -0x7890($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C70u, 0x17D4C0u, 0x17D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4C8u;
label_17d4c8:
    // 0x17d4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d4cc:
    // 0x17d4cc: 0x3e00008  jr          $ra
label_17d4d0:
    if (ctx->pc == 0x17D4D0u) {
        ctx->pc = 0x17D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4CCu;
        // 0x17d4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D4D4u;
        goto label_17d4d4;
    }
    ctx->pc = 0x17D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4CCu;
        // 0x17d4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D4D4u;
label_17d4d4:
    // 0x17d4d4: 0x0  nop
    ctx->pc = 0x17d4d4u;
    // NOP
label_17d4d8:
    // 0x17d4d8: 0x0  nop
    ctx->pc = 0x17d4d8u;
    // NOP
label_17d4dc:
    // 0x17d4dc: 0x0  nop
    ctx->pc = 0x17d4dcu;
    // NOP
label_17d4e0:
    // 0x17d4e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d4e4:
    // 0x17d4e4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_17d4e8:
    if (ctx->pc == 0x17D4E8u) {
        ctx->pc = 0x17D4ECu;
        goto label_17d4ec;
    }
    ctx->pc = 0x17D4E4u;
    {
        const bool branch_taken_0x17d4e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17d4e4) {
            ctx->pc = 0x17D500u;
            goto label_17d500;
        }
    }
    ctx->pc = 0x17D4ECu;
label_17d4ec:
    // 0x17d4ec: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17d4f0:
    // 0x17d4f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_17d4f4:
    if (ctx->pc == 0x17D4F4u) {
        ctx->pc = 0x17D4F8u;
        goto label_17d4f8;
    }
    ctx->pc = 0x17D4F0u;
    {
        const bool branch_taken_0x17d4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d4f0) {
            ctx->pc = 0x17D514u;
            goto label_17d514;
        }
    }
    ctx->pc = 0x17D4F8u;
label_17d4f8:
    // 0x17d4f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_17d4fc:
    if (ctx->pc == 0x17D4FCu) {
        ctx->pc = 0x17D500u;
        goto label_17d500;
    }
    ctx->pc = 0x17D4F8u;
    {
        const bool branch_taken_0x17d4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d4f8) {
            ctx->pc = 0x17D518u;
            goto label_17d518;
        }
    }
    ctx->pc = 0x17D500u;
label_17d500:
    // 0x17d500: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17d500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17d504:
    // 0x17d504: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17d508:
    if (ctx->pc == 0x17D508u) {
        ctx->pc = 0x17D50Cu;
        goto label_17d50c;
    }
    ctx->pc = 0x17D504u;
    {
        const bool branch_taken_0x17d504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d504) {
            ctx->pc = 0x17D514u;
            goto label_17d514;
        }
    }
    ctx->pc = 0x17D50Cu;
label_17d50c:
    // 0x17d50c: 0x10000002  b           . + 4 + (0x2 << 2)
label_17d510:
    if (ctx->pc == 0x17D510u) {
        ctx->pc = 0x17D514u;
        goto label_17d514;
    }
    ctx->pc = 0x17D50Cu;
    {
        const bool branch_taken_0x17d50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d50c) {
            ctx->pc = 0x17D518u;
            goto label_17d518;
        }
    }
    ctx->pc = 0x17D514u;
label_17d514:
    // 0x17d514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17d514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d518:
    // 0x17d518: 0x3e00008  jr          $ra
label_17d51c:
    if (ctx->pc == 0x17D51Cu) {
        ctx->pc = 0x17D520u;
        goto label_17d520;
    }
    ctx->pc = 0x17D518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D520u;
label_17d520:
    // 0x17d520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_17d524:
    // 0x17d524: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x17d524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_17d528:
    // 0x17d528: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17d528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17d52c:
    // 0x17d52c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17d52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17d530:
    // 0x17d530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17d534:
    // 0x17d534: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x17d534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_17d538:
    // 0x17d538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17d53c:
    // 0x17d53c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17d53cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17d540:
    // 0x17d540: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17d544:
    // 0x17d544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17d544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17d548:
    // 0x17d548: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x17d548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_17d54c:
    // 0x17d54c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x17d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_17d550:
    // 0x17d550: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17d550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_17d554:
    // 0x17d554: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x17d554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17d558:
    // 0x17d558: 0xc066d0a  jal         func_19B428
label_17d55c:
    if (ctx->pc == 0x17D55Cu) {
        ctx->pc = 0x17D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D558u;
        // 0x17d55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D560u;
        goto label_17d560;
    }
    ctx->pc = 0x17D558u;
    SET_GPR_U32(ctx, 31, 0x17D560u);
    ctx->pc = 0x17D55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D558u;
    // 0x17d55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x17D560u;
label_17d560:
    // 0x17d560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d564:
    // 0x17d564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17d564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d568:
    // 0x17d568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17d568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d56c:
    // 0x17d56c: 0xc05e990  jal         func_17A640
label_17d570:
    if (ctx->pc == 0x17D570u) {
        ctx->pc = 0x17D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D56Cu;
        // 0x17d570: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D574u;
        goto label_17d574;
    }
    ctx->pc = 0x17D56Cu;
    SET_GPR_U32(ctx, 31, 0x17D574u);
    ctx->pc = 0x17D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D56Cu;
    // 0x17d570: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x17D56Cu, 0x17D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D574u;
label_17d574:
    // 0x17d574: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_17d578:
    if (ctx->pc == 0x17D578u) {
        ctx->pc = 0x17D57Cu;
        goto label_17d57c;
    }
    ctx->pc = 0x17D574u;
    {
        const bool branch_taken_0x17d574 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d574) {
            ctx->pc = 0x17D590u;
            goto label_17d590;
        }
    }
    ctx->pc = 0x17D57Cu;
label_17d57c:
    // 0x17d57c: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x17d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_17d580:
    // 0x17d580: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x17d580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_17d584:
    // 0x17d584: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x17d584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_17d588:
    // 0x17d588: 0x10000005  b           . + 4 + (0x5 << 2)
label_17d58c:
    if (ctx->pc == 0x17D58Cu) {
        ctx->pc = 0x17D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D588u;
        // 0x17d58c: 0xaf828794  sw          $v0, -0x786C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D590u;
        goto label_17d590;
    }
    ctx->pc = 0x17D588u;
    {
        const bool branch_taken_0x17d588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D588u;
        // 0x17d58c: 0xaf828794  sw          $v0, -0x786C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d588) {
            ctx->pc = 0x17D5A0u;
            goto label_17d5a0;
        }
    }
    ctx->pc = 0x17D590u;
label_17d590:
    // 0x17d590: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x17d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_17d594:
    // 0x17d594: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x17d594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_17d598:
    // 0x17d598: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x17d598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_17d59c:
    // 0x17d59c: 0xaf828794  sw          $v0, -0x786C($gp)
    ctx->pc = 0x17d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936468), GPR_U32(ctx, 2));
label_17d5a0:
    // 0x17d5a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17d5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17d5a4:
    // 0x17d5a4: 0xc05fe58  jal         func_17F960
label_17d5a8:
    if (ctx->pc == 0x17D5A8u) {
        ctx->pc = 0x17D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D5A4u;
        // 0x17d5a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D5ACu;
        goto label_17d5ac;
    }
    ctx->pc = 0x17D5A4u;
    SET_GPR_U32(ctx, 31, 0x17D5ACu);
    ctx->pc = 0x17D5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5A4u;
    // 0x17d5a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F960u;
    { ctx->pc = 0x17f960; return; }
    ctx->pc = 0x17D5ACu;
label_17d5ac:
    // 0x17d5ac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x17d5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17d5b0:
    // 0x17d5b0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17d5b4:
    // 0x17d5b4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x17d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17d5b8:
    // 0x17d5b8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x17d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_17d5bc:
    // 0x17d5bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x17d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_17d5c0:
    // 0x17d5c0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x17d5c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_17d5c4:
    // 0x17d5c4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x17d5c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_17d5c8:
    // 0x17d5c8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x17d5c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17d5cc:
    // 0x17d5cc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17d5ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17d5d0:
    // 0x17d5d0: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x17d5d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_17d5d4:
    // 0x17d5d4: 0x4b4209ab  vmax.xz     $vf6, $vf1, $vf2
    ctx->pc = 0x17d5d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17d5d8:
    // 0x17d5d8: 0x4b4331ab  vmax.xz     $vf6, $vf6, $vf3
    ctx->pc = 0x17d5d8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17d5dc:
    // 0x17d5dc: 0x4b4431ab  vmax.xz     $vf6, $vf6, $vf4
    ctx->pc = 0x17d5dcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17d5e0:
    // 0x17d5e0: 0x4b4531ab  vmax.xz     $vf6, $vf6, $vf5
    ctx->pc = 0x17d5e0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[6], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17d5e4:
    // 0x17d5e4: 0x4b4209ef  vmini.xz    $vf7, $vf1, $vf2
    ctx->pc = 0x17d5e4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_17d5e8:
    // 0x17d5e8: 0x4b4339ef  vmini.xz    $vf7, $vf7, $vf3
    ctx->pc = 0x17d5e8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_17d5ec:
    // 0x17d5ec: 0x4b4439ef  vmini.xz    $vf7, $vf7, $vf4
    ctx->pc = 0x17d5ecu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[7], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_17d5f0:
    // 0x17d5f0: 0x4b4539ef  vmini.xz    $vf7, $vf7, $vf5
    ctx->pc = 0x17d5f0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_17d5f4:
    // 0x17d5f4: 0x4aa63b3d  vmr32.yw    $vf6, $vf7
    ctx->pc = 0x17d5f4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_17d5f8:
    // 0x17d5f8: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x17d5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_17d5fc:
    // 0x17d5fc: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x17d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
label_17d600:
    // 0x17d600: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x17d600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_17d604:
    // 0x17d604: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x17d604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_17d608:
    // 0x17d608: 0x3c02439f  lui         $v0, 0x439F
    ctx->pc = 0x17d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17311 << 16));
label_17d60c:
    // 0x17d60c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x17d60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_17d610:
    // 0x17d610: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x17d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_17d614:
    // 0x17d614: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x17d614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_17d618:
    // 0x17d618: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x17d618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_17d61c:
    // 0x17d61c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x17d61cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17d620:
    // 0x17d620: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x17d620u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_17d624:
    // 0x17d624: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x17d624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_17d628:
    // 0x17d628: 0x4be00850  vmaxx.xyzw  $vf1, $vf1, $vf0x
    ctx->pc = 0x17d628u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_17d62c:
    // 0x17d62c: 0x4be20855  vminiy.xyzw $vf1, $vf1, $vf2y
    ctx->pc = 0x17d62cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_17d630:
    // 0x17d630: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x17d630u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_17d634:
    // 0x17d634: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x17d634u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_17d638:
    // 0x17d638: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d63c:
    // 0x17d63c: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x17d63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_17d640:
    // 0x17d640: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x17d640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_17d644:
    // 0x17d644: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x17d644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_17d648:
    // 0x17d648: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x17d648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_17d64c:
    // 0x17d64c: 0x8f828448  lw          $v0, -0x7BB8($gp)
    ctx->pc = 0x17d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17d650:
    // 0x17d650: 0xac265220  sw          $a2, 0x5220($at)
    ctx->pc = 0x17d650u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21024), GPR_U32(ctx, 6));
label_17d654:
    // 0x17d654: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d658:
    // 0x17d658: 0xac255224  sw          $a1, 0x5224($at)
    ctx->pc = 0x17d658u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21028), GPR_U32(ctx, 5));
label_17d65c:
    // 0x17d65c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d660:
    // 0x17d660: 0xac245228  sw          $a0, 0x5228($at)
    ctx->pc = 0x17d660u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21032), GPR_U32(ctx, 4));
label_17d664:
    // 0x17d664: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d668:
    // 0x17d668: 0xac23522c  sw          $v1, 0x522C($at)
    ctx->pc = 0x17d668u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21036), GPR_U32(ctx, 3));
label_17d66c:
    // 0x17d66c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17d670:
    // 0x17d670: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d674:
    // 0x17d674: 0x8c225224  lw          $v0, 0x5224($at)
    ctx->pc = 0x17d674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21028)));
label_17d678:
    // 0x17d678: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17d678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17d67c:
    // 0x17d67c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17d680:
    if (ctx->pc == 0x17D680u) {
        ctx->pc = 0x17D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D67Cu;
        // 0x17d680: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D684u;
        goto label_17d684;
    }
    ctx->pc = 0x17D67Cu;
    {
        const bool branch_taken_0x17d67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D67Cu;
        // 0x17d680: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d67c) {
            ctx->pc = 0x17D68Cu;
            goto label_17d68c;
        }
    }
    ctx->pc = 0x17D684u;
label_17d684:
    // 0x17d684: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d688:
    // 0x17d688: 0xac225224  sw          $v0, 0x5224($at)
    ctx->pc = 0x17d688u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21028), GPR_U32(ctx, 2));
label_17d68c:
    // 0x17d68c: 0x8f828448  lw          $v0, -0x7BB8($gp)
    ctx->pc = 0x17d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17d690:
    // 0x17d690: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d694:
    // 0x17d694: 0x8c245220  lw          $a0, 0x5220($at)
    ctx->pc = 0x17d694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21024)));
label_17d698:
    // 0x17d698: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17d69c:
    // 0x17d69c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x17d69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17d6a0:
    // 0x17d6a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17d6a4:
    if (ctx->pc == 0x17D6A4u) {
        ctx->pc = 0x17D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6A0u;
        // 0x17d6a4: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D6A8u;
        goto label_17d6a8;
    }
    ctx->pc = 0x17D6A0u;
    {
        const bool branch_taken_0x17d6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6A0u;
        // 0x17d6a4: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d6a0) {
            ctx->pc = 0x17D6B0u;
            goto label_17d6b0;
        }
    }
    ctx->pc = 0x17D6A8u;
label_17d6a8:
    // 0x17d6a8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d6ac:
    // 0x17d6ac: 0xac225220  sw          $v0, 0x5220($at)
    ctx->pc = 0x17d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21024), GPR_U32(ctx, 2));
label_17d6b0:
    // 0x17d6b0: 0x8f828448  lw          $v0, -0x7BB8($gp)
    ctx->pc = 0x17d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17d6b4:
    // 0x17d6b4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d6b8:
    // 0x17d6b8: 0x8c24522c  lw          $a0, 0x522C($at)
    ctx->pc = 0x17d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21036)));
label_17d6bc:
    // 0x17d6bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17d6c0:
    // 0x17d6c0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x17d6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17d6c4:
    // 0x17d6c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17d6c8:
    if (ctx->pc == 0x17D6C8u) {
        ctx->pc = 0x17D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6C4u;
        // 0x17d6c8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D6CCu;
        goto label_17d6cc;
    }
    ctx->pc = 0x17D6C4u;
    {
        const bool branch_taken_0x17d6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6C4u;
        // 0x17d6c8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d6c4) {
            ctx->pc = 0x17D6D4u;
            goto label_17d6d4;
        }
    }
    ctx->pc = 0x17D6CCu;
label_17d6cc:
    // 0x17d6cc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d6d0:
    // 0x17d6d0: 0xac22522c  sw          $v0, 0x522C($at)
    ctx->pc = 0x17d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21036), GPR_U32(ctx, 2));
label_17d6d4:
    // 0x17d6d4: 0x8f828448  lw          $v0, -0x7BB8($gp)
    ctx->pc = 0x17d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17d6d8:
    // 0x17d6d8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d6dc:
    // 0x17d6dc: 0x8c245228  lw          $a0, 0x5228($at)
    ctx->pc = 0x17d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21032)));
label_17d6e0:
    // 0x17d6e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x17d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17d6e4:
    // 0x17d6e4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x17d6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17d6e8:
    // 0x17d6e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_17d6ec:
    if (ctx->pc == 0x17D6ECu) {
        ctx->pc = 0x17D6F0u;
        goto label_17d6f0;
    }
    ctx->pc = 0x17D6E8u;
    {
        const bool branch_taken_0x17d6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d6e8) {
            ctx->pc = 0x17D6FCu;
            goto label_17d6fc;
        }
    }
    ctx->pc = 0x17D6F0u;
label_17d6f0:
    // 0x17d6f0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x17d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_17d6f4:
    // 0x17d6f4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d6f8:
    // 0x17d6f8: 0xac225228  sw          $v0, 0x5228($at)
    ctx->pc = 0x17d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21032), GPR_U32(ctx, 2));
label_17d6fc:
    // 0x17d6fc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d700:
    // 0x17d700: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x17d700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_17d704:
    // 0x17d704: 0x8c245220  lw          $a0, 0x5220($at)
    ctx->pc = 0x17d704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21024)));
label_17d708:
    // 0x17d708: 0x34496667  ori         $t1, $v0, 0x6667
    ctx->pc = 0x17d708u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_17d70c:
    // 0x17d70c: 0x8f838460  lw          $v1, -0x7BA0($gp)
    ctx->pc = 0x17d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935648)));
label_17d710:
    // 0x17d710: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d714:
    // 0x17d714: 0x447c2  srl         $t0, $a0, 31
    ctx->pc = 0x17d714u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_17d718:
    // 0x17d718: 0x8c255228  lw          $a1, 0x5228($at)
    ctx->pc = 0x17d718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21032)));
label_17d71c:
    // 0x17d71c: 0x1240018  mult        $zero, $t1, $a0
    ctx->pc = 0x17d71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_17d720:
    // 0x17d720: 0x0  nop
    ctx->pc = 0x17d720u;
    // NOP
label_17d724:
    // 0x17d724: 0x0  nop
    ctx->pc = 0x17d724u;
    // NOP
label_17d728:
    // 0x17d728: 0x3810  mfhi        $a3
    ctx->pc = 0x17d728u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_17d72c:
    // 0x17d72c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d730:
    // 0x17d730: 0x537c2  srl         $a2, $a1, 31
    ctx->pc = 0x17d730u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_17d734:
    // 0x17d734: 0x8c225224  lw          $v0, 0x5224($at)
    ctx->pc = 0x17d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21028)));
label_17d738:
    // 0x17d738: 0x1250018  mult        $zero, $t1, $a1
    ctx->pc = 0x17d738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_17d73c:
    // 0x17d73c: 0x72843  sra         $a1, $a3, 1
    ctx->pc = 0x17d73cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
label_17d740:
    // 0x17d740: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x17d740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_17d744:
    // 0x17d744: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d748:
    // 0x17d748: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_17d74c:
    // 0x17d74c: 0xac2591b0  sw          $a1, -0x6E50($at)
    ctx->pc = 0x17d74cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939056), GPR_U32(ctx, 5));
label_17d750:
    // 0x17d750: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x17d750u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_17d754:
    // 0x17d754: 0x2810  mfhi        $a1
    ctx->pc = 0x17d754u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_17d758:
    // 0x17d758: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d75c:
    // 0x17d75c: 0x1220018  mult        $zero, $t1, $v0
    ctx->pc = 0x17d75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_17d760:
    // 0x17d760: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x17d760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
label_17d764:
    // 0x17d764: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x17d764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17d768:
    // 0x17d768: 0xac2291b8  sw          $v0, -0x6E48($at)
    ctx->pc = 0x17d768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939064), GPR_U32(ctx, 2));
label_17d76c:
    // 0x17d76c: 0x1010  mfhi        $v0
    ctx->pc = 0x17d76cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_17d770:
    // 0x17d770: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d774:
    // 0x17d774: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17d774u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_17d778:
    // 0x17d778: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17d77c:
    // 0x17d77c: 0xac2291b4  sw          $v0, -0x6E4C($at)
    ctx->pc = 0x17d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939060), GPR_U32(ctx, 2));
label_17d780:
    // 0x17d780: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d784:
    // 0x17d784: 0x8c2291b4  lw          $v0, -0x6E4C($at)
    ctx->pc = 0x17d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939060)));
label_17d788:
    // 0x17d788: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17d788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17d78c:
    // 0x17d78c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_17d790:
    if (ctx->pc == 0x17D790u) {
        ctx->pc = 0x17D794u;
        goto label_17d794;
    }
    ctx->pc = 0x17D78Cu;
    {
        const bool branch_taken_0x17d78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d78c) {
            ctx->pc = 0x17D7A0u;
            goto label_17d7a0;
        }
    }
    ctx->pc = 0x17D794u;
label_17d794:
    // 0x17d794: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x17d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_17d798:
    // 0x17d798: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d79c:
    // 0x17d79c: 0xac2291b4  sw          $v0, -0x6E4C($at)
    ctx->pc = 0x17d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939060), GPR_U32(ctx, 2));
label_17d7a0:
    // 0x17d7a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17d7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17d7a4:
    // 0x17d7a4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x17d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_17d7a8:
    // 0x17d7a8: 0x8c24522c  lw          $a0, 0x522C($at)
    ctx->pc = 0x17d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21036)));
label_17d7ac:
    // 0x17d7ac: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x17d7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_17d7b0:
    // 0x17d7b0: 0x8f838464  lw          $v1, -0x7B9C($gp)
    ctx->pc = 0x17d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935652)));
label_17d7b4:
    // 0x17d7b4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x17d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_17d7b8:
    // 0x17d7b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d7bc:
    // 0x17d7bc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x17d7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_17d7c0:
    // 0x17d7c0: 0x0  nop
    ctx->pc = 0x17d7c0u;
    // NOP
label_17d7c4:
    // 0x17d7c4: 0x0  nop
    ctx->pc = 0x17d7c4u;
    // NOP
label_17d7c8:
    // 0x17d7c8: 0x1010  mfhi        $v0
    ctx->pc = 0x17d7c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_17d7cc:
    // 0x17d7cc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x17d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_17d7d0:
    // 0x17d7d0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17d7d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_17d7d4:
    // 0x17d7d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17d7d8:
    // 0x17d7d8: 0xac2291bc  sw          $v0, -0x6E44($at)
    ctx->pc = 0x17d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939068), GPR_U32(ctx, 2));
label_17d7dc:
    // 0x17d7dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d7e0:
    // 0x17d7e0: 0x8c2291bc  lw          $v0, -0x6E44($at)
    ctx->pc = 0x17d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939068)));
label_17d7e4:
    // 0x17d7e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17d7e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17d7e8:
    // 0x17d7e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17d7ec:
    if (ctx->pc == 0x17D7ECu) {
        ctx->pc = 0x17D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7E8u;
        // 0x17d7ec: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D7F0u;
        goto label_17d7f0;
    }
    ctx->pc = 0x17D7E8u;
    {
        const bool branch_taken_0x17d7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7E8u;
        // 0x17d7ec: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7e8) {
            ctx->pc = 0x17D7F8u;
            goto label_17d7f8;
        }
    }
    ctx->pc = 0x17D7F0u;
label_17d7f0:
    // 0x17d7f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d7f4:
    // 0x17d7f4: 0xac2291bc  sw          $v0, -0x6E44($at)
    ctx->pc = 0x17d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939068), GPR_U32(ctx, 2));
label_17d7f8:
    // 0x17d7f8: 0xc05fc50  jal         func_17F140
label_17d7fc:
    if (ctx->pc == 0x17D7FCu) {
        ctx->pc = 0x17D800u;
        goto label_17d800;
    }
    ctx->pc = 0x17D7F8u;
    SET_GPR_U32(ctx, 31, 0x17D800u);
    ctx->pc = 0x17F140u;
    { ctx->pc = 0x17f140; return; }
    ctx->pc = 0x17D800u;
label_17d800:
    // 0x17d800: 0x8f858760  lw          $a1, -0x78A0($gp)
    ctx->pc = 0x17d800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936416)));
label_17d804:
    // 0x17d804: 0xc05e330  jal         func_178CC0
label_17d808:
    if (ctx->pc == 0x17D808u) {
        ctx->pc = 0x17D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D804u;
        // 0x17d808: 0x8f84875c  lw          $a0, -0x78A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D80Cu;
        goto label_17d80c;
    }
    ctx->pc = 0x17D804u;
    SET_GPR_U32(ctx, 31, 0x17D80Cu);
    ctx->pc = 0x17D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D804u;
    // 0x17d808: 0x8f84875c  lw          $a0, -0x78A4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178CC0u, 0x17D804u, 0x17D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D80Cu;
label_17d80c:
    // 0x17d80c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_17d810:
    // 0x17d810: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17d810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17d814:
    // 0x17d814: 0xaf828780  sw          $v0, -0x7880($gp)
    ctx->pc = 0x17d814u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 2));
label_17d818:
    // 0x17d818: 0x24639400  addiu       $v1, $v1, -0x6C00
    ctx->pc = 0x17d818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939648));
label_17d81c:
    // 0x17d81c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17d820:
    // 0x17d820: 0xaf80877c  sw          $zero, -0x7884($gp)
    ctx->pc = 0x17d820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 0));
label_17d824:
    // 0x17d824: 0xaf808778  sw          $zero, -0x7888($gp)
    ctx->pc = 0x17d824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 0));
label_17d828:
    // 0x17d828: 0x244293c0  addiu       $v0, $v0, -0x6C40
    ctx->pc = 0x17d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939584));
label_17d82c:
    // 0x17d82c: 0xaf808770  sw          $zero, -0x7890($gp)
    ctx->pc = 0x17d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 0));
label_17d830:
    // 0x17d830: 0xaf808774  sw          $zero, -0x788C($gp)
    ctx->pc = 0x17d830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 0));
label_17d834:
    // 0x17d834: 0xaf808790  sw          $zero, -0x7870($gp)
    ctx->pc = 0x17d834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 0));
label_17d838:
    // 0x17d838: 0xaf80878c  sw          $zero, -0x7874($gp)
    ctx->pc = 0x17d838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 0));
label_17d83c:
    // 0x17d83c: 0xaf808788  sw          $zero, -0x7878($gp)
    ctx->pc = 0x17d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 0));
label_17d840:
    // 0x17d840: 0xaf808784  sw          $zero, -0x787C($gp)
    ctx->pc = 0x17d840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 0));
label_17d844:
    // 0x17d844: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17d844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17d848:
    // 0x17d848: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x17d848u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17d84c:
    // 0x17d84c: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x17d84cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17d850:
    // 0x17d850: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x17d850u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17d854:
    // 0x17d854: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17d854u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17d858:
    // 0x17d858: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x17d858u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_17d85c:
    // 0x17d85c: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x17d85cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_17d860:
    // 0x17d860: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x17d860u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_17d864:
    // 0x17d864: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d868:
    // 0x17d868: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x17d868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d86c:
    // 0x17d86c: 0x8c2491b0  lw          $a0, -0x6E50($at)
    ctx->pc = 0x17d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939056)));
label_17d870:
    // 0x17d870: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d874:
    // 0x17d874: 0x8c2591b8  lw          $a1, -0x6E48($at)
    ctx->pc = 0x17d874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939064)));
label_17d878:
    // 0x17d878: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d87c:
    // 0x17d87c: 0x8c2691b4  lw          $a2, -0x6E4C($at)
    ctx->pc = 0x17d87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939060)));
label_17d880:
    // 0x17d880: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d884:
    // 0x17d884: 0x8c2791bc  lw          $a3, -0x6E44($at)
    ctx->pc = 0x17d884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939068)));
label_17d888:
    // 0x17d888: 0xc05f6b8  jal         func_17DAE0
label_17d88c:
    if (ctx->pc == 0x17D88Cu) {
        ctx->pc = 0x17D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D888u;
        // 0x17d88c: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D890u;
        goto label_17d890;
    }
    ctx->pc = 0x17D888u;
    SET_GPR_U32(ctx, 31, 0x17D890u);
    ctx->pc = 0x17D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D888u;
    // 0x17d88c: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DAE0u;
    goto label_17dae0;
    ctx->pc = 0x17D890u;
label_17d890:
    // 0x17d890: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17d894:
    // 0x17d894: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17d894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_17d898:
    // 0x17d898: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_17d89c:
    if (ctx->pc == 0x17D89Cu) {
        ctx->pc = 0x17D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D898u;
        // 0x17d89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D8A0u;
        goto label_17d8a0;
    }
    ctx->pc = 0x17D898u;
    {
        const bool branch_taken_0x17d898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D898u;
        // 0x17d89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d898) {
            ctx->pc = 0x17D8B0u;
            goto label_17d8b0;
        }
    }
    ctx->pc = 0x17D8A0u;
label_17d8a0:
    // 0x17d8a0: 0x8f858774  lw          $a1, -0x788C($gp)
    ctx->pc = 0x17d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17d8a4:
    // 0x17d8a4: 0xc05e71c  jal         func_179C70
label_17d8a8:
    if (ctx->pc == 0x17D8A8u) {
        ctx->pc = 0x17D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D8A4u;
        // 0x17d8a8: 0x8f848770  lw          $a0, -0x7890($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D8ACu;
        goto label_17d8ac;
    }
    ctx->pc = 0x17D8A4u;
    SET_GPR_U32(ctx, 31, 0x17D8ACu);
    ctx->pc = 0x17D8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D8A4u;
    // 0x17d8a8: 0x8f848770  lw          $a0, -0x7890($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C70u, 0x17D8A4u, 0x17D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8ACu;
label_17d8ac:
    // 0x17d8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17d8b0:
    // 0x17d8b0: 0xc05ea54  jal         func_17A950
label_17d8b4:
    if (ctx->pc == 0x17D8B4u) {
        ctx->pc = 0x17D8B8u;
        goto label_17d8b8;
    }
    ctx->pc = 0x17D8B0u;
    SET_GPR_U32(ctx, 31, 0x17D8B8u);
    ctx->pc = 0x17A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A950u, 0x17D8B0u, 0x17D8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8B8u;
label_17d8b8:
    // 0x17d8b8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_17d8bc:
    // 0x17d8bc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17d8c0:
    // 0x17d8c0: 0xaf828780  sw          $v0, -0x7880($gp)
    ctx->pc = 0x17d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 2));
label_17d8c4:
    // 0x17d8c4: 0x24639400  addiu       $v1, $v1, -0x6C00
    ctx->pc = 0x17d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939648));
label_17d8c8:
    // 0x17d8c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17d8cc:
    // 0x17d8cc: 0xaf80877c  sw          $zero, -0x7884($gp)
    ctx->pc = 0x17d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 0));
label_17d8d0:
    // 0x17d8d0: 0xaf808778  sw          $zero, -0x7888($gp)
    ctx->pc = 0x17d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 0));
label_17d8d4:
    // 0x17d8d4: 0x244293c0  addiu       $v0, $v0, -0x6C40
    ctx->pc = 0x17d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939584));
label_17d8d8:
    // 0x17d8d8: 0xaf808770  sw          $zero, -0x7890($gp)
    ctx->pc = 0x17d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 0));
label_17d8dc:
    // 0x17d8dc: 0xaf808774  sw          $zero, -0x788C($gp)
    ctx->pc = 0x17d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 0));
label_17d8e0:
    // 0x17d8e0: 0xaf808790  sw          $zero, -0x7870($gp)
    ctx->pc = 0x17d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 0));
label_17d8e4:
    // 0x17d8e4: 0xaf80878c  sw          $zero, -0x7874($gp)
    ctx->pc = 0x17d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 0));
label_17d8e8:
    // 0x17d8e8: 0xaf808788  sw          $zero, -0x7878($gp)
    ctx->pc = 0x17d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 0));
label_17d8ec:
    // 0x17d8ec: 0xaf808784  sw          $zero, -0x787C($gp)
    ctx->pc = 0x17d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 0));
label_17d8f0:
    // 0x17d8f0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17d8f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17d8f4:
    // 0x17d8f4: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x17d8f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17d8f8:
    // 0x17d8f8: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x17d8f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17d8fc:
    // 0x17d8fc: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x17d8fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17d900:
    // 0x17d900: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17d900u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17d904:
    // 0x17d904: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x17d904u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_17d908:
    // 0x17d908: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x17d908u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_17d90c:
    // 0x17d90c: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x17d90cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_17d910:
    // 0x17d910: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d914:
    // 0x17d914: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17d914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d918:
    // 0x17d918: 0x8c2491b0  lw          $a0, -0x6E50($at)
    ctx->pc = 0x17d918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939056)));
label_17d91c:
    // 0x17d91c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d920:
    // 0x17d920: 0x8c2591b8  lw          $a1, -0x6E48($at)
    ctx->pc = 0x17d920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939064)));
label_17d924:
    // 0x17d924: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d928:
    // 0x17d928: 0x8c2691b4  lw          $a2, -0x6E4C($at)
    ctx->pc = 0x17d928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939060)));
label_17d92c:
    // 0x17d92c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17d92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_17d930:
    // 0x17d930: 0x8c2791bc  lw          $a3, -0x6E44($at)
    ctx->pc = 0x17d930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939068)));
label_17d934:
    // 0x17d934: 0xc05f6b8  jal         func_17DAE0
label_17d938:
    if (ctx->pc == 0x17D938u) {
        ctx->pc = 0x17D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D934u;
        // 0x17d938: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D93Cu;
        goto label_17d93c;
    }
    ctx->pc = 0x17D934u;
    SET_GPR_U32(ctx, 31, 0x17D93Cu);
    ctx->pc = 0x17D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D934u;
    // 0x17d938: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DAE0u;
    goto label_17dae0;
    ctx->pc = 0x17D93Cu;
label_17d93c:
    // 0x17d93c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17d93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d940:
    // 0x17d940: 0xc05fa10  jal         func_17E840
label_17d944:
    if (ctx->pc == 0x17D944u) {
        ctx->pc = 0x17D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D940u;
        // 0x17d944: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D948u;
        goto label_17d948;
    }
    ctx->pc = 0x17D940u;
    SET_GPR_U32(ctx, 31, 0x17D948u);
    ctx->pc = 0x17D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D940u;
    // 0x17d944: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E840u;
    { ctx->pc = 0x17e840; return; }
    ctx->pc = 0x17D948u;
label_17d948:
    // 0x17d948: 0x8f918454  lw          $s1, -0x7BAC($gp)
    ctx->pc = 0x17d948u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935636)));
label_17d94c:
    // 0x17d94c: 0x1220004d  beqz        $s1, . + 4 + (0x4D << 2)
label_17d950:
    if (ctx->pc == 0x17D950u) {
        ctx->pc = 0x17D954u;
        goto label_17d954;
    }
    ctx->pc = 0x17D94Cu;
    {
        const bool branch_taken_0x17d94c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d94c) {
            ctx->pc = 0x17DA84u;
            goto label_17da84;
        }
    }
    ctx->pc = 0x17D954u;
label_17d954:
    // 0x17d954: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x17d954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_17d958:
    // 0x17d958: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x17d958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_17d95c:
    // 0x17d95c: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x17d95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_17d960:
    // 0x17d960: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_17d964:
    if (ctx->pc == 0x17D964u) {
        ctx->pc = 0x17D968u;
        goto label_17d968;
    }
    ctx->pc = 0x17D960u;
    {
        const bool branch_taken_0x17d960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d960) {
            ctx->pc = 0x17DA64u;
            goto label_17da64;
        }
    }
    ctx->pc = 0x17D968u;
label_17d968:
    // 0x17d968: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17d968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17d96c:
    // 0x17d96c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x17d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_17d970:
    // 0x17d970: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x17d970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_17d974:
    // 0x17d974: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17d974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17d978:
    // 0x17d978: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x17d978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_17d97c:
    // 0x17d97c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17d980:
    // 0x17d980: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x17d980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_17d984:
    // 0x17d984: 0x8f84877c  lw          $a0, -0x7884($gp)
    ctx->pc = 0x17d984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17d988:
    // 0x17d988: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17d988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17d98c:
    // 0x17d98c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17d990:
    // 0x17d990: 0x8f84877c  lw          $a0, -0x7884($gp)
    ctx->pc = 0x17d990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17d994:
    // 0x17d994: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_17d998:
    if (ctx->pc == 0x17D998u) {
        ctx->pc = 0x17D99Cu;
        goto label_17d99c;
    }
    ctx->pc = 0x17D994u;
    {
        const bool branch_taken_0x17d994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d994) {
            ctx->pc = 0x17D9ACu;
            goto label_17d9ac;
        }
    }
    ctx->pc = 0x17D99Cu;
label_17d99c:
    // 0x17d99c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D70u, 0x17D9ECu, 0x17D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
            goto label_17d954;
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD00u, 0x17DA98u, 0x17DAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D70u, 0x17DAA8u, 0x17DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B910u, 0x17DB44u, 0x17DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
            { ctx->pc = 0x17dbe0; return; }
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
    { ctx->pc = 0x17dc10; return; }
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
        { ctx->pc = 0x17dbe0; return; }
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
    ctx->pc = 0x17dbe0u;
    return;
}
