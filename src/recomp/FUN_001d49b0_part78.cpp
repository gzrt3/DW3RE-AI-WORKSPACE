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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fa340u: goto label_1fa340;
        case 0x1fa344u: goto label_1fa344;
        case 0x1fa348u: goto label_1fa348;
        case 0x1fa34cu: goto label_1fa34c;
        case 0x1fa350u: goto label_1fa350;
        case 0x1fa354u: goto label_1fa354;
        case 0x1fa358u: goto label_1fa358;
        case 0x1fa35cu: goto label_1fa35c;
        case 0x1fa360u: goto label_1fa360;
        case 0x1fa364u: goto label_1fa364;
        case 0x1fa368u: goto label_1fa368;
        case 0x1fa36cu: goto label_1fa36c;
        case 0x1fa370u: goto label_1fa370;
        case 0x1fa374u: goto label_1fa374;
        case 0x1fa378u: goto label_1fa378;
        case 0x1fa37cu: goto label_1fa37c;
        case 0x1fa380u: goto label_1fa380;
        case 0x1fa384u: goto label_1fa384;
        case 0x1fa388u: goto label_1fa388;
        case 0x1fa38cu: goto label_1fa38c;
        case 0x1fa390u: goto label_1fa390;
        case 0x1fa394u: goto label_1fa394;
        case 0x1fa398u: goto label_1fa398;
        case 0x1fa39cu: goto label_1fa39c;
        case 0x1fa3a0u: goto label_1fa3a0;
        case 0x1fa3a4u: goto label_1fa3a4;
        case 0x1fa3a8u: goto label_1fa3a8;
        case 0x1fa3acu: goto label_1fa3ac;
        case 0x1fa3b0u: goto label_1fa3b0;
        case 0x1fa3b4u: goto label_1fa3b4;
        case 0x1fa3b8u: goto label_1fa3b8;
        case 0x1fa3bcu: goto label_1fa3bc;
        case 0x1fa3c0u: goto label_1fa3c0;
        case 0x1fa3c4u: goto label_1fa3c4;
        case 0x1fa3c8u: goto label_1fa3c8;
        case 0x1fa3ccu: goto label_1fa3cc;
        case 0x1fa3d0u: goto label_1fa3d0;
        case 0x1fa3d4u: goto label_1fa3d4;
        case 0x1fa3d8u: goto label_1fa3d8;
        case 0x1fa3dcu: goto label_1fa3dc;
        case 0x1fa3e0u: goto label_1fa3e0;
        case 0x1fa3e4u: goto label_1fa3e4;
        case 0x1fa3e8u: goto label_1fa3e8;
        case 0x1fa3ecu: goto label_1fa3ec;
        case 0x1fa3f0u: goto label_1fa3f0;
        case 0x1fa3f4u: goto label_1fa3f4;
        case 0x1fa3f8u: goto label_1fa3f8;
        case 0x1fa3fcu: goto label_1fa3fc;
        case 0x1fa400u: goto label_1fa400;
        case 0x1fa404u: goto label_1fa404;
        case 0x1fa408u: goto label_1fa408;
        case 0x1fa40cu: goto label_1fa40c;
        case 0x1fa410u: goto label_1fa410;
        case 0x1fa414u: goto label_1fa414;
        case 0x1fa418u: goto label_1fa418;
        case 0x1fa41cu: goto label_1fa41c;
        case 0x1fa420u: goto label_1fa420;
        case 0x1fa424u: goto label_1fa424;
        case 0x1fa428u: goto label_1fa428;
        case 0x1fa42cu: goto label_1fa42c;
        case 0x1fa430u: goto label_1fa430;
        case 0x1fa434u: goto label_1fa434;
        case 0x1fa438u: goto label_1fa438;
        case 0x1fa43cu: goto label_1fa43c;
        case 0x1fa440u: goto label_1fa440;
        case 0x1fa444u: goto label_1fa444;
        case 0x1fa448u: goto label_1fa448;
        case 0x1fa44cu: goto label_1fa44c;
        case 0x1fa450u: goto label_1fa450;
        case 0x1fa454u: goto label_1fa454;
        case 0x1fa458u: goto label_1fa458;
        case 0x1fa45cu: goto label_1fa45c;
        case 0x1fa460u: goto label_1fa460;
        case 0x1fa464u: goto label_1fa464;
        case 0x1fa468u: goto label_1fa468;
        case 0x1fa46cu: goto label_1fa46c;
        case 0x1fa470u: goto label_1fa470;
        case 0x1fa474u: goto label_1fa474;
        case 0x1fa478u: goto label_1fa478;
        case 0x1fa47cu: goto label_1fa47c;
        case 0x1fa480u: goto label_1fa480;
        case 0x1fa484u: goto label_1fa484;
        case 0x1fa488u: goto label_1fa488;
        case 0x1fa48cu: goto label_1fa48c;
        case 0x1fa490u: goto label_1fa490;
        case 0x1fa494u: goto label_1fa494;
        case 0x1fa498u: goto label_1fa498;
        case 0x1fa49cu: goto label_1fa49c;
        case 0x1fa4a0u: goto label_1fa4a0;
        case 0x1fa4a4u: goto label_1fa4a4;
        case 0x1fa4a8u: goto label_1fa4a8;
        case 0x1fa4acu: goto label_1fa4ac;
        case 0x1fa4b0u: goto label_1fa4b0;
        case 0x1fa4b4u: goto label_1fa4b4;
        case 0x1fa4b8u: goto label_1fa4b8;
        case 0x1fa4bcu: goto label_1fa4bc;
        case 0x1fa4c0u: goto label_1fa4c0;
        case 0x1fa4c4u: goto label_1fa4c4;
        case 0x1fa4c8u: goto label_1fa4c8;
        case 0x1fa4ccu: goto label_1fa4cc;
        case 0x1fa4d0u: goto label_1fa4d0;
        case 0x1fa4d4u: goto label_1fa4d4;
        case 0x1fa4d8u: goto label_1fa4d8;
        case 0x1fa4dcu: goto label_1fa4dc;
        case 0x1fa4e0u: goto label_1fa4e0;
        case 0x1fa4e4u: goto label_1fa4e4;
        case 0x1fa4e8u: goto label_1fa4e8;
        case 0x1fa4ecu: goto label_1fa4ec;
        case 0x1fa4f0u: goto label_1fa4f0;
        case 0x1fa4f4u: goto label_1fa4f4;
        case 0x1fa4f8u: goto label_1fa4f8;
        case 0x1fa4fcu: goto label_1fa4fc;
        case 0x1fa500u: goto label_1fa500;
        case 0x1fa504u: goto label_1fa504;
        case 0x1fa508u: goto label_1fa508;
        case 0x1fa50cu: goto label_1fa50c;
        case 0x1fa510u: goto label_1fa510;
        case 0x1fa514u: goto label_1fa514;
        case 0x1fa518u: goto label_1fa518;
        case 0x1fa51cu: goto label_1fa51c;
        case 0x1fa520u: goto label_1fa520;
        case 0x1fa524u: goto label_1fa524;
        case 0x1fa528u: goto label_1fa528;
        case 0x1fa52cu: goto label_1fa52c;
        case 0x1fa530u: goto label_1fa530;
        case 0x1fa534u: goto label_1fa534;
        case 0x1fa538u: goto label_1fa538;
        case 0x1fa53cu: goto label_1fa53c;
        case 0x1fa540u: goto label_1fa540;
        case 0x1fa544u: goto label_1fa544;
        case 0x1fa548u: goto label_1fa548;
        case 0x1fa54cu: goto label_1fa54c;
        case 0x1fa550u: goto label_1fa550;
        case 0x1fa554u: goto label_1fa554;
        case 0x1fa558u: goto label_1fa558;
        case 0x1fa55cu: goto label_1fa55c;
        case 0x1fa560u: goto label_1fa560;
        case 0x1fa564u: goto label_1fa564;
        case 0x1fa568u: goto label_1fa568;
        case 0x1fa56cu: goto label_1fa56c;
        case 0x1fa570u: goto label_1fa570;
        case 0x1fa574u: goto label_1fa574;
        case 0x1fa578u: goto label_1fa578;
        case 0x1fa57cu: goto label_1fa57c;
        case 0x1fa580u: goto label_1fa580;
        case 0x1fa584u: goto label_1fa584;
        case 0x1fa588u: goto label_1fa588;
        case 0x1fa58cu: goto label_1fa58c;
        case 0x1fa590u: goto label_1fa590;
        case 0x1fa594u: goto label_1fa594;
        case 0x1fa598u: goto label_1fa598;
        case 0x1fa59cu: goto label_1fa59c;
        case 0x1fa5a0u: goto label_1fa5a0;
        case 0x1fa5a4u: goto label_1fa5a4;
        case 0x1fa5a8u: goto label_1fa5a8;
        case 0x1fa5acu: goto label_1fa5ac;
        case 0x1fa5b0u: goto label_1fa5b0;
        case 0x1fa5b4u: goto label_1fa5b4;
        case 0x1fa5b8u: goto label_1fa5b8;
        case 0x1fa5bcu: goto label_1fa5bc;
        case 0x1fa5c0u: goto label_1fa5c0;
        case 0x1fa5c4u: goto label_1fa5c4;
        case 0x1fa5c8u: goto label_1fa5c8;
        case 0x1fa5ccu: goto label_1fa5cc;
        case 0x1fa5d0u: goto label_1fa5d0;
        case 0x1fa5d4u: goto label_1fa5d4;
        case 0x1fa5d8u: goto label_1fa5d8;
        case 0x1fa5dcu: goto label_1fa5dc;
        case 0x1fa5e0u: goto label_1fa5e0;
        case 0x1fa5e4u: goto label_1fa5e4;
        case 0x1fa5e8u: goto label_1fa5e8;
        case 0x1fa5ecu: goto label_1fa5ec;
        case 0x1fa5f0u: goto label_1fa5f0;
        case 0x1fa5f4u: goto label_1fa5f4;
        case 0x1fa5f8u: goto label_1fa5f8;
        case 0x1fa5fcu: goto label_1fa5fc;
        case 0x1fa600u: goto label_1fa600;
        case 0x1fa604u: goto label_1fa604;
        case 0x1fa608u: goto label_1fa608;
        case 0x1fa60cu: goto label_1fa60c;
        case 0x1fa610u: goto label_1fa610;
        case 0x1fa614u: goto label_1fa614;
        case 0x1fa618u: goto label_1fa618;
        case 0x1fa61cu: goto label_1fa61c;
        case 0x1fa620u: goto label_1fa620;
        case 0x1fa624u: goto label_1fa624;
        case 0x1fa628u: goto label_1fa628;
        case 0x1fa62cu: goto label_1fa62c;
        case 0x1fa630u: goto label_1fa630;
        case 0x1fa634u: goto label_1fa634;
        case 0x1fa638u: goto label_1fa638;
        case 0x1fa63cu: goto label_1fa63c;
        case 0x1fa640u: goto label_1fa640;
        case 0x1fa644u: goto label_1fa644;
        case 0x1fa648u: goto label_1fa648;
        case 0x1fa64cu: goto label_1fa64c;
        case 0x1fa650u: goto label_1fa650;
        case 0x1fa654u: goto label_1fa654;
        case 0x1fa658u: goto label_1fa658;
        case 0x1fa65cu: goto label_1fa65c;
        case 0x1fa660u: goto label_1fa660;
        case 0x1fa664u: goto label_1fa664;
        case 0x1fa668u: goto label_1fa668;
        case 0x1fa66cu: goto label_1fa66c;
        case 0x1fa670u: goto label_1fa670;
        case 0x1fa674u: goto label_1fa674;
        case 0x1fa678u: goto label_1fa678;
        case 0x1fa67cu: goto label_1fa67c;
        case 0x1fa680u: goto label_1fa680;
        case 0x1fa684u: goto label_1fa684;
        case 0x1fa688u: goto label_1fa688;
        case 0x1fa68cu: goto label_1fa68c;
        case 0x1fa690u: goto label_1fa690;
        case 0x1fa694u: goto label_1fa694;
        case 0x1fa698u: goto label_1fa698;
        case 0x1fa69cu: goto label_1fa69c;
        case 0x1fa6a0u: goto label_1fa6a0;
        case 0x1fa6a4u: goto label_1fa6a4;
        case 0x1fa6a8u: goto label_1fa6a8;
        case 0x1fa6acu: goto label_1fa6ac;
        case 0x1fa6b0u: goto label_1fa6b0;
        case 0x1fa6b4u: goto label_1fa6b4;
        case 0x1fa6b8u: goto label_1fa6b8;
        case 0x1fa6bcu: goto label_1fa6bc;
        case 0x1fa6c0u: goto label_1fa6c0;
        case 0x1fa6c4u: goto label_1fa6c4;
        case 0x1fa6c8u: goto label_1fa6c8;
        case 0x1fa6ccu: goto label_1fa6cc;
        case 0x1fa6d0u: goto label_1fa6d0;
        case 0x1fa6d4u: goto label_1fa6d4;
        case 0x1fa6d8u: goto label_1fa6d8;
        case 0x1fa6dcu: goto label_1fa6dc;
        case 0x1fa6e0u: goto label_1fa6e0;
        case 0x1fa6e4u: goto label_1fa6e4;
        case 0x1fa6e8u: goto label_1fa6e8;
        case 0x1fa6ecu: goto label_1fa6ec;
        case 0x1fa6f0u: goto label_1fa6f0;
        case 0x1fa6f4u: goto label_1fa6f4;
        case 0x1fa6f8u: goto label_1fa6f8;
        case 0x1fa6fcu: goto label_1fa6fc;
        case 0x1fa700u: goto label_1fa700;
        case 0x1fa704u: goto label_1fa704;
        case 0x1fa708u: goto label_1fa708;
        case 0x1fa70cu: goto label_1fa70c;
        case 0x1fa710u: goto label_1fa710;
        case 0x1fa714u: goto label_1fa714;
        case 0x1fa718u: goto label_1fa718;
        case 0x1fa71cu: goto label_1fa71c;
        case 0x1fa720u: goto label_1fa720;
        case 0x1fa724u: goto label_1fa724;
        case 0x1fa728u: goto label_1fa728;
        case 0x1fa72cu: goto label_1fa72c;
        case 0x1fa730u: goto label_1fa730;
        case 0x1fa734u: goto label_1fa734;
        case 0x1fa738u: goto label_1fa738;
        case 0x1fa73cu: goto label_1fa73c;
        case 0x1fa740u: goto label_1fa740;
        case 0x1fa744u: goto label_1fa744;
        case 0x1fa748u: goto label_1fa748;
        case 0x1fa74cu: goto label_1fa74c;
        case 0x1fa750u: goto label_1fa750;
        case 0x1fa754u: goto label_1fa754;
        case 0x1fa758u: goto label_1fa758;
        case 0x1fa75cu: goto label_1fa75c;
        case 0x1fa760u: goto label_1fa760;
        case 0x1fa764u: goto label_1fa764;
        case 0x1fa768u: goto label_1fa768;
        case 0x1fa76cu: goto label_1fa76c;
        case 0x1fa770u: goto label_1fa770;
        case 0x1fa774u: goto label_1fa774;
        case 0x1fa778u: goto label_1fa778;
        case 0x1fa77cu: goto label_1fa77c;
        case 0x1fa780u: goto label_1fa780;
        case 0x1fa784u: goto label_1fa784;
        case 0x1fa788u: goto label_1fa788;
        case 0x1fa78cu: goto label_1fa78c;
        case 0x1fa790u: goto label_1fa790;
        case 0x1fa794u: goto label_1fa794;
        case 0x1fa798u: goto label_1fa798;
        case 0x1fa79cu: goto label_1fa79c;
        case 0x1fa7a0u: goto label_1fa7a0;
        case 0x1fa7a4u: goto label_1fa7a4;
        case 0x1fa7a8u: goto label_1fa7a8;
        case 0x1fa7acu: goto label_1fa7ac;
        case 0x1fa7b0u: goto label_1fa7b0;
        case 0x1fa7b4u: goto label_1fa7b4;
        case 0x1fa7b8u: goto label_1fa7b8;
        case 0x1fa7bcu: goto label_1fa7bc;
        case 0x1fa7c0u: goto label_1fa7c0;
        case 0x1fa7c4u: goto label_1fa7c4;
        case 0x1fa7c8u: goto label_1fa7c8;
        case 0x1fa7ccu: goto label_1fa7cc;
        case 0x1fa7d0u: goto label_1fa7d0;
        case 0x1fa7d4u: goto label_1fa7d4;
        case 0x1fa7d8u: goto label_1fa7d8;
        case 0x1fa7dcu: goto label_1fa7dc;
        case 0x1fa7e0u: goto label_1fa7e0;
        case 0x1fa7e4u: goto label_1fa7e4;
        case 0x1fa7e8u: goto label_1fa7e8;
        case 0x1fa7ecu: goto label_1fa7ec;
        case 0x1fa7f0u: goto label_1fa7f0;
        case 0x1fa7f4u: goto label_1fa7f4;
        case 0x1fa7f8u: goto label_1fa7f8;
        case 0x1fa7fcu: goto label_1fa7fc;
        case 0x1fa800u: goto label_1fa800;
        case 0x1fa804u: goto label_1fa804;
        case 0x1fa808u: goto label_1fa808;
        case 0x1fa80cu: goto label_1fa80c;
        case 0x1fa810u: goto label_1fa810;
        case 0x1fa814u: goto label_1fa814;
        case 0x1fa818u: goto label_1fa818;
        case 0x1fa81cu: goto label_1fa81c;
        case 0x1fa820u: goto label_1fa820;
        case 0x1fa824u: goto label_1fa824;
        case 0x1fa828u: goto label_1fa828;
        case 0x1fa82cu: goto label_1fa82c;
        case 0x1fa830u: goto label_1fa830;
        case 0x1fa834u: goto label_1fa834;
        case 0x1fa838u: goto label_1fa838;
        case 0x1fa83cu: goto label_1fa83c;
        case 0x1fa840u: goto label_1fa840;
        case 0x1fa844u: goto label_1fa844;
        case 0x1fa848u: goto label_1fa848;
        case 0x1fa84cu: goto label_1fa84c;
        case 0x1fa850u: goto label_1fa850;
        case 0x1fa854u: goto label_1fa854;
        case 0x1fa858u: goto label_1fa858;
        case 0x1fa85cu: goto label_1fa85c;
        case 0x1fa860u: goto label_1fa860;
        case 0x1fa864u: goto label_1fa864;
        case 0x1fa868u: goto label_1fa868;
        case 0x1fa86cu: goto label_1fa86c;
        case 0x1fa870u: goto label_1fa870;
        case 0x1fa874u: goto label_1fa874;
        case 0x1fa878u: goto label_1fa878;
        case 0x1fa87cu: goto label_1fa87c;
        case 0x1fa880u: goto label_1fa880;
        case 0x1fa884u: goto label_1fa884;
        case 0x1fa888u: goto label_1fa888;
        case 0x1fa88cu: goto label_1fa88c;
        case 0x1fa890u: goto label_1fa890;
        case 0x1fa894u: goto label_1fa894;
        case 0x1fa898u: goto label_1fa898;
        case 0x1fa89cu: goto label_1fa89c;
        case 0x1fa8a0u: goto label_1fa8a0;
        case 0x1fa8a4u: goto label_1fa8a4;
        case 0x1fa8a8u: goto label_1fa8a8;
        case 0x1fa8acu: goto label_1fa8ac;
        case 0x1fa8b0u: goto label_1fa8b0;
        case 0x1fa8b4u: goto label_1fa8b4;
        case 0x1fa8b8u: goto label_1fa8b8;
        case 0x1fa8bcu: goto label_1fa8bc;
        case 0x1fa8c0u: goto label_1fa8c0;
        case 0x1fa8c4u: goto label_1fa8c4;
        case 0x1fa8c8u: goto label_1fa8c8;
        case 0x1fa8ccu: goto label_1fa8cc;
        case 0x1fa8d0u: goto label_1fa8d0;
        case 0x1fa8d4u: goto label_1fa8d4;
        case 0x1fa8d8u: goto label_1fa8d8;
        case 0x1fa8dcu: goto label_1fa8dc;
        case 0x1fa8e0u: goto label_1fa8e0;
        case 0x1fa8e4u: goto label_1fa8e4;
        case 0x1fa8e8u: goto label_1fa8e8;
        case 0x1fa8ecu: goto label_1fa8ec;
        case 0x1fa8f0u: goto label_1fa8f0;
        case 0x1fa8f4u: goto label_1fa8f4;
        case 0x1fa8f8u: goto label_1fa8f8;
        case 0x1fa8fcu: goto label_1fa8fc;
        case 0x1fa900u: goto label_1fa900;
        case 0x1fa904u: goto label_1fa904;
        case 0x1fa908u: goto label_1fa908;
        case 0x1fa90cu: goto label_1fa90c;
        case 0x1fa910u: goto label_1fa910;
        case 0x1fa914u: goto label_1fa914;
        case 0x1fa918u: goto label_1fa918;
        case 0x1fa91cu: goto label_1fa91c;
        case 0x1fa920u: goto label_1fa920;
        case 0x1fa924u: goto label_1fa924;
        case 0x1fa928u: goto label_1fa928;
        case 0x1fa92cu: goto label_1fa92c;
        case 0x1fa930u: goto label_1fa930;
        case 0x1fa934u: goto label_1fa934;
        case 0x1fa938u: goto label_1fa938;
        case 0x1fa93cu: goto label_1fa93c;
        case 0x1fa940u: goto label_1fa940;
        case 0x1fa944u: goto label_1fa944;
        case 0x1fa948u: goto label_1fa948;
        case 0x1fa94cu: goto label_1fa94c;
        case 0x1fa950u: goto label_1fa950;
        case 0x1fa954u: goto label_1fa954;
        case 0x1fa958u: goto label_1fa958;
        case 0x1fa95cu: goto label_1fa95c;
        case 0x1fa960u: goto label_1fa960;
        case 0x1fa964u: goto label_1fa964;
        case 0x1fa968u: goto label_1fa968;
        case 0x1fa96cu: goto label_1fa96c;
        case 0x1fa970u: goto label_1fa970;
        case 0x1fa974u: goto label_1fa974;
        case 0x1fa978u: goto label_1fa978;
        case 0x1fa97cu: goto label_1fa97c;
        case 0x1fa980u: goto label_1fa980;
        case 0x1fa984u: goto label_1fa984;
        case 0x1fa988u: goto label_1fa988;
        case 0x1fa98cu: goto label_1fa98c;
        case 0x1fa990u: goto label_1fa990;
        case 0x1fa994u: goto label_1fa994;
        case 0x1fa998u: goto label_1fa998;
        case 0x1fa99cu: goto label_1fa99c;
        case 0x1fa9a0u: goto label_1fa9a0;
        case 0x1fa9a4u: goto label_1fa9a4;
        case 0x1fa9a8u: goto label_1fa9a8;
        case 0x1fa9acu: goto label_1fa9ac;
        case 0x1fa9b0u: goto label_1fa9b0;
        case 0x1fa9b4u: goto label_1fa9b4;
        case 0x1fa9b8u: goto label_1fa9b8;
        case 0x1fa9bcu: goto label_1fa9bc;
        case 0x1fa9c0u: goto label_1fa9c0;
        case 0x1fa9c4u: goto label_1fa9c4;
        case 0x1fa9c8u: goto label_1fa9c8;
        case 0x1fa9ccu: goto label_1fa9cc;
        case 0x1fa9d0u: goto label_1fa9d0;
        case 0x1fa9d4u: goto label_1fa9d4;
        case 0x1fa9d8u: goto label_1fa9d8;
        case 0x1fa9dcu: goto label_1fa9dc;
        case 0x1fa9e0u: goto label_1fa9e0;
        case 0x1fa9e4u: goto label_1fa9e4;
        case 0x1fa9e8u: goto label_1fa9e8;
        case 0x1fa9ecu: goto label_1fa9ec;
        case 0x1fa9f0u: goto label_1fa9f0;
        case 0x1fa9f4u: goto label_1fa9f4;
        case 0x1fa9f8u: goto label_1fa9f8;
        case 0x1fa9fcu: goto label_1fa9fc;
        case 0x1faa00u: goto label_1faa00;
        case 0x1faa04u: goto label_1faa04;
        case 0x1faa08u: goto label_1faa08;
        case 0x1faa0cu: goto label_1faa0c;
        case 0x1faa10u: goto label_1faa10;
        case 0x1faa14u: goto label_1faa14;
        case 0x1faa18u: goto label_1faa18;
        case 0x1faa1cu: goto label_1faa1c;
        case 0x1faa20u: goto label_1faa20;
        case 0x1faa24u: goto label_1faa24;
        case 0x1faa28u: goto label_1faa28;
        case 0x1faa2cu: goto label_1faa2c;
        case 0x1faa30u: goto label_1faa30;
        case 0x1faa34u: goto label_1faa34;
        case 0x1faa38u: goto label_1faa38;
        case 0x1faa3cu: goto label_1faa3c;
        case 0x1faa40u: goto label_1faa40;
        case 0x1faa44u: goto label_1faa44;
        case 0x1faa48u: goto label_1faa48;
        case 0x1faa4cu: goto label_1faa4c;
        case 0x1faa50u: goto label_1faa50;
        case 0x1faa54u: goto label_1faa54;
        case 0x1faa58u: goto label_1faa58;
        case 0x1faa5cu: goto label_1faa5c;
        case 0x1faa60u: goto label_1faa60;
        case 0x1faa64u: goto label_1faa64;
        case 0x1faa68u: goto label_1faa68;
        case 0x1faa6cu: goto label_1faa6c;
        case 0x1faa70u: goto label_1faa70;
        case 0x1faa74u: goto label_1faa74;
        case 0x1faa78u: goto label_1faa78;
        case 0x1faa7cu: goto label_1faa7c;
        case 0x1faa80u: goto label_1faa80;
        case 0x1faa84u: goto label_1faa84;
        case 0x1faa88u: goto label_1faa88;
        case 0x1faa8cu: goto label_1faa8c;
        case 0x1faa90u: goto label_1faa90;
        case 0x1faa94u: goto label_1faa94;
        case 0x1faa98u: goto label_1faa98;
        case 0x1faa9cu: goto label_1faa9c;
        case 0x1faaa0u: goto label_1faaa0;
        case 0x1faaa4u: goto label_1faaa4;
        case 0x1faaa8u: goto label_1faaa8;
        case 0x1faaacu: goto label_1faaac;
        case 0x1faab0u: goto label_1faab0;
        case 0x1faab4u: goto label_1faab4;
        case 0x1faab8u: goto label_1faab8;
        case 0x1faabcu: goto label_1faabc;
        case 0x1faac0u: goto label_1faac0;
        case 0x1faac4u: goto label_1faac4;
        case 0x1faac8u: goto label_1faac8;
        case 0x1faaccu: goto label_1faacc;
        case 0x1faad0u: goto label_1faad0;
        case 0x1faad4u: goto label_1faad4;
        case 0x1faad8u: goto label_1faad8;
        case 0x1faadcu: goto label_1faadc;
        case 0x1faae0u: goto label_1faae0;
        case 0x1faae4u: goto label_1faae4;
        case 0x1faae8u: goto label_1faae8;
        case 0x1faaecu: goto label_1faaec;
        case 0x1faaf0u: goto label_1faaf0;
        case 0x1faaf4u: goto label_1faaf4;
        case 0x1faaf8u: goto label_1faaf8;
        case 0x1faafcu: goto label_1faafc;
        case 0x1fab00u: goto label_1fab00;
        case 0x1fab04u: goto label_1fab04;
        case 0x1fab08u: goto label_1fab08;
        case 0x1fab0cu: goto label_1fab0c;
        default: return;
    }

