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


void FUN_0017d410_part267(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ff230u: goto label_1ff230;
        case 0x1ff234u: goto label_1ff234;
        case 0x1ff238u: goto label_1ff238;
        case 0x1ff23cu: goto label_1ff23c;
        case 0x1ff240u: goto label_1ff240;
        case 0x1ff244u: goto label_1ff244;
        case 0x1ff248u: goto label_1ff248;
        case 0x1ff24cu: goto label_1ff24c;
        case 0x1ff250u: goto label_1ff250;
        case 0x1ff254u: goto label_1ff254;
        case 0x1ff258u: goto label_1ff258;
        case 0x1ff25cu: goto label_1ff25c;
        case 0x1ff260u: goto label_1ff260;
        case 0x1ff264u: goto label_1ff264;
        case 0x1ff268u: goto label_1ff268;
        case 0x1ff26cu: goto label_1ff26c;
        case 0x1ff270u: goto label_1ff270;
        case 0x1ff274u: goto label_1ff274;
        case 0x1ff278u: goto label_1ff278;
        case 0x1ff27cu: goto label_1ff27c;
        case 0x1ff280u: goto label_1ff280;
        case 0x1ff284u: goto label_1ff284;
        case 0x1ff288u: goto label_1ff288;
        case 0x1ff28cu: goto label_1ff28c;
        case 0x1ff290u: goto label_1ff290;
        case 0x1ff294u: goto label_1ff294;
        case 0x1ff298u: goto label_1ff298;
        case 0x1ff29cu: goto label_1ff29c;
        case 0x1ff2a0u: goto label_1ff2a0;
        case 0x1ff2a4u: goto label_1ff2a4;
        case 0x1ff2a8u: goto label_1ff2a8;
        case 0x1ff2acu: goto label_1ff2ac;
        case 0x1ff2b0u: goto label_1ff2b0;
        case 0x1ff2b4u: goto label_1ff2b4;
        case 0x1ff2b8u: goto label_1ff2b8;
        case 0x1ff2bcu: goto label_1ff2bc;
        case 0x1ff2c0u: goto label_1ff2c0;
        case 0x1ff2c4u: goto label_1ff2c4;
        case 0x1ff2c8u: goto label_1ff2c8;
        case 0x1ff2ccu: goto label_1ff2cc;
        case 0x1ff2d0u: goto label_1ff2d0;
        case 0x1ff2d4u: goto label_1ff2d4;
        case 0x1ff2d8u: goto label_1ff2d8;
        case 0x1ff2dcu: goto label_1ff2dc;
        case 0x1ff2e0u: goto label_1ff2e0;
        case 0x1ff2e4u: goto label_1ff2e4;
        case 0x1ff2e8u: goto label_1ff2e8;
        case 0x1ff2ecu: goto label_1ff2ec;
        case 0x1ff2f0u: goto label_1ff2f0;
        case 0x1ff2f4u: goto label_1ff2f4;
        case 0x1ff2f8u: goto label_1ff2f8;
        case 0x1ff2fcu: goto label_1ff2fc;
        case 0x1ff300u: goto label_1ff300;
        case 0x1ff304u: goto label_1ff304;
        case 0x1ff308u: goto label_1ff308;
        case 0x1ff30cu: goto label_1ff30c;
        case 0x1ff310u: goto label_1ff310;
        case 0x1ff314u: goto label_1ff314;
        case 0x1ff318u: goto label_1ff318;
        case 0x1ff31cu: goto label_1ff31c;
        case 0x1ff320u: goto label_1ff320;
        case 0x1ff324u: goto label_1ff324;
        case 0x1ff328u: goto label_1ff328;
        case 0x1ff32cu: goto label_1ff32c;
        case 0x1ff330u: goto label_1ff330;
        case 0x1ff334u: goto label_1ff334;
        case 0x1ff338u: goto label_1ff338;
        case 0x1ff33cu: goto label_1ff33c;
        case 0x1ff340u: goto label_1ff340;
        case 0x1ff344u: goto label_1ff344;
        case 0x1ff348u: goto label_1ff348;
        case 0x1ff34cu: goto label_1ff34c;
        case 0x1ff350u: goto label_1ff350;
        case 0x1ff354u: goto label_1ff354;
        case 0x1ff358u: goto label_1ff358;
        case 0x1ff35cu: goto label_1ff35c;
        case 0x1ff360u: goto label_1ff360;
        case 0x1ff364u: goto label_1ff364;
        case 0x1ff368u: goto label_1ff368;
        case 0x1ff36cu: goto label_1ff36c;
        case 0x1ff370u: goto label_1ff370;
        case 0x1ff374u: goto label_1ff374;
        case 0x1ff378u: goto label_1ff378;
        case 0x1ff37cu: goto label_1ff37c;
        case 0x1ff380u: goto label_1ff380;
        case 0x1ff384u: goto label_1ff384;
        case 0x1ff388u: goto label_1ff388;
        case 0x1ff38cu: goto label_1ff38c;
        case 0x1ff390u: goto label_1ff390;
        case 0x1ff394u: goto label_1ff394;
        case 0x1ff398u: goto label_1ff398;
        case 0x1ff39cu: goto label_1ff39c;
        case 0x1ff3a0u: goto label_1ff3a0;
        case 0x1ff3a4u: goto label_1ff3a4;
        case 0x1ff3a8u: goto label_1ff3a8;
        case 0x1ff3acu: goto label_1ff3ac;
        case 0x1ff3b0u: goto label_1ff3b0;
        case 0x1ff3b4u: goto label_1ff3b4;
        case 0x1ff3b8u: goto label_1ff3b8;
        case 0x1ff3bcu: goto label_1ff3bc;
        case 0x1ff3c0u: goto label_1ff3c0;
        case 0x1ff3c4u: goto label_1ff3c4;
        case 0x1ff3c8u: goto label_1ff3c8;
        case 0x1ff3ccu: goto label_1ff3cc;
        case 0x1ff3d0u: goto label_1ff3d0;
        case 0x1ff3d4u: goto label_1ff3d4;
        case 0x1ff3d8u: goto label_1ff3d8;
        case 0x1ff3dcu: goto label_1ff3dc;
        case 0x1ff3e0u: goto label_1ff3e0;
        case 0x1ff3e4u: goto label_1ff3e4;
        case 0x1ff3e8u: goto label_1ff3e8;
        case 0x1ff3ecu: goto label_1ff3ec;
        case 0x1ff3f0u: goto label_1ff3f0;
        case 0x1ff3f4u: goto label_1ff3f4;
        case 0x1ff3f8u: goto label_1ff3f8;
        case 0x1ff3fcu: goto label_1ff3fc;
        case 0x1ff400u: goto label_1ff400;
        case 0x1ff404u: goto label_1ff404;
        case 0x1ff408u: goto label_1ff408;
        case 0x1ff40cu: goto label_1ff40c;
        case 0x1ff410u: goto label_1ff410;
        case 0x1ff414u: goto label_1ff414;
        case 0x1ff418u: goto label_1ff418;
        case 0x1ff41cu: goto label_1ff41c;
        case 0x1ff420u: goto label_1ff420;
        case 0x1ff424u: goto label_1ff424;
        case 0x1ff428u: goto label_1ff428;
        case 0x1ff42cu: goto label_1ff42c;
        case 0x1ff430u: goto label_1ff430;
        case 0x1ff434u: goto label_1ff434;
        case 0x1ff438u: goto label_1ff438;
        case 0x1ff43cu: goto label_1ff43c;
        case 0x1ff440u: goto label_1ff440;
        case 0x1ff444u: goto label_1ff444;
        case 0x1ff448u: goto label_1ff448;
        case 0x1ff44cu: goto label_1ff44c;
        case 0x1ff450u: goto label_1ff450;
        case 0x1ff454u: goto label_1ff454;
        case 0x1ff458u: goto label_1ff458;
        case 0x1ff45cu: goto label_1ff45c;
        case 0x1ff460u: goto label_1ff460;
        case 0x1ff464u: goto label_1ff464;
        case 0x1ff468u: goto label_1ff468;
        case 0x1ff46cu: goto label_1ff46c;
        case 0x1ff470u: goto label_1ff470;
        case 0x1ff474u: goto label_1ff474;
        case 0x1ff478u: goto label_1ff478;
        case 0x1ff47cu: goto label_1ff47c;
        case 0x1ff480u: goto label_1ff480;
        case 0x1ff484u: goto label_1ff484;
        case 0x1ff488u: goto label_1ff488;
        case 0x1ff48cu: goto label_1ff48c;
        case 0x1ff490u: goto label_1ff490;
        case 0x1ff494u: goto label_1ff494;
        case 0x1ff498u: goto label_1ff498;
        case 0x1ff49cu: goto label_1ff49c;
        case 0x1ff4a0u: goto label_1ff4a0;
        case 0x1ff4a4u: goto label_1ff4a4;
        case 0x1ff4a8u: goto label_1ff4a8;
        case 0x1ff4acu: goto label_1ff4ac;
        case 0x1ff4b0u: goto label_1ff4b0;
        case 0x1ff4b4u: goto label_1ff4b4;
        case 0x1ff4b8u: goto label_1ff4b8;
        case 0x1ff4bcu: goto label_1ff4bc;
        case 0x1ff4c0u: goto label_1ff4c0;
        case 0x1ff4c4u: goto label_1ff4c4;
        case 0x1ff4c8u: goto label_1ff4c8;
        case 0x1ff4ccu: goto label_1ff4cc;
        case 0x1ff4d0u: goto label_1ff4d0;
        case 0x1ff4d4u: goto label_1ff4d4;
        case 0x1ff4d8u: goto label_1ff4d8;
        case 0x1ff4dcu: goto label_1ff4dc;
        case 0x1ff4e0u: goto label_1ff4e0;
        case 0x1ff4e4u: goto label_1ff4e4;
        case 0x1ff4e8u: goto label_1ff4e8;
        case 0x1ff4ecu: goto label_1ff4ec;
        case 0x1ff4f0u: goto label_1ff4f0;
        case 0x1ff4f4u: goto label_1ff4f4;
        case 0x1ff4f8u: goto label_1ff4f8;
        case 0x1ff4fcu: goto label_1ff4fc;
        case 0x1ff500u: goto label_1ff500;
        case 0x1ff504u: goto label_1ff504;
        case 0x1ff508u: goto label_1ff508;
        case 0x1ff50cu: goto label_1ff50c;
        case 0x1ff510u: goto label_1ff510;
        case 0x1ff514u: goto label_1ff514;
        case 0x1ff518u: goto label_1ff518;
        case 0x1ff51cu: goto label_1ff51c;
        case 0x1ff520u: goto label_1ff520;
        case 0x1ff524u: goto label_1ff524;
        case 0x1ff528u: goto label_1ff528;
        case 0x1ff52cu: goto label_1ff52c;
        case 0x1ff530u: goto label_1ff530;
        case 0x1ff534u: goto label_1ff534;
        case 0x1ff538u: goto label_1ff538;
        case 0x1ff53cu: goto label_1ff53c;
        case 0x1ff540u: goto label_1ff540;
        case 0x1ff544u: goto label_1ff544;
        case 0x1ff548u: goto label_1ff548;
        case 0x1ff54cu: goto label_1ff54c;
        case 0x1ff550u: goto label_1ff550;
        case 0x1ff554u: goto label_1ff554;
        case 0x1ff558u: goto label_1ff558;
        case 0x1ff55cu: goto label_1ff55c;
        case 0x1ff560u: goto label_1ff560;
        case 0x1ff564u: goto label_1ff564;
        case 0x1ff568u: goto label_1ff568;
        case 0x1ff56cu: goto label_1ff56c;
        case 0x1ff570u: goto label_1ff570;
        case 0x1ff574u: goto label_1ff574;
        case 0x1ff578u: goto label_1ff578;
        case 0x1ff57cu: goto label_1ff57c;
        case 0x1ff580u: goto label_1ff580;
        case 0x1ff584u: goto label_1ff584;
        case 0x1ff588u: goto label_1ff588;
        case 0x1ff58cu: goto label_1ff58c;
        case 0x1ff590u: goto label_1ff590;
        case 0x1ff594u: goto label_1ff594;
        case 0x1ff598u: goto label_1ff598;
        case 0x1ff59cu: goto label_1ff59c;
        case 0x1ff5a0u: goto label_1ff5a0;
        case 0x1ff5a4u: goto label_1ff5a4;
        case 0x1ff5a8u: goto label_1ff5a8;
        case 0x1ff5acu: goto label_1ff5ac;
        case 0x1ff5b0u: goto label_1ff5b0;
        case 0x1ff5b4u: goto label_1ff5b4;
        case 0x1ff5b8u: goto label_1ff5b8;
        case 0x1ff5bcu: goto label_1ff5bc;
        case 0x1ff5c0u: goto label_1ff5c0;
        case 0x1ff5c4u: goto label_1ff5c4;
        case 0x1ff5c8u: goto label_1ff5c8;
        case 0x1ff5ccu: goto label_1ff5cc;
        case 0x1ff5d0u: goto label_1ff5d0;
        case 0x1ff5d4u: goto label_1ff5d4;
        case 0x1ff5d8u: goto label_1ff5d8;
        case 0x1ff5dcu: goto label_1ff5dc;
        case 0x1ff5e0u: goto label_1ff5e0;
        case 0x1ff5e4u: goto label_1ff5e4;
        case 0x1ff5e8u: goto label_1ff5e8;
        case 0x1ff5ecu: goto label_1ff5ec;
        case 0x1ff5f0u: goto label_1ff5f0;
        case 0x1ff5f4u: goto label_1ff5f4;
        case 0x1ff5f8u: goto label_1ff5f8;
        case 0x1ff5fcu: goto label_1ff5fc;
        case 0x1ff600u: goto label_1ff600;
        case 0x1ff604u: goto label_1ff604;
        case 0x1ff608u: goto label_1ff608;
        case 0x1ff60cu: goto label_1ff60c;
        case 0x1ff610u: goto label_1ff610;
        case 0x1ff614u: goto label_1ff614;
        case 0x1ff618u: goto label_1ff618;
        case 0x1ff61cu: goto label_1ff61c;
        case 0x1ff620u: goto label_1ff620;
        case 0x1ff624u: goto label_1ff624;
        case 0x1ff628u: goto label_1ff628;
        case 0x1ff62cu: goto label_1ff62c;
        case 0x1ff630u: goto label_1ff630;
        case 0x1ff634u: goto label_1ff634;
        case 0x1ff638u: goto label_1ff638;
        case 0x1ff63cu: goto label_1ff63c;
        case 0x1ff640u: goto label_1ff640;
        case 0x1ff644u: goto label_1ff644;
        case 0x1ff648u: goto label_1ff648;
        case 0x1ff64cu: goto label_1ff64c;
        case 0x1ff650u: goto label_1ff650;
        case 0x1ff654u: goto label_1ff654;
        case 0x1ff658u: goto label_1ff658;
        case 0x1ff65cu: goto label_1ff65c;
        case 0x1ff660u: goto label_1ff660;
        case 0x1ff664u: goto label_1ff664;
        case 0x1ff668u: goto label_1ff668;
        case 0x1ff66cu: goto label_1ff66c;
        case 0x1ff670u: goto label_1ff670;
        case 0x1ff674u: goto label_1ff674;
        case 0x1ff678u: goto label_1ff678;
        case 0x1ff67cu: goto label_1ff67c;
        case 0x1ff680u: goto label_1ff680;
        case 0x1ff684u: goto label_1ff684;
        case 0x1ff688u: goto label_1ff688;
        case 0x1ff68cu: goto label_1ff68c;
        case 0x1ff690u: goto label_1ff690;
        case 0x1ff694u: goto label_1ff694;
        case 0x1ff698u: goto label_1ff698;
        case 0x1ff69cu: goto label_1ff69c;
        case 0x1ff6a0u: goto label_1ff6a0;
        case 0x1ff6a4u: goto label_1ff6a4;
        case 0x1ff6a8u: goto label_1ff6a8;
        case 0x1ff6acu: goto label_1ff6ac;
        case 0x1ff6b0u: goto label_1ff6b0;
        case 0x1ff6b4u: goto label_1ff6b4;
        case 0x1ff6b8u: goto label_1ff6b8;
        case 0x1ff6bcu: goto label_1ff6bc;
        case 0x1ff6c0u: goto label_1ff6c0;
        case 0x1ff6c4u: goto label_1ff6c4;
        case 0x1ff6c8u: goto label_1ff6c8;
        case 0x1ff6ccu: goto label_1ff6cc;
        case 0x1ff6d0u: goto label_1ff6d0;
        case 0x1ff6d4u: goto label_1ff6d4;
        case 0x1ff6d8u: goto label_1ff6d8;
        case 0x1ff6dcu: goto label_1ff6dc;
        case 0x1ff6e0u: goto label_1ff6e0;
        case 0x1ff6e4u: goto label_1ff6e4;
        case 0x1ff6e8u: goto label_1ff6e8;
        case 0x1ff6ecu: goto label_1ff6ec;
        case 0x1ff6f0u: goto label_1ff6f0;
        case 0x1ff6f4u: goto label_1ff6f4;
        case 0x1ff6f8u: goto label_1ff6f8;
        case 0x1ff6fcu: goto label_1ff6fc;
        case 0x1ff700u: goto label_1ff700;
        case 0x1ff704u: goto label_1ff704;
        case 0x1ff708u: goto label_1ff708;
        case 0x1ff70cu: goto label_1ff70c;
        case 0x1ff710u: goto label_1ff710;
        case 0x1ff714u: goto label_1ff714;
        case 0x1ff718u: goto label_1ff718;
        case 0x1ff71cu: goto label_1ff71c;
        case 0x1ff720u: goto label_1ff720;
        case 0x1ff724u: goto label_1ff724;
        case 0x1ff728u: goto label_1ff728;
        case 0x1ff72cu: goto label_1ff72c;
        case 0x1ff730u: goto label_1ff730;
        case 0x1ff734u: goto label_1ff734;
        case 0x1ff738u: goto label_1ff738;
        case 0x1ff73cu: goto label_1ff73c;
        case 0x1ff740u: goto label_1ff740;
        case 0x1ff744u: goto label_1ff744;
        case 0x1ff748u: goto label_1ff748;
        case 0x1ff74cu: goto label_1ff74c;
        case 0x1ff750u: goto label_1ff750;
        case 0x1ff754u: goto label_1ff754;
        case 0x1ff758u: goto label_1ff758;
        case 0x1ff75cu: goto label_1ff75c;
        case 0x1ff760u: goto label_1ff760;
        case 0x1ff764u: goto label_1ff764;
        case 0x1ff768u: goto label_1ff768;
        case 0x1ff76cu: goto label_1ff76c;
        case 0x1ff770u: goto label_1ff770;
        case 0x1ff774u: goto label_1ff774;
        case 0x1ff778u: goto label_1ff778;
        case 0x1ff77cu: goto label_1ff77c;
        case 0x1ff780u: goto label_1ff780;
        case 0x1ff784u: goto label_1ff784;
        case 0x1ff788u: goto label_1ff788;
        case 0x1ff78cu: goto label_1ff78c;
        case 0x1ff790u: goto label_1ff790;
        case 0x1ff794u: goto label_1ff794;
        case 0x1ff798u: goto label_1ff798;
        case 0x1ff79cu: goto label_1ff79c;
        case 0x1ff7a0u: goto label_1ff7a0;
        case 0x1ff7a4u: goto label_1ff7a4;
        case 0x1ff7a8u: goto label_1ff7a8;
        case 0x1ff7acu: goto label_1ff7ac;
        case 0x1ff7b0u: goto label_1ff7b0;
        case 0x1ff7b4u: goto label_1ff7b4;
        case 0x1ff7b8u: goto label_1ff7b8;
        case 0x1ff7bcu: goto label_1ff7bc;
        case 0x1ff7c0u: goto label_1ff7c0;
        case 0x1ff7c4u: goto label_1ff7c4;
        case 0x1ff7c8u: goto label_1ff7c8;
        case 0x1ff7ccu: goto label_1ff7cc;
        case 0x1ff7d0u: goto label_1ff7d0;
        case 0x1ff7d4u: goto label_1ff7d4;
        case 0x1ff7d8u: goto label_1ff7d8;
        case 0x1ff7dcu: goto label_1ff7dc;
        case 0x1ff7e0u: goto label_1ff7e0;
        case 0x1ff7e4u: goto label_1ff7e4;
        case 0x1ff7e8u: goto label_1ff7e8;
        case 0x1ff7ecu: goto label_1ff7ec;
        case 0x1ff7f0u: goto label_1ff7f0;
        case 0x1ff7f4u: goto label_1ff7f4;
        case 0x1ff7f8u: goto label_1ff7f8;
        case 0x1ff7fcu: goto label_1ff7fc;
        case 0x1ff800u: goto label_1ff800;
        case 0x1ff804u: goto label_1ff804;
        case 0x1ff808u: goto label_1ff808;
        case 0x1ff80cu: goto label_1ff80c;
        case 0x1ff810u: goto label_1ff810;
        case 0x1ff814u: goto label_1ff814;
        case 0x1ff818u: goto label_1ff818;
        case 0x1ff81cu: goto label_1ff81c;
        case 0x1ff820u: goto label_1ff820;
        case 0x1ff824u: goto label_1ff824;
        case 0x1ff828u: goto label_1ff828;
        case 0x1ff82cu: goto label_1ff82c;
        case 0x1ff830u: goto label_1ff830;
        case 0x1ff834u: goto label_1ff834;
        case 0x1ff838u: goto label_1ff838;
        case 0x1ff83cu: goto label_1ff83c;
        case 0x1ff840u: goto label_1ff840;
        case 0x1ff844u: goto label_1ff844;
        case 0x1ff848u: goto label_1ff848;
        case 0x1ff84cu: goto label_1ff84c;
        case 0x1ff850u: goto label_1ff850;
        case 0x1ff854u: goto label_1ff854;
        case 0x1ff858u: goto label_1ff858;
        case 0x1ff85cu: goto label_1ff85c;
        case 0x1ff860u: goto label_1ff860;
        case 0x1ff864u: goto label_1ff864;
        case 0x1ff868u: goto label_1ff868;
        case 0x1ff86cu: goto label_1ff86c;
        case 0x1ff870u: goto label_1ff870;
        case 0x1ff874u: goto label_1ff874;
        case 0x1ff878u: goto label_1ff878;
        case 0x1ff87cu: goto label_1ff87c;
        case 0x1ff880u: goto label_1ff880;
        case 0x1ff884u: goto label_1ff884;
        case 0x1ff888u: goto label_1ff888;
        case 0x1ff88cu: goto label_1ff88c;
        case 0x1ff890u: goto label_1ff890;
        case 0x1ff894u: goto label_1ff894;
        case 0x1ff898u: goto label_1ff898;
        case 0x1ff89cu: goto label_1ff89c;
        case 0x1ff8a0u: goto label_1ff8a0;
        case 0x1ff8a4u: goto label_1ff8a4;
        case 0x1ff8a8u: goto label_1ff8a8;
        case 0x1ff8acu: goto label_1ff8ac;
        case 0x1ff8b0u: goto label_1ff8b0;
        case 0x1ff8b4u: goto label_1ff8b4;
        case 0x1ff8b8u: goto label_1ff8b8;
        case 0x1ff8bcu: goto label_1ff8bc;
        case 0x1ff8c0u: goto label_1ff8c0;
        case 0x1ff8c4u: goto label_1ff8c4;
        case 0x1ff8c8u: goto label_1ff8c8;
        case 0x1ff8ccu: goto label_1ff8cc;
        case 0x1ff8d0u: goto label_1ff8d0;
        case 0x1ff8d4u: goto label_1ff8d4;
        case 0x1ff8d8u: goto label_1ff8d8;
        case 0x1ff8dcu: goto label_1ff8dc;
        case 0x1ff8e0u: goto label_1ff8e0;
        case 0x1ff8e4u: goto label_1ff8e4;
        case 0x1ff8e8u: goto label_1ff8e8;
        case 0x1ff8ecu: goto label_1ff8ec;
        case 0x1ff8f0u: goto label_1ff8f0;
        case 0x1ff8f4u: goto label_1ff8f4;
        case 0x1ff8f8u: goto label_1ff8f8;
        case 0x1ff8fcu: goto label_1ff8fc;
        case 0x1ff900u: goto label_1ff900;
        case 0x1ff904u: goto label_1ff904;
        case 0x1ff908u: goto label_1ff908;
        case 0x1ff90cu: goto label_1ff90c;
        case 0x1ff910u: goto label_1ff910;
        case 0x1ff914u: goto label_1ff914;
        case 0x1ff918u: goto label_1ff918;
        case 0x1ff91cu: goto label_1ff91c;
        case 0x1ff920u: goto label_1ff920;
        case 0x1ff924u: goto label_1ff924;
        case 0x1ff928u: goto label_1ff928;
        case 0x1ff92cu: goto label_1ff92c;
        case 0x1ff930u: goto label_1ff930;
        case 0x1ff934u: goto label_1ff934;
        case 0x1ff938u: goto label_1ff938;
        case 0x1ff93cu: goto label_1ff93c;
        case 0x1ff940u: goto label_1ff940;
        case 0x1ff944u: goto label_1ff944;
        case 0x1ff948u: goto label_1ff948;
        case 0x1ff94cu: goto label_1ff94c;
        case 0x1ff950u: goto label_1ff950;
        case 0x1ff954u: goto label_1ff954;
        case 0x1ff958u: goto label_1ff958;
        case 0x1ff95cu: goto label_1ff95c;
        case 0x1ff960u: goto label_1ff960;
        case 0x1ff964u: goto label_1ff964;
        case 0x1ff968u: goto label_1ff968;
        case 0x1ff96cu: goto label_1ff96c;
        case 0x1ff970u: goto label_1ff970;
        case 0x1ff974u: goto label_1ff974;
        case 0x1ff978u: goto label_1ff978;
        case 0x1ff97cu: goto label_1ff97c;
        case 0x1ff980u: goto label_1ff980;
        case 0x1ff984u: goto label_1ff984;
        case 0x1ff988u: goto label_1ff988;
        case 0x1ff98cu: goto label_1ff98c;
        case 0x1ff990u: goto label_1ff990;
        case 0x1ff994u: goto label_1ff994;
        case 0x1ff998u: goto label_1ff998;
        case 0x1ff99cu: goto label_1ff99c;
        case 0x1ff9a0u: goto label_1ff9a0;
        case 0x1ff9a4u: goto label_1ff9a4;
        case 0x1ff9a8u: goto label_1ff9a8;
        case 0x1ff9acu: goto label_1ff9ac;
        case 0x1ff9b0u: goto label_1ff9b0;
        case 0x1ff9b4u: goto label_1ff9b4;
        case 0x1ff9b8u: goto label_1ff9b8;
        case 0x1ff9bcu: goto label_1ff9bc;
        case 0x1ff9c0u: goto label_1ff9c0;
        case 0x1ff9c4u: goto label_1ff9c4;
        case 0x1ff9c8u: goto label_1ff9c8;
        case 0x1ff9ccu: goto label_1ff9cc;
        case 0x1ff9d0u: goto label_1ff9d0;
        case 0x1ff9d4u: goto label_1ff9d4;
        case 0x1ff9d8u: goto label_1ff9d8;
        case 0x1ff9dcu: goto label_1ff9dc;
        case 0x1ff9e0u: goto label_1ff9e0;
        case 0x1ff9e4u: goto label_1ff9e4;
        case 0x1ff9e8u: goto label_1ff9e8;
        case 0x1ff9ecu: goto label_1ff9ec;
        case 0x1ff9f0u: goto label_1ff9f0;
        case 0x1ff9f4u: goto label_1ff9f4;
        case 0x1ff9f8u: goto label_1ff9f8;
        case 0x1ff9fcu: goto label_1ff9fc;
        default: return;
    }

