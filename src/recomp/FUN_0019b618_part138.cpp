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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1de468u: goto label_1de468;
        case 0x1de46cu: goto label_1de46c;
        case 0x1de470u: goto label_1de470;
        case 0x1de474u: goto label_1de474;
        case 0x1de478u: goto label_1de478;
        case 0x1de47cu: goto label_1de47c;
        case 0x1de480u: goto label_1de480;
        case 0x1de484u: goto label_1de484;
        case 0x1de488u: goto label_1de488;
        case 0x1de48cu: goto label_1de48c;
        case 0x1de490u: goto label_1de490;
        case 0x1de494u: goto label_1de494;
        case 0x1de498u: goto label_1de498;
        case 0x1de49cu: goto label_1de49c;
        case 0x1de4a0u: goto label_1de4a0;
        case 0x1de4a4u: goto label_1de4a4;
        case 0x1de4a8u: goto label_1de4a8;
        case 0x1de4acu: goto label_1de4ac;
        case 0x1de4b0u: goto label_1de4b0;
        case 0x1de4b4u: goto label_1de4b4;
        case 0x1de4b8u: goto label_1de4b8;
        case 0x1de4bcu: goto label_1de4bc;
        case 0x1de4c0u: goto label_1de4c0;
        case 0x1de4c4u: goto label_1de4c4;
        case 0x1de4c8u: goto label_1de4c8;
        case 0x1de4ccu: goto label_1de4cc;
        case 0x1de4d0u: goto label_1de4d0;
        case 0x1de4d4u: goto label_1de4d4;
        case 0x1de4d8u: goto label_1de4d8;
        case 0x1de4dcu: goto label_1de4dc;
        case 0x1de4e0u: goto label_1de4e0;
        case 0x1de4e4u: goto label_1de4e4;
        case 0x1de4e8u: goto label_1de4e8;
        case 0x1de4ecu: goto label_1de4ec;
        case 0x1de4f0u: goto label_1de4f0;
        case 0x1de4f4u: goto label_1de4f4;
        case 0x1de4f8u: goto label_1de4f8;
        case 0x1de4fcu: goto label_1de4fc;
        case 0x1de500u: goto label_1de500;
        case 0x1de504u: goto label_1de504;
        case 0x1de508u: goto label_1de508;
        case 0x1de50cu: goto label_1de50c;
        case 0x1de510u: goto label_1de510;
        case 0x1de514u: goto label_1de514;
        case 0x1de518u: goto label_1de518;
        case 0x1de51cu: goto label_1de51c;
        case 0x1de520u: goto label_1de520;
        case 0x1de524u: goto label_1de524;
        case 0x1de528u: goto label_1de528;
        case 0x1de52cu: goto label_1de52c;
        case 0x1de530u: goto label_1de530;
        case 0x1de534u: goto label_1de534;
        case 0x1de538u: goto label_1de538;
        case 0x1de53cu: goto label_1de53c;
        case 0x1de540u: goto label_1de540;
        case 0x1de544u: goto label_1de544;
        case 0x1de548u: goto label_1de548;
        case 0x1de54cu: goto label_1de54c;
        case 0x1de550u: goto label_1de550;
        case 0x1de554u: goto label_1de554;
        case 0x1de558u: goto label_1de558;
        case 0x1de55cu: goto label_1de55c;
        case 0x1de560u: goto label_1de560;
        case 0x1de564u: goto label_1de564;
        case 0x1de568u: goto label_1de568;
        case 0x1de56cu: goto label_1de56c;
        case 0x1de570u: goto label_1de570;
        case 0x1de574u: goto label_1de574;
        case 0x1de578u: goto label_1de578;
        case 0x1de57cu: goto label_1de57c;
        case 0x1de580u: goto label_1de580;
        case 0x1de584u: goto label_1de584;
        case 0x1de588u: goto label_1de588;
        case 0x1de58cu: goto label_1de58c;
        case 0x1de590u: goto label_1de590;
        case 0x1de594u: goto label_1de594;
        case 0x1de598u: goto label_1de598;
        case 0x1de59cu: goto label_1de59c;
        case 0x1de5a0u: goto label_1de5a0;
        case 0x1de5a4u: goto label_1de5a4;
        case 0x1de5a8u: goto label_1de5a8;
        case 0x1de5acu: goto label_1de5ac;
        case 0x1de5b0u: goto label_1de5b0;
        case 0x1de5b4u: goto label_1de5b4;
        case 0x1de5b8u: goto label_1de5b8;
        case 0x1de5bcu: goto label_1de5bc;
        case 0x1de5c0u: goto label_1de5c0;
        case 0x1de5c4u: goto label_1de5c4;
        case 0x1de5c8u: goto label_1de5c8;
        case 0x1de5ccu: goto label_1de5cc;
        case 0x1de5d0u: goto label_1de5d0;
        case 0x1de5d4u: goto label_1de5d4;
        case 0x1de5d8u: goto label_1de5d8;
        case 0x1de5dcu: goto label_1de5dc;
        case 0x1de5e0u: goto label_1de5e0;
        case 0x1de5e4u: goto label_1de5e4;
        case 0x1de5e8u: goto label_1de5e8;
        case 0x1de5ecu: goto label_1de5ec;
        case 0x1de5f0u: goto label_1de5f0;
        case 0x1de5f4u: goto label_1de5f4;
        case 0x1de5f8u: goto label_1de5f8;
        case 0x1de5fcu: goto label_1de5fc;
        case 0x1de600u: goto label_1de600;
        case 0x1de604u: goto label_1de604;
        case 0x1de608u: goto label_1de608;
        case 0x1de60cu: goto label_1de60c;
        case 0x1de610u: goto label_1de610;
        case 0x1de614u: goto label_1de614;
        case 0x1de618u: goto label_1de618;
        case 0x1de61cu: goto label_1de61c;
        case 0x1de620u: goto label_1de620;
        case 0x1de624u: goto label_1de624;
        case 0x1de628u: goto label_1de628;
        case 0x1de62cu: goto label_1de62c;
        case 0x1de630u: goto label_1de630;
        case 0x1de634u: goto label_1de634;
        case 0x1de638u: goto label_1de638;
        case 0x1de63cu: goto label_1de63c;
        case 0x1de640u: goto label_1de640;
        case 0x1de644u: goto label_1de644;
        case 0x1de648u: goto label_1de648;
        case 0x1de64cu: goto label_1de64c;
        case 0x1de650u: goto label_1de650;
        case 0x1de654u: goto label_1de654;
        case 0x1de658u: goto label_1de658;
        case 0x1de65cu: goto label_1de65c;
        case 0x1de660u: goto label_1de660;
        case 0x1de664u: goto label_1de664;
        case 0x1de668u: goto label_1de668;
        case 0x1de66cu: goto label_1de66c;
        case 0x1de670u: goto label_1de670;
        case 0x1de674u: goto label_1de674;
        case 0x1de678u: goto label_1de678;
        case 0x1de67cu: goto label_1de67c;
        case 0x1de680u: goto label_1de680;
        case 0x1de684u: goto label_1de684;
        case 0x1de688u: goto label_1de688;
        case 0x1de68cu: goto label_1de68c;
        case 0x1de690u: goto label_1de690;
        case 0x1de694u: goto label_1de694;
        case 0x1de698u: goto label_1de698;
        case 0x1de69cu: goto label_1de69c;
        case 0x1de6a0u: goto label_1de6a0;
        case 0x1de6a4u: goto label_1de6a4;
        case 0x1de6a8u: goto label_1de6a8;
        case 0x1de6acu: goto label_1de6ac;
        case 0x1de6b0u: goto label_1de6b0;
        case 0x1de6b4u: goto label_1de6b4;
        case 0x1de6b8u: goto label_1de6b8;
        case 0x1de6bcu: goto label_1de6bc;
        case 0x1de6c0u: goto label_1de6c0;
        case 0x1de6c4u: goto label_1de6c4;
        case 0x1de6c8u: goto label_1de6c8;
        case 0x1de6ccu: goto label_1de6cc;
        case 0x1de6d0u: goto label_1de6d0;
        case 0x1de6d4u: goto label_1de6d4;
        case 0x1de6d8u: goto label_1de6d8;
        case 0x1de6dcu: goto label_1de6dc;
        case 0x1de6e0u: goto label_1de6e0;
        case 0x1de6e4u: goto label_1de6e4;
        case 0x1de6e8u: goto label_1de6e8;
        case 0x1de6ecu: goto label_1de6ec;
        case 0x1de6f0u: goto label_1de6f0;
        case 0x1de6f4u: goto label_1de6f4;
        case 0x1de6f8u: goto label_1de6f8;
        case 0x1de6fcu: goto label_1de6fc;
        case 0x1de700u: goto label_1de700;
        case 0x1de704u: goto label_1de704;
        case 0x1de708u: goto label_1de708;
        case 0x1de70cu: goto label_1de70c;
        case 0x1de710u: goto label_1de710;
        case 0x1de714u: goto label_1de714;
        case 0x1de718u: goto label_1de718;
        case 0x1de71cu: goto label_1de71c;
        case 0x1de720u: goto label_1de720;
        case 0x1de724u: goto label_1de724;
        case 0x1de728u: goto label_1de728;
        case 0x1de72cu: goto label_1de72c;
        case 0x1de730u: goto label_1de730;
        case 0x1de734u: goto label_1de734;
        case 0x1de738u: goto label_1de738;
        case 0x1de73cu: goto label_1de73c;
        case 0x1de740u: goto label_1de740;
        case 0x1de744u: goto label_1de744;
        case 0x1de748u: goto label_1de748;
        case 0x1de74cu: goto label_1de74c;
        case 0x1de750u: goto label_1de750;
        case 0x1de754u: goto label_1de754;
        case 0x1de758u: goto label_1de758;
        case 0x1de75cu: goto label_1de75c;
        case 0x1de760u: goto label_1de760;
        case 0x1de764u: goto label_1de764;
        case 0x1de768u: goto label_1de768;
        case 0x1de76cu: goto label_1de76c;
        case 0x1de770u: goto label_1de770;
        case 0x1de774u: goto label_1de774;
        case 0x1de778u: goto label_1de778;
        case 0x1de77cu: goto label_1de77c;
        case 0x1de780u: goto label_1de780;
        case 0x1de784u: goto label_1de784;
        case 0x1de788u: goto label_1de788;
        case 0x1de78cu: goto label_1de78c;
        case 0x1de790u: goto label_1de790;
        case 0x1de794u: goto label_1de794;
        case 0x1de798u: goto label_1de798;
        case 0x1de79cu: goto label_1de79c;
        case 0x1de7a0u: goto label_1de7a0;
        case 0x1de7a4u: goto label_1de7a4;
        case 0x1de7a8u: goto label_1de7a8;
        case 0x1de7acu: goto label_1de7ac;
        case 0x1de7b0u: goto label_1de7b0;
        case 0x1de7b4u: goto label_1de7b4;
        case 0x1de7b8u: goto label_1de7b8;
        case 0x1de7bcu: goto label_1de7bc;
        case 0x1de7c0u: goto label_1de7c0;
        case 0x1de7c4u: goto label_1de7c4;
        case 0x1de7c8u: goto label_1de7c8;
        case 0x1de7ccu: goto label_1de7cc;
        case 0x1de7d0u: goto label_1de7d0;
        case 0x1de7d4u: goto label_1de7d4;
        case 0x1de7d8u: goto label_1de7d8;
        case 0x1de7dcu: goto label_1de7dc;
        case 0x1de7e0u: goto label_1de7e0;
        case 0x1de7e4u: goto label_1de7e4;
        case 0x1de7e8u: goto label_1de7e8;
        case 0x1de7ecu: goto label_1de7ec;
        case 0x1de7f0u: goto label_1de7f0;
        case 0x1de7f4u: goto label_1de7f4;
        case 0x1de7f8u: goto label_1de7f8;
        case 0x1de7fcu: goto label_1de7fc;
        case 0x1de800u: goto label_1de800;
        case 0x1de804u: goto label_1de804;
        case 0x1de808u: goto label_1de808;
        case 0x1de80cu: goto label_1de80c;
        case 0x1de810u: goto label_1de810;
        case 0x1de814u: goto label_1de814;
        case 0x1de818u: goto label_1de818;
        case 0x1de81cu: goto label_1de81c;
        case 0x1de820u: goto label_1de820;
        case 0x1de824u: goto label_1de824;
        case 0x1de828u: goto label_1de828;
        case 0x1de82cu: goto label_1de82c;
        case 0x1de830u: goto label_1de830;
        case 0x1de834u: goto label_1de834;
        case 0x1de838u: goto label_1de838;
        case 0x1de83cu: goto label_1de83c;
        case 0x1de840u: goto label_1de840;
        case 0x1de844u: goto label_1de844;
        case 0x1de848u: goto label_1de848;
        case 0x1de84cu: goto label_1de84c;
        case 0x1de850u: goto label_1de850;
        case 0x1de854u: goto label_1de854;
        case 0x1de858u: goto label_1de858;
        case 0x1de85cu: goto label_1de85c;
        case 0x1de860u: goto label_1de860;
        case 0x1de864u: goto label_1de864;
        case 0x1de868u: goto label_1de868;
        case 0x1de86cu: goto label_1de86c;
        case 0x1de870u: goto label_1de870;
        case 0x1de874u: goto label_1de874;
        case 0x1de878u: goto label_1de878;
        case 0x1de87cu: goto label_1de87c;
        case 0x1de880u: goto label_1de880;
        case 0x1de884u: goto label_1de884;
        case 0x1de888u: goto label_1de888;
        case 0x1de88cu: goto label_1de88c;
        case 0x1de890u: goto label_1de890;
        case 0x1de894u: goto label_1de894;
        case 0x1de898u: goto label_1de898;
        case 0x1de89cu: goto label_1de89c;
        case 0x1de8a0u: goto label_1de8a0;
        case 0x1de8a4u: goto label_1de8a4;
        case 0x1de8a8u: goto label_1de8a8;
        case 0x1de8acu: goto label_1de8ac;
        case 0x1de8b0u: goto label_1de8b0;
        case 0x1de8b4u: goto label_1de8b4;
        case 0x1de8b8u: goto label_1de8b8;
        case 0x1de8bcu: goto label_1de8bc;
        case 0x1de8c0u: goto label_1de8c0;
        case 0x1de8c4u: goto label_1de8c4;
        case 0x1de8c8u: goto label_1de8c8;
        case 0x1de8ccu: goto label_1de8cc;
        case 0x1de8d0u: goto label_1de8d0;
        case 0x1de8d4u: goto label_1de8d4;
        case 0x1de8d8u: goto label_1de8d8;
        case 0x1de8dcu: goto label_1de8dc;
        case 0x1de8e0u: goto label_1de8e0;
        case 0x1de8e4u: goto label_1de8e4;
        case 0x1de8e8u: goto label_1de8e8;
        case 0x1de8ecu: goto label_1de8ec;
        case 0x1de8f0u: goto label_1de8f0;
        case 0x1de8f4u: goto label_1de8f4;
        case 0x1de8f8u: goto label_1de8f8;
        case 0x1de8fcu: goto label_1de8fc;
        case 0x1de900u: goto label_1de900;
        case 0x1de904u: goto label_1de904;
        case 0x1de908u: goto label_1de908;
        case 0x1de90cu: goto label_1de90c;
        case 0x1de910u: goto label_1de910;
        case 0x1de914u: goto label_1de914;
        case 0x1de918u: goto label_1de918;
        case 0x1de91cu: goto label_1de91c;
        case 0x1de920u: goto label_1de920;
        case 0x1de924u: goto label_1de924;
        case 0x1de928u: goto label_1de928;
        case 0x1de92cu: goto label_1de92c;
        case 0x1de930u: goto label_1de930;
        case 0x1de934u: goto label_1de934;
        case 0x1de938u: goto label_1de938;
        case 0x1de93cu: goto label_1de93c;
        case 0x1de940u: goto label_1de940;
        case 0x1de944u: goto label_1de944;
        case 0x1de948u: goto label_1de948;
        case 0x1de94cu: goto label_1de94c;
        case 0x1de950u: goto label_1de950;
        case 0x1de954u: goto label_1de954;
        case 0x1de958u: goto label_1de958;
        case 0x1de95cu: goto label_1de95c;
        case 0x1de960u: goto label_1de960;
        case 0x1de964u: goto label_1de964;
        case 0x1de968u: goto label_1de968;
        case 0x1de96cu: goto label_1de96c;
        case 0x1de970u: goto label_1de970;
        case 0x1de974u: goto label_1de974;
        case 0x1de978u: goto label_1de978;
        case 0x1de97cu: goto label_1de97c;
        case 0x1de980u: goto label_1de980;
        case 0x1de984u: goto label_1de984;
        case 0x1de988u: goto label_1de988;
        case 0x1de98cu: goto label_1de98c;
        case 0x1de990u: goto label_1de990;
        case 0x1de994u: goto label_1de994;
        case 0x1de998u: goto label_1de998;
        case 0x1de99cu: goto label_1de99c;
        case 0x1de9a0u: goto label_1de9a0;
        case 0x1de9a4u: goto label_1de9a4;
        case 0x1de9a8u: goto label_1de9a8;
        case 0x1de9acu: goto label_1de9ac;
        case 0x1de9b0u: goto label_1de9b0;
        case 0x1de9b4u: goto label_1de9b4;
        case 0x1de9b8u: goto label_1de9b8;
        case 0x1de9bcu: goto label_1de9bc;
        case 0x1de9c0u: goto label_1de9c0;
        case 0x1de9c4u: goto label_1de9c4;
        case 0x1de9c8u: goto label_1de9c8;
        case 0x1de9ccu: goto label_1de9cc;
        case 0x1de9d0u: goto label_1de9d0;
        case 0x1de9d4u: goto label_1de9d4;
        case 0x1de9d8u: goto label_1de9d8;
        case 0x1de9dcu: goto label_1de9dc;
        case 0x1de9e0u: goto label_1de9e0;
        case 0x1de9e4u: goto label_1de9e4;
        case 0x1de9e8u: goto label_1de9e8;
        case 0x1de9ecu: goto label_1de9ec;
        case 0x1de9f0u: goto label_1de9f0;
        case 0x1de9f4u: goto label_1de9f4;
        case 0x1de9f8u: goto label_1de9f8;
        case 0x1de9fcu: goto label_1de9fc;
        case 0x1dea00u: goto label_1dea00;
        case 0x1dea04u: goto label_1dea04;
        case 0x1dea08u: goto label_1dea08;
        case 0x1dea0cu: goto label_1dea0c;
        case 0x1dea10u: goto label_1dea10;
        case 0x1dea14u: goto label_1dea14;
        case 0x1dea18u: goto label_1dea18;
        case 0x1dea1cu: goto label_1dea1c;
        case 0x1dea20u: goto label_1dea20;
        case 0x1dea24u: goto label_1dea24;
        case 0x1dea28u: goto label_1dea28;
        case 0x1dea2cu: goto label_1dea2c;
        case 0x1dea30u: goto label_1dea30;
        case 0x1dea34u: goto label_1dea34;
        case 0x1dea38u: goto label_1dea38;
        case 0x1dea3cu: goto label_1dea3c;
        case 0x1dea40u: goto label_1dea40;
        case 0x1dea44u: goto label_1dea44;
        case 0x1dea48u: goto label_1dea48;
        case 0x1dea4cu: goto label_1dea4c;
        case 0x1dea50u: goto label_1dea50;
        case 0x1dea54u: goto label_1dea54;
        case 0x1dea58u: goto label_1dea58;
        case 0x1dea5cu: goto label_1dea5c;
        case 0x1dea60u: goto label_1dea60;
        case 0x1dea64u: goto label_1dea64;
        case 0x1dea68u: goto label_1dea68;
        case 0x1dea6cu: goto label_1dea6c;
        case 0x1dea70u: goto label_1dea70;
        case 0x1dea74u: goto label_1dea74;
        case 0x1dea78u: goto label_1dea78;
        case 0x1dea7cu: goto label_1dea7c;
        case 0x1dea80u: goto label_1dea80;
        case 0x1dea84u: goto label_1dea84;
        case 0x1dea88u: goto label_1dea88;
        case 0x1dea8cu: goto label_1dea8c;
        case 0x1dea90u: goto label_1dea90;
        case 0x1dea94u: goto label_1dea94;
        case 0x1dea98u: goto label_1dea98;
        case 0x1dea9cu: goto label_1dea9c;
        case 0x1deaa0u: goto label_1deaa0;
        case 0x1deaa4u: goto label_1deaa4;
        case 0x1deaa8u: goto label_1deaa8;
        case 0x1deaacu: goto label_1deaac;
        case 0x1deab0u: goto label_1deab0;
        case 0x1deab4u: goto label_1deab4;
        case 0x1deab8u: goto label_1deab8;
        case 0x1deabcu: goto label_1deabc;
        case 0x1deac0u: goto label_1deac0;
        case 0x1deac4u: goto label_1deac4;
        case 0x1deac8u: goto label_1deac8;
        case 0x1deaccu: goto label_1deacc;
        case 0x1dead0u: goto label_1dead0;
        case 0x1dead4u: goto label_1dead4;
        case 0x1dead8u: goto label_1dead8;
        case 0x1deadcu: goto label_1deadc;
        case 0x1deae0u: goto label_1deae0;
        case 0x1deae4u: goto label_1deae4;
        case 0x1deae8u: goto label_1deae8;
        case 0x1deaecu: goto label_1deaec;
        case 0x1deaf0u: goto label_1deaf0;
        case 0x1deaf4u: goto label_1deaf4;
        case 0x1deaf8u: goto label_1deaf8;
        case 0x1deafcu: goto label_1deafc;
        case 0x1deb00u: goto label_1deb00;
        case 0x1deb04u: goto label_1deb04;
        case 0x1deb08u: goto label_1deb08;
        case 0x1deb0cu: goto label_1deb0c;
        case 0x1deb10u: goto label_1deb10;
        case 0x1deb14u: goto label_1deb14;
        case 0x1deb18u: goto label_1deb18;
        case 0x1deb1cu: goto label_1deb1c;
        case 0x1deb20u: goto label_1deb20;
        case 0x1deb24u: goto label_1deb24;
        case 0x1deb28u: goto label_1deb28;
        case 0x1deb2cu: goto label_1deb2c;
        case 0x1deb30u: goto label_1deb30;
        case 0x1deb34u: goto label_1deb34;
        case 0x1deb38u: goto label_1deb38;
        case 0x1deb3cu: goto label_1deb3c;
        case 0x1deb40u: goto label_1deb40;
        case 0x1deb44u: goto label_1deb44;
        case 0x1deb48u: goto label_1deb48;
        case 0x1deb4cu: goto label_1deb4c;
        case 0x1deb50u: goto label_1deb50;
        case 0x1deb54u: goto label_1deb54;
        case 0x1deb58u: goto label_1deb58;
        case 0x1deb5cu: goto label_1deb5c;
        case 0x1deb60u: goto label_1deb60;
        case 0x1deb64u: goto label_1deb64;
        case 0x1deb68u: goto label_1deb68;
        case 0x1deb6cu: goto label_1deb6c;
        case 0x1deb70u: goto label_1deb70;
        case 0x1deb74u: goto label_1deb74;
        case 0x1deb78u: goto label_1deb78;
        case 0x1deb7cu: goto label_1deb7c;
        case 0x1deb80u: goto label_1deb80;
        case 0x1deb84u: goto label_1deb84;
        case 0x1deb88u: goto label_1deb88;
        case 0x1deb8cu: goto label_1deb8c;
        case 0x1deb90u: goto label_1deb90;
        case 0x1deb94u: goto label_1deb94;
        case 0x1deb98u: goto label_1deb98;
        case 0x1deb9cu: goto label_1deb9c;
        case 0x1deba0u: goto label_1deba0;
        case 0x1deba4u: goto label_1deba4;
        case 0x1deba8u: goto label_1deba8;
        case 0x1debacu: goto label_1debac;
        case 0x1debb0u: goto label_1debb0;
        case 0x1debb4u: goto label_1debb4;
        case 0x1debb8u: goto label_1debb8;
        case 0x1debbcu: goto label_1debbc;
        case 0x1debc0u: goto label_1debc0;
        case 0x1debc4u: goto label_1debc4;
        case 0x1debc8u: goto label_1debc8;
        case 0x1debccu: goto label_1debcc;
        case 0x1debd0u: goto label_1debd0;
        case 0x1debd4u: goto label_1debd4;
        case 0x1debd8u: goto label_1debd8;
        case 0x1debdcu: goto label_1debdc;
        case 0x1debe0u: goto label_1debe0;
        case 0x1debe4u: goto label_1debe4;
        case 0x1debe8u: goto label_1debe8;
        case 0x1debecu: goto label_1debec;
        case 0x1debf0u: goto label_1debf0;
        case 0x1debf4u: goto label_1debf4;
        case 0x1debf8u: goto label_1debf8;
        case 0x1debfcu: goto label_1debfc;
        case 0x1dec00u: goto label_1dec00;
        case 0x1dec04u: goto label_1dec04;
        case 0x1dec08u: goto label_1dec08;
        case 0x1dec0cu: goto label_1dec0c;
        case 0x1dec10u: goto label_1dec10;
        case 0x1dec14u: goto label_1dec14;
        case 0x1dec18u: goto label_1dec18;
        case 0x1dec1cu: goto label_1dec1c;
        case 0x1dec20u: goto label_1dec20;
        case 0x1dec24u: goto label_1dec24;
        case 0x1dec28u: goto label_1dec28;
        case 0x1dec2cu: goto label_1dec2c;
        case 0x1dec30u: goto label_1dec30;
        case 0x1dec34u: goto label_1dec34;
        default: return;
    }

