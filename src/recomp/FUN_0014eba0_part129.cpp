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


void FUN_0014eba0_part129(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18d3a0u: goto label_18d3a0;
        case 0x18d3a4u: goto label_18d3a4;
        case 0x18d3a8u: goto label_18d3a8;
        case 0x18d3acu: goto label_18d3ac;
        case 0x18d3b0u: goto label_18d3b0;
        case 0x18d3b4u: goto label_18d3b4;
        case 0x18d3b8u: goto label_18d3b8;
        case 0x18d3bcu: goto label_18d3bc;
        case 0x18d3c0u: goto label_18d3c0;
        case 0x18d3c4u: goto label_18d3c4;
        case 0x18d3c8u: goto label_18d3c8;
        case 0x18d3ccu: goto label_18d3cc;
        case 0x18d3d0u: goto label_18d3d0;
        case 0x18d3d4u: goto label_18d3d4;
        case 0x18d3d8u: goto label_18d3d8;
        case 0x18d3dcu: goto label_18d3dc;
        case 0x18d3e0u: goto label_18d3e0;
        case 0x18d3e4u: goto label_18d3e4;
        case 0x18d3e8u: goto label_18d3e8;
        case 0x18d3ecu: goto label_18d3ec;
        case 0x18d3f0u: goto label_18d3f0;
        case 0x18d3f4u: goto label_18d3f4;
        case 0x18d3f8u: goto label_18d3f8;
        case 0x18d3fcu: goto label_18d3fc;
        case 0x18d400u: goto label_18d400;
        case 0x18d404u: goto label_18d404;
        case 0x18d408u: goto label_18d408;
        case 0x18d40cu: goto label_18d40c;
        case 0x18d410u: goto label_18d410;
        case 0x18d414u: goto label_18d414;
        case 0x18d418u: goto label_18d418;
        case 0x18d41cu: goto label_18d41c;
        case 0x18d420u: goto label_18d420;
        case 0x18d424u: goto label_18d424;
        case 0x18d428u: goto label_18d428;
        case 0x18d42cu: goto label_18d42c;
        case 0x18d430u: goto label_18d430;
        case 0x18d434u: goto label_18d434;
        case 0x18d438u: goto label_18d438;
        case 0x18d43cu: goto label_18d43c;
        case 0x18d440u: goto label_18d440;
        case 0x18d444u: goto label_18d444;
        case 0x18d448u: goto label_18d448;
        case 0x18d44cu: goto label_18d44c;
        case 0x18d450u: goto label_18d450;
        case 0x18d454u: goto label_18d454;
        case 0x18d458u: goto label_18d458;
        case 0x18d45cu: goto label_18d45c;
        case 0x18d460u: goto label_18d460;
        case 0x18d464u: goto label_18d464;
        case 0x18d468u: goto label_18d468;
        case 0x18d46cu: goto label_18d46c;
        case 0x18d470u: goto label_18d470;
        case 0x18d474u: goto label_18d474;
        case 0x18d478u: goto label_18d478;
        case 0x18d47cu: goto label_18d47c;
        case 0x18d480u: goto label_18d480;
        case 0x18d484u: goto label_18d484;
        case 0x18d488u: goto label_18d488;
        case 0x18d48cu: goto label_18d48c;
        case 0x18d490u: goto label_18d490;
        case 0x18d494u: goto label_18d494;
        case 0x18d498u: goto label_18d498;
        case 0x18d49cu: goto label_18d49c;
        case 0x18d4a0u: goto label_18d4a0;
        case 0x18d4a4u: goto label_18d4a4;
        case 0x18d4a8u: goto label_18d4a8;
        case 0x18d4acu: goto label_18d4ac;
        case 0x18d4b0u: goto label_18d4b0;
        case 0x18d4b4u: goto label_18d4b4;
        case 0x18d4b8u: goto label_18d4b8;
        case 0x18d4bcu: goto label_18d4bc;
        case 0x18d4c0u: goto label_18d4c0;
        case 0x18d4c4u: goto label_18d4c4;
        case 0x18d4c8u: goto label_18d4c8;
        case 0x18d4ccu: goto label_18d4cc;
        case 0x18d4d0u: goto label_18d4d0;
        case 0x18d4d4u: goto label_18d4d4;
        case 0x18d4d8u: goto label_18d4d8;
        case 0x18d4dcu: goto label_18d4dc;
        case 0x18d4e0u: goto label_18d4e0;
        case 0x18d4e4u: goto label_18d4e4;
        case 0x18d4e8u: goto label_18d4e8;
        case 0x18d4ecu: goto label_18d4ec;
        case 0x18d4f0u: goto label_18d4f0;
        case 0x18d4f4u: goto label_18d4f4;
        case 0x18d4f8u: goto label_18d4f8;
        case 0x18d4fcu: goto label_18d4fc;
        case 0x18d500u: goto label_18d500;
        case 0x18d504u: goto label_18d504;
        case 0x18d508u: goto label_18d508;
        case 0x18d50cu: goto label_18d50c;
        case 0x18d510u: goto label_18d510;
        case 0x18d514u: goto label_18d514;
        case 0x18d518u: goto label_18d518;
        case 0x18d51cu: goto label_18d51c;
        case 0x18d520u: goto label_18d520;
        case 0x18d524u: goto label_18d524;
        case 0x18d528u: goto label_18d528;
        case 0x18d52cu: goto label_18d52c;
        case 0x18d530u: goto label_18d530;
        case 0x18d534u: goto label_18d534;
        case 0x18d538u: goto label_18d538;
        case 0x18d53cu: goto label_18d53c;
        case 0x18d540u: goto label_18d540;
        case 0x18d544u: goto label_18d544;
        case 0x18d548u: goto label_18d548;
        case 0x18d54cu: goto label_18d54c;
        case 0x18d550u: goto label_18d550;
        case 0x18d554u: goto label_18d554;
        case 0x18d558u: goto label_18d558;
        case 0x18d55cu: goto label_18d55c;
        case 0x18d560u: goto label_18d560;
        case 0x18d564u: goto label_18d564;
        case 0x18d568u: goto label_18d568;
        case 0x18d56cu: goto label_18d56c;
        case 0x18d570u: goto label_18d570;
        case 0x18d574u: goto label_18d574;
        case 0x18d578u: goto label_18d578;
        case 0x18d57cu: goto label_18d57c;
        case 0x18d580u: goto label_18d580;
        case 0x18d584u: goto label_18d584;
        case 0x18d588u: goto label_18d588;
        case 0x18d58cu: goto label_18d58c;
        case 0x18d590u: goto label_18d590;
        case 0x18d594u: goto label_18d594;
        case 0x18d598u: goto label_18d598;
        case 0x18d59cu: goto label_18d59c;
        case 0x18d5a0u: goto label_18d5a0;
        case 0x18d5a4u: goto label_18d5a4;
        case 0x18d5a8u: goto label_18d5a8;
        case 0x18d5acu: goto label_18d5ac;
        case 0x18d5b0u: goto label_18d5b0;
        case 0x18d5b4u: goto label_18d5b4;
        case 0x18d5b8u: goto label_18d5b8;
        case 0x18d5bcu: goto label_18d5bc;
        case 0x18d5c0u: goto label_18d5c0;
        case 0x18d5c4u: goto label_18d5c4;
        case 0x18d5c8u: goto label_18d5c8;
        case 0x18d5ccu: goto label_18d5cc;
        case 0x18d5d0u: goto label_18d5d0;
        case 0x18d5d4u: goto label_18d5d4;
        case 0x18d5d8u: goto label_18d5d8;
        case 0x18d5dcu: goto label_18d5dc;
        case 0x18d5e0u: goto label_18d5e0;
        case 0x18d5e4u: goto label_18d5e4;
        case 0x18d5e8u: goto label_18d5e8;
        case 0x18d5ecu: goto label_18d5ec;
        case 0x18d5f0u: goto label_18d5f0;
        case 0x18d5f4u: goto label_18d5f4;
        case 0x18d5f8u: goto label_18d5f8;
        case 0x18d5fcu: goto label_18d5fc;
        case 0x18d600u: goto label_18d600;
        case 0x18d604u: goto label_18d604;
        case 0x18d608u: goto label_18d608;
        case 0x18d60cu: goto label_18d60c;
        case 0x18d610u: goto label_18d610;
        case 0x18d614u: goto label_18d614;
        case 0x18d618u: goto label_18d618;
        case 0x18d61cu: goto label_18d61c;
        case 0x18d620u: goto label_18d620;
        case 0x18d624u: goto label_18d624;
        case 0x18d628u: goto label_18d628;
        case 0x18d62cu: goto label_18d62c;
        case 0x18d630u: goto label_18d630;
        case 0x18d634u: goto label_18d634;
        case 0x18d638u: goto label_18d638;
        case 0x18d63cu: goto label_18d63c;
        case 0x18d640u: goto label_18d640;
        case 0x18d644u: goto label_18d644;
        case 0x18d648u: goto label_18d648;
        case 0x18d64cu: goto label_18d64c;
        case 0x18d650u: goto label_18d650;
        case 0x18d654u: goto label_18d654;
        case 0x18d658u: goto label_18d658;
        case 0x18d65cu: goto label_18d65c;
        case 0x18d660u: goto label_18d660;
        case 0x18d664u: goto label_18d664;
        case 0x18d668u: goto label_18d668;
        case 0x18d66cu: goto label_18d66c;
        case 0x18d670u: goto label_18d670;
        case 0x18d674u: goto label_18d674;
        case 0x18d678u: goto label_18d678;
        case 0x18d67cu: goto label_18d67c;
        case 0x18d680u: goto label_18d680;
        case 0x18d684u: goto label_18d684;
        case 0x18d688u: goto label_18d688;
        case 0x18d68cu: goto label_18d68c;
        case 0x18d690u: goto label_18d690;
        case 0x18d694u: goto label_18d694;
        case 0x18d698u: goto label_18d698;
        case 0x18d69cu: goto label_18d69c;
        case 0x18d6a0u: goto label_18d6a0;
        case 0x18d6a4u: goto label_18d6a4;
        case 0x18d6a8u: goto label_18d6a8;
        case 0x18d6acu: goto label_18d6ac;
        case 0x18d6b0u: goto label_18d6b0;
        case 0x18d6b4u: goto label_18d6b4;
        case 0x18d6b8u: goto label_18d6b8;
        case 0x18d6bcu: goto label_18d6bc;
        case 0x18d6c0u: goto label_18d6c0;
        case 0x18d6c4u: goto label_18d6c4;
        case 0x18d6c8u: goto label_18d6c8;
        case 0x18d6ccu: goto label_18d6cc;
        case 0x18d6d0u: goto label_18d6d0;
        case 0x18d6d4u: goto label_18d6d4;
        case 0x18d6d8u: goto label_18d6d8;
        case 0x18d6dcu: goto label_18d6dc;
        case 0x18d6e0u: goto label_18d6e0;
        case 0x18d6e4u: goto label_18d6e4;
        case 0x18d6e8u: goto label_18d6e8;
        case 0x18d6ecu: goto label_18d6ec;
        case 0x18d6f0u: goto label_18d6f0;
        case 0x18d6f4u: goto label_18d6f4;
        case 0x18d6f8u: goto label_18d6f8;
        case 0x18d6fcu: goto label_18d6fc;
        case 0x18d700u: goto label_18d700;
        case 0x18d704u: goto label_18d704;
        case 0x18d708u: goto label_18d708;
        case 0x18d70cu: goto label_18d70c;
        case 0x18d710u: goto label_18d710;
        case 0x18d714u: goto label_18d714;
        case 0x18d718u: goto label_18d718;
        case 0x18d71cu: goto label_18d71c;
        case 0x18d720u: goto label_18d720;
        case 0x18d724u: goto label_18d724;
        case 0x18d728u: goto label_18d728;
        case 0x18d72cu: goto label_18d72c;
        case 0x18d730u: goto label_18d730;
        case 0x18d734u: goto label_18d734;
        case 0x18d738u: goto label_18d738;
        case 0x18d73cu: goto label_18d73c;
        case 0x18d740u: goto label_18d740;
        case 0x18d744u: goto label_18d744;
        case 0x18d748u: goto label_18d748;
        case 0x18d74cu: goto label_18d74c;
        case 0x18d750u: goto label_18d750;
        case 0x18d754u: goto label_18d754;
        case 0x18d758u: goto label_18d758;
        case 0x18d75cu: goto label_18d75c;
        case 0x18d760u: goto label_18d760;
        case 0x18d764u: goto label_18d764;
        case 0x18d768u: goto label_18d768;
        case 0x18d76cu: goto label_18d76c;
        case 0x18d770u: goto label_18d770;
        case 0x18d774u: goto label_18d774;
        case 0x18d778u: goto label_18d778;
        case 0x18d77cu: goto label_18d77c;
        case 0x18d780u: goto label_18d780;
        case 0x18d784u: goto label_18d784;
        case 0x18d788u: goto label_18d788;
        case 0x18d78cu: goto label_18d78c;
        case 0x18d790u: goto label_18d790;
        case 0x18d794u: goto label_18d794;
        case 0x18d798u: goto label_18d798;
        case 0x18d79cu: goto label_18d79c;
        case 0x18d7a0u: goto label_18d7a0;
        case 0x18d7a4u: goto label_18d7a4;
        case 0x18d7a8u: goto label_18d7a8;
        case 0x18d7acu: goto label_18d7ac;
        case 0x18d7b0u: goto label_18d7b0;
        case 0x18d7b4u: goto label_18d7b4;
        case 0x18d7b8u: goto label_18d7b8;
        case 0x18d7bcu: goto label_18d7bc;
        case 0x18d7c0u: goto label_18d7c0;
        case 0x18d7c4u: goto label_18d7c4;
        case 0x18d7c8u: goto label_18d7c8;
        case 0x18d7ccu: goto label_18d7cc;
        case 0x18d7d0u: goto label_18d7d0;
        case 0x18d7d4u: goto label_18d7d4;
        case 0x18d7d8u: goto label_18d7d8;
        case 0x18d7dcu: goto label_18d7dc;
        case 0x18d7e0u: goto label_18d7e0;
        case 0x18d7e4u: goto label_18d7e4;
        case 0x18d7e8u: goto label_18d7e8;
        case 0x18d7ecu: goto label_18d7ec;
        case 0x18d7f0u: goto label_18d7f0;
        case 0x18d7f4u: goto label_18d7f4;
        case 0x18d7f8u: goto label_18d7f8;
        case 0x18d7fcu: goto label_18d7fc;
        case 0x18d800u: goto label_18d800;
        case 0x18d804u: goto label_18d804;
        case 0x18d808u: goto label_18d808;
        case 0x18d80cu: goto label_18d80c;
        case 0x18d810u: goto label_18d810;
        case 0x18d814u: goto label_18d814;
        case 0x18d818u: goto label_18d818;
        case 0x18d81cu: goto label_18d81c;
        case 0x18d820u: goto label_18d820;
        case 0x18d824u: goto label_18d824;
        case 0x18d828u: goto label_18d828;
        case 0x18d82cu: goto label_18d82c;
        case 0x18d830u: goto label_18d830;
        case 0x18d834u: goto label_18d834;
        case 0x18d838u: goto label_18d838;
        case 0x18d83cu: goto label_18d83c;
        case 0x18d840u: goto label_18d840;
        case 0x18d844u: goto label_18d844;
        case 0x18d848u: goto label_18d848;
        case 0x18d84cu: goto label_18d84c;
        case 0x18d850u: goto label_18d850;
        case 0x18d854u: goto label_18d854;
        case 0x18d858u: goto label_18d858;
        case 0x18d85cu: goto label_18d85c;
        case 0x18d860u: goto label_18d860;
        case 0x18d864u: goto label_18d864;
        case 0x18d868u: goto label_18d868;
        case 0x18d86cu: goto label_18d86c;
        case 0x18d870u: goto label_18d870;
        case 0x18d874u: goto label_18d874;
        case 0x18d878u: goto label_18d878;
        case 0x18d87cu: goto label_18d87c;
        case 0x18d880u: goto label_18d880;
        case 0x18d884u: goto label_18d884;
        case 0x18d888u: goto label_18d888;
        case 0x18d88cu: goto label_18d88c;
        case 0x18d890u: goto label_18d890;
        case 0x18d894u: goto label_18d894;
        case 0x18d898u: goto label_18d898;
        case 0x18d89cu: goto label_18d89c;
        case 0x18d8a0u: goto label_18d8a0;
        case 0x18d8a4u: goto label_18d8a4;
        case 0x18d8a8u: goto label_18d8a8;
        case 0x18d8acu: goto label_18d8ac;
        case 0x18d8b0u: goto label_18d8b0;
        case 0x18d8b4u: goto label_18d8b4;
        case 0x18d8b8u: goto label_18d8b8;
        case 0x18d8bcu: goto label_18d8bc;
        case 0x18d8c0u: goto label_18d8c0;
        case 0x18d8c4u: goto label_18d8c4;
        case 0x18d8c8u: goto label_18d8c8;
        case 0x18d8ccu: goto label_18d8cc;
        case 0x18d8d0u: goto label_18d8d0;
        case 0x18d8d4u: goto label_18d8d4;
        case 0x18d8d8u: goto label_18d8d8;
        case 0x18d8dcu: goto label_18d8dc;
        case 0x18d8e0u: goto label_18d8e0;
        case 0x18d8e4u: goto label_18d8e4;
        case 0x18d8e8u: goto label_18d8e8;
        case 0x18d8ecu: goto label_18d8ec;
        case 0x18d8f0u: goto label_18d8f0;
        case 0x18d8f4u: goto label_18d8f4;
        case 0x18d8f8u: goto label_18d8f8;
        case 0x18d8fcu: goto label_18d8fc;
        case 0x18d900u: goto label_18d900;
        case 0x18d904u: goto label_18d904;
        case 0x18d908u: goto label_18d908;
        case 0x18d90cu: goto label_18d90c;
        case 0x18d910u: goto label_18d910;
        case 0x18d914u: goto label_18d914;
        case 0x18d918u: goto label_18d918;
        case 0x18d91cu: goto label_18d91c;
        case 0x18d920u: goto label_18d920;
        case 0x18d924u: goto label_18d924;
        case 0x18d928u: goto label_18d928;
        case 0x18d92cu: goto label_18d92c;
        case 0x18d930u: goto label_18d930;
        case 0x18d934u: goto label_18d934;
        case 0x18d938u: goto label_18d938;
        case 0x18d93cu: goto label_18d93c;
        case 0x18d940u: goto label_18d940;
        case 0x18d944u: goto label_18d944;
        case 0x18d948u: goto label_18d948;
        case 0x18d94cu: goto label_18d94c;
        case 0x18d950u: goto label_18d950;
        case 0x18d954u: goto label_18d954;
        case 0x18d958u: goto label_18d958;
        case 0x18d95cu: goto label_18d95c;
        case 0x18d960u: goto label_18d960;
        case 0x18d964u: goto label_18d964;
        case 0x18d968u: goto label_18d968;
        case 0x18d96cu: goto label_18d96c;
        case 0x18d970u: goto label_18d970;
        case 0x18d974u: goto label_18d974;
        case 0x18d978u: goto label_18d978;
        case 0x18d97cu: goto label_18d97c;
        case 0x18d980u: goto label_18d980;
        case 0x18d984u: goto label_18d984;
        case 0x18d988u: goto label_18d988;
        case 0x18d98cu: goto label_18d98c;
        case 0x18d990u: goto label_18d990;
        case 0x18d994u: goto label_18d994;
        case 0x18d998u: goto label_18d998;
        case 0x18d99cu: goto label_18d99c;
        case 0x18d9a0u: goto label_18d9a0;
        case 0x18d9a4u: goto label_18d9a4;
        case 0x18d9a8u: goto label_18d9a8;
        case 0x18d9acu: goto label_18d9ac;
        case 0x18d9b0u: goto label_18d9b0;
        case 0x18d9b4u: goto label_18d9b4;
        case 0x18d9b8u: goto label_18d9b8;
        case 0x18d9bcu: goto label_18d9bc;
        case 0x18d9c0u: goto label_18d9c0;
        case 0x18d9c4u: goto label_18d9c4;
        case 0x18d9c8u: goto label_18d9c8;
        case 0x18d9ccu: goto label_18d9cc;
        case 0x18d9d0u: goto label_18d9d0;
        case 0x18d9d4u: goto label_18d9d4;
        case 0x18d9d8u: goto label_18d9d8;
        case 0x18d9dcu: goto label_18d9dc;
        case 0x18d9e0u: goto label_18d9e0;
        case 0x18d9e4u: goto label_18d9e4;
        case 0x18d9e8u: goto label_18d9e8;
        case 0x18d9ecu: goto label_18d9ec;
        case 0x18d9f0u: goto label_18d9f0;
        case 0x18d9f4u: goto label_18d9f4;
        case 0x18d9f8u: goto label_18d9f8;
        case 0x18d9fcu: goto label_18d9fc;
        case 0x18da00u: goto label_18da00;
        case 0x18da04u: goto label_18da04;
        case 0x18da08u: goto label_18da08;
        case 0x18da0cu: goto label_18da0c;
        case 0x18da10u: goto label_18da10;
        case 0x18da14u: goto label_18da14;
        case 0x18da18u: goto label_18da18;
        case 0x18da1cu: goto label_18da1c;
        case 0x18da20u: goto label_18da20;
        case 0x18da24u: goto label_18da24;
        case 0x18da28u: goto label_18da28;
        case 0x18da2cu: goto label_18da2c;
        case 0x18da30u: goto label_18da30;
        case 0x18da34u: goto label_18da34;
        case 0x18da38u: goto label_18da38;
        case 0x18da3cu: goto label_18da3c;
        case 0x18da40u: goto label_18da40;
        case 0x18da44u: goto label_18da44;
        case 0x18da48u: goto label_18da48;
        case 0x18da4cu: goto label_18da4c;
        case 0x18da50u: goto label_18da50;
        case 0x18da54u: goto label_18da54;
        case 0x18da58u: goto label_18da58;
        case 0x18da5cu: goto label_18da5c;
        case 0x18da60u: goto label_18da60;
        case 0x18da64u: goto label_18da64;
        case 0x18da68u: goto label_18da68;
        case 0x18da6cu: goto label_18da6c;
        case 0x18da70u: goto label_18da70;
        case 0x18da74u: goto label_18da74;
        case 0x18da78u: goto label_18da78;
        case 0x18da7cu: goto label_18da7c;
        case 0x18da80u: goto label_18da80;
        case 0x18da84u: goto label_18da84;
        case 0x18da88u: goto label_18da88;
        case 0x18da8cu: goto label_18da8c;
        case 0x18da90u: goto label_18da90;
        case 0x18da94u: goto label_18da94;
        case 0x18da98u: goto label_18da98;
        case 0x18da9cu: goto label_18da9c;
        case 0x18daa0u: goto label_18daa0;
        case 0x18daa4u: goto label_18daa4;
        case 0x18daa8u: goto label_18daa8;
        case 0x18daacu: goto label_18daac;
        case 0x18dab0u: goto label_18dab0;
        case 0x18dab4u: goto label_18dab4;
        case 0x18dab8u: goto label_18dab8;
        case 0x18dabcu: goto label_18dabc;
        case 0x18dac0u: goto label_18dac0;
        case 0x18dac4u: goto label_18dac4;
        case 0x18dac8u: goto label_18dac8;
        case 0x18daccu: goto label_18dacc;
        case 0x18dad0u: goto label_18dad0;
        case 0x18dad4u: goto label_18dad4;
        case 0x18dad8u: goto label_18dad8;
        case 0x18dadcu: goto label_18dadc;
        case 0x18dae0u: goto label_18dae0;
        case 0x18dae4u: goto label_18dae4;
        case 0x18dae8u: goto label_18dae8;
        case 0x18daecu: goto label_18daec;
        case 0x18daf0u: goto label_18daf0;
        case 0x18daf4u: goto label_18daf4;
        case 0x18daf8u: goto label_18daf8;
        case 0x18dafcu: goto label_18dafc;
        case 0x18db00u: goto label_18db00;
        case 0x18db04u: goto label_18db04;
        case 0x18db08u: goto label_18db08;
        case 0x18db0cu: goto label_18db0c;
        case 0x18db10u: goto label_18db10;
        case 0x18db14u: goto label_18db14;
        case 0x18db18u: goto label_18db18;
        case 0x18db1cu: goto label_18db1c;
        case 0x18db20u: goto label_18db20;
        case 0x18db24u: goto label_18db24;
        case 0x18db28u: goto label_18db28;
        case 0x18db2cu: goto label_18db2c;
        case 0x18db30u: goto label_18db30;
        case 0x18db34u: goto label_18db34;
        case 0x18db38u: goto label_18db38;
        case 0x18db3cu: goto label_18db3c;
        case 0x18db40u: goto label_18db40;
        case 0x18db44u: goto label_18db44;
        case 0x18db48u: goto label_18db48;
        case 0x18db4cu: goto label_18db4c;
        case 0x18db50u: goto label_18db50;
        case 0x18db54u: goto label_18db54;
        case 0x18db58u: goto label_18db58;
        case 0x18db5cu: goto label_18db5c;
        case 0x18db60u: goto label_18db60;
        case 0x18db64u: goto label_18db64;
        case 0x18db68u: goto label_18db68;
        case 0x18db6cu: goto label_18db6c;
        default: return;
    }

