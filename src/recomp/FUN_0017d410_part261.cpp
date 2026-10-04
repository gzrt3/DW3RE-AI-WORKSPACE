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


void FUN_0017d410_part261(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fc350u: goto label_1fc350;
        case 0x1fc354u: goto label_1fc354;
        case 0x1fc358u: goto label_1fc358;
        case 0x1fc35cu: goto label_1fc35c;
        case 0x1fc360u: goto label_1fc360;
        case 0x1fc364u: goto label_1fc364;
        case 0x1fc368u: goto label_1fc368;
        case 0x1fc36cu: goto label_1fc36c;
        case 0x1fc370u: goto label_1fc370;
        case 0x1fc374u: goto label_1fc374;
        case 0x1fc378u: goto label_1fc378;
        case 0x1fc37cu: goto label_1fc37c;
        case 0x1fc380u: goto label_1fc380;
        case 0x1fc384u: goto label_1fc384;
        case 0x1fc388u: goto label_1fc388;
        case 0x1fc38cu: goto label_1fc38c;
        case 0x1fc390u: goto label_1fc390;
        case 0x1fc394u: goto label_1fc394;
        case 0x1fc398u: goto label_1fc398;
        case 0x1fc39cu: goto label_1fc39c;
        case 0x1fc3a0u: goto label_1fc3a0;
        case 0x1fc3a4u: goto label_1fc3a4;
        case 0x1fc3a8u: goto label_1fc3a8;
        case 0x1fc3acu: goto label_1fc3ac;
        case 0x1fc3b0u: goto label_1fc3b0;
        case 0x1fc3b4u: goto label_1fc3b4;
        case 0x1fc3b8u: goto label_1fc3b8;
        case 0x1fc3bcu: goto label_1fc3bc;
        case 0x1fc3c0u: goto label_1fc3c0;
        case 0x1fc3c4u: goto label_1fc3c4;
        case 0x1fc3c8u: goto label_1fc3c8;
        case 0x1fc3ccu: goto label_1fc3cc;
        case 0x1fc3d0u: goto label_1fc3d0;
        case 0x1fc3d4u: goto label_1fc3d4;
        case 0x1fc3d8u: goto label_1fc3d8;
        case 0x1fc3dcu: goto label_1fc3dc;
        case 0x1fc3e0u: goto label_1fc3e0;
        case 0x1fc3e4u: goto label_1fc3e4;
        case 0x1fc3e8u: goto label_1fc3e8;
        case 0x1fc3ecu: goto label_1fc3ec;
        case 0x1fc3f0u: goto label_1fc3f0;
        case 0x1fc3f4u: goto label_1fc3f4;
        case 0x1fc3f8u: goto label_1fc3f8;
        case 0x1fc3fcu: goto label_1fc3fc;
        case 0x1fc400u: goto label_1fc400;
        case 0x1fc404u: goto label_1fc404;
        case 0x1fc408u: goto label_1fc408;
        case 0x1fc40cu: goto label_1fc40c;
        case 0x1fc410u: goto label_1fc410;
        case 0x1fc414u: goto label_1fc414;
        case 0x1fc418u: goto label_1fc418;
        case 0x1fc41cu: goto label_1fc41c;
        case 0x1fc420u: goto label_1fc420;
        case 0x1fc424u: goto label_1fc424;
        case 0x1fc428u: goto label_1fc428;
        case 0x1fc42cu: goto label_1fc42c;
        case 0x1fc430u: goto label_1fc430;
        case 0x1fc434u: goto label_1fc434;
        case 0x1fc438u: goto label_1fc438;
        case 0x1fc43cu: goto label_1fc43c;
        case 0x1fc440u: goto label_1fc440;
        case 0x1fc444u: goto label_1fc444;
        case 0x1fc448u: goto label_1fc448;
        case 0x1fc44cu: goto label_1fc44c;
        case 0x1fc450u: goto label_1fc450;
        case 0x1fc454u: goto label_1fc454;
        case 0x1fc458u: goto label_1fc458;
        case 0x1fc45cu: goto label_1fc45c;
        case 0x1fc460u: goto label_1fc460;
        case 0x1fc464u: goto label_1fc464;
        case 0x1fc468u: goto label_1fc468;
        case 0x1fc46cu: goto label_1fc46c;
        case 0x1fc470u: goto label_1fc470;
        case 0x1fc474u: goto label_1fc474;
        case 0x1fc478u: goto label_1fc478;
        case 0x1fc47cu: goto label_1fc47c;
        case 0x1fc480u: goto label_1fc480;
        case 0x1fc484u: goto label_1fc484;
        case 0x1fc488u: goto label_1fc488;
        case 0x1fc48cu: goto label_1fc48c;
        case 0x1fc490u: goto label_1fc490;
        case 0x1fc494u: goto label_1fc494;
        case 0x1fc498u: goto label_1fc498;
        case 0x1fc49cu: goto label_1fc49c;
        case 0x1fc4a0u: goto label_1fc4a0;
        case 0x1fc4a4u: goto label_1fc4a4;
        case 0x1fc4a8u: goto label_1fc4a8;
        case 0x1fc4acu: goto label_1fc4ac;
        case 0x1fc4b0u: goto label_1fc4b0;
        case 0x1fc4b4u: goto label_1fc4b4;
        case 0x1fc4b8u: goto label_1fc4b8;
        case 0x1fc4bcu: goto label_1fc4bc;
        case 0x1fc4c0u: goto label_1fc4c0;
        case 0x1fc4c4u: goto label_1fc4c4;
        case 0x1fc4c8u: goto label_1fc4c8;
        case 0x1fc4ccu: goto label_1fc4cc;
        case 0x1fc4d0u: goto label_1fc4d0;
        case 0x1fc4d4u: goto label_1fc4d4;
        case 0x1fc4d8u: goto label_1fc4d8;
        case 0x1fc4dcu: goto label_1fc4dc;
        case 0x1fc4e0u: goto label_1fc4e0;
        case 0x1fc4e4u: goto label_1fc4e4;
        case 0x1fc4e8u: goto label_1fc4e8;
        case 0x1fc4ecu: goto label_1fc4ec;
        case 0x1fc4f0u: goto label_1fc4f0;
        case 0x1fc4f4u: goto label_1fc4f4;
        case 0x1fc4f8u: goto label_1fc4f8;
        case 0x1fc4fcu: goto label_1fc4fc;
        case 0x1fc500u: goto label_1fc500;
        case 0x1fc504u: goto label_1fc504;
        case 0x1fc508u: goto label_1fc508;
        case 0x1fc50cu: goto label_1fc50c;
        case 0x1fc510u: goto label_1fc510;
        case 0x1fc514u: goto label_1fc514;
        case 0x1fc518u: goto label_1fc518;
        case 0x1fc51cu: goto label_1fc51c;
        case 0x1fc520u: goto label_1fc520;
        case 0x1fc524u: goto label_1fc524;
        case 0x1fc528u: goto label_1fc528;
        case 0x1fc52cu: goto label_1fc52c;
        case 0x1fc530u: goto label_1fc530;
        case 0x1fc534u: goto label_1fc534;
        case 0x1fc538u: goto label_1fc538;
        case 0x1fc53cu: goto label_1fc53c;
        case 0x1fc540u: goto label_1fc540;
        case 0x1fc544u: goto label_1fc544;
        case 0x1fc548u: goto label_1fc548;
        case 0x1fc54cu: goto label_1fc54c;
        case 0x1fc550u: goto label_1fc550;
        case 0x1fc554u: goto label_1fc554;
        case 0x1fc558u: goto label_1fc558;
        case 0x1fc55cu: goto label_1fc55c;
        case 0x1fc560u: goto label_1fc560;
        case 0x1fc564u: goto label_1fc564;
        case 0x1fc568u: goto label_1fc568;
        case 0x1fc56cu: goto label_1fc56c;
        case 0x1fc570u: goto label_1fc570;
        case 0x1fc574u: goto label_1fc574;
        case 0x1fc578u: goto label_1fc578;
        case 0x1fc57cu: goto label_1fc57c;
        case 0x1fc580u: goto label_1fc580;
        case 0x1fc584u: goto label_1fc584;
        case 0x1fc588u: goto label_1fc588;
        case 0x1fc58cu: goto label_1fc58c;
        case 0x1fc590u: goto label_1fc590;
        case 0x1fc594u: goto label_1fc594;
        case 0x1fc598u: goto label_1fc598;
        case 0x1fc59cu: goto label_1fc59c;
        case 0x1fc5a0u: goto label_1fc5a0;
        case 0x1fc5a4u: goto label_1fc5a4;
        case 0x1fc5a8u: goto label_1fc5a8;
        case 0x1fc5acu: goto label_1fc5ac;
        case 0x1fc5b0u: goto label_1fc5b0;
        case 0x1fc5b4u: goto label_1fc5b4;
        case 0x1fc5b8u: goto label_1fc5b8;
        case 0x1fc5bcu: goto label_1fc5bc;
        case 0x1fc5c0u: goto label_1fc5c0;
        case 0x1fc5c4u: goto label_1fc5c4;
        case 0x1fc5c8u: goto label_1fc5c8;
        case 0x1fc5ccu: goto label_1fc5cc;
        case 0x1fc5d0u: goto label_1fc5d0;
        case 0x1fc5d4u: goto label_1fc5d4;
        case 0x1fc5d8u: goto label_1fc5d8;
        case 0x1fc5dcu: goto label_1fc5dc;
        case 0x1fc5e0u: goto label_1fc5e0;
        case 0x1fc5e4u: goto label_1fc5e4;
        case 0x1fc5e8u: goto label_1fc5e8;
        case 0x1fc5ecu: goto label_1fc5ec;
        case 0x1fc5f0u: goto label_1fc5f0;
        case 0x1fc5f4u: goto label_1fc5f4;
        case 0x1fc5f8u: goto label_1fc5f8;
        case 0x1fc5fcu: goto label_1fc5fc;
        case 0x1fc600u: goto label_1fc600;
        case 0x1fc604u: goto label_1fc604;
        case 0x1fc608u: goto label_1fc608;
        case 0x1fc60cu: goto label_1fc60c;
        case 0x1fc610u: goto label_1fc610;
        case 0x1fc614u: goto label_1fc614;
        case 0x1fc618u: goto label_1fc618;
        case 0x1fc61cu: goto label_1fc61c;
        case 0x1fc620u: goto label_1fc620;
        case 0x1fc624u: goto label_1fc624;
        case 0x1fc628u: goto label_1fc628;
        case 0x1fc62cu: goto label_1fc62c;
        case 0x1fc630u: goto label_1fc630;
        case 0x1fc634u: goto label_1fc634;
        case 0x1fc638u: goto label_1fc638;
        case 0x1fc63cu: goto label_1fc63c;
        case 0x1fc640u: goto label_1fc640;
        case 0x1fc644u: goto label_1fc644;
        case 0x1fc648u: goto label_1fc648;
        case 0x1fc64cu: goto label_1fc64c;
        case 0x1fc650u: goto label_1fc650;
        case 0x1fc654u: goto label_1fc654;
        case 0x1fc658u: goto label_1fc658;
        case 0x1fc65cu: goto label_1fc65c;
        case 0x1fc660u: goto label_1fc660;
        case 0x1fc664u: goto label_1fc664;
        case 0x1fc668u: goto label_1fc668;
        case 0x1fc66cu: goto label_1fc66c;
        case 0x1fc670u: goto label_1fc670;
        case 0x1fc674u: goto label_1fc674;
        case 0x1fc678u: goto label_1fc678;
        case 0x1fc67cu: goto label_1fc67c;
        case 0x1fc680u: goto label_1fc680;
        case 0x1fc684u: goto label_1fc684;
        case 0x1fc688u: goto label_1fc688;
        case 0x1fc68cu: goto label_1fc68c;
        case 0x1fc690u: goto label_1fc690;
        case 0x1fc694u: goto label_1fc694;
        case 0x1fc698u: goto label_1fc698;
        case 0x1fc69cu: goto label_1fc69c;
        case 0x1fc6a0u: goto label_1fc6a0;
        case 0x1fc6a4u: goto label_1fc6a4;
        case 0x1fc6a8u: goto label_1fc6a8;
        case 0x1fc6acu: goto label_1fc6ac;
        case 0x1fc6b0u: goto label_1fc6b0;
        case 0x1fc6b4u: goto label_1fc6b4;
        case 0x1fc6b8u: goto label_1fc6b8;
        case 0x1fc6bcu: goto label_1fc6bc;
        case 0x1fc6c0u: goto label_1fc6c0;
        case 0x1fc6c4u: goto label_1fc6c4;
        case 0x1fc6c8u: goto label_1fc6c8;
        case 0x1fc6ccu: goto label_1fc6cc;
        case 0x1fc6d0u: goto label_1fc6d0;
        case 0x1fc6d4u: goto label_1fc6d4;
        case 0x1fc6d8u: goto label_1fc6d8;
        case 0x1fc6dcu: goto label_1fc6dc;
        case 0x1fc6e0u: goto label_1fc6e0;
        case 0x1fc6e4u: goto label_1fc6e4;
        case 0x1fc6e8u: goto label_1fc6e8;
        case 0x1fc6ecu: goto label_1fc6ec;
        case 0x1fc6f0u: goto label_1fc6f0;
        case 0x1fc6f4u: goto label_1fc6f4;
        case 0x1fc6f8u: goto label_1fc6f8;
        case 0x1fc6fcu: goto label_1fc6fc;
        case 0x1fc700u: goto label_1fc700;
        case 0x1fc704u: goto label_1fc704;
        case 0x1fc708u: goto label_1fc708;
        case 0x1fc70cu: goto label_1fc70c;
        case 0x1fc710u: goto label_1fc710;
        case 0x1fc714u: goto label_1fc714;
        case 0x1fc718u: goto label_1fc718;
        case 0x1fc71cu: goto label_1fc71c;
        case 0x1fc720u: goto label_1fc720;
        case 0x1fc724u: goto label_1fc724;
        case 0x1fc728u: goto label_1fc728;
        case 0x1fc72cu: goto label_1fc72c;
        case 0x1fc730u: goto label_1fc730;
        case 0x1fc734u: goto label_1fc734;
        case 0x1fc738u: goto label_1fc738;
        case 0x1fc73cu: goto label_1fc73c;
        case 0x1fc740u: goto label_1fc740;
        case 0x1fc744u: goto label_1fc744;
        case 0x1fc748u: goto label_1fc748;
        case 0x1fc74cu: goto label_1fc74c;
        case 0x1fc750u: goto label_1fc750;
        case 0x1fc754u: goto label_1fc754;
        case 0x1fc758u: goto label_1fc758;
        case 0x1fc75cu: goto label_1fc75c;
        case 0x1fc760u: goto label_1fc760;
        case 0x1fc764u: goto label_1fc764;
        case 0x1fc768u: goto label_1fc768;
        case 0x1fc76cu: goto label_1fc76c;
        case 0x1fc770u: goto label_1fc770;
        case 0x1fc774u: goto label_1fc774;
        case 0x1fc778u: goto label_1fc778;
        case 0x1fc77cu: goto label_1fc77c;
        case 0x1fc780u: goto label_1fc780;
        case 0x1fc784u: goto label_1fc784;
        case 0x1fc788u: goto label_1fc788;
        case 0x1fc78cu: goto label_1fc78c;
        case 0x1fc790u: goto label_1fc790;
        case 0x1fc794u: goto label_1fc794;
        case 0x1fc798u: goto label_1fc798;
        case 0x1fc79cu: goto label_1fc79c;
        case 0x1fc7a0u: goto label_1fc7a0;
        case 0x1fc7a4u: goto label_1fc7a4;
        case 0x1fc7a8u: goto label_1fc7a8;
        case 0x1fc7acu: goto label_1fc7ac;
        case 0x1fc7b0u: goto label_1fc7b0;
        case 0x1fc7b4u: goto label_1fc7b4;
        case 0x1fc7b8u: goto label_1fc7b8;
        case 0x1fc7bcu: goto label_1fc7bc;
        case 0x1fc7c0u: goto label_1fc7c0;
        case 0x1fc7c4u: goto label_1fc7c4;
        case 0x1fc7c8u: goto label_1fc7c8;
        case 0x1fc7ccu: goto label_1fc7cc;
        case 0x1fc7d0u: goto label_1fc7d0;
        case 0x1fc7d4u: goto label_1fc7d4;
        case 0x1fc7d8u: goto label_1fc7d8;
        case 0x1fc7dcu: goto label_1fc7dc;
        case 0x1fc7e0u: goto label_1fc7e0;
        case 0x1fc7e4u: goto label_1fc7e4;
        case 0x1fc7e8u: goto label_1fc7e8;
        case 0x1fc7ecu: goto label_1fc7ec;
        case 0x1fc7f0u: goto label_1fc7f0;
        case 0x1fc7f4u: goto label_1fc7f4;
        case 0x1fc7f8u: goto label_1fc7f8;
        case 0x1fc7fcu: goto label_1fc7fc;
        case 0x1fc800u: goto label_1fc800;
        case 0x1fc804u: goto label_1fc804;
        case 0x1fc808u: goto label_1fc808;
        case 0x1fc80cu: goto label_1fc80c;
        case 0x1fc810u: goto label_1fc810;
        case 0x1fc814u: goto label_1fc814;
        case 0x1fc818u: goto label_1fc818;
        case 0x1fc81cu: goto label_1fc81c;
        case 0x1fc820u: goto label_1fc820;
        case 0x1fc824u: goto label_1fc824;
        case 0x1fc828u: goto label_1fc828;
        case 0x1fc82cu: goto label_1fc82c;
        case 0x1fc830u: goto label_1fc830;
        case 0x1fc834u: goto label_1fc834;
        case 0x1fc838u: goto label_1fc838;
        case 0x1fc83cu: goto label_1fc83c;
        case 0x1fc840u: goto label_1fc840;
        case 0x1fc844u: goto label_1fc844;
        case 0x1fc848u: goto label_1fc848;
        case 0x1fc84cu: goto label_1fc84c;
        case 0x1fc850u: goto label_1fc850;
        case 0x1fc854u: goto label_1fc854;
        case 0x1fc858u: goto label_1fc858;
        case 0x1fc85cu: goto label_1fc85c;
        case 0x1fc860u: goto label_1fc860;
        case 0x1fc864u: goto label_1fc864;
        case 0x1fc868u: goto label_1fc868;
        case 0x1fc86cu: goto label_1fc86c;
        case 0x1fc870u: goto label_1fc870;
        case 0x1fc874u: goto label_1fc874;
        case 0x1fc878u: goto label_1fc878;
        case 0x1fc87cu: goto label_1fc87c;
        case 0x1fc880u: goto label_1fc880;
        case 0x1fc884u: goto label_1fc884;
        case 0x1fc888u: goto label_1fc888;
        case 0x1fc88cu: goto label_1fc88c;
        case 0x1fc890u: goto label_1fc890;
        case 0x1fc894u: goto label_1fc894;
        case 0x1fc898u: goto label_1fc898;
        case 0x1fc89cu: goto label_1fc89c;
        case 0x1fc8a0u: goto label_1fc8a0;
        case 0x1fc8a4u: goto label_1fc8a4;
        case 0x1fc8a8u: goto label_1fc8a8;
        case 0x1fc8acu: goto label_1fc8ac;
        case 0x1fc8b0u: goto label_1fc8b0;
        case 0x1fc8b4u: goto label_1fc8b4;
        case 0x1fc8b8u: goto label_1fc8b8;
        case 0x1fc8bcu: goto label_1fc8bc;
        case 0x1fc8c0u: goto label_1fc8c0;
        case 0x1fc8c4u: goto label_1fc8c4;
        case 0x1fc8c8u: goto label_1fc8c8;
        case 0x1fc8ccu: goto label_1fc8cc;
        case 0x1fc8d0u: goto label_1fc8d0;
        case 0x1fc8d4u: goto label_1fc8d4;
        case 0x1fc8d8u: goto label_1fc8d8;
        case 0x1fc8dcu: goto label_1fc8dc;
        case 0x1fc8e0u: goto label_1fc8e0;
        case 0x1fc8e4u: goto label_1fc8e4;
        case 0x1fc8e8u: goto label_1fc8e8;
        case 0x1fc8ecu: goto label_1fc8ec;
        case 0x1fc8f0u: goto label_1fc8f0;
        case 0x1fc8f4u: goto label_1fc8f4;
        case 0x1fc8f8u: goto label_1fc8f8;
        case 0x1fc8fcu: goto label_1fc8fc;
        case 0x1fc900u: goto label_1fc900;
        case 0x1fc904u: goto label_1fc904;
        case 0x1fc908u: goto label_1fc908;
        case 0x1fc90cu: goto label_1fc90c;
        case 0x1fc910u: goto label_1fc910;
        case 0x1fc914u: goto label_1fc914;
        case 0x1fc918u: goto label_1fc918;
        case 0x1fc91cu: goto label_1fc91c;
        case 0x1fc920u: goto label_1fc920;
        case 0x1fc924u: goto label_1fc924;
        case 0x1fc928u: goto label_1fc928;
        case 0x1fc92cu: goto label_1fc92c;
        case 0x1fc930u: goto label_1fc930;
        case 0x1fc934u: goto label_1fc934;
        case 0x1fc938u: goto label_1fc938;
        case 0x1fc93cu: goto label_1fc93c;
        case 0x1fc940u: goto label_1fc940;
        case 0x1fc944u: goto label_1fc944;
        case 0x1fc948u: goto label_1fc948;
        case 0x1fc94cu: goto label_1fc94c;
        case 0x1fc950u: goto label_1fc950;
        case 0x1fc954u: goto label_1fc954;
        case 0x1fc958u: goto label_1fc958;
        case 0x1fc95cu: goto label_1fc95c;
        case 0x1fc960u: goto label_1fc960;
        case 0x1fc964u: goto label_1fc964;
        case 0x1fc968u: goto label_1fc968;
        case 0x1fc96cu: goto label_1fc96c;
        case 0x1fc970u: goto label_1fc970;
        case 0x1fc974u: goto label_1fc974;
        case 0x1fc978u: goto label_1fc978;
        case 0x1fc97cu: goto label_1fc97c;
        case 0x1fc980u: goto label_1fc980;
        case 0x1fc984u: goto label_1fc984;
        case 0x1fc988u: goto label_1fc988;
        case 0x1fc98cu: goto label_1fc98c;
        case 0x1fc990u: goto label_1fc990;
        case 0x1fc994u: goto label_1fc994;
        case 0x1fc998u: goto label_1fc998;
        case 0x1fc99cu: goto label_1fc99c;
        case 0x1fc9a0u: goto label_1fc9a0;
        case 0x1fc9a4u: goto label_1fc9a4;
        case 0x1fc9a8u: goto label_1fc9a8;
        case 0x1fc9acu: goto label_1fc9ac;
        case 0x1fc9b0u: goto label_1fc9b0;
        case 0x1fc9b4u: goto label_1fc9b4;
        case 0x1fc9b8u: goto label_1fc9b8;
        case 0x1fc9bcu: goto label_1fc9bc;
        case 0x1fc9c0u: goto label_1fc9c0;
        case 0x1fc9c4u: goto label_1fc9c4;
        case 0x1fc9c8u: goto label_1fc9c8;
        case 0x1fc9ccu: goto label_1fc9cc;
        case 0x1fc9d0u: goto label_1fc9d0;
        case 0x1fc9d4u: goto label_1fc9d4;
        case 0x1fc9d8u: goto label_1fc9d8;
        case 0x1fc9dcu: goto label_1fc9dc;
        case 0x1fc9e0u: goto label_1fc9e0;
        case 0x1fc9e4u: goto label_1fc9e4;
        case 0x1fc9e8u: goto label_1fc9e8;
        case 0x1fc9ecu: goto label_1fc9ec;
        case 0x1fc9f0u: goto label_1fc9f0;
        case 0x1fc9f4u: goto label_1fc9f4;
        case 0x1fc9f8u: goto label_1fc9f8;
        case 0x1fc9fcu: goto label_1fc9fc;
        case 0x1fca00u: goto label_1fca00;
        case 0x1fca04u: goto label_1fca04;
        case 0x1fca08u: goto label_1fca08;
        case 0x1fca0cu: goto label_1fca0c;
        case 0x1fca10u: goto label_1fca10;
        case 0x1fca14u: goto label_1fca14;
        case 0x1fca18u: goto label_1fca18;
        case 0x1fca1cu: goto label_1fca1c;
        case 0x1fca20u: goto label_1fca20;
        case 0x1fca24u: goto label_1fca24;
        case 0x1fca28u: goto label_1fca28;
        case 0x1fca2cu: goto label_1fca2c;
        case 0x1fca30u: goto label_1fca30;
        case 0x1fca34u: goto label_1fca34;
        case 0x1fca38u: goto label_1fca38;
        case 0x1fca3cu: goto label_1fca3c;
        case 0x1fca40u: goto label_1fca40;
        case 0x1fca44u: goto label_1fca44;
        case 0x1fca48u: goto label_1fca48;
        case 0x1fca4cu: goto label_1fca4c;
        case 0x1fca50u: goto label_1fca50;
        case 0x1fca54u: goto label_1fca54;
        case 0x1fca58u: goto label_1fca58;
        case 0x1fca5cu: goto label_1fca5c;
        case 0x1fca60u: goto label_1fca60;
        case 0x1fca64u: goto label_1fca64;
        case 0x1fca68u: goto label_1fca68;
        case 0x1fca6cu: goto label_1fca6c;
        case 0x1fca70u: goto label_1fca70;
        case 0x1fca74u: goto label_1fca74;
        case 0x1fca78u: goto label_1fca78;
        case 0x1fca7cu: goto label_1fca7c;
        case 0x1fca80u: goto label_1fca80;
        case 0x1fca84u: goto label_1fca84;
        case 0x1fca88u: goto label_1fca88;
        case 0x1fca8cu: goto label_1fca8c;
        case 0x1fca90u: goto label_1fca90;
        case 0x1fca94u: goto label_1fca94;
        case 0x1fca98u: goto label_1fca98;
        case 0x1fca9cu: goto label_1fca9c;
        case 0x1fcaa0u: goto label_1fcaa0;
        case 0x1fcaa4u: goto label_1fcaa4;
        case 0x1fcaa8u: goto label_1fcaa8;
        case 0x1fcaacu: goto label_1fcaac;
        case 0x1fcab0u: goto label_1fcab0;
        case 0x1fcab4u: goto label_1fcab4;
        case 0x1fcab8u: goto label_1fcab8;
        case 0x1fcabcu: goto label_1fcabc;
        case 0x1fcac0u: goto label_1fcac0;
        case 0x1fcac4u: goto label_1fcac4;
        case 0x1fcac8u: goto label_1fcac8;
        case 0x1fcaccu: goto label_1fcacc;
        case 0x1fcad0u: goto label_1fcad0;
        case 0x1fcad4u: goto label_1fcad4;
        case 0x1fcad8u: goto label_1fcad8;
        case 0x1fcadcu: goto label_1fcadc;
        case 0x1fcae0u: goto label_1fcae0;
        case 0x1fcae4u: goto label_1fcae4;
        case 0x1fcae8u: goto label_1fcae8;
        case 0x1fcaecu: goto label_1fcaec;
        case 0x1fcaf0u: goto label_1fcaf0;
        case 0x1fcaf4u: goto label_1fcaf4;
        case 0x1fcaf8u: goto label_1fcaf8;
        case 0x1fcafcu: goto label_1fcafc;
        case 0x1fcb00u: goto label_1fcb00;
        case 0x1fcb04u: goto label_1fcb04;
        case 0x1fcb08u: goto label_1fcb08;
        case 0x1fcb0cu: goto label_1fcb0c;
        case 0x1fcb10u: goto label_1fcb10;
        case 0x1fcb14u: goto label_1fcb14;
        case 0x1fcb18u: goto label_1fcb18;
        case 0x1fcb1cu: goto label_1fcb1c;
        default: return;
    }