label_1fa340:
    // 0x1fa340: 0xc08f0cc  jal         func_23C330
label_1fa344:
    if (ctx->pc == 0x1FA344u) {
        ctx->pc = 0x1FA348u;
        goto label_1fa348;
    }
    ctx->pc = 0x1FA340u;
    SET_GPR_U32(ctx, 31, 0x1FA348u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA348u;
label_1fa348:
    // 0x1fa348: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa34c:
    // 0x1fa34c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1fa34cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1fa350:
    // 0x1fa350: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fa354:
    // 0x1fa354: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa358:
    // 0x1fa358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa35c:
    // 0x1fa35c: 0x0  nop
    ctx->pc = 0x1fa35cu;
    // NOP
label_1fa360:
    // 0x1fa360: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fa360u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fa364:
    // 0x1fa364: 0x0  nop
    ctx->pc = 0x1fa364u;
    // NOP
label_1fa368:
    // 0x1fa368: 0x0  nop
    ctx->pc = 0x1fa368u;
    // NOP
label_1fa36c:
    // 0x1fa36c: 0xc06d412  jal         func_1B5048
label_1fa370:
    if (ctx->pc == 0x1FA370u) {
        ctx->pc = 0x1FA374u;
        goto label_1fa374;
    }
    ctx->pc = 0x1FA36Cu;
    SET_GPR_U32(ctx, 31, 0x1FA374u);
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x1FA36Cu, 0x1FA374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA374u;
label_1fa374:
    // 0x1fa374: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fa374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fa378:
    // 0x1fa378: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fa378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fa37c:
    // 0x1fa37c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fa37cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fa380:
    // 0x1fa380: 0x3c02c59c  lui         $v0, 0xC59C
    ctx->pc = 0x1fa380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50588 << 16));
