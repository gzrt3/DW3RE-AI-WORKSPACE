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


void FUN_0017faa0_part160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1cdac8u: goto label_1cdac8;
        case 0x1cdaccu: goto label_1cdacc;
        case 0x1cdad0u: goto label_1cdad0;
        case 0x1cdad4u: goto label_1cdad4;
        case 0x1cdad8u: goto label_1cdad8;
        case 0x1cdadcu: goto label_1cdadc;
        case 0x1cdae0u: goto label_1cdae0;
        case 0x1cdae4u: goto label_1cdae4;
        case 0x1cdae8u: goto label_1cdae8;
        case 0x1cdaecu: goto label_1cdaec;
        case 0x1cdaf0u: goto label_1cdaf0;
        case 0x1cdaf4u: goto label_1cdaf4;
        case 0x1cdaf8u: goto label_1cdaf8;
        case 0x1cdafcu: goto label_1cdafc;
        case 0x1cdb00u: goto label_1cdb00;
        case 0x1cdb04u: goto label_1cdb04;
        case 0x1cdb08u: goto label_1cdb08;
        case 0x1cdb0cu: goto label_1cdb0c;
        case 0x1cdb10u: goto label_1cdb10;
        case 0x1cdb14u: goto label_1cdb14;
        case 0x1cdb18u: goto label_1cdb18;
        case 0x1cdb1cu: goto label_1cdb1c;
        case 0x1cdb20u: goto label_1cdb20;
        case 0x1cdb24u: goto label_1cdb24;
        case 0x1cdb28u: goto label_1cdb28;
        case 0x1cdb2cu: goto label_1cdb2c;
        case 0x1cdb30u: goto label_1cdb30;
        case 0x1cdb34u: goto label_1cdb34;
        case 0x1cdb38u: goto label_1cdb38;
        case 0x1cdb3cu: goto label_1cdb3c;
        case 0x1cdb40u: goto label_1cdb40;
        case 0x1cdb44u: goto label_1cdb44;
        case 0x1cdb48u: goto label_1cdb48;
        case 0x1cdb4cu: goto label_1cdb4c;
        case 0x1cdb50u: goto label_1cdb50;
        case 0x1cdb54u: goto label_1cdb54;
        case 0x1cdb58u: goto label_1cdb58;
        case 0x1cdb5cu: goto label_1cdb5c;
        case 0x1cdb60u: goto label_1cdb60;
        case 0x1cdb64u: goto label_1cdb64;
        case 0x1cdb68u: goto label_1cdb68;
        case 0x1cdb6cu: goto label_1cdb6c;
        case 0x1cdb70u: goto label_1cdb70;
        case 0x1cdb74u: goto label_1cdb74;
        case 0x1cdb78u: goto label_1cdb78;
        case 0x1cdb7cu: goto label_1cdb7c;
        case 0x1cdb80u: goto label_1cdb80;
        case 0x1cdb84u: goto label_1cdb84;
        case 0x1cdb88u: goto label_1cdb88;
        case 0x1cdb8cu: goto label_1cdb8c;
        case 0x1cdb90u: goto label_1cdb90;
        case 0x1cdb94u: goto label_1cdb94;
        case 0x1cdb98u: goto label_1cdb98;
        case 0x1cdb9cu: goto label_1cdb9c;
        case 0x1cdba0u: goto label_1cdba0;
        case 0x1cdba4u: goto label_1cdba4;
        case 0x1cdba8u: goto label_1cdba8;
        case 0x1cdbacu: goto label_1cdbac;
        case 0x1cdbb0u: goto label_1cdbb0;
        case 0x1cdbb4u: goto label_1cdbb4;
        case 0x1cdbb8u: goto label_1cdbb8;
        case 0x1cdbbcu: goto label_1cdbbc;
        case 0x1cdbc0u: goto label_1cdbc0;
        case 0x1cdbc4u: goto label_1cdbc4;
        case 0x1cdbc8u: goto label_1cdbc8;
        case 0x1cdbccu: goto label_1cdbcc;
        case 0x1cdbd0u: goto label_1cdbd0;
        case 0x1cdbd4u: goto label_1cdbd4;
        case 0x1cdbd8u: goto label_1cdbd8;
        case 0x1cdbdcu: goto label_1cdbdc;
        case 0x1cdbe0u: goto label_1cdbe0;
        case 0x1cdbe4u: goto label_1cdbe4;
        case 0x1cdbe8u: goto label_1cdbe8;
        case 0x1cdbecu: goto label_1cdbec;
        case 0x1cdbf0u: goto label_1cdbf0;
        case 0x1cdbf4u: goto label_1cdbf4;
        case 0x1cdbf8u: goto label_1cdbf8;
        case 0x1cdbfcu: goto label_1cdbfc;
        case 0x1cdc00u: goto label_1cdc00;
        case 0x1cdc04u: goto label_1cdc04;
        case 0x1cdc08u: goto label_1cdc08;
        case 0x1cdc0cu: goto label_1cdc0c;
        case 0x1cdc10u: goto label_1cdc10;
        case 0x1cdc14u: goto label_1cdc14;
        case 0x1cdc18u: goto label_1cdc18;
        case 0x1cdc1cu: goto label_1cdc1c;
        case 0x1cdc20u: goto label_1cdc20;
        case 0x1cdc24u: goto label_1cdc24;
        case 0x1cdc28u: goto label_1cdc28;
        case 0x1cdc2cu: goto label_1cdc2c;
        case 0x1cdc30u: goto label_1cdc30;
        case 0x1cdc34u: goto label_1cdc34;
        case 0x1cdc38u: goto label_1cdc38;
        case 0x1cdc3cu: goto label_1cdc3c;
        case 0x1cdc40u: goto label_1cdc40;
        case 0x1cdc44u: goto label_1cdc44;
        case 0x1cdc48u: goto label_1cdc48;
        case 0x1cdc4cu: goto label_1cdc4c;
        case 0x1cdc50u: goto label_1cdc50;
        case 0x1cdc54u: goto label_1cdc54;
        case 0x1cdc58u: goto label_1cdc58;
        case 0x1cdc5cu: goto label_1cdc5c;
        case 0x1cdc60u: goto label_1cdc60;
        case 0x1cdc64u: goto label_1cdc64;
        case 0x1cdc68u: goto label_1cdc68;
        case 0x1cdc6cu: goto label_1cdc6c;
        case 0x1cdc70u: goto label_1cdc70;
        case 0x1cdc74u: goto label_1cdc74;
        case 0x1cdc78u: goto label_1cdc78;
        case 0x1cdc7cu: goto label_1cdc7c;
        case 0x1cdc80u: goto label_1cdc80;
        case 0x1cdc84u: goto label_1cdc84;
        case 0x1cdc88u: goto label_1cdc88;
        case 0x1cdc8cu: goto label_1cdc8c;
        case 0x1cdc90u: goto label_1cdc90;
        case 0x1cdc94u: goto label_1cdc94;
        case 0x1cdc98u: goto label_1cdc98;
        case 0x1cdc9cu: goto label_1cdc9c;
        default: return;
    }

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
    { ctx->pc = 0x191a30; return; }
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
    { ctx->pc = 0x191a30; return; }
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
    { ctx->pc = 0x191be0; return; }
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
    { ctx->pc = 0x191be0; return; }
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
    { ctx->pc = 0x191a30; return; }
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
    { ctx->pc = 0x191be0; return; }
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
            goto label_1cdb98;
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
label_1cdac8:
    // 0x1cdac8: 0xc08f0cc  jal         func_23C330
