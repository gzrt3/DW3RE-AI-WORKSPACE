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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part72(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1be380u: goto label_1be380;
        case 0x1be384u: goto label_1be384;
        case 0x1be388u: goto label_1be388;
        case 0x1be38cu: goto label_1be38c;
        case 0x1be390u: goto label_1be390;
        case 0x1be394u: goto label_1be394;
        case 0x1be398u: goto label_1be398;
        case 0x1be39cu: goto label_1be39c;
        case 0x1be3a0u: goto label_1be3a0;
        case 0x1be3a4u: goto label_1be3a4;
        case 0x1be3a8u: goto label_1be3a8;
        case 0x1be3acu: goto label_1be3ac;
        case 0x1be3b0u: goto label_1be3b0;
        case 0x1be3b4u: goto label_1be3b4;
        case 0x1be3b8u: goto label_1be3b8;
        case 0x1be3bcu: goto label_1be3bc;
        case 0x1be3c0u: goto label_1be3c0;
        case 0x1be3c4u: goto label_1be3c4;
        case 0x1be3c8u: goto label_1be3c8;
        case 0x1be3ccu: goto label_1be3cc;
        case 0x1be3d0u: goto label_1be3d0;
        case 0x1be3d4u: goto label_1be3d4;
        case 0x1be3d8u: goto label_1be3d8;
        case 0x1be3dcu: goto label_1be3dc;
        case 0x1be3e0u: goto label_1be3e0;
        case 0x1be3e4u: goto label_1be3e4;
        case 0x1be3e8u: goto label_1be3e8;
        case 0x1be3ecu: goto label_1be3ec;
        case 0x1be3f0u: goto label_1be3f0;
        case 0x1be3f4u: goto label_1be3f4;
        case 0x1be3f8u: goto label_1be3f8;
        case 0x1be3fcu: goto label_1be3fc;
        case 0x1be400u: goto label_1be400;
        case 0x1be404u: goto label_1be404;
        case 0x1be408u: goto label_1be408;
        case 0x1be40cu: goto label_1be40c;
        case 0x1be410u: goto label_1be410;
        case 0x1be414u: goto label_1be414;
        case 0x1be418u: goto label_1be418;
        case 0x1be41cu: goto label_1be41c;
        case 0x1be420u: goto label_1be420;
        case 0x1be424u: goto label_1be424;
        case 0x1be428u: goto label_1be428;
        case 0x1be42cu: goto label_1be42c;
        case 0x1be430u: goto label_1be430;
        case 0x1be434u: goto label_1be434;
        case 0x1be438u: goto label_1be438;
        case 0x1be43cu: goto label_1be43c;
        case 0x1be440u: goto label_1be440;
        case 0x1be444u: goto label_1be444;
        case 0x1be448u: goto label_1be448;
        case 0x1be44cu: goto label_1be44c;
        case 0x1be450u: goto label_1be450;
        case 0x1be454u: goto label_1be454;
        case 0x1be458u: goto label_1be458;
        case 0x1be45cu: goto label_1be45c;
        case 0x1be460u: goto label_1be460;
        case 0x1be464u: goto label_1be464;
        case 0x1be468u: goto label_1be468;
        case 0x1be46cu: goto label_1be46c;
        case 0x1be470u: goto label_1be470;
        case 0x1be474u: goto label_1be474;
        case 0x1be478u: goto label_1be478;
        case 0x1be47cu: goto label_1be47c;
        case 0x1be480u: goto label_1be480;
        case 0x1be484u: goto label_1be484;
        case 0x1be488u: goto label_1be488;
        case 0x1be48cu: goto label_1be48c;
        case 0x1be490u: goto label_1be490;
        case 0x1be494u: goto label_1be494;
        case 0x1be498u: goto label_1be498;
        case 0x1be49cu: goto label_1be49c;
        case 0x1be4a0u: goto label_1be4a0;
        case 0x1be4a4u: goto label_1be4a4;
        case 0x1be4a8u: goto label_1be4a8;
        case 0x1be4acu: goto label_1be4ac;
        case 0x1be4b0u: goto label_1be4b0;
        case 0x1be4b4u: goto label_1be4b4;
        case 0x1be4b8u: goto label_1be4b8;
        case 0x1be4bcu: goto label_1be4bc;
        case 0x1be4c0u: goto label_1be4c0;
        case 0x1be4c4u: goto label_1be4c4;
        case 0x1be4c8u: goto label_1be4c8;
        case 0x1be4ccu: goto label_1be4cc;
        case 0x1be4d0u: goto label_1be4d0;
        case 0x1be4d4u: goto label_1be4d4;
        case 0x1be4d8u: goto label_1be4d8;
        case 0x1be4dcu: goto label_1be4dc;
        case 0x1be4e0u: goto label_1be4e0;
        case 0x1be4e4u: goto label_1be4e4;
        case 0x1be4e8u: goto label_1be4e8;
        case 0x1be4ecu: goto label_1be4ec;
        case 0x1be4f0u: goto label_1be4f0;
        case 0x1be4f4u: goto label_1be4f4;
        case 0x1be4f8u: goto label_1be4f8;
        case 0x1be4fcu: goto label_1be4fc;
        case 0x1be500u: goto label_1be500;
        case 0x1be504u: goto label_1be504;
        case 0x1be508u: goto label_1be508;
        case 0x1be50cu: goto label_1be50c;
        case 0x1be510u: goto label_1be510;
        case 0x1be514u: goto label_1be514;
        case 0x1be518u: goto label_1be518;
        case 0x1be51cu: goto label_1be51c;
        case 0x1be520u: goto label_1be520;
        case 0x1be524u: goto label_1be524;
        case 0x1be528u: goto label_1be528;
        case 0x1be52cu: goto label_1be52c;
        case 0x1be530u: goto label_1be530;
        case 0x1be534u: goto label_1be534;
        case 0x1be538u: goto label_1be538;
        case 0x1be53cu: goto label_1be53c;
        case 0x1be540u: goto label_1be540;
        case 0x1be544u: goto label_1be544;
        case 0x1be548u: goto label_1be548;
        case 0x1be54cu: goto label_1be54c;
        case 0x1be550u: goto label_1be550;
        case 0x1be554u: goto label_1be554;
        case 0x1be558u: goto label_1be558;
        case 0x1be55cu: goto label_1be55c;
        case 0x1be560u: goto label_1be560;
        case 0x1be564u: goto label_1be564;
        case 0x1be568u: goto label_1be568;
        case 0x1be56cu: goto label_1be56c;
        case 0x1be570u: goto label_1be570;
        case 0x1be574u: goto label_1be574;
        case 0x1be578u: goto label_1be578;
        case 0x1be57cu: goto label_1be57c;
        case 0x1be580u: goto label_1be580;
        case 0x1be584u: goto label_1be584;
        case 0x1be588u: goto label_1be588;
        case 0x1be58cu: goto label_1be58c;
        case 0x1be590u: goto label_1be590;
        case 0x1be594u: goto label_1be594;
        case 0x1be598u: goto label_1be598;
        case 0x1be59cu: goto label_1be59c;
        case 0x1be5a0u: goto label_1be5a0;
        case 0x1be5a4u: goto label_1be5a4;
        case 0x1be5a8u: goto label_1be5a8;
        case 0x1be5acu: goto label_1be5ac;
        case 0x1be5b0u: goto label_1be5b0;
        case 0x1be5b4u: goto label_1be5b4;
        case 0x1be5b8u: goto label_1be5b8;
        case 0x1be5bcu: goto label_1be5bc;
        case 0x1be5c0u: goto label_1be5c0;
        case 0x1be5c4u: goto label_1be5c4;
        case 0x1be5c8u: goto label_1be5c8;
        case 0x1be5ccu: goto label_1be5cc;
        case 0x1be5d0u: goto label_1be5d0;
        case 0x1be5d4u: goto label_1be5d4;
        case 0x1be5d8u: goto label_1be5d8;
        case 0x1be5dcu: goto label_1be5dc;
        case 0x1be5e0u: goto label_1be5e0;
        case 0x1be5e4u: goto label_1be5e4;
        case 0x1be5e8u: goto label_1be5e8;
        case 0x1be5ecu: goto label_1be5ec;
        case 0x1be5f0u: goto label_1be5f0;
        case 0x1be5f4u: goto label_1be5f4;
        case 0x1be5f8u: goto label_1be5f8;
        case 0x1be5fcu: goto label_1be5fc;
        case 0x1be600u: goto label_1be600;
        case 0x1be604u: goto label_1be604;
        case 0x1be608u: goto label_1be608;
        case 0x1be60cu: goto label_1be60c;
        case 0x1be610u: goto label_1be610;
        case 0x1be614u: goto label_1be614;
        case 0x1be618u: goto label_1be618;
        case 0x1be61cu: goto label_1be61c;
        case 0x1be620u: goto label_1be620;
        case 0x1be624u: goto label_1be624;
        case 0x1be628u: goto label_1be628;
        case 0x1be62cu: goto label_1be62c;
        case 0x1be630u: goto label_1be630;
        case 0x1be634u: goto label_1be634;
        case 0x1be638u: goto label_1be638;
        case 0x1be63cu: goto label_1be63c;
        case 0x1be640u: goto label_1be640;
        case 0x1be644u: goto label_1be644;
        case 0x1be648u: goto label_1be648;
        case 0x1be64cu: goto label_1be64c;
        case 0x1be650u: goto label_1be650;
        case 0x1be654u: goto label_1be654;
        case 0x1be658u: goto label_1be658;
        case 0x1be65cu: goto label_1be65c;
        case 0x1be660u: goto label_1be660;
        case 0x1be664u: goto label_1be664;
        case 0x1be668u: goto label_1be668;
        case 0x1be66cu: goto label_1be66c;
        case 0x1be670u: goto label_1be670;
        case 0x1be674u: goto label_1be674;
        case 0x1be678u: goto label_1be678;
        case 0x1be67cu: goto label_1be67c;
        case 0x1be680u: goto label_1be680;
        case 0x1be684u: goto label_1be684;
        case 0x1be688u: goto label_1be688;
        case 0x1be68cu: goto label_1be68c;
        case 0x1be690u: goto label_1be690;
        case 0x1be694u: goto label_1be694;
        case 0x1be698u: goto label_1be698;
        case 0x1be69cu: goto label_1be69c;
        case 0x1be6a0u: goto label_1be6a0;
        case 0x1be6a4u: goto label_1be6a4;
        case 0x1be6a8u: goto label_1be6a8;
        case 0x1be6acu: goto label_1be6ac;
        case 0x1be6b0u: goto label_1be6b0;
        case 0x1be6b4u: goto label_1be6b4;
        case 0x1be6b8u: goto label_1be6b8;
        case 0x1be6bcu: goto label_1be6bc;
        case 0x1be6c0u: goto label_1be6c0;
        case 0x1be6c4u: goto label_1be6c4;
        case 0x1be6c8u: goto label_1be6c8;
        case 0x1be6ccu: goto label_1be6cc;
        case 0x1be6d0u: goto label_1be6d0;
        case 0x1be6d4u: goto label_1be6d4;
        case 0x1be6d8u: goto label_1be6d8;
        case 0x1be6dcu: goto label_1be6dc;
        case 0x1be6e0u: goto label_1be6e0;
        case 0x1be6e4u: goto label_1be6e4;
        case 0x1be6e8u: goto label_1be6e8;
        case 0x1be6ecu: goto label_1be6ec;
        case 0x1be6f0u: goto label_1be6f0;
        case 0x1be6f4u: goto label_1be6f4;
        case 0x1be6f8u: goto label_1be6f8;
        case 0x1be6fcu: goto label_1be6fc;
        case 0x1be700u: goto label_1be700;
        case 0x1be704u: goto label_1be704;
        case 0x1be708u: goto label_1be708;
        case 0x1be70cu: goto label_1be70c;
        case 0x1be710u: goto label_1be710;
        case 0x1be714u: goto label_1be714;
        case 0x1be718u: goto label_1be718;
        case 0x1be71cu: goto label_1be71c;
        case 0x1be720u: goto label_1be720;
        case 0x1be724u: goto label_1be724;
        case 0x1be728u: goto label_1be728;
        case 0x1be72cu: goto label_1be72c;
        case 0x1be730u: goto label_1be730;
        case 0x1be734u: goto label_1be734;
        case 0x1be738u: goto label_1be738;
        case 0x1be73cu: goto label_1be73c;
        case 0x1be740u: goto label_1be740;
        case 0x1be744u: goto label_1be744;
        case 0x1be748u: goto label_1be748;
        case 0x1be74cu: goto label_1be74c;
        case 0x1be750u: goto label_1be750;
        case 0x1be754u: goto label_1be754;
        case 0x1be758u: goto label_1be758;
        case 0x1be75cu: goto label_1be75c;
        case 0x1be760u: goto label_1be760;
        case 0x1be764u: goto label_1be764;
        case 0x1be768u: goto label_1be768;
        case 0x1be76cu: goto label_1be76c;
        case 0x1be770u: goto label_1be770;
        case 0x1be774u: goto label_1be774;
        case 0x1be778u: goto label_1be778;
        case 0x1be77cu: goto label_1be77c;
        case 0x1be780u: goto label_1be780;
        case 0x1be784u: goto label_1be784;
        case 0x1be788u: goto label_1be788;
        case 0x1be78cu: goto label_1be78c;
        case 0x1be790u: goto label_1be790;
        case 0x1be794u: goto label_1be794;
        case 0x1be798u: goto label_1be798;
        case 0x1be79cu: goto label_1be79c;
        case 0x1be7a0u: goto label_1be7a0;
        case 0x1be7a4u: goto label_1be7a4;
        case 0x1be7a8u: goto label_1be7a8;
        case 0x1be7acu: goto label_1be7ac;
        case 0x1be7b0u: goto label_1be7b0;
        case 0x1be7b4u: goto label_1be7b4;
        case 0x1be7b8u: goto label_1be7b8;
        case 0x1be7bcu: goto label_1be7bc;
        case 0x1be7c0u: goto label_1be7c0;
        case 0x1be7c4u: goto label_1be7c4;
        case 0x1be7c8u: goto label_1be7c8;
        case 0x1be7ccu: goto label_1be7cc;
        case 0x1be7d0u: goto label_1be7d0;
        case 0x1be7d4u: goto label_1be7d4;
        case 0x1be7d8u: goto label_1be7d8;
        case 0x1be7dcu: goto label_1be7dc;
        case 0x1be7e0u: goto label_1be7e0;
        case 0x1be7e4u: goto label_1be7e4;
        case 0x1be7e8u: goto label_1be7e8;
        case 0x1be7ecu: goto label_1be7ec;
        case 0x1be7f0u: goto label_1be7f0;
        case 0x1be7f4u: goto label_1be7f4;
        case 0x1be7f8u: goto label_1be7f8;
        case 0x1be7fcu: goto label_1be7fc;
        case 0x1be800u: goto label_1be800;
        case 0x1be804u: goto label_1be804;
        case 0x1be808u: goto label_1be808;
        case 0x1be80cu: goto label_1be80c;
        case 0x1be810u: goto label_1be810;
        case 0x1be814u: goto label_1be814;
        case 0x1be818u: goto label_1be818;
        case 0x1be81cu: goto label_1be81c;
        case 0x1be820u: goto label_1be820;
        case 0x1be824u: goto label_1be824;
        case 0x1be828u: goto label_1be828;
        case 0x1be82cu: goto label_1be82c;
        case 0x1be830u: goto label_1be830;
        case 0x1be834u: goto label_1be834;
        case 0x1be838u: goto label_1be838;
        case 0x1be83cu: goto label_1be83c;
        case 0x1be840u: goto label_1be840;
        case 0x1be844u: goto label_1be844;
        case 0x1be848u: goto label_1be848;
        case 0x1be84cu: goto label_1be84c;
        case 0x1be850u: goto label_1be850;
        case 0x1be854u: goto label_1be854;
        case 0x1be858u: goto label_1be858;
        case 0x1be85cu: goto label_1be85c;
        case 0x1be860u: goto label_1be860;
        case 0x1be864u: goto label_1be864;
        case 0x1be868u: goto label_1be868;
        case 0x1be86cu: goto label_1be86c;
        case 0x1be870u: goto label_1be870;
        case 0x1be874u: goto label_1be874;
        case 0x1be878u: goto label_1be878;
        case 0x1be87cu: goto label_1be87c;
        case 0x1be880u: goto label_1be880;
        case 0x1be884u: goto label_1be884;
        case 0x1be888u: goto label_1be888;
        case 0x1be88cu: goto label_1be88c;
        case 0x1be890u: goto label_1be890;
        case 0x1be894u: goto label_1be894;
        case 0x1be898u: goto label_1be898;
        case 0x1be89cu: goto label_1be89c;
        case 0x1be8a0u: goto label_1be8a0;
        case 0x1be8a4u: goto label_1be8a4;
        case 0x1be8a8u: goto label_1be8a8;
        case 0x1be8acu: goto label_1be8ac;
        case 0x1be8b0u: goto label_1be8b0;
        case 0x1be8b4u: goto label_1be8b4;
        case 0x1be8b8u: goto label_1be8b8;
        case 0x1be8bcu: goto label_1be8bc;
        case 0x1be8c0u: goto label_1be8c0;
        case 0x1be8c4u: goto label_1be8c4;
        case 0x1be8c8u: goto label_1be8c8;
        case 0x1be8ccu: goto label_1be8cc;
        case 0x1be8d0u: goto label_1be8d0;
        case 0x1be8d4u: goto label_1be8d4;
        case 0x1be8d8u: goto label_1be8d8;
        case 0x1be8dcu: goto label_1be8dc;
        case 0x1be8e0u: goto label_1be8e0;
        case 0x1be8e4u: goto label_1be8e4;
        case 0x1be8e8u: goto label_1be8e8;
        case 0x1be8ecu: goto label_1be8ec;
        case 0x1be8f0u: goto label_1be8f0;
        case 0x1be8f4u: goto label_1be8f4;
        case 0x1be8f8u: goto label_1be8f8;
        case 0x1be8fcu: goto label_1be8fc;
        case 0x1be900u: goto label_1be900;
        case 0x1be904u: goto label_1be904;
        case 0x1be908u: goto label_1be908;
        case 0x1be90cu: goto label_1be90c;
        case 0x1be910u: goto label_1be910;
        case 0x1be914u: goto label_1be914;
        case 0x1be918u: goto label_1be918;
        case 0x1be91cu: goto label_1be91c;
        case 0x1be920u: goto label_1be920;
        case 0x1be924u: goto label_1be924;
        case 0x1be928u: goto label_1be928;
        case 0x1be92cu: goto label_1be92c;
        case 0x1be930u: goto label_1be930;
        case 0x1be934u: goto label_1be934;
        case 0x1be938u: goto label_1be938;
        case 0x1be93cu: goto label_1be93c;
        case 0x1be940u: goto label_1be940;
        case 0x1be944u: goto label_1be944;
        case 0x1be948u: goto label_1be948;
        case 0x1be94cu: goto label_1be94c;
        case 0x1be950u: goto label_1be950;
        case 0x1be954u: goto label_1be954;
        case 0x1be958u: goto label_1be958;
        case 0x1be95cu: goto label_1be95c;
        case 0x1be960u: goto label_1be960;
        case 0x1be964u: goto label_1be964;
        case 0x1be968u: goto label_1be968;
        case 0x1be96cu: goto label_1be96c;
        case 0x1be970u: goto label_1be970;
        case 0x1be974u: goto label_1be974;
        case 0x1be978u: goto label_1be978;
        case 0x1be97cu: goto label_1be97c;
        case 0x1be980u: goto label_1be980;
        case 0x1be984u: goto label_1be984;
        case 0x1be988u: goto label_1be988;
        case 0x1be98cu: goto label_1be98c;
        case 0x1be990u: goto label_1be990;
        case 0x1be994u: goto label_1be994;
        case 0x1be998u: goto label_1be998;
        case 0x1be99cu: goto label_1be99c;
        case 0x1be9a0u: goto label_1be9a0;
        case 0x1be9a4u: goto label_1be9a4;
        case 0x1be9a8u: goto label_1be9a8;
        case 0x1be9acu: goto label_1be9ac;
        case 0x1be9b0u: goto label_1be9b0;
        case 0x1be9b4u: goto label_1be9b4;
        case 0x1be9b8u: goto label_1be9b8;
        case 0x1be9bcu: goto label_1be9bc;
        case 0x1be9c0u: goto label_1be9c0;
        case 0x1be9c4u: goto label_1be9c4;
        case 0x1be9c8u: goto label_1be9c8;
        case 0x1be9ccu: goto label_1be9cc;
        case 0x1be9d0u: goto label_1be9d0;
        case 0x1be9d4u: goto label_1be9d4;
        case 0x1be9d8u: goto label_1be9d8;
        case 0x1be9dcu: goto label_1be9dc;
        case 0x1be9e0u: goto label_1be9e0;
        case 0x1be9e4u: goto label_1be9e4;
        case 0x1be9e8u: goto label_1be9e8;
        case 0x1be9ecu: goto label_1be9ec;
        case 0x1be9f0u: goto label_1be9f0;
        case 0x1be9f4u: goto label_1be9f4;
        case 0x1be9f8u: goto label_1be9f8;
        case 0x1be9fcu: goto label_1be9fc;
        case 0x1bea00u: goto label_1bea00;
        case 0x1bea04u: goto label_1bea04;
        case 0x1bea08u: goto label_1bea08;
        case 0x1bea0cu: goto label_1bea0c;
        case 0x1bea10u: goto label_1bea10;
        case 0x1bea14u: goto label_1bea14;
        case 0x1bea18u: goto label_1bea18;
        case 0x1bea1cu: goto label_1bea1c;
        case 0x1bea20u: goto label_1bea20;
        case 0x1bea24u: goto label_1bea24;
        case 0x1bea28u: goto label_1bea28;
        case 0x1bea2cu: goto label_1bea2c;
        case 0x1bea30u: goto label_1bea30;
        case 0x1bea34u: goto label_1bea34;
        case 0x1bea38u: goto label_1bea38;
        case 0x1bea3cu: goto label_1bea3c;
        case 0x1bea40u: goto label_1bea40;
        case 0x1bea44u: goto label_1bea44;
        case 0x1bea48u: goto label_1bea48;
        case 0x1bea4cu: goto label_1bea4c;
        case 0x1bea50u: goto label_1bea50;
        case 0x1bea54u: goto label_1bea54;
        case 0x1bea58u: goto label_1bea58;
        case 0x1bea5cu: goto label_1bea5c;
        case 0x1bea60u: goto label_1bea60;
        case 0x1bea64u: goto label_1bea64;
        case 0x1bea68u: goto label_1bea68;
        case 0x1bea6cu: goto label_1bea6c;
        case 0x1bea70u: goto label_1bea70;
        case 0x1bea74u: goto label_1bea74;
        case 0x1bea78u: goto label_1bea78;
        case 0x1bea7cu: goto label_1bea7c;
        case 0x1bea80u: goto label_1bea80;
        case 0x1bea84u: goto label_1bea84;
        case 0x1bea88u: goto label_1bea88;
        case 0x1bea8cu: goto label_1bea8c;
        case 0x1bea90u: goto label_1bea90;
        case 0x1bea94u: goto label_1bea94;
        case 0x1bea98u: goto label_1bea98;
        case 0x1bea9cu: goto label_1bea9c;
        case 0x1beaa0u: goto label_1beaa0;
        case 0x1beaa4u: goto label_1beaa4;
        case 0x1beaa8u: goto label_1beaa8;
        case 0x1beaacu: goto label_1beaac;
        case 0x1beab0u: goto label_1beab0;
        case 0x1beab4u: goto label_1beab4;
        case 0x1beab8u: goto label_1beab8;
        case 0x1beabcu: goto label_1beabc;
        case 0x1beac0u: goto label_1beac0;
        case 0x1beac4u: goto label_1beac4;
        case 0x1beac8u: goto label_1beac8;
        case 0x1beaccu: goto label_1beacc;
        case 0x1bead0u: goto label_1bead0;
        case 0x1bead4u: goto label_1bead4;
        case 0x1bead8u: goto label_1bead8;
        case 0x1beadcu: goto label_1beadc;
        case 0x1beae0u: goto label_1beae0;
        case 0x1beae4u: goto label_1beae4;
        case 0x1beae8u: goto label_1beae8;
        case 0x1beaecu: goto label_1beaec;
        case 0x1beaf0u: goto label_1beaf0;
        case 0x1beaf4u: goto label_1beaf4;
        case 0x1beaf8u: goto label_1beaf8;
        case 0x1beafcu: goto label_1beafc;
        case 0x1beb00u: goto label_1beb00;
        case 0x1beb04u: goto label_1beb04;
        case 0x1beb08u: goto label_1beb08;
        case 0x1beb0cu: goto label_1beb0c;
        case 0x1beb10u: goto label_1beb10;
        case 0x1beb14u: goto label_1beb14;
        case 0x1beb18u: goto label_1beb18;
        case 0x1beb1cu: goto label_1beb1c;
        case 0x1beb20u: goto label_1beb20;
        case 0x1beb24u: goto label_1beb24;
        case 0x1beb28u: goto label_1beb28;
        case 0x1beb2cu: goto label_1beb2c;
        case 0x1beb30u: goto label_1beb30;
        case 0x1beb34u: goto label_1beb34;
        case 0x1beb38u: goto label_1beb38;
        case 0x1beb3cu: goto label_1beb3c;
        case 0x1beb40u: goto label_1beb40;
        case 0x1beb44u: goto label_1beb44;
        case 0x1beb48u: goto label_1beb48;
        case 0x1beb4cu: goto label_1beb4c;
        default: return;
    }