label_1de468:
    // 0x1de468: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1de468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1de46c:
    // 0x1de46c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1de46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1de470:
    // 0x1de470: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1de470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1de474:
    // 0x1de474: 0xa0a400a9  sb          $a0, 0xA9($a1)
    ctx->pc = 0x1de474u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 4));
label_1de478:
    // 0x1de478: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1de478u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
label_1de47c:
    // 0x1de47c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de480:
    if (ctx->pc == 0x1DE480u) {
        ctx->pc = 0x1DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE47Cu;
        // 0x1de480: 0xa0a40089  sb          $a0, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE484u;
        goto label_1de484;
    }
    ctx->pc = 0x1DE47Cu;
    {
        const bool branch_taken_0x1de47c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE47Cu;
        // 0x1de480: 0xa0a40089  sb          $a0, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de47c) {
            ctx->pc = 0x1DE48Cu;
            goto label_1de48c;
        }
    }
    ctx->pc = 0x1DE484u;
label_1de484:
    // 0x1de484: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1de484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1de488:
    // 0x1de488: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1de488u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1de48c:
    // 0x1de48c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1de48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1de490:
    // 0x1de490: 0xa0a200aa  sb          $v0, 0xAA($a1)
    ctx->pc = 0x1de490u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 2));
label_1de494:
    // 0x1de494: 0x10000026  b           . + 4 + (0x26 << 2)
