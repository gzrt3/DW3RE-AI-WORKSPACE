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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part51(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26d3d8u: goto label_26d3d8;
        case 0x26d3dcu: goto label_26d3dc;
        case 0x26d3e0u: goto label_26d3e0;
        case 0x26d3e4u: goto label_26d3e4;
        case 0x26d3e8u: goto label_26d3e8;
        case 0x26d3ecu: goto label_26d3ec;
        case 0x26d3f0u: goto label_26d3f0;
        case 0x26d3f4u: goto label_26d3f4;
        case 0x26d3f8u: goto label_26d3f8;
        case 0x26d3fcu: goto label_26d3fc;
        case 0x26d400u: goto label_26d400;
        case 0x26d404u: goto label_26d404;
        case 0x26d408u: goto label_26d408;
        case 0x26d40cu: goto label_26d40c;
        case 0x26d410u: goto label_26d410;
        case 0x26d414u: goto label_26d414;
        case 0x26d418u: goto label_26d418;
        case 0x26d41cu: goto label_26d41c;
        case 0x26d420u: goto label_26d420;
        case 0x26d424u: goto label_26d424;
        case 0x26d428u: goto label_26d428;
        case 0x26d42cu: goto label_26d42c;
        case 0x26d430u: goto label_26d430;
        case 0x26d434u: goto label_26d434;
        case 0x26d438u: goto label_26d438;
        case 0x26d43cu: goto label_26d43c;
        case 0x26d440u: goto label_26d440;
        case 0x26d444u: goto label_26d444;
        case 0x26d448u: goto label_26d448;
        case 0x26d44cu: goto label_26d44c;
        case 0x26d450u: goto label_26d450;
        case 0x26d454u: goto label_26d454;
        case 0x26d458u: goto label_26d458;
        case 0x26d45cu: goto label_26d45c;
        case 0x26d460u: goto label_26d460;
        case 0x26d464u: goto label_26d464;
        case 0x26d468u: goto label_26d468;
        case 0x26d46cu: goto label_26d46c;
        case 0x26d470u: goto label_26d470;
        case 0x26d474u: goto label_26d474;
        case 0x26d478u: goto label_26d478;
        case 0x26d47cu: goto label_26d47c;
        case 0x26d480u: goto label_26d480;
        case 0x26d484u: goto label_26d484;
        case 0x26d488u: goto label_26d488;
        case 0x26d48cu: goto label_26d48c;
        case 0x26d490u: goto label_26d490;
        case 0x26d494u: goto label_26d494;
        case 0x26d498u: goto label_26d498;
        case 0x26d49cu: goto label_26d49c;
        case 0x26d4a0u: goto label_26d4a0;
        case 0x26d4a4u: goto label_26d4a4;
        case 0x26d4a8u: goto label_26d4a8;
        case 0x26d4acu: goto label_26d4ac;
        case 0x26d4b0u: goto label_26d4b0;
        case 0x26d4b4u: goto label_26d4b4;
        case 0x26d4b8u: goto label_26d4b8;
        case 0x26d4bcu: goto label_26d4bc;
        case 0x26d4c0u: goto label_26d4c0;
        case 0x26d4c4u: goto label_26d4c4;
        case 0x26d4c8u: goto label_26d4c8;
        case 0x26d4ccu: goto label_26d4cc;
        case 0x26d4d0u: goto label_26d4d0;
        case 0x26d4d4u: goto label_26d4d4;
        case 0x26d4d8u: goto label_26d4d8;
        case 0x26d4dcu: goto label_26d4dc;
        case 0x26d4e0u: goto label_26d4e0;
        case 0x26d4e4u: goto label_26d4e4;
        case 0x26d4e8u: goto label_26d4e8;
        case 0x26d4ecu: goto label_26d4ec;
        case 0x26d4f0u: goto label_26d4f0;
        case 0x26d4f4u: goto label_26d4f4;
        case 0x26d4f8u: goto label_26d4f8;
        case 0x26d4fcu: goto label_26d4fc;
        case 0x26d500u: goto label_26d500;
        case 0x26d504u: goto label_26d504;
        case 0x26d508u: goto label_26d508;
        case 0x26d50cu: goto label_26d50c;
        case 0x26d510u: goto label_26d510;
        case 0x26d514u: goto label_26d514;
        case 0x26d518u: goto label_26d518;
        case 0x26d51cu: goto label_26d51c;
        case 0x26d520u: goto label_26d520;
        case 0x26d524u: goto label_26d524;
        case 0x26d528u: goto label_26d528;
        case 0x26d52cu: goto label_26d52c;
        case 0x26d530u: goto label_26d530;
        case 0x26d534u: goto label_26d534;
        case 0x26d538u: goto label_26d538;
        case 0x26d53cu: goto label_26d53c;
        case 0x26d540u: goto label_26d540;
        case 0x26d544u: goto label_26d544;
        case 0x26d548u: goto label_26d548;
        case 0x26d54cu: goto label_26d54c;
        case 0x26d550u: goto label_26d550;
        case 0x26d554u: goto label_26d554;
        case 0x26d558u: goto label_26d558;
        case 0x26d55cu: goto label_26d55c;
        case 0x26d560u: goto label_26d560;
        case 0x26d564u: goto label_26d564;
        case 0x26d568u: goto label_26d568;
        case 0x26d56cu: goto label_26d56c;
        case 0x26d570u: goto label_26d570;
        case 0x26d574u: goto label_26d574;
        case 0x26d578u: goto label_26d578;
        case 0x26d57cu: goto label_26d57c;
        case 0x26d580u: goto label_26d580;
        case 0x26d584u: goto label_26d584;
        case 0x26d588u: goto label_26d588;
        case 0x26d58cu: goto label_26d58c;
        case 0x26d590u: goto label_26d590;
        case 0x26d594u: goto label_26d594;
        case 0x26d598u: goto label_26d598;
        case 0x26d59cu: goto label_26d59c;
        case 0x26d5a0u: goto label_26d5a0;
        case 0x26d5a4u: goto label_26d5a4;
        case 0x26d5a8u: goto label_26d5a8;
        case 0x26d5acu: goto label_26d5ac;
        case 0x26d5b0u: goto label_26d5b0;
        case 0x26d5b4u: goto label_26d5b4;
        case 0x26d5b8u: goto label_26d5b8;
        case 0x26d5bcu: goto label_26d5bc;
        case 0x26d5c0u: goto label_26d5c0;
        case 0x26d5c4u: goto label_26d5c4;
        case 0x26d5c8u: goto label_26d5c8;
        case 0x26d5ccu: goto label_26d5cc;
        case 0x26d5d0u: goto label_26d5d0;
        case 0x26d5d4u: goto label_26d5d4;
        case 0x26d5d8u: goto label_26d5d8;
        case 0x26d5dcu: goto label_26d5dc;
        case 0x26d5e0u: goto label_26d5e0;
        case 0x26d5e4u: goto label_26d5e4;
        case 0x26d5e8u: goto label_26d5e8;
        case 0x26d5ecu: goto label_26d5ec;
        case 0x26d5f0u: goto label_26d5f0;
        case 0x26d5f4u: goto label_26d5f4;
        case 0x26d5f8u: goto label_26d5f8;
        case 0x26d5fcu: goto label_26d5fc;
        case 0x26d600u: goto label_26d600;
        case 0x26d604u: goto label_26d604;
        case 0x26d608u: goto label_26d608;
        case 0x26d60cu: goto label_26d60c;
        case 0x26d610u: goto label_26d610;
        case 0x26d614u: goto label_26d614;
        case 0x26d618u: goto label_26d618;
        case 0x26d61cu: goto label_26d61c;
        case 0x26d620u: goto label_26d620;
        case 0x26d624u: goto label_26d624;
        case 0x26d628u: goto label_26d628;
        case 0x26d62cu: goto label_26d62c;
        case 0x26d630u: goto label_26d630;
        case 0x26d634u: goto label_26d634;
        case 0x26d638u: goto label_26d638;
        case 0x26d63cu: goto label_26d63c;
        case 0x26d640u: goto label_26d640;
        case 0x26d644u: goto label_26d644;
        case 0x26d648u: goto label_26d648;
        case 0x26d64cu: goto label_26d64c;
        case 0x26d650u: goto label_26d650;
        case 0x26d654u: goto label_26d654;
        case 0x26d658u: goto label_26d658;
        case 0x26d65cu: goto label_26d65c;
        case 0x26d660u: goto label_26d660;
        case 0x26d664u: goto label_26d664;
        case 0x26d668u: goto label_26d668;
        case 0x26d66cu: goto label_26d66c;
        case 0x26d670u: goto label_26d670;
        case 0x26d674u: goto label_26d674;
        case 0x26d678u: goto label_26d678;
        case 0x26d67cu: goto label_26d67c;
        case 0x26d680u: goto label_26d680;
        case 0x26d684u: goto label_26d684;
        case 0x26d688u: goto label_26d688;
        case 0x26d68cu: goto label_26d68c;
        case 0x26d690u: goto label_26d690;
        case 0x26d694u: goto label_26d694;
        case 0x26d698u: goto label_26d698;
        case 0x26d69cu: goto label_26d69c;
        case 0x26d6a0u: goto label_26d6a0;
        case 0x26d6a4u: goto label_26d6a4;
        case 0x26d6a8u: goto label_26d6a8;
        case 0x26d6acu: goto label_26d6ac;
        case 0x26d6b0u: goto label_26d6b0;
        case 0x26d6b4u: goto label_26d6b4;
        case 0x26d6b8u: goto label_26d6b8;
        case 0x26d6bcu: goto label_26d6bc;
        case 0x26d6c0u: goto label_26d6c0;
        case 0x26d6c4u: goto label_26d6c4;
        case 0x26d6c8u: goto label_26d6c8;
        case 0x26d6ccu: goto label_26d6cc;
        case 0x26d6d0u: goto label_26d6d0;
        case 0x26d6d4u: goto label_26d6d4;
        case 0x26d6d8u: goto label_26d6d8;
        case 0x26d6dcu: goto label_26d6dc;
        case 0x26d6e0u: goto label_26d6e0;
        case 0x26d6e4u: goto label_26d6e4;
        case 0x26d6e8u: goto label_26d6e8;
        case 0x26d6ecu: goto label_26d6ec;
        case 0x26d6f0u: goto label_26d6f0;
        case 0x26d6f4u: goto label_26d6f4;
        case 0x26d6f8u: goto label_26d6f8;
        case 0x26d6fcu: goto label_26d6fc;
        case 0x26d700u: goto label_26d700;
        case 0x26d704u: goto label_26d704;
        case 0x26d708u: goto label_26d708;
        case 0x26d70cu: goto label_26d70c;
        case 0x26d710u: goto label_26d710;
        case 0x26d714u: goto label_26d714;
        case 0x26d718u: goto label_26d718;
        case 0x26d71cu: goto label_26d71c;
        case 0x26d720u: goto label_26d720;
        case 0x26d724u: goto label_26d724;
        case 0x26d728u: goto label_26d728;
        case 0x26d72cu: goto label_26d72c;
        case 0x26d730u: goto label_26d730;
        case 0x26d734u: goto label_26d734;
        case 0x26d738u: goto label_26d738;
        case 0x26d73cu: goto label_26d73c;
        case 0x26d740u: goto label_26d740;
        case 0x26d744u: goto label_26d744;
        case 0x26d748u: goto label_26d748;
        case 0x26d74cu: goto label_26d74c;
        case 0x26d750u: goto label_26d750;
        case 0x26d754u: goto label_26d754;
        case 0x26d758u: goto label_26d758;
        case 0x26d75cu: goto label_26d75c;
        case 0x26d760u: goto label_26d760;
        case 0x26d764u: goto label_26d764;
        case 0x26d768u: goto label_26d768;
        case 0x26d76cu: goto label_26d76c;
        case 0x26d770u: goto label_26d770;
        case 0x26d774u: goto label_26d774;
        case 0x26d778u: goto label_26d778;
        case 0x26d77cu: goto label_26d77c;
        case 0x26d780u: goto label_26d780;
        case 0x26d784u: goto label_26d784;
        case 0x26d788u: goto label_26d788;
        case 0x26d78cu: goto label_26d78c;
        case 0x26d790u: goto label_26d790;
        case 0x26d794u: goto label_26d794;
        case 0x26d798u: goto label_26d798;
        case 0x26d79cu: goto label_26d79c;
        case 0x26d7a0u: goto label_26d7a0;
        case 0x26d7a4u: goto label_26d7a4;
        case 0x26d7a8u: goto label_26d7a8;
        case 0x26d7acu: goto label_26d7ac;
        case 0x26d7b0u: goto label_26d7b0;
        case 0x26d7b4u: goto label_26d7b4;
        case 0x26d7b8u: goto label_26d7b8;
        case 0x26d7bcu: goto label_26d7bc;
        case 0x26d7c0u: goto label_26d7c0;
        case 0x26d7c4u: goto label_26d7c4;
        case 0x26d7c8u: goto label_26d7c8;
        case 0x26d7ccu: goto label_26d7cc;
        case 0x26d7d0u: goto label_26d7d0;
        case 0x26d7d4u: goto label_26d7d4;
        case 0x26d7d8u: goto label_26d7d8;
        case 0x26d7dcu: goto label_26d7dc;
        case 0x26d7e0u: goto label_26d7e0;
        case 0x26d7e4u: goto label_26d7e4;
        case 0x26d7e8u: goto label_26d7e8;
        case 0x26d7ecu: goto label_26d7ec;
        case 0x26d7f0u: goto label_26d7f0;
        case 0x26d7f4u: goto label_26d7f4;
        case 0x26d7f8u: goto label_26d7f8;
        case 0x26d7fcu: goto label_26d7fc;
        case 0x26d800u: goto label_26d800;
        case 0x26d804u: goto label_26d804;
        case 0x26d808u: goto label_26d808;
        case 0x26d80cu: goto label_26d80c;
        case 0x26d810u: goto label_26d810;
        case 0x26d814u: goto label_26d814;
        case 0x26d818u: goto label_26d818;
        case 0x26d81cu: goto label_26d81c;
        case 0x26d820u: goto label_26d820;
        case 0x26d824u: goto label_26d824;
        case 0x26d828u: goto label_26d828;
        case 0x26d82cu: goto label_26d82c;
        case 0x26d830u: goto label_26d830;
        case 0x26d834u: goto label_26d834;
        case 0x26d838u: goto label_26d838;
        case 0x26d83cu: goto label_26d83c;
        case 0x26d840u: goto label_26d840;
        case 0x26d844u: goto label_26d844;
        case 0x26d848u: goto label_26d848;
        case 0x26d84cu: goto label_26d84c;
        case 0x26d850u: goto label_26d850;
        case 0x26d854u: goto label_26d854;
        case 0x26d858u: goto label_26d858;
        case 0x26d85cu: goto label_26d85c;
        case 0x26d860u: goto label_26d860;
        case 0x26d864u: goto label_26d864;
        case 0x26d868u: goto label_26d868;
        case 0x26d86cu: goto label_26d86c;
        case 0x26d870u: goto label_26d870;
        case 0x26d874u: goto label_26d874;
        case 0x26d878u: goto label_26d878;
        case 0x26d87cu: goto label_26d87c;
        case 0x26d880u: goto label_26d880;
        case 0x26d884u: goto label_26d884;
        case 0x26d888u: goto label_26d888;
        case 0x26d88cu: goto label_26d88c;
        case 0x26d890u: goto label_26d890;
        case 0x26d894u: goto label_26d894;
        case 0x26d898u: goto label_26d898;
        case 0x26d89cu: goto label_26d89c;
        case 0x26d8a0u: goto label_26d8a0;
        case 0x26d8a4u: goto label_26d8a4;
        case 0x26d8a8u: goto label_26d8a8;
        case 0x26d8acu: goto label_26d8ac;
        case 0x26d8b0u: goto label_26d8b0;
        case 0x26d8b4u: goto label_26d8b4;
        case 0x26d8b8u: goto label_26d8b8;
        case 0x26d8bcu: goto label_26d8bc;
        case 0x26d8c0u: goto label_26d8c0;
        case 0x26d8c4u: goto label_26d8c4;
        case 0x26d8c8u: goto label_26d8c8;
        case 0x26d8ccu: goto label_26d8cc;
        case 0x26d8d0u: goto label_26d8d0;
        case 0x26d8d4u: goto label_26d8d4;
        case 0x26d8d8u: goto label_26d8d8;
        case 0x26d8dcu: goto label_26d8dc;
        case 0x26d8e0u: goto label_26d8e0;
        case 0x26d8e4u: goto label_26d8e4;
        case 0x26d8e8u: goto label_26d8e8;
        case 0x26d8ecu: goto label_26d8ec;
        case 0x26d8f0u: goto label_26d8f0;
        case 0x26d8f4u: goto label_26d8f4;
        case 0x26d8f8u: goto label_26d8f8;
        case 0x26d8fcu: goto label_26d8fc;
        case 0x26d900u: goto label_26d900;
        case 0x26d904u: goto label_26d904;
        case 0x26d908u: goto label_26d908;
        case 0x26d90cu: goto label_26d90c;
        case 0x26d910u: goto label_26d910;
        case 0x26d914u: goto label_26d914;
        case 0x26d918u: goto label_26d918;
        case 0x26d91cu: goto label_26d91c;
        case 0x26d920u: goto label_26d920;
        case 0x26d924u: goto label_26d924;
        case 0x26d928u: goto label_26d928;
        case 0x26d92cu: goto label_26d92c;
        case 0x26d930u: goto label_26d930;
        case 0x26d934u: goto label_26d934;
        case 0x26d938u: goto label_26d938;
        case 0x26d93cu: goto label_26d93c;
        case 0x26d940u: goto label_26d940;
        case 0x26d944u: goto label_26d944;
        case 0x26d948u: goto label_26d948;
        case 0x26d94cu: goto label_26d94c;
        case 0x26d950u: goto label_26d950;
        case 0x26d954u: goto label_26d954;
        case 0x26d958u: goto label_26d958;
        case 0x26d95cu: goto label_26d95c;
        case 0x26d960u: goto label_26d960;
        case 0x26d964u: goto label_26d964;
        case 0x26d968u: goto label_26d968;
        case 0x26d96cu: goto label_26d96c;
        case 0x26d970u: goto label_26d970;
        case 0x26d974u: goto label_26d974;
        case 0x26d978u: goto label_26d978;
        case 0x26d97cu: goto label_26d97c;
        case 0x26d980u: goto label_26d980;
        case 0x26d984u: goto label_26d984;
        case 0x26d988u: goto label_26d988;
        case 0x26d98cu: goto label_26d98c;
        case 0x26d990u: goto label_26d990;
        case 0x26d994u: goto label_26d994;
        case 0x26d998u: goto label_26d998;
        case 0x26d99cu: goto label_26d99c;
        case 0x26d9a0u: goto label_26d9a0;
        case 0x26d9a4u: goto label_26d9a4;
        case 0x26d9a8u: goto label_26d9a8;
        case 0x26d9acu: goto label_26d9ac;
        case 0x26d9b0u: goto label_26d9b0;
        case 0x26d9b4u: goto label_26d9b4;
        case 0x26d9b8u: goto label_26d9b8;
        case 0x26d9bcu: goto label_26d9bc;
        case 0x26d9c0u: goto label_26d9c0;
        case 0x26d9c4u: goto label_26d9c4;
        case 0x26d9c8u: goto label_26d9c8;
        case 0x26d9ccu: goto label_26d9cc;
        case 0x26d9d0u: goto label_26d9d0;
        case 0x26d9d4u: goto label_26d9d4;
        case 0x26d9d8u: goto label_26d9d8;
        case 0x26d9dcu: goto label_26d9dc;
        case 0x26d9e0u: goto label_26d9e0;
        case 0x26d9e4u: goto label_26d9e4;
        case 0x26d9e8u: goto label_26d9e8;
        case 0x26d9ecu: goto label_26d9ec;
        case 0x26d9f0u: goto label_26d9f0;
        case 0x26d9f4u: goto label_26d9f4;
        case 0x26d9f8u: goto label_26d9f8;
        case 0x26d9fcu: goto label_26d9fc;
        case 0x26da00u: goto label_26da00;
        case 0x26da04u: goto label_26da04;
        case 0x26da08u: goto label_26da08;
        case 0x26da0cu: goto label_26da0c;
        case 0x26da10u: goto label_26da10;
        case 0x26da14u: goto label_26da14;
        case 0x26da18u: goto label_26da18;
        case 0x26da1cu: goto label_26da1c;
        case 0x26da20u: goto label_26da20;
        case 0x26da24u: goto label_26da24;
        case 0x26da28u: goto label_26da28;
        case 0x26da2cu: goto label_26da2c;
        case 0x26da30u: goto label_26da30;
        case 0x26da34u: goto label_26da34;
        case 0x26da38u: goto label_26da38;
        case 0x26da3cu: goto label_26da3c;
        case 0x26da40u: goto label_26da40;
        case 0x26da44u: goto label_26da44;
        case 0x26da48u: goto label_26da48;
        case 0x26da4cu: goto label_26da4c;
        case 0x26da50u: goto label_26da50;
        case 0x26da54u: goto label_26da54;
        case 0x26da58u: goto label_26da58;
        case 0x26da5cu: goto label_26da5c;
        case 0x26da60u: goto label_26da60;
        case 0x26da64u: goto label_26da64;
        case 0x26da68u: goto label_26da68;
        case 0x26da6cu: goto label_26da6c;
        case 0x26da70u: goto label_26da70;
        case 0x26da74u: goto label_26da74;
        case 0x26da78u: goto label_26da78;
        case 0x26da7cu: goto label_26da7c;
        case 0x26da80u: goto label_26da80;
        case 0x26da84u: goto label_26da84;
        case 0x26da88u: goto label_26da88;
        case 0x26da8cu: goto label_26da8c;
        case 0x26da90u: goto label_26da90;
        case 0x26da94u: goto label_26da94;
        case 0x26da98u: goto label_26da98;
        case 0x26da9cu: goto label_26da9c;
        case 0x26daa0u: goto label_26daa0;
        case 0x26daa4u: goto label_26daa4;
        case 0x26daa8u: goto label_26daa8;
        case 0x26daacu: goto label_26daac;
        case 0x26dab0u: goto label_26dab0;
        case 0x26dab4u: goto label_26dab4;
        case 0x26dab8u: goto label_26dab8;
        case 0x26dabcu: goto label_26dabc;
        case 0x26dac0u: goto label_26dac0;
        case 0x26dac4u: goto label_26dac4;
        case 0x26dac8u: goto label_26dac8;
        case 0x26daccu: goto label_26dacc;
        case 0x26dad0u: goto label_26dad0;
        case 0x26dad4u: goto label_26dad4;
        case 0x26dad8u: goto label_26dad8;
        case 0x26dadcu: goto label_26dadc;
        case 0x26dae0u: goto label_26dae0;
        case 0x26dae4u: goto label_26dae4;
        case 0x26dae8u: goto label_26dae8;
        case 0x26daecu: goto label_26daec;
        case 0x26daf0u: goto label_26daf0;
        case 0x26daf4u: goto label_26daf4;
        case 0x26daf8u: goto label_26daf8;
        case 0x26dafcu: goto label_26dafc;
        case 0x26db00u: goto label_26db00;
        case 0x26db04u: goto label_26db04;
        case 0x26db08u: goto label_26db08;
        case 0x26db0cu: goto label_26db0c;
        case 0x26db10u: goto label_26db10;
        case 0x26db14u: goto label_26db14;
        case 0x26db18u: goto label_26db18;
        case 0x26db1cu: goto label_26db1c;
        case 0x26db20u: goto label_26db20;
        case 0x26db24u: goto label_26db24;
        case 0x26db28u: goto label_26db28;
        case 0x26db2cu: goto label_26db2c;
        case 0x26db30u: goto label_26db30;
        case 0x26db34u: goto label_26db34;
        case 0x26db38u: goto label_26db38;
        case 0x26db3cu: goto label_26db3c;
        case 0x26db40u: goto label_26db40;
        case 0x26db44u: goto label_26db44;
        case 0x26db48u: goto label_26db48;
        case 0x26db4cu: goto label_26db4c;
        case 0x26db50u: goto label_26db50;
        case 0x26db54u: goto label_26db54;
        case 0x26db58u: goto label_26db58;
        case 0x26db5cu: goto label_26db5c;
        case 0x26db60u: goto label_26db60;
        case 0x26db64u: goto label_26db64;
        case 0x26db68u: goto label_26db68;
        case 0x26db6cu: goto label_26db6c;
        case 0x26db70u: goto label_26db70;
        case 0x26db74u: goto label_26db74;
        case 0x26db78u: goto label_26db78;
        case 0x26db7cu: goto label_26db7c;
        case 0x26db80u: goto label_26db80;
        case 0x26db84u: goto label_26db84;
        case 0x26db88u: goto label_26db88;
        case 0x26db8cu: goto label_26db8c;
        case 0x26db90u: goto label_26db90;
        case 0x26db94u: goto label_26db94;
        case 0x26db98u: goto label_26db98;
        case 0x26db9cu: goto label_26db9c;
        case 0x26dba0u: goto label_26dba0;
        case 0x26dba4u: goto label_26dba4;
        default: return;
    }

