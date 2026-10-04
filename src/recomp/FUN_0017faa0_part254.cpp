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


void FUN_0017faa0_part254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fb330u: goto label_1fb330;
        case 0x1fb334u: goto label_1fb334;
        case 0x1fb338u: goto label_1fb338;
        case 0x1fb33cu: goto label_1fb33c;
        case 0x1fb340u: goto label_1fb340;
        case 0x1fb344u: goto label_1fb344;
        case 0x1fb348u: goto label_1fb348;
        case 0x1fb34cu: goto label_1fb34c;
        case 0x1fb350u: goto label_1fb350;
        case 0x1fb354u: goto label_1fb354;
        case 0x1fb358u: goto label_1fb358;
        case 0x1fb35cu: goto label_1fb35c;
        case 0x1fb360u: goto label_1fb360;
        case 0x1fb364u: goto label_1fb364;
        case 0x1fb368u: goto label_1fb368;
        case 0x1fb36cu: goto label_1fb36c;
        case 0x1fb370u: goto label_1fb370;
        case 0x1fb374u: goto label_1fb374;
        case 0x1fb378u: goto label_1fb378;
        case 0x1fb37cu: goto label_1fb37c;
        case 0x1fb380u: goto label_1fb380;
        case 0x1fb384u: goto label_1fb384;
        case 0x1fb388u: goto label_1fb388;
        case 0x1fb38cu: goto label_1fb38c;
        case 0x1fb390u: goto label_1fb390;
        case 0x1fb394u: goto label_1fb394;
        case 0x1fb398u: goto label_1fb398;
        case 0x1fb39cu: goto label_1fb39c;
        case 0x1fb3a0u: goto label_1fb3a0;
        case 0x1fb3a4u: goto label_1fb3a4;
        case 0x1fb3a8u: goto label_1fb3a8;
        case 0x1fb3acu: goto label_1fb3ac;
        case 0x1fb3b0u: goto label_1fb3b0;
        case 0x1fb3b4u: goto label_1fb3b4;
        case 0x1fb3b8u: goto label_1fb3b8;
        case 0x1fb3bcu: goto label_1fb3bc;
        case 0x1fb3c0u: goto label_1fb3c0;
        case 0x1fb3c4u: goto label_1fb3c4;
        case 0x1fb3c8u: goto label_1fb3c8;
        case 0x1fb3ccu: goto label_1fb3cc;
        case 0x1fb3d0u: goto label_1fb3d0;
        case 0x1fb3d4u: goto label_1fb3d4;
        case 0x1fb3d8u: goto label_1fb3d8;
        case 0x1fb3dcu: goto label_1fb3dc;
        case 0x1fb3e0u: goto label_1fb3e0;
        case 0x1fb3e4u: goto label_1fb3e4;
        case 0x1fb3e8u: goto label_1fb3e8;
        case 0x1fb3ecu: goto label_1fb3ec;
        case 0x1fb3f0u: goto label_1fb3f0;
        case 0x1fb3f4u: goto label_1fb3f4;
        case 0x1fb3f8u: goto label_1fb3f8;
        case 0x1fb3fcu: goto label_1fb3fc;
        case 0x1fb400u: goto label_1fb400;
        case 0x1fb404u: goto label_1fb404;
        case 0x1fb408u: goto label_1fb408;
        case 0x1fb40cu: goto label_1fb40c;
        case 0x1fb410u: goto label_1fb410;
        case 0x1fb414u: goto label_1fb414;
        case 0x1fb418u: goto label_1fb418;
        case 0x1fb41cu: goto label_1fb41c;
        case 0x1fb420u: goto label_1fb420;
        case 0x1fb424u: goto label_1fb424;
        case 0x1fb428u: goto label_1fb428;
        case 0x1fb42cu: goto label_1fb42c;
        case 0x1fb430u: goto label_1fb430;
        case 0x1fb434u: goto label_1fb434;
        case 0x1fb438u: goto label_1fb438;
        case 0x1fb43cu: goto label_1fb43c;
        case 0x1fb440u: goto label_1fb440;
        case 0x1fb444u: goto label_1fb444;
        case 0x1fb448u: goto label_1fb448;
        case 0x1fb44cu: goto label_1fb44c;
        case 0x1fb450u: goto label_1fb450;
        case 0x1fb454u: goto label_1fb454;
        case 0x1fb458u: goto label_1fb458;
        case 0x1fb45cu: goto label_1fb45c;
        case 0x1fb460u: goto label_1fb460;
        case 0x1fb464u: goto label_1fb464;
        case 0x1fb468u: goto label_1fb468;
        case 0x1fb46cu: goto label_1fb46c;
        case 0x1fb470u: goto label_1fb470;
        case 0x1fb474u: goto label_1fb474;
        case 0x1fb478u: goto label_1fb478;
        case 0x1fb47cu: goto label_1fb47c;
        case 0x1fb480u: goto label_1fb480;
        case 0x1fb484u: goto label_1fb484;
        case 0x1fb488u: goto label_1fb488;
        case 0x1fb48cu: goto label_1fb48c;
        case 0x1fb490u: goto label_1fb490;
        case 0x1fb494u: goto label_1fb494;
        case 0x1fb498u: goto label_1fb498;
        case 0x1fb49cu: goto label_1fb49c;
        case 0x1fb4a0u: goto label_1fb4a0;
        case 0x1fb4a4u: goto label_1fb4a4;
        case 0x1fb4a8u: goto label_1fb4a8;
        case 0x1fb4acu: goto label_1fb4ac;
        case 0x1fb4b0u: goto label_1fb4b0;
        case 0x1fb4b4u: goto label_1fb4b4;
        case 0x1fb4b8u: goto label_1fb4b8;
        case 0x1fb4bcu: goto label_1fb4bc;
        case 0x1fb4c0u: goto label_1fb4c0;
        case 0x1fb4c4u: goto label_1fb4c4;
        case 0x1fb4c8u: goto label_1fb4c8;
        case 0x1fb4ccu: goto label_1fb4cc;
        case 0x1fb4d0u: goto label_1fb4d0;
        case 0x1fb4d4u: goto label_1fb4d4;
        case 0x1fb4d8u: goto label_1fb4d8;
        case 0x1fb4dcu: goto label_1fb4dc;
        case 0x1fb4e0u: goto label_1fb4e0;
        case 0x1fb4e4u: goto label_1fb4e4;
        case 0x1fb4e8u: goto label_1fb4e8;
        case 0x1fb4ecu: goto label_1fb4ec;
        case 0x1fb4f0u: goto label_1fb4f0;
        case 0x1fb4f4u: goto label_1fb4f4;
        case 0x1fb4f8u: goto label_1fb4f8;
        case 0x1fb4fcu: goto label_1fb4fc;
        case 0x1fb500u: goto label_1fb500;
        case 0x1fb504u: goto label_1fb504;
        case 0x1fb508u: goto label_1fb508;
        case 0x1fb50cu: goto label_1fb50c;
        case 0x1fb510u: goto label_1fb510;
        case 0x1fb514u: goto label_1fb514;
        case 0x1fb518u: goto label_1fb518;
        case 0x1fb51cu: goto label_1fb51c;
        case 0x1fb520u: goto label_1fb520;
        case 0x1fb524u: goto label_1fb524;
        case 0x1fb528u: goto label_1fb528;
        case 0x1fb52cu: goto label_1fb52c;
        case 0x1fb530u: goto label_1fb530;
        case 0x1fb534u: goto label_1fb534;
        case 0x1fb538u: goto label_1fb538;
        case 0x1fb53cu: goto label_1fb53c;
        case 0x1fb540u: goto label_1fb540;
        case 0x1fb544u: goto label_1fb544;
        case 0x1fb548u: goto label_1fb548;
        case 0x1fb54cu: goto label_1fb54c;
        case 0x1fb550u: goto label_1fb550;
        case 0x1fb554u: goto label_1fb554;
        case 0x1fb558u: goto label_1fb558;
        case 0x1fb55cu: goto label_1fb55c;
        case 0x1fb560u: goto label_1fb560;
        case 0x1fb564u: goto label_1fb564;
        case 0x1fb568u: goto label_1fb568;
        case 0x1fb56cu: goto label_1fb56c;
        case 0x1fb570u: goto label_1fb570;
        case 0x1fb574u: goto label_1fb574;
        case 0x1fb578u: goto label_1fb578;
        case 0x1fb57cu: goto label_1fb57c;
        case 0x1fb580u: goto label_1fb580;
        case 0x1fb584u: goto label_1fb584;
        case 0x1fb588u: goto label_1fb588;
        case 0x1fb58cu: goto label_1fb58c;
        case 0x1fb590u: goto label_1fb590;
        case 0x1fb594u: goto label_1fb594;
        case 0x1fb598u: goto label_1fb598;
        case 0x1fb59cu: goto label_1fb59c;
        case 0x1fb5a0u: goto label_1fb5a0;
        case 0x1fb5a4u: goto label_1fb5a4;
        case 0x1fb5a8u: goto label_1fb5a8;
        case 0x1fb5acu: goto label_1fb5ac;
        case 0x1fb5b0u: goto label_1fb5b0;
        case 0x1fb5b4u: goto label_1fb5b4;
        case 0x1fb5b8u: goto label_1fb5b8;
        case 0x1fb5bcu: goto label_1fb5bc;
        case 0x1fb5c0u: goto label_1fb5c0;
        case 0x1fb5c4u: goto label_1fb5c4;
        case 0x1fb5c8u: goto label_1fb5c8;
        case 0x1fb5ccu: goto label_1fb5cc;
        case 0x1fb5d0u: goto label_1fb5d0;
        case 0x1fb5d4u: goto label_1fb5d4;
        case 0x1fb5d8u: goto label_1fb5d8;
        case 0x1fb5dcu: goto label_1fb5dc;
        case 0x1fb5e0u: goto label_1fb5e0;
        case 0x1fb5e4u: goto label_1fb5e4;
        case 0x1fb5e8u: goto label_1fb5e8;
        case 0x1fb5ecu: goto label_1fb5ec;
        case 0x1fb5f0u: goto label_1fb5f0;
        case 0x1fb5f4u: goto label_1fb5f4;
        case 0x1fb5f8u: goto label_1fb5f8;
        case 0x1fb5fcu: goto label_1fb5fc;
        case 0x1fb600u: goto label_1fb600;
        case 0x1fb604u: goto label_1fb604;
        case 0x1fb608u: goto label_1fb608;
        case 0x1fb60cu: goto label_1fb60c;
        case 0x1fb610u: goto label_1fb610;
        case 0x1fb614u: goto label_1fb614;
        case 0x1fb618u: goto label_1fb618;
        case 0x1fb61cu: goto label_1fb61c;
        case 0x1fb620u: goto label_1fb620;
        case 0x1fb624u: goto label_1fb624;
        case 0x1fb628u: goto label_1fb628;
        case 0x1fb62cu: goto label_1fb62c;
        case 0x1fb630u: goto label_1fb630;
        case 0x1fb634u: goto label_1fb634;
        case 0x1fb638u: goto label_1fb638;
        case 0x1fb63cu: goto label_1fb63c;
        case 0x1fb640u: goto label_1fb640;
        case 0x1fb644u: goto label_1fb644;
        case 0x1fb648u: goto label_1fb648;
        case 0x1fb64cu: goto label_1fb64c;
        case 0x1fb650u: goto label_1fb650;
        case 0x1fb654u: goto label_1fb654;
        case 0x1fb658u: goto label_1fb658;
        case 0x1fb65cu: goto label_1fb65c;
        case 0x1fb660u: goto label_1fb660;
        case 0x1fb664u: goto label_1fb664;
        case 0x1fb668u: goto label_1fb668;
        case 0x1fb66cu: goto label_1fb66c;
        case 0x1fb670u: goto label_1fb670;
        case 0x1fb674u: goto label_1fb674;
        case 0x1fb678u: goto label_1fb678;
        case 0x1fb67cu: goto label_1fb67c;
        case 0x1fb680u: goto label_1fb680;
        case 0x1fb684u: goto label_1fb684;
        case 0x1fb688u: goto label_1fb688;
        case 0x1fb68cu: goto label_1fb68c;
        case 0x1fb690u: goto label_1fb690;
        case 0x1fb694u: goto label_1fb694;
        case 0x1fb698u: goto label_1fb698;
        case 0x1fb69cu: goto label_1fb69c;
        case 0x1fb6a0u: goto label_1fb6a0;
        case 0x1fb6a4u: goto label_1fb6a4;
        case 0x1fb6a8u: goto label_1fb6a8;
        case 0x1fb6acu: goto label_1fb6ac;
        case 0x1fb6b0u: goto label_1fb6b0;
        case 0x1fb6b4u: goto label_1fb6b4;
        case 0x1fb6b8u: goto label_1fb6b8;
        case 0x1fb6bcu: goto label_1fb6bc;
        case 0x1fb6c0u: goto label_1fb6c0;
        case 0x1fb6c4u: goto label_1fb6c4;
        case 0x1fb6c8u: goto label_1fb6c8;
        case 0x1fb6ccu: goto label_1fb6cc;
        case 0x1fb6d0u: goto label_1fb6d0;
        case 0x1fb6d4u: goto label_1fb6d4;
        case 0x1fb6d8u: goto label_1fb6d8;
        case 0x1fb6dcu: goto label_1fb6dc;
        case 0x1fb6e0u: goto label_1fb6e0;
        case 0x1fb6e4u: goto label_1fb6e4;
        case 0x1fb6e8u: goto label_1fb6e8;
        case 0x1fb6ecu: goto label_1fb6ec;
        case 0x1fb6f0u: goto label_1fb6f0;
        case 0x1fb6f4u: goto label_1fb6f4;
        case 0x1fb6f8u: goto label_1fb6f8;
        case 0x1fb6fcu: goto label_1fb6fc;
        case 0x1fb700u: goto label_1fb700;
        case 0x1fb704u: goto label_1fb704;
        case 0x1fb708u: goto label_1fb708;
        case 0x1fb70cu: goto label_1fb70c;
        case 0x1fb710u: goto label_1fb710;
        case 0x1fb714u: goto label_1fb714;
        case 0x1fb718u: goto label_1fb718;
        case 0x1fb71cu: goto label_1fb71c;
        case 0x1fb720u: goto label_1fb720;
        case 0x1fb724u: goto label_1fb724;
        case 0x1fb728u: goto label_1fb728;
        case 0x1fb72cu: goto label_1fb72c;
        case 0x1fb730u: goto label_1fb730;
        case 0x1fb734u: goto label_1fb734;
        case 0x1fb738u: goto label_1fb738;
        case 0x1fb73cu: goto label_1fb73c;
        case 0x1fb740u: goto label_1fb740;
        case 0x1fb744u: goto label_1fb744;
        case 0x1fb748u: goto label_1fb748;
        case 0x1fb74cu: goto label_1fb74c;
        case 0x1fb750u: goto label_1fb750;
        case 0x1fb754u: goto label_1fb754;
        case 0x1fb758u: goto label_1fb758;
        case 0x1fb75cu: goto label_1fb75c;
        case 0x1fb760u: goto label_1fb760;
        case 0x1fb764u: goto label_1fb764;
        case 0x1fb768u: goto label_1fb768;
        case 0x1fb76cu: goto label_1fb76c;
        case 0x1fb770u: goto label_1fb770;
        case 0x1fb774u: goto label_1fb774;
        case 0x1fb778u: goto label_1fb778;
        case 0x1fb77cu: goto label_1fb77c;
        case 0x1fb780u: goto label_1fb780;
        case 0x1fb784u: goto label_1fb784;
        case 0x1fb788u: goto label_1fb788;
        case 0x1fb78cu: goto label_1fb78c;
        case 0x1fb790u: goto label_1fb790;
        case 0x1fb794u: goto label_1fb794;
        case 0x1fb798u: goto label_1fb798;
        case 0x1fb79cu: goto label_1fb79c;
        case 0x1fb7a0u: goto label_1fb7a0;
        case 0x1fb7a4u: goto label_1fb7a4;
        case 0x1fb7a8u: goto label_1fb7a8;
        case 0x1fb7acu: goto label_1fb7ac;
        case 0x1fb7b0u: goto label_1fb7b0;
        case 0x1fb7b4u: goto label_1fb7b4;
        case 0x1fb7b8u: goto label_1fb7b8;
        case 0x1fb7bcu: goto label_1fb7bc;
        case 0x1fb7c0u: goto label_1fb7c0;
        case 0x1fb7c4u: goto label_1fb7c4;
        case 0x1fb7c8u: goto label_1fb7c8;
        case 0x1fb7ccu: goto label_1fb7cc;
        case 0x1fb7d0u: goto label_1fb7d0;
        case 0x1fb7d4u: goto label_1fb7d4;
        case 0x1fb7d8u: goto label_1fb7d8;
        case 0x1fb7dcu: goto label_1fb7dc;
        case 0x1fb7e0u: goto label_1fb7e0;
        case 0x1fb7e4u: goto label_1fb7e4;
        case 0x1fb7e8u: goto label_1fb7e8;
        case 0x1fb7ecu: goto label_1fb7ec;
        case 0x1fb7f0u: goto label_1fb7f0;
        case 0x1fb7f4u: goto label_1fb7f4;
        case 0x1fb7f8u: goto label_1fb7f8;
        case 0x1fb7fcu: goto label_1fb7fc;
        case 0x1fb800u: goto label_1fb800;
        case 0x1fb804u: goto label_1fb804;
        case 0x1fb808u: goto label_1fb808;
        case 0x1fb80cu: goto label_1fb80c;
        case 0x1fb810u: goto label_1fb810;
        case 0x1fb814u: goto label_1fb814;
        case 0x1fb818u: goto label_1fb818;
        case 0x1fb81cu: goto label_1fb81c;
        case 0x1fb820u: goto label_1fb820;
        case 0x1fb824u: goto label_1fb824;
        case 0x1fb828u: goto label_1fb828;
        case 0x1fb82cu: goto label_1fb82c;
        case 0x1fb830u: goto label_1fb830;
        case 0x1fb834u: goto label_1fb834;
        case 0x1fb838u: goto label_1fb838;
        case 0x1fb83cu: goto label_1fb83c;
        case 0x1fb840u: goto label_1fb840;
        case 0x1fb844u: goto label_1fb844;
        case 0x1fb848u: goto label_1fb848;
        case 0x1fb84cu: goto label_1fb84c;
        case 0x1fb850u: goto label_1fb850;
        case 0x1fb854u: goto label_1fb854;
        case 0x1fb858u: goto label_1fb858;
        case 0x1fb85cu: goto label_1fb85c;
        case 0x1fb860u: goto label_1fb860;
        case 0x1fb864u: goto label_1fb864;
        case 0x1fb868u: goto label_1fb868;
        case 0x1fb86cu: goto label_1fb86c;
        case 0x1fb870u: goto label_1fb870;
        case 0x1fb874u: goto label_1fb874;
        case 0x1fb878u: goto label_1fb878;
        case 0x1fb87cu: goto label_1fb87c;
        case 0x1fb880u: goto label_1fb880;
        case 0x1fb884u: goto label_1fb884;
        case 0x1fb888u: goto label_1fb888;
        case 0x1fb88cu: goto label_1fb88c;
        case 0x1fb890u: goto label_1fb890;
        case 0x1fb894u: goto label_1fb894;
        case 0x1fb898u: goto label_1fb898;
        case 0x1fb89cu: goto label_1fb89c;
        case 0x1fb8a0u: goto label_1fb8a0;
        case 0x1fb8a4u: goto label_1fb8a4;
        case 0x1fb8a8u: goto label_1fb8a8;
        case 0x1fb8acu: goto label_1fb8ac;
        case 0x1fb8b0u: goto label_1fb8b0;
        case 0x1fb8b4u: goto label_1fb8b4;
        case 0x1fb8b8u: goto label_1fb8b8;
        case 0x1fb8bcu: goto label_1fb8bc;
        case 0x1fb8c0u: goto label_1fb8c0;
        case 0x1fb8c4u: goto label_1fb8c4;
        case 0x1fb8c8u: goto label_1fb8c8;
        case 0x1fb8ccu: goto label_1fb8cc;
        case 0x1fb8d0u: goto label_1fb8d0;
        case 0x1fb8d4u: goto label_1fb8d4;
        case 0x1fb8d8u: goto label_1fb8d8;
        case 0x1fb8dcu: goto label_1fb8dc;
        case 0x1fb8e0u: goto label_1fb8e0;
        case 0x1fb8e4u: goto label_1fb8e4;
        case 0x1fb8e8u: goto label_1fb8e8;
        case 0x1fb8ecu: goto label_1fb8ec;
        case 0x1fb8f0u: goto label_1fb8f0;
        case 0x1fb8f4u: goto label_1fb8f4;
        case 0x1fb8f8u: goto label_1fb8f8;
        case 0x1fb8fcu: goto label_1fb8fc;
        case 0x1fb900u: goto label_1fb900;
        case 0x1fb904u: goto label_1fb904;
        case 0x1fb908u: goto label_1fb908;
        case 0x1fb90cu: goto label_1fb90c;
        case 0x1fb910u: goto label_1fb910;
        case 0x1fb914u: goto label_1fb914;
        case 0x1fb918u: goto label_1fb918;
        case 0x1fb91cu: goto label_1fb91c;
        case 0x1fb920u: goto label_1fb920;
        case 0x1fb924u: goto label_1fb924;
        case 0x1fb928u: goto label_1fb928;
        case 0x1fb92cu: goto label_1fb92c;
        case 0x1fb930u: goto label_1fb930;
        case 0x1fb934u: goto label_1fb934;
        case 0x1fb938u: goto label_1fb938;
        case 0x1fb93cu: goto label_1fb93c;
        case 0x1fb940u: goto label_1fb940;
        case 0x1fb944u: goto label_1fb944;
        case 0x1fb948u: goto label_1fb948;
        case 0x1fb94cu: goto label_1fb94c;
        case 0x1fb950u: goto label_1fb950;
        case 0x1fb954u: goto label_1fb954;
        case 0x1fb958u: goto label_1fb958;
        case 0x1fb95cu: goto label_1fb95c;
        case 0x1fb960u: goto label_1fb960;
        case 0x1fb964u: goto label_1fb964;
        case 0x1fb968u: goto label_1fb968;
        case 0x1fb96cu: goto label_1fb96c;
        case 0x1fb970u: goto label_1fb970;
        case 0x1fb974u: goto label_1fb974;
        case 0x1fb978u: goto label_1fb978;
        case 0x1fb97cu: goto label_1fb97c;
        case 0x1fb980u: goto label_1fb980;
        case 0x1fb984u: goto label_1fb984;
        case 0x1fb988u: goto label_1fb988;
        case 0x1fb98cu: goto label_1fb98c;
        case 0x1fb990u: goto label_1fb990;
        case 0x1fb994u: goto label_1fb994;
        case 0x1fb998u: goto label_1fb998;
        case 0x1fb99cu: goto label_1fb99c;
        case 0x1fb9a0u: goto label_1fb9a0;
        case 0x1fb9a4u: goto label_1fb9a4;
        case 0x1fb9a8u: goto label_1fb9a8;
        case 0x1fb9acu: goto label_1fb9ac;
        case 0x1fb9b0u: goto label_1fb9b0;
        case 0x1fb9b4u: goto label_1fb9b4;
        case 0x1fb9b8u: goto label_1fb9b8;
        case 0x1fb9bcu: goto label_1fb9bc;
        case 0x1fb9c0u: goto label_1fb9c0;
        case 0x1fb9c4u: goto label_1fb9c4;
        case 0x1fb9c8u: goto label_1fb9c8;
        case 0x1fb9ccu: goto label_1fb9cc;
        case 0x1fb9d0u: goto label_1fb9d0;
        case 0x1fb9d4u: goto label_1fb9d4;
        case 0x1fb9d8u: goto label_1fb9d8;
        case 0x1fb9dcu: goto label_1fb9dc;
        case 0x1fb9e0u: goto label_1fb9e0;
        case 0x1fb9e4u: goto label_1fb9e4;
        case 0x1fb9e8u: goto label_1fb9e8;
        case 0x1fb9ecu: goto label_1fb9ec;
        case 0x1fb9f0u: goto label_1fb9f0;
        case 0x1fb9f4u: goto label_1fb9f4;
        case 0x1fb9f8u: goto label_1fb9f8;
        case 0x1fb9fcu: goto label_1fb9fc;
        case 0x1fba00u: goto label_1fba00;
        case 0x1fba04u: goto label_1fba04;
        case 0x1fba08u: goto label_1fba08;
        case 0x1fba0cu: goto label_1fba0c;
        case 0x1fba10u: goto label_1fba10;
        case 0x1fba14u: goto label_1fba14;
        case 0x1fba18u: goto label_1fba18;
        case 0x1fba1cu: goto label_1fba1c;
        case 0x1fba20u: goto label_1fba20;
        case 0x1fba24u: goto label_1fba24;
        case 0x1fba28u: goto label_1fba28;
        case 0x1fba2cu: goto label_1fba2c;
        case 0x1fba30u: goto label_1fba30;
        case 0x1fba34u: goto label_1fba34;
        case 0x1fba38u: goto label_1fba38;
        case 0x1fba3cu: goto label_1fba3c;
        case 0x1fba40u: goto label_1fba40;
        case 0x1fba44u: goto label_1fba44;
        case 0x1fba48u: goto label_1fba48;
        case 0x1fba4cu: goto label_1fba4c;
        case 0x1fba50u: goto label_1fba50;
        case 0x1fba54u: goto label_1fba54;
        case 0x1fba58u: goto label_1fba58;
        case 0x1fba5cu: goto label_1fba5c;
        case 0x1fba60u: goto label_1fba60;
        case 0x1fba64u: goto label_1fba64;
        case 0x1fba68u: goto label_1fba68;
        case 0x1fba6cu: goto label_1fba6c;
        case 0x1fba70u: goto label_1fba70;
        case 0x1fba74u: goto label_1fba74;
        case 0x1fba78u: goto label_1fba78;
        case 0x1fba7cu: goto label_1fba7c;
        case 0x1fba80u: goto label_1fba80;
        case 0x1fba84u: goto label_1fba84;
        case 0x1fba88u: goto label_1fba88;
        case 0x1fba8cu: goto label_1fba8c;
        case 0x1fba90u: goto label_1fba90;
        case 0x1fba94u: goto label_1fba94;
        case 0x1fba98u: goto label_1fba98;
        case 0x1fba9cu: goto label_1fba9c;
        case 0x1fbaa0u: goto label_1fbaa0;
        case 0x1fbaa4u: goto label_1fbaa4;
        case 0x1fbaa8u: goto label_1fbaa8;
        case 0x1fbaacu: goto label_1fbaac;
        case 0x1fbab0u: goto label_1fbab0;
        case 0x1fbab4u: goto label_1fbab4;
        case 0x1fbab8u: goto label_1fbab8;
        case 0x1fbabcu: goto label_1fbabc;
        case 0x1fbac0u: goto label_1fbac0;
        case 0x1fbac4u: goto label_1fbac4;
        case 0x1fbac8u: goto label_1fbac8;
        case 0x1fbaccu: goto label_1fbacc;
        case 0x1fbad0u: goto label_1fbad0;
        case 0x1fbad4u: goto label_1fbad4;
        case 0x1fbad8u: goto label_1fbad8;
        case 0x1fbadcu: goto label_1fbadc;
        case 0x1fbae0u: goto label_1fbae0;
        case 0x1fbae4u: goto label_1fbae4;
        case 0x1fbae8u: goto label_1fbae8;
        case 0x1fbaecu: goto label_1fbaec;
        case 0x1fbaf0u: goto label_1fbaf0;
        case 0x1fbaf4u: goto label_1fbaf4;
        case 0x1fbaf8u: goto label_1fbaf8;
        case 0x1fbafcu: goto label_1fbafc;
        default: return;
    }