label_1de498:
    if (ctx->pc == 0x1DE498u) {
        ctx->pc = 0x1DE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE494u;
        // 0x1de498: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE49Cu;
        goto label_1de49c;
    }
    ctx->pc = 0x1DE494u;
    {
        const bool branch_taken_0x1de494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE494u;
        // 0x1de498: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de494) {
            ctx->pc = 0x1DE530u;
            goto label_1de530;
        }
    }
    ctx->pc = 0x1DE49Cu;
label_1de49c:
    // 0x1de49c: 0x0  nop
    ctx->pc = 0x1de49cu;
    // NOP
label_1de4a0:
    // 0x1de4a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1de4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1de4a4:
    // 0x1de4a4: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x1de4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1de4a8:
    // 0x1de4a8: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x1de4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
label_1de4ac:
    // 0x1de4ac: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x1de4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1de4b0:
    // 0x1de4b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de4b4:
    if (ctx->pc == 0x1DE4B4u) {
        ctx->pc = 0x1DE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4B0u;
        // 0x1de4b4: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4B8u;
        goto label_1de4b8;
    }
    ctx->pc = 0x1DE4B0u;
    {
        const bool branch_taken_0x1de4b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4B0u;
        // 0x1de4b4: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4b0) {
            ctx->pc = 0x1DE4C0u;
            goto label_1de4c0;
        }
    }
    ctx->pc = 0x1DE4B8u;
label_1de4b8:
    // 0x1de4b8: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1de4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1de4bc:
    // 0x1de4bc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1de4bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1de4c0:
    // 0x1de4c0: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x1de4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1de4c4:
    // 0x1de4c4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1de4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1de4c8:
    // 0x1de4c8: 0xa0a300a8  sb          $v1, 0xA8($a1)
    ctx->pc = 0x1de4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 3));
label_1de4cc:
    // 0x1de4cc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1de4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1de4d0:
    // 0x1de4d0: 0xa0a30088  sb          $v1, 0x88($a1)
    ctx->pc = 0x1de4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 3));
label_1de4d4:
    // 0x1de4d4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1de4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1de4d8:
    // 0x1de4d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de4dc:
    if (ctx->pc == 0x1DE4DCu) {
        ctx->pc = 0x1DE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4D8u;
        // 0x1de4dc: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE4E0u;
        goto label_1de4e0;
    }
    ctx->pc = 0x1DE4D8u;
    {
        const bool branch_taken_0x1de4d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4D8u;
        // 0x1de4dc: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4d8) {
            ctx->pc = 0x1DE4E8u;
            goto label_1de4e8;
        }
    }
    ctx->pc = 0x1DE4E0u;
label_1de4e0:
    // 0x1de4e0: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1de4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1de4e4:
    // 0x1de4e4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1de4e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1de4e8:
    // 0x1de4e8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1de4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1de4ec:
    // 0x1de4ec: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1de4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1de4f0:
    // 0x1de4f0: 0xa0a400a9  sb          $a0, 0xA9($a1)
    ctx->pc = 0x1de4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 4));
label_1de4f4:
    // 0x1de4f4: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1de4f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
label_1de4f8:
    // 0x1de4f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1de4fc:
    if (ctx->pc == 0x1DE4FCu) {
        ctx->pc = 0x1DE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F8u;
        // 0x1de4fc: 0xa0a40089  sb          $a0, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE500u;
        goto label_1de500;
    }
    ctx->pc = 0x1DE4F8u;
    {
        const bool branch_taken_0x1de4f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F8u;
        // 0x1de4fc: 0xa0a40089  sb          $a0, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4f8) {
            ctx->pc = 0x1DE508u;
            goto label_1de508;
        }
    }
    ctx->pc = 0x1DE500u;
label_1de500:
    // 0x1de500: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1de500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1de504:
    // 0x1de504: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1de504u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1de508:
    // 0x1de508: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1de508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1de50c:
    // 0x1de50c: 0xa0a200aa  sb          $v0, 0xAA($a1)
    ctx->pc = 0x1de50cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 2));
label_1de510:
    // 0x1de510: 0x10000007  b           . + 4 + (0x7 << 2)
label_1de514:
    if (ctx->pc == 0x1DE514u) {
        ctx->pc = 0x1DE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE510u;
        // 0x1de514: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE518u;
        goto label_1de518;
    }
    ctx->pc = 0x1DE510u;
    {
        const bool branch_taken_0x1de510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE510u;
        // 0x1de514: 0xa0a2008a  sb          $v0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de510) {
            ctx->pc = 0x1DE530u;
            goto label_1de530;
        }
    }
    ctx->pc = 0x1DE518u;
label_1de518:
    // 0x1de518: 0xa0a000a8  sb          $zero, 0xA8($a1)
    ctx->pc = 0x1de518u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 0));
label_1de51c:
    // 0x1de51c: 0xa0a00088  sb          $zero, 0x88($a1)
    ctx->pc = 0x1de51cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 0));