label_26d3d8:
    // 0x26d3d8: 0x0  nop
    ctx->pc = 0x26d3d8u;
    // NOP
label_26d3dc:
    // 0x26d3dc: 0x0  nop
    ctx->pc = 0x26d3dcu;
    // NOP
label_26d3e0:
    // 0x26d3e0: 0x32de  .word       0x000032DE                   # ddiv        $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d3e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26D3E0 raw=0x000032DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d3e4:
    // 0x26d3e4: 0x3fb0  tge         $zero, $zero, 254
    ctx->pc = 0x26d3e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d3e8:
    // 0x26d3e8: 0x0  nop
    ctx->pc = 0x26d3e8u;
    // NOP
label_26d3ec:
    // 0x26d3ec: 0x0  nop
    ctx->pc = 0x26d3ecu;
    // NOP
label_26d3f0:
    // 0x26d3f0: 0x32e6  .word       0x000032E6                   # xor         $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d3f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26d3f4:
    // 0x26d3f4: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x26d3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26d3f8:
    // 0x26d3f8: 0x0  nop
    ctx->pc = 0x26d3f8u;
    // NOP
label_26d3fc:
    // 0x26d3fc: 0x0  nop
    ctx->pc = 0x26d3fcu;
    // NOP
label_26d400:
    // 0x26d400: 0x32f0  tge         $zero, $zero, 203
    ctx->pc = 0x26d400u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d404:
    // 0x26d404: 0x4e70  tge         $zero, $zero, 313
    ctx->pc = 0x26d404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d408:
    // 0x26d408: 0x0  nop
    ctx->pc = 0x26d408u;
    // NOP