label_1fb330:
    // 0x1fb330: 0x0  nop
    ctx->pc = 0x1fb330u;
    // NOP
label_1fb334:
    // 0x1fb334: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fb334u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fb338:
    // 0x1fb338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb33c:
    // 0x1fb33c: 0xc066e26  jal         func_19B898
label_1fb340:
    if (ctx->pc == 0x1FB340u) {
        ctx->pc = 0x1FB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB33Cu;
        // 0x1fb340: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB344u;
        goto label_1fb344;
    }
    ctx->pc = 0x1FB33Cu;
    SET_GPR_U32(ctx, 31, 0x1FB344u);
    ctx->pc = 0x1FB340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB33Cu;
    // 0x1fb340: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1FB344u;
label_1fb344:
    // 0x1fb344: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fb344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fb348:
    // 0x1fb348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb34c:
    // 0x1fb34c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fb34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb350:
    // 0x1fb350: 0xc066e14  jal         func_19B850
label_1fb354:
    if (ctx->pc == 0x1FB354u) {
        ctx->pc = 0x1FB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB350u;
        // 0x1fb354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB358u;
        goto label_1fb358;
    }
    ctx->pc = 0x1FB350u;
    SET_GPR_U32(ctx, 31, 0x1FB358u);
    ctx->pc = 0x1FB354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB350u;
    // 0x1fb354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1FB358u;