label_1ff230:
    // 0x1ff230: 0x144000b9  bnez        $v0, . + 4 + (0xB9 << 2)
label_1ff234:
    if (ctx->pc == 0x1FF234u) {
        ctx->pc = 0x1FF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF230u;
        // 0x1ff234: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF238u;
        goto label_1ff238;
    }
    ctx->pc = 0x1FF230u;
    {
        const bool branch_taken_0x1ff230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF230u;
        // 0x1ff234: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff230) {
            ctx->pc = 0x1FF518u;
            goto label_1ff518;
        }
    }
    ctx->pc = 0x1FF238u;
label_1ff238:
    // 0x1ff238: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1ff238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_1ff23c:
    // 0x1ff23c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ff23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ff240:
    // 0x1ff240: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x1ff240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_1ff244:
    // 0x1ff244: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1ff244u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ff248:
    // 0x1ff248: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ff248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ff24c:
    // 0x1ff24c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ff24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ff250:
    // 0x1ff250: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ff250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ff254:
    // 0x1ff254: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1ff254u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1ff258:
    // 0x1ff258: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ff258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ff25c:
    // 0x1ff25c: 0xdc243a20  ld          $a0, 0x3A20($at)
    ctx->pc = 0x1ff25cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 14880)));
label_1ff260:
    // 0x1ff260: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ff260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ff264:
    // 0x1ff264: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ff264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1ff268:
    // 0x1ff268: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ff268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ff26c:
    // 0x1ff26c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ff26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ff270:
    // 0x1ff270: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ff270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1ff274:
    // 0x1ff274: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_1ff278:
    if (ctx->pc == 0x1FF278u) {
        ctx->pc = 0x1FF27Cu;
        goto label_1ff27c;
    }
    ctx->pc = 0x1FF274u;
    {
        const bool branch_taken_0x1ff274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff274) {
            ctx->pc = 0x1FF518u;
            goto label_1ff518;
        }
    }
    ctx->pc = 0x1FF27Cu;