label_1cdacc:
    if (ctx->pc == 0x1CDACCu) {
        ctx->pc = 0x1CDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAC8u;
        // 0x1cdacc: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDAD0u;
        goto label_1cdad0;
    }
    ctx->pc = 0x1CDAC8u;
    SET_GPR_U32(ctx, 31, 0x1CDAD0u);
    ctx->pc = 0x1CDACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAC8u;
    // 0x1cdacc: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CDAD0u;
label_1cdad0:
    // 0x1cdad0: 0x920302ea  lbu         $v1, 0x2EA($s0)
    ctx->pc = 0x1cdad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 746)));
label_1cdad4:
    // 0x1cdad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdad8:
    // 0x1cdad8: 0x0  nop
    ctx->pc = 0x1cdad8u;
    // NOP
label_1cdadc:
    // 0x1cdadc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cdadcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cdae0:
    // 0x1cdae0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cdae4:
    // 0x1cdae4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1cdae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1cdae8:
    // 0x1cdae8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cdae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cdaec:
    // 0x1cdaec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdaf0:
    // 0x1cdaf0: 0x0  nop
    ctx->pc = 0x1cdaf0u;
    // NOP
label_1cdaf4:
    // 0x1cdaf4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cdaf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cdaf8:
    // 0x1cdaf8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cdaf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cdafc:
    // 0x1cdafc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cdafcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cdb00:
    // 0x1cdb00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cdb00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cdb04:
    // 0x1cdb04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cdb04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cdb08:
    // 0x1cdb08: 0x0  nop
    ctx->pc = 0x1cdb08u;
    // NOP