label_1fb358:
    // 0x1fb358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fb358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb35c:
    // 0x1fb35c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1fb35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb360:
    // 0x1fb360: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fb360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fb364:
    // 0x1fb364: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fb364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fb368:
    // 0x1fb368: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fb368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fb36c:
    // 0x1fb36c: 0x8e831980  lw          $v1, 0x1980($s4)
    ctx->pc = 0x1fb36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6528)));
label_1fb370:
    // 0x1fb370: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fb374:
    // 0x1fb374: 0xae831980  sw          $v1, 0x1980($s4)
    ctx->pc = 0x1fb374u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6528), GPR_U32(ctx, 3));
label_1fb378:
    // 0x1fb378: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_1fb37c:
    if (ctx->pc == 0x1FB37Cu) {
        ctx->pc = 0x1FB380u;
        goto label_1fb380;
    }
    ctx->pc = 0x1FB378u;
    {
        const bool branch_taken_0x1fb378 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb378) {
            ctx->pc = 0x1FB3A4u;
            goto label_1fb3a4;
        }
    }
    ctx->pc = 0x1FB380u;
label_1fb380:
    // 0x1fb380: 0xc6811124  lwc1        $f1, 0x1124($s4)
    ctx->pc = 0x1fb380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb384:
    // 0x1fb384: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1fb384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_1fb388:
    // 0x1fb388: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb38c:
    // 0x1fb38c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1fb38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb390:
    // 0x1fb390: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fb394:
    // 0x1fb394: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1fb394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb398:
    // 0x1fb398: 0x0  nop
    ctx->pc = 0x1fb398u;
    // NOP
label_1fb39c:
    // 0x1fb39c: 0x45010068  bc1t        . + 4 + (0x68 << 2)
label_1fb3a0:
    if (ctx->pc == 0x1FB3A0u) {
        ctx->pc = 0x1FB3A4u;
        goto label_1fb3a4;
    }
    ctx->pc = 0x1FB39Cu;
    {
        const bool branch_taken_0x1fb39c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb39c) {
            ctx->pc = 0x1FB540u;
            goto label_1fb540;
        }
    }
    ctx->pc = 0x1FB3A4u;
label_1fb3a4:
    // 0x1fb3a4: 0x0  nop
    ctx->pc = 0x1fb3a4u;
    // NOP
label_1fb3a8:
    // 0x1fb3a8: 0xc08f0cc  jal         func_23C330
