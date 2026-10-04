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


void FUN_0014eba0_part256(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1cb3d0u: goto label_1cb3d0;
        case 0x1cb3d4u: goto label_1cb3d4;
        case 0x1cb3d8u: goto label_1cb3d8;
        case 0x1cb3dcu: goto label_1cb3dc;
        case 0x1cb3e0u: goto label_1cb3e0;
        case 0x1cb3e4u: goto label_1cb3e4;
        case 0x1cb3e8u: goto label_1cb3e8;
        case 0x1cb3ecu: goto label_1cb3ec;
        case 0x1cb3f0u: goto label_1cb3f0;
        case 0x1cb3f4u: goto label_1cb3f4;
        case 0x1cb3f8u: goto label_1cb3f8;
        case 0x1cb3fcu: goto label_1cb3fc;
        case 0x1cb400u: goto label_1cb400;
        case 0x1cb404u: goto label_1cb404;
        case 0x1cb408u: goto label_1cb408;
        case 0x1cb40cu: goto label_1cb40c;
        case 0x1cb410u: goto label_1cb410;
        case 0x1cb414u: goto label_1cb414;
        case 0x1cb418u: goto label_1cb418;
        case 0x1cb41cu: goto label_1cb41c;
        case 0x1cb420u: goto label_1cb420;
        case 0x1cb424u: goto label_1cb424;
        case 0x1cb428u: goto label_1cb428;
        case 0x1cb42cu: goto label_1cb42c;
        case 0x1cb430u: goto label_1cb430;
        case 0x1cb434u: goto label_1cb434;
        case 0x1cb438u: goto label_1cb438;
        case 0x1cb43cu: goto label_1cb43c;
        case 0x1cb440u: goto label_1cb440;
        case 0x1cb444u: goto label_1cb444;
        case 0x1cb448u: goto label_1cb448;
        case 0x1cb44cu: goto label_1cb44c;
        case 0x1cb450u: goto label_1cb450;
        case 0x1cb454u: goto label_1cb454;
        case 0x1cb458u: goto label_1cb458;
        case 0x1cb45cu: goto label_1cb45c;
        case 0x1cb460u: goto label_1cb460;
        case 0x1cb464u: goto label_1cb464;
        case 0x1cb468u: goto label_1cb468;
        case 0x1cb46cu: goto label_1cb46c;
        case 0x1cb470u: goto label_1cb470;
        case 0x1cb474u: goto label_1cb474;
        case 0x1cb478u: goto label_1cb478;
        case 0x1cb47cu: goto label_1cb47c;
        case 0x1cb480u: goto label_1cb480;
        case 0x1cb484u: goto label_1cb484;
        case 0x1cb488u: goto label_1cb488;
        case 0x1cb48cu: goto label_1cb48c;
        case 0x1cb490u: goto label_1cb490;
        case 0x1cb494u: goto label_1cb494;
        case 0x1cb498u: goto label_1cb498;
        case 0x1cb49cu: goto label_1cb49c;
        case 0x1cb4a0u: goto label_1cb4a0;
        case 0x1cb4a4u: goto label_1cb4a4;
        case 0x1cb4a8u: goto label_1cb4a8;
        case 0x1cb4acu: goto label_1cb4ac;
        case 0x1cb4b0u: goto label_1cb4b0;
        case 0x1cb4b4u: goto label_1cb4b4;
        case 0x1cb4b8u: goto label_1cb4b8;
        case 0x1cb4bcu: goto label_1cb4bc;
        case 0x1cb4c0u: goto label_1cb4c0;
        case 0x1cb4c4u: goto label_1cb4c4;
        case 0x1cb4c8u: goto label_1cb4c8;
        case 0x1cb4ccu: goto label_1cb4cc;
        case 0x1cb4d0u: goto label_1cb4d0;
        case 0x1cb4d4u: goto label_1cb4d4;
        case 0x1cb4d8u: goto label_1cb4d8;
        case 0x1cb4dcu: goto label_1cb4dc;
        case 0x1cb4e0u: goto label_1cb4e0;
        case 0x1cb4e4u: goto label_1cb4e4;
        case 0x1cb4e8u: goto label_1cb4e8;
        case 0x1cb4ecu: goto label_1cb4ec;
        case 0x1cb4f0u: goto label_1cb4f0;
        case 0x1cb4f4u: goto label_1cb4f4;
        case 0x1cb4f8u: goto label_1cb4f8;
        case 0x1cb4fcu: goto label_1cb4fc;
        case 0x1cb500u: goto label_1cb500;
        case 0x1cb504u: goto label_1cb504;
        case 0x1cb508u: goto label_1cb508;
        case 0x1cb50cu: goto label_1cb50c;
        case 0x1cb510u: goto label_1cb510;
        case 0x1cb514u: goto label_1cb514;
        case 0x1cb518u: goto label_1cb518;
        case 0x1cb51cu: goto label_1cb51c;
        case 0x1cb520u: goto label_1cb520;
        case 0x1cb524u: goto label_1cb524;
        case 0x1cb528u: goto label_1cb528;
        case 0x1cb52cu: goto label_1cb52c;
        case 0x1cb530u: goto label_1cb530;
        case 0x1cb534u: goto label_1cb534;
        case 0x1cb538u: goto label_1cb538;
        case 0x1cb53cu: goto label_1cb53c;
        case 0x1cb540u: goto label_1cb540;
        case 0x1cb544u: goto label_1cb544;
        case 0x1cb548u: goto label_1cb548;
        case 0x1cb54cu: goto label_1cb54c;
        case 0x1cb550u: goto label_1cb550;
        case 0x1cb554u: goto label_1cb554;
        case 0x1cb558u: goto label_1cb558;
        case 0x1cb55cu: goto label_1cb55c;
        case 0x1cb560u: goto label_1cb560;
        case 0x1cb564u: goto label_1cb564;
        case 0x1cb568u: goto label_1cb568;
        case 0x1cb56cu: goto label_1cb56c;
        case 0x1cb570u: goto label_1cb570;
        case 0x1cb574u: goto label_1cb574;
        case 0x1cb578u: goto label_1cb578;
        case 0x1cb57cu: goto label_1cb57c;
        case 0x1cb580u: goto label_1cb580;
        case 0x1cb584u: goto label_1cb584;
        case 0x1cb588u: goto label_1cb588;
        case 0x1cb58cu: goto label_1cb58c;
        case 0x1cb590u: goto label_1cb590;
        case 0x1cb594u: goto label_1cb594;
        case 0x1cb598u: goto label_1cb598;
        case 0x1cb59cu: goto label_1cb59c;
        case 0x1cb5a0u: goto label_1cb5a0;
        case 0x1cb5a4u: goto label_1cb5a4;
        case 0x1cb5a8u: goto label_1cb5a8;
        case 0x1cb5acu: goto label_1cb5ac;
        case 0x1cb5b0u: goto label_1cb5b0;
        case 0x1cb5b4u: goto label_1cb5b4;
        case 0x1cb5b8u: goto label_1cb5b8;
        case 0x1cb5bcu: goto label_1cb5bc;
        case 0x1cb5c0u: goto label_1cb5c0;
        case 0x1cb5c4u: goto label_1cb5c4;
        case 0x1cb5c8u: goto label_1cb5c8;
        case 0x1cb5ccu: goto label_1cb5cc;
        case 0x1cb5d0u: goto label_1cb5d0;
        case 0x1cb5d4u: goto label_1cb5d4;
        case 0x1cb5d8u: goto label_1cb5d8;
        case 0x1cb5dcu: goto label_1cb5dc;
        case 0x1cb5e0u: goto label_1cb5e0;
        case 0x1cb5e4u: goto label_1cb5e4;
        case 0x1cb5e8u: goto label_1cb5e8;
        case 0x1cb5ecu: goto label_1cb5ec;
        case 0x1cb5f0u: goto label_1cb5f0;
        case 0x1cb5f4u: goto label_1cb5f4;
        case 0x1cb5f8u: goto label_1cb5f8;
        case 0x1cb5fcu: goto label_1cb5fc;
        case 0x1cb600u: goto label_1cb600;
        case 0x1cb604u: goto label_1cb604;
        case 0x1cb608u: goto label_1cb608;
        case 0x1cb60cu: goto label_1cb60c;
        case 0x1cb610u: goto label_1cb610;
        case 0x1cb614u: goto label_1cb614;
        case 0x1cb618u: goto label_1cb618;
        case 0x1cb61cu: goto label_1cb61c;
        case 0x1cb620u: goto label_1cb620;
        case 0x1cb624u: goto label_1cb624;
        case 0x1cb628u: goto label_1cb628;
        case 0x1cb62cu: goto label_1cb62c;
        case 0x1cb630u: goto label_1cb630;
        case 0x1cb634u: goto label_1cb634;
        case 0x1cb638u: goto label_1cb638;
        case 0x1cb63cu: goto label_1cb63c;
        case 0x1cb640u: goto label_1cb640;
        case 0x1cb644u: goto label_1cb644;
        case 0x1cb648u: goto label_1cb648;
        case 0x1cb64cu: goto label_1cb64c;
        case 0x1cb650u: goto label_1cb650;
        case 0x1cb654u: goto label_1cb654;
        case 0x1cb658u: goto label_1cb658;
        case 0x1cb65cu: goto label_1cb65c;
        case 0x1cb660u: goto label_1cb660;
        case 0x1cb664u: goto label_1cb664;
        case 0x1cb668u: goto label_1cb668;
        case 0x1cb66cu: goto label_1cb66c;
        case 0x1cb670u: goto label_1cb670;
        case 0x1cb674u: goto label_1cb674;
        case 0x1cb678u: goto label_1cb678;
        case 0x1cb67cu: goto label_1cb67c;
        case 0x1cb680u: goto label_1cb680;
        case 0x1cb684u: goto label_1cb684;
        case 0x1cb688u: goto label_1cb688;
        case 0x1cb68cu: goto label_1cb68c;
        case 0x1cb690u: goto label_1cb690;
        case 0x1cb694u: goto label_1cb694;
        case 0x1cb698u: goto label_1cb698;
        case 0x1cb69cu: goto label_1cb69c;
        case 0x1cb6a0u: goto label_1cb6a0;
        case 0x1cb6a4u: goto label_1cb6a4;
        case 0x1cb6a8u: goto label_1cb6a8;
        case 0x1cb6acu: goto label_1cb6ac;
        case 0x1cb6b0u: goto label_1cb6b0;
        case 0x1cb6b4u: goto label_1cb6b4;
        case 0x1cb6b8u: goto label_1cb6b8;
        case 0x1cb6bcu: goto label_1cb6bc;
        case 0x1cb6c0u: goto label_1cb6c0;
        case 0x1cb6c4u: goto label_1cb6c4;
        case 0x1cb6c8u: goto label_1cb6c8;
        case 0x1cb6ccu: goto label_1cb6cc;
        case 0x1cb6d0u: goto label_1cb6d0;
        case 0x1cb6d4u: goto label_1cb6d4;
        case 0x1cb6d8u: goto label_1cb6d8;
        case 0x1cb6dcu: goto label_1cb6dc;
        case 0x1cb6e0u: goto label_1cb6e0;
        case 0x1cb6e4u: goto label_1cb6e4;
        case 0x1cb6e8u: goto label_1cb6e8;
        case 0x1cb6ecu: goto label_1cb6ec;
        case 0x1cb6f0u: goto label_1cb6f0;
        case 0x1cb6f4u: goto label_1cb6f4;
        case 0x1cb6f8u: goto label_1cb6f8;
        case 0x1cb6fcu: goto label_1cb6fc;
        case 0x1cb700u: goto label_1cb700;
        case 0x1cb704u: goto label_1cb704;
        case 0x1cb708u: goto label_1cb708;
        case 0x1cb70cu: goto label_1cb70c;
        case 0x1cb710u: goto label_1cb710;
        case 0x1cb714u: goto label_1cb714;
        case 0x1cb718u: goto label_1cb718;
        case 0x1cb71cu: goto label_1cb71c;
        case 0x1cb720u: goto label_1cb720;
        case 0x1cb724u: goto label_1cb724;
        case 0x1cb728u: goto label_1cb728;
        case 0x1cb72cu: goto label_1cb72c;
        case 0x1cb730u: goto label_1cb730;
        case 0x1cb734u: goto label_1cb734;
        case 0x1cb738u: goto label_1cb738;
        case 0x1cb73cu: goto label_1cb73c;
        case 0x1cb740u: goto label_1cb740;
        case 0x1cb744u: goto label_1cb744;
        case 0x1cb748u: goto label_1cb748;
        case 0x1cb74cu: goto label_1cb74c;
        case 0x1cb750u: goto label_1cb750;
        case 0x1cb754u: goto label_1cb754;
        case 0x1cb758u: goto label_1cb758;
        case 0x1cb75cu: goto label_1cb75c;
        case 0x1cb760u: goto label_1cb760;
        case 0x1cb764u: goto label_1cb764;
        case 0x1cb768u: goto label_1cb768;
        case 0x1cb76cu: goto label_1cb76c;
        case 0x1cb770u: goto label_1cb770;
        case 0x1cb774u: goto label_1cb774;
        case 0x1cb778u: goto label_1cb778;
        case 0x1cb77cu: goto label_1cb77c;
        case 0x1cb780u: goto label_1cb780;
        case 0x1cb784u: goto label_1cb784;
        case 0x1cb788u: goto label_1cb788;
        case 0x1cb78cu: goto label_1cb78c;
        case 0x1cb790u: goto label_1cb790;
        case 0x1cb794u: goto label_1cb794;
        case 0x1cb798u: goto label_1cb798;
        case 0x1cb79cu: goto label_1cb79c;
        case 0x1cb7a0u: goto label_1cb7a0;
        case 0x1cb7a4u: goto label_1cb7a4;
        case 0x1cb7a8u: goto label_1cb7a8;
        case 0x1cb7acu: goto label_1cb7ac;
        case 0x1cb7b0u: goto label_1cb7b0;
        case 0x1cb7b4u: goto label_1cb7b4;
        case 0x1cb7b8u: goto label_1cb7b8;
        case 0x1cb7bcu: goto label_1cb7bc;
        case 0x1cb7c0u: goto label_1cb7c0;
        case 0x1cb7c4u: goto label_1cb7c4;
        case 0x1cb7c8u: goto label_1cb7c8;
        case 0x1cb7ccu: goto label_1cb7cc;
        case 0x1cb7d0u: goto label_1cb7d0;
        case 0x1cb7d4u: goto label_1cb7d4;
        case 0x1cb7d8u: goto label_1cb7d8;
        case 0x1cb7dcu: goto label_1cb7dc;
        case 0x1cb7e0u: goto label_1cb7e0;
        case 0x1cb7e4u: goto label_1cb7e4;
        case 0x1cb7e8u: goto label_1cb7e8;
        case 0x1cb7ecu: goto label_1cb7ec;
        case 0x1cb7f0u: goto label_1cb7f0;
        case 0x1cb7f4u: goto label_1cb7f4;
        case 0x1cb7f8u: goto label_1cb7f8;
        case 0x1cb7fcu: goto label_1cb7fc;
        case 0x1cb800u: goto label_1cb800;
        case 0x1cb804u: goto label_1cb804;
        case 0x1cb808u: goto label_1cb808;
        case 0x1cb80cu: goto label_1cb80c;
        case 0x1cb810u: goto label_1cb810;
        case 0x1cb814u: goto label_1cb814;
        case 0x1cb818u: goto label_1cb818;
        case 0x1cb81cu: goto label_1cb81c;
        case 0x1cb820u: goto label_1cb820;
        case 0x1cb824u: goto label_1cb824;
        case 0x1cb828u: goto label_1cb828;
        case 0x1cb82cu: goto label_1cb82c;
        case 0x1cb830u: goto label_1cb830;
        case 0x1cb834u: goto label_1cb834;
        case 0x1cb838u: goto label_1cb838;
        case 0x1cb83cu: goto label_1cb83c;
        case 0x1cb840u: goto label_1cb840;
        case 0x1cb844u: goto label_1cb844;
        case 0x1cb848u: goto label_1cb848;
        case 0x1cb84cu: goto label_1cb84c;
        case 0x1cb850u: goto label_1cb850;
        case 0x1cb854u: goto label_1cb854;
        case 0x1cb858u: goto label_1cb858;
        case 0x1cb85cu: goto label_1cb85c;
        case 0x1cb860u: goto label_1cb860;
        case 0x1cb864u: goto label_1cb864;
        case 0x1cb868u: goto label_1cb868;
        case 0x1cb86cu: goto label_1cb86c;
        case 0x1cb870u: goto label_1cb870;
        case 0x1cb874u: goto label_1cb874;
        case 0x1cb878u: goto label_1cb878;
        case 0x1cb87cu: goto label_1cb87c;
        case 0x1cb880u: goto label_1cb880;
        case 0x1cb884u: goto label_1cb884;
        case 0x1cb888u: goto label_1cb888;
        case 0x1cb88cu: goto label_1cb88c;
        case 0x1cb890u: goto label_1cb890;
        case 0x1cb894u: goto label_1cb894;
        case 0x1cb898u: goto label_1cb898;
        case 0x1cb89cu: goto label_1cb89c;
        case 0x1cb8a0u: goto label_1cb8a0;
        case 0x1cb8a4u: goto label_1cb8a4;
        case 0x1cb8a8u: goto label_1cb8a8;
        case 0x1cb8acu: goto label_1cb8ac;
        case 0x1cb8b0u: goto label_1cb8b0;
        case 0x1cb8b4u: goto label_1cb8b4;
        case 0x1cb8b8u: goto label_1cb8b8;
        case 0x1cb8bcu: goto label_1cb8bc;
        case 0x1cb8c0u: goto label_1cb8c0;
        case 0x1cb8c4u: goto label_1cb8c4;
        case 0x1cb8c8u: goto label_1cb8c8;
        case 0x1cb8ccu: goto label_1cb8cc;
        case 0x1cb8d0u: goto label_1cb8d0;
        case 0x1cb8d4u: goto label_1cb8d4;
        case 0x1cb8d8u: goto label_1cb8d8;
        case 0x1cb8dcu: goto label_1cb8dc;
        case 0x1cb8e0u: goto label_1cb8e0;
        case 0x1cb8e4u: goto label_1cb8e4;
        case 0x1cb8e8u: goto label_1cb8e8;
        case 0x1cb8ecu: goto label_1cb8ec;
        case 0x1cb8f0u: goto label_1cb8f0;
        case 0x1cb8f4u: goto label_1cb8f4;
        case 0x1cb8f8u: goto label_1cb8f8;
        case 0x1cb8fcu: goto label_1cb8fc;
        case 0x1cb900u: goto label_1cb900;
        case 0x1cb904u: goto label_1cb904;
        case 0x1cb908u: goto label_1cb908;
        case 0x1cb90cu: goto label_1cb90c;
        case 0x1cb910u: goto label_1cb910;
        case 0x1cb914u: goto label_1cb914;
        case 0x1cb918u: goto label_1cb918;
        case 0x1cb91cu: goto label_1cb91c;
        case 0x1cb920u: goto label_1cb920;
        case 0x1cb924u: goto label_1cb924;
        case 0x1cb928u: goto label_1cb928;
        case 0x1cb92cu: goto label_1cb92c;
        case 0x1cb930u: goto label_1cb930;
        case 0x1cb934u: goto label_1cb934;
        case 0x1cb938u: goto label_1cb938;
        case 0x1cb93cu: goto label_1cb93c;
        case 0x1cb940u: goto label_1cb940;
        case 0x1cb944u: goto label_1cb944;
        case 0x1cb948u: goto label_1cb948;
        case 0x1cb94cu: goto label_1cb94c;
        case 0x1cb950u: goto label_1cb950;
        case 0x1cb954u: goto label_1cb954;
        case 0x1cb958u: goto label_1cb958;
        case 0x1cb95cu: goto label_1cb95c;
        case 0x1cb960u: goto label_1cb960;
        case 0x1cb964u: goto label_1cb964;
        case 0x1cb968u: goto label_1cb968;
        case 0x1cb96cu: goto label_1cb96c;
        case 0x1cb970u: goto label_1cb970;
        case 0x1cb974u: goto label_1cb974;
        case 0x1cb978u: goto label_1cb978;
        case 0x1cb97cu: goto label_1cb97c;
        case 0x1cb980u: goto label_1cb980;
        case 0x1cb984u: goto label_1cb984;
        case 0x1cb988u: goto label_1cb988;
        case 0x1cb98cu: goto label_1cb98c;
        case 0x1cb990u: goto label_1cb990;
        case 0x1cb994u: goto label_1cb994;
        case 0x1cb998u: goto label_1cb998;
        case 0x1cb99cu: goto label_1cb99c;
        case 0x1cb9a0u: goto label_1cb9a0;
        case 0x1cb9a4u: goto label_1cb9a4;
        case 0x1cb9a8u: goto label_1cb9a8;
        case 0x1cb9acu: goto label_1cb9ac;
        case 0x1cb9b0u: goto label_1cb9b0;
        case 0x1cb9b4u: goto label_1cb9b4;
        case 0x1cb9b8u: goto label_1cb9b8;
        case 0x1cb9bcu: goto label_1cb9bc;
        case 0x1cb9c0u: goto label_1cb9c0;
        case 0x1cb9c4u: goto label_1cb9c4;
        case 0x1cb9c8u: goto label_1cb9c8;
        case 0x1cb9ccu: goto label_1cb9cc;
        case 0x1cb9d0u: goto label_1cb9d0;
        case 0x1cb9d4u: goto label_1cb9d4;
        case 0x1cb9d8u: goto label_1cb9d8;
        case 0x1cb9dcu: goto label_1cb9dc;
        case 0x1cb9e0u: goto label_1cb9e0;
        case 0x1cb9e4u: goto label_1cb9e4;
        case 0x1cb9e8u: goto label_1cb9e8;
        case 0x1cb9ecu: goto label_1cb9ec;
        case 0x1cb9f0u: goto label_1cb9f0;
        case 0x1cb9f4u: goto label_1cb9f4;
        case 0x1cb9f8u: goto label_1cb9f8;
        case 0x1cb9fcu: goto label_1cb9fc;
        case 0x1cba00u: goto label_1cba00;
        case 0x1cba04u: goto label_1cba04;
        case 0x1cba08u: goto label_1cba08;
        case 0x1cba0cu: goto label_1cba0c;
        case 0x1cba10u: goto label_1cba10;
        case 0x1cba14u: goto label_1cba14;
        case 0x1cba18u: goto label_1cba18;
        case 0x1cba1cu: goto label_1cba1c;
        case 0x1cba20u: goto label_1cba20;
        case 0x1cba24u: goto label_1cba24;
        case 0x1cba28u: goto label_1cba28;
        case 0x1cba2cu: goto label_1cba2c;
        case 0x1cba30u: goto label_1cba30;
        case 0x1cba34u: goto label_1cba34;
        case 0x1cba38u: goto label_1cba38;
        case 0x1cba3cu: goto label_1cba3c;
        case 0x1cba40u: goto label_1cba40;
        case 0x1cba44u: goto label_1cba44;
        case 0x1cba48u: goto label_1cba48;
        case 0x1cba4cu: goto label_1cba4c;
        case 0x1cba50u: goto label_1cba50;
        case 0x1cba54u: goto label_1cba54;
        case 0x1cba58u: goto label_1cba58;
        case 0x1cba5cu: goto label_1cba5c;
        case 0x1cba60u: goto label_1cba60;
        case 0x1cba64u: goto label_1cba64;
        case 0x1cba68u: goto label_1cba68;
        case 0x1cba6cu: goto label_1cba6c;
        case 0x1cba70u: goto label_1cba70;
        case 0x1cba74u: goto label_1cba74;
        case 0x1cba78u: goto label_1cba78;
        case 0x1cba7cu: goto label_1cba7c;
        case 0x1cba80u: goto label_1cba80;
        case 0x1cba84u: goto label_1cba84;
        case 0x1cba88u: goto label_1cba88;
        case 0x1cba8cu: goto label_1cba8c;
        case 0x1cba90u: goto label_1cba90;
        case 0x1cba94u: goto label_1cba94;
        case 0x1cba98u: goto label_1cba98;
        case 0x1cba9cu: goto label_1cba9c;
        case 0x1cbaa0u: goto label_1cbaa0;
        case 0x1cbaa4u: goto label_1cbaa4;
        case 0x1cbaa8u: goto label_1cbaa8;
        case 0x1cbaacu: goto label_1cbaac;
        case 0x1cbab0u: goto label_1cbab0;
        case 0x1cbab4u: goto label_1cbab4;
        case 0x1cbab8u: goto label_1cbab8;
        case 0x1cbabcu: goto label_1cbabc;
        case 0x1cbac0u: goto label_1cbac0;
        case 0x1cbac4u: goto label_1cbac4;
        case 0x1cbac8u: goto label_1cbac8;
        case 0x1cbaccu: goto label_1cbacc;
        case 0x1cbad0u: goto label_1cbad0;
        case 0x1cbad4u: goto label_1cbad4;
        case 0x1cbad8u: goto label_1cbad8;
        case 0x1cbadcu: goto label_1cbadc;
        case 0x1cbae0u: goto label_1cbae0;
        case 0x1cbae4u: goto label_1cbae4;
        case 0x1cbae8u: goto label_1cbae8;
        case 0x1cbaecu: goto label_1cbaec;
        case 0x1cbaf0u: goto label_1cbaf0;
        case 0x1cbaf4u: goto label_1cbaf4;
        case 0x1cbaf8u: goto label_1cbaf8;
        case 0x1cbafcu: goto label_1cbafc;
        case 0x1cbb00u: goto label_1cbb00;
        case 0x1cbb04u: goto label_1cbb04;
        case 0x1cbb08u: goto label_1cbb08;
        case 0x1cbb0cu: goto label_1cbb0c;
        case 0x1cbb10u: goto label_1cbb10;
        case 0x1cbb14u: goto label_1cbb14;
        case 0x1cbb18u: goto label_1cbb18;
        case 0x1cbb1cu: goto label_1cbb1c;
        case 0x1cbb20u: goto label_1cbb20;
        case 0x1cbb24u: goto label_1cbb24;
        case 0x1cbb28u: goto label_1cbb28;
        case 0x1cbb2cu: goto label_1cbb2c;
        case 0x1cbb30u: goto label_1cbb30;
        case 0x1cbb34u: goto label_1cbb34;
        case 0x1cbb38u: goto label_1cbb38;
        case 0x1cbb3cu: goto label_1cbb3c;
        case 0x1cbb40u: goto label_1cbb40;
        case 0x1cbb44u: goto label_1cbb44;
        case 0x1cbb48u: goto label_1cbb48;
        case 0x1cbb4cu: goto label_1cbb4c;
        case 0x1cbb50u: goto label_1cbb50;
        case 0x1cbb54u: goto label_1cbb54;
        case 0x1cbb58u: goto label_1cbb58;
        case 0x1cbb5cu: goto label_1cbb5c;
        case 0x1cbb60u: goto label_1cbb60;
        case 0x1cbb64u: goto label_1cbb64;
        case 0x1cbb68u: goto label_1cbb68;
        case 0x1cbb6cu: goto label_1cbb6c;
        case 0x1cbb70u: goto label_1cbb70;
        case 0x1cbb74u: goto label_1cbb74;
        case 0x1cbb78u: goto label_1cbb78;
        case 0x1cbb7cu: goto label_1cbb7c;
        case 0x1cbb80u: goto label_1cbb80;
        case 0x1cbb84u: goto label_1cbb84;
        case 0x1cbb88u: goto label_1cbb88;
        case 0x1cbb8cu: goto label_1cbb8c;
        case 0x1cbb90u: goto label_1cbb90;
        case 0x1cbb94u: goto label_1cbb94;
        case 0x1cbb98u: goto label_1cbb98;
        case 0x1cbb9cu: goto label_1cbb9c;
        default: return;
    }