label_1ff27c:
    // 0x1ff27c: 0x0  nop
    ctx->pc = 0x1ff27cu;
    // NOP
label_1ff280:
    // 0x1ff280: 0x8f8290ac  lw          $v0, -0x6F54($gp)
    ctx->pc = 0x1ff280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
label_1ff284:
    // 0x1ff284: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ff288:
    if (ctx->pc == 0x1FF288u) {
        ctx->pc = 0x1FF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF284u;
        // 0x1ff288: 0x262200e4  addiu       $v0, $s1, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF28Cu;
        goto label_1ff28c;
    }
    ctx->pc = 0x1FF284u;
    {
        const bool branch_taken_0x1ff284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF284u;
        // 0x1ff288: 0x262200e4  addiu       $v0, $s1, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff284) {
            ctx->pc = 0x1FF298u;
            goto label_1ff298;
        }
    }
    ctx->pc = 0x1FF28Cu;
label_1ff28c:
    // 0x1ff28c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1ff28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1ff290:
    // 0x1ff290: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ff294:
    if (ctx->pc == 0x1FF294u) {
        ctx->pc = 0x1FF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF290u;
        // 0x1ff294: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF298u;
        goto label_1ff298;
    }
    ctx->pc = 0x1FF290u;
    {
        const bool branch_taken_0x1ff290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF290u;
        // 0x1ff294: 0x542821  addu        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff290) {
            ctx->pc = 0x1FF2A4u;
            goto label_1ff2a4;
        }
    }
    ctx->pc = 0x1FF298u;
label_1ff298:
    // 0x1ff298: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x1ff298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_1ff29c:
    // 0x1ff29c: 0x260400d4  addiu       $a0, $s0, 0xD4
    ctx->pc = 0x1ff29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
label_1ff2a0:
    // 0x1ff2a0: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x1ff2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1ff2a4:
    // 0x1ff2a4: 0x0  nop
    ctx->pc = 0x1ff2a4u;
    // NOP
label_1ff2a8:
    // 0x1ff2a8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1ff2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1ff2ac:
    // 0x1ff2ac: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1ff2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ff2b0:
    // 0x1ff2b0: 0x2573021  addu        $a2, $s2, $s7
    ctx->pc = 0x1ff2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_1ff2b4:
    // 0x1ff2b4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ff2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1ff2b8:
    // 0x1ff2b8: 0xa4c31840  sh          $v1, 0x1840($a2)
    ctx->pc = 0x1ff2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6208), (uint16_t)GPR_U32(ctx, 3));
label_1ff2bc:
    // 0x1ff2bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ff2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff2c0:
    // 0x1ff2c0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1ff2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ff2c4:
    // 0x1ff2c4: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1ff2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ff2c8:
    // 0x1ff2c8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1ff2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1ff2cc:
    // 0x1ff2cc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1ff2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1ff2d0:
    // 0x1ff2d0: 0xa4c31842  sh          $v1, 0x1842($a2)
    ctx->pc = 0x1ff2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6210), (uint16_t)GPR_U32(ctx, 3));
label_1ff2d4:
    // 0x1ff2d4: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x1ff2d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff2d8:
    // 0x1ff2d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff2dc:
    // 0x1ff2dc: 0xacc51844  sw          $a1, 0x1844($a2)
    ctx->pc = 0x1ff2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6212), GPR_U32(ctx, 5));
label_1ff2e0:
    // 0x1ff2e0: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1ff2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ff2e4:
    // 0x1ff2e4: 0xa4c41850  sh          $a0, 0x1850($a2)
    ctx->pc = 0x1ff2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6224), (uint16_t)GPR_U32(ctx, 4));
label_1ff2e8:
    // 0x1ff2e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1ff2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ff2ec:
    // 0x1ff2ec: 0xa4c31852  sh          $v1, 0x1852($a2)
    ctx->pc = 0x1ff2ecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6226), (uint16_t)GPR_U32(ctx, 3));
label_1ff2f0:
    // 0x1ff2f0: 0xacc51854  sw          $a1, 0x1854($a2)
    ctx->pc = 0x1ff2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6228), GPR_U32(ctx, 5));
label_1ff2f4:
    // 0x1ff2f4: 0xa0c21833  sb          $v0, 0x1833($a2)
    ctx->pc = 0x1ff2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6195), (uint8_t)GPR_U32(ctx, 2));
label_1ff2f8:
    // 0x1ff2f8: 0x8f8290ac  lw          $v0, -0x6F54($gp)
    ctx->pc = 0x1ff2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
label_1ff2fc:
    // 0x1ff2fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ff300:
    if (ctx->pc == 0x1FF300u) {
        ctx->pc = 0x1FF300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2FCu;
        // 0x1ff300: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF304u;
        goto label_1ff304;
    }
    ctx->pc = 0x1FF2FCu;
    {
        const bool branch_taken_0x1ff2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2FCu;
        // 0x1ff300: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2fc) {
            ctx->pc = 0x1FF318u;
            goto label_1ff318;
        }
    }
    ctx->pc = 0x1FF304u;
label_1ff304:
    // 0x1ff304: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1ff304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1ff308:
    // 0x1ff308: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x1ff308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_1ff30c:
    // 0x1ff30c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ff30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1ff310:
    // 0x1ff310: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ff314:
    if (ctx->pc == 0x1FF314u) {
        ctx->pc = 0x1FF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF310u;
        // 0x1ff314: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF318u;
        goto label_1ff318;
    }
    ctx->pc = 0x1FF310u;
    {
        const bool branch_taken_0x1ff310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF310u;
        // 0x1ff314: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff310) {
            ctx->pc = 0x1FF32Cu;
            goto label_1ff32c;
        }
    }
    ctx->pc = 0x1FF318u;