label_1fb3ac:
    if (ctx->pc == 0x1FB3ACu) {
        ctx->pc = 0x1FB3B0u;
        goto label_1fb3b0;
    }
    ctx->pc = 0x1FB3A8u;
    SET_GPR_U32(ctx, 31, 0x1FB3B0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB3B0u;
label_1fb3b0:
    // 0x1fb3b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb3b4:
    // 0x1fb3b4: 0x0  nop
    ctx->pc = 0x1fb3b4u;
    // NOP
label_1fb3b8:
    // 0x1fb3b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fb3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fb3bc:
    // 0x1fb3bc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb3c0:
    // 0x1fb3c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb3c4:
    // 0x1fb3c4: 0x0  nop
    ctx->pc = 0x1fb3c4u;
    // NOP
label_1fb3c8:
    // 0x1fb3c8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1fb3c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_1fb3cc:
    // 0x1fb3cc: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x1fb3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_1fb3d0:
    // 0x1fb3d0: 0x0  nop
    ctx->pc = 0x1fb3d0u;
    // NOP
label_1fb3d4:
    // 0x1fb3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb3d8:
    // 0x1fb3d8: 0xc08f0cc  jal         func_23C330
label_1fb3dc:
    if (ctx->pc == 0x1FB3DCu) {
        ctx->pc = 0x1FB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3D8u;
        // 0x1fb3dc: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3E0u;
        goto label_1fb3e0;
    }
    ctx->pc = 0x1FB3D8u;
    SET_GPR_U32(ctx, 31, 0x1FB3E0u);
    ctx->pc = 0x1FB3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB3D8u;
    // 0x1fb3dc: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB3E0u;
label_1fb3e0:
    // 0x1fb3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb3e4:
    // 0x1fb3e4: 0x0  nop
    ctx->pc = 0x1fb3e4u;
    // NOP
label_1fb3e8:
    // 0x1fb3e8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fb3e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1fb3ec:
    // 0x1fb3ec: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1fb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1fb3f0:
    // 0x1fb3f0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1fb3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fb3f4:
    // 0x1fb3f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb3f8:
    // 0x1fb3f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fb3f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb3fc:
    // 0x1fb3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb400:
    // 0x1fb400: 0x0  nop
    ctx->pc = 0x1fb400u;
    // NOP
label_1fb404:
    // 0x1fb404: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1fb404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1fb408:
    // 0x1fb408: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x1fb408u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
label_1fb40c:
    // 0x1fb40c: 0x0  nop
    ctx->pc = 0x1fb40cu;
    // NOP
label_1fb410:
    // 0x1fb410: 0x0  nop
    ctx->pc = 0x1fb410u;
    // NOP
label_1fb414:
    // 0x1fb414: 0xc08f0cc  jal         func_23C330
label_1fb418:
    if (ctx->pc == 0x1FB418u) {
        ctx->pc = 0x1FB41Cu;
        goto label_1fb41c;
    }
    ctx->pc = 0x1FB414u;
    SET_GPR_U32(ctx, 31, 0x1FB41Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB41Cu;
label_1fb41c:
    // 0x1fb41c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb420:
    // 0x1fb420: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fb420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fb424:
    // 0x1fb424: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fb424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fb428:
    // 0x1fb428: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb42c:
    // 0x1fb42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb430:
    // 0x1fb430: 0x0  nop
    ctx->pc = 0x1fb430u;
    // NOP
label_1fb434:
    // 0x1fb434: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fb434u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fb438:
    // 0x1fb438: 0x0  nop
    ctx->pc = 0x1fb438u;
    // NOP
label_1fb43c:
    // 0x1fb43c: 0x0  nop
    ctx->pc = 0x1fb43cu;
    // NOP
label_1fb440:
    // 0x1fb440: 0xc06d412  jal         func_1B5048
label_1fb444:
    if (ctx->pc == 0x1FB444u) {
        ctx->pc = 0x1FB448u;
        goto label_1fb448;
    }
    ctx->pc = 0x1FB440u;
    SET_GPR_U32(ctx, 31, 0x1FB448u);
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1FB448u;
label_1fb448:
    // 0x1fb448: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fb448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fb44c:
    // 0x1fb44c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fb44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fb450:
    // 0x1fb450: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fb450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fb454:
    // 0x1fb454: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1fb454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1fb458:
    // 0x1fb458: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1fb458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fb45c:
    // 0x1fb45c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1fb45cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1fb460:
    // 0x1fb460: 0xc6821120  lwc1        $f2, 0x1120($s4)
    ctx->pc = 0x1fb460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb464:
    // 0x1fb464: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fb464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fb468:
    // 0x1fb468: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fb468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb46c:
    // 0x1fb46c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1fb46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1fb470:
    // 0x1fb470: 0xc6801124  lwc1        $f0, 0x1124($s4)
    ctx->pc = 0x1fb470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb474:
    // 0x1fb474: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb478:
    // 0x1fb478: 0x0  nop
    ctx->pc = 0x1fb478u;
    // NOP
label_1fb47c:
    // 0x1fb47c: 0x46160b01  sub.s       $f12, $f1, $f22
    ctx->pc = 0x1fb47cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_1fb480:
    // 0x1fb480: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1fb480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1fb484:
    // 0x1fb484: 0xc06d4c0  jal         func_1B5300
label_1fb488:
    if (ctx->pc == 0x1FB488u) {
        ctx->pc = 0x1FB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB484u;
        // 0x1fb488: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB48Cu;
        goto label_1fb48c;
    }
    ctx->pc = 0x1FB484u;
    SET_GPR_U32(ctx, 31, 0x1FB48Cu);
    ctx->pc = 0x1FB488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB484u;
    // 0x1fb488: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1FB48Cu;
label_1fb48c:
    // 0x1fb48c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fb48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fb490:
    // 0x1fb490: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fb490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fb494:
    // 0x1fb494: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fb494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fb498:
    // 0x1fb498: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fb498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fb49c:
    // 0x1fb49c: 0xc6811128  lwc1        $f1, 0x1128($s4)
    ctx->pc = 0x1fb49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb4a0:
    // 0x1fb4a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1fb4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fb4a4:
    // 0x1fb4a4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fb4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fb4a8:
    // 0x1fb4a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fb4a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fb4ac:
    // 0x1fb4ac: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fb4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fb4b0:
    // 0x1fb4b0: 0xc08f0cc  jal         func_23C330
label_1fb4b4:
    if (ctx->pc == 0x1FB4B4u) {
        ctx->pc = 0x1FB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4B0u;
        // 0x1fb4b4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB4B8u;
        goto label_1fb4b8;
    }
    ctx->pc = 0x1FB4B0u;
    SET_GPR_U32(ctx, 31, 0x1FB4B8u);
    ctx->pc = 0x1FB4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB4B0u;
    // 0x1fb4b4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB4B8u;
label_1fb4b8:
    // 0x1fb4b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb4bc:
    // 0x1fb4bc: 0x0  nop
    ctx->pc = 0x1fb4bcu;
    // NOP
label_1fb4c0:
    // 0x1fb4c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fb4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fb4c4:
    // 0x1fb4c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb4c8:
    // 0x1fb4c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb4cc:
    // 0x1fb4cc: 0x0  nop
    ctx->pc = 0x1fb4ccu;
    // NOP
label_1fb4d0:
    // 0x1fb4d0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fb4d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fb4d4:
    // 0x1fb4d4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1fb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1fb4d8:
    // 0x1fb4d8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1fb4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1fb4dc:
    // 0x1fb4dc: 0x0  nop
    ctx->pc = 0x1fb4dcu;
    // NOP
label_1fb4e0:
    // 0x1fb4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb4e4:
    // 0x1fb4e4: 0x0  nop
    ctx->pc = 0x1fb4e4u;
    // NOP
label_1fb4e8:
    // 0x1fb4e8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1fb4e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb4ec:
    // 0x1fb4ec: 0x0  nop
    ctx->pc = 0x1fb4ecu;
    // NOP
label_1fb4f0:
    // 0x1fb4f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1fb4f4:
    if (ctx->pc == 0x1FB4F4u) {
        ctx->pc = 0x1FB4F8u;
        goto label_1fb4f8;
    }
    ctx->pc = 0x1FB4F0u;
    {
        const bool branch_taken_0x1fb4f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb4f0) {
            ctx->pc = 0x1FB508u;
            goto label_1fb508;
        }
    }
    ctx->pc = 0x1FB4F8u;
label_1fb4f8:
    // 0x1fb4f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1fb4fc:
    // 0x1fb4fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb500:
    // 0x1fb500: 0x0  nop
    ctx->pc = 0x1fb500u;
    // NOP
label_1fb504:
    // 0x1fb504: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fb504u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fb508:
    // 0x1fb508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb50c:
    // 0x1fb50c: 0xc066e26  jal         func_19B898
label_1fb510:
    if (ctx->pc == 0x1FB510u) {
        ctx->pc = 0x1FB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB50Cu;
        // 0x1fb510: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB514u;
        goto label_1fb514;
    }
    ctx->pc = 0x1FB50Cu;
    SET_GPR_U32(ctx, 31, 0x1FB514u);
    ctx->pc = 0x1FB510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB50Cu;
    // 0x1fb510: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1FB514u;
label_1fb514:
    // 0x1fb514: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fb514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fb518:
    // 0x1fb518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb51c:
    // 0x1fb51c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fb51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb520:
    // 0x1fb520: 0xc066e14  jal         func_19B850
label_1fb524:
    if (ctx->pc == 0x1FB524u) {
        ctx->pc = 0x1FB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB520u;
        // 0x1fb524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB528u;
        goto label_1fb528;
    }
    ctx->pc = 0x1FB520u;
    SET_GPR_U32(ctx, 31, 0x1FB528u);
    ctx->pc = 0x1FB524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB520u;
    // 0x1fb524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1FB528u;
label_1fb528:
    // 0x1fb528: 0x3c0340f0  lui         $v1, 0x40F0
    ctx->pc = 0x1fb528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16624 << 16));
label_1fb52c:
    // 0x1fb52c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb52cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb530:
    // 0x1fb530: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1fb530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb534:
    // 0x1fb534: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fb534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fb538:
    // 0x1fb538: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fb538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fb53c:
    // 0x1fb53c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fb53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fb540:
    // 0x1fb540: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fb540u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fb544:
    // 0x1fb544: 0x2a630040  slti        $v1, $s3, 0x40
    ctx->pc = 0x1fb544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
label_1fb548:
    // 0x1fb548: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1fb548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1fb54c:
    // 0x1fb54c: 0x1460ff17  bnez        $v1, . + 4 + (-0xE9 << 2)
label_1fb550:
    if (ctx->pc == 0x1FB550u) {
        ctx->pc = 0x1FB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB54Cu;
        // 0x1fb550: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB554u;
        goto label_1fb554;
    }
    ctx->pc = 0x1FB54Cu;
    {
        const bool branch_taken_0x1fb54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB54Cu;
        // 0x1fb550: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb54c) {
            ctx->pc = 0x1FB1ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1fb1ac; return; }
        }
    }
    ctx->pc = 0x1FB554u;
label_1fb554:
    // 0x1fb554: 0x26d60820  addiu       $s6, $s6, 0x820
    ctx->pc = 0x1fb554u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2080));