label_1de520:
    // 0x1de520: 0xa0a000a9  sb          $zero, 0xA9($a1)
    ctx->pc = 0x1de520u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 0));
label_1de524:
    // 0x1de524: 0xa0a00089  sb          $zero, 0x89($a1)
    ctx->pc = 0x1de524u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 0));
label_1de528:
    // 0x1de528: 0xa0a000aa  sb          $zero, 0xAA($a1)
    ctx->pc = 0x1de528u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 0));
label_1de52c:
    // 0x1de52c: 0xa0a0008a  sb          $zero, 0x8A($a1)
    ctx->pc = 0x1de52cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 0));
label_1de530:
    // 0x1de530: 0x8f828ca0  lw          $v0, -0x7360($gp)
    ctx->pc = 0x1de530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1de534:
    // 0x1de534: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1de538:
    if (ctx->pc == 0x1DE538u) {
        ctx->pc = 0x1DE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE534u;
        // 0x1de538: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE53Cu;
        goto label_1de53c;
    }
    ctx->pc = 0x1DE534u;
    {
        const bool branch_taken_0x1de534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE534u;
        // 0x1de538: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de534) {
            ctx->pc = 0x1DE574u;
            goto label_1de574;
        }
    }
    ctx->pc = 0x1DE53Cu;
label_1de53c:
    // 0x1de53c: 0x8f838c9c  lw          $v1, -0x7364($gp)
    ctx->pc = 0x1de53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1de540:
    // 0x1de540: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1de540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1de544:
    // 0x1de544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de548:
    // 0x1de548: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1de548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1de54c:
    // 0x1de54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de550:
    // 0x1de550: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1de550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1de554:
    // 0x1de554: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1de558:
    if (ctx->pc == 0x1DE558u) {
        ctx->pc = 0x1DE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE554u;
        // 0x1de558: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE55Cu;
        goto label_1de55c;
    }
    ctx->pc = 0x1DE554u;
    {
        const bool branch_taken_0x1de554 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE554u;
        // 0x1de558: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de554) {
            ctx->pc = 0x1DE564u;
            goto label_1de564;
        }
    }
    ctx->pc = 0x1DE55Cu;
label_1de55c:
    // 0x1de55c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1de55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1de560:
    // 0x1de560: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1de560u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_1de564:
    // 0x1de564: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x1de564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_1de568:
    // 0x1de568: 0x10000002  b           . + 4 + (0x2 << 2)
label_1de56c:
    if (ctx->pc == 0x1DE56Cu) {
        ctx->pc = 0x1DE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE568u;
        // 0x1de56c: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE570u;
        goto label_1de570;
    }
    ctx->pc = 0x1DE568u;
    {
        const bool branch_taken_0x1de568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE568u;
        // 0x1de56c: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de568) {
            ctx->pc = 0x1DE574u;
            goto label_1de574;
        }
    }
    ctx->pc = 0x1DE570u;
label_1de570:
    // 0x1de570: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1de570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de574:
    // 0x1de574: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1de574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1de578:
    // 0x1de578: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x1de578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_1de57c:
    // 0x1de57c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1de57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1de580:
    // 0x1de580: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1de580u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1de584:
    // 0x1de584: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1de584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1de588:
    // 0x1de588: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1de588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1de58c:
    // 0x1de58c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1de58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1de590:
    // 0x1de590: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1de590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1de594:
    // 0x1de594: 0xa4a30140  sh          $v1, 0x140($a1)
    ctx->pc = 0x1de594u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 3));
label_1de598:
    // 0x1de598: 0xa4a20150  sh          $v0, 0x150($a1)
    ctx->pc = 0x1de598u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 336), (uint16_t)GPR_U32(ctx, 2));
label_1de59c:
    // 0x1de59c: 0x8f868ca0  lw          $a2, -0x7360($gp)
    ctx->pc = 0x1de59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1de5a0:
    // 0x1de5a0: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
label_1de5a4:
    if (ctx->pc == 0x1DE5A4u) {
        ctx->pc = 0x1DE5A8u;
        goto label_1de5a8;
    }
    ctx->pc = 0x1DE5A0u;
    {
        const bool branch_taken_0x1de5a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de5a0) {
            ctx->pc = 0x1DE5C8u;
            goto label_1de5c8;
        }
    }
    ctx->pc = 0x1DE5A8u;
label_1de5a8:
    // 0x1de5a8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1de5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1de5ac:
    // 0x1de5ac: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1de5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1de5b0:
    // 0x1de5b0: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
label_1de5b4:
    if (ctx->pc == 0x1DE5B4u) {
        ctx->pc = 0x1DE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5B0u;
        // 0x1de5b4: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5B8u;
        goto label_1de5b8;
    }
    ctx->pc = 0x1DE5B0u;
    {
        const bool branch_taken_0x1de5b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5B0u;
        // 0x1de5b4: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5b0) {
            ctx->pc = 0x1DE5FCu;
            goto label_1de5fc;
        }
    }
    ctx->pc = 0x1DE5B8u;
label_1de5b8:
    // 0x1de5b8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1de5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1de5bc:
    // 0x1de5bc: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x1de5bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_1de5c0:
    // 0x1de5c0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1de5c4:
    if (ctx->pc == 0x1DE5C4u) {
        ctx->pc = 0x1DE5C8u;
        goto label_1de5c8;
    }
    ctx->pc = 0x1DE5C0u;
    {
        const bool branch_taken_0x1de5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de5c0) {
            ctx->pc = 0x1DE5FCu;
            goto label_1de5fc;
        }
    }
    ctx->pc = 0x1DE5C8u;
label_1de5c8:
    // 0x1de5c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1de5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1de5cc:
    // 0x1de5cc: 0x14c2000a  bne         $a2, $v0, . + 4 + (0xA << 2)
label_1de5d0:
    if (ctx->pc == 0x1DE5D0u) {
        ctx->pc = 0x1DE5D4u;
        goto label_1de5d4;
    }
    ctx->pc = 0x1DE5CCu;
    {
        const bool branch_taken_0x1de5cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de5cc) {
            ctx->pc = 0x1DE5F8u;
            goto label_1de5f8;
        }
    }
    ctx->pc = 0x1DE5D4u;
label_1de5d4:
    // 0x1de5d4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1de5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1de5d8:
    // 0x1de5d8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1de5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1de5dc:
    // 0x1de5dc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1de5e0:
    if (ctx->pc == 0x1DE5E0u) {
        ctx->pc = 0x1DE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5DCu;
        // 0x1de5e0: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5E4u;
        goto label_1de5e4;
    }
    ctx->pc = 0x1DE5DCu;
    {
        const bool branch_taken_0x1de5dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5DCu;
        // 0x1de5e0: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5dc) {
            ctx->pc = 0x1DE5ECu;
            goto label_1de5ec;
        }
    }
    ctx->pc = 0x1DE5E4u;
label_1de5e4:
    // 0x1de5e4: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1de5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1de5e8:
    // 0x1de5e8: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1de5e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1de5ec:
    // 0x1de5ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1de5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1de5f0:
    // 0x1de5f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1de5f4:
    if (ctx->pc == 0x1DE5F4u) {
        ctx->pc = 0x1DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5F0u;
        // 0x1de5f4: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5F8u;
        goto label_1de5f8;
    }
    ctx->pc = 0x1DE5F0u;
    {
        const bool branch_taken_0x1de5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5F0u;
        // 0x1de5f4: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5f0) {
            ctx->pc = 0x1DE5FCu;
            goto label_1de5fc;
        }
    }
    ctx->pc = 0x1DE5F8u;
label_1de5f8:
    // 0x1de5f8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1de5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1de5fc:
    // 0x1de5fc: 0x0  nop
    ctx->pc = 0x1de5fcu;
    // NOP
label_1de600:
    // 0x1de600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de604:
    // 0x1de604: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_1de608:
    if (ctx->pc == 0x1DE608u) {
        ctx->pc = 0x1DE60Cu;
        goto label_1de60c;
    }
    ctx->pc = 0x1DE604u;
    {
        const bool branch_taken_0x1de604 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de604) {
            ctx->pc = 0x1DE618u;
            goto label_1de618;
        }
    }
    ctx->pc = 0x1DE60Cu;
label_1de60c:
    // 0x1de60c: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x1de60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
label_1de610:
    // 0x1de610: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
label_1de614:
    if (ctx->pc == 0x1DE614u) {
        ctx->pc = 0x1DE618u;
        goto label_1de618;
    }
    ctx->pc = 0x1DE610u;
    {
        const bool branch_taken_0x1de610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1de610) {
            ctx->pc = 0x1DE630u;
            goto label_1de630;
        }
    }
    ctx->pc = 0x1DE618u;
label_1de618:
    // 0x1de618: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de61c:
    // 0x1de61c: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
label_1de620:
    if (ctx->pc == 0x1DE620u) {
        ctx->pc = 0x1DE624u;
        goto label_1de624;
    }
    ctx->pc = 0x1DE61Cu;
    {
        const bool branch_taken_0x1de61c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de61c) {
            ctx->pc = 0x1DE650u;
            goto label_1de650;
        }
    }
    ctx->pc = 0x1DE624u;
label_1de624:
    // 0x1de624: 0x8f828c98  lw          $v0, -0x7368($gp)
    ctx->pc = 0x1de624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
label_1de628:
    // 0x1de628: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
label_1de62c:
    if (ctx->pc == 0x1DE62Cu) {
        ctx->pc = 0x1DE630u;
        goto label_1de630;
    }
    ctx->pc = 0x1DE628u;
    {
        const bool branch_taken_0x1de628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1de628) {
            ctx->pc = 0x1DE650u;
            goto label_1de650;
        }
    }
    ctx->pc = 0x1DE630u;
label_1de630:
    // 0x1de630: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1de630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1de634:
    // 0x1de634: 0xa0a30130  sb          $v1, 0x130($a1)
    ctx->pc = 0x1de634u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 304), (uint8_t)GPR_U32(ctx, 3));
label_1de638:
    // 0x1de638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1de638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1de63c:
    // 0x1de63c: 0xa0a30131  sb          $v1, 0x131($a1)
    ctx->pc = 0x1de63cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 305), (uint8_t)GPR_U32(ctx, 3));
label_1de640:
    // 0x1de640: 0xa0a30132  sb          $v1, 0x132($a1)
    ctx->pc = 0x1de640u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 306), (uint8_t)GPR_U32(ctx, 3));
label_1de644:
    // 0x1de644: 0xa0a40133  sb          $a0, 0x133($a1)
    ctx->pc = 0x1de644u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 307), (uint8_t)GPR_U32(ctx, 4));
label_1de648:
    // 0x1de648: 0x10000008  b           . + 4 + (0x8 << 2)