label_18d3a0:
    // 0x18d3a0: 0xc066e02  jal         func_19B808
label_18d3a4:
    if (ctx->pc == 0x18D3A4u) {
        ctx->pc = 0x18D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3A0u;
        // 0x18d3a4: 0xe7a00248  swc1        $f0, 0x248($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3A8u;
        goto label_18d3a8;
    }
    ctx->pc = 0x18D3A0u;
    SET_GPR_U32(ctx, 31, 0x18D3A8u);
    ctx->pc = 0x18D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3A0u;
    // 0x18d3a4: 0xe7a00248  swc1        $f0, 0x248($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18D3A8u;
label_18d3a8:
    // 0x18d3a8: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x18d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_18d3ac:
    // 0x18d3ac: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x18d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_18d3b0:
    // 0x18d3b0: 0xc066e08  jal         func_19B820
label_18d3b4:
    if (ctx->pc == 0x18D3B4u) {
        ctx->pc = 0x18D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3B0u;
        // 0x18d3b4: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3B8u;
        goto label_18d3b8;
    }
    ctx->pc = 0x18D3B0u;
    SET_GPR_U32(ctx, 31, 0x18D3B8u);
    ctx->pc = 0x18D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3B0u;
    // 0x18d3b4: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18D3B8u;
label_18d3b8:
    // 0x18d3b8: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x18d3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d3bc:
    // 0x18d3bc: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x18d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d3c0:
    // 0x18d3c0: 0xc7ac0274  lwc1        $f12, 0x274($sp)
    ctx->pc = 0x18d3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d3c4:
    // 0x18d3c4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18d3c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18d3c8:
    // 0x18d3c8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x18d3c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18d3cc:
    // 0x18d3cc: 0x46000344  c1          0x344
    ctx->pc = 0x18d3ccu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_18d3d0:
    // 0x18d3d0: 0x0  nop
    ctx->pc = 0x18d3d0u;
    // NOP