label_1ff318:
    // 0x1ff318: 0x260200e8  addiu       $v0, $s0, 0xE8
    ctx->pc = 0x1ff318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_1ff31c:
    // 0x1ff31c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1ff31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1ff320:
    // 0x1ff320: 0x26220038  addiu       $v0, $s1, 0x38
    ctx->pc = 0x1ff320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_1ff324:
    // 0x1ff324: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ff324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1ff328:
    // 0x1ff328: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1ff328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_1ff32c:
    // 0x1ff32c: 0x0  nop
    ctx->pc = 0x1ff32cu;
    // NOP
label_1ff330:
    // 0x1ff330: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ff330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ff334:
    // 0x1ff334: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ff334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ff338:
    // 0x1ff338: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
label_1ff33c:
    if (ctx->pc == 0x1FF33Cu) {
        ctx->pc = 0x1FF340u;
        goto label_1ff340;
    }
    ctx->pc = 0x1FF338u;
    {
        const bool branch_taken_0x1ff338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ff338) {
            ctx->pc = 0x1FF42Cu;
            goto label_1ff42c;
        }
    }
    ctx->pc = 0x1FF340u;
label_1ff340:
    // 0x1ff340: 0x8f84909c  lw          $a0, -0x6F64($gp)
    ctx->pc = 0x1ff340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
label_1ff344:
    // 0x1ff344: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ff344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1ff348:
    // 0x1ff348: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x1ff348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_1ff34c:
    // 0x1ff34c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ff34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ff350:
    // 0x1ff350: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ff350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff354:
    // 0x1ff354: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ff354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1ff358:
    // 0x1ff358: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ff358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ff35c:
    // 0x1ff35c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ff35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ff360:
    // 0x1ff360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ff364:
    // 0x1ff364: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ff364u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ff368:
    // 0x1ff368: 0xdc233a20  ld          $v1, 0x3A20($at)
    ctx->pc = 0x1ff368u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 14880)));
label_1ff36c:
    // 0x1ff36c: 0x0  nop
    ctx->pc = 0x1ff36cu;
    // NOP
label_1ff370:
    // 0x1ff370: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1ff370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1ff374:
    // 0x1ff374: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ff378:
    if (ctx->pc == 0x1FF378u) {
        ctx->pc = 0x1FF37Cu;
        goto label_1ff37c;
    }
    ctx->pc = 0x1FF374u;
    {
        const bool branch_taken_0x1ff374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff374) {
            ctx->pc = 0x1FF38Cu;
            goto label_1ff38c;
        }
    }
    ctx->pc = 0x1FF37Cu;
label_1ff37c:
    // 0x1ff37c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ff37cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ff380:
    // 0x1ff380: 0x2a620028  slti        $v0, $s3, 0x28
    ctx->pc = 0x1ff380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)40) ? 1 : 0);
label_1ff384:
    // 0x1ff384: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1ff388:
    if (ctx->pc == 0x1FF388u) {
        ctx->pc = 0x1FF388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF384u;
        // 0x1ff388: 0x3187a  dsrl        $v1, $v1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF38Cu;
        goto label_1ff38c;
    }
    ctx->pc = 0x1FF384u;
    {
        const bool branch_taken_0x1ff384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF384u;
        // 0x1ff388: 0x3187a  dsrl        $v1, $v1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff384) {
            ctx->pc = 0x1FF370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff370;
        }
    }
    ctx->pc = 0x1FF38Cu;
label_1ff38c:
    // 0x1ff38c: 0x0  nop
    ctx->pc = 0x1ff38cu;
    // NOP
label_1ff390:
    // 0x1ff390: 0xc054e70  jal         func_1539C0
label_1ff394:
    if (ctx->pc == 0x1FF394u) {
        ctx->pc = 0x1FF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF390u;
        // 0x1ff394: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF398u;
        goto label_1ff398;
    }
    ctx->pc = 0x1FF390u;
    SET_GPR_U32(ctx, 31, 0x1FF398u);
    ctx->pc = 0x1FF394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF390u;
    // 0x1ff394: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x1FF390u, 0x1FF398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF398u;
label_1ff398:
    // 0x1ff398: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ff398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ff39c:
    // 0x1ff39c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1ff39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1ff3a0:
    // 0x1ff3a0: 0x24422ee0  addiu       $v0, $v0, 0x2EE0
    ctx->pc = 0x1ff3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12000));
label_1ff3a4:
    // 0x1ff3a4: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x1ff3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ff3a8:
    // 0x1ff3a8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1ff3a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ff3ac:
    // 0x1ff3ac: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1ff3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ff3b0:
    // 0x1ff3b0: 0xc055148  jal         func_154520
label_1ff3b4:
    if (ctx->pc == 0x1FF3B4u) {
        ctx->pc = 0x1FF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3B0u;
        // 0x1ff3b4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3B8u;
        goto label_1ff3b8;
    }
    ctx->pc = 0x1FF3B0u;
    SET_GPR_U32(ctx, 31, 0x1FF3B8u);
    ctx->pc = 0x1FF3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3B0u;
    // 0x1ff3b4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1FF3B0u, 0x1FF3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3B8u;
label_1ff3b8:
    // 0x1ff3b8: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x1ff3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ff3bc:
    // 0x1ff3bc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ff3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ff3c0:
    // 0x1ff3c0: 0x8fa90100  lw          $t1, 0x100($sp)
    ctx->pc = 0x1ff3c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1ff3c4:
    // 0x1ff3c4: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1ff3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ff3c8:
    // 0x1ff3c8: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1ff3c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1ff3cc:
    // 0x1ff3cc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ff3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff3d0:
    // 0x1ff3d0: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1ff3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ff3d4:
    // 0x1ff3d4: 0xc054e5c  jal         func_153970
label_1ff3d8:
    if (ctx->pc == 0x1FF3D8u) {
        ctx->pc = 0x1FF3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3D4u;
        // 0x1ff3d8: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3DCu;
        goto label_1ff3dc;
    }
    ctx->pc = 0x1FF3D4u;
    SET_GPR_U32(ctx, 31, 0x1FF3DCu);
    ctx->pc = 0x1FF3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3D4u;
    // 0x1ff3d8: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FF3D4u, 0x1FF3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3DCu;
label_1ff3dc:
    // 0x1ff3dc: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1ff3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ff3e0:
    // 0x1ff3e0: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x1ff3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_1ff3e4:
    // 0x1ff3e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff3e8:
    // 0x1ff3e8: 0x24441ae0  addiu       $a0, $v0, 0x1AE0
    ctx->pc = 0x1ff3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
label_1ff3ec:
    // 0x1ff3ec: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1ff3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1ff3f0:
    // 0x1ff3f0: 0xc054e74  jal         func_1539D0
label_1ff3f4:
    if (ctx->pc == 0x1FF3F4u) {
        ctx->pc = 0x1FF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3F0u;
        // 0x1ff3f4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF3F8u;
        goto label_1ff3f8;
    }
    ctx->pc = 0x1FF3F0u;
    SET_GPR_U32(ctx, 31, 0x1FF3F8u);
    ctx->pc = 0x1FF3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3F0u;
    // 0x1ff3f4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FF3F0u, 0x1FF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF3F8u;
label_1ff3f8:
    // 0x1ff3f8: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x1ff3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_1ff3fc:
    // 0x1ff3fc: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1ff3fcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1ff400:
    // 0x1ff400: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ff400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff404:
    // 0x1ff404: 0x24446400  addiu       $a0, $v0, 0x6400
    ctx->pc = 0x1ff404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
label_1ff408:
    // 0x1ff408: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1ff408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ff40c:
    // 0x1ff40c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1ff40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ff410:
    // 0x1ff410: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ff410u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff414:
    // 0x1ff414: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ff414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff418:
    // 0x1ff418: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1ff418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ff41c:
    // 0x1ff41c: 0xc0708ac  jal         func_1C22B0
label_1ff420:
    if (ctx->pc == 0x1FF420u) {
        ctx->pc = 0x1FF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF41Cu;
        // 0x1ff420: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF424u;
        goto label_1ff424;
    }
    ctx->pc = 0x1FF41Cu;
    SET_GPR_U32(ctx, 31, 0x1FF424u);
    ctx->pc = 0x1FF420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF41Cu;
    // 0x1ff420: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FF424u;
label_1ff424:
    // 0x1ff424: 0x10000061  b           . + 4 + (0x61 << 2)
label_1ff428:
    if (ctx->pc == 0x1FF428u) {
        ctx->pc = 0x1FF42Cu;
        goto label_1ff42c;
    }
    ctx->pc = 0x1FF424u;
    {
        const bool branch_taken_0x1ff424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff424) {
            ctx->pc = 0x1FF5ACu;
            goto label_1ff5ac;
        }
    }
    ctx->pc = 0x1FF42Cu;
label_1ff42c:
    // 0x1ff42c: 0x0  nop
    ctx->pc = 0x1ff42cu;
    // NOP
label_1ff430:
    // 0x1ff430: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ff430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ff434:
    // 0x1ff434: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ff438:
    // 0x1ff438: 0x24422f80  addiu       $v0, $v0, 0x2F80
    ctx->pc = 0x1ff438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
label_1ff43c:
    // 0x1ff43c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ff440:
    // 0x1ff440: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x1ff440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ff444:
    // 0x1ff444: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ff444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ff448:
    // 0x1ff448: 0xc055148  jal         func_154520
label_1ff44c:
    if (ctx->pc == 0x1FF44Cu) {
        ctx->pc = 0x1FF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF448u;
        // 0x1ff44c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF450u;
        goto label_1ff450;
    }
    ctx->pc = 0x1FF448u;
    SET_GPR_U32(ctx, 31, 0x1FF450u);
    ctx->pc = 0x1FF44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF448u;
    // 0x1ff44c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1FF448u, 0x1FF450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF450u;
label_1ff450:
    // 0x1ff450: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x1ff450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ff454:
    // 0x1ff454: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ff454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ff458:
    // 0x1ff458: 0x8fa90100  lw          $t1, 0x100($sp)
    ctx->pc = 0x1ff458u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1ff45c:
    // 0x1ff45c: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1ff45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ff460:
    // 0x1ff460: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1ff460u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1ff464:
    // 0x1ff464: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ff464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff468:
    // 0x1ff468: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1ff468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ff46c:
    // 0x1ff46c: 0xc054e5c  jal         func_153970
label_1ff470:
    if (ctx->pc == 0x1FF470u) {
        ctx->pc = 0x1FF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF46Cu;
        // 0x1ff470: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF474u;
        goto label_1ff474;
    }
    ctx->pc = 0x1FF46Cu;
    SET_GPR_U32(ctx, 31, 0x1FF474u);
    ctx->pc = 0x1FF470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF46Cu;
    // 0x1ff470: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FF46Cu, 0x1FF474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF474u;
label_1ff474:
    // 0x1ff474: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ff474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ff478:
    // 0x1ff478: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x1ff478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_1ff47c:
    // 0x1ff47c: 0x24441ae0  addiu       $a0, $v0, 0x1AE0
    ctx->pc = 0x1ff47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
label_1ff480:
    // 0x1ff480: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff484:
    // 0x1ff484: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ff484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ff488:
    // 0x1ff488: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1ff488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1ff48c:
    // 0x1ff48c: 0x24422f80  addiu       $v0, $v0, 0x2F80
    ctx->pc = 0x1ff48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
label_1ff490:
    // 0x1ff490: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ff494:
    // 0x1ff494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ff498:
    // 0x1ff498: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1ff498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ff49c:
    // 0x1ff49c: 0xc054e74  jal         func_1539D0
label_1ff4a0:
    if (ctx->pc == 0x1FF4A0u) {
        ctx->pc = 0x1FF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF49Cu;
        // 0x1ff4a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4A4u;
        goto label_1ff4a4;
    }
    ctx->pc = 0x1FF49Cu;
    SET_GPR_U32(ctx, 31, 0x1FF4A4u);
    ctx->pc = 0x1FF4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF49Cu;
    // 0x1ff4a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FF49Cu, 0x1FF4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4A4u;