label_1cb3d0:
    // 0x1cb3d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb3d4:
    // 0x1cb3d4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1cb3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1cb3d8:
    // 0x1cb3d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb3d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb3dc:
    // 0x1cb3dc: 0xc05d3e4  jal         func_174F90
label_1cb3e0:
    if (ctx->pc == 0x1CB3E0u) {
        ctx->pc = 0x1CB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3DCu;
        // 0x1cb3e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3E4u;
        goto label_1cb3e4;
    }
    ctx->pc = 0x1CB3DCu;
    SET_GPR_U32(ctx, 31, 0x1CB3E4u);
    ctx->pc = 0x1CB3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3DCu;
    // 0x1cb3e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    { ctx->pc = 0x174f90; return; }
    ctx->pc = 0x1CB3E4u;
label_1cb3e4:
    // 0x1cb3e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cb3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cb3e8:
    // 0x1cb3e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cb3e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb3ec:
    // 0x1cb3ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb3ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb3f0:
    // 0x1cb3f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb3f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb3f4:
    // 0x1cb3f4: 0x3e00008  jr          $ra
label_1cb3f8:
    if (ctx->pc == 0x1CB3F8u) {
        ctx->pc = 0x1CB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3F4u;
        // 0x1cb3f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB3FCu;
        goto label_1cb3fc;
    }
    ctx->pc = 0x1CB3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3F4u;
        // 0x1cb3f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB3FCu;