label_1cdb0c:
    // 0x1cdb0c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cdb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1cdb10:
    // 0x1cdb10: 0xc08f0cc  jal         func_23C330
label_1cdb14:
    if (ctx->pc == 0x1CDB14u) {
        ctx->pc = 0x1CDB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB10u;
        // 0x1cdb14: 0xa20202e8  sb          $v0, 0x2E8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDB18u;
        goto label_1cdb18;
    }
    ctx->pc = 0x1CDB10u;
    SET_GPR_U32(ctx, 31, 0x1CDB18u);
    ctx->pc = 0x1CDB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB10u;
    // 0x1cdb14: 0xa20202e8  sb          $v0, 0x2E8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CDB18u;
label_1cdb18:
    // 0x1cdb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdb1c:
    // 0x1cdb1c: 0x0  nop
    ctx->pc = 0x1cdb1cu;
    // NOP
label_1cdb20:
    // 0x1cdb20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cdb20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cdb24:
    // 0x1cdb24: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1cdb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1cdb28:
    // 0x1cdb28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cdb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cdb2c:
    // 0x1cdb2c: 0x0  nop
    ctx->pc = 0x1cdb2cu;
    // NOP
label_1cdb30:
    // 0x1cdb30: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1cdb30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1cdb34:
    // 0x1cdb34: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cdb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cdb38:
    // 0x1cdb38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdb38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdb3c:
    // 0x1cdb3c: 0x0  nop
    ctx->pc = 0x1cdb3cu;
    // NOP
label_1cdb40:
    // 0x1cdb40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cdb40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cdb44:
    // 0x1cdb44: 0x0  nop
    ctx->pc = 0x1cdb44u;
    // NOP
label_1cdb48:
    // 0x1cdb48: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1cdb48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1cdb4c:
    // 0x1cdb4c: 0xc08f0cc  jal         func_23C330
label_1cdb50:
    if (ctx->pc == 0x1CDB50u) {
        ctx->pc = 0x1CDB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB4Cu;
        // 0x1cdb50: 0xe6000300  swc1        $f0, 0x300($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDB54u;
        goto label_1cdb54;
    }
    ctx->pc = 0x1CDB4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDB54u);
    ctx->pc = 0x1CDB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB4Cu;
    // 0x1cdb50: 0xe6000300  swc1        $f0, 0x300($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CDB54u;
label_1cdb54:
    // 0x1cdb54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cdb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cdb58:
    // 0x1cdb58: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cdb5c:
    // 0x1cdb5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdb5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdb60:
    // 0x1cdb60: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1cdb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
label_1cdb64:
    // 0x1cdb64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cdb64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cdb68:
    // 0x1cdb68: 0x2484dbb0  addiu       $a0, $a0, -0x2450
    ctx->pc = 0x1cdb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958000));
label_1cdb6c:
    // 0x1cdb6c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1cdb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1cdb70:
    // 0x1cdb70: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x1cdb70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1cdb74:
    // 0x1cdb74: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1cdb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
label_1cdb78:
    // 0x1cdb78: 0x24637180  addiu       $v1, $v1, 0x7180
    ctx->pc = 0x1cdb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29056));
label_1cdb7c:
    // 0x1cdb7c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1cdb7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1cdb80:
    // 0x1cdb80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cdb80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdb84:
    // 0x1cdb84: 0x0  nop
    ctx->pc = 0x1cdb84u;
    // NOP
label_1cdb88:
    // 0x1cdb88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cdb88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cdb8c:
    // 0x1cdb8c: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x1cdb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
label_1cdb90:
    // 0x1cdb90: 0xae040364  sw          $a0, 0x364($s0)
    ctx->pc = 0x1cdb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 4));
label_1cdb94:
    // 0x1cdb94: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x1cdb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
label_1cdb98:
    // 0x1cdb98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cdb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cdb9c:
    // 0x1cdb9c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cdb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cdba0:
    // 0x1cdba0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cdba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cdba4:
    // 0x1cdba4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cdba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cdba8:
    // 0x1cdba8: 0x3e00008  jr          $ra