label_1fa384:
    // 0x1fa384: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1fa384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1fa388:
    // 0x1fa388: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1fa388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1fa38c:
    // 0x1fa38c: 0xc6821120  lwc1        $f2, 0x1120($s4)
    ctx->pc = 0x1fa38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa390:
    // 0x1fa390: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fa390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fa394:
    // 0x1fa394: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fa394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa398:
    // 0x1fa398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa39c:
    // 0x1fa39c: 0x0  nop
    ctx->pc = 0x1fa39cu;
    // NOP
label_1fa3a0:
    // 0x1fa3a0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1fa3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1fa3a4:
    // 0x1fa3a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1fa3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1fa3a8:
    // 0x1fa3a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1fa3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fa3ac:
    // 0x1fa3ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa3b0:
    // 0x1fa3b0: 0xc6821124  lwc1        $f2, 0x1124($s4)
    ctx->pc = 0x1fa3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa3b4:
    // 0x1fa3b4: 0x46150301  sub.s       $f12, $f0, $f21
    ctx->pc = 0x1fa3b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_1fa3b8:
    // 0x1fa3b8: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x1fa3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1fa3bc:
    // 0x1fa3bc: 0xc06d4c0  jal         func_1B5300
label_1fa3c0:
    if (ctx->pc == 0x1FA3C0u) {
        ctx->pc = 0x1FA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3BCu;
        // 0x1fa3c0: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA3C4u;
        goto label_1fa3c4;
    }
    ctx->pc = 0x1FA3BCu;
    SET_GPR_U32(ctx, 31, 0x1FA3C4u);
    ctx->pc = 0x1FA3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA3BCu;
    // 0x1fa3c0: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5300u, 0x1FA3BCu, 0x1FA3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA3C4u;
