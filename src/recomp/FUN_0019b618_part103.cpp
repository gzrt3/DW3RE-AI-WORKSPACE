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


void FUN_0019b618_part103(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1cd2f8u: goto label_1cd2f8;
        case 0x1cd2fcu: goto label_1cd2fc;
        case 0x1cd300u: goto label_1cd300;
        case 0x1cd304u: goto label_1cd304;
        case 0x1cd308u: goto label_1cd308;
        case 0x1cd30cu: goto label_1cd30c;
        case 0x1cd310u: goto label_1cd310;
        case 0x1cd314u: goto label_1cd314;
        case 0x1cd318u: goto label_1cd318;
        case 0x1cd31cu: goto label_1cd31c;
        case 0x1cd320u: goto label_1cd320;
        case 0x1cd324u: goto label_1cd324;
        case 0x1cd328u: goto label_1cd328;
        case 0x1cd32cu: goto label_1cd32c;
        case 0x1cd330u: goto label_1cd330;
        case 0x1cd334u: goto label_1cd334;
        case 0x1cd338u: goto label_1cd338;
        case 0x1cd33cu: goto label_1cd33c;
        case 0x1cd340u: goto label_1cd340;
        case 0x1cd344u: goto label_1cd344;
        case 0x1cd348u: goto label_1cd348;
        case 0x1cd34cu: goto label_1cd34c;
        case 0x1cd350u: goto label_1cd350;
        case 0x1cd354u: goto label_1cd354;
        case 0x1cd358u: goto label_1cd358;
        case 0x1cd35cu: goto label_1cd35c;
        case 0x1cd360u: goto label_1cd360;
        case 0x1cd364u: goto label_1cd364;
        case 0x1cd368u: goto label_1cd368;
        case 0x1cd36cu: goto label_1cd36c;
        case 0x1cd370u: goto label_1cd370;
        case 0x1cd374u: goto label_1cd374;
        case 0x1cd378u: goto label_1cd378;
        case 0x1cd37cu: goto label_1cd37c;
        case 0x1cd380u: goto label_1cd380;
        case 0x1cd384u: goto label_1cd384;
        case 0x1cd388u: goto label_1cd388;
        case 0x1cd38cu: goto label_1cd38c;
        case 0x1cd390u: goto label_1cd390;
        case 0x1cd394u: goto label_1cd394;
        case 0x1cd398u: goto label_1cd398;
        case 0x1cd39cu: goto label_1cd39c;
        case 0x1cd3a0u: goto label_1cd3a0;
        case 0x1cd3a4u: goto label_1cd3a4;
        case 0x1cd3a8u: goto label_1cd3a8;
        case 0x1cd3acu: goto label_1cd3ac;
        case 0x1cd3b0u: goto label_1cd3b0;
        case 0x1cd3b4u: goto label_1cd3b4;
        case 0x1cd3b8u: goto label_1cd3b8;
        case 0x1cd3bcu: goto label_1cd3bc;
        case 0x1cd3c0u: goto label_1cd3c0;
        case 0x1cd3c4u: goto label_1cd3c4;
        case 0x1cd3c8u: goto label_1cd3c8;
        case 0x1cd3ccu: goto label_1cd3cc;
        case 0x1cd3d0u: goto label_1cd3d0;
        case 0x1cd3d4u: goto label_1cd3d4;
        case 0x1cd3d8u: goto label_1cd3d8;
        case 0x1cd3dcu: goto label_1cd3dc;
        case 0x1cd3e0u: goto label_1cd3e0;
        case 0x1cd3e4u: goto label_1cd3e4;
        case 0x1cd3e8u: goto label_1cd3e8;
        case 0x1cd3ecu: goto label_1cd3ec;
        case 0x1cd3f0u: goto label_1cd3f0;
        case 0x1cd3f4u: goto label_1cd3f4;
        case 0x1cd3f8u: goto label_1cd3f8;
        case 0x1cd3fcu: goto label_1cd3fc;
        case 0x1cd400u: goto label_1cd400;
        case 0x1cd404u: goto label_1cd404;
        case 0x1cd408u: goto label_1cd408;
        case 0x1cd40cu: goto label_1cd40c;
        case 0x1cd410u: goto label_1cd410;
        case 0x1cd414u: goto label_1cd414;
        case 0x1cd418u: goto label_1cd418;
        case 0x1cd41cu: goto label_1cd41c;
        case 0x1cd420u: goto label_1cd420;
        case 0x1cd424u: goto label_1cd424;
        case 0x1cd428u: goto label_1cd428;
        case 0x1cd42cu: goto label_1cd42c;
        case 0x1cd430u: goto label_1cd430;
        case 0x1cd434u: goto label_1cd434;
        case 0x1cd438u: goto label_1cd438;
        case 0x1cd43cu: goto label_1cd43c;
        case 0x1cd440u: goto label_1cd440;
        case 0x1cd444u: goto label_1cd444;
        case 0x1cd448u: goto label_1cd448;
        case 0x1cd44cu: goto label_1cd44c;
        case 0x1cd450u: goto label_1cd450;
        case 0x1cd454u: goto label_1cd454;
        case 0x1cd458u: goto label_1cd458;
        case 0x1cd45cu: goto label_1cd45c;
        case 0x1cd460u: goto label_1cd460;
        case 0x1cd464u: goto label_1cd464;
        case 0x1cd468u: goto label_1cd468;
        case 0x1cd46cu: goto label_1cd46c;
        case 0x1cd470u: goto label_1cd470;
        case 0x1cd474u: goto label_1cd474;
        case 0x1cd478u: goto label_1cd478;
        case 0x1cd47cu: goto label_1cd47c;
        case 0x1cd480u: goto label_1cd480;
        case 0x1cd484u: goto label_1cd484;
        case 0x1cd488u: goto label_1cd488;
        case 0x1cd48cu: goto label_1cd48c;
        case 0x1cd490u: goto label_1cd490;
        case 0x1cd494u: goto label_1cd494;
        case 0x1cd498u: goto label_1cd498;
        case 0x1cd49cu: goto label_1cd49c;
        case 0x1cd4a0u: goto label_1cd4a0;
        case 0x1cd4a4u: goto label_1cd4a4;
        case 0x1cd4a8u: goto label_1cd4a8;
        case 0x1cd4acu: goto label_1cd4ac;
        case 0x1cd4b0u: goto label_1cd4b0;
        case 0x1cd4b4u: goto label_1cd4b4;
        case 0x1cd4b8u: goto label_1cd4b8;
        case 0x1cd4bcu: goto label_1cd4bc;
        case 0x1cd4c0u: goto label_1cd4c0;
        case 0x1cd4c4u: goto label_1cd4c4;
        case 0x1cd4c8u: goto label_1cd4c8;
        case 0x1cd4ccu: goto label_1cd4cc;
        case 0x1cd4d0u: goto label_1cd4d0;
        case 0x1cd4d4u: goto label_1cd4d4;
        case 0x1cd4d8u: goto label_1cd4d8;
        case 0x1cd4dcu: goto label_1cd4dc;
        case 0x1cd4e0u: goto label_1cd4e0;
        case 0x1cd4e4u: goto label_1cd4e4;
        case 0x1cd4e8u: goto label_1cd4e8;
        case 0x1cd4ecu: goto label_1cd4ec;
        case 0x1cd4f0u: goto label_1cd4f0;
        case 0x1cd4f4u: goto label_1cd4f4;
        case 0x1cd4f8u: goto label_1cd4f8;
        case 0x1cd4fcu: goto label_1cd4fc;
        case 0x1cd500u: goto label_1cd500;
        case 0x1cd504u: goto label_1cd504;
        case 0x1cd508u: goto label_1cd508;
        case 0x1cd50cu: goto label_1cd50c;
        case 0x1cd510u: goto label_1cd510;
        case 0x1cd514u: goto label_1cd514;
        case 0x1cd518u: goto label_1cd518;
        case 0x1cd51cu: goto label_1cd51c;
        case 0x1cd520u: goto label_1cd520;
        case 0x1cd524u: goto label_1cd524;
        case 0x1cd528u: goto label_1cd528;
        case 0x1cd52cu: goto label_1cd52c;
        case 0x1cd530u: goto label_1cd530;
        case 0x1cd534u: goto label_1cd534;
        case 0x1cd538u: goto label_1cd538;
        case 0x1cd53cu: goto label_1cd53c;
        case 0x1cd540u: goto label_1cd540;
        case 0x1cd544u: goto label_1cd544;
        case 0x1cd548u: goto label_1cd548;
        case 0x1cd54cu: goto label_1cd54c;
        case 0x1cd550u: goto label_1cd550;
        case 0x1cd554u: goto label_1cd554;
        case 0x1cd558u: goto label_1cd558;
        case 0x1cd55cu: goto label_1cd55c;
        case 0x1cd560u: goto label_1cd560;
        case 0x1cd564u: goto label_1cd564;
        case 0x1cd568u: goto label_1cd568;
        case 0x1cd56cu: goto label_1cd56c;
        case 0x1cd570u: goto label_1cd570;
        case 0x1cd574u: goto label_1cd574;
        case 0x1cd578u: goto label_1cd578;
        case 0x1cd57cu: goto label_1cd57c;
        case 0x1cd580u: goto label_1cd580;
        case 0x1cd584u: goto label_1cd584;
        case 0x1cd588u: goto label_1cd588;
        case 0x1cd58cu: goto label_1cd58c;
        case 0x1cd590u: goto label_1cd590;
        case 0x1cd594u: goto label_1cd594;
        case 0x1cd598u: goto label_1cd598;
        case 0x1cd59cu: goto label_1cd59c;
        case 0x1cd5a0u: goto label_1cd5a0;
        case 0x1cd5a4u: goto label_1cd5a4;
        case 0x1cd5a8u: goto label_1cd5a8;
        case 0x1cd5acu: goto label_1cd5ac;
        case 0x1cd5b0u: goto label_1cd5b0;
        case 0x1cd5b4u: goto label_1cd5b4;
        case 0x1cd5b8u: goto label_1cd5b8;
        case 0x1cd5bcu: goto label_1cd5bc;
        case 0x1cd5c0u: goto label_1cd5c0;
        case 0x1cd5c4u: goto label_1cd5c4;
        case 0x1cd5c8u: goto label_1cd5c8;
        case 0x1cd5ccu: goto label_1cd5cc;
        case 0x1cd5d0u: goto label_1cd5d0;
        case 0x1cd5d4u: goto label_1cd5d4;
        case 0x1cd5d8u: goto label_1cd5d8;
        case 0x1cd5dcu: goto label_1cd5dc;
        case 0x1cd5e0u: goto label_1cd5e0;
        case 0x1cd5e4u: goto label_1cd5e4;
        case 0x1cd5e8u: goto label_1cd5e8;
        case 0x1cd5ecu: goto label_1cd5ec;
        case 0x1cd5f0u: goto label_1cd5f0;
        case 0x1cd5f4u: goto label_1cd5f4;
        case 0x1cd5f8u: goto label_1cd5f8;
        case 0x1cd5fcu: goto label_1cd5fc;
        case 0x1cd600u: goto label_1cd600;
        case 0x1cd604u: goto label_1cd604;
        case 0x1cd608u: goto label_1cd608;
        case 0x1cd60cu: goto label_1cd60c;
        case 0x1cd610u: goto label_1cd610;
        case 0x1cd614u: goto label_1cd614;
        case 0x1cd618u: goto label_1cd618;
        case 0x1cd61cu: goto label_1cd61c;
        case 0x1cd620u: goto label_1cd620;
        case 0x1cd624u: goto label_1cd624;
        case 0x1cd628u: goto label_1cd628;
        case 0x1cd62cu: goto label_1cd62c;
        case 0x1cd630u: goto label_1cd630;
        case 0x1cd634u: goto label_1cd634;
        case 0x1cd638u: goto label_1cd638;
        case 0x1cd63cu: goto label_1cd63c;
        case 0x1cd640u: goto label_1cd640;
        case 0x1cd644u: goto label_1cd644;
        case 0x1cd648u: goto label_1cd648;
        case 0x1cd64cu: goto label_1cd64c;
        case 0x1cd650u: goto label_1cd650;
        case 0x1cd654u: goto label_1cd654;
        case 0x1cd658u: goto label_1cd658;
        case 0x1cd65cu: goto label_1cd65c;
        case 0x1cd660u: goto label_1cd660;
        case 0x1cd664u: goto label_1cd664;
        case 0x1cd668u: goto label_1cd668;
        case 0x1cd66cu: goto label_1cd66c;
        case 0x1cd670u: goto label_1cd670;
        case 0x1cd674u: goto label_1cd674;
        case 0x1cd678u: goto label_1cd678;
        case 0x1cd67cu: goto label_1cd67c;
        case 0x1cd680u: goto label_1cd680;
        case 0x1cd684u: goto label_1cd684;
        case 0x1cd688u: goto label_1cd688;
        case 0x1cd68cu: goto label_1cd68c;
        case 0x1cd690u: goto label_1cd690;
        case 0x1cd694u: goto label_1cd694;
        case 0x1cd698u: goto label_1cd698;
        case 0x1cd69cu: goto label_1cd69c;
        case 0x1cd6a0u: goto label_1cd6a0;
        case 0x1cd6a4u: goto label_1cd6a4;
        case 0x1cd6a8u: goto label_1cd6a8;
        case 0x1cd6acu: goto label_1cd6ac;
        case 0x1cd6b0u: goto label_1cd6b0;
        case 0x1cd6b4u: goto label_1cd6b4;
        case 0x1cd6b8u: goto label_1cd6b8;
        case 0x1cd6bcu: goto label_1cd6bc;
        case 0x1cd6c0u: goto label_1cd6c0;
        case 0x1cd6c4u: goto label_1cd6c4;
        case 0x1cd6c8u: goto label_1cd6c8;
        case 0x1cd6ccu: goto label_1cd6cc;
        case 0x1cd6d0u: goto label_1cd6d0;
        case 0x1cd6d4u: goto label_1cd6d4;
        case 0x1cd6d8u: goto label_1cd6d8;
        case 0x1cd6dcu: goto label_1cd6dc;
        case 0x1cd6e0u: goto label_1cd6e0;
        case 0x1cd6e4u: goto label_1cd6e4;
        case 0x1cd6e8u: goto label_1cd6e8;
        case 0x1cd6ecu: goto label_1cd6ec;
        case 0x1cd6f0u: goto label_1cd6f0;
        case 0x1cd6f4u: goto label_1cd6f4;
        case 0x1cd6f8u: goto label_1cd6f8;
        case 0x1cd6fcu: goto label_1cd6fc;
        case 0x1cd700u: goto label_1cd700;
        case 0x1cd704u: goto label_1cd704;
        case 0x1cd708u: goto label_1cd708;
        case 0x1cd70cu: goto label_1cd70c;
        case 0x1cd710u: goto label_1cd710;
        case 0x1cd714u: goto label_1cd714;
        case 0x1cd718u: goto label_1cd718;
        case 0x1cd71cu: goto label_1cd71c;
        case 0x1cd720u: goto label_1cd720;
        case 0x1cd724u: goto label_1cd724;
        case 0x1cd728u: goto label_1cd728;
        case 0x1cd72cu: goto label_1cd72c;
        case 0x1cd730u: goto label_1cd730;
        case 0x1cd734u: goto label_1cd734;
        case 0x1cd738u: goto label_1cd738;
        case 0x1cd73cu: goto label_1cd73c;
        case 0x1cd740u: goto label_1cd740;
        case 0x1cd744u: goto label_1cd744;
        case 0x1cd748u: goto label_1cd748;
        case 0x1cd74cu: goto label_1cd74c;
        case 0x1cd750u: goto label_1cd750;
        case 0x1cd754u: goto label_1cd754;
        case 0x1cd758u: goto label_1cd758;
        case 0x1cd75cu: goto label_1cd75c;
        case 0x1cd760u: goto label_1cd760;
        case 0x1cd764u: goto label_1cd764;
        case 0x1cd768u: goto label_1cd768;
        case 0x1cd76cu: goto label_1cd76c;
        case 0x1cd770u: goto label_1cd770;
        case 0x1cd774u: goto label_1cd774;
        case 0x1cd778u: goto label_1cd778;
        case 0x1cd77cu: goto label_1cd77c;
        case 0x1cd780u: goto label_1cd780;
        case 0x1cd784u: goto label_1cd784;
        case 0x1cd788u: goto label_1cd788;
        case 0x1cd78cu: goto label_1cd78c;
        case 0x1cd790u: goto label_1cd790;
        case 0x1cd794u: goto label_1cd794;
        case 0x1cd798u: goto label_1cd798;
        case 0x1cd79cu: goto label_1cd79c;
        case 0x1cd7a0u: goto label_1cd7a0;
        case 0x1cd7a4u: goto label_1cd7a4;
        case 0x1cd7a8u: goto label_1cd7a8;
        case 0x1cd7acu: goto label_1cd7ac;
        case 0x1cd7b0u: goto label_1cd7b0;
        case 0x1cd7b4u: goto label_1cd7b4;
        case 0x1cd7b8u: goto label_1cd7b8;
        case 0x1cd7bcu: goto label_1cd7bc;
        case 0x1cd7c0u: goto label_1cd7c0;
        case 0x1cd7c4u: goto label_1cd7c4;
        case 0x1cd7c8u: goto label_1cd7c8;
        case 0x1cd7ccu: goto label_1cd7cc;
        case 0x1cd7d0u: goto label_1cd7d0;
        case 0x1cd7d4u: goto label_1cd7d4;
        case 0x1cd7d8u: goto label_1cd7d8;
        case 0x1cd7dcu: goto label_1cd7dc;
        case 0x1cd7e0u: goto label_1cd7e0;
        case 0x1cd7e4u: goto label_1cd7e4;
        case 0x1cd7e8u: goto label_1cd7e8;
        case 0x1cd7ecu: goto label_1cd7ec;
        case 0x1cd7f0u: goto label_1cd7f0;
        case 0x1cd7f4u: goto label_1cd7f4;
        case 0x1cd7f8u: goto label_1cd7f8;
        case 0x1cd7fcu: goto label_1cd7fc;
        case 0x1cd800u: goto label_1cd800;
        case 0x1cd804u: goto label_1cd804;
        case 0x1cd808u: goto label_1cd808;
        case 0x1cd80cu: goto label_1cd80c;
        case 0x1cd810u: goto label_1cd810;
        case 0x1cd814u: goto label_1cd814;
        case 0x1cd818u: goto label_1cd818;
        case 0x1cd81cu: goto label_1cd81c;
        case 0x1cd820u: goto label_1cd820;
        case 0x1cd824u: goto label_1cd824;
        case 0x1cd828u: goto label_1cd828;
        case 0x1cd82cu: goto label_1cd82c;
        case 0x1cd830u: goto label_1cd830;
        case 0x1cd834u: goto label_1cd834;
        case 0x1cd838u: goto label_1cd838;
        case 0x1cd83cu: goto label_1cd83c;
        case 0x1cd840u: goto label_1cd840;
        case 0x1cd844u: goto label_1cd844;
        case 0x1cd848u: goto label_1cd848;
        case 0x1cd84cu: goto label_1cd84c;
        case 0x1cd850u: goto label_1cd850;
        case 0x1cd854u: goto label_1cd854;
        case 0x1cd858u: goto label_1cd858;
        case 0x1cd85cu: goto label_1cd85c;
        case 0x1cd860u: goto label_1cd860;
        case 0x1cd864u: goto label_1cd864;
        case 0x1cd868u: goto label_1cd868;
        case 0x1cd86cu: goto label_1cd86c;
        case 0x1cd870u: goto label_1cd870;
        case 0x1cd874u: goto label_1cd874;
        case 0x1cd878u: goto label_1cd878;
        case 0x1cd87cu: goto label_1cd87c;
        case 0x1cd880u: goto label_1cd880;
        case 0x1cd884u: goto label_1cd884;
        case 0x1cd888u: goto label_1cd888;
        case 0x1cd88cu: goto label_1cd88c;
        case 0x1cd890u: goto label_1cd890;
        case 0x1cd894u: goto label_1cd894;
        case 0x1cd898u: goto label_1cd898;
        case 0x1cd89cu: goto label_1cd89c;
        case 0x1cd8a0u: goto label_1cd8a0;
        case 0x1cd8a4u: goto label_1cd8a4;
        case 0x1cd8a8u: goto label_1cd8a8;
        case 0x1cd8acu: goto label_1cd8ac;
        case 0x1cd8b0u: goto label_1cd8b0;
        case 0x1cd8b4u: goto label_1cd8b4;
        case 0x1cd8b8u: goto label_1cd8b8;
        case 0x1cd8bcu: goto label_1cd8bc;
        case 0x1cd8c0u: goto label_1cd8c0;
        case 0x1cd8c4u: goto label_1cd8c4;
        case 0x1cd8c8u: goto label_1cd8c8;
        case 0x1cd8ccu: goto label_1cd8cc;
        case 0x1cd8d0u: goto label_1cd8d0;
        case 0x1cd8d4u: goto label_1cd8d4;
        case 0x1cd8d8u: goto label_1cd8d8;
        case 0x1cd8dcu: goto label_1cd8dc;
        case 0x1cd8e0u: goto label_1cd8e0;
        case 0x1cd8e4u: goto label_1cd8e4;
        case 0x1cd8e8u: goto label_1cd8e8;
        case 0x1cd8ecu: goto label_1cd8ec;
        case 0x1cd8f0u: goto label_1cd8f0;
        case 0x1cd8f4u: goto label_1cd8f4;
        case 0x1cd8f8u: goto label_1cd8f8;
        case 0x1cd8fcu: goto label_1cd8fc;
        case 0x1cd900u: goto label_1cd900;
        case 0x1cd904u: goto label_1cd904;
        case 0x1cd908u: goto label_1cd908;
        case 0x1cd90cu: goto label_1cd90c;
        case 0x1cd910u: goto label_1cd910;
        case 0x1cd914u: goto label_1cd914;
        case 0x1cd918u: goto label_1cd918;
        case 0x1cd91cu: goto label_1cd91c;
        case 0x1cd920u: goto label_1cd920;
        case 0x1cd924u: goto label_1cd924;
        case 0x1cd928u: goto label_1cd928;
        case 0x1cd92cu: goto label_1cd92c;
        case 0x1cd930u: goto label_1cd930;
        case 0x1cd934u: goto label_1cd934;
        case 0x1cd938u: goto label_1cd938;
        case 0x1cd93cu: goto label_1cd93c;
        case 0x1cd940u: goto label_1cd940;
        case 0x1cd944u: goto label_1cd944;
        case 0x1cd948u: goto label_1cd948;
        case 0x1cd94cu: goto label_1cd94c;
        case 0x1cd950u: goto label_1cd950;
        case 0x1cd954u: goto label_1cd954;
        case 0x1cd958u: goto label_1cd958;
        case 0x1cd95cu: goto label_1cd95c;
        case 0x1cd960u: goto label_1cd960;
        case 0x1cd964u: goto label_1cd964;
        case 0x1cd968u: goto label_1cd968;
        case 0x1cd96cu: goto label_1cd96c;
        case 0x1cd970u: goto label_1cd970;
        case 0x1cd974u: goto label_1cd974;
        case 0x1cd978u: goto label_1cd978;
        case 0x1cd97cu: goto label_1cd97c;
        case 0x1cd980u: goto label_1cd980;
        case 0x1cd984u: goto label_1cd984;
        case 0x1cd988u: goto label_1cd988;
        case 0x1cd98cu: goto label_1cd98c;
        case 0x1cd990u: goto label_1cd990;
        case 0x1cd994u: goto label_1cd994;
        case 0x1cd998u: goto label_1cd998;
        case 0x1cd99cu: goto label_1cd99c;
        case 0x1cd9a0u: goto label_1cd9a0;
        case 0x1cd9a4u: goto label_1cd9a4;
        case 0x1cd9a8u: goto label_1cd9a8;
        case 0x1cd9acu: goto label_1cd9ac;
        case 0x1cd9b0u: goto label_1cd9b0;
        case 0x1cd9b4u: goto label_1cd9b4;
        case 0x1cd9b8u: goto label_1cd9b8;
        case 0x1cd9bcu: goto label_1cd9bc;
        case 0x1cd9c0u: goto label_1cd9c0;
        case 0x1cd9c4u: goto label_1cd9c4;
        case 0x1cd9c8u: goto label_1cd9c8;
        case 0x1cd9ccu: goto label_1cd9cc;
        case 0x1cd9d0u: goto label_1cd9d0;
        case 0x1cd9d4u: goto label_1cd9d4;
        case 0x1cd9d8u: goto label_1cd9d8;
        case 0x1cd9dcu: goto label_1cd9dc;
        case 0x1cd9e0u: goto label_1cd9e0;
        case 0x1cd9e4u: goto label_1cd9e4;
        case 0x1cd9e8u: goto label_1cd9e8;
        case 0x1cd9ecu: goto label_1cd9ec;
        case 0x1cd9f0u: goto label_1cd9f0;
        case 0x1cd9f4u: goto label_1cd9f4;
        case 0x1cd9f8u: goto label_1cd9f8;
        case 0x1cd9fcu: goto label_1cd9fc;
        case 0x1cda00u: goto label_1cda00;
        case 0x1cda04u: goto label_1cda04;
        case 0x1cda08u: goto label_1cda08;
        case 0x1cda0cu: goto label_1cda0c;
        case 0x1cda10u: goto label_1cda10;
        case 0x1cda14u: goto label_1cda14;
        case 0x1cda18u: goto label_1cda18;
        case 0x1cda1cu: goto label_1cda1c;
        case 0x1cda20u: goto label_1cda20;
        case 0x1cda24u: goto label_1cda24;
        case 0x1cda28u: goto label_1cda28;
        case 0x1cda2cu: goto label_1cda2c;
        case 0x1cda30u: goto label_1cda30;
        case 0x1cda34u: goto label_1cda34;
        case 0x1cda38u: goto label_1cda38;
        case 0x1cda3cu: goto label_1cda3c;
        case 0x1cda40u: goto label_1cda40;
        case 0x1cda44u: goto label_1cda44;
        case 0x1cda48u: goto label_1cda48;
        case 0x1cda4cu: goto label_1cda4c;
        case 0x1cda50u: goto label_1cda50;
        case 0x1cda54u: goto label_1cda54;
        case 0x1cda58u: goto label_1cda58;
        case 0x1cda5cu: goto label_1cda5c;
        case 0x1cda60u: goto label_1cda60;
        case 0x1cda64u: goto label_1cda64;
        case 0x1cda68u: goto label_1cda68;
        case 0x1cda6cu: goto label_1cda6c;
        case 0x1cda70u: goto label_1cda70;
        case 0x1cda74u: goto label_1cda74;
        case 0x1cda78u: goto label_1cda78;
        case 0x1cda7cu: goto label_1cda7c;
        case 0x1cda80u: goto label_1cda80;
        case 0x1cda84u: goto label_1cda84;
        case 0x1cda88u: goto label_1cda88;
        case 0x1cda8cu: goto label_1cda8c;
        case 0x1cda90u: goto label_1cda90;
        case 0x1cda94u: goto label_1cda94;
        case 0x1cda98u: goto label_1cda98;
        case 0x1cda9cu: goto label_1cda9c;
        case 0x1cdaa0u: goto label_1cdaa0;
        case 0x1cdaa4u: goto label_1cdaa4;
        case 0x1cdaa8u: goto label_1cdaa8;
        case 0x1cdaacu: goto label_1cdaac;
        case 0x1cdab0u: goto label_1cdab0;
        case 0x1cdab4u: goto label_1cdab4;
        case 0x1cdab8u: goto label_1cdab8;
        case 0x1cdabcu: goto label_1cdabc;
        case 0x1cdac0u: goto label_1cdac0;
        case 0x1cdac4u: goto label_1cdac4;
        default: return;
    }