label_1ff4a4:
    // 0x1ff4a4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ff4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1ff4a8:
    // 0x1ff4a8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1ff4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1ff4ac:
    // 0x1ff4ac: 0x24424ae0  addiu       $v0, $v0, 0x4AE0
    ctx->pc = 0x1ff4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19168));
label_1ff4b0:
    // 0x1ff4b0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1ff4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1ff4b4:
    // 0x1ff4b4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1ff4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1ff4b8:
    // 0x1ff4b8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ff4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ff4bc:
    // 0x1ff4bc: 0xc08f20e  jal         func_23C838
label_1ff4c0:
    if (ctx->pc == 0x1FF4C0u) {
        ctx->pc = 0x1FF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4BCu;
        // 0x1ff4c0: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4C4u;
        goto label_1ff4c4;
    }
    ctx->pc = 0x1FF4BCu;
    SET_GPR_U32(ctx, 31, 0x1FF4C4u);
    ctx->pc = 0x1FF4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF4BCu;
    // 0x1ff4c0: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1FF4C4u;
label_1ff4c4:
    // 0x1ff4c4: 0x8f8290ac  lw          $v0, -0x6F54($gp)
    ctx->pc = 0x1ff4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
label_1ff4c8:
    // 0x1ff4c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ff4cc:
    if (ctx->pc == 0x1FF4CCu) {
        ctx->pc = 0x1FF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4C8u;
        // 0x1ff4cc: 0x262200e0  addiu       $v0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4D0u;
        goto label_1ff4d0;
    }
    ctx->pc = 0x1FF4C8u;
    {
        const bool branch_taken_0x1ff4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4C8u;
        // 0x1ff4cc: 0x262200e0  addiu       $v0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4c8) {
            ctx->pc = 0x1FF4DCu;
            goto label_1ff4dc;
        }
    }
    ctx->pc = 0x1FF4D0u;
label_1ff4d0:
    // 0x1ff4d0: 0x26060098  addiu       $a2, $s0, 0x98
    ctx->pc = 0x1ff4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_1ff4d4:
    // 0x1ff4d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ff4d8:
    if (ctx->pc == 0x1FF4D8u) {
        ctx->pc = 0x1FF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4D4u;
        // 0x1ff4d8: 0x543821  addu        $a3, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF4DCu;
        goto label_1ff4dc;
    }
    ctx->pc = 0x1FF4D4u;
    {
        const bool branch_taken_0x1ff4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4D4u;
        // 0x1ff4d8: 0x543821  addu        $a3, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4d4) {
            ctx->pc = 0x1FF4ECu;
            goto label_1ff4ec;
        }
    }
    ctx->pc = 0x1FF4DCu;
label_1ff4dc:
    // 0x1ff4dc: 0x0  nop
    ctx->pc = 0x1ff4dcu;
    // NOP
label_1ff4e0:
    // 0x1ff4e0: 0x26220038  addiu       $v0, $s1, 0x38
    ctx->pc = 0x1ff4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_1ff4e4:
    // 0x1ff4e4: 0x26060160  addiu       $a2, $s0, 0x160
    ctx->pc = 0x1ff4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_1ff4e8:
    // 0x1ff4e8: 0x543821  addu        $a3, $v0, $s4
    ctx->pc = 0x1ff4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1ff4ec:
    // 0x1ff4ec: 0x0  nop
    ctx->pc = 0x1ff4ecu;
    // NOP
label_1ff4f0:
    // 0x1ff4f0: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x1ff4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_1ff4f4:
    // 0x1ff4f4: 0x24446400  addiu       $a0, $v0, 0x6400
    ctx->pc = 0x1ff4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
label_1ff4f8:
    // 0x1ff4f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ff4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff4fc:
    // 0x1ff4fc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ff4fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff500:
    // 0x1ff500: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ff500u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff504:
    // 0x1ff504: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1ff504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ff508:
    // 0x1ff508: 0xc0708ac  jal         func_1C22B0
label_1ff50c:
    if (ctx->pc == 0x1FF50Cu) {
        ctx->pc = 0x1FF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF508u;
        // 0x1ff50c: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF510u;
        goto label_1ff510;
    }
    ctx->pc = 0x1FF508u;
    SET_GPR_U32(ctx, 31, 0x1FF510u);
    ctx->pc = 0x1FF50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF508u;
    // 0x1ff50c: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FF510u;
label_1ff510:
    // 0x1ff510: 0x10000026  b           . + 4 + (0x26 << 2)
label_1ff514:
    if (ctx->pc == 0x1FF514u) {
        ctx->pc = 0x1FF518u;
        goto label_1ff518;
    }
    ctx->pc = 0x1FF510u;
    {
        const bool branch_taken_0x1ff510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff510) {
            ctx->pc = 0x1FF5ACu;
            goto label_1ff5ac;
        }
    }
    ctx->pc = 0x1FF518u;
label_1ff518:
    // 0x1ff518: 0x2573821  addu        $a3, $s2, $s7
    ctx->pc = 0x1ff518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_1ff51c:
    // 0x1ff51c: 0xa0e01833  sb          $zero, 0x1833($a3)
    ctx->pc = 0x1ff51cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6195), (uint8_t)GPR_U32(ctx, 0));
label_1ff520:
    // 0x1ff520: 0x34039400  ori         $v1, $zero, 0x9400
    ctx->pc = 0x1ff520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
label_1ff524:
    // 0x1ff524: 0xa4e31840  sh          $v1, 0x1840($a3)
    ctx->pc = 0x1ff524u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6208), (uint16_t)GPR_U32(ctx, 3));
label_1ff528:
    // 0x1ff528: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1ff528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
label_1ff52c:
    // 0x1ff52c: 0xa4e21842  sh          $v0, 0x1842($a3)
    ctx->pc = 0x1ff52cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6210), (uint16_t)GPR_U32(ctx, 2));
label_1ff530:
    // 0x1ff530: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1ff530u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff534:
    // 0x1ff534: 0xacea1844  sw          $t2, 0x1844($a3)
    ctx->pc = 0x1ff534u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6212), GPR_U32(ctx, 10));
label_1ff538:
    // 0x1ff538: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1ff538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ff53c:
    // 0x1ff53c: 0xa4e31850  sh          $v1, 0x1850($a3)
    ctx->pc = 0x1ff53cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6224), (uint16_t)GPR_U32(ctx, 3));
label_1ff540:
    // 0x1ff540: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ff540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff544:
    // 0x1ff544: 0xa4e21852  sh          $v0, 0x1852($a3)
    ctx->pc = 0x1ff544u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6226), (uint16_t)GPR_U32(ctx, 2));
label_1ff548:
    // 0x1ff548: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1ff548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ff54c:
    // 0x1ff54c: 0xacea1854  sw          $t2, 0x1854($a3)
    ctx->pc = 0x1ff54cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6228), GPR_U32(ctx, 10));
label_1ff550:
    // 0x1ff550: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1ff550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ff554:
    // 0x1ff554: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff558:
    // 0x1ff558: 0xc054e5c  jal         func_153970
label_1ff55c:
    if (ctx->pc == 0x1FF55Cu) {
        ctx->pc = 0x1FF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF558u;
        // 0x1ff55c: 0x240901c0  addiu       $t1, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF560u;
        goto label_1ff560;
    }
    ctx->pc = 0x1FF558u;
    SET_GPR_U32(ctx, 31, 0x1FF560u);
    ctx->pc = 0x1FF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF558u;
    // 0x1ff55c: 0x240901c0  addiu       $t1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FF558u, 0x1FF560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF560u;
label_1ff560:
    // 0x1ff560: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x1ff560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_1ff564:
    // 0x1ff564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff568:
    // 0x1ff568: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1ff568u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1ff56c:
    // 0x1ff56c: 0x24441ae0  addiu       $a0, $v0, 0x1AE0
    ctx->pc = 0x1ff56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
label_1ff570:
    // 0x1ff570: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1ff570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1ff574:
    // 0x1ff574: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff578:
    // 0x1ff578: 0xc054e74  jal         func_1539D0
label_1ff57c:
    if (ctx->pc == 0x1FF57Cu) {
        ctx->pc = 0x1FF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF578u;
        // 0x1ff57c: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF580u;
        goto label_1ff580;
    }
    ctx->pc = 0x1FF578u;
    SET_GPR_U32(ctx, 31, 0x1FF580u);
    ctx->pc = 0x1FF57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF578u;
    // 0x1ff57c: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FF578u, 0x1FF580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF580u;
label_1ff580:
    // 0x1ff580: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x1ff580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_1ff584:
    // 0x1ff584: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1ff584u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1ff588:
    // 0x1ff588: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ff588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff58c:
    // 0x1ff58c: 0x24446400  addiu       $a0, $v0, 0x6400
    ctx->pc = 0x1ff58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
label_1ff590:
    // 0x1ff590: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1ff590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ff594:
    // 0x1ff594: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1ff594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ff598:
    // 0x1ff598: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ff598u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff59c:
    // 0x1ff59c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ff59cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff5a0:
    // 0x1ff5a0: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1ff5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ff5a4:
    // 0x1ff5a4: 0xc0708ac  jal         func_1C22B0
label_1ff5a8:
    if (ctx->pc == 0x1FF5A8u) {
        ctx->pc = 0x1FF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5A4u;
        // 0x1ff5a8: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF5ACu;
        goto label_1ff5ac;
    }
    ctx->pc = 0x1FF5A4u;
    SET_GPR_U32(ctx, 31, 0x1FF5ACu);
    ctx->pc = 0x1FF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF5A4u;
    // 0x1ff5a8: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FF5ACu;
label_1ff5ac:
    // 0x1ff5ac: 0x0  nop
    ctx->pc = 0x1ff5acu;
    // NOP
label_1ff5b0:
    // 0x1ff5b0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ff5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ff5b4:
    // 0x1ff5b4: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x1ff5b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_1ff5b8:
    // 0x1ff5b8: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x1ff5b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_1ff5bc:
    // 0x1ff5bc: 0x26f700a0  addiu       $s7, $s7, 0xA0
    ctx->pc = 0x1ff5bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 160));
label_1ff5c0:
    // 0x1ff5c0: 0x26d60ea0  addiu       $s6, $s6, 0xEA0
    ctx->pc = 0x1ff5c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3744));
label_1ff5c4:
    // 0x1ff5c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ff5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ff5c8:
    // 0x1ff5c8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1ff5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1ff5cc:
    // 0x1ff5cc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ff5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ff5d0:
    // 0x1ff5d0: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1ff5d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_1ff5d4:
    // 0x1ff5d4: 0x1440ff0d  bnez        $v0, . + 4 + (-0xF3 << 2)
label_1ff5d8:
    if (ctx->pc == 0x1FF5D8u) {
        ctx->pc = 0x1FF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5D4u;
        // 0x1ff5d8: 0x26b501e0  addiu       $s5, $s5, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF5DCu;
        goto label_1ff5dc;
    }
    ctx->pc = 0x1FF5D4u;
    {
        const bool branch_taken_0x1ff5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5D4u;
        // 0x1ff5d8: 0x26b501e0  addiu       $s5, $s5, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5d4) {
            ctx->pc = 0x1FF20Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1ff20c; return; }
        }
    }
    ctx->pc = 0x1FF5DCu;
label_1ff5dc:
    // 0x1ff5dc: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x1ff5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_1ff5e0:
    // 0x1ff5e0: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x1ff5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1ff5e4:
    // 0x1ff5e4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ff5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff5e8:
    // 0x1ff5e8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1ff5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ff5ec:
    // 0x1ff5ec: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1ff5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1ff5f0:
    // 0x1ff5f0: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ff5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ff5f4:
    // 0x1ff5f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ff5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff5f8:
    // 0x1ff5f8: 0xa6436de0  sh          $v1, 0x6DE0($s2)
    ctx->pc = 0x1ff5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28128), (uint16_t)GPR_U32(ctx, 3));
