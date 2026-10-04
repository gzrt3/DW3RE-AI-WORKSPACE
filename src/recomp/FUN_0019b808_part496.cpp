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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part496(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28d338u: goto label_28d338;
        case 0x28d33cu: goto label_28d33c;
        case 0x28d340u: goto label_28d340;
        case 0x28d344u: goto label_28d344;
        case 0x28d348u: goto label_28d348;
        case 0x28d34cu: goto label_28d34c;
        case 0x28d350u: goto label_28d350;
        case 0x28d354u: goto label_28d354;
        case 0x28d358u: goto label_28d358;
        case 0x28d35cu: goto label_28d35c;
        case 0x28d360u: goto label_28d360;
        case 0x28d364u: goto label_28d364;
        case 0x28d368u: goto label_28d368;
        case 0x28d36cu: goto label_28d36c;
        case 0x28d370u: goto label_28d370;
        case 0x28d374u: goto label_28d374;
        case 0x28d378u: goto label_28d378;
        case 0x28d37cu: goto label_28d37c;
        case 0x28d380u: goto label_28d380;
        case 0x28d384u: goto label_28d384;
        case 0x28d388u: goto label_28d388;
        case 0x28d38cu: goto label_28d38c;
        case 0x28d390u: goto label_28d390;
        case 0x28d394u: goto label_28d394;
        case 0x28d398u: goto label_28d398;
        case 0x28d39cu: goto label_28d39c;
        case 0x28d3a0u: goto label_28d3a0;
        case 0x28d3a4u: goto label_28d3a4;
        case 0x28d3a8u: goto label_28d3a8;
        case 0x28d3acu: goto label_28d3ac;
        case 0x28d3b0u: goto label_28d3b0;
        case 0x28d3b4u: goto label_28d3b4;
        case 0x28d3b8u: goto label_28d3b8;
        case 0x28d3bcu: goto label_28d3bc;
        case 0x28d3c0u: goto label_28d3c0;
        case 0x28d3c4u: goto label_28d3c4;
        case 0x28d3c8u: goto label_28d3c8;
        case 0x28d3ccu: goto label_28d3cc;
        case 0x28d3d0u: goto label_28d3d0;
        case 0x28d3d4u: goto label_28d3d4;
        case 0x28d3d8u: goto label_28d3d8;
        case 0x28d3dcu: goto label_28d3dc;
        case 0x28d3e0u: goto label_28d3e0;
        case 0x28d3e4u: goto label_28d3e4;
        case 0x28d3e8u: goto label_28d3e8;
        case 0x28d3ecu: goto label_28d3ec;
        case 0x28d3f0u: goto label_28d3f0;
        case 0x28d3f4u: goto label_28d3f4;
        case 0x28d3f8u: goto label_28d3f8;
        case 0x28d3fcu: goto label_28d3fc;
        case 0x28d400u: goto label_28d400;
        case 0x28d404u: goto label_28d404;
        case 0x28d408u: goto label_28d408;
        case 0x28d40cu: goto label_28d40c;
        case 0x28d410u: goto label_28d410;
        case 0x28d414u: goto label_28d414;
        case 0x28d418u: goto label_28d418;
        case 0x28d41cu: goto label_28d41c;
        case 0x28d420u: goto label_28d420;
        case 0x28d424u: goto label_28d424;
        case 0x28d428u: goto label_28d428;
        case 0x28d42cu: goto label_28d42c;
        case 0x28d430u: goto label_28d430;
        case 0x28d434u: goto label_28d434;
        case 0x28d438u: goto label_28d438;
        case 0x28d43cu: goto label_28d43c;
        case 0x28d440u: goto label_28d440;
        case 0x28d444u: goto label_28d444;
        case 0x28d448u: goto label_28d448;
        case 0x28d44cu: goto label_28d44c;
        case 0x28d450u: goto label_28d450;
        case 0x28d454u: goto label_28d454;
        case 0x28d458u: goto label_28d458;
        case 0x28d45cu: goto label_28d45c;
        case 0x28d460u: goto label_28d460;
        case 0x28d464u: goto label_28d464;
        case 0x28d468u: goto label_28d468;
        case 0x28d46cu: goto label_28d46c;
        case 0x28d470u: goto label_28d470;
        case 0x28d474u: goto label_28d474;
        case 0x28d478u: goto label_28d478;
        case 0x28d47cu: goto label_28d47c;
        case 0x28d480u: goto label_28d480;
        case 0x28d484u: goto label_28d484;
        case 0x28d488u: goto label_28d488;
        case 0x28d48cu: goto label_28d48c;
        case 0x28d490u: goto label_28d490;
        case 0x28d494u: goto label_28d494;
        case 0x28d498u: goto label_28d498;
        case 0x28d49cu: goto label_28d49c;
        case 0x28d4a0u: goto label_28d4a0;
        case 0x28d4a4u: goto label_28d4a4;
        case 0x28d4a8u: goto label_28d4a8;
        case 0x28d4acu: goto label_28d4ac;
        case 0x28d4b0u: goto label_28d4b0;
        case 0x28d4b4u: goto label_28d4b4;
        case 0x28d4b8u: goto label_28d4b8;
        case 0x28d4bcu: goto label_28d4bc;
        case 0x28d4c0u: goto label_28d4c0;
        case 0x28d4c4u: goto label_28d4c4;
        case 0x28d4c8u: goto label_28d4c8;
        case 0x28d4ccu: goto label_28d4cc;
        case 0x28d4d0u: goto label_28d4d0;
        case 0x28d4d4u: goto label_28d4d4;
        case 0x28d4d8u: goto label_28d4d8;
        case 0x28d4dcu: goto label_28d4dc;
        case 0x28d4e0u: goto label_28d4e0;
        case 0x28d4e4u: goto label_28d4e4;
        case 0x28d4e8u: goto label_28d4e8;
        case 0x28d4ecu: goto label_28d4ec;
        case 0x28d4f0u: goto label_28d4f0;
        case 0x28d4f4u: goto label_28d4f4;
        case 0x28d4f8u: goto label_28d4f8;
        case 0x28d4fcu: goto label_28d4fc;
        case 0x28d500u: goto label_28d500;
        case 0x28d504u: goto label_28d504;
        case 0x28d508u: goto label_28d508;
        case 0x28d50cu: goto label_28d50c;
        case 0x28d510u: goto label_28d510;
        case 0x28d514u: goto label_28d514;
        case 0x28d518u: goto label_28d518;
        case 0x28d51cu: goto label_28d51c;
        case 0x28d520u: goto label_28d520;
        case 0x28d524u: goto label_28d524;
        case 0x28d528u: goto label_28d528;
        case 0x28d52cu: goto label_28d52c;
        case 0x28d530u: goto label_28d530;
        case 0x28d534u: goto label_28d534;
        case 0x28d538u: goto label_28d538;
        case 0x28d53cu: goto label_28d53c;
        case 0x28d540u: goto label_28d540;
        case 0x28d544u: goto label_28d544;
        case 0x28d548u: goto label_28d548;
        case 0x28d54cu: goto label_28d54c;
        case 0x28d550u: goto label_28d550;
        case 0x28d554u: goto label_28d554;
        case 0x28d558u: goto label_28d558;
        case 0x28d55cu: goto label_28d55c;
        case 0x28d560u: goto label_28d560;
        case 0x28d564u: goto label_28d564;
        case 0x28d568u: goto label_28d568;
        case 0x28d56cu: goto label_28d56c;
        case 0x28d570u: goto label_28d570;
        case 0x28d574u: goto label_28d574;
        case 0x28d578u: goto label_28d578;
        case 0x28d57cu: goto label_28d57c;
        case 0x28d580u: goto label_28d580;
        case 0x28d584u: goto label_28d584;
        case 0x28d588u: goto label_28d588;
        case 0x28d58cu: goto label_28d58c;
        case 0x28d590u: goto label_28d590;
        case 0x28d594u: goto label_28d594;
        case 0x28d598u: goto label_28d598;
        case 0x28d59cu: goto label_28d59c;
        case 0x28d5a0u: goto label_28d5a0;
        case 0x28d5a4u: goto label_28d5a4;
        case 0x28d5a8u: goto label_28d5a8;
        case 0x28d5acu: goto label_28d5ac;
        case 0x28d5b0u: goto label_28d5b0;
        case 0x28d5b4u: goto label_28d5b4;
        case 0x28d5b8u: goto label_28d5b8;
        case 0x28d5bcu: goto label_28d5bc;
        case 0x28d5c0u: goto label_28d5c0;
        case 0x28d5c4u: goto label_28d5c4;
        case 0x28d5c8u: goto label_28d5c8;
        case 0x28d5ccu: goto label_28d5cc;
        case 0x28d5d0u: goto label_28d5d0;
        case 0x28d5d4u: goto label_28d5d4;
        case 0x28d5d8u: goto label_28d5d8;
        case 0x28d5dcu: goto label_28d5dc;
        case 0x28d5e0u: goto label_28d5e0;
        case 0x28d5e4u: goto label_28d5e4;
        case 0x28d5e8u: goto label_28d5e8;
        case 0x28d5ecu: goto label_28d5ec;
        case 0x28d5f0u: goto label_28d5f0;
        case 0x28d5f4u: goto label_28d5f4;
        case 0x28d5f8u: goto label_28d5f8;
        case 0x28d5fcu: goto label_28d5fc;
        case 0x28d600u: goto label_28d600;
        case 0x28d604u: goto label_28d604;
        case 0x28d608u: goto label_28d608;
        case 0x28d60cu: goto label_28d60c;
        case 0x28d610u: goto label_28d610;
        case 0x28d614u: goto label_28d614;
        case 0x28d618u: goto label_28d618;
        case 0x28d61cu: goto label_28d61c;
        case 0x28d620u: goto label_28d620;
        case 0x28d624u: goto label_28d624;
        case 0x28d628u: goto label_28d628;
        case 0x28d62cu: goto label_28d62c;
        case 0x28d630u: goto label_28d630;
        case 0x28d634u: goto label_28d634;
        case 0x28d638u: goto label_28d638;
        case 0x28d63cu: goto label_28d63c;
        case 0x28d640u: goto label_28d640;
        case 0x28d644u: goto label_28d644;
        case 0x28d648u: goto label_28d648;
        case 0x28d64cu: goto label_28d64c;
        case 0x28d650u: goto label_28d650;
        case 0x28d654u: goto label_28d654;
        case 0x28d658u: goto label_28d658;
        case 0x28d65cu: goto label_28d65c;
        case 0x28d660u: goto label_28d660;
        case 0x28d664u: goto label_28d664;
        case 0x28d668u: goto label_28d668;
        case 0x28d66cu: goto label_28d66c;
        case 0x28d670u: goto label_28d670;
        case 0x28d674u: goto label_28d674;
        case 0x28d678u: goto label_28d678;
        case 0x28d67cu: goto label_28d67c;
        case 0x28d680u: goto label_28d680;
        case 0x28d684u: goto label_28d684;
        case 0x28d688u: goto label_28d688;
        case 0x28d68cu: goto label_28d68c;
        case 0x28d690u: goto label_28d690;
        case 0x28d694u: goto label_28d694;
        case 0x28d698u: goto label_28d698;
        case 0x28d69cu: goto label_28d69c;
        case 0x28d6a0u: goto label_28d6a0;
        case 0x28d6a4u: goto label_28d6a4;
        case 0x28d6a8u: goto label_28d6a8;
        case 0x28d6acu: goto label_28d6ac;
        case 0x28d6b0u: goto label_28d6b0;
        case 0x28d6b4u: goto label_28d6b4;
        case 0x28d6b8u: goto label_28d6b8;
        case 0x28d6bcu: goto label_28d6bc;
        case 0x28d6c0u: goto label_28d6c0;
        case 0x28d6c4u: goto label_28d6c4;
        case 0x28d6c8u: goto label_28d6c8;
        case 0x28d6ccu: goto label_28d6cc;
        case 0x28d6d0u: goto label_28d6d0;
        case 0x28d6d4u: goto label_28d6d4;
        case 0x28d6d8u: goto label_28d6d8;
        case 0x28d6dcu: goto label_28d6dc;
        case 0x28d6e0u: goto label_28d6e0;
        case 0x28d6e4u: goto label_28d6e4;
        case 0x28d6e8u: goto label_28d6e8;
        case 0x28d6ecu: goto label_28d6ec;
        case 0x28d6f0u: goto label_28d6f0;
        case 0x28d6f4u: goto label_28d6f4;
        case 0x28d6f8u: goto label_28d6f8;
        case 0x28d6fcu: goto label_28d6fc;
        case 0x28d700u: goto label_28d700;
        case 0x28d704u: goto label_28d704;
        case 0x28d708u: goto label_28d708;
        case 0x28d70cu: goto label_28d70c;
        case 0x28d710u: goto label_28d710;
        case 0x28d714u: goto label_28d714;
        case 0x28d718u: goto label_28d718;
        case 0x28d71cu: goto label_28d71c;
        case 0x28d720u: goto label_28d720;
        case 0x28d724u: goto label_28d724;
        case 0x28d728u: goto label_28d728;
        case 0x28d72cu: goto label_28d72c;
        case 0x28d730u: goto label_28d730;
        case 0x28d734u: goto label_28d734;
        case 0x28d738u: goto label_28d738;
        case 0x28d73cu: goto label_28d73c;
        case 0x28d740u: goto label_28d740;
        case 0x28d744u: goto label_28d744;
        case 0x28d748u: goto label_28d748;
        case 0x28d74cu: goto label_28d74c;
        case 0x28d750u: goto label_28d750;
        case 0x28d754u: goto label_28d754;
        case 0x28d758u: goto label_28d758;
        case 0x28d75cu: goto label_28d75c;
        case 0x28d760u: goto label_28d760;
        case 0x28d764u: goto label_28d764;
        case 0x28d768u: goto label_28d768;
        case 0x28d76cu: goto label_28d76c;
        case 0x28d770u: goto label_28d770;
        case 0x28d774u: goto label_28d774;
        case 0x28d778u: goto label_28d778;
        case 0x28d77cu: goto label_28d77c;
        case 0x28d780u: goto label_28d780;
        case 0x28d784u: goto label_28d784;
        case 0x28d788u: goto label_28d788;
        case 0x28d78cu: goto label_28d78c;
        case 0x28d790u: goto label_28d790;
        case 0x28d794u: goto label_28d794;
        case 0x28d798u: goto label_28d798;
        case 0x28d79cu: goto label_28d79c;
        case 0x28d7a0u: goto label_28d7a0;
        case 0x28d7a4u: goto label_28d7a4;
        case 0x28d7a8u: goto label_28d7a8;
        case 0x28d7acu: goto label_28d7ac;
        case 0x28d7b0u: goto label_28d7b0;
        case 0x28d7b4u: goto label_28d7b4;
        case 0x28d7b8u: goto label_28d7b8;
        case 0x28d7bcu: goto label_28d7bc;
        case 0x28d7c0u: goto label_28d7c0;
        case 0x28d7c4u: goto label_28d7c4;
        case 0x28d7c8u: goto label_28d7c8;
        case 0x28d7ccu: goto label_28d7cc;
        case 0x28d7d0u: goto label_28d7d0;
        case 0x28d7d4u: goto label_28d7d4;
        case 0x28d7d8u: goto label_28d7d8;
        case 0x28d7dcu: goto label_28d7dc;
        case 0x28d7e0u: goto label_28d7e0;
        case 0x28d7e4u: goto label_28d7e4;
        case 0x28d7e8u: goto label_28d7e8;
        case 0x28d7ecu: goto label_28d7ec;
        case 0x28d7f0u: goto label_28d7f0;
        case 0x28d7f4u: goto label_28d7f4;
        case 0x28d7f8u: goto label_28d7f8;
        case 0x28d7fcu: goto label_28d7fc;
        case 0x28d800u: goto label_28d800;
        case 0x28d804u: goto label_28d804;
        case 0x28d808u: goto label_28d808;
        case 0x28d80cu: goto label_28d80c;
        case 0x28d810u: goto label_28d810;
        case 0x28d814u: goto label_28d814;
        case 0x28d818u: goto label_28d818;
        case 0x28d81cu: goto label_28d81c;
        case 0x28d820u: goto label_28d820;
        case 0x28d824u: goto label_28d824;
        case 0x28d828u: goto label_28d828;
        case 0x28d82cu: goto label_28d82c;
        case 0x28d830u: goto label_28d830;
        case 0x28d834u: goto label_28d834;
        case 0x28d838u: goto label_28d838;
        case 0x28d83cu: goto label_28d83c;
        case 0x28d840u: goto label_28d840;
        case 0x28d844u: goto label_28d844;
        case 0x28d848u: goto label_28d848;
        case 0x28d84cu: goto label_28d84c;
        case 0x28d850u: goto label_28d850;
        case 0x28d854u: goto label_28d854;
        case 0x28d858u: goto label_28d858;
        case 0x28d85cu: goto label_28d85c;
        case 0x28d860u: goto label_28d860;
        case 0x28d864u: goto label_28d864;
        case 0x28d868u: goto label_28d868;
        case 0x28d86cu: goto label_28d86c;
        case 0x28d870u: goto label_28d870;
        case 0x28d874u: goto label_28d874;
        case 0x28d878u: goto label_28d878;
        case 0x28d87cu: goto label_28d87c;
        case 0x28d880u: goto label_28d880;
        case 0x28d884u: goto label_28d884;
        case 0x28d888u: goto label_28d888;
        case 0x28d88cu: goto label_28d88c;
        case 0x28d890u: goto label_28d890;
        case 0x28d894u: goto label_28d894;
        case 0x28d898u: goto label_28d898;
        case 0x28d89cu: goto label_28d89c;
        case 0x28d8a0u: goto label_28d8a0;
        case 0x28d8a4u: goto label_28d8a4;
        case 0x28d8a8u: goto label_28d8a8;
        case 0x28d8acu: goto label_28d8ac;
        case 0x28d8b0u: goto label_28d8b0;
        case 0x28d8b4u: goto label_28d8b4;
        case 0x28d8b8u: goto label_28d8b8;
        case 0x28d8bcu: goto label_28d8bc;
        case 0x28d8c0u: goto label_28d8c0;
        case 0x28d8c4u: goto label_28d8c4;
        case 0x28d8c8u: goto label_28d8c8;
        case 0x28d8ccu: goto label_28d8cc;
        case 0x28d8d0u: goto label_28d8d0;
        case 0x28d8d4u: goto label_28d8d4;
        case 0x28d8d8u: goto label_28d8d8;
        case 0x28d8dcu: goto label_28d8dc;
        case 0x28d8e0u: goto label_28d8e0;
        case 0x28d8e4u: goto label_28d8e4;
        case 0x28d8e8u: goto label_28d8e8;
        case 0x28d8ecu: goto label_28d8ec;
        case 0x28d8f0u: goto label_28d8f0;
        case 0x28d8f4u: goto label_28d8f4;
        case 0x28d8f8u: goto label_28d8f8;
        case 0x28d8fcu: goto label_28d8fc;
        case 0x28d900u: goto label_28d900;
        case 0x28d904u: goto label_28d904;
        case 0x28d908u: goto label_28d908;
        case 0x28d90cu: goto label_28d90c;
        case 0x28d910u: goto label_28d910;
        case 0x28d914u: goto label_28d914;
        case 0x28d918u: goto label_28d918;
        case 0x28d91cu: goto label_28d91c;
        case 0x28d920u: goto label_28d920;
        case 0x28d924u: goto label_28d924;
        case 0x28d928u: goto label_28d928;
        case 0x28d92cu: goto label_28d92c;
        case 0x28d930u: goto label_28d930;
        case 0x28d934u: goto label_28d934;
        case 0x28d938u: goto label_28d938;
        case 0x28d93cu: goto label_28d93c;
        case 0x28d940u: goto label_28d940;
        case 0x28d944u: goto label_28d944;
        case 0x28d948u: goto label_28d948;
        case 0x28d94cu: goto label_28d94c;
        case 0x28d950u: goto label_28d950;
        case 0x28d954u: goto label_28d954;
        case 0x28d958u: goto label_28d958;
        case 0x28d95cu: goto label_28d95c;
        case 0x28d960u: goto label_28d960;
        case 0x28d964u: goto label_28d964;
        case 0x28d968u: goto label_28d968;
        case 0x28d96cu: goto label_28d96c;
        case 0x28d970u: goto label_28d970;
        case 0x28d974u: goto label_28d974;
        case 0x28d978u: goto label_28d978;
        case 0x28d97cu: goto label_28d97c;
        case 0x28d980u: goto label_28d980;
        case 0x28d984u: goto label_28d984;
        case 0x28d988u: goto label_28d988;
        case 0x28d98cu: goto label_28d98c;
        case 0x28d990u: goto label_28d990;
        case 0x28d994u: goto label_28d994;
        case 0x28d998u: goto label_28d998;
        case 0x28d99cu: goto label_28d99c;
        case 0x28d9a0u: goto label_28d9a0;
        case 0x28d9a4u: goto label_28d9a4;
        case 0x28d9a8u: goto label_28d9a8;
        case 0x28d9acu: goto label_28d9ac;
        case 0x28d9b0u: goto label_28d9b0;
        case 0x28d9b4u: goto label_28d9b4;
        case 0x28d9b8u: goto label_28d9b8;
        case 0x28d9bcu: goto label_28d9bc;
        case 0x28d9c0u: goto label_28d9c0;
        case 0x28d9c4u: goto label_28d9c4;
        case 0x28d9c8u: goto label_28d9c8;
        case 0x28d9ccu: goto label_28d9cc;
        case 0x28d9d0u: goto label_28d9d0;
        case 0x28d9d4u: goto label_28d9d4;
        case 0x28d9d8u: goto label_28d9d8;
        case 0x28d9dcu: goto label_28d9dc;
        case 0x28d9e0u: goto label_28d9e0;
        case 0x28d9e4u: goto label_28d9e4;
        case 0x28d9e8u: goto label_28d9e8;
        case 0x28d9ecu: goto label_28d9ec;
        case 0x28d9f0u: goto label_28d9f0;
        case 0x28d9f4u: goto label_28d9f4;
        case 0x28d9f8u: goto label_28d9f8;
        case 0x28d9fcu: goto label_28d9fc;
        case 0x28da00u: goto label_28da00;
        case 0x28da04u: goto label_28da04;
        case 0x28da08u: goto label_28da08;
        case 0x28da0cu: goto label_28da0c;
        case 0x28da10u: goto label_28da10;
        case 0x28da14u: goto label_28da14;
        case 0x28da18u: goto label_28da18;
        case 0x28da1cu: goto label_28da1c;
        case 0x28da20u: goto label_28da20;
        case 0x28da24u: goto label_28da24;
        case 0x28da28u: goto label_28da28;
        case 0x28da2cu: goto label_28da2c;
        case 0x28da30u: goto label_28da30;
        case 0x28da34u: goto label_28da34;
        case 0x28da38u: goto label_28da38;
        case 0x28da3cu: goto label_28da3c;
        case 0x28da40u: goto label_28da40;
        case 0x28da44u: goto label_28da44;
        case 0x28da48u: goto label_28da48;
        case 0x28da4cu: goto label_28da4c;
        case 0x28da50u: goto label_28da50;
        case 0x28da54u: goto label_28da54;
        case 0x28da58u: goto label_28da58;
        case 0x28da5cu: goto label_28da5c;
        case 0x28da60u: goto label_28da60;
        case 0x28da64u: goto label_28da64;
        case 0x28da68u: goto label_28da68;
        case 0x28da6cu: goto label_28da6c;
        case 0x28da70u: goto label_28da70;
        case 0x28da74u: goto label_28da74;
        case 0x28da78u: goto label_28da78;
        case 0x28da7cu: goto label_28da7c;
        case 0x28da80u: goto label_28da80;
        case 0x28da84u: goto label_28da84;
        case 0x28da88u: goto label_28da88;
        case 0x28da8cu: goto label_28da8c;
        case 0x28da90u: goto label_28da90;
        case 0x28da94u: goto label_28da94;
        case 0x28da98u: goto label_28da98;
        case 0x28da9cu: goto label_28da9c;
        case 0x28daa0u: goto label_28daa0;
        case 0x28daa4u: goto label_28daa4;
        case 0x28daa8u: goto label_28daa8;
        case 0x28daacu: goto label_28daac;
        case 0x28dab0u: goto label_28dab0;
        case 0x28dab4u: goto label_28dab4;
        case 0x28dab8u: goto label_28dab8;
        case 0x28dabcu: goto label_28dabc;
        case 0x28dac0u: goto label_28dac0;
        case 0x28dac4u: goto label_28dac4;
        case 0x28dac8u: goto label_28dac8;
        case 0x28daccu: goto label_28dacc;
        case 0x28dad0u: goto label_28dad0;
        case 0x28dad4u: goto label_28dad4;
        case 0x28dad8u: goto label_28dad8;
        case 0x28dadcu: goto label_28dadc;
        case 0x28dae0u: goto label_28dae0;
        case 0x28dae4u: goto label_28dae4;
        case 0x28dae8u: goto label_28dae8;
        case 0x28daecu: goto label_28daec;
        case 0x28daf0u: goto label_28daf0;
        case 0x28daf4u: goto label_28daf4;
        case 0x28daf8u: goto label_28daf8;
        case 0x28dafcu: goto label_28dafc;
        case 0x28db00u: goto label_28db00;
        case 0x28db04u: goto label_28db04;
        default: return;
    }