label_1be380:
    if (ctx->pc == 0x1BE380u) {
        ctx->pc = 0x1BE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE37Cu;
        // 0x1be380: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE384u;
        goto label_1be384;
    }
    ctx->pc = 0x1BE37Cu;
    {
        const bool branch_taken_0x1be37c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE37Cu;
        // 0x1be380: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be37c) {
            ctx->pc = 0x1BE390u;
            goto label_1be390;
        }
    }
    ctx->pc = 0x1BE384u;
label_1be384:
    // 0x1be384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be388:
    // 0x1be388: 0x10000007  b           . + 4 + (0x7 << 2)
label_1be38c:
    if (ctx->pc == 0x1BE38Cu) {
        ctx->pc = 0x1BE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE388u;
        // 0x1be38c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE390u;
        goto label_1be390;
    }
    ctx->pc = 0x1BE388u;
    {
        const bool branch_taken_0x1be388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE388u;
        // 0x1be38c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be388) {
            ctx->pc = 0x1BE3A8u;
            goto label_1be3a8;
        }
    }
    ctx->pc = 0x1BE390u;
label_1be390:
    // 0x1be390: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1be390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1be394:
    // 0x1be394: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1be394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1be398:
    // 0x1be398: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1be398u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be39c:
    // 0x1be39c: 0x0  nop
    ctx->pc = 0x1be39cu;
    // NOP