label_1cd2f8:
    // 0x1cd2f8: 0xc066e14  jal         func_19B850
label_1cd2fc:
    if (ctx->pc == 0x1CD2FCu) {
        ctx->pc = 0x1CD2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2F8u;
        // 0x1cd2fc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD300u;
        goto label_1cd300;
    }
    ctx->pc = 0x1CD2F8u;
    SET_GPR_U32(ctx, 31, 0x1CD300u);
    ctx->pc = 0x1CD2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2F8u;
    // 0x1cd2fc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1CD300u;
label_1cd300:
    // 0x1cd300: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1cd300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1cd304:
    // 0x1cd304: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1cd304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1cd308:
    // 0x1cd308: 0xc066e02  jal         func_19B808
label_1cd30c:
    if (ctx->pc == 0x1CD30Cu) {
        ctx->pc = 0x1CD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD308u;
        // 0x1cd30c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD310u;
        goto label_1cd310;
    }
    ctx->pc = 0x1CD308u;
    SET_GPR_U32(ctx, 31, 0x1CD310u);
    ctx->pc = 0x1CD30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD308u;
    // 0x1cd30c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CD310u;
label_1cd310:
    // 0x1cd310: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1cd310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd314:
    // 0x1cd314: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1cd314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_1cd318:
    // 0x1cd318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd31c:
    // 0x1cd31c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cd31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1cd320:
    // 0x1cd320: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1cd320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1cd324:
    // 0x1cd324: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1cd324u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1cd328:
    // 0x1cd328: 0x24a57a70  addiu       $a1, $a1, 0x7A70
    ctx->pc = 0x1cd328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31344));