label_28d338:
    // 0x28d338: 0x0  nop
    ctx->pc = 0x28d338u;
    // NOP
label_28d33c:
    // 0x28d33c: 0x0  nop
    ctx->pc = 0x28d33cu;
    // NOP
label_28d340:
    // 0x28d340: 0x0  nop
    ctx->pc = 0x28d340u;
    // NOP
label_28d344:
    // 0x28d344: 0x0  nop
    ctx->pc = 0x28d344u;
    // NOP
label_28d348:
    // 0x28d348: 0x0  nop
    ctx->pc = 0x28d348u;
    // NOP
label_28d34c:
    // 0x28d34c: 0x0  nop
    ctx->pc = 0x28d34cu;
    // NOP
label_28d350:
    // 0x28d350: 0x0  nop
    ctx->pc = 0x28d350u;
    // NOP
label_28d354:
    // 0x28d354: 0x0  nop
    ctx->pc = 0x28d354u;
    // NOP
label_28d358:
    // 0x28d358: 0x0  nop
    ctx->pc = 0x28d358u;
    // NOP
label_28d35c:
    // 0x28d35c: 0x0  nop
    ctx->pc = 0x28d35cu;
    // NOP
label_28d360:
    // 0x28d360: 0x2cd5c0  .word       0x002CD5C0                   # sll         $k0, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d360u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_28d364:
    // 0x28d364: 0x2cd600  .word       0x002CD600                   # sll         $k0, $t4, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d364u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_28d368:
    // 0x28d368: 0x2cd640  .word       0x002CD640                   # sll         $k0, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d368u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_28d36c:
    // 0x28d36c: 0x2cd6a0  .word       0x002CD6A0                   # add         $k0, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d36cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_28d370:
    // 0x28d370: 0x2cd6f0  tge         $at, $t4, 859
    ctx->pc = 0x28d370u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d374:
    // 0x28d374: 0x2cd730  tge         $at, $t4, 860
    ctx->pc = 0x28d374u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d378:
    // 0x28d378: 0x2cd770  tge         $at, $t4, 861
    ctx->pc = 0x28d378u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d37c:
    // 0x28d37c: 0x2cd7e0  .word       0x002CD7E0                   # add         $k0, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d37cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_28d380:
    // 0x28d380: 0x2cd850  .word       0x002CD850                   # mfhi        $k1 # 002C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d380u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d384:
    // 0x28d384: 0x2cd8c0  .word       0x002CD8C0                   # sll         $k1, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d384u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_28d388:
    // 0x28d388: 0x2cd980  .word       0x002CD980                   # sll         $k1, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d388u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_28d38c:
    // 0x28d38c: 0x2cd9c0  .word       0x002CD9C0                   # sll         $k1, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d38cu;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_28d390:
    // 0x28d390: 0x2cda10  .word       0x002CDA10                   # mfhi        $k1 # 002C0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d390u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d394:
    // 0x28d394: 0x2cda50  .word       0x002CDA50                   # mfhi        $k1 # 002C0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d394u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d398:
    // 0x28d398: 0x2cda90  .word       0x002CDA90                   # mfhi        $k1 # 002C0280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d398u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d39c:
    // 0x28d39c: 0x2cdad0  .word       0x002CDAD0                   # mfhi        $k1 # 002C02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d39cu;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d3a0:
    // 0x28d3a0: 0x2cdb20  .word       0x002CDB20                   # add         $k1, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3a4:
    // 0x28d3a4: 0x2cdb60  .word       0x002CDB60                   # add         $k1, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3a8:
    // 0x28d3a8: 0x2cdb20  .word       0x002CDB20                   # add         $k1, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3ac:
    // 0x28d3ac: 0x2cdb20  .word       0x002CDB20                   # add         $k1, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3acu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3b0:
    // 0x28d3b0: 0x2cdba0  .word       0x002CDBA0                   # add         $k1, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3b4:
    // 0x28d3b4: 0x2cdbc0  .word       0x002CDBC0                   # sll         $k1, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3b4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_28d3b8:
    // 0x28d3b8: 0x2cdbd0  .word       0x002CDBD0                   # mfhi        $k1 # 002C03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3b8u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d3bc:
    // 0x28d3bc: 0x2cdbe0  .word       0x002CDBE0                   # add         $k1, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3c0:
    // 0x28d3c0: 0x2cdc48  .word       0x002CDC48                   # jr          $at # 000CDC40 <InstrIdType: CPU_SPECIAL>