label_1cb3fc:
    // 0x1cb3fc: 0x0  nop
    ctx->pc = 0x1cb3fcu;
    // NOP
label_1cb400:
    // 0x1cb400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cb404:
    // 0x1cb404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cb408:
    // 0x1cb408: 0x80860238  lb          $a2, 0x238($a0)
    ctx->pc = 0x1cb408u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 568)));
label_1cb40c:
    // 0x1cb40c: 0x90a30233  lbu         $v1, 0x233($a1)
    ctx->pc = 0x1cb40cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 563)));
label_1cb410:
    // 0x1cb410: 0x24c6ffb8  addiu       $a2, $a2, -0x48
    ctx->pc = 0x1cb410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967224));
label_1cb414:
    // 0x1cb414: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_1cb418:
    if (ctx->pc == 0x1CB418u) {
        ctx->pc = 0x1CB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB414u;
        // 0x1cb418: 0x30c900ff  andi        $t1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB41Cu;
        goto label_1cb41c;
    }
    ctx->pc = 0x1CB414u;
    {
        const bool branch_taken_0x1cb414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB414u;
        // 0x1cb418: 0x30c900ff  andi        $t1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb414) {
            ctx->pc = 0x1CB45Cu;
            goto label_1cb45c;
        }
    }
    ctx->pc = 0x1CB41Cu;
label_1cb41c:
    // 0x1cb41c: 0x90a80234  lbu         $t0, 0x234($a1)
    ctx->pc = 0x1cb41cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 564)));
label_1cb420:
    // 0x1cb420: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x1cb420u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_1cb424:
    // 0x1cb424: 0x90a60239  lbu         $a2, 0x239($a1)
    ctx->pc = 0x1cb424u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 569)));
label_1cb428:
    // 0x1cb428: 0x24e725b5  addiu       $a3, $a3, 0x25B5
    ctx->pc = 0x1cb428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9653));
label_1cb42c:
    // 0x1cb42c: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x1cb42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_1cb430:
    // 0x1cb430: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x1cb430u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1cb434:
    // 0x1cb434: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1cb434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cb438:
    // 0x1cb438: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1cb438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cb43c:
    // 0x1cb43c: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1cb43cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1cb440:
    // 0x1cb440: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1cb440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1cb444:
    // 0x1cb444: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1cb444u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb448:
    // 0x1cb448: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x1cb448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1cb44c:
    // 0x1cb44c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1cb44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1cb450:
    // 0x1cb450: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1cb450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1cb454:
    // 0x1cb454: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1cb454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cb458:
    // 0x1cb458: 0xa0690000  sb          $t1, 0x0($v1)
    ctx->pc = 0x1cb458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
label_1cb45c:
    // 0x1cb45c: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x1cb45cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_1cb460:
    // 0x1cb460: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1cb460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1cb464:
    // 0x1cb464: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1cb464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1cb468:
    // 0x1cb468: 0x24c64944  addiu       $a2, $a2, 0x4944
    ctx->pc = 0x1cb468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18756));
label_1cb46c:
    // 0x1cb46c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cb46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1cb470:
    // 0x1cb470: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cb470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1cb474:
    // 0x1cb474: 0xc34021  addu        $t0, $a2, $v1
    ctx->pc = 0x1cb474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1cb478:
    // 0x1cb478: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1cb478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1cb47c:
    // 0x1cb47c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1cb47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1cb480:
    // 0x1cb480: 0x28e12710  slti        $at, $a3, 0x2710
    ctx->pc = 0x1cb480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1cb484:
    // 0x1cb484: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1cb488:
    if (ctx->pc == 0x1CB488u) {
        ctx->pc = 0x1CB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB484u;
        // 0x1cb488: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB48Cu;
        goto label_1cb48c;
    }
    ctx->pc = 0x1CB484u;
    {
        const bool branch_taken_0x1cb484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB484u;
        // 0x1cb488: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb484) {
            ctx->pc = 0x1CB4B8u;
            goto label_1cb4b8;
        }
    }
    ctx->pc = 0x1CB48Cu;