label_1ff5fc:
    // 0x1ff5fc: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1ff5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1ff600:
    // 0x1ff600: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1ff600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ff604:
    // 0x1ff604: 0xa6446de2  sh          $a0, 0x6DE2($s2)
    ctx->pc = 0x1ff604u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28130), (uint16_t)GPR_U32(ctx, 4));
label_1ff608:
    // 0x1ff608: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x1ff608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1ff60c:
    // 0x1ff60c: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x1ff60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff610:
    // 0x1ff610: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff614:
    // 0x1ff614: 0xae446de4  sw          $a0, 0x6DE4($s2)
    ctx->pc = 0x1ff614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28132), GPR_U32(ctx, 4));
label_1ff618:
    // 0x1ff618: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1ff618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ff61c:
    // 0x1ff61c: 0xa6436df0  sh          $v1, 0x6DF0($s2)
    ctx->pc = 0x1ff61cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28144), (uint16_t)GPR_U32(ctx, 3));
label_1ff620:
    // 0x1ff620: 0xa6426df2  sh          $v0, 0x6DF2($s2)
    ctx->pc = 0x1ff620u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28146), (uint16_t)GPR_U32(ctx, 2));
label_1ff624:
    // 0x1ff624: 0xae446df4  sw          $a0, 0x6DF4($s2)
    ctx->pc = 0x1ff624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28148), GPR_U32(ctx, 4));
label_1ff628:
    // 0x1ff628: 0x8f829088  lw          $v0, -0x6F78($gp)
    ctx->pc = 0x1ff628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
label_1ff62c:
    // 0x1ff62c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1ff630:
    if (ctx->pc == 0x1FF630u) {
        ctx->pc = 0x1FF634u;
        goto label_1ff634;
    }
    ctx->pc = 0x1FF62Cu;
    {
        const bool branch_taken_0x1ff62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff62c) {
            ctx->pc = 0x1FF698u;
            goto label_1ff698;
        }
    }
    ctx->pc = 0x1FF634u;
label_1ff634:
    // 0x1ff634: 0x8f82908c  lw          $v0, -0x6F74($gp)
    ctx->pc = 0x1ff634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938764)));
label_1ff638:
    // 0x1ff638: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1ff63c:
    if (ctx->pc == 0x1FF63Cu) {
        ctx->pc = 0x1FF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF638u;
        // 0x1ff63c: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF640u;
        goto label_1ff640;
    }
    ctx->pc = 0x1FF638u;
    {
        const bool branch_taken_0x1ff638 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF638u;
        // 0x1ff63c: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff638) {
            ctx->pc = 0x1FF64Cu;
            goto label_1ff64c;
        }
    }
    ctx->pc = 0x1FF640u;
label_1ff640:
    // 0x1ff640: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1ff644:
    if (ctx->pc == 0x1FF644u) {
        ctx->pc = 0x1FF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF640u;
        // 0x1ff644: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF648u;
        goto label_1ff648;
    }
    ctx->pc = 0x1FF640u;
    {
        const bool branch_taken_0x1ff640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF640u;
        // 0x1ff644: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff640) {
            ctx->pc = 0x1FF650u;
            goto label_1ff650;
        }
    }
    ctx->pc = 0x1FF648u;
label_1ff648:
    // 0x1ff648: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1ff648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1ff64c:
    // 0x1ff64c: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1ff64cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1ff650:
    // 0x1ff650: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1ff654:
    if (ctx->pc == 0x1FF654u) {
        ctx->pc = 0x1FF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF650u;
        // 0x1ff654: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF658u;
        goto label_1ff658;
    }
    ctx->pc = 0x1FF650u;
    {
        const bool branch_taken_0x1ff650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF650u;
        // 0x1ff654: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff650) {
            ctx->pc = 0x1FF674u;
            goto label_1ff674;
        }
    }
    ctx->pc = 0x1FF658u;
label_1ff658:
    // 0x1ff658: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1ff658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1ff65c:
    // 0x1ff65c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ff660:
    if (ctx->pc == 0x1FF660u) {
        ctx->pc = 0x1FF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF65Cu;
        // 0x1ff660: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF664u;
        goto label_1ff664;
    }
    ctx->pc = 0x1FF65Cu;
    {
        const bool branch_taken_0x1ff65c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF65Cu;
        // 0x1ff660: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff65c) {
            ctx->pc = 0x1FF66Cu;
            goto label_1ff66c;
        }
    }
    ctx->pc = 0x1FF664u;
label_1ff664:
    // 0x1ff664: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ff664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1ff668:
    // 0x1ff668: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ff668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ff66c:
    // 0x1ff66c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ff670:
    if (ctx->pc == 0x1FF670u) {
        ctx->pc = 0x1FF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF66Cu;
        // 0x1ff670: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF674u;
        goto label_1ff674;
    }
    ctx->pc = 0x1FF66Cu;
    {
        const bool branch_taken_0x1ff66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF66Cu;
        // 0x1ff670: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff66c) {
            ctx->pc = 0x1FF690u;
            goto label_1ff690;
        }
    }
    ctx->pc = 0x1FF674u;
label_1ff674:
    // 0x1ff674: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ff674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ff678:
    // 0x1ff678: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1ff678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1ff67c:
    // 0x1ff67c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ff680:
    if (ctx->pc == 0x1FF680u) {
        ctx->pc = 0x1FF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF67Cu;
        // 0x1ff680: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF684u;
        goto label_1ff684;
    }
    ctx->pc = 0x1FF67Cu;
    {
        const bool branch_taken_0x1ff67c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF67Cu;
        // 0x1ff680: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff67c) {
            ctx->pc = 0x1FF68Cu;
            goto label_1ff68c;
        }
    }
    ctx->pc = 0x1FF684u;
label_1ff684:
    // 0x1ff684: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ff684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1ff688:
    // 0x1ff688: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ff688u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ff68c:
    // 0x1ff68c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1ff68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1ff690:
    // 0x1ff690: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ff694:
    if (ctx->pc == 0x1FF694u) {
        ctx->pc = 0x1FF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF690u;
        // 0x1ff694: 0xa2426dd3  sb          $v0, 0x6DD3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 28115), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF698u;
        goto label_1ff698;
    }
    ctx->pc = 0x1FF690u;
    {
        const bool branch_taken_0x1ff690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF690u;
        // 0x1ff694: 0xa2426dd3  sb          $v0, 0x6DD3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 28115), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff690) {
            ctx->pc = 0x1FF69Cu;
            goto label_1ff69c;
        }
    }
    ctx->pc = 0x1FF698u;
label_1ff698:
    // 0x1ff698: 0xa2406dd3  sb          $zero, 0x6DD3($s2)
    ctx->pc = 0x1ff698u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 28115), (uint8_t)GPR_U32(ctx, 0));
label_1ff69c:
    // 0x1ff69c: 0x8f8490a0  lw          $a0, -0x6F60($gp)
    ctx->pc = 0x1ff69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938784)));
label_1ff6a0:
    // 0x1ff6a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ff6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ff6a4:
    // 0x1ff6a4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1ff6a8:
    if (ctx->pc == 0x1FF6A8u) {
        ctx->pc = 0x1FF6ACu;
        goto label_1ff6ac;
    }
    ctx->pc = 0x1FF6A4u;
    {
        const bool branch_taken_0x1ff6a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ff6a4) {
            ctx->pc = 0x1FF6BCu;
            goto label_1ff6bc;
        }
    }
    ctx->pc = 0x1FF6ACu;
label_1ff6ac:
    // 0x1ff6ac: 0xc070c20  jal         func_1C3080
label_1ff6b0:
    if (ctx->pc == 0x1FF6B0u) {
        ctx->pc = 0x1FF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6ACu;
        // 0x1ff6b0: 0x8f84909c  lw          $a0, -0x6F64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF6B4u;
        goto label_1ff6b4;
    }
    ctx->pc = 0x1FF6ACu;
    SET_GPR_U32(ctx, 31, 0x1FF6B4u);
    ctx->pc = 0x1FF6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF6ACu;
    // 0x1ff6b0: 0x8f84909c  lw          $a0, -0x6F64($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3080u;
    { ctx->pc = 0x1c3080; return; }
    ctx->pc = 0x1FF6B4u;
label_1ff6b4:
    // 0x1ff6b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ff6b8:
    if (ctx->pc == 0x1FF6B8u) {
        ctx->pc = 0x1FF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6B4u;
        // 0x1ff6b8: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF6BCu;
        goto label_1ff6bc;
    }
    ctx->pc = 0x1FF6B4u;
    {
        const bool branch_taken_0x1ff6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6B4u;
        // 0x1ff6b8: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6b4) {
            ctx->pc = 0x1FF6C8u;
            goto label_1ff6c8;
        }
    }
    ctx->pc = 0x1FF6BCu;
label_1ff6bc:
    // 0x1ff6bc: 0xc070c90  jal         func_1C3240
label_1ff6c0:
    if (ctx->pc == 0x1FF6C0u) {
        ctx->pc = 0x1FF6C4u;
        goto label_1ff6c4;
    }
    ctx->pc = 0x1FF6BCu;
    SET_GPR_U32(ctx, 31, 0x1FF6C4u);
    ctx->pc = 0x1C3240u;
    { ctx->pc = 0x1c3240; return; }
    ctx->pc = 0x1FF6C4u;
label_1ff6c4:
    // 0x1ff6c4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ff6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1ff6c8:
    // 0x1ff6c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ff6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ff6cc:
    // 0x1ff6cc: 0x240606e0  addiu       $a2, $zero, 0x6E0
    ctx->pc = 0x1ff6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1760));
label_1ff6d0:
    // 0x1ff6d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ff6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff6d4:
    // 0x1ff6d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ff6d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff6d8:
    // 0x1ff6d8: 0xc066c72  jal         func_19B1C8
label_1ff6dc:
    if (ctx->pc == 0x1FF6DCu) {
        ctx->pc = 0x1FF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6D8u;
        // 0x1ff6dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF6E0u;
        goto label_1ff6e0;
    }
    ctx->pc = 0x1FF6D8u;
    SET_GPR_U32(ctx, 31, 0x1FF6E0u);
    ctx->pc = 0x1FF6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF6D8u;
    // 0x1ff6dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1FF6E0u;
label_1ff6e0:
    // 0x1ff6e0: 0x10000166  b           . + 4 + (0x166 << 2)
label_1ff6e4:
    if (ctx->pc == 0x1FF6E4u) {
        ctx->pc = 0x1FF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6E0u;
        // 0x1ff6e4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF6E8u;
        goto label_1ff6e8;
    }
    ctx->pc = 0x1FF6E0u;
    {
        const bool branch_taken_0x1ff6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6E0u;
        // 0x1ff6e4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6e0) {
            ctx->pc = 0x1FFC7Cu;
            { ctx->pc = 0x1ffc7c; return; }
        }
    }
    ctx->pc = 0x1FF6E8u;
label_1ff6e8:
    // 0x1ff6e8: 0x8f83909c  lw          $v1, -0x6F64($gp)
    ctx->pc = 0x1ff6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
label_1ff6ec:
    // 0x1ff6ec: 0x2861000f  slti        $at, $v1, 0xF
    ctx->pc = 0x1ff6ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_1ff6f0:
    // 0x1ff6f0: 0x10200161  beqz        $at, . + 4 + (0x161 << 2)
label_1ff6f4:
    if (ctx->pc == 0x1FF6F4u) {
        ctx->pc = 0x1FF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6F0u;
        // 0x1ff6f4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF6F8u;
        goto label_1ff6f8;
    }
    ctx->pc = 0x1FF6F0u;
    {
        const bool branch_taken_0x1ff6f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6F0u;
        // 0x1ff6f4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6f0) {
            ctx->pc = 0x1FFC78u;
            { ctx->pc = 0x1ffc78; return; }
        }
    }
    ctx->pc = 0x1FF6F8u;