label_1fb558:
    // 0x1fb558: 0x26b50400  addiu       $s5, $s5, 0x400
    ctx->pc = 0x1fb558u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1024));
label_1fb55c:
    // 0x1fb55c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1fb55cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1fb560:
    // 0x1fb560: 0x96831138  lhu         $v1, 0x1138($s4)
    ctx->pc = 0x1fb560u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4408)));
label_1fb564:
    // 0x1fb564: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x1fb564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fb568:
    // 0x1fb568: 0x1460ff0c  bnez        $v1, . + 4 + (-0xF4 << 2)
label_1fb56c:
    if (ctx->pc == 0x1FB56Cu) {
        ctx->pc = 0x1FB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB568u;
        // 0x1fb56c: 0x2961821  addu        $v1, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB570u;
        goto label_1fb570;
    }
    ctx->pc = 0x1FB568u;
    {
        const bool branch_taken_0x1fb568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB568u;
        // 0x1fb56c: 0x2961821  addu        $v1, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb568) {
            ctx->pc = 0x1FB19Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1fb19c; return; }
        }
    }
    ctx->pc = 0x1FB570u;
label_1fb570:
    // 0x1fb570: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1fb570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1fb574:
    // 0x1fb574: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1fb574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1fb578:
    // 0x1fb578: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1fb578u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fb57c:
    // 0x1fb57c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1fb57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fb580:
    // 0x1fb580: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1fb580u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fb584:
    // 0x1fb584: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1fb584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fb588:
    // 0x1fb588: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1fb588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fb58c:
    // 0x1fb58c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1fb58cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb590:
    // 0x1fb590: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fb590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb594:
    // 0x1fb594: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fb594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb598:
    // 0x1fb598: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fb598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb59c:
    // 0x1fb59c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fb59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb5a0:
    // 0x1fb5a0: 0x3e00008  jr          $ra
label_1fb5a4:
    if (ctx->pc == 0x1FB5A4u) {
        ctx->pc = 0x1FB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5A0u;
        // 0x1fb5a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5A8u;
        goto label_1fb5a8;
    }
    ctx->pc = 0x1FB5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5A0u;
        // 0x1fb5a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB5A8u;
label_1fb5a8:
    // 0x1fb5a8: 0x0  nop
    ctx->pc = 0x1fb5a8u;
    // NOP
label_1fb5ac:
    // 0x1fb5ac: 0x0  nop
    ctx->pc = 0x1fb5acu;
    // NOP
label_1fb5b0:
    // 0x1fb5b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fb5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1fb5b4:
    // 0x1fb5b4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fb5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1fb5b8:
    // 0x1fb5b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1fb5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1fb5bc:
    // 0x1fb5bc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1fb5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1fb5c0:
    // 0x1fb5c0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1fb5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1fb5c4:
    // 0x1fb5c4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1fb5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1fb5c8:
    // 0x1fb5c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1fb5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1fb5cc:
    // 0x1fb5cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fb5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1fb5d0:
    // 0x1fb5d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fb5d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb5d4:
    // 0x1fb5d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fb5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1fb5d8:
    // 0x1fb5d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fb5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1fb5dc:
    // 0x1fb5dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fb5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fb5e0:
    // 0x1fb5e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fb5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fb5e4:
    // 0x1fb5e4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1fb5e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fb5e8:
    // 0x1fb5e8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1fb5e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1fb5ec:
    // 0x1fb5ec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fb5ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fb5f0:
    // 0x1fb5f0: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1fb5f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1fb5f4:
    // 0x1fb5f4: 0xc04f310  jal         func_13CC40
label_1fb5f8:
    if (ctx->pc == 0x1FB5F8u) {
        ctx->pc = 0x1FB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5F4u;
        // 0x1fb5f8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB5FCu;
        goto label_1fb5fc;
    }
    ctx->pc = 0x1FB5F4u;
    SET_GPR_U32(ctx, 31, 0x1FB5FCu);
    ctx->pc = 0x1FB5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5F4u;
    // 0x1fb5f8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC40u, 0x1FB5F4u, 0x1FB5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5FCu;
label_1fb5fc:
    // 0x1fb5fc: 0x92a41134  lbu         $a0, 0x1134($s5)
    ctx->pc = 0x1fb5fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4404)));
label_1fb600:
    // 0x1fb600: 0xc0646d4  jal         func_191B50
label_1fb604:
    if (ctx->pc == 0x1FB604u) {
        ctx->pc = 0x1FB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB600u;
        // 0x1fb604: 0x26a51120  addiu       $a1, $s5, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB608u;
        goto label_1fb608;
    }
    ctx->pc = 0x1FB600u;
    SET_GPR_U32(ctx, 31, 0x1FB608u);
    ctx->pc = 0x1FB604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB600u;
    // 0x1fb604: 0x26a51120  addiu       $a1, $s5, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    { ctx->pc = 0x191b50; return; }
    ctx->pc = 0x1FB608u;
label_1fb608:
    // 0x1fb608: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1fb608u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb60c:
    // 0x1fb60c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1fb60cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb610:
    // 0x1fb610: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1fb614:
    if (ctx->pc == 0x1FB614u) {
        ctx->pc = 0x1FB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB610u;
        // 0x1fb614: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB618u;
        goto label_1fb618;
    }
    ctx->pc = 0x1FB610u;
    {
        const bool branch_taken_0x1fb610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB610u;
        // 0x1fb614: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb610) {
            ctx->pc = 0x1FB898u;
            goto label_1fb898;
        }
    }
    ctx->pc = 0x1FB618u;
label_1fb618:
    // 0x1fb618: 0x2b61021  addu        $v0, $s5, $s6
    ctx->pc = 0x1fb618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_1fb61c:
    // 0x1fb61c: 0x24511150  addiu       $s1, $v0, 0x1150
    ctx->pc = 0x1fb61cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
label_1fb620:
    // 0x1fb620: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x1fb620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_1fb624:
    // 0x1fb624: 0x247200a0  addiu       $s2, $v1, 0xA0
    ctx->pc = 0x1fb624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_1fb628:
    // 0x1fb628: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fb628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb62c:
    // 0x1fb62c: 0x0  nop
    ctx->pc = 0x1fb62cu;
    // NOP
label_1fb630:
    // 0x1fb630: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1fb630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1fb634:
    // 0x1fb634: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1fb634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1fb638:
    // 0x1fb638: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1fb638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1fb63c:
    // 0x1fb63c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1fb63cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1fb640:
    // 0x1fb640: 0xc08f0cc  jal         func_23C330
label_1fb644:
    if (ctx->pc == 0x1FB644u) {
        ctx->pc = 0x1FB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB640u;
        // 0x1fb644: 0x96b41130  lhu         $s4, 0x1130($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB648u;
        goto label_1fb648;
    }
    ctx->pc = 0x1FB640u;
    SET_GPR_U32(ctx, 31, 0x1FB648u);
    ctx->pc = 0x1FB644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB640u;
    // 0x1fb644: 0x96b41130  lhu         $s4, 0x1130($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB648u;
label_1fb648:
    // 0x1fb648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb64c:
    // 0x1fb64c: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
label_1fb650:
    if (ctx->pc == 0x1FB650u) {
        ctx->pc = 0x1FB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB64Cu;
        // 0x1fb650: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB654u;
        goto label_1fb654;
    }
    ctx->pc = 0x1FB64Cu;
    {
        const bool branch_taken_0x1fb64c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1FB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB64Cu;
        // 0x1fb650: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb64c) {
            ctx->pc = 0x1FB660u;
            goto label_1fb660;
        }
    }
    ctx->pc = 0x1FB654u;
label_1fb654:
    // 0x1fb654: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1fb654u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb658:
    // 0x1fb658: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fb65c:
    if (ctx->pc == 0x1FB65Cu) {
        ctx->pc = 0x1FB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB658u;
        // 0x1fb65c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB660u;
        goto label_1fb660;
    }
    ctx->pc = 0x1FB658u;
    {
        const bool branch_taken_0x1fb658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB658u;
        // 0x1fb65c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb658) {
            ctx->pc = 0x1FB67Cu;
            goto label_1fb67c;
        }
    }
    ctx->pc = 0x1FB660u;
label_1fb660:
    // 0x1fb660: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x1fb660u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_1fb664:
    // 0x1fb664: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1fb664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_1fb668:
    // 0x1fb668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fb668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1fb66c:
    // 0x1fb66c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb66cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb670:
    // 0x1fb670: 0x0  nop
    ctx->pc = 0x1fb670u;
    // NOP
label_1fb674:
    // 0x1fb674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fb674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fb678:
    // 0x1fb678: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fb678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fb67c:
    // 0x1fb67c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb67cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1fb680:
    // 0x1fb680: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb684:
    // 0x1fb684: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb688:
    // 0x1fb688: 0x0  nop
    ctx->pc = 0x1fb688u;
    // NOP
label_1fb68c:
    // 0x1fb68c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fb68cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1fb690:
    // 0x1fb690: 0x0  nop
    ctx->pc = 0x1fb690u;
    // NOP
label_1fb694:
    // 0x1fb694: 0x0  nop
    ctx->pc = 0x1fb694u;
    // NOP
label_1fb698:
    // 0x1fb698: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1fb698u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb69c:
    // 0x1fb69c: 0x0  nop
    ctx->pc = 0x1fb69cu;
    // NOP
label_1fb6a0:
    // 0x1fb6a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1fb6a4:
    if (ctx->pc == 0x1FB6A4u) {
        ctx->pc = 0x1FB6A8u;
        goto label_1fb6a8;
    }
    ctx->pc = 0x1FB6A0u;
    {
        const bool branch_taken_0x1fb6a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb6a0) {
            ctx->pc = 0x1FB6B8u;
            goto label_1fb6b8;
        }
    }
    ctx->pc = 0x1FB6A8u;
label_1fb6a8:
    // 0x1fb6a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb6a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1fb6ac:
    // 0x1fb6ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fb6acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1fb6b0:
    // 0x1fb6b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fb6b4:
    if (ctx->pc == 0x1FB6B4u) {
        ctx->pc = 0x1FB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6B0u;
        // 0x1fb6b4: 0x3282ffff  andi        $v0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6B8u;
        goto label_1fb6b8;
    }
    ctx->pc = 0x1FB6B0u;
    {
        const bool branch_taken_0x1fb6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6B0u;
        // 0x1fb6b4: 0x3282ffff  andi        $v0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6b0) {
            ctx->pc = 0x1FB6D4u;
            goto label_1fb6d4;
        }
    }
    ctx->pc = 0x1FB6B8u;
label_1fb6b8:
    // 0x1fb6b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fb6b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1fb6bc:
    // 0x1fb6bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1fb6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1fb6c0:
    // 0x1fb6c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb6c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1fb6c4:
    // 0x1fb6c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fb6c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1fb6c8:
    // 0x1fb6c8: 0x0  nop
    ctx->pc = 0x1fb6c8u;
    // NOP