label_28d3c4:
    if (ctx->pc == 0x28D3C4u) {
        ctx->pc = 0x28D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3C0u;
        // 0x28d3c4: 0x2cdc58  .word       0x002CDC58                   # mult        $k1, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D3C8u;
        goto label_28d3c8;
    }
    ctx->pc = 0x28D3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x28D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3C0u;
        // 0x28d3c4: 0x2cdc58  .word       0x002CDC58                   # mult        $k1, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D3C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D3C8u;
label_28d3c8:
    // 0x28d3c8: 0x2cdc70  tge         $at, $t4, 881
    ctx->pc = 0x28d3c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d3cc:
    // 0x28d3cc: 0x2cdc90  .word       0x002CDC90                   # mfhi        $k1 # 002C0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3ccu;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d3d0:
    // 0x28d3d0: 0x2cdcb0  tge         $at, $t4, 882
    ctx->pc = 0x28d3d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d3d4:
    // 0x28d3d4: 0x2cdcd0  .word       0x002CDCD0                   # mfhi        $k1 # 002C04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3d4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d3d8:
    // 0x28d3d8: 0x2cdcf0  tge         $at, $t4, 883
    ctx->pc = 0x28d3d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d3dc:
    // 0x28d3dc: 0x2cdd60  .word       0x002CDD60                   # add         $k1, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3e0:
    // 0x28d3e0: 0x2cdda0  .word       0x002CDDA0                   # add         $k1, $at, $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3e0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3e4:
    // 0x28d3e4: 0x2cddd0  .word       0x002CDDD0                   # mfhi        $k1 # 002C05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3e4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d3e8:
    // 0x28d3e8: 0x2cde00  .word       0x002CDE00                   # sll         $k1, $t4, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3e8u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_28d3ec:
    // 0x28d3ec: 0x0  nop
    ctx->pc = 0x28d3ecu;
    // NOP
label_28d3f0:
    // 0x28d3f0: 0x2010309  .word       0x02010309                   # jalr        $zero, $s0 # 00010300 <InstrIdType: CPU_SPECIAL>
label_28d3f4:
    if (ctx->pc == 0x28D3F4u) {
        ctx->pc = 0x28D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3F0u;
        // 0x28d3f4: 0x70405  .word       0x00070405                   # INVALID     $zero, $a3, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28D3F4 raw=0x00070405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D3F8u;
        goto label_28d3f8;
    }
    ctx->pc = 0x28D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        ctx->pc = 0x28D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3F0u;
        // 0x28d3f4: 0x70405  .word       0x00070405                   # INVALID     $zero, $a3, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28D3F4 raw=0x00070405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D3F0u, 0x28D3F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D3F8u;
label_28d3f8:
    // 0x28d3f8: 0x8  jr          $zero