label_18d3d4:
    // 0x18d3d4: 0x0  nop
    ctx->pc = 0x18d3d4u;
    // NOP
label_18d3d8:
    // 0x18d3d8: 0xc06d51e  jal         func_1B5478
label_18d3dc:
    if (ctx->pc == 0x18D3DCu) {
        ctx->pc = 0x18D3E0u;
        goto label_18d3e0;
    }
    ctx->pc = 0x18D3D8u;
    SET_GPR_U32(ctx, 31, 0x18D3E0u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D3E0u;
label_18d3e0:
    // 0x18d3e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18d3e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18d3e4:
    // 0x18d3e4: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x18d3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_18d3e8:
    // 0x18d3e8: 0xc7ad0278  lwc1        $f13, 0x278($sp)
    ctx->pc = 0x18d3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d3ec:
    // 0x18d3ec: 0xc06d51e  jal         func_1B5478
label_18d3f0:
    if (ctx->pc == 0x18D3F0u) {
        ctx->pc = 0x18D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3ECu;
        // 0x18d3f0: 0xc7ac0270  lwc1        $f12, 0x270($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3F4u;
        goto label_18d3f4;
    }
    ctx->pc = 0x18D3ECu;
    SET_GPR_U32(ctx, 31, 0x18D3F4u);
    ctx->pc = 0x18D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3ECu;
    // 0x18d3f0: 0xc7ac0270  lwc1        $f12, 0x270($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D3F4u;
label_18d3f4:
    // 0x18d3f4: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x18d3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_18d3f8:
    // 0x18d3f8: 0x8e8400e8  lw          $a0, 0xE8($s4)
    ctx->pc = 0x18d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_18d3fc:
    // 0x18d3fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d400:
    // 0x18d400: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x18d400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18d404:
    // 0x18d404: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x18d404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_18d408:
    // 0x18d408: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x18d408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_18d40c:
    // 0x18d40c: 0xc064a04  jal         func_192810
label_18d410:
    if (ctx->pc == 0x18D410u) {
        ctx->pc = 0x18D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D40Cu;
        // 0x18d410: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D414u;
        goto label_18d414;
    }
    ctx->pc = 0x18D40Cu;
    SET_GPR_U32(ctx, 31, 0x18D414u);
    ctx->pc = 0x18D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D40Cu;
    // 0x18d410: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192810u;
    { ctx->pc = 0x192810; return; }
    ctx->pc = 0x18D414u;
label_18d414:
    // 0x18d414: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_18d418:
    if (ctx->pc == 0x18D418u) {
        ctx->pc = 0x18D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D414u;
        // 0x18d418: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D41Cu;
        goto label_18d41c;
    }
    ctx->pc = 0x18D414u;
    {
        const bool branch_taken_0x18d414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D414u;
        // 0x18d418: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d414) {
            ctx->pc = 0x18D458u;
            goto label_18d458;
        }
    }
    ctx->pc = 0x18D41Cu;
label_18d41c:
    // 0x18d41c: 0xc68000b8  lwc1        $f0, 0xB8($s4)
    ctx->pc = 0x18d41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d420:
    // 0x18d420: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x18d420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_18d424:
    // 0x18d424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d428:
    // 0x18d428: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x18d428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18d42c:
    // 0x18d42c: 0x26850050  addiu       $a1, $s4, 0x50
    ctx->pc = 0x18d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_18d430:
    // 0x18d430: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d434:
    // 0x18d434: 0xc066e26  jal         func_19B898
label_18d438:
    if (ctx->pc == 0x18D438u) {
        ctx->pc = 0x18D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D434u;
        // 0x18d438: 0xe68000b8  swc1        $f0, 0xB8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D43Cu;
        goto label_18d43c;
    }
    ctx->pc = 0x18D434u;
    SET_GPR_U32(ctx, 31, 0x18D43Cu);
    ctx->pc = 0x18D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D434u;
    // 0x18d438: 0xe68000b8  swc1        $f0, 0xB8($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D43Cu;
label_18d43c:
    // 0x18d43c: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x18d43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d440:
    // 0x18d440: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d444:
    // 0x18d444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d448:
    // 0x18d448: 0x0  nop
    ctx->pc = 0x18d448u;
    // NOP
label_18d44c:
    // 0x18d44c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d44cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18d450:
    // 0x18d450: 0xe6800034  swc1        $f0, 0x34($s4)
    ctx->pc = 0x18d450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_18d454:
    // 0x18d454: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d458:
    // 0x18d458: 0xc066e26  jal         func_19B898
label_18d45c:
    if (ctx->pc == 0x18D45Cu) {
        ctx->pc = 0x18D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D458u;
        // 0x18d45c: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D460u;
        goto label_18d460;
    }
    ctx->pc = 0x18D458u;
    SET_GPR_U32(ctx, 31, 0x18D460u);
    ctx->pc = 0x18D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D458u;
    // 0x18d45c: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D460u;
label_18d460:
    // 0x18d460: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x18d460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_18d464:
    // 0x18d464: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x18d464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_18d468:
    // 0x18d468: 0xc066e08  jal         func_19B820
label_18d46c:
    if (ctx->pc == 0x18D46Cu) {
        ctx->pc = 0x18D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D468u;
        // 0x18d46c: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D470u;
        goto label_18d470;
    }
    ctx->pc = 0x18D468u;
    SET_GPR_U32(ctx, 31, 0x18D470u);
    ctx->pc = 0x18D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D468u;
    // 0x18d46c: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18D470u;
label_18d470:
    // 0x18d470: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x18d470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d474:
    // 0x18d474: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x18d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d478:
    // 0x18d478: 0xc7ac0254  lwc1        $f12, 0x254($sp)
    ctx->pc = 0x18d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d47c:
    // 0x18d47c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18d47cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18d480:
    // 0x18d480: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x18d480u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18d484:
    // 0x18d484: 0x46000344  c1          0x344
    ctx->pc = 0x18d484u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_18d488:
    // 0x18d488: 0x0  nop
    ctx->pc = 0x18d488u;
    // NOP
label_18d48c:
    // 0x18d48c: 0x0  nop
    ctx->pc = 0x18d48cu;
    // NOP
label_18d490:
    // 0x18d490: 0xc06d51e  jal         func_1B5478
label_18d494:
    if (ctx->pc == 0x18D494u) {
        ctx->pc = 0x18D498u;
        goto label_18d498;
    }
    ctx->pc = 0x18D490u;
    SET_GPR_U32(ctx, 31, 0x18D498u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D498u;
label_18d498:
    // 0x18d498: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18d498u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18d49c:
    // 0x18d49c: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x18d49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_18d4a0:
    // 0x18d4a0: 0xc7ad0258  lwc1        $f13, 0x258($sp)
    ctx->pc = 0x18d4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d4a4:
    // 0x18d4a4: 0xc06d51e  jal         func_1B5478
label_18d4a8:
    if (ctx->pc == 0x18D4A8u) {
        ctx->pc = 0x18D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4A4u;
        // 0x18d4a8: 0xc7ac0250  lwc1        $f12, 0x250($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4ACu;
        goto label_18d4ac;
    }
    ctx->pc = 0x18D4A4u;
    SET_GPR_U32(ctx, 31, 0x18D4ACu);
    ctx->pc = 0x18D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4A4u;
    // 0x18d4a8: 0xc7ac0250  lwc1        $f12, 0x250($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D4ACu;
label_18d4ac:
    // 0x18d4ac: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x18d4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_18d4b0:
    // 0x18d4b0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x18d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_18d4b4:
    // 0x18d4b4: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x18d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_18d4b8:
    // 0x18d4b8: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x18d4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
label_18d4bc:
    // 0x18d4bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18d4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_18d4c0:
    // 0x18d4c0: 0x106007d0  beqz        $v1, . + 4 + (0x7D0 << 2)
label_18d4c4:
    if (ctx->pc == 0x18D4C4u) {
        ctx->pc = 0x18D4C8u;
        goto label_18d4c8;
    }
    ctx->pc = 0x18D4C0u;
    {
        const bool branch_taken_0x18d4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d4c0) {
            ctx->pc = 0x18F404u;
            { ctx->pc = 0x18f404; return; }
        }
    }
    ctx->pc = 0x18D4C8u;