label_1cdbac:
    if (ctx->pc == 0x1CDBACu) {
        ctx->pc = 0x1CDBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBA8u;
        // 0x1cdbac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBB0u;
        goto label_1cdbb0;
    }
    ctx->pc = 0x1CDBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBA8u;
        // 0x1cdbac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDBB0u;
label_1cdbb0:
    // 0x1cdbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cdbb4:
    // 0x1cdbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cdbb8:
    // 0x1cdbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cdbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cdbbc:
    // 0x1cdbbc: 0xc071740  jal         func_1C5D00
label_1cdbc0:
    if (ctx->pc == 0x1CDBC0u) {
        ctx->pc = 0x1CDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBBCu;
        // 0x1cdbc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBC4u;
        goto label_1cdbc4;
    }
    ctx->pc = 0x1CDBBCu;
    SET_GPR_U32(ctx, 31, 0x1CDBC4u);
    ctx->pc = 0x1CDBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBBCu;
    // 0x1cdbc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    { ctx->pc = 0x1c5d00; return; }
    ctx->pc = 0x1CDBC4u;
label_1cdbc4:
    // 0x1cdbc4: 0xc071728  jal         func_1C5CA0
label_1cdbc8:
    if (ctx->pc == 0x1CDBC8u) {
        ctx->pc = 0x1CDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBC4u;
        // 0x1cdbc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBCCu;
        goto label_1cdbcc;
    }
    ctx->pc = 0x1CDBC4u;
    SET_GPR_U32(ctx, 31, 0x1CDBCCu);
    ctx->pc = 0x1CDBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBC4u;
    // 0x1cdbc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    { ctx->pc = 0x1c5ca0; return; }
    ctx->pc = 0x1CDBCCu;
label_1cdbcc:
    // 0x1cdbcc: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x1cdbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdbd0:
    // 0x1cdbd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdbd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdbd4:
    // 0x1cdbd4: 0x0  nop
    ctx->pc = 0x1cdbd4u;
    // NOP
label_1cdbd8:
    // 0x1cdbd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cdbd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cdbdc:
    // 0x1cdbdc: 0x0  nop
    ctx->pc = 0x1cdbdcu;
    // NOP
label_1cdbe0:
    // 0x1cdbe0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1cdbe4:
    if (ctx->pc == 0x1CDBE4u) {
        ctx->pc = 0x1CDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE0u;
        // 0x1cdbe4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBE8u;
        goto label_1cdbe8;
    }
    ctx->pc = 0x1CDBE0u;
    {
        const bool branch_taken_0x1cdbe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE0u;
        // 0x1cdbe4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbe0) {
            ctx->pc = 0x1CDBFCu;
            goto label_1cdbfc;
        }
    }
    ctx->pc = 0x1CDBE8u;
label_1cdbe8:
    // 0x1cdbe8: 0xc0591f4  jal         func_1647D0
label_1cdbec:
    if (ctx->pc == 0x1CDBECu) {
        ctx->pc = 0x1CDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE8u;
        // 0x1cdbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBF0u;
        goto label_1cdbf0;
    }
    ctx->pc = 0x1CDBE8u;
    SET_GPR_U32(ctx, 31, 0x1CDBF0u);
    ctx->pc = 0x1CDBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBE8u;
    // 0x1cdbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CDBE8u, 0x1CDBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBF0u;
label_1cdbf0:
    // 0x1cdbf0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1cdbf4:
    if (ctx->pc == 0x1CDBF4u) {
        ctx->pc = 0x1CDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF0u;
        // 0x1cdbf4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBF8u;
        goto label_1cdbf8;
    }
    ctx->pc = 0x1CDBF0u;
    {
        const bool branch_taken_0x1cdbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF0u;
        // 0x1cdbf4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbf0) {
            ctx->pc = 0x1CDC6Cu;
            goto label_1cdc6c;
        }
    }
    ctx->pc = 0x1CDBF8u;
label_1cdbf8:
    // 0x1cdbf8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cdbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1cdbfc:
    // 0x1cdbfc: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x1cdbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_1cdc00:
    // 0x1cdc00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdc00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdc04:
    // 0x1cdc04: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1cdc04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cdc08:
    // 0x1cdc08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cdc08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cdc0c:
    // 0x1cdc0c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1cdc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_1cdc10:
    // 0x1cdc10: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x1cdc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