label_1be3a0:
    // 0x1be3a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1be3a4:
    // 0x1be3a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1be3a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1be3a8:
    // 0x1be3a8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1be3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1be3ac:
    // 0x1be3ac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1be3b0:
    // 0x1be3b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1be3b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1be3b4:
    // 0x1be3b4: 0x24633b8b  addiu       $v1, $v1, 0x3B8B
    ctx->pc = 0x1be3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15243));
label_1be3b8:
    // 0x1be3b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be3bc:
    // 0x1be3bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1be3bcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1be3c0:
    // 0x1be3c0: 0x0  nop
    ctx->pc = 0x1be3c0u;
    // NOP
label_1be3c4:
    // 0x1be3c4: 0xe66001e4  swc1        $f0, 0x1E4($s3)
    ctx->pc = 0x1be3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 484), bits); }
label_1be3c8:
    // 0x1be3c8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1be3c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1be3cc:
    // 0x1be3cc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1be3d0:
    if (ctx->pc == 0x1BE3D0u) {
        ctx->pc = 0x1BE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3CCu;
        // 0x1be3d0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE3D4u;
        goto label_1be3d4;
    }
    ctx->pc = 0x1BE3CCu;
    {
        const bool branch_taken_0x1be3cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3CCu;
        // 0x1be3d0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be3cc) {
            ctx->pc = 0x1BE3E0u;
            goto label_1be3e0;
        }
    }
    ctx->pc = 0x1BE3D4u;
label_1be3d4:
    // 0x1be3d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be3d8:
    // 0x1be3d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1be3dc:
    if (ctx->pc == 0x1BE3DCu) {
        ctx->pc = 0x1BE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3D8u;
        // 0x1be3dc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE3E0u;
        goto label_1be3e0;
    }
    ctx->pc = 0x1BE3D8u;
    {
        const bool branch_taken_0x1be3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3D8u;
        // 0x1be3dc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be3d8) {
            ctx->pc = 0x1BE3F8u;
            goto label_1be3f8;
        }
    }
    ctx->pc = 0x1BE3E0u;
label_1be3e0:
    // 0x1be3e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1be3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1be3e4:
    // 0x1be3e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1be3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1be3e8:
    // 0x1be3e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1be3e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be3ec:
    // 0x1be3ec: 0x0  nop
    ctx->pc = 0x1be3ecu;
    // NOP
label_1be3f0:
    // 0x1be3f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1be3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1be3f4:
    // 0x1be3f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1be3f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1be3f8:
    // 0x1be3f8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1be3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1be3fc:
    // 0x1be3fc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1be400:
    // 0x1be400: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1be400u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be404:
    // 0x1be404: 0x24633b8c  addiu       $v1, $v1, 0x3B8C
    ctx->pc = 0x1be404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15244));
label_1be408:
    // 0x1be408: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1be408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be40c:
    // 0x1be40c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1be40cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1be410:
    // 0x1be410: 0x0  nop
    ctx->pc = 0x1be410u;
    // NOP
label_1be414:
    // 0x1be414: 0xe66001e8  swc1        $f0, 0x1E8($s3)
    ctx->pc = 0x1be414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
label_1be418:
    // 0x1be418: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be41c:
    // 0x1be41c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1be420:
    if (ctx->pc == 0x1BE420u) {
        ctx->pc = 0x1BE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE41Cu;
        // 0x1be420: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE424u;
        goto label_1be424;
    }
    ctx->pc = 0x1BE41Cu;
    {
        const bool branch_taken_0x1be41c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE41Cu;
        // 0x1be420: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be41c) {
            ctx->pc = 0x1BE430u;
            goto label_1be430;
        }
    }
    ctx->pc = 0x1BE424u;
label_1be424:
    // 0x1be424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be428:
    // 0x1be428: 0x10000007  b           . + 4 + (0x7 << 2)
label_1be42c:
    if (ctx->pc == 0x1BE42Cu) {
        ctx->pc = 0x1BE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE428u;
        // 0x1be42c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE430u;
        goto label_1be430;
    }
    ctx->pc = 0x1BE428u;
    {
        const bool branch_taken_0x1be428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE428u;
        // 0x1be42c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be428) {
            ctx->pc = 0x1BE448u;
            goto label_1be448;
        }
    }
    ctx->pc = 0x1BE430u;
label_1be430:
    // 0x1be430: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1be434:
    // 0x1be434: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1be434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1be438:
    // 0x1be438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be43c:
    // 0x1be43c: 0x0  nop
    ctx->pc = 0x1be43cu;
    // NOP
label_1be440:
    // 0x1be440: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1be440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1be444:
    // 0x1be444: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1be444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1be448:
    // 0x1be448: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1be448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1be44c:
    // 0x1be44c: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1be44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1be450:
    // 0x1be450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be454:
    // 0x1be454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be458:
    // 0x1be458: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1be458u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1be45c:
    // 0x1be45c: 0x0  nop
    ctx->pc = 0x1be45cu;
    // NOP
label_1be460:
    // 0x1be460: 0xe66001ec  swc1        $f0, 0x1EC($s3)
    ctx->pc = 0x1be460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 492), bits); }
label_1be464:
    // 0x1be464: 0xc0651dc  jal         func_194770
label_1be468:
    if (ctx->pc == 0x1BE468u) {
        ctx->pc = 0x1BE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE464u;
        // 0x1be468: 0x92650242  lbu         $a1, 0x242($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE46Cu;
        goto label_1be46c;
    }
    ctx->pc = 0x1BE464u;
    SET_GPR_U32(ctx, 31, 0x1BE46Cu);
    ctx->pc = 0x1BE468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE464u;
    // 0x1be468: 0x92650242  lbu         $a1, 0x242($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194770u, 0x1BE464u, 0x1BE46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE46Cu;
label_1be46c:
    // 0x1be46c: 0x93a200aa  lbu         $v0, 0xAA($sp)
    ctx->pc = 0x1be46cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 170)));
label_1be470:
    // 0x1be470: 0x284100ab  slti        $at, $v0, 0xAB
    ctx->pc = 0x1be470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)171) ? 1 : 0);
label_1be474:
    // 0x1be474: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1be478:
    if (ctx->pc == 0x1BE478u) {
        ctx->pc = 0x1BE47Cu;
        goto label_1be47c;
    }
    ctx->pc = 0x1BE474u;
    {
        const bool branch_taken_0x1be474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be474) {
            ctx->pc = 0x1BE484u;
            goto label_1be484;
        }
    }
    ctx->pc = 0x1BE47Cu;
label_1be47c:
    // 0x1be47c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1be480:
    if (ctx->pc == 0x1BE480u) {
        ctx->pc = 0x1BE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE47Cu;
        // 0x1be480: 0xa2620247  sb          $v0, 0x247($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE484u;
        goto label_1be484;
    }
    ctx->pc = 0x1BE47Cu;
    {
        const bool branch_taken_0x1be47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE47Cu;
        // 0x1be480: 0xa2620247  sb          $v0, 0x247($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be47c) {
            ctx->pc = 0x1BE4BCu;
            goto label_1be4bc;
        }
    }
    ctx->pc = 0x1BE484u;
label_1be484:
    // 0x1be484: 0x93a200a9  lbu         $v0, 0xA9($sp)
    ctx->pc = 0x1be484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 169)));
label_1be488:
    // 0x1be488: 0x284100ab  slti        $at, $v0, 0xAB
    ctx->pc = 0x1be488u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)171) ? 1 : 0);
label_1be48c:
    // 0x1be48c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1be490:
    if (ctx->pc == 0x1BE490u) {
        ctx->pc = 0x1BE494u;
        goto label_1be494;
    }
    ctx->pc = 0x1BE48Cu;
    {
        const bool branch_taken_0x1be48c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be48c) {
            ctx->pc = 0x1BE4A8u;
            goto label_1be4a8;
        }
    }
    ctx->pc = 0x1BE494u;
label_1be494:
    // 0x1be494: 0xa2620247  sb          $v0, 0x247($s3)
    ctx->pc = 0x1be494u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 2));
label_1be498:
    // 0x1be498: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be498u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_1be49c:
    // 0x1be49c: 0x3042f7df  andi        $v0, $v0, 0xF7DF
    ctx->pc = 0x1be49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63455);
label_1be4a0:
    // 0x1be4a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1be4a4:
    if (ctx->pc == 0x1BE4A4u) {
        ctx->pc = 0x1BE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4A0u;
        // 0x1be4a4: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE4A8u;
        goto label_1be4a8;
    }
    ctx->pc = 0x1BE4A0u;
    {
        const bool branch_taken_0x1be4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4A0u;
        // 0x1be4a4: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4a0) {
            ctx->pc = 0x1BE4BCu;
            goto label_1be4bc;
        }
    }
    ctx->pc = 0x1BE4A8u;
label_1be4a8:
    // 0x1be4a8: 0x93a200a8  lbu         $v0, 0xA8($sp)
    ctx->pc = 0x1be4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
label_1be4ac:
    // 0x1be4ac: 0xa2620247  sb          $v0, 0x247($s3)
    ctx->pc = 0x1be4acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 2));
label_1be4b0:
    // 0x1be4b0: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be4b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_1be4b4:
    // 0x1be4b4: 0x3042f3cf  andi        $v0, $v0, 0xF3CF
    ctx->pc = 0x1be4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)62415);
label_1be4b8:
    // 0x1be4b8: 0xa662022c  sh          $v0, 0x22C($s3)
    ctx->pc = 0x1be4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
label_1be4bc:
    // 0x1be4bc: 0x92650244  lbu         $a1, 0x244($s3)
    ctx->pc = 0x1be4bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