label_26d40c:
    // 0x26d40c: 0x0  nop
    ctx->pc = 0x26d40cu;
    // NOP
label_26d410:
    // 0x26d410: 0x32fa  dsrl        $a2, $zero, 11
    ctx->pc = 0x26d410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> 11);
label_26d414:
    // 0x26d414: 0x3910  .word       0x00003910                   # mfhi        $a3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d414u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26d418:
    // 0x26d418: 0x0  nop
    ctx->pc = 0x26d418u;
    // NOP
label_26d41c:
    // 0x26d41c: 0x0  nop
    ctx->pc = 0x26d41cu;
    // NOP
label_26d420:
    // 0x26d420: 0x3302  srl         $a2, $zero, 12
    ctx->pc = 0x26d420u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_26d424:
    // 0x26d424: 0x5160  .word       0x00005160                   # add         $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d428:
    // 0x26d428: 0x0  nop
    ctx->pc = 0x26d428u;
    // NOP
label_26d42c:
    // 0x26d42c: 0x0  nop
    ctx->pc = 0x26d42cu;
    // NOP
label_26d430:
    // 0x26d430: 0x330d  break       0, 204
    ctx->pc = 0x26d430u;
    runtime->handleBreak(rdram, ctx);
label_26d434:
    // 0x26d434: 0x69e0  .word       0x000069E0                   # add         $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26d438:
    // 0x26d438: 0x0  nop
    ctx->pc = 0x26d438u;
    // NOP
label_26d43c:
    // 0x26d43c: 0x0  nop
    ctx->pc = 0x26d43cu;
    // NOP
label_26d440:
    // 0x26d440: 0x331b  .word       0x0000331B                   # divu        $a2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d440u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26d444:
    // 0x26d444: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26d448:
    // 0x26d448: 0x0  nop
    ctx->pc = 0x26d448u;
    // NOP
label_26d44c:
    // 0x26d44c: 0x0  nop
    ctx->pc = 0x26d44cu;
    // NOP
label_26d450:
    // 0x26d450: 0x3324  .word       0x00003324                   # and         $a2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26d454:
    // 0x26d454: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d454u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26d458:
    // 0x26d458: 0x0  nop
    ctx->pc = 0x26d458u;
    // NOP
label_26d45c:
    // 0x26d45c: 0x0  nop
    ctx->pc = 0x26d45cu;
    // NOP
label_26d460:
    // 0x26d460: 0x332d  .word       0x0000332D                   # daddu       $a2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d464:
    // 0x26d464: 0x4f10  .word       0x00004F10                   # mfhi        $t1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d464u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26d468:
    // 0x26d468: 0x0  nop
    ctx->pc = 0x26d468u;
    // NOP
label_26d46c:
    // 0x26d46c: 0x0  nop
    ctx->pc = 0x26d46cu;
    // NOP
label_26d470:
    // 0x26d470: 0x3337  .word       0x00003337                   # INVALID     $zero, $zero, 0x3337 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26D470 raw=0x00003337"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d474:
    // 0x26d474: 0x3870  tge         $zero, $zero, 225
    ctx->pc = 0x26d474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d478:
    // 0x26d478: 0x0  nop
    ctx->pc = 0x26d478u;
    // NOP
label_26d47c:
    // 0x26d47c: 0x0  nop
    ctx->pc = 0x26d47cu;
    // NOP
label_26d480:
    // 0x26d480: 0x333f  dsra32      $a2, $zero, 12
    ctx->pc = 0x26d480u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (32 + 12));
label_26d484:
    // 0x26d484: 0x3d80  sll         $a3, $zero, 22
    ctx->pc = 0x26d484u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_26d488:
    // 0x26d488: 0x0  nop
    ctx->pc = 0x26d488u;
    // NOP
label_26d48c:
    // 0x26d48c: 0x0  nop
    ctx->pc = 0x26d48cu;
    // NOP
label_26d490:
    // 0x26d490: 0x3347  .word       0x00003347                   # srav        $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d490u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d494:
    // 0x26d494: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d494u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26d498:
    // 0x26d498: 0x0  nop
    ctx->pc = 0x26d498u;
    // NOP
label_26d49c:
    // 0x26d49c: 0x0  nop
    ctx->pc = 0x26d49cu;
    // NOP
label_26d4a0:
    // 0x26d4a0: 0x3354  .word       0x00003354                   # dsllv       $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26d4a4:
    // 0x26d4a4: 0x65b0  tge         $zero, $zero, 406
    ctx->pc = 0x26d4a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d4a8:
    // 0x26d4a8: 0x0  nop
    ctx->pc = 0x26d4a8u;
    // NOP
label_26d4ac:
    // 0x26d4ac: 0x0  nop
    ctx->pc = 0x26d4acu;
    // NOP
label_26d4b0:
    // 0x26d4b0: 0x3361  .word       0x00003361                   # addu        $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26d4b4:
    // 0x26d4b4: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4b4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26d4b8:
    // 0x26d4b8: 0x0  nop
    ctx->pc = 0x26d4b8u;
    // NOP