label_1fa3c4:
    // 0x1fa3c4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fa3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fa3c8:
    // 0x1fa3c8: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fa3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fa3cc:
    // 0x1fa3cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fa3ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fa3d0:
    // 0x1fa3d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fa3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fa3d4:
    // 0x1fa3d4: 0xc6811128  lwc1        $f1, 0x1128($s4)
    ctx->pc = 0x1fa3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa3d8:
    // 0x1fa3d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1fa3d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fa3dc:
    // 0x1fa3dc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fa3dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fa3e0:
    // 0x1fa3e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa3e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fa3e4:
    // 0x1fa3e4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fa3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fa3e8:
    // 0x1fa3e8: 0xc08f0cc  jal         func_23C330
label_1fa3ec:
    if (ctx->pc == 0x1FA3ECu) {
        ctx->pc = 0x1FA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3E8u;
        // 0x1fa3ec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA3F0u;
        goto label_1fa3f0;
    }
    ctx->pc = 0x1FA3E8u;
    SET_GPR_U32(ctx, 31, 0x1FA3F0u);
    ctx->pc = 0x1FA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA3E8u;
    // 0x1fa3ec: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA3F0u;
label_1fa3f0:
    // 0x1fa3f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa3f4:
    // 0x1fa3f4: 0x0  nop
    ctx->pc = 0x1fa3f4u;
    // NOP
label_1fa3f8:
    // 0x1fa3f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa3f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fa3fc:
    // 0x1fa3fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa400:
    // 0x1fa400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa404:
    // 0x1fa404: 0x0  nop
    ctx->pc = 0x1fa404u;
    // NOP
label_1fa408:
    // 0x1fa408: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fa408u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fa40c:
    // 0x1fa40c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1fa40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1fa410:
    // 0x1fa410: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1fa410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1fa414:
    // 0x1fa414: 0x0  nop
    ctx->pc = 0x1fa414u;
    // NOP
label_1fa418:
    // 0x1fa418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa41c:
    // 0x1fa41c: 0x0  nop
    ctx->pc = 0x1fa41cu;
    // NOP
label_1fa420:
    // 0x1fa420: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1fa420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa424:
    // 0x1fa424: 0x0  nop
    ctx->pc = 0x1fa424u;
    // NOP
label_1fa428:
    // 0x1fa428: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1fa42c:
    if (ctx->pc == 0x1FA42Cu) {
        ctx->pc = 0x1FA430u;
        goto label_1fa430;
    }
    ctx->pc = 0x1FA428u;
    {
        const bool branch_taken_0x1fa428 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa428) {
            ctx->pc = 0x1FA440u;
            goto label_1fa440;
        }
    }
    ctx->pc = 0x1FA430u;
label_1fa430:
    // 0x1fa430: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fa430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1fa434:
    // 0x1fa434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa438:
    // 0x1fa438: 0x0  nop
    ctx->pc = 0x1fa438u;
    // NOP
label_1fa43c:
    // 0x1fa43c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fa43cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fa440:
    // 0x1fa440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fa440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fa444:
    // 0x1fa444: 0xc066e26  jal         func_19B898
label_1fa448:
    if (ctx->pc == 0x1FA448u) {
        ctx->pc = 0x1FA448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA444u;
        // 0x1fa448: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA44Cu;
        goto label_1fa44c;
    }
    ctx->pc = 0x1FA444u;
    SET_GPR_U32(ctx, 31, 0x1FA44Cu);
    ctx->pc = 0x1FA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA444u;
    // 0x1fa448: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1FA444u, 0x1FA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA44Cu;
label_1fa44c:
    // 0x1fa44c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fa44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fa450:
    // 0x1fa450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fa450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fa454:
    // 0x1fa454: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fa454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fa458:
    // 0x1fa458: 0xc066e14  jal         func_19B850
label_1fa45c:
    if (ctx->pc == 0x1FA45Cu) {
        ctx->pc = 0x1FA45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA458u;
        // 0x1fa45c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA460u;
        goto label_1fa460;
    }
    ctx->pc = 0x1FA458u;
    SET_GPR_U32(ctx, 31, 0x1FA460u);
    ctx->pc = 0x1FA45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA458u;
    // 0x1fa45c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1FA458u, 0x1FA460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA460u;
label_1fa460:
    // 0x1fa460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa464:
    // 0x1fa464: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1fa464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa468:
    // 0x1fa468: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fa468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fa46c:
    // 0x1fa46c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa46cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fa470:
    // 0x1fa470: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fa470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fa474:
    // 0x1fa474: 0x8e831980  lw          $v1, 0x1980($s4)
    ctx->pc = 0x1fa474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6528)));
label_1fa478:
    // 0x1fa478: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fa478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fa47c:
    // 0x1fa47c: 0xae831980  sw          $v1, 0x1980($s4)
    ctx->pc = 0x1fa47cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6528), GPR_U32(ctx, 3));
label_1fa480:
    // 0x1fa480: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_1fa484:
    if (ctx->pc == 0x1FA484u) {
        ctx->pc = 0x1FA488u;
        goto label_1fa488;
    }
    ctx->pc = 0x1FA480u;
    {
        const bool branch_taken_0x1fa480 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa480) {
            ctx->pc = 0x1FA4ACu;
            goto label_1fa4ac;
        }
    }
    ctx->pc = 0x1FA488u;
label_1fa488:
    // 0x1fa488: 0xc6811124  lwc1        $f1, 0x1124($s4)
    ctx->pc = 0x1fa488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa48c:
    // 0x1fa48c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1fa48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1fa490:
    // 0x1fa490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa494:
    // 0x1fa494: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1fa494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa498:
    // 0x1fa498: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fa498u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fa49c:
    // 0x1fa49c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1fa49cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa4a0:
    // 0x1fa4a0: 0x0  nop
    ctx->pc = 0x1fa4a0u;
    // NOP
label_1fa4a4:
    // 0x1fa4a4: 0x45000068  bc1f        . + 4 + (0x68 << 2)
label_1fa4a8:
    if (ctx->pc == 0x1FA4A8u) {
        ctx->pc = 0x1FA4ACu;
        goto label_1fa4ac;
    }
    ctx->pc = 0x1FA4A4u;
    {
        const bool branch_taken_0x1fa4a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa4a4) {
            ctx->pc = 0x1FA648u;
            goto label_1fa648;
        }
    }
    ctx->pc = 0x1FA4ACu;
label_1fa4ac:
    // 0x1fa4ac: 0x0  nop
    ctx->pc = 0x1fa4acu;
    // NOP
label_1fa4b0:
    // 0x1fa4b0: 0xc08f0cc  jal         func_23C330