label_1be4c0:
    // 0x1be4c0: 0x92660242  lbu         $a2, 0x242($s3)
    ctx->pc = 0x1be4c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
label_1be4c4:
    // 0x1be4c4: 0xc045784  jal         func_115E10
label_1be4c8:
    if (ctx->pc == 0x1BE4C8u) {
        ctx->pc = 0x1BE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4C4u;
        // 0x1be4c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE4CCu;
        goto label_1be4cc;
    }
    ctx->pc = 0x1BE4C4u;
    SET_GPR_U32(ctx, 31, 0x1BE4CCu);
    ctx->pc = 0x1BE4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4C4u;
    // 0x1be4c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115E10u, 0x1BE4C4u, 0x1BE4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4CCu;
label_1be4cc:
    // 0x1be4cc: 0xc054c24  jal         func_153090
label_1be4d0:
    if (ctx->pc == 0x1BE4D0u) {
        ctx->pc = 0x1BE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4CCu;
        // 0x1be4d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE4D4u;
        goto label_1be4d4;
    }
    ctx->pc = 0x1BE4CCu;
    SET_GPR_U32(ctx, 31, 0x1BE4D4u);
    ctx->pc = 0x1BE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4CCu;
    // 0x1be4d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153090u, 0x1BE4CCu, 0x1BE4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4D4u;
label_1be4d4:
    // 0x1be4d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be4d8:
    // 0x1be4d8: 0xa2620231  sb          $v0, 0x231($s3)
    ctx->pc = 0x1be4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
label_1be4dc:
    // 0x1be4dc: 0x92650247  lbu         $a1, 0x247($s3)
    ctx->pc = 0x1be4dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 583)));
label_1be4e0:
    // 0x1be4e0: 0xc06525c  jal         func_194970
label_1be4e4:
    if (ctx->pc == 0x1BE4E4u) {
        ctx->pc = 0x1BE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4E0u;
        // 0x1be4e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE4E8u;
        goto label_1be4e8;
    }
    ctx->pc = 0x1BE4E0u;
    SET_GPR_U32(ctx, 31, 0x1BE4E8u);
    ctx->pc = 0x1BE4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4E0u;
    // 0x1be4e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194970u, 0x1BE4E0u, 0x1BE4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4E8u;
label_1be4e8:
    // 0x1be4e8: 0x1000014f  b           . + 4 + (0x14F << 2)
label_1be4ec:
    if (ctx->pc == 0x1BE4ECu) {
        ctx->pc = 0x1BE4F0u;
        goto label_1be4f0;
    }
    ctx->pc = 0x1BE4E8u;
    {
        const bool branch_taken_0x1be4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be4e8) {
            ctx->pc = 0x1BEA28u;
            goto label_1bea28;
        }
    }
    ctx->pc = 0x1BE4F0u;
label_1be4f0:
    // 0x1be4f0: 0xa2600240  sb          $zero, 0x240($s3)
    ctx->pc = 0x1be4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 576), (uint8_t)GPR_U32(ctx, 0));
label_1be4f4:
    // 0x1be4f4: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x1be4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_1be4f8:
    // 0x1be4f8: 0xa2620241  sb          $v0, 0x241($s3)
    ctx->pc = 0x1be4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 577), (uint8_t)GPR_U32(ctx, 2));
label_1be4fc:
    // 0x1be4fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be500:
    // 0x1be500: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1be500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1be504:
    // 0x1be504: 0xc06f1d4  jal         func_1BC750
label_1be508:
    if (ctx->pc == 0x1BE508u) {
        ctx->pc = 0x1BE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE504u;
        // 0x1be508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE50Cu;
        goto label_1be50c;
    }
    ctx->pc = 0x1BE504u;
    SET_GPR_U32(ctx, 31, 0x1BE50Cu);
    ctx->pc = 0x1BE508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE504u;
    // 0x1be508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC750u;
    { ctx->pc = 0x1bc750; return; }
    ctx->pc = 0x1BE50Cu;
label_1be50c:
    // 0x1be50c: 0x87a30094  lh          $v1, 0x94($sp)
    ctx->pc = 0x1be50cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 148)));
label_1be510:
    // 0x1be510: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1be514:
    // 0x1be514: 0x24425390  addiu       $v0, $v0, 0x5390
    ctx->pc = 0x1be514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21392));
label_1be518:
    // 0x1be518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1be51c:
    // 0x1be51c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be520:
    // 0x1be520: 0xa6630252  sh          $v1, 0x252($s3)
    ctx->pc = 0x1be520u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 3));
label_1be524:
    // 0x1be524: 0xa6630222  sh          $v1, 0x222($s3)
    ctx->pc = 0x1be524u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 3));
label_1be528:
    // 0x1be528: 0x87a30090  lh          $v1, 0x90($sp)
    ctx->pc = 0x1be528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
label_1be52c:
    // 0x1be52c: 0xa663021c  sh          $v1, 0x21C($s3)
    ctx->pc = 0x1be52cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 540), (uint16_t)GPR_U32(ctx, 3));
label_1be530:
    // 0x1be530: 0xa663021e  sh          $v1, 0x21E($s3)
    ctx->pc = 0x1be530u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 542), (uint16_t)GPR_U32(ctx, 3));
label_1be534:
    // 0x1be534: 0xa6630220  sh          $v1, 0x220($s3)
    ctx->pc = 0x1be534u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 544), (uint16_t)GPR_U32(ctx, 3));
label_1be538:
    // 0x1be538: 0x83a30098  lb          $v1, 0x98($sp)
    ctx->pc = 0x1be538u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
label_1be53c:
    // 0x1be53c: 0xa263024a  sb          $v1, 0x24A($s3)
    ctx->pc = 0x1be53cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 586), (uint8_t)GPR_U32(ctx, 3));
label_1be540:
    // 0x1be540: 0x83a3009c  lb          $v1, 0x9C($sp)
    ctx->pc = 0x1be540u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 156)));
label_1be544:
    // 0x1be544: 0xa263024b  sb          $v1, 0x24B($s3)
    ctx->pc = 0x1be544u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 587), (uint8_t)GPR_U32(ctx, 3));
label_1be548:
    // 0x1be548: 0x92460072  lbu         $a2, 0x72($s2)
    ctx->pc = 0x1be548u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
label_1be54c:
    // 0x1be54c: 0x92430067  lbu         $v1, 0x67($s2)
    ctx->pc = 0x1be54cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_1be550:
    // 0x1be550: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1be550u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1be554:
    // 0x1be554: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1be554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1be558:
    // 0x1be558: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1be558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1be55c:
    // 0x1be55c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be560:
    // 0x1be560: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be564:
    // 0x1be564: 0xc06fb04  jal         func_1BEC10
label_1be568:
    if (ctx->pc == 0x1BE568u) {
        ctx->pc = 0x1BE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE564u;
        // 0x1be568: 0xa2620242  sb          $v0, 0x242($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE56Cu;
        goto label_1be56c;
    }
    ctx->pc = 0x1BE564u;
    SET_GPR_U32(ctx, 31, 0x1BE56Cu);
    ctx->pc = 0x1BE568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE564u;
    // 0x1be568: 0xa2620242  sb          $v0, 0x242($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC10u;
    { ctx->pc = 0x1bec10; return; }
    ctx->pc = 0x1BE56Cu;
label_1be56c:
    // 0x1be56c: 0x92430069  lbu         $v1, 0x69($s2)
    ctx->pc = 0x1be56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 105)));
label_1be570:
    // 0x1be570: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1be570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1be574:
    // 0x1be574: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
label_1be578:
    if (ctx->pc == 0x1BE578u) {
        ctx->pc = 0x1BE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE574u;
        // 0x1be578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE57Cu;
        goto label_1be57c;
    }
    ctx->pc = 0x1BE574u;
    {
        const bool branch_taken_0x1be574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE574u;
        // 0x1be578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be574) {
            ctx->pc = 0x1BE650u;
            goto label_1be650;
        }
    }
    ctx->pc = 0x1BE57Cu;
label_1be57c:
    // 0x1be57c: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_1be580:
    if (ctx->pc == 0x1BE580u) {
        ctx->pc = 0x1BE584u;
        goto label_1be584;
    }
    ctx->pc = 0x1BE57Cu;
    {
        const bool branch_taken_0x1be57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1be57c) {
            ctx->pc = 0x1BE63Cu;
            goto label_1be63c;
        }
    }
    ctx->pc = 0x1BE584u;
label_1be584:
    // 0x1be584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1be584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1be588:
    // 0x1be588: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_1be58c:
    if (ctx->pc == 0x1BE58Cu) {
        ctx->pc = 0x1BE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE588u;
        // 0x1be58c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE590u;
        goto label_1be590;
    }
    ctx->pc = 0x1BE588u;
    {
        const bool branch_taken_0x1be588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE588u;
        // 0x1be58c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be588) {
            ctx->pc = 0x1BE604u;
            goto label_1be604;
        }
    }
    ctx->pc = 0x1BE590u;
label_1be590:
    // 0x1be590: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
label_1be594:
    if (ctx->pc == 0x1BE594u) {
        ctx->pc = 0x1BE598u;
        goto label_1be598;
    }
    ctx->pc = 0x1BE590u;
    {
        const bool branch_taken_0x1be590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1be590) {
            ctx->pc = 0x1BE5CCu;
            goto label_1be5cc;
        }
    }
    ctx->pc = 0x1BE598u;
label_1be598:
    // 0x1be598: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1be59c:
    if (ctx->pc == 0x1BE59Cu) {
        ctx->pc = 0x1BE5A0u;
        goto label_1be5a0;
    }
    ctx->pc = 0x1BE598u;
    {
        const bool branch_taken_0x1be598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be598) {
            ctx->pc = 0x1BE5A8u;
            goto label_1be5a8;
        }
    }
    ctx->pc = 0x1BE5A0u;
label_1be5a0:
    // 0x1be5a0: 0x10000030  b           . + 4 + (0x30 << 2)
label_1be5a4:
    if (ctx->pc == 0x1BE5A4u) {
        ctx->pc = 0x1BE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5A0u;
        // 0x1be5a4: 0x92430068  lbu         $v1, 0x68($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE5A8u;
        goto label_1be5a8;
    }
    ctx->pc = 0x1BE5A0u;
    {
        const bool branch_taken_0x1be5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5A0u;
        // 0x1be5a4: 0x92430068  lbu         $v1, 0x68($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5a0) {
            ctx->pc = 0x1BE664u;
            goto label_1be664;
        }
    }
    ctx->pc = 0x1BE5A8u;
label_1be5a8:
    // 0x1be5a8: 0x92430068  lbu         $v1, 0x68($s2)
    ctx->pc = 0x1be5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_1be5ac:
    // 0x1be5ac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1be5b0:
    // 0x1be5b0: 0x2442537c  addiu       $v0, $v0, 0x537C
    ctx->pc = 0x1be5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21372));
label_1be5b4:
    // 0x1be5b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be5b8:
    // 0x1be5b8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1be5b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be5bc:
    // 0x1be5bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1be5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1be5c0:
    // 0x1be5c0: 0xa2620244  sb          $v0, 0x244($s3)
    ctx->pc = 0x1be5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
label_1be5c4:
    // 0x1be5c4: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1be5c8:
    if (ctx->pc == 0x1BE5C8u) {
        ctx->pc = 0x1BE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5C4u;
        // 0x1be5c8: 0xa2640231  sb          $a0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE5CCu;
        goto label_1be5cc;
    }
    ctx->pc = 0x1BE5C4u;
    {
        const bool branch_taken_0x1be5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5C4u;
        // 0x1be5c8: 0xa2640231  sb          $a0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5c4) {
            ctx->pc = 0x1BE680u;
            goto label_1be680;
        }
    }
    ctx->pc = 0x1BE5CCu;
label_1be5cc:
    // 0x1be5cc: 0x92430068  lbu         $v1, 0x68($s2)
    ctx->pc = 0x1be5ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_1be5d0:
    // 0x1be5d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1be5d4:
    // 0x1be5d4: 0x2442537c  addiu       $v0, $v0, 0x537C
    ctx->pc = 0x1be5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21372));