label_1fb6cc:
    // 0x1fb6cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fb6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1fb6d0:
    // 0x1fb6d0: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x1fb6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_1fb6d4:
    // 0x1fb6d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb6d8:
    // 0x1fb6d8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1fb6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1fb6dc:
    // 0x1fb6dc: 0xc08f0cc  jal         func_23C330
label_1fb6e0:
    if (ctx->pc == 0x1FB6E0u) {
        ctx->pc = 0x1FB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6DCu;
        // 0x1fb6e0: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB6E4u;
        goto label_1fb6e4;
    }
    ctx->pc = 0x1FB6DCu;
    SET_GPR_U32(ctx, 31, 0x1FB6E4u);
    ctx->pc = 0x1FB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB6DCu;
    // 0x1fb6e0: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB6E4u;
label_1fb6e4:
    // 0x1fb6e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb6e8:
    // 0x1fb6e8: 0x0  nop
    ctx->pc = 0x1fb6e8u;
    // NOP
label_1fb6ec:
    // 0x1fb6ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fb6ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fb6f0:
    // 0x1fb6f0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb6f4:
    // 0x1fb6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb6f8:
    // 0x1fb6f8: 0x0  nop
    ctx->pc = 0x1fb6f8u;
    // NOP
label_1fb6fc:
    // 0x1fb6fc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1fb6fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1fb700:
    // 0x1fb700: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x1fb700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_1fb704:
    // 0x1fb704: 0x0  nop
    ctx->pc = 0x1fb704u;
    // NOP
label_1fb708:
    // 0x1fb708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb70c:
    // 0x1fb70c: 0xc08f0cc  jal         func_23C330
label_1fb710:
    if (ctx->pc == 0x1FB710u) {
        ctx->pc = 0x1FB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB70Cu;
        // 0x1fb710: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB714u;
        goto label_1fb714;
    }
    ctx->pc = 0x1FB70Cu;
    SET_GPR_U32(ctx, 31, 0x1FB714u);
    ctx->pc = 0x1FB710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB70Cu;
    // 0x1fb710: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB714u;
label_1fb714:
    // 0x1fb714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb718:
    // 0x1fb718: 0x0  nop
    ctx->pc = 0x1fb718u;
    // NOP
label_1fb71c:
    // 0x1fb71c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fb71cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1fb720:
    // 0x1fb720: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1fb720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1fb724:
    // 0x1fb724: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1fb724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fb728:
    // 0x1fb728: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb72c:
    // 0x1fb72c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fb72cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb730:
    // 0x1fb730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb734:
    // 0x1fb734: 0x0  nop
    ctx->pc = 0x1fb734u;
    // NOP
label_1fb738:
    // 0x1fb738: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1fb738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1fb73c:
    // 0x1fb73c: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x1fb73cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
label_1fb740:
    // 0x1fb740: 0x0  nop
    ctx->pc = 0x1fb740u;
    // NOP
label_1fb744:
    // 0x1fb744: 0x0  nop
    ctx->pc = 0x1fb744u;
    // NOP
label_1fb748:
    // 0x1fb748: 0xc08f0cc  jal         func_23C330
label_1fb74c:
    if (ctx->pc == 0x1FB74Cu) {
        ctx->pc = 0x1FB750u;
        goto label_1fb750;
    }
    ctx->pc = 0x1FB748u;
    SET_GPR_U32(ctx, 31, 0x1FB750u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB750u;
label_1fb750:
    // 0x1fb750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb754:
    // 0x1fb754: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fb754u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fb758:
    // 0x1fb758: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fb758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fb75c:
    // 0x1fb75c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb760:
    // 0x1fb760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb764:
    // 0x1fb764: 0x0  nop
    ctx->pc = 0x1fb764u;
    // NOP
label_1fb768:
    // 0x1fb768: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1fb768u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1fb76c:
    // 0x1fb76c: 0x0  nop
    ctx->pc = 0x1fb76cu;
    // NOP
label_1fb770:
    // 0x1fb770: 0x0  nop
    ctx->pc = 0x1fb770u;
    // NOP
label_1fb774:
    // 0x1fb774: 0xc06d412  jal         func_1B5048
label_1fb778:
    if (ctx->pc == 0x1FB778u) {
        ctx->pc = 0x1FB77Cu;
        goto label_1fb77c;
    }
    ctx->pc = 0x1FB774u;
    SET_GPR_U32(ctx, 31, 0x1FB77Cu);
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1FB77Cu;
label_1fb77c:
    // 0x1fb77c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fb780:
    // 0x1fb780: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fb780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fb784:
    // 0x1fb784: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fb784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fb788:
    // 0x1fb788: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1fb788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1fb78c:
    // 0x1fb78c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1fb78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fb790:
    // 0x1fb790: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1fb790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1fb794:
    // 0x1fb794: 0xc6a21120  lwc1        $f2, 0x1120($s5)
    ctx->pc = 0x1fb794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb798:
    // 0x1fb798: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1fb798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1fb79c:
    // 0x1fb79c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fb79cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb7a0:
    // 0x1fb7a0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1fb7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1fb7a4:
    // 0x1fb7a4: 0xc6a01124  lwc1        $f0, 0x1124($s5)
    ctx->pc = 0x1fb7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb7a8:
    // 0x1fb7a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb7ac:
    // 0x1fb7ac: 0x0  nop
    ctx->pc = 0x1fb7acu;
    // NOP
label_1fb7b0:
    // 0x1fb7b0: 0x46160b01  sub.s       $f12, $f1, $f22
    ctx->pc = 0x1fb7b0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_1fb7b4:
    // 0x1fb7b4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1fb7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1fb7b8:
    // 0x1fb7b8: 0xc06d4c0  jal         func_1B5300
label_1fb7bc:
    if (ctx->pc == 0x1FB7BCu) {
        ctx->pc = 0x1FB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7B8u;
        // 0x1fb7bc: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB7C0u;
        goto label_1fb7c0;
    }
    ctx->pc = 0x1FB7B8u;
    SET_GPR_U32(ctx, 31, 0x1FB7C0u);
    ctx->pc = 0x1FB7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7B8u;
    // 0x1fb7bc: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1FB7C0u;
label_1fb7c0:
    // 0x1fb7c0: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fb7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fb7c4:
    // 0x1fb7c4: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fb7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fb7c8:
    // 0x1fb7c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fb7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fb7cc:
    // 0x1fb7cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fb7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fb7d0:
    // 0x1fb7d0: 0xc6a11128  lwc1        $f1, 0x1128($s5)
    ctx->pc = 0x1fb7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb7d4:
    // 0x1fb7d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1fb7d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fb7d8:
    // 0x1fb7d8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1fb7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1fb7dc:
    // 0x1fb7dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fb7dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fb7e0:
    // 0x1fb7e0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fb7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fb7e4:
    // 0x1fb7e4: 0xc08f0cc  jal         func_23C330
label_1fb7e8:
    if (ctx->pc == 0x1FB7E8u) {
        ctx->pc = 0x1FB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7E4u;
        // 0x1fb7e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB7ECu;
        goto label_1fb7ec;
    }
    ctx->pc = 0x1FB7E4u;
    SET_GPR_U32(ctx, 31, 0x1FB7ECu);
    ctx->pc = 0x1FB7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7E4u;
    // 0x1fb7e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB7ECu;
label_1fb7ec:
    // 0x1fb7ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb7f0:
    // 0x1fb7f0: 0x0  nop
    ctx->pc = 0x1fb7f0u;
    // NOP
label_1fb7f4:
    // 0x1fb7f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fb7f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fb7f8:
    // 0x1fb7f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb7fc:
    // 0x1fb7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb800:
    // 0x1fb800: 0x0  nop
    ctx->pc = 0x1fb800u;
    // NOP
label_1fb804:
    // 0x1fb804: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fb804u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fb808:
    // 0x1fb808: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1fb808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1fb80c:
    // 0x1fb80c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1fb80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1fb810:
    // 0x1fb810: 0x0  nop
    ctx->pc = 0x1fb810u;
    // NOP
label_1fb814:
    // 0x1fb814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb818:
    // 0x1fb818: 0x0  nop
    ctx->pc = 0x1fb818u;
    // NOP
label_1fb81c:
    // 0x1fb81c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1fb81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb820:
    // 0x1fb820: 0x0  nop
    ctx->pc = 0x1fb820u;
    // NOP
label_1fb824:
    // 0x1fb824: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1fb828:
    if (ctx->pc == 0x1FB828u) {
        ctx->pc = 0x1FB82Cu;
        goto label_1fb82c;
    }
    ctx->pc = 0x1FB824u;
    {
        const bool branch_taken_0x1fb824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb824) {
            ctx->pc = 0x1FB83Cu;
            goto label_1fb83c;
        }
    }
    ctx->pc = 0x1FB82Cu;
label_1fb82c:
    // 0x1fb82c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fb82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1fb830:
    // 0x1fb830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb834:
    // 0x1fb834: 0x0  nop
    ctx->pc = 0x1fb834u;
    // NOP
label_1fb838:
    // 0x1fb838: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fb838u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fb83c:
    // 0x1fb83c: 0x0  nop
    ctx->pc = 0x1fb83cu;
    // NOP
label_1fb840:
    // 0x1fb840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb844:
    // 0x1fb844: 0xc066e26  jal         func_19B898
label_1fb848:
    if (ctx->pc == 0x1FB848u) {
        ctx->pc = 0x1FB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB844u;
        // 0x1fb848: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB84Cu;
        goto label_1fb84c;
    }
    ctx->pc = 0x1FB844u;
    SET_GPR_U32(ctx, 31, 0x1FB84Cu);
    ctx->pc = 0x1FB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB844u;
    // 0x1fb848: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1FB84Cu;
label_1fb84c:
    // 0x1fb84c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fb84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fb850:
    // 0x1fb850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb854:
    // 0x1fb854: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fb854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb858:
    // 0x1fb858: 0xc066e14  jal         func_19B850
label_1fb85c:
    if (ctx->pc == 0x1FB85Cu) {
        ctx->pc = 0x1FB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB858u;
        // 0x1fb85c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB860u;
        goto label_1fb860;
    }
    ctx->pc = 0x1FB858u;
    SET_GPR_U32(ctx, 31, 0x1FB860u);
    ctx->pc = 0x1FB85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB858u;
    // 0x1fb85c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1FB860u;
label_1fb860:
    // 0x1fb860: 0x3c0340f0  lui         $v1, 0x40F0
    ctx->pc = 0x1fb860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16624 << 16));
label_1fb864:
    // 0x1fb864: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fb864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fb868:
    // 0x1fb868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb86c:
    // 0x1fb86c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1fb86cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1fb870:
    // 0x1fb870: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1fb870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb874:
    // 0x1fb874: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fb874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fb878:
    // 0x1fb878: 0x2a630040  slti        $v1, $s3, 0x40
    ctx->pc = 0x1fb878u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