label_1fc350:
    // 0x1fc350: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1fc350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1fc354:
    // 0x1fc354: 0x43102  srl         $a2, $a0, 4
    ctx->pc = 0x1fc354u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
label_1fc358:
    // 0x1fc358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fc358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc35c:
    // 0x1fc35c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fc35cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc360:
    // 0x1fc360: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1fc360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1fc364:
    // 0x1fc364: 0xc066c72  jal         func_19B1C8
label_1fc368:
    if (ctx->pc == 0x1FC368u) {
        ctx->pc = 0x1FC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC364u;
        // 0x1fc368: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC36Cu;
        goto label_1fc36c;
    }
    ctx->pc = 0x1FC364u;
    SET_GPR_U32(ctx, 31, 0x1FC36Cu);
    ctx->pc = 0x1FC368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC364u;
    // 0x1fc368: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1FC36Cu;
label_1fc36c:
    // 0x1fc36c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc370:
    // 0x1fc370: 0x3e00008  jr          $ra
label_1fc374:
    if (ctx->pc == 0x1FC374u) {
        ctx->pc = 0x1FC374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC370u;
        // 0x1fc374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC378u;
        goto label_1fc378;
    }
    ctx->pc = 0x1FC370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC370u;
        // 0x1fc374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC378u;
label_1fc378:
    // 0x1fc378: 0x0  nop
    ctx->pc = 0x1fc378u;
    // NOP