label_1cd32c:
    // 0x1cd32c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cd32cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cd330:
    // 0x1cd330: 0xc04f310  jal         func_13CC40
label_1cd334:
    if (ctx->pc == 0x1CD334u) {
        ctx->pc = 0x1CD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD330u;
        // 0x1cd334: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD338u;
        goto label_1cd338;
    }
    ctx->pc = 0x1CD330u;
    SET_GPR_U32(ctx, 31, 0x1CD338u);
    ctx->pc = 0x1CD334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD330u;
    // 0x1cd334: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC40u, 0x1CD330u, 0x1CD338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD338u;
label_1cd338:
    // 0x1cd338: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cd338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cd33c:
    // 0x1cd33c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1cd33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1cd340:
    // 0x1cd340: 0xc4217a74  lwc1        $f1, 0x7A74($at)
    ctx->pc = 0x1cd340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 31348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd344:
    // 0x1cd344: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cd344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1cd348:
    // 0x1cd348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd34c:
    // 0x1cd34c: 0x24847a70  addiu       $a0, $a0, 0x7A70
    ctx->pc = 0x1cd34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31344));
label_1cd350:
    // 0x1cd350: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cd350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd354:
    // 0x1cd354: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cd358:
    // 0x1cd358: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd35c:
    // 0x1cd35c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cd35cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cd360:
    // 0x1cd360: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cd360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cd364:
    // 0x1cd364: 0xc066e14  jal         func_19B850
label_1cd368:
    if (ctx->pc == 0x1CD368u) {
        ctx->pc = 0x1CD368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD364u;
        // 0x1cd368: 0xe4207a74  swc1        $f0, 0x7A74($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 31348), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD36Cu;
        goto label_1cd36c;
    }
    ctx->pc = 0x1CD364u;
    SET_GPR_U32(ctx, 31, 0x1CD36Cu);
    ctx->pc = 0x1CD368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD364u;
    // 0x1cd368: 0xe4207a74  swc1        $f0, 0x7A74($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 31348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1CD36Cu;
label_1cd36c:
    // 0x1cd36c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1cd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1cd370:
    // 0x1cd370: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1cd370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cd374:
    // 0x1cd374: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd378:
    // 0x1cd378: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1cd378u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd37c:
    // 0x1cd37c: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x1cd37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_1cd380:
    // 0x1cd380: 0x3c0a0047  lui         $t2, 0x47
    ctx->pc = 0x1cd380u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)71 << 16));
label_1cd384:
    // 0x1cd384: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cd384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cd388:
    // 0x1cd388: 0xffac0000  sd          $t4, 0x0($sp)
    ctx->pc = 0x1cd388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
label_1cd38c:
    // 0x1cd38c: 0x244290f0  addiu       $v0, $v0, -0x6F10
    ctx->pc = 0x1cd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
label_1cd390:
    // 0x1cd390: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cd390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cd394:
    // 0x1cd394: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1cd394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1cd398:
    // 0x1cd398: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1cd398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1cd39c:
    // 0x1cd39c: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1cd39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1cd3a0:
    // 0x1cd3a0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1cd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1cd3a4:
    // 0x1cd3a4: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1cd3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1cd3a8:
    // 0x1cd3a8: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1cd3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1cd3ac:
    // 0x1cd3ac: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1cd3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_1cd3b0:
    // 0x1cd3b0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1cd3b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3b4:
    // 0x1cd3b4: 0xffac0028  sd          $t4, 0x28($sp)
    ctx->pc = 0x1cd3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 12));
label_1cd3b8:
    // 0x1cd3b8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1cd3b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3bc:
    // 0x1cd3bc: 0xffac0030  sd          $t4, 0x30($sp)
    ctx->pc = 0x1cd3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 12));
label_1cd3c0:
    // 0x1cd3c0: 0x254a7a70  addiu       $t2, $t2, 0x7A70
    ctx->pc = 0x1cd3c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 31344));
label_1cd3c4:
    // 0x1cd3c4: 0xffac0038  sd          $t4, 0x38($sp)
    ctx->pc = 0x1cd3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 12));