label_1de64c:
    if (ctx->pc == 0x1DE64Cu) {
        ctx->pc = 0x1DE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE648u;
        // 0x1de64c: 0xaca20134  sw          $v0, 0x134($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE650u;
        goto label_1de650;
    }
    ctx->pc = 0x1DE648u;
    {
        const bool branch_taken_0x1de648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE648u;
        // 0x1de64c: 0xaca20134  sw          $v0, 0x134($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de648) {
            ctx->pc = 0x1DE66Cu;
            goto label_1de66c;
        }
    }
    ctx->pc = 0x1DE650u;
label_1de650:
    // 0x1de650: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1de650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1de654:
    // 0x1de654: 0xa0a30130  sb          $v1, 0x130($a1)
    ctx->pc = 0x1de654u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 304), (uint8_t)GPR_U32(ctx, 3));
label_1de658:
    // 0x1de658: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1de658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1de65c:
    // 0x1de65c: 0xa0a30131  sb          $v1, 0x131($a1)
    ctx->pc = 0x1de65cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 305), (uint8_t)GPR_U32(ctx, 3));
label_1de660:
    // 0x1de660: 0xa0a30132  sb          $v1, 0x132($a1)
    ctx->pc = 0x1de660u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 306), (uint8_t)GPR_U32(ctx, 3));
label_1de664:
    // 0x1de664: 0xa0a40133  sb          $a0, 0x133($a1)
    ctx->pc = 0x1de664u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 307), (uint8_t)GPR_U32(ctx, 4));
label_1de668:
    // 0x1de668: 0xaca20134  sw          $v0, 0x134($a1)
    ctx->pc = 0x1de668u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
label_1de66c:
    // 0x1de66c: 0x0  nop
    ctx->pc = 0x1de66cu;
    // NOP
label_1de670:
    // 0x1de670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1de674:
    // 0x1de674: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1de674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1de678:
    // 0x1de678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1de678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de67c:
    // 0x1de67c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1de67cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de680:
    // 0x1de680: 0xc066c72  jal         func_19B1C8
label_1de684:
    if (ctx->pc == 0x1DE684u) {
        ctx->pc = 0x1DE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE680u;
        // 0x1de684: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE688u;
        goto label_1de688;
    }
    ctx->pc = 0x1DE680u;
    SET_GPR_U32(ctx, 31, 0x1DE688u);
    ctx->pc = 0x1DE684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE680u;
    // 0x1de684: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DE680u, 0x1DE688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE688u;
label_1de688:
    // 0x1de688: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1de688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1de68c:
    // 0x1de68c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1de68cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1de690:
    // 0x1de690: 0x1460feed  bnez        $v1, . + 4 + (-0x113 << 2)
label_1de694:
    if (ctx->pc == 0x1DE694u) {
        ctx->pc = 0x1DE694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE690u;
        // 0x1de694: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE698u;
        goto label_1de698;
    }
    ctx->pc = 0x1DE690u;
    {
        const bool branch_taken_0x1de690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE690u;
        // 0x1de694: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de690) {
            ctx->pc = 0x1DE248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1de248; return; }
        }
    }
    ctx->pc = 0x1DE698u;
label_1de698:
    // 0x1de698: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1de698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1de69c:
    // 0x1de69c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1de69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1de6a0:
    // 0x1de6a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de6a4:
    // 0x1de6a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1de6a8:
    // 0x1de6a8: 0x3e00008  jr          $ra
label_1de6ac:
    if (ctx->pc == 0x1DE6ACu) {
        ctx->pc = 0x1DE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6A8u;
        // 0x1de6ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE6B0u;
        goto label_1de6b0;
    }
    ctx->pc = 0x1DE6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6A8u;
        // 0x1de6ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE6B0u;
label_1de6b0:
    // 0x1de6b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1de6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1de6b4:
    // 0x1de6b4: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1de6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1de6b8:
    // 0x1de6b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1de6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1de6bc:
    // 0x1de6bc: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de6c0:
    // 0x1de6c0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1de6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1de6c4:
    // 0x1de6c4: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1de6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1de6c8:
    // 0x1de6c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1de6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1de6cc:
    // 0x1de6cc: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x1de6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1de6d0:
    // 0x1de6d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1de6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1de6d4:
    // 0x1de6d4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1de6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1de6d8:
    // 0x1de6d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1de6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1de6dc:
    // 0x1de6dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1de6dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de6e0:
    // 0x1de6e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1de6e4:
    // 0x1de6e4: 0xaf8281fc  sw          $v0, -0x7E04($gp)
    ctx->pc = 0x1de6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935036), GPR_U32(ctx, 2));
label_1de6e8:
    // 0x1de6e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1de6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de6ec:
    // 0x1de6ec: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x1de6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1de6f0:
    // 0x1de6f0: 0xac2005a0  sw          $zero, 0x5A0($at)
    ctx->pc = 0x1de6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1440), GPR_U32(ctx, 0));
label_1de6f4:
    // 0x1de6f4: 0xaf828200  sw          $v0, -0x7E00($gp)
    ctx->pc = 0x1de6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935040), GPR_U32(ctx, 2));
label_1de6f8:
    // 0x1de6f8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de6fc:
    // 0x1de6fc: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1de6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1de700:
    // 0x1de700: 0xac2505a4  sw          $a1, 0x5A4($at)
    ctx->pc = 0x1de700u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1444), GPR_U32(ctx, 5));
label_1de704:
    // 0x1de704: 0xaf828204  sw          $v0, -0x7DFC($gp)
    ctx->pc = 0x1de704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935044), GPR_U32(ctx, 2));
label_1de708:
    // 0x1de708: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de70c:
    // 0x1de70c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1de70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1de710:
    // 0x1de710: 0xac2405a8  sw          $a0, 0x5A8($at)
    ctx->pc = 0x1de710u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1448), GPR_U32(ctx, 4));
label_1de714:
    // 0x1de714: 0xaf828208  sw          $v0, -0x7DF8($gp)
    ctx->pc = 0x1de714u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935048), GPR_U32(ctx, 2));
label_1de718:
    // 0x1de718: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de71c:
    // 0x1de71c: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x1de71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1de720:
    // 0x1de720: 0xac2305ac  sw          $v1, 0x5AC($at)
    ctx->pc = 0x1de720u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1452), GPR_U32(ctx, 3));
label_1de724:
    // 0x1de724: 0xaf82820c  sw          $v0, -0x7DF4($gp)
    ctx->pc = 0x1de724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935052), GPR_U32(ctx, 2));
label_1de728:
    // 0x1de728: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de72c:
    // 0x1de72c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1de72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1de730:
    // 0x1de730: 0xaf808ca4  sw          $zero, -0x735C($gp)
    ctx->pc = 0x1de730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937764), GPR_U32(ctx, 0));
label_1de734:
    // 0x1de734: 0xaf828210  sw          $v0, -0x7DF0($gp)
    ctx->pc = 0x1de734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935056), GPR_U32(ctx, 2));
label_1de738:
    // 0x1de738: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1de738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1de73c:
    // 0x1de73c: 0xaf828214  sw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1de73cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
label_1de740:
    // 0x1de740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de744:
    // 0x1de744: 0xac2205b0  sw          $v0, 0x5B0($at)
    ctx->pc = 0x1de744u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1456), GPR_U32(ctx, 2));
label_1de748:
    // 0x1de748: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de74c:
    // 0x1de74c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de750:
    // 0x1de750: 0xac2205c0  sw          $v0, 0x5C0($at)
    ctx->pc = 0x1de750u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1472), GPR_U32(ctx, 2));
label_1de754:
    // 0x1de754: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1de754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1de758:
    // 0x1de758: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de75c:
    // 0x1de75c: 0xac2205d0  sw          $v0, 0x5D0($at)
    ctx->pc = 0x1de75cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1488), GPR_U32(ctx, 2));
label_1de760:
    // 0x1de760: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1de760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1de764:
    // 0x1de764: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de768:
    // 0x1de768: 0xac2205e0  sw          $v0, 0x5E0($at)
    ctx->pc = 0x1de768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1504), GPR_U32(ctx, 2));
label_1de76c:
    // 0x1de76c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1de76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1de770:
    // 0x1de770: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de774:
    // 0x1de774: 0xac2205f0  sw          $v0, 0x5F0($at)
    ctx->pc = 0x1de774u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1520), GPR_U32(ctx, 2));
label_1de778:
    // 0x1de778: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1de778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1de77c:
    // 0x1de77c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de780:
    // 0x1de780: 0xac220600  sw          $v0, 0x600($at)
    ctx->pc = 0x1de780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1536), GPR_U32(ctx, 2));
label_1de784:
    // 0x1de784: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1de784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1de788:
    // 0x1de788: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de78c:
    // 0x1de78c: 0xac220610  sw          $v0, 0x610($at)
    ctx->pc = 0x1de78cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1552), GPR_U32(ctx, 2));
label_1de790:
    // 0x1de790: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de794:
    // 0x1de794: 0xac2505b4  sw          $a1, 0x5B4($at)
    ctx->pc = 0x1de794u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1460), GPR_U32(ctx, 5));
label_1de798:
    // 0x1de798: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de79c:
    // 0x1de79c: 0xac2405b8  sw          $a0, 0x5B8($at)
    ctx->pc = 0x1de79cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1464), GPR_U32(ctx, 4));
label_1de7a0:
    // 0x1de7a0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7a4:
    // 0x1de7a4: 0xac2305bc  sw          $v1, 0x5BC($at)
    ctx->pc = 0x1de7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1468), GPR_U32(ctx, 3));
label_1de7a8:
    // 0x1de7a8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7ac:
    // 0x1de7ac: 0xac2505c4  sw          $a1, 0x5C4($at)
    ctx->pc = 0x1de7acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1476), GPR_U32(ctx, 5));
label_1de7b0:
    // 0x1de7b0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7b4:
    // 0x1de7b4: 0xac2405c8  sw          $a0, 0x5C8($at)
    ctx->pc = 0x1de7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1480), GPR_U32(ctx, 4));
label_1de7b8:
    // 0x1de7b8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7bc:
    // 0x1de7bc: 0xac2305cc  sw          $v1, 0x5CC($at)
    ctx->pc = 0x1de7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1484), GPR_U32(ctx, 3));
label_1de7c0:
    // 0x1de7c0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7c4:
    // 0x1de7c4: 0xac2505d4  sw          $a1, 0x5D4($at)
    ctx->pc = 0x1de7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1492), GPR_U32(ctx, 5));
label_1de7c8:
    // 0x1de7c8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7cc:
    // 0x1de7cc: 0xac2405d8  sw          $a0, 0x5D8($at)
    ctx->pc = 0x1de7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1496), GPR_U32(ctx, 4));
label_1de7d0:
    // 0x1de7d0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7d4:
    // 0x1de7d4: 0xac2305dc  sw          $v1, 0x5DC($at)
    ctx->pc = 0x1de7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1500), GPR_U32(ctx, 3));