label_18d4c8:
    // 0x18d4c8: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x18d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_18d4cc:
    // 0x18d4cc: 0x2c610028  sltiu       $at, $v1, 0x28
    ctx->pc = 0x18d4ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_18d4d0:
    // 0x18d4d0: 0x102007cc  beqz        $at, . + 4 + (0x7CC << 2)
label_18d4d4:
    if (ctx->pc == 0x18D4D4u) {
        ctx->pc = 0x18D4D8u;
        goto label_18d4d8;
    }
    ctx->pc = 0x18D4D0u;
    {
        const bool branch_taken_0x18d4d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d4d0) {
            ctx->pc = 0x18F404u;
            { ctx->pc = 0x18f404; return; }
        }
    }
    ctx->pc = 0x18D4D8u;
label_18d4d8:
    // 0x18d4d8: 0xc68000b8  lwc1        $f0, 0xB8($s4)
    ctx->pc = 0x18d4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d4dc:
    // 0x18d4dc: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x18d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_18d4e0:
    // 0x18d4e0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x18d4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_18d4e4:
    // 0x18d4e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18d4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d4e8:
    // 0x18d4e8: 0x0  nop
    ctx->pc = 0x18d4e8u;
    // NOP
label_18d4ec:
    // 0x18d4ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d4ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d4f0:
    // 0x18d4f0: 0xe68000b8  swc1        $f0, 0xB8($s4)
    ctx->pc = 0x18d4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
label_18d4f4:
    // 0x18d4f4: 0x100007c4  b           . + 4 + (0x7C4 << 2)
label_18d4f8:
    if (ctx->pc == 0x18D4F8u) {
        ctx->pc = 0x18D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F4u;
        // 0x18d4f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4FCu;
        goto label_18d4fc;
    }
    ctx->pc = 0x18D4F4u;
    {
        const bool branch_taken_0x18d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F4u;
        // 0x18d4f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4f4) {
            ctx->pc = 0x18F408u;
            { ctx->pc = 0x18f408; return; }
        }
    }
    ctx->pc = 0x18D4FCu;
label_18d4fc:
    // 0x18d4fc: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x18d4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_18d500:
    // 0x18d500: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18d500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18d504:
    // 0x18d504: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x18d504u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18d508:
    // 0x18d508: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18d508u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18d50c:
    // 0x18d50c: 0x4a0002ff  vnop
    ctx->pc = 0x18d50cu;
    // NOP operation, no action needed for VU0
label_18d510:
    // 0x18d510: 0x4a0002ff  vnop
    ctx->pc = 0x18d510u;
    // NOP operation, no action needed for VU0
label_18d514:
    // 0x18d514: 0x4a0002ff  vnop
    ctx->pc = 0x18d514u;
    // NOP operation, no action needed for VU0
label_18d518:
    // 0x18d518: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18d518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18d51c:
    // 0x18d51c: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18d51cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18d520:
    // 0x18d520: 0x4a0002ff  vnop
    ctx->pc = 0x18d520u;
    // NOP operation, no action needed for VU0
label_18d524:
    // 0x18d524: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18d524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18d528:
    // 0x18d528: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18d528u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18d52c:
    // 0x18d52c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18d52cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18d530:
    // 0x18d530: 0x4a0002ff  vnop
    ctx->pc = 0x18d530u;
    // NOP operation, no action needed for VU0
label_18d534:
    // 0x18d534: 0x4a0002ff  vnop
    ctx->pc = 0x18d534u;
    // NOP operation, no action needed for VU0
label_18d538:
    // 0x18d538: 0x4a0002ff  vnop
    ctx->pc = 0x18d538u;
    // NOP operation, no action needed for VU0
label_18d53c:
    // 0x18d53c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18d53cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18d540:
    // 0x18d540: 0x4a0003bf  vwaitq
    ctx->pc = 0x18d540u;
    // VWAITQ (Q already resolved in this runtime)
label_18d544:
    // 0x18d544: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18d544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18d548:
    // 0x18d548: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18d548u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d54c:
    // 0x18d54c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d550:
    // 0x18d550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d554:
    // 0x18d554: 0x0  nop
    ctx->pc = 0x18d554u;
    // NOP
label_18d558:
    // 0x18d558: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18d558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d55c:
    // 0x18d55c: 0x0  nop
    ctx->pc = 0x18d55cu;
    // NOP
label_18d560:
    // 0x18d560: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_18d564:
    if (ctx->pc == 0x18D564u) {
        ctx->pc = 0x18D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D560u;
        // 0x18d564: 0x26860070  addiu       $a2, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D568u;
        goto label_18d568;
    }
    ctx->pc = 0x18D560u;
    {
        const bool branch_taken_0x18d560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D560u;
        // 0x18d564: 0x26860070  addiu       $a2, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d560) {
            ctx->pc = 0x18D574u;
            goto label_18d574;
        }
    }
    ctx->pc = 0x18D568u;
label_18d568:
    // 0x18d568: 0xc066e26  jal         func_19B898
label_18d56c:
    if (ctx->pc == 0x18D56Cu) {
        ctx->pc = 0x18D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D568u;
        // 0x18d56c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D570u;
        goto label_18d570;
    }
    ctx->pc = 0x18D568u;
    SET_GPR_U32(ctx, 31, 0x18D570u);
    ctx->pc = 0x18D56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D568u;
    // 0x18d56c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D570u;
label_18d570:
    // 0x18d570: 0x26860070  addiu       $a2, $s4, 0x70
    ctx->pc = 0x18d570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_18d574:
    // 0x18d574: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18d574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18d578:
    // 0x18d578: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18d578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_18d57c:
    // 0x18d57c: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18d57cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18d580:
    // 0x18d580: 0x4a0002ff  vnop
    ctx->pc = 0x18d580u;
    // NOP operation, no action needed for VU0
label_18d584:
    // 0x18d584: 0x4a0002ff  vnop
    ctx->pc = 0x18d584u;
    // NOP operation, no action needed for VU0
label_18d588:
    // 0x18d588: 0x4a0002ff  vnop
    ctx->pc = 0x18d588u;
    // NOP operation, no action needed for VU0
label_18d58c:
    // 0x18d58c: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18d58cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18d590:
    // 0x18d590: 0x4a0002ff  vnop
    ctx->pc = 0x18d590u;
    // NOP operation, no action needed for VU0
label_18d594:
    // 0x18d594: 0x4a0002ff  vnop
    ctx->pc = 0x18d594u;
    // NOP operation, no action needed for VU0
label_18d598:
    // 0x18d598: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18d598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18d59c:
    // 0x18d59c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18d59cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18d5a0:
    // 0x18d5a0: 0x4a0002ff  vnop
    ctx->pc = 0x18d5a0u;
    // NOP operation, no action needed for VU0
label_18d5a4:
    // 0x18d5a4: 0x4a0002ff  vnop
    ctx->pc = 0x18d5a4u;
    // NOP operation, no action needed for VU0
label_18d5a8:
    // 0x18d5a8: 0x4a0002ff  vnop
    ctx->pc = 0x18d5a8u;
    // NOP operation, no action needed for VU0
label_18d5ac:
    // 0x18d5ac: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18d5acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18d5b0:
    // 0x18d5b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x18d5b0u;
    // VWAITQ (Q already resolved in this runtime)
label_18d5b4:
    // 0x18d5b4: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18d5b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18d5b8:
    // 0x18d5b8: 0x4489c800  mtc1        $t1, $f25
    ctx->pc = 0x18d5b8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_18d5bc:
    // 0x18d5bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18d5c0:
    // 0x18d5c0: 0xc066e08  jal         func_19B820
label_18d5c4:
    if (ctx->pc == 0x18D5C4u) {
        ctx->pc = 0x18D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5C0u;
        // 0x18d5c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5C8u;
        goto label_18d5c8;
    }
    ctx->pc = 0x18D5C0u;
    SET_GPR_U32(ctx, 31, 0x18D5C8u);
    ctx->pc = 0x18D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5C0u;
    // 0x18d5c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18D5C8u;
label_18d5c8:
    // 0x18d5c8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18d5cc:
    // 0x18d5cc: 0xc066daa  jal         func_19B6A8
label_18d5d0:
    if (ctx->pc == 0x18D5D0u) {
        ctx->pc = 0x18D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5CCu;
        // 0x18d5d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5D4u;
        goto label_18d5d4;
    }
    ctx->pc = 0x18D5CCu;
    SET_GPR_U32(ctx, 31, 0x18D5D4u);
    ctx->pc = 0x18D5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5CCu;
    // 0x18d5d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18D5D4u;
label_18d5d4:
    // 0x18d5d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18d5d8:
    // 0x18d5d8: 0xc066da0  jal         func_19B680
label_18d5dc:
    if (ctx->pc == 0x18D5DCu) {
        ctx->pc = 0x18D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D5D8u;
        // 0x18d5dc: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D5E0u;
        goto label_18d5e0;
    }
    ctx->pc = 0x18D5D8u;
    SET_GPR_U32(ctx, 31, 0x18D5E0u);
    ctx->pc = 0x18D5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D5D8u;
    // 0x18d5dc: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x18D5E0u;
label_18d5e0:
    // 0x18d5e0: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x18d5e0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_18d5e4:
    // 0x18d5e4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x18d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_18d5e8:
    // 0x18d5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d5ec:
    // 0x18d5ec: 0x0  nop
    ctx->pc = 0x18d5ecu;
    // NOP
label_18d5f0:
    // 0x18d5f0: 0x4600c836  c.le.s      $f25, $f0
    ctx->pc = 0x18d5f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d5f4:
    // 0x18d5f4: 0x0  nop
    ctx->pc = 0x18d5f4u;
    // NOP
label_18d5f8:
    // 0x18d5f8: 0x45010071  bc1t        . + 4 + (0x71 << 2)
label_18d5fc:
    if (ctx->pc == 0x18D5FCu) {
        ctx->pc = 0x18D600u;
        goto label_18d600;
    }
    ctx->pc = 0x18D5F8u;
    {
        const bool branch_taken_0x18d5f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d5f8) {
            ctx->pc = 0x18D7C0u;
            goto label_18d7c0;
        }
    }
    ctx->pc = 0x18D600u;
label_18d600:
    // 0x18d600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d604:
    // 0x18d604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d608:
    // 0x18d608: 0x0  nop
    ctx->pc = 0x18d608u;
    // NOP
label_18d60c:
    // 0x18d60c: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x18d60cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_18d610:
    // 0x18d610: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x18d610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d614:
    // 0x18d614: 0x0  nop
    ctx->pc = 0x18d614u;
    // NOP
label_18d618:
    // 0x18d618: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_18d61c:
    if (ctx->pc == 0x18D61Cu) {
        ctx->pc = 0x18D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D618u;
        // 0x18d61c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D620u;
        goto label_18d620;
    }
    ctx->pc = 0x18D618u;
    {
        const bool branch_taken_0x18d618 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D618u;
        // 0x18d61c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d618) {
            ctx->pc = 0x18D644u;
            goto label_18d644;
        }
    }
    ctx->pc = 0x18D620u;