label_1fc37c:
    // 0x1fc37c: 0x0  nop
    ctx->pc = 0x1fc37cu;
    // NOP
label_1fc380:
    // 0x1fc380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fc384:
    // 0x1fc384: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fc384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1fc388:
    // 0x1fc388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fc38c:
    // 0x1fc38c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1fc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1fc390:
    // 0x1fc390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc394:
    // 0x1fc394: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1fc394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1fc398:
    // 0x1fc398: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1fc398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1fc39c:
    // 0x1fc39c: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fc39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1fc3a0:
    // 0x1fc3a0: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1fc3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1fc3a4:
    // 0x1fc3a4: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1fc3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_1fc3a8:
    // 0x1fc3a8: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1fc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1fc3ac:
    // 0x1fc3ac: 0x2484a6c0  addiu       $a0, $a0, -0x5940
    ctx->pc = 0x1fc3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944448));
label_1fc3b0:
    // 0x1fc3b0: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x1fc3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1fc3b4:
    // 0x1fc3b4: 0xa68021  addu        $s0, $a1, $a2
    ctx->pc = 0x1fc3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1fc3b8:
    // 0x1fc3b8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1fc3bc:
    // 0x1fc3bc: 0xc066e2a  jal         func_19B8A8
label_1fc3c0:
    if (ctx->pc == 0x1FC3C0u) {
        ctx->pc = 0x1FC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3BCu;
        // 0x1fc3c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC3C4u;
        goto label_1fc3c4;
    }
    ctx->pc = 0x1FC3BCu;
    SET_GPR_U32(ctx, 31, 0x1FC3C4u);
    ctx->pc = 0x1FC3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC3BCu;
    // 0x1fc3c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x1FC3C4u;
label_1fc3c4:
    // 0x1fc3c4: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1fc3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1fc3c8:
    // 0x1fc3c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1fc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1fc3cc:
    // 0x1fc3cc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fc3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1fc3d0:
    // 0x1fc3d0: 0x24429b40  addiu       $v0, $v0, -0x64C0
    ctx->pc = 0x1fc3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941504));
label_1fc3d4:
    // 0x1fc3d4: 0x2484a700  addiu       $a0, $a0, -0x5900
    ctx->pc = 0x1fc3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944512));
label_1fc3d8:
    // 0x1fc3d8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1fc3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1fc3dc:
    // 0x1fc3dc: 0xc066e2a  jal         func_19B8A8
label_1fc3e0:
    if (ctx->pc == 0x1FC3E0u) {
        ctx->pc = 0x1FC3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3DCu;
        // 0x1fc3e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC3E4u;
        goto label_1fc3e4;
    }
    ctx->pc = 0x1FC3DCu;
    SET_GPR_U32(ctx, 31, 0x1FC3E4u);
    ctx->pc = 0x1FC3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC3DCu;
    // 0x1fc3e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x1FC3E4u;