label_26d4bc:
    // 0x26d4bc: 0x0  nop
    ctx->pc = 0x26d4bcu;
    // NOP
label_26d4c0:
    // 0x26d4c0: 0x336a  .word       0x0000336A                   # slt         $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4c0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26d4c4:
    // 0x26d4c4: 0x4fa0  .word       0x00004FA0                   # add         $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26d4c8:
    // 0x26d4c8: 0x0  nop
    ctx->pc = 0x26d4c8u;
    // NOP
label_26d4cc:
    // 0x26d4cc: 0x0  nop
    ctx->pc = 0x26d4ccu;
    // NOP
label_26d4d0:
    // 0x26d4d0: 0x3374  teq         $zero, $zero, 205
    ctx->pc = 0x26d4d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d4d4:
    // 0x26d4d4: 0x3710  .word       0x00003710                   # mfhi        $a2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26d4d8:
    // 0x26d4d8: 0x0  nop
    ctx->pc = 0x26d4d8u;
    // NOP
label_26d4dc:
    // 0x26d4dc: 0x0  nop
    ctx->pc = 0x26d4dcu;
    // NOP
label_26d4e0:
    // 0x26d4e0: 0x337b  dsra        $a2, $zero, 13
    ctx->pc = 0x26d4e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 13);
label_26d4e4:
    // 0x26d4e4: 0x4850  .word       0x00004850                   # mfhi        $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4e4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26d4e8:
    // 0x26d4e8: 0x0  nop
    ctx->pc = 0x26d4e8u;
    // NOP
label_26d4ec:
    // 0x26d4ec: 0x0  nop
    ctx->pc = 0x26d4ecu;
    // NOP
label_26d4f0:
    // 0x26d4f0: 0x3385  .word       0x00003385                   # INVALID     $zero, $zero, 0x3385 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26D4F0 raw=0x00003385"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d4f4:
    // 0x26d4f4: 0x4c50  .word       0x00004C50                   # mfhi        $t1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d4f4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26d4f8:
    // 0x26d4f8: 0x0  nop
    ctx->pc = 0x26d4f8u;
    // NOP
label_26d4fc:
    // 0x26d4fc: 0x0  nop
    ctx->pc = 0x26d4fcu;
    // NOP
label_26d500:
    // 0x26d500: 0x338f  .word       0x0000338F                   # sync # 00003000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d500u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26d504:
    // 0x26d504: 0x5710  .word       0x00005710                   # mfhi        $t2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d504u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d508:
    // 0x26d508: 0x0  nop
    ctx->pc = 0x26d508u;
    // NOP
label_26d50c:
    // 0x26d50c: 0x0  nop
    ctx->pc = 0x26d50cu;
    // NOP
label_26d510:
    // 0x26d510: 0x339a  .word       0x0000339A                   # div         $a2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d510u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26d514:
    // 0x26d514: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x26d514u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26d518:
    // 0x26d518: 0x0  nop
    ctx->pc = 0x26d518u;
    // NOP
label_26d51c:
    // 0x26d51c: 0x0  nop
    ctx->pc = 0x26d51cu;
    // NOP
label_26d520:
    // 0x26d520: 0x33a6  .word       0x000033A6                   # xor         $a2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26d524:
    // 0x26d524: 0xd570  tge         $zero, $zero, 853
    ctx->pc = 0x26d524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d528:
    // 0x26d528: 0x0  nop
    ctx->pc = 0x26d528u;
    // NOP
label_26d52c:
    // 0x26d52c: 0x0  nop
    ctx->pc = 0x26d52cu;
    // NOP
label_26d530:
    // 0x26d530: 0x33c1  .word       0x000033C1                   # INVALID     $zero, $zero, 0x33C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26D530 raw=0x000033C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d534:
    // 0x26d534: 0x98a0  .word       0x000098A0                   # add         $s3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d534u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26d538:
    // 0x26d538: 0x0  nop
    ctx->pc = 0x26d538u;
    // NOP
label_26d53c:
    // 0x26d53c: 0x0  nop
    ctx->pc = 0x26d53cu;
    // NOP
label_26d540:
    // 0x26d540: 0x33d5  .word       0x000033D5                   # INVALID     $zero, $zero, 0x33D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26D540 raw=0x000033D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d544:
    // 0x26d544: 0xe1e0  .word       0x0000E1E0                   # add         $gp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_26d548:
    // 0x26d548: 0x0  nop
    ctx->pc = 0x26d548u;
    // NOP
label_26d54c:
    // 0x26d54c: 0x0  nop
    ctx->pc = 0x26d54cu;
    // NOP
label_26d550:
    // 0x26d550: 0x33f2  tlt         $zero, $zero, 207
    ctx->pc = 0x26d550u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d554:
    // 0x26d554: 0xb250  .word       0x0000B250                   # mfhi        $s6 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d554u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26d558:
    // 0x26d558: 0x0  nop
    ctx->pc = 0x26d558u;
    // NOP
label_26d55c:
    // 0x26d55c: 0x0  nop
    ctx->pc = 0x26d55cu;
    // NOP
label_26d560:
    // 0x26d560: 0x3409  .word       0x00003409                   # jalr        $a2, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_26d564:
    if (ctx->pc == 0x26D564u) {
        ctx->pc = 0x26D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D560u;
        // 0x26d564: 0xbff0  tge         $zero, $zero, 767 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D568u;
        goto label_26d568;
    }
    ctx->pc = 0x26D560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 6, 0x26D568u);
        ctx->pc = 0x26D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D560u;
        // 0x26d564: 0xbff0  tge         $zero, $zero, 767 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D560u, 0x26D568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D568u;
label_26d568:
    // 0x26d568: 0x0  nop
    ctx->pc = 0x26d568u;
    // NOP
label_26d56c:
    // 0x26d56c: 0x0  nop
    ctx->pc = 0x26d56cu;
    // NOP
label_26d570:
    // 0x26d570: 0x3421  .word       0x00003421                   # addu        $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26d574:
    // 0x26d574: 0x69a0  .word       0x000069A0                   # add         $t5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26d578:
    // 0x26d578: 0x0  nop
    ctx->pc = 0x26d578u;
    // NOP
label_26d57c:
    // 0x26d57c: 0x0  nop
    ctx->pc = 0x26d57cu;
    // NOP
label_26d580:
    // 0x26d580: 0x342f  .word       0x0000342F                   # dsubu       $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26d584:
    // 0x26d584: 0x4430  tge         $zero, $zero, 272
    ctx->pc = 0x26d584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d588:
    // 0x26d588: 0x0  nop
    ctx->pc = 0x26d588u;
    // NOP
label_26d58c:
    // 0x26d58c: 0x0  nop
    ctx->pc = 0x26d58cu;
    // NOP
label_26d590:
    // 0x26d590: 0x3438  dsll        $a2, $zero, 16
    ctx->pc = 0x26d590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 16);
label_26d594:
    // 0x26d594: 0x73a0  .word       0x000073A0                   # add         $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26d598:
    // 0x26d598: 0x0  nop
    ctx->pc = 0x26d598u;
    // NOP
label_26d59c:
    // 0x26d59c: 0x0  nop
    ctx->pc = 0x26d59cu;
    // NOP
label_26d5a0:
    // 0x26d5a0: 0x3447  .word       0x00003447                   # srav        $a2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d5a4:
    // 0x26d5a4: 0x71a0  .word       0x000071A0                   # add         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26d5a8:
    // 0x26d5a8: 0x0  nop
    ctx->pc = 0x26d5a8u;
    // NOP
label_26d5ac:
    // 0x26d5ac: 0x0  nop
    ctx->pc = 0x26d5acu;
    // NOP
label_26d5b0:
    // 0x26d5b0: 0x3456  .word       0x00003456                   # dsrlv       $a2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26d5b4:
    // 0x26d5b4: 0xac70  tge         $zero, $zero, 689
    ctx->pc = 0x26d5b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d5b8:
    // 0x26d5b8: 0x0  nop
    ctx->pc = 0x26d5b8u;
    // NOP
label_26d5bc:
    // 0x26d5bc: 0x0  nop
    ctx->pc = 0x26d5bcu;
    // NOP
label_26d5c0:
    // 0x26d5c0: 0x346c  .word       0x0000346C                   # dadd        $a2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_26d5c4:
    // 0x26d5c4: 0xa550  .word       0x0000A550                   # mfhi        $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5c4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26d5c8:
    // 0x26d5c8: 0x0  nop
    ctx->pc = 0x26d5c8u;
    // NOP
label_26d5cc:
    // 0x26d5cc: 0x0  nop
    ctx->pc = 0x26d5ccu;
    // NOP
label_26d5d0:
    // 0x26d5d0: 0x3481  .word       0x00003481                   # INVALID     $zero, $zero, 0x3481 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26D5D0 raw=0x00003481"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d5d4:
    // 0x26d5d4: 0x84c0  sll         $s0, $zero, 19
    ctx->pc = 0x26d5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26d5d8:
    // 0x26d5d8: 0x0  nop
    ctx->pc = 0x26d5d8u;
    // NOP
label_26d5dc:
    // 0x26d5dc: 0x0  nop
    ctx->pc = 0x26d5dcu;
    // NOP
label_26d5e0:
    // 0x26d5e0: 0x3492  .word       0x00003492                   # mflo        $a2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5e0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_26d5e4:
    // 0x26d5e4: 0x5490  .word       0x00005490                   # mfhi        $t2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d5e8:
    // 0x26d5e8: 0x0  nop
    ctx->pc = 0x26d5e8u;
    // NOP
label_26d5ec:
    // 0x26d5ec: 0x0  nop
    ctx->pc = 0x26d5ecu;
    // NOP
label_26d5f0:
    // 0x26d5f0: 0x349d  .word       0x0000349D                   # dmultu      $zero, $zero # 00003480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26D5F0 raw=0x0000349D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d5f4:
    // 0x26d5f4: 0x69d0  .word       0x000069D0                   # mfhi        $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d5f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26d5f8:
    // 0x26d5f8: 0x0  nop
    ctx->pc = 0x26d5f8u;
    // NOP
label_26d5fc:
    // 0x26d5fc: 0x0  nop
    ctx->pc = 0x26d5fcu;
    // NOP
label_26d600:
    // 0x26d600: 0x34ab  .word       0x000034AB                   # sltu        $a2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d600u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26d604:
    // 0x26d604: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26d608:
    // 0x26d608: 0x0  nop
    ctx->pc = 0x26d608u;
    // NOP
label_26d60c:
    // 0x26d60c: 0x0  nop
    ctx->pc = 0x26d60cu;
    // NOP
label_26d610:
    // 0x26d610: 0x34ba  dsrl        $a2, $zero, 18
    ctx->pc = 0x26d610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> 18);