label_1cd3c8:
    // 0x1cd3c8: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1cd3c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3cc:
    // 0x1cd3cc: 0xffac0040  sd          $t4, 0x40($sp)
    ctx->pc = 0x1cd3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 12));
label_1cd3d0:
    // 0x1cd3d0: 0xffac0048  sd          $t4, 0x48($sp)
    ctx->pc = 0x1cd3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 12));
label_1cd3d4:
    // 0x1cd3d4: 0xc07374c  jal         func_1CDD30
label_1cd3d8:
    if (ctx->pc == 0x1CD3D8u) {
        ctx->pc = 0x1CD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3D4u;
        // 0x1cd3d8: 0xffac0050  sd          $t4, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD3DCu;
        goto label_1cd3dc;
    }
    ctx->pc = 0x1CD3D4u;
    SET_GPR_U32(ctx, 31, 0x1CD3DCu);
    ctx->pc = 0x1CD3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3D4u;
    // 0x1cd3d8: 0xffac0050  sd          $t4, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD30u;
    { ctx->pc = 0x1cdd30; return; }
    ctx->pc = 0x1CD3DCu;
label_1cd3dc:
    // 0x1cd3dc: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1cd3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_1cd3e0:
    // 0x1cd3e0: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1cd3e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_1cd3e4:
    // 0x1cd3e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cd3e8:
    // 0x1cd3e8: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1cd3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_1cd3ec:
    // 0x1cd3ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1cd3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1cd3f0:
    // 0x1cd3f0: 0xc7b50064  lwc1        $f21, 0x64($sp)
    ctx->pc = 0x1cd3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1cd3f4:
    // 0x1cd3f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1cd3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cd3f8:
    // 0x1cd3f8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1cd3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cd3fc:
    // 0x1cd3fc: 0x3e00008  jr          $ra
label_1cd400:
    if (ctx->pc == 0x1CD400u) {
        ctx->pc = 0x1CD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3FCu;
        // 0x1cd400: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD404u;
        goto label_1cd404;
    }
    ctx->pc = 0x1CD3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3FCu;
        // 0x1cd400: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD404u;
label_1cd404:
    // 0x1cd404: 0x0  nop
    ctx->pc = 0x1cd404u;
    // NOP
label_1cd408:
    // 0x1cd408: 0x0  nop
    ctx->pc = 0x1cd408u;
    // NOP
label_1cd40c:
    // 0x1cd40c: 0x0  nop
    ctx->pc = 0x1cd40cu;
    // NOP
label_1cd410:
    // 0x1cd410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cd414:
    // 0x1cd414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cd418:
    // 0x1cd418: 0xc07350c  jal         func_1CD430
label_1cd41c:
    if (ctx->pc == 0x1CD41Cu) {
        ctx->pc = 0x1CD420u;
        goto label_1cd420;
    }
    ctx->pc = 0x1CD418u;
    SET_GPR_U32(ctx, 31, 0x1CD420u);
    ctx->pc = 0x1CD430u;
    goto label_1cd430;
    ctx->pc = 0x1CD420u;
label_1cd420:
    // 0x1cd420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd424:
    // 0x1cd424: 0x3e00008  jr          $ra
label_1cd428:
    if (ctx->pc == 0x1CD428u) {
        ctx->pc = 0x1CD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD424u;
        // 0x1cd428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD42Cu;
        goto label_1cd42c;
    }
    ctx->pc = 0x1CD424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD424u;
        // 0x1cd428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD42Cu;
label_1cd42c:
    // 0x1cd42c: 0x0  nop
    ctx->pc = 0x1cd42cu;
    // NOP
label_1cd430:
    // 0x1cd430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cd430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1cd434:
    // 0x1cd434: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cd434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1cd438:
    // 0x1cd438: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1cd438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1cd43c:
    // 0x1cd43c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cd43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cd440:
    // 0x1cd440: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cd440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd444:
    // 0x1cd444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cd448:
    // 0x1cd448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd44c:
    // 0x1cd44c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cd44cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cd450:
    // 0x1cd450: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1cd450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cd454:
    // 0x1cd454: 0xc0590dc  jal         func_164370
label_1cd458:
    if (ctx->pc == 0x1CD458u) {
        ctx->pc = 0x1CD458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD454u;
        // 0x1cd458: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD45Cu;
        goto label_1cd45c;
    }
    ctx->pc = 0x1CD454u;
    SET_GPR_U32(ctx, 31, 0x1CD45Cu);
    ctx->pc = 0x1CD458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD454u;
    // 0x1cd458: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1CD454u, 0x1CD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD45Cu;
label_1cd45c:
    // 0x1cd45c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd460:
    // 0x1cd460: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_1cd464:
    if (ctx->pc == 0x1CD464u) {
        ctx->pc = 0x1CD468u;
        goto label_1cd468;
    }
    ctx->pc = 0x1CD460u;
    {
        const bool branch_taken_0x1cd460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd460) {
            ctx->pc = 0x1CD530u;
            goto label_1cd530;
        }
    }
    ctx->pc = 0x1CD468u;
label_1cd468:
    // 0x1cd468: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1cd468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1cd46c:
    // 0x1cd46c: 0xdf8689c0  ld          $a2, -0x7640($gp)
    ctx->pc = 0x1cd46cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937024)));
label_1cd470:
    // 0x1cd470: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cd470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1cd474:
    // 0x1cd474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd478:
    // 0x1cd478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd47c:
    // 0x1cd47c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cd47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd480:
    // 0x1cd480: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cd480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1cd484:
    // 0x1cd484: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1cd484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1cd488:
    // 0x1cd488: 0x46140342  mul.s       $f13, $f0, $f20
    ctx->pc = 0x1cd488u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1cd48c:
    // 0x1cd48c: 0xc0717e8  jal         func_1C5FA0
label_1cd490:
    if (ctx->pc == 0x1CD490u) {
        ctx->pc = 0x1CD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD48Cu;
        // 0x1cd490: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD494u;
        goto label_1cd494;
    }
    ctx->pc = 0x1CD48Cu;
    SET_GPR_U32(ctx, 31, 0x1CD494u);
    ctx->pc = 0x1CD490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD48Cu;
    // 0x1cd490: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    { ctx->pc = 0x1c5fa0; return; }
    ctx->pc = 0x1CD494u;
label_1cd494:
    // 0x1cd494: 0x920202e0  lbu         $v0, 0x2E0($s0)
    ctx->pc = 0x1cd494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
label_1cd498:
    // 0x1cd498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd49c:
    // 0x1cd49c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1cd49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1cd4a0:
    // 0x1cd4a0: 0xc0717c8  jal         func_1C5F20
label_1cd4a4:
    if (ctx->pc == 0x1CD4A4u) {
        ctx->pc = 0x1CD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4A0u;
        // 0x1cd4a4: 0xa20202e0  sb          $v0, 0x2E0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD4A8u;
        goto label_1cd4a8;
    }
    ctx->pc = 0x1CD4A0u;
    SET_GPR_U32(ctx, 31, 0x1CD4A8u);
    ctx->pc = 0x1CD4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD4A0u;
    // 0x1cd4a4: 0xa20202e0  sb          $v0, 0x2E0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    { ctx->pc = 0x1c5f20; return; }
    ctx->pc = 0x1CD4A8u;
label_1cd4a8:
    // 0x1cd4a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cd4ac:
    // 0x1cd4ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd4b0:
    // 0x1cd4b0: 0xa20202e1  sb          $v0, 0x2E1($s0)
    ctx->pc = 0x1cd4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 2));
label_1cd4b4:
    // 0x1cd4b4: 0xa20302eb  sb          $v1, 0x2EB($s0)
    ctx->pc = 0x1cd4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 3));
label_1cd4b8:
    // 0x1cd4b8: 0x3c023c09  lui         $v0, 0x3C09
    ctx->pc = 0x1cd4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15369 << 16));
label_1cd4bc:
    // 0x1cd4bc: 0xe6140330  swc1        $f20, 0x330($s0)
    ctx->pc = 0x1cd4bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
label_1cd4c0:
    // 0x1cd4c0: 0x3443a027  ori         $v1, $v0, 0xA027
    ctx->pc = 0x1cd4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40999);
label_1cd4c4:
    // 0x1cd4c4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1cd4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd4c8:
    // 0x1cd4c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cd4cc:
    // 0x1cd4cc: 0xe6000334  swc1        $f0, 0x334($s0)
    ctx->pc = 0x1cd4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 820), bits); }
label_1cd4d0:
    // 0x1cd4d0: 0xae030338  sw          $v1, 0x338($s0)
    ctx->pc = 0x1cd4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 3));
label_1cd4d4:
    // 0x1cd4d4: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x1cd4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
label_1cd4d8:
    // 0x1cd4d8: 0xc08f0cc  jal         func_23C330
label_1cd4dc:
    if (ctx->pc == 0x1CD4DCu) {
        ctx->pc = 0x1CD4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4D8u;
        // 0x1cd4dc: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD4E0u;
        goto label_1cd4e0;
    }
    ctx->pc = 0x1CD4D8u;
    SET_GPR_U32(ctx, 31, 0x1CD4E0u);
    ctx->pc = 0x1CD4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD4D8u;
    // 0x1cd4dc: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD4E0u;
label_1cd4e0:
    // 0x1cd4e0: 0x920502ea  lbu         $a1, 0x2EA($s0)
    ctx->pc = 0x1cd4e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 746)));
label_1cd4e4:
    // 0x1cd4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd4e8:
    // 0x1cd4e8: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cd4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_1cd4ec:
    // 0x1cd4ec: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1cd4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_1cd4f0:
    // 0x1cd4f0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cd4f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cd4f4:
    // 0x1cd4f4: 0x2463d550  addiu       $v1, $v1, -0x2AB0
    ctx->pc = 0x1cd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956368));
label_1cd4f8:
    // 0x1cd4f8: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x1cd4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1cd4fc:
    // 0x1cd4fc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1cd4fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd500:
    // 0x1cd500: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cd500u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd504:
    // 0x1cd504: 0x0  nop
    ctx->pc = 0x1cd504u;
    // NOP
label_1cd508:
    // 0x1cd508: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd50c:
    // 0x1cd50c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cd50cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cd510:
    // 0x1cd510: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cd510u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cd514:
    // 0x1cd514: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cd514u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cd518:
    // 0x1cd518: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1cd518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1cd51c:
    // 0x1cd51c: 0x0  nop
    ctx->pc = 0x1cd51cu;
    // NOP
label_1cd520:
    // 0x1cd520: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1cd520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1cd524:
    // 0x1cd524: 0xa20402e8  sb          $a0, 0x2E8($s0)
    ctx->pc = 0x1cd524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 4));
label_1cd528:
    // 0x1cd528: 0xae12030c  sw          $s2, 0x30C($s0)
    ctx->pc = 0x1cd528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 18));
label_1cd52c:
    // 0x1cd52c: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x1cd52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_1cd530:
    // 0x1cd530: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cd530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cd534:
    // 0x1cd534: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cd534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cd538:
    // 0x1cd538: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1cd538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cd53c:
    // 0x1cd53c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cd53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cd540:
    // 0x1cd540: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cd540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cd544:
    // 0x1cd544: 0x3e00008  jr          $ra