label_1be5d8:
    // 0x1be5d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be5dc:
    // 0x1be5dc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be5e0:
    // 0x1be5e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1be5e4:
    if (ctx->pc == 0x1BE5E4u) {
        ctx->pc = 0x1BE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5E0u;
        // 0x1be5e4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE5E8u;
        goto label_1be5e8;
    }
    ctx->pc = 0x1BE5E0u;
    {
        const bool branch_taken_0x1be5e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5E0u;
        // 0x1be5e4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5e0) {
            ctx->pc = 0x1BE5F4u;
            goto label_1be5f4;
        }
    }
    ctx->pc = 0x1BE5E8u;
label_1be5e8:
    // 0x1be5e8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1be5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1be5ec:
    // 0x1be5ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1be5f0:
    if (ctx->pc == 0x1BE5F0u) {
        ctx->pc = 0x1BE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5ECu;
        // 0x1be5f0: 0xa2620244  sb          $v0, 0x244($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE5F4u;
        goto label_1be5f4;
    }
    ctx->pc = 0x1BE5ECu;
    {
        const bool branch_taken_0x1be5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5ECu;
        // 0x1be5f0: 0xa2620244  sb          $v0, 0x244($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5ec) {
            ctx->pc = 0x1BE5F8u;
            goto label_1be5f8;
        }
    }
    ctx->pc = 0x1BE5F4u;
label_1be5f4:
    // 0x1be5f4: 0xa2620244  sb          $v0, 0x244($s3)
    ctx->pc = 0x1be5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
label_1be5f8:
    // 0x1be5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be5fc:
    // 0x1be5fc: 0x10000020  b           . + 4 + (0x20 << 2)
label_1be600:
    if (ctx->pc == 0x1BE600u) {
        ctx->pc = 0x1BE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5FCu;
        // 0x1be600: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE604u;
        goto label_1be604;
    }
    ctx->pc = 0x1BE5FCu;
    {
        const bool branch_taken_0x1be5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5FCu;
        // 0x1be600: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5fc) {
            ctx->pc = 0x1BE680u;
            goto label_1be680;
        }
    }
    ctx->pc = 0x1BE604u;
label_1be604:
    // 0x1be604: 0x92430068  lbu         $v1, 0x68($s2)
    ctx->pc = 0x1be604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_1be608:
    // 0x1be608: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1be60c:
    // 0x1be60c: 0x2442537c  addiu       $v0, $v0, 0x537C
    ctx->pc = 0x1be60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21372));
label_1be610:
    // 0x1be610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be614:
    // 0x1be614: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be618:
    // 0x1be618: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1be61c:
    if (ctx->pc == 0x1BE61Cu) {
        ctx->pc = 0x1BE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE618u;
        // 0x1be61c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE620u;
        goto label_1be620;
    }
    ctx->pc = 0x1BE618u;
    {
        const bool branch_taken_0x1be618 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE618u;
        // 0x1be61c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be618) {
            ctx->pc = 0x1BE62Cu;
            goto label_1be62c;
        }
    }
    ctx->pc = 0x1BE620u;
label_1be620:
    // 0x1be620: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1be620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1be624:
    // 0x1be624: 0x10000002  b           . + 4 + (0x2 << 2)
label_1be628:
    if (ctx->pc == 0x1BE628u) {
        ctx->pc = 0x1BE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE624u;
        // 0x1be628: 0xa2620244  sb          $v0, 0x244($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE62Cu;
        goto label_1be62c;
    }
    ctx->pc = 0x1BE624u;
    {
        const bool branch_taken_0x1be624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE624u;
        // 0x1be628: 0xa2620244  sb          $v0, 0x244($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be624) {
            ctx->pc = 0x1BE630u;
            goto label_1be630;
        }
    }
    ctx->pc = 0x1BE62Cu;
label_1be62c:
    // 0x1be62c: 0xa2620244  sb          $v0, 0x244($s3)
    ctx->pc = 0x1be62cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
label_1be630:
    // 0x1be630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be634:
    // 0x1be634: 0x10000012  b           . + 4 + (0x12 << 2)
label_1be638:
    if (ctx->pc == 0x1BE638u) {
        ctx->pc = 0x1BE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE634u;
        // 0x1be638: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE63Cu;
        goto label_1be63c;
    }
    ctx->pc = 0x1BE634u;
    {
        const bool branch_taken_0x1be634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE634u;
        // 0x1be638: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be634) {
            ctx->pc = 0x1BE680u;
            goto label_1be680;
        }
    }
    ctx->pc = 0x1BE63Cu;
label_1be63c:
    // 0x1be63c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1be63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1be640:
    // 0x1be640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1be640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1be644:
    // 0x1be644: 0xa2630244  sb          $v1, 0x244($s3)
    ctx->pc = 0x1be644u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 3));
label_1be648:
    // 0x1be648: 0x1000000d  b           . + 4 + (0xD << 2)
label_1be64c:
    if (ctx->pc == 0x1BE64Cu) {
        ctx->pc = 0x1BE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE648u;
        // 0x1be64c: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE650u;
        goto label_1be650;
    }
    ctx->pc = 0x1BE648u;
    {
        const bool branch_taken_0x1be648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE648u;
        // 0x1be64c: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be648) {
            ctx->pc = 0x1BE680u;
            goto label_1be680;
        }
    }
    ctx->pc = 0x1BE650u;
label_1be650:
    // 0x1be650: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1be650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1be654:
    // 0x1be654: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1be658:
    // 0x1be658: 0xa2630244  sb          $v1, 0x244($s3)
    ctx->pc = 0x1be658u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 3));
label_1be65c:
    // 0x1be65c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1be660:
    if (ctx->pc == 0x1BE660u) {
        ctx->pc = 0x1BE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE65Cu;
        // 0x1be660: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE664u;
        goto label_1be664;
    }
    ctx->pc = 0x1BE65Cu;
    {
        const bool branch_taken_0x1be65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE65Cu;
        // 0x1be660: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be65c) {
            ctx->pc = 0x1BE680u;
            goto label_1be680;
        }
    }
    ctx->pc = 0x1BE664u;
label_1be664:
    // 0x1be664: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1be668:
    // 0x1be668: 0x2442537c  addiu       $v0, $v0, 0x537C
    ctx->pc = 0x1be668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21372));
label_1be66c:
    // 0x1be66c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be670:
    // 0x1be670: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1be670u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be674:
    // 0x1be674: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1be674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1be678:
    // 0x1be678: 0xa2620244  sb          $v0, 0x244($s3)
    ctx->pc = 0x1be678u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
label_1be67c:
    // 0x1be67c: 0xa2640231  sb          $a0, 0x231($s3)
    ctx->pc = 0x1be67cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 4));
label_1be680:
    // 0x1be680: 0x92620244  lbu         $v0, 0x244($s3)
    ctx->pc = 0x1be680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
label_1be684:
    // 0x1be684: 0x2042fff0  addi        $v0, $v0, -0x10
    ctx->pc = 0x1be684u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967280, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_1be688:
    // 0x1be688: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x1be688u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1be68c:
    // 0x1be68c: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_1be690:
    if (ctx->pc == 0x1BE690u) {
        ctx->pc = 0x1BE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE68Cu;
        // 0x1be690: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE694u;
        goto label_1be694;
    }
    ctx->pc = 0x1BE68Cu;
    {
        const bool branch_taken_0x1be68c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE68Cu;
        // 0x1be690: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be68c) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE694u;
label_1be694:
    // 0x1be694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1be698:
    // 0x1be698: 0x2463b710  addiu       $v1, $v1, -0x48F0
    ctx->pc = 0x1be698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
label_1be69c:
    // 0x1be69c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be6a0:
    // 0x1be6a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1be6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1be6a4:
    // 0x1be6a4: 0x400008  jr          $v0
label_1be6a8:
    if (ctx->pc == 0x1BE6A8u) {
        ctx->pc = 0x1BE6ACu;
        goto label_1be6ac;
    }
    ctx->pc = 0x1BE6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE6ACu: goto label_1be6ac;
            case 0x1BE6BCu: goto label_1be6bc;
            case 0x1BE6CCu: goto label_1be6cc;
            case 0x1BE6DCu: goto label_1be6dc;
            case 0x1BE6ECu: goto label_1be6ec;
            case 0x1BE6FCu: goto label_1be6fc;
            case 0x1BE70Cu: goto label_1be70c;
            case 0x1BE718u: goto label_1be718;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE6A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BE6ACu;
label_1be6ac:
    // 0x1be6ac: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_1be6b0:
    // 0x1be6b0: 0x304273cf  andi        $v0, $v0, 0x73CF
    ctx->pc = 0x1be6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)29647);
label_1be6b4:
    // 0x1be6b4: 0x10000018  b           . + 4 + (0x18 << 2)
label_1be6b8:
    if (ctx->pc == 0x1BE6B8u) {
        ctx->pc = 0x1BE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6B4u;
        // 0x1be6b8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6BCu;
        goto label_1be6bc;
    }
    ctx->pc = 0x1BE6B4u;
    {
        const bool branch_taken_0x1be6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6B4u;
        // 0x1be6b8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6b4) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE6BCu;
label_1be6bc:
    // 0x1be6bc: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_1be6c0:
    // 0x1be6c0: 0x304277df  andi        $v0, $v0, 0x77DF
    ctx->pc = 0x1be6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30687);
label_1be6c4:
    // 0x1be6c4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1be6c8:
    if (ctx->pc == 0x1BE6C8u) {
        ctx->pc = 0x1BE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6C4u;
        // 0x1be6c8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6CCu;
        goto label_1be6cc;
    }
    ctx->pc = 0x1BE6C4u;
    {
        const bool branch_taken_0x1be6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6C4u;
        // 0x1be6c8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6c4) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE6CCu;
label_1be6cc:
    // 0x1be6cc: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_1be6d0:
    // 0x1be6d0: 0x304277df  andi        $v0, $v0, 0x77DF
    ctx->pc = 0x1be6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30687);
label_1be6d4:
    // 0x1be6d4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1be6d8:
    if (ctx->pc == 0x1BE6D8u) {
        ctx->pc = 0x1BE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6D4u;
        // 0x1be6d8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6DCu;
        goto label_1be6dc;
    }
    ctx->pc = 0x1BE6D4u;
    {
        const bool branch_taken_0x1be6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6D4u;
        // 0x1be6d8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6d4) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE6DCu;
label_1be6dc:
    // 0x1be6dc: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_1be6e0:
    // 0x1be6e0: 0x304273cf  andi        $v0, $v0, 0x73CF
    ctx->pc = 0x1be6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)29647);
label_1be6e4:
    // 0x1be6e4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1be6e8:
    if (ctx->pc == 0x1BE6E8u) {
        ctx->pc = 0x1BE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6E4u;
        // 0x1be6e8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6ECu;
        goto label_1be6ec;
    }
    ctx->pc = 0x1BE6E4u;
    {
        const bool branch_taken_0x1be6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6E4u;
        // 0x1be6e8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6e4) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE6ECu;
label_1be6ec:
    // 0x1be6ec: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_1be6f0:
    // 0x1be6f0: 0x304277df  andi        $v0, $v0, 0x77DF
    ctx->pc = 0x1be6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30687);
label_1be6f4:
    // 0x1be6f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1be6f8:
    if (ctx->pc == 0x1BE6F8u) {
        ctx->pc = 0x1BE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6F4u;
        // 0x1be6f8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE6FCu;
        goto label_1be6fc;
    }
    ctx->pc = 0x1BE6F4u;
    {
        const bool branch_taken_0x1be6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6F4u;
        // 0x1be6f8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6f4) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE6FCu;
label_1be6fc:
    // 0x1be6fc: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_1be700:
    // 0x1be700: 0x304273cf  andi        $v0, $v0, 0x73CF
    ctx->pc = 0x1be700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)29647);
label_1be704:
    // 0x1be704: 0x10000004  b           . + 4 + (0x4 << 2)
label_1be708:
    if (ctx->pc == 0x1BE708u) {
        ctx->pc = 0x1BE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE704u;
        // 0x1be708: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE70Cu;
        goto label_1be70c;
    }
    ctx->pc = 0x1BE704u;
    {
        const bool branch_taken_0x1be704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE704u;
        // 0x1be708: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be704) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE70Cu;
label_1be70c:
    // 0x1be70c: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be70cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_1be710:
    // 0x1be710: 0x304277df  andi        $v0, $v0, 0x77DF
    ctx->pc = 0x1be710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30687);