label_26d614:
    // 0x26d614: 0x8300  sll         $s0, $zero, 12
    ctx->pc = 0x26d614u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26d618:
    // 0x26d618: 0x0  nop
    ctx->pc = 0x26d618u;
    // NOP
label_26d61c:
    // 0x26d61c: 0x0  nop
    ctx->pc = 0x26d61cu;
    // NOP
label_26d620:
    // 0x26d620: 0x34cb  .word       0x000034CB                   # movn        $a2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d620u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d624:
    // 0x26d624: 0xa140  sll         $s4, $zero, 5
    ctx->pc = 0x26d624u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_26d628:
    // 0x26d628: 0x0  nop
    ctx->pc = 0x26d628u;
    // NOP
label_26d62c:
    // 0x26d62c: 0x0  nop
    ctx->pc = 0x26d62cu;
    // NOP
label_26d630:
    // 0x26d630: 0x34e0  .word       0x000034E0                   # add         $a2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d630u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26d634:
    // 0x26d634: 0x91e0  .word       0x000091E0                   # add         $s2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_26d638:
    // 0x26d638: 0x0  nop
    ctx->pc = 0x26d638u;
    // NOP
label_26d63c:
    // 0x26d63c: 0x0  nop
    ctx->pc = 0x26d63cu;
    // NOP
label_26d640:
    // 0x26d640: 0x34f3  tltu        $zero, $zero, 211
    ctx->pc = 0x26d640u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d644:
    // 0x26d644: 0x64c0  sll         $t4, $zero, 19
    ctx->pc = 0x26d644u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26d648:
    // 0x26d648: 0x0  nop
    ctx->pc = 0x26d648u;
    // NOP
label_26d64c:
    // 0x26d64c: 0x0  nop
    ctx->pc = 0x26d64cu;
    // NOP
label_26d650:
    // 0x26d650: 0x3500  sll         $a2, $zero, 20
    ctx->pc = 0x26d650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26d654:
    // 0x26d654: 0x9040  sll         $s2, $zero, 1
    ctx->pc = 0x26d654u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26d658:
    // 0x26d658: 0x0  nop
    ctx->pc = 0x26d658u;
    // NOP
label_26d65c:
    // 0x26d65c: 0x0  nop
    ctx->pc = 0x26d65cu;
    // NOP
label_26d660:
    // 0x26d660: 0x3513  .word       0x00003513                   # mtlo        $zero # 00003500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d660u;
    ctx->lo = GPR_U64(ctx, 0);
label_26d664:
    // 0x26d664: 0xa9b0  tge         $zero, $zero, 678
    ctx->pc = 0x26d664u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d668:
    // 0x26d668: 0x0  nop
    ctx->pc = 0x26d668u;
    // NOP
label_26d66c:
    // 0x26d66c: 0x0  nop
    ctx->pc = 0x26d66cu;
    // NOP
label_26d670:
    // 0x26d670: 0x3529  .word       0x00003529                   # mtsa        $zero # 00003500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d670u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26d674:
    // 0x26d674: 0xb1d0  .word       0x0000B1D0                   # mfhi        $s6 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d674u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26d678:
    // 0x26d678: 0x0  nop
    ctx->pc = 0x26d678u;
    // NOP
label_26d67c:
    // 0x26d67c: 0x0  nop
    ctx->pc = 0x26d67cu;
    // NOP
label_26d680:
    // 0x26d680: 0x3540  sll         $a2, $zero, 21
    ctx->pc = 0x26d680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_26d684:
    // 0x26d684: 0x9ac0  sll         $s3, $zero, 11
    ctx->pc = 0x26d684u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26d688:
    // 0x26d688: 0x0  nop
    ctx->pc = 0x26d688u;
    // NOP
label_26d68c:
    // 0x26d68c: 0x0  nop
    ctx->pc = 0x26d68cu;
    // NOP
label_26d690:
    // 0x26d690: 0x3554  .word       0x00003554                   # dsllv       $a2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26d694:
    // 0x26d694: 0xd080  sll         $k0, $zero, 2
    ctx->pc = 0x26d694u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26d698:
    // 0x26d698: 0x0  nop
    ctx->pc = 0x26d698u;
    // NOP
label_26d69c:
    // 0x26d69c: 0x0  nop
    ctx->pc = 0x26d69cu;
    // NOP
label_26d6a0:
    // 0x26d6a0: 0x356f  .word       0x0000356F                   # dsubu       $a2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26d6a4:
    // 0x26d6a4: 0xa0f0  tge         $zero, $zero, 643
    ctx->pc = 0x26d6a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d6a8:
    // 0x26d6a8: 0x0  nop
    ctx->pc = 0x26d6a8u;
    // NOP
label_26d6ac:
    // 0x26d6ac: 0x0  nop
    ctx->pc = 0x26d6acu;
    // NOP
label_26d6b0:
    // 0x26d6b0: 0x3584  .word       0x00003584                   # sllv        $a2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d6b4:
    // 0x26d6b4: 0x4a70  tge         $zero, $zero, 297
    ctx->pc = 0x26d6b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d6b8:
    // 0x26d6b8: 0x0  nop
    ctx->pc = 0x26d6b8u;
    // NOP
label_26d6bc:
    // 0x26d6bc: 0x0  nop
    ctx->pc = 0x26d6bcu;
    // NOP
label_26d6c0:
    // 0x26d6c0: 0x358e  .word       0x0000358E                   # INVALID     $zero, $zero, 0x358E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26D6C0 raw=0x0000358E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d6c4:
    // 0x26d6c4: 0xd510  .word       0x0000D510                   # mfhi        $k0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6c4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_26d6c8:
    // 0x26d6c8: 0x0  nop
    ctx->pc = 0x26d6c8u;
    // NOP
label_26d6cc:
    // 0x26d6cc: 0x0  nop
    ctx->pc = 0x26d6ccu;
    // NOP
label_26d6d0:
    // 0x26d6d0: 0x35a9  .word       0x000035A9                   # mtsa        $zero # 00003580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d6d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26d6d4:
    // 0x26d6d4: 0x6d00  sll         $t5, $zero, 20
    ctx->pc = 0x26d6d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26d6d8:
    // 0x26d6d8: 0x0  nop
    ctx->pc = 0x26d6d8u;
    // NOP
label_26d6dc:
    // 0x26d6dc: 0x0  nop
    ctx->pc = 0x26d6dcu;
    // NOP
label_26d6e0:
    // 0x26d6e0: 0x35b7  .word       0x000035B7                   # INVALID     $zero, $zero, 0x35B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26D6E0 raw=0x000035B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d6e4:
    // 0x26d6e4: 0x6c70  tge         $zero, $zero, 433
    ctx->pc = 0x26d6e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d6e8:
    // 0x26d6e8: 0x0  nop
    ctx->pc = 0x26d6e8u;
    // NOP
label_26d6ec:
    // 0x26d6ec: 0x0  nop
    ctx->pc = 0x26d6ecu;
    // NOP
label_26d6f0:
    // 0x26d6f0: 0x35c5  .word       0x000035C5                   # INVALID     $zero, $zero, 0x35C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d6f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26D6F0 raw=0x000035C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d6f4:
    // 0x26d6f4: 0x4b70  tge         $zero, $zero, 301
    ctx->pc = 0x26d6f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d6f8:
    // 0x26d6f8: 0x0  nop
    ctx->pc = 0x26d6f8u;
    // NOP
label_26d6fc:
    // 0x26d6fc: 0x0  nop
    ctx->pc = 0x26d6fcu;
    // NOP
label_26d700:
    // 0x26d700: 0x35cf  .word       0x000035CF                   # sync.p # 00003000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d700u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26d704:
    // 0x26d704: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d704u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26d708:
    // 0x26d708: 0x0  nop
    ctx->pc = 0x26d708u;
    // NOP
label_26d70c:
    // 0x26d70c: 0x0  nop
    ctx->pc = 0x26d70cu;
    // NOP
label_26d710:
    // 0x26d710: 0x35dd  .word       0x000035DD                   # dmultu      $zero, $zero # 000035C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26D710 raw=0x000035DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d714:
    // 0x26d714: 0x9890  .word       0x00009890                   # mfhi        $s3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d714u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26d718:
    // 0x26d718: 0x0  nop
    ctx->pc = 0x26d718u;
    // NOP
label_26d71c:
    // 0x26d71c: 0x0  nop
    ctx->pc = 0x26d71cu;
    // NOP
label_26d720:
    // 0x26d720: 0x35f1  tgeu        $zero, $zero, 215
    ctx->pc = 0x26d720u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d724:
    // 0x26d724: 0x51f0  tge         $zero, $zero, 327
    ctx->pc = 0x26d724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d728:
    // 0x26d728: 0x0  nop
    ctx->pc = 0x26d728u;
    // NOP
label_26d72c:
    // 0x26d72c: 0x0  nop
    ctx->pc = 0x26d72cu;
    // NOP
label_26d730:
    // 0x26d730: 0x35fc  dsll32      $a2, $zero, 23
    ctx->pc = 0x26d730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 23));
label_26d734:
    // 0x26d734: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x26d734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d738:
    // 0x26d738: 0x0  nop
    ctx->pc = 0x26d738u;
    // NOP
label_26d73c:
    // 0x26d73c: 0x0  nop
    ctx->pc = 0x26d73cu;
    // NOP
label_26d740:
    // 0x26d740: 0x360b  .word       0x0000360B                   # movn        $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d740u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d744:
    // 0x26d744: 0xb020  add         $s6, $zero, $zero
    ctx->pc = 0x26d744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26d748:
    // 0x26d748: 0x0  nop
    ctx->pc = 0x26d748u;
    // NOP
label_26d74c:
    // 0x26d74c: 0x0  nop
    ctx->pc = 0x26d74cu;
    // NOP
label_26d750:
    // 0x26d750: 0x3622  .word       0x00003622                   # neg         $a2, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d750u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_26d754:
    // 0x26d754: 0x60c0  sll         $t4, $zero, 3
    ctx->pc = 0x26d754u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26d758:
    // 0x26d758: 0x0  nop
    ctx->pc = 0x26d758u;
    // NOP
label_26d75c:
    // 0x26d75c: 0x0  nop
    ctx->pc = 0x26d75cu;
    // NOP
label_26d760:
    // 0x26d760: 0x362f  .word       0x0000362F                   # dsubu       $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26d764:
    // 0x26d764: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x26d764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d768:
    // 0x26d768: 0x0  nop
    ctx->pc = 0x26d768u;
    // NOP
label_26d76c:
    // 0x26d76c: 0x0  nop
    ctx->pc = 0x26d76cu;
    // NOP