label_18d620:
    // 0x18d620: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x18d620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_18d624:
    // 0x18d624: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x18d624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_18d628:
    // 0x18d628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d62c:
    // 0x18d62c: 0x0  nop
    ctx->pc = 0x18d62cu;
    // NOP
label_18d630:
    // 0x18d630: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x18d630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d634:
    // 0x18d634: 0x0  nop
    ctx->pc = 0x18d634u;
    // NOP
label_18d638:
    // 0x18d638: 0x45010061  bc1t        . + 4 + (0x61 << 2)
label_18d63c:
    if (ctx->pc == 0x18D63Cu) {
        ctx->pc = 0x18D640u;
        goto label_18d640;
    }
    ctx->pc = 0x18D638u;
    {
        const bool branch_taken_0x18d638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d638) {
            ctx->pc = 0x18D7C0u;
            goto label_18d7c0;
        }
    }
    ctx->pc = 0x18D640u;
label_18d640:
    // 0x18d640: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x18d640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_18d644:
    // 0x18d644: 0xc066e26  jal         func_19B898
label_18d648:
    if (ctx->pc == 0x18D648u) {
        ctx->pc = 0x18D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D644u;
        // 0x18d648: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D64Cu;
        goto label_18d64c;
    }
    ctx->pc = 0x18D644u;
    SET_GPR_U32(ctx, 31, 0x18D64Cu);
    ctx->pc = 0x18D648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D644u;
    // 0x18d648: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D64Cu;
label_18d64c:
    // 0x18d64c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x18d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_18d650:
    // 0x18d650: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x18d650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_18d654:
    // 0x18d654: 0xc066e08  jal         func_19B820
label_18d658:
    if (ctx->pc == 0x18D658u) {
        ctx->pc = 0x18D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D654u;
        // 0x18d658: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D65Cu;
        goto label_18d65c;
    }
    ctx->pc = 0x18D654u;
    SET_GPR_U32(ctx, 31, 0x18D65Cu);
    ctx->pc = 0x18D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D654u;
    // 0x18d658: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18D65Cu;
label_18d65c:
    // 0x18d65c: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x18d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_18d660:
    // 0x18d660: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x18d660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_18d664:
    // 0x18d664: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x18d664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_18d668:
    // 0x18d668: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x18d668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_18d66c:
    // 0x18d66c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18d66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d670:
    // 0x18d670: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18d670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_18d674:
    // 0x18d674: 0xc066d7a  jal         func_19B5E8
label_18d678:
    if (ctx->pc == 0x18D678u) {
        ctx->pc = 0x18D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D674u;
        // 0x18d678: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D67Cu;
        goto label_18d67c;
    }
    ctx->pc = 0x18D674u;
    SET_GPR_U32(ctx, 31, 0x18D67Cu);
    ctx->pc = 0x18D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D674u;
    // 0x18d678: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x18D67Cu;
label_18d67c:
    // 0x18d67c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x18d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_18d680:
    // 0x18d680: 0xc066daa  jal         func_19B6A8
label_18d684:
    if (ctx->pc == 0x18D684u) {
        ctx->pc = 0x18D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D680u;
        // 0x18d684: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D688u;
        goto label_18d688;
    }
    ctx->pc = 0x18D680u;
    SET_GPR_U32(ctx, 31, 0x18D688u);
    ctx->pc = 0x18D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D680u;
    // 0x18d684: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18D688u;
label_18d688:
    // 0x18d688: 0xc06d448  jal         func_1B5120
label_18d68c:
    if (ctx->pc == 0x18D68Cu) {
        ctx->pc = 0x18D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D688u;
        // 0x18d68c: 0xc7ac0110  lwc1        $f12, 0x110($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D690u;
        goto label_18d690;
    }
    ctx->pc = 0x18D688u;
    SET_GPR_U32(ctx, 31, 0x18D690u);
    ctx->pc = 0x18D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D688u;
    // 0x18d68c: 0xc7ac0110  lwc1        $f12, 0x110($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18D690u;
label_18d690:
    // 0x18d690: 0xc68100bc  lwc1        $f1, 0xBC($s4)
    ctx->pc = 0x18d690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d694:
    // 0x18d694: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18d694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d698:
    // 0x18d698: 0x0  nop
    ctx->pc = 0x18d698u;
    // NOP
label_18d69c:
    // 0x18d69c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_18d6a0:
    if (ctx->pc == 0x18D6A0u) {
        ctx->pc = 0x18D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D69Cu;
        // 0x18d6a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6A4u;
        goto label_18d6a4;
    }
    ctx->pc = 0x18D69Cu;
    {
        const bool branch_taken_0x18d69c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D69Cu;
        // 0x18d6a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d69c) {
            ctx->pc = 0x18D6B0u;
            goto label_18d6b0;
        }
    }
    ctx->pc = 0x18D6A4u;
label_18d6a4:
    // 0x18d6a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_18d6a8:
    if (ctx->pc == 0x18D6A8u) {
        ctx->pc = 0x18D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6A4u;
        // 0x18d6a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6ACu;
        goto label_18d6ac;
    }
    ctx->pc = 0x18D6A4u;
    {
        const bool branch_taken_0x18d6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6A4u;
        // 0x18d6a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6a4) {
            ctx->pc = 0x18D6B0u;
            goto label_18d6b0;
        }
    }
    ctx->pc = 0x18D6ACu;
label_18d6ac:
    // 0x18d6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d6b0:
    // 0x18d6b0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_18d6b4:
    if (ctx->pc == 0x18D6B4u) {
        ctx->pc = 0x18D6B8u;
        goto label_18d6b8;
    }
    ctx->pc = 0x18D6B0u;
    {
        const bool branch_taken_0x18d6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d6b0) {
            ctx->pc = 0x18D724u;
            goto label_18d724;
        }
    }
    ctx->pc = 0x18D6B8u;
label_18d6b8:
    // 0x18d6b8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x18d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_18d6bc:
    // 0x18d6bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d6c0:
    // 0x18d6c0: 0xc066e08  jal         func_19B820
label_18d6c4:
    if (ctx->pc == 0x18D6C4u) {
        ctx->pc = 0x18D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6C0u;
        // 0x18d6c4: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6C8u;
        goto label_18d6c8;
    }
    ctx->pc = 0x18D6C0u;
    SET_GPR_U32(ctx, 31, 0x18D6C8u);
    ctx->pc = 0x18D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6C0u;
    // 0x18d6c4: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18D6C8u;
label_18d6c8:
    // 0x18d6c8: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x18d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_18d6cc:
    // 0x18d6cc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x18d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_18d6d0:
    // 0x18d6d0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x18d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_18d6d4:
    // 0x18d6d4: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x18d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_18d6d8:
    // 0x18d6d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18d6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d6dc:
    // 0x18d6dc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_18d6e0:
    // 0x18d6e0: 0xc066d7a  jal         func_19B5E8
label_18d6e4:
    if (ctx->pc == 0x18D6E4u) {
        ctx->pc = 0x18D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6E0u;
        // 0x18d6e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6E8u;
        goto label_18d6e8;
    }
    ctx->pc = 0x18D6E0u;
    SET_GPR_U32(ctx, 31, 0x18D6E8u);
    ctx->pc = 0x18D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6E0u;
    // 0x18d6e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x18D6E8u;
label_18d6e8:
    // 0x18d6e8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x18d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_18d6ec:
    // 0x18d6ec: 0xc066daa  jal         func_19B6A8
label_18d6f0:
    if (ctx->pc == 0x18D6F0u) {
        ctx->pc = 0x18D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6ECu;
        // 0x18d6f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6F4u;
        goto label_18d6f4;
    }
    ctx->pc = 0x18D6ECu;
    SET_GPR_U32(ctx, 31, 0x18D6F4u);
    ctx->pc = 0x18D6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6ECu;
    // 0x18d6f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18D6F4u;
label_18d6f4:
    // 0x18d6f4: 0xc06d448  jal         func_1B5120
label_18d6f8:
    if (ctx->pc == 0x18D6F8u) {
        ctx->pc = 0x18D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D6F4u;
        // 0x18d6f8: 0xc7ac0124  lwc1        $f12, 0x124($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D6FCu;
        goto label_18d6fc;
    }
    ctx->pc = 0x18D6F4u;
    SET_GPR_U32(ctx, 31, 0x18D6FCu);
    ctx->pc = 0x18D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6F4u;
    // 0x18d6f8: 0xc7ac0124  lwc1        $f12, 0x124($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18D6FCu;
label_18d6fc:
    // 0x18d6fc: 0xc68100c0  lwc1        $f1, 0xC0($s4)
    ctx->pc = 0x18d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d700:
    // 0x18d700: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18d700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d704:
    // 0x18d704: 0x0  nop
    ctx->pc = 0x18d704u;
    // NOP
label_18d708:
    // 0x18d708: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_18d70c:
    if (ctx->pc == 0x18D70Cu) {
        ctx->pc = 0x18D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D708u;
        // 0x18d70c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D710u;
        goto label_18d710;
    }
    ctx->pc = 0x18D708u;
    {
        const bool branch_taken_0x18d708 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D708u;
        // 0x18d70c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d708) {
            ctx->pc = 0x18D71Cu;
            goto label_18d71c;
        }
    }
    ctx->pc = 0x18D710u;
label_18d710:
    // 0x18d710: 0x10000002  b           . + 4 + (0x2 << 2)
label_18d714:
    if (ctx->pc == 0x18D714u) {
        ctx->pc = 0x18D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D710u;
        // 0x18d714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D718u;
        goto label_18d718;
    }
    ctx->pc = 0x18D710u;
    {
        const bool branch_taken_0x18d710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D710u;
        // 0x18d714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d710) {
            ctx->pc = 0x18D71Cu;
            goto label_18d71c;
        }
    }
    ctx->pc = 0x18D718u;
label_18d718:
    // 0x18d718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d71c:
    // 0x18d71c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_18d720:
    if (ctx->pc == 0x18D720u) {
        ctx->pc = 0x18D724u;
        goto label_18d724;
    }
    ctx->pc = 0x18D71Cu;
    {
        const bool branch_taken_0x18d71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d71c) {
            ctx->pc = 0x18D7C0u;
            goto label_18d7c0;
        }
    }
    ctx->pc = 0x18D724u;
label_18d724:
    // 0x18d724: 0x3c02bf59  lui         $v0, 0xBF59
    ctx->pc = 0x18d724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48985 << 16));
label_18d728:
    // 0x18d728: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x18d728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_18d72c:
    // 0x18d72c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d730:
    // 0x18d730: 0x0  nop
    ctx->pc = 0x18d730u;
    // NOP
label_18d734:
    // 0x18d734: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x18d734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d738:
    // 0x18d738: 0x0  nop
    ctx->pc = 0x18d738u;
    // NOP
label_18d73c:
    // 0x18d73c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_18d740:
    if (ctx->pc == 0x18D740u) {
        ctx->pc = 0x18D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D73Cu;
        // 0x18d740: 0x4616b840  add.s       $f1, $f23, $f22 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D744u;
        goto label_18d744;
    }
    ctx->pc = 0x18D73Cu;
    {
        const bool branch_taken_0x18d73c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D73Cu;
        // 0x18d740: 0x4616b840  add.s       $f1, $f23, $f22 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d73c) {
            ctx->pc = 0x18D798u;
            goto label_18d798;
        }
    }
    ctx->pc = 0x18D744u;