label_1ff6f8:
    // 0x1ff6f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ff6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1ff6fc:
    // 0x1ff6fc: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x1ff6fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1ff700:
    // 0x1ff700: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ff700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1ff704:
    // 0x1ff704: 0x8f8590a8  lw          $a1, -0x6F58($gp)
    ctx->pc = 0x1ff704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
label_1ff708:
    // 0x1ff708: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1ff708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1ff70c:
    // 0x1ff70c: 0x8f8690a4  lw          $a2, -0x6F5C($gp)
    ctx->pc = 0x1ff70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938788)));
label_1ff710:
    // 0x1ff710: 0x24634b20  addiu       $v1, $v1, 0x4B20
    ctx->pc = 0x1ff710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19232));
label_1ff714:
    // 0x1ff714: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x1ff714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1ff718:
    // 0x1ff718: 0x24080118  addiu       $t0, $zero, 0x118
    ctx->pc = 0x1ff718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_1ff71c:
    // 0x1ff71c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1ff71cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ff720:
    // 0x1ff720: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x1ff720u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ff724:
    // 0x1ff724: 0xc5940  sll         $t3, $t4, 5
    ctx->pc = 0x1ff724u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_1ff728:
    // 0x1ff728: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x1ff728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_1ff72c:
    // 0x1ff72c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1ff72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1ff730:
    // 0x1ff730: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ff730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff734:
    // 0x1ff734: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1ff734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1ff738:
    // 0x1ff738: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1ff738u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ff73c:
    // 0x1ff73c: 0x8c1023  subu        $v0, $a0, $t4
    ctx->pc = 0x1ff73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1ff740:
    // 0x1ff740: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff744:
    // 0x1ff744: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x1ff744u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_1ff748:
    // 0x1ff748: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x1ff748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
label_1ff74c:
    // 0x1ff74c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1ff74cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ff750:
    // 0x1ff750: 0xc07c17c  jal         func_1F05F0
label_1ff754:
    if (ctx->pc == 0x1FF754u) {
        ctx->pc = 0x1FF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF750u;
        // 0x1ff754: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF758u;
        goto label_1ff758;
    }
    ctx->pc = 0x1FF750u;
    SET_GPR_U32(ctx, 31, 0x1FF758u);
    ctx->pc = 0x1FF754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF750u;
    // 0x1ff754: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x1FF758u;
label_1ff758:
    // 0x1ff758: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x1ff758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_1ff75c:
    // 0x1ff75c: 0x27c50008  addiu       $a1, $fp, 0x8
    ctx->pc = 0x1ff75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_1ff760:
    // 0x1ff760: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ff760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff764:
    // 0x1ff764: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x1ff764u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff768:
    // 0x1ff768: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ff768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ff76c:
    // 0x1ff76c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x1ff76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1ff770:
    // 0x1ff770: 0xa6630400  sh          $v1, 0x400($s3)
    ctx->pc = 0x1ff770u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1024), (uint16_t)GPR_U32(ctx, 3));
label_1ff774:
    // 0x1ff774: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ff774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff778:
    // 0x1ff778: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1ff778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ff77c:
    // 0x1ff77c: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1ff77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ff780:
    // 0x1ff780: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1ff780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1ff784:
    // 0x1ff784: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1ff784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1ff788:
    // 0x1ff788: 0xa6630402  sh          $v1, 0x402($s3)
    ctx->pc = 0x1ff788u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1026), (uint16_t)GPR_U32(ctx, 3));
label_1ff78c:
    // 0x1ff78c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff790:
    // 0x1ff790: 0xae660404  sw          $a2, 0x404($s3)
    ctx->pc = 0x1ff790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1028), GPR_U32(ctx, 6));
label_1ff794:
    // 0x1ff794: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1ff794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ff798:
    // 0x1ff798: 0x26850078  addiu       $a1, $s4, 0x78
    ctx->pc = 0x1ff798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
label_1ff79c:
    // 0x1ff79c: 0xa6640410  sh          $a0, 0x410($s3)
    ctx->pc = 0x1ff79cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1040), (uint16_t)GPR_U32(ctx, 4));
label_1ff7a0:
    // 0x1ff7a0: 0xa6630412  sh          $v1, 0x412($s3)
    ctx->pc = 0x1ff7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1042), (uint16_t)GPR_U32(ctx, 3));
label_1ff7a4:
    // 0x1ff7a4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1ff7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1ff7a8:
    // 0x1ff7a8: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1ff7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ff7ac:
    // 0x1ff7ac: 0xae660414  sw          $a2, 0x414($s3)
    ctx->pc = 0x1ff7acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1044), GPR_U32(ctx, 6));
label_1ff7b0:
    // 0x1ff7b0: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x1ff7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
label_1ff7b4:
    // 0x1ff7b4: 0x27c70078  addiu       $a3, $fp, 0x78
    ctx->pc = 0x1ff7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 120));
label_1ff7b8:
    // 0x1ff7b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ff7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff7bc:
    // 0x1ff7bc: 0xa66304a0  sh          $v1, 0x4A0($s3)
    ctx->pc = 0x1ff7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1184), (uint16_t)GPR_U32(ctx, 3));
label_1ff7c0:
    // 0x1ff7c0: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1ff7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ff7c4:
    // 0x1ff7c4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1ff7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1ff7c8:
    // 0x1ff7c8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1ff7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1ff7cc:
    // 0x1ff7cc: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1ff7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ff7d0:
    // 0x1ff7d0: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x1ff7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1ff7d4:
    // 0x1ff7d4: 0xa66304a2  sh          $v1, 0x4A2($s3)
    ctx->pc = 0x1ff7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1186), (uint16_t)GPR_U32(ctx, 3));
label_1ff7d8:
    // 0x1ff7d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff7dc:
    // 0x1ff7dc: 0xae6604a4  sw          $a2, 0x4A4($s3)
    ctx->pc = 0x1ff7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1188), GPR_U32(ctx, 6));
label_1ff7e0:
    // 0x1ff7e0: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1ff7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ff7e4:
    // 0x1ff7e4: 0xa66404b0  sh          $a0, 0x4B0($s3)
    ctx->pc = 0x1ff7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1200), (uint16_t)GPR_U32(ctx, 4));
label_1ff7e8:
    // 0x1ff7e8: 0xa66304b2  sh          $v1, 0x4B2($s3)
    ctx->pc = 0x1ff7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1202), (uint16_t)GPR_U32(ctx, 3));
label_1ff7ec:
    // 0x1ff7ec: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ff7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ff7f0:
    // 0x1ff7f0: 0xae6604b4  sw          $a2, 0x4B4($s3)
    ctx->pc = 0x1ff7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1204), GPR_U32(ctx, 6));
label_1ff7f4:
    // 0x1ff7f4: 0x24423330  addiu       $v0, $v0, 0x3330
    ctx->pc = 0x1ff7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13104));
label_1ff7f8:
    // 0x1ff7f8: 0xa2600493  sb          $zero, 0x493($s3)
    ctx->pc = 0x1ff7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1171), (uint8_t)GPR_U32(ctx, 0));
label_1ff7fc:
    // 0x1ff7fc: 0x8f83909c  lw          $v1, -0x6F64($gp)
    ctx->pc = 0x1ff7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
label_1ff800:
    // 0x1ff800: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ff804:
    // 0x1ff804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ff808:
    // 0x1ff808: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ff808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ff80c:
    // 0x1ff80c: 0xc055148  jal         func_154520
label_1ff810:
    if (ctx->pc == 0x1FF810u) {
        ctx->pc = 0x1FF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF80Cu;
        // 0x1ff810: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF814u;
        goto label_1ff814;
    }
    ctx->pc = 0x1FF80Cu;
    SET_GPR_U32(ctx, 31, 0x1FF814u);
    ctx->pc = 0x1FF810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF80Cu;
    // 0x1ff810: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1FF80Cu, 0x1FF814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF814u;
label_1ff814:
    // 0x1ff814: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ff814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ff818:
    // 0x1ff818: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1ff818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ff81c:
    // 0x1ff81c: 0x26880010  addiu       $t0, $s4, 0x10
    ctx->pc = 0x1ff81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1ff820:
    // 0x1ff820: 0x27c90098  addiu       $t1, $fp, 0x98
    ctx->pc = 0x1ff820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 152));
label_1ff824:
    // 0x1ff824: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1ff824u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1ff828:
    // 0x1ff828: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1ff828u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff82c:
    // 0x1ff82c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ff82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff830:
    // 0x1ff830: 0xc054e5c  jal         func_153970
label_1ff834:
    if (ctx->pc == 0x1FF834u) {
        ctx->pc = 0x1FF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF830u;
        // 0x1ff834: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF838u;
        goto label_1ff838;
    }
    ctx->pc = 0x1FF830u;
    SET_GPR_U32(ctx, 31, 0x1FF838u);
    ctx->pc = 0x1FF834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF830u;
    // 0x1ff834: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FF830u, 0x1FF838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF838u;
label_1ff838:
    // 0x1ff838: 0xc054e70  jal         func_1539C0
label_1ff83c:
    if (ctx->pc == 0x1FF83Cu) {
        ctx->pc = 0x1FF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF838u;
        // 0x1ff83c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF840u;
        goto label_1ff840;
    }
    ctx->pc = 0x1FF838u;
    SET_GPR_U32(ctx, 31, 0x1FF840u);
    ctx->pc = 0x1FF83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF838u;
    // 0x1ff83c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x1FF838u, 0x1FF840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF840u;
label_1ff840:
    // 0x1ff840: 0x8f83909c  lw          $v1, -0x6F64($gp)
    ctx->pc = 0x1ff840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
label_1ff844:
    // 0x1ff844: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ff844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ff848:
    // 0x1ff848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff84c:
    // 0x1ff84c: 0x24423330  addiu       $v0, $v0, 0x3330
    ctx->pc = 0x1ff84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13104));
label_1ff850:
    // 0x1ff850: 0x266404c0  addiu       $a0, $s3, 0x4C0
    ctx->pc = 0x1ff850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1216));
label_1ff854:
    // 0x1ff854: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1ff854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1ff858:
    // 0x1ff858: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ff85c:
    // 0x1ff85c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ff85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ff860:
    // 0x1ff860: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1ff860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ff864:
    // 0x1ff864: 0xc054e74  jal         func_1539D0
label_1ff868:
    if (ctx->pc == 0x1FF868u) {
        ctx->pc = 0x1FF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF864u;
        // 0x1ff868: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF86Cu;
        goto label_1ff86c;
    }
    ctx->pc = 0x1FF864u;
    SET_GPR_U32(ctx, 31, 0x1FF86Cu);
    ctx->pc = 0x1FF868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF864u;
    // 0x1ff868: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FF864u, 0x1FF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF86Cu;
label_1ff86c:
    // 0x1ff86c: 0x26820038  addiu       $v0, $s4, 0x38
    ctx->pc = 0x1ff86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
label_1ff870:
    // 0x1ff870: 0x27c500b4  addiu       $a1, $fp, 0xB4
    ctx->pc = 0x1ff870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 180));
label_1ff874:
    // 0x1ff874: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ff874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff878:
    // 0x1ff878: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1ff878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ff87c:
    // 0x1ff87c: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x1ff87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_1ff880:
    // 0x1ff880: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ff880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ff884:
    // 0x1ff884: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ff884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff888:
    // 0x1ff888: 0xa66313e0  sh          $v1, 0x13E0($s3)
    ctx->pc = 0x1ff888u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5088), (uint16_t)GPR_U32(ctx, 3));
label_1ff88c:
    // 0x1ff88c: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1ff88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ff890:
    // 0x1ff890: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1ff890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1ff894:
    // 0x1ff894: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1ff894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1ff898:
    // 0x1ff898: 0xa66413e2  sh          $a0, 0x13E2($s3)
    ctx->pc = 0x1ff898u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5090), (uint16_t)GPR_U32(ctx, 4));