label_1cb48c:
    // 0x1cb48c: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x1cb48cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cb490:
    // 0x1cb490: 0x0  nop
    ctx->pc = 0x1cb490u;
    // NOP
label_1cb494:
    // 0x1cb494: 0x0  nop
    ctx->pc = 0x1cb494u;
    // NOP
label_1cb498:
    // 0x1cb498: 0x3010  mfhi        $a2
    ctx->pc = 0x1cb498u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1cb49c:
    // 0x1cb49c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_1cb4a0:
    if (ctx->pc == 0x1CB4A0u) {
        ctx->pc = 0x1CB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB49Cu;
        // 0x1cb4a0: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB4A4u;
        goto label_1cb4a4;
    }
    ctx->pc = 0x1CB49Cu;
    {
        const bool branch_taken_0x1cb49c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB49Cu;
        // 0x1cb4a0: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb49c) {
            ctx->pc = 0x1CB4B8u;
            goto label_1cb4b8;
        }
    }
    ctx->pc = 0x1CB4A4u;
label_1cb4a4:
    // 0x1cb4a4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1cb4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1cb4a8:
    // 0x1cb4a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb4ac:
    // 0x1cb4ac: 0x24c64948  addiu       $a2, $a2, 0x4948
    ctx->pc = 0x1cb4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18760));
label_1cb4b0:
    // 0x1cb4b0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cb4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1cb4b4:
    // 0x1cb4b4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1cb4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_1cb4b8:
    // 0x1cb4b8: 0x90a70232  lbu         $a3, 0x232($a1)
    ctx->pc = 0x1cb4b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_1cb4bc:
    // 0x1cb4bc: 0x28e10006  slti        $at, $a3, 0x6
    ctx->pc = 0x1cb4bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cb4c0:
    // 0x1cb4c0: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_1cb4c4:
    if (ctx->pc == 0x1CB4C4u) {
        ctx->pc = 0x1CB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C0u;
        // 0x1cb4c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB4C8u;
        goto label_1cb4c8;
    }
    ctx->pc = 0x1CB4C0u;
    {
        const bool branch_taken_0x1cb4c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C0u;
        // 0x1cb4c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4c0) {
            ctx->pc = 0x1CB58Cu;
            goto label_1cb58c;
        }
    }
    ctx->pc = 0x1CB4C8u;
label_1cb4c8:
    // 0x1cb4c8: 0x10e60030  beq         $a3, $a2, . + 4 + (0x30 << 2)
label_1cb4cc:
    if (ctx->pc == 0x1CB4CCu) {
        ctx->pc = 0x1CB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C8u;
        // 0x1cb4cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB4D0u;
        goto label_1cb4d0;
    }
    ctx->pc = 0x1CB4C8u;
    {
        const bool branch_taken_0x1cb4c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1CB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB4C8u;
        // 0x1cb4cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb4c8) {
            ctx->pc = 0x1CB58Cu;
            goto label_1cb58c;
        }
    }
    ctx->pc = 0x1CB4D0u;
label_1cb4d0:
    // 0x1cb4d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1cb4d4:
    // 0x1cb4d4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1cb4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cb4d8:
    // 0x1cb4d8: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1cb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1cb4dc:
    // 0x1cb4dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb4e0:
    // 0x1cb4e0: 0x24480000  addiu       $t0, $v0, 0x0
    ctx->pc = 0x1cb4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cb4e4:
    // 0x1cb4e4: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x1cb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1cb4e8:
    // 0x1cb4e8: 0x90473630  lbu         $a3, 0x3630($v0)
    ctx->pc = 0x1cb4e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13872)));
label_1cb4ec:
    // 0x1cb4ec: 0x14e60009  bne         $a3, $a2, . + 4 + (0x9 << 2)
label_1cb4f0:
    if (ctx->pc == 0x1CB4F0u) {
        ctx->pc = 0x1CB4F4u;
        goto label_1cb4f4;
    }
    ctx->pc = 0x1CB4ECu;
    {
        const bool branch_taken_0x1cb4ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1cb4ec) {
            ctx->pc = 0x1CB514u;
            goto label_1cb514;
        }
    }
    ctx->pc = 0x1CB4F4u;
label_1cb4f4:
    // 0x1cb4f4: 0x90a50241  lbu         $a1, 0x241($a1)
    ctx->pc = 0x1cb4f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 577)));
label_1cb4f8:
    // 0x1cb4f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1cb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1cb4fc:
    // 0x1cb4fc: 0x24424930  addiu       $v0, $v0, 0x4930
    ctx->pc = 0x1cb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18736));
label_1cb500:
    // 0x1cb500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb504:
    // 0x1cb504: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cb508:
    // 0x1cb508: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1cb508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1cb50c:
    // 0x1cb50c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cb510:
    if (ctx->pc == 0x1CB510u) {
        ctx->pc = 0x1CB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB50Cu;
        // 0x1cb510: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB514u;
        goto label_1cb514;
    }
    ctx->pc = 0x1CB50Cu;
    {
        const bool branch_taken_0x1cb50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB50Cu;
        // 0x1cb510: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb50c) {
            ctx->pc = 0x1CB530u;
            goto label_1cb530;
        }
    }
    ctx->pc = 0x1CB514u;
label_1cb514:
    // 0x1cb514: 0x90a20241  lbu         $v0, 0x241($a1)
    ctx->pc = 0x1cb514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 577)));
label_1cb518:
    // 0x1cb518: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
label_1cb51c:
    if (ctx->pc == 0x1CB51Cu) {
        ctx->pc = 0x1CB520u;
        goto label_1cb520;
    }
    ctx->pc = 0x1CB518u;
    {
        const bool branch_taken_0x1cb518 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb518) {
            ctx->pc = 0x1CB530u;
            goto label_1cb530;
        }
    }
    ctx->pc = 0x1CB520u;
label_1cb520:
    // 0x1cb520: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cb520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1cb524:
    // 0x1cb524: 0x29220014  slti        $v0, $t1, 0x14
    ctx->pc = 0x1cb524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)20) ? 1 : 0);
label_1cb528:
    // 0x1cb528: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1cb52c:
    if (ctx->pc == 0x1CB52Cu) {
        ctx->pc = 0x1CB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB528u;
        // 0x1cb52c: 0x1091021  addu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB530u;
        goto label_1cb530;
    }
    ctx->pc = 0x1CB528u;
    {
        const bool branch_taken_0x1cb528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB528u;
        // 0x1cb52c: 0x1091021  addu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb528) {
            ctx->pc = 0x1CB4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb4e8;
        }
    }
    ctx->pc = 0x1CB530u;
label_1cb530:
    // 0x1cb530: 0x908a0234  lbu         $t2, 0x234($a0)
    ctx->pc = 0x1cb530u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
label_1cb534:
    // 0x1cb534: 0x90830239  lbu         $v1, 0x239($a0)
    ctx->pc = 0x1cb534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 569)));
label_1cb538:
    // 0x1cb538: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1cb538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_1cb53c:
    // 0x1cb53c: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x1cb53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_1cb540:
    // 0x1cb540: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1cb544:
    // 0x1cb544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb548:
    // 0x1cb548: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb54c:
    // 0x1cb54c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb54cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb550:
    // 0x1cb550: 0xa1200  sll         $v0, $t2, 8
    ctx->pc = 0x1cb550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_1cb554:
    // 0x1cb554: 0x4a2023  subu        $a0, $v0, $t2
    ctx->pc = 0x1cb554u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1cb558:
    // 0x1cb558: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1cb558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb55c:
    // 0x1cb55c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb560:
    // 0x1cb560: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1cb560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cb564:
    // 0x1cb564: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1cb564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cb568:
    // 0x1cb568: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cb568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cb56c:
    // 0x1cb56c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1cb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cb570:
    // 0x1cb570: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1cb574:
    // 0x1cb574: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cb574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cb578:
    // 0x1cb578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb57c:
    // 0x1cb57c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb580:
    // 0x1cb580: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1cb580u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1cb584:
    // 0x1cb584: 0xc05d3e4  jal         func_174F90
label_1cb588:
    if (ctx->pc == 0x1CB588u) {
        ctx->pc = 0x1CB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB584u;
        // 0x1cb588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB58Cu;
        goto label_1cb58c;
    }
    ctx->pc = 0x1CB584u;
    SET_GPR_U32(ctx, 31, 0x1CB58Cu);
    ctx->pc = 0x1CB588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB584u;
    // 0x1cb588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    { ctx->pc = 0x174f90; return; }
    ctx->pc = 0x1CB58Cu;
label_1cb58c:
    // 0x1cb58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb590:
    // 0x1cb590: 0x3e00008  jr          $ra
label_1cb594:
    if (ctx->pc == 0x1CB594u) {
        ctx->pc = 0x1CB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB590u;
        // 0x1cb594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB598u;
        goto label_1cb598;
    }
    ctx->pc = 0x1CB590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB590u;
        // 0x1cb594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB598u;
label_1cb598:
    // 0x1cb598: 0x0  nop
    ctx->pc = 0x1cb598u;
    // NOP
label_1cb59c:
    // 0x1cb59c: 0x0  nop
    ctx->pc = 0x1cb59cu;
    // NOP
label_1cb5a0:
    // 0x1cb5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cb5a4:
    // 0x1cb5a4: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x1cb5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_1cb5a8:
    // 0x1cb5a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cb5ac:
    // 0x1cb5ac: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x1cb5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
label_1cb5b0:
    // 0x1cb5b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cb5b4:
    // 0x1cb5b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cb5b8:
    // 0x1cb5b8: 0x908a0034  lbu         $t2, 0x34($a0)
    ctx->pc = 0x1cb5b8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_1cb5bc:
    // 0x1cb5bc: 0x90860038  lbu         $a2, 0x38($a0)
    ctx->pc = 0x1cb5bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_1cb5c0:
    // 0x1cb5c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cb5c4:
    // 0x1cb5c4: 0x39490001  xori        $t1, $t2, 0x1
    ctx->pc = 0x1cb5c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)1);