label_18d744:
    // 0x18d744: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18d748:
    // 0x18d748: 0xc066e26  jal         func_19B898
label_18d74c:
    if (ctx->pc == 0x18D74Cu) {
        ctx->pc = 0x18D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D748u;
        // 0x18d74c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D750u;
        goto label_18d750;
    }
    ctx->pc = 0x18D748u;
    SET_GPR_U32(ctx, 31, 0x18D750u);
    ctx->pc = 0x18D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D748u;
    // 0x18d74c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D750u;
label_18d750:
    // 0x18d750: 0xc7ad0098  lwc1        $f13, 0x98($sp)
    ctx->pc = 0x18d750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d754:
    // 0x18d754: 0xc06d51e  jal         func_1B5478
label_18d758:
    if (ctx->pc == 0x18D758u) {
        ctx->pc = 0x18D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D754u;
        // 0x18d758: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D75Cu;
        goto label_18d75c;
    }
    ctx->pc = 0x18D754u;
    SET_GPR_U32(ctx, 31, 0x18D75Cu);
    ctx->pc = 0x18D758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D754u;
    // 0x18d758: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D75Cu;
label_18d75c:
    // 0x18d75c: 0x3c023c08  lui         $v0, 0x3C08
    ctx->pc = 0x18d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15368 << 16));
label_18d760:
    // 0x18d760: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18d760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18d764:
    // 0x18d764: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x18d764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_18d768:
    // 0x18d768: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d76c:
    // 0x18d76c: 0x4616b840  add.s       $f1, $f23, $f22
    ctx->pc = 0x18d76cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_18d770:
    // 0x18d770: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18d770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_18d774:
    // 0x18d774: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x18d774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18d778:
    // 0x18d778: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18d778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_18d77c:
    // 0x18d77c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d780:
    // 0x18d780: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18d780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18d784:
    // 0x18d784: 0xc063d10  jal         func_18F440
label_18d788:
    if (ctx->pc == 0x18D788u) {
        ctx->pc = 0x18D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D784u;
        // 0x18d788: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D78Cu;
        goto label_18d78c;
    }
    ctx->pc = 0x18D784u;
    SET_GPR_U32(ctx, 31, 0x18D78Cu);
    ctx->pc = 0x18D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D784u;
    // 0x18d788: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F440u;
    { ctx->pc = 0x18f440; return; }
    ctx->pc = 0x18D78Cu;
label_18d78c:
    // 0x18d78c: 0x1000000d  b           . + 4 + (0xD << 2)
label_18d790:
    if (ctx->pc == 0x18D790u) {
        ctx->pc = 0x18D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D78Cu;
        // 0x18d790: 0x968200e4  lhu         $v0, 0xE4($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D794u;
        goto label_18d794;
    }
    ctx->pc = 0x18D78Cu;
    {
        const bool branch_taken_0x18d78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D78Cu;
        // 0x18d790: 0x968200e4  lhu         $v0, 0xE4($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d78c) {
            ctx->pc = 0x18D7C4u;
            goto label_18d7c4;
        }
    }
    ctx->pc = 0x18D794u;
label_18d794:
    // 0x18d794: 0x4616b840  add.s       $f1, $f23, $f22
    ctx->pc = 0x18d794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_18d798:
    // 0x18d798: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18d798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_18d79c:
    // 0x18d79c: 0x3c023c08  lui         $v0, 0x3C08
    ctx->pc = 0x18d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15368 << 16));
label_18d7a0:
    // 0x18d7a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18d7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18d7a4:
    // 0x18d7a4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x18d7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_18d7a8:
    // 0x18d7a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d7ac:
    // 0x18d7ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18d7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d7b0:
    // 0x18d7b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18d7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d7b4:
    // 0x18d7b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18d7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18d7b8:
    // 0x18d7b8: 0xc063d10  jal         func_18F440
label_18d7bc:
    if (ctx->pc == 0x18D7BCu) {
        ctx->pc = 0x18D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7B8u;
        // 0x18d7bc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D7C0u;
        goto label_18d7c0;
    }
    ctx->pc = 0x18D7B8u;
    SET_GPR_U32(ctx, 31, 0x18D7C0u);
    ctx->pc = 0x18D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7B8u;
    // 0x18d7bc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F440u;
    { ctx->pc = 0x18f440; return; }
    ctx->pc = 0x18D7C0u;
label_18d7c0:
    // 0x18d7c0: 0x968200e4  lhu         $v0, 0xE4($s4)
    ctx->pc = 0x18d7c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 228)));
label_18d7c4:
    // 0x18d7c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18d7c8:
    // 0x18d7c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_18d7cc:
    if (ctx->pc == 0x18D7CCu) {
        ctx->pc = 0x18D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7C8u;
        // 0x18d7cc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D7D0u;
        goto label_18d7d0;
    }
    ctx->pc = 0x18D7C8u;
    {
        const bool branch_taken_0x18d7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7C8u;
        // 0x18d7cc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d7c8) {
            ctx->pc = 0x18D800u;
            goto label_18d800;
        }
    }
    ctx->pc = 0x18D7D0u;
label_18d7d0:
    // 0x18d7d0: 0x4616b840  add.s       $f1, $f23, $f22
    ctx->pc = 0x18d7d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_18d7d4:
    // 0x18d7d4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_18d7d8:
    // 0x18d7d8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x18d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_18d7dc:
    // 0x18d7dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18d7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18d7e0:
    // 0x18d7e0: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x18d7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_18d7e4:
    // 0x18d7e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d7e8:
    // 0x18d7e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18d7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18d7ec:
    // 0x18d7ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18d7ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d7f0:
    // 0x18d7f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18d7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18d7f4:
    // 0x18d7f4: 0xc063d10  jal         func_18F440
label_18d7f8:
    if (ctx->pc == 0x18D7F8u) {
        ctx->pc = 0x18D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7F4u;
        // 0x18d7f8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D7FCu;
        goto label_18d7fc;
    }
    ctx->pc = 0x18D7F4u;
    SET_GPR_U32(ctx, 31, 0x18D7FCu);
    ctx->pc = 0x18D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D7F4u;
    // 0x18d7f8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F440u;
    { ctx->pc = 0x18f440; return; }
    ctx->pc = 0x18D7FCu;
label_18d7fc:
    // 0x18d7fc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18d800:
    // 0x18d800: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d804:
    // 0x18d804: 0xc066e08  jal         func_19B820
label_18d808:
    if (ctx->pc == 0x18D808u) {
        ctx->pc = 0x18D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D804u;
        // 0x18d808: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D80Cu;
        goto label_18d80c;
    }
    ctx->pc = 0x18D804u;
    SET_GPR_U32(ctx, 31, 0x18D80Cu);
    ctx->pc = 0x18D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D804u;
    // 0x18d808: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18D80Cu;
label_18d80c:
    // 0x18d80c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18d80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18d810:
    // 0x18d810: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x18d810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_18d814:
    // 0x18d814: 0xc066daa  jal         func_19B6A8
label_18d818:
    if (ctx->pc == 0x18D818u) {
        ctx->pc = 0x18D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D814u;
        // 0x18d818: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D81Cu;
        goto label_18d81c;
    }
    ctx->pc = 0x18D814u;
    SET_GPR_U32(ctx, 31, 0x18D81Cu);
    ctx->pc = 0x18D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D814u;
    // 0x18d818: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18D81Cu;
label_18d81c:
    // 0x18d81c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x18d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_18d820:
    // 0x18d820: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18d820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18d824:
    // 0x18d824: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18d824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18d828:
    // 0x18d828: 0xc066e14  jal         func_19B850
label_18d82c:
    if (ctx->pc == 0x18D82Cu) {
        ctx->pc = 0x18D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D828u;
        // 0x18d82c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D830u;
        goto label_18d830;
    }
    ctx->pc = 0x18D828u;
    SET_GPR_U32(ctx, 31, 0x18D830u);
    ctx->pc = 0x18D82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D828u;
    // 0x18d82c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18D830u;
label_18d830:
    // 0x18d830: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18d830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18d834:
    // 0x18d834: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x18d834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d838:
    // 0x18d838: 0xc066e02  jal         func_19B808
label_18d83c:
    if (ctx->pc == 0x18D83Cu) {
        ctx->pc = 0x18D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D838u;
        // 0x18d83c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D840u;
        goto label_18d840;
    }
    ctx->pc = 0x18D838u;
    SET_GPR_U32(ctx, 31, 0x18D840u);
    ctx->pc = 0x18D83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D838u;
    // 0x18d83c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18D840u;
label_18d840:
    // 0x18d840: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x18d840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18d844:
    // 0x18d844: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x18d844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
label_18d848:
    // 0x18d848: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x18d848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d84c:
    // 0x18d84c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18d84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d850:
    // 0x18d850: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x18d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18d854:
    // 0x18d854: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d858:
    // 0x18d858: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18d858u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_18d85c:
    // 0x18d85c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18d85cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18d860:
    // 0x18d860: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x18d860u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_18d864:
    // 0x18d864: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x18d864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_18d868:
    // 0x18d868: 0x46801860  cvt.s.w     $f1, $f3
    ctx->pc = 0x18d868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18d86c:
    // 0x18d86c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18d86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18d870:
    // 0x18d870: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x18d870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_18d874:
    // 0x18d874: 0xc049e3c  jal         func_1278F0
label_18d878:
    if (ctx->pc == 0x18D878u) {
        ctx->pc = 0x18D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D874u;
        // 0x18d878: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D87Cu;
        goto label_18d87c;
    }
    ctx->pc = 0x18D874u;
    SET_GPR_U32(ctx, 31, 0x18D87Cu);
    ctx->pc = 0x18D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D874u;
    // 0x18d878: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278F0u, 0x18D874u, 0x18D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D87Cu;
label_18d87c:
    // 0x18d87c: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x18d87cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_18d880:
    // 0x18d880: 0xc049e3c  jal         func_1278F0
label_18d884:
    if (ctx->pc == 0x18D884u) {
        ctx->pc = 0x18D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D880u;
        // 0x18d884: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D888u;
        goto label_18d888;
    }
    ctx->pc = 0x18D880u;
    SET_GPR_U32(ctx, 31, 0x18D888u);
    ctx->pc = 0x18D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D880u;
    // 0x18d884: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278F0u, 0x18D880u, 0x18D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D888u;
label_18d888:
    // 0x18d888: 0x4600c0c1  sub.s       $f3, $f24, $f0
    ctx->pc = 0x18d888u;
    ctx->f[3] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
label_18d88c:
    // 0x18d88c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d88cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d890:
    // 0x18d890: 0x0  nop
    ctx->pc = 0x18d890u;
    // NOP
label_18d894:
    // 0x18d894: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x18d894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d898:
    // 0x18d898: 0x0  nop
    ctx->pc = 0x18d898u;
    // NOP
label_18d89c:
    // 0x18d89c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_18d8a0:
    if (ctx->pc == 0x18D8A0u) {
        ctx->pc = 0x18D8A4u;
        goto label_18d8a4;
    }
    ctx->pc = 0x18D89Cu;
    {
        const bool branch_taken_0x18d89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d89c) {
            ctx->pc = 0x18D8F8u;
            goto label_18d8f8;
        }
    }
    ctx->pc = 0x18D8A4u;
label_18d8a4:
    // 0x18d8a4: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x18d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
label_18d8a8:
    // 0x18d8a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d8ac:
    // 0x18d8ac: 0x0  nop
    ctx->pc = 0x18d8acu;
    // NOP
label_18d8b0:
    // 0x18d8b0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x18d8b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d8b4:
    // 0x18d8b4: 0x0  nop
    ctx->pc = 0x18d8b4u;
    // NOP