label_28d3fc:
    if (ctx->pc == 0x28D3FCu) {
        ctx->pc = 0x28D400u;
        goto label_28d400;
    }
    ctx->pc = 0x28D3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D3F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D400u;
label_28d400:
    // 0x28d400: 0xffffff00  sd          $ra, -0x100($ra)
    ctx->pc = 0x28d400u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967040), GPR_U64(ctx, 31));
label_28d404:
    // 0x28d404: 0xff01ffff  sd          $at, -0x1($t8)
    ctx->pc = 0x28d404u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 4294967295), GPR_U64(ctx, 1));
label_28d408:
    // 0x28d408: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28d408u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28d40c:
    // 0x28d40c: 0x4ffffff  .word       0x04FFFFFF                   # INVALID     $a3, $ra, -0x1 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28d40cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1F at 0x28D40C raw=0x04FFFFFF");
 /* MITIGATED */
label_28d410:
    // 0x28d410: 0xffff02ff  sd          $ra, 0x2FF($ra)
    ctx->pc = 0x28d410u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 767), GPR_U64(ctx, 31));
label_28d414:
    // 0x28d414: 0x3ffff  dsra32      $ra, $v1, 31
    ctx->pc = 0x28d414u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 3) >> (32 + 31));
label_28d418:
    // 0x28d418: 0x0  nop
    ctx->pc = 0x28d418u;
    // NOP
label_28d41c:
    // 0x28d41c: 0x0  nop
    ctx->pc = 0x28d41cu;
    // NOP
label_28d420:
    // 0x28d420: 0x281  .word       0x00000281                   # INVALID     $zero, $zero, 0x281 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28D420 raw=0x00000281"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d424:
    // 0x28d424: 0x293  .word       0x00000293                   # mtlo        $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d424u;
    ctx->lo = GPR_U64(ctx, 0);
label_28d428:
    // 0x28d428: 0x2aa  .word       0x000002AA                   # slt         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d428u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_28d42c:
    // 0x28d42c: 0x2bc  dsll32      $zero, $zero, 10
    ctx->pc = 0x28d42cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 10));
label_28d430:
    // 0x28d430: 0x2ce  .word       0x000002CE                   # INVALID     $zero, $zero, 0x2CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28D430 raw=0x000002CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d434:
    // 0x28d434: 0x2e5  .word       0x000002E5                   # move        $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d434u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_28d438:
    // 0x28d438: 0x2fb  dsra        $zero, $zero, 11
    ctx->pc = 0x28d438u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 11);
label_28d43c:
    // 0x28d43c: 0x30e  .word       0x0000030E                   # INVALID     $zero, $zero, 0x30E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d43cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28D43C raw=0x0000030E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d440:
    // 0x28d440: 0x325  .word       0x00000325                   # move        $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d440u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_28d444:
    // 0x28d444: 0x33a  dsrl        $zero, $zero, 12
    ctx->pc = 0x28d444u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 12);
label_28d448:
    // 0x28d448: 0x34c  syscall     13
    ctx->pc = 0x28d448u;
    ctx->pc = 0x28D44Cu;
runtime->handleSyscall(rdram, ctx, 0xDu);
label_28d44c:
    // 0x28d44c: 0x362  .word       0x00000362                   # neg         $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d44cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28d450:
    // 0x28d450: 0x375  .word       0x00000375                   # INVALID     $zero, $zero, 0x375 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x28D450 raw=0x00000375"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d454:
    // 0x28d454: 0x38b  .word       0x0000038B                   # movn        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d454u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28d458:
    // 0x28d458: 0x3a2  .word       0x000003A2                   # neg         $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d458u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28d45c:
    // 0x28d45c: 0x3ba  dsrl        $zero, $zero, 14
    ctx->pc = 0x28d45cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 14);
label_28d460:
    // 0x28d460: 0x3cc  syscall     15
    ctx->pc = 0x28d460u;
    ctx->pc = 0x28D464u;
runtime->handleSyscall(rdram, ctx, 0xFu);
label_28d464:
    // 0x28d464: 0x3e1  .word       0x000003E1                   # addu        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d464u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28d468:
    // 0x28d468: 0x3f3  tltu        $zero, $zero, 15
    ctx->pc = 0x28d468u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28d46c:
    // 0x28d46c: 0x406  .word       0x00000406                   # srlv        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d46cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28d470:
    // 0x28d470: 0x418  .word       0x00000418                   # mult        $zero, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28d470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28d474:
    // 0x28d474: 0x42b  .word       0x0000042B                   # sltu        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d474u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28d478:
    // 0x28d478: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x28d478u;
    
label_28d47c:
    // 0x28d47c: 0x0  nop
    ctx->pc = 0x28d47cu;
    // NOP
label_28d480:
    // 0x28d480: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x28d480u;
    
label_28d484:
    // 0x28d484: 0x292  .word       0x00000292                   # mflo        $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d484u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28d488:
    // 0x28d488: 0x2a9  .word       0x000002A9                   # mtsa        $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28d488u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_28d48c:
    // 0x28d48c: 0x2bb  dsra        $zero, $zero, 10
    ctx->pc = 0x28d48cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 10);
label_28d490:
    // 0x28d490: 0x2cd  break       0, 11
    ctx->pc = 0x28d490u;
    runtime->handleBreak(rdram, ctx);
label_28d494:
    // 0x28d494: 0x2e4  .word       0x000002E4                   # and         $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d494u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28d498:
    // 0x28d498: 0x2fa  dsrl        $zero, $zero, 11
    ctx->pc = 0x28d498u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 11);
label_28d49c:
    // 0x28d49c: 0x30d  break       0, 12
    ctx->pc = 0x28d49cu;
    runtime->handleBreak(rdram, ctx);
label_28d4a0:
    // 0x28d4a0: 0x324  .word       0x00000324                   # and         $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28d4a4:
    // 0x28d4a4: 0x339  .word       0x00000339                   # INVALID     $zero, $zero, 0x339 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28D4A4 raw=0x00000339"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d4a8:
    // 0x28d4a8: 0x34b  .word       0x0000034B                   # movn        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4a8u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28d4ac:
    // 0x28d4ac: 0x361  .word       0x00000361                   # addu        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4acu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28d4b0:
    // 0x28d4b0: 0x374  teq         $zero, $zero, 13
    ctx->pc = 0x28d4b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28d4b4:
    // 0x28d4b4: 0x38a  .word       0x0000038A                   # movz        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4b4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28d4b8:
    // 0x28d4b8: 0x3a1  .word       0x000003A1                   # addu        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28d4bc:
    // 0x28d4bc: 0x3b9  .word       0x000003B9                   # INVALID     $zero, $zero, 0x3B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28D4BC raw=0x000003B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d4c0:
    // 0x28d4c0: 0x3cb  .word       0x000003CB                   # movn        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4c0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28d4c4:
    // 0x28d4c4: 0x3e0  .word       0x000003E0                   # add         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28d4c8:
    // 0x28d4c8: 0x3f2  tlt         $zero, $zero, 15
    ctx->pc = 0x28d4c8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28d4cc:
    // 0x28d4cc: 0x405  .word       0x00000405                   # INVALID     $zero, $zero, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28D4CC raw=0x00000405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d4d0:
    // 0x28d4d0: 0x417  .word       0x00000417                   # dsrav       $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4d0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28d4d4:
    // 0x28d4d4: 0x42a  .word       0x0000042A                   # slt         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4d4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_28d4d8:
    // 0x28d4d8: 0x43f  dsra32      $zero, $zero, 16
    ctx->pc = 0x28d4d8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 16));
label_28d4dc:
    // 0x28d4dc: 0x0  nop
    ctx->pc = 0x28d4dcu;
    // NOP
label_28d4e0:
    // 0x28d4e0: 0x27f  dsra32      $zero, $zero, 9
    ctx->pc = 0x28d4e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 9));
label_28d4e4:
    // 0x28d4e4: 0x291  .word       0x00000291                   # mthi        $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4e4u;
    ctx->hi = GPR_U64(ctx, 0);
label_28d4e8:
    // 0x28d4e8: 0x2a8  .word       0x000002A8                   # mfsa        $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28d4e8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28d4ec:
    // 0x28d4ec: 0x2ba  dsrl        $zero, $zero, 10
    ctx->pc = 0x28d4ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 10);
label_28d4f0:
    // 0x28d4f0: 0x2cc  syscall     11
    ctx->pc = 0x28d4f0u;
    ctx->pc = 0x28D4F4u;
runtime->handleSyscall(rdram, ctx, 0xBu);
label_28d4f4:
    // 0x28d4f4: 0x2e3  .word       0x000002E3                   # negu        $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28d4f8:
    // 0x28d4f8: 0x2f9  .word       0x000002F9                   # INVALID     $zero, $zero, 0x2F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d4f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28D4F8 raw=0x000002F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d4fc:
    // 0x28d4fc: 0x30c  syscall     12
    ctx->pc = 0x28d4fcu;
    ctx->pc = 0x28D500u;
runtime->handleSyscall(rdram, ctx, 0xCu);
label_28d500:
    // 0x28d500: 0x323  .word       0x00000323                   # negu        $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d500u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28d504:
    // 0x28d504: 0x338  dsll        $zero, $zero, 12
    ctx->pc = 0x28d504u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 12);
label_28d508:
    // 0x28d508: 0x34a  .word       0x0000034A                   # movz        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d508u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28d50c:
    // 0x28d50c: 0x360  .word       0x00000360                   # add         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d50cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28d510:
    // 0x28d510: 0x373  tltu        $zero, $zero, 13
    ctx->pc = 0x28d510u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28d514:
    // 0x28d514: 0x389  .word       0x00000389                   # jalr        $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
label_28d518:
    if (ctx->pc == 0x28D518u) {
        ctx->pc = 0x28D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D514u;
        // 0x28d518: 0x3a0  .word       0x000003A0                   # add         $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D51Cu;
        goto label_28d51c;
    }
    ctx->pc = 0x28D514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D514u;
        // 0x28d518: 0x3a0  .word       0x000003A0                   # add         $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D514u, 0x28D51Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D51Cu;
label_28d51c:
    // 0x28d51c: 0x3b8  dsll        $zero, $zero, 14
    ctx->pc = 0x28d51cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 14);
label_28d520:
    // 0x28d520: 0x3ca  .word       0x000003CA                   # movz        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d520u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28d524:
    // 0x28d524: 0x3df  .word       0x000003DF                   # ddivu       $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d524u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28D524 raw=0x000003DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d528:
    // 0x28d528: 0x3f1  tgeu        $zero, $zero, 15
    ctx->pc = 0x28d528u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28d52c:
    // 0x28d52c: 0x404  .word       0x00000404                   # sllv        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d52cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28d530:
    // 0x28d530: 0x416  .word       0x00000416                   # dsrlv       $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d530u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28d534:
    // 0x28d534: 0x429  .word       0x00000429                   # mtsa        $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28d534u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_28d538:
    // 0x28d538: 0x43e  dsrl32      $zero, $zero, 16
    ctx->pc = 0x28d538u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 16));