label_1fc3e4:
    // 0x1fc3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc3e8:
    // 0x1fc3e8: 0xc066c5c  jal         func_19B170
label_1fc3ec:
    if (ctx->pc == 0x1FC3ECu) {
        ctx->pc = 0x1FC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3E8u;
        // 0x1fc3ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC3F0u;
        goto label_1fc3f0;
    }
    ctx->pc = 0x1FC3E8u;
    SET_GPR_U32(ctx, 31, 0x1FC3F0u);
    ctx->pc = 0x1FC3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC3E8u;
    // 0x1fc3ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x1FC3F0u;
label_1fc3f0:
    // 0x1fc3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc3f4:
    // 0x1fc3f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fc3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc3f8:
    // 0x1fc3f8: 0xc066d10  jal         func_19B440
label_1fc3fc:
    if (ctx->pc == 0x1FC3FCu) {
        ctx->pc = 0x1FC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3F8u;
        // 0x1fc3fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC400u;
        goto label_1fc400;
    }
    ctx->pc = 0x1FC3F8u;
    SET_GPR_U32(ctx, 31, 0x1FC400u);
    ctx->pc = 0x1FC3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC3F8u;
    // 0x1fc3fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x1FC400u;
label_1fc400:
    // 0x1fc400: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fc400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1fc404:
    // 0x1fc404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc408:
    // 0x1fc408: 0x24a5a6b0  addiu       $a1, $a1, -0x5950
    ctx->pc = 0x1fc408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944432));
label_1fc40c:
    // 0x1fc40c: 0xc066d36  jal         func_19B4D8
label_1fc410:
    if (ctx->pc == 0x1FC410u) {
        ctx->pc = 0x1FC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC40Cu;
        // 0x1fc410: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC414u;
        goto label_1fc414;
    }
    ctx->pc = 0x1FC40Cu;
    SET_GPR_U32(ctx, 31, 0x1FC414u);
    ctx->pc = 0x1FC410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC40Cu;
    // 0x1fc410: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    { ctx->pc = 0x19b4d8; return; }
    ctx->pc = 0x1FC414u;
label_1fc414:
    // 0x1fc414: 0xc066c46  jal         func_19B118
label_1fc418:
    if (ctx->pc == 0x1FC418u) {
        ctx->pc = 0x1FC418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC414u;
        // 0x1fc418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC41Cu;
        goto label_1fc41c;
    }
    ctx->pc = 0x1FC414u;
    SET_GPR_U32(ctx, 31, 0x1FC41Cu);
    ctx->pc = 0x1FC418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC414u;
    // 0x1fc418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x1FC41Cu;
label_1fc41c:
    // 0x1fc41c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc420:
    // 0x1fc420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc424:
    // 0x1fc424: 0x3e00008  jr          $ra
label_1fc428:
    if (ctx->pc == 0x1FC428u) {
        ctx->pc = 0x1FC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC424u;
        // 0x1fc428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC42Cu;
        goto label_1fc42c;
    }
    ctx->pc = 0x1FC424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC424u;
        // 0x1fc428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC42Cu;
label_1fc42c:
    // 0x1fc42c: 0x0  nop
    ctx->pc = 0x1fc42cu;
    // NOP
label_1fc430:
    // 0x1fc430: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc434:
    // 0x1fc434: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1fc434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1fc438:
    // 0x1fc438: 0xac20a6b4  sw          $zero, -0x594C($at)
    ctx->pc = 0x1fc438u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944436), GPR_U32(ctx, 0));
label_1fc43c:
    // 0x1fc43c: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x1fc43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_1fc440:
    // 0x1fc440: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc444:
    // 0x1fc444: 0xac20a6b8  sw          $zero, -0x5948($at)
    ctx->pc = 0x1fc444u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944440), GPR_U32(ctx, 0));
label_1fc448:
    // 0x1fc448: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc44c:
    // 0x1fc44c: 0xac20a74c  sw          $zero, -0x58B4($at)
    ctx->pc = 0x1fc44cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944588), GPR_U32(ctx, 0));
label_1fc450:
    // 0x1fc450: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc454:
    // 0x1fc454: 0xac23a6b0  sw          $v1, -0x5950($at)
    ctx->pc = 0x1fc454u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944432), GPR_U32(ctx, 3));
label_1fc458:
    // 0x1fc458: 0x3c036c09  lui         $v1, 0x6C09
    ctx->pc = 0x1fc458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27657 << 16));
label_1fc45c:
    // 0x1fc45c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc460:
    // 0x1fc460: 0xac23a6bc  sw          $v1, -0x5944($at)
    ctx->pc = 0x1fc460u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944444), GPR_U32(ctx, 3));
label_1fc464:
    // 0x1fc464: 0x24030441  addiu       $v1, $zero, 0x441
    ctx->pc = 0x1fc464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1089));
label_1fc468:
    // 0x1fc468: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc46c:
    // 0x1fc46c: 0xac23a748  sw          $v1, -0x58B8($at)
    ctx->pc = 0x1fc46cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944584), GPR_U32(ctx, 3));
label_1fc470:
    // 0x1fc470: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc474:
    // 0x1fc474: 0x3c0331a0  lui         $v1, 0x31A0
    ctx->pc = 0x1fc474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12704 << 16));
label_1fc478:
    // 0x1fc478: 0xac20a754  sw          $zero, -0x58AC($at)
    ctx->pc = 0x1fc478u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944596), GPR_U32(ctx, 0));
label_1fc47c:
    // 0x1fc47c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x1fc47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_1fc480:
    // 0x1fc480: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc484:
    // 0x1fc484: 0xac23a744  sw          $v1, -0x58BC($at)
    ctx->pc = 0x1fc484u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944580), GPR_U32(ctx, 3));
label_1fc488:
    // 0x1fc488: 0x34038052  ori         $v1, $zero, 0x8052
    ctx->pc = 0x1fc488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32850);
label_1fc48c:
    // 0x1fc48c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc490:
    // 0x1fc490: 0xac23a740  sw          $v1, -0x58C0($at)
    ctx->pc = 0x1fc490u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944576), GPR_U32(ctx, 3));
label_1fc494:
    // 0x1fc494: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc498:
    // 0x1fc498: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x1fc498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
label_1fc49c:
    // 0x1fc49c: 0xac20a75c  sw          $zero, -0x58A4($at)
    ctx->pc = 0x1fc49cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944604), GPR_U32(ctx, 0));
label_1fc4a0:
    // 0x1fc4a0: 0x34630009  ori         $v1, $v1, 0x9
    ctx->pc = 0x1fc4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
label_1fc4a4:
    // 0x1fc4a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc4a8:
    // 0x1fc4a8: 0xac23a750  sw          $v1, -0x58B0($at)
    ctx->pc = 0x1fc4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944592), GPR_U32(ctx, 3));
label_1fc4ac:
    // 0x1fc4ac: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1fc4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_1fc4b0:
    // 0x1fc4b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fc4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fc4b4:
    // 0x1fc4b4: 0x346301f7  ori         $v1, $v1, 0x1F7
    ctx->pc = 0x1fc4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)503);
label_1fc4b8:
    // 0x1fc4b8: 0x3e00008  jr          $ra
label_1fc4bc:
    if (ctx->pc == 0x1FC4BCu) {
        ctx->pc = 0x1FC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4B8u;
        // 0x1fc4bc: 0xac23a758  sw          $v1, -0x58A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294944600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC4C0u;
        goto label_1fc4c0;
    }
    ctx->pc = 0x1FC4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4B8u;
        // 0x1fc4bc: 0xac23a758  sw          $v1, -0x58A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294944600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC4C0u;
label_1fc4c0:
    // 0x1fc4c0: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fc4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1fc4c4:
    // 0x1fc4c4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fc4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1fc4c8:
    // 0x1fc4c8: 0x2484a5d0  addiu       $a0, $a0, -0x5A30
    ctx->pc = 0x1fc4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944208));
label_1fc4cc:
    // 0x1fc4cc: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1fc4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1fc4d0:
    // 0x1fc4d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1fc4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc4d4:
    // 0x1fc4d4: 0x24a5a670  addiu       $a1, $a1, -0x5990
    ctx->pc = 0x1fc4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944368));
label_1fc4d8:
    // 0x1fc4d8: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x1fc4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_1fc4dc:
    // 0x1fc4dc: 0x24c6a5ec  addiu       $a2, $a2, -0x5A14
    ctx->pc = 0x1fc4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944236));
label_1fc4e0:
    // 0x1fc4e0: 0x24e7a68c  addiu       $a3, $a3, -0x5974
    ctx->pc = 0x1fc4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944396));
label_1fc4e4:
    // 0x1fc4e4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1fc4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1fc4e8:
    // 0x1fc4e8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1fc4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc4ec:
    // 0x1fc4ec: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1fc4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1fc4f0:
    // 0x1fc4f0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1fc4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc4f4:
    // 0x1fc4f4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1fc4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1fc4f8:
    // 0x1fc4f8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1fc4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc4fc:
    // 0x1fc4fc: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1fc4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1fc500:
    // 0x1fc500: 0x90830018  lbu         $v1, 0x18($a0)
    ctx->pc = 0x1fc500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_1fc504:
    // 0x1fc504: 0xa0a30018  sb          $v1, 0x18($a1)
    ctx->pc = 0x1fc504u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 24), (uint8_t)GPR_U32(ctx, 3));
label_1fc508:
    // 0x1fc508: 0x90830019  lbu         $v1, 0x19($a0)
    ctx->pc = 0x1fc508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
label_1fc50c:
    // 0x1fc50c: 0xa0a30019  sb          $v1, 0x19($a1)
    ctx->pc = 0x1fc50cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 25), (uint8_t)GPR_U32(ctx, 3));
label_1fc510:
    // 0x1fc510: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x1fc510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_1fc514:
    // 0x1fc514: 0xa0a3001a  sb          $v1, 0x1A($a1)
    ctx->pc = 0x1fc514u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 3));
label_1fc518:
    // 0x1fc518: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1fc518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc51c:
    // 0x1fc51c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1fc51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_1fc520:
    // 0x1fc520: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1fc520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc524:
    // 0x1fc524: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1fc524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_1fc528:
    // 0x1fc528: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1fc528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc52c:
    // 0x1fc52c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1fc52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1fc530:
    // 0x1fc530: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1fc530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc534:
    // 0x1fc534: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1fc534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_1fc538:
    // 0x1fc538: 0x90c30018  lbu         $v1, 0x18($a2)
    ctx->pc = 0x1fc538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
label_1fc53c:
    // 0x1fc53c: 0xa0e30018  sb          $v1, 0x18($a3)
    ctx->pc = 0x1fc53cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 3));