label_1fa4b4:
    if (ctx->pc == 0x1FA4B4u) {
        ctx->pc = 0x1FA4B8u;
        goto label_1fa4b8;
    }
    ctx->pc = 0x1FA4B0u;
    SET_GPR_U32(ctx, 31, 0x1FA4B8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA4B8u;
label_1fa4b8:
    // 0x1fa4b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa4bc:
    // 0x1fa4bc: 0x0  nop
    ctx->pc = 0x1fa4bcu;
    // NOP
label_1fa4c0:
    // 0x1fa4c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fa4c4:
    // 0x1fa4c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa4c8:
    // 0x1fa4c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa4cc:
    // 0x1fa4cc: 0x0  nop
    ctx->pc = 0x1fa4ccu;
    // NOP
label_1fa4d0:
    // 0x1fa4d0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1fa4d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_1fa4d4:
    // 0x1fa4d4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1fa4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1fa4d8:
    // 0x1fa4d8: 0x0  nop
    ctx->pc = 0x1fa4d8u;
    // NOP
label_1fa4dc:
    // 0x1fa4dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa4dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa4e0:
    // 0x1fa4e0: 0xc08f0cc  jal         func_23C330
label_1fa4e4:
    if (ctx->pc == 0x1FA4E4u) {
        ctx->pc = 0x1FA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4E0u;
        // 0x1fa4e4: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA4E8u;
        goto label_1fa4e8;
    }
    ctx->pc = 0x1FA4E0u;
    SET_GPR_U32(ctx, 31, 0x1FA4E8u);
    ctx->pc = 0x1FA4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA4E0u;
    // 0x1fa4e4: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA4E8u;
label_1fa4e8:
    // 0x1fa4e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa4ec:
    // 0x1fa4ec: 0x0  nop
    ctx->pc = 0x1fa4ecu;
    // NOP
label_1fa4f0:
    // 0x1fa4f0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fa4f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1fa4f4:
    // 0x1fa4f4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1fa4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1fa4f8:
    // 0x1fa4f8: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1fa4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fa4fc:
    // 0x1fa4fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa500:
    // 0x1fa500: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fa500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa504:
    // 0x1fa504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa508:
    // 0x1fa508: 0x0  nop
    ctx->pc = 0x1fa508u;
    // NOP
label_1fa50c:
    // 0x1fa50c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1fa50cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1fa510:
    // 0x1fa510: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x1fa510u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
label_1fa514:
    // 0x1fa514: 0x0  nop
    ctx->pc = 0x1fa514u;
    // NOP
label_1fa518:
    // 0x1fa518: 0x0  nop
    ctx->pc = 0x1fa518u;
    // NOP
label_1fa51c:
    // 0x1fa51c: 0xc08f0cc  jal         func_23C330
label_1fa520:
    if (ctx->pc == 0x1FA520u) {
        ctx->pc = 0x1FA524u;
        goto label_1fa524;
    }
    ctx->pc = 0x1FA51Cu;
    SET_GPR_U32(ctx, 31, 0x1FA524u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA524u;
label_1fa524:
    // 0x1fa524: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa528:
    // 0x1fa528: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fa528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fa52c:
    // 0x1fa52c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fa530:
    // 0x1fa530: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa534:
    // 0x1fa534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa538:
    // 0x1fa538: 0x0  nop
    ctx->pc = 0x1fa538u;
    // NOP
label_1fa53c:
    // 0x1fa53c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fa53cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fa540:
    // 0x1fa540: 0x0  nop
    ctx->pc = 0x1fa540u;
    // NOP
label_1fa544:
    // 0x1fa544: 0x0  nop
    ctx->pc = 0x1fa544u;
    // NOP
label_1fa548:
    // 0x1fa548: 0xc06d412  jal         func_1B5048
label_1fa54c:
    if (ctx->pc == 0x1FA54Cu) {
        ctx->pc = 0x1FA550u;
        goto label_1fa550;
    }
    ctx->pc = 0x1FA548u;
    SET_GPR_U32(ctx, 31, 0x1FA550u);
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x1FA548u, 0x1FA550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA550u;
label_1fa550:
    // 0x1fa550: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fa550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fa554:
    // 0x1fa554: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fa554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fa558:
    // 0x1fa558: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fa558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fa55c:
    // 0x1fa55c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1fa55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1fa560:
    // 0x1fa560: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1fa560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fa564:
    // 0x1fa564: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1fa564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1fa568:
    // 0x1fa568: 0xc6821120  lwc1        $f2, 0x1120($s4)
    ctx->pc = 0x1fa568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa56c:
    // 0x1fa56c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fa56cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fa570:
    // 0x1fa570: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fa570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa574:
    // 0x1fa574: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1fa574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1fa578:
    // 0x1fa578: 0xc6801124  lwc1        $f0, 0x1124($s4)
    ctx->pc = 0x1fa578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa57c:
    // 0x1fa57c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa580:
    // 0x1fa580: 0x0  nop
    ctx->pc = 0x1fa580u;
    // NOP
label_1fa584:
    // 0x1fa584: 0x46160b01  sub.s       $f12, $f1, $f22
    ctx->pc = 0x1fa584u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_1fa588:
    // 0x1fa588: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1fa588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1fa58c:
    // 0x1fa58c: 0xc06d4c0  jal         func_1B5300
label_1fa590:
    if (ctx->pc == 0x1FA590u) {
        ctx->pc = 0x1FA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA58Cu;
        // 0x1fa590: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA594u;
        goto label_1fa594;
    }
    ctx->pc = 0x1FA58Cu;
    SET_GPR_U32(ctx, 31, 0x1FA594u);
    ctx->pc = 0x1FA590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA58Cu;
    // 0x1fa590: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5300u, 0x1FA58Cu, 0x1FA594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA594u;
label_1fa594:
    // 0x1fa594: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fa594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fa598:
    // 0x1fa598: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fa598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fa59c:
    // 0x1fa59c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fa59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fa5a0:
    // 0x1fa5a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fa5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fa5a4:
    // 0x1fa5a4: 0xc6811128  lwc1        $f1, 0x1128($s4)
    ctx->pc = 0x1fa5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa5a8:
    // 0x1fa5a8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1fa5a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fa5ac:
    // 0x1fa5ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fa5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fa5b0:
    // 0x1fa5b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa5b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fa5b4:
    // 0x1fa5b4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fa5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fa5b8:
    // 0x1fa5b8: 0xc08f0cc  jal         func_23C330
label_1fa5bc:
    if (ctx->pc == 0x1FA5BCu) {
        ctx->pc = 0x1FA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5B8u;
        // 0x1fa5bc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA5C0u;
        goto label_1fa5c0;
    }
    ctx->pc = 0x1FA5B8u;
    SET_GPR_U32(ctx, 31, 0x1FA5C0u);
    ctx->pc = 0x1FA5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA5B8u;
    // 0x1fa5bc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA5C0u;
label_1fa5c0:
    // 0x1fa5c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa5c4:
    // 0x1fa5c4: 0x0  nop
    ctx->pc = 0x1fa5c4u;
    // NOP
label_1fa5c8:
    // 0x1fa5c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa5c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fa5cc:
    // 0x1fa5cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa5d0:
    // 0x1fa5d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa5d4:
    // 0x1fa5d4: 0x0  nop
    ctx->pc = 0x1fa5d4u;
    // NOP
label_1fa5d8:
    // 0x1fa5d8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fa5d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fa5dc:
    // 0x1fa5dc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1fa5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1fa5e0:
    // 0x1fa5e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1fa5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1fa5e4:
    // 0x1fa5e4: 0x0  nop
    ctx->pc = 0x1fa5e4u;
    // NOP
label_1fa5e8:
    // 0x1fa5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa5ec:
    // 0x1fa5ec: 0x0  nop
    ctx->pc = 0x1fa5ecu;
    // NOP
label_1fa5f0:
    // 0x1fa5f0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1fa5f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa5f4:
    // 0x1fa5f4: 0x0  nop
    ctx->pc = 0x1fa5f4u;
    // NOP
label_1fa5f8:
    // 0x1fa5f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1fa5fc:
    if (ctx->pc == 0x1FA5FCu) {
        ctx->pc = 0x1FA600u;
        goto label_1fa600;
    }
    ctx->pc = 0x1FA5F8u;
    {
        const bool branch_taken_0x1fa5f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa5f8) {
            ctx->pc = 0x1FA610u;
            goto label_1fa610;
        }
    }
    ctx->pc = 0x1FA600u;
label_1fa600:
    // 0x1fa600: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fa600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1fa604:
    // 0x1fa604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa608:
    // 0x1fa608: 0x0  nop
    ctx->pc = 0x1fa608u;
    // NOP
label_1fa60c:
    // 0x1fa60c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fa60cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fa610:
    // 0x1fa610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fa610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fa614:
    // 0x1fa614: 0xc066e26  jal         func_19B898
label_1fa618:
    if (ctx->pc == 0x1FA618u) {
        ctx->pc = 0x1FA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA614u;
        // 0x1fa618: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA61Cu;
        goto label_1fa61c;
    }
    ctx->pc = 0x1FA614u;
    SET_GPR_U32(ctx, 31, 0x1FA61Cu);
    ctx->pc = 0x1FA618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA614u;
    // 0x1fa618: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1FA614u, 0x1FA61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA61Cu;
label_1fa61c:
    // 0x1fa61c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fa61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fa620:
    // 0x1fa620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fa620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fa624:
    // 0x1fa624: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fa624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fa628:
    // 0x1fa628: 0xc066e14  jal         func_19B850
label_1fa62c:
    if (ctx->pc == 0x1FA62Cu) {
        ctx->pc = 0x1FA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA628u;
        // 0x1fa62c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA630u;
        goto label_1fa630;
    }
    ctx->pc = 0x1FA628u;
    SET_GPR_U32(ctx, 31, 0x1FA630u);
    ctx->pc = 0x1FA62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA628u;
    // 0x1fa62c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1FA628u, 0x1FA630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA630u;
label_1fa630:
    // 0x1fa630: 0x3c03c0f0  lui         $v1, 0xC0F0
    ctx->pc = 0x1fa630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49392 << 16));
label_1fa634:
    // 0x1fa634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa638:
    // 0x1fa638: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1fa638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa63c:
    // 0x1fa63c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fa63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fa640:
    // 0x1fa640: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fa644:
    // 0x1fa644: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fa644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fa648:
    // 0x1fa648: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fa648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fa64c:
    // 0x1fa64c: 0x2a630040  slti        $v1, $s3, 0x40
    ctx->pc = 0x1fa64cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
label_1fa650:
    // 0x1fa650: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1fa650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1fa654:
    // 0x1fa654: 0x1460ff18  bnez        $v1, . + 4 + (-0xE8 << 2)
label_1fa658:
    if (ctx->pc == 0x1FA658u) {
        ctx->pc = 0x1FA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA654u;
        // 0x1fa658: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA65Cu;
        goto label_1fa65c;
    }
    ctx->pc = 0x1FA654u;
    {
        const bool branch_taken_0x1fa654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA654u;
        // 0x1fa658: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa654) {
            ctx->pc = 0x1FA2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1fa2b8; return; }
        }
    }
    ctx->pc = 0x1FA65Cu;
label_1fa65c:
    // 0x1fa65c: 0x26d60820  addiu       $s6, $s6, 0x820
    ctx->pc = 0x1fa65cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2080));
label_1fa660:
    // 0x1fa660: 0x26b50400  addiu       $s5, $s5, 0x400
    ctx->pc = 0x1fa660u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1024));
label_1fa664:
    // 0x1fa664: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1fa664u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1fa668:
    // 0x1fa668: 0x96831138  lhu         $v1, 0x1138($s4)
    ctx->pc = 0x1fa668u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4408)));
label_1fa66c:
    // 0x1fa66c: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x1fa66cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fa670:
    // 0x1fa670: 0x1460ff0d  bnez        $v1, . + 4 + (-0xF3 << 2)
label_1fa674:
    if (ctx->pc == 0x1FA674u) {
        ctx->pc = 0x1FA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA670u;
        // 0x1fa674: 0x2961821  addu        $v1, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA678u;
        goto label_1fa678;
    }
    ctx->pc = 0x1FA670u;
    {
        const bool branch_taken_0x1fa670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA670u;
        // 0x1fa674: 0x2961821  addu        $v1, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa670) {
            ctx->pc = 0x1FA2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1fa2a8; return; }
        }
    }
    ctx->pc = 0x1FA678u;
label_1fa678:
    // 0x1fa678: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1fa678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1fa67c:
    // 0x1fa67c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1fa67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1fa680:
    // 0x1fa680: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1fa680u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fa684:
    // 0x1fa684: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1fa684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fa688:
    // 0x1fa688: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1fa688u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fa68c:
    // 0x1fa68c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1fa68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fa690:
    // 0x1fa690: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1fa690u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fa694:
    // 0x1fa694: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1fa694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fa698:
    // 0x1fa698: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fa698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa69c:
    // 0x1fa69c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fa69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa6a0:
    // 0x1fa6a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fa6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fa6a4:
    // 0x1fa6a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fa6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa6a8:
    // 0x1fa6a8: 0x3e00008  jr          $ra