label_1ff89c:
    // 0x1ff89c: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x1ff89cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff8a0:
    // 0x1ff8a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff8a4:
    // 0x1ff8a4: 0xae6613e4  sw          $a2, 0x13E4($s3)
    ctx->pc = 0x1ff8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5092), GPR_U32(ctx, 6));
label_1ff8a8:
    // 0x1ff8a8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1ff8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ff8ac:
    // 0x1ff8ac: 0xa66313f0  sh          $v1, 0x13F0($s3)
    ctx->pc = 0x1ff8acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5104), (uint16_t)GPR_U32(ctx, 3));
label_1ff8b0:
    // 0x1ff8b0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1ff8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1ff8b4:
    // 0x1ff8b4: 0xa66213f2  sh          $v0, 0x13F2($s3)
    ctx->pc = 0x1ff8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5106), (uint16_t)GPR_U32(ctx, 2));
label_1ff8b8:
    // 0x1ff8b8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1ff8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1ff8bc:
    // 0x1ff8bc: 0xae6613f4  sw          $a2, 0x13F4($s3)
    ctx->pc = 0x1ff8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5108), GPR_U32(ctx, 6));
label_1ff8c0:
    // 0x1ff8c0: 0x8f869098  lw          $a2, -0x6F68($gp)
    ctx->pc = 0x1ff8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938776)));
label_1ff8c4:
    // 0x1ff8c4: 0xc08f20e  jal         func_23C838
label_1ff8c8:
    if (ctx->pc == 0x1FF8C8u) {
        ctx->pc = 0x1FF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8C4u;
        // 0x1ff8c8: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF8CCu;
        goto label_1ff8cc;
    }
    ctx->pc = 0x1FF8C4u;
    SET_GPR_U32(ctx, 31, 0x1FF8CCu);
    ctx->pc = 0x1FF8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF8C4u;
    // 0x1ff8c8: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1FF8CCu;
label_1ff8cc:
    // 0x1ff8cc: 0x26860098  addiu       $a2, $s4, 0x98
    ctx->pc = 0x1ff8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
label_1ff8d0:
    // 0x1ff8d0: 0x27c700b0  addiu       $a3, $fp, 0xB0
    ctx->pc = 0x1ff8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 176));
label_1ff8d4:
    // 0x1ff8d4: 0x26641400  addiu       $a0, $s3, 0x1400
    ctx->pc = 0x1ff8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5120));
label_1ff8d8:
    // 0x1ff8d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ff8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff8dc:
    // 0x1ff8dc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ff8dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff8e0:
    // 0x1ff8e0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ff8e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff8e4:
    // 0x1ff8e4: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1ff8e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ff8e8:
    // 0x1ff8e8: 0xc0708ac  jal         func_1C22B0
label_1ff8ec:
    if (ctx->pc == 0x1FF8ECu) {
        ctx->pc = 0x1FF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF8E8u;
        // 0x1ff8ec: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF8F0u;
        goto label_1ff8f0;
    }
    ctx->pc = 0x1FF8E8u;
    SET_GPR_U32(ctx, 31, 0x1FF8F0u);
    ctx->pc = 0x1FF8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF8E8u;
    // 0x1ff8ec: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FF8F0u;
label_1ff8f0:
    // 0x1ff8f0: 0x26820038  addiu       $v0, $s4, 0x38
    ctx->pc = 0x1ff8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
label_1ff8f4:
    // 0x1ff8f4: 0x27c500cc  addiu       $a1, $fp, 0xCC
    ctx->pc = 0x1ff8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 204));
label_1ff8f8:
    // 0x1ff8f8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ff8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff8fc:
    // 0x1ff8fc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1ff8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ff900:
    // 0x1ff900: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x1ff900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_1ff904:
    // 0x1ff904: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ff904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ff908:
    // 0x1ff908: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ff908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ff90c:
    // 0x1ff90c: 0xa6631660  sh          $v1, 0x1660($s3)
    ctx->pc = 0x1ff90cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5728), (uint16_t)GPR_U32(ctx, 3));
label_1ff910:
    // 0x1ff910: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1ff910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ff914:
    // 0x1ff914: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1ff914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1ff918:
    // 0x1ff918: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1ff918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1ff91c:
    // 0x1ff91c: 0xa6641662  sh          $a0, 0x1662($s3)
    ctx->pc = 0x1ff91cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5730), (uint16_t)GPR_U32(ctx, 4));
label_1ff920:
    // 0x1ff920: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ff920u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff924:
    // 0x1ff924: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ff928:
    // 0x1ff928: 0xae681664  sw          $t0, 0x1664($s3)
    ctx->pc = 0x1ff928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5732), GPR_U32(ctx, 8));
label_1ff92c:
    // 0x1ff92c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1ff92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ff930:
    // 0x1ff930: 0xa6631670  sh          $v1, 0x1670($s3)
    ctx->pc = 0x1ff930u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5744), (uint16_t)GPR_U32(ctx, 3));
label_1ff934:
    // 0x1ff934: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1ff934u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1ff938:
    // 0x1ff938: 0xa6621672  sh          $v0, 0x1672($s3)
    ctx->pc = 0x1ff938u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 5746), (uint16_t)GPR_U32(ctx, 2));
label_1ff93c:
    // 0x1ff93c: 0x268600b8  addiu       $a2, $s4, 0xB8
    ctx->pc = 0x1ff93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 184));
label_1ff940:
    // 0x1ff940: 0xae681674  sw          $t0, 0x1674($s3)
    ctx->pc = 0x1ff940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5748), GPR_U32(ctx, 8));
label_1ff944:
    // 0x1ff944: 0x27c700c8  addiu       $a3, $fp, 0xC8
    ctx->pc = 0x1ff944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 200));
label_1ff948:
    // 0x1ff948: 0xa2601653  sb          $zero, 0x1653($s3)
    ctx->pc = 0x1ff948u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5715), (uint8_t)GPR_U32(ctx, 0));
label_1ff94c:
    // 0x1ff94c: 0x26641720  addiu       $a0, $s3, 0x1720
    ctx->pc = 0x1ff94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5920));
label_1ff950:
    // 0x1ff950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff954:
    // 0x1ff954: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ff954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff958:
    // 0x1ff958: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1ff958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ff95c:
    // 0x1ff95c: 0x256bd548  addiu       $t3, $t3, -0x2AB8
    ctx->pc = 0x1ff95cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
label_1ff960:
    // 0x1ff960: 0xc0708ac  jal         func_1C22B0
label_1ff964:
    if (ctx->pc == 0x1FF964u) {
        ctx->pc = 0x1FF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF960u;
        // 0x1ff964: 0xa26016f3  sb          $zero, 0x16F3($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 5875), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF968u;
        goto label_1ff968;
    }
    ctx->pc = 0x1FF960u;
    SET_GPR_U32(ctx, 31, 0x1FF968u);
    ctx->pc = 0x1FF964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF960u;
    // 0x1ff964: 0xa26016f3  sb          $zero, 0x16F3($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 5875), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FF968u;
label_1ff968:
    // 0x1ff968: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1ff968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_1ff96c:
    // 0x1ff96c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ff96cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff970:
    // 0x1ff970: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ff970u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff974:
    // 0x1ff974: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ff974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff978:
    // 0x1ff978: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ff978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff97c:
    // 0x1ff97c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ff97cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff980:
    // 0x1ff980: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ff980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1ff984:
    // 0x1ff984: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ff984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ff988:
    // 0x1ff988: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x1ff988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_1ff98c:
    // 0x1ff98c: 0x76b821  addu        $s7, $v1, $s6
    ctx->pc = 0x1ff98cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_1ff990:
    // 0x1ff990: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1ff990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1ff994:
    // 0x1ff994: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_1ff998:
    if (ctx->pc == 0x1FF998u) {
        ctx->pc = 0x1FF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF994u;
        // 0x1ff998: 0x2754021  addu        $t0, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF99Cu;
        goto label_1ff99c;
    }
    ctx->pc = 0x1FF994u;
    {
        const bool branch_taken_0x1ff994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FF998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF994u;
        // 0x1ff998: 0x2754021  addu        $t0, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff994) {
            ctx->pc = 0x1FFA34u;
            { ctx->pc = 0x1ffa34; return; }
        }
    }
    ctx->pc = 0x1FF99Cu;
label_1ff99c:
    // 0x1ff99c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1ff99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ff9a0:
    // 0x1ff9a0: 0x34039400  ori         $v1, $zero, 0x9400
    ctx->pc = 0x1ff9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
label_1ff9a4:
    // 0x1ff9a4: 0xa1001833  sb          $zero, 0x1833($t0)
    ctx->pc = 0x1ff9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6195), (uint8_t)GPR_U32(ctx, 0));
label_1ff9a8:
    // 0x1ff9a8: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1ff9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
label_1ff9ac:
    // 0x1ff9ac: 0xa5031840  sh          $v1, 0x1840($t0)
    ctx->pc = 0x1ff9acu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6208), (uint16_t)GPR_U32(ctx, 3));
label_1ff9b0:
    // 0x1ff9b0: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1ff9b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ff9b4:
    // 0x1ff9b4: 0xa5021842  sh          $v0, 0x1842($t0)
    ctx->pc = 0x1ff9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6210), (uint16_t)GPR_U32(ctx, 2));
label_1ff9b8:
    // 0x1ff9b8: 0xad0a1844  sw          $t2, 0x1844($t0)
    ctx->pc = 0x1ff9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6212), GPR_U32(ctx, 10));
label_1ff9bc:
    // 0x1ff9bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ff9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ff9c0:
    // 0x1ff9c0: 0xa5031850  sh          $v1, 0x1850($t0)
    ctx->pc = 0x1ff9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6224), (uint16_t)GPR_U32(ctx, 3));
label_1ff9c4:
    // 0x1ff9c4: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1ff9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ff9c8:
    // 0x1ff9c8: 0xa5021852  sh          $v0, 0x1852($t0)
    ctx->pc = 0x1ff9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6226), (uint16_t)GPR_U32(ctx, 2));
label_1ff9cc:
    // 0x1ff9cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff9d0:
    // 0x1ff9d0: 0xad0a1854  sw          $t2, 0x1854($t0)
    ctx->pc = 0x1ff9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6228), GPR_U32(ctx, 10));
label_1ff9d4:
    // 0x1ff9d4: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1ff9d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ff9d8:
    // 0x1ff9d8: 0xc054e5c  jal         func_153970
label_1ff9dc:
    if (ctx->pc == 0x1FF9DCu) {
        ctx->pc = 0x1FF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9D8u;
        // 0x1ff9dc: 0x24080280  addiu       $t0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF9E0u;
        goto label_1ff9e0;
    }
    ctx->pc = 0x1FF9D8u;
    SET_GPR_U32(ctx, 31, 0x1FF9E0u);
    ctx->pc = 0x1FF9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF9D8u;
    // 0x1ff9dc: 0x24080280  addiu       $t0, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FF9D8u, 0x1FF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF9E0u;
label_1ff9e0:
    // 0x1ff9e0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1ff9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1ff9e4:
    // 0x1ff9e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff9e8:
    // 0x1ff9e8: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1ff9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1ff9ec:
    // 0x1ff9ec: 0x24441ae0  addiu       $a0, $v0, 0x1AE0
    ctx->pc = 0x1ff9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
label_1ff9f0:
    // 0x1ff9f0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1ff9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1ff9f4:
    // 0x1ff9f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff9f8:
    // 0x1ff9f8: 0xc054e74  jal         func_1539D0
label_1ff9fc:
    if (ctx->pc == 0x1FF9FCu) {
        ctx->pc = 0x1FF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9F8u;
        // 0x1ff9fc: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA00u;
        { ctx->pc = 0x1ffa00; return; }
    }
    ctx->pc = 0x1FF9F8u;
    SET_GPR_U32(ctx, 31, 0x1FFA00u);
    ctx->pc = 0x1FF9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF9F8u;
    // 0x1ff9fc: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FF9F8u, 0x1FFA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA00u;
    ctx->pc = 0x1ffa00u;
    return;
}