label_1cb5c8:
    // 0x1cb5c8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1cb5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cb5cc:
    // 0x1cb5cc: 0x94200  sll         $t0, $t1, 8
    ctx->pc = 0x1cb5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1cb5d0:
    // 0x1cb5d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cb5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1cb5d4:
    // 0x1cb5d4: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1cb5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1cb5d8:
    // 0x1cb5d8: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x1cb5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cb5dc:
    // 0x1cb5dc: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1cb5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1cb5e0:
    // 0x1cb5e0: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x1cb5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1cb5e4:
    // 0x1cb5e4: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1cb5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1cb5e8:
    // 0x1cb5e8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1cb5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cb5ec:
    // 0x1cb5ec: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1cb5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1cb5f0:
    // 0x1cb5f0: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x1cb5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1cb5f4:
    // 0x1cb5f4: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_1cb5f8:
    if (ctx->pc == 0x1CB5F8u) {
        ctx->pc = 0x1CB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5F4u;
        // 0x1cb5f8: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB5FCu;
        goto label_1cb5fc;
    }
    ctx->pc = 0x1CB5F4u;
    {
        const bool branch_taken_0x1cb5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5F4u;
        // 0x1cb5f8: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5f4) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB5FCu;
label_1cb5fc:
    // 0x1cb5fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cb600:
    // 0x1cb600: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1cb600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1cb604:
    // 0x1cb604: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
label_1cb608:
    if (ctx->pc == 0x1CB608u) {
        ctx->pc = 0x1CB60Cu;
        goto label_1cb60c;
    }
    ctx->pc = 0x1CB604u;
    {
        const bool branch_taken_0x1cb604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb604) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB60Cu;
label_1cb60c:
    // 0x1cb60c: 0x9089003e  lbu         $t1, 0x3E($a0)
    ctx->pc = 0x1cb60cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 62)));
label_1cb610:
    // 0x1cb610: 0x314700ff  andi        $a3, $t2, 0xFF
    ctx->pc = 0x1cb610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_1cb614:
    // 0x1cb614: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1cb614u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1cb618:
    // 0x1cb618: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1cb618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1cb61c:
    // 0x1cb61c: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x1cb61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1cb620:
    // 0x1cb620: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1cb620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1cb624:
    // 0x1cb624: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1cb624u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1cb628:
    // 0x1cb628: 0x90aa003e  lbu         $t2, 0x3E($a1)
    ctx->pc = 0x1cb628u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 62)));
label_1cb62c:
    // 0x1cb62c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1cb62cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1cb630:
    // 0x1cb630: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cb630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb634:
    // 0x1cb634: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1cb634u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1cb638:
    // 0x1cb638: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x1cb638u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_1cb63c:
    // 0x1cb63c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1cb63cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1cb640:
    // 0x1cb640: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1cb640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1cb644:
    // 0x1cb644: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x1cb644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
label_1cb648:
    // 0x1cb648: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x1cb648u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1cb64c:
    // 0x1cb64c: 0xe88021  addu        $s0, $a3, $t0
    ctx->pc = 0x1cb64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1cb650:
    // 0x1cb650: 0x1463004  sllv        $a2, $a2, $t2
    ctx->pc = 0x1cb650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 10) & 0x1F));
label_1cb654:
    // 0x1cb654: 0x8e090234  lw          $t1, 0x234($s0)
    ctx->pc = 0x1cb654u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_1cb658:
    // 0x1cb658: 0x1263824  and         $a3, $t1, $a2
    ctx->pc = 0x1cb658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
label_1cb65c:
    // 0x1cb65c: 0x14e00039  bnez        $a3, . + 4 + (0x39 << 2)
label_1cb660:
    if (ctx->pc == 0x1CB660u) {
        ctx->pc = 0x1CB664u;
        goto label_1cb664;
    }
    ctx->pc = 0x1CB65Cu;
    {
        const bool branch_taken_0x1cb65c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb65c) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB664u;
label_1cb664:
    // 0x1cb664: 0x92070222  lbu         $a3, 0x222($s0)
    ctx->pc = 0x1cb664u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 546)));
label_1cb668:
    // 0x1cb668: 0x14e00036  bnez        $a3, . + 4 + (0x36 << 2)
label_1cb66c:
    if (ctx->pc == 0x1CB66Cu) {
        ctx->pc = 0x1CB670u;
        goto label_1cb670;
    }
    ctx->pc = 0x1CB668u;
    {
        const bool branch_taken_0x1cb668 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb668) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB670u;
label_1cb670:
    // 0x1cb670: 0x90a80034  lbu         $t0, 0x34($a1)
    ctx->pc = 0x1cb670u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 52)));
label_1cb674:
    // 0x1cb674: 0x314700ff  andi        $a3, $t2, 0xFF
    ctx->pc = 0x1cb674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_1cb678:
    // 0x1cb678: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x1cb678u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1cb67c:
    // 0x1cb67c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1cb67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1cb680:
    // 0x1cb680: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x1cb680u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1cb684:
    // 0x1cb684: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1cb684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_1cb688:
    // 0x1cb688: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x1cb688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1cb68c:
    // 0x1cb68c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1cb68cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1cb690:
    // 0x1cb690: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1cb690u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1cb694:
    // 0x1cb694: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1cb694u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1cb698:
    // 0x1cb698: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cb698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1cb69c:
    // 0x1cb69c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1cb69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1cb6a0:
    // 0x1cb6a0: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x1cb6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cb6a4:
    // 0x1cb6a4: 0x92230222  lbu         $v1, 0x222($s1)
    ctx->pc = 0x1cb6a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 546)));
label_1cb6a8:
    // 0x1cb6a8: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_1cb6ac:
    if (ctx->pc == 0x1CB6ACu) {
        ctx->pc = 0x1CB6B0u;
        goto label_1cb6b0;
    }
    ctx->pc = 0x1CB6A8u;
    {
        const bool branch_taken_0x1cb6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6a8) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB6B0u;
label_1cb6b0:
    // 0x1cb6b0: 0x1261825  or          $v1, $t1, $a2
    ctx->pc = 0x1cb6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
label_1cb6b4:
    // 0x1cb6b4: 0xae030234  sw          $v1, 0x234($s0)
    ctx->pc = 0x1cb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 3));
label_1cb6b8:
    // 0x1cb6b8: 0x9203021f  lbu         $v1, 0x21F($s0)
    ctx->pc = 0x1cb6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 543)));
label_1cb6bc:
    // 0x1cb6bc: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_1cb6c0:
    if (ctx->pc == 0x1CB6C0u) {
        ctx->pc = 0x1CB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6BCu;
        // 0x1cb6c0: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB6C4u;
        goto label_1cb6c4;
    }
    ctx->pc = 0x1CB6BCu;
    {
        const bool branch_taken_0x1cb6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6BCu;
        // 0x1cb6c0: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6bc) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB6C4u;
label_1cb6c4:
    // 0x1cb6c4: 0x842351ee  lh          $v1, 0x51EE($at)
    ctx->pc = 0x1cb6c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20974)));
label_1cb6c8:
    // 0x1cb6c8: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1cb6c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1cb6cc:
    // 0x1cb6cc: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_1cb6d0:
    if (ctx->pc == 0x1CB6D0u) {
        ctx->pc = 0x1CB6D4u;
        goto label_1cb6d4;
    }
    ctx->pc = 0x1CB6CCu;
    {
        const bool branch_taken_0x1cb6cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6cc) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB6D4u;
label_1cb6d4:
    // 0x1cb6d4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1cb6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb6d8:
    // 0x1cb6d8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1cb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1cb6dc:
    // 0x1cb6dc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1cb6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb6e0:
    // 0x1cb6e0: 0x3446851f  ori         $a2, $v0, 0x851F
    ctx->pc = 0x1cb6e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1cb6e4:
    // 0x1cb6e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb6e8:
    // 0x1cb6e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb6e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb6ec:
    // 0x1cb6ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb6ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb6f0:
    // 0x1cb6f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb6f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1cb6f4:
    // 0x1cb6f4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1cb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1cb6f8:
    // 0x1cb6f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1cb6f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cb6fc:
    // 0x1cb6fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb6fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cb700:
    // 0x1cb700: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1cb700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cb704:
    // 0x1cb704: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x1cb704u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1cb708:
    // 0x1cb708: 0x0  nop
    ctx->pc = 0x1cb708u;
    // NOP
label_1cb70c:
    // 0x1cb70c: 0x1810  mfhi        $v1
    ctx->pc = 0x1cb70cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cb710:
    // 0x1cb710: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cb710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cb714:
    // 0x1cb714: 0x0  nop
    ctx->pc = 0x1cb714u;
    // NOP
label_1cb718:
    // 0x1cb718: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1cb718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cb71c:
    // 0x1cb71c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1cb71cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1cb720:
    // 0x1cb720: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1cb720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cb724:
    // 0x1cb724: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1cb724u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1cb728:
    // 0x1cb728: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb728u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb72c:
    // 0x1cb72c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1cb72cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1cb730:
    // 0x1cb730: 0xc05d3e4  jal         func_174F90
label_1cb734:
    if (ctx->pc == 0x1CB734u) {
        ctx->pc = 0x1CB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB730u;
        // 0x1cb734: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB738u;
        goto label_1cb738;
    }
    ctx->pc = 0x1CB730u;
    SET_GPR_U32(ctx, 31, 0x1CB738u);
    ctx->pc = 0x1CB734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB730u;
    // 0x1cb734: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    { ctx->pc = 0x174f90; return; }
    ctx->pc = 0x1CB738u;
label_1cb738:
    // 0x1cb738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb73c:
    // 0x1cb73c: 0xc072e1c  jal         func_1CB870
label_1cb740:
    if (ctx->pc == 0x1CB740u) {
        ctx->pc = 0x1CB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB73Cu;
        // 0x1cb740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB744u;
        goto label_1cb744;
    }
    ctx->pc = 0x1CB73Cu;
    SET_GPR_U32(ctx, 31, 0x1CB744u);
    ctx->pc = 0x1CB740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB73Cu;
    // 0x1cb740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB870u;
    goto label_1cb870;
    ctx->pc = 0x1CB744u;
label_1cb744:
    // 0x1cb744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb748:
    // 0x1cb748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb74c:
    // 0x1cb74c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb750:
    // 0x1cb750: 0x3e00008  jr          $ra
label_1cb754:
    if (ctx->pc == 0x1CB754u) {
        ctx->pc = 0x1CB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB750u;
        // 0x1cb754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB758u;
        goto label_1cb758;
    }
    ctx->pc = 0x1CB750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB750u;
        // 0x1cb754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB758u;
label_1cb758:
    // 0x1cb758: 0x0  nop
    ctx->pc = 0x1cb758u;
    // NOP
label_1cb75c:
    // 0x1cb75c: 0x0  nop
    ctx->pc = 0x1cb75cu;
    // NOP
label_1cb760:
    // 0x1cb760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cb760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1cb764:
    // 0x1cb764: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1cb764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1cb768:
    // 0x1cb768: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cb768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1cb76c:
    // 0x1cb76c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cb76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1cb770:
    // 0x1cb770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cb774:
    // 0x1cb774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cb778:
    // 0x1cb778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cb77c:
    // 0x1cb77c: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1cb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1cb780:
    // 0x1cb780: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1cb784:
    if (ctx->pc == 0x1CB784u) {
        ctx->pc = 0x1CB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB780u;
        // 0x1cb784: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB788u;
        goto label_1cb788;
    }
    ctx->pc = 0x1CB780u;
    {
        const bool branch_taken_0x1cb780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB780u;
        // 0x1cb784: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb780) {
            ctx->pc = 0x1CB78Cu;
            goto label_1cb78c;
        }
    }
    ctx->pc = 0x1CB788u;