label_1cd548:
    if (ctx->pc == 0x1CD548u) {
        ctx->pc = 0x1CD548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD544u;
        // 0x1cd548: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD54Cu;
        goto label_1cd54c;
    }
    ctx->pc = 0x1CD544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD544u;
        // 0x1cd548: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD54Cu;
label_1cd54c:
    // 0x1cd54c: 0x0  nop
    ctx->pc = 0x1cd54cu;
    // NOP
label_1cd550:
    // 0x1cd550: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1cd550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1cd554:
    // 0x1cd554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cd554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1cd558:
    // 0x1cd558: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cd558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cd55c:
    // 0x1cd55c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cd560:
    // 0x1cd560: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cd560u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cd564:
    // 0x1cd564: 0x8c82030c  lw          $v0, 0x30C($a0)
    ctx->pc = 0x1cd564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 780)));
label_1cd568:
    // 0x1cd568: 0x9042009c  lbu         $v0, 0x9C($v0)
    ctx->pc = 0x1cd568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 156)));
label_1cd56c:
    // 0x1cd56c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1cd56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1cd570:
    // 0x1cd570: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1cd574:
    if (ctx->pc == 0x1CD574u) {
        ctx->pc = 0x1CD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD570u;
        // 0x1cd574: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD578u;
        goto label_1cd578;
    }
    ctx->pc = 0x1CD570u;
    {
        const bool branch_taken_0x1cd570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD570u;
        // 0x1cd574: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd570) {
            ctx->pc = 0x1CD588u;
            goto label_1cd588;
        }
    }
    ctx->pc = 0x1CD578u;
label_1cd578:
    // 0x1cd578: 0xc0591f4  jal         func_1647D0
label_1cd57c:
    if (ctx->pc == 0x1CD57Cu) {
        ctx->pc = 0x1CD580u;
        goto label_1cd580;
    }
    ctx->pc = 0x1CD578u;
    SET_GPR_U32(ctx, 31, 0x1CD580u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CD578u, 0x1CD580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD580u;
label_1cd580:
    // 0x1cd580: 0x100000ef  b           . + 4 + (0xEF << 2)
label_1cd584:
    if (ctx->pc == 0x1CD584u) {
        ctx->pc = 0x1CD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD580u;
        // 0x1cd584: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD588u;
        goto label_1cd588;
    }
    ctx->pc = 0x1CD580u;
    {
        const bool branch_taken_0x1cd580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD580u;
        // 0x1cd584: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd580) {
            ctx->pc = 0x1CD940u;
            goto label_1cd940;
        }
    }
    ctx->pc = 0x1CD588u;
label_1cd588:
    // 0x1cd588: 0xc071740  jal         func_1C5D00
label_1cd58c:
    if (ctx->pc == 0x1CD58Cu) {
        ctx->pc = 0x1CD590u;
        goto label_1cd590;
    }
    ctx->pc = 0x1CD588u;
    SET_GPR_U32(ctx, 31, 0x1CD590u);
    ctx->pc = 0x1C5D00u;
    { ctx->pc = 0x1c5d00; return; }
    ctx->pc = 0x1CD590u;
label_1cd590:
    // 0x1cd590: 0xc071728  jal         func_1C5CA0
label_1cd594:
    if (ctx->pc == 0x1CD594u) {
        ctx->pc = 0x1CD594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD590u;
        // 0x1cd594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD598u;
        goto label_1cd598;
    }
    ctx->pc = 0x1CD590u;
    SET_GPR_U32(ctx, 31, 0x1CD598u);
    ctx->pc = 0x1CD594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD590u;
    // 0x1cd594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    { ctx->pc = 0x1c5ca0; return; }
    ctx->pc = 0x1CD598u;
label_1cd598:
    // 0x1cd598: 0xc08f0cc  jal         func_23C330
label_1cd59c:
    if (ctx->pc == 0x1CD59Cu) {
        ctx->pc = 0x1CD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD598u;
        // 0x1cd59c: 0xc6340338  lwc1        $f20, 0x338($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD5A0u;
        goto label_1cd5a0;
    }
    ctx->pc = 0x1CD598u;
    SET_GPR_U32(ctx, 31, 0x1CD5A0u);
    ctx->pc = 0x1CD59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD598u;
    // 0x1cd59c: 0xc6340338  lwc1        $f20, 0x338($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD5A0u;
label_1cd5a0:
    // 0x1cd5a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd5a4:
    // 0x1cd5a4: 0xc62002d4  lwc1        $f0, 0x2D4($s1)
    ctx->pc = 0x1cd5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd5a8:
    // 0x1cd5a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd5ac:
    // 0x1cd5ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cd5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cd5b0:
    // 0x1cd5b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cd5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cd5b4:
    // 0x1cd5b4: 0x0  nop
    ctx->pc = 0x1cd5b4u;
    // NOP
label_1cd5b8:
    // 0x1cd5b8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1cd5b8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_1cd5bc:
    // 0x1cd5bc: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x1cd5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
label_1cd5c0:
    // 0x1cd5c0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1cd5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1cd5c4:
    // 0x1cd5c4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1cd5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1cd5c8:
    // 0x1cd5c8: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x1cd5c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_1cd5cc:
    // 0x1cd5cc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1cd5ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cd5d0:
    // 0x1cd5d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd5d4:
    // 0x1cd5d4: 0x0  nop
    ctx->pc = 0x1cd5d4u;
    // NOP
label_1cd5d8:
    // 0x1cd5d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cd5d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cd5dc:
    // 0x1cd5dc: 0x0  nop
    ctx->pc = 0x1cd5dcu;
    // NOP
label_1cd5e0:
    // 0x1cd5e0: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
label_1cd5e4:
    if (ctx->pc == 0x1CD5E4u) {
        ctx->pc = 0x1CD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5E0u;
        // 0x1cd5e4: 0xe62102d4  swc1        $f1, 0x2D4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD5E8u;
        goto label_1cd5e8;
    }
    ctx->pc = 0x1CD5E0u;
    {
        const bool branch_taken_0x1cd5e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5E0u;
        // 0x1cd5e4: 0xe62102d4  swc1        $f1, 0x2D4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5e0) {
            ctx->pc = 0x1CD68Cu;
            goto label_1cd68c;
        }
    }
    ctx->pc = 0x1CD5E8u;
label_1cd5e8:
    // 0x1cd5e8: 0xc08f0cc  jal         func_23C330
label_1cd5ec:
    if (ctx->pc == 0x1CD5ECu) {
        ctx->pc = 0x1CD5F0u;
        goto label_1cd5f0;
    }
    ctx->pc = 0x1CD5E8u;
    SET_GPR_U32(ctx, 31, 0x1CD5F0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD5F0u;
label_1cd5f0:
    // 0x1cd5f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd5f4:
    // 0x1cd5f4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1cd5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_1cd5f8:
    // 0x1cd5f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd5f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd5fc:
    // 0x1cd5fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cd5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cd600:
    // 0x1cd600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd604:
    // 0x1cd604: 0x0  nop
    ctx->pc = 0x1cd604u;
    // NOP
label_1cd608:
    // 0x1cd608: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1cd608u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_1cd60c:
    // 0x1cd60c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1cd610:
    // 0x1cd610: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1cd610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1cd614:
    // 0x1cd614: 0x3c023c09  lui         $v0, 0x3C09
    ctx->pc = 0x1cd614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15369 << 16));
label_1cd618:
    // 0x1cd618: 0x3442a027  ori         $v0, $v0, 0xA027
    ctx->pc = 0x1cd618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40999);
label_1cd61c:
    // 0x1cd61c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cd61cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd620:
    // 0x1cd620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd624:
    // 0x1cd624: 0x0  nop
    ctx->pc = 0x1cd624u;
    // NOP
label_1cd628:
    // 0x1cd628: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cd628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cd62c:
    // 0x1cd62c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cd62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cd630:
    // 0x1cd630: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1cd630u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1cd634:
    // 0x1cd634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd638:
    // 0x1cd638: 0x0  nop
    ctx->pc = 0x1cd638u;
    // NOP
label_1cd63c:
    // 0x1cd63c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd63cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cd640:
    // 0x1cd640: 0xc08f0cc  jal         func_23C330
label_1cd644:
    if (ctx->pc == 0x1CD644u) {
        ctx->pc = 0x1CD644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD640u;
        // 0x1cd644: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD648u;
        goto label_1cd648;
    }
    ctx->pc = 0x1CD640u;
    SET_GPR_U32(ctx, 31, 0x1CD648u);
    ctx->pc = 0x1CD644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD640u;
    // 0x1cd644: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD648u;
label_1cd648:
    // 0x1cd648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd64c:
    // 0x1cd64c: 0x0  nop
    ctx->pc = 0x1cd64cu;
    // NOP
label_1cd650:
    // 0x1cd650: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd654:
    // 0x1cd654: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cd654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cd658:
    // 0x1cd658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd65c:
    // 0x1cd65c: 0x0  nop
    ctx->pc = 0x1cd65cu;
    // NOP
label_1cd660:
    // 0x1cd660: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1cd660u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_1cd664:
    // 0x1cd664: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1cd664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_1cd668:
    // 0x1cd668: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1cd668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1cd66c:
    // 0x1cd66c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cd670:
    // 0x1cd670: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd674:
    // 0x1cd674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd678:
    // 0x1cd678: 0x0  nop
    ctx->pc = 0x1cd678u;
    // NOP
label_1cd67c:
    // 0x1cd67c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cd67cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cd680:
    // 0x1cd680: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cd680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cd684:
    // 0x1cd684: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cd688:
    if (ctx->pc == 0x1CD688u) {
        ctx->pc = 0x1CD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD684u;
        // 0x1cd688: 0xe620033c  swc1        $f0, 0x33C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 828), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD68Cu;
        goto label_1cd68c;
    }
    ctx->pc = 0x1CD684u;
    {
        const bool branch_taken_0x1cd684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD684u;
        // 0x1cd688: 0xe620033c  swc1        $f0, 0x33C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 828), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd684) {
            ctx->pc = 0x1CD6ACu;
            goto label_1cd6ac;
        }
    }
    ctx->pc = 0x1CD68Cu;
label_1cd68c:
    // 0x1cd68c: 0xc620033c  lwc1        $f0, 0x33C($s1)
    ctx->pc = 0x1cd68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd690:
    // 0x1cd690: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cd690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cd694:
    // 0x1cd694: 0x0  nop
    ctx->pc = 0x1cd694u;
    // NOP
label_1cd698:
    // 0x1cd698: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1cd69c:
    if (ctx->pc == 0x1CD69Cu) {
        ctx->pc = 0x1CD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD698u;
        // 0x1cd69c: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD6A0u;
        goto label_1cd6a0;
    }
    ctx->pc = 0x1CD698u;
    {
        const bool branch_taken_0x1cd698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD698u;
        // 0x1cd69c: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd698) {
            ctx->pc = 0x1CD6B0u;
            goto label_1cd6b0;
        }
    }
    ctx->pc = 0x1CD6A0u;
label_1cd6a0:
    // 0x1cd6a0: 0x3c023c09  lui         $v0, 0x3C09
    ctx->pc = 0x1cd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15369 << 16));
label_1cd6a4:
    // 0x1cd6a4: 0x3442a027  ori         $v0, $v0, 0xA027
    ctx->pc = 0x1cd6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40999);