label_1fc540:
    // 0x1fc540: 0x90c30019  lbu         $v1, 0x19($a2)
    ctx->pc = 0x1fc540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 25)));
label_1fc544:
    // 0x1fc544: 0xa0e30019  sb          $v1, 0x19($a3)
    ctx->pc = 0x1fc544u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 25), (uint8_t)GPR_U32(ctx, 3));
label_1fc548:
    // 0x1fc548: 0x90c3001a  lbu         $v1, 0x1A($a2)
    ctx->pc = 0x1fc548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 26)));
label_1fc54c:
    // 0x1fc54c: 0x3e00008  jr          $ra
label_1fc550:
    if (ctx->pc == 0x1FC550u) {
        ctx->pc = 0x1FC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC54Cu;
        // 0x1fc550: 0xa0e3001a  sb          $v1, 0x1A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC554u;
        goto label_1fc554;
    }
    ctx->pc = 0x1FC54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC54Cu;
        // 0x1fc550: 0xa0e3001a  sb          $v1, 0x1A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC554u;
label_1fc554:
    // 0x1fc554: 0x0  nop
    ctx->pc = 0x1fc554u;
    // NOP
label_1fc558:
    // 0x1fc558: 0x0  nop
    ctx->pc = 0x1fc558u;
    // NOP
label_1fc55c:
    // 0x1fc55c: 0x0  nop
    ctx->pc = 0x1fc55cu;
    // NOP
label_1fc560:
    // 0x1fc560: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fc560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1fc564:
    // 0x1fc564: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fc564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1fc568:
    // 0x1fc568: 0x24a5a670  addiu       $a1, $a1, -0x5990
    ctx->pc = 0x1fc568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944368));
label_1fc56c:
    // 0x1fc56c: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x1fc56cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_1fc570:
    // 0x1fc570: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1fc570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc574:
    // 0x1fc574: 0x2484a5d0  addiu       $a0, $a0, -0x5A30
    ctx->pc = 0x1fc574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944208));
label_1fc578:
    // 0x1fc578: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1fc578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1fc57c:
    // 0x1fc57c: 0x24e7a68c  addiu       $a3, $a3, -0x5974
    ctx->pc = 0x1fc57cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944396));
label_1fc580:
    // 0x1fc580: 0x24c6a5ec  addiu       $a2, $a2, -0x5A14
    ctx->pc = 0x1fc580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944236));
label_1fc584:
    // 0x1fc584: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1fc584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1fc588:
    // 0x1fc588: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1fc588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc58c:
    // 0x1fc58c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1fc58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1fc590:
    // 0x1fc590: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1fc590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc594:
    // 0x1fc594: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1fc594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1fc598:
    // 0x1fc598: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1fc598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc59c:
    // 0x1fc59c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1fc59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1fc5a0:
    // 0x1fc5a0: 0x90a30018  lbu         $v1, 0x18($a1)
    ctx->pc = 0x1fc5a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_1fc5a4:
    // 0x1fc5a4: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x1fc5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
label_1fc5a8:
    // 0x1fc5a8: 0x90a30019  lbu         $v1, 0x19($a1)
    ctx->pc = 0x1fc5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 25)));
label_1fc5ac:
    // 0x1fc5ac: 0xa0830019  sb          $v1, 0x19($a0)
    ctx->pc = 0x1fc5acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 3));
label_1fc5b0:
    // 0x1fc5b0: 0x90a3001a  lbu         $v1, 0x1A($a1)
    ctx->pc = 0x1fc5b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 26)));
label_1fc5b4:
    // 0x1fc5b4: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x1fc5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
label_1fc5b8:
    // 0x1fc5b8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1fc5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc5bc:
    // 0x1fc5bc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1fc5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1fc5c0:
    // 0x1fc5c0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1fc5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc5c4:
    // 0x1fc5c4: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1fc5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1fc5c8:
    // 0x1fc5c8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1fc5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc5cc:
    // 0x1fc5cc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1fc5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1fc5d0:
    // 0x1fc5d0: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x1fc5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc5d4:
    // 0x1fc5d4: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1fc5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_1fc5d8:
    // 0x1fc5d8: 0x90e30018  lbu         $v1, 0x18($a3)
    ctx->pc = 0x1fc5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
label_1fc5dc:
    // 0x1fc5dc: 0xa0c30018  sb          $v1, 0x18($a2)
    ctx->pc = 0x1fc5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 24), (uint8_t)GPR_U32(ctx, 3));
label_1fc5e0:
    // 0x1fc5e0: 0x90e30019  lbu         $v1, 0x19($a3)
    ctx->pc = 0x1fc5e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 25)));
label_1fc5e4:
    // 0x1fc5e4: 0xa0c30019  sb          $v1, 0x19($a2)
    ctx->pc = 0x1fc5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 25), (uint8_t)GPR_U32(ctx, 3));
label_1fc5e8:
    // 0x1fc5e8: 0x90e3001a  lbu         $v1, 0x1A($a3)
    ctx->pc = 0x1fc5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 26)));
label_1fc5ec:
    // 0x1fc5ec: 0x3e00008  jr          $ra
label_1fc5f0:
    if (ctx->pc == 0x1FC5F0u) {
        ctx->pc = 0x1FC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5ECu;
        // 0x1fc5f0: 0xa0c3001a  sb          $v1, 0x1A($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC5F4u;
        goto label_1fc5f4;
    }
    ctx->pc = 0x1FC5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5ECu;
        // 0x1fc5f0: 0xa0c3001a  sb          $v1, 0x1A($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC5F4u;
label_1fc5f4:
    // 0x1fc5f4: 0x0  nop
    ctx->pc = 0x1fc5f4u;
    // NOP
label_1fc5f8:
    // 0x1fc5f8: 0x0  nop
    ctx->pc = 0x1fc5f8u;
    // NOP
label_1fc5fc:
    // 0x1fc5fc: 0x0  nop
    ctx->pc = 0x1fc5fcu;
    // NOP
label_1fc600:
    // 0x1fc600: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1fc600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1fc604:
    // 0x1fc604: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1fc604u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fc608:
    // 0x1fc608: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fc608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fc60c:
    // 0x1fc60c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fc60cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1fc610:
    // 0x1fc610: 0x2463a678  addiu       $v1, $v1, -0x5988
    ctx->pc = 0x1fc610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944376));
label_1fc614:
    // 0x1fc614: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fc618:
    // 0x1fc618: 0x3e00008  jr          $ra
label_1fc61c:
    if (ctx->pc == 0x1FC61Cu) {
        ctx->pc = 0x1FC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC618u;
        // 0x1fc61c: 0xe46c0000  swc1        $f12, 0x0($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC620u;
        goto label_1fc620;
    }
    ctx->pc = 0x1FC618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC618u;
        // 0x1fc61c: 0xe46c0000  swc1        $f12, 0x0($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC620u;
label_1fc620:
    // 0x1fc620: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1fc620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1fc624:
    // 0x1fc624: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1fc624u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fc628:
    // 0x1fc628: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fc628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fc62c:
    // 0x1fc62c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fc62cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1fc630:
    // 0x1fc630: 0x2463a67c  addiu       $v1, $v1, -0x5984
    ctx->pc = 0x1fc630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944380));
label_1fc634:
    // 0x1fc634: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fc638:
    // 0x1fc638: 0x3e00008  jr          $ra
label_1fc63c:
    if (ctx->pc == 0x1FC63Cu) {
        ctx->pc = 0x1FC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC638u;
        // 0x1fc63c: 0xe46c0000  swc1        $f12, 0x0($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC640u;
        goto label_1fc640;
    }
    ctx->pc = 0x1FC638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC638u;
        // 0x1fc63c: 0xe46c0000  swc1        $f12, 0x0($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC640u;
label_1fc640:
    // 0x1fc640: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1fc640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1fc644:
    // 0x1fc644: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1fc644u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fc648:
    // 0x1fc648: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc64c:
    // 0x1fc64c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fc650:
    // 0x1fc650: 0x2442a684  addiu       $v0, $v0, -0x597C
    ctx->pc = 0x1fc650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944388));
label_1fc654:
    // 0x1fc654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc658:
    // 0x1fc658: 0x3e00008  jr          $ra
label_1fc65c:
    if (ctx->pc == 0x1FC65Cu) {
        ctx->pc = 0x1FC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC658u;
        // 0x1fc65c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC660u;
        goto label_1fc660;
    }
    ctx->pc = 0x1FC658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC658u;
        // 0x1fc65c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC660u;
label_1fc660:
    // 0x1fc660: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1fc660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1fc664:
    // 0x1fc664: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1fc664u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fc668:
    // 0x1fc668: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc66c:
    // 0x1fc66c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fc670:
    // 0x1fc670: 0x2442a680  addiu       $v0, $v0, -0x5980
    ctx->pc = 0x1fc670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944384));
label_1fc674:
    // 0x1fc674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc678:
    // 0x1fc678: 0x3e00008  jr          $ra
label_1fc67c:
    if (ctx->pc == 0x1FC67Cu) {
        ctx->pc = 0x1FC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC678u;
        // 0x1fc67c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC680u;
        goto label_1fc680;
    }
    ctx->pc = 0x1FC678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC678u;
        // 0x1fc67c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC680u;
label_1fc680:
    // 0x1fc680: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1fc680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1fc684:
    // 0x1fc684: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1fc684u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fc688:
    // 0x1fc688: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc68c:
    // 0x1fc68c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fc690:
    // 0x1fc690: 0x2442a67c  addiu       $v0, $v0, -0x5984
    ctx->pc = 0x1fc690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944380));
label_1fc694:
    // 0x1fc694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc698:
    // 0x1fc698: 0x3e00008  jr          $ra
label_1fc69c:
    if (ctx->pc == 0x1FC69Cu) {
        ctx->pc = 0x1FC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC698u;
        // 0x1fc69c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC6A0u;
        goto label_1fc6a0;
    }
    ctx->pc = 0x1FC698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC698u;
        // 0x1fc69c: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC6A0u;
label_1fc6a0:
    // 0x1fc6a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fc6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fc6a4:
    // 0x1fc6a4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fc6a8:
    // 0x1fc6a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fc6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1fc6ac:
    // 0x1fc6ac: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1fc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1fc6b0:
    // 0x1fc6b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fc6b4:
    // 0x1fc6b4: 0x2463a670  addiu       $v1, $v1, -0x5990
    ctx->pc = 0x1fc6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944368));
label_1fc6b8:
    // 0x1fc6b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fc6bc:
    // 0x1fc6bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fc6c0:
    // 0x1fc6c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc6c4:
    // 0x1fc6c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc6c8:
    // 0x1fc6c8: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fc6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1fc6cc:
    // 0x1fc6cc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1fc6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1fc6d0:
    // 0x1fc6d0: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1fc6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fc6d4:
    // 0x1fc6d4: 0x2484a674  addiu       $a0, $a0, -0x598C
    ctx->pc = 0x1fc6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944372));