label_1cdc14:
    // 0x1cdc14: 0xc6020300  lwc1        $f2, 0x300($s0)
    ctx->pc = 0x1cdc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cdc18:
    // 0x1cdc18: 0xc6010254  lwc1        $f1, 0x254($s0)
    ctx->pc = 0x1cdc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdc1c:
    // 0x1cdc1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdc20:
    // 0x1cdc20: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1cdc20u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_1cdc24:
    // 0x1cdc24: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1cdc24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1cdc28:
    // 0x1cdc28: 0xe6010254  swc1        $f1, 0x254($s0)
    ctx->pc = 0x1cdc28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 596), bits); }
label_1cdc2c:
    // 0x1cdc2c: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x1cdc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdc30:
    // 0x1cdc30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cdc30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cdc34:
    // 0x1cdc34: 0x0  nop
    ctx->pc = 0x1cdc34u;
    // NOP
label_1cdc38:
    // 0x1cdc38: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1cdc3c:
    if (ctx->pc == 0x1CDC3Cu) {
        ctx->pc = 0x1CDC40u;
        goto label_1cdc40;
    }
    ctx->pc = 0x1CDC38u;
    {
        const bool branch_taken_0x1cdc38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdc38) {
            ctx->pc = 0x1CDC68u;
            goto label_1cdc68;
        }
    }
    ctx->pc = 0x1CDC40u;
label_1cdc40:
    // 0x1cdc40: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x1cdc40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1cdc44:
    // 0x1cdc44: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1cdc44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cdc48:
    // 0x1cdc48: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1cdc4c:
    if (ctx->pc == 0x1CDC4Cu) {
        ctx->pc = 0x1CDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC48u;
        // 0x1cdc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC50u;
        goto label_1cdc50;
    }
    ctx->pc = 0x1CDC48u;
    {
        const bool branch_taken_0x1cdc48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC48u;
        // 0x1cdc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc48) {
            ctx->pc = 0x1CDC60u;
            goto label_1cdc60;
        }
    }
    ctx->pc = 0x1CDC50u;
label_1cdc50:
    // 0x1cdc50: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x1cdc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1cdc54:
    // 0x1cdc54: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cdc58:
    if (ctx->pc == 0x1CDC58u) {
        ctx->pc = 0x1CDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC54u;
        // 0x1cdc58: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC5Cu;
        goto label_1cdc5c;
    }
    ctx->pc = 0x1CDC54u;
    {
        const bool branch_taken_0x1cdc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC54u;
        // 0x1cdc58: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc54) {
            ctx->pc = 0x1CDC68u;
            goto label_1cdc68;
        }
    }
    ctx->pc = 0x1CDC5Cu;
label_1cdc5c:
    // 0x1cdc5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cdc60:
    // 0x1cdc60: 0xc0591f4  jal         func_1647D0
label_1cdc64:
    if (ctx->pc == 0x1CDC64u) {
        ctx->pc = 0x1CDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC60u;
        // 0x1cdc64: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC68u;
        goto label_1cdc68;
    }
    ctx->pc = 0x1CDC60u;
    SET_GPR_U32(ctx, 31, 0x1CDC68u);
    ctx->pc = 0x1CDC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC60u;
    // 0x1cdc64: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CDC60u, 0x1CDC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC68u;
label_1cdc68:
    // 0x1cdc68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cdc6c:
    // 0x1cdc6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cdc6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdc70:
    // 0x1cdc70: 0x3e00008  jr          $ra
label_1cdc74:
    if (ctx->pc == 0x1CDC74u) {
        ctx->pc = 0x1CDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC70u;
        // 0x1cdc74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC78u;
        goto label_1cdc78;
    }
    ctx->pc = 0x1CDC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC70u;
        // 0x1cdc74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC78u;
label_1cdc78:
    // 0x1cdc78: 0x0  nop
    ctx->pc = 0x1cdc78u;
    // NOP
label_1cdc7c:
    // 0x1cdc7c: 0x0  nop
    ctx->pc = 0x1cdc7cu;
    // NOP
label_1cdc80:
    // 0x1cdc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cdc84:
    // 0x1cdc84: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cdc88:
    // 0x1cdc88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cdc8c:
    // 0x1cdc8c: 0x244290e0  addiu       $v0, $v0, -0x6F20
    ctx->pc = 0x1cdc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
label_1cdc90:
    // 0x1cdc90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cdc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cdc94:
    // 0x1cdc94: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1cdc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cdc98:
    // 0x1cdc98: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1cdc98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdc9c:
    // 0x1cdc9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cdca0u;
    return;
}