label_1de7d8:
    // 0x1de7d8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7dc:
    // 0x1de7dc: 0xac2505e4  sw          $a1, 0x5E4($at)
    ctx->pc = 0x1de7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1508), GPR_U32(ctx, 5));
label_1de7e0:
    // 0x1de7e0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7e4:
    // 0x1de7e4: 0xac2405e8  sw          $a0, 0x5E8($at)
    ctx->pc = 0x1de7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1512), GPR_U32(ctx, 4));
label_1de7e8:
    // 0x1de7e8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7ec:
    // 0x1de7ec: 0xac2305ec  sw          $v1, 0x5EC($at)
    ctx->pc = 0x1de7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1516), GPR_U32(ctx, 3));
label_1de7f0:
    // 0x1de7f0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7f4:
    // 0x1de7f4: 0xac2505f4  sw          $a1, 0x5F4($at)
    ctx->pc = 0x1de7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1524), GPR_U32(ctx, 5));
label_1de7f8:
    // 0x1de7f8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de7fc:
    // 0x1de7fc: 0xac2405f8  sw          $a0, 0x5F8($at)
    ctx->pc = 0x1de7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1528), GPR_U32(ctx, 4));
label_1de800:
    // 0x1de800: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de804:
    // 0x1de804: 0xac2305fc  sw          $v1, 0x5FC($at)
    ctx->pc = 0x1de804u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1532), GPR_U32(ctx, 3));
label_1de808:
    // 0x1de808: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de80c:
    // 0x1de80c: 0xac250604  sw          $a1, 0x604($at)
    ctx->pc = 0x1de80cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1540), GPR_U32(ctx, 5));
label_1de810:
    // 0x1de810: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de814:
    // 0x1de814: 0xac250614  sw          $a1, 0x614($at)
    ctx->pc = 0x1de814u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1556), GPR_U32(ctx, 5));
label_1de818:
    // 0x1de818: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de81c:
    // 0x1de81c: 0xac240608  sw          $a0, 0x608($at)
    ctx->pc = 0x1de81cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1544), GPR_U32(ctx, 4));
label_1de820:
    // 0x1de820: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de824:
    // 0x1de824: 0xac240618  sw          $a0, 0x618($at)
    ctx->pc = 0x1de824u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1560), GPR_U32(ctx, 4));
label_1de828:
    // 0x1de828: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de82c:
    // 0x1de82c: 0xac23060c  sw          $v1, 0x60C($at)
    ctx->pc = 0x1de82cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1548), GPR_U32(ctx, 3));
label_1de830:
    // 0x1de830: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de834:
    // 0x1de834: 0xac23061c  sw          $v1, 0x61C($at)
    ctx->pc = 0x1de834u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1564), GPR_U32(ctx, 3));
label_1de838:
    // 0x1de838: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de83c:
    // 0x1de83c: 0xac200580  sw          $zero, 0x580($at)
    ctx->pc = 0x1de83cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1408), GPR_U32(ctx, 0));
label_1de840:
    // 0x1de840: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de844:
    // 0x1de844: 0xac200560  sw          $zero, 0x560($at)
    ctx->pc = 0x1de844u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1376), GPR_U32(ctx, 0));
label_1de848:
    // 0x1de848: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de84c:
    // 0x1de84c: 0xac200584  sw          $zero, 0x584($at)
    ctx->pc = 0x1de84cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1412), GPR_U32(ctx, 0));
label_1de850:
    // 0x1de850: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de854:
    // 0x1de854: 0xac200564  sw          $zero, 0x564($at)
    ctx->pc = 0x1de854u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1380), GPR_U32(ctx, 0));
label_1de858:
    // 0x1de858: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de85c:
    // 0x1de85c: 0xac200588  sw          $zero, 0x588($at)
    ctx->pc = 0x1de85cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1416), GPR_U32(ctx, 0));
label_1de860:
    // 0x1de860: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de864:
    // 0x1de864: 0xac200568  sw          $zero, 0x568($at)
    ctx->pc = 0x1de864u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1384), GPR_U32(ctx, 0));
label_1de868:
    // 0x1de868: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de86c:
    // 0x1de86c: 0xac20058c  sw          $zero, 0x58C($at)
    ctx->pc = 0x1de86cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1420), GPR_U32(ctx, 0));
label_1de870:
    // 0x1de870: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de874:
    // 0x1de874: 0xac20056c  sw          $zero, 0x56C($at)
    ctx->pc = 0x1de874u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1388), GPR_U32(ctx, 0));
label_1de878:
    // 0x1de878: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de87c:
    // 0x1de87c: 0xac200590  sw          $zero, 0x590($at)
    ctx->pc = 0x1de87cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1424), GPR_U32(ctx, 0));
label_1de880:
    // 0x1de880: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de884:
    // 0x1de884: 0xac200570  sw          $zero, 0x570($at)
    ctx->pc = 0x1de884u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1392), GPR_U32(ctx, 0));
label_1de888:
    // 0x1de888: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de88c:
    // 0x1de88c: 0xac200594  sw          $zero, 0x594($at)
    ctx->pc = 0x1de88cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1428), GPR_U32(ctx, 0));
label_1de890:
    // 0x1de890: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de894:
    // 0x1de894: 0xac200574  sw          $zero, 0x574($at)
    ctx->pc = 0x1de894u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1396), GPR_U32(ctx, 0));
label_1de898:
    // 0x1de898: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de89c:
    // 0x1de89c: 0xac200598  sw          $zero, 0x598($at)
    ctx->pc = 0x1de89cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1432), GPR_U32(ctx, 0));
label_1de8a0:
    // 0x1de8a0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de8a4:
    // 0x1de8a4: 0xac200578  sw          $zero, 0x578($at)
    ctx->pc = 0x1de8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1400), GPR_U32(ctx, 0));
label_1de8a8:
    // 0x1de8a8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de8ac:
    // 0x1de8ac: 0xac20059c  sw          $zero, 0x59C($at)
    ctx->pc = 0x1de8acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1436), GPR_U32(ctx, 0));
label_1de8b0:
    // 0x1de8b0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de8b4:
    // 0x1de8b4: 0xac20057c  sw          $zero, 0x57C($at)
    ctx->pc = 0x1de8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1404), GPR_U32(ctx, 0));
label_1de8b8:
    // 0x1de8b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1de8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de8bc:
    // 0x1de8bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1de8bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de8c0:
    // 0x1de8c0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1de8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1de8c4:
    // 0x1de8c4: 0x24420620  addiu       $v0, $v0, 0x620
    ctx->pc = 0x1de8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1568));
label_1de8c8:
    // 0x1de8c8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1de8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1de8cc:
    // 0x1de8cc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1de8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1de8d0:
    // 0x1de8d0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1de8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1de8d4:
    // 0x1de8d4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1de8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1de8d8:
    // 0x1de8d8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1de8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1de8dc:
    // 0x1de8dc: 0xc05e234  jal         func_1788D0
label_1de8e0:
    if (ctx->pc == 0x1DE8E0u) {
        ctx->pc = 0x1DE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8DCu;
        // 0x1de8e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE8E4u;
        goto label_1de8e4;
    }
    ctx->pc = 0x1DE8DCu;
    SET_GPR_U32(ctx, 31, 0x1DE8E4u);
    ctx->pc = 0x1DE8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE8DCu;
    // 0x1de8e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1DE8DCu, 0x1DE8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8E4u;
label_1de8e4:
    // 0x1de8e4: 0x240b00a0  addiu       $t3, $zero, 0xA0
    ctx->pc = 0x1de8e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1de8e8:
    // 0x1de8e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1de8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de8ec:
    // 0x1de8ec: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1de8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1de8f0:
    // 0x1de8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de8f4:
    // 0x1de8f4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1de8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1de8f8:
    // 0x1de8f8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de8fc:
    // 0x1de8fc: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1de8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1de900:
    // 0x1de900: 0x2628001e  addiu       $t0, $s1, 0x1E
    ctx->pc = 0x1de900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 30));
label_1de904:
    // 0x1de904: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1de904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1de908:
    // 0x1de908: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1de908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1de90c:
    // 0x1de90c: 0xdc2504b8  ld          $a1, 0x4B8($at)
    ctx->pc = 0x1de90cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1208)));
label_1de910:
    // 0x1de910: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1de910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1de914:
    // 0x1de914: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1de914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1de918:
    // 0x1de918: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1de918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de91c:
    // 0x1de91c: 0xc05de30  jal         func_1778C0
label_1de920:
    if (ctx->pc == 0x1DE920u) {
        ctx->pc = 0x1DE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE91Cu;
        // 0x1de920: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE924u;
        goto label_1de924;
    }
    ctx->pc = 0x1DE91Cu;
    SET_GPR_U32(ctx, 31, 0x1DE924u);
    ctx->pc = 0x1DE920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE91Cu;
    // 0x1de920: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1DE91Cu, 0x1DE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE924u;
label_1de924:
    // 0x1de924: 0x240b00a0  addiu       $t3, $zero, 0xA0
    ctx->pc = 0x1de924u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1de928:
    // 0x1de928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de92c:
    // 0x1de92c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1de92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1de930:
    // 0x1de930: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de934:
    // 0x1de934: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1de934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1de938:
    // 0x1de938: 0x2628001e  addiu       $t0, $s1, 0x1E
    ctx->pc = 0x1de938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 30));
label_1de93c:
    // 0x1de93c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1de93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1de940:
    // 0x1de940: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x1de940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_1de944:
    // 0x1de944: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1de944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1de948:
    // 0x1de948: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1de948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1de94c:
    // 0x1de94c: 0xdc2504c8  ld          $a1, 0x4C8($at)
    ctx->pc = 0x1de94cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1224)));
label_1de950:
    // 0x1de950: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1de950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1de954:
    // 0x1de954: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1de954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de958:
    // 0x1de958: 0xc05de30  jal         func_1778C0
label_1de95c:
    if (ctx->pc == 0x1DE95Cu) {
        ctx->pc = 0x1DE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE958u;
        // 0x1de95c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE960u;
        goto label_1de960;
    }
    ctx->pc = 0x1DE958u;
    SET_GPR_U32(ctx, 31, 0x1DE960u);
    ctx->pc = 0x1DE95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE958u;
    // 0x1de95c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1DE958u, 0x1DE960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE960u;
label_1de960:
    // 0x1de960: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1de960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1de964:
    // 0x1de964: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1de964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1de968:
    // 0x1de968: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1de968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1de96c:
    // 0x1de96c: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x1de96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_1de970:
    // 0x1de970: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de974:
    // 0x1de974: 0x2628001e  addiu       $t0, $s1, 0x1E
    ctx->pc = 0x1de974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 30));