label_1fc6d8:
    // 0x1fc6d8: 0x874821  addu        $t1, $a0, $a3
    ctx->pc = 0x1fc6d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1fc6dc:
    // 0x1fc6dc: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x1fc6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1fc6e0:
    // 0x1fc6e0: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x1fc6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc6e4:
    // 0x1fc6e4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc6e8:
    // 0x1fc6e8: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x1fc6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fc6ec:
    // 0x1fc6ec: 0x2442a678  addiu       $v0, $v0, -0x5988
    ctx->pc = 0x1fc6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944376));
label_1fc6f0:
    // 0x1fc6f0: 0x475021  addu        $t2, $v0, $a3
    ctx->pc = 0x1fc6f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1fc6f4:
    // 0x1fc6f4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc6f8:
    // 0x1fc6f8: 0x2442a67c  addiu       $v0, $v0, -0x5984
    ctx->pc = 0x1fc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944380));
label_1fc6fc:
    // 0x1fc6fc: 0x475821  addu        $t3, $v0, $a3
    ctx->pc = 0x1fc6fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1fc700:
    // 0x1fc700: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fc700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1fc704:
    // 0x1fc704: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x1fc704u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1fc708:
    // 0x1fc708: 0xc5440000  lwc1        $f4, 0x0($t2)
    ctx->pc = 0x1fc708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fc70c:
    // 0x1fc70c: 0xc5650000  lwc1        $f5, 0x0($t3)
    ctx->pc = 0x1fc70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fc710:
    // 0x1fc710: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1fc710u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1fc714:
    // 0x1fc714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fc718:
    // 0x1fc718: 0x46042880  add.s       $f2, $f5, $f4
    ctx->pc = 0x1fc718u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_1fc71c:
    // 0x1fc71c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc720:
    // 0x1fc720: 0x2442a680  addiu       $v0, $v0, -0x5980
    ctx->pc = 0x1fc720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944384));
label_1fc724:
    // 0x1fc724: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x1fc724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1fc728:
    // 0x1fc728: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1fc728u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1fc72c:
    // 0x1fc72c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc730:
    // 0x1fc730: 0x2442a684  addiu       $v0, $v0, -0x597C
    ctx->pc = 0x1fc730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944388));
label_1fc734:
    // 0x1fc734: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x1fc734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1fc738:
    // 0x1fc738: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc73c:
    // 0x1fc73c: 0x2442a68a  addiu       $v0, $v0, -0x5976
    ctx->pc = 0x1fc73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944394));
label_1fc740:
    // 0x1fc740: 0x46042881  sub.s       $f2, $f5, $f4
    ctx->pc = 0x1fc740u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1fc744:
    // 0x1fc744: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x1fc744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1fc748:
    // 0x1fc748: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc74c:
    // 0x1fc74c: 0x2442a689  addiu       $v0, $v0, -0x5977
    ctx->pc = 0x1fc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944393));
label_1fc750:
    // 0x1fc750: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x1fc750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1fc754:
    // 0x1fc754: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1fc754u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_1fc758:
    // 0x1fc758: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc75c:
    // 0x1fc75c: 0x2442a688  addiu       $v0, $v0, -0x5978
    ctx->pc = 0x1fc75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944392));
label_1fc760:
    // 0x1fc760: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1fc760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1fc764:
    // 0x1fc764: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1fc764u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1fc768:
    // 0x1fc768: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fc768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1fc76c:
    // 0x1fc76c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1fc76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1fc770:
    // 0x1fc770: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x1fc770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fc774:
    // 0x1fc774: 0xc5640000  lwc1        $f4, 0x0($t3)
    ctx->pc = 0x1fc774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fc778:
    // 0x1fc778: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x1fc778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc77c:
    // 0x1fc77c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1fc77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc780:
    // 0x1fc780: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x1fc780u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1fc784:
    // 0x1fc784: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fc784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fc788:
    // 0x1fc788: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1fc788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fc78c:
    // 0x1fc78c: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x1fc78cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1fc790:
    // 0x1fc790: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fc790u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1fc794:
    // 0x1fc794: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1fc794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1fc798:
    // 0x1fc798: 0x90730000  lbu         $s3, 0x0($v1)
    ctx->pc = 0x1fc798u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1fc79c:
    // 0x1fc79c: 0x90520000  lbu         $s2, 0x0($v0)
    ctx->pc = 0x1fc79cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1fc7a0:
    // 0x1fc7a0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_1fc7a4:
    if (ctx->pc == 0x1FC7A4u) {
        ctx->pc = 0x1FC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7A0u;
        // 0x1fc7a4: 0x90900000  lbu         $s0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC7A8u;
        goto label_1fc7a8;
    }
    ctx->pc = 0x1FC7A0u;
    {
        const bool branch_taken_0x1fc7a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7A0u;
        // 0x1fc7a4: 0x90900000  lbu         $s0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7a0) {
            ctx->pc = 0x1FC7C0u;
            goto label_1fc7c0;
        }
    }
    ctx->pc = 0x1FC7A8u;
label_1fc7a8:
    // 0x1fc7a8: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x1fc7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1fc7ac:
    // 0x1fc7ac: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x1fc7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_1fc7b0:
    // 0x1fc7b0: 0xc06dfd4  jal         func_1B7F50
label_1fc7b4:
    if (ctx->pc == 0x1FC7B4u) {
        ctx->pc = 0x1FC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7B0u;
        // 0x1fc7b4: 0x320600ff  andi        $a2, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC7B8u;
        goto label_1fc7b8;
    }
    ctx->pc = 0x1FC7B0u;
    SET_GPR_U32(ctx, 31, 0x1FC7B8u);
    ctx->pc = 0x1FC7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7B0u;
    // 0x1fc7b4: 0x320600ff  andi        $a2, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    { ctx->pc = 0x1b7f50; return; }
    ctx->pc = 0x1FC7B8u;
label_1fc7b8:
    // 0x1fc7b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1fc7bc:
    if (ctx->pc == 0x1FC7BCu) {
        ctx->pc = 0x1FC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7B8u;
        // 0x1fc7bc: 0x326200ff  andi        $v0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC7C0u;
        goto label_1fc7c0;
    }
    ctx->pc = 0x1FC7B8u;
    {
        const bool branch_taken_0x1fc7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7B8u;
        // 0x1fc7bc: 0x326200ff  andi        $v0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7b8) {
            ctx->pc = 0x1FC7D0u;
            goto label_1fc7d0;
        }
    }
    ctx->pc = 0x1FC7C0u;
label_1fc7c0:
    // 0x1fc7c0: 0xa3929040  sb          $s2, -0x6FC0($gp)
    ctx->pc = 0x1fc7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938688), (uint8_t)GPR_U32(ctx, 18));
label_1fc7c4:
    // 0x1fc7c4: 0xa3939041  sb          $s3, -0x6FBF($gp)
    ctx->pc = 0x1fc7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938689), (uint8_t)GPR_U32(ctx, 19));
label_1fc7c8:
    // 0x1fc7c8: 0xa3909042  sb          $s0, -0x6FBE($gp)
    ctx->pc = 0x1fc7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938690), (uint8_t)GPR_U32(ctx, 16));
label_1fc7cc:
    // 0x1fc7cc: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x1fc7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_1fc7d0:
    // 0x1fc7d0: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x1fc7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1fc7d4:
    // 0x1fc7d4: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x1fc7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_1fc7d8:
    // 0x1fc7d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1fc7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1fc7dc:
    // 0x1fc7dc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1fc7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1fc7e0:
    // 0x1fc7e0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1fc7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1fc7e4:
    // 0x1fc7e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fc7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1fc7e8:
    // 0x1fc7e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fc7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc7ec:
    // 0x1fc7ec: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1fc7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fc7f0:
    // 0x1fc7f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fc7f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc7f4:
    // 0x1fc7f4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1fc7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1fc7f8:
    // 0x1fc7f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fc7f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc7fc:
    // 0x1fc7fc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1fc7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1fc800:
    // 0x1fc800: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc804:
    // 0x1fc804: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1fc804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1fc808:
    // 0x1fc808: 0x2442a630  addiu       $v0, $v0, -0x59D0
    ctx->pc = 0x1fc808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
label_1fc80c:
    // 0x1fc80c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fc80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1fc810:
    // 0x1fc810: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1fc810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1fc814:
    // 0x1fc814: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1fc814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1fc818:
    // 0x1fc818: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fc818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fc81c:
    // 0x1fc81c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1fc81cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_1fc820:
    // 0x1fc820: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x1fc820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
label_1fc824:
    // 0x1fc824: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x1fc824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1fc828:
    // 0x1fc828: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1fc828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1fc82c:
    // 0x1fc82c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1fc82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fc830:
    // 0x1fc830: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1fc830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1fc834:
    // 0x1fc834: 0xc066c72  jal         func_19B1C8
label_1fc838:
    if (ctx->pc == 0x1FC838u) {
        ctx->pc = 0x1FC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC834u;
        // 0x1fc838: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC83Cu;
        goto label_1fc83c;
    }
    ctx->pc = 0x1FC834u;
    SET_GPR_U32(ctx, 31, 0x1FC83Cu);
    ctx->pc = 0x1FC838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC834u;
    // 0x1fc838: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1FC83Cu;
label_1fc83c:
    // 0x1fc83c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fc83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fc840:
    // 0x1fc840: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fc840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc844:
    // 0x1fc844: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc848:
    // 0x1fc848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc84c:
    // 0x1fc84c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc850:
    // 0x1fc850: 0x3e00008  jr          $ra
label_1fc854:
    if (ctx->pc == 0x1FC854u) {
        ctx->pc = 0x1FC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC850u;
        // 0x1fc854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC858u;
        goto label_1fc858;
    }
    ctx->pc = 0x1FC850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC850u;
        // 0x1fc854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC858u;
label_1fc858:
    // 0x1fc858: 0x0  nop
    ctx->pc = 0x1fc858u;
    // NOP
label_1fc85c:
    // 0x1fc85c: 0x0  nop
    ctx->pc = 0x1fc85cu;
    // NOP
label_1fc860:
    // 0x1fc860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fc860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fc864:
    // 0x1fc864: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1fc864u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc868:
    // 0x1fc868: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fc868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fc86c:
    // 0x1fc86c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1fc86cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc870:
    // 0x1fc870: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fc870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fc874:
    // 0x1fc874: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1fc874u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc878:
    // 0x1fc878: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fc87c:
    // 0x1fc87c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fc880:
    // 0x1fc880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fc884:
    // 0x1fc884: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc888:
    // 0x1fc888: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1fc888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1fc88c:
    // 0x1fc88c: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x1fc88cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_1fc890:
    // 0x1fc890: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fc890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fc894:
    // 0x1fc894: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x1fc894u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