label_1fa6ac:
    if (ctx->pc == 0x1FA6ACu) {
        ctx->pc = 0x1FA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6A8u;
        // 0x1fa6ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA6B0u;
        goto label_1fa6b0;
    }
    ctx->pc = 0x1FA6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6A8u;
        // 0x1fa6ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA6B0u;
label_1fa6b0:
    // 0x1fa6b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fa6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1fa6b4:
    // 0x1fa6b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1fa6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1fa6b8:
    // 0x1fa6b8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1fa6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1fa6bc:
    // 0x1fa6bc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1fa6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1fa6c0:
    // 0x1fa6c0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1fa6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1fa6c4:
    // 0x1fa6c4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1fa6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1fa6c8:
    // 0x1fa6c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fa6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1fa6cc:
    // 0x1fa6cc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fa6ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa6d0:
    // 0x1fa6d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fa6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1fa6d4:
    // 0x1fa6d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fa6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1fa6d8:
    // 0x1fa6d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fa6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fa6dc:
    // 0x1fa6dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fa6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fa6e0:
    // 0x1fa6e0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1fa6e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fa6e4:
    // 0x1fa6e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1fa6e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1fa6e8:
    // 0x1fa6e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fa6e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fa6ec:
    // 0x1fa6ec: 0x90841134  lbu         $a0, 0x1134($a0)
    ctx->pc = 0x1fa6ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4404)));
label_1fa6f0:
    // 0x1fa6f0: 0xc0646ac  jal         func_191AB0
label_1fa6f4:
    if (ctx->pc == 0x1FA6F4u) {
        ctx->pc = 0x1FA6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6F0u;
        // 0x1fa6f4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA6F8u;
        goto label_1fa6f8;
    }
    ctx->pc = 0x1FA6F0u;
    SET_GPR_U32(ctx, 31, 0x1FA6F8u);
    ctx->pc = 0x1FA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA6F0u;
    // 0x1fa6f4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191AB0u, 0x1FA6F0u, 0x1FA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA6F8u;
label_1fa6f8:
    // 0x1fa6f8: 0x92a41134  lbu         $a0, 0x1134($s5)
    ctx->pc = 0x1fa6f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4404)));
label_1fa6fc:
    // 0x1fa6fc: 0xc0646d4  jal         func_191B50
label_1fa700:
    if (ctx->pc == 0x1FA700u) {
        ctx->pc = 0x1FA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6FCu;
        // 0x1fa700: 0x26a51120  addiu       $a1, $s5, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA704u;
        goto label_1fa704;
    }
    ctx->pc = 0x1FA6FCu;
    SET_GPR_U32(ctx, 31, 0x1FA704u);
    ctx->pc = 0x1FA700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA6FCu;
    // 0x1fa700: 0x26a51120  addiu       $a1, $s5, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B50u, 0x1FA6FCu, 0x1FA704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA704u;
label_1fa704:
    // 0x1fa704: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1fa704u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa708:
    // 0x1fa708: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1fa708u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa70c:
    // 0x1fa70c: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1fa710:
    if (ctx->pc == 0x1FA710u) {
        ctx->pc = 0x1FA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA70Cu;
        // 0x1fa710: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA714u;
        goto label_1fa714;
    }
    ctx->pc = 0x1FA70Cu;
    {
        const bool branch_taken_0x1fa70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA70Cu;
        // 0x1fa710: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa70c) {
            ctx->pc = 0x1FA990u;
            goto label_1fa990;
        }
    }
    ctx->pc = 0x1FA714u;
label_1fa714:
    // 0x1fa714: 0x2b61021  addu        $v0, $s5, $s6
    ctx->pc = 0x1fa714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_1fa718:
    // 0x1fa718: 0x24511150  addiu       $s1, $v0, 0x1150
    ctx->pc = 0x1fa718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
label_1fa71c:
    // 0x1fa71c: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x1fa71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_1fa720:
    // 0x1fa720: 0x247200a0  addiu       $s2, $v1, 0xA0
    ctx->pc = 0x1fa720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_1fa724:
    // 0x1fa724: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fa724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa728:
    // 0x1fa728: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1fa728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1fa72c:
    // 0x1fa72c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1fa72cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1fa730:
    // 0x1fa730: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1fa730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1fa734:
    // 0x1fa734: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1fa734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1fa738:
    // 0x1fa738: 0xc08f0cc  jal         func_23C330
label_1fa73c:
    if (ctx->pc == 0x1FA73Cu) {
        ctx->pc = 0x1FA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA738u;
        // 0x1fa73c: 0x96b41130  lhu         $s4, 0x1130($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA740u;
        goto label_1fa740;
    }
    ctx->pc = 0x1FA738u;
    SET_GPR_U32(ctx, 31, 0x1FA740u);
    ctx->pc = 0x1FA73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA738u;
    // 0x1fa73c: 0x96b41130  lhu         $s4, 0x1130($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA740u;
label_1fa740:
    // 0x1fa740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa744:
    // 0x1fa744: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
label_1fa748:
    if (ctx->pc == 0x1FA748u) {
        ctx->pc = 0x1FA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA744u;
        // 0x1fa748: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA74Cu;
        goto label_1fa74c;
    }
    ctx->pc = 0x1FA744u;
    {
        const bool branch_taken_0x1fa744 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1FA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA744u;
        // 0x1fa748: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa744) {
            ctx->pc = 0x1FA758u;
            goto label_1fa758;
        }
    }
    ctx->pc = 0x1FA74Cu;
label_1fa74c:
    // 0x1fa74c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1fa74cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa750:
    // 0x1fa750: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fa754:
    if (ctx->pc == 0x1FA754u) {
        ctx->pc = 0x1FA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA750u;
        // 0x1fa754: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA758u;
        goto label_1fa758;
    }
    ctx->pc = 0x1FA750u;
    {
        const bool branch_taken_0x1fa750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA750u;
        // 0x1fa754: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa750) {
            ctx->pc = 0x1FA774u;
            goto label_1fa774;
        }
    }
    ctx->pc = 0x1FA758u;
label_1fa758:
    // 0x1fa758: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x1fa758u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_1fa75c:
    // 0x1fa75c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1fa75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_1fa760:
    // 0x1fa760: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fa760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1fa764:
    // 0x1fa764: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa768:
    // 0x1fa768: 0x0  nop
    ctx->pc = 0x1fa768u;
    // NOP
label_1fa76c:
    // 0x1fa76c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa76cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fa770:
    // 0x1fa770: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fa770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fa774:
    // 0x1fa774: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fa774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1fa778:
    // 0x1fa778: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa77c:
    // 0x1fa77c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa780:
    // 0x1fa780: 0x0  nop
    ctx->pc = 0x1fa780u;
    // NOP
label_1fa784:
    // 0x1fa784: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fa784u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1fa788:
    // 0x1fa788: 0x0  nop
    ctx->pc = 0x1fa788u;
    // NOP
label_1fa78c:
    // 0x1fa78c: 0x0  nop
    ctx->pc = 0x1fa78cu;
    // NOP
label_1fa790:
    // 0x1fa790: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1fa790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa794:
    // 0x1fa794: 0x0  nop
    ctx->pc = 0x1fa794u;
    // NOP
label_1fa798:
    // 0x1fa798: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1fa79c:
    if (ctx->pc == 0x1FA79Cu) {
        ctx->pc = 0x1FA7A0u;
        goto label_1fa7a0;
    }
    ctx->pc = 0x1FA798u;
    {
        const bool branch_taken_0x1fa798 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa798) {
            ctx->pc = 0x1FA7B0u;
            goto label_1fa7b0;
        }
    }
    ctx->pc = 0x1FA7A0u;
label_1fa7a0:
    // 0x1fa7a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa7a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1fa7a4:
    // 0x1fa7a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fa7a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1fa7a8:
    // 0x1fa7a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fa7ac:
    if (ctx->pc == 0x1FA7ACu) {
        ctx->pc = 0x1FA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7A8u;
        // 0x1fa7ac: 0x3282ffff  andi        $v0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA7B0u;
        goto label_1fa7b0;
    }
    ctx->pc = 0x1FA7A8u;
    {
        const bool branch_taken_0x1fa7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7A8u;
        // 0x1fa7ac: 0x3282ffff  andi        $v0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7a8) {
            ctx->pc = 0x1FA7CCu;
            goto label_1fa7cc;
        }
    }
    ctx->pc = 0x1FA7B0u;
label_1fa7b0:
    // 0x1fa7b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fa7b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1fa7b4:
    // 0x1fa7b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1fa7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1fa7b8:
    // 0x1fa7b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa7b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1fa7bc:
    // 0x1fa7bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fa7bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1fa7c0:
    // 0x1fa7c0: 0x0  nop
    ctx->pc = 0x1fa7c0u;
    // NOP
label_1fa7c4:
    // 0x1fa7c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fa7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1fa7c8:
    // 0x1fa7c8: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x1fa7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_1fa7cc:
    // 0x1fa7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fa7d0:
    // 0x1fa7d0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1fa7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1fa7d4:
    // 0x1fa7d4: 0xc08f0cc  jal         func_23C330
label_1fa7d8:
    if (ctx->pc == 0x1FA7D8u) {
        ctx->pc = 0x1FA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7D4u;
        // 0x1fa7d8: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA7DCu;
        goto label_1fa7dc;
    }
    ctx->pc = 0x1FA7D4u;
    SET_GPR_U32(ctx, 31, 0x1FA7DCu);
    ctx->pc = 0x1FA7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA7D4u;
    // 0x1fa7d8: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA7DCu;
label_1fa7dc:
    // 0x1fa7dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa7e0:
    // 0x1fa7e0: 0x0  nop
    ctx->pc = 0x1fa7e0u;
    // NOP
label_1fa7e4:
    // 0x1fa7e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa7e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fa7e8:
    // 0x1fa7e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa7ec:
    // 0x1fa7ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa7f0:
    // 0x1fa7f0: 0x0  nop
    ctx->pc = 0x1fa7f0u;
    // NOP
label_1fa7f4:
    // 0x1fa7f4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1fa7f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1fa7f8:
    // 0x1fa7f8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1fa7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1fa7fc:
    // 0x1fa7fc: 0x0  nop
    ctx->pc = 0x1fa7fcu;
    // NOP
label_1fa800:
    // 0x1fa800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa804:
    // 0x1fa804: 0xc08f0cc  jal         func_23C330