label_1cb788:
    // 0x1cb788: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1cb788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb78c:
    // 0x1cb78c: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x1cb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1cb790:
    // 0x1cb790: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1cb790u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1cb794:
    // 0x1cb794: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x1cb794u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cb798:
    // 0x1cb798: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x1cb798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cb79c:
    // 0x1cb79c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1cb79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cb7a0:
    // 0x1cb7a0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1cb7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_1cb7a4:
    // 0x1cb7a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cb7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cb7a8:
    // 0x1cb7a8: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x1cb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_1cb7ac:
    // 0x1cb7ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb7b0:
    // 0x1cb7b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cb7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb7b4:
    // 0x1cb7b4: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1cb7b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb7b8:
    // 0x1cb7b8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1cb7bc:
    if (ctx->pc == 0x1CB7BCu) {
        ctx->pc = 0x1CB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7B8u;
        // 0x1cb7bc: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB7C0u;
        goto label_1cb7c0;
    }
    ctx->pc = 0x1CB7B8u;
    {
        const bool branch_taken_0x1cb7b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7B8u;
        // 0x1cb7bc: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7b8) {
            ctx->pc = 0x1CB7FCu;
            goto label_1cb7fc;
        }
    }
    ctx->pc = 0x1CB7C0u;
label_1cb7c0:
    // 0x1cb7c0: 0xc04485c  jal         func_112170
label_1cb7c4:
    if (ctx->pc == 0x1CB7C4u) {
        ctx->pc = 0x1CB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7C0u;
        // 0x1cb7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB7C8u;
        goto label_1cb7c8;
    }
    ctx->pc = 0x1CB7C0u;
    SET_GPR_U32(ctx, 31, 0x1CB7C8u);
    ctx->pc = 0x1CB7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7C0u;
    // 0x1cb7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x1CB7C0u, 0x1CB7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7C8u;
label_1cb7c8:
    // 0x1cb7c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1cb7cc:
    if (ctx->pc == 0x1CB7CCu) {
        ctx->pc = 0x1CB7D0u;
        goto label_1cb7d0;
    }
    ctx->pc = 0x1CB7C8u;
    {
        const bool branch_taken_0x1cb7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7c8) {
            ctx->pc = 0x1CB7ECu;
            goto label_1cb7ec;
        }
    }
    ctx->pc = 0x1CB7D0u;
label_1cb7d0:
    // 0x1cb7d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb7d4:
    // 0x1cb7d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cb7d8:
    // 0x1cb7d8: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1cb7d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1cb7dc:
    // 0x1cb7dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1cb7e0:
    if (ctx->pc == 0x1CB7E0u) {
        ctx->pc = 0x1CB7E4u;
        goto label_1cb7e4;
    }
    ctx->pc = 0x1CB7DCu;
    {
        const bool branch_taken_0x1cb7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb7dc) {
            ctx->pc = 0x1CB7ECu;
            goto label_1cb7ec;
        }
    }
    ctx->pc = 0x1CB7E4u;
label_1cb7e4:
    // 0x1cb7e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1cb7e8:
    if (ctx->pc == 0x1CB7E8u) {
        ctx->pc = 0x1CB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7E4u;
        // 0x1cb7e8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB7ECu;
        goto label_1cb7ec;
    }
    ctx->pc = 0x1CB7E4u;
    {
        const bool branch_taken_0x1cb7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7E4u;
        // 0x1cb7e8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7e4) {
            ctx->pc = 0x1CB7FCu;
            goto label_1cb7fc;
        }
    }
    ctx->pc = 0x1CB7ECu;
label_1cb7ec:
    // 0x1cb7ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cb7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cb7f0:
    // 0x1cb7f0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1cb7f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1cb7f4:
    // 0x1cb7f4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1cb7f8:
    if (ctx->pc == 0x1CB7F8u) {
        ctx->pc = 0x1CB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7F4u;
        // 0x1cb7f8: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB7FCu;
        goto label_1cb7fc;
    }
    ctx->pc = 0x1CB7F4u;
    {
        const bool branch_taken_0x1cb7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7F4u;
        // 0x1cb7f8: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7f4) {
            ctx->pc = 0x1CB7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb7c0;
        }
    }
    ctx->pc = 0x1CB7FCu;
label_1cb7fc:
    // 0x1cb7fc: 0x0  nop
    ctx->pc = 0x1cb7fcu;
    // NOP
label_1cb800:
    // 0x1cb800: 0x16130011  bne         $s0, $s3, . + 4 + (0x11 << 2)
label_1cb804:
    if (ctx->pc == 0x1CB804u) {
        ctx->pc = 0x1CB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB800u;
        // 0x1cb804: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB808u;
        goto label_1cb808;
    }
    ctx->pc = 0x1CB800u;
    {
        const bool branch_taken_0x1cb800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x1CB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB800u;
        // 0x1cb804: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb800) {
            ctx->pc = 0x1CB848u;
            goto label_1cb848;
        }
    }
    ctx->pc = 0x1CB808u;
label_1cb808:
    // 0x1cb808: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_1cb80c:
    if (ctx->pc == 0x1CB80Cu) {
        ctx->pc = 0x1CB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB808u;
        // 0x1cb80c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB810u;
        goto label_1cb810;
    }
    ctx->pc = 0x1CB808u;
    {
        const bool branch_taken_0x1cb808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB808u;
        // 0x1cb80c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb808) {
            ctx->pc = 0x1CB848u;
            goto label_1cb848;
        }
    }
    ctx->pc = 0x1CB810u;
label_1cb810:
    // 0x1cb810: 0xc04485c  jal         func_112170
label_1cb814:
    if (ctx->pc == 0x1CB814u) {
        ctx->pc = 0x1CB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB810u;
        // 0x1cb814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB818u;
        goto label_1cb818;
    }
    ctx->pc = 0x1CB810u;
    SET_GPR_U32(ctx, 31, 0x1CB818u);
    ctx->pc = 0x1CB814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB810u;
    // 0x1cb814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x1CB810u, 0x1CB818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB818u;
label_1cb818:
    // 0x1cb818: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1cb81c:
    if (ctx->pc == 0x1CB81Cu) {
        ctx->pc = 0x1CB820u;
        goto label_1cb820;
    }
    ctx->pc = 0x1CB818u;
    {
        const bool branch_taken_0x1cb818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb818) {
            ctx->pc = 0x1CB838u;
            goto label_1cb838;
        }
    }
    ctx->pc = 0x1CB820u;
label_1cb820:
    // 0x1cb820: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1cb820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1cb824:
    // 0x1cb824: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1cb824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1cb828:
    // 0x1cb828: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1cb82c:
    if (ctx->pc == 0x1CB82Cu) {
        ctx->pc = 0x1CB830u;
        goto label_1cb830;
    }
    ctx->pc = 0x1CB828u;
    {
        const bool branch_taken_0x1cb828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb828) {
            ctx->pc = 0x1CB838u;
            goto label_1cb838;
        }
    }
    ctx->pc = 0x1CB830u;
label_1cb830:
    // 0x1cb830: 0x10000005  b           . + 4 + (0x5 << 2)
label_1cb834:
    if (ctx->pc == 0x1CB834u) {
        ctx->pc = 0x1CB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB830u;
        // 0x1cb834: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB838u;
        goto label_1cb838;
    }
    ctx->pc = 0x1CB830u;
    {
        const bool branch_taken_0x1cb830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB830u;
        // 0x1cb834: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb830) {
            ctx->pc = 0x1CB848u;
            goto label_1cb848;
        }
    }
    ctx->pc = 0x1CB838u;
label_1cb838:
    // 0x1cb838: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cb838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cb83c:
    // 0x1cb83c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1cb83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1cb840:
    // 0x1cb840: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1cb844:
    if (ctx->pc == 0x1CB844u) {
        ctx->pc = 0x1CB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB840u;
        // 0x1cb844: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB848u;
        goto label_1cb848;
    }
    ctx->pc = 0x1CB840u;
    {
        const bool branch_taken_0x1cb840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB840u;
        // 0x1cb844: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb840) {
            ctx->pc = 0x1CB810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb810;
        }
    }
    ctx->pc = 0x1CB848u;
label_1cb848:
    // 0x1cb848: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1cb848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb84c:
    // 0x1cb84c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1cb84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1cb850:
    // 0x1cb850: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cb850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cb854:
    // 0x1cb854: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cb854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cb858:
    // 0x1cb858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cb858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb85c:
    // 0x1cb85c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb860:
    // 0x1cb860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb864:
    // 0x1cb864: 0x3e00008  jr          $ra
label_1cb868:
    if (ctx->pc == 0x1CB868u) {
        ctx->pc = 0x1CB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB864u;
        // 0x1cb868: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB86Cu;
        goto label_1cb86c;
    }
    ctx->pc = 0x1CB864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB864u;
        // 0x1cb868: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB86Cu;
label_1cb86c:
    // 0x1cb86c: 0x0  nop
    ctx->pc = 0x1cb86cu;
    // NOP
label_1cb870:
    // 0x1cb870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1cb874:
    // 0x1cb874: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x1cb874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_1cb878:
    // 0x1cb878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cb878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1cb87c:
    // 0x1cb87c: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x1cb87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
label_1cb880:
    // 0x1cb880: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cb880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1cb884:
    // 0x1cb884: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb888:
    // 0x1cb888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cb88c:
    // 0x1cb88c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cb88cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb890:
    // 0x1cb890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cb894:
    // 0x1cb894: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cb894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cb898:
    // 0x1cb898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cb89c:
    // 0x1cb89c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb89cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8a0:
    // 0x1cb8a0: 0x908a021f  lbu         $t2, 0x21F($a0)
    ctx->pc = 0x1cb8a0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 543)));
label_1cb8a4:
    // 0x1cb8a4: 0x90860220  lbu         $a2, 0x220($a0)
    ctx->pc = 0x1cb8a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_1cb8a8:
    // 0x1cb8a8: 0x90a30220  lbu         $v1, 0x220($a1)
    ctx->pc = 0x1cb8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 544)));
label_1cb8ac:
    // 0x1cb8ac: 0xa1200  sll         $v0, $t2, 8
    ctx->pc = 0x1cb8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_1cb8b0:
    // 0x1cb8b0: 0x90a4021f  lbu         $a0, 0x21F($a1)
    ctx->pc = 0x1cb8b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 543)));