label_28d53c:
    // 0x28d53c: 0x0  nop
    ctx->pc = 0x28d53cu;
    // NOP
label_28d540:
    // 0x28d540: 0x282  srl         $zero, $zero, 10
    ctx->pc = 0x28d540u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 10));
label_28d544:
    // 0x28d544: 0x294  .word       0x00000294                   # dsllv       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d544u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28d548:
    // 0x28d548: 0x2ab  .word       0x000002AB                   # sltu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d548u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28d54c:
    // 0x28d54c: 0x2bd  .word       0x000002BD                   # INVALID     $zero, $zero, 0x2BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d54cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x28D54C raw=0x000002BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d550:
    // 0x28d550: 0x2cf  sync
    ctx->pc = 0x28d550u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28d554:
    // 0x28d554: 0x2e6  .word       0x000002E6                   # xor         $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d554u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_28d558:
    // 0x28d558: 0x2fc  dsll32      $zero, $zero, 11
    ctx->pc = 0x28d558u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 11));
label_28d55c:
    // 0x28d55c: 0x30f  sync
    ctx->pc = 0x28d55cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28d560:
    // 0x28d560: 0x326  .word       0x00000326                   # xor         $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d560u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_28d564:
    // 0x28d564: 0x33b  dsra        $zero, $zero, 12
    ctx->pc = 0x28d564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 12);
label_28d568:
    // 0x28d568: 0x34d  break       0, 13
    ctx->pc = 0x28d568u;
    runtime->handleBreak(rdram, ctx);
label_28d56c:
    // 0x28d56c: 0x363  .word       0x00000363                   # negu        $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d56cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28d570:
    // 0x28d570: 0x376  tne         $zero, $zero, 13
    ctx->pc = 0x28d570u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28d574:
    // 0x28d574: 0x38c  syscall     14
    ctx->pc = 0x28d574u;
    ctx->pc = 0x28D578u;
runtime->handleSyscall(rdram, ctx, 0xEu);
label_28d578:
    // 0x28d578: 0x3a3  .word       0x000003A3                   # negu        $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d578u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28d57c:
    // 0x28d57c: 0x3bb  dsra        $zero, $zero, 14
    ctx->pc = 0x28d57cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 14);
label_28d580:
    // 0x28d580: 0x3cd  break       0, 15
    ctx->pc = 0x28d580u;
    runtime->handleBreak(rdram, ctx);
label_28d584:
    // 0x28d584: 0x3e2  .word       0x000003E2                   # neg         $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d584u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28d588:
    // 0x28d588: 0x3f4  teq         $zero, $zero, 15
    ctx->pc = 0x28d588u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28d58c:
    // 0x28d58c: 0x407  .word       0x00000407                   # srav        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d58cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28d590:
    // 0x28d590: 0x419  .word       0x00000419                   # multu       $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d590u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28d594:
    // 0x28d594: 0x42c  .word       0x0000042C                   # dadd        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d594u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28d598:
    // 0x28d598: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d598u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28D598 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d59c:
    // 0x28d59c: 0x0  nop
    ctx->pc = 0x28d59cu;
    // NOP
label_28d5a0:
    // 0x28d5a0: 0x0  nop
    ctx->pc = 0x28d5a0u;
    // NOP
label_28d5a4:
    // 0x28d5a4: 0x0  nop
    ctx->pc = 0x28d5a4u;
    // NOP