label_26d770:
    // 0x26d770: 0x3639  .word       0x00003639                   # INVALID     $zero, $zero, 0x3639 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26D770 raw=0x00003639"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d774:
    // 0x26d774: 0x83a0  .word       0x000083A0                   # add         $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26d778:
    // 0x26d778: 0x0  nop
    ctx->pc = 0x26d778u;
    // NOP
label_26d77c:
    // 0x26d77c: 0x0  nop
    ctx->pc = 0x26d77cu;
    // NOP
label_26d780:
    // 0x26d780: 0x364a  .word       0x0000364A                   # movz        $a2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d780u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d784:
    // 0x26d784: 0x5f30  tge         $zero, $zero, 380
    ctx->pc = 0x26d784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d788:
    // 0x26d788: 0x0  nop
    ctx->pc = 0x26d788u;
    // NOP
label_26d78c:
    // 0x26d78c: 0x0  nop
    ctx->pc = 0x26d78cu;
    // NOP
label_26d790:
    // 0x26d790: 0x3656  .word       0x00003656                   # dsrlv       $a2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26d794:
    // 0x26d794: 0x7b50  .word       0x00007B50                   # mfhi        $t7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d794u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26d798:
    // 0x26d798: 0x0  nop
    ctx->pc = 0x26d798u;
    // NOP
label_26d79c:
    // 0x26d79c: 0x0  nop
    ctx->pc = 0x26d79cu;
    // NOP
label_26d7a0:
    // 0x26d7a0: 0x3666  .word       0x00003666                   # xor         $a2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d7a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26d7a4:
    // 0x26d7a4: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x26d7a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d7a8:
    // 0x26d7a8: 0x0  nop
    ctx->pc = 0x26d7a8u;
    // NOP
label_26d7ac:
    // 0x26d7ac: 0x0  nop
    ctx->pc = 0x26d7acu;
    // NOP
label_26d7b0:
    // 0x26d7b0: 0x3672  tlt         $zero, $zero, 217
    ctx->pc = 0x26d7b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d7b4:
    // 0x26d7b4: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d7b4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26d7b8:
    // 0x26d7b8: 0x0  nop
    ctx->pc = 0x26d7b8u;
    // NOP
label_26d7bc:
    // 0x26d7bc: 0x0  nop
    ctx->pc = 0x26d7bcu;
    // NOP
label_26d7c0:
    // 0x26d7c0: 0x3680  sll         $a2, $zero, 26
    ctx->pc = 0x26d7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26d7c4:
    // 0x26d7c4: 0x5320  .word       0x00005320                   # add         $t2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d7c8:
    // 0x26d7c8: 0x0  nop
    ctx->pc = 0x26d7c8u;
    // NOP
label_26d7cc:
    // 0x26d7cc: 0x0  nop
    ctx->pc = 0x26d7ccu;
    // NOP
label_26d7d0:
    // 0x26d7d0: 0x368b  .word       0x0000368B                   # movn        $a2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d7d0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d7d4:
    // 0x26d7d4: 0x7810  mfhi        $t7
    ctx->pc = 0x26d7d4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26d7d8:
    // 0x26d7d8: 0x0  nop
    ctx->pc = 0x26d7d8u;
    // NOP
label_26d7dc:
    // 0x26d7dc: 0x0  nop
    ctx->pc = 0x26d7dcu;
    // NOP
label_26d7e0:
    // 0x26d7e0: 0x369b  .word       0x0000369B                   # divu        $a2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d7e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26d7e4:
    // 0x26d7e4: 0x6230  tge         $zero, $zero, 392
    ctx->pc = 0x26d7e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d7e8:
    // 0x26d7e8: 0x0  nop
    ctx->pc = 0x26d7e8u;
    // NOP
label_26d7ec:
    // 0x26d7ec: 0x0  nop
    ctx->pc = 0x26d7ecu;
    // NOP
label_26d7f0:
    // 0x26d7f0: 0x36a8  .word       0x000036A8                   # mfsa        $a2 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d7f0u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_26d7f4:
    // 0x26d7f4: 0x6230  tge         $zero, $zero, 392
    ctx->pc = 0x26d7f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d7f8:
    // 0x26d7f8: 0x0  nop
    ctx->pc = 0x26d7f8u;
    // NOP
label_26d7fc:
    // 0x26d7fc: 0x0  nop
    ctx->pc = 0x26d7fcu;
    // NOP
label_26d800:
    // 0x26d800: 0x36b5  .word       0x000036B5                   # INVALID     $zero, $zero, 0x36B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26D800 raw=0x000036B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d804:
    // 0x26d804: 0x66d0  .word       0x000066D0                   # mfhi        $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d804u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26d808:
    // 0x26d808: 0x0  nop
    ctx->pc = 0x26d808u;
    // NOP
label_26d80c:
    // 0x26d80c: 0x0  nop
    ctx->pc = 0x26d80cu;
    // NOP
label_26d810:
    // 0x26d810: 0x36c2  srl         $a2, $zero, 27
    ctx->pc = 0x26d810u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_26d814:
    // 0x26d814: 0x3da0  .word       0x00003DA0                   # add         $a3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26d818:
    // 0x26d818: 0x0  nop
    ctx->pc = 0x26d818u;
    // NOP
label_26d81c:
    // 0x26d81c: 0x0  nop
    ctx->pc = 0x26d81cu;
    // NOP
label_26d820:
    // 0x26d820: 0x36ca  .word       0x000036CA                   # movz        $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d820u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_26d824:
    // 0x26d824: 0x3a60  .word       0x00003A60                   # add         $a3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26d828:
    // 0x26d828: 0x0  nop
    ctx->pc = 0x26d828u;
    // NOP
label_26d82c:
    // 0x26d82c: 0x0  nop
    ctx->pc = 0x26d82cu;
    // NOP
label_26d830:
    // 0x26d830: 0x36d2  .word       0x000036D2                   # mflo        $a2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d830u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_26d834:
    // 0x26d834: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x26d834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d838:
    // 0x26d838: 0x0  nop
    ctx->pc = 0x26d838u;
    // NOP
label_26d83c:
    // 0x26d83c: 0x0  nop
    ctx->pc = 0x26d83cu;
    // NOP
label_26d840:
    // 0x26d840: 0x36dd  .word       0x000036DD                   # dmultu      $zero, $zero # 000036C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d840u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26D840 raw=0x000036DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d844:
    // 0x26d844: 0x8b50  .word       0x00008B50                   # mfhi        $s1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d844u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26d848:
    // 0x26d848: 0x0  nop
    ctx->pc = 0x26d848u;
    // NOP
label_26d84c:
    // 0x26d84c: 0x0  nop
    ctx->pc = 0x26d84cu;
    // NOP
label_26d850:
    // 0x26d850: 0x36ef  .word       0x000036EF                   # dsubu       $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26d854:
    // 0x26d854: 0x66a0  .word       0x000066A0                   # add         $t4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26d858:
    // 0x26d858: 0x0  nop
    ctx->pc = 0x26d858u;
    // NOP
label_26d85c:
    // 0x26d85c: 0x0  nop
    ctx->pc = 0x26d85cu;
    // NOP
label_26d860:
    // 0x26d860: 0x36fc  dsll32      $a2, $zero, 27
    ctx->pc = 0x26d860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 27));
label_26d864:
    // 0x26d864: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26d868:
    // 0x26d868: 0x0  nop
    ctx->pc = 0x26d868u;
    // NOP
label_26d86c:
    // 0x26d86c: 0x0  nop
    ctx->pc = 0x26d86cu;
    // NOP
label_26d870:
    // 0x26d870: 0x3706  .word       0x00003706                   # srlv        $a2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d870u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26d874:
    // 0x26d874: 0x5f90  .word       0x00005F90                   # mfhi        $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d874u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26d878:
    // 0x26d878: 0x0  nop
    ctx->pc = 0x26d878u;
    // NOP
label_26d87c:
    // 0x26d87c: 0x0  nop
    ctx->pc = 0x26d87cu;
    // NOP
label_26d880:
    // 0x26d880: 0x3712  .word       0x00003712                   # mflo        $a2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d880u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_26d884:
    // 0x26d884: 0x55c0  sll         $t2, $zero, 23
    ctx->pc = 0x26d884u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26d888:
    // 0x26d888: 0x0  nop
    ctx->pc = 0x26d888u;
    // NOP
label_26d88c:
    // 0x26d88c: 0x0  nop
    ctx->pc = 0x26d88cu;
    // NOP
label_26d890:
    // 0x26d890: 0x371d  .word       0x0000371D                   # dmultu      $zero, $zero # 00003700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26D890 raw=0x0000371D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d894:
    // 0x26d894: 0x5140  sll         $t2, $zero, 5
    ctx->pc = 0x26d894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_26d898:
    // 0x26d898: 0x0  nop
    ctx->pc = 0x26d898u;
    // NOP
label_26d89c:
    // 0x26d89c: 0x0  nop
    ctx->pc = 0x26d89cu;
    // NOP
label_26d8a0:
    // 0x26d8a0: 0x3728  .word       0x00003728                   # mfsa        $a2 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26d8a0u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_26d8a4:
    // 0x26d8a4: 0x5760  .word       0x00005760                   # add         $t2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d8a8:
    // 0x26d8a8: 0x0  nop
    ctx->pc = 0x26d8a8u;
    // NOP
label_26d8ac:
    // 0x26d8ac: 0x0  nop
    ctx->pc = 0x26d8acu;
    // NOP
label_26d8b0:
    // 0x26d8b0: 0x3733  tltu        $zero, $zero, 220
    ctx->pc = 0x26d8b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d8b4:
    // 0x26d8b4: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x26d8b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26d8b8:
    // 0x26d8b8: 0x0  nop
    ctx->pc = 0x26d8b8u;
    // NOP
label_26d8bc:
    // 0x26d8bc: 0x0  nop
    ctx->pc = 0x26d8bcu;
    // NOP
label_26d8c0:
    // 0x26d8c0: 0x3741  .word       0x00003741                   # INVALID     $zero, $zero, 0x3741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26D8C0 raw=0x00003741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d8c4:
    // 0x26d8c4: 0x55e0  .word       0x000055E0                   # add         $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d8c8:
    // 0x26d8c8: 0x0  nop
    ctx->pc = 0x26d8c8u;
    // NOP
label_26d8cc:
    // 0x26d8cc: 0x0  nop
    ctx->pc = 0x26d8ccu;
    // NOP
label_26d8d0:
    // 0x26d8d0: 0x374c  syscall     221
    ctx->pc = 0x26d8d0u;
    ctx->pc = 0x26D8D4u;
runtime->handleSyscall(rdram, ctx, 0xDDu);
label_26d8d4:
    // 0x26d8d4: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26d8d8:
    // 0x26d8d8: 0x0  nop
    ctx->pc = 0x26d8d8u;
    // NOP