label_1cb8b4:
    // 0x1cb8b4: 0x4a5023  subu        $t2, $v0, $t2
    ctx->pc = 0x1cb8b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1cb8b8:
    // 0x1cb8b8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1cb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cb8bc:
    // 0x1cb8bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cb8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1cb8c0:
    // 0x1cb8c0: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1cb8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cb8c4:
    // 0x1cb8c4: 0xa28c0  sll         $a1, $t2, 3
    ctx->pc = 0x1cb8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1cb8c8:
    // 0x1cb8c8: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x1cb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1cb8cc:
    // 0x1cb8cc: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x1cb8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_1cb8d0:
    // 0x1cb8d0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x1cb8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cb8d4:
    // 0x1cb8d4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1cb8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cb8d8:
    // 0x1cb8d8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1cb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1cb8dc:
    // 0x1cb8dc: 0x24450000  addiu       $a1, $v0, 0x0
    ctx->pc = 0x1cb8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cb8e0:
    // 0x1cb8e0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1cb8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cb8e4:
    // 0x1cb8e4: 0xa68821  addu        $s1, $a1, $a2
    ctx->pc = 0x1cb8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1cb8e8:
    // 0x1cb8e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cb8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cb8ec:
    // 0x1cb8ec: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1cb8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb8f0:
    // 0x1cb8f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cb8f4:
    // 0x1cb8f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8f8:
    // 0x1cb8f8: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1cb8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1cb8fc:
    // 0x1cb8fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1cb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb900:
    // 0x1cb900: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cb900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb904:
    // 0x1cb904: 0x24820000  addiu       $v0, $a0, 0x0
    ctx->pc = 0x1cb904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1cb908:
    // 0x1cb908: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cb908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb90c:
    // 0x1cb90c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb910:
    // 0x1cb910: 0x94d0000a  lhu         $s0, 0xA($a2)
    ctx->pc = 0x1cb910u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1cb914:
    // 0x1cb914: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cb914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb918:
    // 0x1cb918: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb91c:
    // 0x1cb91c: 0x9447000a  lhu         $a3, 0xA($v0)
    ctx->pc = 0x1cb91cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1cb920:
    // 0x1cb920: 0xc05d3e4  jal         func_174F90
label_1cb924:
    if (ctx->pc == 0x1CB924u) {
        ctx->pc = 0x1CB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB920u;
        // 0x1cb924: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB928u;
        goto label_1cb928;
    }
    ctx->pc = 0x1CB920u;
    SET_GPR_U32(ctx, 31, 0x1CB928u);
    ctx->pc = 0x1CB924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB920u;
    // 0x1cb924: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    { ctx->pc = 0x174f90; return; }
    ctx->pc = 0x1CB928u;
label_1cb928:
    // 0x1cb928: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb92c:
    // 0x1cb92c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1cb92cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1cb930:
    // 0x1cb930: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
label_1cb934:
    if (ctx->pc == 0x1CB934u) {
        ctx->pc = 0x1CB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB930u;
        // 0x1cb934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB938u;
        goto label_1cb938;
    }
    ctx->pc = 0x1CB930u;
    {
        const bool branch_taken_0x1cb930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB930u;
        // 0x1cb934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb930) {
            ctx->pc = 0x1CBB08u;
            goto label_1cbb08;
        }
    }
    ctx->pc = 0x1CB938u;
label_1cb938:
    // 0x1cb938: 0xc0564ec  jal         func_1593B0
label_1cb93c:
    if (ctx->pc == 0x1CB93Cu) {
        ctx->pc = 0x1CB940u;
        goto label_1cb940;
    }
    ctx->pc = 0x1CB938u;
    SET_GPR_U32(ctx, 31, 0x1CB940u);
    ctx->pc = 0x1593B0u;
    { ctx->pc = 0x1593b0; return; }
    ctx->pc = 0x1CB940u;
label_1cb940:
    // 0x1cb940: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb944:
    // 0x1cb944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb948:
    // 0x1cb948: 0x1623001d  bne         $s1, $v1, . + 4 + (0x1D << 2)
label_1cb94c:
    if (ctx->pc == 0x1CB94Cu) {
        ctx->pc = 0x1CB94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB948u;
        // 0x1cb94c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB950u;
        goto label_1cb950;
    }
    ctx->pc = 0x1CB948u;
    {
        const bool branch_taken_0x1cb948 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CB94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB948u;
        // 0x1cb94c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb948) {
            ctx->pc = 0x1CB9C0u;
            goto label_1cb9c0;
        }
    }
    ctx->pc = 0x1CB950u;
label_1cb950:
    // 0x1cb950: 0xc0564ec  jal         func_1593B0
label_1cb954:
    if (ctx->pc == 0x1CB954u) {
        ctx->pc = 0x1CB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB950u;
        // 0x1cb954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB958u;
        goto label_1cb958;
    }
    ctx->pc = 0x1CB950u;
    SET_GPR_U32(ctx, 31, 0x1CB958u);
    ctx->pc = 0x1CB954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB950u;
    // 0x1cb954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593B0u;
    { ctx->pc = 0x1593b0; return; }
    ctx->pc = 0x1CB958u;
label_1cb958:
    // 0x1cb958: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x1cb958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1cb95c:
    // 0x1cb95c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_1cb960:
    if (ctx->pc == 0x1CB960u) {
        ctx->pc = 0x1CB964u;
        goto label_1cb964;
    }
    ctx->pc = 0x1CB95Cu;
    {
        const bool branch_taken_0x1cb95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb95c) {
            ctx->pc = 0x1CB9BCu;
            goto label_1cb9bc;
        }
    }
    ctx->pc = 0x1CB964u;
label_1cb964:
    // 0x1cb964: 0xc08f0cc  jal         func_23C330
label_1cb968:
    if (ctx->pc == 0x1CB968u) {
        ctx->pc = 0x1CB96Cu;
        goto label_1cb96c;
    }
    ctx->pc = 0x1CB964u;
    SET_GPR_U32(ctx, 31, 0x1CB96Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CB96Cu;
label_1cb96c:
    // 0x1cb96c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cb96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cb970:
    // 0x1cb970: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1cb970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1cb974:
    // 0x1cb974: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cb974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb978:
    // 0x1cb978: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cb978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb97c:
    // 0x1cb97c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cb97cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cb980:
    // 0x1cb980: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb984:
    // 0x1cb984: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cb984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cb988:
    // 0x1cb988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb98c:
    // 0x1cb98c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb98cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb990:
    // 0x1cb990: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb994:
    // 0x1cb994: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cb994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cb998:
    // 0x1cb998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb99c:
    // 0x1cb99c: 0x0  nop
    ctx->pc = 0x1cb99cu;
    // NOP
label_1cb9a0:
    // 0x1cb9a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cb9a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cb9a4:
    // 0x1cb9a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb9a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cb9a8:
    // 0x1cb9a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cb9a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cb9ac:
    // 0x1cb9ac: 0xc05d3e4  jal         func_174F90
label_1cb9b0:
    if (ctx->pc == 0x1CB9B0u) {
        ctx->pc = 0x1CB9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9ACu;
        // 0x1cb9b0: 0x24450021  addiu       $a1, $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB9B4u;
        goto label_1cb9b4;
    }
    ctx->pc = 0x1CB9ACu;
    SET_GPR_U32(ctx, 31, 0x1CB9B4u);
    ctx->pc = 0x1CB9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9ACu;
    // 0x1cb9b0: 0x24450021  addiu       $a1, $v0, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    { ctx->pc = 0x174f90; return; }
    ctx->pc = 0x1CB9B4u;
label_1cb9b4:
    // 0x1cb9b4: 0x10000055  b           . + 4 + (0x55 << 2)
label_1cb9b8:
    if (ctx->pc == 0x1CB9B8u) {
        ctx->pc = 0x1CB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9B4u;
        // 0x1cb9b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB9BCu;
        goto label_1cb9bc;
    }
    ctx->pc = 0x1CB9B4u;
    {
        const bool branch_taken_0x1cb9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9B4u;
        // 0x1cb9b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9b4) {
            ctx->pc = 0x1CBB0Cu;
            goto label_1cbb0c;
        }
    }
    ctx->pc = 0x1CB9BCu;
label_1cb9bc:
    // 0x1cb9bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb9c0:
    // 0x1cb9c0: 0x1623002a  bne         $s1, $v1, . + 4 + (0x2A << 2)
label_1cb9c4:
    if (ctx->pc == 0x1CB9C4u) {
        ctx->pc = 0x1CB9C8u;
        goto label_1cb9c8;
    }
    ctx->pc = 0x1CB9C0u;
    {
        const bool branch_taken_0x1cb9c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb9c0) {
            ctx->pc = 0x1CBA6Cu;
            goto label_1cba6c;
        }
    }
    ctx->pc = 0x1CB9C8u;
label_1cb9c8:
    // 0x1cb9c8: 0x86640232  lh          $a0, 0x232($s3)
    ctx->pc = 0x1cb9c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 562)));
label_1cb9cc:
    // 0x1cb9cc: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1cb9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1cb9d0:
    // 0x1cb9d0: 0x3467851f  ori         $a3, $v1, 0x851F
    ctx->pc = 0x1cb9d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1cb9d4:
    // 0x1cb9d4: 0x86430232  lh          $v1, 0x232($s2)
    ctx->pc = 0x1cb9d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 562)));
label_1cb9d8:
    // 0x1cb9d8: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x1cb9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cb9dc:
    // 0x1cb9dc: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x1cb9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1cb9e0:
    // 0x1cb9e0: 0x0  nop
    ctx->pc = 0x1cb9e0u;
    // NOP
label_1cb9e4:
    // 0x1cb9e4: 0x2810  mfhi        $a1
    ctx->pc = 0x1cb9e4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1cb9e8:
    // 0x1cb9e8: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cb9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1cb9ec:
    // 0x1cb9ec: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x1cb9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cb9f0:
    // 0x1cb9f0: 0x51943  sra         $v1, $a1, 5
    ctx->pc = 0x1cb9f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
label_1cb9f4:
    // 0x1cb9f4: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1cb9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cb9f8:
    // 0x1cb9f8: 0x1810  mfhi        $v1
    ctx->pc = 0x1cb9f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cb9fc:
    // 0x1cb9fc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1cb9fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1cba00:
    // 0x1cba00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cba00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cba04:
    // 0x1cba04: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1cba04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cba08:
    // 0x1cba08: 0x2861ffff  slti        $at, $v1, -0x1
    ctx->pc = 0x1cba08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
label_1cba0c:
    // 0x1cba0c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_1cba10:
    if (ctx->pc == 0x1CBA10u) {
        ctx->pc = 0x1CBA14u;
        goto label_1cba14;
    }
    ctx->pc = 0x1CBA0Cu;
    {
        const bool branch_taken_0x1cba0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cba0c) {
            ctx->pc = 0x1CBA6Cu;
            goto label_1cba6c;
        }
    }
    ctx->pc = 0x1CBA14u;
label_1cba14:
    // 0x1cba14: 0xc08f0cc  jal         func_23C330