label_1cd6a8:
    // 0x1cd6a8: 0xae220338  sw          $v0, 0x338($s1)
    ctx->pc = 0x1cd6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
label_1cd6ac:
    // 0x1cd6ac: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1cd6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1cd6b0:
    // 0x1cd6b0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cd6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1cd6b4:
    // 0x1cd6b4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1cd6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1cd6b8:
    // 0x1cd6b8: 0xc6240330  lwc1        $f4, 0x330($s1)
    ctx->pc = 0x1cd6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1cd6bc:
    // 0x1cd6bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cd6c0:
    // 0x1cd6c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cd6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cd6c4:
    // 0x1cd6c4: 0xc62302d4  lwc1        $f3, 0x2D4($s1)
    ctx->pc = 0x1cd6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cd6c8:
    // 0x1cd6c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cd6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1cd6cc:
    // 0x1cd6cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd6d0:
    // 0x1cd6d0: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1cd6d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_1cd6d4:
    // 0x1cd6d4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1cd6d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1cd6d8:
    // 0x1cd6d8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1cd6d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_1cd6dc:
    // 0x1cd6dc: 0xc6200334  lwc1        $f0, 0x334($s1)
    ctx->pc = 0x1cd6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd6e0:
    // 0x1cd6e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cd6e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cd6e4:
    // 0x1cd6e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cd6e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1cd6e8:
    // 0x1cd6e8: 0xe6200254  swc1        $f0, 0x254($s1)
    ctx->pc = 0x1cd6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 596), bits); }
label_1cd6ec:
    // 0x1cd6ec: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1cd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1cd6f0:
    // 0x1cd6f0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1cd6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1cd6f4:
    // 0x1cd6f4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1cd6f8:
    if (ctx->pc == 0x1CD6F8u) {
        ctx->pc = 0x1CD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6F4u;
        // 0x1cd6f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD6FCu;
        goto label_1cd6fc;
    }
    ctx->pc = 0x1CD6F4u;
    {
        const bool branch_taken_0x1cd6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6F4u;
        // 0x1cd6f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd6f4) {
            ctx->pc = 0x1CD770u;
            goto label_1cd770;
        }
    }
    ctx->pc = 0x1CD6FCu;
label_1cd6fc:
    // 0x1cd6fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cd6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd700:
    // 0x1cd700: 0xc06468c  jal         func_191A30
label_1cd704:
    if (ctx->pc == 0x1CD704u) {
        ctx->pc = 0x1CD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD700u;
        // 0x1cd704: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD708u;
        goto label_1cd708;
    }
    ctx->pc = 0x1CD700u;
    SET_GPR_U32(ctx, 31, 0x1CD708u);
    ctx->pc = 0x1CD704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD700u;
    // 0x1cd704: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x1CD700u, 0x1CD708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD708u;
label_1cd708:
    // 0x1cd708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd70c:
    // 0x1cd70c: 0xc06468c  jal         func_191A30
label_1cd710:
    if (ctx->pc == 0x1CD710u) {
        ctx->pc = 0x1CD710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD70Cu;
        // 0x1cd710: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD714u;
        goto label_1cd714;
    }
    ctx->pc = 0x1CD70Cu;
    SET_GPR_U32(ctx, 31, 0x1CD714u);
    ctx->pc = 0x1CD710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD70Cu;
    // 0x1cd710: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x1CD70Cu, 0x1CD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD714u;
label_1cd714:
    // 0x1cd714: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cd714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cd718:
    // 0x1cd718: 0xc0646f8  jal         func_191BE0
label_1cd71c:
    if (ctx->pc == 0x1CD71Cu) {
        ctx->pc = 0x1CD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD718u;
        // 0x1cd71c: 0x26250250  addiu       $a1, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD720u;
        goto label_1cd720;
    }
    ctx->pc = 0x1CD718u;
    SET_GPR_U32(ctx, 31, 0x1CD720u);
    ctx->pc = 0x1CD71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD718u;
    // 0x1cd71c: 0x26250250  addiu       $a1, $s1, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191BE0u, 0x1CD718u, 0x1CD720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD720u;
label_1cd720:
    // 0x1cd720: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1cd720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_1cd724:
    // 0x1cd724: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd728:
    // 0x1cd728: 0x0  nop
    ctx->pc = 0x1cd728u;
    // NOP
label_1cd72c:
    // 0x1cd72c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cd72cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cd730:
    // 0x1cd730: 0x0  nop
    ctx->pc = 0x1cd730u;
    // NOP
label_1cd734:
    // 0x1cd734: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1cd738:
    if (ctx->pc == 0x1CD738u) {
        ctx->pc = 0x1CD738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD734u;
        // 0x1cd738: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD73Cu;
        goto label_1cd73c;
    }
    ctx->pc = 0x1CD734u;
    {
        const bool branch_taken_0x1cd734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD734u;
        // 0x1cd738: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd734) {
            ctx->pc = 0x1CD744u;
            goto label_1cd744;
        }
    }
    ctx->pc = 0x1CD73Cu;
label_1cd73c:
    // 0x1cd73c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1cd740:
    if (ctx->pc == 0x1CD740u) {
        ctx->pc = 0x1CD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD73Cu;
        // 0x1cd740: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD744u;
        goto label_1cd744;
    }
    ctx->pc = 0x1CD73Cu;
    {
        const bool branch_taken_0x1cd73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD73Cu;
        // 0x1cd740: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd73c) {
            ctx->pc = 0x1CD7A8u;
            goto label_1cd7a8;
        }
    }
    ctx->pc = 0x1CD744u;
label_1cd744:
    // 0x1cd744: 0xc0646f8  jal         func_191BE0
label_1cd748:
    if (ctx->pc == 0x1CD748u) {
        ctx->pc = 0x1CD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD744u;
        // 0x1cd748: 0x26250250  addiu       $a1, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD74Cu;
        goto label_1cd74c;
    }
    ctx->pc = 0x1CD744u;
    SET_GPR_U32(ctx, 31, 0x1CD74Cu);
    ctx->pc = 0x1CD748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD744u;
    // 0x1cd748: 0x26250250  addiu       $a1, $s1, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191BE0u, 0x1CD744u, 0x1CD74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD74Cu;
label_1cd74c:
    // 0x1cd74c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1cd74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_1cd750:
    // 0x1cd750: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd754:
    // 0x1cd754: 0x0  nop
    ctx->pc = 0x1cd754u;
    // NOP
label_1cd758:
    // 0x1cd758: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cd758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cd75c:
    // 0x1cd75c: 0x0  nop
    ctx->pc = 0x1cd75cu;
    // NOP
label_1cd760:
    // 0x1cd760: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1cd764:
    if (ctx->pc == 0x1CD764u) {
        ctx->pc = 0x1CD768u;
        goto label_1cd768;
    }
    ctx->pc = 0x1CD760u;
    {
        const bool branch_taken_0x1cd760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd760) {
            ctx->pc = 0x1CD7A8u;
            goto label_1cd7a8;
        }
    }
    ctx->pc = 0x1CD768u;
label_1cd768:
    // 0x1cd768: 0x1000000f  b           . + 4 + (0xF << 2)
label_1cd76c:
    if (ctx->pc == 0x1CD76Cu) {
        ctx->pc = 0x1CD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD768u;
        // 0x1cd76c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD770u;
        goto label_1cd770;
    }
    ctx->pc = 0x1CD768u;
    {
        const bool branch_taken_0x1cd768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD768u;
        // 0x1cd76c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd768) {
            ctx->pc = 0x1CD7A8u;
            goto label_1cd7a8;
        }
    }
    ctx->pc = 0x1CD770u;
label_1cd770:
    // 0x1cd770: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cd770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd774:
    // 0x1cd774: 0xc06468c  jal         func_191A30
label_1cd778:
    if (ctx->pc == 0x1CD778u) {
        ctx->pc = 0x1CD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD774u;
        // 0x1cd778: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD77Cu;
        goto label_1cd77c;
    }
    ctx->pc = 0x1CD774u;
    SET_GPR_U32(ctx, 31, 0x1CD77Cu);
    ctx->pc = 0x1CD778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD774u;
    // 0x1cd778: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x1CD774u, 0x1CD77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD77Cu;
label_1cd77c:
    // 0x1cd77c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cd77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cd780:
    // 0x1cd780: 0xc0646f8  jal         func_191BE0
label_1cd784:
    if (ctx->pc == 0x1CD784u) {
        ctx->pc = 0x1CD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD780u;
        // 0x1cd784: 0x26250250  addiu       $a1, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD788u;
        goto label_1cd788;
    }
    ctx->pc = 0x1CD780u;
    SET_GPR_U32(ctx, 31, 0x1CD788u);
    ctx->pc = 0x1CD784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD780u;
    // 0x1cd784: 0x26250250  addiu       $a1, $s1, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191BE0u, 0x1CD780u, 0x1CD788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD788u;
label_1cd788:
    // 0x1cd788: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1cd788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
label_1cd78c:
    // 0x1cd78c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd790:
    // 0x1cd790: 0x0  nop
    ctx->pc = 0x1cd790u;
    // NOP
label_1cd794:
    // 0x1cd794: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cd794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cd798:
    // 0x1cd798: 0x0  nop
    ctx->pc = 0x1cd798u;
    // NOP
label_1cd79c:
    // 0x1cd79c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1cd7a0:
    if (ctx->pc == 0x1CD7A0u) {
        ctx->pc = 0x1CD7A4u;
        goto label_1cd7a4;
    }
    ctx->pc = 0x1CD79Cu;
    {
        const bool branch_taken_0x1cd79c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd79c) {
            ctx->pc = 0x1CD7A8u;
            goto label_1cd7a8;
        }
    }
    ctx->pc = 0x1CD7A4u;
label_1cd7a4:
    // 0x1cd7a4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1cd7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd7a8:
    // 0x1cd7a8: 0x12000064  beqz        $s0, . + 4 + (0x64 << 2)
label_1cd7ac:
    if (ctx->pc == 0x1CD7ACu) {
        ctx->pc = 0x1CD7B0u;
        goto label_1cd7b0;
    }
    ctx->pc = 0x1CD7A8u;
    {
        const bool branch_taken_0x1cd7a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd7a8) {
            ctx->pc = 0x1CD93Cu;
            goto label_1cd93c;
        }
    }
    ctx->pc = 0x1CD7B0u;
label_1cd7b0:
    // 0x1cd7b0: 0xc08f0cc  jal         func_23C330