label_1fb87c:
    // 0x1fb87c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fb87cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fb880:
    // 0x1fb880: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fb880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fb884:
    // 0x1fb884: 0x1460ff69  bnez        $v1, . + 4 + (-0x97 << 2)
label_1fb888:
    if (ctx->pc == 0x1FB888u) {
        ctx->pc = 0x1FB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB884u;
        // 0x1fb888: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB88Cu;
        goto label_1fb88c;
    }
    ctx->pc = 0x1FB884u;
    {
        const bool branch_taken_0x1fb884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB884u;
        // 0x1fb888: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb884) {
            ctx->pc = 0x1FB62Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb62c;
        }
    }
    ctx->pc = 0x1FB88Cu;
label_1fb88c:
    // 0x1fb88c: 0x26f70820  addiu       $s7, $s7, 0x820
    ctx->pc = 0x1fb88cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2080));
label_1fb890:
    // 0x1fb890: 0x26d60400  addiu       $s6, $s6, 0x400
    ctx->pc = 0x1fb890u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1024));
label_1fb894:
    // 0x1fb894: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1fb894u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1fb898:
    // 0x1fb898: 0x96a31138  lhu         $v1, 0x1138($s5)
    ctx->pc = 0x1fb898u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4408)));
label_1fb89c:
    // 0x1fb89c: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x1fb89cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fb8a0:
    // 0x1fb8a0: 0x1460ff5d  bnez        $v1, . + 4 + (-0xA3 << 2)
label_1fb8a4:
    if (ctx->pc == 0x1FB8A4u) {
        ctx->pc = 0x1FB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8A0u;
        // 0x1fb8a4: 0x2b71821  addu        $v1, $s5, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB8A8u;
        goto label_1fb8a8;
    }
    ctx->pc = 0x1FB8A0u;
    {
        const bool branch_taken_0x1fb8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8A0u;
        // 0x1fb8a4: 0x2b71821  addu        $v1, $s5, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8a0) {
            ctx->pc = 0x1FB618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb618;
        }
    }
    ctx->pc = 0x1FB8A8u;
label_1fb8a8:
    // 0x1fb8a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1fb8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1fb8ac:
    // 0x1fb8ac: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1fb8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1fb8b0:
    // 0x1fb8b0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1fb8b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1fb8b4:
    // 0x1fb8b4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1fb8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fb8b8:
    // 0x1fb8b8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1fb8b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fb8bc:
    // 0x1fb8bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1fb8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fb8c0:
    // 0x1fb8c0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1fb8c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fb8c4:
    // 0x1fb8c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1fb8c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fb8c8:
    // 0x1fb8c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1fb8c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb8cc:
    // 0x1fb8cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fb8ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb8d0:
    // 0x1fb8d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fb8d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb8d4:
    // 0x1fb8d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fb8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb8d8:
    // 0x1fb8d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fb8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb8dc:
    // 0x1fb8dc: 0x3e00008  jr          $ra
label_1fb8e0:
    if (ctx->pc == 0x1FB8E0u) {
        ctx->pc = 0x1FB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8DCu;
        // 0x1fb8e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB8E4u;
        goto label_1fb8e4;
    }
    ctx->pc = 0x1FB8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8DCu;
        // 0x1fb8e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB8E4u;
label_1fb8e4:
    // 0x1fb8e4: 0x0  nop
    ctx->pc = 0x1fb8e4u;
    // NOP
label_1fb8e8:
    // 0x1fb8e8: 0x0  nop
    ctx->pc = 0x1fb8e8u;
    // NOP
label_1fb8ec:
    // 0x1fb8ec: 0x0  nop
    ctx->pc = 0x1fb8ecu;
    // NOP
label_1fb8f0:
    // 0x1fb8f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fb8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1fb8f4:
    // 0x1fb8f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fb8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1fb8f8:
    // 0x1fb8f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fb8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1fb8fc:
    // 0x1fb8fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fb8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1fb900:
    // 0x1fb900: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fb900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1fb904:
    // 0x1fb904: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fb904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb908:
    // 0x1fb908: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fb908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1fb90c:
    // 0x1fb90c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fb90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fb910:
    // 0x1fb910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fb910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fb914:
    // 0x1fb914: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1fb914u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fb918:
    // 0x1fb918: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1fb918u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1fb91c:
    // 0x1fb91c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fb91cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fb920:
    // 0x1fb920: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1fb920u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1fb924:
    // 0x1fb924: 0xc04f310  jal         func_13CC40
label_1fb928:
    if (ctx->pc == 0x1FB928u) {
        ctx->pc = 0x1FB928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB924u;
        // 0x1fb928: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB92Cu;
        goto label_1fb92c;
    }
    ctx->pc = 0x1FB924u;
    SET_GPR_U32(ctx, 31, 0x1FB92Cu);
    ctx->pc = 0x1FB928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB924u;
    // 0x1fb928: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC40u, 0x1FB924u, 0x1FB92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB92Cu;
label_1fb92c:
    // 0x1fb92c: 0x92840fe4  lbu         $a0, 0xFE4($s4)
    ctx->pc = 0x1fb92cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4068)));
label_1fb930:
    // 0x1fb930: 0x27828248  addiu       $v0, $gp, -0x7DB8
    ctx->pc = 0x1fb930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
label_1fb934:
    // 0x1fb934: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1fb934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1fb938:
    // 0x1fb938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb93c:
    // 0x1fb93c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fb93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb940:
    // 0x1fb940: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1fb944:
    if (ctx->pc == 0x1FB944u) {
        ctx->pc = 0x1FB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB940u;
        // 0x1fb944: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB948u;
        goto label_1fb948;
    }
    ctx->pc = 0x1FB940u;
    {
        const bool branch_taken_0x1fb940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB940u;
        // 0x1fb944: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb940) {
            ctx->pc = 0x1FB9B8u;
            goto label_1fb9b8;
        }
    }
    ctx->pc = 0x1FB948u;
label_1fb948:
    // 0x1fb948: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fb948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1fb94c:
    // 0x1fb94c: 0x27828238  addiu       $v0, $gp, -0x7DC8
    ctx->pc = 0x1fb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935096));
label_1fb950:
    // 0x1fb950: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fb950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fb954:
    // 0x1fb954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb958:
    // 0x1fb958: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fb958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb95c:
    // 0x1fb95c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1fb960:
    if (ctx->pc == 0x1FB960u) {
        ctx->pc = 0x1FB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB95Cu;
        // 0x1fb960: 0x27828240  addiu       $v0, $gp, -0x7DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB964u;
        goto label_1fb964;
    }
    ctx->pc = 0x1FB95Cu;
    {
        const bool branch_taken_0x1fb95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB95Cu;
        // 0x1fb960: 0x27828240  addiu       $v0, $gp, -0x7DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb95c) {
            ctx->pc = 0x1FB984u;
            goto label_1fb984;
        }
    }
    ctx->pc = 0x1FB964u;
label_1fb964:
    // 0x1fb964: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fb968:
    // 0x1fb968: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1fb968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb96c:
    // 0x1fb96c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fb970:
    // 0x1fb970: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fb970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fb974:
    // 0x1fb974: 0xc0591f4  jal         func_1647D0
label_1fb978:
    if (ctx->pc == 0x1FB978u) {
        ctx->pc = 0x1FB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB974u;
        // 0x1fb978: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB97Cu;
        goto label_1fb97c;
    }
    ctx->pc = 0x1FB974u;
    SET_GPR_U32(ctx, 31, 0x1FB97Cu);
    ctx->pc = 0x1FB978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB974u;
    // 0x1fb978: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1FB974u, 0x1FB97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB97Cu;
label_1fb97c:
    // 0x1fb97c: 0x10000116  b           . + 4 + (0x116 << 2)
label_1fb980:
    if (ctx->pc == 0x1FB980u) {
        ctx->pc = 0x1FB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB97Cu;
        // 0x1fb980: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB984u;
        goto label_1fb984;
    }
    ctx->pc = 0x1FB97Cu;
    {
        const bool branch_taken_0x1fb97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB97Cu;
        // 0x1fb980: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb97c) {
            ctx->pc = 0x1FBDD8u;
            { ctx->pc = 0x1fbdd8; return; }
        }
    }
    ctx->pc = 0x1FB984u;
label_1fb984:
    // 0x1fb984: 0x8e821540  lw          $v0, 0x1540($s4)
    ctx->pc = 0x1fb984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5440)));
label_1fb988:
    // 0x1fb988: 0x28420052  slti        $v0, $v0, 0x52
    ctx->pc = 0x1fb988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)82) ? 1 : 0);
label_1fb98c:
    // 0x1fb98c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1fb990:
    if (ctx->pc == 0x1FB990u) {
        ctx->pc = 0x1FB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB98Cu;
        // 0x1fb990: 0x27828240  addiu       $v0, $gp, -0x7DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB994u;
        goto label_1fb994;
    }
    ctx->pc = 0x1FB98Cu;
    {
        const bool branch_taken_0x1fb98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB98Cu;
        // 0x1fb990: 0x27828240  addiu       $v0, $gp, -0x7DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb98c) {
            ctx->pc = 0x1FB9B4u;
            goto label_1fb9b4;
        }
    }
    ctx->pc = 0x1FB994u;
label_1fb994:
    // 0x1fb994: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fb998:
    // 0x1fb998: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1fb998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb99c:
    // 0x1fb99c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fb99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fb9a0:
    // 0x1fb9a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fb9a4:
    // 0x1fb9a4: 0xc0591f4  jal         func_1647D0
label_1fb9a8:
    if (ctx->pc == 0x1FB9A8u) {
        ctx->pc = 0x1FB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9A4u;
        // 0x1fb9a8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB9ACu;
        goto label_1fb9ac;
    }
    ctx->pc = 0x1FB9A4u;
    SET_GPR_U32(ctx, 31, 0x1FB9ACu);
    ctx->pc = 0x1FB9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB9A4u;
    // 0x1fb9a8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1FB9A4u, 0x1FB9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB9ACu;
label_1fb9ac:
    // 0x1fb9ac: 0x10000109  b           . + 4 + (0x109 << 2)
label_1fb9b0:
    if (ctx->pc == 0x1FB9B0u) {
        ctx->pc = 0x1FB9B4u;
        goto label_1fb9b4;
    }
    ctx->pc = 0x1FB9ACu;
    {
        const bool branch_taken_0x1fb9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9ac) {
            ctx->pc = 0x1FBDD4u;
            { ctx->pc = 0x1fbdd4; return; }
        }
    }
    ctx->pc = 0x1FB9B4u;
label_1fb9b4:
    // 0x1fb9b4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1fb9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fb9b8:
    // 0x1fb9b8: 0xc0646d4  jal         func_191B50