label_28d5a8:
    // 0x28d5a8: 0xc4000000  lwc1        $f0, 0x0($zero)
    ctx->pc = 0x28d5a8u;
    { uint32_t bits = FAST_READ32(0x0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d5ac:
    // 0x28d5ac: 0x0  nop
    ctx->pc = 0x28d5acu;
    // NOP
label_28d5b0:
    // 0x28d5b0: 0x0  nop
    ctx->pc = 0x28d5b0u;
    // NOP
label_28d5b4:
    // 0x28d5b4: 0x0  nop
    ctx->pc = 0x28d5b4u;
    // NOP
label_28d5b8:
    // 0x28d5b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d5b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d5bc:
    // 0x28d5bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d5bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d5c0:
    // 0x28d5c0: 0x0  nop
    ctx->pc = 0x28d5c0u;
    // NOP
label_28d5c4:
    // 0x28d5c4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d5c4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d5c8:
    // 0x28d5c8: 0x0  nop
    ctx->pc = 0x28d5c8u;
    // NOP
label_28d5cc:
    // 0x28d5cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d5ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d5d0:
    // 0x28d5d0: 0x0  nop
    ctx->pc = 0x28d5d0u;
    // NOP
label_28d5d4:
    // 0x28d5d4: 0x0  nop
    ctx->pc = 0x28d5d4u;
    // NOP
label_28d5d8:
    // 0x28d5d8: 0x0  nop
    ctx->pc = 0x28d5d8u;
    // NOP
label_28d5dc:
    // 0x28d5dc: 0x0  nop
    ctx->pc = 0x28d5dcu;
    // NOP
label_28d5e0:
    // 0x28d5e0: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_28d5e4:
    // 0x28d5e4: 0x0  nop
    ctx->pc = 0x28d5e4u;
    // NOP
label_28d5e8:
    // 0x28d5e8: 0x0  nop
    ctx->pc = 0x28d5e8u;
    // NOP
label_28d5ec:
    // 0x28d5ec: 0x0  nop
    ctx->pc = 0x28d5ecu;
    // NOP
label_28d5f0:
    // 0x28d5f0: 0x0  nop
    ctx->pc = 0x28d5f0u;
    // NOP
label_28d5f4:
    // 0x28d5f4: 0x0  nop
    ctx->pc = 0x28d5f4u;
    // NOP
label_28d5f8:
    // 0x28d5f8: 0x0  nop
    ctx->pc = 0x28d5f8u;
    // NOP
label_28d5fc:
    // 0x28d5fc: 0x0  nop
    ctx->pc = 0x28d5fcu;
    // NOP
label_28d600:
    // 0x28d600: 0x0  nop
    ctx->pc = 0x28d600u;
    // NOP
label_28d604:
    // 0x28d604: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d604u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d608:
    // 0x28d608: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d608u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d60c:
    // 0x28d60c: 0x0  nop
    ctx->pc = 0x28d60cu;
    // NOP
label_28d610:
    // 0x28d610: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d610u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d614:
    // 0x28d614: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x28d614u;
    // CACHE instruction (ignored)
label_28d618:
    // 0x28d618: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d618u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d61c:
    // 0x28d61c: 0x0  nop
    ctx->pc = 0x28d61cu;
    // NOP
label_28d620:
    // 0x28d620: 0xbfc00000  cache       0x00, 0x0($fp)
    ctx->pc = 0x28d620u;
    // CACHE instruction (ignored)
label_28d624:
    // 0x28d624: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x28d624u;
    // CACHE instruction (ignored)
label_28d628:
    // 0x28d628: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d628u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d62c:
    // 0x28d62c: 0x0  nop
    ctx->pc = 0x28d62cu;
    // NOP
label_28d630:
    // 0x28d630: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d630u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28d634:
    // 0x28d634: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d634u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28d638:
    // 0x28d638: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d638u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28d63c:
    // 0x28d63c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d63cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d640:
    // 0x28d640: 0x3ecccccd  .word       0x3ECCCCCD                   # lui         $t4, 0xCCCD # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d640u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28d644:
    // 0x28d644: 0x3ecccccd  .word       0x3ECCCCCD                   # lui         $t4, 0xCCCD # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d644u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28d648:
    // 0x28d648: 0x3ecccccd  .word       0x3ECCCCCD                   # lui         $t4, 0xCCCD # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d648u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28d64c:
    // 0x28d64c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d64cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d650:
    // 0x28d650: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d650u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28d654:
    // 0x28d654: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d654u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28d658:
    // 0x28d658: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d658u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28d65c:
    // 0x28d65c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d65cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d660:
    // 0x28d660: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d660u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d664:
    // 0x28d664: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d664u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d668:
    // 0x28d668: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d668u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d66c:
    // 0x28d66c: 0x0  nop
    ctx->pc = 0x28d66cu;
    // NOP
label_28d670:
    // 0x28d670: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d670u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d674:
    // 0x28d674: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d674u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d678:
    // 0x28d678: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d678u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d67c:
    // 0x28d67c: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d67cu;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d680:
    // 0x28d680: 0x43e10000  .word       0x43E10000                   # INVALID     $ra, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d680u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D680 raw=0x43E10000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d684:
    // 0x28d684: 0x44228000  dmfc1       $v0, $f16
    ctx->pc = 0x28d684u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x28D684 raw=0x44228000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d688:
    // 0x28d688: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d688u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D688 raw=0x43FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d68c:
    // 0x28d68c: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d68cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D68C raw=0x43FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d690:
    // 0x28d690: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d690u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D690 raw=0x43FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d694:
    // 0x28d694: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d694u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x28D694 raw=0x43C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d698:
    // 0x28d698: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d698u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d69c:
    // 0x28d69c: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d69cu;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6a0:
    // 0x28d6a0: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d6a0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x28D6A0 raw=0x43960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d6a4:
    // 0x28d6a4: 0x44c80000  ctc1        $t0, $0
    ctx->pc = 0x28d6a4u;
    // CTC1 to FCR0 ignored
label_28d6a8:
    // 0x28d6a8: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d6a8u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6ac:
    // 0x28d6ac: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d6acu;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6b0:
    // 0x28d6b0: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d6b0u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6b4:
    // 0x28d6b4: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d6b4u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6b8:
    // 0x28d6b8: 0x44228000  dmfc1       $v0, $f16
    ctx->pc = 0x28d6b8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x28D6B8 raw=0x44228000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d6bc:
    // 0x28d6bc: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d6bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x28D6BC raw=0x43C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d6c0:
    // 0x28d6c0: 0x43e10000  .word       0x43E10000                   # INVALID     $ra, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d6c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D6C0 raw=0x43E10000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d6c4:
    // 0x28d6c4: 0x43e10000  .word       0x43E10000                   # INVALID     $ra, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d6c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D6C4 raw=0x43E10000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d6c8:
    // 0x28d6c8: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d6c8u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6cc:
    // 0x28d6cc: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d6ccu;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6d0:
    // 0x28d6d0: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d6d0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D6D0 raw=0x43FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d6d4:
    // 0x28d6d4: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d6d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D6D4 raw=0x43FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d6d8:
    // 0x28d6d8: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d6d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x28D6D8 raw=0x43960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d6dc:
    // 0x28d6dc: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d6dcu;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6e0:
    // 0x28d6e0: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d6e0u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6e4:
    // 0x28d6e4: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d6e4u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6e8:
    // 0x28d6e8: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d6e8u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6ec:
    // 0x28d6ec: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d6ecu;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d6f0:
    // 0x28d6f0: 0x43e10000  .word       0x43E10000                   # INVALID     $ra, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d6f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D6F0 raw=0x43E10000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d6f4:
    // 0x28d6f4: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d6f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d6f8:
    // 0x28d6f8: 0x43e10000  .word       0x43E10000                   # INVALID     $ra, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d6f8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D6F8 raw=0x43E10000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d6fc:
    // 0x28d6fc: 0x44228000  dmfc1       $v0, $f16
    ctx->pc = 0x28d6fcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x0 at 0x28D6FC raw=0x44228000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d700:
    // 0x28d700: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d700u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d704:
    // 0x28d704: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d704u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d708:
    // 0x28d708: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d708u;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d70c:
    // 0x28d70c: 0x44480000  cfc1        $t0, $0
    ctx->pc = 0x28d70cu;
    SET_GPR_U32(ctx, 8, 0x00000000);
label_28d710:
    // 0x28d710: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d710u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x28D710 raw=0x43C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d714:
    // 0x28d714: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d714u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x28D714 raw=0x43C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d718:
    // 0x28d718: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d718u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x28D718 raw=0x43C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d71c:
    // 0x28d71c: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d71cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x28D71C raw=0x43C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d720:
    // 0x28d720: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d720u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D720 raw=0x43FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d724:
    // 0x28d724: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d724u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x28D724 raw=0x43C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d728:
    // 0x28d728: 0x0  nop
    ctx->pc = 0x28d728u;
    // NOP
label_28d72c:
    // 0x28d72c: 0x0  nop
    ctx->pc = 0x28d72cu;
    // NOP
label_28d730:
    // 0x28d730: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d730u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D730 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d734:
    // 0x28d734: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d734u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D734 raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d738:
    // 0x28d738: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d738u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D738 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d73c:
    // 0x28d73c: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d73cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D73C raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d740:
    // 0x28d740: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d740u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D740 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d744:
    // 0x28d744: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d744u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D744 raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d748:
    // 0x28d748: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d748u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D748 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d74c:
    // 0x28d74c: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d74cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D74C raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d750:
    // 0x28d750: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d750u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D750 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d754:
    // 0x28d754: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d754u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D754 raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d758:
    // 0x28d758: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d758u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D758 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d75c:
    // 0x28d75c: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d75cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D75C raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d760:
    // 0x28d760: 0x45098000  .word       0x45098000                   # INVALID     $t0, $t1, -0x8000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x28d760u;
    // FPU branch instruction - handled elsewhere
label_28d764:
    // 0x28d764: 0x44610000  .word       0x44610000                   # INVALID     $v1, $at, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28d764u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x28D764 raw=0x44610000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d768:
    // 0x28d768: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d768u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D768 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d76c:
    // 0x28d76c: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d76cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D76C raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d770:
    // 0x28d770: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d770u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D770 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d774:
    // 0x28d774: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d774u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D774 raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d778:
    // 0x28d778: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d778u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D778 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d77c:
    // 0x28d77c: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d77cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D77C raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d780:
    // 0x28d780: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d780u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D780 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d784:
    // 0x28d784: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d784u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D784 raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d788:
    // 0x28d788: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d788u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D788 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d78c:
    // 0x28d78c: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d78cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D78C raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d790:
    // 0x28d790: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d790u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D790 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d794:
    // 0x28d794: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d794u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D794 raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d798:
    // 0x28d798: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d798u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D798 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d79c:
    // 0x28d79c: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d79cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D79C raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7a0:
    // 0x28d7a0: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d7a0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7A0 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7a4:
    // 0x28d7a4: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d7a4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7A4 raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7a8:
    // 0x28d7a8: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d7a8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7A8 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7ac:
    // 0x28d7ac: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d7acu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7AC raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7b0:
    // 0x28d7b0: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d7b0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7B0 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7b4:
    // 0x28d7b4: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d7b4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7B4 raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7b8:
    // 0x28d7b8: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d7b8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7B8 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7bc:
    // 0x28d7bc: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d7bcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7BC raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7c0:
    // 0x28d7c0: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d7c0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7C0 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7c4:
    // 0x28d7c4: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d7c4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7C4 raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7c8:
    // 0x28d7c8: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d7c8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7C8 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7cc:
    // 0x28d7cc: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d7ccu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7CC raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7d0:
    // 0x28d7d0: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d7d0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7D0 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7d4:
    // 0x28d7d4: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d7d4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7D4 raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7d8:
    // 0x28d7d8: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d7d8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7D8 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7dc:
    // 0x28d7dc: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d7dcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7DC raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7e0:
    // 0x28d7e0: 0x44af0000  dmtc1       $t7, $f0
    ctx->pc = 0x28d7e0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7E0 raw=0x44AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7e4:
    // 0x28d7e4: 0x44a28000  dmtc1       $v0, $f16
    ctx->pc = 0x28d7e4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x5, function 0x0 at 0x28D7E4 raw=0x44A28000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d7e8:
    // 0x28d7e8: 0x0  nop
    ctx->pc = 0x28d7e8u;
    // NOP
label_28d7ec:
    // 0x28d7ec: 0x0  nop
    ctx->pc = 0x28d7ecu;
    // NOP
label_28d7f0:
    // 0x28d7f0: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d7f0u;
    // CTC1 to FCR16 ignored
label_28d7f4:
    // 0x28d7f4: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d7f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d7f8:
    // 0x28d7f8: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d7f8u;
    // CTC1 to FCR16 ignored
label_28d7fc:
    // 0x28d7fc: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d7fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d800:
    // 0x28d800: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d800u;
    // CTC1 to FCR16 ignored
label_28d804:
    // 0x28d804: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d808:
    // 0x28d808: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d808u;
    // CTC1 to FCR16 ignored
label_28d80c:
    // 0x28d80c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d80cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d810:
    // 0x28d810: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d810u;
    // CTC1 to FCR16 ignored
label_28d814:
    // 0x28d814: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d818:
    // 0x28d818: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d818u;
    // CTC1 to FCR16 ignored
label_28d81c:
    // 0x28d81c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d81cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d820:
    // 0x28d820: 0x45160000  .word       0x45160000                   # INVALID     $t0, $s6, 0x0 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x28d820u;
    // FPU branch instruction - handled elsewhere
label_28d824:
    // 0x28d824: 0x43fa0000  .word       0x43FA0000                   # INVALID     $ra, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d824u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x28D824 raw=0x43FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d828:
    // 0x28d828: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d828u;
    // CTC1 to FCR16 ignored
label_28d82c:
    // 0x28d82c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d82cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d830:
    // 0x28d830: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d830u;
    // CTC1 to FCR16 ignored
label_28d834:
    // 0x28d834: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d838:
    // 0x28d838: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d838u;
    // CTC1 to FCR16 ignored
label_28d83c:
    // 0x28d83c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d840:
    // 0x28d840: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d840u;
    // CTC1 to FCR16 ignored
label_28d844:
    // 0x28d844: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d848:
    // 0x28d848: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d848u;
    // CTC1 to FCR16 ignored
label_28d84c:
    // 0x28d84c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d84cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d850:
    // 0x28d850: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d850u;
    // CTC1 to FCR16 ignored
label_28d854:
    // 0x28d854: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d854u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d858:
    // 0x28d858: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d858u;
    // CTC1 to FCR16 ignored
label_28d85c:
    // 0x28d85c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d85cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d860:
    // 0x28d860: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d860u;
    // CTC1 to FCR16 ignored
label_28d864:
    // 0x28d864: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d868:
    // 0x28d868: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d868u;
    // CTC1 to FCR16 ignored
label_28d86c:
    // 0x28d86c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d86cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d870:
    // 0x28d870: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d870u;
    // CTC1 to FCR16 ignored
label_28d874:
    // 0x28d874: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d878:
    // 0x28d878: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d878u;
    // CTC1 to FCR16 ignored
label_28d87c:
    // 0x28d87c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d87cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d880:
    // 0x28d880: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d880u;
    // CTC1 to FCR16 ignored
label_28d884:
    // 0x28d884: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d888:
    // 0x28d888: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d888u;
    // CTC1 to FCR16 ignored
label_28d88c:
    // 0x28d88c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d88cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d890:
    // 0x28d890: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d890u;
    // CTC1 to FCR16 ignored
label_28d894:
    // 0x28d894: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d898:
    // 0x28d898: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d898u;
    // CTC1 to FCR16 ignored
label_28d89c:
    // 0x28d89c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d89cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d8a0:
    // 0x28d8a0: 0x44d48000  ctc1        $s4, $16
    ctx->pc = 0x28d8a0u;
    // CTC1 to FCR16 ignored
label_28d8a4:
    // 0x28d8a4: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28d8a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_28d8a8:
    // 0x28d8a8: 0x0  nop
    ctx->pc = 0x28d8a8u;
    // NOP
label_28d8ac:
    // 0x28d8ac: 0x0  nop
    ctx->pc = 0x28d8acu;
    // NOP
label_28d8b0:
    // 0x28d8b0: 0x0  nop
    ctx->pc = 0x28d8b0u;
    // NOP
label_28d8b4:
    // 0x28d8b4: 0x3f490fdb  .word       0x3F490FDB                   # lui         $t1, 0xFDB # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_28d8b8:
    // 0x28d8b8: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d8b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_28d8bc:
    // 0x28d8bc: 0x4016cbe4  .word       0x4016CBE4                   # mfc0        $s6, Reserved25 # 000003E4 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d8bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ctx->cop0_perf);
label_28d8c0:
    // 0x28d8c0: 0x40490fdb  .word       0x40490FDB                   # cfc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d8c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x28D8C0 raw=0x40490FDB"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d8c4:
    // 0x28d8c4: 0xc016cbe4  ll          $s6, -0x341C($zero)
    ctx->pc = 0x28d8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294953956); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28d8c8:
    // 0x28d8c8: 0xbfc90fdb  cache       0x09, 0xFDB($fp)
    ctx->pc = 0x28d8c8u;
    // CACHE instruction (ignored)
label_28d8cc:
    // 0x28d8cc: 0xbf490fdb  cache       0x09, 0xFDB($k0)
    ctx->pc = 0x28d8ccu;
    // CACHE instruction (ignored)
label_28d8d0:
    // 0x28d8d0: 0x0  nop
    ctx->pc = 0x28d8d0u;
    // NOP
label_28d8d4:
    // 0x28d8d4: 0x0  nop
    ctx->pc = 0x28d8d4u;
    // NOP
label_28d8d8:
    // 0x28d8d8: 0x0  nop
    ctx->pc = 0x28d8d8u;
    // NOP
label_28d8dc:
    // 0x28d8dc: 0x0  nop
    ctx->pc = 0x28d8dcu;
    // NOP
label_28d8e0:
    // 0x28d8e0: 0x4219999a  .word       0x4219999A                   # INVALID     $s0, $t9, -0x6666 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28d8e0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1A at 0x28D8E0 raw=0x4219999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d8e4:
    // 0x28d8e4: 0x4219999a  .word       0x4219999A                   # INVALID     $s0, $t9, -0x6666 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28d8e4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1A at 0x28D8E4 raw=0x4219999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d8e8:
    // 0x28d8e8: 0x4219999a  .word       0x4219999A                   # INVALID     $s0, $t9, -0x6666 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28d8e8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1A at 0x28D8E8 raw=0x4219999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d8ec:
    // 0x28d8ec: 0x0  nop
    ctx->pc = 0x28d8ecu;
    // NOP
label_28d8f0:
    // 0x28d8f0: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d8f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x28D8F0 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d8f4:
    // 0x28d8f4: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d8f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x28D8F4 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d8f8:
    // 0x28d8f8: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d8f8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x28D8F8 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d8fc:
    // 0x28d8fc: 0x0  nop
    ctx->pc = 0x28d8fcu;
    // NOP
label_28d900:
    // 0x28d900: 0x414ccccd  .word       0x414CCCCD                   # INVALID     $t2, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d900u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x28D900 raw=0x414CCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d904:
    // 0x28d904: 0x414ccccd  .word       0x414CCCCD                   # INVALID     $t2, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d904u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x28D904 raw=0x414CCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d908:
    // 0x28d908: 0x414ccccd  .word       0x414CCCCD                   # INVALID     $t2, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d908u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x28D908 raw=0x414CCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d90c:
    // 0x28d90c: 0x0  nop
    ctx->pc = 0x28d90cu;
    // NOP
label_28d910:
    // 0x28d910: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d910u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d914:
    // 0x28d914: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d914u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d918:
    // 0x28d918: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d918u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d91c:
    // 0x28d91c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d91cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d920:
    // 0x28d920: 0x0  nop
    ctx->pc = 0x28d920u;
    // NOP
label_28d924:
    // 0x28d924: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x28d924u;
    // CACHE instruction (ignored)
label_28d928:
    // 0x28d928: 0x0  nop
    ctx->pc = 0x28d928u;
    // NOP
label_28d92c:
    // 0x28d92c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28d92cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28d930:
    // 0x28d930: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d930u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28d934:
    // 0x28d934: 0x9e  .word       0x0000009E                   # ddiv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d934u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28D934 raw=0x0000009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d938:
    // 0x28d938: 0x9e  .word       0x0000009E                   # ddiv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d938u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28D938 raw=0x0000009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d93c:
    // 0x28d93c: 0x0  nop
    ctx->pc = 0x28d93cu;
    // NOP
label_28d940:
    // 0x28d940: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28D940 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d944:
    // 0x28d944: 0x0  nop
    ctx->pc = 0x28d944u;
    // NOP
label_28d948:
    // 0x28d948: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28d948u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28d94c:
    // 0x28d94c: 0x0  nop
    ctx->pc = 0x28d94cu;
    // NOP
label_28d950:
    // 0x28d950: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28d950u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28d954:
    // 0x28d954: 0x0  nop
    ctx->pc = 0x28d954u;
    // NOP
label_28d958:
    // 0x28d958: 0x8  jr          $zero
label_28d95c:
    if (ctx->pc == 0x28D95Cu) {
        ctx->pc = 0x28D960u;
        goto label_28d960;
    }
    ctx->pc = 0x28D958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D958u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D960u;
label_28d960:
    // 0x28d960: 0x10  mfhi        $zero
    ctx->pc = 0x28d960u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28d964:
    // 0x28d964: 0x0  nop
    ctx->pc = 0x28d964u;
    // NOP
label_28d968:
    // 0x28d968: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28d968u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28d96c:
    // 0x28d96c: 0x0  nop
    ctx->pc = 0x28d96cu;
    // NOP
label_28d970:
    // 0x28d970: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x28d970u;
    
label_28d974:
    // 0x28d974: 0x0  nop
    ctx->pc = 0x28d974u;
    // NOP
label_28d978:
    // 0x28d978: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x28d978u;
    
label_28d97c:
    // 0x28d97c: 0x0  nop
    ctx->pc = 0x28d97cu;
    // NOP
label_28d980:
    // 0x28d980: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x28d980u;
    
label_28d984:
    // 0x28d984: 0x0  nop
    ctx->pc = 0x28d984u;
    // NOP
label_28d988:
    // 0x28d988: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x28d988u;
    
label_28d98c:
    // 0x28d98c: 0x0  nop
    ctx->pc = 0x28d98cu;
    // NOP
label_28d990:
    // 0x28d990: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28d990u;
    
label_28d994:
    // 0x28d994: 0x0  nop
    ctx->pc = 0x28d994u;
    // NOP
label_28d998:
    // 0x28d998: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28d998u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28d99c:
    // 0x28d99c: 0x0  nop
    ctx->pc = 0x28d99cu;
    // NOP
label_28d9a0:
    // 0x28d9a0: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x28d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28d9a4:
    // 0x28d9a4: 0x0  nop
    ctx->pc = 0x28d9a4u;
    // NOP
label_28d9a8:
    // 0x28d9a8: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x28d9a8u;
    
label_28d9ac:
    // 0x28d9ac: 0x0  nop
    ctx->pc = 0x28d9acu;
    // NOP
label_28d9b0:
    // 0x28d9b0: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x28d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28d9b4:
    // 0x28d9b4: 0x0  nop
    ctx->pc = 0x28d9b4u;
    // NOP
label_28d9b8:
    // 0x28d9b8: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x28d9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28d9bc:
    // 0x28d9bc: 0x0  nop
    ctx->pc = 0x28d9bcu;
    // NOP
label_28d9c0:
    // 0x28d9c0: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x28d9c0u;
    
label_28d9c4:
    // 0x28d9c4: 0x0  nop
    ctx->pc = 0x28d9c4u;
    // NOP
label_28d9c8:
    // 0x28d9c8: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x28d9c8u;
    
label_28d9cc:
    // 0x28d9cc: 0x0  nop
    ctx->pc = 0x28d9ccu;
    // NOP
label_28d9d0:
    // 0x28d9d0: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x28d9d0u;
    
label_28d9d4:
    // 0x28d9d4: 0x0  nop
    ctx->pc = 0x28d9d4u;
    // NOP
label_28d9d8:
    // 0x28d9d8: 0x200000  .word       0x00200000                   # sll         $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d9d8u;
    // NOP
label_28d9dc:
    // 0x28d9dc: 0x0  nop
    ctx->pc = 0x28d9dcu;
    // NOP
label_28d9e0:
    // 0x28d9e0: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d9e0u;
    // NOP
label_28d9e4:
    // 0x28d9e4: 0x0  nop
    ctx->pc = 0x28d9e4u;
    // NOP
label_28d9e8:
    // 0x28d9e8: 0x800000  .word       0x00800000                   # sll         $zero, $zero, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d9e8u;
    // NOP
label_28d9ec:
    // 0x28d9ec: 0x0  nop
    ctx->pc = 0x28d9ecu;
    // NOP
label_28d9f0:
    // 0x28d9f0: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d9f0u;
    // NOP
label_28d9f4:
    // 0x28d9f4: 0x0  nop
    ctx->pc = 0x28d9f4u;
    // NOP
label_28d9f8:
    // 0x28d9f8: 0x8000000  j           func_000000
label_28d9fc:
    if (ctx->pc == 0x28D9FCu) {
        ctx->pc = 0x28DA00u;
        goto label_28da00;
    }
    ctx->pc = 0x28D9F8u;
    ctx->pc = 0x0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x0u, 0x28D9F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28DA00u;
label_28da00:
    // 0x28da00: 0x4000000  bltz        $zero, . + 4 + (0x0 << 2)
label_28da04:
    if (ctx->pc == 0x28DA04u) {
        ctx->pc = 0x28DA08u;
        goto label_28da08;
    }
    ctx->pc = 0x28DA00u;
    {
        const bool branch_taken_0x28da00 = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x28da00) {
            ctx->pc = 0x28DA04u;
            goto label_28da04;
        }
    }
    ctx->pc = 0x28DA08u;