label_1fa808:
    if (ctx->pc == 0x1FA808u) {
        ctx->pc = 0x1FA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA804u;
        // 0x1fa808: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA80Cu;
        goto label_1fa80c;
    }
    ctx->pc = 0x1FA804u;
    SET_GPR_U32(ctx, 31, 0x1FA80Cu);
    ctx->pc = 0x1FA808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA804u;
    // 0x1fa808: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA80Cu;
label_1fa80c:
    // 0x1fa80c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa810:
    // 0x1fa810: 0x0  nop
    ctx->pc = 0x1fa810u;
    // NOP
label_1fa814:
    // 0x1fa814: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fa814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1fa818:
    // 0x1fa818: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1fa818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1fa81c:
    // 0x1fa81c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1fa81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fa820:
    // 0x1fa820: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa824:
    // 0x1fa824: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fa824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa828:
    // 0x1fa828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa82c:
    // 0x1fa82c: 0x0  nop
    ctx->pc = 0x1fa82cu;
    // NOP
label_1fa830:
    // 0x1fa830: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1fa830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1fa834:
    // 0x1fa834: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x1fa834u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
label_1fa838:
    // 0x1fa838: 0x0  nop
    ctx->pc = 0x1fa838u;
    // NOP
label_1fa83c:
    // 0x1fa83c: 0x0  nop
    ctx->pc = 0x1fa83cu;
    // NOP
label_1fa840:
    // 0x1fa840: 0xc08f0cc  jal         func_23C330
label_1fa844:
    if (ctx->pc == 0x1FA844u) {
        ctx->pc = 0x1FA848u;
        goto label_1fa848;
    }
    ctx->pc = 0x1FA840u;
    SET_GPR_U32(ctx, 31, 0x1FA848u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA848u;
label_1fa848:
    // 0x1fa848: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa84c:
    // 0x1fa84c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fa84cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fa850:
    // 0x1fa850: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fa854:
    // 0x1fa854: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa858:
    // 0x1fa858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa85c:
    // 0x1fa85c: 0x0  nop
    ctx->pc = 0x1fa85cu;
    // NOP
label_1fa860:
    // 0x1fa860: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1fa860u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1fa864:
    // 0x1fa864: 0x0  nop
    ctx->pc = 0x1fa864u;
    // NOP
label_1fa868:
    // 0x1fa868: 0x0  nop
    ctx->pc = 0x1fa868u;
    // NOP
label_1fa86c:
    // 0x1fa86c: 0xc06d412  jal         func_1B5048
label_1fa870:
    if (ctx->pc == 0x1FA870u) {
        ctx->pc = 0x1FA874u;
        goto label_1fa874;
    }
    ctx->pc = 0x1FA86Cu;
    SET_GPR_U32(ctx, 31, 0x1FA874u);
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x1FA86Cu, 0x1FA874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA874u;
label_1fa874:
    // 0x1fa874: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fa874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fa878:
    // 0x1fa878: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fa878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fa87c:
    // 0x1fa87c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fa87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fa880:
    // 0x1fa880: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1fa880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1fa884:
    // 0x1fa884: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1fa884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fa888:
    // 0x1fa888: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1fa888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1fa88c:
    // 0x1fa88c: 0xc6a21120  lwc1        $f2, 0x1120($s5)
    ctx->pc = 0x1fa88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa890:
    // 0x1fa890: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1fa890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1fa894:
    // 0x1fa894: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fa894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa898:
    // 0x1fa898: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1fa898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1fa89c:
    // 0x1fa89c: 0xc6a01124  lwc1        $f0, 0x1124($s5)
    ctx->pc = 0x1fa89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa8a0:
    // 0x1fa8a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa8a4:
    // 0x1fa8a4: 0x0  nop
    ctx->pc = 0x1fa8a4u;
    // NOP
label_1fa8a8:
    // 0x1fa8a8: 0x46160b01  sub.s       $f12, $f1, $f22
    ctx->pc = 0x1fa8a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_1fa8ac:
    // 0x1fa8ac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1fa8acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1fa8b0:
    // 0x1fa8b0: 0xc06d4c0  jal         func_1B5300
label_1fa8b4:
    if (ctx->pc == 0x1FA8B4u) {
        ctx->pc = 0x1FA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8B0u;
        // 0x1fa8b4: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA8B8u;
        goto label_1fa8b8;
    }
    ctx->pc = 0x1FA8B0u;
    SET_GPR_U32(ctx, 31, 0x1FA8B8u);
    ctx->pc = 0x1FA8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8B0u;
    // 0x1fa8b4: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5300u, 0x1FA8B0u, 0x1FA8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8B8u;
label_1fa8b8:
    // 0x1fa8b8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fa8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fa8bc:
    // 0x1fa8bc: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fa8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fa8c0:
    // 0x1fa8c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fa8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fa8c4:
    // 0x1fa8c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fa8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fa8c8:
    // 0x1fa8c8: 0xc6a11128  lwc1        $f1, 0x1128($s5)
    ctx->pc = 0x1fa8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa8cc:
    // 0x1fa8cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1fa8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fa8d0:
    // 0x1fa8d0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1fa8d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1fa8d4:
    // 0x1fa8d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa8d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fa8d8:
    // 0x1fa8d8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fa8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fa8dc:
    // 0x1fa8dc: 0xc08f0cc  jal         func_23C330
label_1fa8e0:
    if (ctx->pc == 0x1FA8E0u) {
        ctx->pc = 0x1FA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8DCu;
        // 0x1fa8e0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA8E4u;
        goto label_1fa8e4;
    }
    ctx->pc = 0x1FA8DCu;
    SET_GPR_U32(ctx, 31, 0x1FA8E4u);
    ctx->pc = 0x1FA8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8DCu;
    // 0x1fa8e0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA8E4u;
label_1fa8e4:
    // 0x1fa8e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa8e8:
    // 0x1fa8e8: 0x0  nop
    ctx->pc = 0x1fa8e8u;
    // NOP
label_1fa8ec:
    // 0x1fa8ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa8ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fa8f0:
    // 0x1fa8f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa8f4:
    // 0x1fa8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa8f8:
    // 0x1fa8f8: 0x0  nop
    ctx->pc = 0x1fa8f8u;
    // NOP
label_1fa8fc:
    // 0x1fa8fc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fa8fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fa900:
    // 0x1fa900: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1fa900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1fa904:
    // 0x1fa904: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1fa904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1fa908:
    // 0x1fa908: 0x0  nop
    ctx->pc = 0x1fa908u;
    // NOP
label_1fa90c:
    // 0x1fa90c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa910:
    // 0x1fa910: 0x0  nop
    ctx->pc = 0x1fa910u;
    // NOP
label_1fa914:
    // 0x1fa914: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1fa914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa918:
    // 0x1fa918: 0x0  nop
    ctx->pc = 0x1fa918u;
    // NOP
label_1fa91c:
    // 0x1fa91c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1fa920:
    if (ctx->pc == 0x1FA920u) {
        ctx->pc = 0x1FA924u;
        goto label_1fa924;
    }
    ctx->pc = 0x1FA91Cu;
    {
        const bool branch_taken_0x1fa91c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa91c) {
            ctx->pc = 0x1FA934u;
            goto label_1fa934;
        }
    }
    ctx->pc = 0x1FA924u;
label_1fa924:
    // 0x1fa924: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fa924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1fa928:
    // 0x1fa928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa92c:
    // 0x1fa92c: 0x0  nop
    ctx->pc = 0x1fa92cu;
    // NOP
label_1fa930:
    // 0x1fa930: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fa930u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fa934:
    // 0x1fa934: 0x0  nop
    ctx->pc = 0x1fa934u;
    // NOP
label_1fa938:
    // 0x1fa938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fa938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fa93c:
    // 0x1fa93c: 0xc066e26  jal         func_19B898
label_1fa940:
    if (ctx->pc == 0x1FA940u) {
        ctx->pc = 0x1FA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA93Cu;
        // 0x1fa940: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA944u;
        goto label_1fa944;
    }
    ctx->pc = 0x1FA93Cu;
    SET_GPR_U32(ctx, 31, 0x1FA944u);
    ctx->pc = 0x1FA940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA93Cu;
    // 0x1fa940: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1FA93Cu, 0x1FA944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA944u;
label_1fa944:
    // 0x1fa944: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fa944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fa948:
    // 0x1fa948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fa948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fa94c:
    // 0x1fa94c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fa94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fa950:
    // 0x1fa950: 0xc066e14  jal         func_19B850
label_1fa954:
    if (ctx->pc == 0x1FA954u) {
        ctx->pc = 0x1FA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA950u;
        // 0x1fa954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA958u;
        goto label_1fa958;
    }
    ctx->pc = 0x1FA950u;
    SET_GPR_U32(ctx, 31, 0x1FA958u);
    ctx->pc = 0x1FA954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA950u;
    // 0x1fa954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1FA950u, 0x1FA958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA958u;
label_1fa958:
    // 0x1fa958: 0x3c03c0f0  lui         $v1, 0xC0F0
    ctx->pc = 0x1fa958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49392 << 16));
label_1fa95c:
    // 0x1fa95c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fa95cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fa960:
    // 0x1fa960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa964:
    // 0x1fa964: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1fa964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1fa968:
    // 0x1fa968: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1fa968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa96c:
    // 0x1fa96c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fa96cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fa970:
    // 0x1fa970: 0x2a630040  slti        $v1, $s3, 0x40
    ctx->pc = 0x1fa970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
label_1fa974:
    // 0x1fa974: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fa978:
    // 0x1fa978: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fa978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fa97c:
    // 0x1fa97c: 0x1460ff6a  bnez        $v1, . + 4 + (-0x96 << 2)
label_1fa980:
    if (ctx->pc == 0x1FA980u) {
        ctx->pc = 0x1FA980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA97Cu;
        // 0x1fa980: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA984u;
        goto label_1fa984;
    }
    ctx->pc = 0x1FA97Cu;
    {
        const bool branch_taken_0x1fa97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA97Cu;
        // 0x1fa980: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa97c) {
            ctx->pc = 0x1FA728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa728;
        }
    }
    ctx->pc = 0x1FA984u;
label_1fa984:
    // 0x1fa984: 0x26f70820  addiu       $s7, $s7, 0x820
    ctx->pc = 0x1fa984u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2080));
label_1fa988:
    // 0x1fa988: 0x26d60400  addiu       $s6, $s6, 0x400
    ctx->pc = 0x1fa988u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1024));