label_1de978:
    // 0x1de978: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1de978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1de97c:
    // 0x1de97c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1de97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1de980:
    // 0x1de980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de984:
    // 0x1de984: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1de984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1de988:
    // 0x1de988: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1de988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1de98c:
    // 0x1de98c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1de98cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de990:
    // 0x1de990: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1de990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1de994:
    // 0x1de994: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1de994u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de998:
    // 0x1de998: 0xdc2504c0  ld          $a1, 0x4C0($at)
    ctx->pc = 0x1de998u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1216)));
label_1de99c:
    // 0x1de99c: 0xc05de30  jal         func_1778C0
label_1de9a0:
    if (ctx->pc == 0x1DE9A0u) {
        ctx->pc = 0x1DE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE99Cu;
        // 0x1de9a0: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9A4u;
        goto label_1de9a4;
    }
    ctx->pc = 0x1DE99Cu;
    SET_GPR_U32(ctx, 31, 0x1DE9A4u);
    ctx->pc = 0x1DE9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE99Cu;
    // 0x1de9a0: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1DE99Cu, 0x1DE9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE9A4u;
label_1de9a4:
    // 0x1de9a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1de9a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1de9a8:
    // 0x1de9a8: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x1de9a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_1de9ac:
    // 0x1de9ac: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
label_1de9b0:
    if (ctx->pc == 0x1DE9B0u) {
        ctx->pc = 0x1DE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9ACu;
        // 0x1de9b0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9B4u;
        goto label_1de9b4;
    }
    ctx->pc = 0x1DE9ACu;
    {
        const bool branch_taken_0x1de9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9ACu;
        // 0x1de9b0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9ac) {
            ctx->pc = 0x1DE8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de8c0;
        }
    }
    ctx->pc = 0x1DE9B4u;
label_1de9b4:
    // 0x1de9b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1de9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1de9b8:
    // 0x1de9b8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1de9b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1de9bc:
    // 0x1de9bc: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
label_1de9c0:
    if (ctx->pc == 0x1DE9C0u) {
        ctx->pc = 0x1DE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9BCu;
        // 0x1de9c0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9C4u;
        goto label_1de9c4;
    }
    ctx->pc = 0x1DE9BCu;
    {
        const bool branch_taken_0x1de9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9BCu;
        // 0x1de9c0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9bc) {
            ctx->pc = 0x1DE8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de8b8;
        }
    }
    ctx->pc = 0x1DE9C4u;
label_1de9c4:
    // 0x1de9c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1de9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1de9c8:
    // 0x1de9c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1de9c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1de9cc:
    // 0x1de9cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1de9ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1de9d0:
    // 0x1de9d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1de9d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1de9d4:
    // 0x1de9d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1de9d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1de9d8:
    // 0x1de9d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1de9dc:
    // 0x1de9dc: 0x3e00008  jr          $ra
label_1de9e0:
    if (ctx->pc == 0x1DE9E0u) {
        ctx->pc = 0x1DE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9DCu;
        // 0x1de9e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE9E4u;
        goto label_1de9e4;
    }
    ctx->pc = 0x1DE9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE9DCu;
        // 0x1de9e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE9E4u;
label_1de9e4:
    // 0x1de9e4: 0x0  nop
    ctx->pc = 0x1de9e4u;
    // NOP
label_1de9e8:
    // 0x1de9e8: 0x0  nop
    ctx->pc = 0x1de9e8u;
    // NOP
label_1de9ec:
    // 0x1de9ec: 0x0  nop
    ctx->pc = 0x1de9ecu;
    // NOP
label_1de9f0:
    // 0x1de9f0: 0x8f838ca4  lw          $v1, -0x735C($gp)
    ctx->pc = 0x1de9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937764)));
label_1de9f4:
    // 0x1de9f4: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_1de9f8:
    if (ctx->pc == 0x1DE9F8u) {
        ctx->pc = 0x1DE9FCu;
        goto label_1de9fc;
    }
    ctx->pc = 0x1DE9F4u;
    {
        const bool branch_taken_0x1de9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de9f4) {
            ctx->pc = 0x1DEAC0u;
            goto label_1deac0;
        }
    }
    ctx->pc = 0x1DE9FCu;
label_1de9fc:
    // 0x1de9fc: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x1de9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
label_1dea00:
    // 0x1dea00: 0x3c07004b  lui         $a3, 0x4B
    ctx->pc = 0x1dea00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)75 << 16));
label_1dea04:
    // 0x1dea04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dea04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dea08:
    // 0x1dea08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dea08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dea0c:
    // 0x1dea0c: 0x24c60580  addiu       $a2, $a2, 0x580
    ctx->pc = 0x1dea0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1408));
label_1dea10:
    // 0x1dea10: 0x24e70560  addiu       $a3, $a3, 0x560
    ctx->pc = 0x1dea10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1376));
label_1dea14:
    // 0x1dea14: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1dea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1dea18:
    // 0x1dea18: 0x10000025  b           . + 4 + (0x25 << 2)
label_1dea1c:
    if (ctx->pc == 0x1DEA1Cu) {
        ctx->pc = 0x1DEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA18u;
        // 0x1dea1c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA20u;
        goto label_1dea20;
    }
    ctx->pc = 0x1DEA18u;
    {
        const bool branch_taken_0x1dea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA18u;
        // 0x1dea1c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea18) {
            ctx->pc = 0x1DEAB0u;
            goto label_1deab0;
        }
    }
    ctx->pc = 0x1DEA20u;
label_1dea20:
    // 0x1dea20: 0xe96021  addu        $t4, $a3, $t1
    ctx->pc = 0x1dea20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1dea24:
    // 0x1dea24: 0x8d8a0000  lw          $t2, 0x0($t4)
    ctx->pc = 0x1dea24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1dea28:
    // 0x1dea28: 0x15400008  bnez        $t2, . + 4 + (0x8 << 2)
label_1dea2c:
    if (ctx->pc == 0x1DEA2Cu) {
        ctx->pc = 0x1DEA30u;
        goto label_1dea30;
    }
    ctx->pc = 0x1DEA28u;
    {
        const bool branch_taken_0x1dea28 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dea28) {
            ctx->pc = 0x1DEA4Cu;
            goto label_1dea4c;
        }
    }
    ctx->pc = 0x1DEA30u;
label_1dea30:
    // 0x1dea30: 0xc95021  addu        $t2, $a2, $t1
    ctx->pc = 0x1dea30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1dea34:
    // 0x1dea34: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1dea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1dea38:
    // 0x1dea38: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1dea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1dea3c:
    // 0x1dea3c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1dea3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1dea40:
    // 0x1dea40: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1dea40u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1dea44:
    // 0x1dea44: 0x10000018  b           . + 4 + (0x18 << 2)
label_1dea48:
    if (ctx->pc == 0x1DEA48u) {
        ctx->pc = 0x1DEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA44u;
        // 0x1dea48: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA4Cu;
        goto label_1dea4c;
    }
    ctx->pc = 0x1DEA44u;
    {
        const bool branch_taken_0x1dea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA44u;
        // 0x1dea48: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea44) {
            ctx->pc = 0x1DEAA8u;
            goto label_1deaa8;
        }
    }
    ctx->pc = 0x1DEA4Cu;
label_1dea4c:
    // 0x1dea4c: 0x0  nop
    ctx->pc = 0x1dea4cu;
    // NOP
label_1dea50:
    // 0x1dea50: 0xc95821  addu        $t3, $a2, $t1
    ctx->pc = 0x1dea50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1dea54:
    // 0x1dea54: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1dea54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1dea58:
    // 0x1dea58: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1dea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1dea5c:
    // 0x1dea5c: 0x1940000a  blez        $t2, . + 4 + (0xA << 2)
label_1dea60:
    if (ctx->pc == 0x1DEA60u) {
        ctx->pc = 0x1DEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA5Cu;
        // 0x1dea60: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA64u;
        goto label_1dea64;
    }
    ctx->pc = 0x1DEA5Cu;
    {
        const bool branch_taken_0x1dea5c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x1DEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA5Cu;
        // 0x1dea60: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea5c) {
            ctx->pc = 0x1DEA88u;
            goto label_1dea88;
        }
    }
    ctx->pc = 0x1DEA64u;
label_1dea64:
    // 0x1dea64: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1dea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1dea68:
    // 0x1dea68: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x1dea68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dea6c:
    // 0x1dea6c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_1dea70:
    if (ctx->pc == 0x1DEA70u) {
        ctx->pc = 0x1DEA74u;
        goto label_1dea74;
    }
    ctx->pc = 0x1DEA6Cu;
    {
        const bool branch_taken_0x1dea6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dea6c) {
            ctx->pc = 0x1DEAA8u;
            goto label_1deaa8;
        }
    }
    ctx->pc = 0x1DEA74u;
label_1dea74:
    // 0x1dea74: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1dea74u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
label_1dea78:
    // 0x1dea78: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1dea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1dea7c:
    // 0x1dea7c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1dea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1dea80:
    // 0x1dea80: 0x10000009  b           . + 4 + (0x9 << 2)
label_1dea84:
    if (ctx->pc == 0x1DEA84u) {
        ctx->pc = 0x1DEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA80u;
        // 0x1dea84: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEA88u;
        goto label_1dea88;
    }
    ctx->pc = 0x1DEA80u;
    {
        const bool branch_taken_0x1dea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA80u;
        // 0x1dea84: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea80) {
            ctx->pc = 0x1DEAA8u;
            goto label_1deaa8;
        }
    }
    ctx->pc = 0x1DEA88u;
label_1dea88:
    // 0x1dea88: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1dea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1dea8c:
    // 0x1dea8c: 0x28610061  slti        $at, $v1, 0x61
    ctx->pc = 0x1dea8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)97) ? 1 : 0);
label_1dea90:
    // 0x1dea90: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1dea94:
    if (ctx->pc == 0x1DEA94u) {
        ctx->pc = 0x1DEA98u;
        goto label_1dea98;
    }
    ctx->pc = 0x1DEA90u;
    {
        const bool branch_taken_0x1dea90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dea90) {
            ctx->pc = 0x1DEAA8u;
            goto label_1deaa8;
        }
    }
    ctx->pc = 0x1DEA98u;
label_1dea98:
    // 0x1dea98: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x1dea98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