label_1fc898:
    // 0x1fc898: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fc898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1fc89c:
    // 0x1fc89c: 0x3c0c0054  lui         $t4, 0x54
    ctx->pc = 0x1fc89cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)84 << 16));
label_1fc8a0:
    // 0x1fc8a0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1fc8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_1fc8a4:
    // 0x1fc8a4: 0x3c0b45da  lui         $t3, 0x45DA
    ctx->pc = 0x1fc8a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17882 << 16));
label_1fc8a8:
    // 0x1fc8a8: 0x24e7c480  addiu       $a3, $a3, -0x3B80
    ctx->pc = 0x1fc8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952064));
label_1fc8ac:
    // 0x1fc8ac: 0x2508c4e0  addiu       $t0, $t0, -0x3B20
    ctx->pc = 0x1fc8acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952160));
label_1fc8b0:
    // 0x1fc8b0: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1fc8b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fc8b4:
    // 0x1fc8b4: 0x3c061100  lui         $a2, 0x1100
    ctx->pc = 0x1fc8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4352 << 16));
label_1fc8b8:
    // 0x1fc8b8: 0x24a5a610  addiu       $a1, $a1, -0x59F0
    ctx->pc = 0x1fc8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944272));
label_1fc8bc:
    // 0x1fc8bc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1fc8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1fc8c0:
    // 0x1fc8c0: 0x2415003d  addiu       $s5, $zero, 0x3D
    ctx->pc = 0x1fc8c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_1fc8c4:
    // 0x1fc8c4: 0x3c0d437f  lui         $t5, 0x437F
    ctx->pc = 0x1fc8c4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)17279 << 16));
label_1fc8c8:
    // 0x1fc8c8: 0x258ca670  addiu       $t4, $t4, -0x5990
    ctx->pc = 0x1fc8c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294944368));
label_1fc8cc:
    // 0x1fc8cc: 0x3c0a45fa  lui         $t2, 0x45FA
    ctx->pc = 0x1fc8ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17914 << 16));
label_1fc8d0:
    // 0x1fc8d0: 0x356bc000  ori         $t3, $t3, 0xC000
    ctx->pc = 0x1fc8d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)49152);
label_1fc8d4:
    // 0x1fc8d4: 0x18fc821  addu        $t9, $t4, $t7
    ctx->pc = 0x1fc8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_1fc8d8:
    // 0x1fc8d8: 0xaf2d0004  sw          $t5, 0x4($t9)
    ctx->pc = 0x1fc8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 13));
label_1fc8dc:
    // 0x1fc8dc: 0x27320004  addiu       $s2, $t9, 0x4
    ctx->pc = 0x1fc8dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
label_1fc8e0:
    // 0x1fc8e0: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x1fc8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
label_1fc8e4:
    // 0x1fc8e4: 0x27300008  addiu       $s0, $t9, 0x8
    ctx->pc = 0x1fc8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
label_1fc8e8:
    // 0x1fc8e8: 0xaf2b0008  sw          $t3, 0x8($t9)
    ctx->pc = 0x1fc8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 11));
label_1fc8ec:
    // 0x1fc8ec: 0x2731000c  addiu       $s1, $t9, 0xC
    ctx->pc = 0x1fc8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), 12));
label_1fc8f0:
    // 0x1fc8f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1fc8f4:
    if (ctx->pc == 0x1FC8F4u) {
        ctx->pc = 0x1FC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8F0u;
        // 0x1fc8f4: 0xaf2a000c  sw          $t2, 0xC($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC8F8u;
        goto label_1fc8f8;
    }
    ctx->pc = 0x1FC8F0u;
    {
        const bool branch_taken_0x1fc8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8F0u;
        // 0x1fc8f4: 0xaf2a000c  sw          $t2, 0xC($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8f0) {
            ctx->pc = 0x1FC908u;
            goto label_1fc908;
        }
    }
    ctx->pc = 0x1FC8F8u;
label_1fc8f8:
    // 0x1fc8f8: 0xa3290018  sb          $t1, 0x18($t9)
    ctx->pc = 0x1fc8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 24), (uint8_t)GPR_U32(ctx, 9));
label_1fc8fc:
    // 0x1fc8fc: 0xa3290019  sb          $t1, 0x19($t9)
    ctx->pc = 0x1fc8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 25), (uint8_t)GPR_U32(ctx, 9));
label_1fc900:
    // 0x1fc900: 0x10000019  b           . + 4 + (0x19 << 2)
label_1fc904:
    if (ctx->pc == 0x1FC904u) {
        ctx->pc = 0x1FC904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC900u;
        // 0x1fc904: 0xa329001a  sb          $t1, 0x1A($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 26), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC908u;
        goto label_1fc908;
    }
    ctx->pc = 0x1FC900u;
    {
        const bool branch_taken_0x1fc900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC900u;
        // 0x1fc904: 0xa329001a  sb          $t1, 0x1A($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 26), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc900) {
            ctx->pc = 0x1FC968u;
            goto label_1fc968;
        }
    }
    ctx->pc = 0x1FC908u;
label_1fc908:
    // 0x1fc908: 0x8f93863c  lw          $s3, -0x79C4($gp)
    ctx->pc = 0x1fc908u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1fc90c:
    // 0x1fc90c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_1fc910:
    if (ctx->pc == 0x1FC910u) {
        ctx->pc = 0x1FC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC90Cu;
        // 0x1fc910: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC914u;
        goto label_1fc914;
    }
    ctx->pc = 0x1FC90Cu;
    {
        const bool branch_taken_0x1fc90c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC90Cu;
        // 0x1fc910: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc90c) {
            ctx->pc = 0x1FC93Cu;
            goto label_1fc93c;
        }
    }
    ctx->pc = 0x1FC914u;
label_1fc914:
    // 0x1fc914: 0x9033490d  lbu         $s3, 0x490D($at)
    ctx->pc = 0x1fc914u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1fc918:
    // 0x1fc918: 0x139880  sll         $s3, $s3, 2
    ctx->pc = 0x1fc918u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1fc91c:
    // 0x1fc91c: 0x113a021  addu        $s4, $t0, $s3
    ctx->pc = 0x1fc91cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
label_1fc920:
    // 0x1fc920: 0x92930000  lbu         $s3, 0x0($s4)
    ctx->pc = 0x1fc920u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1fc924:
    // 0x1fc924: 0xa3330018  sb          $s3, 0x18($t9)
    ctx->pc = 0x1fc924u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 24), (uint8_t)GPR_U32(ctx, 19));
label_1fc928:
    // 0x1fc928: 0x92930001  lbu         $s3, 0x1($s4)
    ctx->pc = 0x1fc928u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1fc92c:
    // 0x1fc92c: 0xa3330019  sb          $s3, 0x19($t9)
    ctx->pc = 0x1fc92cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 25), (uint8_t)GPR_U32(ctx, 19));
label_1fc930:
    // 0x1fc930: 0x92930002  lbu         $s3, 0x2($s4)
    ctx->pc = 0x1fc930u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_1fc934:
    // 0x1fc934: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fc938:
    if (ctx->pc == 0x1FC938u) {
        ctx->pc = 0x1FC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC934u;
        // 0x1fc938: 0xa333001a  sb          $s3, 0x1A($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 26), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC93Cu;
        goto label_1fc93c;
    }
    ctx->pc = 0x1FC934u;
    {
        const bool branch_taken_0x1fc934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC934u;
        // 0x1fc938: 0xa333001a  sb          $s3, 0x1A($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 26), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc934) {
            ctx->pc = 0x1FC968u;
            goto label_1fc968;
        }
    }
    ctx->pc = 0x1FC93Cu;
label_1fc93c:
    // 0x1fc93c: 0x0  nop
    ctx->pc = 0x1fc93cu;
    // NOP
label_1fc940:
    // 0x1fc940: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fc940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1fc944:
    // 0x1fc944: 0x9033490d  lbu         $s3, 0x490D($at)
    ctx->pc = 0x1fc944u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1fc948:
    // 0x1fc948: 0x139880  sll         $s3, $s3, 2
    ctx->pc = 0x1fc948u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1fc94c:
    // 0x1fc94c: 0xf3a021  addu        $s4, $a3, $s3
    ctx->pc = 0x1fc94cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_1fc950:
    // 0x1fc950: 0x92930000  lbu         $s3, 0x0($s4)
    ctx->pc = 0x1fc950u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1fc954:
    // 0x1fc954: 0xa3330018  sb          $s3, 0x18($t9)
    ctx->pc = 0x1fc954u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 24), (uint8_t)GPR_U32(ctx, 19));
label_1fc958:
    // 0x1fc958: 0x92930001  lbu         $s3, 0x1($s4)
    ctx->pc = 0x1fc958u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1fc95c:
    // 0x1fc95c: 0xa3330019  sb          $s3, 0x19($t9)
    ctx->pc = 0x1fc95cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 25), (uint8_t)GPR_U32(ctx, 19));
label_1fc960:
    // 0x1fc960: 0x92930002  lbu         $s3, 0x2($s4)
    ctx->pc = 0x1fc960u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_1fc964:
    // 0x1fc964: 0xa333001a  sb          $s3, 0x1A($t9)
    ctx->pc = 0x1fc964u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 26), (uint8_t)GPR_U32(ctx, 19));
label_1fc968:
    // 0x1fc968: 0xb89821  addu        $s3, $a1, $t8
    ctx->pc = 0x1fc968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
label_1fc96c:
    // 0x1fc96c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1fc96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc970:
    // 0x1fc970: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1fc970u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_1fc974:
    // 0x1fc974: 0xc7210000  lwc1        $f1, 0x0($t9)
    ctx->pc = 0x1fc974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc978:
    // 0x1fc978: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1fc978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1fc97c:
    // 0x1fc97c: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x1fc97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fc980:
    // 0x1fc980: 0x29d40002  slti        $s4, $t6, 0x2
    ctx->pc = 0x1fc980u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fc984:
    // 0x1fc984: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x1fc984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fc988:
    // 0x1fc988: 0x25ef001c  addiu       $t7, $t7, 0x1C
    ctx->pc = 0x1fc988u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 28));
label_1fc98c:
    // 0x1fc98c: 0x27180030  addiu       $t8, $t8, 0x30
    ctx->pc = 0x1fc98cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 48));
label_1fc990:
    // 0x1fc990: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1fc990u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fc994:
    // 0x1fc994: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fc994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fc998:
    // 0x1fc998: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x1fc998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_1fc99c:
    // 0x1fc99c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1fc99cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1fc9a0:
    // 0x1fc9a0: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x1fc9a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1fc9a4:
    // 0x1fc9a4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1fc9a4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1fc9a8:
    // 0x1fc9a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fc9a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fc9ac:
    // 0x1fc9ac: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1fc9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1fc9b0:
    // 0x1fc9b0: 0xe7200010  swc1        $f0, 0x10($t9)
    ctx->pc = 0x1fc9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 16), bits); }