label_26d8dc:
    // 0x26d8dc: 0x0  nop
    ctx->pc = 0x26d8dcu;
    // NOP
label_26d8e0:
    // 0x26d8e0: 0x3755  .word       0x00003755                   # INVALID     $zero, $zero, 0x3755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26D8E0 raw=0x00003755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d8e4:
    // 0x26d8e4: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26d8e8:
    // 0x26d8e8: 0x0  nop
    ctx->pc = 0x26d8e8u;
    // NOP
label_26d8ec:
    // 0x26d8ec: 0x0  nop
    ctx->pc = 0x26d8ecu;
    // NOP
label_26d8f0:
    // 0x26d8f0: 0x3762  .word       0x00003762                   # neg         $a2, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d8f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_26d8f4:
    // 0x26d8f4: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x26d8f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d8f8:
    // 0x26d8f8: 0x0  nop
    ctx->pc = 0x26d8f8u;
    // NOP
label_26d8fc:
    // 0x26d8fc: 0x0  nop
    ctx->pc = 0x26d8fcu;
    // NOP
label_26d900:
    // 0x26d900: 0x3770  tge         $zero, $zero, 221
    ctx->pc = 0x26d900u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d904:
    // 0x26d904: 0x3b00  sll         $a3, $zero, 12
    ctx->pc = 0x26d904u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26d908:
    // 0x26d908: 0x0  nop
    ctx->pc = 0x26d908u;
    // NOP
label_26d90c:
    // 0x26d90c: 0x0  nop
    ctx->pc = 0x26d90cu;
    // NOP
label_26d910:
    // 0x26d910: 0x3778  dsll        $a2, $zero, 29
    ctx->pc = 0x26d910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 29);
label_26d914:
    // 0x26d914: 0x51e0  .word       0x000051E0                   # add         $t2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d918:
    // 0x26d918: 0x0  nop
    ctx->pc = 0x26d918u;
    // NOP
label_26d91c:
    // 0x26d91c: 0x0  nop
    ctx->pc = 0x26d91cu;
    // NOP
label_26d920:
    // 0x26d920: 0x3783  sra         $a2, $zero, 30
    ctx->pc = 0x26d920u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), 30));
label_26d924:
    // 0x26d924: 0x6400  sll         $t4, $zero, 16
    ctx->pc = 0x26d924u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26d928:
    // 0x26d928: 0x0  nop
    ctx->pc = 0x26d928u;
    // NOP
label_26d92c:
    // 0x26d92c: 0x0  nop
    ctx->pc = 0x26d92cu;
    // NOP
label_26d930:
    // 0x26d930: 0x3790  .word       0x00003790                   # mfhi        $a2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d930u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26d934:
    // 0x26d934: 0x58d0  .word       0x000058D0                   # mfhi        $t3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d934u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26d938:
    // 0x26d938: 0x0  nop
    ctx->pc = 0x26d938u;
    // NOP
label_26d93c:
    // 0x26d93c: 0x0  nop
    ctx->pc = 0x26d93cu;
    // NOP
label_26d940:
    // 0x26d940: 0x379c  .word       0x0000379C                   # dmult       $zero, $zero # 00003780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26D940 raw=0x0000379C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d944:
    // 0x26d944: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26d948:
    // 0x26d948: 0x0  nop
    ctx->pc = 0x26d948u;
    // NOP
label_26d94c:
    // 0x26d94c: 0x0  nop
    ctx->pc = 0x26d94cu;
    // NOP
label_26d950:
    // 0x26d950: 0x37a7  .word       0x000037A7                   # not         $a2, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d950u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26d954:
    // 0x26d954: 0xcde0  .word       0x0000CDE0                   # add         $t9, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26d958:
    // 0x26d958: 0x0  nop
    ctx->pc = 0x26d958u;
    // NOP
label_26d95c:
    // 0x26d95c: 0x0  nop
    ctx->pc = 0x26d95cu;
    // NOP
label_26d960:
    // 0x26d960: 0x37c1  .word       0x000037C1                   # INVALID     $zero, $zero, 0x37C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26D960 raw=0x000037C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26d964:
    // 0x26d964: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d964u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26d968:
    // 0x26d968: 0x0  nop
    ctx->pc = 0x26d968u;
    // NOP
label_26d96c:
    // 0x26d96c: 0x0  nop
    ctx->pc = 0x26d96cu;
    // NOP
label_26d970:
    // 0x26d970: 0x37cf  .word       0x000037CF                   # sync.p # 00003000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26d974:
    // 0x26d974: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d974u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d978:
    // 0x26d978: 0x0  nop
    ctx->pc = 0x26d978u;
    // NOP
label_26d97c:
    // 0x26d97c: 0x0  nop
    ctx->pc = 0x26d97cu;
    // NOP
label_26d980:
    // 0x26d980: 0x37da  .word       0x000037DA                   # div         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d980u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26d984:
    // 0x26d984: 0x42c0  sll         $t0, $zero, 11
    ctx->pc = 0x26d984u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26d988:
    // 0x26d988: 0x0  nop
    ctx->pc = 0x26d988u;
    // NOP
label_26d98c:
    // 0x26d98c: 0x0  nop
    ctx->pc = 0x26d98cu;
    // NOP
label_26d990:
    // 0x26d990: 0x37e3  .word       0x000037E3                   # negu        $a2, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d990u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26d994:
    // 0x26d994: 0x5190  .word       0x00005190                   # mfhi        $t2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d994u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d998:
    // 0x26d998: 0x0  nop
    ctx->pc = 0x26d998u;
    // NOP
label_26d99c:
    // 0x26d99c: 0x0  nop
    ctx->pc = 0x26d99cu;
    // NOP
label_26d9a0:
    // 0x26d9a0: 0x37ee  .word       0x000037EE                   # dsub        $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d9a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_26d9a4:
    // 0x26d9a4: 0x5ed0  .word       0x00005ED0                   # mfhi        $t3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d9a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26d9a8:
    // 0x26d9a8: 0x0  nop
    ctx->pc = 0x26d9a8u;
    // NOP
label_26d9ac:
    // 0x26d9ac: 0x0  nop
    ctx->pc = 0x26d9acu;
    // NOP
label_26d9b0:
    // 0x26d9b0: 0x37fa  dsrl        $a2, $zero, 31
    ctx->pc = 0x26d9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> 31);
label_26d9b4:
    // 0x26d9b4: 0x7720  .word       0x00007720                   # add         $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d9b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26d9b8:
    // 0x26d9b8: 0x0  nop
    ctx->pc = 0x26d9b8u;
    // NOP
label_26d9bc:
    // 0x26d9bc: 0x0  nop
    ctx->pc = 0x26d9bcu;
    // NOP
label_26d9c0:
    // 0x26d9c0: 0x3809  jalr        $a3, $zero
label_26d9c4:
    if (ctx->pc == 0x26D9C4u) {
        ctx->pc = 0x26D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9C0u;
        // 0x26d9c4: 0x8da0  .word       0x00008DA0                   # add         $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9C8u;
        goto label_26d9c8;
    }
    ctx->pc = 0x26D9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 7, 0x26D9C8u);
        ctx->pc = 0x26D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9C0u;
        // 0x26d9c4: 0x8da0  .word       0x00008DA0                   # add         $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D9C0u, 0x26D9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D9C8u;
label_26d9c8:
    // 0x26d9c8: 0x0  nop
    ctx->pc = 0x26d9c8u;
    // NOP
label_26d9cc:
    // 0x26d9cc: 0x0  nop
    ctx->pc = 0x26d9ccu;
    // NOP
label_26d9d0:
    // 0x26d9d0: 0x381b  divu        $a3, $zero, $zero
    ctx->pc = 0x26d9d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26d9d4:
    // 0x26d9d4: 0x5190  .word       0x00005190                   # mfhi        $t2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26d9d4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26d9d8:
    // 0x26d9d8: 0x0  nop
    ctx->pc = 0x26d9d8u;
    // NOP
label_26d9dc:
    // 0x26d9dc: 0x0  nop
    ctx->pc = 0x26d9dcu;
    // NOP
label_26d9e0:
    // 0x26d9e0: 0x3826  xor         $a3, $zero, $zero
    ctx->pc = 0x26d9e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26d9e4:
    // 0x26d9e4: 0x5d30  tge         $zero, $zero, 372
    ctx->pc = 0x26d9e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d9e8:
    // 0x26d9e8: 0x0  nop
    ctx->pc = 0x26d9e8u;
    // NOP
label_26d9ec:
    // 0x26d9ec: 0x0  nop
    ctx->pc = 0x26d9ecu;
    // NOP
label_26d9f0:
    // 0x26d9f0: 0x3832  tlt         $zero, $zero, 224
    ctx->pc = 0x26d9f0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26d9f4:
    // 0x26d9f4: 0x5680  sll         $t2, $zero, 26
    ctx->pc = 0x26d9f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26d9f8:
    // 0x26d9f8: 0x0  nop
    ctx->pc = 0x26d9f8u;
    // NOP
label_26d9fc:
    // 0x26d9fc: 0x0  nop
    ctx->pc = 0x26d9fcu;
    // NOP
label_26da00:
    // 0x26da00: 0x383d  .word       0x0000383D                   # INVALID     $zero, $zero, 0x383D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26DA00 raw=0x0000383D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26da04:
    // 0x26da04: 0x4a70  tge         $zero, $zero, 297
    ctx->pc = 0x26da04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26da08:
    // 0x26da08: 0x0  nop
    ctx->pc = 0x26da08u;
    // NOP
label_26da0c:
    // 0x26da0c: 0x0  nop
    ctx->pc = 0x26da0cu;
    // NOP
label_26da10:
    // 0x26da10: 0x3847  .word       0x00003847                   # srav        $a3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da10u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26da14:
    // 0x26da14: 0x19c0  sll         $v1, $zero, 7
    ctx->pc = 0x26da14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_26da18:
    // 0x26da18: 0x0  nop
    ctx->pc = 0x26da18u;
    // NOP
label_26da1c:
    // 0x26da1c: 0x0  nop
    ctx->pc = 0x26da1cu;
    // NOP
label_26da20:
    // 0x26da20: 0x384b  .word       0x0000384B                   # movn        $a3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_26da24:
    // 0x26da24: 0x1fb0  tge         $zero, $zero, 126
    ctx->pc = 0x26da24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26da28:
    // 0x26da28: 0x0  nop
    ctx->pc = 0x26da28u;
    // NOP
label_26da2c:
    // 0x26da2c: 0x0  nop
    ctx->pc = 0x26da2cu;
    // NOP