label_1dea9c:
    // 0x1dea9c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1dea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1deaa0:
    // 0x1deaa0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1deaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1deaa4:
    // 0x1deaa4: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1deaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_1deaa8:
    // 0x1deaa8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1deaa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1deaac:
    // 0x1deaac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1deaacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1deab0:
    // 0x1deab0: 0x8f838cf0  lw          $v1, -0x7310($gp)
    ctx->pc = 0x1deab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1deab4:
    // 0x1deab4: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x1deab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1deab8:
    // 0x1deab8: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_1deabc:
    if (ctx->pc == 0x1DEABCu) {
        ctx->pc = 0x1DEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAB8u;
        // 0x1deabc: 0xe96021  addu        $t4, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEAC0u;
        goto label_1deac0;
    }
    ctx->pc = 0x1DEAB8u;
    {
        const bool branch_taken_0x1deab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAB8u;
        // 0x1deabc: 0xe96021  addu        $t4, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deab8) {
            ctx->pc = 0x1DEA24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dea24;
        }
    }
    ctx->pc = 0x1DEAC0u;
label_1deac0:
    // 0x1deac0: 0x3e00008  jr          $ra
label_1deac4:
    if (ctx->pc == 0x1DEAC4u) {
        ctx->pc = 0x1DEAC8u;
        goto label_1deac8;
    }
    ctx->pc = 0x1DEAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEAC8u;
label_1deac8:
    // 0x1deac8: 0x0  nop
    ctx->pc = 0x1deac8u;
    // NOP
label_1deacc:
    // 0x1deacc: 0x0  nop
    ctx->pc = 0x1deaccu;
    // NOP
label_1dead0:
    // 0x1dead0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1dead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1dead4:
    // 0x1dead4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1dead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1dead8:
    // 0x1dead8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1dead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1deadc:
    // 0x1deadc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1deadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1deae0:
    // 0x1deae0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1deae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1deae4:
    // 0x1deae4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1deae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1deae8:
    // 0x1deae8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1deae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1deaec:
    // 0x1deaec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1deaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1deaf0:
    // 0x1deaf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1deaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1deaf4:
    // 0x1deaf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1deaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1deaf8:
    // 0x1deaf8: 0x8f838ca4  lw          $v1, -0x735C($gp)
    ctx->pc = 0x1deaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937764)));
label_1deafc:
    // 0x1deafc: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
label_1deb00:
    if (ctx->pc == 0x1DEB00u) {
        ctx->pc = 0x1DEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAFCu;
        // 0x1deb00: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB04u;
        goto label_1deb04;
    }
    ctx->pc = 0x1DEAFCu;
    {
        const bool branch_taken_0x1deafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAFCu;
        // 0x1deb00: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deafc) {
            ctx->pc = 0x1DED88u;
            { ctx->pc = 0x1ded88; return; }
        }
    }
    ctx->pc = 0x1DEB04u;
label_1deb04:
    // 0x1deb04: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1deb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1deb08:
    // 0x1deb08: 0x34843ffc  ori         $a0, $a0, 0x3FFC
    ctx->pc = 0x1deb08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16380);
label_1deb0c:
    // 0x1deb0c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1deb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1deb10:
    // 0x1deb10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1deb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1deb14:
    // 0x1deb14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1deb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1deb18:
    // 0x1deb18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1deb18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1deb1c:
    // 0x1deb1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1deb1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1deb20:
    // 0x1deb20: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1deb20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1deb24:
    // 0x1deb24: 0x10000093  b           . + 4 + (0x93 << 2)
label_1deb28:
    if (ctx->pc == 0x1DEB28u) {
        ctx->pc = 0x1DEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB24u;
        // 0x1deb28: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEB2Cu;
        goto label_1deb2c;
    }
    ctx->pc = 0x1DEB24u;
    {
        const bool branch_taken_0x1deb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB24u;
        // 0x1deb28: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb24) {
            ctx->pc = 0x1DED74u;
            { ctx->pc = 0x1ded74; return; }
        }
    }
    ctx->pc = 0x1DEB2Cu;
label_1deb2c:
    // 0x1deb2c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1deb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1deb30:
    // 0x1deb30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1deb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1deb34:
    // 0x1deb34: 0x24420620  addiu       $v0, $v0, 0x620
    ctx->pc = 0x1deb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1568));
label_1deb38:
    // 0x1deb38: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1deb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1deb3c:
    // 0x1deb3c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x1deb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1deb40:
    // 0x1deb40: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1deb40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1deb44:
    // 0x1deb44: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1deb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1deb48:
    // 0x1deb48: 0x24850000  addiu       $a1, $a0, 0x0
    ctx->pc = 0x1deb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1deb4c:
    // 0x1deb4c: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x1deb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
label_1deb50:
    // 0x1deb50: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1deb50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1deb54:
    // 0x1deb54: 0x53b021  addu        $s6, $v0, $s3
    ctx->pc = 0x1deb54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1deb58:
    // 0x1deb58: 0x24840580  addiu       $a0, $a0, 0x580
    ctx->pc = 0x1deb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1408));
label_1deb5c:
    // 0x1deb5c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1deb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1deb60:
    // 0x1deb60: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1deb60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1deb64:
    // 0x1deb64: 0x3454851f  ori         $s4, $v0, 0x851F
    ctx->pc = 0x1deb64u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1deb68:
    // 0x1deb68: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x1deb68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1deb6c:
    // 0x1deb6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1deb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1deb70:
    // 0x1deb70: 0x86cd0004  lh          $t5, 0x4($s6)
    ctx->pc = 0x1deb70u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_1deb74:
    // 0x1deb74: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1deb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1deb78:
    // 0x1deb78: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1deb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1deb7c:
    // 0x1deb7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1deb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1deb80:
    // 0x1deb80: 0x24630660  addiu       $v1, $v1, 0x660
    ctx->pc = 0x1deb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
label_1deb84:
    // 0x1deb84: 0x24170a08  addiu       $s7, $zero, 0xA08
    ctx->pc = 0x1deb84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2568));
label_1deb88:
    // 0x1deb88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1deb88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1deb8c:
    // 0x1deb8c: 0x67940  sll         $t7, $a2, 5
    ctx->pc = 0x1deb8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1deb90:
    // 0x1deb90: 0x6a880  sll         $s5, $a2, 2
    ctx->pc = 0x1deb90u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1deb94:
    // 0x1deb94: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1deb94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1deb98:
    // 0x1deb98: 0xf77c2  srl         $t6, $t7, 31
    ctx->pc = 0x1deb98u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
label_1deb9c:
    // 0x1deb9c: 0x876021  addu        $t4, $a0, $a3
    ctx->pc = 0x1deb9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1deba0:
    // 0x1deba0: 0x675821  addu        $t3, $v1, $a3
    ctx->pc = 0x1deba0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1deba4:
    // 0x1deba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1deba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1deba8:
    // 0x1deba8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1deba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1debac:
    // 0x1debac: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1debacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_1debb0:
    // 0x1debb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1debb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1debb4:
    // 0x1debb4: 0x3443c00a  ori         $v1, $v0, 0xC00A
    ctx->pc = 0x1debb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_1debb8:
    // 0x1debb8: 0x2a61021  addu        $v0, $s5, $a2
    ctx->pc = 0x1debb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_1debbc:
    // 0x1debbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1debbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1debc0:
    // 0x1debc0: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1debc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1debc4:
    // 0x1debc4: 0x2820018  mult        $zero, $s4, $v0
    ctx->pc = 0x1debc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1debc8:
    // 0x1debc8: 0x2cfc2  srl         $t9, $v0, 31
    ctx->pc = 0x1debc8u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1debcc:
    // 0x1debcc: 0x0  nop
    ctx->pc = 0x1debccu;
    // NOP
label_1debd0:
    // 0x1debd0: 0xc010  mfhi        $t8
    ctx->pc = 0x1debd0u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_1debd4:
    // 0x1debd4: 0x1517c2  srl         $v0, $s5, 31
    ctx->pc = 0x1debd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_1debd8:
    // 0x1debd8: 0x28f0018  mult        $zero, $s4, $t7
    ctx->pc = 0x1debd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1debdc:
    // 0x1debdc: 0x187943  sra         $t7, $t8, 5
    ctx->pc = 0x1debdcu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 24), 5));
label_1debe0:
    // 0x1debe0: 0x1f97821  addu        $t7, $t7, $t9
    ctx->pc = 0x1debe0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_1debe4:
    // 0x1debe4: 0x25ef003c  addiu       $t7, $t7, 0x3C
    ctx->pc = 0x1debe4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 60));
label_1debe8:
    // 0x1debe8: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x1debe8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_1debec:
    // 0x1debec: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x1debecu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_1debf0:
    // 0x1debf0: 0x25ad6c00  addiu       $t5, $t5, 0x6C00
    ctx->pc = 0x1debf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
label_1debf4:
    // 0x1debf4: 0xa4ad0090  sh          $t5, 0x90($a1)
    ctx->pc = 0x1debf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 13));
label_1debf8:
    // 0x1debf8: 0xc010  mfhi        $t8
    ctx->pc = 0x1debf8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_1debfc:
    // 0x1debfc: 0x86cd0008  lh          $t5, 0x8($s6)
    ctx->pc = 0x1debfcu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 8)));
label_1dec00:
    // 0x1dec00: 0x2950018  mult        $zero, $s4, $s5
    ctx->pc = 0x1dec00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1dec04:
    // 0x1dec04: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x1dec04u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_1dec08:
    // 0x1dec08: 0x18a143  sra         $s4, $t8, 5
    ctx->pc = 0x1dec08u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 24), 5));
label_1dec0c:
    // 0x1dec0c: 0xd68c0  sll         $t5, $t5, 3
    ctx->pc = 0x1dec0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_1dec10:
    // 0x1dec10: 0x28e7021  addu        $t6, $s4, $t6
    ctx->pc = 0x1dec10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 14)));
label_1dec14:
    // 0x1dec14: 0x25ad7900  addiu       $t5, $t5, 0x7900
    ctx->pc = 0x1dec14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
label_1dec18:
    // 0x1dec18: 0x25d40060  addiu       $s4, $t6, 0x60
    ctx->pc = 0x1dec18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 14), 96));
label_1dec1c:
    // 0x1dec1c: 0xa4ad0092  sh          $t5, 0x92($a1)
    ctx->pc = 0x1dec1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 146), (uint16_t)GPR_U32(ctx, 13));
label_1dec20:
    // 0x1dec20: 0x7010  mfhi        $t6
    ctx->pc = 0x1dec20u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_1dec24:
    // 0x1dec24: 0x86cd0004  lh          $t5, 0x4($s6)
    ctx->pc = 0x1dec24u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_1dec28:
    // 0x1dec28: 0xe7143  sra         $t6, $t6, 5
    ctx->pc = 0x1dec28u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 5));
label_1dec2c:
    // 0x1dec2c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x1dec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_1dec30:
    // 0x1dec30: 0x244e000c  addiu       $t6, $v0, 0xC
    ctx->pc = 0x1dec30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1dec34:
    // 0x1dec34: 0x1ed1021  addu        $v0, $t7, $t5
    ctx->pc = 0x1dec34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    ctx->pc = 0x1dec38u;
    return;
}