label_1fc9b4:
    // 0x1fc9b4: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x1fc9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fc9b8:
    // 0x1fc9b8: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x1fc9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fc9bc:
    // 0x1fc9bc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1fc9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc9c0:
    // 0x1fc9c0: 0xc7200000  lwc1        $f0, 0x0($t9)
    ctx->pc = 0x1fc9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc9c4:
    // 0x1fc9c4: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x1fc9c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_1fc9c8:
    // 0x1fc9c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fc9c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fc9cc:
    // 0x1fc9cc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1fc9ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fc9d0:
    // 0x1fc9d0: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1fc9d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1fc9d4:
    // 0x1fc9d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fc9d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1fc9d8:
    // 0x1fc9d8: 0xe7200014  swc1        $f0, 0x14($t9)
    ctx->pc = 0x1fc9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 20), bits); }
label_1fc9dc:
    // 0x1fc9dc: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1fc9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_1fc9e0:
    // 0x1fc9e0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1fc9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1fc9e4:
    // 0x1fc9e4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1fc9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1fc9e8:
    // 0x1fc9e8: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1fc9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_1fc9ec:
    // 0x1fc9ec: 0xdc308ec0  ld          $s0, -0x7140($at)
    ctx->pc = 0x1fc9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 4294938304)));
label_1fc9f0:
    // 0x1fc9f0: 0xfe700010  sd          $s0, 0x10($s3)
    ctx->pc = 0x1fc9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 16));
label_1fc9f4:
    // 0x1fc9f4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1fc9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1fc9f8:
    // 0x1fc9f8: 0xdc308ec8  ld          $s0, -0x7138($at)
    ctx->pc = 0x1fc9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 4294938312)));
label_1fc9fc:
    // 0x1fc9fc: 0xfe700018  sd          $s0, 0x18($s3)
    ctx->pc = 0x1fc9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 16));
label_1fca00:
    // 0x1fca00: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x1fca00u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
label_1fca04:
    // 0x1fca04: 0x1680ffb3  bnez        $s4, . + 4 + (-0x4D << 2)
label_1fca08:
    if (ctx->pc == 0x1FCA08u) {
        ctx->pc = 0x1FCA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA04u;
        // 0x1fca08: 0xfe750028  sd          $s5, 0x28($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA0Cu;
        goto label_1fca0c;
    }
    ctx->pc = 0x1FCA04u;
    {
        const bool branch_taken_0x1fca04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA04u;
        // 0x1fca08: 0xfe750028  sd          $s5, 0x28($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca04) {
            ctx->pc = 0x1FC8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc8d4;
        }
    }
    ctx->pc = 0x1FCA0Cu;
label_1fca0c:
    // 0x1fca0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fca0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fca10:
    // 0x1fca10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fca10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fca14:
    // 0x1fca14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fca14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fca18:
    // 0x1fca18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fca18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fca1c:
    // 0x1fca1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fca1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fca20:
    // 0x1fca20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fca20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fca24:
    // 0x1fca24: 0x3e00008  jr          $ra
label_1fca28:
    if (ctx->pc == 0x1FCA28u) {
        ctx->pc = 0x1FCA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA24u;
        // 0x1fca28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA2Cu;
        goto label_1fca2c;
    }
    ctx->pc = 0x1FCA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA24u;
        // 0x1fca28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCA2Cu;
label_1fca2c:
    // 0x1fca2c: 0x0  nop
    ctx->pc = 0x1fca2cu;
    // NOP
label_1fca30:
    // 0x1fca30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fca34:
    // 0x1fca34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fca38:
    // 0x1fca38: 0x93859040  lbu         $a1, -0x6FC0($gp)
    ctx->pc = 0x1fca38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938688)));
label_1fca3c:
    // 0x1fca3c: 0x93869041  lbu         $a2, -0x6FBF($gp)
    ctx->pc = 0x1fca3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938689)));
label_1fca40:
    // 0x1fca40: 0x93879042  lbu         $a3, -0x6FBE($gp)
    ctx->pc = 0x1fca40u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938690)));
label_1fca44:
    // 0x1fca44: 0xc071400  jal         func_1C5000
label_1fca48:
    if (ctx->pc == 0x1FCA48u) {
        ctx->pc = 0x1FCA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA44u;
        // 0x1fca48: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA4Cu;
        goto label_1fca4c;
    }
    ctx->pc = 0x1FCA44u;
    SET_GPR_U32(ctx, 31, 0x1FCA4Cu);
    ctx->pc = 0x1FCA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA44u;
    // 0x1fca48: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    { ctx->pc = 0x1c5000; return; }
    ctx->pc = 0x1FCA4Cu;
label_1fca4c:
    // 0x1fca4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fca50:
    // 0x1fca50: 0x3e00008  jr          $ra
label_1fca54:
    if (ctx->pc == 0x1FCA54u) {
        ctx->pc = 0x1FCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA50u;
        // 0x1fca54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA58u;
        goto label_1fca58;
    }
    ctx->pc = 0x1FCA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA50u;
        // 0x1fca54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCA58u;
label_1fca58:
    // 0x1fca58: 0x0  nop
    ctx->pc = 0x1fca58u;
    // NOP
label_1fca5c:
    // 0x1fca5c: 0x0  nop
    ctx->pc = 0x1fca5cu;
    // NOP
label_1fca60:
    // 0x1fca60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fca64:
    // 0x1fca64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fca68:
    // 0x1fca68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1fca6c:
    // 0x1fca6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fca6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fca70:
    // 0x1fca70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fca74:
    // 0x1fca74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fca74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fca78:
    // 0x1fca78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fca7c:
    // 0x1fca7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fca80:
    // 0x1fca80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fca84:
    // 0x1fca84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fca84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fca88:
    // 0x1fca88: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1fca88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fca8c:
    // 0x1fca8c: 0xc085cc4  jal         func_217310
label_1fca90:
    if (ctx->pc == 0x1FCA90u) {
        ctx->pc = 0x1FCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA8Cu;
        // 0x1fca90: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA94u;
        goto label_1fca94;
    }
    ctx->pc = 0x1FCA8Cu;
    SET_GPR_U32(ctx, 31, 0x1FCA94u);
    ctx->pc = 0x1FCA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA8Cu;
    // 0x1fca90: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1FCA94u;
label_1fca94:
    // 0x1fca94: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x1fca94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_1fca98:
    // 0x1fca98: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1fca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1fca9c:
    // 0x1fca9c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1fca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1fcaa0:
    // 0x1fcaa0: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1fcaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1fcaa4:
    // 0x1fcaa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcaa8:
    // 0x1fcaa8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fcaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fcaac:
    // 0x1fcaac: 0xaf829044  sw          $v0, -0x6FBC($gp)
    ctx->pc = 0x1fcaacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938692), GPR_U32(ctx, 2));
label_1fcab0:
    // 0x1fcab0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1fcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1fcab4:
    // 0x1fcab4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fcab8:
    // 0x1fcab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fcab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcabc:
    // 0x1fcabc: 0x24523620  addiu       $s2, $v0, 0x3620
    ctx->pc = 0x1fcabcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_1fcac0:
    // 0x1fcac0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fcac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fcac4:
    // 0x1fcac4: 0x2463a760  addiu       $v1, $v1, -0x58A0
    ctx->pc = 0x1fcac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944608));
label_1fcac8:
    // 0x1fcac8: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x1fcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1fcacc:
    // 0x1fcacc: 0x9042005e  lbu         $v0, 0x5E($v0)
    ctx->pc = 0x1fcaccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 94)));
label_1fcad0:
    // 0x1fcad0: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x1fcad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
label_1fcad4:
    // 0x1fcad4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1fcad8:
    if (ctx->pc == 0x1FCAD8u) {
        ctx->pc = 0x1FCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAD4u;
        // 0x1fcad8: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCADCu;
        goto label_1fcadc;
    }
    ctx->pc = 0x1FCAD4u;
    {
        const bool branch_taken_0x1fcad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAD4u;
        // 0x1fcad8: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcad4) {
            ctx->pc = 0x1FCAF0u;
            goto label_1fcaf0;
        }
    }
    ctx->pc = 0x1FCADCu;
label_1fcadc:
    // 0x1fcadc: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x1fcadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
label_1fcae0:
    // 0x1fcae0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fcae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1fcae4:
    // 0x1fcae4: 0x8f829044  lw          $v0, -0x6FBC($gp)
    ctx->pc = 0x1fcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938692)));
label_1fcae8:
    // 0x1fcae8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fcae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fcaec:
    // 0x1fcaec: 0xaf829044  sw          $v0, -0x6FBC($gp)
    ctx->pc = 0x1fcaecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938692), GPR_U32(ctx, 2));
label_1fcaf0:
    // 0x1fcaf0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fcaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1fcaf4:
    // 0x1fcaf4: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x1fcaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_1fcaf8:
    // 0x1fcaf8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1fcafc:
    if (ctx->pc == 0x1FCAFCu) {
        ctx->pc = 0x1FCAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAF8u;
        // 0x1fcafc: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB00u;
        goto label_1fcb00;
    }
    ctx->pc = 0x1FCAF8u;
    {
        const bool branch_taken_0x1fcaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAF8u;
        // 0x1fcafc: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaf8) {
            ctx->pc = 0x1FCACCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcacc;
        }
    }
    ctx->pc = 0x1FCB00u;
label_1fcb00:
    // 0x1fcb00: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fcb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1fcb04:
    // 0x1fcb04: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x1fcb04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1fcb08:
    // 0x1fcb08: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x1fcb08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
label_1fcb0c:
    // 0x1fcb0c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1fcb10:
    if (ctx->pc == 0x1FCB10u) {
        ctx->pc = 0x1FCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB0Cu;
        // 0x1fcb10: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB14u;
        goto label_1fcb14;
    }
    ctx->pc = 0x1FCB0Cu;
    {
        const bool branch_taken_0x1fcb0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB0Cu;
        // 0x1fcb10: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb0c) {
            ctx->pc = 0x1FCB24u;
            { ctx->pc = 0x1fcb24; return; }
        }
    }
    ctx->pc = 0x1FCB14u;
label_1fcb14:
    // 0x1fcb14: 0xc078050  jal         func_1E0140
label_1fcb18:
    if (ctx->pc == 0x1FCB18u) {
        ctx->pc = 0x1FCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB14u;
        // 0x1fcb18: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB1Cu;
        goto label_1fcb1c;
    }
    ctx->pc = 0x1FCB14u;
    SET_GPR_U32(ctx, 31, 0x1FCB1Cu);
    ctx->pc = 0x1FCB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB14u;
    // 0x1fcb18: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1FCB1Cu;
label_1fcb1c:
    // 0x1fcb1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1fcb20u;
    return;
}