label_26da30:
    // 0x26da30: 0x384f  .word       0x0000384F                   # sync # 00003800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26da34:
    // 0x26da34: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da34u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26da38:
    // 0x26da38: 0x0  nop
    ctx->pc = 0x26da38u;
    // NOP
label_26da3c:
    // 0x26da3c: 0x0  nop
    ctx->pc = 0x26da3cu;
    // NOP
label_26da40:
    // 0x26da40: 0x385a  .word       0x0000385A                   # div         $a3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da40u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26da44:
    // 0x26da44: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26da48:
    // 0x26da48: 0x0  nop
    ctx->pc = 0x26da48u;
    // NOP
label_26da4c:
    // 0x26da4c: 0x0  nop
    ctx->pc = 0x26da4cu;
    // NOP
label_26da50:
    // 0x26da50: 0x3865  .word       0x00003865                   # move        $a3, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26da54:
    // 0x26da54: 0x7280  sll         $t6, $zero, 10
    ctx->pc = 0x26da54u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26da58:
    // 0x26da58: 0x0  nop
    ctx->pc = 0x26da58u;
    // NOP
label_26da5c:
    // 0x26da5c: 0x0  nop
    ctx->pc = 0x26da5cu;
    // NOP
label_26da60:
    // 0x26da60: 0x3874  teq         $zero, $zero, 225
    ctx->pc = 0x26da60u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26da64:
    // 0x26da64: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x26da64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26da68:
    // 0x26da68: 0x0  nop
    ctx->pc = 0x26da68u;
    // NOP
label_26da6c:
    // 0x26da6c: 0x0  nop
    ctx->pc = 0x26da6cu;
    // NOP
label_26da70:
    // 0x26da70: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x26da70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26da74:
    // 0x26da74: 0x49a0  .word       0x000049A0                   # add         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26da78:
    // 0x26da78: 0x0  nop
    ctx->pc = 0x26da78u;
    // NOP
label_26da7c:
    // 0x26da7c: 0x0  nop
    ctx->pc = 0x26da7cu;
    // NOP
label_26da80:
    // 0x26da80: 0x388a  .word       0x0000388A                   # movz        $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da80u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_26da84:
    // 0x26da84: 0x77e0  .word       0x000077E0                   # add         $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26da88:
    // 0x26da88: 0x0  nop
    ctx->pc = 0x26da88u;
    // NOP
label_26da8c:
    // 0x26da8c: 0x0  nop
    ctx->pc = 0x26da8cu;
    // NOP
label_26da90:
    // 0x26da90: 0x3899  .word       0x00003899                   # multu       $zero, $zero # 00003880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26da90u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_26da94:
    // 0x26da94: 0x5730  tge         $zero, $zero, 348
    ctx->pc = 0x26da94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26da98:
    // 0x26da98: 0x0  nop
    ctx->pc = 0x26da98u;
    // NOP
label_26da9c:
    // 0x26da9c: 0x0  nop
    ctx->pc = 0x26da9cu;
    // NOP
label_26daa0:
    // 0x26daa0: 0x38a4  .word       0x000038A4                   # and         $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26daa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26daa4:
    // 0x26daa4: 0x4440  sll         $t0, $zero, 17
    ctx->pc = 0x26daa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26daa8:
    // 0x26daa8: 0x0  nop
    ctx->pc = 0x26daa8u;
    // NOP
label_26daac:
    // 0x26daac: 0x0  nop
    ctx->pc = 0x26daacu;
    // NOP
label_26dab0:
    // 0x26dab0: 0x38ad  .word       0x000038AD                   # daddu       $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26dab4:
    // 0x26dab4: 0x4980  sll         $t1, $zero, 6
    ctx->pc = 0x26dab4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26dab8:
    // 0x26dab8: 0x0  nop
    ctx->pc = 0x26dab8u;
    // NOP
label_26dabc:
    // 0x26dabc: 0x0  nop
    ctx->pc = 0x26dabcu;
    // NOP
label_26dac0:
    // 0x26dac0: 0x38b7  .word       0x000038B7                   # INVALID     $zero, $zero, 0x38B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26DAC0 raw=0x000038B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26dac4:
    // 0x26dac4: 0x5960  .word       0x00005960                   # add         $t3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26dac8:
    // 0x26dac8: 0x0  nop
    ctx->pc = 0x26dac8u;
    // NOP
label_26dacc:
    // 0x26dacc: 0x0  nop
    ctx->pc = 0x26daccu;
    // NOP
label_26dad0:
    // 0x26dad0: 0x38c3  sra         $a3, $zero, 3
    ctx->pc = 0x26dad0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), 3));
label_26dad4:
    // 0x26dad4: 0x3f90  .word       0x00003F90                   # mfhi        $a3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dad4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26dad8:
    // 0x26dad8: 0x0  nop
    ctx->pc = 0x26dad8u;
    // NOP
label_26dadc:
    // 0x26dadc: 0x0  nop
    ctx->pc = 0x26dadcu;
    // NOP
label_26dae0:
    // 0x26dae0: 0x38cb  .word       0x000038CB                   # movn        $a3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dae0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_26dae4:
    // 0x26dae4: 0x5af0  tge         $zero, $zero, 363
    ctx->pc = 0x26dae4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26dae8:
    // 0x26dae8: 0x0  nop
    ctx->pc = 0x26dae8u;
    // NOP
label_26daec:
    // 0x26daec: 0x0  nop
    ctx->pc = 0x26daecu;
    // NOP
label_26daf0:
    // 0x26daf0: 0x38d7  .word       0x000038D7                   # dsrav       $a3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26daf0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26daf4:
    // 0x26daf4: 0x4200  sll         $t0, $zero, 8
    ctx->pc = 0x26daf4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26daf8:
    // 0x26daf8: 0x0  nop
    ctx->pc = 0x26daf8u;
    // NOP
label_26dafc:
    // 0x26dafc: 0x0  nop
    ctx->pc = 0x26dafcu;
    // NOP
label_26db00:
    // 0x26db00: 0x38e0  .word       0x000038E0                   # add         $a3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db00u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26db04:
    // 0x26db04: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x26db04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26db08:
    // 0x26db08: 0x0  nop
    ctx->pc = 0x26db08u;
    // NOP
label_26db0c:
    // 0x26db0c: 0x0  nop
    ctx->pc = 0x26db0cu;
    // NOP
label_26db10:
    // 0x26db10: 0x38e9  .word       0x000038E9                   # mtsa        $zero # 000038C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26db10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26db14:
    // 0x26db14: 0x2ba0  .word       0x00002BA0                   # add         $a1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26db18:
    // 0x26db18: 0x0  nop
    ctx->pc = 0x26db18u;
    // NOP
label_26db1c:
    // 0x26db1c: 0x0  nop
    ctx->pc = 0x26db1cu;
    // NOP
label_26db20:
    // 0x26db20: 0x38ef  .word       0x000038EF                   # dsubu       $a3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26db24:
    // 0x26db24: 0x4680  sll         $t0, $zero, 26
    ctx->pc = 0x26db24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26db28:
    // 0x26db28: 0x0  nop
    ctx->pc = 0x26db28u;
    // NOP
label_26db2c:
    // 0x26db2c: 0x0  nop
    ctx->pc = 0x26db2cu;
    // NOP
label_26db30:
    // 0x26db30: 0x38f8  dsll        $a3, $zero, 3
    ctx->pc = 0x26db30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 3);
label_26db34:
    // 0x26db34: 0x4bb0  tge         $zero, $zero, 302
    ctx->pc = 0x26db34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26db38:
    // 0x26db38: 0x0  nop
    ctx->pc = 0x26db38u;
    // NOP
label_26db3c:
    // 0x26db3c: 0x0  nop
    ctx->pc = 0x26db3cu;
    // NOP
label_26db40:
    // 0x26db40: 0x3902  srl         $a3, $zero, 4
    ctx->pc = 0x26db40u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_26db44:
    // 0x26db44: 0x8630  tge         $zero, $zero, 536
    ctx->pc = 0x26db44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26db48:
    // 0x26db48: 0x0  nop
    ctx->pc = 0x26db48u;
    // NOP
label_26db4c:
    // 0x26db4c: 0x0  nop
    ctx->pc = 0x26db4cu;
    // NOP
label_26db50:
    // 0x26db50: 0x3913  .word       0x00003913                   # mtlo        $zero # 00003900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db50u;
    ctx->lo = GPR_U64(ctx, 0);
label_26db54:
    // 0x26db54: 0x34c0  sll         $a2, $zero, 19
    ctx->pc = 0x26db54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26db58:
    // 0x26db58: 0x0  nop
    ctx->pc = 0x26db58u;
    // NOP
label_26db5c:
    // 0x26db5c: 0x0  nop
    ctx->pc = 0x26db5cu;
    // NOP
label_26db60:
    // 0x26db60: 0x391a  .word       0x0000391A                   # div         $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db60u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26db64:
    // 0x26db64: 0x4c00  sll         $t1, $zero, 16
    ctx->pc = 0x26db64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26db68:
    // 0x26db68: 0x0  nop
    ctx->pc = 0x26db68u;
    // NOP
label_26db6c:
    // 0x26db6c: 0x0  nop
    ctx->pc = 0x26db6cu;
    // NOP
label_26db70:
    // 0x26db70: 0x3924  .word       0x00003924                   # and         $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26db74:
    // 0x26db74: 0x3de0  .word       0x00003DE0                   # add         $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26db78:
    // 0x26db78: 0x0  nop
    ctx->pc = 0x26db78u;
    // NOP
label_26db7c:
    // 0x26db7c: 0x0  nop
    ctx->pc = 0x26db7cu;
    // NOP
label_26db80:
    // 0x26db80: 0x392c  .word       0x0000392C                   # dadd        $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_26db84:
    // 0x26db84: 0x5e40  sll         $t3, $zero, 25
    ctx->pc = 0x26db84u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26db88:
    // 0x26db88: 0x0  nop
    ctx->pc = 0x26db88u;
    // NOP
label_26db8c:
    // 0x26db8c: 0x0  nop
    ctx->pc = 0x26db8cu;
    // NOP
label_26db90:
    // 0x26db90: 0x3938  dsll        $a3, $zero, 4
    ctx->pc = 0x26db90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 4);
label_26db94:
    // 0x26db94: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26db94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26db98:
    // 0x26db98: 0x0  nop
    ctx->pc = 0x26db98u;
    // NOP
label_26db9c:
    // 0x26db9c: 0x0  nop
    ctx->pc = 0x26db9cu;
    // NOP
label_26dba0:
    // 0x26dba0: 0x3942  srl         $a3, $zero, 5
    ctx->pc = 0x26dba0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 5));
label_26dba4:
    // 0x26dba4: 0x2de0  .word       0x00002DE0                   # add         $a1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26dba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    ctx->pc = 0x26dba8u;
    return;
}