label_1cd7b4:
    if (ctx->pc == 0x1CD7B4u) {
        ctx->pc = 0x1CD7B8u;
        goto label_1cd7b8;
    }
    ctx->pc = 0x1CD7B0u;
    SET_GPR_U32(ctx, 31, 0x1CD7B8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD7B8u;
label_1cd7b8:
    // 0x1cd7b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd7bc:
    // 0x1cd7bc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cd7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cd7c0:
    // 0x1cd7c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd7c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd7c4:
    // 0x1cd7c4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1cd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_1cd7c8:
    // 0x1cd7c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd7cc:
    // 0x1cd7cc: 0x0  nop
    ctx->pc = 0x1cd7ccu;
    // NOP
label_1cd7d0:
    // 0x1cd7d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd7d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cd7d4:
    // 0x1cd7d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cd7d8:
    // 0x1cd7d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd7d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd7dc:
    // 0x1cd7dc: 0x0  nop
    ctx->pc = 0x1cd7dcu;
    // NOP
label_1cd7e0:
    // 0x1cd7e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cd7e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1cd7e4:
    // 0x1cd7e4: 0x0  nop
    ctx->pc = 0x1cd7e4u;
    // NOP
label_1cd7e8:
    // 0x1cd7e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cd7e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cd7ec:
    // 0x1cd7ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cd7ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1cd7f0:
    // 0x1cd7f0: 0x0  nop
    ctx->pc = 0x1cd7f0u;
    // NOP
label_1cd7f4:
    // 0x1cd7f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1cd7f8:
    if (ctx->pc == 0x1CD7F8u) {
        ctx->pc = 0x1CD7FCu;
        goto label_1cd7fc;
    }
    ctx->pc = 0x1CD7F4u;
    {
        const bool branch_taken_0x1cd7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cd7f4) {
            ctx->pc = 0x1CD808u;
            goto label_1cd808;
        }
    }
    ctx->pc = 0x1CD7FCu;
label_1cd7fc:
    // 0x1cd7fc: 0xc62c0330  lwc1        $f12, 0x330($s1)
    ctx->pc = 0x1cd7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cd800:
    // 0x1cd800: 0xc073658  jal         func_1CD960
label_1cd804:
    if (ctx->pc == 0x1CD804u) {
        ctx->pc = 0x1CD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD800u;
        // 0x1cd804: 0x26240250  addiu       $a0, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD808u;
        goto label_1cd808;
    }
    ctx->pc = 0x1CD800u;
    SET_GPR_U32(ctx, 31, 0x1CD808u);
    ctx->pc = 0x1CD804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD800u;
    // 0x1cd804: 0x26240250  addiu       $a0, $s1, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD960u;
    goto label_1cd960;
    ctx->pc = 0x1CD808u;
label_1cd808:
    // 0x1cd808: 0xc08f0cc  jal         func_23C330
label_1cd80c:
    if (ctx->pc == 0x1CD80Cu) {
        ctx->pc = 0x1CD810u;
        goto label_1cd810;
    }
    ctx->pc = 0x1CD808u;
    SET_GPR_U32(ctx, 31, 0x1CD810u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD810u;
label_1cd810:
    // 0x1cd810: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd814:
    // 0x1cd814: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1cd814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_1cd818:
    // 0x1cd818: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd81c:
    // 0x1cd81c: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1cd81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_1cd820:
    // 0x1cd820: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd824:
    // 0x1cd824: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cd824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cd828:
    // 0x1cd828: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1cd828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cd82c:
    // 0x1cd82c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cd82cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd830:
    // 0x1cd830: 0x0  nop
    ctx->pc = 0x1cd830u;
    // NOP
label_1cd834:
    // 0x1cd834: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cd834u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cd838:
    // 0x1cd838: 0x0  nop
    ctx->pc = 0x1cd838u;
    // NOP
label_1cd83c:
    // 0x1cd83c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cd83cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cd840:
    // 0x1cd840: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1cd840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1cd844:
    // 0x1cd844: 0x0  nop
    ctx->pc = 0x1cd844u;
    // NOP
label_1cd848:
    // 0x1cd848: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
label_1cd84c:
    if (ctx->pc == 0x1CD84Cu) {
        ctx->pc = 0x1CD850u;
        goto label_1cd850;
    }
    ctx->pc = 0x1CD848u;
    {
        const bool branch_taken_0x1cd848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cd848) {
            ctx->pc = 0x1CD93Cu;
            goto label_1cd93c;
        }
    }
    ctx->pc = 0x1CD850u;
label_1cd850:
    // 0x1cd850: 0xc6340330  lwc1        $f20, 0x330($s1)
    ctx->pc = 0x1cd850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cd854:
    // 0x1cd854: 0xc0590dc  jal         func_164370
label_1cd858:
    if (ctx->pc == 0x1CD858u) {
        ctx->pc = 0x1CD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD854u;
        // 0x1cd858: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD85Cu;
        goto label_1cd85c;
    }
    ctx->pc = 0x1CD854u;
    SET_GPR_U32(ctx, 31, 0x1CD85Cu);
    ctx->pc = 0x1CD858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD854u;
    // 0x1cd858: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1CD854u, 0x1CD85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD85Cu;
label_1cd85c:
    // 0x1cd85c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd860:
    // 0x1cd860: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_1cd864:
    if (ctx->pc == 0x1CD864u) {
        ctx->pc = 0x1CD864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD860u;
        // 0x1cd864: 0x26250250  addiu       $a1, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD868u;
        goto label_1cd868;
    }
    ctx->pc = 0x1CD860u;
    {
        const bool branch_taken_0x1cd860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD860u;
        // 0x1cd864: 0x26250250  addiu       $a1, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd860) {
            ctx->pc = 0x1CD93Cu;
            goto label_1cd93c;
        }
    }
    ctx->pc = 0x1CD868u;
label_1cd868:
    // 0x1cd868: 0xc066e26  jal         func_19B898
label_1cd86c:
    if (ctx->pc == 0x1CD86Cu) {
        ctx->pc = 0x1CD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD868u;
        // 0x1cd86c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD870u;
        goto label_1cd870;
    }
    ctx->pc = 0x1CD868u;
    SET_GPR_U32(ctx, 31, 0x1CD870u);
    ctx->pc = 0x1CD86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD868u;
    // 0x1cd86c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1CD870u;
label_1cd870:
    // 0x1cd870: 0x3c023eb3  lui         $v0, 0x3EB3
    ctx->pc = 0x1cd870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16051 << 16));
label_1cd874:
    // 0x1cd874: 0xdf868ae8  ld          $a2, -0x7518($gp)
    ctx->pc = 0x1cd874u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937320)));
label_1cd878:
    // 0x1cd878: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x1cd878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_1cd87c:
    // 0x1cd87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd880:
    // 0x1cd880: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd884:
    // 0x1cd884: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1cd884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_1cd888:
    // 0x1cd888: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1cd888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cd88c:
    // 0x1cd88c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1cd88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1cd890:
    // 0x1cd890: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1cd890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1cd894:
    // 0x1cd894: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x1cd894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1cd898:
    // 0x1cd898: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1cd898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cd89c:
    // 0x1cd89c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd8a0:
    // 0x1cd8a0: 0x0  nop
    ctx->pc = 0x1cd8a0u;
    // NOP
label_1cd8a4:
    // 0x1cd8a4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1cd8a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1cd8a8:
    // 0x1cd8a8: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1cd8a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1cd8ac:
    // 0x1cd8ac: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1cd8acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1cd8b0:
    // 0x1cd8b0: 0xc0717e8  jal         func_1C5FA0
label_1cd8b4:
    if (ctx->pc == 0x1CD8B4u) {
        ctx->pc = 0x1CD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8B0u;
        // 0x1cd8b4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD8B8u;
        goto label_1cd8b8;
    }
    ctx->pc = 0x1CD8B0u;
    SET_GPR_U32(ctx, 31, 0x1CD8B8u);
    ctx->pc = 0x1CD8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8B0u;
    // 0x1cd8b4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    { ctx->pc = 0x1c5fa0; return; }
    ctx->pc = 0x1CD8B8u;
label_1cd8b8:
    // 0x1cd8b8: 0xc0717c8  jal         func_1C5F20
label_1cd8bc:
    if (ctx->pc == 0x1CD8BCu) {
        ctx->pc = 0x1CD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8B8u;
        // 0x1cd8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD8C0u;
        goto label_1cd8c0;
    }
    ctx->pc = 0x1CD8B8u;
    SET_GPR_U32(ctx, 31, 0x1CD8C0u);
    ctx->pc = 0x1CD8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8B8u;
    // 0x1cd8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    { ctx->pc = 0x1c5f20; return; }
    ctx->pc = 0x1CD8C0u;
label_1cd8c0:
    // 0x1cd8c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cd8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cd8c4:
    // 0x1cd8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd8c8:
    // 0x1cd8c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1cd8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd8cc:
    // 0x1cd8cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1cd8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd8d0:
    // 0x1cd8d0: 0xc071400  jal         func_1C5000
label_1cd8d4:
    if (ctx->pc == 0x1CD8D4u) {
        ctx->pc = 0x1CD8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8D0u;
        // 0x1cd8d4: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD8D8u;
        goto label_1cd8d8;
    }
    ctx->pc = 0x1CD8D0u;
    SET_GPR_U32(ctx, 31, 0x1CD8D8u);
    ctx->pc = 0x1CD8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8D0u;
    // 0x1cd8d4: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    { ctx->pc = 0x1c5000; return; }
    ctx->pc = 0x1CD8D8u;
label_1cd8d8:
    // 0x1cd8d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cd8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cd8dc:
    // 0x1cd8dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd8e0:
    // 0x1cd8e0: 0xa20302e1  sb          $v1, 0x2E1($s0)
    ctx->pc = 0x1cd8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 3));
label_1cd8e4:
    // 0x1cd8e4: 0xa20202eb  sb          $v0, 0x2EB($s0)
    ctx->pc = 0x1cd8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 2));
label_1cd8e8:
    // 0x1cd8e8: 0xc08f0cc  jal         func_23C330
label_1cd8ec:
    if (ctx->pc == 0x1CD8ECu) {
        ctx->pc = 0x1CD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8E8u;
        // 0x1cd8ec: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD8F0u;
        goto label_1cd8f0;
    }
    ctx->pc = 0x1CD8E8u;
    SET_GPR_U32(ctx, 31, 0x1CD8F0u);
    ctx->pc = 0x1CD8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8E8u;
    // 0x1cd8ec: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD8F0u;
label_1cd8f0:
    // 0x1cd8f0: 0x920502ea  lbu         $a1, 0x2EA($s0)
    ctx->pc = 0x1cd8f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 746)));
label_1cd8f4:
    // 0x1cd8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd8f8:
    // 0x1cd8f8: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_1cd8fc:
    // 0x1cd8fc: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1cd8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_1cd900:
    // 0x1cd900: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cd900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cd904:
    // 0x1cd904: 0x2463dc80  addiu       $v1, $v1, -0x2380
    ctx->pc = 0x1cd904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958208));
label_1cd908:
    // 0x1cd908: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x1cd908u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1cd90c:
    // 0x1cd90c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1cd90cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd910:
    // 0x1cd910: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cd910u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd914:
    // 0x1cd914: 0x0  nop
    ctx->pc = 0x1cd914u;
    // NOP
label_1cd918:
    // 0x1cd918: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd91c:
    // 0x1cd91c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cd91cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cd920:
    // 0x1cd920: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cd920u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cd924:
    // 0x1cd924: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cd924u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cd928:
    // 0x1cd928: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1cd928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1cd92c:
    // 0x1cd92c: 0x0  nop
    ctx->pc = 0x1cd92cu;
    // NOP
label_1cd930:
    // 0x1cd930: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1cd930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1cd934:
    // 0x1cd934: 0xa20402e8  sb          $a0, 0x2E8($s0)
    ctx->pc = 0x1cd934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 4));
label_1cd938:
    // 0x1cd938: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x1cd938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_1cd93c:
    // 0x1cd93c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cd93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cd940:
    // 0x1cd940: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cd940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cd944:
    // 0x1cd944: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cd944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cd948:
    // 0x1cd948: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cd948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cd94c:
    // 0x1cd94c: 0x3e00008  jr          $ra