label_18d8b8:
    // 0x18d8b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_18d8bc:
    if (ctx->pc == 0x18D8BCu) {
        ctx->pc = 0x18D8C0u;
        goto label_18d8c0;
    }
    ctx->pc = 0x18D8B8u;
    {
        const bool branch_taken_0x18d8b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d8b8) {
            ctx->pc = 0x18D8C4u;
            goto label_18d8c4;
        }
    }
    ctx->pc = 0x18D8C0u;
label_18d8c0:
    // 0x18d8c0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x18d8c0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_18d8c4:
    // 0x18d8c4: 0xc6810094  lwc1        $f1, 0x94($s4)
    ctx->pc = 0x18d8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d8c8:
    // 0x18d8c8: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x18d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_18d8cc:
    // 0x18d8cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18d8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18d8d0:
    // 0x18d8d0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x18d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_18d8d4:
    // 0x18d8d4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18d8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_18d8d8:
    // 0x18d8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d8dc:
    // 0x18d8dc: 0x0  nop
    ctx->pc = 0x18d8dcu;
    // NOP
label_18d8e0:
    // 0x18d8e0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18d8e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_18d8e4:
    // 0x18d8e4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x18d8e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_18d8e8:
    // 0x18d8e8: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x18d8e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d8ec:
    // 0x18d8ec: 0x4603b580  add.s       $f22, $f22, $f3
    ctx->pc = 0x18d8ecu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[3]);
label_18d8f0:
    // 0x18d8f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_18d8f4:
    if (ctx->pc == 0x18D8F4u) {
        ctx->pc = 0x18D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8F0u;
        // 0x18d8f4: 0xe6830094  swc1        $f3, 0x94($s4) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D8F8u;
        goto label_18d8f8;
    }
    ctx->pc = 0x18D8F0u;
    {
        const bool branch_taken_0x18d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D8F0u;
        // 0x18d8f4: 0xe6830094  swc1        $f3, 0x94($s4) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d8f0) {
            ctx->pc = 0x18D8FCu;
            goto label_18d8fc;
        }
    }
    ctx->pc = 0x18D8F8u;
label_18d8f8:
    // 0x18d8f8: 0xe6800094  swc1        $f0, 0x94($s4)
    ctx->pc = 0x18d8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 148), bits); }
label_18d8fc:
    // 0x18d8fc: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x18d8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18d900:
    // 0x18d900: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18d900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18d904:
    // 0x18d904: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x18d904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18d908:
    // 0x18d908: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18d908u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18d90c:
    // 0x18d90c: 0x4a0002ff  vnop
    ctx->pc = 0x18d90cu;
    // NOP operation, no action needed for VU0
label_18d910:
    // 0x18d910: 0x4a0002ff  vnop
    ctx->pc = 0x18d910u;
    // NOP operation, no action needed for VU0
label_18d914:
    // 0x18d914: 0x4a0002ff  vnop
    ctx->pc = 0x18d914u;
    // NOP operation, no action needed for VU0
label_18d918:
    // 0x18d918: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18d918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18d91c:
    // 0x18d91c: 0x4a0002ff  vnop
    ctx->pc = 0x18d91cu;
    // NOP operation, no action needed for VU0
label_18d920:
    // 0x18d920: 0x4a0002ff  vnop
    ctx->pc = 0x18d920u;
    // NOP operation, no action needed for VU0
label_18d924:
    // 0x18d924: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18d924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18d928:
    // 0x18d928: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18d928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18d92c:
    // 0x18d92c: 0x4a0002ff  vnop
    ctx->pc = 0x18d92cu;
    // NOP operation, no action needed for VU0
label_18d930:
    // 0x18d930: 0x4a0002ff  vnop
    ctx->pc = 0x18d930u;
    // NOP operation, no action needed for VU0
label_18d934:
    // 0x18d934: 0x4a0002ff  vnop
    ctx->pc = 0x18d934u;
    // NOP operation, no action needed for VU0
label_18d938:
    // 0x18d938: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18d938u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18d93c:
    // 0x18d93c: 0x4a0003bf  vwaitq
    ctx->pc = 0x18d93cu;
    // VWAITQ (Q already resolved in this runtime)
label_18d940:
    // 0x18d940: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18d940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18d944:
    // 0x18d944: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18d944u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d948:
    // 0x18d948: 0x0  nop
    ctx->pc = 0x18d948u;
    // NOP
label_18d94c:
    // 0x18d94c: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x18d94cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d950:
    // 0x18d950: 0x0  nop
    ctx->pc = 0x18d950u;
    // NOP
label_18d954:
    // 0x18d954: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_18d958:
    if (ctx->pc == 0x18D958u) {
        ctx->pc = 0x18D95Cu;
        goto label_18d95c;
    }
    ctx->pc = 0x18D954u;
    {
        const bool branch_taken_0x18d954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d954) {
            ctx->pc = 0x18D9A4u;
            goto label_18d9a4;
        }
    }
    ctx->pc = 0x18D95Cu;
label_18d95c:
    // 0x18d95c: 0xc6980034  lwc1        $f24, 0x34($s4)
    ctx->pc = 0x18d95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_18d960:
    // 0x18d960: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x18d960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_18d964:
    // 0x18d964: 0xc066e08  jal         func_19B820
label_18d968:
    if (ctx->pc == 0x18D968u) {
        ctx->pc = 0x18D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D964u;
        // 0x18d968: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D96Cu;
        goto label_18d96c;
    }
    ctx->pc = 0x18D964u;
    SET_GPR_U32(ctx, 31, 0x18D96Cu);
    ctx->pc = 0x18D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D964u;
    // 0x18d968: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18D96Cu;
label_18d96c:
    // 0x18d96c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x18d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_18d970:
    // 0x18d970: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x18d970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_18d974:
    // 0x18d974: 0xc066daa  jal         func_19B6A8
label_18d978:
    if (ctx->pc == 0x18D978u) {
        ctx->pc = 0x18D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D974u;
        // 0x18d978: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D97Cu;
        goto label_18d97c;
    }
    ctx->pc = 0x18D974u;
    SET_GPR_U32(ctx, 31, 0x18D97Cu);
    ctx->pc = 0x18D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D974u;
    // 0x18d978: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18D97Cu;
label_18d97c:
    // 0x18d97c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x18d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_18d980:
    // 0x18d980: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x18d980u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_18d984:
    // 0x18d984: 0xc066e14  jal         func_19B850
label_18d988:
    if (ctx->pc == 0x18D988u) {
        ctx->pc = 0x18D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D984u;
        // 0x18d988: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D98Cu;
        goto label_18d98c;
    }
    ctx->pc = 0x18D984u;
    SET_GPR_U32(ctx, 31, 0x18D98Cu);
    ctx->pc = 0x18D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D984u;
    // 0x18d988: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18D98Cu;
label_18d98c:
    // 0x18d98c: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x18d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18d990:
    // 0x18d990: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d994:
    // 0x18d994: 0xc066e02  jal         func_19B808
label_18d998:
    if (ctx->pc == 0x18D998u) {
        ctx->pc = 0x18D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D994u;
        // 0x18d998: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D99Cu;
        goto label_18d99c;
    }
    ctx->pc = 0x18D994u;
    SET_GPR_U32(ctx, 31, 0x18D99Cu);
    ctx->pc = 0x18D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D994u;
    // 0x18d998: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18D99Cu;
label_18d99c:
    // 0x18d99c: 0x10000027  b           . + 4 + (0x27 << 2)
label_18d9a0:
    if (ctx->pc == 0x18D9A0u) {
        ctx->pc = 0x18D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D99Cu;
        // 0x18d9a0: 0xe6980034  swc1        $f24, 0x34($s4) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9A4u;
        goto label_18d9a4;
    }
    ctx->pc = 0x18D99Cu;
    {
        const bool branch_taken_0x18d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D99Cu;
        // 0x18d9a0: 0xe6980034  swc1        $f24, 0x34($s4) (Delay Slot)
        { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d99c) {
            ctx->pc = 0x18DA3Cu;
            goto label_18da3c;
        }
    }
    ctx->pc = 0x18D9A4u;
label_18d9a4:
    // 0x18d9a4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18d9a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18d9a8:
    // 0x18d9a8: 0x4a0002ff  vnop
    ctx->pc = 0x18d9a8u;
    // NOP operation, no action needed for VU0
label_18d9ac:
    // 0x18d9ac: 0x4a0002ff  vnop
    ctx->pc = 0x18d9acu;
    // NOP operation, no action needed for VU0
label_18d9b0:
    // 0x18d9b0: 0x4a0002ff  vnop
    ctx->pc = 0x18d9b0u;
    // NOP operation, no action needed for VU0
label_18d9b4:
    // 0x18d9b4: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18d9b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18d9b8:
    // 0x18d9b8: 0x4a0002ff  vnop
    ctx->pc = 0x18d9b8u;
    // NOP operation, no action needed for VU0
label_18d9bc:
    // 0x18d9bc: 0x4a0002ff  vnop
    ctx->pc = 0x18d9bcu;
    // NOP operation, no action needed for VU0
label_18d9c0:
    // 0x18d9c0: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18d9c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18d9c4:
    // 0x18d9c4: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18d9c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18d9c8:
    // 0x18d9c8: 0x4a0002ff  vnop
    ctx->pc = 0x18d9c8u;
    // NOP operation, no action needed for VU0
label_18d9cc:
    // 0x18d9cc: 0x4a0002ff  vnop
    ctx->pc = 0x18d9ccu;
    // NOP operation, no action needed for VU0
label_18d9d0:
    // 0x18d9d0: 0x4a0002ff  vnop
    ctx->pc = 0x18d9d0u;
    // NOP operation, no action needed for VU0
label_18d9d4:
    // 0x18d9d4: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18d9d4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18d9d8:
    // 0x18d9d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x18d9d8u;
    // VWAITQ (Q already resolved in this runtime)
label_18d9dc:
    // 0x18d9dc: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18d9dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18d9e0:
    // 0x18d9e0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18d9e0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d9e4:
    // 0x18d9e4: 0x0  nop
    ctx->pc = 0x18d9e4u;
    // NOP
label_18d9e8:
    // 0x18d9e8: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x18d9e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d9ec:
    // 0x18d9ec: 0x0  nop
    ctx->pc = 0x18d9ecu;
    // NOP
label_18d9f0:
    // 0x18d9f0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_18d9f4:
    if (ctx->pc == 0x18D9F4u) {
        ctx->pc = 0x18D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9F0u;
        // 0x18d9f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D9F8u;
        goto label_18d9f8;
    }
    ctx->pc = 0x18D9F0u;
    {
        const bool branch_taken_0x18d9f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D9F0u;
        // 0x18d9f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d9f0) {
            ctx->pc = 0x18DA40u;
            goto label_18da40;
        }
    }
    ctx->pc = 0x18D9F8u;
label_18d9f8:
    // 0x18d9f8: 0xc6980034  lwc1        $f24, 0x34($s4)
    ctx->pc = 0x18d9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_18d9fc:
    // 0x18d9fc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x18d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_18da00:
    // 0x18da00: 0xc066e08  jal         func_19B820
label_18da04:
    if (ctx->pc == 0x18DA04u) {
        ctx->pc = 0x18DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA00u;
        // 0x18da04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA08u;
        goto label_18da08;
    }
    ctx->pc = 0x18DA00u;
    SET_GPR_U32(ctx, 31, 0x18DA08u);
    ctx->pc = 0x18DA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA00u;
    // 0x18da04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18DA08u;
label_18da08:
    // 0x18da08: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x18da08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_18da0c:
    // 0x18da0c: 0xafa00144  sw          $zero, 0x144($sp)
    ctx->pc = 0x18da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 0));