label_1fb9bc:
    if (ctx->pc == 0x1FB9BCu) {
        ctx->pc = 0x1FB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9B8u;
        // 0x1fb9bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB9C0u;
        goto label_1fb9c0;
    }
    ctx->pc = 0x1FB9B8u;
    SET_GPR_U32(ctx, 31, 0x1FB9C0u);
    ctx->pc = 0x1FB9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB9B8u;
    // 0x1fb9bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    { ctx->pc = 0x191b50; return; }
    ctx->pc = 0x1FB9C0u;
label_1fb9c0:
    // 0x1fb9c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fb9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fb9c4:
    // 0x1fb9c4: 0xc0646f8  jal         func_191BE0
label_1fb9c8:
    if (ctx->pc == 0x1FB9C8u) {
        ctx->pc = 0x1FB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9C4u;
        // 0x1fb9c8: 0x26850fd0  addiu       $a1, $s4, 0xFD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB9CCu;
        goto label_1fb9cc;
    }
    ctx->pc = 0x1FB9C4u;
    SET_GPR_U32(ctx, 31, 0x1FB9CCu);
    ctx->pc = 0x1FB9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB9C4u;
    // 0x1fb9c8: 0x26850fd0  addiu       $a1, $s4, 0xFD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191BE0u;
    { ctx->pc = 0x191be0; return; }
    ctx->pc = 0x1FB9CCu;
label_1fb9cc:
    // 0x1fb9cc: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fb9d0:
    // 0x1fb9d0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1fb9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fb9d4:
    // 0x1fb9d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb9d8:
    // 0x1fb9d8: 0x0  nop
    ctx->pc = 0x1fb9d8u;
    // NOP
label_1fb9dc:
    // 0x1fb9dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fb9dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb9e0:
    // 0x1fb9e0: 0x0  nop
    ctx->pc = 0x1fb9e0u;
    // NOP
label_1fb9e4:
    // 0x1fb9e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1fb9e8:
    if (ctx->pc == 0x1FB9E8u) {
        ctx->pc = 0x1FB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9E4u;
        // 0x1fb9e8: 0x26840fd0  addiu       $a0, $s4, 0xFD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB9ECu;
        goto label_1fb9ec;
    }
    ctx->pc = 0x1FB9E4u;
    {
        const bool branch_taken_0x1fb9e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9E4u;
        // 0x1fb9e8: 0x26840fd0  addiu       $a0, $s4, 0xFD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9e4) {
            ctx->pc = 0x1FB9F0u;
            goto label_1fb9f0;
        }
    }
    ctx->pc = 0x1FB9ECu;
label_1fb9ec:
    // 0x1fb9ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fb9ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb9f0:
    // 0x1fb9f0: 0xc066e26  jal         func_19B898
label_1fb9f4:
    if (ctx->pc == 0x1FB9F4u) {
        ctx->pc = 0x1FB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9F0u;
        // 0x1fb9f4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB9F8u;
        goto label_1fb9f8;
    }
    ctx->pc = 0x1FB9F0u;
    SET_GPR_U32(ctx, 31, 0x1FB9F8u);
    ctx->pc = 0x1FB9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB9F0u;
    // 0x1fb9f4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1FB9F8u;
label_1fb9f8:
    // 0x1fb9f8: 0x26900060  addiu       $s0, $s4, 0x60
    ctx->pc = 0x1fb9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_1fb9fc:
    // 0x1fb9fc: 0x26910070  addiu       $s1, $s4, 0x70
    ctx->pc = 0x1fb9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_1fba00:
    // 0x1fba00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fba00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fba04:
    // 0x1fba04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fba08:
    // 0x1fba08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fba08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fba0c:
    // 0x1fba0c: 0xc066e02  jal         func_19B808
label_1fba10:
    if (ctx->pc == 0x1FBA10u) {
        ctx->pc = 0x1FBA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA0Cu;
        // 0x1fba10: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBA14u;
        goto label_1fba14;
    }
    ctx->pc = 0x1FBA0Cu;
    SET_GPR_U32(ctx, 31, 0x1FBA14u);
    ctx->pc = 0x1FBA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA0Cu;
    // 0x1fba10: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1FBA14u;
label_1fba14:
    // 0x1fba14: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_1fba18:
    if (ctx->pc == 0x1FBA18u) {
        ctx->pc = 0x1FBA1Cu;
        goto label_1fba1c;
    }
    ctx->pc = 0x1FBA14u;
    {
        const bool branch_taken_0x1fba14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fba14) {
            ctx->pc = 0x1FBA40u;
            goto label_1fba40;
        }
    }
    ctx->pc = 0x1FBA1Cu;
label_1fba1c:
    // 0x1fba1c: 0xc6810fd4  lwc1        $f1, 0xFD4($s4)
    ctx->pc = 0x1fba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fba20:
    // 0x1fba20: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1fba20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_1fba24:
    // 0x1fba24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fba24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fba28:
    // 0x1fba28: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1fba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fba2c:
    // 0x1fba2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fba2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fba30:
    // 0x1fba30: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1fba30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fba34:
    // 0x1fba34: 0x0  nop
    ctx->pc = 0x1fba34u;
    // NOP
label_1fba38:
    // 0x1fba38: 0x450100e1  bc1t        . + 4 + (0xE1 << 2)
label_1fba3c:
    if (ctx->pc == 0x1FBA3Cu) {
        ctx->pc = 0x1FBA40u;
        goto label_1fba40;
    }
    ctx->pc = 0x1FBA38u;
    {
        const bool branch_taken_0x1fba38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fba38) {
            ctx->pc = 0x1FBDC0u;
            { ctx->pc = 0x1fbdc0; return; }
        }
    }
    ctx->pc = 0x1FBA40u;
label_1fba40:
    // 0x1fba40: 0x92830fe4  lbu         $v1, 0xFE4($s4)
    ctx->pc = 0x1fba40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4068)));
label_1fba44:
    // 0x1fba44: 0x27828248  addiu       $v0, $gp, -0x7DB8
    ctx->pc = 0x1fba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
label_1fba48:
    // 0x1fba48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fba48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fba4c:
    // 0x1fba4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fba50:
    // 0x1fba50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fba54:
    // 0x1fba54: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_1fba58:
    if (ctx->pc == 0x1FBA58u) {
        ctx->pc = 0x1FBA5Cu;
        goto label_1fba5c;
    }
    ctx->pc = 0x1FBA54u;
    {
        const bool branch_taken_0x1fba54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fba54) {
            ctx->pc = 0x1FBC24u;
            { ctx->pc = 0x1fbc24; return; }
        }
    }
    ctx->pc = 0x1FBA5Cu;
label_1fba5c:
    // 0x1fba5c: 0xc08f0cc  jal         func_23C330
label_1fba60:
    if (ctx->pc == 0x1FBA60u) {
        ctx->pc = 0x1FBA64u;
        goto label_1fba64;
    }
    ctx->pc = 0x1FBA5Cu;
    SET_GPR_U32(ctx, 31, 0x1FBA64u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBA64u;
label_1fba64:
    // 0x1fba64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fba64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fba68:
    // 0x1fba68: 0x0  nop
    ctx->pc = 0x1fba68u;
    // NOP
label_1fba6c:
    // 0x1fba6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fba6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fba70:
    // 0x1fba70: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fba70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fba74:
    // 0x1fba74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fba74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fba78:
    // 0x1fba78: 0x0  nop
    ctx->pc = 0x1fba78u;
    // NOP
label_1fba7c:
    // 0x1fba7c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fba7cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1fba80:
    // 0x1fba80: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fba80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1fba84:
    // 0x1fba84: 0x0  nop
    ctx->pc = 0x1fba84u;
    // NOP
label_1fba88:
    // 0x1fba88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fba88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fba8c:
    // 0x1fba8c: 0x0  nop
    ctx->pc = 0x1fba8cu;
    // NOP
label_1fba90:
    // 0x1fba90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fba90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fba94:
    // 0x1fba94: 0x0  nop
    ctx->pc = 0x1fba94u;
    // NOP
label_1fba98:
    // 0x1fba98: 0x45010062  bc1t        . + 4 + (0x62 << 2)
label_1fba9c:
    if (ctx->pc == 0x1FBA9Cu) {
        ctx->pc = 0x1FBAA0u;
        goto label_1fbaa0;
    }
    ctx->pc = 0x1FBA98u;
    {
        const bool branch_taken_0x1fba98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fba98) {
            ctx->pc = 0x1FBC24u;
            { ctx->pc = 0x1fbc24; return; }
        }
    }
    ctx->pc = 0x1FBAA0u;
label_1fbaa0:
    // 0x1fbaa0: 0xc08f0cc  jal         func_23C330
label_1fbaa4:
    if (ctx->pc == 0x1FBAA4u) {
        ctx->pc = 0x1FBAA8u;
        goto label_1fbaa8;
    }
    ctx->pc = 0x1FBAA0u;
    SET_GPR_U32(ctx, 31, 0x1FBAA8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBAA8u;
label_1fbaa8:
    // 0x1fbaa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbaac:
    // 0x1fbaac: 0x0  nop
    ctx->pc = 0x1fbaacu;
    // NOP
label_1fbab0:
    // 0x1fbab0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fbab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1fbab4:
    // 0x1fbab4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1fbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1fbab8:
    // 0x1fbab8: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1fbab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fbabc:
    // 0x1fbabc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fbac0:
    // 0x1fbac0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fbac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbac4:
    // 0x1fbac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbac8:
    // 0x1fbac8: 0x0  nop
    ctx->pc = 0x1fbac8u;
    // NOP
label_1fbacc:
    // 0x1fbacc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1fbaccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1fbad0:
    // 0x1fbad0: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1fbad0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1fbad4:
    // 0x1fbad4: 0x0  nop
    ctx->pc = 0x1fbad4u;
    // NOP
label_1fbad8:
    // 0x1fbad8: 0x0  nop
    ctx->pc = 0x1fbad8u;
    // NOP
label_1fbadc:
    // 0x1fbadc: 0xc08f0cc  jal         func_23C330
label_1fbae0:
    if (ctx->pc == 0x1FBAE0u) {
        ctx->pc = 0x1FBAE4u;
        goto label_1fbae4;
    }
    ctx->pc = 0x1FBADCu;
    SET_GPR_U32(ctx, 31, 0x1FBAE4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBAE4u;
label_1fbae4:
    // 0x1fbae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fbae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbae8:
    // 0x1fbae8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1fbae8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1fbaec:
    // 0x1fbaec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fbaecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fbaf0:
    // 0x1fbaf0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fbaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fbaf4:
    // 0x1fbaf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbaf8:
    // 0x1fbaf8: 0x0  nop
    ctx->pc = 0x1fbaf8u;
    // NOP
label_1fbafc:
    // 0x1fbafc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fbafcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    ctx->pc = 0x1fbb00u;
    return;
}