label_28da08:
    // 0x28da08: 0x2000000  .word       0x02000000                   # sll         $zero, $zero, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28da08u;
    // NOP
label_28da0c:
    // 0x28da0c: 0x0  nop
    ctx->pc = 0x28da0cu;
    // NOP
label_28da10:
    // 0x28da10: 0x10000000  b           . + 4 + (0x0 << 2)
label_28da14:
    if (ctx->pc == 0x28DA14u) {
        ctx->pc = 0x28DA18u;
        goto label_28da18;
    }
    ctx->pc = 0x28DA10u;
    {
        const bool branch_taken_0x28da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28da10) {
            ctx->pc = 0x28DA14u;
            goto label_28da14;
        }
    }
    ctx->pc = 0x28DA18u;
label_28da18:
    // 0x28da18: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x28da18u;
    // NOP (addi to $zero)
label_28da1c:
    // 0x28da1c: 0x0  nop
    ctx->pc = 0x28da1cu;
    // NOP
label_28da20:
    // 0x28da20: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x28da20u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_28da24:
    // 0x28da24: 0x0  nop
    ctx->pc = 0x28da24u;
    // NOP
label_28da28:
    // 0x28da28: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x28da28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_28da2c:
    // 0x28da2c: 0x0  nop
    ctx->pc = 0x28da2cu;
    // NOP
label_28da30:
    // 0x28da30: 0x0  nop
    ctx->pc = 0x28da30u;
    // NOP
label_28da34:
    // 0x28da34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28da34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28DA34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28da38:
    // 0x28da38: 0x0  nop
    ctx->pc = 0x28da38u;
    // NOP
label_28da3c:
    // 0x28da3c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28da3cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28da40:
    // 0x28da40: 0x0  nop
    ctx->pc = 0x28da40u;
    // NOP
label_28da44:
    // 0x28da44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28da44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28da48:
    // 0x28da48: 0x0  nop
    ctx->pc = 0x28da48u;
    // NOP
label_28da4c:
    // 0x28da4c: 0x8  jr          $zero
label_28da50:
    if (ctx->pc == 0x28DA50u) {
        ctx->pc = 0x28DA54u;
        goto label_28da54;
    }
    ctx->pc = 0x28DA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DA4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28DA54u;
label_28da54:
    // 0x28da54: 0x10  mfhi        $zero
    ctx->pc = 0x28da54u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28da58:
    // 0x28da58: 0x0  nop
    ctx->pc = 0x28da58u;
    // NOP
label_28da5c:
    // 0x28da5c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28da5cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28da60:
    // 0x28da60: 0x0  nop
    ctx->pc = 0x28da60u;
    // NOP
label_28da64:
    // 0x28da64: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x28da64u;
    
label_28da68:
    // 0x28da68: 0x0  nop
    ctx->pc = 0x28da68u;
    // NOP
label_28da6c:
    // 0x28da6c: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x28da6cu;
    
label_28da70:
    // 0x28da70: 0x27231b0c  addiu       $v1, $t9, 0x1B0C
    ctx->pc = 0x28da70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 6924));