label_1be714:
    // 0x1be714: 0xa662022c  sh          $v0, 0x22C($s3)
    ctx->pc = 0x1be714u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
label_1be718:
    // 0x1be718: 0x92460074  lbu         $a2, 0x74($s2)
    ctx->pc = 0x1be718u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_1be71c:
    // 0x1be71c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1be71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_1be720:
    // 0x1be720: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1be720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1be724:
    // 0x1be724: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1be724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1be728:
    // 0x1be728: 0x246313ca  addiu       $v1, $v1, 0x13CA
    ctx->pc = 0x1be728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5066));
label_1be72c:
    // 0x1be72c: 0x24845378  addiu       $a0, $a0, 0x5378
    ctx->pc = 0x1be72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21368));
label_1be730:
    // 0x1be730: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1be730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1be734:
    // 0x1be734: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1be734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1be738:
    // 0x1be738: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1be738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1be73c:
    // 0x1be73c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1be73cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1be740:
    // 0x1be740: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1be740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1be744:
    // 0x1be744: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1be744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1be748:
    // 0x1be748: 0xa2630247  sb          $v1, 0x247($s3)
    ctx->pc = 0x1be748u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 3));
label_1be74c:
    // 0x1be74c: 0x92450067  lbu         $a1, 0x67($s2)
    ctx->pc = 0x1be74cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_1be750:
    // 0x1be750: 0x9263024a  lbu         $v1, 0x24A($s3)
    ctx->pc = 0x1be750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
label_1be754:
    // 0x1be754: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1be754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1be758:
    // 0x1be758: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1be758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1be75c:
    // 0x1be75c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1be75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1be760:
    // 0x1be760: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1be760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1be764:
    // 0x1be764: 0x0  nop
    ctx->pc = 0x1be764u;
    // NOP
label_1be768:
    // 0x1be768: 0x0  nop
    ctx->pc = 0x1be768u;
    // NOP
label_1be76c:
    // 0x1be76c: 0x1010  mfhi        $v0
    ctx->pc = 0x1be76cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1be770:
    // 0x1be770: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1be770u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1be774:
    // 0x1be774: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1be774u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1be778:
    // 0x1be778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be77c:
    // 0x1be77c: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x1be77cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
label_1be780:
    // 0x1be780: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1be784:
    if (ctx->pc == 0x1BE784u) {
        ctx->pc = 0x1BE788u;
        goto label_1be788;
    }
    ctx->pc = 0x1BE780u;
    {
        const bool branch_taken_0x1be780 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be780) {
            ctx->pc = 0x1BE78Cu;
            goto label_1be78c;
        }
    }
    ctx->pc = 0x1BE788u;
label_1be788:
    // 0x1be788: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1be788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be78c:
    // 0x1be78c: 0xa262024c  sb          $v0, 0x24C($s3)
    ctx->pc = 0x1be78cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 2));
label_1be790:
    // 0x1be790: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1be790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1be794:
    // 0x1be794: 0x92450067  lbu         $a1, 0x67($s2)
    ctx->pc = 0x1be794u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_1be798:
    // 0x1be798: 0x24845378  addiu       $a0, $a0, 0x5378
    ctx->pc = 0x1be798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21368));
label_1be79c:
    // 0x1be79c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1be79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1be7a0:
    // 0x1be7a0: 0x9263024b  lbu         $v1, 0x24B($s3)
    ctx->pc = 0x1be7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
label_1be7a4:
    // 0x1be7a4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1be7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1be7a8:
    // 0x1be7a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1be7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1be7ac:
    // 0x1be7ac: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1be7acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1be7b0:
    // 0x1be7b0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1be7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1be7b4:
    // 0x1be7b4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1be7b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1be7b8:
    // 0x1be7b8: 0x0  nop
    ctx->pc = 0x1be7b8u;
    // NOP
label_1be7bc:
    // 0x1be7bc: 0x0  nop
    ctx->pc = 0x1be7bcu;
    // NOP
label_1be7c0:
    // 0x1be7c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1be7c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1be7c4:
    // 0x1be7c4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1be7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1be7c8:
    // 0x1be7c8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1be7c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1be7cc:
    // 0x1be7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be7d0:
    // 0x1be7d0: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x1be7d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
label_1be7d4:
    // 0x1be7d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1be7d8:
    if (ctx->pc == 0x1BE7D8u) {
        ctx->pc = 0x1BE7DCu;
        goto label_1be7dc;
    }
    ctx->pc = 0x1BE7D4u;
    {
        const bool branch_taken_0x1be7d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be7d4) {
            ctx->pc = 0x1BE7E0u;
            goto label_1be7e0;
        }
    }
    ctx->pc = 0x1BE7DCu;
label_1be7dc:
    // 0x1be7dc: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1be7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be7e0:
    // 0x1be7e0: 0xa262024d  sb          $v0, 0x24D($s3)
    ctx->pc = 0x1be7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 2));
label_1be7e4:
    // 0x1be7e4: 0x92430067  lbu         $v1, 0x67($s2)
    ctx->pc = 0x1be7e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_1be7e8:
    // 0x1be7e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1be7ec:
    // 0x1be7ec: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1be7f0:
    if (ctx->pc == 0x1BE7F0u) {
        ctx->pc = 0x1BE7F4u;
        goto label_1be7f4;
    }
    ctx->pc = 0x1BE7ECu;
    {
        const bool branch_taken_0x1be7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be7ec) {
            ctx->pc = 0x1BE808u;
            goto label_1be808;
        }
    }
    ctx->pc = 0x1BE7F4u;
label_1be7f4:
    // 0x1be7f4: 0x92430069  lbu         $v1, 0x69($s2)
    ctx->pc = 0x1be7f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 105)));
label_1be7f8:
    // 0x1be7f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1be7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1be7fc:
    // 0x1be7fc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1be800:
    if (ctx->pc == 0x1BE800u) {
        ctx->pc = 0x1BE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7FCu;
        // 0x1be800: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE804u;
        goto label_1be804;
    }
    ctx->pc = 0x1BE7FCu;
    {
        const bool branch_taken_0x1be7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7FCu;
        // 0x1be800: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7fc) {
            ctx->pc = 0x1BE808u;
            goto label_1be808;
        }
    }
    ctx->pc = 0x1BE804u;
label_1be804:
    // 0x1be804: 0xa262024d  sb          $v0, 0x24D($s3)
    ctx->pc = 0x1be804u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 2));
label_1be808:
    // 0x1be808: 0x92430075  lbu         $v1, 0x75($s2)
    ctx->pc = 0x1be808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 117)));
label_1be80c:
    // 0x1be80c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1be80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1be810:
    // 0x1be810: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1be814:
    if (ctx->pc == 0x1BE814u) {
        ctx->pc = 0x1BE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE810u;
        // 0x1be814: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE818u;
        goto label_1be818;
    }
    ctx->pc = 0x1BE810u;
    {
        const bool branch_taken_0x1be810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE810u;
        // 0x1be814: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be810) {
            ctx->pc = 0x1BE81Cu;
            goto label_1be81c;
        }
    }
    ctx->pc = 0x1BE818u;
label_1be818:
    // 0x1be818: 0xa2620240  sb          $v0, 0x240($s3)
    ctx->pc = 0x1be818u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 576), (uint8_t)GPR_U32(ctx, 2));
label_1be81c:
    // 0x1be81c: 0x9243006b  lbu         $v1, 0x6B($s2)
    ctx->pc = 0x1be81cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 107)));
label_1be820:
    // 0x1be820: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1be820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1be824:
    // 0x1be824: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_1be828:
    if (ctx->pc == 0x1BE828u) {
        ctx->pc = 0x1BE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE824u;
        // 0x1be828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE82Cu;
        goto label_1be82c;
    }
    ctx->pc = 0x1BE824u;
    {
        const bool branch_taken_0x1be824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE824u;
        // 0x1be828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be824) {
            ctx->pc = 0x1BE8A4u;
            goto label_1be8a4;
        }
    }
    ctx->pc = 0x1BE82Cu;
label_1be82c:
    // 0x1be82c: 0x24031040  addiu       $v1, $zero, 0x1040
    ctx->pc = 0x1be82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
label_1be830:
    // 0x1be830: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1be830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1be834:
    // 0x1be834: 0xa663022c  sh          $v1, 0x22C($s3)
    ctx->pc = 0x1be834u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 3));
label_1be838:
    // 0x1be838: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1be838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1be83c:
    // 0x1be83c: 0x9264024c  lbu         $a0, 0x24C($s3)
    ctx->pc = 0x1be83cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 588)));
label_1be840:
    // 0x1be840: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1be840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1be844:
    // 0x1be844: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1be844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1be848:
    // 0x1be848: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1be848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1be84c:
    // 0x1be84c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1be84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1be850:
    // 0x1be850: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1be850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1be854:
    // 0x1be854: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1be854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1be858:
    // 0x1be858: 0x0  nop
    ctx->pc = 0x1be858u;
    // NOP
label_1be85c:
    // 0x1be85c: 0x0  nop
    ctx->pc = 0x1be85cu;
    // NOP
label_1be860:
    // 0x1be860: 0x1010  mfhi        $v0
    ctx->pc = 0x1be860u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1be864:
    // 0x1be864: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1be864u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1be868:
    // 0x1be868: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1be868u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1be86c:
    // 0x1be86c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be870:
    // 0x1be870: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x1be870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
label_1be874:
    // 0x1be874: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1be878:
    if (ctx->pc == 0x1BE878u) {
        ctx->pc = 0x1BE87Cu;
        goto label_1be87c;
    }
    ctx->pc = 0x1BE874u;
    {
        const bool branch_taken_0x1be874 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be874) {
            ctx->pc = 0x1BE880u;
            goto label_1be880;
        }
    }
    ctx->pc = 0x1BE87Cu;
label_1be87c:
    // 0x1be87c: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1be87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be880:
    // 0x1be880: 0xa262024c  sb          $v0, 0x24C($s3)
    ctx->pc = 0x1be880u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 2));
label_1be884:
    // 0x1be884: 0x9262024d  lbu         $v0, 0x24D($s3)
    ctx->pc = 0x1be884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 589)));
label_1be888:
    // 0x1be888: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1be888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_1be88c:
    // 0x1be88c: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x1be88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
label_1be890:
    // 0x1be890: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1be894:
    if (ctx->pc == 0x1BE894u) {
        ctx->pc = 0x1BE898u;
        goto label_1be898;
    }
    ctx->pc = 0x1BE890u;
    {
        const bool branch_taken_0x1be890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be890) {
            ctx->pc = 0x1BE89Cu;
            goto label_1be89c;
        }
    }
    ctx->pc = 0x1BE898u;
label_1be898:
    // 0x1be898: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1be898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be89c:
    // 0x1be89c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1be8a0:
    if (ctx->pc == 0x1BE8A0u) {
        ctx->pc = 0x1BE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE89Cu;
        // 0x1be8a0: 0xa262024d  sb          $v0, 0x24D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8A4u;
        goto label_1be8a4;
    }
    ctx->pc = 0x1BE89Cu;
    {
        const bool branch_taken_0x1be89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE89Cu;
        // 0x1be8a0: 0xa262024d  sb          $v0, 0x24D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be89c) {
            ctx->pc = 0x1BE8B8u;
            goto label_1be8b8;
        }
    }
    ctx->pc = 0x1BE8A4u;
label_1be8a4:
    // 0x1be8a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1be8a8:
    if (ctx->pc == 0x1BE8A8u) {
        ctx->pc = 0x1BE8ACu;
        goto label_1be8ac;
    }
    ctx->pc = 0x1BE8A4u;
    {
        const bool branch_taken_0x1be8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be8a4) {
            ctx->pc = 0x1BE8B8u;
            goto label_1be8b8;
        }
    }
    ctx->pc = 0x1BE8ACu;
label_1be8ac:
    // 0x1be8ac: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be8acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_1be8b0:
    // 0x1be8b0: 0x3042f03f  andi        $v0, $v0, 0xF03F
    ctx->pc = 0x1be8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61503);
label_1be8b4:
    // 0x1be8b4: 0xa662022c  sh          $v0, 0x22C($s3)
    ctx->pc = 0x1be8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
label_1be8b8:
    // 0x1be8b8: 0x9266024a  lbu         $a2, 0x24A($s3)
    ctx->pc = 0x1be8b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