label_1cba18:
    if (ctx->pc == 0x1CBA18u) {
        ctx->pc = 0x1CBA1Cu;
        goto label_1cba1c;
    }
    ctx->pc = 0x1CBA14u;
    SET_GPR_U32(ctx, 31, 0x1CBA1Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CBA1Cu;
label_1cba1c:
    // 0x1cba1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cba1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cba20:
    // 0x1cba20: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1cba20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_1cba24:
    // 0x1cba24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cba24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cba28:
    // 0x1cba28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cba28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cba2c:
    // 0x1cba2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cba2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cba30:
    // 0x1cba30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cba30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cba34:
    // 0x1cba34: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cba34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cba38:
    // 0x1cba38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cba38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cba3c:
    // 0x1cba3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cba3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cba40:
    // 0x1cba40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cba40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cba44:
    // 0x1cba44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cba44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cba48:
    // 0x1cba48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cba48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cba4c:
    // 0x1cba4c: 0x0  nop
    ctx->pc = 0x1cba4cu;
    // NOP
label_1cba50:
    // 0x1cba50: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cba50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cba54:
    // 0x1cba54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cba54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cba58:
    // 0x1cba58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cba58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cba5c:
    // 0x1cba5c: 0xc05d3e4  jal         func_174F90
label_1cba60:
    if (ctx->pc == 0x1CBA60u) {
        ctx->pc = 0x1CBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA5Cu;
        // 0x1cba60: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBA64u;
        goto label_1cba64;
    }
    ctx->pc = 0x1CBA5Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA64u);
    ctx->pc = 0x1CBA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA5Cu;
    // 0x1cba60: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    { ctx->pc = 0x174f90; return; }
    ctx->pc = 0x1CBA64u;
label_1cba64:
    // 0x1cba64: 0x10000028  b           . + 4 + (0x28 << 2)
label_1cba68:
    if (ctx->pc == 0x1CBA68u) {
        ctx->pc = 0x1CBA6Cu;
        goto label_1cba6c;
    }
    ctx->pc = 0x1CBA64u;
    {
        const bool branch_taken_0x1cba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cba64) {
            ctx->pc = 0x1CBB08u;
            goto label_1cbb08;
        }
    }
    ctx->pc = 0x1CBA6Cu;
label_1cba6c:
    // 0x1cba6c: 0x86640232  lh          $a0, 0x232($s3)
    ctx->pc = 0x1cba6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 562)));
label_1cba70:
    // 0x1cba70: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1cba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1cba74:
    // 0x1cba74: 0x3467851f  ori         $a3, $v1, 0x851F
    ctx->pc = 0x1cba74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1cba78:
    // 0x1cba78: 0x86430232  lh          $v1, 0x232($s2)
    ctx->pc = 0x1cba78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 562)));
label_1cba7c:
    // 0x1cba7c: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x1cba7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cba80:
    // 0x1cba80: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x1cba80u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1cba84:
    // 0x1cba84: 0x0  nop
    ctx->pc = 0x1cba84u;
    // NOP
label_1cba88:
    // 0x1cba88: 0x2810  mfhi        $a1
    ctx->pc = 0x1cba88u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1cba8c:
    // 0x1cba8c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1cba90:
    // 0x1cba90: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x1cba90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cba94:
    // 0x1cba94: 0x51943  sra         $v1, $a1, 5
    ctx->pc = 0x1cba94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
label_1cba98:
    // 0x1cba98: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1cba98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cba9c:
    // 0x1cba9c: 0x1810  mfhi        $v1
    ctx->pc = 0x1cba9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cbaa0:
    // 0x1cbaa0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1cbaa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1cbaa4:
    // 0x1cbaa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cbaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cbaa8:
    // 0x1cbaa8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1cbaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cbaac:
    // 0x1cbaac: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1cbaacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cbab0:
    // 0x1cbab0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_1cbab4:
    if (ctx->pc == 0x1CBAB4u) {
        ctx->pc = 0x1CBAB8u;
        goto label_1cbab8;
    }
    ctx->pc = 0x1CBAB0u;
    {
        const bool branch_taken_0x1cbab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbab0) {
            ctx->pc = 0x1CBB08u;
            goto label_1cbb08;
        }
    }
    ctx->pc = 0x1CBAB8u;
label_1cbab8:
    // 0x1cbab8: 0xc08f0cc  jal         func_23C330
label_1cbabc:
    if (ctx->pc == 0x1CBABCu) {
        ctx->pc = 0x1CBAC0u;
        goto label_1cbac0;
    }
    ctx->pc = 0x1CBAB8u;
    SET_GPR_U32(ctx, 31, 0x1CBAC0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CBAC0u;
label_1cbac0:
    // 0x1cbac0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cbac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cbac4:
    // 0x1cbac4: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1cbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_1cbac8:
    // 0x1cbac8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cbac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cbacc:
    // 0x1cbacc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cbaccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbad0:
    // 0x1cbad0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cbad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cbad4:
    // 0x1cbad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cbad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbad8:
    // 0x1cbad8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cbadc:
    // 0x1cbadc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cbadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbae0:
    // 0x1cbae0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cbae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbae4:
    // 0x1cbae4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cbae4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbae8:
    // 0x1cbae8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cbae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cbaec:
    // 0x1cbaec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbaecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbaf0:
    // 0x1cbaf0: 0x0  nop
    ctx->pc = 0x1cbaf0u;
    // NOP
label_1cbaf4:
    // 0x1cbaf4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cbaf4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cbaf8:
    // 0x1cbaf8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cbaf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cbafc:
    // 0x1cbafc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cbafcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cbb00:
    // 0x1cbb00: 0xc05d3e4  jal         func_174F90
label_1cbb04:
    if (ctx->pc == 0x1CBB04u) {
        ctx->pc = 0x1CBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB00u;
        // 0x1cbb04: 0x24450026  addiu       $a1, $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBB08u;
        goto label_1cbb08;
    }
    ctx->pc = 0x1CBB00u;
    SET_GPR_U32(ctx, 31, 0x1CBB08u);
    ctx->pc = 0x1CBB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB00u;
    // 0x1cbb04: 0x24450026  addiu       $a1, $v0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    { ctx->pc = 0x174f90; return; }
    ctx->pc = 0x1CBB08u;
label_1cbb08:
    // 0x1cbb08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cbb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cbb0c:
    // 0x1cbb0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cbb0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cbb10:
    // 0x1cbb10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cbb10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbb14:
    // 0x1cbb14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cbb14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbb18:
    // 0x1cbb18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cbb18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbb1c:
    // 0x1cbb1c: 0x3e00008  jr          $ra
label_1cbb20:
    if (ctx->pc == 0x1CBB20u) {
        ctx->pc = 0x1CBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB1Cu;
        // 0x1cbb20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBB24u;
        goto label_1cbb24;
    }
    ctx->pc = 0x1CBB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB1Cu;
        // 0x1cbb20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBB24u;
label_1cbb24:
    // 0x1cbb24: 0x0  nop
    ctx->pc = 0x1cbb24u;
    // NOP
label_1cbb28:
    // 0x1cbb28: 0x0  nop
    ctx->pc = 0x1cbb28u;
    // NOP
label_1cbb2c:
    // 0x1cbb2c: 0x0  nop
    ctx->pc = 0x1cbb2cu;
    // NOP
label_1cbb30:
    // 0x1cbb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cbb34:
    // 0x1cbb34: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x1cbb34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
label_1cbb38:
    // 0x1cbb38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cbb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cbb3c:
    // 0x1cbb3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cbb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cbb40:
    // 0x1cbb40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cbb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cbb44:
    // 0x1cbb44: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cbb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb48:
    // 0x1cbb48: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_1cbb4c:
    if (ctx->pc == 0x1CBB4Cu) {
        ctx->pc = 0x1CBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB48u;
        // 0x1cbb4c: 0x24100039  addiu       $s0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBB50u;
        goto label_1cbb50;
    }
    ctx->pc = 0x1CBB48u;
    {
        const bool branch_taken_0x1cbb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB48u;
        // 0x1cbb4c: 0x24100039  addiu       $s0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb48) {
            ctx->pc = 0x1CBC30u;
            { ctx->pc = 0x1cbc30; return; }
        }
    }
    ctx->pc = 0x1CBB50u;
label_1cbb50:
    // 0x1cbb50: 0x28a1001c  slti        $at, $a1, 0x1C
    ctx->pc = 0x1cbb50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)28) ? 1 : 0);
label_1cbb54:
    // 0x1cbb54: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_1cbb58:
    if (ctx->pc == 0x1CBB58u) {
        ctx->pc = 0x1CBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB54u;
        // 0x1cbb58: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBB5Cu;
        goto label_1cbb5c;
    }
    ctx->pc = 0x1CBB54u;
    {
        const bool branch_taken_0x1cbb54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB54u;
        // 0x1cbb58: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb54) {
            ctx->pc = 0x1CBC34u;
            { ctx->pc = 0x1cbc34; return; }
        }
    }
    ctx->pc = 0x1CBB5Cu;
label_1cbb5c:
    // 0x1cbb5c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1cbb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1cbb60:
    // 0x1cbb60: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_1cbb64:
    if (ctx->pc == 0x1CBB64u) {
        ctx->pc = 0x1CBB68u;
        goto label_1cbb68;
    }
    ctx->pc = 0x1CBB60u;
    {
        const bool branch_taken_0x1cbb60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbb60) {
            ctx->pc = 0x1CBBA8u;
            { ctx->pc = 0x1cbba8; return; }
        }
    }
    ctx->pc = 0x1CBB68u;
label_1cbb68:
    // 0x1cbb68: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1cbb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1cbb6c:
    // 0x1cbb6c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_1cbb70:
    if (ctx->pc == 0x1CBB70u) {
        ctx->pc = 0x1CBB74u;
        goto label_1cbb74;
    }
    ctx->pc = 0x1CBB6Cu;
    {
        const bool branch_taken_0x1cbb6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbb6c) {
            ctx->pc = 0x1CBB80u;
            goto label_1cbb80;
        }
    }
    ctx->pc = 0x1CBB74u;
label_1cbb74:
    // 0x1cbb74: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1cbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1cbb78:
    // 0x1cbb78: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_1cbb7c:
    if (ctx->pc == 0x1CBB7Cu) {
        ctx->pc = 0x1CBB80u;
        goto label_1cbb80;
    }
    ctx->pc = 0x1CBB78u;
    {
        const bool branch_taken_0x1cbb78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbb78) {
            ctx->pc = 0x1CBBA8u;
            { ctx->pc = 0x1cbba8; return; }
        }
    }
    ctx->pc = 0x1CBB80u;
label_1cbb80:
    // 0x1cbb80: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cbb84:
    // 0x1cbb84: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1cbb84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1cbb88:
    // 0x1cbb88: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1cbb8c:
    // 0x1cbb8c: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1cbb90:
    // 0x1cbb90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbb94:
    // 0x1cbb94: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbb98:
    // 0x1cbb98: 0xc08f20e  jal         func_23C838
label_1cbb9c:
    if (ctx->pc == 0x1CBB9Cu) {
        ctx->pc = 0x1CBB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB98u;
        // 0x1cbb9c: 0x24a5c400  addiu       $a1, $a1, -0x3C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBBA0u;
        { ctx->pc = 0x1cbba0; return; }
    }
    ctx->pc = 0x1CBB98u;
    SET_GPR_U32(ctx, 31, 0x1CBBA0u);
    ctx->pc = 0x1CBB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB98u;
    // 0x1cbb9c: 0x24a5c400  addiu       $a1, $a1, -0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1CBBA0u;
    ctx->pc = 0x1cbba0u;
    return;
}