label_28da74:
    // 0x28da74: 0x16040317  bne         $s0, $a0, . + 4 + (0x317 << 2)
label_28da78:
    if (ctx->pc == 0x28DA78u) {
        ctx->pc = 0x28DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA74u;
        // 0x28da78: 0x1010151e  beq         $zero, $s0, . + 4 + (0x151E << 2) (Delay Slot)
        // Likely branch instruction at 0x28DA78 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA7Cu;
        goto label_28da7c;
    }
    ctx->pc = 0x28DA74u;
    {
        const bool branch_taken_0x28da74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x28DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA74u;
        // 0x28da78: 0x1010151e  beq         $zero, $s0, . + 4 + (0x151E << 2) (Delay Slot)
        // Likely branch instruction at 0x28DA78 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da74) {
            ctx->pc = 0x28E6D4u;
            { ctx->pc = 0x28e6d4; return; }
        }
    }
    ctx->pc = 0x28DA7Cu;
label_28da7c:
    // 0x28da7c: 0xa0d0720  j           func_8341C80
label_28da80:
    if (ctx->pc == 0x28DA80u) {
        ctx->pc = 0x28DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA7Cu;
        // 0x28da80: 0x1300140e  beqz        $t8, . + 4 + (0x140E << 2) (Delay Slot)
        // Likely branch instruction at 0x28DA80 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA84u;
        goto label_28da84;
    }
    ctx->pc = 0x28DA7Cu;
    ctx->pc = 0x28DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA7Cu;
    // 0x28da80: 0x1300140e  beqz        $t8, . + 4 + (0x140E << 2) (Delay Slot)
    // Likely branch instruction at 0x28DA80 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8341C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8341C80u, 0x28DA7Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28DA84u;
label_28da84:
    // 0x28da84: 0x24110c22  addiu       $s1, $zero, 0xC22
    ctx->pc = 0x28da84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3106));
label_28da88:
    // 0x28da88: 0x40b1728  tltiu       $zero, 0x1728
    ctx->pc = 0x28da88u;
    if (GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)5928) { runtime->handleTrap(rdram, ctx); }
label_28da8c:
    // 0x28da8c: 0x10151e1c  beq         $zero, $s5, . + 4 + (0x1E1C << 2)
label_28da90:
    if (ctx->pc == 0x28DA90u) {
        ctx->pc = 0x28DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA8Cu;
        // 0x28da90: 0x251f1806  addiu       $ra, $t0, 0x1806 (Delay Slot)
        SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 8), 6150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DA94u;
        goto label_28da94;
    }
    ctx->pc = 0x28DA8Cu;
    {
        const bool branch_taken_0x28da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        ctx->pc = 0x28DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA8Cu;
        // 0x28da90: 0x251f1806  addiu       $ra, $t0, 0x1806 (Delay Slot)
        SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 8), 6150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da8c) {
            ctx->pc = 0x295300u;
            { ctx->pc = 0x295300; return; }
        }
    }
    ctx->pc = 0x28DA94u;
label_28da94:
    // 0x28da94: 0x1140e0a  .word       0x01140E0A                   # movz        $at, $t0, $s4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28da94u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 8));
label_28da98:
    // 0x28da98: 0x120c1a00  beq         $s0, $t4, . + 4 + (0x1A00 << 2)
label_28da9c:
    if (ctx->pc == 0x28DA9Cu) {
        ctx->pc = 0x28DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA98u;
        // 0x28da9c: 0xb170924  j           func_C5C2490 (Delay Slot)
        // J 0xC5C2490 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAA0u;
        goto label_28daa0;
    }
    ctx->pc = 0x28DA98u;
    {
        const bool branch_taken_0x28da98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x28DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA98u;
        // 0x28da9c: 0xb170924  j           func_C5C2490 (Delay Slot)
        // J 0xC5C2490 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da98) {
            ctx->pc = 0x29429Cu;
            { ctx->pc = 0x29429c; return; }
        }
    }
    ctx->pc = 0x28DAA0u;
label_28daa0:
    // 0x28daa0: 0x151d0503  bne         $t0, $sp, . + 4 + (0x503 << 2)
label_28daa4:
    if (ctx->pc == 0x28DAA4u) {
        ctx->pc = 0x28DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAA0u;
        // 0x28daa4: 0x19082010  .word       0x19082010                   # blez        $t0, . + 4 + (0x2010 << 2) # 00080000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28DAA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAA8u;
        goto label_28daa8;
    }
    ctx->pc = 0x28DAA0u;
    {
        const bool branch_taken_0x28daa0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 29));
        ctx->pc = 0x28DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAA0u;
        // 0x28daa4: 0x19082010  .word       0x19082010                   # blez        $t0, . + 4 + (0x2010 << 2) # 00080000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28DAA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28daa0) {
            ctx->pc = 0x28EEB0u;
            { ctx->pc = 0x28eeb0; return; }
        }
    }
    ctx->pc = 0x28DAA8u;
label_28daa8:
    // 0x28daa8: 0x140e0a26  bne         $zero, $t6, . + 4 + (0xA26 << 2)
label_28daac:
    if (ctx->pc == 0x28DAACu) {
        ctx->pc = 0x28DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAA8u;
        // 0x28daac: 0x210201  .word       0x00210201                   # INVALID     $at, $at, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28DAAC raw=0x00210201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAB0u;
        goto label_28dab0;
    }
    ctx->pc = 0x28DAA8u;
    {
        const bool branch_taken_0x28daa8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 14));
        ctx->pc = 0x28DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAA8u;
        // 0x28daac: 0x210201  .word       0x00210201                   # INVALID     $at, $at, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28DAAC raw=0x00210201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28daa8) {
            ctx->pc = 0x290344u;
            { ctx->pc = 0x290344; return; }
        }
    }
    ctx->pc = 0x28DAB0u;
label_28dab0:
    // 0x28dab0: 0x121b160c  beq         $s0, $k1, . + 4 + (0x160C << 2)
label_28dab4:
    if (ctx->pc == 0x28DAB4u) {
        ctx->pc = 0x28DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB0u;
        // 0x28dab4: 0x9112423  j           func_444908C (Delay Slot)
        // J 0x444908C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAB8u;
        goto label_28dab8;
    }
    ctx->pc = 0x28DAB0u;
    {
        const bool branch_taken_0x28dab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 27));
        ctx->pc = 0x28DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB0u;
        // 0x28dab4: 0x9112423  j           func_444908C (Delay Slot)
        // J 0x444908C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dab0) {
            ctx->pc = 0x2932E4u;
            { ctx->pc = 0x2932e4; return; }
        }
    }
    ctx->pc = 0x28DAB8u;
label_28dab8:
    // 0x28dab8: 0x1314210e  beq         $t8, $s4, . + 4 + (0x210E << 2)
label_28dabc:
    if (ctx->pc == 0x28DABCu) {
        ctx->pc = 0x28DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB8u;
        // 0x28dabc: 0xa000201  j           func_8000804 (Delay Slot)
        // J 0x8000804 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAC0u;
        goto label_28dac0;
    }
    ctx->pc = 0x28DAB8u;
    {
        const bool branch_taken_0x28dab8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 20));
        ctx->pc = 0x28DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB8u;
        // 0x28dabc: 0xa000201  j           func_8000804 (Delay Slot)
        // J 0x8000804 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dab8) {
            ctx->pc = 0x295EF4u;
            { ctx->pc = 0x295ef4; return; }
        }
    }
    ctx->pc = 0x28DAC0u;
label_28dac0:
    // 0x28dac0: 0x100d1920  beq         $zero, $t5, . + 4 + (0x1920 << 2)
label_28dac4:
    if (ctx->pc == 0x28DAC4u) {
        ctx->pc = 0x28DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAC0u;
        // 0x28dac4: 0x60f2625  .word       0x060F2625                   # INVALID     $s0, $t7, 0x2625 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x28DAC4 raw=0x060F2625");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAC8u;
        goto label_28dac8;
    }
    ctx->pc = 0x28DAC0u;
    {
        const bool branch_taken_0x28dac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x28DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAC0u;
        // 0x28dac4: 0x60f2625  .word       0x060F2625                   # INVALID     $s0, $t7, 0x2625 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x28DAC4 raw=0x060F2625");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dac0) {
            ctx->pc = 0x293F44u;
            { ctx->pc = 0x293f44; return; }
        }
    }
    ctx->pc = 0x28DAC8u;
label_28dac8:
    // 0x28dac8: 0x1e1c150b  .word       0x1E1C150B                   # bgtz        $s0, . + 4 + (0x150B << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
label_28dacc:
    if (ctx->pc == 0x28DACCu) {
        ctx->pc = 0x28DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAC8u;
        // 0x28dacc: 0x3170405  .word       0x03170405                   # INVALID     $t8, $s7, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28DACC raw=0x03170405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28DAD0u;
        goto label_28dad0;
    }
    ctx->pc = 0x28DAC8u;
    {
        const bool branch_taken_0x28dac8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x28DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAC8u;
        // 0x28dacc: 0x3170405  .word       0x03170405                   # INVALID     $t8, $s7, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28DACC raw=0x03170405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dac8) {
            ctx->pc = 0x292EF8u;
            { ctx->pc = 0x292ef8; return; }
        }
    }
    ctx->pc = 0x28DAD0u;
label_28dad0:
    // 0x28dad0: 0x0  nop
    ctx->pc = 0x28dad0u;
    // NOP
label_28dad4:
    // 0x28dad4: 0x0  nop
    ctx->pc = 0x28dad4u;
    // NOP
label_28dad8:
    // 0x28dad8: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28dad8u;
    // NOP
label_28dadc:
    // 0x28dadc: 0x0  nop
    ctx->pc = 0x28dadcu;
    // NOP
label_28dae0:
    // 0x28dae0: 0x0  nop
    ctx->pc = 0x28dae0u;
    // NOP
label_28dae4:
    // 0x28dae4: 0x0  nop
    ctx->pc = 0x28dae4u;
    // NOP
label_28dae8:
    // 0x28dae8: 0x0  nop
    ctx->pc = 0x28dae8u;
    // NOP
label_28daec:
    // 0x28daec: 0x0  nop
    ctx->pc = 0x28daecu;
    // NOP
label_28daf0:
    // 0x28daf0: 0x0  nop
    ctx->pc = 0x28daf0u;
    // NOP
label_28daf4:
    // 0x28daf4: 0x0  nop
    ctx->pc = 0x28daf4u;
    // NOP
label_28daf8:
    // 0x28daf8: 0x20004004  addi        $zero, $zero, 0x4004
    ctx->pc = 0x28daf8u;
    // NOP (addi to $zero)
label_28dafc:
    // 0x28dafc: 0x0  nop
    ctx->pc = 0x28dafcu;
    // NOP
label_28db00:
    // 0x28db00: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28db00u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28db04:
    // 0x28db04: 0x0  nop
    ctx->pc = 0x28db04u;
    // NOP
    ctx->pc = 0x28db08u;
    return;
}