label_1cd950:
    if (ctx->pc == 0x1CD950u) {
        ctx->pc = 0x1CD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD94Cu;
        // 0x1cd950: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD954u;
        goto label_1cd954;
    }
    ctx->pc = 0x1CD94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD94Cu;
        // 0x1cd950: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD954u;
label_1cd954:
    // 0x1cd954: 0x0  nop
    ctx->pc = 0x1cd954u;
    // NOP
label_1cd958:
    // 0x1cd958: 0x0  nop
    ctx->pc = 0x1cd958u;
    // NOP
label_1cd95c:
    // 0x1cd95c: 0x0  nop
    ctx->pc = 0x1cd95cu;
    // NOP
label_1cd960:
    // 0x1cd960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cd960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1cd964:
    // 0x1cd964: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cd964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1cd968:
    // 0x1cd968: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cd968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cd96c:
    // 0x1cd96c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cd970:
    // 0x1cd970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd974:
    // 0x1cd974: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cd974u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cd978:
    // 0x1cd978: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1cd978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cd97c:
    // 0x1cd97c: 0xc0590dc  jal         func_164370
label_1cd980:
    if (ctx->pc == 0x1CD980u) {
        ctx->pc = 0x1CD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD97Cu;
        // 0x1cd980: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD984u;
        goto label_1cd984;
    }
    ctx->pc = 0x1CD97Cu;
    SET_GPR_U32(ctx, 31, 0x1CD984u);
    ctx->pc = 0x1CD980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD97Cu;
    // 0x1cd980: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1CD97Cu, 0x1CD984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD984u;
label_1cd984:
    // 0x1cd984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd988:
    // 0x1cd988: 0x12000083  beqz        $s0, . + 4 + (0x83 << 2)
label_1cd98c:
    if (ctx->pc == 0x1CD98Cu) {
        ctx->pc = 0x1CD98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD988u;
        // 0x1cd98c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD990u;
        goto label_1cd990;
    }
    ctx->pc = 0x1CD988u;
    {
        const bool branch_taken_0x1cd988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD988u;
        // 0x1cd98c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd988) {
            ctx->pc = 0x1CDB98u;
            { ctx->pc = 0x1cdb98; return; }
        }
    }
    ctx->pc = 0x1CD990u;
label_1cd990:
    // 0x1cd990: 0xc066e26  jal         func_19B898
label_1cd994:
    if (ctx->pc == 0x1CD994u) {
        ctx->pc = 0x1CD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD990u;
        // 0x1cd994: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD998u;
        goto label_1cd998;
    }
    ctx->pc = 0x1CD990u;
    SET_GPR_U32(ctx, 31, 0x1CD998u);
    ctx->pc = 0x1CD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD990u;
    // 0x1cd994: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1CD998u;
label_1cd998:
    // 0x1cd998: 0xc08f0cc  jal         func_23C330
label_1cd99c:
    if (ctx->pc == 0x1CD99Cu) {
        ctx->pc = 0x1CD9A0u;
        goto label_1cd9a0;
    }
    ctx->pc = 0x1CD998u;
    SET_GPR_U32(ctx, 31, 0x1CD9A0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD9A0u;
label_1cd9a0:
    // 0x1cd9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd9a4:
    // 0x1cd9a4: 0x0  nop
    ctx->pc = 0x1cd9a4u;
    // NOP
label_1cd9a8:
    // 0x1cd9a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cd9a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cd9ac:
    // 0x1cd9ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cd9b0:
    // 0x1cd9b0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1cd9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1cd9b4:
    // 0x1cd9b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cd9b8:
    // 0x1cd9b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd9b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd9bc:
    // 0x1cd9bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cd9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cd9c0:
    // 0x1cd9c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cd9c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cd9c4:
    // 0x1cd9c4: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1cd9c4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[2];
label_1cd9c8:
    // 0x1cd9c8: 0x0  nop
    ctx->pc = 0x1cd9c8u;
    // NOP
label_1cd9cc:
    // 0x1cd9cc: 0x0  nop
    ctx->pc = 0x1cd9ccu;
    // NOP
label_1cd9d0:
    // 0x1cd9d0: 0xc06d412  jal         func_1B5048
label_1cd9d4:
    if (ctx->pc == 0x1CD9D4u) {
        ctx->pc = 0x1CD9D8u;
        goto label_1cd9d8;
    }
    ctx->pc = 0x1CD9D0u;
    SET_GPR_U32(ctx, 31, 0x1CD9D8u);
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1CD9D8u;
label_1cd9d8:
    // 0x1cd9d8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1cd9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_1cd9dc:
    // 0x1cd9dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cd9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cd9e0:
    // 0x1cd9e0: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1cd9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd9e4:
    // 0x1cd9e4: 0x46141502  mul.s       $f20, $f2, $f20
    ctx->pc = 0x1cd9e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1cd9e8:
    // 0x1cd9e8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cd9e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1cd9ec:
    // 0x1cd9ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cd9ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cd9f0:
    // 0x1cd9f0: 0xc08f0cc  jal         func_23C330
label_1cd9f4:
    if (ctx->pc == 0x1CD9F4u) {
        ctx->pc = 0x1CD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9F0u;
        // 0x1cd9f4: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD9F8u;
        goto label_1cd9f8;
    }
    ctx->pc = 0x1CD9F0u;
    SET_GPR_U32(ctx, 31, 0x1CD9F8u);
    ctx->pc = 0x1CD9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9F0u;
    // 0x1cd9f4: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD9F8u;
label_1cd9f8:
    // 0x1cd9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd9fc:
    // 0x1cd9fc: 0x0  nop
    ctx->pc = 0x1cd9fcu;
    // NOP
label_1cda00:
    // 0x1cda00: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cda00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cda04:
    // 0x1cda04: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cda04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cda08:
    // 0x1cda08: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1cda08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1cda0c:
    // 0x1cda0c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cda10:
    // 0x1cda10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cda10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cda14:
    // 0x1cda14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cda14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cda18:
    // 0x1cda18: 0x0  nop
    ctx->pc = 0x1cda18u;
    // NOP
label_1cda1c:
    // 0x1cda1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cda1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cda20:
    // 0x1cda20: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1cda20u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_1cda24:
    // 0x1cda24: 0x0  nop
    ctx->pc = 0x1cda24u;
    // NOP
label_1cda28:
    // 0x1cda28: 0x0  nop
    ctx->pc = 0x1cda28u;
    // NOP
label_1cda2c:
    // 0x1cda2c: 0xc06d412  jal         func_1B5048
label_1cda30:
    if (ctx->pc == 0x1CDA30u) {
        ctx->pc = 0x1CDA34u;
        goto label_1cda34;
    }
    ctx->pc = 0x1CDA2Cu;
    SET_GPR_U32(ctx, 31, 0x1CDA34u);
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1CDA34u;
label_1cda34:
    // 0x1cda34: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1cda34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1cda38:
    // 0x1cda38: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1cda38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cda3c:
    // 0x1cda3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cda3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cda40:
    // 0x1cda40: 0xc08f0cc  jal         func_23C330
label_1cda44:
    if (ctx->pc == 0x1CDA44u) {
        ctx->pc = 0x1CDA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA40u;
        // 0x1cda44: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA48u;
        goto label_1cda48;
    }
    ctx->pc = 0x1CDA40u;
    SET_GPR_U32(ctx, 31, 0x1CDA48u);
    ctx->pc = 0x1CDA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDA40u;
    // 0x1cda44: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CDA48u;
label_1cda48:
    // 0x1cda48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cda48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cda4c:
    // 0x1cda4c: 0x0  nop
    ctx->pc = 0x1cda4cu;
    // NOP
label_1cda50:
    // 0x1cda50: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cda50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cda54:
    // 0x1cda54: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cda54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cda58:
    // 0x1cda58: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1cda58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1cda5c:
    // 0x1cda5c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cda5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cda60:
    // 0x1cda60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cda60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cda64:
    // 0x1cda64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cda64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cda68:
    // 0x1cda68: 0x0  nop
    ctx->pc = 0x1cda68u;
    // NOP
label_1cda6c:
    // 0x1cda6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cda6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cda70:
    // 0x1cda70: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1cda70u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_1cda74:
    // 0x1cda74: 0x0  nop
    ctx->pc = 0x1cda74u;
    // NOP
label_1cda78:
    // 0x1cda78: 0x0  nop
    ctx->pc = 0x1cda78u;
    // NOP
label_1cda7c:
    // 0x1cda7c: 0xc06d412  jal         func_1B5048
label_1cda80:
    if (ctx->pc == 0x1CDA80u) {
        ctx->pc = 0x1CDA84u;
        goto label_1cda84;
    }
    ctx->pc = 0x1CDA7Cu;
    SET_GPR_U32(ctx, 31, 0x1CDA84u);
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1CDA84u;
label_1cda84:
    // 0x1cda84: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1cda84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1cda88:
    // 0x1cda88: 0xdf868a10  ld          $a2, -0x75F0($gp)
    ctx->pc = 0x1cda88u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937104)));
label_1cda8c:
    // 0x1cda8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cda8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cda90:
    // 0x1cda90: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1cda90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cda94:
    // 0x1cda94: 0x24070049  addiu       $a3, $zero, 0x49
    ctx->pc = 0x1cda94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_1cda98:
    // 0x1cda98: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1cda98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cda9c:
    // 0x1cda9c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1cda9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cdaa0:
    // 0x1cdaa0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cdaa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1cdaa4:
    // 0x1cdaa4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1cdaa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1cdaa8:
    // 0x1cdaa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cdaa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cdaac:
    // 0x1cdaac: 0xc0717e8  jal         func_1C5FA0
label_1cdab0:
    if (ctx->pc == 0x1CDAB0u) {
        ctx->pc = 0x1CDAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAACu;
        // 0x1cdab0: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDAB4u;
        goto label_1cdab4;
    }
    ctx->pc = 0x1CDAACu;
    SET_GPR_U32(ctx, 31, 0x1CDAB4u);
    ctx->pc = 0x1CDAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAACu;
    // 0x1cdab0: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    { ctx->pc = 0x1c5fa0; return; }
    ctx->pc = 0x1CDAB4u;
label_1cdab4:
    // 0x1cdab4: 0xc0717c8  jal         func_1C5F20
label_1cdab8:
    if (ctx->pc == 0x1CDAB8u) {
        ctx->pc = 0x1CDAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAB4u;
        // 0x1cdab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDABCu;
        goto label_1cdabc;
    }
    ctx->pc = 0x1CDAB4u;
    SET_GPR_U32(ctx, 31, 0x1CDABCu);
    ctx->pc = 0x1CDAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAB4u;
    // 0x1cdab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    { ctx->pc = 0x1c5f20; return; }
    ctx->pc = 0x1CDABCu;
label_1cdabc:
    // 0x1cdabc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cdac0:
    // 0x1cdac0: 0xa20202e1  sb          $v0, 0x2E1($s0)
    ctx->pc = 0x1cdac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 2));
label_1cdac4:
    // 0x1cdac4: 0xa20202eb  sb          $v0, 0x2EB($s0)
    ctx->pc = 0x1cdac4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1cdac8u;
    return;
}