label_1be8bc:
    // 0x1be8bc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1be8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1be8c0:
    // 0x1be8c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1be8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1be8c4:
    // 0x1be8c4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1be8c8:
    // 0x1be8c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1be8cc:
    // 0x1be8cc: 0x24a55400  addiu       $a1, $a1, 0x5400
    ctx->pc = 0x1be8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21504));
label_1be8d0:
    // 0x1be8d0: 0x24635418  addiu       $v1, $v1, 0x5418
    ctx->pc = 0x1be8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21528));
label_1be8d4:
    // 0x1be8d4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1be8d8:
    // 0x1be8d8: 0x244253d0  addiu       $v0, $v0, 0x53D0
    ctx->pc = 0x1be8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21456));
label_1be8dc:
    // 0x1be8dc: 0xa266024e  sb          $a2, 0x24E($s3)
    ctx->pc = 0x1be8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 590), (uint8_t)GPR_U32(ctx, 6));
label_1be8e0:
    // 0x1be8e0: 0x9266024b  lbu         $a2, 0x24B($s3)
    ctx->pc = 0x1be8e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
label_1be8e4:
    // 0x1be8e4: 0xa266024f  sb          $a2, 0x24F($s3)
    ctx->pc = 0x1be8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 591), (uint8_t)GPR_U32(ctx, 6));
label_1be8e8:
    // 0x1be8e8: 0x92460065  lbu         $a2, 0x65($s2)
    ctx->pc = 0x1be8e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 101)));
label_1be8ec:
    // 0x1be8ec: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x1be8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1be8f0:
    // 0x1be8f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1be8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1be8f4:
    // 0x1be8f4: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x1be8f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1be8f8:
    // 0x1be8f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1be8f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be8fc:
    // 0x1be8fc: 0x0  nop
    ctx->pc = 0x1be8fcu;
    // NOP
label_1be900:
    // 0x1be900: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1be904:
    // 0x1be904: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1be904u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1be908:
    // 0x1be908: 0xe66001e4  swc1        $f0, 0x1E4($s3)
    ctx->pc = 0x1be908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 484), bits); }
label_1be90c:
    // 0x1be90c: 0x92450065  lbu         $a1, 0x65($s2)
    ctx->pc = 0x1be90cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 101)));
label_1be910:
    // 0x1be910: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1be910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1be914:
    // 0x1be914: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1be914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1be918:
    // 0x1be918: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1be918u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1be91c:
    // 0x1be91c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be91cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be920:
    // 0x1be920: 0x0  nop
    ctx->pc = 0x1be920u;
    // NOP
label_1be924:
    // 0x1be924: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1be928:
    // 0x1be928: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1be928u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1be92c:
    // 0x1be92c: 0xe66001e8  swc1        $f0, 0x1E8($s3)
    ctx->pc = 0x1be92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
label_1be930:
    // 0x1be930: 0x92430064  lbu         $v1, 0x64($s2)
    ctx->pc = 0x1be930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
label_1be934:
    // 0x1be934: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1be934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1be938:
    // 0x1be938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be93c:
    // 0x1be93c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1be93cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1be940:
    // 0x1be940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be944:
    // 0x1be944: 0x0  nop
    ctx->pc = 0x1be944u;
    // NOP
label_1be948:
    // 0x1be948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1be94c:
    // 0x1be94c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1be94cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1be950:
    // 0x1be950: 0xe66001ec  swc1        $f0, 0x1EC($s3)
    ctx->pc = 0x1be950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 492), bits); }
label_1be954:
    // 0x1be954: 0x92650244  lbu         $a1, 0x244($s3)
    ctx->pc = 0x1be954u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
label_1be958:
    // 0x1be958: 0x92660242  lbu         $a2, 0x242($s3)
    ctx->pc = 0x1be958u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
label_1be95c:
    // 0x1be95c: 0xc045784  jal         func_115E10
label_1be960:
    if (ctx->pc == 0x1BE960u) {
        ctx->pc = 0x1BE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE95Cu;
        // 0x1be960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE964u;
        goto label_1be964;
    }
    ctx->pc = 0x1BE95Cu;
    SET_GPR_U32(ctx, 31, 0x1BE964u);
    ctx->pc = 0x1BE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE95Cu;
    // 0x1be960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115E10u, 0x1BE95Cu, 0x1BE964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE964u;
label_1be964:
    // 0x1be964: 0xc054c24  jal         func_153090
label_1be968:
    if (ctx->pc == 0x1BE968u) {
        ctx->pc = 0x1BE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE964u;
        // 0x1be968: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE96Cu;
        goto label_1be96c;
    }
    ctx->pc = 0x1BE964u;
    SET_GPR_U32(ctx, 31, 0x1BE96Cu);
    ctx->pc = 0x1BE968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE964u;
    // 0x1be968: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153090u, 0x1BE964u, 0x1BE96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE96Cu;
label_1be96c:
    // 0x1be96c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1be96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1be970:
    // 0x1be970: 0x90450013  lbu         $a1, 0x13($v0)
    ctx->pc = 0x1be970u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
label_1be974:
    // 0x1be974: 0xc06fc94  jal         func_1BF250
label_1be978:
    if (ctx->pc == 0x1BE978u) {
        ctx->pc = 0x1BE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE974u;
        // 0x1be978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE97Cu;
        goto label_1be97c;
    }
    ctx->pc = 0x1BE974u;
    SET_GPR_U32(ctx, 31, 0x1BE97Cu);
    ctx->pc = 0x1BE978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE974u;
    // 0x1be978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF250u;
    { ctx->pc = 0x1bf250; return; }
    ctx->pc = 0x1BE97Cu;
label_1be97c:
    // 0x1be97c: 0x92450074  lbu         $a1, 0x74($s2)
    ctx->pc = 0x1be97cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_1be980:
    // 0x1be980: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1be980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1be984:
    // 0x1be984: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1be984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1be988:
    // 0x1be988: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x1be988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_1be98c:
    // 0x1be98c: 0x34214a30  ori         $at, $at, 0x4A30
    ctx->pc = 0x1be98cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18992);
label_1be990:
    // 0x1be990: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1be994:
    // 0x1be994: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1be994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be998:
    // 0x1be998: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1be998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1be99c:
    // 0x1be99c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1be99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1be9a0:
    // 0x1be9a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1be9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1be9a4:
    // 0x1be9a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be9a8:
    // 0x1be9a8: 0xc0653b4  jal         func_194ED0
label_1be9ac:
    if (ctx->pc == 0x1BE9ACu) {
        ctx->pc = 0x1BE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9A8u;
        // 0x1be9ac: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE9B0u;
        goto label_1be9b0;
    }
    ctx->pc = 0x1BE9A8u;
    SET_GPR_U32(ctx, 31, 0x1BE9B0u);
    ctx->pc = 0x1BE9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9A8u;
    // 0x1be9ac: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194ED0u, 0x1BE9A8u, 0x1BE9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9B0u;
label_1be9b0:
    // 0x1be9b0: 0x92430075  lbu         $v1, 0x75($s2)
    ctx->pc = 0x1be9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 117)));
label_1be9b4:
    // 0x1be9b4: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1be9b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1be9b8:
    // 0x1be9b8: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_1be9bc:
    if (ctx->pc == 0x1BE9BCu) {
        ctx->pc = 0x1BE9C0u;
        goto label_1be9c0;
    }
    ctx->pc = 0x1BE9B8u;
    {
        const bool branch_taken_0x1be9b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be9b8) {
            ctx->pc = 0x1BEA28u;
            goto label_1bea28;
        }
    }
    ctx->pc = 0x1BE9C0u;
label_1be9c0:
    // 0x1be9c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1be9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1be9c4:
    // 0x1be9c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1be9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1be9c8:
    // 0x1be9c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1be9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1be9cc:
    // 0x1be9cc: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x1be9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_1be9d0:
    // 0x1be9d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1be9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1be9d4:
    // 0x1be9d4: 0x34214a18  ori         $at, $at, 0x4A18
    ctx->pc = 0x1be9d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18968);
label_1be9d8:
    // 0x1be9d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be9dc:
    // 0x1be9dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1be9e0:
    // 0x1be9e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1be9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be9e4:
    // 0x1be9e4: 0xc06542c  jal         func_1950B0
label_1be9e8:
    if (ctx->pc == 0x1BE9E8u) {
        ctx->pc = 0x1BE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9E4u;
        // 0x1be9e8: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE9ECu;
        goto label_1be9ec;
    }
    ctx->pc = 0x1BE9E4u;
    SET_GPR_U32(ctx, 31, 0x1BE9ECu);
    ctx->pc = 0x1BE9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9E4u;
    // 0x1be9e8: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1950B0u, 0x1BE9E4u, 0x1BE9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9ECu;
label_1be9ec:
    // 0x1be9ec: 0x1000000e  b           . + 4 + (0xE << 2)
label_1be9f0:
    if (ctx->pc == 0x1BE9F0u) {
        ctx->pc = 0x1BE9F4u;
        goto label_1be9f4;
    }
    ctx->pc = 0x1BE9ECu;
    {
        const bool branch_taken_0x1be9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be9ec) {
            ctx->pc = 0x1BEA28u;
            goto label_1bea28;
        }
    }
    ctx->pc = 0x1BE9F4u;
label_1be9f4:
    // 0x1be9f4: 0x92650244  lbu         $a1, 0x244($s3)
    ctx->pc = 0x1be9f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
label_1be9f8:
    // 0x1be9f8: 0x92660242  lbu         $a2, 0x242($s3)
    ctx->pc = 0x1be9f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
label_1be9fc:
    // 0x1be9fc: 0xc045784  jal         func_115E10
label_1bea00:
    if (ctx->pc == 0x1BEA00u) {
        ctx->pc = 0x1BEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9FCu;
        // 0x1bea00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA04u;
        goto label_1bea04;
    }
    ctx->pc = 0x1BE9FCu;
    SET_GPR_U32(ctx, 31, 0x1BEA04u);
    ctx->pc = 0x1BEA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9FCu;
    // 0x1bea00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115E10u, 0x1BE9FCu, 0x1BEA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA04u;
label_1bea04:
    // 0x1bea04: 0xc054c24  jal         func_153090
label_1bea08:
    if (ctx->pc == 0x1BEA08u) {
        ctx->pc = 0x1BEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA04u;
        // 0x1bea08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA0Cu;
        goto label_1bea0c;
    }
    ctx->pc = 0x1BEA04u;
    SET_GPR_U32(ctx, 31, 0x1BEA0Cu);
    ctx->pc = 0x1BEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA04u;
    // 0x1bea08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153090u, 0x1BEA04u, 0x1BEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA0Cu;
label_1bea0c:
    // 0x1bea0c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bea10:
    // 0x1bea10: 0x90450013  lbu         $a1, 0x13($v0)
    ctx->pc = 0x1bea10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
label_1bea14:
    // 0x1bea14: 0xc06fc94  jal         func_1BF250
label_1bea18:
    if (ctx->pc == 0x1BEA18u) {
        ctx->pc = 0x1BEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA14u;
        // 0x1bea18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA1Cu;
        goto label_1bea1c;
    }
    ctx->pc = 0x1BEA14u;
    SET_GPR_U32(ctx, 31, 0x1BEA1Cu);
    ctx->pc = 0x1BEA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA14u;
    // 0x1bea18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF250u;
    { ctx->pc = 0x1bf250; return; }
    ctx->pc = 0x1BEA1Cu;
label_1bea1c:
    // 0x1bea1c: 0x92650247  lbu         $a1, 0x247($s3)
    ctx->pc = 0x1bea1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 583)));
label_1bea20:
    // 0x1bea20: 0xc06525c  jal         func_194970
label_1bea24:
    if (ctx->pc == 0x1BEA24u) {
        ctx->pc = 0x1BEA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA20u;
        // 0x1bea24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA28u;
        goto label_1bea28;
    }
    ctx->pc = 0x1BEA20u;
    SET_GPR_U32(ctx, 31, 0x1BEA28u);
    ctx->pc = 0x1BEA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA20u;
    // 0x1bea24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194970u, 0x1BEA20u, 0x1BEA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA28u;
label_1bea28:
    // 0x1bea28: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bea2c:
    // 0x1bea2c: 0x90234af0  lbu         $v1, 0x4AF0($at)
    ctx->pc = 0x1bea2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19184)));