label_1fa98c:
    // 0x1fa98c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1fa98cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1fa990:
    // 0x1fa990: 0x96a31138  lhu         $v1, 0x1138($s5)
    ctx->pc = 0x1fa990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4408)));
label_1fa994:
    // 0x1fa994: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x1fa994u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fa998:
    // 0x1fa998: 0x1460ff5e  bnez        $v1, . + 4 + (-0xA2 << 2)
label_1fa99c:
    if (ctx->pc == 0x1FA99Cu) {
        ctx->pc = 0x1FA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA998u;
        // 0x1fa99c: 0x2b71821  addu        $v1, $s5, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA9A0u;
        goto label_1fa9a0;
    }
    ctx->pc = 0x1FA998u;
    {
        const bool branch_taken_0x1fa998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA998u;
        // 0x1fa99c: 0x2b71821  addu        $v1, $s5, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa998) {
            ctx->pc = 0x1FA714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa714;
        }
    }
    ctx->pc = 0x1FA9A0u;
label_1fa9a0:
    // 0x1fa9a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1fa9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1fa9a4:
    // 0x1fa9a4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1fa9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1fa9a8:
    // 0x1fa9a8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1fa9a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1fa9ac:
    // 0x1fa9ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1fa9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fa9b0:
    // 0x1fa9b0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1fa9b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fa9b4:
    // 0x1fa9b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1fa9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fa9b8:
    // 0x1fa9b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1fa9b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fa9bc:
    // 0x1fa9bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1fa9bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fa9c0:
    // 0x1fa9c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1fa9c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fa9c4:
    // 0x1fa9c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fa9c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fa9c8:
    // 0x1fa9c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fa9c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa9cc:
    // 0x1fa9cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fa9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fa9d0:
    // 0x1fa9d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fa9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa9d4:
    // 0x1fa9d4: 0x3e00008  jr          $ra
label_1fa9d8:
    if (ctx->pc == 0x1FA9D8u) {
        ctx->pc = 0x1FA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9D4u;
        // 0x1fa9d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA9DCu;
        goto label_1fa9dc;
    }
    ctx->pc = 0x1FA9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9D4u;
        // 0x1fa9d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA9DCu;
label_1fa9dc:
    // 0x1fa9dc: 0x0  nop
    ctx->pc = 0x1fa9dcu;
    // NOP
label_1fa9e0:
    // 0x1fa9e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fa9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fa9e4:
    // 0x1fa9e4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fa9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fa9e8:
    // 0x1fa9e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fa9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1fa9ec:
    // 0x1fa9ec: 0x2442a5a0  addiu       $v0, $v0, -0x5A60
    ctx->pc = 0x1fa9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944160));
label_1fa9f0:
    // 0x1fa9f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fa9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fa9f4:
    // 0x1fa9f4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1fa9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1fa9f8:
    // 0x1fa9f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fa9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fa9fc:
    // 0x1fa9fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fa9fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1faa00:
    // 0x1faa00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1faa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1faa04:
    // 0x1faa04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1faa04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1faa08:
    // 0x1faa08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1faa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1faa0c:
    // 0x1faa0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1faa0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1faa10:
    // 0x1faa10: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1faa10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1faa14:
    // 0x1faa14: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1faa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1faa18:
    // 0x1faa18: 0xc0590dc  jal         func_164370
label_1faa1c:
    if (ctx->pc == 0x1FAA1Cu) {
        ctx->pc = 0x1FAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA18u;
        // 0x1faa1c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAA20u;
        goto label_1faa20;
    }
    ctx->pc = 0x1FAA18u;
    SET_GPR_U32(ctx, 31, 0x1FAA20u);
    ctx->pc = 0x1FAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAA18u;
    // 0x1faa1c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1FAA18u, 0x1FAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAA20u;
label_1faa20:
    // 0x1faa20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1faa20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1faa24:
    // 0x1faa24: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_1faa28:
    if (ctx->pc == 0x1FAA28u) {
        ctx->pc = 0x1FAA2Cu;
        goto label_1faa2c;
    }
    ctx->pc = 0x1FAA24u;
    {
        const bool branch_taken_0x1faa24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faa24) {
            ctx->pc = 0x1FAB00u;
            goto label_1fab00;
        }
    }
    ctx->pc = 0x1FAA2Cu;
label_1faa2c:
    // 0x1faa2c: 0xdf8689c8  ld          $a2, -0x7638($gp)
    ctx->pc = 0x1faa2cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937032)));
label_1faa30:
    // 0x1faa30: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x1faa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
label_1faa34:
    // 0x1faa34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1faa34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1faa38:
    // 0x1faa38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1faa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1faa3c:
    // 0x1faa3c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1faa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1faa40:
    // 0x1faa40: 0x24070053  addiu       $a3, $zero, 0x53
    ctx->pc = 0x1faa40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1faa44:
    // 0x1faa44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1faa44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1faa48:
    // 0x1faa48: 0xc0717e8  jal         func_1C5FA0
label_1faa4c:
    if (ctx->pc == 0x1FAA4Cu) {
        ctx->pc = 0x1FAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA48u;
        // 0x1faa4c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAA50u;
        goto label_1faa50;
    }
    ctx->pc = 0x1FAA48u;
    SET_GPR_U32(ctx, 31, 0x1FAA50u);
    ctx->pc = 0x1FAA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAA48u;
    // 0x1faa4c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5FA0u, 0x1FAA48u, 0x1FAA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAA50u;
label_1faa50:
    // 0x1faa50: 0x920202e0  lbu         $v0, 0x2E0($s0)
    ctx->pc = 0x1faa50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
label_1faa54:
    // 0x1faa54: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1faa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1faa58:
    // 0x1faa58: 0xa20202e0  sb          $v0, 0x2E0($s0)
    ctx->pc = 0x1faa58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
label_1faa5c:
    // 0x1faa5c: 0xc08f0cc  jal         func_23C330
label_1faa60:
    if (ctx->pc == 0x1FAA60u) {
        ctx->pc = 0x1FAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA5Cu;
        // 0x1faa60: 0xa21302e4  sb          $s3, 0x2E4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAA64u;
        goto label_1faa64;
    }
    ctx->pc = 0x1FAA5Cu;
    SET_GPR_U32(ctx, 31, 0x1FAA64u);
    ctx->pc = 0x1FAA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAA5Cu;
    // 0x1faa60: 0xa21302e4  sb          $s3, 0x2E4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FAA64u;
label_1faa64:
    // 0x1faa64: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1faa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_1faa68:
    // 0x1faa68: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1faa68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1faa6c:
    // 0x1faa6c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1faa6cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1faa70:
    // 0x1faa70: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1faa70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1faa74:
    // 0x1faa74: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x1faa74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1faa78:
    // 0x1faa78: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1faa78u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1faa7c:
    // 0x1faa7c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1faa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1faa80:
    // 0x1faa80: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1faa80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1faa84:
    // 0x1faa84: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1faa84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1faa88:
    // 0x1faa88: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1faa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1faa8c:
    // 0x1faa8c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1faa8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1faa90:
    // 0x1faa90: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x1faa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_1faa94:
    // 0x1faa94: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1faa94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1faa98:
    // 0x1faa98: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x1faa98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1faa9c:
    // 0x1faa9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1faa9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1faaa0:
    // 0x1faaa0: 0x46024042  mul.s       $f1, $f8, $f2
    ctx->pc = 0x1faaa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_1faaa4:
    // 0x1faaa4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1faaa4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_1faaa8:
    // 0x1faaa8: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x1faaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1faaac:
    // 0x1faaac: 0x0  nop
    ctx->pc = 0x1faaacu;
    // NOP
label_1faab0:
    // 0x1faab0: 0x46803820  cvt.s.w     $f0, $f7
    ctx->pc = 0x1faab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1faab4:
    // 0x1faab4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1faab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_1faab8:
    // 0x1faab8: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x1faab8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
label_1faabc:
    // 0x1faabc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1faabcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1faac0:
    // 0x1faac0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1faac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1faac4:
    // 0x1faac4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1faac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1faac8:
    // 0x1faac8: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x1faac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_1faacc:
    // 0x1faacc: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x1faaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
label_1faad0:
    // 0x1faad0: 0xe6030300  swc1        $f3, 0x300($s0)
    ctx->pc = 0x1faad0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
label_1faad4:
    // 0x1faad4: 0xe6020304  swc1        $f2, 0x304($s0)
    ctx->pc = 0x1faad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
label_1faad8:
    // 0x1faad8: 0xc064aa4  jal         func_192A90
label_1faadc:
    if (ctx->pc == 0x1FAADCu) {
        ctx->pc = 0x1FAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAD8u;
        // 0x1faadc: 0xe60c02a4  swc1        $f12, 0x2A4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAAE0u;
        goto label_1faae0;
    }
    ctx->pc = 0x1FAAD8u;
    SET_GPR_U32(ctx, 31, 0x1FAAE0u);
    ctx->pc = 0x1FAADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAAD8u;
    // 0x1faadc: 0xe60c02a4  swc1        $f12, 0x2A4($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A90u, 0x1FAAD8u, 0x1FAAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAAE0u;
label_1faae0:
    // 0x1faae0: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x1faae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
label_1faae4:
    // 0x1faae4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1faae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_1faae8:
    // 0x1faae8: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1faae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
label_1faaec:
    // 0x1faaec: 0x2484ab20  addiu       $a0, $a0, -0x54E0
    ctx->pc = 0x1faaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945568));
label_1faaf0:
    // 0x1faaf0: 0xa20002e2  sb          $zero, 0x2E2($s0)
    ctx->pc = 0x1faaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 738), (uint8_t)GPR_U32(ctx, 0));
label_1faaf4:
    // 0x1faaf4: 0x24637960  addiu       $v1, $v1, 0x7960
    ctx->pc = 0x1faaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31072));
label_1faaf8:
    // 0x1faaf8: 0xae040364  sw          $a0, 0x364($s0)
    ctx->pc = 0x1faaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 4));
label_1faafc:
    // 0x1faafc: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x1faafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
label_1fab00:
    // 0x1fab00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fab00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fab04:
    // 0x1fab04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fab04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fab08:
    // 0x1fab08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fab08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fab0c:
    // 0x1fab0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fab0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1fab10u;
    return;
}