label_18da10:
    // 0x18da10: 0xc066daa  jal         func_19B6A8
label_18da14:
    if (ctx->pc == 0x18DA14u) {
        ctx->pc = 0x18DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA10u;
        // 0x18da14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA18u;
        goto label_18da18;
    }
    ctx->pc = 0x18DA10u;
    SET_GPR_U32(ctx, 31, 0x18DA18u);
    ctx->pc = 0x18DA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA10u;
    // 0x18da14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18DA18u;
label_18da18:
    // 0x18da18: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x18da18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_18da1c:
    // 0x18da1c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x18da1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_18da20:
    // 0x18da20: 0xc066e14  jal         func_19B850
label_18da24:
    if (ctx->pc == 0x18DA24u) {
        ctx->pc = 0x18DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA20u;
        // 0x18da24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA28u;
        goto label_18da28;
    }
    ctx->pc = 0x18DA20u;
    SET_GPR_U32(ctx, 31, 0x18DA28u);
    ctx->pc = 0x18DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA20u;
    // 0x18da24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18DA28u;
label_18da28:
    // 0x18da28: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x18da28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18da2c:
    // 0x18da2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18da2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18da30:
    // 0x18da30: 0xc066e02  jal         func_19B808
label_18da34:
    if (ctx->pc == 0x18DA34u) {
        ctx->pc = 0x18DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA30u;
        // 0x18da34: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA38u;
        goto label_18da38;
    }
    ctx->pc = 0x18DA30u;
    SET_GPR_U32(ctx, 31, 0x18DA38u);
    ctx->pc = 0x18DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA30u;
    // 0x18da34: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18DA38u;
label_18da38:
    // 0x18da38: 0xe6980034  swc1        $f24, 0x34($s4)
    ctx->pc = 0x18da38u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_18da3c:
    // 0x18da3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18da3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_18da40:
    // 0x18da40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18da40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18da44:
    // 0x18da44: 0xc064324  jal         func_190C90
label_18da48:
    if (ctx->pc == 0x18DA48u) {
        ctx->pc = 0x18DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA44u;
        // 0x18da48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA4Cu;
        goto label_18da4c;
    }
    ctx->pc = 0x18DA44u;
    SET_GPR_U32(ctx, 31, 0x18DA4Cu);
    ctx->pc = 0x18DA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA44u;
    // 0x18da48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    { ctx->pc = 0x190c90; return; }
    ctx->pc = 0x18DA4Cu;
label_18da4c:
    // 0x18da4c: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x18da4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18da50:
    // 0x18da50: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x18da50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_18da54:
    // 0x18da54: 0xc6820074  lwc1        $f2, 0x74($s4)
    ctx->pc = 0x18da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18da58:
    // 0x18da58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18da58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18da5c:
    // 0x18da5c: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x18da5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_18da60:
    // 0x18da60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18da60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18da64:
    // 0x18da64: 0x0  nop
    ctx->pc = 0x18da64u;
    // NOP
label_18da68:
    // 0x18da68: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_18da6c:
    if (ctx->pc == 0x18DA6Cu) {
        ctx->pc = 0x18DA70u;
        goto label_18da70;
    }
    ctx->pc = 0x18DA68u;
    {
        const bool branch_taken_0x18da68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18da68) {
            ctx->pc = 0x18DA94u;
            goto label_18da94;
        }
    }
    ctx->pc = 0x18DA70u;
label_18da70:
    // 0x18da70: 0xc6810054  lwc1        $f1, 0x54($s4)
    ctx->pc = 0x18da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18da74:
    // 0x18da74: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18da74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_18da78:
    // 0x18da78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18da78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18da7c:
    // 0x18da7c: 0x0  nop
    ctx->pc = 0x18da7cu;
    // NOP
label_18da80:
    // 0x18da80: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18da80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_18da84:
    // 0x18da84: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x18da84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_18da88:
    // 0x18da88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18da88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18da8c:
    // 0x18da8c: 0x10000023  b           . + 4 + (0x23 << 2)
label_18da90:
    if (ctx->pc == 0x18DA90u) {
        ctx->pc = 0x18DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA8Cu;
        // 0x18da90: 0xe6800034  swc1        $f0, 0x34($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DA94u;
        goto label_18da94;
    }
    ctx->pc = 0x18DA8Cu;
    {
        const bool branch_taken_0x18da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA8Cu;
        // 0x18da90: 0xe6800034  swc1        $f0, 0x34($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da8c) {
            ctx->pc = 0x18DB1Cu;
            goto label_18db1c;
        }
    }
    ctx->pc = 0x18DA94u;
label_18da94:
    // 0x18da94: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18da94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18da98:
    // 0x18da98: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x18da98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18da9c:
    // 0x18da9c: 0xc066e26  jal         func_19B898
label_18daa0:
    if (ctx->pc == 0x18DAA0u) {
        ctx->pc = 0x18DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DA9Cu;
        // 0x18daa0: 0x248499b0  addiu       $a0, $a0, -0x6650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAA4u;
        goto label_18daa4;
    }
    ctx->pc = 0x18DA9Cu;
    SET_GPR_U32(ctx, 31, 0x18DAA4u);
    ctx->pc = 0x18DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA9Cu;
    // 0x18daa0: 0x248499b0  addiu       $a0, $a0, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18DAA4u;
label_18daa4:
    // 0x18daa4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18daa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18daa8:
    // 0x18daa8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x18daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_18daac:
    // 0x18daac: 0xc42199b4  lwc1        $f1, -0x664C($at)
    ctx->pc = 0x18daacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dab0:
    // 0x18dab0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_18dab4:
    // 0x18dab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18dab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dab8:
    // 0x18dab8: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x18dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18dabc:
    // 0x18dabc: 0x24a599b0  addiu       $a1, $a1, -0x6650
    ctx->pc = 0x18dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941104));
label_18dac0:
    // 0x18dac0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18dac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18dac4:
    // 0x18dac4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18dac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18dac8:
    // 0x18dac8: 0xc064cbc  jal         func_1932F0
label_18dacc:
    if (ctx->pc == 0x18DACCu) {
        ctx->pc = 0x18DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAC8u;
        // 0x18dacc: 0xe42099b4  swc1        $f0, -0x664C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAD0u;
        goto label_18dad0;
    }
    ctx->pc = 0x18DAC8u;
    SET_GPR_U32(ctx, 31, 0x18DAD0u);
    ctx->pc = 0x18DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAC8u;
    // 0x18dacc: 0xe42099b4  swc1        $f0, -0x664C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932F0u;
    { ctx->pc = 0x1932f0; return; }
    ctx->pc = 0x18DAD0u;
label_18dad0:
    // 0x18dad0: 0xe780887c  swc1        $f0, -0x7784($gp)
    ctx->pc = 0x18dad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936700), bits); }
label_18dad4:
    // 0x18dad4: 0xc781887c  lwc1        $f1, -0x7784($gp)
    ctx->pc = 0x18dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18dad8:
    // 0x18dad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18dad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18dadc:
    // 0x18dadc: 0x0  nop
    ctx->pc = 0x18dadcu;
    // NOP
label_18dae0:
    // 0x18dae0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x18dae0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18dae4:
    // 0x18dae4: 0x0  nop
    ctx->pc = 0x18dae4u;
    // NOP
label_18dae8:
    // 0x18dae8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_18daec:
    if (ctx->pc == 0x18DAECu) {
        ctx->pc = 0x18DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAE8u;
        // 0x18daec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAF0u;
        goto label_18daf0;
    }
    ctx->pc = 0x18DAE8u;
    {
        const bool branch_taken_0x18dae8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAE8u;
        // 0x18daec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dae8) {
            ctx->pc = 0x18DB20u;
            goto label_18db20;
        }
    }
    ctx->pc = 0x18DAF0u;
label_18daf0:
    // 0x18daf0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x18daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_18daf4:
    // 0x18daf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18daf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18daf8:
    // 0x18daf8: 0x0  nop
    ctx->pc = 0x18daf8u;
    // NOP
label_18dafc:
    // 0x18dafc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18dafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18db00:
    // 0x18db00: 0x0  nop
    ctx->pc = 0x18db00u;
    // NOP
label_18db04:
    // 0x18db04: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_18db08:
    if (ctx->pc == 0x18DB08u) {
        ctx->pc = 0x18DB0Cu;
        goto label_18db0c;
    }
    ctx->pc = 0x18DB04u;
    {
        const bool branch_taken_0x18db04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18db04) {
            ctx->pc = 0x18DB1Cu;
            goto label_18db1c;
        }
    }
    ctx->pc = 0x18DB0Cu;
label_18db0c:
    // 0x18db0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18db0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18db10:
    // 0x18db10: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x18db10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18db14:
    // 0x18db14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18db14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18db18:
    // 0x18db18: 0xe6800034  swc1        $f0, 0x34($s4)
    ctx->pc = 0x18db18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_18db1c:
    // 0x18db1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18db20:
    // 0x18db20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18db20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18db24:
    // 0x18db24: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x18db24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18db28:
    // 0x18db28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18db28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18db2c:
    // 0x18db2c: 0xc064e24  jal         func_193890
label_18db30:
    if (ctx->pc == 0x18DB30u) {
        ctx->pc = 0x18DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB2Cu;
        // 0x18db30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB34u;
        goto label_18db34;
    }
    ctx->pc = 0x18DB2Cu;
    SET_GPR_U32(ctx, 31, 0x18DB34u);
    ctx->pc = 0x18DB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB2Cu;
    // 0x18db30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193890u;
    { ctx->pc = 0x193890; return; }
    ctx->pc = 0x18DB34u;
label_18db34:
    // 0x18db34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18db34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18db38:
    // 0x18db38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18db38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18db3c:
    // 0x18db3c: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x18db3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18db40:
    // 0x18db40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x18db40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18db44:
    // 0x18db44: 0xc064e24  jal         func_193890
label_18db48:
    if (ctx->pc == 0x18DB48u) {
        ctx->pc = 0x18DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB44u;
        // 0x18db48: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB4Cu;
        goto label_18db4c;
    }
    ctx->pc = 0x18DB44u;
    SET_GPR_U32(ctx, 31, 0x18DB4Cu);
    ctx->pc = 0x18DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DB44u;
    // 0x18db48: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193890u;
    { ctx->pc = 0x193890; return; }
    ctx->pc = 0x18DB4Cu;
label_18db4c:
    // 0x18db4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18db50:
    // 0x18db50: 0x1623000b  bne         $s1, $v1, . + 4 + (0xB << 2)
label_18db54:
    if (ctx->pc == 0x18DB54u) {
        ctx->pc = 0x18DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB50u;
        // 0x18db54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB58u;
        goto label_18db58;
    }
    ctx->pc = 0x18DB50u;
    {
        const bool branch_taken_0x18db50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x18DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB50u;
        // 0x18db54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db50) {
            ctx->pc = 0x18DB80u;
            { ctx->pc = 0x18db80; return; }
        }
    }
    ctx->pc = 0x18DB58u;
label_18db58:
    // 0x18db58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_18db5c:
    if (ctx->pc == 0x18DB5Cu) {
        ctx->pc = 0x18DB60u;
        goto label_18db60;
    }
    ctx->pc = 0x18DB58u;
    {
        const bool branch_taken_0x18db58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18db58) {
            ctx->pc = 0x18DB7Cu;
            { ctx->pc = 0x18db7c; return; }
        }
    }
    ctx->pc = 0x18DB60u;
label_18db60:
    // 0x18db60: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18db60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18db64:
    // 0x18db64: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x18db64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18db68:
    // 0x18db68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18db68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18db6c:
    // 0x18db6c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18db70u;
    return;
}