label_1bea30:
    // 0x1bea30: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1bea34:
    if (ctx->pc == 0x1BEA34u) {
        ctx->pc = 0x1BEA38u;
        goto label_1bea38;
    }
    ctx->pc = 0x1BEA30u;
    {
        const bool branch_taken_0x1bea30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea30) {
            ctx->pc = 0x1BEAD0u;
            goto label_1bead0;
        }
    }
    ctx->pc = 0x1BEA38u;
label_1bea38:
    // 0x1bea38: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bea3c:
    // 0x1bea3c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1bea3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1bea40:
    // 0x1bea40: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
label_1bea44:
    if (ctx->pc == 0x1BEA44u) {
        ctx->pc = 0x1BEA48u;
        goto label_1bea48;
    }
    ctx->pc = 0x1BEA40u;
    {
        const bool branch_taken_0x1bea40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bea40) {
            ctx->pc = 0x1BEAD0u;
            goto label_1bead0;
        }
    }
    ctx->pc = 0x1BEA48u;
label_1bea48:
    // 0x1bea48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bea4c:
    // 0x1bea4c: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x1bea4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_1bea50:
    // 0x1bea50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1bea54:
    if (ctx->pc == 0x1BEA54u) {
        ctx->pc = 0x1BEA58u;
        goto label_1bea58;
    }
    ctx->pc = 0x1BEA50u;
    {
        const bool branch_taken_0x1bea50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea50) {
            ctx->pc = 0x1BEA88u;
            goto label_1bea88;
        }
    }
    ctx->pc = 0x1BEA58u;
label_1bea58:
    // 0x1bea58: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bea5c:
    // 0x1bea5c: 0x92820034  lbu         $v0, 0x34($s4)
    ctx->pc = 0x1bea5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1bea60:
    // 0x1bea60: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x1bea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18804)));
label_1bea64:
    // 0x1bea64: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1bea68:
    if (ctx->pc == 0x1BEA68u) {
        ctx->pc = 0x1BEA6Cu;
        goto label_1bea6c;
    }
    ctx->pc = 0x1BEA64u;
    {
        const bool branch_taken_0x1bea64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bea64) {
            ctx->pc = 0x1BEA88u;
            goto label_1bea88;
        }
    }
    ctx->pc = 0x1BEA6Cu;
label_1bea6c:
    // 0x1bea6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bea70:
    // 0x1bea70: 0x92820035  lbu         $v0, 0x35($s4)
    ctx->pc = 0x1bea70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
label_1bea74:
    // 0x1bea74: 0x8c23496c  lw          $v1, 0x496C($at)
    ctx->pc = 0x1bea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
label_1bea78:
    // 0x1bea78: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1bea7c:
    if (ctx->pc == 0x1BEA7Cu) {
        ctx->pc = 0x1BEA80u;
        goto label_1bea80;
    }
    ctx->pc = 0x1BEA78u;
    {
        const bool branch_taken_0x1bea78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bea78) {
            ctx->pc = 0x1BEA88u;
            goto label_1bea88;
        }
    }
    ctx->pc = 0x1BEA80u;
label_1bea80:
    // 0x1bea80: 0x1000000f  b           . + 4 + (0xF << 2)
label_1bea84:
    if (ctx->pc == 0x1BEA84u) {
        ctx->pc = 0x1BEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA80u;
        // 0x1bea84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA88u;
        goto label_1bea88;
    }
    ctx->pc = 0x1BEA80u;
    {
        const bool branch_taken_0x1bea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA80u;
        // 0x1bea84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea80) {
            ctx->pc = 0x1BEAC0u;
            goto label_1beac0;
        }
    }
    ctx->pc = 0x1BEA88u;
label_1bea88:
    // 0x1bea88: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bea8c:
    // 0x1bea8c: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1bea8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1bea90:
    // 0x1bea90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1bea94:
    if (ctx->pc == 0x1BEA94u) {
        ctx->pc = 0x1BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA90u;
        // 0x1bea94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA98u;
        goto label_1bea98;
    }
    ctx->pc = 0x1BEA90u;
    {
        const bool branch_taken_0x1bea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA90u;
        // 0x1bea94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea90) {
            ctx->pc = 0x1BEAC4u;
            goto label_1beac4;
        }
    }
    ctx->pc = 0x1BEA98u;
label_1bea98:
    // 0x1bea98: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bea9c:
    // 0x1bea9c: 0x92820034  lbu         $v0, 0x34($s4)
    ctx->pc = 0x1bea9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1beaa0:
    // 0x1beaa0: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x1beaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18948)));
label_1beaa4:
    // 0x1beaa4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1beaa8:
    if (ctx->pc == 0x1BEAA8u) {
        ctx->pc = 0x1BEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAA4u;
        // 0x1beaa8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEAACu;
        goto label_1beaac;
    }
    ctx->pc = 0x1BEAA4u;
    {
        const bool branch_taken_0x1beaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAA4u;
        // 0x1beaa8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beaa4) {
            ctx->pc = 0x1BEAC0u;
            goto label_1beac0;
        }
    }
    ctx->pc = 0x1BEAACu;
label_1beaac:
    // 0x1beaac: 0x92820035  lbu         $v0, 0x35($s4)
    ctx->pc = 0x1beaacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
label_1beab0:
    // 0x1beab0: 0x8c2349fc  lw          $v1, 0x49FC($at)
    ctx->pc = 0x1beab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
label_1beab4:
    // 0x1beab4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1beab8:
    if (ctx->pc == 0x1BEAB8u) {
        ctx->pc = 0x1BEABCu;
        goto label_1beabc;
    }
    ctx->pc = 0x1BEAB4u;
    {
        const bool branch_taken_0x1beab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1beab4) {
            ctx->pc = 0x1BEAC0u;
            goto label_1beac0;
        }
    }
    ctx->pc = 0x1BEABCu;
label_1beabc:
    // 0x1beabc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1beabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1beac0:
    // 0x1beac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1beac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1beac4:
    // 0x1beac4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1beac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1beac8:
    // 0x1beac8: 0xc090024  jal         func_240090
label_1beacc:
    if (ctx->pc == 0x1BEACCu) {
        ctx->pc = 0x1BEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAC8u;
        // 0x1beacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEAD0u;
        goto label_1bead0;
    }
    ctx->pc = 0x1BEAC8u;
    SET_GPR_U32(ctx, 31, 0x1BEAD0u);
    ctx->pc = 0x1BEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAC8u;
    // 0x1beacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240090u;
    { ctx->pc = 0x240090; return; }
    ctx->pc = 0x1BEAD0u;
label_1bead0:
    // 0x1bead0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bead0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bead4:
    // 0x1bead4: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x1bead4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_1bead8:
    // 0x1bead8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1bead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1beadc:
    // 0x1beadc: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_1beae0:
    if (ctx->pc == 0x1BEAE0u) {
        ctx->pc = 0x1BEAE4u;
        goto label_1beae4;
    }
    ctx->pc = 0x1BEADCu;
    {
        const bool branch_taken_0x1beadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beadc) {
            ctx->pc = 0x1BEBE4u;
            { ctx->pc = 0x1bebe4; return; }
        }
    }
    ctx->pc = 0x1BEAE4u;
label_1beae4:
    // 0x1beae4: 0x92640234  lbu         $a0, 0x234($s3)
    ctx->pc = 0x1beae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 564)));
label_1beae8:
    // 0x1beae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1beae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1beaec:
    // 0x1beaec: 0x1483003d  bne         $a0, $v1, . + 4 + (0x3D << 2)
label_1beaf0:
    if (ctx->pc == 0x1BEAF0u) {
        ctx->pc = 0x1BEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAECu;
        // 0x1beaf0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEAF4u;
        goto label_1beaf4;
    }
    ctx->pc = 0x1BEAECu;
    {
        const bool branch_taken_0x1beaec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAECu;
        // 0x1beaf0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beaec) {
            ctx->pc = 0x1BEBE4u;
            { ctx->pc = 0x1bebe4; return; }
        }
    }
    ctx->pc = 0x1BEAF4u;
label_1beaf4:
    // 0x1beaf4: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x1beaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_1beaf8:
    // 0x1beaf8: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1beaf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1beafc:
    // 0x1beafc: 0x14830039  bne         $a0, $v1, . + 4 + (0x39 << 2)
label_1beb00:
    if (ctx->pc == 0x1BEB00u) {
        ctx->pc = 0x1BEB04u;
        goto label_1beb04;
    }
    ctx->pc = 0x1BEAFCu;
    {
        const bool branch_taken_0x1beafc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1beafc) {
            ctx->pc = 0x1BEBE4u;
            { ctx->pc = 0x1bebe4; return; }
        }
    }
    ctx->pc = 0x1BEB04u;
label_1beb04:
    // 0x1beb04: 0x92630242  lbu         $v1, 0x242($s3)
    ctx->pc = 0x1beb04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
label_1beb08:
    // 0x1beb08: 0x2063ffd3  addi        $v1, $v1, -0x2D
    ctx->pc = 0x1beb08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967251, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_1beb0c:
    // 0x1beb0c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x1beb0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1beb10:
    // 0x1beb10: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_1beb14:
    if (ctx->pc == 0x1BEB14u) {
        ctx->pc = 0x1BEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB10u;
        // 0x1beb14: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB18u;
        goto label_1beb18;
    }
    ctx->pc = 0x1BEB10u;
    {
        const bool branch_taken_0x1beb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB10u;
        // 0x1beb14: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb10) {
            ctx->pc = 0x1BEB50u;
            { ctx->pc = 0x1beb50; return; }
        }
    }
    ctx->pc = 0x1BEB18u;
label_1beb18:
    // 0x1beb18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1beb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1beb1c:
    // 0x1beb1c: 0x2484b6f0  addiu       $a0, $a0, -0x4910
    ctx->pc = 0x1beb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948592));
label_1beb20:
    // 0x1beb20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1beb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1beb24:
    // 0x1beb24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1beb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1beb28:
    // 0x1beb28: 0x600008  jr          $v1
label_1beb2c:
    if (ctx->pc == 0x1BEB2Cu) {
        ctx->pc = 0x1BEB30u;
        goto label_1beb30;
    }
    ctx->pc = 0x1BEB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BEB30u: goto label_1beb30;
            case 0x1BEB3Cu: goto label_1beb3c;
            case 0x1BEB48u: goto label_1beb48;
            case 0x1BEB50u: { ctx->pc = 0x1beb50; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEB28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BEB30u;
label_1beb30:
    // 0x1beb30: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1beb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1beb34:
    // 0x1beb34: 0x10000006  b           . + 4 + (0x6 << 2)
label_1beb38:
    if (ctx->pc == 0x1BEB38u) {
        ctx->pc = 0x1BEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB34u;
        // 0x1beb38: 0xa2630242  sb          $v1, 0x242($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB3Cu;
        goto label_1beb3c;
    }
    ctx->pc = 0x1BEB34u;
    {
        const bool branch_taken_0x1beb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB34u;
        // 0x1beb38: 0xa2630242  sb          $v1, 0x242($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb34) {
            ctx->pc = 0x1BEB50u;
            { ctx->pc = 0x1beb50; return; }
        }
    }
    ctx->pc = 0x1BEB3Cu;
label_1beb3c:
    // 0x1beb3c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1beb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1beb40:
    // 0x1beb40: 0x10000003  b           . + 4 + (0x3 << 2)
label_1beb44:
    if (ctx->pc == 0x1BEB44u) {
        ctx->pc = 0x1BEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB40u;
        // 0x1beb44: 0xa2630242  sb          $v1, 0x242($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB48u;
        goto label_1beb48;
    }
    ctx->pc = 0x1BEB40u;
    {
        const bool branch_taken_0x1beb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB40u;
        // 0x1beb44: 0xa2630242  sb          $v1, 0x242($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb40) {
            ctx->pc = 0x1BEB50u;
            { ctx->pc = 0x1beb50; return; }
        }
    }
    ctx->pc = 0x1BEB48u;
label_1beb48:
    // 0x1beb48: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x1beb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1beb4c:
    // 0x1beb4c: 0xa2630242  sb          $v1, 0x242($s3)
    ctx->pc = 0x1beb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1beb50u;
    return;
}
